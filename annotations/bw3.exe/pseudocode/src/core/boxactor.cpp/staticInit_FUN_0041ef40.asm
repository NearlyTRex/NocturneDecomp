; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_staticInit_FUN_0041ef40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0041ef40
        ;   Label: core_boxactor.cpp_staticInit_FUN_0041ef40
    PUSH 0x12                           ; 0041ef45
    PUSH 0x5f0e38                       ; 0041ef47
    PUSH 0x41efb0                       ; 0041ef4c
    PUSH 0x5b74c1                       ; 0041ef51
    PUSH 0x7e177c                       ; 0041ef56
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0041ef5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041ef60
    PUSH 0x5dcb50                       ; 0041ef63
    PUSH 0x8                            ; 0041ef68
    PUSH 0x7e17b8                       ; 0041ef6a
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0041ef6f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0041ef74
    PUSH 0x5f0e28                       ; 0041ef77
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0041ef7c
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 0041ef81
    PUSH 0x7e177c                       ; 0041ef84
    PUSH 0x2                            ; 0041ef89
    PUSH 0x5f0e3c                       ; 0041ef8b
    PUSH 0x420330                       ; 0041ef90
    PUSH 0x5b74cb                       ; 0041ef95
    PUSH 0x7e1a18                       ; 0041ef9a
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0041ef9f
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041efa4
    RET                                 ; 0041efa7

