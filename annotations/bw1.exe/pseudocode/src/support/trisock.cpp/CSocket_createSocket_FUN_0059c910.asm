; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_0059c910(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c910
        ;   Label: support_trisock.cpp_CSocket_createSocket_FUN_0059c910
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c911
    PUSH EBX                            ; 0059c915
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059c916
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059c91b
    PUSH 0x0                            ; 0059c91e
    PUSH 0x1                            ; 0059c920
    PUSH 0x2                            ; 0059c922
    CALL crt_wsock32.c_socket           ; 0059c924
        ;   XREF to: 005cf838 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 0059c929
    CMP EAX,-0x1                        ; 0059c92b
    SETNZ AL                            ; 0059c92e
    AND EAX,0xff                        ; 0059c931
    POP EBX                             ; 0059c936
    RET                                 ; 0059c937

