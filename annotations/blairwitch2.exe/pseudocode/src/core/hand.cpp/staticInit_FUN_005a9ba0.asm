; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hand_cpp_staticInit_FUN_005a9ba0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a9ba0
        ;   Label: core_hand.cpp_staticInit_FUN_005a9ba0
    PUSH 0x2                            ; 005a9ba5
    PUSH 0x61eca8                       ; 005a9ba7
    PUSH 0x5a9bd0                       ; 005a9bac
    PUSH 0x5f09e3                       ; 005a9bb1
    PUSH 0x26688a8                      ; 005a9bb6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a9bbb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a9bc0
    RET                                 ; 005a9bc3

