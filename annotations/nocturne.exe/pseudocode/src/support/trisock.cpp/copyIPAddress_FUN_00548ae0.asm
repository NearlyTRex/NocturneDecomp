; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * support_trisock_cpp_copyIPAddress_FUN_00548ae0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   support_trisock.cpp_convertSockAddr_FUN_00548d50 at 00548d7c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548ae0
        ;   Label: support_trisock.cpp_copyIPAddress_FUN_00548ae0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548ae4
    MOV EAX,dword ptr [EAX]             ; 00548ae8
    MOV dword ptr [EDX],EAX             ; 00548aea
    MOV EAX,EDX                         ; 00548aec
    RET                                 ; 00548aee

