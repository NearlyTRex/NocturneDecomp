; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_carved_cpp_staticInit_FUN_004282c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004282c0
        ;   Label: core_carved.cpp_staticInit_FUN_004282c0
    PUSH 0x1                            ; 004282c5
    PUSH 0x610c08                       ; 004282c7
    PUSH 0x4286a0                       ; 004282cc
    PUSH 0x5d5195                       ; 004282d1
    PUSH 0x7c6124                       ; 004282d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004282db
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004282e0
    RET                                 ; 004282e3

