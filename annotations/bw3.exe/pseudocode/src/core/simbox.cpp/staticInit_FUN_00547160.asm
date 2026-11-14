; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_staticInit_FUN_00547160(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00547160
        ;   Label: core_simbox.cpp_staticInit_FUN_00547160
    PUSH 0x3                            ; 00547165
    PUSH 0x60415c                       ; 00547167
    PUSH 0x547190                       ; 0054716c
    PUSH 0x5d1576                       ; 00547171
    PUSH 0x270f980                      ; 00547176
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0054717b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00547180
    RET                                 ; 00547183

