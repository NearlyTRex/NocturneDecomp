#include "common/text/asctime.h"

#include <array>

namespace nocturne::common {

std::string formatAsctime(const std::tm &time) {
    std::array<char, 32> text{};
    const std::size_t length =
        std::strftime(text.data(), text.size(), "%a %b %e %H:%M:%S %Y\n", &time);
    return {text.data(), length};
}

} // namespace nocturne::common
