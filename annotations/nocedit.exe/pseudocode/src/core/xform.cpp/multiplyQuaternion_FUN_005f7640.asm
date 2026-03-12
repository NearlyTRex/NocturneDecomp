; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack2_esi core_xform_cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,CQuaternion4f *quat_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat1_in
; CQuaternion4f *  Stack[0x8]:4   quat2_in
;
; XREF[11]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 at 0042dd48
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443405
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d5162
;   core_scat.cpp_CScat_blendAimBones_FUN_005584a0 at 005585e7
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 at 0059feb9
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 at 005a0059
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 at 0059f1a5
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 at 0059f6a5
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 at 0059e908
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 at 005c0530
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f7640
        ;   Label: core_xform.cpp_multiplyQuaternion_FUN_005f7640
    SUB ESP,0x10                        ; 005f7641
    MOV EAX,dword ptr [ESP + 0x18]      ; 005f7644
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005f7648
    MOV ECX,ESI                         ; 005f764c
    FLD float ptr [EDX + 0x4]           ; 005f764e
    FMUL float ptr [EAX + 0x4]          ; 005f7651
    FLD float ptr [EDX]                 ; 005f7654
    FMUL float ptr [EAX + 0x4]          ; 005f7656
    FLD float ptr [EDX]                 ; 005f7659
    FMUL float ptr [EAX + 0x8]          ; 005f765b
    FLD float ptr [EDX]                 ; 005f765e
    FMUL float ptr [EAX + 0xc]          ; 005f7660
    FLD float ptr [EDX + 0x8]           ; 005f7663
    FMUL float ptr [EAX + 0x8]          ; 005f7666
    FLD float ptr [EAX]                 ; 005f7669
    FXCH                                ; 005f766b
    FADDP ST5,ST0                       ; 005f766d
    FMUL float ptr [EDX + 0x4]          ; 005f766f
    FLD float ptr [EDX + 0xc]           ; 005f7672
    FMUL float ptr [EAX + 0xc]          ; 005f7675
    FLD float ptr [EAX]                 ; 005f7678
    FMUL float ptr [EDX + 0x8]          ; 005f767a
    FXCH                                ; 005f767d
    FADDP ST6,ST0                       ; 005f767f
    FLD float ptr [EAX]                 ; 005f7681
    FXCH ST2                            ; 005f7683
    FADDP ST5,ST0                       ; 005f7685
    FXCH                                ; 005f7687
    FMUL float ptr [EDX + 0xc]          ; 005f7689
    FLD float ptr [EDX + 0x8]           ; 005f768c
    FMUL float ptr [EAX + 0xc]          ; 005f768f
    FXCH ST2                            ; 005f7692
    FADDP ST4,ST0                       ; 005f7694
    FXCH                                ; 005f7696
    FADDP ST4,ST0                       ; 005f7698
    FLD float ptr [EDX]                 ; 005f769a
    FMUL float ptr [EAX]                ; 005f769c
    FLD float ptr [EDX + 0xc]           ; 005f769e
    FMUL float ptr [EAX + 0x4]          ; 005f76a1
    FXCH ST2                            ; 005f76a4
    FADDP ST3,ST0                       ; 005f76a6
    FXCH                                ; 005f76a8
    FADDP ST3,ST0                       ; 005f76aa
    FLD float ptr [EDX + 0xc]           ; 005f76ac
    FMUL float ptr [EAX + 0x8]          ; 005f76af
    FLD float ptr [EDX + 0x4]           ; 005f76b2
    FMUL float ptr [EAX + 0x8]          ; 005f76b5
    FADDP ST3,ST0                       ; 005f76b8
    FXCH                                ; 005f76ba
    FSUBRP ST5,ST0                      ; 005f76bc
    FLD float ptr [EDX + 0x4]           ; 005f76be
    FMUL float ptr [EAX + 0xc]          ; 005f76c1
    FLD float ptr [EDX + 0x8]           ; 005f76c4
    FMUL float ptr [EAX + 0x4]          ; 005f76c7
    MOV EDI,ESI                         ; 005f76ca
    MOV ESI,ESP                         ; 005f76cc
    FXCH ST2                            ; 005f76ce
    FSUBP ST5,ST0                       ; 005f76d0
    FSUBP ST3,ST0                       ; 005f76d2
    FSUBP                               ; 005f76d4
    FXCH ST2                            ; 005f76d6
    FSTP float ptr [ESP + 0x4]          ; 005f76d8
    FSTP float ptr [ESP + 0x8]          ; 005f76dc
    FSTP float ptr [ESP + 0xc]          ; 005f76e0
    FSTP float ptr [ESP]                ; 005f76e4
    MOVSD ES:EDI,ESI                    ; 005f76e7
    MOVSD ES:EDI,ESI                    ; 005f76e8
    MOVSD ES:EDI,ESI                    ; 005f76e9
    MOVSD ES:EDI,ESI                    ; 005f76ea
    MOV EAX,ECX                         ; 005f76eb
    ADD ESP,0x10                        ; 005f76ed
    POP EDI                             ; 005f76f0
    RET                                 ; 005f76f1

