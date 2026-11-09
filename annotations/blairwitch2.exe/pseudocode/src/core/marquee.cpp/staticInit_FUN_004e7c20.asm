; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_staticInit_FUN_004e7c20(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004e7c20
        ;   Label: core_marquee.cpp_staticInit_FUN_004e7c20
    PUSH 0x1                            ; 004e7c25
    PUSH 0x617f28                       ; 004e7c27
    PUSH 0x4e7c50                       ; 004e7c2c
    PUSH 0x5dc745                       ; 004e7c31
    PUSH 0x1d04774                      ; 004e7c36
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004e7c3b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e7c40
    RET                                 ; 004e7c43

