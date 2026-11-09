; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * support_trisock_cpp_FUN_0059c4c0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   support_trisock.cpp_convertSockAddr_FUN_0059c760 at 0059c78c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c4c0
        ;   Label: support_trisock.cpp_FUN_0059c4c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059c4c4
    MOV EAX,dword ptr [EAX]             ; 0059c4c8
    MOV dword ptr [EDX],EAX             ; 0059c4ca
    MOV EAX,EDX                         ; 0059c4cc
    RET                                 ; 0059c4ce

