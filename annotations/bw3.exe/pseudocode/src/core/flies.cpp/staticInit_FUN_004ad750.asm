; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_staticInit_FUN_004ad750(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004ad750
        ;   Label: core_flies.cpp_staticInit_FUN_004ad750
    PUSH 0x3                            ; 004ad755
    PUSH 0x5fe8c4                       ; 004ad757
    PUSH 0x4ad780                       ; 004ad75c
    PUSH 0x5c1c09                       ; 004ad761
    PUSH 0x1d1a0e0                      ; 004ad766
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004ad76b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ad770
    RET                                 ; 004ad773

