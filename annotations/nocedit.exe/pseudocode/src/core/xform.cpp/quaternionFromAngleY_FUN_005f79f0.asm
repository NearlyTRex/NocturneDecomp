; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_ptr)
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
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 at 0042dd2b
;   core_gabriela.cpp_FUN_004d4d80 at 004d5250
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 at 00526a4b
;   core_scat.cpp_FUN_005584a0 at 00558562
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 at 0059fe94
;   core_stranger.cpp_CStranger_FUN_005be520 at 005be760
;   core_stranger.cpp_CStranger_FUN_005bf720 at 005bf7ad
;   core_stranger.cpp_CStranger_FUN_005bfb60 at 005c0131
;   core_stranger.cpp_CStranger_FUN_005c02b0 at 005c0407
;
; Referenced Globals:
;   double g_QuaternionHalfAngleFactor2 = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f79f0
        ;   Label: core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
    SUB ESP,0x18                        ; 005f79f1
    MOV EDX,ESI                         ; 005f79f4
    FLD float ptr [ESP + 0x20]          ; 005f79f6
    FMUL double ptr [0x0065840d]        ; 005f79fa | g_QuaternionHalfAngleFactor2
    FLD ST0                             ; 005f7a00
    FCOS                                ; 005f7a02
    FXCH                                ; 005f7a04
    FSIN                                ; 005f7a06
    MOV EDI,ESI                         ; 005f7a08
    XOR ECX,ECX                         ; 005f7a0a
    MOV ESI,ESP                         ; 005f7a0c
    MOV dword ptr [ESP + 0x4],ECX       ; 005f7a0e
    MOV dword ptr [ESP + 0xc],ECX       ; 005f7a12
    FXCH                                ; 005f7a16
    FSTP float ptr [ESP]                ; 005f7a18
    FSTP float ptr [ESP + 0x8]          ; 005f7a1b
    MOVSD ES:EDI,ESI                    ; 005f7a1f
    MOVSD ES:EDI,ESI                    ; 005f7a20
    MOVSD ES:EDI,ESI                    ; 005f7a21
    MOVSD ES:EDI,ESI                    ; 005f7a22
    MOV EAX,EDX                         ; 005f7a23
    ADD ESP,0x18                        ; 005f7a25
    POP EDI                             ; 005f7a28
    RET                                 ; 005f7a29

