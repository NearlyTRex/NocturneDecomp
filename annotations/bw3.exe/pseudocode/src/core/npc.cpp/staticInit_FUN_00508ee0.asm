; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_staticInit_FUN_00508ee0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 00508ee0
        ;   Label: core_npc.cpp_staticInit_FUN_00508ee0
    PUSH 0x8                            ; 00508ee5
    PUSH 0x6035e4                       ; 00508ee7
    PUSH 0x508f10                       ; 00508eec
    PUSH 0x5cb520                       ; 00508ef1
    PUSH 0x1dd6a44                      ; 00508ef6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00508efb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00508f00
    RET                                 ; 00508f03

