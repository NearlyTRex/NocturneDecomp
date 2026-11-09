; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_staticInit_FUN_0056bdf0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0056bdf0
        ;   Label: core_smiley.cpp_staticInit_FUN_0056bdf0
    PUSH 0x1                            ; 0056bdf5
    PUSH 0x623298                       ; 0056bdf7
    PUSH 0x56be20                       ; 0056bdfc
    PUSH 0x5f284f                       ; 0056be01
    PUSH 0x2c5fd08                      ; 0056be06
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0056be0b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0056be10
    RET                                 ; 0056be13

