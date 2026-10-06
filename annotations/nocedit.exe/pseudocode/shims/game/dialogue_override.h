#pragma once

// =============================================================================
// DIALOGUE OVERRIDES
// =============================================================================
//
// The dialogue database (the .wav, speaker, caption lines a dbSay names) is
// recorded for the heroes the shipped game casts. A line whose speaker
// resolves to a different hero - a network guest standing where the Stranger
// was expected - still plays the Stranger's voice under a "Stranger:" caption.
//
// dialogue_override.cpp holds a table of replacements, applied from
// CScript::startDialogLine once the line's speaker is known. A match is
// chosen by mission, by line (its database key: the sound's stem, as dbLoad
// keys it, since the file it stores may be the .wav or the .mp3) and by the
// speaking hero, and replaces the caption and, optionally, the sound. An entry
// with no sound shows its caption for the time the shipped code gives a line
// whose sound is missing, and plays nothing.
//
// Entries are tried in table order and the first match wins, so a specific
// entry goes above a general one for the same line. Every key is simulation
// state (the mission, the dbSay argument, which hero `$` resolved to), so in a
// network game every machine picks the same entry and the same duration.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call site: every entry so far
// exists for network guests.

#ifdef __cplusplus
extern "C" {
#endif

struct CDemonActor;

// Applies the entry for `speaker` saying `*sound_name` in the current mission.
// With no entry, returns 0 and changes nothing. Otherwise points `*dialog_text`
// at the entry's caption, `*sound_name` at its sound or null, and, when
// `timed_by_line` is nonzero, sets `*duration` from that sound or the caption's
// length; returns nonzero. The caption stays valid until the next call.
int nocturne_dialogue_override_apply(struct CDemonActor *speaker, char **sound_name,
                                     char **dialog_text, float *duration, int timed_by_line);

#ifdef __cplusplus
}
#endif
