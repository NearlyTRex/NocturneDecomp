; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3040(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 004b3040
        ;   Label: FUN_004b3040
    PUSH 0x1                            ; 004b3045
    PUSH 0x5ba910                       ; 004b3047
    PUSH 0x4b3070                       ; 004b304c
    PUSH 0x585445                       ; 004b3051
    PUSH 0x1cae05c                      ; 004b3056
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b305b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b3060
    RET                                 ; 004b3063

