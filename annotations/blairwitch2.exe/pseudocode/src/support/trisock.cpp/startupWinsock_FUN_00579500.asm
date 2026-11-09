; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_startupWinsock_FUN_00579500(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_init_FUN_0050b340 at 0050b370
;
; Called Functions:
;   crt_wsock32.c_WSAStartup
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 00579500
        ;   Label: support_trisock.cpp_startupWinsock_FUN_00579500
    MOV EAX,ESP                         ; 00579506
    PUSH EAX                            ; 00579508
    PUSH 0x101                          ; 00579509
    CALL crt_wsock32.c_WSAStartup       ; 0057950e
        ;   XREF to: 005c74cc (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAStartup(WORD w_version_requested, LPWSADATA lp_wsa_data)
    ADD ESP,0x190                       ; 00579513
    RET                                 ; 00579519

