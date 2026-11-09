; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_storm_cpp_staticInit_FUN_00568a50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 00568a50
        ;   Label: core_storm.cpp_staticInit_FUN_00568a50
    PUSH 0x1                            ; 00568a55
    PUSH 0x6068a0                       ; 00568a57
    PUSH 0x568a80                       ; 00568a5c
    PUSH 0x5d5cc5                       ; 00568a61
    PUSH 0x2cf6268                      ; 00568a66
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00568a6b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00568a70
    RET                                 ; 00568a73

