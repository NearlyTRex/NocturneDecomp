; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420fe0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00420fe0
        ;   Label: FUN_00420fe0
    PUSH 0x1                            ; 00420fe5
    PUSH 0x5ad0f4                       ; 00420fe7
    PUSH 0x421010                       ; 00420fec
    PUSH 0x579bfd                       ; 00420ff1
    PUSH 0x765888                       ; 00420ff6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00420ffb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00421000
    RET                                 ; 00421003

