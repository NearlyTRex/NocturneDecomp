#include "core/menu/menupage.h"

#include "core/menu/menu.h"

#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

CMenuPage::CMenuPage(CMenu &menu) : menu_(menu) {}

std::optional<std::string> CMenuPage::title() {
    return std::nullopt;
}

std::string_view CMenuPage::getLayoutId() const {
    return {};
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

const CMenu &CMenuPage::getMenu() const {
    return menu_;
}

} // namespace nocturne::core
