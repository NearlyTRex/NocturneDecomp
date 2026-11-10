; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadGunFlashAssets_FUN_00496c40(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0 at 0049d216
;
; Referenced Globals:
;   undefined4 s_gunflash_kfm_005d5441+1
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH 0x5d5442                       ; 00496c40 | s_gunflash_kfm_005d5441+1
        ;   Label: core_fire.cpp_loadGunFlashAssets_FUN_00496c40
    PUSH 0x1c3ead8                      ; 00496c45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00496c4a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00496c4f
    PUSH 0x1c3ead8                      ; 00496c52
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00496c57
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00496c5c
    RET                                 ; 00496c5f

