; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_staticInit_FUN_00463a50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00463a50
        ;   Label: core_door.cpp_staticInit_FUN_00463a50
    PUSH 0xd                            ; 00463a55
    PUSH 0x5f2abc                       ; 00463a57
    PUSH 0x463a80                       ; 00463a5c
    PUSH 0x5bbcc3                       ; 00463a61
    PUSH 0x1b85140                      ; 00463a66
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00463a6b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00463a70
    RET                                 ; 00463a73

