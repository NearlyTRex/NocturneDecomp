; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpustack float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
;
;
; XREF[12]:
;   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 at 004bf8c1
;   core_gore.cpp_FUN_004ec390 at 004ec3e5
;   core_gore.cpp_FUN_004edbb0 at 004edc90
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 at 005a1920
;   core_stranger.cpp_CStranger_FUN_005be520 at 005bf55e
;   core_tvbat.cpp_CTVBat_process_FUN_005e4210 at 005e455a
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e5d01
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 at 005e78a0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0 at 005f796e
;   crt_math.c_acos_FUN_00600162 at 0060018f
;   ... and 2 more
;
; Referenced Globals:
;   int g_UseSoftwareMath = 0x0
;
; Called Functions:
;   crt_unknown.c_FUN_00608e14
;
; *****************************************************************************

section .text

    FXCH                                ; 006013b1
        ;   Label: crt_math.c_atan2_FUN_006013b1
    TEST byte ptr [0x00685060],0x1      ; 006013b3 | int g_UseSoftwareMath
    JNZ 0x006013c0                      ; 006013ba | LAB_006013c0
        ;   XREF to: 006013c0 (CONDITIONAL_JUMP)
    FPATAN                              ; 006013bc
    JMP 0x006013c5                      ; 006013be | LAB_006013c5
        ;   XREF to: 006013c5 (UNCONDITIONAL_JUMP)
    CALL crt_unknown.c_FUN_00608e14     ; 006013c0 | undefined crt_unknown.c_FUN_00608e14()
        ;   Label: LAB_006013c0
        ;   XREF to: 00608e14 (UNCONDITIONAL_CALL)
    RET                                 ; 006013c5
        ;   Label: LAB_006013c5

