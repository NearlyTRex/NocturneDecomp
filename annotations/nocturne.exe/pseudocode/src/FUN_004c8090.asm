; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8090(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004c8090
        ;   Label: FUN_004c8090
    PUSH 0x2                            ; 004c8095
    PUSH 0x5bacf8                       ; 004c8097
    PUSH 0x4c80c0                       ; 004c809c
    PUSH 0x587ac5                       ; 004c80a1
    PUSH 0x1cc36c4                      ; 004c80a6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c80ab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c80b0
    RET                                 ; 004c80b3

