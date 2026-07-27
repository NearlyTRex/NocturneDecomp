; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_staticInit_FUN_004b8c40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHotDemon_00585ded
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004b8c40
        ;   Label: core_hotdemon.cpp_staticInit_FUN_004b8c40
    PUSH 0x1                            ; 004b8c45
    PUSH 0x5ba994                       ; 004b8c47
    PUSH 0x4b8c70                       ; 004b8c4c
    PUSH 0x585ded                       ; 004b8c51 | = "CHotDemon"
    PUSH 0x1cae210                      ; 004b8c56
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b8c5b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b8c60
    RET                                 ; 004b8c63

