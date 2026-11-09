; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_005438d0(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00543870 = 00544573
;   TerminatedCString s_s_confused_while_walking_005d1246
;   undefined4 DAT_005d1270
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d1272
;   undefined4 DAT_005d1293
;   undefined4 DAT_005d1295
;   undefined4 DAT_005d129e
;   undefined4 DAT_005d12a6
;   undefined4 DAT_005d12ae
;   undefined4 DAT_005d12b6
;   undefined4 DAT_005d12be
;   undefined4 DAT_005d12c2
;   undefined4 DAT_005d12c6
;   undefined4 DAT_005d12ce
;   undefined4 DAT_005d12d6
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cf40
;   core_actor.cpp_FUN_0040cfa0
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_004310e0
;   core_charactr.cpp_FUN_00431660
;   core_charactr.cpp_FUN_00433350
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00433fb0
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005438d0
        ;   Label: core_shadow.cpp_FUN_005438d0
    PUSH ESI                            ; 005438d1
    PUSH EDI                            ; 005438d2
    PUSH EBP                            ; 005438d3
    MOV EBP,ESP                         ; 005438d4
    SUB ESP,0x2dc                       ; 005438d6
    SUB EBP,0x7a                        ; 005438dc
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005438df
    ADD ESI,0x158                       ; 005438e5
    PUSH ESI                            ; 005438eb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005438ec
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005438f1
    FLD float ptr [ESI + 0x8]           ; 005438f4
    PUSH ESI                            ; 005438f7
    FSTP float ptr [EBP + 0x52]         ; 005438f8
    MOV EBX,dword ptr [EAX + 0x24]      ; 005438fb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005438fe
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00543903
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00543906
    PUSH dword ptr [EBP + 0x92]         ; 0054390c
    FILD dword ptr [EAX + 0x64]         ; 00543912
    PUSH EDX                            ; 00543915
    FSTP float ptr [EBP + 0x5e]         ; 00543916
    CALL core_charactr.cpp_FUN_00433c60 ; 00543919
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 0054391e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543921
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00543927
    PUSH dword ptr [EBP + 0x92]         ; 0054392d
    MOV EAX,dword ptr [EAX + 0x154]     ; 00543933
    PUSH ECX                            ; 00543939
    CALL dword ptr [EAX + 0x148]        ; 0054393a
    ADD ESP,0x8                         ; 00543940
    TEST EAX,EAX                        ; 00543943
    JZ 0x005439cc                       ; 00543945
        ;   XREF to: 005439cc (CONDITIONAL_JUMP)  ; LAB_005439cc
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054394b
    CMP dword ptr [EAX + 0xd054],0x2    ; 00543951
    JZ 0x005439e9                       ; 00543958
        ;   XREF to: 005439e9 (CONDITIONAL_JUMP)  ; LAB_005439e9
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054395e
        ;   Label: LAB_0054395e
    FLD float ptr [EBP + 0x92]          ; 00543964
    FMUL float ptr [EAX + 0xcdcc]       ; 0054396a
    FMUL float ptr [EAX + 0xd0e4]       ; 00543970
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00543976
    MOV dword ptr [EAX + 0x24a4],0x0    ; 0054397c
    LEA ESI,[EAX + 0x158]               ; 00543986
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 0054398c
    MOV dword ptr [EAX + 0x24a0],EDX    ; 00543992
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 00543998
    MOV dword ptr [EAX + 0x249c],EDX    ; 0054399e
    FSTP float ptr [EBP + 0x46]         ; 005439a4
    FLD float ptr [EBP + 0x46]          ; 005439a7
        ;   Label: LAB_005439a7
    FLDZ                                ; 005439aa
    FCOMPP                              ; 005439ac
    FNSTSW AX                           ; 005439ae
    SAHF                                ; 005439b0
    JNC 0x00543a19                      ; 005439b1
        ;   XREF to: 00543a19 (CONDITIONAL_JUMP)  ; LAB_00543a19
    LEA EAX,[EBP + 0x46]                ; 005439b3
    PUSH EAX                            ; 005439b6
    PUSH ESI                            ; 005439b7
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 005439b8
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005439bd
    PUSH EAX                            ; 005439c0
    PUSH EDI                            ; 005439c1
    CALL core_charactr.cpp_FUN_00433fb0 ; 005439c2
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005439c7
    JMP 0x005439a7                      ; 005439ca
        ;   XREF to: 005439a7 (UNCONDITIONAL_JUMP)  ; LAB_005439a7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005439cc
        ;   Label: LAB_005439cc
    MOV EDI,dword ptr [EAX + 0xd084]    ; 005439d2
    PUSH EDI                            ; 005439d8
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 005439d9
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 005439de
    LEA ESP,[EBP + 0x7a]                ; 005439e1
        ;   Label: LAB_005439e1
    POP EBP                             ; 005439e4
    POP EDI                             ; 005439e5
    POP ESI                             ; 005439e6
    POP EBX                             ; 005439e7
    RET                                 ; 005439e8
    FLD float ptr [EAX + 0xd0a0]        ; 005439e9
        ;   Label: LAB_005439e9
    FLDZ                                ; 005439ef
    FCOMPP                              ; 005439f1
    FNSTSW AX                           ; 005439f3
    SAHF                                ; 005439f5
    JA 0x0054395e                       ; 005439f6
        ;   XREF to: 0054395e (CONDITIONAL_JUMP)  ; LAB_0054395e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005439fc
    FLD float ptr [EAX + 0xd0a0]        ; 00543a02
    FSUB float ptr [EBP + 0x92]         ; 00543a08
    FSTP float ptr [EAX + 0xd0a0]       ; 00543a0e
    JMP 0x0054395e                      ; 00543a14
        ;   XREF to: 0054395e (UNCONDITIONAL_JUMP)  ; LAB_0054395e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543a19
        ;   Label: LAB_00543a19
    FLD float ptr [EBP + 0x92]          ; 00543a1f
    FMUL float ptr [EAX + 0xcdcc]       ; 00543a25
    SUB ESP,0x4                         ; 00543a2b
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 00543a2e
    MOV dword ptr [EAX + 0x2524],EDX    ; 00543a34
    FSTP float ptr [ESP]                ; 00543a3a
    PUSH EAX                            ; 00543a3d
    CALL core_charactr.cpp_FUN_00434850 ; 00543a3e
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543a43
    MOV EDX,dword ptr [EAX + 0xd054]    ; 00543a49
    ADD ESP,0x8                         ; 00543a4f
    CMP EDX,0x2                         ; 00543a52
    JNZ 0x00543a6d                      ; 00543a55
        ;   XREF to: 00543a6d (CONDITIONAL_JUMP)  ; LAB_00543a6d
    FLD float ptr [EAX + 0x2528]        ; 00543a57
    FLD ST0                             ; 00543a5d
    FMUL double ptr [0x005d129e]        ; 00543a5f | DAT_005d129e
    FSTP ST1                            ; 00543a65
    FSTP float ptr [EAX + 0x2528]       ; 00543a67
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00543a6d
        ;   Label: LAB_00543a6d
    PUSH dword ptr [EBP + 0x92]         ; 00543a73
    PUSH ECX                            ; 00543a79
    CALL core_charactr.cpp_FUN_00431660 ; 00543a7a
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00543a7f
    TEST EAX,EAX                        ; 00543a82
    JZ 0x00544f77                       ; 00543a84
        ;   XREF to: 00544f77 (CONDITIONAL_JUMP)  ; LAB_00544f77
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543a8a
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00543a90
    MOV EAX,dword ptr [EAX + 0x273c]    ; 00543a96
    ADD EBX,0x158                       ; 00543a9c
    CMP EAX,0x2                         ; 00543aa2
    JNC 0x00543fd1                      ; 00543aa5
        ;   XREF to: 00543fd1 (CONDITIONAL_JUMP)  ; LAB_00543fd1
    CMP EAX,0x1                         ; 00543aab
    JNZ 0x00543fd8                      ; 00543aae
        ;   XREF to: 00543fd8 (CONDITIONAL_JUMP)  ; LAB_00543fd8
    PUSH EAX                            ; 00543ab4
    PUSH 0x5                            ; 00543ab5
    PUSH EBX                            ; 00543ab7
        ;   Label: LAB_00543ab7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00543ab8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00543ab8
    ADD ESP,0xc                         ; 00543abd
        ;   Label: LAB_00543abd
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543ac0
        ;   Label: LAB_00543ac0
    MOV dword ptr [EAX + 0x24a4],0x0    ; 00543ac6
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 00543ad0
    MOV dword ptr [EAX + 0x24a0],EDX    ; 00543ad6
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 00543adc
    MOV dword ptr [EAX + 0x249c],EDX    ; 00543ae2
    LEA EAX,[EAX]                       ; 00543ae8
    MOV EDX,EDX                         ; 00543aee
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543af0
        ;   Label: LAB_00543af0
    FLD float ptr [EAX + 0xcde0]        ; 00543af6
    FLDZ                                ; 00543afc
    MOV dword ptr [EAX + 0x3270],0x40000000 ; 00543afe
    FCOMPP                              ; 00543b08
    FNSTSW AX                           ; 00543b0a
    SAHF                                ; 00543b0c
    JNC 0x00543b27                      ; 00543b0d
        ;   XREF to: 00543b27 (CONDITIONAL_JUMP)  ; LAB_00543b27
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543b0f
    FLD float ptr [EAX + 0xcde0]        ; 00543b15
    FSUB float ptr [EBP + 0x92]         ; 00543b1b
    FSTP float ptr [EAX + 0xcde0]       ; 00543b21
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543b27
        ;   Label: LAB_00543b27
    ADD EAX,0x158                       ; 00543b2d
    PUSH EAX                            ; 00543b32
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00543b33
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00543b38
    ADD ESP,0x4                         ; 00543b3b
    CMP EAX,0xf                         ; 00543b3e
    JZ 0x00544f87                       ; 00543b41
        ;   XREF to: 00544f87 (CONDITIONAL_JUMP)  ; LAB_00544f87
    TEST EAX,EAX                        ; 00543b47
    JZ 0x00544f87                       ; 00543b49
        ;   XREF to: 00544f87 (CONDITIONAL_JUMP)  ; LAB_00544f87
    CMP EAX,0x1                         ; 00543b4f
    JZ 0x00544f87                       ; 00543b52
        ;   XREF to: 00544f87 (CONDITIONAL_JUMP)  ; LAB_00544f87
    CMP EAX,0x2                         ; 00543b58
    JZ 0x00544f87                       ; 00543b5b
        ;   XREF to: 00544f87 (CONDITIONAL_JUMP)  ; LAB_00544f87
    CMP EAX,0x3                         ; 00543b61
    JZ 0x00544f87                       ; 00543b64
        ;   XREF to: 00544f87 (CONDITIONAL_JUMP)  ; LAB_00544f87
    CMP EAX,0x4                         ; 00543b6a
    JZ 0x00544f87                       ; 00543b6d
        ;   XREF to: 00544f87 (CONDITIONAL_JUMP)  ; LAB_00544f87
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543b73
        ;   Label: LAB_00543b73
    MOV EDI,dword ptr [EAX + 0xcde4]    ; 00543b79
    TEST EDI,EDI                        ; 00543b7f
    JZ 0x00543bb3                       ; 00543b81
        ;   XREF to: 00543bb3 (CONDITIONAL_JUMP)  ; LAB_00543bb3
    PUSH EDI                            ; 00543b83
    MOV EBX,dword ptr [EDI + 0x154]     ; 00543b84
    CALL dword ptr [EBX + 0xf4]         ; 00543b8a
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00543b90
    ADD ESP,0x4                         ; 00543b96
    CMP EAX,EDX                         ; 00543b99
    JNZ 0x00543bb3                      ; 00543b9b
        ;   XREF to: 00543bb3 (CONDITIONAL_JUMP)  ; LAB_00543bb3
    MOV ECX,dword ptr [EDX + 0xcde4]    ; 00543b9d
    PUSH ECX                            ; 00543ba3
    MOV EBX,dword ptr [0x00603b28]      ; 00543ba4 | g_CDemonSetPtr
    PUSH EBX                            ; 00543baa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00543bab
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00543bb0
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00543bb3
        ;   Label: LAB_00543bb3
    PUSH dword ptr [EBP + 0x92]         ; 00543bb9
    PUSH ESI                            ; 00543bbf
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00543bc0
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI + 0x2518]        ; 00543bc5
    FMUL float ptr [EBP + 0x92]         ; 00543bcb
    FLD float ptr [ESI + 0x251c]        ; 00543bd1
    FMUL float ptr [EBP + 0x92]         ; 00543bd7
    FLD float ptr [ESI + 0x2520]        ; 00543bdd
    FMUL float ptr [EBP + 0x92]         ; 00543be3
    LEA EDI,[EBP + -0x3a]               ; 00543be9
    MOV EBX,ESI                         ; 00543bec
    MOV EAX,ESI                         ; 00543bee
    LEA ESI,[EBP + 0xfffffe76]          ; 00543bf0
    FXCH ST2                            ; 00543bf6
    FSTP float ptr [EBP + 0xfffffe76]   ; 00543bf8
    FSTP float ptr [EBP + 0xfffffe7a]   ; 00543bfe
    FSTP float ptr [EBP + 0xfffffe7e]   ; 00543c04
    MOVSD ES:EDI,ESI                    ; 00543c0a
    MOVSD ES:EDI,ESI                    ; 00543c0b
    MOVSD ES:EDI,ESI                    ; 00543c0c
    FLD float ptr [EBP + -0x3a]         ; 00543c0d
    FLD float ptr [EBP + -0x36]         ; 00543c10
    FLD float ptr [EBP + -0x32]         ; 00543c13
    LEA EDI,[EBP + 0xfffffe52]          ; 00543c16
    LEA ESI,[EBP + 0xfffffee2]          ; 00543c1c
    FXCH ST2                            ; 00543c22
    FADD float ptr [EAX + 0x249c]       ; 00543c24
    FXCH                                ; 00543c2a
    FADD float ptr [EAX + 0x24a0]       ; 00543c2c
    FXCH ST2                            ; 00543c32
    FADD float ptr [EAX + 0x24a4]       ; 00543c34
    FXCH                                ; 00543c3a
    FSTP float ptr [EBP + 0xfffffee2]   ; 00543c3c
    FXCH                                ; 00543c42
    FSTP float ptr [EBP + 0xfffffee6]   ; 00543c44
    FSTP float ptr [EBP + 0xfffffeea]   ; 00543c4a
    MOVSD ES:EDI,ESI                    ; 00543c50
    MOVSD ES:EDI,ESI                    ; 00543c51
    MOVSD ES:EDI,ESI                    ; 00543c52
    FLD float ptr [EBP + 0xfffffe52]    ; 00543c53
    FLD float ptr [EBP + 0xfffffe56]    ; 00543c59
    FLD float ptr [EBP + 0xfffffe5a]    ; 00543c5f
    LEA EDI,[EBP + 0xffffff7e]          ; 00543c65
    LEA ESI,[EBP + 0xfffffe8e]          ; 00543c6b
    FXCH ST2                            ; 00543c71
    FADD float ptr [EAX + 0x250c]       ; 00543c73
    FXCH                                ; 00543c79
    FADD float ptr [EAX + 0x2510]       ; 00543c7b
    FXCH ST2                            ; 00543c81
    FADD float ptr [EAX + 0x2514]       ; 00543c83
    FXCH                                ; 00543c89
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00543c8b
    FXCH                                ; 00543c91
    FSTP float ptr [EBP + 0xfffffe92]   ; 00543c93
    FSTP float ptr [EBP + 0xfffffe96]   ; 00543c99
    MOVSD ES:EDI,ESI                    ; 00543c9f
    MOVSD ES:EDI,ESI                    ; 00543ca0
    MOVSD ES:EDI,ESI                    ; 00543ca1
    MOV dword ptr [EAX + 0x24a4],0x0    ; 00543ca2
    MOV dword ptr [EAX + 0x2514],0x0    ; 00543cac
    ADD ESP,0x8                         ; 00543cb6
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 00543cb9
    MOV dword ptr [EAX + 0x24a0],EDX    ; 00543cbf
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 00543cc5
    MOV dword ptr [EAX + 0x249c],EDX    ; 00543ccb
    MOV EDX,dword ptr [EBX + 0x2514]    ; 00543cd1
    MOV dword ptr [EAX + 0x2510],EDX    ; 00543cd7
    MOV EDX,dword ptr [EBX + 0x2510]    ; 00543cdd
    MOV dword ptr [EAX + 0x250c],EDX    ; 00543ce3
    LEA EAX,[EBP + 0xffffff7e]          ; 00543ce9
    PUSH EAX                            ; 00543cef
    MOV EDI,EBX                         ; 00543cf0
    PUSH EDI                            ; 00543cf2
    CALL core_charactr.cpp_FUN_0042c230 ; 00543cf3
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00543cf8
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543cfb
        ;   Label: LAB_00543cfb
    PUSH EAX                            ; 00543d01
    CALL core_charactr.cpp_FUN_0042cd30 ; 00543d02
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543d07
    ADD ESP,0x4                         ; 00543d0d
    ADD EAX,0x158                       ; 00543d10
    PUSH EAX                            ; 00543d15
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00543d16
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00543d1b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00543d1e
    PUSH dword ptr [EBP + 0x92]         ; 00543d24
    PUSH EDX                            ; 00543d2a
    CALL core_charactr.cpp_FUN_00433350 ; 00543d2b
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00543d30
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00543d33
    PUSH ECX                            ; 00543d39
    CALL core_shadow.cpp_FUN_00545c80   ; 00543d3a
        ;   XREF to: 00545c80 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545c80()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543d3f
    ADD ESP,0x4                         ; 00543d45
    FLD float ptr [EAX + 0xd0c8]        ; 00543d48
    FLDZ                                ; 00543d4e
    FCOMPP                              ; 00543d50
    FNSTSW AX                           ; 00543d52
    SAHF                                ; 00543d54
    JA 0x005439e1                       ; 00543d55
        ;   XREF to: 005439e1 (CONDITIONAL_JUMP)  ; LAB_005439e1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543d5b
    FLD float ptr [EAX + 0xd0c8]        ; 00543d61
    FSUB float ptr [EBP + 0x92]         ; 00543d67
    FST float ptr [EAX + 0xd0c8]        ; 00543d6d
    FLDZ                                ; 00543d73
    FCOMPP                              ; 00543d75
    FNSTSW AX                           ; 00543d77
    SAHF                                ; 00543d79
    JC 0x005439e1                       ; 00543d7a
        ;   XREF to: 005439e1 (CONDITIONAL_JUMP)  ; LAB_005439e1
    PUSH 0x40000000                     ; 00543d80
    PUSH 0x3f800000                     ; 00543d85
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00543d8a
    CALL core_actor.cpp_FUN_0040ce40    ; 00543d90
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 00543d95
    ADD ESP,0x8                         ; 00543d98
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543d9b
    FLD float ptr [EBP + 0x76]          ; 00543da1
    PUSH EBX                            ; 00543da4
    FSTP float ptr [EAX + 0xd0c8]       ; 00543da5
    MOV EAX,dword ptr [EAX + 0x154]     ; 00543dab
    LEA ESI,[EBP + 0xfffffdda]          ; 00543db1
    LEA EDI,[EBP + 0xfffffe22]          ; 00543db7
    CALL dword ptr [EAX + 0x1c]         ; 00543dbd
    MOV ECX,0x6                         ; 00543dc0
    LEA ESI,[EBP + 0xfffffdda]          ; 00543dc5
    MOVSD.REP ES:EDI,ESI                ; 00543dcb
    LEA EAX,[EBP + 0xfffffe22]          ; 00543dcd
    FLD float ptr [EBP + 0xfffffe22]    ; 00543dd3
    FLD float ptr [EBP + 0xfffffe26]    ; 00543dd9
    FLD float ptr [EBP + 0xfffffe2a]    ; 00543ddf
    LEA EDI,[EBP + 0xffffff2a]          ; 00543de5
    LEA ESI,[EBP + 0xffffff42]          ; 00543deb
    FXCH ST2                            ; 00543df1
    FADD float ptr [EAX + 0xc]          ; 00543df3
    FXCH                                ; 00543df6
    FADD float ptr [EAX + 0x10]         ; 00543df8
    FXCH ST2                            ; 00543dfb
    FADD float ptr [EAX + 0x14]         ; 00543dfd
    FXCH                                ; 00543e00
    FSTP float ptr [EBP + 0xffffff42]   ; 00543e02
    FXCH                                ; 00543e08
    FSTP float ptr [EBP + 0xffffff46]   ; 00543e0a
    FSTP float ptr [EBP + 0xffffff4a]   ; 00543e10
    MOVSD ES:EDI,ESI                    ; 00543e16
    MOVSD ES:EDI,ESI                    ; 00543e17
    MOVSD ES:EDI,ESI                    ; 00543e18
    FLD float ptr [0x005d12be]          ; 00543e19 | DAT_005d12be
    FLD float ptr [EBP + 0xffffff2a]    ; 00543e1f
    FMUL ST1                            ; 00543e25
    FLD float ptr [EBP + 0xffffff2e]    ; 00543e27
    FMUL ST2                            ; 00543e2d
    ADD ESP,0x4                         ; 00543e2f
    LEA EAX,[EBP + 0x2]                 ; 00543e32
    FLD float ptr [EBP + 0xffffff32]    ; 00543e35
    FMULP ST3                           ; 00543e3b
    PUSH EAX                            ; 00543e3d
    LEA EDI,[EBP + 0x2]                 ; 00543e3e
    LEA ESI,[EBP + 0xfffffe46]          ; 00543e41
    PUSH EBX                            ; 00543e47
    FXCH                                ; 00543e48
    FSTP float ptr [EBP + 0xfffffe46]   ; 00543e4a
    FSTP float ptr [EBP + 0xfffffe4a]   ; 00543e50
    FSTP float ptr [EBP + 0xfffffe4e]   ; 00543e56
    MOVSD ES:EDI,ESI                    ; 00543e5c
    MOVSD ES:EDI,ESI                    ; 00543e5d
    MOVSD ES:EDI,ESI                    ; 00543e5e
    LEA EBX,[EBP + 0xffffff06]          ; 00543e5f
    LEA ESI,[EBP + 0xfffffe3a]          ; 00543e65
    LEA EDI,[EBP + 0x32]                ; 00543e6b
    CALL core_actor.cpp_FUN_00408b80    ; 00543e6e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffe3a]          ; 00543e73
    LEA EAX,[EBP + 0x32]                ; 00543e79
    ADD ESP,0x8                         ; 00543e7c
    MOVSD ES:EDI,ESI                    ; 00543e7f
    MOVSD ES:EDI,ESI                    ; 00543e80
    MOVSD ES:EDI,ESI                    ; 00543e81
    CMP EBX,EAX                         ; 00543e82
    JZ 0x00543ea1                       ; 00543e84
        ;   XREF to: 00543ea1 (CONDITIONAL_JUMP)  ; LAB_00543ea1
    MOV EAX,dword ptr [EBP + 0x32]      ; 00543e86
    MOV dword ptr [EBP + 0xffffff06],EAX ; 00543e89
    MOV EAX,dword ptr [EBP + 0x36]      ; 00543e8f
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 00543e92
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00543e98
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 00543e9b
    LEA EBX,[EBP + 0xfffffefa]          ; 00543ea1
        ;   Label: LAB_00543ea1
    LEA EAX,[EBP + 0xffffff06]          ; 00543ea7
    FLD float ptr [EAX]                 ; 00543ead
    FMUL float ptr [0x005e3d30]         ; 00543eaf | DAT_005e3d30
    FISTP dword ptr [EBX]               ; 00543eb5
    FLD float ptr [EAX + 0x4]           ; 00543eb7
    FMUL float ptr [0x005e3d30]         ; 00543eba | DAT_005e3d30
    FISTP dword ptr [EBX + 0x4]         ; 00543ec0
    FLD float ptr [EAX + 0x8]           ; 00543ec3
    FMUL float ptr [0x005e3d30]         ; 00543ec6 | DAT_005e3d30
    FISTP dword ptr [EBX + 0x8]         ; 00543ecc
    PUSH 0x0                            ; 00543ecf
    LEA EAX,[EBP + 0xfffffefa]          ; 00543ed1
    PUSH EAX                            ; 00543ed7
    MOV EDI,dword ptr [0x00603b28]      ; 00543ed8 | g_CDemonSetPtr
    PUSH EDI                            ; 00543ede | g_CDemonSetInstance
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00543edf
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 ; 00543ee5
        ;   XREF to: 00537e20 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EDX,dword ptr [EBX + 0xd0e0]    ; 00543eea
    ADD ESP,0xc                         ; 00543ef0
    TEST EDX,EDX                        ; 00543ef3
    JZ 0x005439e1                       ; 00543ef5
        ;   XREF to: 005439e1 (CONDITIONAL_JUMP)  ; LAB_005439e1
    FLD float ptr [0x005e3d60]          ; 00543efb | DAT_005e3d60
    FMUL double ptr [0x005d1306]        ; 00543f01 | DAT_005d1306
    MOV dword ptr [EBP + 0x76],EAX      ; 00543f07
    FILD dword ptr [EBP + 0x76]         ; 00543f0a
    FCOMPP                              ; 00543f0d
    FNSTSW AX                           ; 00543f0f
    SAHF                                ; 00543f11
    JC 0x005439e1                       ; 00543f12
        ;   XREF to: 005439e1 (CONDITIONAL_JUMP)  ; LAB_005439e1
    PUSH 0x1                            ; 00543f18
    PUSH 0x4                            ; 00543f1a
    PUSH 0x0                            ; 00543f1c
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00543f1e
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00543f23
    PUSH EAX                            ; 00543f26
    LEA EAX,[EBX + 0x158]               ; 00543f27
    PUSH EAX                            ; 00543f2d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00543f2e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00543f33
    PUSH 0x5d1295                       ; 00543f36 | DAT_005d1295
    PUSH EBX                            ; 00543f3b
    CALL core_charactr.cpp_FUN_004348b0 ; 00543f3c
        ;   XREF to: 004348b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004348b0()
    ADD ESP,0x8                         ; 00543f41
    MOV dword ptr [EBX + 0xd0bc],EAX    ; 00543f44
    TEST EAX,EAX                        ; 00543f4a
    JNZ 0x00544f9f                      ; 00543f4c
        ;   XREF to: 00544f9f (CONDITIONAL_JUMP)  ; LAB_00544f9f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543f52
        ;   Label: LAB_00543f52
    FLD float ptr [EAX + 0xd0c8]        ; 00543f58
    FADD float ptr [0x005d130e]         ; 00543f5e | DAT_005d130e
    FSTP float ptr [EAX + 0xd0c8]       ; 00543f64
    LEA ESP,[EBP + 0x7a]                ; 00543f6a
    POP EBP                             ; 00543f6d
    POP EDI                             ; 00543f6e
    POP ESI                             ; 00543f6f
    POP EBX                             ; 00543f70
    RET                                 ; 00543f71
    PUSH 0x1                            ; 00543f72
        ;   Label: LAB_00543f72
    PUSH 0x0                            ; 00543f74
    PUSH EBX                            ; 00543f76
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00543f77
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00543f7c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00543f7f
    PUSH EBX                            ; 00543f85
    PUSH 0x5d1246                       ; 00543f86 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 00543f8b | g_CConsolePtr
    PUSH ESI                            ; 00543f91 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00543f92
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x00543abd                      ; 00543f97
        ;   XREF to: 00543abd (UNCONDITIONAL_JUMP)  ; LAB_00543abd
    PUSH EBX                            ; 00543f9c
        ;   Label: LAB_00543f9c
    CALL core_motion.cpp_FUN_004fc930   ; 00543f9d
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00543fa2
    ADD ESP,0x4                         ; 00543fa5
    FLD float ptr [EBP + 0x76]          ; 00543fa8
    FCOMP double ptr [0x005d12de]       ; 00543fab | DAT_005d12de
    FNSTSW AX                           ; 00543fb1
    SAHF                                ; 00543fb3
    JBE 0x00543ac0                      ; 00543fb4
        ;   XREF to: 00543ac0 (CONDITIONAL_JUMP)  ; LAB_00543ac0
    PUSH 0x1                            ; 00543fba
    PUSH 0x1                            ; 00543fbc
    PUSH 0x0                            ; 00543fbe
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00543fc0
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00543fc5
    ADD EAX,0xb                         ; 00543fc8
    PUSH EAX                            ; 00543fcb
    JMP 0x00543ab7                      ; 00543fcc
        ;   XREF to: 00543ab7 (UNCONDITIONAL_JUMP)  ; LAB_00543ab7
    JBE 0x00543f9c                      ; 00543fd1
        ;   XREF to: 00543f9c (CONDITIONAL_JUMP)  ; LAB_00543f9c
        ;   Label: LAB_00543fd1
    CMP EAX,0x3                         ; 00543fd3
    JZ 0x00543f72                       ; 00543fd6
        ;   XREF to: 00543f72 (CONDITIONAL_JUMP)  ; LAB_00543f72
    PUSH 0x1                            ; 00543fd8
        ;   Label: LAB_00543fd8
    PUSH 0x4                            ; 00543fda
    PUSH 0x0                            ; 00543fdc
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00543fde
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00543fe3
    PUSH EAX                            ; 00543fe6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00543fe7
    ADD EAX,0x158                       ; 00543fed
    PUSH EAX                            ; 00543ff2
    JMP 0x00543ab8                      ; 00543ff3
        ;   XREF to: 00543ab8 (UNCONDITIONAL_JUMP)  ; LAB_00543ab8
    LEA EAX,[EBP + 0xfffffd9e]          ; 00543ff8
        ;   Label: caseD_6
    PUSH EAX                            ; 00543ffe
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00543fff
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544004
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0054400a
    MOV ECX,0x6d                        ; 00544010
    MOV EAX,dword ptr [EAX + 0xce5c]    ; 00544015
    ADD ESP,0x4                         ; 0054401b
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 0054401e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544024
    MOV dword ptr [EBP + 0xfffffdce],ECX ; 0054402a
    MOV dword ptr [EBP + 0xfffffdd2],EAX ; 00544030
    MOV dword ptr [EBP + 0xfffffdd6],EAX ; 00544036
    LEA EAX,[EBP + 0xfffffd9e]          ; 0054403c
    MOV EBX,dword ptr [EBX + 0xd060]    ; 00544042
    PUSH EAX                            ; 00544048
    LEA EAX,[EBX*0x4 + 0x0]             ; 00544049
    SUB EAX,EBX                         ; 00544050
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00544052
    SHL EAX,0x4                         ; 00544058
    ADD EBX,0xfd8                       ; 0054405b
    ADD EAX,EBX                         ; 00544061
    PUSH 0x3f800000                     ; 00544063
    PUSH EAX                            ; 00544068
    PUSH 0x2cfd900                      ; 00544069 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff36]          ; 0054406e
    LEA EDI,[EBP + -0x52]               ; 00544074
    CALL core_xform.cpp_FUN_00583260    ; 00544077
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0xffffff36]          ; 0054407c
    LEA EAX,[EBP + -0x52]               ; 00544082
    ADD ESP,0x8                         ; 00544085
    MOVSD ES:EDI,ESI                    ; 00544088
    MOVSD ES:EDI,ESI                    ; 00544089
    MOVSD ES:EDI,ESI                    ; 0054408a
    PUSH EAX                            ; 0054408b
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0054408c
    PUSH ESI                            ; 00544092
    LEA ESI,[EBP + -0x46]               ; 00544093
    LEA EDI,[EBP + 0xfffffebe]          ; 00544096
    CALL core_actor.cpp_FUN_00408b80    ; 0054409c
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x46]               ; 005440a1
    LEA EAX,[EBP + 0xfffffebe]          ; 005440a4
    ADD ESP,0x8                         ; 005440aa
    MOVSD ES:EDI,ESI                    ; 005440ad
    MOVSD ES:EDI,ESI                    ; 005440ae
    MOVSD ES:EDI,ESI                    ; 005440af
    PUSH EAX                            ; 005440b0
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005440b1
    PUSH EDI                            ; 005440b7
    CALL core_enemy.cpp_FUN_004893f0    ; 005440b8
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    MOV EAX,dword ptr [EDI + 0xce5c]    ; 005440bd
    ADD ESP,0x10                        ; 005440c3
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 005440c6
    MOV dword ptr [EBP + 0xfffffdd2],EDI ; 005440cc
    MOV dword ptr [EBP + 0xfffffdd6],EDI ; 005440d2
    LEA EAX,[EBP + 0xfffffd9e]          ; 005440d8
    MOV ESI,dword ptr [EDI + 0xd05c]    ; 005440de
    PUSH EAX                            ; 005440e4
    LEA EAX,[ESI*0x4 + 0x0]             ; 005440e5
    SUB EAX,ESI                         ; 005440ec
    SHL EAX,0x4                         ; 005440ee
    ADD EAX,EBX                         ; 005440f1
    PUSH 0x3f800000                     ; 005440f3
    PUSH EAX                            ; 005440f8
    PUSH 0x2cfd900                      ; 005440f9 | DAT_02cfd900
    LEA ESI,[EBP + 0x1a]                ; 005440fe
    LEA EDI,[EBP + -0x2e]               ; 00544101
    CALL core_xform.cpp_FUN_00583260    ; 00544104
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00544109
    LEA EAX,[EBP + -0x2e]               ; 0054410c
    LEA ESI,[EBP + 0x1a]                ; 0054410f
    PUSH EAX                            ; 00544112
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544113
    MOVSD ES:EDI,ESI                    ; 00544119
    MOVSD ES:EDI,ESI                    ; 0054411a
    MOVSD ES:EDI,ESI                    ; 0054411b
    PUSH EAX                            ; 0054411c
    LEA ESI,[EBP + 0x26]                ; 0054411d
    CALL core_actor.cpp_FUN_00408b80    ; 00544120
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00544125
    LEA EAX,[EBP + -0x5e]               ; 00544128
    LEA EDI,[EBP + -0x5e]               ; 0054412b
    PUSH EAX                            ; 0054412e
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0054412f
    LEA ESI,[EBP + 0x26]                ; 00544135
    PUSH EDX                            ; 00544138
    MOVSD ES:EDI,ESI                    ; 00544139
    MOVSD ES:EDI,ESI                    ; 0054413a
    MOVSD ES:EDI,ESI                    ; 0054413b
    CALL core_enemy.cpp_FUN_004893f0    ; 0054413c
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544141
    MOV EAX,dword ptr [EAX + 0xce5c]    ; 00544147
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0054414d
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 00544153
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544159
    ADD ESP,0x10                        ; 0054415f
    MOV dword ptr [EBP + 0xfffffdd2],EAX ; 00544162
    MOV dword ptr [EBP + 0xfffffdd6],EAX ; 00544168
    LEA EAX,[EBP + 0xfffffd9e]          ; 0054416e
    MOV ESI,dword ptr [ESI + 0xd064]    ; 00544174
    PUSH EAX                            ; 0054417a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054417b
    SUB EAX,ESI                         ; 00544182
    SHL EAX,0x4                         ; 00544184
    ADD EBX,EAX                         ; 00544187
    PUSH 0x3f800000                     ; 00544189
    PUSH EBX                            ; 0054418e
    PUSH 0x2cfd900                      ; 0054418f | DAT_02cfd900
    LEA ESI,[EBP + -0x6a]               ; 00544194
    LEA EDI,[EBP + -0x16]               ; 00544197
    CALL core_xform.cpp_FUN_00583260    ; 0054419a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + -0x6a]               ; 0054419f
    ADD ESP,0x8                         ; 005441a2
    LEA EAX,[EBP + -0x16]               ; 005441a5
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005441a8
    PUSH EAX                            ; 005441ae
    MOVSD ES:EDI,ESI                    ; 005441af
    MOVSD ES:EDI,ESI                    ; 005441b0
    MOVSD ES:EDI,ESI                    ; 005441b1
    PUSH ECX                            ; 005441b2
    LEA ESI,[EBP + 0xfffffeb2]          ; 005441b3
    CALL core_actor.cpp_FUN_00408b80    ; 005441b9
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005441be
    LEA EAX,[EBP + -0xa]                ; 005441c1
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005441c4
    PUSH EAX                            ; 005441ca
    LEA EDI,[EBP + -0xa]                ; 005441cb
    LEA ESI,[EBP + 0xfffffeb2]          ; 005441ce
    PUSH EBX                            ; 005441d4
    MOVSD ES:EDI,ESI                    ; 005441d5
    MOVSD ES:EDI,ESI                    ; 005441d6
    MOVSD ES:EDI,ESI                    ; 005441d7
    CALL core_enemy.cpp_FUN_004893f0    ; 005441d8
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005441dd
    ADD ESP,0x10                        ; 005441e3
    TEST ESI,ESI                        ; 005441e6
    JZ 0x00544216                       ; 005441e8
        ;   XREF to: 00544216 (CONDITIONAL_JUMP)  ; LAB_00544216
    PUSH ESI                            ; 005441ea
    MOV EBX,dword ptr [ESI + 0x154]     ; 005441eb
    CALL dword ptr [EBX + 0x10c]        ; 005441f1
    ADD ESP,0x4                         ; 005441f7
    TEST EAX,EAX                        ; 005441fa
    JZ 0x00544216                       ; 005441fc
        ;   XREF to: 00544216 (CONDITIONAL_JUMP)  ; LAB_00544216
    PUSH 0x1                            ; 005441fe
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544200
    PUSH 0xa                            ; 00544206
    ADD EAX,0x158                       ; 00544208
    PUSH EAX                            ; 0054420d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0054420e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544213
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00544216
        ;   Label: LAB_00544216
    PUSH EDI                            ; 0054421c
    CALL core_shadow.cpp_FUN_00545080   ; 0054421d
        ;   XREF to: 00545080 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545080()
    ADD ESP,0x4                         ; 00544222
    JMP 0x00543af0                      ; 00544225
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    FLD float ptr [EBP + 0x52]          ; 0054422a
        ;   Label: caseD_14
    FMUL double ptr [0x005d12a6]        ; 0054422d | DAT_005d12a6
    FDIV float ptr [EBP + 0x5e]         ; 00544233
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544236
    MOV dword ptr [EAX + 0xd0d0],0x0    ; 0054423c
    CALL crt_math.c_round_FUN_005a3120  ; 00544246
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX + 0xd0d8]      ; 0054424b
    JMP 0x00543af0                      ; 00544251
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    FLD float ptr [EBP + 0x5e]          ; 00544256
        ;   Label: caseD_d
    FLD ST0                             ; 00544259
    FSUB float ptr [EBP + 0x52]         ; 0054425b
    FMUL double ptr [0x005d12a6]        ; 0054425e | DAT_005d12a6
    FDIVRP                              ; 00544264
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544266
    MOV EBX,dword ptr [0x005fe9dc]      ; 0054426c | g_CGamePtr
    MOV dword ptr [EAX + 0xd0d0],0x0    ; 00544272
    CALL crt_math.c_round_FUN_005a3120  ; 0054427c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX + 0xd0d8]      ; 00544281
    FLD float ptr [EBX + 0x314]         ; 00544287 | g_CGameInstance.field788_0x314
    FMUL float ptr [0x005d12ae]         ; 0054428d | DAT_005d12ae
    FADD float ptr [EAX + 0xd098]       ; 00544293
    FST float ptr [EAX + 0xd098]        ; 00544299
    FLD ST0                             ; 0054429f
    FSIN                                ; 005442a1
    FXCH                                ; 005442a3
    FCOS                                ; 005442a5
    LEA ESI,[EBP + 0xfffffe0a]          ; 005442a7
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005442ad
    LEA EDI,[EBP + 0xfffffdf2]          ; 005442b3
    PUSH EBX                            ; 005442b9
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005442ba
    FXCH                                ; 005442c0
    FSTP float ptr [EBP + 0x72]         ; 005442c2
    MOV EAX,dword ptr [EAX + 0x154]     ; 005442c5
    FSTP float ptr [EBP + 0x4e]         ; 005442cb
    CALL dword ptr [EAX + 0x1c]         ; 005442ce
    MOV ECX,0x6                         ; 005442d1
    LEA ESI,[EBP + 0xfffffe0a]          ; 005442d6
    MOVSD.REP ES:EDI,ESI                ; 005442dc
    FLD float ptr [EBP + 0xfffffe06]    ; 005442de
    FLD float ptr [EBP + 0xfffffdfe]    ; 005442e4
    FSUB float ptr [EBP + 0xfffffdf2]   ; 005442ea
    FXCH                                ; 005442f0
    FSUB float ptr [EBP + 0xfffffdfa]   ; 005442f2
    FXCH                                ; 005442f8
    FMUL float ptr [EBP + 0x72]         ; 005442fa
    FXCH                                ; 005442fd
    FMUL float ptr [EBP + 0x4e]         ; 005442ff
    FXCH                                ; 00544302
    FLD double ptr [0x005d12b6]         ; 00544304 | DAT_005d12b6
    FXCH                                ; 0054430a
    FMUL ST1                            ; 0054430c
    FLD float ptr [EBP + 0xfffffdf2]    ; 0054430e
    FLD float ptr [EBP + 0xfffffdf6]    ; 00544314
    FLD float ptr [EBP + 0xfffffdfa]    ; 0054431a
    LEA EDI,[EBP + 0xfffffe82]          ; 00544320
    LEA ESI,[EBP + 0xffffff1e]          ; 00544326
    FXCH ST2                            ; 0054432c
    FADD float ptr [EBP + 0xfffffdfe]   ; 0054432e
    FXCH                                ; 00544334
    FADD float ptr [EBP + 0xfffffe02]   ; 00544336
    FXCH ST2                            ; 0054433c
    FADD float ptr [EBP + 0xfffffe06]   ; 0054433e
    FXCH                                ; 00544344
    FSTP float ptr [EBP + 0xffffff1e]   ; 00544346
    FXCH                                ; 0054434c
    FSTP float ptr [EBP + 0xffffff22]   ; 0054434e
    FSTP float ptr [EBP + 0xffffff26]   ; 00544354
    MOVSD ES:EDI,ESI                    ; 0054435a
    MOVSD ES:EDI,ESI                    ; 0054435b
    MOVSD ES:EDI,ESI                    ; 0054435c
    FXCH ST2                            ; 0054435d
    FMULP                               ; 0054435f
    FLD float ptr [0x005d12be]          ; 00544361 | DAT_005d12be
    FLD float ptr [EBP + 0xfffffe82]    ; 00544367
    FMUL ST1                            ; 0054436d
    FLD float ptr [EBP + 0xfffffe86]    ; 0054436f
    FMUL ST2                            ; 00544375
    FLD float ptr [EBP + 0xfffffe8a]    ; 00544377
    FMULP ST3                           ; 0054437d
    ADD ESP,0x4                         ; 0054437f
    LEA EDI,[EBP + 0xffffff66]          ; 00544382
    LEA ESI,[EBP + 0xfffffea6]          ; 00544388
    FXCH ST4                            ; 0054438e
    FSTP float ptr [EBP + 0xffffff4e]   ; 00544390
    FXCH ST2                            ; 00544396
    FSTP float ptr [EBP + 0xffffff56]   ; 00544398
    FLD float ptr [EBP + 0xffffff4e]    ; 0054439e
    FXCH ST2                            ; 005443a4
    FSTP float ptr [EBP + 0xfffffea6]   ; 005443a6
    FXCH ST2                            ; 005443ac
    FSTP float ptr [EBP + 0xfffffeaa]   ; 005443ae
    FXCH                                ; 005443b4
    FSTP float ptr [EBP + 0xfffffeae]   ; 005443b6
    MOVSD ES:EDI,ESI                    ; 005443bc
    MOVSD ES:EDI,ESI                    ; 005443bd
    MOVSD ES:EDI,ESI                    ; 005443be
    FLD float ptr [EBP + 0xffffff56]    ; 005443bf
    FLD float ptr [EBP + 0xffffff6a]    ; 005443c5
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 005443cb
    LEA EDI,[EBP + 0xffffff72]          ; 005443d1
    LEA ESI,[EBP + 0xfffffe9a]          ; 005443d7
    MOV dword ptr [EBP + 0xffffff52],EAX ; 005443dd
    LEA EAX,[EBP + 0xffffff4e]          ; 005443e3
    FXCH ST2                            ; 005443e9
    FADD float ptr [EBX + 0x20]         ; 005443eb
    FXCH ST2                            ; 005443ee
    FADD float ptr [EBX + 0x24]         ; 005443f0
    FXCH                                ; 005443f3
    FADD float ptr [EBX + 0x28]         ; 005443f5
    FXCH ST2                            ; 005443f8
    FSTP float ptr [EBP + 0xfffffe9a]   ; 005443fa
    FSTP float ptr [EBP + 0xfffffe9e]   ; 00544400
    FSTP float ptr [EBP + 0xfffffea2]   ; 00544406
    LEA EBX,[EBP + 0xffffff72]          ; 0054440c
    MOVSD ES:EDI,ESI                    ; 00544412
    MOVSD ES:EDI,ESI                    ; 00544413
    MOVSD ES:EDI,ESI                    ; 00544414
    CMP EAX,EBX                         ; 00544415
    JZ 0x0054443d                       ; 00544417
        ;   XREF to: 0054443d (CONDITIONAL_JUMP)  ; LAB_0054443d
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 00544419
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 0054441f
    MOV EAX,dword ptr [EBP + 0xffffff76] ; 00544425
    MOV dword ptr [EBP + 0xffffff52],EAX ; 0054442b
    MOV EAX,dword ptr [EBP + 0xffffff7a] ; 00544431
    MOV dword ptr [EBP + 0xffffff56],EAX ; 00544437
    LEA EAX,[EBP + 0xffffff4e]          ; 0054443d
        ;   Label: LAB_0054443d
    PUSH EAX                            ; 00544443
    PUSH 0x270f7d8                      ; 00544444
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 00544449
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0054444e
    MOV ESI,0xea60                      ; 00544451
    PUSH 0x40c00000                     ; 00544456
    MOV AH,0x3a                         ; 0054445b
    PUSH 0x270f7d8                      ; 0054445d
    MOV dword ptr [0x0270f814],ESI      ; 00544462 | DAT_0270f814
    MOV byte ptr [0x0270f7f4],AH        ; 00544468 | DAT_0270f7f4
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0054446e
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 00544473
    PUSH 0x270f7d8                      ; 00544476
    MOV EAX,[0x00603b28]                ; 0054447b | g_CDemonSetPtr
    XOR EDI,EDI                         ; 00544480
    PUSH EAX                            ; 00544482 | g_CDemonSetInstance
    MOV dword ptr [0x0270f7f8],EDI      ; 00544483 | DAT_0270f7f8
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 00544489
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054448e
    ADD ESP,0x8                         ; 00544494
    LEA ESI,[EAX + 0x158]               ; 00544497
    PUSH ESI                            ; 0054449d
    MOV dword ptr [EAX + 0xd0dc],0x1    ; 0054449e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 005444a8
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005444ad
    PUSH ESI                            ; 005444b0
    MOV EBX,EAX                         ; 005444b1
    MOV EDI,EAX                         ; 005444b3
    CALL core_motion.cpp_FUN_004fc930   ; 005444b5
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005444ba
    FLD float ptr [EBP + 0x76]          ; 005444bd
    FMUL float ptr [0x005d12c2]         ; 005444c0 | DAT_005d12c2
    FLD double ptr [0x005d12c6]         ; 005444c6 | DAT_005d12c6
    FLD ST0                             ; 005444cc
    FXCH ST2                            ; 005444ce
    FLD ST2                             ; 005444d0
    FXCH                                ; 005444d2
    CALL crt_math.c_pow_FUN_005a4764    ; 005444d4
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    FSTP ST2                            ; 005444d9
    FLD double ptr [0x005d12ce]         ; 005444db | DAT_005d12ce
    CALL crt_math.c_pow_FUN_005a4764    ; 005444e1
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    FDIVP                               ; 005444e6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005444e8
    FLD1                                ; 005444ee
    FADDP                               ; 005444f0
    ADD ESP,0x4                         ; 005444f2
    FSTP float ptr [EAX + 0xd0d4]       ; 005444f5
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 005444fb
    XOR EAX,EAX                         ; 00544501
    TEST EDX,EDX                        ; 00544503
    JLE 0x00543af0                      ; 00544505
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0054450b
    FLD float ptr [EBX + 0xd0d4]        ; 00544511
        ;   Label: LAB_00544511
    INC EAX                             ; 00544517
    FSTP float ptr [ESI + 0x514]        ; 00544518
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 0054451e
    ADD ESI,0x4                         ; 00544524
    CMP EAX,EDX                         ; 00544527
    JL 0x00544511                       ; 00544529
        ;   XREF to: 00544511 (CONDITIONAL_JUMP)  ; LAB_00544511
    JMP 0x00543af0                      ; 0054452b
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544530
        ;   Label: caseD_f
    MOV dword ptr [EAX + 0xd0d8],0x0    ; 00544536
    MOV dword ptr [EAX + 0xd0d4],0x3f800000 ; 00544540
    MOV dword ptr [EAX + 0x70],0x2      ; 0054454a
    LEA ESP,[EBP + 0x7a]                ; 00544551
    POP EBP                             ; 00544554
    POP EDI                             ; 00544555
    POP ESI                             ; 00544556
    POP EBX                             ; 00544557
    RET                                 ; 00544558
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544559
        ;   Label: caseD_a
    MOV dword ptr [EAX + 0xd0d0],0x1    ; 0054455f
    MOV dword ptr [EAX + 0xd0d8],0xfde8 ; 00544569
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544573
        ;   Label: caseD_0
    PUSH dword ptr [EBP + 0x92]         ; 00544579
    PUSH EAX                            ; 0054457f
    MOV dword ptr [EAX + 0xd0d0],0x1    ; 00544580
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0054458a
    MOV dword ptr [EAX + 0xd0d8],0xfde8 ; 00544590
    CALL core_enemy.cpp_FUN_00489ff0    ; 0054459a
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESI,0x158                       ; 0054459f
    ADD ESP,0x8                         ; 005445a5
    TEST EAX,EAX                        ; 005445a8
    JNZ 0x005446cb                      ; 005445aa
        ;   XREF to: 005446cb (CONDITIONAL_JUMP)  ; LAB_005446cb
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005445b0
    CMP dword ptr [EAX + 0xd0bc],0x0    ; 005445b6
    JZ 0x005445f8                       ; 005445bd
        ;   XREF to: 005445f8 (CONDITIONAL_JUMP)  ; LAB_005445f8
    FLD float ptr [EAX + 0xd0c4]        ; 005445bf
    FSUB float ptr [EBP + 0x92]         ; 005445c5
    FST float ptr [EAX + 0xd0c4]        ; 005445cb
    FLDZ                                ; 005445d1
    FCOMPP                              ; 005445d3
    FNSTSW AX                           ; 005445d5
    SAHF                                ; 005445d7
    JC 0x00544716                       ; 005445d8
        ;   XREF to: 00544716 (CONDITIONAL_JUMP)  ; LAB_00544716
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005445de
    MOV dword ptr [EAX + 0xd0bc],0x0    ; 005445e4
    MOV dword ptr [EAX + 0xd0c4],0x0    ; 005445ee
    PUSH dword ptr [EBP + 0x92]         ; 005445f8
        ;   Label: LAB_005445f8
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005445fe
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544604
    PUSH ECX                            ; 0054460a
    MOV EAX,dword ptr [EAX + 0x154]     ; 0054460b
    CALL dword ptr [EAX + 0x144]        ; 00544611
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544617
    MOV EBX,dword ptr [EAX + 0xcde4]    ; 0054461d
    ADD ESP,0x8                         ; 00544623
    TEST EBX,EBX                        ; 00544626
    JZ 0x00543af0                       ; 00544628
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    JZ 0x0054477f                       ; 0054462e
        ;   XREF to: 0054477f (CONDITIONAL_JUMP)  ; LAB_0054477f
    CMP dword ptr [EAX + 0xd088],0x0    ; 00544634
    JZ 0x0054477f                       ; 0054463b
        ;   XREF to: 0054477f (CONDITIONAL_JUMP)  ; LAB_0054477f
    MOV EAX,EBX                         ; 00544641
    LEA EDI,[EBP + 0xffffff12]          ; 00544643
    LEA ESI,[EBP + 0xfffffeee]          ; 00544649
    FLD float ptr [EAX + 0x20]          ; 0054464f
    FLD float ptr [EAX + 0x24]          ; 00544652
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00544655
    FLD float ptr [EAX + 0x28]          ; 0054465b
    FXCH ST2                            ; 0054465e
    FSUB float ptr [EBX + 0x20]         ; 00544660
    FXCH                                ; 00544663
    FSUB float ptr [EBX + 0x24]         ; 00544665
    FXCH ST2                            ; 00544668
    FSUB float ptr [EBX + 0x28]         ; 0054466a
    FXCH                                ; 0054466d
    FSTP float ptr [EBP + 0xfffffeee]   ; 0054466f
    FXCH                                ; 00544675
    FSTP float ptr [EBP + 0xfffffef2]   ; 00544677
    FSTP float ptr [EBP + 0xfffffef6]   ; 0054467d
    MOVSD ES:EDI,ESI                    ; 00544683
    MOVSD ES:EDI,ESI                    ; 00544684
    MOVSD ES:EDI,ESI                    ; 00544685
    FLD float ptr [EBP + 0xffffff16]    ; 00544686
    FMUL ST0                            ; 0054468c
    FLD float ptr [EBP + 0xffffff12]    ; 0054468e
    FMUL ST0                            ; 00544694
    FADDP                               ; 00544696
    FLD float ptr [EBP + 0xffffff1a]    ; 00544698
    FMUL ST0                            ; 0054469e
    FADDP                               ; 005446a0
    FSQRT                               ; 005446a2
    FST float ptr [EBP + 0x5a]          ; 005446a4
    FCOMP float ptr [EBX + 0xcddc]      ; 005446a7
    FNSTSW AX                           ; 005446ad
    SAHF                                ; 005446af
    JBE 0x0054476d                      ; 005446b0
        ;   XREF to: 0054476d (CONDITIONAL_JUMP)  ; LAB_0054476d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005446b6
        ;   Label: LAB_005446b6
    MOV dword ptr [EAX + 0xcde4],0x0    ; 005446bc
    JMP 0x00543af0                      ; 005446c6
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x1                            ; 005446cb
        ;   Label: LAB_005446cb
    PUSH 0x5                            ; 005446cd
    PUSH ESI                            ; 005446cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005446d0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005446d5
    JMP 0x00543af0                      ; 005446d8
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x1                            ; 005446dd
        ;   Label: LAB_005446dd
    PUSH 0x5                            ; 005446df
    PUSH ESI                            ; 005446e1
        ;   Label: LAB_005446e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005446e2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005446e7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005446ea
    CMP dword ptr [EAX + 0xd0bc],0x0    ; 005446f0
    JNZ 0x00543af0                      ; 005446f7
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    JMP 0x005445f8                      ; 005446fd
        ;   XREF to: 005445f8 (UNCONDITIONAL_JUMP)  ; LAB_005445f8
    PUSH 0x1                            ; 00544702
        ;   Label: LAB_00544702
    PUSH 0x1                            ; 00544704
    PUSH 0x0                            ; 00544706
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544708
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0054470d
    ADD EAX,0xb                         ; 00544710
    PUSH EAX                            ; 00544713
    JMP 0x005446e1                      ; 00544714
        ;   XREF to: 005446e1 (UNCONDITIONAL_JUMP)  ; LAB_005446e1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544716
        ;   Label: LAB_00544716
    ADD EAX,0xd0c0                      ; 0054471c
    PUSH EAX                            ; 00544721
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544722
    PUSH 0x3f800000                     ; 00544728
    MOV EBX,dword ptr [EAX + 0xd0bc]    ; 0054472d
    PUSH 0x3f800000                     ; 00544733
    PUSH EBX                            ; 00544738
    PUSH EAX                            ; 00544739
    MOV EDI,EAX                         ; 0054473a
    CALL core_charactr.cpp_FUN_004310e0 ; 0054473c
        ;   XREF to: 004310e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004310e0()
    MOV EAX,EDI                         ; 00544741
    MOV EAX,dword ptr [EAX + 0xd0c0]    ; 00544743
    ADD ESP,0x14                        ; 00544749
    CMP EAX,0x1                         ; 0054474c
    JC 0x00544758                       ; 0054474f
        ;   XREF to: 00544758 (CONDITIONAL_JUMP)  ; LAB_00544758
    JBE 0x005446dd                      ; 00544751
        ;   XREF to: 005446dd (CONDITIONAL_JUMP)  ; LAB_005446dd
    CMP EAX,0x2                         ; 00544753
    JZ 0x00544702                       ; 00544756
        ;   XREF to: 00544702 (CONDITIONAL_JUMP)  ; LAB_00544702
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544758
        ;   Label: LAB_00544758
    MOV dword ptr [EAX + 0xd0bc],0x0    ; 0054475e
    JMP 0x005445f8                      ; 00544768
        ;   XREF to: 005445f8 (UNCONDITIONAL_JUMP)  ; LAB_005445f8
    FLD float ptr [EBP + 0x5a]          ; 0054476d
        ;   Label: LAB_0054476d
    FCOMP double ptr [0x005d12f6]       ; 00544770 | DAT_005d12f6
    FNSTSW AX                           ; 00544776
    SAHF                                ; 00544778
    JA 0x005446b6                       ; 00544779
        ;   XREF to: 005446b6 (CONDITIONAL_JUMP)  ; LAB_005446b6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054477f
        ;   Label: LAB_0054477f
    CMP dword ptr [EAX + 0xcde4],0x0    ; 00544785
    JZ 0x005447cb                       ; 0054478c
        ;   XREF to: 005447cb (CONDITIONAL_JUMP)  ; LAB_005447cb
    PUSH 0x3ecccccd                     ; 0054478e
    CALL core_actor.cpp_FUN_0040cf40    ; 00544793
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00544798
    TEST EAX,EAX                        ; 0054479b
    JZ 0x005447ae                       ; 0054479d
        ;   XREF to: 005447ae (CONDITIONAL_JUMP)  ; LAB_005447ae
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0054479f
    PUSH ECX                            ; 005447a5
    CALL core_shadow.cpp_FUN_00545040   ; 005447a6
        ;   XREF to: 00545040 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545040()
    ADD ESP,0x4                         ; 005447ab
    PUSH 0x1                            ; 005447ae
        ;   Label: LAB_005447ae
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005447b0
    PUSH 0x5                            ; 005447b6
    ADD EAX,0x158                       ; 005447b8
    PUSH EAX                            ; 005447bd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005447be
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005447c3
    JMP 0x00543af0                      ; 005447c6
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    LEA EBX,[EAX + 0x158]               ; 005447cb
        ;   Label: LAB_005447cb
    PUSH EBX                            ; 005447d1
    CALL core_motion.cpp_FUN_004fc930   ; 005447d2
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005447d7
    ADD ESP,0x4                         ; 005447da
    FLD float ptr [EBP + 0x76]          ; 005447dd
    FCOMP double ptr [0x005d12de]       ; 005447e0 | DAT_005d12de
    FNSTSW AX                           ; 005447e6
    SAHF                                ; 005447e8
    JBE 0x00543af0                      ; 005447e9
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x1                            ; 005447ef
    PUSH 0x4                            ; 005447f1
    PUSH 0x0                            ; 005447f3
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005447f5
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005447fa
    PUSH EAX                            ; 005447fd
    PUSH EBX                            ; 005447fe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005447ff
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544804
    JMP 0x00543af0                      ; 00544807
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054480c
        ;   Label: caseD_5
    CMP dword ptr [EAX + 0xd0bc],0x0    ; 00544812
    JZ 0x00544854                       ; 00544819
        ;   XREF to: 00544854 (CONDITIONAL_JUMP)  ; LAB_00544854
    FLD float ptr [EAX + 0xd0c4]        ; 0054481b
    FSUB float ptr [EBP + 0x92]         ; 00544821
    FST float ptr [EAX + 0xd0c4]        ; 00544827
    FLDZ                                ; 0054482d
    FCOMPP                              ; 0054482f
    FNSTSW AX                           ; 00544831
    SAHF                                ; 00544833
    JC 0x00544b35                       ; 00544834
        ;   XREF to: 00544b35 (CONDITIONAL_JUMP)  ; LAB_00544b35
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054483a
    MOV dword ptr [EAX + 0xd0bc],0x0    ; 00544840
    MOV dword ptr [EAX + 0xd0c4],0x0    ; 0054484a
    PUSH dword ptr [EBP + 0x92]         ; 00544854
        ;   Label: LAB_00544854
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0054485a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544860
    PUSH ESI                            ; 00544866
    MOV EAX,dword ptr [EAX + 0x154]     ; 00544867
    CALL dword ptr [EAX + 0x144]        ; 0054486d
    ADD ESP,0x8                         ; 00544873
    LEA EAX,[ESI + 0x158]               ; 00544876
    MOV EDI,dword ptr [ESI + 0xcde4]    ; 0054487c
    MOV dword ptr [EBP + 0x62],EAX      ; 00544882
    TEST EDI,EDI                        ; 00544885
    JZ 0x00544bc0                       ; 00544887
        ;   XREF to: 00544bc0 (CONDITIONAL_JUMP)  ; LAB_00544bc0
    MOV EAX,EDI                         ; 0054488d
    FLD float ptr [EAX + 0x20]          ; 0054488f
    FLD float ptr [EAX + 0x24]          ; 00544892
    FLD float ptr [EAX + 0x28]          ; 00544895
    LEA EDI,[EBP + 0xffffff5a]          ; 00544898
    FXCH ST2                            ; 0054489e
    FSUB float ptr [ESI + 0x20]         ; 005448a0
    FXCH                                ; 005448a3
    FSUB float ptr [ESI + 0x24]         ; 005448a5
    FXCH ST2                            ; 005448a8
    FSUB float ptr [ESI + 0x28]         ; 005448aa
    FXCH                                ; 005448ad
    FSTP float ptr [EBP + 0xfffffed6]   ; 005448af
    FXCH                                ; 005448b5
    FSTP float ptr [EBP + 0xfffffeda]   ; 005448b7
    LEA ESI,[EBP + 0xfffffed6]          ; 005448bd
    FSTP float ptr [EBP + 0xfffffede]   ; 005448c3
    MOVSD ES:EDI,ESI                    ; 005448c9
    MOVSD ES:EDI,ESI                    ; 005448ca
    MOVSD ES:EDI,ESI                    ; 005448cb
    FLD float ptr [EBP + 0xffffff5e]    ; 005448cc
    FMUL ST0                            ; 005448d2
    FLD float ptr [EBP + 0xffffff5a]    ; 005448d4
    FMUL ST0                            ; 005448da
    FADDP                               ; 005448dc
    FLD float ptr [EBP + 0xffffff62]    ; 005448de
    FMUL ST0                            ; 005448e4
    FADDP                               ; 005448e6
    FSQRT                               ; 005448e8
    FSTP float ptr [EBP + 0x6a]         ; 005448ea
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005448ed
    FLD float ptr [EBP + 0x6a]          ; 005448f3
    FCOMP float ptr [EAX + 0xcddc]      ; 005448f6
    FNSTSW AX                           ; 005448fc
    SAHF                                ; 005448fe
    JA 0x00544bdf                       ; 005448ff
        ;   XREF to: 00544bdf (CONDITIONAL_JUMP)  ; LAB_00544bdf
    FLD float ptr [0x005e3d4c]          ; 00544905 | DAT_005e3d4c
    FADD float ptr [0x005d12e6]         ; 0054490b | DAT_005d12e6
    FCOMP float ptr [EBP + 0x6a]        ; 00544911
    FNSTSW AX                           ; 00544914
    SAHF                                ; 00544916
    JNC 0x0054493e                      ; 00544917
        ;   XREF to: 0054493e (CONDITIONAL_JUMP)  ; LAB_0054493e
    FLD1                                ; 00544919
    FADD float ptr [0x005e3d4c]         ; 0054491b | DAT_005e3d4c
    FCOMP float ptr [EBP + 0x6a]        ; 00544921
    FNSTSW AX                           ; 00544924
    SAHF                                ; 00544926
    JBE 0x0054493e                      ; 00544927
        ;   XREF to: 0054493e (CONDITIONAL_JUMP)  ; LAB_0054493e
    PUSH 0x3                            ; 00544929
    PUSH 0x0                            ; 0054492b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0054492d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544932
    CMP EAX,0x1                         ; 00544935
    JNZ 0x00544c0f                      ; 00544938
        ;   XREF to: 00544c0f (CONDITIONAL_JUMP)  ; LAB_00544c0f
    MOV EAX,[0x005e3d50]                ; 0054493e | DAT_005e3d50
        ;   Label: LAB_0054493e
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00544943
    MOV dword ptr [EBP + 0x4a],EAX      ; 00544949
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0054494c
    MOV ESI,dword ptr [ESI + 0xcde4]    ; 00544952
    MOV dword ptr [EAX + 0x24a4],0x0    ; 00544958
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 00544962
    MOV dword ptr [EAX + 0x24a0],EDX    ; 00544968
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 0054496e
    MOV dword ptr [EAX + 0x249c],EDX    ; 00544974
    XOR EAX,EAX                         ; 0054497a
    MOV dword ptr [EBP + 0xe],EAX       ; 0054497c
    MOV dword ptr [EBP + 0x12],EAX      ; 0054497f
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00544982
    PUSH 0x3e32b8c2                     ; 00544985
    MOV dword ptr [EBP + 0x16],EAX      ; 0054498a
    LEA EAX,[EBP + 0xe]                 ; 0054498d
    PUSH 0x3f000000                     ; 00544990
    PUSH EAX                            ; 00544995
    PUSH ESI                            ; 00544996
    MOV EAX,dword ptr [ESI + 0x154]     ; 00544997
    CALL dword ptr [EAX + 0xc4]         ; 0054499d
    ADD ESP,0x4                         ; 005449a3
    PUSH EAX                            ; 005449a6
    ADD ESI,0x20                        ; 005449a7
    PUSH ESI                            ; 005449aa
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005449ab
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005449b1
    PUSH ECX                            ; 005449b7
    ADD EDI,0x158                       ; 005449b8
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 005449be
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005449c3
    TEST EAX,EAX                        ; 005449c6
    JL 0x00544c64                       ; 005449c8
        ;   XREF to: 00544c64 (CONDITIONAL_JUMP)  ; LAB_00544c64
    JLE 0x00544c9c                      ; 005449ce
        ;   XREF to: 00544c9c (CONDITIONAL_JUMP)  ; LAB_00544c9c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005449d4
    FLD float ptr [EAX + 0xcde0]        ; 005449da
    FLDZ                                ; 005449e0
    FCOMPP                              ; 005449e2
    FNSTSW AX                           ; 005449e4
    SAHF                                ; 005449e6
    JC 0x00544a52                       ; 005449e7
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    PUSH 0x1                            ; 005449e9
    PUSH 0x6                            ; 005449eb
    PUSH EDI                            ; 005449ed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005449ee
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005449f3
    PUSH 0x5d1293                       ; 005449f6 | DAT_005d1293
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005449fb
    PUSH EBX                            ; 00544a01
    CALL core_charactr.cpp_FUN_004348b0 ; 00544a02
        ;   XREF to: 004348b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004348b0()
    ADD ESP,0x8                         ; 00544a07
    MOV dword ptr [EBX + 0xd0bc],EAX    ; 00544a0a
    TEST EAX,EAX                        ; 00544a10
    JZ 0x00544a32                       ; 00544a12
        ;   XREF to: 00544a32 (CONDITIONAL_JUMP)  ; LAB_00544a32
    PUSH 0x41400000                     ; 00544a14
    PUSH 0x40800000                     ; 00544a19
    CALL core_actor.cpp_FUN_0040ce40    ; 00544a1e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 00544a23
    ADD ESP,0x8                         ; 00544a26
    MOV EAX,dword ptr [EBP + 0x76]      ; 00544a29
    MOV dword ptr [EBX + 0xd0c4],EAX    ; 00544a2c
    PUSH 0x3f4ccccd                     ; 00544a32
        ;   Label: LAB_00544a32
    CALL core_actor.cpp_FUN_0040cf40    ; 00544a37
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00544a3c
    TEST EAX,EAX                        ; 00544a3f
    JZ 0x00544a52                       ; 00544a41
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00544a43
    PUSH EDI                            ; 00544a49
    CALL core_shadow.cpp_FUN_00545040   ; 00544a4a
        ;   XREF to: 00545040 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545040()
    ADD ESP,0x4                         ; 00544a4f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544a52
        ;   Label: LAB_00544a52
    FLD float ptr [EAX + 0xd07c]        ; 00544a58
    FSUB float ptr [EBP + 0x92]         ; 00544a5e
    FST float ptr [EAX + 0xd07c]        ; 00544a64
    FLDZ                                ; 00544a6a
    FCOMPP                              ; 00544a6c
    FNSTSW AX                           ; 00544a6e
    SAHF                                ; 00544a70
    JBE 0x00543af0                      ; 00544a71
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00544a77
    PUSH EBX                            ; 00544a7d
    CALL core_shadow.cpp_FUN_00545040   ; 00544a7e
        ;   XREF to: 00545040 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545040()
    ADD ESP,0x4                         ; 00544a83
    JMP 0x00543af0                      ; 00544a86
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x1                            ; 00544a8b
        ;   Label: LAB_00544a8b
    PUSH 0x5                            ; 00544a8d
    PUSH ESI                            ; 00544a8f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544a90
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544a95
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544a98
        ;   Label: LAB_00544a98
    CMP dword ptr [EAX + 0xd0bc],0x0    ; 00544a9e
    JNZ 0x00543af0                      ; 00544aa5
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    JMP 0x00544854                      ; 00544aab
        ;   XREF to: 00544854 (UNCONDITIONAL_JUMP)  ; LAB_00544854
    PUSH ESI                            ; 00544ab0
        ;   Label: LAB_00544ab0
    CALL core_motion.cpp_FUN_004fc930   ; 00544ab1
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00544ab6
    ADD ESP,0x4                         ; 00544ab9
    FLD float ptr [EBP + 0x76]          ; 00544abc
    FCOMP double ptr [0x005d12d6]       ; 00544abf | DAT_005d12d6
    FNSTSW AX                           ; 00544ac5
    SAHF                                ; 00544ac7
    JBE 0x00544ad6                      ; 00544ac8
        ;   XREF to: 00544ad6 (CONDITIONAL_JUMP)  ; LAB_00544ad6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544aca
    INC dword ptr [EAX + 0xd0cc]        ; 00544ad0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544ad6
        ;   Label: LAB_00544ad6
    CMP dword ptr [EAX + 0xd0cc],0x2    ; 00544adc
    JLE 0x00544a98                      ; 00544ae3
        ;   XREF to: 00544a98 (CONDITIONAL_JUMP)  ; LAB_00544a98
    LEA ESI,[EAX + 0x158]               ; 00544ae5
    PUSH ESI                            ; 00544aeb
    CALL core_motion.cpp_FUN_004fc930   ; 00544aec
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00544af1
    ADD ESP,0x4                         ; 00544af4
    FLD float ptr [EBP + 0x76]          ; 00544af7
    FCOMP double ptr [0x005d12de]       ; 00544afa | DAT_005d12de
    FNSTSW AX                           ; 00544b00
    SAHF                                ; 00544b02
    JBE 0x00544a98                      ; 00544b03
        ;   XREF to: 00544a98 (CONDITIONAL_JUMP)  ; LAB_00544a98
    PUSH 0x1                            ; 00544b05
    PUSH 0x1                            ; 00544b07
    PUSH 0x0                            ; 00544b09
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544b0b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544b10
    ADD EAX,0xb                         ; 00544b13
    PUSH EAX                            ; 00544b16
    PUSH ESI                            ; 00544b17
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544b18
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544b1d
    ADD ESP,0xc                         ; 00544b23
    MOV dword ptr [EAX + 0xd0cc],0x0    ; 00544b26
    JMP 0x00544a98                      ; 00544b30
        ;   XREF to: 00544a98 (UNCONDITIONAL_JUMP)  ; LAB_00544a98
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544b35
        ;   Label: LAB_00544b35
    ADD EAX,0xd0c0                      ; 00544b3b
    PUSH EAX                            ; 00544b40
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544b41
    PUSH 0x3f800000                     ; 00544b47
    MOV ECX,dword ptr [EAX + 0xd0bc]    ; 00544b4c
    PUSH 0x3f800000                     ; 00544b52
    PUSH ECX                            ; 00544b57
    PUSH EAX                            ; 00544b58
    MOV ESI,EAX                         ; 00544b59
    CALL core_charactr.cpp_FUN_004310e0 ; 00544b5b
        ;   XREF to: 004310e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004310e0()
    MOV EAX,ESI                         ; 00544b60
    MOV EAX,dword ptr [EAX + 0xd0c0]    ; 00544b62
    ADD ESP,0x14                        ; 00544b68
    CMP EAX,0x1                         ; 00544b6b
    JC 0x00544b88                       ; 00544b6e
        ;   XREF to: 00544b88 (CONDITIONAL_JUMP)  ; LAB_00544b88
    ADD ESI,0x158                       ; 00544b70
    CMP EAX,0x1                         ; 00544b76
    JBE 0x00544a8b                      ; 00544b79
        ;   XREF to: 00544a8b (CONDITIONAL_JUMP)  ; LAB_00544a8b
    CMP EAX,0x2                         ; 00544b7f
    JZ 0x00544ab0                       ; 00544b82
        ;   XREF to: 00544ab0 (CONDITIONAL_JUMP)  ; LAB_00544ab0
    PUSH 0x1                            ; 00544b88
        ;   Label: LAB_00544b88
    PUSH 0x4                            ; 00544b8a
    PUSH 0x0                            ; 00544b8c
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544b8e
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544b93
    PUSH EAX                            ; 00544b96
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544b97
    ADD EAX,0x158                       ; 00544b9d
    PUSH EAX                            ; 00544ba2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544ba3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544ba8
    ADD ESP,0xc                         ; 00544bae
    MOV dword ptr [EAX + 0xd0bc],0x0    ; 00544bb1
    JMP 0x00544854                      ; 00544bbb
        ;   XREF to: 00544854 (UNCONDITIONAL_JUMP)  ; LAB_00544854
    PUSH 0x1                            ; 00544bc0
        ;   Label: LAB_00544bc0
    PUSH 0x4                            ; 00544bc2
    PUSH EDI                            ; 00544bc4
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544bc5
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544bca
    PUSH EAX                            ; 00544bcd
    MOV EAX,dword ptr [EBP + 0x62]      ; 00544bce
    PUSH EAX                            ; 00544bd1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544bd2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544bd7
    JMP 0x00543af0                      ; 00544bda
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x1                            ; 00544bdf
        ;   Label: LAB_00544bdf
    PUSH 0x4                            ; 00544be1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544be3
    PUSH 0x0                            ; 00544be9
    MOV dword ptr [EAX + 0xcde4],0x0    ; 00544beb
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544bf5
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544bfa
    PUSH EAX                            ; 00544bfd
    MOV EDI,dword ptr [EBP + 0x62]      ; 00544bfe
    PUSH EDI                            ; 00544c01
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544c02
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544c07
    JMP 0x00543af0                      ; 00544c0a
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x1                            ; 00544c0f
        ;   Label: LAB_00544c0f
    PUSH 0x7                            ; 00544c11
    MOV ECX,dword ptr [EBP + 0x62]      ; 00544c13
    PUSH ECX                            ; 00544c16
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544c17
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544c1c
    PUSH 0x5d1270                       ; 00544c1f | DAT_005d1270
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00544c24
    PUSH EBX                            ; 00544c2a
    CALL core_charactr.cpp_FUN_004348b0 ; 00544c2b
        ;   XREF to: 004348b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004348b0()
    ADD ESP,0x8                         ; 00544c30
    MOV dword ptr [EBX + 0xd0bc],EAX    ; 00544c33
    TEST EAX,EAX                        ; 00544c39
    JZ 0x00543af0                       ; 00544c3b
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    PUSH 0x41400000                     ; 00544c41
    PUSH 0x40800000                     ; 00544c46
    CALL core_actor.cpp_FUN_0040ce40    ; 00544c4b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 00544c50
    ADD ESP,0x8                         ; 00544c53
    MOV EAX,dword ptr [EBP + 0x76]      ; 00544c56
    MOV dword ptr [EBX + 0xd0c4],EAX    ; 00544c59
    JMP 0x00543af0                      ; 00544c5f
        ;   XREF to: 00543af0 (UNCONDITIONAL_JUMP)  ; LAB_00543af0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544c64
        ;   Label: LAB_00544c64
    PUSH EAX                            ; 00544c6a
    PUSH 0x5d1272                       ; 00544c6b | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00544c70 | g_CConsolePtr
    PUSH EDX                            ; 00544c76 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00544c77
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00544c7c
    PUSH 0x1                            ; 00544c7f
    PUSH 0x4                            ; 00544c81
    PUSH 0x0                            ; 00544c83
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544c85
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544c8a
    PUSH EAX                            ; 00544c8d
    PUSH EDI                            ; 00544c8e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544c8f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544c94
    JMP 0x00544a52                      ; 00544c97
        ;   XREF to: 00544a52 (UNCONDITIONAL_JUMP)  ; LAB_00544a52
    MOV EDI,dword ptr [0x02cfd81c]      ; 00544c9c | g_CTrapClassInfo.name_hash
        ;   Label: LAB_00544c9c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544ca2
    PUSH EDI                            ; 00544ca8
    MOV EDX,dword ptr [EAX + 0xd088]    ; 00544ca9
    PUSH EDX                            ; 00544caf
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00544cb0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00544cb5
    TEST EAX,EAX                        ; 00544cb8
    JNZ 0x00544a52                      ; 00544cba
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    FLD float ptr [ESI + 0x4]           ; 00544cc0
    FLD float ptr [ESI + 0x8]           ; 00544cc3
    FLD float ptr [ESI]                 ; 00544cc6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544cc8
    LEA EDI,[EBP + -0x76]               ; 00544cce
    LEA ESI,[EBP + 0xfffffe6a]          ; 00544cd1
    FSUB float ptr [EAX + 0x20]         ; 00544cd7
    FXCH ST2                            ; 00544cda
    FSUB float ptr [EAX + 0x24]         ; 00544cdc
    FXCH                                ; 00544cdf
    FSUB float ptr [EAX + 0x28]         ; 00544ce1
    FXCH ST2                            ; 00544ce4
    FSTP float ptr [EBP + 0xfffffe6a]   ; 00544ce6
    FSTP float ptr [EBP + 0xfffffe6e]   ; 00544cec
    FSTP float ptr [EBP + 0xfffffe72]   ; 00544cf2
    MOVSD ES:EDI,ESI                    ; 00544cf8
    MOVSD ES:EDI,ESI                    ; 00544cf9
    MOVSD ES:EDI,ESI                    ; 00544cfa
    LEA EAX,[EBP + -0x76]               ; 00544cfb
    LEA ESI,[EBP + 0xfffffe5e]          ; 00544cfe
    CMP ESI,EAX                         ; 00544d04
    JZ 0x00544d23                       ; 00544d06
        ;   XREF to: 00544d23 (CONDITIONAL_JUMP)  ; LAB_00544d23
    MOV EAX,dword ptr [EBP + -0x76]     ; 00544d08
    MOV dword ptr [EBP + 0xfffffe5e],EAX ; 00544d0b
    MOV EAX,dword ptr [EBP + -0x72]     ; 00544d11
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 00544d14
    MOV EAX,dword ptr [EBP + -0x6e]     ; 00544d1a
    MOV dword ptr [EBP + 0xfffffe66],EAX ; 00544d1d
    FLD float ptr [EBP + 0xfffffe62]    ; 00544d23
        ;   Label: LAB_00544d23
    FMUL ST0                            ; 00544d29
    FLD float ptr [EBP + 0xfffffe5e]    ; 00544d2b
    FMUL ST0                            ; 00544d31
    FADDP                               ; 00544d33
    FLD float ptr [EBP + 0xfffffe66]    ; 00544d35
    FMUL ST0                            ; 00544d3b
    FADDP                               ; 00544d3d
    FSQRT                               ; 00544d3f
    MOV ECX,0x41a00000                  ; 00544d41
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544d46
    MOV dword ptr [EBP + 0x66],ECX      ; 00544d4c
    MOV ESI,dword ptr [EAX + 0xd054]    ; 00544d4f
    FSTP float ptr [EBP + 0x56]         ; 00544d55
    CMP ESI,0x1                         ; 00544d58
    JNZ 0x00544d64                      ; 00544d5b
        ;   XREF to: 00544d64 (CONDITIONAL_JUMP)  ; LAB_00544d64
    MOV dword ptr [EBP + 0x66],0x41200000 ; 00544d5d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544d64
        ;   Label: LAB_00544d64
    CMP dword ptr [EAX + 0xd054],0x2    ; 00544d6a
    JNZ 0x00544d7a                      ; 00544d71
        ;   XREF to: 00544d7a (CONDITIONAL_JUMP)  ; LAB_00544d7a
    MOV dword ptr [EBP + 0x66],0x41200000 ; 00544d73
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544d7a
        ;   Label: LAB_00544d7a
    ADD EAX,0x158                       ; 00544d80
    FLD float ptr [EBP + 0x56]          ; 00544d85
    MOV dword ptr [EBP + 0x6e],EAX      ; 00544d88
    FCOMP float ptr [EBP + 0x66]        ; 00544d8b
    FNSTSW AX                           ; 00544d8e
    SAHF                                ; 00544d90
    JA 0x00544e14                       ; 00544d91
        ;   XREF to: 00544e14 (CONDITIONAL_JUMP)  ; LAB_00544e14
    FLD float ptr [0x005e3d50]          ; 00544d97 | DAT_005e3d50
    FMUL float ptr [0x005d12c2]         ; 00544d9d | DAT_005d12c2
    FCOMP float ptr [EBP + 0x56]        ; 00544da3
    FNSTSW AX                           ; 00544da6
    SAHF                                ; 00544da8
    JBE 0x00544a52                      ; 00544da9
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    CMP EBX,0x5                         ; 00544daf
    JNZ 0x00544de9                      ; 00544db2
        ;   XREF to: 00544de9 (CONDITIONAL_JUMP)  ; LAB_00544de9
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00544db4
    PUSH ESI                            ; 00544db7
    CALL core_motion.cpp_FUN_004fc930   ; 00544db8
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00544dbd
    ADD ESP,0x4                         ; 00544dc0
    FLD float ptr [EBP + 0x76]          ; 00544dc3
    FCOMP double ptr [0x005d12de]       ; 00544dc6 | DAT_005d12de
    FNSTSW AX                           ; 00544dcc
    SAHF                                ; 00544dce
    JBE 0x00544de9                      ; 00544dcf
        ;   XREF to: 00544de9 (CONDITIONAL_JUMP)  ; LAB_00544de9
    PUSH 0x1                            ; 00544dd1
    PUSH 0x4                            ; 00544dd3
    PUSH 0x0                            ; 00544dd5
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544dd7
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544ddc
    PUSH EAX                            ; 00544ddf
    PUSH ESI                            ; 00544de0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544de1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544de6
    CMP EBX,0xb                         ; 00544de9
        ;   Label: LAB_00544de9
    JZ 0x00544df7                       ; 00544dec
        ;   XREF to: 00544df7 (CONDITIONAL_JUMP)  ; LAB_00544df7
    CMP EBX,0xc                         ; 00544dee
    JNZ 0x00544a52                      ; 00544df1
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    PUSH 0x1                            ; 00544df7
        ;   Label: LAB_00544df7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544df9
    PUSH 0x5                            ; 00544dff
    ADD EAX,0x158                       ; 00544e01
    PUSH EAX                            ; 00544e06
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544e07
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544e0c
    JMP 0x00544a52                      ; 00544e0f
        ;   XREF to: 00544a52 (UNCONDITIONAL_JUMP)  ; LAB_00544a52
    LEA EAX,[EBP + 0xfffffe5e]          ; 00544e14
        ;   Label: LAB_00544e14
    PUSH EAX                            ; 00544e1a
    LEA ESI,[EBP + 0xfffffeca]          ; 00544e1b
    LEA EDI,[EBP + -0x22]               ; 00544e21
    CALL core_vecdir.cpp_FUN_00576250   ; 00544e24
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[EBP + 0xfffffeca]          ; 00544e29
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544e2f
    MOVSD ES:EDI,ESI                    ; 00544e35
    MOVSD ES:EDI,ESI                    ; 00544e36
    MOVSD ES:EDI,ESI                    ; 00544e37
    ADD ESP,0x4                         ; 00544e38
    FLD float ptr [EBP + -0x1e]         ; 00544e3b
    FSUB float ptr [EAX + 0x34]         ; 00544e3e
    SUB ESP,0x4                         ; 00544e41
    FSTP float ptr [ESP]                ; 00544e44
    CALL core_actor.cpp_FUN_0040cfa0    ; 00544e47
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00544e4c
    FLD float ptr [EBP + 0x76]          ; 00544e4f
    FABS                                ; 00544e52
    ADD ESP,0x4                         ; 00544e54
    FCOMP double ptr [0x005d12ee]       ; 00544e57 | DAT_005d12ee
    FNSTSW AX                           ; 00544e5d
    SAHF                                ; 00544e5f
    JNC 0x00544a52                      ; 00544e60
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00544e66
    PUSH EAX                            ; 00544e69
    CALL core_motion.cpp_FUN_004fc930   ; 00544e6a
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00544e6f
    ADD ESP,0x4                         ; 00544e72
    FLD float ptr [EBP + 0x76]          ; 00544e75
    FCOMP double ptr [0x005d12de]       ; 00544e78 | DAT_005d12de
    FNSTSW AX                           ; 00544e7e
    SAHF                                ; 00544e80
    JBE 0x00544ea1                      ; 00544e81
        ;   XREF to: 00544ea1 (CONDITIONAL_JUMP)  ; LAB_00544ea1
    PUSH 0x1                            ; 00544e83
    PUSH 0x1                            ; 00544e85
    PUSH 0x0                            ; 00544e87
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544e89
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544e8e
    ADD EAX,0xb                         ; 00544e91
    PUSH EAX                            ; 00544e94
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00544e95
    PUSH EDX                            ; 00544e98
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00544e99
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544e9e
    PUSH 0x3e19999a                     ; 00544ea1
        ;   Label: LAB_00544ea1
    CALL core_actor.cpp_FUN_0040cf40    ; 00544ea6
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00544eab
    TEST EAX,EAX                        ; 00544eae
    JNZ 0x00544ee8                      ; 00544eb0
        ;   XREF to: 00544ee8 (CONDITIONAL_JUMP)  ; LAB_00544ee8
    XOR ESI,ESI                         ; 00544eb2
        ;   Label: LAB_00544eb2
    XOR EDI,EDI                         ; 00544eb4
    MOV EAX,[0x00603b28]                ; 00544eb6 | g_CDemonSetPtr
        ;   Label: LAB_00544eb6
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 00544ebb | g_CDemonSetInstance.field1380332_0x150fec
    JGE 0x00544a52                      ; 00544ec1
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    MOV EBX,dword ptr [0x0270f850]      ; 00544ec7 | g_CShadowClassInfo.name_hash
    PUSH EBX                            ; 00544ecd
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 00544ece
    PUSH EDX                            ; 00544ed5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00544ed6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00544edb
    TEST EAX,EAX                        ; 00544ede
    JNZ 0x00544ef9                      ; 00544ee0
        ;   XREF to: 00544ef9 (CONDITIONAL_JUMP)  ; LAB_00544ef9
    INC EDI                             ; 00544ee2
        ;   Label: LAB_00544ee2
    ADD ESI,0x4                         ; 00544ee3
    JMP 0x00544eb6                      ; 00544ee6
        ;   XREF to: 00544eb6 (UNCONDITIONAL_JUMP)  ; LAB_00544eb6
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00544ee8
        ;   Label: LAB_00544ee8
    PUSH ECX                            ; 00544eee
    CALL core_shadow.cpp_FUN_00545040   ; 00544eef
        ;   XREF to: 00545040 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545040()
    ADD ESP,0x4                         ; 00544ef4
    JMP 0x00544eb2                      ; 00544ef7
        ;   XREF to: 00544eb2 (UNCONDITIONAL_JUMP)  ; LAB_00544eb2
    CMP EAX,dword ptr [EBP + 0x8e]      ; 00544ef9
        ;   Label: LAB_00544ef9
    JZ 0x00544ee2                       ; 00544eff
        ;   XREF to: 00544ee2 (CONDITIONAL_JUMP)  ; LAB_00544ee2
    LEA EBX,[EAX + 0x158]               ; 00544f01
    PUSH EBX                            ; 00544f07
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00544f08
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00544f0d
    ADD ESP,0x4                         ; 00544f10
    CMP EAX,0xb                         ; 00544f13
    JNZ 0x00544f5d                      ; 00544f16
        ;   XREF to: 00544f5d (CONDITIONAL_JUMP)  ; LAB_00544f5d
    PUSH 0x2                            ; 00544f18
        ;   Label: LAB_00544f18
    PUSH 0x0                            ; 00544f1a
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00544f1c
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544f21
    MOV EBX,EAX                         ; 00544f24
    CMP EAX,0x1                         ; 00544f26
    JNZ 0x00544f3d                      ; 00544f29
        ;   XREF to: 00544f3d (CONDITIONAL_JUMP)  ; LAB_00544f3d
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544f2b
    FLD float ptr [EAX + 0x34]          ; 00544f31
    FADD float ptr [0x005d12fe]         ; 00544f34 | DAT_005d12fe
    FSTP float ptr [EAX + 0x34]         ; 00544f3a
    CMP EBX,0x2                         ; 00544f3d
        ;   Label: LAB_00544f3d
    JNZ 0x00544a52                      ; 00544f40
        ;   XREF to: 00544a52 (CONDITIONAL_JUMP)  ; LAB_00544a52
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544f46
    FLD float ptr [EAX + 0x34]          ; 00544f4c
    FADD float ptr [0x005d1302]         ; 00544f4f | DAT_005d1302
    FSTP float ptr [EAX + 0x34]         ; 00544f55
    JMP 0x00544a52                      ; 00544f58
        ;   XREF to: 00544a52 (UNCONDITIONAL_JUMP)  ; LAB_00544a52
    PUSH EBX                            ; 00544f5d
        ;   Label: LAB_00544f5d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00544f5e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00544f63
    ADD ESP,0x4                         ; 00544f66
    CMP EAX,0xc                         ; 00544f69
    JZ 0x00544f18                       ; 00544f6c
        ;   XREF to: 00544f18 (CONDITIONAL_JUMP)  ; LAB_00544f18
    INC EDI                             ; 00544f6e
    ADD ESI,0x4                         ; 00544f6f
    JMP 0x00544eb6                      ; 00544f72
        ;   XREF to: 00544eb6 (UNCONDITIONAL_JUMP)  ; LAB_00544eb6
    CMP EBX,0x14                        ; 00544f77
        ;   Label: LAB_00544f77
    JA 0x00544559                       ; 00544f7a
        ;   XREF to: 00544559 (CONDITIONAL_JUMP)  ; caseD_13
    JMP dword ptr [EBX*0x4 + 0x543870]  ; 00544f80 | caseD_4 | caseD_c | caseD_9
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00544f87
        ;   Label: LAB_00544f87
    CMP dword ptr [EAX + 0xdc],0x0      ; 00544f8d
    JNZ 0x00543b73                      ; 00544f94
        ;   XREF to: 00543b73 (CONDITIONAL_JUMP)  ; LAB_00543b73
    JMP 0x00543cfb                      ; 00544f9a
        ;   XREF to: 00543cfb (UNCONDITIONAL_JUMP)  ; LAB_00543cfb
    PUSH 0x40c00000                     ; 00544f9f
        ;   Label: LAB_00544f9f
    PUSH 0x40400000                     ; 00544fa4
    CALL core_actor.cpp_FUN_0040ce40    ; 00544fa9
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 00544fae
    ADD ESP,0x8                         ; 00544fb1
    MOV EAX,dword ptr [EBP + 0x76]      ; 00544fb4
    MOV dword ptr [EBX + 0xd0c4],EAX    ; 00544fb7
    JMP 0x00543f52                      ; 00544fbd
        ;   XREF to: 00543f52 (UNCONDITIONAL_JUMP)  ; LAB_00543f52

