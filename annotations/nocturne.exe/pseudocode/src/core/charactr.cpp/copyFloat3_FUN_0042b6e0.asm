; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_charactr_cpp_copyFloat3_FUN_0042b6e0(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b6e0
        ;   Label: core_charactr.cpp_copyFloat3_FUN_0042b6e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b6e4
    MOV EAX,dword ptr [EAX]             ; 0042b6e8
    MOV dword ptr [EDX],EAX             ; 0042b6ea
    MOV EAX,EDX                         ; 0042b6ec
    RET                                 ; 0042b6ee

