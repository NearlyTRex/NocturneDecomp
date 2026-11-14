; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_staticInit_FUN_004d3790(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004d3790
        ;   Label: core_hotdemon.cpp_staticInit_FUN_004d3790
    PUSH 0x1                            ; 004d3795
    PUSH 0x617adc                       ; 004d3797
    PUSH 0x4d37c0                       ; 004d379c
    PUSH 0x5da4e9                       ; 004d37a1
    PUSH 0x1cee03c                      ; 004d37a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004d37ab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d37b0
    RET                                 ; 004d37b3

