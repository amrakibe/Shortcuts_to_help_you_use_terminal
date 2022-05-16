set number
syntax on
set autoindent
set mouse=a
set ruler
set undodir=~/.vim/undodir
set undofile

let mapleader = " "
nmap <leader>q :q<cr>
nmap <leader>w :w<cr>
nmap <leader>c :! clear && gcc -Wall -Wextra -Werror % -o %:r && ./%:r<cr>
nmap <leader>n :! clear && norminette <cr>
code () { VSCODE_CWD="$PWD" open -n -b "com.microsoft.VSCode" --args $* ;}

