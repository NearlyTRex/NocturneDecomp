; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_staticInit_FUN_00418910(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00418910
        ;   Label: core_bodypart.cpp_staticInit_FUN_00418910
    PUSH 0x6                            ; 00418915
    PUSH 0x610acc                       ; 00418917
    PUSH 0x418b10                       ; 0041891c
    PUSH 0x5d4271                       ; 00418921
    PUSH 0x7c4fb4                       ; 00418926
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0041892b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00418930
    RET                                 ; 00418933

