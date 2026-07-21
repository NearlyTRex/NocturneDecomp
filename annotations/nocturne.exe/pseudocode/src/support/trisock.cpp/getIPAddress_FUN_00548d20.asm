; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trisock_cpp_getIPAddress_FUN_00548d20(undefined4 *param_1)
;
;
; XREF[1]:
;   support_trisock.cpp_buildSockaddrIn_FUN_00548dc0 at 00548de6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548d20
        ;   Label: support_trisock.cpp_getIPAddress_FUN_00548d20
    MOV EAX,dword ptr [EAX]             ; 00548d24
    RET                                 ; 00548d26

