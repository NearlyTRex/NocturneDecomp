; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_trisock.cpp_listenSocket_FUN_005e1d60(SOCKET * socket_handle)
;
; Parameters:
; SOCKET *         Stack[0x4]:4   socket_handle
;
; Called Functions:
;   crt_wsock32.c_listen
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1d60
        ;   Label: support_trisock.cpp_listenSocket_FUN_005e1d60
    PUSH 0x1                            ; 005e1d64
    MOV EDX,dword ptr [EAX]             ; 005e1d66
    PUSH EDX                            ; 005e1d68
    CALL crt_wsock32.c_listen           ; 005e1d69 | int crt_wsock32.c_listen(SOCKET s, int backlog)
        ;   XREF to: 00610ef8 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005e1d6e
    SETZ AL                             ; 005e1d70
    AND EAX,0xff                        ; 005e1d73
    RET                                 ; 005e1d78

