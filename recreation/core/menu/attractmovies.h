#pragma once

#include "platform/fwd.h"

namespace nocturne::core {

// When the main menu shows an attract movie: at the end of a pass of its looping music, timed on
// the wall clock from the music's length, as the menu doesn't run the sound system that would
// say when a sound ends. Nothing in the original played them. They wait for the opening movie to
// have played this launch, and a pass that ends while another screen has the menu's place is let
// go for the next.
class CAttractMovies {
public:
    explicit CAttractMovies(platform::IClock &clock);

    void setOpeningPlayed(bool played);
    // The music's length, from the moment it starts; 0 or less, when no music plays, stops the
    // wait.
    void setMusicDuration(float seconds);
    // Once a main menu frame: true on the one where a pass ends with the menu on screen for it,
    // then not again until the music next starts.
    [[nodiscard]] bool tick();
    // A beat of silence once the music stops, so what the device still holds drains before the
    // movie starts.
    void pauseBeforeMovie();

private:
    [[nodiscard]] double getNow() const;

    platform::IClock &clock_;
    bool opening_played_ = false;
    bool armed_ = false;
    // When the pass playing ends, a little early, so the music is stopped before it wraps.
    double deadline_ = 0.0;
    double period_ = 0.0;
    double last_tick_ = 0.0;
};

} // namespace nocturne::core
