; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_0056f900(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_trisock.cpp_FUN_0056fef0 at 00570025
;
; Called Functions:
;   crt_wsock32.c_socket
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f900
        ;   Label: support_trisock.cpp_CSocket_createSocket_FUN_0056f900
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f901
    PUSH EBX                            ; 0056f905
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 0056f906
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0056f90b
    PUSH 0x0                            ; 0056f90e
    PUSH 0x1                            ; 0056f910
    PUSH 0x2                            ; 0056f912
    CALL crt_wsock32.c_socket           ; 0056f914
        ;   XREF to: 005b25c8 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_socket(int af, int type, int protocol)
    MOV dword ptr [EBX],EAX             ; 0056f919
    CMP EAX,-0x1                        ; 0056f91b
    SETNZ AL                            ; 0056f91e
    AND EAX,0xff                        ; 0056f921
    POP EBX                             ; 0056f926
    RET                                 ; 0056f927

