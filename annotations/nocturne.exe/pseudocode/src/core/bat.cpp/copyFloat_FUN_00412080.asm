; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_bat_cpp_copyFloat_FUN_00412080(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00412080
        ;   Label: core_bat.cpp_copyFloat_FUN_00412080
    MOV EAX,dword ptr [ESP + 0x8]       ; 00412084
    MOV EAX,dword ptr [EAX]             ; 00412088
    MOV dword ptr [EDX],EAX             ; 0041208a
    MOV EAX,EDX                         ; 0041208c
    RET                                 ; 0041208e

