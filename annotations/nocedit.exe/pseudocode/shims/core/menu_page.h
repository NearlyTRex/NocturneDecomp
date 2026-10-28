#pragma once

// =============================================================================
// MENU PAGE — one front-end screen: its title, its lines, what a press does
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, which carries the reasoning. A page
// lists its lines afresh every frame, each under an id of its own, so a line
// that comes and goes (the upscaler's sharpness, a QUIT the host withholds) renumbers
// nothing, and the cursor stays on the line it was on rather than on the
// position. run() draws the page over the moon through renderMenuAndGetChoice,
// which is core/menu_render's; where the page sits is menu_screen's.
//
// C++ only: the keeps reach the pages through game/main_menu.h and
// game/options_menu.h.

#ifdef __cplusplus

namespace nocturne_menu {

enum Outcome { STAY, LEAVE };

// A left press on a line with a value; a right press, or Return, is +1.
enum { STEP_BACK = -1, STEP_ON = 1 };

class Lines {
public:
    enum { kMax = 16, kWidth = 256 };

    void clear();

    // A line under `id`, its text as printf would format it, cut at kWidth.
    // A line past kMax is dropped. Only a line whose text has a ':' takes
    // left and right; renderMenuAndGetChoice reads that from the text.
    void add(int id, const char *format, ...) __attribute__((format(printf, 3, 4)));

    // A line reading as the localized `key`.
    void add_localized(int id, const char *key);

    int count() const;
    int id_at(int index) const;

    // Where the line under `id` is, or -1 when it is not listed.
    int index_of(int id) const;

    // The texts, in the form renderMenuAndGetChoice takes.
    char **text();

private:
    char text_[kMax][kWidth];
    char *pointers_[kMax];
    int ids_[kMax];
    int count_ = 0;
};

class Page {
public:
    virtual ~Page() {}

    // The title, localized, or null for an untitled page. A titled page draws
    // its title at nocturne_menu_titled_y and single-spaces its lines; an
    // untitled one double-spaces them from the main menu's start-y.
    virtual const char *title();

    // Before the backdrop, each frame.
    virtual void begin_frame();

    // This frame's lines, at least one. Called after the backdrop is drawn.
    virtual void build(Lines &lines) = 0;

    // Over the backdrop and under the lines, after build.
    virtual void decorate();

    // With the page drawn, before it is shown.
    virtual void before_swap();

    // A press on the line under `id`: STEP_BACK or STEP_ON, which only means
    // something on a line with a ':'.
    virtual Outcome choose(int id, int step) = 0;

    // Last thing each frame, whether a line was chosen or not. LEAVE ends
    // run(); by default that is on nocturne_menu_cancelled.
    virtual Outcome end_frame();
};

// Runs `page` until a choice or a frame's end says LEAVE.
void run(Page &page);

} // namespace nocturne_menu

#endif // __cplusplus
