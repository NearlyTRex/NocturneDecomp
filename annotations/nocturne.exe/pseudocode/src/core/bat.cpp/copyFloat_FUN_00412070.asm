; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_bat_cpp_copyFloat_FUN_00412070(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00412070
        ;   Label: core_bat.cpp_copyFloat_FUN_00412070
    MOV EAX,dword ptr [ESP + 0x8]       ; 00412074
    MOV EAX,dword ptr [EAX]             ; 00412078
    MOV dword ptr [EDX],EAX             ; 0041207a
    MOV EAX,EDX                         ; 0041207c
    RET                                 ; 0041207e

