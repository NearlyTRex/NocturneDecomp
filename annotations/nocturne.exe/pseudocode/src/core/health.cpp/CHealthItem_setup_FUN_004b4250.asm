; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_CHealthItem_setup_FUN_004b4250(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b4250
        ;   Label: core_health.cpp_CHealthItem_setup_FUN_004b4250
    ADD EAX,0x150                       ; 004b4254
    PUSH EAX                            ; 004b4259
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004b425a
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b425f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4262
    PUSH EDX                            ; 004b4266
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004b4267
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b426c
    NOP                                 ; 004b426f

