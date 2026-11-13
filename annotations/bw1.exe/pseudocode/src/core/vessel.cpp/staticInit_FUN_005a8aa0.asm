; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_staticInit_FUN_005a8aa0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005a8aa0
        ;   Label: core_vessel.cpp_staticInit_FUN_005a8aa0
    PUSH 0x4                            ; 005a8aa5
    PUSH 0x625c68                       ; 005a8aa7
    PUSH 0x5a8ad0                       ; 005a8aac
    PUSH 0x5f90fe                       ; 005a8ab1
    PUSH 0x2c8af70                      ; 005a8ab6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005a8abb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a8ac0
    RET                                 ; 005a8ac3

