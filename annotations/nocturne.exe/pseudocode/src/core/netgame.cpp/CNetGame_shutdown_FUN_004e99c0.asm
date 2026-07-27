; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(int param_1)
;
;
; XREF[1]:
;   core_main.c_FUN_004c90e0 at 004c930f
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   Ordinal_116
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004e99c0
        ;   Label: core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e99c2
    PUSH EDX                            ; 004e99c6
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e99c7
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90()
    ADD ESP,0x8                         ; 004e99cc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e99cf
    ADD EAX,0x170                       ; 004e99d3
    PUSH EAX                            ; 004e99d8
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110 ; 004e99d9
        ;   XREF to: 00549110 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110()
    ADD ESP,0x4                         ; 004e99de
    JMP 0x005492a0                      ; 004e99e1
        ;   XREF to: 005492a0 (UNCONDITIONAL_CALL)

