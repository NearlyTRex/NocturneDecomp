#pragma once

// =============================================================================
// SCRIPT QUIRKS
// =============================================================================
//
// Corrections to the shipped mission scripts, made as they run rather than by
// editing the PODs. script_quirks.cpp holds one table; each entry names its
// mission (CDemonMission::mission_name, the .scr basename) and its kind:
//
//   SCRIPT_QUIRK_IF_BODY   An unbraced if whose body is several commands. The
//                          interpreter gives an unbraced if one command, so a
//                          false test skips only the first and runs the rest.
//                          Keyed by the if's line in the .SCR and guarded by
//                          its text, so an edited script is left alone; the
//                          entry gives the number of commands in the body.
//   SCRIPT_QUIRK_DIALOGUE  A dbSay line recorded for one hero, said by
//                          another: a network guest standing where the
//                          Stranger was expected still plays his voice under
//                          a "Stranger:" caption. Keyed by the line's database
//                          key (its sound's stem, as dbLoad keys it) and by
//                          the one hero it never applies to, the one it is a
//                          recording of. It replaces the caption, plays
//                          nothing in place of the voice, and shows the
//                          caption for the time the shipped code gives a line
//                          whose sound is missing.
//
// Entries are tried in table order and the first match wins. Every key is
// simulation state (the mission, the script position, the dbSay argument,
// which hero `$` resolved to), so in a network game every machine applies the
// same entries.
//
// Gated at the call sites in CScript::step and CScript::startDialogLine on
// NOCTURNE_AUTHENTIC_SCRIPT_QUIRKS.

#ifdef __cplusplus
extern "C" {
#endif

struct CDemonActor;
struct CScript;

// For CScript::step's false if, with next_cmd on the first command of its
// body: the command to resume at, as CScript::skipCommands(next_cmd, 0)
// answers. An SCRIPT_QUIRK_IF_BODY entry for the if skips its whole body;
// otherwise this is skipCommands' own answer. Negative when a skip fails.
int nocturne_script_quirk_skip_if_body(struct CScript *script);

// Applies the SCRIPT_QUIRK_DIALOGUE entry for `speaker` saying `*sound_name`
// in the current mission. With no entry, returns 0 and changes nothing.
// Otherwise points `*dialog_text` at the entry's caption and `*sound_name` at
// nothing, and, when `timed_by_line` is nonzero, sets `*duration` from the
// caption's length; returns nonzero. The caption stays valid until the next
// call.
int nocturne_script_quirk_dialogue(struct CDemonActor *speaker, char **sound_name,
                                   char **dialog_text, float *duration, int timed_by_line);

#ifdef __cplusplus
}
#endif
