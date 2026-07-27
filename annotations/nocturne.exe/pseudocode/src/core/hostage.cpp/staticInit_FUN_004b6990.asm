; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_staticInit_FUN_004b6990(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHostage_005859ea
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1d46820                      ; 004b6990
        ;   Label: core_hostage.cpp_staticInit_FUN_004b6990
    PUSH 0xc                            ; 004b6995
    PUSH 0x5ba980                       ; 004b6997
    PUSH 0x4b69c0                       ; 004b699c
    PUSH 0x5859ea                       ; 004b69a1 | = "CHostage"
    PUSH 0x1cae1a4                      ; 004b69a6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b69ab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b69b0
    RET                                 ; 004b69b3

