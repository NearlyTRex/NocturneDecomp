; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415b00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00415b00
        ;   Label: FUN_00415b00
    PUSH 0x5                            ; 00415b05
    PUSH 0x5ad00c                       ; 00415b07
    PUSH 0x415cf0                       ; 00415b0c
    PUSH 0x578e6a                       ; 00415b11
    PUSH 0x764758                       ; 00415b16
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00415b1b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00415b20
    RET                                 ; 00415b23

