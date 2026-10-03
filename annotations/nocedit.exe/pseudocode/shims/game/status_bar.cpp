// =============================================================================
// STATUS BARS SIZED BY MAXIMUM HEALTH — implementation
// =============================================================================

#include "game/status_bar.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_STATUS_BAR_WIDTH

namespace {

// CCharacter::ctor's max_hit_points, the health the shipped width stands for.
const float kReferenceMaxHealth = 100.0f;

// CGame holds five bars; a few more entries let a name outlive its bar.
const int kEntryCount = 8;

struct Entry {
    char  name[sizeof(((CCharacter *)0)->descriptive_name)];
    float scale;
};

Entry g_Entries[kEntryCount];
int   g_NextEntry;

Entry *find_entry(char *name)
{
    for (int i = 0; i < kEntryCount; i++) {
        // setStatusDisplay matches bar names with _stricmp, so this does too.
        if (g_Entries[i].name[0] != '\0' && _stricmp(g_Entries[i].name, name) == 0) {
            return &g_Entries[i];
        }
    }
    return (Entry *)0;
}

} // namespace

extern "C" void nocturne_status_bar_note(CCharacter *character)
{
    Entry *entry;

    if (character->descriptive_name[0] == '\0' || !(0.0f < character->max_hit_points) ||
        core_actor_cpp_isOfClass_FUN_0040c6d0(&character->base, (char *)"CHero") == 0) {
        return;
    }
    entry = find_entry(character->descriptive_name);
    if (entry == (Entry *)0) {
        entry = &g_Entries[g_NextEntry];
        g_NextEntry = (g_NextEntry + 1) % kEntryCount;
        strncpy(entry->name, character->descriptive_name, sizeof(entry->name) - 1);
        entry->name[sizeof(entry->name) - 1] = '\0';
    }
    entry->scale = character->max_hit_points / kReferenceMaxHealth;
}

extern "C" int nocturne_status_bar_right(char *name, int left, int right)
{
    Entry *entry;
    int    width;
    int    limit;

    entry = find_entry(name);
    if (entry == (Entry *)0) {
        return right;
    }
    width = (int)((float)(right - left) * entry->scale + 0.5f);
    // The bars sit at the left margin; keep a long one clear of the right one.
    limit = (g_WindowWidth - 1) - left;
    if (limit < left + width) {
        return limit;
    }
    if (width < 1) {
        width = 1;
    }
    return left + width;
}

#else

extern "C" void nocturne_status_bar_note(CCharacter *) {}
extern "C" int nocturne_status_bar_right(char *, int, int right) { return right; }

#endif // !NOCTURNE_AUTHENTIC_STATUS_BAR_WIDTH
