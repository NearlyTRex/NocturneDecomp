; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_FUN_0053f830(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087b1
;
; Called Functions:
;   core_netgame.cpp_CNetGame_FUN_0053fd00
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
;   support_trisock.cpp_cleanupWinsock_FUN_005e1ee0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0053f830
        ;   Label: core_netgame.cpp_CNetGame_FUN_0053f830
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053f832
    PUSH EDX                            ; 0053f836
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053f837
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 0053f83c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053f83f
    ADD EAX,0x170                       ; 0053f843
    PUSH EAX                            ; 0053f848
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20 ; 0053f849
        ;   XREF to: 005e1d20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20(SOCKET * socket)
    ADD ESP,0x4                         ; 0053f84e
    JMP 0x005e1ee0                      ; 0053f851
        ;   XREF to: 005e1ee0 (UNCONDITIONAL_CALL)

