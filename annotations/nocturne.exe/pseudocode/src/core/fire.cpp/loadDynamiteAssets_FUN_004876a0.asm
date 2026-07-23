; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadDynamiteAssets_FUN_004876a0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70 at 0048afbc
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_0058128a
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_004543b0
;
; *****************************************************************************

section .text

    PUSH 0x58128a                       ; 004876a0 | = "dynamitestick.kfm"
        ;   Label: core_fire.cpp_loadDynamiteAssets_FUN_004876a0
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 004876a5
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_004543b0()
    ADD ESP,0x4                         ; 004876aa
    RET                                 ; 004876ad

