#include "common/error/fatalerror.h"
#include "engine/pod/pod.h"
#include "platform/filesystem.h"
#include "shape/edittool/strlist.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"
#include "tests/mocks/shape/strlistitems.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <initializer_list>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::shape {
namespace {

using ::testing::ElementsAre;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CStrList, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CStrList>);
}

TEST(CStrList, IsConcrete) {
    static_assert(!std::is_abstract_v<CStrList>);
}

TEST(CStrList, Constructors) {
    static_assert(std::is_constructible_v<CStrList>);
}

TEST(CStrList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CStrList::remove), void (CStrList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CStrList::sort), void (CStrList::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CStrList::insert), void (CStrList::*)(int, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CStrList::swap), void (CStrList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CStrList::clear), void (CStrList::*)()>);
    static_assert(std::is_same_v<decltype(&CStrList::add), void (CStrList::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CStrList::sortAll), void (CStrList::*)()>);
    static_assert(std::is_same_v<decltype(&CStrList::getStringAt),
                                 const std::string &(CStrList::*)(int) const>);
    static_assert(
        std::is_same_v<decltype(&CStrList::getFieldAt), void (CStrList::*)(char *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CStrList::findString), int (CStrList::*)(std::string_view) const>);
    static_assert(std::is_same_v<decltype(&CStrList::copyToClipboard), void (CStrList::*)()>);
    static_assert(std::is_same_v<decltype(&CStrList::populateFromFileSearch),
                                 void (CStrList::*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&CStrList::populateFromFilesNoDuplicates),
                                 void (CStrList::*)(engine::CPod *, platform::IFileSystem &,
                                                    std::string_view, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CStrList::getItemCount), int (CStrList::*)() const>);
}

TEST(CStrList, StartsEmpty) {
    const CStrList list;
    EXPECT_EQ(list.getItemCount(), 0);
}

TEST(CStrList, InsertPlacesTheStringAtTheIndexAndAddAppends) {
    CStrList list;
    list.add("b");
    list.insert(0, "a");
    list.insert(2, "c");
    EXPECT_THAT(getItems(list), ElementsAre("a", "b", "c"));
}

TEST(CStrList, InsertingOutsideTheListIsFatal) {
    CStrList list;
    const auto invalid =
        ThrowsMessage<common::CFatalError>(StrEq("CStrList::insert - invalid index"));
    EXPECT_THAT([&list] { list.insert(-1, "a"); }, invalid);
    EXPECT_THAT([&list] { list.insert(1, "a"); }, invalid);
}

TEST(CStrList, FindStringIgnoresCase) {
    CStrList list;
    list.add("door.wav");
    list.add("Rain.WAV");
    EXPECT_EQ(list.findString("RAIN.wav"), 1);
    EXPECT_EQ(list.findString("sky.wav"), -1);
}

CStrList listOf(std::initializer_list<std::string_view> items) {
    CStrList list;
    for (const std::string_view item : items) {
        list.add(item);
    }
    return list;
}

TEST(CStrList, RemoveTakesAnInclusiveRange) {
    CStrList list = listOf({"a", "b", "c", "d"});
    list.remove(1, 2);
    EXPECT_THAT(getItems(list), ElementsAre("a", "d"));
}

TEST(CStrList, RemovingAnInvalidRangeIsFatal) {
    CStrList list = listOf({"a", "b"});
    const auto invalid =
        ThrowsMessage<common::CFatalError>(StrEq("CStrList::remove - invalid range"));
    EXPECT_THAT([&list] { list.remove(-1, 0); }, invalid);
    EXPECT_THAT([&list] { list.remove(0, 2); }, invalid);
    EXPECT_THAT([&list] { list.remove(1, 0); }, invalid);
}

TEST(CStrList, SortOrdersAnInclusiveRangeIgnoringCase) {
    CStrList list = listOf({"z", "Delta", "alpha", "Charlie", "b"});
    list.sort(1, 3);
    EXPECT_THAT(getItems(list), ElementsAre("z", "alpha", "Charlie", "Delta", "b"));
}

