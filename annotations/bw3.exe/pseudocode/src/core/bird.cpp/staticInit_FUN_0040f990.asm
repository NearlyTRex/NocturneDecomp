; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bird_cpp_staticInit_FUN_0040f990(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 0040f990
        ;   Label: core_bird.cpp_staticInit_FUN_0040f990
    PUSH 0x1                            ; 0040f995
    PUSH 0x5f0c18                       ; 0040f997
    PUSH 0x40f9c0                       ; 0040f99c
    PUSH 0x5b6375                       ; 0040f9a1
    PUSH 0x7dff10                       ; 0040f9a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040f9ab
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f9b0
    RET                                 ; 0040f9b3

