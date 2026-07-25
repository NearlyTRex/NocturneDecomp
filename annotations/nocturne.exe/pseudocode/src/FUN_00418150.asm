; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418150(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00418150
        ;   Label: FUN_00418150
    PUSH 0x5                            ; 00418155
    PUSH 0x5ad054                       ; 00418157
    PUSH 0x4182a0                       ; 0041815c
    PUSH 0x57911e                       ; 00418161
    PUSH 0x7647c0                       ; 00418166
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041816b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00418170
    RET                                 ; 00418173

