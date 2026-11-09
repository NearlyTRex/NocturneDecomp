; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_00579060(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_FUN_0050b790 at 0050b7bb
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579060
        ;   Label: support_trisock.cpp_CSocket_createUDPSocket_FUN_00579060
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579061
    PUSH EBX                            ; 00579065
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 00579066
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057906b
    PUSH 0x0                            ; 0057906e
    PUSH 0x2                            ; 00579070
    PUSH 0x2                            ; 00579072
    CALL crt_wsock32.c_socket           ; 00579074
        ;   XREF to: 005c7526 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 00579079
    CMP EAX,-0x1                        ; 0057907b
    SETNZ AL                            ; 0057907e
    AND EAX,0xff                        ; 00579081
    POP EBX                             ; 00579086
    RET                                 ; 00579087

