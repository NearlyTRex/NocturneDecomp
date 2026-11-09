; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_staticInit_FUN_004c4840(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004c4840
        ;   Label: core_glass.cpp_staticInit_FUN_004c4840
    PUSH 0x6                            ; 004c4845
    PUSH 0x616794                       ; 004c4847
    PUSH 0x4c4870                       ; 004c484c
    PUSH 0x5d9272                       ; 004c4851
    PUSH 0x1cb8248                      ; 004c4856
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004c485b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c4860
    RET                                 ; 004c4863

