; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_bat_cpp_FUN_00412080(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00412080
        ;   Label: core_bat.cpp_FUN_00412080
    MOV EAX,dword ptr [ESP + 0x8]       ; 00412084
    MOV EAX,dword ptr [EAX]             ; 00412088
    MOV dword ptr [EDX],EAX             ; 0041208a
    MOV EAX,EDX                         ; 0041208c
    RET                                 ; 0041208e

