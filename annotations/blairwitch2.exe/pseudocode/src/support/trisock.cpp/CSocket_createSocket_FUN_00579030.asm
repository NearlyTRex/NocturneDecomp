; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_00579030(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_trisock.cpp_FUN_00579890 at 005799c5
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579030
        ;   Label: support_trisock.cpp_CSocket_createSocket_FUN_00579030
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579031
    PUSH EBX                            ; 00579035
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 00579036
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057903b
    PUSH 0x0                            ; 0057903e
    PUSH 0x1                            ; 00579040
    PUSH 0x2                            ; 00579042
    CALL crt_wsock32.c_socket           ; 00579044
        ;   XREF to: 005c7526 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 00579049
    CMP EAX,-0x1                        ; 0057904b
    SETNZ AL                            ; 0057904e
    AND EAX,0xff                        ; 00579051
    POP EBX                             ; 00579056
    RET                                 ; 00579057

