; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians,CQuaternion4f *quat_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
;
; XREF[9]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 at 0042dd08
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d4f12
;   core_icepick.cpp_CIcePick_updateShootBlend_FUN_004f8810 at 004f88f4
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 at 00526a06
;   core_scat.cpp_CScat_blendAimBones_FUN_005584a0 at 005585ca
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 at 0059fe70
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 at 005c0431
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60 at 005c0007
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 at 005bef28
;
; Referenced Globals:
;   double g_QuaternionHalfAngleFactor1 = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f79b0
        ;   Label: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
    SUB ESP,0x18                        ; 005f79b1
    MOV EDX,ESI                         ; 005f79b4
    FLD float ptr [ESP + 0x20]          ; 005f79b6
    FMUL double ptr [0x00658405]        ; 005f79ba | g_QuaternionHalfAngleFactor1
    FLD ST0                             ; 005f79c0
    FCOS                                ; 005f79c2
    FXCH                                ; 005f79c4
    FSIN                                ; 005f79c6
    MOV EDI,ESI                         ; 005f79c8
    XOR ECX,ECX                         ; 005f79ca
    MOV ESI,ESP                         ; 005f79cc
    MOV dword ptr [ESP + 0x8],ECX       ; 005f79ce
    MOV dword ptr [ESP + 0xc],ECX       ; 005f79d2
    FXCH                                ; 005f79d6
    FSTP float ptr [ESP]                ; 005f79d8
    FSTP float ptr [ESP + 0x4]          ; 005f79db
    JMP 0x00604ca4                      ; 005f79df
        ;   XREF to: 00604ca4 (UNCONDITIONAL_JUMP)  ; LAB_00604ca4
    ADD ESP,0x18                        ; 005f79e5
        ;   Label: LAB_005f79e5
    POP EDI                             ; 005f79e8
    RET                                 ; 005f79e9
    MOV ECX,dword ptr [ESI]             ; 00604ca4
        ;   Label: LAB_00604ca4
    MOV dword ptr [EDI],ECX             ; 00604ca6
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604ca8
    MOV dword ptr [EDI + 0x4],ECX       ; 00604cab
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604cae
    MOV dword ptr [EDI + 0x8],ECX       ; 00604cb1
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604cb4
    MOV dword ptr [EDI + 0xc],ECX       ; 00604cb7
    ADD ESI,0x10                        ; 00604cba
    ADD EDI,0x10                        ; 00604cbd
    MOV EAX,EDX                         ; 00604cc0
    JMP 0x005f79e5                      ; 00604cc2
        ;   XREF to: 005f79e5 (UNCONDITIONAL_JUMP)  ; LAB_005f79e5

