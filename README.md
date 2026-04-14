🎯 Smart Number Guessing Game in C

A simple yet intelligent number guessing game written in C.
Unlike basic guessing games, this version gives directional hints using a binary search approach, helping the player narrow down the correct number efficiently.

---

🚀 Features

- 🎲 Random number generation (0–100)
- 🔟 Limited attempts (10 chances)
- 🧠 Smart hints based on range narrowing
- 📉 Dynamic adjustment of search boundaries ("low", "high", "mid")
- ⚡ Binary-search-inspired feedback system
- 🖥️ Simple terminal-based gameplay

---

🛠️ How It Works

1. The program generates a random number between 0 and 100.
2. The player gets 10 chances to guess the number.
3. The system maintains:
   - "low" → lower bound
   - "high" → upper bound
   - "mid" → midpoint of current range
4. Based on your guess:
   - If you're in the correct half, it says you're close
   - If not, it warns you're on the wrong track
5. The range updates dynamically to guide your next guess.

---

📦 Compilation & Run

Compile:

gcc game.c -o game

Run:

./game

---

🎮 Example Gameplay

You have 10 chances left
Enter Your number: 30
You are in right domain very close

You have 9 chances left
Enter Your number: 45
You are in wrong track, try something between 0 to 50

---

📂 Code Highlights

- "rand() % 101" → Generates number between 0–100
- "srand(time(0))" → Seeds randomness
- Dynamic range narrowing using:
  mid = (low + high) / 2;
- Conditional logic compares:
  - User guess vs midpoint
  - Actual number vs midpoint

---

⚠️ Known Issues / Improvements

- Hint logic can sometimes feel inconsistent
- Spelling errors like ""Wong track"" → should be ""Wrong track""
- Midpoint updates could be simplified
- Logic can be improved for clearer feedback

---

💡 Future Improvements

- Add difficulty levels (easy / medium / hard)
- Track score based on attempts
- Add replay option
- Convert to GUI (using C libraries or Python)
- Improve hint clarity

---

🤝 Contributing

Feel free to fork this repo, improve the logic, and submit a pull request!

---

📜 License

This project is open-source and free to use.
