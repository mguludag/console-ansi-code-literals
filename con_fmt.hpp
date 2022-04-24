#ifndef CON_FMT_HPP
#define CON_FMT_HPP
namespace con_fmt_literals {
namespace fg {
static constexpr char reset[]            = "\u001b[0m";
static constexpr char black[]            = "\u001b[30m";
static constexpr char red[]              = "\u001b[31m";
static constexpr char green[]            = "\u001b[32m";
static constexpr char yellow[]           = "\u001b[33m";
static constexpr char blue[]             = "\u001b[34m";
static constexpr char magenta[]          = "\u001b[35m";
static constexpr char cyan[]             = "\u001b[36m";
static constexpr char white[]            = "\u001b[37m";
static constexpr char bright_black[]     = "\u001b[90m";
static constexpr char bright_red[]       = "\u001b[91m";
static constexpr char bright_green[]     = "\u001b[92m";
static constexpr char bright_yellow[]    = "\u001b[93m";
static constexpr char bright_blue[]      = "\u001b[94m";
static constexpr char bright_magenta[]   = "\u001b[95m";
static constexpr char bright_cyan[]      = "\u001b[96m";
static constexpr char bright_white[]     = "\u001b[97m";
}

namespace bg {
static constexpr char reset[]            = "\u001b[0m";
static constexpr char black[]            = "\u001b[40m";
static constexpr char red[]              = "\u001b[41m";
static constexpr char green[]            = "\u001b[42m";
static constexpr char yellow[]           = "\u001b[43m";
static constexpr char blue[]             = "\u001b[44m";
static constexpr char magenta[]          = "\u001b[45m";
static constexpr char cyan[]             = "\u001b[46m";
static constexpr char white[]            = "\u001b[47m";
static constexpr char bright_black[]     = "\u001b[100m";
static constexpr char bright_red[]       = "\u001b[101m";
static constexpr char bright_green[]     = "\u001b[102m";
static constexpr char bright_yellow[]    = "\u001b[103m";
static constexpr char bright_blue[]      = "\u001b[104m";
static constexpr char bright_magenta[]   = "\u001b[105m";
static constexpr char bright_cyan[]      = "\u001b[106m";
static constexpr char bright_white[]     = "\u001b[107m";
}

namespace em {
static constexpr char reset[]            = "\u001b[0m";
static constexpr char bold[]             = "\x1b[01m";
static constexpr char faint[]            = "\x1b[02m";
static constexpr char italic[]           = "\x1b[03m";
static constexpr char underline[]        = "\x1b[04m";
static constexpr char blink[]            = "\x1b[05m";
static constexpr char reverse[]          = "\x1b[07m";
static constexpr char conceal[]          = "\x1b[08m";
static constexpr char strikethrough[]    = "\x1b[09m";
}
}
#endif // CON_FMT_HPP
