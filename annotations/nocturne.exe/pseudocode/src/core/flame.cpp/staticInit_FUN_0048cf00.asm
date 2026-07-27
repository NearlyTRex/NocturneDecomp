; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_staticInit_FUN_0048cf00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlame_0058153f
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0048cf00
        ;   Label: core_flame.cpp_staticInit_FUN_0048cf00
    PUSH 0x7                            ; 0048cf05
    PUSH 0x5b91c0                       ; 0048cf07
    PUSH 0x48cf30                       ; 0048cf0c
    PUSH 0x58153f                       ; 0048cf11 | = "CFlame"
    PUSH 0x1c70618                      ; 0048cf16
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0048cf1b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048cf20
    RET                                 ; 0048cf23

