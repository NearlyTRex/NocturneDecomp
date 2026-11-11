; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059ab70(int *param_1,int *param_2)
;
;
; XREF[5]:
;   core_event.cpp_FUN_00489670 at 00489cbf
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b65fb
;   unkaddr_0059aa80.cpp_CAudioRecPuzzle_process_FUN_0059b5a0 at 0059b718
;   unkaddr_0059aa80.cpp_CExamplePuzzle_onMouse_FUN_0059adf0 at 0059ae29
;   unkaddr_0059aa80.cpp_FUN_0059ac10 at 0059ac4f
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a384
;   undefined4 DAT_026677e0
;   undefined4 DAT_026677e8
;
; Called Functions:
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059ab70
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059ab70
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059ab71
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059ab75
    TEST ECX,ECX                        ; 0059ab79
    JZ 0x0059aba8                       ; 0059ab7b
        ;   XREF to: 0059aba8 (CONDITIONAL_JUMP)  ; LAB_0059aba8
    MOV EAX,[0x01c2a384]                ; 0059ab7d | DAT_01c2a384
    MOV dword ptr [0x026677e0],EDX      ; 0059ab82 | DAT_026677e0
    MOV [0x026677e8],EAX                ; 0059ab88 | DAT_026677e8
    PUSH ECX                            ; 0059ab8d
        ;   Label: LAB_0059ab8d
    MOV EAX,dword ptr [EDX]             ; 0059ab8e
    PUSH EDX                            ; 0059ab90
    CALL dword ptr [EAX + 0x14]         ; 0059ab91
    ADD ESP,0x8                         ; 0059ab94
    MOV ESI,dword ptr [0x00616494]      ; 0059ab97 | g_CGamePtr
    PUSH ESI                            ; 0059ab9d
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250 ; 0059ab9e
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame * this_ptr)
    ADD ESP,0x4                         ; 0059aba3
    POP ESI                             ; 0059aba6
    RET                                 ; 0059aba7
    MOV dword ptr [0x026677e0],ECX      ; 0059aba8 | DAT_026677e0
        ;   Label: LAB_0059aba8
    JMP 0x0059ab8d                      ; 0059abae
        ;   XREF to: 0059ab8d (UNCONDITIONAL_JUMP)  ; LAB_0059ab8d

