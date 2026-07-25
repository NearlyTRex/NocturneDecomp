; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005430d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1d46820                      ; 005430d0
        ;   Label: FUN_005430d0
    PUSH 0x1                            ; 005430d5
    PUSH 0x5c1050                       ; 005430d7
    PUSH 0x543120                       ; 005430dc
    PUSH 0x59647c                       ; 005430e1
    PUSH 0x2dca0e0                      ; 005430e6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005430eb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005430f0
    PUSH 0x1d46820                      ; 005430f3
    PUSH 0x1                            ; 005430f8
    PUSH 0x5c1054                       ; 005430fa
    PUSH 0x543370                       ; 005430ff
    PUSH 0x596488                       ; 00543104
    PUSH 0x2dca11c                      ; 00543109
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054310e
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00543113
    RET                                 ; 00543116

