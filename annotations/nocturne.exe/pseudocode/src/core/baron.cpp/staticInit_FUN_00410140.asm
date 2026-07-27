; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_staticInit_FUN_00410140(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBaron_005784f8
;   TerminatedCString s_CBaronWeapon_005784ff
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;
; *****************************************************************************

section .text

    PUSH 0x1cae0ec                      ; 00410140
        ;   Label: core_baron.cpp_staticInit_FUN_00410140
    PUSH 0x2                            ; 00410145
    PUSH 0x5acf3c                       ; 00410147
    PUSH 0x4101a0                       ; 0041014c
    PUSH 0x5784f8                       ; 00410151 | = "CBaron"
    PUSH 0x764330                       ; 00410156
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041015b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00410160
    PUSH 0x76436c                       ; 00410163
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00410168
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0041016d
    PUSH 0x2ddf970                      ; 00410170
    PUSH 0x1                            ; 00410175
    PUSH 0x5acf58                       ; 00410177
    PUSH 0x411320                       ; 0041017c
    PUSH 0x5784ff                       ; 00410181 | = "CBaronWeapon"
    PUSH 0x7644e8                       ; 00410186
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041018b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00410190
    RET                                 ; 00410193

