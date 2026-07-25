; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00478360(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00478360
        ;   Label: FUN_00478360
    PUSH 0x7                            ; 00478365
    PUSH 0x5b75dc                       ; 00478367
    PUSH 0x478390                       ; 0047836c
    PUSH 0x57f18c                       ; 00478371
    PUSH 0x1bcde80                      ; 00478376
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0047837b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00478380
    RET                                 ; 00478383

