; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_staticInit_FUN_00488fa0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 00488fa0
        ;   Label: core_enemy.cpp_staticInit_FUN_00488fa0
    PUSH 0xe                            ; 00488fa5
    PUSH 0x5fba00                       ; 00488fa7
    PUSH 0x0                            ; 00488fac
    PUSH 0x5bdb77                       ; 00488fae
    PUSH 0x1c5bc10                      ; 00488fb3
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00488fb8
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00488fbd
    RET                                 ; 00488fc0

