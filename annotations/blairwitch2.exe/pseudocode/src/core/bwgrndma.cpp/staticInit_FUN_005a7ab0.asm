; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bwgrndma_cpp_staticInit_FUN_005a7ab0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a7ab0
        ;   Label: core_bwgrndma.cpp_staticInit_FUN_005a7ab0
    PUSH 0x1                            ; 005a7ab5
    PUSH 0x61ebd8                       ; 005a7ab7
    PUSH 0x5a7ae0                       ; 005a7abc
    PUSH 0x5f07dc                       ; 005a7ac1
    PUSH 0x2668774                      ; 005a7ac6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a7acb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a7ad0
    RET                                 ; 005a7ad3

