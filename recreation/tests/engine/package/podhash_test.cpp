#include "engine/package/podhash.h"
#include "tests/mocks/engine/packagefiles.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <optional>
#include <string>

namespace nocturne::engine {
namespace {

// Expected values from Python's xxhash.xxh3_128().hexdigest().
TEST(PodHash, IsTheFilesXxh3OneTwentyEightInCanonicalHex) {
    CPackageFiles files;
    files.givenFile("empty.pod", "");
    files.givenFile("abc.pod", "abc");
    EXPECT_EQ(hashFile(files.file_system_, "empty.pod"), "99aa06d3014798d86001c324468d497f");
    EXPECT_EQ(hashFile(files.file_system_, "abc.pod"), "06b05ab6733a618578af5f94892f3950");
}

TEST(PodHash, AFileLongerThanABlockIsHashedWhole) {
    CPackageFiles files;
    files.givenFile("long.pod", std::string((std::size_t{1} << 20U) + 5, 'x'));
    EXPECT_EQ(hashFile(files.file_system_, "long.pod"), "b01f2fd1173860d2d077d9973862a107");
}

TEST(PodHash, AFileThatCantBeOpenedHasNone) {
    CPackageFiles files;
    EXPECT_EQ(hashFile(files.file_system_, "gone.pod"), std::nullopt);
}

} // namespace
} // namespace nocturne::engine
