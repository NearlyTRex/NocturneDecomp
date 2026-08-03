; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d9893
;
; Referenced Globals:
;   TerminatedCString s_initSection_0058e391
;   TerminatedCString s_initSectionEnd_0058e39d
;   TerminatedCString s_core_script_cpp_0058e3ac
;   TerminatedCString s_Script_has_initSection_l_0058e3bf
;   TerminatedCString s_core_script_cpp_0058e3fe
;   TerminatedCString s_Error_processing_script_0058e411
;   TerminatedCString s_core_script_cpp_0058e44e
;   TerminatedCString s_Infinite_loop_detected_i_0058e461
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CGame g_CGame_01c775ec
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01e56418
;   undefined4 DAT_01e56c24
;
; Called Functions:
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
;   core_main.c_FUN_004c8440
;   core_script.cpp_CScript_findLabelIndex_FUN_00504c10
;   core_script.cpp_CScript_step_FUN_004ff2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff170
        ;   Label: core_script.cpp_CScript_executeInitSection_FUN_004ff170
    PUSH ESI                            ; 004ff171
    PUSH EBP                            ; 004ff172
    SUB ESP,0x8                         ; 004ff173
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ff176
    XOR EDX,EDX                         ; 004ff17a
    MOV ECX,dword ptr [EBX + 0x28]      ; 004ff17c
    MOV dword ptr [0x01e56418],EDX      ; 004ff17f | DAT_01e56418
    CMP ECX,0x1                         ; 004ff185
    JL 0x004ff190                       ; 004ff188
        ;   XREF to: 004ff190 (CONDITIONAL_JUMP)  ; LAB_004ff190
    CMP dword ptr [EBX + 0x2c],0x0      ; 004ff18a
    JNZ 0x004ff197                      ; 004ff18e
        ;   XREF to: 004ff197 (CONDITIONAL_JUMP)  ; LAB_004ff197
    ADD ESP,0x8                         ; 004ff190
        ;   Label: LAB_004ff190
    POP EBP                             ; 004ff193
    POP ESI                             ; 004ff194
    POP EBX                             ; 004ff195
    RET                                 ; 004ff196
    PUSH 0x58e391                       ; 004ff197 | = "initSection"
        ;   Label: LAB_004ff197
    PUSH EBX                            ; 004ff19c
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00504c10 ; 004ff19d
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00504c10(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 004ff1a2
    MOV ESI,EAX                         ; 004ff1a5
    TEST EAX,EAX                        ; 004ff1a7
    JL 0x004ff190                       ; 004ff1a9
        ;   XREF to: 004ff190 (CONDITIONAL_JUMP)  ; LAB_004ff190
    PUSH EDI                            ; 004ff1ab
    PUSH 0x58e39d                       ; 004ff1ac | = "initSectionEnd"
    PUSH EBX                            ; 004ff1b1
    CALL core_script.cpp_CScript_findLabelIndex_FUN_00504c10 ; 004ff1b2
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_findLabelIndex_FUN_00504c10(CScript * this_ptr, char * label_name)
    ADD ESP,0x8                         ; 004ff1b7
    MOV EBP,EAX                         ; 004ff1ba
    TEST EAX,EAX                        ; 004ff1bc
    JL 0x004ff22a                       ; 004ff1be
        ;   XREF to: 004ff22a (CONDITIONAL_JUMP)  ; LAB_004ff22a
    MOV EAX,dword ptr [EBX + 0x40]      ; 004ff1c0
        ;   Label: LAB_004ff1c0
    XOR EDX,EDX                         ; 004ff1c3
    MOV dword ptr [ESP + 0x8],EAX       ; 004ff1c5
    MOV dword ptr [0x01e56c24],EDX      ; 004ff1c9 | DAT_01e56c24
    MOV dword ptr [EBX + 0x40],ESI      ; 004ff1cf
    XOR ESI,ESI                         ; 004ff1d2
    LEA EAX,[ESP + 0x4]                 ; 004ff1d4
        ;   Label: LAB_004ff1d4
    PUSH EAX                            ; 004ff1d8
    MOV ECX,0x3e800000                  ; 004ff1d9
    PUSH EBX                            ; 004ff1de
    MOV EDI,dword ptr [EBX + 0x40]      ; 004ff1df
    MOV dword ptr [ESP + 0xc],ECX       ; 004ff1e2
    CALL core_script.cpp_CScript_step_FUN_004ff2c0 ; 004ff1e6
        ;   XREF to: 004ff2c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_004ff2c0(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 004ff1eb
    TEST EAX,EAX                        ; 004ff1ee
    JL 0x004ff251                       ; 004ff1f0
        ;   XREF to: 004ff251 (CONDITIONAL_JUMP)  ; LAB_004ff251
    CMP EBP,dword ptr [EBX + 0x40]      ; 004ff1f2
        ;   Label: LAB_004ff1f2
    JNZ 0x004ff289                      ; 004ff1f5
        ;   XREF to: 004ff289 (CONDITIONAL_JUMP)  ; LAB_004ff289
    CMP dword ptr [0x01e56c24],0x0      ; 004ff1fb | DAT_01e56c24
    JZ 0x004ff21b                       ; 004ff202
        ;   XREF to: 004ff21b (CONDITIONAL_JUMP)  ; LAB_004ff21b
    MOV ECX,dword ptr [0x005b9354]      ; 004ff204 | g_CGame_PTR_005b9354
    PUSH ECX                            ; 004ff20a | g_CGame_01c775ec
    XOR ESI,ESI                         ; 004ff20b
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0 ; 004ff20d
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ff212
    MOV dword ptr [0x01e56c24],ESI      ; 004ff215 | DAT_01e56c24
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ff21b
        ;   Label: LAB_004ff21b
    MOV dword ptr [EBX + 0x40],EAX      ; 004ff21f
    POP EDI                             ; 004ff222
    ADD ESP,0x8                         ; 004ff223
    POP EBP                             ; 004ff226
    POP ESI                             ; 004ff227
    POP EBX                             ; 004ff228
    RET                                 ; 004ff229
    MOV EDI,0x58e3ac                    ; 004ff22a | = "..\\core\\script.cpp"
        ;   Label: LAB_004ff22a
    MOV EAX,0x41c                       ; 004ff22f
    PUSH 0x58e3bf                       ; 004ff234 | = "Script has \"initSection\" label, but..."
    MOV dword ptr [0x01cc4800],EDI      ; 004ff239 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004ff23f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ff244
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ff249
    JMP 0x004ff1c0                      ; 004ff24c
        ;   XREF to: 004ff1c0 (UNCONDITIONAL_JUMP)  ; LAB_004ff1c0
    MOV EAX,0x58e3fe                    ; 004ff251 | = "..\\core\\script.cpp"
        ;   Label: LAB_004ff251
    MOV EDX,0x438                       ; 004ff256
    MOV [0x01cc4800],EAX                ; 004ff25b | g_CHAR_PTR_01cc4800
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004ff260
    MOV dword ptr [0x01cc4804],EDX      ; 004ff263 | g_INT_01cc4804
    PUSH 0x1e56420                      ; 004ff269
    MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4] ; 004ff26e
    PUSH ECX                            ; 004ff272
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 004ff273
    PUSH EDX                            ; 004ff276
    PUSH 0x58e411                       ; 004ff277 | = "Error processing script.\nLine: %d\nT..."
    CALL core_main.c_FUN_004c8440       ; 004ff27c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x10                        ; 004ff281
    JMP 0x004ff1f2                      ; 004ff284
        ;   XREF to: 004ff1f2 (UNCONDITIONAL_JUMP)  ; LAB_004ff1f2
    INC ESI                             ; 004ff289
        ;   Label: LAB_004ff289
    CMP ESI,0x2710                      ; 004ff28a
    JLE 0x004ff1d4                      ; 004ff290
        ;   XREF to: 004ff1d4 (CONDITIONAL_JUMP)  ; LAB_004ff1d4
    MOV EDI,0x58e44e                    ; 004ff296 | = "..\\core\\script.cpp"
    MOV EAX,0x44a                       ; 004ff29b
    PUSH 0x58e461                       ; 004ff2a0 | = "Infinite loop detected in initSection.\n"
    MOV dword ptr [0x01cc4800],EDI      ; 004ff2a5 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004ff2ab | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ff2b0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ff2b5
    JMP 0x004ff1d4                      ; 004ff2b8
        ;   XREF to: 004ff1d4 (UNCONDITIONAL_JUMP)  ; LAB_004ff1d4

