; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 * core_actor_cpp_FUN_004104d0(void)
;
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040dd63
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104d0
        ;   Label: core_actor.cpp_FUN_004104d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004104d4
    MOV EAX,dword ptr [EAX]             ; 004104d8
    MOV dword ptr [EDX],EAX             ; 004104da
    MOV EAX,EDX                         ; 004104dc
    RET                                 ; 004104de

