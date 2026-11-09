; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_00541dd0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00541dd0
        ;   Label: core_scat.cpp_FUN_00541dd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00541dd4
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 00541dd8
    RET                                 ; 00541dde

