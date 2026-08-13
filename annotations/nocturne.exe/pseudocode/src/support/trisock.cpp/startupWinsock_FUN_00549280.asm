; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_startupWinsock_FUN_00549280(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_init_FUN_004e9910 at 004e9940
;
; Called Functions:
;   crt_wsock32.c_WSAStartup
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 00549280
        ;   Label: support_trisock.cpp_startupWinsock_FUN_00549280
    MOV EAX,ESP                         ; 00549286
    PUSH EAX                            ; 00549288
    PUSH 0x101                          ; 00549289
    CALL crt_wsock32.c_WSAStartup       ; 0054928e
        ;   XREF to: 00574bb4 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAStartup(WORD w_version_requested, LPWSADATA lp_wsa_data)
    ADD ESP,0x190                       ; 00549293
    RET                                 ; 00549299

