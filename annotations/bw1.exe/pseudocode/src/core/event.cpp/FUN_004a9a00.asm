; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004a9a00(int param_1)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_004a19d0 at 004a19df
;   core_game.cpp_FUN_004d6990 at 004d6ae7
;   core_game.cpp_FUN_004d7250 at 004d7499
;
; Referenced Globals:
;   TerminatedCString s_puzzleModeHard_005deb30
;   TerminatedCString s_combatModeHard_005deb3f
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field228_0xe4
;   undefined4 g_CGameInstance.field232_0xe8
;
; Called Functions:
;   core_event.cpp_FUN_004a9a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9a00
        ;   Label: core_event.cpp_FUN_004a9a00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9a01
    MOV EAX,[0x0061d95c]                ; 004a9a05 | g_CGamePtr
    MOV dword ptr [EBX + 0x1908],0x0    ; 004a9a0a
    MOV EDX,dword ptr [EAX + 0xe4]      ; 004a9a14 | g_CGameInstance.field228_0xe4
    CMP EDX,0x1                         ; 004a9a1a
    JZ 0x004a9a31                       ; 004a9a1d
        ;   XREF to: 004a9a31 (CONDITIONAL_JUMP)  ; LAB_004a9a31
    MOV EAX,[0x0061d95c]                ; 004a9a1f | g_CGamePtr
        ;   Label: LAB_004a9a1f
    MOV ECX,dword ptr [EAX + 0xe8]      ; 004a9a24 | g_CGameInstance.field232_0xe8
    CMP ECX,0x1                         ; 004a9a2a
    JZ 0x004a9a42                       ; 004a9a2d
        ;   XREF to: 004a9a42 (CONDITIONAL_JUMP)  ; LAB_004a9a42
    POP EBX                             ; 004a9a2f
    RET                                 ; 004a9a30
    PUSH EDX                            ; 004a9a31
        ;   Label: LAB_004a9a31
    PUSH 0x5deb30                       ; 004a9a32 | = "puzzleModeHard"
    PUSH EBX                            ; 004a9a37
    CALL core_event.cpp_FUN_004a9a60    ; 004a9a38
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004a9a3d
    JMP 0x004a9a1f                      ; 004a9a40
        ;   XREF to: 004a9a1f (UNCONDITIONAL_JUMP)  ; LAB_004a9a1f
    PUSH ECX                            ; 004a9a42
        ;   Label: LAB_004a9a42
    PUSH 0x5deb3f                       ; 004a9a43 | = "combatModeHard"
    PUSH EBX                            ; 004a9a48
    CALL core_event.cpp_FUN_004a9a60    ; 004a9a49
        ;   XREF to: 004a9a60 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a60()
    ADD ESP,0xc                         ; 004a9a4e
    POP EBX                             ; 004a9a51
    RET                                 ; 004a9a52

