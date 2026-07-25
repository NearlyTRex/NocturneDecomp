; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5fe0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004c5fe0
        ;   Label: FUN_004c5fe0
    PUSH 0x8                            ; 004c5fe5
    PUSH 0x5bacbc                       ; 004c5fe7
    PUSH 0x4c6010                       ; 004c5fec
    PUSH 0x5878ed                       ; 004c5ff1
    PUSH 0x1cc3628                      ; 004c5ff6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c5ffb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c6000
    RET                                 ; 004c6003

