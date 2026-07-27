; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_staticInit_FUN_00553d60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_00597b91
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00553d60
        ;   Label: core_weapon.cpp_staticInit_FUN_00553d60
    PUSH 0x7                            ; 00553d65
    PUSH 0x5c1590                       ; 00553d67
    PUSH 0x0                            ; 00553d6c
    PUSH 0x597b91                       ; 00553d6e | = "CWeapon"
    PUSH 0x2ddf970                      ; 00553d73
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00553d78
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00553d7d
    RET                                 ; 00553d80

