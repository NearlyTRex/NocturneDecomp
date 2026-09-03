; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians,CQuaternion4f *quat_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[9]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00429e60 at 00429e98
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497a92
;   core_icepick.cpp_CIcePick_updateShootBlend_FUN_004ba740 at 004ba824
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0 at 004db956
;   core_scat.cpp_CScat_blendAimBones_FUN_004fd1d0 at 004fd2fa
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650 at 0051d6f0
;   core_stranger.cpp_CStranger_FUN_005384d0 at 005386c1
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260 at 0053a3e1
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539fb7
;
; Referenced Globals:
;   double DOUBLE_00598376 = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055d4a0
        ;   Label: core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0
    SUB ESP,0x18                        ; 0055d4a1
    MOV EDX,ESI                         ; 0055d4a4
    FLD float ptr [ESP + 0x20]          ; 0055d4a6
    FMUL double ptr [0x00598376]        ; 0055d4aa | DOUBLE_00598376
    FLD ST0                             ; 0055d4b0
    FCOS                                ; 0055d4b2
    FXCH                                ; 0055d4b4
    FSIN                                ; 0055d4b6
    MOV EDI,ESI                         ; 0055d4b8
    XOR ECX,ECX                         ; 0055d4ba
    MOV ESI,ESP                         ; 0055d4bc
    MOV dword ptr [ESP + 0x8],ECX       ; 0055d4be
    MOV dword ptr [ESP + 0xc],ECX       ; 0055d4c2
    FXCH                                ; 0055d4c6
    FSTP float ptr [ESP]                ; 0055d4c8
    FSTP float ptr [ESP + 0x4]          ; 0055d4cb
    MOVSD ES:EDI,ESI                    ; 0055d4cf
    MOVSD ES:EDI,ESI                    ; 0055d4d0
    MOVSD ES:EDI,ESI                    ; 0055d4d1
    MOVSD ES:EDI,ESI                    ; 0055d4d2
    MOV EAX,EDX                         ; 0055d4d3
    ADD ESP,0x18                        ; 0055d4d5
    POP EDI                             ; 0055d4d8
    RET                                 ; 0055d4d9

