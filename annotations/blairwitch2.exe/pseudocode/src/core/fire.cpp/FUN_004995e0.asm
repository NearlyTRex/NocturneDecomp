; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004995e0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0 at 0049d20c
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_005d5590
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_0044fba0
;
; *****************************************************************************

section .text

    PUSH 0x5d5590                       ; 004995e0 | = "dynamitestick.kfm"
        ;   Label: core_fire.cpp_FUN_004995e0
    CALL core_dmodel.cpp_loadModel_FUN_0044fba0 ; 004995e5
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_0044fba0()
    ADD ESP,0x4                         ; 004995ea
    RET                                 ; 004995ed

