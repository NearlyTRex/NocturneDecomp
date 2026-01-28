; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_loadGunFlashAssets_FUN_004c1be0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7b06
;
; Referenced Globals:
;   TerminatedCString s_gunflash_kfm_00629cd3
;   CKeyFramedModelInstance g_FireEffectGunFlashModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH 0x629cd3                       ; 004c1be0 | = "gunflash.kfm"
        ;   Label: core_fire.cpp_loadGunFlashAssets_FUN_004c1be0
    PUSH 0x2d133e4                      ; 004c1be5 | g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c1bea
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c1bef
    PUSH 0x2d133e4                      ; 004c1bf2 | g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c1bf7
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c1bfc
    RET                                 ; 004c1bff

