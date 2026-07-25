; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413380(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00413380
        ;   Label: FUN_00413380
    PUSH 0x3                            ; 00413385
    PUSH 0x5acfbc                       ; 00413387
    PUSH 0x4133b0                       ; 0041338c
    PUSH 0x578a8f                       ; 00413391
    PUSH 0x764638                       ; 00413396
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041339b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004133a0
    RET                                 ; 004133a3

