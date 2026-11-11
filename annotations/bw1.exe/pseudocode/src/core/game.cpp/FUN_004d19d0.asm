; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d19d0(void)
;
;
; XREF[7]:
;   core_game.cpp_CGame_playerControls_FUN_004d0860 at 004d08a5
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf98c
;   core_game.cpp_FUN_004d77d0 at 004d7b6f
;   core_script.cpp_CScript_executeInitSection_FUN_00544310 at 005443ad
;   core_script.cpp_CScript_process_FUN_005437f0 at 00543873
;   core_script.cpp_CScript_step_FUN_00544460 at 0054861f
;   unkafter_alphabit.cpp_FUN_00415be0 at 00415c0e
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   CFieldNotes* g_CFieldNotesPtr = 01cc8004
;   CNetGame* g_CNetGamePtr = 01d51c20
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_007c3978
;   undefined4 g_CFieldNotesInstance.is_displayed
;   undefined4 DAT_01ccff98
;   undefined4 DAT_01cd01f0
;   undefined4 DAT_01cd01f4
;   undefined4 DAT_01cd0b40
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; Called Functions:
;   core_netgame.cpp_CNetGame_getMyControls_FUN_00530660
;   crt_memory.c_memset_FUN_005bfb70
;   wincore_winrun.cpp_setCursorPosition_FUN_005b2750
;
; *****************************************************************************

section .text

    PUSH 0x30                           ; 004d19d0
        ;   Label: core_game.cpp_FUN_004d19d0
    PUSH 0x0                            ; 004d19d2
    MOV EDX,dword ptr [0x00622580]      ; 004d19d4 | g_CNetGamePtr
    PUSH EDX                            ; 004d19da
    CALL core_netgame.cpp_CNetGame_getMyControls_FUN_00530660 ; 004d19db
        ;   XREF to: 00530660 (UNCONDITIONAL_CALL)  ; SPlayerInput * core_netgame.cpp_CNetGame_getMyControls_FUN_00530660(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004d19e0
    PUSH EAX                            ; 004d19e3
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004d19e4
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d19e9
    PUSH 0x258                          ; 004d19ec
    PUSH 0x0                            ; 004d19f1
    PUSH 0x1ccff98                      ; 004d19f3 | DAT_01ccff98
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004d19f8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EAX,[0x00622c18]                ; 004d19fd | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004d1a02 | g_CDemonSetInstance.selected_camera_index
    MOV [0x01cd01f4],EAX                ; 004d1a08 | DAT_01cd01f4
    MOV EAX,[0x0061d418]                ; 004d1a0d | g_CFieldNotesPtr
    MOV ECX,dword ptr [EAX + 0x40]      ; 004d1a12 | g_CFieldNotesInstance.is_displayed
    ADD ESP,0xc                         ; 004d1a15
    TEST ECX,ECX                        ; 004d1a18
    JZ 0x004d1a3b                       ; 004d1a1a
        ;   XREF to: 004d1a3b (CONDITIONAL_JUMP)  ; LAB_004d1a3b
    MOV EAX,[0x0061d418]                ; 004d1a1c | g_CFieldNotesPtr
        ;   Label: LAB_004d1a1c
    CMP dword ptr [EAX + 0x40],0x0      ; 004d1a21 | g_CFieldNotesInstance.is_displayed
    JZ 0x004d1a31                       ; 004d1a25
        ;   XREF to: 004d1a31 (CONDITIONAL_JUMP)  ; LAB_004d1a31
    MOV dword ptr [0x01cd0b40],0xffffffff ; 004d1a27 | DAT_01cd0b40
    CMP dword ptr [0x007c3978],0x0      ; 004d1a31 | DAT_007c3978
        ;   Label: LAB_004d1a31
    JNZ 0x004d1a72                      ; 004d1a38
        ;   XREF to: 004d1a72 (CONDITIONAL_JUMP)  ; LAB_004d1a72
    RET                                 ; 004d1a3a
    CMP dword ptr [0x007c3978],0x0      ; 004d1a3b | DAT_007c3978
        ;   Label: LAB_004d1a3b
    JNZ 0x004d1a1c                      ; 004d1a42
        ;   XREF to: 004d1a1c (CONDITIONAL_JUMP)  ; LAB_004d1a1c
    MOV EAX,[0x0061b49c]                ; 004d1a44 | DAT_0061b49c
    MOV EDX,EAX                         ; 004d1a49
    SAR EDX,0x1f                        ; 004d1a4b
    SUB EAX,EDX                         ; 004d1a4e
    SAR EAX,0x1                         ; 004d1a50
    PUSH EAX                            ; 004d1a52
    MOV EAX,[0x0061b498]                ; 004d1a53 | DAT_0061b498
    MOV EDX,EAX                         ; 004d1a58
    SAR EDX,0x1f                        ; 004d1a5a
    SUB EAX,EDX                         ; 004d1a5d
    SAR EAX,0x1                         ; 004d1a5f
    PUSH EAX                            ; 004d1a61
    MOV dword ptr [0x01cd01f0],ECX      ; 004d1a62 | DAT_01cd01f0
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005b2750 ; 004d1a68
        ;   XREF to: 005b2750 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005b2750(int x, int y)
    ADD ESP,0x8                         ; 004d1a6d
    JMP 0x004d1a1c                      ; 004d1a70
        ;   XREF to: 004d1a1c (UNCONDITIONAL_JUMP)  ; LAB_004d1a1c
    MOV dword ptr [0x01cd0b40],0xffffffff ; 004d1a72 | DAT_01cd0b40
        ;   Label: LAB_004d1a72
    RET                                 ; 004d1a7c

