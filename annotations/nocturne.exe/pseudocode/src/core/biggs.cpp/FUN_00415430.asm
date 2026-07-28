; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_FUN_00415430(CEnemy *param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415430
        ;   Label: core_biggs.cpp_FUN_00415430
    PUSH ESI                            ; 00415431
    PUSH EDI                            ; 00415432
    MOV EBX,dword ptr [ESP + 0x10]      ; 00415433
    PUSH EBX                            ; 00415437
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 00415438
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041543d
    LEA ESI,[EBX + 0x150]               ; 00415440
    PUSH ESI                            ; 00415446
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 00415447
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041544c
    LEA EDI,[EBX + 0xbd24]              ; 0041544f
    PUSH EDI                            ; 00415455
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00415456
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041545b
    PUSH ESI                            ; 0041545e
    PUSH 0x0                            ; 0041545f
    LEA ESI,[EBX + 0xbea8]              ; 00415461
    PUSH ESI                            ; 00415467
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 00415468
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0041546d
    PUSH 0x0                            ; 00415470
    PUSH EDI                            ; 00415472
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00415473
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415478
    PUSH EAX                            ; 0041547b
    PUSH 0x1                            ; 0041547c
    PUSH ESI                            ; 0041547e
    CALL core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0 ; 0041547f
        ;   XREF to: 004e01b0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 00415484
    PUSH ESI                            ; 00415487
    CALL core_morph.cpp_CMorph_getReady_FUN_004e03c0 ; 00415488
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004e03c0(CMorph * this_ptr)
    MOV dword ptr [EBX + 0xbea0],0x0    ; 0041548d
    ADD ESP,0x4                         ; 00415497
    MOV dword ptr [EBX + 0xbea4],0x0    ; 0041549a
    POP EDI                             ; 004154a4
    POP ESI                             ; 004154a5
    POP EBX                             ; 004154a6
    RET                                 ; 004154a7

