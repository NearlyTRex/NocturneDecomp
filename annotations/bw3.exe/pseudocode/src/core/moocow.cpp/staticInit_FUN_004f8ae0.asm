; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moocow_cpp_staticInit_FUN_004f8ae0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 004f8ae0
        ;   Label: core_moocow.cpp_staticInit_FUN_004f8ae0
    PUSH 0x1                            ; 004f8ae5
    PUSH 0x6006a4                       ; 004f8ae7
    PUSH 0x4f8b10                       ; 004f8aec
    PUSH 0x5c9164                       ; 004f8af1
    PUSH 0x1d8836c                      ; 004f8af6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004f8afb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f8b00
    RET                                 ; 004f8b03

