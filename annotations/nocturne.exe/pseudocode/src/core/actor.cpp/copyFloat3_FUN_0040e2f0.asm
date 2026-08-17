; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_actor_cpp_copyFloat3_FUN_0040e2f0(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040e2f0
        ;   Label: core_actor.cpp_copyFloat3_FUN_0040e2f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e2f4
    MOV EAX,dword ptr [EAX]             ; 0040e2f8
    MOV dword ptr [EDX],EAX             ; 0040e2fa
    MOV EAX,EDX                         ; 0040e2fc
    RET                                 ; 0040e2fe

