#include "platform/processheap.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <vector>

namespace nocturne::platform {
namespace {

using ::testing::MatchesRegex;

// glibc's account, or AddressSanitizer's in a sanitizer build.
TEST(CProcessHeap, SaysWhatIsInUseAndFree) {
    CProcessHeap heap;
    EXPECT_THAT(heap.describe(), MatchesRegex("Used: [0-9]+\\.[0-9]k Free: [0-9]+\\.[0-9]k "
                                              "(Blocks: [0-9]+|Heap: [0-9]+\\.[0-9]k)"));
}

// A large block counts as in use, whether the arena holds it or a mapping of its own does.
TEST(CProcessHeap, ALargeBlockIsCountedAsInUse) {
    CProcessHeap heap;
    const auto used = [&heap] {
        const std::string line = heap.describe();
        return std::stod(line.substr(line.find(' ') + 1));
    };
    const double before = used();
    const auto block = std::make_unique<std::vector<char>>(std::size_t{4} << 20U);
    EXPECT_GE(used(), before + 4096.0);
    EXPECT_FALSE(block->empty());
}

} // namespace
} // namespace nocturne::platform
