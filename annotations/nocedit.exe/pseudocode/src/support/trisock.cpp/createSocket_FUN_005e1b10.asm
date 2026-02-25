; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_createSocket_FUN_005e1b10(_SOCKET *socket_handle)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
;
; Called Functions:
;   crt_wsock32.c_shutdown
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1b10
        ;   Label: support_trisock.cpp_createSocket_FUN_005e1b10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e1b11
    PUSH EBX                            ; 005e1b15
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20 ; 005e1b16
        ;   XREF to: 005e1d20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 005e1b1b
    PUSH 0x0                            ; 005e1b1e
    PUSH 0x1                            ; 005e1b20
    PUSH 0x2                            ; 005e1b22
    CALL crt_wsock32.c_shutdown         ; 005e1b24
        ;   XREF to: 00610f28 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_shutdown(_SOCKET s, int how)
    MOV dword ptr [EBX],EAX             ; 005e1b29
    CMP EAX,-0x1                        ; 005e1b2b
    SETNZ AL                            ; 005e1b2e
    AND EAX,0xff                        ; 005e1b31
    POP EBX                             ; 005e1b36
    RET                                 ; 005e1b37

