; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_staticInit_FUN_00592da0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 00592da0
        ;   Label: core_svetlana.cpp_staticInit_FUN_00592da0
    PUSH 0x1                            ; 00592da5
    PUSH 0x625960                       ; 00592da7
    PUSH 0x592dd0                       ; 00592dac
    PUSH 0x5f73df                       ; 00592db1
    PUSH 0x2c83754                      ; 00592db6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00592dbb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00592dc0
    RET                                 ; 00592dc3

