; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_multiplyQuaternion_FUN_00585990(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[9]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000 at 0043307e
;   core_charactr.cpp_FUN_0042cd70 at 0042cf7e
;   core_prye.cpp_FUN_0051c1c0 at 0051dee5
;   core_prye.cpp_FUN_0051ee10 at 0051efbd
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0054dfd0 at 0054e105
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 at 0054e2a9
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 at 0054d33b
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0054d3f0 at 0054d808
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0 at 0054c720
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585990
        ;   Label: core_xform.cpp_multiplyQuaternion_FUN_00585990
    SUB ESP,0x10                        ; 00585991
    MOV EAX,dword ptr [ESP + 0x18]      ; 00585994
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00585998
    MOV ECX,ESI                         ; 0058599c
    FLD float ptr [EDX + 0x4]           ; 0058599e
    FMUL float ptr [EAX + 0x4]          ; 005859a1
    FLD float ptr [EDX]                 ; 005859a4
    FMUL float ptr [EAX + 0x4]          ; 005859a6
    FLD float ptr [EDX]                 ; 005859a9
    FMUL float ptr [EAX + 0x8]          ; 005859ab
    FLD float ptr [EDX]                 ; 005859ae
    FMUL float ptr [EAX + 0xc]          ; 005859b0
    FLD float ptr [EDX + 0x8]           ; 005859b3
    FMUL float ptr [EAX + 0x8]          ; 005859b6
    FLD float ptr [EAX]                 ; 005859b9
    FXCH                                ; 005859bb
    FADDP ST5,ST0                       ; 005859bd
    FMUL float ptr [EDX + 0x4]          ; 005859bf
    FLD float ptr [EDX + 0xc]           ; 005859c2
    FMUL float ptr [EAX + 0xc]          ; 005859c5
    FLD float ptr [EAX]                 ; 005859c8
    FMUL float ptr [EDX + 0x8]          ; 005859ca
    FXCH                                ; 005859cd
    FADDP ST6,ST0                       ; 005859cf
    FLD float ptr [EAX]                 ; 005859d1
    FXCH ST2                            ; 005859d3
    FADDP ST5,ST0                       ; 005859d5
    FXCH                                ; 005859d7
    FMUL float ptr [EDX + 0xc]          ; 005859d9
    FLD float ptr [EDX + 0x8]           ; 005859dc
    FMUL float ptr [EAX + 0xc]          ; 005859df
    FXCH ST2                            ; 005859e2
    FADDP ST4,ST0                       ; 005859e4
    FXCH                                ; 005859e6
    FADDP ST4,ST0                       ; 005859e8
    FLD float ptr [EDX]                 ; 005859ea
    FMUL float ptr [EAX]                ; 005859ec
    FLD float ptr [EDX + 0xc]           ; 005859ee
    FMUL float ptr [EAX + 0x4]          ; 005859f1
    FXCH ST2                            ; 005859f4
    FADDP ST3,ST0                       ; 005859f6
    FXCH                                ; 005859f8
    FADDP ST3,ST0                       ; 005859fa
    FLD float ptr [EDX + 0xc]           ; 005859fc
    FMUL float ptr [EAX + 0x8]          ; 005859ff
    FLD float ptr [EDX + 0x4]           ; 00585a02
    FMUL float ptr [EAX + 0x8]          ; 00585a05
    FADDP ST3,ST0                       ; 00585a08
    FXCH                                ; 00585a0a
    FSUBRP ST5,ST0                      ; 00585a0c
    FLD float ptr [EDX + 0x4]           ; 00585a0e
    FMUL float ptr [EAX + 0xc]          ; 00585a11
    FLD float ptr [EDX + 0x8]           ; 00585a14
    FMUL float ptr [EAX + 0x4]          ; 00585a17
    MOV EDI,ESI                         ; 00585a1a
    MOV ESI,ESP                         ; 00585a1c
    FXCH ST2                            ; 00585a1e
    FSUBP ST5,ST0                       ; 00585a20
    FSUBP ST3,ST0                       ; 00585a22
    FSUBP                               ; 00585a24
    FXCH ST2                            ; 00585a26
    FSTP float ptr [ESP + 0x4]          ; 00585a28
    FSTP float ptr [ESP + 0x8]          ; 00585a2c
    FSTP float ptr [ESP + 0xc]          ; 00585a30
    FSTP float ptr [ESP]                ; 00585a34
    MOVSD ES:EDI,ESI                    ; 00585a37
    MOVSD ES:EDI,ESI                    ; 00585a38
    MOVSD ES:EDI,ESI                    ; 00585a39
    MOVSD ES:EDI,ESI                    ; 00585a3a
    MOV EAX,ECX                         ; 00585a3b
    ADD ESP,0x10                        ; 00585a3d
    POP EDI                             ; 00585a40
    RET                                 ; 00585a41

