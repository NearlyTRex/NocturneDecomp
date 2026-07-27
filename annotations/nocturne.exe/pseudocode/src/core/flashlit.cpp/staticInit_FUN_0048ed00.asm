; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flashlit_cpp_staticInit_FUN_0048ed00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFlashlight_005816b6
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 0048ed00
        ;   Label: core_flashlit.cpp_staticInit_FUN_0048ed00
    PUSH 0x1                            ; 0048ed05
    PUSH 0x5b91f8                       ; 0048ed07
    PUSH 0x48ed30                       ; 0048ed0c
    PUSH 0x5816b6                       ; 0048ed11 | = "CFlashlight"
    PUSH 0x1c706cc                      ; 0048ed16
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0048ed1b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0048ed20
    RET                                 ; 0048ed23

