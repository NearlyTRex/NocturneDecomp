#include "engine/screendevice.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"

#include <string_view>

namespace nocturne::shape {
namespace {

constexpr int kNoSelection = -1;
constexpr int kYes = 0;

// The answer's text, or its short one where the long one is wider than the screen.
std::string_view fitAnswer(const SPickListOwners &pick_list, const support::CNewMsg &messages,
                           std::string_view text, std::string_view short_text) {
    const std::string_view answer = messages.getLocalizedString(text);
    if (pick_list.screen.getWindowWidth() < pick_list.controls.calculateButtonWidth(answer)) {
        return messages.getLocalizedString(short_text);
    }
    return answer;
}

} // namespace

// The original's answers began "[Y]es" and "[N]o", whatever the screen's width; the enhanced
// game's drop the brackets, and shorten either answer too wide for the screen (the decomp's
// CONFIRM_PROMPTS).
// nocedit 0x0049f060
// nocturne 0x00470230
// bw1 0x00494d20
// bw2 0x0047c760
// bw3 0x0047d8c0
bool CEditorTools::showDestructiveActionConfirmDialog(const SPickListOwners &pick_list,
                                                      const support::CNewMsg &messages,
                                                      std::string_view message) {
    CPickList list(pick_list);
    list.add(fitAnswer(pick_list, messages,
                       "Yes, I know what I'm doing and I hate these annoying prompts.",
                       "Yes, I'm sure."));
    list.add(fitAnswer(pick_list, messages, "No, please, I didn't mean to do it!", "No, go back."));
    list.setHotkeys(messages.getLocalizedString("yn"));
    return list.displayChoicesAndWaitForInput(message, kNoSelection) == kYes;
}

} // namespace nocturne::shape
