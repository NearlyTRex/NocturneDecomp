// =============================================================================
// DIALOGUE OVERRIDES — implementation
// =============================================================================
//
// See dialogue_override.h.

#include "game/dialogue_override.h"

#include "core/ascii_case.h"
#include "net/net_hero.h"
#include "nocturne.h"
#include "shim_config.h"
#include "watcom/path.h"

#include <cstdio>
#include <cstring>
#include <string>

namespace {

struct DialogueOverride {
    const char *mission; // CDemonMission::mission_name, without case
    const char *line;    // the line's database key (its sound's stem), without case
    int unless;          // EHeroType it never applies to: the one recorded saying it
    const char *caption; // replaces the database caption; its "{name}" is the speaker's
};

const DialogueOverride k_overrides[] = {
    // ACT2's gas room chokes whichever hero `$` resolves to. Both lines are
    // the Stranger's recordings.
    {"MINE", "a2s3_stranger01", HERO_TYPE_STRANGER, "{name}: Gas. Can't breathe."},
    {"MINE", "a2s3_stranger02", HERO_TYPE_STRANGER,
     "{name}: I can't go back in there without some kind of gas mask."},
};

const int k_override_count = (int)(sizeof(k_overrides) / sizeof(k_overrides[0]));

// CScript::current_message is 1024 bytes; startDialogLine copies into it.
char s_caption[1024];

// dbLoad keys a line by its sound's stem and stores the file it found for it,
// <stem>.wav or else <stem>.mp3, which is what startDialogLine is handed.
std::string sound_stem(const char *sound_name) {
    const std::string leaf = watcom_path_leaf(sound_name);
    return leaf.substr(0, leaf.rfind('.'));
}

const DialogueOverride *find(const char *mission, const char *sound_name, int speaker) {
    if (mission == nullptr || sound_name == nullptr || speaker < 0) {
        return nullptr;
    }
    const std::string line = sound_stem(sound_name);
    for (int i = 0; i < k_override_count; i++) {
        const DialogueOverride *entry = &k_overrides[i];
        if (nocturne_ascii_icompare(entry->mission, mission) == 0 &&
            nocturne_ascii_icompare(entry->line, line.c_str()) == 0 && entry->unless != speaker) {
            return entry;
        }
    }
    return nullptr;
}

} // namespace

extern "C" int nocturne_dialogue_override_apply(CDemonActor *speaker, char **sound_name,
                                                char **dialog_text, float *duration,
                                                int timed_by_line) {
    const int speaker_type = nocturne_net_hero_type_of(speaker);
    const DialogueOverride *entry =
        find(g_CDemonMissionPtr != nullptr ? g_CDemonMissionPtr->mission_name : nullptr,
             *sound_name, speaker_type);

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
