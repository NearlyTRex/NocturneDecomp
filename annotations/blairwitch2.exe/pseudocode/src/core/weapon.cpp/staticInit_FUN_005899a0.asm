; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_staticInit_FUN_005899a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 005899a0
        ;   Label: core_weapon.cpp_staticInit_FUN_005899a0
    PUSH 0x7                            ; 005899a5
    PUSH 0x61e8e0                       ; 005899a7
    PUSH 0x0                            ; 005899ac
    PUSH 0x5ee4ba                       ; 005899ae
    PUSH 0x2661f00                      ; 005899b3
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005899b8
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005899bd
    RET                                 ; 005899c0

