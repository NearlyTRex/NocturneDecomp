; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_loadDebrisAssets_FUN_004c38d0(void)
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
;   undefined4 DAT_02d136e4
;   undefined4 DAT_02d13860
;   undefined4 DAT_02d139dc
;   undefined4 DAT_02d13b58
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH 0x629d63                       ; 004c38d0 | = "debris01.kfm" | s_debris01_kfm_00629d63 = debris01.kfm
        ;   Label: core_fire.cpp_loadDebrisAssets_FUN_004c38d0
    PUSH 0x2d13568                      ; 004c38d5 | CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c38da | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c38df
    PUSH 0x629d70                       ; 004c38e2 | = "debris02.kfm" | s_debris02_kfm_00629d70 = debris02.kfm
    PUSH 0x2d136e4                      ; 004c38e7 | DAT_02d136e4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c38ec | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c38f1
    PUSH 0x629d7d                       ; 004c38f4 | = "debris03.kfm" | s_debris03_kfm_00629d7d = debris03.kfm
    PUSH 0x2d13860                      ; 004c38f9 | DAT_02d13860
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c38fe | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c3903
    PUSH 0x629d8a                       ; 004c3906 | = "debris04.kfm" | s_debris04_kfm_00629d8a = debris04.kfm
    PUSH 0x2d139dc                      ; 004c390b | DAT_02d139dc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c3910 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c3915
    PUSH 0x629d97                       ; 004c3918 | = "debris05.kfm" | s_debris05_kfm_00629d97 = debris05.kfm
    PUSH 0x2d13b58                      ; 004c391d | DAT_02d13b58
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c3922 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c3927
    PUSH 0x2d13568                      ; 004c392a | CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c392f | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c3934
    PUSH 0x2d136e4                      ; 004c3937 | DAT_02d136e4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c393c | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c3941
    PUSH 0x2d13860                      ; 004c3944 | DAT_02d13860
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3949 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c394e
    PUSH 0x2d139dc                      ; 004c3951 | DAT_02d139dc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3956 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c395b
    PUSH 0x2d13b58                      ; 004c395e | DAT_02d13b58
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3963 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c3968
    RET                                 ; 004c396b

