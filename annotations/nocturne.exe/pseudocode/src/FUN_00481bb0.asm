; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481bb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00481bb0
        ;   Label: FUN_00481bb0
    PUSH 0x2                            ; 00481bb5
    PUSH 0x5b8018                       ; 00481bb7
    PUSH 0x481c00                       ; 00481bbc
    PUSH 0x580f73                       ; 00481bc1
    PUSH 0x1c08c8c                      ; 00481bc6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00481bcb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00481bd0
    PUSH 0x14b8a1c                      ; 00481bd3
    PUSH 0x2                            ; 00481bd8
    PUSH 0x5b801c                       ; 00481bda
    PUSH 0x481ee0                       ; 00481bdf
    PUSH 0x580f7d                       ; 00481be4
    PUSH 0x1c08cc8                      ; 00481be9
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00481bee
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00481bf3
    RET                                 ; 00481bf6

