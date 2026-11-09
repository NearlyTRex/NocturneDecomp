; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_staticInit_FUN_005ad490(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005ad490
        ;   Label: core_weapon.cpp_staticInit_FUN_005ad490
    PUSH 0x7                            ; 005ad495
    PUSH 0x626038                       ; 005ad497
    PUSH 0x0                            ; 005ad49c
    PUSH 0x5f9892                       ; 005ad49e
    PUSH 0x2c99738                      ; 005ad4a3
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005ad4a8
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005ad4ad
    RET                                 ; 005ad4b0

