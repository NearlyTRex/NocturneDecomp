#include "engine/keys/inputcodetype.h"
#include "platform/filesystem.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/fileselection.h"
#include "shape/edittool/picklist.h"
#include "shape/edittool/strlist.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <ctime>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::shape {
namespace {

using engine::EInputCodeType;
using ::testing::_;
using ::testing::Return;

constexpr std::uint32_t kWhite = 0xffffff;

// Files on disk under saves, picked from a list on the pick list fixture's screen.
class CFileSelectionTest : public CPickListFixture {
protected:
    void givenFiles(std::vector<platform::SFileInfo> files) {
        ON_CALL(file_system_, findFiles(std::string_view("saves\\*.noc")))
            .WillByDefault(Return(std::move(files)));
    }

    bool select(bool start_on_current) {
        return editor_tools_.showFileSelectionDialog(owners_, "Load", "saves", "*.noc", file_name_,
                                                     start_on_current);
    }

    // The white pixels the screen holds while the error box waits for its key.
    int whiteWhileTheErrorShows() {
        int white = 0;
        EXPECT_CALL(raw_input_, getNextKeypress).WillOnce([&](engine::IScreenDevice &) {
            for (int y = 0; y < kHeight; ++y) {
                for (int x = 0; x < kWidth; ++x) {
                    white += screen_.pixel(x, y) == kWhite ? 1 : 0;
                }
            }
            return 'x';
        });
        EXPECT_FALSE(select(false));
        return white;
    }

    static std::tm localTime(std::time_t /*timestamp*/) {
        return {};
    }

    std::string file_name_ = "unchanged";
    support::CNewMsg messages_{dosio_};
    SPickListOwners pick_list_owners_{.controls = controls_,
                                      .keys = keys_,
                                      .menu_input = menu_input_,
                                      .three_d = three_d_,
                                      .screen = screen_};
    CStrList::LocalTime local_time_ = &localTime;
    SFileSelectionOwners owners_{.pick_list = pick_list_owners_,
                                 .pod = nullptr,
                                 .file_system = file_system_,
                                 .local_time = local_time_,
                                 .messages = messages_};
};

TEST_F(CFileSelectionTest, NoFilesShowsAnErrorAndPicksNothing) {
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    EXPECT_FALSE(select(true));
    EXPECT_EQ(file_name_, "unchanged");
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

// Only '!' draws, so the error's text shows once the message table turns it into one.
TEST_F(CFileSelectionTest, TheErrorIsInThePlayersLanguage) {
    const int untranslated = whiteWhileTheErrorShows();
    givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n\"Arial\"\n"
                             "\"No files found\", \"!\"\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_GT(whiteWhileTheErrorShows(), untranslated);
}

TEST_F(CFileSelectionTest, ReturnPicksTheFirstFileInOrderAsNameAndExtension) {
    givenFiles({{.name = "b.noc"}, {.name = "a.noc"}});
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(select(false));
    EXPECT_EQ(file_name_, "A.NOC");
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

// The file search orders by file name, "A-.B" before "A.B"; the list is then sorted again on
// its whole records, where the tab after "A" comes before the '-'.
TEST_F(CFileSelectionTest, TheListIsSortedOnItsRecords) {
    givenFiles({{.name = "a-.noc"}, {.name = "a.noc"}});
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(select(false));
    EXPECT_EQ(file_name_, "A.NOC");
}

TEST_F(CFileSelectionTest, TheListStartsOnTheCurrentFileIgnoringCase) {
    givenFiles({{.name = "a.noc"}, {.name = "b.noc"}, {.name = "c.noc"}});
    file_name_ = "b.Noc";
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(select(true));
    EXPECT_EQ(file_name_, "B.NOC");
}

TEST_F(CFileSelectionTest, ACurrentFileIsIgnoredUnlessAskedFor) {
    givenFiles({{.name = "a.noc"}, {.name = "b.noc"}});
    file_name_ = "B.NOC";
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(select(false));
    EXPECT_EQ(file_name_, "A.NOC");
}

TEST_F(CFileSelectionTest, AnUnlistedCurrentFileStartsOnTheFirst) {
    givenFiles({{.name = "a.noc"}, {.name = "b.noc"}});
    file_name_ = "C.NOC";
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(select(true));
    EXPECT_EQ(file_name_, "A.NOC");
}

TEST_F(CFileSelectionTest, AFileWithoutAnExtensionIsItsNameAlone) {
    givenFiles({{.name = "readme"}});
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(select(false));
    EXPECT_EQ(file_name_, "README");
}

TEST_F(CFileSelectionTest, CancellingLeavesTheNameAsItWas) {
    givenFiles({{.name = "a.noc"}});
    press(EInputCodeType::DIK_ESCAPE);
    EXPECT_FALSE(select(true));
    EXPECT_EQ(file_name_, "unchanged");
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

} // namespace
} // namespace nocturne::shape
