; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00549440(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 00549440
        ;   Label: FUN_00549440
    PUSH 0x2                            ; 00549445
    PUSH 0x5c1160                       ; 00549447
    PUSH 0x549470                       ; 0054944c
    PUSH 0x596cdd                       ; 00549451
    PUSH 0x2dd10d0                      ; 00549456
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054945b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00549460
    RET                                 ; 00549463

