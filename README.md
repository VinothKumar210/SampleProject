This assignment covers fundamental Git operations including initialization, staging, and the initial commit. Below is the detailed breakdown for each phase.

### Phase 1: Initialization and Setup
**Description:** This phase involves installing Git, configuring user credentials, creating the initial set of project files, and initializing the Git repository.

1.  **Git Installation**: Ensure Git is installed and accessible from the command line.
2.  **User Configuration**:
    *   Set the global username using `git config --global user.name "[NAME]"`.
    *   Set the global user email using `git config --global user.email [EMAIL_ADDRESS]`.
3.  **File Creation**: Create the following files in the project directory:
    *   `README.md`: A Markdown file for project documentation.
    *   `notes.txt`: A text file for general notes.
    *   `main.cpp`: A basic C++ source file.
4.  **Repository Initialization**: Execute `git init` to initialize a new Git repository in the current directory.

![Phase 1 Screenshot](./Screenshot/img1.jpg)

### Phase 2: Basic Git Operations
**Description:** This phase involves checking the repository status, adding a `.gitignore` file, staging project files, committing them, and viewing the commit history.

1.  **Check Status**: Used `git status` to see the untracked files.
2.  **Add .gitignore**: Created a `.gitignore` file to ignore compiled object files and OS generated files.
3.  **Stage Files**: Staged all untracked files using `git add .`.
4.  **Commit**: Committed the staged files using `git commit -m "Initial commit with project files"`.
5.  **View History**: Verified the commit was successfully recorded using `git log`.

![Phase 2 Screenshot](./Screenshot/img2.jpg)