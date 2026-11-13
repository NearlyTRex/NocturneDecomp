; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_carved_cpp_staticInit_FUN_00425550(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00425550
        ;   Label: core_carved.cpp_staticInit_FUN_00425550
    PUSH 0x1                            ; 00425555
    PUSH 0x5f0ee8                       ; 00425557
    PUSH 0x425930                       ; 0042555c
    PUSH 0x5b7977                       ; 00425561
    PUSH 0x7e2a58                       ; 00425566
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0042556b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00425570
    RET                                 ; 00425573

