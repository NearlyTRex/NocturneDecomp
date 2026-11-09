; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moloch_cpp_staticInit_FUN_00520290(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 00520290
        ;   Label: core_moloch.cpp_staticInit_FUN_00520290
    PUSH 0x1                            ; 00520295
    PUSH 0x61f7d8                       ; 00520297
    PUSH 0x5202c0                       ; 0052029c
    PUSH 0x5ea1be                       ; 005202a1
    PUSH 0x1d33c6c                      ; 005202a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005202ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005202b0
    RET                                 ; 005202b3

