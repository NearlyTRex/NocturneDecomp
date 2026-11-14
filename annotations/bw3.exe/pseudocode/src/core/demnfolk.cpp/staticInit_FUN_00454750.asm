; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_demnfolk_cpp_staticInit_FUN_00454750(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00454750
        ;   Label: core_demnfolk.cpp_staticInit_FUN_00454750
    PUSH 0xc                            ; 00454755
    PUSH 0x5f1864                       ; 00454757
    PUSH 0x454b30                       ; 0045475c
    PUSH 0x5ba36a                       ; 00454761
    PUSH 0x1548b88                      ; 00454766
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0045476b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00454770
    RET                                 ; 00454773

