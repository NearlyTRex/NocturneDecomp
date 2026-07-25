; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005467c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 005467c0
        ;   Label: FUN_005467c0
    PUSH 0x1                            ; 005467c5
    PUSH 0x5c1108                       ; 005467c7
    PUSH 0x5467f0                       ; 005467cc
    PUSH 0x5968fd                       ; 005467d1
    PUSH 0x2dd100c                      ; 005467d6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005467db
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005467e0
    RET                                 ; 005467e3

