; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547850(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00547850
        ;   Label: FUN_00547850
    PUSH 0xb                            ; 00547855
    PUSH 0x5c1130                       ; 00547857
    PUSH 0x547880                       ; 0054785c
    PUSH 0x59697f                       ; 00547861
    PUSH 0x2dd1084                      ; 00547866
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054786b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00547870
    RET                                 ; 00547873

