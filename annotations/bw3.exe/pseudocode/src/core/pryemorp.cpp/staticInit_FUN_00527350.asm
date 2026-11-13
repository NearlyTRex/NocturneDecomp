; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pryemorp_cpp_staticInit_FUN_00527350(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1dd6a44                      ; 00527350
        ;   Label: core_pryemorp.cpp_staticInit_FUN_00527350
    PUSH 0x8                            ; 00527355
    PUSH 0x60398c                       ; 00527357
    PUSH 0x527380                       ; 0052735c
    PUSH 0x5cda0a                       ; 00527361
    PUSH 0x1ed3788                      ; 00527366
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0052736b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00527370
    RET                                 ; 00527373

