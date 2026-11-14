; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_staticInit_FUN_00575700(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 00575700
        ;   Label: core_tommygun.cpp_staticInit_FUN_00575700
    PUSH 0x1                            ; 00575705
    PUSH 0x61e3e0                       ; 00575707
    PUSH 0x575730                       ; 0057570c
    PUSH 0x5ecc5c                       ; 00575711
    PUSH 0x265353c                      ; 00575716
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0057571b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00575720
    RET                                 ; 00575723

