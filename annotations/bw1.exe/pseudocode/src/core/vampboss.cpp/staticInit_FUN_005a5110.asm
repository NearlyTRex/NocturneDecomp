; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_staticInit_FUN_005a5110(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 005a5110
        ;   Label: core_vampboss.cpp_staticInit_FUN_005a5110
    PUSH 0x4                            ; 005a5115
    PUSH 0x625c2c                       ; 005a5117
    PUSH 0x5a5140                       ; 005a511c
    PUSH 0x5f8ce0                       ; 005a5121
    PUSH 0x2c8aeec                      ; 005a5126
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005a512b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a5130
    RET                                 ; 005a5133

