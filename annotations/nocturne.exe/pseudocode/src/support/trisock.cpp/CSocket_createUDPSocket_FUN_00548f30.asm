; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_00548f30(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9d7b
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_00549110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548f30
        ;   Label: support_trisock.cpp_CSocket_createUDPSocket_FUN_00548f30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548f31
    PUSH EBX                            ; 00548f35
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00549110 ; 00548f36
        ;   XREF to: 00549110 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00549110(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00548f3b
    PUSH 0x0                            ; 00548f3e
    PUSH 0x2                            ; 00548f40
    PUSH 0x2                            ; 00548f42
    CALL crt_wsock32.c_socket           ; 00548f44
        ;   XREF to: 00574bfc (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 00548f49
    CMP EAX,-0x1                        ; 00548f4b
    SETNZ AL                            ; 00548f4e
    AND EAX,0xff                        ; 00548f51
    POP EBX                             ; 00548f56
    RET                                 ; 00548f57

