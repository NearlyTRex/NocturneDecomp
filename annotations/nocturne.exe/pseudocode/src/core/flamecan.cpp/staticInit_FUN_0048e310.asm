; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_staticInit_FUN_0048e310(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlameCan_0058162f
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0048e310
        ;   Label: core_flamecan.cpp_staticInit_FUN_0048e310
    PUSH 0x1                            ; 0048e315
    PUSH 0x5b91c4                       ; 0048e317
    PUSH 0x48e340                       ; 0048e31c
    PUSH 0x58162f                       ; 0048e321 | = "CFlameCan"
    PUSH 0x1c70654                      ; 0048e326
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0048e32b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048e330
    RET                                 ; 0048e333

