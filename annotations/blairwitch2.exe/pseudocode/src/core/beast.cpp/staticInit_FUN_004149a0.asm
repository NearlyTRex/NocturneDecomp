; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_staticInit_FUN_004149a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004149a0
        ;   Label: core_beast.cpp_staticInit_FUN_004149a0
    PUSH 0x1                            ; 004149a5
    PUSH 0x6098b4                       ; 004149a7
    PUSH 0x4149d0                       ; 004149ac
    PUSH 0x5cbc57                       ; 004149b1
    PUSH 0x7bc860                       ; 004149b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004149bb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004149c0
    RET                                 ; 004149c3

