; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_loadFireBallAssets_FUN_004c0ad0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7af2
;
; Referenced Globals:
;   TerminatedCString s_fball_kfm_00629c7b
;   TerminatedCString s_smfball_kfm_00629c85
;   TerminatedCString s_grnball_kfm_00629c91
;   CKeyFramedModelInstance g_FireEffectFireballModel
;   CKeyFramedModelInstance g_FireEffectFireballSmallModel
;   CKeyFramedModelInstance g_FireEffectFireballGreenModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH 0x629c7b                       ; 004c0ad0 | = "fball.kfm"
        ;   Label: core_fire.cpp_loadFireBallAssets_FUN_004c0ad0
    PUSH 0x2d12f70                      ; 004c0ad5 | g_FireEffectFireballModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c0ada
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c0adf
    PUSH 0x2d12f70                      ; 004c0ae2 | g_FireEffectFireballModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c0ae7
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c0aec
    PUSH 0x629c85                       ; 004c0aef | = "smfball.kfm"
    PUSH 0x2d130ec                      ; 004c0af4 | g_FireEffectFireballSmallModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c0af9
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c0afe
    PUSH 0x2d130ec                      ; 004c0b01 | g_FireEffectFireballSmallModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c0b06
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c0b0b
    PUSH 0x629c91                       ; 004c0b0e | = "grnball.kfm"
    PUSH 0x2d13268                      ; 004c0b13 | g_FireEffectFireballGreenModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c0b18
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c0b1d
    PUSH 0x2d13268                      ; 004c0b20 | g_FireEffectFireballGreenModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c0b25
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c0b2a
    RET                                 ; 004c0b2d

