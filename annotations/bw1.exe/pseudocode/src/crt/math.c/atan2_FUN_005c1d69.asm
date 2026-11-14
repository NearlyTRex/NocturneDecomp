; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_atan2_FUN_005c1d69(void)
;
;
; XREF[16]:
;   core_doc.cpp_FUN_0046caa0 at 0046e15e
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0 at 0049f1c3
;   core_fire.cpp_CBulletHole_init_FUN_004ac3e0 at 004ac4ca
;   core_gore.cpp_CBloodSplat_initWallSplat_FUN_004e4830 at 004e486f
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 at 004e613a
;   core_larva.cpp_CLarva_process_FUN_004fda40 at 004fddb7
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0 at 0056b100
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 at 00589a32
;   core_tvbat.cpp_CTVBat_process_FUN_005a4260 at 005a45bf
;   core_vampboss.cpp_CVampireBoss_process_FUN_005a5550 at 005a5934
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_006267b8
;
; Called Functions:
;   crt_unknown.c_FUN_005c7f44
;
; *****************************************************************************

section .text

    FXCH                                ; 005c1d69
        ;   Label: crt_math.c_atan2_FUN_005c1d69
    TEST byte ptr [0x006267b8],0x1      ; 005c1d6b | DAT_006267b8
    JNZ 0x005c1d78                      ; 005c1d72
        ;   XREF to: 005c1d78 (CONDITIONAL_JUMP)  ; LAB_005c1d78
    FPATAN                              ; 005c1d74
    JMP 0x005c1d7d                      ; 005c1d76
        ;   XREF to: 005c1d7d (UNCONDITIONAL_JUMP)  ; LAB_005c1d7d
    CALL crt_unknown.c_FUN_005c7f44     ; 005c1d78
        ;   XREF to: 005c7f44 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7f44()
        ;   Label: LAB_005c1d78
    RET                                 ; 005c1d7d
        ;   Label: LAB_005c1d7d

