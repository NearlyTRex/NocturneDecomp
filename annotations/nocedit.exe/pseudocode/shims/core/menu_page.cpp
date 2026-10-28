// =============================================================================
// MENU PAGE — implementation
// =============================================================================
//
// See menu_page.h, and NOCTURNE_AUTHENTIC_MENU in
// config/shim_config_authentic.h.

#include "core/menu_page.h"

#include "core/menu_screen.h"
#include "nocturne.h"

#include <cstdarg>
#include <cstdio>

#if !NOCTURNE_AUTHENTIC_MENU

namespace nocturne_menu {

void Lines::clear() {
    count_ = 0;
}

void Lines::add(int id, const char *format, ...) {
    if (count_ == kMax)
        return;
    va_list args;
    va_start(args, format);
    vsnprintf(text_[count_], sizeof(text_[count_]), format, args);
    va_end(args);
    pointers_[count_] = text_[count_];
    ids_[count_] = id;
    count_++;
}

void Lines::add_localized(int id, const char *key) {
    add(id, "%s", support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key));
}

int Lines::count() const {
    return count_;
}

int Lines::id_at(int index) const {
    return ids_[index];
}

int Lines::index_of(int id) const {
    for (int i = 0; i < count_; i++) {
        if (ids_[i] == id)
            return i;
    }
    return -1;
}

char **Lines::text() {
    return pointers_;
}

const char *Page::title() {
    return nullptr;
}

void Page::begin_frame() {}

void Page::decorate() {}

void Page::before_swap() {}

Outcome Page::end_frame() {
    return nocturne_menu_cancelled() != 0 ? LEAVE : STAY;
}

void run(Page &page) {
    Lines lines;
    int selected = 0;
    int selected_id = 0;
    bool placed = false;

    for (;;) {
        page.begin_frame();
        nocturne_menu_backdrop_frame();
        lines.clear();
        page.build(lines);
        page.decorate();

        // Back onto the line the cursor was on, or, where that one has gone,
        // the nearest position the list still has.
        if (placed && lines.index_of(selected_id) >= 0)
            selected = lines.index_of(selected_id);
        if (selected >= lines.count())
            selected = lines.count() - 1;

        const char *title = page.title();
        const int menu_y = title != nullptr
                               ? nocturne_menu_titled_y(lines.count())
                               : nocturne_menu_start_y(NOCTURNE_MENU_ROWS_UNTITLED(lines.count()));
        const int choice = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(
            lines.text(), lines.count(), &selected, menu_y, (char *)title);
        selected_id = lines.id_at(selected);
        placed = true;
        page.before_swap();
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        if (choice >= 0 && page.choose(lines.id_at(choice),
                                       g_MenuLeftRightPressed == 1 ? STEP_BACK : STEP_ON) == LEAVE)
            return;
        if (page.end_frame() == LEAVE)
            return;
    }
}

} // namespace nocturne_menu

#endif // !NOCTURNE_AUTHENTIC_MENU
