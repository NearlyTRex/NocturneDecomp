; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_dlight_cpp_copyFloat_FUN_00476c30(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476c30
        ;   Label: core_dlight.cpp_copyFloat_FUN_00476c30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476c34
    MOV EAX,dword ptr [EAX]             ; 00476c38
    MOV dword ptr [EDX],EAX             ; 00476c3a
    MOV EAX,EDX                         ; 00476c3c
    RET                                 ; 00476c3e

