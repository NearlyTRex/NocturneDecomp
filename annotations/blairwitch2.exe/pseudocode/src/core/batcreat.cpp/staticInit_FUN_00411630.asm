; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_staticInit_FUN_00411630(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00411630
        ;   Label: core_batcreat.cpp_staticInit_FUN_00411630
    PUSH 0x1                            ; 00411635
    PUSH 0x609874                       ; 00411637
    PUSH 0x411660                       ; 0041163c
    PUSH 0x5cb70e                       ; 00411641
    PUSH 0x7bc77c                       ; 00411646
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0041164b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00411650
    RET                                 ; 00411653

