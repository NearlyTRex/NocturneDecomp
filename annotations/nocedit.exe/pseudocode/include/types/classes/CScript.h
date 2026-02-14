#pragma once

// Forward declarations
struct CDemonActor;
struct SDialogEntry;
struct SScriptLine;
struct SScriptXRef;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CStrList.h"

// Structure: CScript
// Ghidra size: 0x480 (1152 bytes)
typedef struct CScript {
    int script_pause_flag; // 0x0
    struct CDemonActor* who_is_speaking; // 0x4
    int unk1; // 0x8
    struct CDemonActor* focus_actor; // 0xc
    int unk2; // 0x10
    int focus_actor_locked; // 0x14
    int script_state; // 0x18
    int dialog_entry_count; // 0x1c
    struct SDialogEntry* dialog_entries; // 0x20
    uint current_sfx_handle; // 0x24
    int xref_count; // 0x28
    struct SScriptXRef* xref_entries; // 0x2c
    int parsed_line_count; // 0x30
    struct SScriptLine* parsed_lines; // 0x34
    CStrList script_text; // 0x38
    int next_cmd; // 0x48
    float cmd_timer; // 0x4c
    float dialog_wav_time; // 0x50
    char current_message[1025]; // 0x54
    char msg_state_flags[3]; // 0x455
    int saved_cmd_index; // 0x458
    int call_stack_count; // 0x45c
    int call_stack[8]; // 0x460
} CScript;

