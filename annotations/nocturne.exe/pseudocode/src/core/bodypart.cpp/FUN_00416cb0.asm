; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00416cb0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00416cb0
        ;   Label: core_bodypart.cpp_FUN_00416cb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00416cb4
    MOV dword ptr [EDX + 0xf10],EAX     ; 00416cb8
    RET                                 ; 00416cbe

