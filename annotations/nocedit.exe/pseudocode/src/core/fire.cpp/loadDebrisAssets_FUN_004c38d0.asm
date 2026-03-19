; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadDebrisAssets_FUN_004c38d0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7b10
;
; Referenced Globals:
;   TerminatedCString s_debris01_kfm_00629d63
;   TerminatedCString s_debris02_kfm_00629d70
;   TerminatedCString s_debris03_kfm_00629d7d
;   TerminatedCString s_debris04_kfm_00629d8a
;   TerminatedCString s_debris05_kfm_00629d97
;   CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
;   undefined4 g_CFireEffectDebrisModels[1].part_visibility_flags[0]
;   undefined4 g_CFireEffectDebrisModels[2].part_visibility_flags[0]
;   undefined4 g_CFireEffectDebrisModels[3].part_visibility_flags[0]
;   undefined4 g_CFireEffectDebrisModels[4].part_visibility_flags[0]
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH 0x629d63                       ; 004c38d0 | = "debris01.kfm"
        ;   Label: core_fire.cpp_loadDebrisAssets_FUN_004c38d0
    PUSH 0x2d13568                      ; 004c38d5 | g_CFireEffectDebrisModels
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c38da
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c38df
    PUSH 0x629d70                       ; 004c38e2 | = "debris02.kfm"
    PUSH 0x2d136e4                      ; 004c38e7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c38ec
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c38f1
    PUSH 0x629d7d                       ; 004c38f4 | = "debris03.kfm"
    PUSH 0x2d13860                      ; 004c38f9 | g_CFireEffectDebrisModels[2].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c38fe
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c3903
    PUSH 0x629d8a                       ; 004c3906 | = "debris04.kfm"
    PUSH 0x2d139dc                      ; 004c390b | g_CFireEffectDebrisModels[3].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c3910
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c3915
    PUSH 0x629d97                       ; 004c3918 | = "debris05.kfm"
    PUSH 0x2d13b58                      ; 004c391d | g_CFireEffectDebrisModels[4].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c3922
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c3927
    PUSH 0x2d13568                      ; 004c392a | g_CFireEffectDebrisModels
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c392f
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c3934
    PUSH 0x2d136e4                      ; 004c3937 | g_CFireEffectDebrisModels[1].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c393c
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c3941
    PUSH 0x2d13860                      ; 004c3944 | g_CFireEffectDebrisModels[2].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3949
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c394e
    PUSH 0x2d139dc                      ; 004c3951 | g_CFireEffectDebrisModels[3].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3956
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c395b
    PUSH 0x2d13b58                      ; 004c395e | g_CFireEffectDebrisModels[4].part_visibility_flags[0]
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3963
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c3968
    RET                                 ; 004c396b

