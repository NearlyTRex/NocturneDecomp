; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4190(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004b4190
        ;   Label: FUN_004b4190
    PUSH 0x3                            ; 004b4195
    PUSH 0x5ba928                       ; 004b4197
    PUSH 0x4b41c0                       ; 004b419c
    PUSH 0x58562b                       ; 004b41a1
    PUSH 0x1cae098                      ; 004b41a6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b41ab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b41b0
    RET                                 ; 004b41b3

