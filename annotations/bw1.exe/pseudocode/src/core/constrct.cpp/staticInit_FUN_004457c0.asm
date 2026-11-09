; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_constrct_cpp_staticInit_FUN_004457c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004457c0
        ;   Label: core_constrct.cpp_staticInit_FUN_004457c0
    PUSH 0x3                            ; 004457c5
    PUSH 0x611148                       ; 004457c7
    PUSH 0x4457f0                       ; 004457cc
    PUSH 0x5d6cfd                       ; 004457d1
    PUSH 0x7dc5ec                       ; 004457d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004457db
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004457e0
    RET                                 ; 004457e3

