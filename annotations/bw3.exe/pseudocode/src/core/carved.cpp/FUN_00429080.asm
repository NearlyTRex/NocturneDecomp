; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00429080(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00429080
        ;   Label: core_carved.cpp_FUN_00429080
    PUSH EDX                            ; 00429084
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0 ; 00429085
        ;   XREF to: 0040c7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042908a
    RET                                 ; 0042908d

