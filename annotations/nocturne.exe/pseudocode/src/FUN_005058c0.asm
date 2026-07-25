; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005058c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 005058c0
        ;   Label: FUN_005058c0
    PUSH 0x2                            ; 005058c5
    PUSH 0x5be310                       ; 005058c7
    PUSH 0x5058f0                       ; 005058cc
    PUSH 0x58ff1d                       ; 005058d1
    PUSH 0x1e57248                      ; 005058d6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005058db
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005058e0
    RET                                 ; 005058e3

