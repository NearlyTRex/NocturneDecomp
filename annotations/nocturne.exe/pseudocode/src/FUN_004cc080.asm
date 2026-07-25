; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc080(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004cc080
        ;   Label: FUN_004cc080
    PUSH 0x1                            ; 004cc085
    PUSH 0x5badb8                       ; 004cc087
    PUSH 0x4cc0b0                       ; 004cc08c
    PUSH 0x58818a                       ; 004cc091
    PUSH 0x1cc48d4                      ; 004cc096
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004cc09b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cc0a0
    RET                                 ; 004cc0a3

