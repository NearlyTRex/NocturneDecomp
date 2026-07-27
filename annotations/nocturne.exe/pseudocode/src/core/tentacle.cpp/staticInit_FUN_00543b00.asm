; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_staticInit_FUN_00543b00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTentacle_00596508
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00543b00
        ;   Label: core_tentacle.cpp_staticInit_FUN_00543b00
    PUSH 0x2                            ; 00543b05
    PUSH 0x5c10b0                       ; 00543b07
    PUSH 0x543b30                       ; 00543b0c
    PUSH 0x596508                       ; 00543b11 | = "CTentacle"
    PUSH 0x2dca1e0                      ; 00543b16
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00543b1b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00543b20
    RET                                 ; 00543b23

