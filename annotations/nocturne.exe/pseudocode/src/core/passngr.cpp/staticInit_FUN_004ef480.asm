; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_staticInit_FUN_004ef480(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CPassenger_0058cbc5
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1d46820                      ; 004ef480
        ;   Label: core_passngr.cpp_staticInit_FUN_004ef480
    PUSH 0x6                            ; 004ef485
    PUSH 0x5be078                       ; 004ef487
    PUSH 0x4ef4b0                       ; 004ef48c
    PUSH 0x58cbc5                       ; 004ef491 | = "CPassenger"
    PUSH 0x1d4685c                      ; 004ef496
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004ef49b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ef4a0
    RET                                 ; 004ef4a3

