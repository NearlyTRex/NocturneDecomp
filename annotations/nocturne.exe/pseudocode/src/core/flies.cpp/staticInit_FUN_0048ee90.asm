; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_staticInit_FUN_0048ee90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlies_005816cf
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0048ee90
        ;   Label: core_flies.cpp_staticInit_FUN_0048ee90
    PUSH 0x3                            ; 0048ee95
    PUSH 0x5b9210                       ; 0048ee97
    PUSH 0x48eec0                       ; 0048ee9c
    PUSH 0x5816cf                       ; 0048eea1 | = "CFlies"
    PUSH 0x1c70718                      ; 0048eea6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0048eeab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048eeb0
    RET                                 ; 0048eeb3

