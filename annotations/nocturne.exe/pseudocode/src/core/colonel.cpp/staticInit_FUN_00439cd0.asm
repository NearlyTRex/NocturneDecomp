; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_staticInit_FUN_00439cd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CColonel_0057b004
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 00439cd0
        ;   Label: core_colonel.cpp_staticInit_FUN_00439cd0
    PUSH 0x1                            ; 00439cd5
    PUSH 0x5ad32c                       ; 00439cd7
    PUSH 0x439d00                       ; 00439cdc
    PUSH 0x57b004                       ; 00439ce1 | = "CColonel"
    PUSH 0x77acd0                       ; 00439ce6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00439ceb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00439cf0
    RET                                 ; 00439cf3

