; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_staticInit_FUN_004c93b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMansionPuzzleCircle_00587ed2
;   TerminatedCString s_CMirrorHack_00587ee7
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004c93b0
        ;   Label: core_manpuz.cpp_staticInit_FUN_004c93b0
    PUSH 0x3                            ; 004c93b5
    PUSH 0x5bad50                       ; 004c93b7
    PUSH 0x4c9400                       ; 004c93bc
    PUSH 0x587ed2                       ; 004c93c1 | = "CMansionPuzzleCircle"
    PUSH 0x1cc485c                      ; 004c93c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c93cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c93d0
    PUSH 0x763e48                       ; 004c93d3
    PUSH 0x1                            ; 004c93d8
    PUSH 0x5bad54                       ; 004c93da
    PUSH 0x4cbad0                       ; 004c93df
    PUSH 0x587ee7                       ; 004c93e4 | = "CMirrorHack"
    PUSH 0x1cc4898                      ; 004c93e9
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c93ee
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c93f3
    RET                                 ; 004c93f6

