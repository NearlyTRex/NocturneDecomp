; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_staticInit_FUN_004e0fb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004e0fb0
        ;   Label: core_glass.cpp_staticInit_FUN_004e0fb0
    PUSH 0x6                            ; 004e0fb5
    PUSH 0x61dc44                       ; 004e0fb7
    PUSH 0x4e0fe0                       ; 004e0fbc
    PUSH 0x5e3e2c                       ; 004e0fc1
    PUSH 0x1cd0dc4                      ; 004e0fc6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004e0fcb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e0fd0
    RET                                 ; 004e0fd3

