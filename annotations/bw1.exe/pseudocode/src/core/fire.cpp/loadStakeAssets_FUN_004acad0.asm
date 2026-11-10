; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadStakeAssets_FUN_004acad0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0 at 004b5afd
;
; Referenced Globals:
;   TerminatedCString s_stake_kfm_005df1cc
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH 0x5df1cc                       ; 004acad0 | = "stake.kfm"
        ;   Label: core_fire.cpp_loadStakeAssets_FUN_004acad0
    PUSH 0x1c570b8                      ; 004acad5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004acada
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004acadf
    PUSH 0x1c570b8                      ; 004acae2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004acae7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004acaec
    RET                                 ; 004acaef

