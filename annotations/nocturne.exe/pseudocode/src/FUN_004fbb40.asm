; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fbb40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 004fbb40
        ;   Label: FUN_004fbb40
    PUSH 0x1                            ; 004fbb45
    PUSH 0x5be1e8                       ; 004fbb47
    PUSH 0x4fbbd0                       ; 004fbb4c
    PUSH 0x58dd06                       ; 004fbb51
    PUSH 0x1e533d0                      ; 004fbb56
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004fbb5b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004fbb60
    RET                                 ; 004fbb63

