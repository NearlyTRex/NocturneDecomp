; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_staticInit_FUN_00414ff0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBeast_00578d98
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00414ff0
        ;   Label: core_beast.cpp_staticInit_FUN_00414ff0
    PUSH 0x1                            ; 00414ff5
    PUSH 0x5acfe4                       ; 00414ff7
    PUSH 0x415020                       ; 00414ffc
    PUSH 0x578d98                       ; 00415001 | = "CBeast"
    PUSH 0x7646b0                       ; 00415006
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041500b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00415010
    RET                                 ; 00415013

