; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_00494880(int param_1)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_0048bfb0 at 0048bfbf
;   core_game.cpp_FUN_004bdfb0 at 004be12d
;   core_game.cpp_FUN_004be8d0 at 004bea46
;
; Referenced Globals:
;   TerminatedCString s_puzzleModeHard_005bfe6c
;   TerminatedCString s_combatModeHard_005bfe7b
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field236_0xec
;   undefined4 g_CGameInstance.field240_0xf0
;
; Called Functions:
;   core_event.cpp_FUN_004948e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494880
        ;   Label: core_event.cpp_FUN_00494880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00494881
    MOV EAX,[0x005fe9dc]                ; 00494885 | g_CGamePtr
    MOV dword ptr [EBX + 0x1908],0x0    ; 0049488a
    MOV EDX,dword ptr [EAX + 0xec]      ; 00494894 | g_CGameInstance.field236_0xec
    CMP EDX,0x1                         ; 0049489a
    JZ 0x004948b1                       ; 0049489d
        ;   XREF to: 004948b1 (CONDITIONAL_JUMP)  ; LAB_004948b1
    MOV EAX,[0x005fe9dc]                ; 0049489f | g_CGamePtr
        ;   Label: LAB_0049489f
    MOV ECX,dword ptr [EAX + 0xf0]      ; 004948a4 | g_CGameInstance.field240_0xf0
    CMP ECX,0x1                         ; 004948aa
    JZ 0x004948c2                       ; 004948ad
        ;   XREF to: 004948c2 (CONDITIONAL_JUMP)  ; LAB_004948c2
    POP EBX                             ; 004948af
    RET                                 ; 004948b0
    PUSH EDX                            ; 004948b1
        ;   Label: LAB_004948b1
    PUSH 0x5bfe6c                       ; 004948b2 | = "puzzleModeHard"
    PUSH EBX                            ; 004948b7
    CALL core_event.cpp_FUN_004948e0    ; 004948b8
        ;   XREF to: 004948e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004948e0()
    ADD ESP,0xc                         ; 004948bd
    JMP 0x0049489f                      ; 004948c0
        ;   XREF to: 0049489f (UNCONDITIONAL_JUMP)  ; LAB_0049489f
    PUSH ECX                            ; 004948c2
        ;   Label: LAB_004948c2
    PUSH 0x5bfe7b                       ; 004948c3 | = "combatModeHard"
    PUSH EBX                            ; 004948c8
    CALL core_event.cpp_FUN_004948e0    ; 004948c9
        ;   XREF to: 004948e0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004948e0()
    ADD ESP,0xc                         ; 004948ce
    POP EBX                             ; 004948d1
    RET                                 ; 004948d2

