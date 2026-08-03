; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack2_esi core_xform_cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,CQuaternion4f *quat_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat1_in
; CQuaternion4f *  Stack[0x8]:4   quat2_in
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[10]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00429e60 at 00429ed8
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497ad5
;   core_scat.cpp_FUN_004fd1d0 at 004fd317
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650 at 0051d739
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 at 0051d8d9
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 at 0051ca25
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0 at 0051cef9
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 at 0051be5e
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260 at 0053a401
;   core_xform.cpp_multiplyQuaternionInPlace_FUN_0055d1f0 at 0055d206
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055d130
        ;   Label: core_xform.cpp_multiplyQuaternion_FUN_0055d130
    SUB ESP,0x10                        ; 0055d131
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055d134
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055d138
    MOV ECX,ESI                         ; 0055d13c
    FLD float ptr [EDX + 0x4]           ; 0055d13e
    FMUL float ptr [EAX + 0x4]          ; 0055d141
    FLD float ptr [EDX]                 ; 0055d144
    FMUL float ptr [EAX + 0x4]          ; 0055d146
    FLD float ptr [EDX]                 ; 0055d149
    FMUL float ptr [EAX + 0x8]          ; 0055d14b
    FLD float ptr [EDX]                 ; 0055d14e
    FMUL float ptr [EAX + 0xc]          ; 0055d150
    FLD float ptr [EDX + 0x8]           ; 0055d153
    FMUL float ptr [EAX + 0x8]          ; 0055d156
    FLD float ptr [EAX]                 ; 0055d159
    FXCH                                ; 0055d15b
    FADDP ST5,ST0                       ; 0055d15d
    FMUL float ptr [EDX + 0x4]          ; 0055d15f
    FLD float ptr [EDX + 0xc]           ; 0055d162
    FMUL float ptr [EAX + 0xc]          ; 0055d165
    FLD float ptr [EAX]                 ; 0055d168
    FMUL float ptr [EDX + 0x8]          ; 0055d16a
    FXCH                                ; 0055d16d
    FADDP ST6,ST0                       ; 0055d16f
    FLD float ptr [EAX]                 ; 0055d171
    FXCH ST2                            ; 0055d173
    FADDP ST5,ST0                       ; 0055d175
    FXCH                                ; 0055d177
    FMUL float ptr [EDX + 0xc]          ; 0055d179
    FLD float ptr [EDX + 0x8]           ; 0055d17c
    FMUL float ptr [EAX + 0xc]          ; 0055d17f
    FXCH ST2                            ; 0055d182
    FADDP ST4,ST0                       ; 0055d184
    FXCH                                ; 0055d186
    FADDP ST4,ST0                       ; 0055d188
    FLD float ptr [EDX]                 ; 0055d18a
    FMUL float ptr [EAX]                ; 0055d18c
    FLD float ptr [EDX + 0xc]           ; 0055d18e
    FMUL float ptr [EAX + 0x4]          ; 0055d191
    FXCH ST2                            ; 0055d194
    FADDP ST3,ST0                       ; 0055d196
    FXCH                                ; 0055d198
    FADDP ST3,ST0                       ; 0055d19a
    FLD float ptr [EDX + 0xc]           ; 0055d19c
    FMUL float ptr [EAX + 0x8]          ; 0055d19f
    FLD float ptr [EDX + 0x4]           ; 0055d1a2
    FMUL float ptr [EAX + 0x8]          ; 0055d1a5
    FADDP ST3,ST0                       ; 0055d1a8
    FXCH                                ; 0055d1aa
    FSUBRP ST5,ST0                      ; 0055d1ac
    FLD float ptr [EDX + 0x4]           ; 0055d1ae
    FMUL float ptr [EAX + 0xc]          ; 0055d1b1
    FLD float ptr [EDX + 0x8]           ; 0055d1b4
    FMUL float ptr [EAX + 0x4]          ; 0055d1b7
    MOV EDI,ESI                         ; 0055d1ba
    MOV ESI,ESP                         ; 0055d1bc
    FXCH ST2                            ; 0055d1be
    FSUBP ST5,ST0                       ; 0055d1c0
    FSUBP ST3,ST0                       ; 0055d1c2
    FSUBP                               ; 0055d1c4
    FXCH ST2                            ; 0055d1c6
    FSTP float ptr [ESP + 0x4]          ; 0055d1c8
    FSTP float ptr [ESP + 0x8]          ; 0055d1cc
    FSTP float ptr [ESP + 0xc]          ; 0055d1d0
    FSTP float ptr [ESP]                ; 0055d1d4
    MOVSD ES:EDI,ESI                    ; 0055d1d7
    MOVSD ES:EDI,ESI                    ; 0055d1d8
    MOVSD ES:EDI,ESI                    ; 0055d1d9
    MOVSD ES:EDI,ESI                    ; 0055d1da
    MOV EAX,ECX                         ; 0055d1db
    ADD ESP,0x10                        ; 0055d1dd
    POP EDI                             ; 0055d1e0
    RET                                 ; 0055d1e1

