; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_staticInit_FUN_0051fc90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSmiley_00591ee5
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 0051fc90
        ;   Label: core_smiley.cpp_staticInit_FUN_0051fc90
    PUSH 0x1                            ; 0051fc95
    PUSH 0x5bea0c                       ; 0051fc97
    PUSH 0x51fcc0                       ; 0051fc9c
    PUSH 0x591ee5                       ; 0051fca1 | = "CSmiley"
    PUSH 0x2da8aa4                      ; 0051fca6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0051fcab
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0051fcb0
    RET                                 ; 0051fcb3

