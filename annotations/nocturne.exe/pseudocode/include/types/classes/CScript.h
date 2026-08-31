#pragma once

// Forward declarations
struct CDemonActor;
struct SDialogEntry;
struct SScriptLine;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CStrList.h"

// Structure: CScript
// Ghidra size: 0x478 (1144 bytes)
#pragma pack(push, 1)
typedef struct CScript {
    int mission_ended; // 0x0
    struct CDemonActor* who_is_speaking; // 0x4
    struct CDemonActor* last_speaker; // 0x8
    struct CDemonActor* focus_actor; // 0xc
    int focus_actor_changed; // 0x10
    int focus_actor_locked; // 0x14
    int script_state; // 0x18
    int dialog_entry_count; // 0x1c
    struct SDialogEntry* dialog_entries; // 0x20
    uint current_sfx_handle; // 0x24
    int parsed_line_count; // 0x28
    struct SScriptLine* parsed_lines; // 0x2c
    CStrList script_text; // 0x30
    int next_cmd; // 0x40
    float cmd_timer; // 0x44
    float dialog_wav_time; // 0x48
    char current_message[1024]; // 0x4c
    float message_duration; // 0x44c
    int saved_cmd_index; // 0x450
    int call_stack_count; // 0x454
    int call_stack[8]; // 0x458
} CScript;
#pragma pack(pop)

