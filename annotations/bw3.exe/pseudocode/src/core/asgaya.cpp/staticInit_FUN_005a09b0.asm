; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_asgaya_cpp_staticInit_FUN_005a09b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1dd6a44                      ; 005a09b0
        ;   Label: core_asgaya.cpp_staticInit_FUN_005a09b0
    PUSH 0x1                            ; 005a09b5
    PUSH 0x6074a4                       ; 005a09b7
    PUSH 0x5a09e0                       ; 005a09bc
    PUSH 0x5da55e                       ; 005a09c1
    PUSH 0x2d24d44                      ; 005a09c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 005a09cb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a09d0
    RET                                 ; 005a09d3

