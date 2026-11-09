; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_staticInit_FUN_004b79d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004b79d0
        ;   Label: core_flame.cpp_staticInit_FUN_004b79d0
    PUSH 0x7                            ; 004b79d5
    PUSH 0x61d180                       ; 004b79d7
    PUSH 0x4b7a00                       ; 004b79dc
    PUSH 0x5df687                       ; 004b79e1
    PUSH 0x1cc4110                      ; 004b79e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004b79eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b79f0
    RET                                 ; 004b79f3

