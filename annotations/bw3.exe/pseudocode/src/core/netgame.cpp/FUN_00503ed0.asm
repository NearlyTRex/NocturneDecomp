; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_FUN_00503ed0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e4c70 at 004e4c7f
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;   unkafter_trisock.cpp_FUN_00571f10
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00503ed0
        ;   Label: core_netgame.cpp_FUN_00503ed0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00503ed2
    PUSH EDX                            ; 00503ed6
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 00503ed7
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 00503edc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00503edf
    ADD EAX,0x180                       ; 00503ee3
    PUSH EAX                            ; 00503ee8
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00503ee9
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00503eee
    JMP 0x00571f10                      ; 00503ef1
        ;   XREF to: 00571f10 (UNCONDITIONAL_CALL)

