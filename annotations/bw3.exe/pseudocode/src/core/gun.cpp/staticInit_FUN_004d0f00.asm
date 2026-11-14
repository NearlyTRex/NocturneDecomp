; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gun_cpp_staticInit_FUN_004d0f00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004d0f00
        ;   Label: core_gun.cpp_staticInit_FUN_004d0f00
    PUSH 0x1                            ; 004d0f05
    PUSH 0x5fff60                       ; 004d0f07
    PUSH 0x4d0f30                       ; 004d0f0c
    PUSH 0x5c49c7                       ; 004d0f11
    PUSH 0x1d5b904                      ; 004d0f16
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004d0f1b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d0f20
    RET                                 ; 004d0f23

