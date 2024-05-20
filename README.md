# Readme for CS F363: Compiler Construction
This repository contains the code for the course CS F363: Compiler Construction at BITS Pilani. The code is written in Python and the course is taught by [Dr Ramprasad Joshi](https://www.bits-pilani.ac.in/goa/ramprasad-savlaram-joshi/).

## Contents
1. [gameEngine](gameEngine/): A simple game engine that can be used to create text-based games. (provided by the instructor)
2. [parser](a2version2.y): A parser developed during the course.
3. [scanner](extetrickscanner.l): A scanner developed during the course.
4. [Makefile](Makefile): A makefile to build the project, test it on sample inputs.
5. [README.md](README.md): This file.

## Usage
1. Clone the repository.
1. Run `make clean` to remove any previous builds.
2. Run `make build` to build the project.
3. Run `make test` to test the project on sample inputs.
4. Run `make run` to run the project.

## Images
<table>
  <tr>
    <td><img src="https://github.com/Nandish02/Tetris-Compiler-Construction/assets/94218870/0c79ec57-a95d-41c1-8e88-07110dd7a1a1" alt="1stpage"></td>
    <td><img src="https://github.com/Nandish02/Tetris-Compiler-Construction/assets/94218870/2d097c89-28ad-4ec8-b6ad-2e27317dbe3e" alt="2ndpage"></td>
    <td><img src="https://github.com/Nandish02/Tetris-Compiler-Construction/assets/94218870/d9493851-2887-4926-9848-995e82b74a05"></td>
  </tr>
</table>

## Features of the tetris game implemented 

- **New Game:** Start a fresh game session.
- **Pause:** Temporarily halt the current game.
- **Save State:** Save the current game state to continue later.
- **Exit/Quit:** Close the game application.
- **About:** View information about the game and its development.

- **Score Display:** The player's score is displayed as "Number of lines cleared = [Score]."

- **Game Over:** The game ends when no more moves are possible, and a "Game Over" message is displayed.

## Acknowledgements
The code for the game engine is provided by the instructor. The code for the parser and scanner is developed in discussion with the following students:
1. [Shreyas V](http://shreyasvinaya.github.io/) (2020B2A71350G)
2. Shah Rahil Kirankumar (2020B2A71677G)
3. Pranav Srikanth (2020B5A71865G)
4. [Nandish Chokshi](https://github.com/Nandish02) (2020B1A72031G)
5. Anish Sreenivas (2020B3A71464G)
