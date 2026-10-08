#include "shape/edittool/editortools.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CEditorTools, IsConcrete) {
    static_assert(!std::is_abstract_v<CEditorTools>);
}

TEST(CEditorTools, Constructors) {
    static_assert(std::is_constructible_v<CEditorTools>);
}

TEST(CEditorTools, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CEditorTools::showMessage), void (CEditorTools::*)(char *, ...)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::showWarning), void (CEditorTools::*)(char *, ...)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::showError), void (CEditorTools::*)(char *, ...)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::displayCenteredStatusMessage),
                                 void (CEditorTools::*)(char *, ...)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::showFileSelectionDialog),
                       int (CEditorTools::*)(char *, char *, char *, char *, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::showFilenameInputDialog),
                       int (CEditorTools::*)(char *, char *, char *, char *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::promptForValidInteger),
                                 int (CEditorTools::*)(char *, int *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::promptForValidFloat),
                                 int (CEditorTools::*)(char *, float *, int, float, float, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showTextInputDialog),
                                 int (CEditorTools::*)(char *, char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showCheatInputDialog),
                                 int (CEditorTools::*)(char *, char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showCenteredProgressDialog),
                                 void (CEditorTools::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::updatePercentage),
                                 void (CEditorTools::*)(float, float)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::createCenteredModal),
                                 void (CEditorTools::*)(int, int, char *, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::restoreWindowAndCleanup), void (CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::paintCurrentWindow), void (CEditorTools::*)()>);
    static_assert(std::is_same_v<decltype(&CEditorTools::getTimeCycledColorByte),
                                 std::uint32_t (CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::drawMousePointer), void (CEditorTools::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::getClipboardText), char *(CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::setClipboardText), void (CEditorTools::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::draw3DAxisLabels),
                                 void (CEditorTools::*)(float, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::draw3DAxisLabelsAt),
                                 void (CEditorTools::*)(float, int, core::CVector3f *,
                                                        core::UOrientationVector *)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::displayMemoryDiagnostics),
                                 void (CEditorTools::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::draw3DProjectedLine),
                                 void (CEditorTools::*)(core::CVector3f *, int)>);
}

} // namespace
} // namespace nocturne::shape
