; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_actor_cpp_copyFloat1_FUN_0040e2d0(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040e2d0
        ;   Label: core_actor.cpp_copyFloat1_FUN_0040e2d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e2d4
    MOV EAX,dword ptr [EAX]             ; 0040e2d8
    MOV dword ptr [EDX],EAX             ; 0040e2da
    MOV EAX,EDX                         ; 0040e2dc
    RET                                 ; 0040e2de

