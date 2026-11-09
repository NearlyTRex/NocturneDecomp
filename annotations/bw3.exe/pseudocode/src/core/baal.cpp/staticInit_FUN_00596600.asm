; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baal_cpp_staticInit_FUN_00596600(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00596600
        ;   Label: core_baal.cpp_staticInit_FUN_00596600
    PUSH 0x1                            ; 00596605
    PUSH 0x6073bc                       ; 00596607
    PUSH 0x596630                       ; 0059660c
    PUSH 0x5d9489                       ; 00596611
    PUSH 0x2d24aa8                      ; 00596616
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059661b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00596620
    RET                                 ; 00596623

