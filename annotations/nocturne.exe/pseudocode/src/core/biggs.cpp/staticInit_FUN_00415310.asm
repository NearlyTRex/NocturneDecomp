; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_staticInit_FUN_00415310(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBiggs_00578dc6
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00415310
        ;   Label: core_biggs.cpp_staticInit_FUN_00415310
    PUSH 0x1                            ; 00415315
    PUSH 0x5acff8                       ; 00415317
    PUSH 0x415340                       ; 0041531c
    PUSH 0x578dc6                       ; 00415321 | = "CBiggs"
    PUSH 0x76471c                       ; 00415326
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041532b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00415330
    RET                                 ; 00415333

