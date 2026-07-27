; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_staticInit_FUN_004bb700(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CImp_0058627d
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004bb700
        ;   Label: core_imp.cpp_staticInit_FUN_004bb700
    PUSH 0x1                            ; 004bb705
    PUSH 0x5ba9e0                       ; 004bb707
    PUSH 0x4bb730                       ; 004bb70c
    PUSH 0x58627d                       ; 004bb711 | = "CImp"
    PUSH 0x1cae33c                      ; 004bb716
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004bb71b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004bb720
    RET                                 ; 004bb723

