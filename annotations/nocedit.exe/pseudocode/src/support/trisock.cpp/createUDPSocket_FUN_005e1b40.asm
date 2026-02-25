; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_createUDPSocket_FUN_005e1b40(_SOCKET *socket_handle)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0 at 0053fbeb
;
; Called Functions:
;   crt_wsock32.c_shutdown
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1b40
        ;   Label: support_trisock.cpp_createUDPSocket_FUN_005e1b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e1b41
    PUSH EBX                            ; 005e1b45
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20 ; 005e1b46
        ;   XREF to: 005e1d20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 005e1b4b
    PUSH 0x0                            ; 005e1b4e
    PUSH 0x2                            ; 005e1b50
    PUSH 0x2                            ; 005e1b52
    CALL crt_wsock32.c_shutdown         ; 005e1b54
        ;   XREF to: 00610f28 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_shutdown(_SOCKET s, int how)
    MOV dword ptr [EBX],EAX             ; 005e1b59
    CMP EAX,-0x1                        ; 005e1b5b
    SETNZ AL                            ; 005e1b5e
    AND EAX,0xff                        ; 005e1b61
    POP EBX                             ; 005e1b66
    RET                                 ; 005e1b67

