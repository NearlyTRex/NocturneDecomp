; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_staticInit_FUN_00410a50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00410a50
        ;   Label: core_bat.cpp_staticInit_FUN_00410a50
    PUSH 0x4                            ; 00410a55
    PUSH 0x610968                       ; 00410a57
    PUSH 0x410b20                       ; 00410a5c
    PUSH 0x5d35c1                       ; 00410a61
    PUSH 0x7c3710                       ; 00410a66
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00410a6b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00410a70
    RET                                 ; 00410a73

