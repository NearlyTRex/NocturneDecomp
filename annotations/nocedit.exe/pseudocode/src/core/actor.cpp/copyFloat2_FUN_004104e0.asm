; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_actor_cpp_copyFloat2_FUN_004104e0(float *dst,float *src)
;
; Parameters:
; float *          Stack[0x4]:4   dst
; float *          Stack[0x8]:4   src
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040d9e5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104e0
        ;   Label: core_actor.cpp_copyFloat2_FUN_004104e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004104e4
    MOV EAX,dword ptr [EAX]             ; 004104e8
    MOV dword ptr [EDX],EAX             ; 004104ea
    MOV EAX,EDX                         ; 004104ec
    RET                                 ; 004104ee

