; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_staticInit_FUN_004dff00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004dff00
        ;   Label: core_ladder.cpp_staticInit_FUN_004dff00
    PUSH 0x2                            ; 004dff05
    PUSH 0x617dd8                       ; 004dff07
    PUSH 0x4dff30                       ; 004dff0c
    PUSH 0x5dbd4e                       ; 004dff11
    PUSH 0x1d02f88                      ; 004dff16
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004dff1b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004dff20
    RET                                 ; 004dff23

