; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005437c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 005437c0
        ;   Label: FUN_005437c0
    PUSH 0x1                            ; 005437c5
    PUSH 0x5c107c                       ; 005437c7
    PUSH 0x543810                       ; 005437cc
    PUSH 0x5964e0                       ; 005437d1
    PUSH 0x2dca158                      ; 005437d6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005437db
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005437e0
    PUSH 0x763e48                       ; 005437e3
    PUSH 0x1                            ; 005437e8
    PUSH 0x5c1080                       ; 005437ea
    PUSH 0x5438a0                       ; 005437ef
    PUSH 0x5964ee                       ; 005437f4
    PUSH 0x2dca194                      ; 005437f9
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005437fe
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00543803
    RET                                 ; 00543806

