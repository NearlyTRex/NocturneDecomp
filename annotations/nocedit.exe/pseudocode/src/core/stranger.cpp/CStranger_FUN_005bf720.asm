; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005bf720()
;
; Local Variables:
; undefined4       Stack[-0x1ae0]:4  local_1ae0
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005be520 at 005be5ce
;
; Referenced Globals:
;   double DOUBLE_00653894 = 40
;   undefined4 DAT_03f6bacc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bf720
        ;   Label: core_stranger.cpp_CStranger_FUN_005bf720
    PUSH ESI                            ; 005bf721
    PUSH EDI                            ; 005bf722
    SUB ESP,0x1acc                      ; 005bf723
    MOV ESI,dword ptr [ESP + 0x1adc]    ; 005bf729
    MOV EAX,ESP                         ; 005bf730
    PUSH EAX                            ; 005bf732
    LEA EBX,[ESI + 0x158]               ; 005bf733
    PUSH EBX                            ; 005bf739
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510 ; 005bf73a | void core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
        ;   XREF to: 005a1510 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005bf73f
    FLD float ptr [ESI + 0x1fc54]       ; 005bf742
    PUSH -0x1                           ; 005bf748
    FMUL double ptr [0x00653894]        ; 005bf74a | double DOUBLE_00653894
    SUB ESP,0x4                         ; 005bf750
    FSTP float ptr [ESP]                ; 005bf753
    MOV EDX,dword ptr [ESI + 0x1fc84]   ; 005bf756
    PUSH EDX                            ; 005bf75c
    PUSH EBX                            ; 005bf75d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 ; 005bf75e | void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
        ;   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03f6bacc]                ; 005bf763 | undefined4 DAT_03f6bacc
    ADD ESI,0x808                       ; 005bf768
    SHL EAX,0x4                         ; 005bf76e
    ADD ESP,0x10                        ; 005bf771
    ADD EAX,ESI                         ; 005bf774
    PUSH EAX                            ; 005bf776
    LEA EAX,[ESP + 0x1ac0]              ; 005bf777
    PUSH EAX                            ; 005bf77e
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 005bf77f | CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005bf784
    LEA ESI,[ESP + 0x1aac]              ; 005bf787
    PUSH 0x59ddb0                       ; 005bf78e
    FLD float ptr [EAX + 0x4]           ; 005bf793
    PUSH -0x1                           ; 005bf796
    FCHS                                ; 005bf798
    PUSH 0x3f800000                     ; 005bf79a
    FSTP float ptr [ESP + 0x1ad4]       ; 005bf79f
    PUSH dword ptr [ESP + 0x1ad4]       ; 005bf7a6
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf7ad | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005bf7b2
    LEA EAX,[ESP + 0x1aa8]              ; 005bf7b5
    PUSH EAX                            ; 005bf7bc
    LEA EDI,[ESP + 0x1aac]              ; 005bf7bd
    LEA ESI,[ESP + 0x1abc]              ; 005bf7c4
    PUSH EBX                            ; 005bf7cb
    MOVSD ES:EDI,ESI                    ; 005bf7cc
    MOVSD ES:EDI,ESI                    ; 005bf7cd
    MOVSD ES:EDI,ESI                    ; 005bf7ce
    MOVSD ES:EDI,ESI                    ; 005bf7cf
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf7d0 | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005bf7d5
    MOV ECX,dword ptr [ESP + 0x1ae0]    ; 005bf7d8
    PUSH ECX                            ; 005bf7df
    PUSH EBX                            ; 005bf7e0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510 ; 005bf7e1 | void core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
        ;   XREF to: 005a1510 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005bf7e6
    MOV EAX,ESP                         ; 005bf7e9
    PUSH EAX                            ; 005bf7eb
    PUSH EBX                            ; 005bf7ec
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0 ; 005bf7ed | void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
        ;   XREF to: 005a15e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005bf7f2
    ADD ESP,0x1acc                      ; 005bf7f5
    POP EDI                             ; 005bf7fb
    POP ESI                             ; 005bf7fc
    POP EBX                             ; 005bf7fd
    RET                                 ; 005bf7fe

