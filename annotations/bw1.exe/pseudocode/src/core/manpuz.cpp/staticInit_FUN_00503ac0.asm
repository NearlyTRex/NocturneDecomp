; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_staticInit_FUN_00503ac0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00503ac0
        ;   Label: core_manpuz.cpp_staticInit_FUN_00503ac0
    PUSH 0x3                            ; 00503ac5
    PUSH 0x61f3a8                       ; 00503ac7
    PUSH 0x503b10                       ; 00503acc
    PUSH 0x5e73e5                       ; 00503ad1
    PUSH 0x1d1d45c                      ; 00503ad6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00503adb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00503ae0
    PUSH 0x7c2ff8                       ; 00503ae3
    PUSH 0x1                            ; 00503ae8
    PUSH 0x61f3ac                       ; 00503aea
    PUSH 0x506420                       ; 00503aef
    PUSH 0x5e73fa                       ; 00503af4
    PUSH 0x1d1d498                      ; 00503af9
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00503afe
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00503b03
    RET                                 ; 00503b06

