; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_FUN_00414dd0(CEnemy *param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_morph.cpp_CMorph_getReady_FUN_005b71d0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414dd0
        ;   Label: core_biggs.cpp_FUN_00414dd0
    PUSH ESI                            ; 00414dd1
    PUSH EDI                            ; 00414dd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414dd3
    PUSH EBX                            ; 00414dd7
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00414dd8
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414ddd
    LEA ESI,[EBX + 0x2b4]               ; 00414de0
    PUSH ESI                            ; 00414de6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00414de7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414dec
    LEA EDI,[EBX + 0x10af8]             ; 00414def
    PUSH EDI                            ; 00414df5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00414df6
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414dfb
    PUSH ESI                            ; 00414dfe
    PUSH 0x0                            ; 00414dff
    LEA ESI,[EBX + 0x10c7c]             ; 00414e01
    PUSH ESI                            ; 00414e07
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 ; 00414e08
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00414e0d
    PUSH 0x0                            ; 00414e10
    PUSH EDI                            ; 00414e12
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00414e13
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414e18
    PUSH EAX                            ; 00414e1b
    PUSH 0x1                            ; 00414e1c
    PUSH ESI                            ; 00414e1e
    CALL core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0 ; 00414e1f
        ;   XREF to: 005b6fc0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 00414e24
    PUSH ESI                            ; 00414e27
    CALL core_morph.cpp_CMorph_getReady_FUN_005b71d0 ; 00414e28
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_005b71d0(CMorph * this_ptr)
    MOV dword ptr [EBX + 0x10c74],0x0   ; 00414e2d
    ADD ESP,0x4                         ; 00414e37
    MOV dword ptr [EBX + 0x10c78],0x0   ; 00414e3a
    POP EDI                             ; 00414e44
    POP ESI                             ; 00414e45
    POP EBX                             ; 00414e46
    RET                                 ; 00414e47

