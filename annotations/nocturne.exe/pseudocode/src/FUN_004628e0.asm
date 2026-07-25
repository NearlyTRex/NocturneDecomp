; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004628e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004628e0
        ;   Label: FUN_004628e0
    PUSH 0x2                            ; 004628e5
    PUSH 0x5b0660                       ; 004628e7
    PUSH 0x462910                       ; 004628ec
    PUSH 0x57de84                       ; 004628f1
    PUSH 0x1b7b4ac                      ; 004628f6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004628fb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00462900
    RET                                 ; 00462903

