; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_actor_cpp_copyFloat_FUN_004104f0(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040d9d1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104f0
        ;   Label: core_actor.cpp_copyFloat_FUN_004104f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004104f4
    MOV EAX,dword ptr [EAX]             ; 004104f8
    MOV dword ptr [EDX],EAX             ; 004104fa
    MOV EAX,EDX                         ; 004104fc
    RET                                 ; 004104fe

