; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_staticInit_FUN_004f2000(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1e61474                      ; 004f2000
        ;   Label: core_mimic.cpp_staticInit_FUN_004f2000
    PUSH 0x1                            ; 004f2005
    PUSH 0x6180cc                       ; 004f2007
    PUSH 0x4f2030                       ; 004f200c
    PUSH 0x5ddad3                       ; 004f2011
    PUSH 0x1d09814                      ; 004f2016
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004f201b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f2020
    RET                                 ; 004f2023

