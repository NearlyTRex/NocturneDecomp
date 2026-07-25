; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00515cc0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 00515cc0
        ;   Label: FUN_00515cc0
    PUSH 0x1                            ; 00515cc5
    PUSH 0x5be93c                       ; 00515cc7
    PUSH 0x515cf0                       ; 00515ccc
    PUSH 0x59102d                       ; 00515cd1
    PUSH 0x267189c                      ; 00515cd6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00515cdb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00515ce0
    RET                                 ; 00515ce3

