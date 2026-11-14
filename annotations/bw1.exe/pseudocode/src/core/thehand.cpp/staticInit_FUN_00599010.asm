; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_thehand_cpp_staticInit_FUN_00599010(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00599010
        ;   Label: core_thehand.cpp_staticInit_FUN_00599010
    PUSH 0x1                            ; 00599015
    PUSH 0x625a48                       ; 00599017
    PUSH 0x599040                       ; 0059901c
    PUSH 0x5f7f4c                       ; 00599021
    PUSH 0x2c8ad58                      ; 00599026
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0059902b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00599030
    RET                                 ; 00599033

