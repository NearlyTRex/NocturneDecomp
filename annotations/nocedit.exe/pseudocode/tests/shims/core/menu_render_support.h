#pragma once

// =============================================================================
// MENU RENDER SUPPORT — the text routines and keys a menu list is drawn with
// =============================================================================
//
// Every drawText recorded with where it went, its colour and the alpha set at
// the time; text 8 pixels a character and 10 high; the keys read once each;
// the moon's half and the cosmetic random stream answered from here.
// reset() puts it back.

#include "nocturne.h"

#include <deque>
#include <set>
#include <string>
#include <vector>

namespace menu_render_support {

struct Drawn {
    std::string text;
    int x;
    int y;
    int colour;
    int alpha;
};

struct Stand {
    std::vector<Drawn> drawn;
    std::set<int> pressed;    // getAndClearKeyState, once each
    int first_half = 0;       // CMoon::isAnimationFirstHalf
    std::deque<unsigned> rng; // nocturne_rng_fx, front first; 0 after
    int alpha = 0;            // the last setRenderAlpha

    void reset();

    // The draws of `text`, in order.
    std::vector<Drawn> of(const std::string &text) const;
};

extern Stand stand;

} // namespace menu_render_support
