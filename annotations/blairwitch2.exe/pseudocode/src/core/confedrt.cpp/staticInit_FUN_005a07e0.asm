; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_staticInit_FUN_005a07e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a07e0
        ;   Label: core_confedrt.cpp_staticInit_FUN_005a07e0
    PUSH 0x1                            ; 005a07e5
    PUSH 0x61ead4                       ; 005a07e7
    PUSH 0x5a0810                       ; 005a07ec
    PUSH 0x5efb8f                       ; 005a07f1
    PUSH 0x266849c                      ; 005a07f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a07fb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a0800
    RET                                 ; 005a0803

