; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fpureg crt_math_c_atan2_FUN_00566c81(unkbyte10 param_1,unkbyte10 param_2)
;
;
; XREF[14]:
;   FUN_004c4970 at 004c4c7f
;   FUN_005384d0 at 0053920f
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0 at 00478664
;   core_fire.cpp_CBulletHole_init_FUN_00482c80 at 00482d3a
;   core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00 at 004aea3f
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 at 004b02e0
;   core_set.cpp_FUN_0050aba0 at 0050ac33
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080 at 0051f1a0
;   core_tvbat.cpp_CTVBat_process_FUN_0054b460 at 0054b7aa
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054ca21
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005c1d98
;
; Called Functions:
;   FUN_0056dc98
;
; *****************************************************************************

section .text

    FXCH                                ; 00566c81
        ;   Label: crt_math.c_atan2_FUN_00566c81
    TEST byte ptr [0x005c1d98],0x1      ; 00566c83 | DAT_005c1d98
    JNZ 0x00566c90                      ; 00566c8a
        ;   XREF to: 00566c90 (CONDITIONAL_JUMP)  ; LAB_00566c90
    FPATAN                              ; 00566c8c
    JMP 0x00566c95                      ; 00566c8e
        ;   XREF to: 00566c95 (UNCONDITIONAL_JUMP)  ; LAB_00566c95
    CALL FUN_0056dc98                   ; 00566c90
        ;   XREF to: 0056dc98 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc98()
        ;   Label: LAB_00566c90
    RET                                 ; 00566c95
        ;   Label: LAB_00566c95

