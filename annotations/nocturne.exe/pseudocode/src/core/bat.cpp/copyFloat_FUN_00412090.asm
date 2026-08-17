; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_bat_cpp_copyFloat_FUN_00412090(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00412090
        ;   Label: core_bat.cpp_copyFloat_FUN_00412090
    MOV EAX,dword ptr [ESP + 0x8]       ; 00412094
    MOV EAX,dword ptr [EAX]             ; 00412098
    MOV dword ptr [EDX],EAX             ; 0041209a
    MOV EAX,EDX                         ; 0041209c
    RET                                 ; 0041209e

