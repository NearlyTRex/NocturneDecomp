; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_multiplyQuaternion_FUN_005b77b0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[10]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30 at 00433bae
;   core_doc.cpp_FUN_0046f200 at 0046f3c6
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c8b9e
;   core_scat.cpp_CScat_blendAimBones_FUN_00542270 at 005423b7
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 at 00569719
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_00568860 at 00568c78
;   core_skeleton.cpp_FUN_00567620 at 00567b90
;   core_skeleton.cpp_FUN_00568100 at 005687ab
;   core_skeleton.cpp_FUN_00569440 at 00569575
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 at 0058ac51
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b77b0
        ;   Label: core_xform.cpp_multiplyQuaternion_FUN_005b77b0
    SUB ESP,0x10                        ; 005b77b1
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b77b4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b77b8
    MOV ECX,ESI                         ; 005b77bc
    FLD float ptr [EDX + 0x4]           ; 005b77be
    FMUL float ptr [EAX + 0x4]          ; 005b77c1
    FLD float ptr [EDX]                 ; 005b77c4
    FMUL float ptr [EAX + 0x4]          ; 005b77c6
    FLD float ptr [EDX]                 ; 005b77c9
    FMUL float ptr [EAX + 0x8]          ; 005b77cb
    FLD float ptr [EDX]                 ; 005b77ce
    FMUL float ptr [EAX + 0xc]          ; 005b77d0
    FLD float ptr [EDX + 0x8]           ; 005b77d3
    FMUL float ptr [EAX + 0x8]          ; 005b77d6
    FLD float ptr [EAX]                 ; 005b77d9
    FXCH                                ; 005b77db
    FADDP ST5,ST0                       ; 005b77dd
    FMUL float ptr [EDX + 0x4]          ; 005b77df
    FLD float ptr [EDX + 0xc]           ; 005b77e2
    FMUL float ptr [EAX + 0xc]          ; 005b77e5
    FLD float ptr [EAX]                 ; 005b77e8
    FMUL float ptr [EDX + 0x8]          ; 005b77ea
    FXCH                                ; 005b77ed
    FADDP ST6,ST0                       ; 005b77ef
    FLD float ptr [EAX]                 ; 005b77f1
    FXCH ST2                            ; 005b77f3
    FADDP ST5,ST0                       ; 005b77f5
    FXCH                                ; 005b77f7
    FMUL float ptr [EDX + 0xc]          ; 005b77f9
    FLD float ptr [EDX + 0x8]           ; 005b77fc
    FMUL float ptr [EAX + 0xc]          ; 005b77ff
    FXCH ST2                            ; 005b7802
    FADDP ST4,ST0                       ; 005b7804
    FXCH                                ; 005b7806
    FADDP ST4,ST0                       ; 005b7808
    FLD float ptr [EDX]                 ; 005b780a
    FMUL float ptr [EAX]                ; 005b780c
    FLD float ptr [EDX + 0xc]           ; 005b780e
    FMUL float ptr [EAX + 0x4]          ; 005b7811
    FXCH ST2                            ; 005b7814
    FADDP ST3,ST0                       ; 005b7816
    FXCH                                ; 005b7818
    FADDP ST3,ST0                       ; 005b781a
    FLD float ptr [EDX + 0xc]           ; 005b781c
    FMUL float ptr [EAX + 0x8]          ; 005b781f
    FLD float ptr [EDX + 0x4]           ; 005b7822
    FMUL float ptr [EAX + 0x8]          ; 005b7825
    FADDP ST3,ST0                       ; 005b7828
    FXCH                                ; 005b782a
    FSUBRP ST5,ST0                      ; 005b782c
    FLD float ptr [EDX + 0x4]           ; 005b782e
    FMUL float ptr [EAX + 0xc]          ; 005b7831
    FLD float ptr [EDX + 0x8]           ; 005b7834
    FMUL float ptr [EAX + 0x4]          ; 005b7837
    MOV EDI,ESI                         ; 005b783a
    MOV ESI,ESP                         ; 005b783c
    FXCH ST2                            ; 005b783e
    FSUBP ST5,ST0                       ; 005b7840
    FSUBP ST3,ST0                       ; 005b7842
    FSUBP                               ; 005b7844
    FXCH ST2                            ; 005b7846
    FSTP float ptr [ESP + 0x4]          ; 005b7848
    FSTP float ptr [ESP + 0x8]          ; 005b784c
    FSTP float ptr [ESP + 0xc]          ; 005b7850
    FSTP float ptr [ESP]                ; 005b7854
    MOVSD ES:EDI,ESI                    ; 005b7857
    MOVSD ES:EDI,ESI                    ; 005b7858
    MOVSD ES:EDI,ESI                    ; 005b7859
    MOVSD ES:EDI,ESI                    ; 005b785a
    MOV EAX,ECX                         ; 005b785b
    ADD ESP,0x10                        ; 005b785d
    POP EDI                             ; 005b7860
    RET                                 ; 005b7861

