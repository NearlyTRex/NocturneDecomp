#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "engine/pcx/pcx.h"
#include "tests/mocks/common/pngimage.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::string_view kName = "demon1.png";

// A file that takes what is written and says it failed.
class CFailingFile : public platform::CMemoryFile {
public:
    bool write(std::span<const std::byte>) override {
        return false;
    }
};

class SaveScreenshotTest : public CPodFixture {
protected:
    SaveScreenshotTest() {
        ON_CALL(file_system_, openFile(kName, platform::EFileMode::Write))
            .WillByDefault([this](std::string_view, platform::EFileMode) {
                return std::make_unique<CRecordingFile>(written_);
            });
    }

    // The picture the screenshot left, read back.
    [[nodiscard]] common::SPngImage save(CMemoryScreen &screen) {
        const C2d two_d(dosio_, screen, raw_input_);
        saveScreenshotGeneral(screen, two_d, dosio_, kName);
        const std::vector<std::uint8_t> bytes(written_.begin(), written_.end());
        const std::optional<common::SPngImage> image = common::readPng(bytes);
        return image.value_or(common::SPngImage{});
    }

    static void setPixel(CMemoryScreen &screen, int x, int y, std::uint32_t value) {
        void *row = screen.getScreenRows()[static_cast<std::size_t>(y)];
        if (screen.getBitsPerPixel() == 16) {
            static_cast<std::uint16_t *>(row)[x] = static_cast<std::uint16_t>(value);
        } else {
            static_cast<std::uint32_t *>(row)[x] = value;
        }
    }

    NiceMock<MockRawInput> raw_input_;
    std::string written_;
};

TEST_F(SaveScreenshotTest, AThirtyTwoBitScreenIsWrittenPixelForPixel) {
    CMemoryScreen screen(3, 2, 32);
    screen.fill(0x102030);
    setPixel(screen, 2, 1, 0xff0080);
    const common::SPngImage image = save(screen);
    EXPECT_EQ(image.width, 3);
    EXPECT_EQ(image.height, 2);
    EXPECT_EQ(image.pixel(0, 0), 0x102030U);
    EXPECT_EQ(image.pixel(2, 1), 0xff0080U);
}

// Five and six bits each widened to eight, full staying full.
TEST_F(SaveScreenshotTest, ASixteenBitScreensLevelsAreWidenedToEightBits) {
    CMemoryScreen screen(2, 1, 16);
    screen.fill(0);
    setPixel(screen, 1, 0, CMemoryScreen::pack16(0xff, 0x80, 0x08));
    const common::SPngImage image = save(screen);
    EXPECT_EQ(image.pixel(0, 0), 0x000000U);
    EXPECT_EQ(image.pixel(1, 0), 0xff8208U);
}

TEST_F(SaveScreenshotTest, AnEightBitScreensColoursAreThePalettes) {
    std::string palette(768, '\0');
    palette.replace(3, 3, "\x0a\x14\x1e");
    givenFile("art\\vga.act", palette);
    CMemoryScreen screen(2, 1, 8);
    screen.fill(1);
    C2d two_d(dosio_, screen, raw_input_);
    two_d.loadPaletteFile("vga.act");
    saveScreenshotGeneral(screen, two_d, dosio_, kName);
    const std::vector<std::uint8_t> bytes(written_.begin(), written_.end());
    const std::optional<common::SPngImage> image = common::readPng(bytes);
    ASSERT_TRUE(image.has_value());
    EXPECT_EQ(image->pixel(1, 0), 0x0a141eU);
}

TEST_F(SaveScreenshotTest, AHalfHeightScreenIsWrittenWithEachRowTwice) {
    CMemoryScreen screen(640, 240, 32);
    screen.fill(0);
    setPixel(screen, 5, 1, 0xabcdef);
    const common::SPngImage image = save(screen);
    EXPECT_EQ(image.height, 480);
    EXPECT_EQ(image.pixel(5, 1), 0U);
    EXPECT_EQ(image.pixel(5, 2), 0xabcdefU);
    EXPECT_EQ(image.pixel(5, 3), 0xabcdefU);
    EXPECT_EQ(image.pixel(5, 4), 0U);
}

TEST_F(SaveScreenshotTest, AScreenOnlyAsWideAsAHalfHeightOneIsWrittenOnce) {
    CMemoryScreen screen(640, 2, 32);
    screen.fill(0);
    EXPECT_EQ(save(screen).height, 2);
}

TEST_F(SaveScreenshotTest, AFileThatWontOpenIsFatal) {
    ON_CALL(file_system_, openFile(kName, platform::EFileMode::Write))
        .WillByDefault(::testing::ReturnNull());
    CMemoryScreen screen(2, 1, 32);
    EXPECT_THAT([&] { static_cast<void>(save(screen)); },
                ThrowsMessage<common::CFatalError>(StrEq("Cannot write .PNG")));
}

TEST_F(SaveScreenshotTest, AFileThatWontTakeThePictureIsFatal) {
    ON_CALL(file_system_, openFile(kName, platform::EFileMode::Write))
        .WillByDefault(
            [](std::string_view, platform::EFileMode) { return std::make_unique<CFailingFile>(); });
    CMemoryScreen screen(2, 1, 32);
    EXPECT_THAT([&] { static_cast<void>(save(screen)); },
                ThrowsMessage<common::CFatalError>(StrEq("Cannot write .PNG")));
}

TEST_F(SaveScreenshotTest, AnEmptyScreenIsFatal) {
    CMemoryScreen screen(0, 0, 32);
    EXPECT_THAT([&] { static_cast<void>(save(screen)); },
                ThrowsMessage<common::CFatalError>(StrEq("Cannot write .PNG")));
}

} // namespace
} // namespace nocturne::engine
