; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_staticInit_FUN_005068c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005068c0
        ;   Label: core_marquee.cpp_staticInit_FUN_005068c0
    PUSH 0x1                            ; 005068c5
    PUSH 0x61f410                       ; 005068c7
    PUSH 0x5068f0                       ; 005068cc
    PUSH 0x5e7695                       ; 005068d1
    PUSH 0x1d1d4d4                      ; 005068d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005068db
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005068e0
    RET                                 ; 005068e3

