; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004910b0(CEventList *param_1)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_00489360 at 0048936f
;   core_game.cpp_FUN_004bbf70 at 004bc0c7
;   core_game.cpp_FUN_004bc840 at 004bc9aa
;
; Referenced Globals:
;   TerminatedCString s_puzzleModeHard_005d4d13
;   TerminatedCString s_combatModeHard_005d4d22
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field180_0xe4
;   undefined4 g_CGameInstance.field184_0xe8
;
; Called Functions:
;   core_event.cpp_FUN_00491110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004910b0
        ;   Label: core_event.cpp_FUN_004910b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004910b1
    MOV EAX,[0x00616494]                ; 004910b5 | g_CGamePtr
    MOV dword ptr [EBX + 0x1908],0x0    ; 004910ba
    MOV EDX,dword ptr [EAX + 0xe4]      ; 004910c4 | g_CGameInstance.field180_0xe4
    CMP EDX,0x1                         ; 004910ca
    JZ 0x004910e1                       ; 004910cd
        ;   XREF to: 004910e1 (CONDITIONAL_JUMP)  ; LAB_004910e1
    MOV EAX,[0x00616494]                ; 004910cf | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004910cf
    MOV ECX,dword ptr [EAX + 0xe8]      ; 004910d4 | g_CGameInstance.field184_0xe8
    CMP ECX,0x1                         ; 004910da
    JZ 0x004910f2                       ; 004910dd
        ;   XREF to: 004910f2 (CONDITIONAL_JUMP)  ; LAB_004910f2
    POP EBX                             ; 004910df
    RET                                 ; 004910e0
    PUSH EDX                            ; 004910e1
        ;   Label: LAB_004910e1
    PUSH 0x5d4d13                       ; 004910e2 | = "puzzleModeHard"
    PUSH EBX                            ; 004910e7
    CALL core_event.cpp_FUN_00491110    ; 004910e8
        ;   XREF to: 00491110 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00491110(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004910ed
    JMP 0x004910cf                      ; 004910f0
        ;   XREF to: 004910cf (UNCONDITIONAL_JUMP)  ; LAB_004910cf
    PUSH ECX                            ; 004910f2
        ;   Label: LAB_004910f2
    PUSH 0x5d4d22                       ; 004910f3 | = "combatModeHard"
    PUSH EBX                            ; 004910f8
    CALL core_event.cpp_FUN_00491110    ; 004910f9
        ;   XREF to: 00491110 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00491110(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004910fe
    POP EBX                             ; 00491101
    RET                                 ; 00491102

