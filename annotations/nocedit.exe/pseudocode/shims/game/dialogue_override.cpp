// =============================================================================
// DIALOGUE OVERRIDES — implementation
// =============================================================================
//
// See dialogue_override.h.

#include "game/dialogue_override.h"
#include "core/ascii_case.h"
#include "net/net_hero.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstddef>
#include <cstring>

namespace {

// A speaker key matching any hero, and an exclusion key excluding none.
const int kAnyHero = -1;
const int kNoHero  = -1;

struct DialogueOverride {
    const char *mission;     // CDemonMission::mission_name, without case; null for any
    const char *line;        // the line's database key (its sound's stem), without case
    int         speaker;     // EHeroType saying it, or kAnyHero
    int         unless;      // EHeroType it never applies to, or kNoHero
    const char *caption;     // replaces the database caption; "{name}" is the speaker's name
    const char *sound;       // replaces the database sound; null plays nothing
};

const DialogueOverride k_overrides[] = {
    // ACT2's gas room chokes whichever hero `$` resolves to. Both lines are
    // the Stranger's recordings.
    { "MINE", "a2s3_stranger01", kAnyHero, HERO_TYPE_STRANGER,
      "{name}: Gas. Can't breathe.", nullptr },
    { "MINE", "a2s3_stranger02", kAnyHero, HERO_TYPE_STRANGER,
      "{name}: I can't go back in there without some kind of gas mask.", nullptr },
};

const int k_override_count = (int)(sizeof(k_overrides) / sizeof(k_overrides[0]));

// CScript::current_message is 1024 bytes; startDialogLine copies into it.
char s_caption[1024];

// dbLoad keys a line by its sound's stem and stores the file it found for it,
// <stem>.wav or else <stem>.mp3, which is what startDialogLine is handed.
void sound_stem(const char *sound_name, char *out, size_t out_size) {
    const char *start = sound_name;
    size_t length;

    for (const char *p = sound_name; *p != '\0'; p++) {
        if (*p == '\\' || *p == '/' || *p == ':') {
            start = p + 1;
        }
    }
    const char *dot = std::strrchr(start, '.');
    length = (dot != nullptr) ? (size_t)(dot - start) : std::strlen(start);
    if (length >= out_size) {
        length = out_size - 1;
    }
    std::memcpy(out, start, length);
    out[length] = '\0';
}

bool key_matches(const char *key, const char *value) {
    if (key == nullptr) {
        return true;
    }
    return value != nullptr && nocturne_ascii_icompare(key, value) == 0;
}

// The EHeroType of `actor` when it is one of g_HeroActors, otherwise -1.
// createHeros builds slot i from player i's hero_number, and a game without a
// connection from CGame::hero_number.
int hero_type_of(CDemonActor *actor) {
    if (actor == nullptr) {
        return -1;
    }
    for (int i = 0; i < g_HeroCount && i < 4; i++) {
        if ((CDemonActor *)g_HeroActors[i] != actor) {
            continue;
        }
        if (g_CNetGamePtr == nullptr || g_CNetGamePtr->connection_type == CONNECTION_NONE) {
            return (int)g_CGamePtr->hero_number;
        }
        if (i >= (int)(sizeof(g_CNetGamePtr->players) / sizeof(g_CNetGamePtr->players[0]))) {
            return -1;
        }
        return (int)g_CNetGamePtr->players[i].hero_number;
    }
    return -1;
}

const DialogueOverride *find(const char *mission, const char *sound_name, int speaker) {
    char line[60];

    if (sound_name == nullptr || speaker < 0) {
        return nullptr;
    }
    sound_stem(sound_name, line, sizeof(line));
    for (int i = 0; i < k_override_count; i++) {
        const DialogueOverride *entry = &k_overrides[i];
        if (!key_matches(entry->mission, mission) || !key_matches(entry->line, line)) {
            continue;
        }
        if (entry->speaker != kAnyHero && entry->speaker != speaker) {
            continue;
        }
        if (entry->unless != kNoHero && entry->unless == speaker) {
            continue;
        }
        return entry;
    }
    return nullptr;
}

// `entry`'s caption with "{name}" replaced by hero type `speaker`'s name.
void format_caption(const DialogueOverride *entry, int speaker, char *out, size_t out_size) {
    static const char k_token[] = "{name}";
    const size_t token_length = sizeof(k_token) - 1;
    const char *name = nocturne_net_hero_name(speaker);
    size_t used = 0;

    for (const char *p = entry->caption; *p != '\0' && used + 1 < out_size;) {
        if (std::strncmp(p, k_token, token_length) == 0) {
            for (const char *n = name; *n != '\0' && used + 1 < out_size; n++) {
                out[used++] = *n;
            }
            p += token_length;
        } else {
            out[used++] = *p++;
        }
    }
    out[used] = '\0';
}

} // namespace

extern "C" int nocturne_dialogue_override_apply(CDemonActor *speaker, char **sound_name,
                                                char **dialog_text, float *duration,
                                                int timed_by_line) {
    const int speaker_type = hero_type_of(speaker);
    const DialogueOverride *entry =
        find(g_CDemonMissionPtr != nullptr ? g_CDemonMissionPtr->mission_name : nullptr,
             *sound_name, speaker_type);

    if (entry == nullptr) {
        return 0;
    }
    format_caption(entry, speaker_type, s_caption, sizeof(s_caption));
    *dialog_text = s_caption;
    *sound_name = (char *)entry->sound;
    if (timed_by_line != 0) {
        float seconds = -1.0f;
        if (entry->sound != nullptr) {
            seconds = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,
                                                                          (char *)entry->sound);
        }
        if (seconds < 0.0f) {
            // startDialogLine's own figure for a line whose sound is missing.
            seconds = (float)((long double)std::strlen(s_caption) * (long double)0.02 +
                              (long double)0.40000000000000002);
        }
        *duration = seconds;
    }
    return 1;
}
