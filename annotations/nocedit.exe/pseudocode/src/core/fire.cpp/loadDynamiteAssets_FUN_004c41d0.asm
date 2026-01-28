; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_loadDynamiteAssets_FUN_004c41d0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7afc
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_00629e21
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_00478c00
;
; *****************************************************************************

section .text

    PUSH 0x629e21                       ; 004c41d0 | = "dynamitestick.kfm"
        ;   Label: core_fire.cpp_loadDynamiteAssets_FUN_004c41d0
    CALL core_dmodel.cpp_loadModel_FUN_00478c00 ; 004c41d5
        ;   XREF to: 00478c00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00478c00(char * filename)
    ADD ESP,0x4                         ; 004c41da
    RET                                 ; 004c41dd