TEST(CStrList, SortingAnEmptyOrSingleRangeChangesNothingWhateverItsBounds) {
    CStrList list = listOf({"b", "a"});
    list.sort(5, 5);
    list.sort(1, -3);
    EXPECT_THAT(getItems(list), ElementsAre("b", "a"));
}

TEST(CStrList, SortingAnInvalidRangeIsFatal) {
    CStrList list = listOf({"b", "a"});
    const auto invalid =
        ThrowsMessage<common::CFatalError>(StrEq("CStrList::sort - invalid range!"));
    EXPECT_THAT([&list] { list.sort(-1, 1); }, invalid);
    EXPECT_THAT([&list] { list.sort(0, 2); }, invalid);
}

TEST(CStrList, SwapExchangesTwoStrings) {
    CStrList list = listOf({"a", "b", "c"});
    list.swap(0, 2);
    list.swap(1, 1);
    EXPECT_THAT(getItems(list), ElementsAre("c", "b", "a"));
}

TEST(CStrList, SwappingOutsideTheListIsFatal) {
    CStrList list = listOf({"a"});
    const auto invalid =
        ThrowsMessage<common::CFatalError>(StrEq("CStrList::swap - invalid indices"));
    EXPECT_THAT([&list] { list.swap(-1, 0); }, invalid);
    EXPECT_THAT([&list] { list.swap(1, 0); }, invalid);
    EXPECT_THAT([&list] { list.swap(0, -1); }, invalid);
    EXPECT_THAT([&list] { list.swap(0, 1); }, invalid);
}

TEST(CStrList, ClearEmptiesTheList) {
    CStrList list = listOf({"a", "b"});
    list.clear();
    EXPECT_EQ(list.getItemCount(), 0);
}

// sound\door.wav and sound\rain.wav in a pod, and RAIN.WAV and thunder.wav on disk.
class CStrListFilesTest : public engine::CPodFixture {
protected:
    CStrListFilesTest() {
        givenFile("ACT1.POD", engine::makePod2("", {{.name = "sound\\door.wav", .data = "D"},
                                                    {.name = "sound\\rain.wav", .data = "R"},
                                                    {.name = "music\\door.wav", .data = "M"}}));
        pod_.mount("ACT1.POD");
        ON_CALL(file_system_, findFiles(std::string_view("sound\\*.wav")))
            .WillByDefault(Return(
                std::vector<platform::SFileInfo>{{.name = "RAIN.WAV"}, {.name = "thunder.wav"}}));
    }

    engine::CPod pod_{file_system_, dosio_};
    CStrList list_;
};

TEST_F(CStrListFilesTest, ThePodsNamesComeFirstAndNoNameTwice) {
    list_.populateFromFilesNoDuplicates(&pod_, file_system_, "sound", "*.wav");
    EXPECT_THAT(getItems(list_), ElementsAre("door.wav", "rain.wav", "thunder.wav"));
}

TEST_F(CStrListFilesTest, NamesAlreadyListedAreLeftOut) {
    list_.add("THUNDER.wav");
    list_.populateFromFilesNoDuplicates(&pod_, file_system_, "sound", "*.wav");
    EXPECT_THAT(getItems(list_), ElementsAre("THUNDER.wav", "door.wav", "rain.wav"));
}

TEST_F(CStrListFilesTest, WithoutPodsOrADirectoryOnlyTheDiskIsSearchedForThePattern) {
    EXPECT_CALL(file_system_, findFiles(std::string_view("*.mp3")))
        .WillOnce(Return(std::vector<platform::SFileInfo>{{.name = "theme.mp3"}}));
    list_.populateFromFilesNoDuplicates(nullptr, file_system_, "", "*.mp3");
    EXPECT_THAT(getItems(list_), ElementsAre("theme.mp3"));
}

} // namespace
} // namespace nocturne::shape
