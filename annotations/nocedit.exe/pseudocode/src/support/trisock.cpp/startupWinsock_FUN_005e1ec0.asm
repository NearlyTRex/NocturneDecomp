; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_trisock.cpp_startupWinsock_FUN_005e1ec0(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_FUN_0053f780 at 0053f7b0
;
; Called Functions:
;   crt_wsock32.c_WSAStartup
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 005e1ec0
        ;   Label: support_trisock.cpp_startupWinsock_FUN_005e1ec0
    MOV EAX,ESP                         ; 005e1ec6
    PUSH EAX                            ; 005e1ec8
    PUSH 0x101                          ; 005e1ec9
    CALL crt_wsock32.c_WSAStartup       ; 005e1ece | int crt_wsock32.c_WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData)
        ;   XREF to: 00610eda (UNCONDITIONAL_CALL)
    ADD ESP,0x190                       ; 005e1ed3
    RET                                 ; 005e1ed9

