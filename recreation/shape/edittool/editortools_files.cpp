#include "common/text/ascii.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/fileselection.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"

#include <string>
#include <string_view>

namespace nocturne::shape {
namespace {

// _makepath from a file record's name and extension; a record's extension has no dot.
std::string makeFileName(const CStrList &list, int index) {
    std::string name = list.getFieldAt(index, 0);
    const std::string extension = list.getFieldAt(index, 1);
    if (!extension.empty()) {
        name += '.';
        name += extension;
    }
    return name;
}

} // namespace

// The list starts on its first file unless the current one is listed.
// nocedit 0x0049f270
bool CEditorTools::showFileSelectionDialog(const SFileSelectionOwners &owners,
                                           std::string_view dialog_title,
                                           std::string_view search_directory,
                                           std::string_view file_pattern,
                                           std::string &output_filename, bool start_on_current) {
    CPickList list(owners.pick_list);
    list.populateFromFileSearch(owners.pod, owners.file_system, owners.local_time, search_directory,
                                file_pattern);
    if (list.getItemCount() < 1) {
        showError(owners.messages.getLocalizedString("No files found"));
        return false;
    }
    list.sortAll();
    int current = 0;
    if (start_on_current) {
        for (int index = 0; index < list.getItemCount(); ++index) {
            if (common::equalsIgnoringAsciiCase(makeFileName(list, index), output_filename)) {
                current = index;
                break;
            }
        }
    }
    const int chosen = list.displayChoicesAndWaitForInput(dialog_title, current);
    if (chosen < 0) {
        return false;
    }
    output_filename = makeFileName(list, chosen);
    return true;
}

} // namespace nocturne::shape
