; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414ff0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00414ff0
        ;   Label: FUN_00414ff0
    PUSH 0x1                            ; 00414ff5
    PUSH 0x5acfe4                       ; 00414ff7
    PUSH 0x415020                       ; 00414ffc
    PUSH 0x578d98                       ; 00415001
    PUSH 0x7646b0                       ; 00415006
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041500b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00415010
    RET                                 ; 00415013

