; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_staticInit_FUN_004f0250(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004f0250
        ;   Label: core_mimic.cpp_staticInit_FUN_004f0250
    PUSH 0x3                            ; 004f0255
    PUSH 0x6180b8                       ; 004f0257
    PUSH 0x4f02e0                       ; 004f025c
    PUSH 0x5dd741                       ; 004f0261
    PUSH 0x1d09788                      ; 004f0266
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004f026b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f0270
    RET                                 ; 004f0273

