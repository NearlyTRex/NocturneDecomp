; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians,CQuaternion4f *quat_out)
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
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 at 0042dd08
;   core_gabriela.cpp_FUN_004d4d80 at 004d4f12
;   core_icepick.cpp_CIcePick_FUN_004f8810 at 004f88f4
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 at 00526a06
;   core_scat.cpp_FUN_005584a0 at 005585ca
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 at 0059fe70
;   core_stranger.cpp_CStranger_FUN_005be520 at 005bef28
;   core_stranger.cpp_CStranger_FUN_005bfb60 at 005c0007
;   core_stranger.cpp_CStranger_FUN_005c02b0 at 005c0431
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
    MOVSD ES:EDI,ESI                    ; 005f79df
    MOVSD ES:EDI,ESI                    ; 005f79e0
    MOVSD ES:EDI,ESI                    ; 005f79e1
    MOVSD ES:EDI,ESI                    ; 005f79e2
    MOV EAX,EDX                         ; 005f79e3
    ADD ESP,0x18                        ; 005f79e5
    POP EDI                             ; 005f79e8
    RET                                 ; 005f79e9

