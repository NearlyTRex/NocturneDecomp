#pragma once

#include "engine/2d/2d.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/memoryfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>

namespace nocturne::engine {

// A file that hands what was written to it back to the test once it is closed.
class CRecordingFile : public platform::CMemoryFile {
public:
    explicit CRecordingFile(std::string &written) : written_(written) {}
    CRecordingFile(const CRecordingFile &) = delete;
    CRecordingFile &operator=(const CRecordingFile &) = delete;
    CRecordingFile(CRecordingFile &&) = delete;
    CRecordingFile &operator=(CRecordingFile &&) = delete;
    ~CRecordingFile() override {
        written_ = contents();
    }

private:
    std::string &written_;
};

// A C2d over the pod fixture's disk and a mock screen.
class C2dFixture : public CPodFixture {
protected:
    // 256 greys, entry i being (i, i, i).
    static std::string greyPalette() {
        std::string palette;
        for (int i = 0; i < 256; ++i) {
            palette.append(3, static_cast<char>(i));
        }
        return palette;
    }

    // Writes to name are recorded into written.
    void givenWritable(const std::string &name, std::string &written) {
        ON_CALL(file_system_, openFile(std::string_view(name), platform::EFileMode::Write))
            .WillByDefault([&written](std::string_view, platform::EFileMode) {
                return std::make_unique<CRecordingFile>(written);
            });
    }

    void expectNothingWritten() {
        EXPECT_CALL(file_system_, openFile(::testing::_, platform::EFileMode::Read))
            .Times(::testing::AnyNumber());
        EXPECT_CALL(file_system_, openFile(::testing::_, platform::EFileMode::Write)).Times(0);
    }

    void loadGreyPalette() {
        givenFile("art\\vga.act", greyPalette());
        two_d_.loadPaletteFile("vga.act");
    }

    ::testing::NiceMock<MockScreenDevice> screen_;
    ::testing::NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
};

} // namespace nocturne::engine
