; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0050b3f0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e4e20 at 004e4e2f
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0
;   crt_wsock32.c_WSACleanup
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0050b3f0
        ;   Label: core_netgame.cpp_CNetGame_shutdown_FUN_0050b3f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050b3f2
    PUSH EDX                            ; 0050b3f6
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050b3f7
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050b3fc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b3ff
    ADD EAX,0x180                       ; 0050b403
    PUSH EAX                            ; 0050b408
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0050b409
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0050b40e
    JMP 0x00579520                      ; 0050b411
        ;   XREF to: 00579520 (UNCONDITIONAL_CALL)

