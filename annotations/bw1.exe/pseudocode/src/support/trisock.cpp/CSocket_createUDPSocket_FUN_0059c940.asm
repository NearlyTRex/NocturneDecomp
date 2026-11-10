; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0059c940(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0052c970 at 0052c99b
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c940
        ;   Label: support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c941
    PUSH EBX                            ; 0059c945
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059c946
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059c94b
    PUSH 0x0                            ; 0059c94e
    PUSH 0x2                            ; 0059c950
    PUSH 0x2                            ; 0059c952
    CALL crt_wsock32.c_socket           ; 0059c954
        ;   XREF to: 005cf838 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 0059c959
    CMP EAX,-0x1                        ; 0059c95b
    SETNZ AL                            ; 0059c95e
    AND EAX,0xff                        ; 0059c961
    POP EBX                             ; 0059c966
    RET                                 ; 0059c967

