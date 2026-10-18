#include "shape/edittool/picklist.h"

#include "common/error/error.h"

#include <cstddef>

namespace nocturne::shape {

// nocedit 0x004a3b90
CPickList::CPickList(const SPickListOwners &owners)
    : owners_(owners), scrollbar_(owners.controls) {}

// The original cleared the list and freed the enable array by hand.
// nocedit 0x004a3c80
CPickList::~CPickList() = default;

void CPickList::requireNoneEnabled(std::string_view message) const {
    if (!enabled_array_.empty()) {
        common::displayErrorAndQuit(message);
    }
}

// nocedit 0x004a5670
void CPickList::insert(int insert_index, std::string_view string_data) {
    requireNoneEnabled("CPickList::insert - can't do this after enableing/disabling items (yet)");
    CStrList::insert(insert_index, string_data);
}

// nocedit 0x004a56f0
void CPickList::remove(int start_index, int end_index) {
    requireNoneEnabled("CPickList::remove - can't do this after enableing/disabling items (yet)");
    CStrList::remove(start_index, end_index);
}

// nocedit 0x004a57f0
void CPickList::sort(int start_index, int end_index) {
    requireNoneEnabled("CPickList::sort - can't do this after enableing/disabling items (yet)");
    CStrList::sort(start_index, end_index);
}

// nocedit 0x004a5870
void CPickList::swap(int index1, int index2) {
    requireNoneEnabled("CPickList::swap - can't do this after enableing/disabling items (yet)");
    CStrList::swap(index1, index2);
}

// nocedit 0x004a5770
void CPickList::clear() {
    enabled_array_.clear();
    CStrList::clear();
}

// The array covers the whole list once anything is enabled or disabled, the rest enabled.
// nocedit 0x004a5410
void CPickList::enableItem(int item_index, bool enable_flag) {
    if (item_index < 0 || item_index >= getItemCount()) {
        common::displayErrorAndQuit("CPickList::enableItem - invalid index");
    }
    if (enabled_array_.empty()) {
        enabled_array_.assign(static_cast<std::size_t>(getItemCount()), true);
    }
    enabled_array_[static_cast<std::size_t>(item_index)] = enable_flag;
}

// nocedit 0x004a54e0
bool CPickList::isItemEnabled(int item_index) const {
    if (item_index < 0 || item_index >= getItemCount()) {
        common::displayErrorAndQuit("CPickList::isItemEnabled - invalid index");
    }
    const auto index = static_cast<std::size_t>(item_index);
    return index >= enabled_array_.size() || enabled_array_[index];
}

// Retail's callers copy the string into the list themselves.
void CPickList::setHotkeys(std::string_view hotkeys) {
    hotkeys_ = hotkeys;
}

// Retail's callers set the field themselves.
void CPickList::setForcedColumnCount(bool single_column) {
    forced_column_count_ = single_column;
}

} // namespace nocturne::shape
