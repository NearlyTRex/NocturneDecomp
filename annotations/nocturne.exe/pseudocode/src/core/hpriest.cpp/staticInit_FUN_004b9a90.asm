; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_staticInit_FUN_004b9a90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHighPriestOfGardath_00585fcd
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1d46820                      ; 004b9a90
        ;   Label: core_hpriest.cpp_staticInit_FUN_004b9a90
    PUSH 0x1                            ; 004b9a95
    PUSH 0x5ba9ac                       ; 004b9a97
    PUSH 0x4b9ac0                       ; 004b9a9c
    PUSH 0x585fcd                       ; 004b9aa1 | = "CHighPriestOfGardath"
    PUSH 0x1cae24c                      ; 004b9aa6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b9aab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b9ab0
    RET                                 ; 004b9ab3

