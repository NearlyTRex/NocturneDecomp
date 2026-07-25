; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043ceb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 0043ceb0
        ;   Label: FUN_0043ceb0
    PUSH 0x1                            ; 0043ceb5
    PUSH 0x5ad3d8                       ; 0043ceb7
    PUSH 0x43cee0                       ; 0043cebc
    PUSH 0x57b46e                       ; 0043cec1
    PUSH 0x77bd7c                       ; 0043cec6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0043cecb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043ced0
    RET                                 ; 0043ced3

