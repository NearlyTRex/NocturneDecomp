; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_loadStakeAssets_FUN_004bfe00(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7aed
;
; Referenced Globals:
;   TerminatedCString s_stake_kfm_00629c53
;   CKeyFramedModelInstance g_FireEffectFlamingStakeModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH 0x629c53                       ; 004bfe00 | = "stake.kfm" | s_stake_kfm_00629c53 = stake.kfm
        ;   Label: core_fire.cpp_loadStakeAssets_FUN_004bfe00
    PUSH 0x2d12df4                      ; 004bfe05 | CKeyFramedModelInstance g_FireEffectFlamingStakeModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004bfe0a | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bfe0f
    PUSH 0x2d12df4                      ; 004bfe12 | CKeyFramedModelInstance g_FireEffectFlamingStakeModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004bfe17 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bfe1c
    RET                                 ; 004bfe1f

