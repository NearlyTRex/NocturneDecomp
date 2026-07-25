; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cec00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 004cec00
        ;   Label: FUN_004cec00
    PUSH 0x7                            ; 004cec05
    PUSH 0x5bade4                       ; 004cec07
    PUSH 0x4cec30                       ; 004cec0c
    PUSH 0x58835b                       ; 004cec11
    PUSH 0x1cc56a4                      ; 004cec16
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004cec1b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cec20
    RET                                 ; 004cec23

