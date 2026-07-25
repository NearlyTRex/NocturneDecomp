; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516b40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00516b40
        ;   Label: FUN_00516b40
    PUSH 0x3                            ; 00516b45
    PUSH 0x5be964                       ; 00516b47
    PUSH 0x516b70                       ; 00516b4c
    PUSH 0x5910fd                       ; 00516b51
    PUSH 0x2671914                      ; 00516b56
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00516b5b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00516b60
    RET                                 ; 00516b63

