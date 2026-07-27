; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_staticInit_FUN_004d9fd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMobster_0058a151
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004d9fd0
        ;   Label: core_mobster.cpp_staticInit_FUN_004d9fd0
    PUSH 0x7                            ; 004d9fd5
    PUSH 0x5bb124                       ; 004d9fd7
    PUSH 0x4da120                       ; 004d9fdc
    PUSH 0x58a151                       ; 004d9fe1 | = "CMobster"
    PUSH 0x1ccdbd8                      ; 004d9fe6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004d9feb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d9ff0
    RET                                 ; 004d9ff3

