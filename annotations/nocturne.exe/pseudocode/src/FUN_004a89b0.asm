; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a89b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004a89b0
        ;   Label: FUN_004a89b0
    PUSH 0x1                            ; 004a89b5
    PUSH 0x5b963c                       ; 004a89b7
    PUSH 0x4a89e0                       ; 004a89bc
    PUSH 0x584a98                       ; 004a89c1
    PUSH 0x1c78b84                      ; 004a89c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004a89cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a89d0
    RET                                 ; 004a89d3

