#ifndef __ASCII__
#define __ASCII__

#define C_NONE         ""
#define C_FG_BLACK     "\x1b[30;1m"
#define C_FG_RED       "\x1b[31;1m"
#define C_FG_GREEN     "\x1b[32;1m"
#define C_FG_YELLOW    "\x1b[33;1m"
#define C_FG_BLUE      "\x1b[34;1m"
#define C_FG_MAGENTA   "\x1b[35;1m"
#define C_FG_CYAN      "\x1b[36;1m"
#define C_FG_WHITE     "\x1b[37;1m"
#define C_BG_BLACK     "\x1b[40;1m"
#define C_BG_RED       "\x1b[41;1m"
#define C_BG_GREEN     "\x1b[42;1m"
#define C_BG_YELLOW    "\x1b[43;1m"
#define C_BG_BLUE      "\x1b[44;1m"
#define C_BG_MAGENTA   "\x1b[45;1m"
#define C_BG_CYAN      "\x1b[46;1m"
#define C_BG_WHITE     "\x1b[47;1m"
#define C_FG_B_BLACK   "\x1b[90;1m"
#define C_FG_B_RED     "\x1b[91;1m"
#define C_FG_B_GREEN   "\x1b[92;1m"
#define C_FG_B_YELLOW  "\x1b[93;1m"
#define C_FG_B_BLUE    "\x1b[94;1m"
#define C_FG_B_MAGENTA "\x1b[95;1m"
#define C_FG_B_CYAN    "\x1b[96;1m"
#define C_FG_B_WHITE   "\x1b[97;1m"
#define C_RESET        "\x1b[m"

struct ascii_logo {
  const char* art;
  uint32_t width;
  uint32_t height;
  bool replace_blocks;
  char color_ascii[8][100];
  char color_text[2][100];
};

// SHORT LOGOS //
#define ASCII_NVIDIA \
"$C1               'cccccccccccccccccccccccccc   \
$C1               ;oooooooooooooooooooooooool   \
$C1           .:::.     .oooooooooooooooooool   \
$C1      .:cll;   ,c:::.     cooooooooooooool   \
$C1   ,clo'      ;.   oolc:     ooooooooooool   \
$C1.cloo    ;cclo .      .olc.    coooooooool   \
$C1oooo   :lo,    ;ll;    looc    :oooooooool   \
$C1 oooc   ool.   ;oooc;clol    :looooooooool   \
$C1  :ooc   ,ol;  ;oooooo.   .cloo;     loool   \
$C1    ool;   .olc.       ,:lool        .lool   \
$C1      ool:.    ,::::ccloo.        :clooool   \
$C1         oolc::.            ':cclooooooool   \
$C1               ;oooooooooooooooooooooooool   \
$C1                                             \
$C1                                             \
$C2######.  ##   ##  ##  ######   ##    ###     \
$C2##   ##  ##   ##  ##  ##   ##  ##   #: :#    \
$C2##   ##   ## ##   ##  ##   ##  ##  #######   \
$C2##   ##    ###    ##  ######   ## ##     ##  "

#define ASCII_INTEL \
"$C1                   .#################.          \
$C1              .####                   ####.     \
$C1          .##                             ###   \
$C1       ##                          :##     ###  \
$C1    #                ##            :##      ##  \
$C1  ##   ##  ######.   ####  ######  :##      ##  \
$C1 ##    ##  ##:  ##:  ##   ##   ### :##     ###  \
$C1##     ##  ##:  ##:  ##  :######## :##    ##    \
$C1##     ##  ##:  ##:  ##   ##.   .  :## ####     \
$C1##      #  ##:  ##:  ####  #####:   ##          \
$C1 ##                                             \
$C1  ###.                         ..o####.         \
$C1   ######oo...         ..oo#######              \
$C1          o###############o                     "

// LONG LOGOS
#define ASCII_NVIDIA_L \
"$C1                  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM  \
$C1                  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM  \
$C1                .::   'MMMMMMMMMMMMMMMMMMMMMMMMM  \
$C1           ccllooo;:;.       ;MMMMMMMMMMMMMMMMMM  \
$C1       cloc       :ooollcc:     :MMMMMMMMMMMMMMM  \
$C1    cloc      :ccl;      lolc,     ;MMMMMMMMMMMM  \
$C1.cloo:    :clo    ;c:      .ool;     MMMMMMMMMMM  \
$C1  ooo:    ooo     :ool,  .cloo.    ;lMMMMMMMMMMM  \
$C1   ooo:    ooc    :ooooccooo.    :MMMM  lMMMMMMM  \
$C1     ooc.   ool:  :oooooo'    ,cloo.        MMMM  \
$C1      ool:.    olc:       .:cloo.          :MMMM  \
$C1         olc,     ;:::cccloo.          :MMMMMMMM  \
$C1            olcc::;              ,:ccloMMMMMMMMM  \
$C1                  :......oMMMMMMMMMMMMMMMMMMMMMM  \
$C1                  :lllMMMMMMMMMMMMMMMMMMMMMMMMMM  "

#define ASCII_INTEL_L \
"$C1                               ###############@               \
$C1                       ######@                ######@         \
$C1                  ###@                              ###@      \
$C1              ##@                                     ###@    \
$C1         ##@                                             ##@  \
$C1         ##@                                             ##@  \
$C1      @                    ##@                ##@        ##@  \
$C1    #@   ##@   ########@   #####@   #####@    ##@        ##@  \
$C1   #@    ##@   ##@    ##@  ##@    ###@  ###@  ##@        ##@  \
$C1  #@     ##@   ##@    ##@  ##@    ##@    ##@  ##@       ##@   \
$C1 #@      ##@   ##@    ##@  ##@    #########@  ##@     ###@    \
$C1 #@      ##@   ##@    ##@  ##@    ##@         ##@   ####@     \
$C1 #@       #@   ##@    ##@   ####@  ########@   #@  ##@        \
$C1 ##@                                                          \
$C1  ##@                                                         \
$C1  ###@                                        ###@            \
$C1    ####@                               #########@            \
$C1      #########@               ###############@               \
$C1          ##############################@                     "

typedef struct ascii_logo asciiL;

//                      ------------------------------------------------------------------------------------------
//                      | LOGO            | W | H | REPLACE | COLORS LOGO           | COLORS TEXT                |
//                      ------------------------------------------------------------------------------------------
asciiL logo_nvidia    = { ASCII_NVIDIA,    45, 19, false, {C_FG_GREEN, C_FG_WHITE}, {C_FG_WHITE, C_FG_GREEN} };
asciiL logo_intel     = { ASCII_INTEL,     48, 14, false, {C_FG_CYAN},              {C_FG_CYAN,  C_FG_WHITE} };
// Long variants        | ---------------------------------------------------------------------------------------|
asciiL logo_nvidia_l  = { ASCII_NVIDIA_L,  50, 15, false, {C_FG_GREEN, C_FG_WHITE}, {C_FG_WHITE, C_FG_GREEN} };
asciiL logo_intel_l   = { ASCII_INTEL_L,   62, 19, true,  {C_BG_CYAN, C_BG_WHITE},  {C_FG_CYAN,  C_FG_WHITE} };
asciiL logo_unknown   = { NULL,            0,  0,  false, {C_NONE},                 {C_NONE,     C_NONE}     };

#endif
