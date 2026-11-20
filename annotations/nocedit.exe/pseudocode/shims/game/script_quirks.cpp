// =============================================================================
// SCRIPT QUIRKS — implementation
// =============================================================================
//
// See script_quirks.h.

#include "game/script_quirks.h"

#include "core/ascii_case.h"
#include "net/net_hero.h"
#include "nocturne.h"
#include "shim_config.h"
#include "watcom/path.h"

#include <cstdio>
#include <cstring>
#include <string>

namespace {

enum EScriptQuirk { SCRIPT_QUIRK_IF_BODY, SCRIPT_QUIRK_DIALOGUE };

struct SScriptQuirk {
    EScriptQuirk kind;
    const char *mission; // CDemonMission::mission_name, without case
    // SCRIPT_QUIRK_IF_BODY: the if's line in the .SCR, its text as the parser
    // keeps it (trimmed, comment dropped), and the commands in its body.
    int line;
    const char *text;
    int body;
    // SCRIPT_QUIRK_DIALOGUE: the line's database key (its sound's stem),
    // without case; the EHeroType it never applies to, the one recorded saying
    // it; and the caption, whose "{name}" is the speaker's.
    const char *key;
    int unless;
    const char *caption;
};

const SScriptQuirk k_quirks[] = {
    // The werewolf branch of :FallOffTrain is three commands without braces.
    // A hero falling off skips only the kill, then is deleted whole by
    // deleteactor(@whotokill), and the else skips his own fallapart kill.
    {SCRIPT_QUIRK_IF_BODY, "TRAIN", 226, "if (isOfType(@whotokill, CWerewolf))", 3, nullptr, -1,
     nullptr},
    // ACT2's gas room chokes whichever hero `$` resolves to. Both lines are
    // the Stranger's recordings.
    {SCRIPT_QUIRK_DIALOGUE, "MINE", 0, nullptr, 0, "a2s3_stranger01", HERO_TYPE_STRANGER,
     "{name}: Gas. Can't breathe."},
    {SCRIPT_QUIRK_DIALOGUE, "MINE", 0, nullptr, 0, "a2s3_stranger02", HERO_TYPE_STRANGER,
     "{name}: I can't go back in there without some kind of gas mask."},
};

const int k_quirk_count = (int)(sizeof(k_quirks) / sizeof(k_quirks[0]));

// CScript::current_message is 1024 bytes; startDialogLine copies into it.
char s_caption[1024];

const char *current_mission() {
    return (g_CDemonMissionPtr != nullptr) ? g_CDemonMissionPtr->mission_name : nullptr;
}

int in_mission(const SScriptQuirk *entry, EScriptQuirk kind, const char *mission) {
    return (entry->kind == kind) && (mission != nullptr) &&
           (nocturne_ascii_icompare(entry->mission, mission) == 0);
}

const SScriptQuirk *find_if_body(const char *mission, const SScriptLine *if_line) {
    for (int i = 0; i < k_quirk_count; i++) {
        const SScriptQuirk *entry = &k_quirks[i];
        if ((in_mission(entry, SCRIPT_QUIRK_IF_BODY, mission) != 0) &&
            (entry->line == if_line->line_number) &&
            (nocturne_ascii_icompare(entry->text, if_line->text) == 0)) {
            return entry;
        }
    }
    return nullptr;
}

// dbLoad keys a line by its sound's stem and stores the file it found for it,
// <stem>.wav or else <stem>.mp3, which is what startDialogLine is handed.
std::string sound_stem(const char *sound_name) {
    const std::string leaf = watcom_path_leaf(sound_name);
    return leaf.substr(0, leaf.rfind('.'));
}

const SScriptQuirk *find_dialogue(const char *mission, const char *sound_name, int speaker) {
    if ((sound_name == nullptr) || (speaker < 0)) {
        return nullptr;
    }
    const std::string key = sound_stem(sound_name);
    for (int i = 0; i < k_quirk_count; i++) {
        const SScriptQuirk *entry = &k_quirks[i];
        if ((in_mission(entry, SCRIPT_QUIRK_DIALOGUE, mission) != 0) &&
            (nocturne_ascii_icompare(entry->key, key.c_str()) == 0) && (entry->unless != speaker)) {
            return entry;
        }
    }
    return nullptr;
}

} // namespace

extern "C" int nocturne_script_quirk_skip_if_body(CScript *script) {
    int next = script->next_cmd;
    const SScriptQuirk *entry = nullptr;
    int skips = 1;

    if ((0 < next) && (next <= script->parsed_line_count)) {
        entry = find_if_body(current_mission(), &script->parsed_lines[next - 1]);
    }
    if (entry != nullptr) {
        skips = entry->body;
    }
    for (int i = 0; (i < skips) && (0 <= next); i++) {
        next = core_script_cpp_CScript_skipCommands_FUN_005601c0(script, next, 0);
    }
    return next;
}

extern "C" int nocturne_script_quirk_dialogue(CDemonActor *speaker, char **sound_name,
                                              char **dialog_text, float *duration,
                                              int timed_by_line) {
    const int speaker_type = nocturne_net_hero_type_of(speaker);
    const SScriptQuirk *entry = find_dialogue(current_mission(), *sound_name, speaker_type);

    if (entry == nullptr) {
        return 0;
    }
    // The caption with "{name}" replaced by the speaker's name.
    std::string caption = entry->caption;
    const std::string::size_type token = caption.find("{name}");
    caption.replace(token, sizeof("{name}") - 1, nocturne_net_hero_name(speaker_type));
    std::snprintf(s_caption, sizeof(s_caption), "%s", caption.c_str());

    *dialog_text = s_caption;
    *sound_name = nullptr;
    if (timed_by_line != 0) {
        // startDialogLine's own figure for a line whose sound is missing.
        *duration = (float)((long double)std::strlen(s_caption) * (long double)0.02 +
                            (long double)0.40000000000000002);
    }
    return 1;
}
