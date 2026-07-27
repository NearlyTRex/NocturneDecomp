; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_staticInit_FUN_00479530(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CEnemy_0057f2b7
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x765a60                       ; 00479530
        ;   Label: core_enemy.cpp_staticInit_FUN_00479530
    PUSH 0xa                            ; 00479535
    PUSH 0x5b7604                       ; 00479537
    PUSH 0x0                            ; 0047953c
    PUSH 0x57f2b7                       ; 0047953e | = "CEnemy"
    PUSH 0x1bcdebc                      ; 00479543
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00479548
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0047954d
    RET                                 ; 00479550

