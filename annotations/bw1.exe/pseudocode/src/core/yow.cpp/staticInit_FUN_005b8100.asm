; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_yow_cpp_staticInit_FUN_005b8100(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 005b8100
        ;   Label: core_yow.cpp_staticInit_FUN_005b8100
    PUSH 0x1                            ; 005b8105
    PUSH 0x6260f0                       ; 005b8107
    PUSH 0x5b8130                       ; 005b810c
    PUSH 0x5fa1c4                       ; 005b8111
    PUSH 0x2c9d2ac                      ; 005b8116
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005b811b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005b8120
    RET                                 ; 005b8123

