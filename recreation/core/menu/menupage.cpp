#include "core/menu/menupage.h"

#include "core/menu/menu.h"

#include <optional>
#include <string>

namespace nocturne::core {

CMenuPage::CMenuPage(CMenu &menu) : menu_(menu) {}

std::optional<std::string> CMenuPage::title() {
    return std::nullopt;
}

void CMenuPage::beginFrame() {}

void CMenuPage::decorate() {}

void CMenuPage::beforeSwap() {}

EMenuOutcome CMenuPage::endFrame() {
    return menu_.takeMenuCancel() ? EMenuOutcome::Leave : EMenuOutcome::Stay;
}

CMenu &CMenuPage::getMenu() {
    return menu_;
}

} // namespace nocturne::core
