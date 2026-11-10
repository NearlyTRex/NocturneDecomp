; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_atan2_FUN_005a5cc1(void)
;
;
; XREF[13]:
;   core_emitter.cpp_FUN_00487c80 at 00487d63
;   core_fire.cpp_FUN_00497290 at 0049737a
;   core_gore.cpp_CBloodSplat_initWallSplat_FUN_004cd510 at 004cd54f
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 at 004cea9a
;   core_prye.cpp_FUN_0051c1c0 at 0051d971
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70 at 0054fc90
;   core_tvbat.cpp_CTVBat_process_FUN_00575380 at 005756df
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 at 005762af
;   core_xform.cpp_FUN_00585de0 at 00585e6f
;   core_xform.cpp_FUN_00585f40 at 00585fd1
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_00607b5c
;
; Called Functions:
;   crt_unknown.c_FUN_005accb8
;
; *****************************************************************************

section .text

    FXCH                                ; 005a5cc1
        ;   Label: crt_math.c_atan2_FUN_005a5cc1
    TEST byte ptr [0x00607b5c],0x1      ; 005a5cc3 | DAT_00607b5c
    JNZ 0x005a5cd0                      ; 005a5cca
        ;   XREF to: 005a5cd0 (CONDITIONAL_JUMP)  ; LAB_005a5cd0
    FPATAN                              ; 005a5ccc
    JMP 0x005a5cd5                      ; 005a5cce
        ;   XREF to: 005a5cd5 (UNCONDITIONAL_JUMP)  ; LAB_005a5cd5
    CALL crt_unknown.c_FUN_005accb8     ; 005a5cd0
        ;   XREF to: 005accb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005accb8()
        ;   Label: LAB_005a5cd0
    RET                                 ; 005a5cd5
        ;   Label: LAB_005a5cd5

