; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0056f930(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_00504270 at 0050429b
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f930
        ;   Label: support_trisock.cpp_CSocket_createUDPSocket_FUN_0056f930
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f931
    PUSH EBX                            ; 0056f935
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 0056f936
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0056f93b
    PUSH 0x0                            ; 0056f93e
    PUSH 0x2                            ; 0056f940
    PUSH 0x2                            ; 0056f942
    CALL crt_wsock32.c_socket           ; 0056f944
        ;   XREF to: 005b25c8 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 0056f949
    CMP EAX,-0x1                        ; 0056f94b
    SETNZ AL                            ; 0056f94e
    AND EAX,0xff                        ; 0056f951
    POP EBX                             ; 0056f956
    RET                                 ; 0056f957

