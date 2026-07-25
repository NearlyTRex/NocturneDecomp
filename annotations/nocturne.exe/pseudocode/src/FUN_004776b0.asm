; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004776b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 004776b0
        ;   Label: FUN_004776b0
    PUSH 0x1                            ; 004776b5
    PUSH 0x5b75c4                       ; 004776b7
    PUSH 0x4776e0                       ; 004776bc
    PUSH 0x57f0fc                       ; 004776c1
    PUSH 0x1bcde44                      ; 004776c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004776cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004776d0
    RET                                 ; 004776d3

