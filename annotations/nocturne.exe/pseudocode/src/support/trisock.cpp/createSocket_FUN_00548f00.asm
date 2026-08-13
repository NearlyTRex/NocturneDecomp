; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_createSocket_FUN_00548f00(_SOCKET *socket_handle)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548f00
        ;   Label: support_trisock.cpp_createSocket_FUN_00548f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548f01
    PUSH EBX                            ; 00548f05
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110 ; 00548f06
        ;   XREF to: 00549110 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 00548f0b
    PUSH 0x0                            ; 00548f0e
    PUSH 0x1                            ; 00548f10
    PUSH 0x2                            ; 00548f12
    CALL crt_wsock32.c_socket           ; 00548f14
        ;   XREF to: 00574bfc (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 00548f19
    CMP EAX,-0x1                        ; 00548f1b
    SETNZ AL                            ; 00548f1e
    AND EAX,0xff                        ; 00548f21
    POP EBX                             ; 00548f26
    RET                                 ; 00548f27

