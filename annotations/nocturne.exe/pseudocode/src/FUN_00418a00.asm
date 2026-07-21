; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418a00(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined        Stack[-0x180]:1  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_004189e0 = 004192c0
;   string s_%s_confused_while_walking_to_scr_005792c0
;   string s_%s_gave_up_chase_-_I'm_confused_005792ea
;   string s_boneguy-swing?.wav_0057930b
;   string s_boneGuy-walkloop.wav_0057931e
;   undefined4 DAT_00579336
;   undefined4 DAT_0057933e
;   undefined4 DAT_00579346
;   undefined4 DAT_0057934e
;   undefined4 DAT_00579356
;   undefined4 DAT_0057935e
;   undefined4 DAT_00579366
;   undefined4 DAT_0059a898
;   undefined4 DAT_0059a89c
;   undefined4 DAT_0059a8a8
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418a00
        ;   Label: FUN_00418a00
    PUSH ESI                            ; 00418a01
    PUSH EDI                            ; 00418a02
    PUSH EBP                            ; 00418a03
    MOV EBP,ESP                         ; 00418a04
    SUB ESP,0x1ac                       ; 00418a06
    SUB EBP,0x7a                        ; 00418a0c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00418a0f
    LEA EAX,[EBX + 0xbd38]              ; 00418a15
    PUSH EAX                            ; 00418a1b
    MOV EDX,dword ptr [0x005b7650]      ; 00418a1c | DAT_005b7650
    PUSH EDX                            ; 00418a22
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00418a23
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 00418a28
    TEST EAX,EAX                        ; 00418a2b
    JZ 0x00418a73                       ; 00418a2d
        ;   XREF to: 00418a73 (CONDITIONAL_JUMP)  ; LAB_00418a73
    MOV dword ptr [EBX + 0x2434],0x0    ; 00418a2f
    MOV dword ptr [EBX + 0xbc90],0x1    ; 00418a39
    MOV ECX,dword ptr [EBX + 0xc344]    ; 00418a43
    MOV dword ptr [EBX + 0xc348],0x0    ; 00418a49
    TEST ECX,ECX                        ; 00418a53
    JNZ 0x00418a60                      ; 00418a55
        ;   XREF to: 00418a60 (CONDITIONAL_JUMP)  ; LAB_00418a60
    PUSH EBX                            ; 00418a57
    CALL core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 ; 00418a58
        ;   XREF to: 0041a0f0 (UNCONDITIONAL_CALL)  ; undefined core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0()
    ADD ESP,0x4                         ; 00418a5d
    PUSH 0x0                            ; 00418a60
        ;   Label: LAB_00418a60
    PUSH 0x5                            ; 00418a62
    LEA EAX,[EBX + 0x150]               ; 00418a64
    PUSH EAX                            ; 00418a6a
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990 ; 00418a6b
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990()
    ADD ESP,0xc                         ; 00418a70
    PUSH dword ptr [EBP + 0x92]         ; 00418a73
        ;   Label: LAB_00418a73
    PUSH EBX                            ; 00418a79
    CALL FUN_004259f0                   ; 00418a7a
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004259f0()
    ADD ESP,0x8                         ; 00418a7f
    TEST EAX,EAX                        ; 00418a82
    JZ 0x00418c90                       ; 00418a84
        ;   XREF to: 00418c90 (CONDITIONAL_JUMP)  ; LAB_00418c90
    CMP dword ptr [EBX + 0xc344],0x1    ; 00418a8a
    JNZ 0x00418acc                      ; 00418a91
        ;   XREF to: 00418acc (CONDITIONAL_JUMP)  ; LAB_00418acc
    FLD float ptr [EBX + 0x2434]        ; 00418a93
    FLDZ                                ; 00418a99
    FCOMPP                              ; 00418a9b
    FNSTSW AX                           ; 00418a9d
    SAHF                                ; 00418a9f
    JNC 0x00418acc                      ; 00418aa0
        ;   XREF to: 00418acc (CONDITIONAL_JUMP)  ; LAB_00418acc
    FLD float ptr [EBX + 0xc348]        ; 00418aa2
    FADD float ptr [EBP + 0x92]         ; 00418aa8
    FST float ptr [EBX + 0xc348]        ; 00418aae
    FCOMP float ptr [EBX + 0xbd9c]      ; 00418ab4
    FNSTSW AX                           ; 00418aba
    SAHF                                ; 00418abc
    JBE 0x00418c88                      ; 00418abd
        ;   XREF to: 00418c88 (CONDITIONAL_JUMP)  ; LAB_00418c88
    PUSH EBX                            ; 00418ac3
    CALL core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310 ; 00418ac4
        ;   XREF to: 0041a310 (UNCONDITIONAL_CALL)  ; undefined core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310()
    ADD ESP,0x4                         ; 00418ac9
    CMP dword ptr [EBX + 0xc344],0x2    ; 00418acc
        ;   Label: LAB_00418acc
    JNZ 0x00418d45                      ; 00418ad3
        ;   XREF to: 00418d45 (CONDITIONAL_JUMP)  ; LAB_00418d45
    FLD float ptr [EBP + 0x92]          ; 00418ad9
    FDIV float ptr [0x0059a8a8]         ; 00418adf | DAT_0059a8a8
    FADD float ptr [EBX + 0xc348]       ; 00418ae5
    FST float ptr [EBX + 0xc348]        ; 00418aeb
    FLD1                                ; 00418af1
    FCOMPP                              ; 00418af3
    FNSTSW AX                           ; 00418af5
    SAHF                                ; 00418af7
    JBE 0x00418cbd                      ; 00418af8
        ;   XREF to: 00418cbd (CONDITIONAL_JUMP)  ; LAB_00418cbd
    XOR EDX,EDX                         ; 00418afe
    MOV ECX,dword ptr [EBX + 0xbda0]    ; 00418b00
    MOV dword ptr [EBP + 0x6e],EDX      ; 00418b06
    TEST ECX,ECX                        ; 00418b09
    JLE 0x00418c88                      ; 00418b0b
        ;   XREF to: 00418c88 (CONDITIONAL_JUMP)  ; LAB_00418c88
    LEA EAX,[EBX + 0xbda4]              ; 00418b11
    MOV dword ptr [EBP + 0x5e],EAX      ; 00418b17
    LEA EAX,[EBX + 0xc348]              ; 00418b1a
    MOV dword ptr [EBP + 0x66],EAX      ; 00418b20
    LEA EAX,[EBX + 0xbdbc]              ; 00418b23
    MOV dword ptr [EBP + 0x62],EAX      ; 00418b29
    LEA EAX,[EBX + 0xbdcc]              ; 00418b2c
    MOV dword ptr [EBP + 0x6a],EAX      ; 00418b32
    LEA EAX,[EBX + 0xbddc]              ; 00418b35
    MOV dword ptr [EBP + 0x72],EAX      ; 00418b3b
    IMUL EAX,dword ptr [EBP + 0x6e],0x48 ; 00418b3e
        ;   Label: LAB_00418b3e
    ADD EAX,dword ptr [EBP + 0x5e]      ; 00418b42
    MOV EDX,dword ptr [EAX + 0x44]      ; 00418b45
    MOV dword ptr [EBP + 0x46],EDX      ; 00418b48
    MOV EDX,dword ptr [EBP + 0x72]      ; 00418b4b
    FLD float ptr [EAX]                 ; 00418b4e
    FSUB float ptr [EDX]                ; 00418b50
    FSTP float ptr [EBP + 0x1a]         ; 00418b52
    FLD float ptr [EAX + 0x4]           ; 00418b55
    FSUB float ptr [EDX + 0x4]          ; 00418b58
    FLD float ptr [EBP + 0x1a]          ; 00418b5b
    FXCH                                ; 00418b5e
    FSTP float ptr [EBP + 0x1e]         ; 00418b60
    FLD float ptr [EAX + 0x8]           ; 00418b63
    FSUB float ptr [EDX + 0x8]          ; 00418b66
    MOV EAX,dword ptr [EBP + 0x66]      ; 00418b69
    FSTP float ptr [EBP + 0x22]         ; 00418b6c
    FMUL float ptr [EAX]                ; 00418b6f
    FLD float ptr [EBP + 0x1e]          ; 00418b71
    FXCH                                ; 00418b74
    FSTP float ptr [EBP + -0x2e]        ; 00418b76
    FMUL float ptr [EAX]                ; 00418b79
    FLD float ptr [EBP + 0x22]          ; 00418b7b
    FXCH                                ; 00418b7e
    FSTP float ptr [EBP + -0x2a]        ; 00418b80
    FMUL float ptr [EAX]                ; 00418b83
    FSTP float ptr [EBP + -0x26]        ; 00418b85
    FLD float ptr [EDX]                 ; 00418b88
    FADD float ptr [EBP + -0x2e]        ; 00418b8a
    FSTP float ptr [EBP + -0x22]        ; 00418b8d
    FLD float ptr [EDX + 0x4]           ; 00418b90
    FADD float ptr [EBP + -0x2a]        ; 00418b93
    FSTP float ptr [EBP + -0x1e]        ; 00418b96
    FLD float ptr [EDX + 0x8]           ; 00418b99
    FADD float ptr [EBP + -0x26]        ; 00418b9c
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00418b9f
    FSTP float ptr [EBP + -0x1a]        ; 00418ba2
    PUSH dword ptr [EBX + 0xc348]       ; 00418ba5
    PUSH EDI                            ; 00418bab
    MOV EAX,dword ptr [EBP + 0x62]      ; 00418bac
    PUSH EAX                            ; 00418baf
    LEA ESI,[EBP + 0xffffff6e]          ; 00418bb0
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00418bb6
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 00418bbb
    LEA EAX,[EBP + 0xffffff5e]          ; 00418bbe
    LEA EDI,[EBP + 0xffffff5e]          ; 00418bc4
    PUSH EAX                            ; 00418bca
    LEA EAX,[EBP + 0x2]                 ; 00418bcb
    LEA ESI,[EBP + 0xffffff6e]          ; 00418bce
    PUSH EAX                            ; 00418bd4
    MOVSD ES:EDI,ESI                    ; 00418bd5
    MOVSD ES:EDI,ESI                    ; 00418bd6
    MOVSD ES:EDI,ESI                    ; 00418bd7
    MOVSD ES:EDI,ESI                    ; 00418bd8
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0 ; 00418bd9
        ;   XREF to: 0055d5b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0()
    FLD float ptr [EBX + 0xc348]        ; 00418bde
    FMUL double ptr [0x00579366]        ; 00418be4 | DAT_00579366
    MOV ESI,dword ptr [EBP + 0x46]      ; 00418bea
    FLD float ptr [EBP + 0x2]           ; 00418bed
    FXCH                                ; 00418bf0
    FADD ST0,ST1                        ; 00418bf2
    MOV EAX,dword ptr [EBP + -0x22]     ; 00418bf4
    FSTP ST1                            ; 00418bf7
    FSTP float ptr [EBP + 0x2]          ; 00418bf9
    MOV dword ptr [ESI + 0x20],EAX      ; 00418bfc
    MOV EAX,dword ptr [EBP + -0x1e]     ; 00418bff
    MOV dword ptr [ESI + 0x24],EAX      ; 00418c02
    MOV EAX,dword ptr [EBP + -0x1a]     ; 00418c05
    LEA EDX,[ESI + 0x30]                ; 00418c08
    MOV dword ptr [ESI + 0x28],EAX      ; 00418c0b
    LEA EAX,[EBP + 0x2]                 ; 00418c0e
    ADD ESP,0x8                         ; 00418c11
    CMP EDX,EAX                         ; 00418c14
    JNZ 0x00418ca7                      ; 00418c16
        ;   XREF to: 00418ca7 (CONDITIONAL_JUMP)  ; LAB_00418ca7
    LEA EAX,[EBP + -0x22]               ; 00418c1c
        ;   Label: LAB_00418c1c
    LEA EDX,[ESI + 0xcb4]               ; 00418c1f
    CMP EDX,EAX                         ; 00418c25
    JZ 0x00418c3a                       ; 00418c27
        ;   XREF to: 00418c3a (CONDITIONAL_JUMP)  ; LAB_00418c3a
    MOV EAX,dword ptr [EBP + -0x22]     ; 00418c29
    MOV dword ptr [EDX],EAX             ; 00418c2c
    MOV EAX,dword ptr [EBP + -0x1e]     ; 00418c2e
    MOV dword ptr [EDX + 0x4],EAX       ; 00418c31
    MOV EAX,dword ptr [EBP + -0x1a]     ; 00418c34
    MOV dword ptr [EDX + 0x8],EAX       ; 00418c37
    LEA EAX,[EBP + 0x2]                 ; 00418c3a
        ;   Label: LAB_00418c3a
    LEA EDX,[ESI + 0xcc0]               ; 00418c3d
    CMP EDX,EAX                         ; 00418c43
    JZ 0x00418c58                       ; 00418c45
        ;   XREF to: 00418c58 (CONDITIONAL_JUMP)  ; LAB_00418c58
    MOV EAX,dword ptr [EBP + 0x2]       ; 00418c47
    MOV dword ptr [EDX],EAX             ; 00418c4a
    MOV EAX,dword ptr [EBP + 0x6]       ; 00418c4c
    MOV dword ptr [EDX + 0x4],EAX       ; 00418c4f
    MOV EAX,dword ptr [EBP + 0xa]       ; 00418c52
    MOV dword ptr [EDX + 0x8],EAX       ; 00418c55
    MOV EDX,dword ptr [EBP + 0x62]      ; 00418c58
        ;   Label: LAB_00418c58
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00418c5b
    MOV ESI,dword ptr [EBP + 0x72]      ; 00418c5e
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00418c61
    ADD EDX,0x48                        ; 00418c64
    ADD ECX,0x48                        ; 00418c67
    ADD ESI,0x48                        ; 00418c6a
    INC EDI                             ; 00418c6d
    MOV dword ptr [EBP + 0x62],EDX      ; 00418c6e
    MOV dword ptr [EBP + 0x6a],ECX      ; 00418c71
    MOV dword ptr [EBP + 0x72],ESI      ; 00418c74
    MOV EDX,dword ptr [EBX + 0xbda0]    ; 00418c77
    MOV dword ptr [EBP + 0x6e],EDI      ; 00418c7d
    CMP EDI,EDX                         ; 00418c80
    JL 0x00418b3e                       ; 00418c82
        ;   XREF to: 00418b3e (CONDITIONAL_JUMP)  ; LAB_00418b3e
    LEA ESP,[EBP + 0x7a]                ; 00418c88
        ;   Label: LAB_00418c88
    POP EBP                             ; 00418c8b
    POP EDI                             ; 00418c8c
    POP ESI                             ; 00418c8d
    POP EBX                             ; 00418c8e
    RET                                 ; 00418c8f
    MOV ESI,dword ptr [EBX + 0xbd34]    ; 00418c90
        ;   Label: LAB_00418c90
    PUSH ESI                            ; 00418c96
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00418c97
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00418c9c
    LEA ESP,[EBP + 0x7a]                ; 00418c9f
    POP EBP                             ; 00418ca2
    POP EDI                             ; 00418ca3
    POP ESI                             ; 00418ca4
    POP EBX                             ; 00418ca5
    RET                                 ; 00418ca6
    MOV EAX,dword ptr [EBP + 0x2]       ; 00418ca7
        ;   Label: LAB_00418ca7
    MOV dword ptr [EDX],EAX             ; 00418caa
    MOV EAX,dword ptr [EBP + 0x6]       ; 00418cac
    MOV dword ptr [EDX + 0x4],EAX       ; 00418caf
    MOV EAX,dword ptr [EBP + 0xa]       ; 00418cb2
    MOV dword ptr [EDX + 0x8],EAX       ; 00418cb5
    JMP 0x00418c1c                      ; 00418cb8
        ;   XREF to: 00418c1c (UNCONDITIONAL_JUMP)  ; LAB_00418c1c
    LEA EAX,[EBX + 0x150]               ; 00418cbd
        ;   Label: LAB_00418cbd
    PUSH EAX                            ; 00418cc3
    XOR EDI,EDI                         ; 00418cc4
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90 ; 00418cc6
        ;   XREF to: 0051dc90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90()
    MOV EAX,dword ptr [EBX + 0xbda0]    ; 00418ccb
    ADD ESP,0x4                         ; 00418cd1
    TEST EAX,EAX                        ; 00418cd4
    JLE 0x00418d10                      ; 00418cd6
        ;   XREF to: 00418d10 (CONDITIONAL_JUMP)  ; LAB_00418d10
    MOV ESI,EBX                         ; 00418cd8
    PUSH 0x1                            ; 00418cda
        ;   Label: LAB_00418cda
    MOV EAX,dword ptr [ESI + 0xbde8]    ; 00418cdc
    PUSH EAX                            ; 00418ce2
    MOV EDX,dword ptr [0x005baf90]      ; 00418ce3 | DAT_005baf90
    PUSH EDX                            ; 00418ce9 | DAT_01cc9450
    ADD ESI,0x48                        ; 00418cea
    CALL FUN_004d9110                   ; 00418ced
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9110()
    MOV dword ptr [ESI + 0xbda0],0x0    ; 00418cf2
    INC EDI                             ; 00418cfc
    MOV ECX,dword ptr [EBX + 0xbda0]    ; 00418cfd
    ADD ESP,0xc                         ; 00418d03
    CMP EDI,ECX                         ; 00418d06
    JL 0x00418cda                       ; 00418d08
        ;   XREF to: 00418cda (CONDITIONAL_JUMP)  ; LAB_00418cda
    LEA EAX,[EAX]                       ; 00418d0a
    FLD float ptr [EBX + 0xbd9c]        ; 00418d10
        ;   Label: LAB_00418d10
    MOV dword ptr [EBX + 0xc344],0x0    ; 00418d16
    FLD ST0                             ; 00418d20
    FMUL double ptr [0x00579336]        ; 00418d22 | DAT_00579336
    MOV dword ptr [EBX + 0x2434],0x42c80000 ; 00418d28
    FSTP ST1                            ; 00418d32
    FST float ptr [EBX + 0xbd9c]        ; 00418d34
    FCOMP double ptr [0x0057933e]       ; 00418d3a | DAT_0057933e
    FNSTSW AX                           ; 00418d40
    SAHF                                ; 00418d42
    JBE 0x00418d9c                      ; 00418d43
        ;   XREF to: 00418d9c (CONDITIONAL_JUMP)  ; LAB_00418d9c
    LEA EAX,[EBX + 0x23a4]              ; 00418d45
        ;   Label: LAB_00418d45
    MOV dword ptr [EAX + 0x8],0x0       ; 00418d4b
    FLD float ptr [EBP + 0x92]          ; 00418d52
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418d58
    MOV dword ptr [EAX + 0x4],EDX       ; 00418d5b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418d5e
    MOV dword ptr [EAX],EDX             ; 00418d61
    FMUL float ptr [EBX + 0xbc8c]       ; 00418d63
    LEA ESI,[EBX + 0x150]               ; 00418d69
    FSTP float ptr [EBP + 0x52]         ; 00418d6f
    FLD float ptr [EBP + 0x52]          ; 00418d72
        ;   Label: LAB_00418d72
    FLDZ                                ; 00418d75
    FCOMPP                              ; 00418d77
    FNSTSW AX                           ; 00418d79
    SAHF                                ; 00418d7b
    JNC 0x00418dcf                      ; 00418d7c
        ;   XREF to: 00418dcf (CONDITIONAL_JUMP)  ; LAB_00418dcf
    LEA EAX,[EBP + 0x52]                ; 00418d7e
    PUSH EAX                            ; 00418d81
    PUSH ESI                            ; 00418d82
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00418d83
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 00418d88
    CMP EAX,0x64                        ; 00418d8b
    JZ 0x00418da8                       ; 00418d8e
        ;   XREF to: 00418da8 (CONDITIONAL_JUMP)  ; LAB_00418da8
    PUSH EAX                            ; 00418d90
    PUSH EBX                            ; 00418d91
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00418d92
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 00418d97
    JMP 0x00418d72                      ; 00418d9a
        ;   XREF to: 00418d72 (UNCONDITIONAL_JUMP)  ; LAB_00418d72
    MOV dword ptr [EBX + 0xbd9c],0x40200000 ; 00418d9c
        ;   Label: LAB_00418d9c
    JMP 0x00418d45                      ; 00418da6
        ;   XREF to: 00418d45 (UNCONDITIONAL_JUMP)  ; LAB_00418d45
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 00418da8
        ;   Label: LAB_00418da8
    TEST EAX,EAX                        ; 00418dae
    JZ 0x00418d72                       ; 00418db0
        ;   XREF to: 00418d72 (CONDITIONAL_JUMP)  ; LAB_00418d72
    PUSH 0x3e4ccccd                     ; 00418db2
    PUSH EAX                            ; 00418db7
    PUSH 0x1                            ; 00418db8
    PUSH EBX                            ; 00418dba
    MOV dword ptr [EBX + 0xbd30],0x0    ; 00418dbb
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 00418dc5
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40()
    ADD ESP,0x10                        ; 00418dca
    JMP 0x00418d72                      ; 00418dcd
        ;   XREF to: 00418d72 (UNCONDITIONAL_JUMP)  ; LAB_00418d72
    FLD float ptr [EBX + 0xbc8c]        ; 00418dcf
        ;   Label: LAB_00418dcf
    FLD float ptr [EBP + 0x92]          ; 00418dd5
    FMUL double ptr [0x00579346]        ; 00418ddb | DAT_00579346
    FMULP                               ; 00418de1
    FMUL double ptr [0x0057934e]        ; 00418de3 | DAT_0057934e
    FLD float ptr [EBX + 0x23ac]        ; 00418de9
    PUSH ESI                            ; 00418def
    FSTP float ptr [EBX + 0x242c]       ; 00418df0
    FSTP float ptr [EBX + 0x2430]       ; 00418df6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00418dfc
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 00418e01
    PUSH dword ptr [EBP + 0x92]         ; 00418e04
    MOV EDI,dword ptr [EAX + 0x24]      ; 00418e0a
    PUSH EBX                            ; 00418e0d
    MOV dword ptr [EBP + 0x56],EDI      ; 00418e0e
    CALL FUN_00428c00                   ; 00418e11
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428c00()
    ADD ESP,0x8                         ; 00418e16
    TEST EAX,EAX                        ; 00418e19
    JZ 0x0041949d                       ; 00418e1b
        ;   XREF to: 0041949d (CONDITIONAL_JUMP)  ; LAB_0041949d
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00418e21
    CMP EAX,0x2                         ; 00418e27
    JNC 0x00419071                      ; 00418e2a
        ;   XREF to: 00419071 (CONDITIONAL_JUMP)  ; LAB_00419071
    CMP EAX,0x1                         ; 00418e30
    JNZ 0x0041907c                      ; 00418e33
        ;   XREF to: 0041907c (CONDITIONAL_JUMP)  ; LAB_0041907c
    PUSH 0x1                            ; 00418e39
        ;   Label: LAB_00418e39
    PUSH 0x1                            ; 00418e3b
    LEA EAX,[EBX + 0x150]               ; 00418e3d
        ;   Label: LAB_00418e3d
    PUSH EAX                            ; 00418e43
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00418e44
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00418e49
        ;   Label: LAB_00418e49
    LEA EAX,[EBX + 0x23a4]              ; 00418e4c
    MOV dword ptr [EAX + 0x8],0x0       ; 00418e52
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418e59
    MOV dword ptr [EAX + 0x4],EDX       ; 00418e5c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418e5f
    MOV dword ptr [EAX],EDX             ; 00418e62
    FLD float ptr [EBX + 0xbca0]        ; 00418e64
        ;   Label: caseD_3
    FLDZ                                ; 00418e6a
    FCOMPP                              ; 00418e6c
    FNSTSW AX                           ; 00418e6e
    SAHF                                ; 00418e70
    JNC 0x00418e85                      ; 00418e71
        ;   XREF to: 00418e85 (CONDITIONAL_JUMP)  ; LAB_00418e85
    FLD float ptr [EBX + 0xbca0]        ; 00418e73
    FSUB float ptr [EBP + 0x92]         ; 00418e79
    FSTP float ptr [EBX + 0xbca0]       ; 00418e7f
    PUSH EBX                            ; 00418e85
        ;   Label: LAB_00418e85
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 00418e86
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 00418e8b
    TEST EAX,EAX                        ; 00418e8e
    JZ 0x00418f82                       ; 00418e90
        ;   XREF to: 00418f82 (CONDITIONAL_JUMP)  ; LAB_00418f82
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00418e96
    TEST EDI,EDI                        ; 00418e9c
    JZ 0x00418eca                       ; 00418e9e
        ;   XREF to: 00418eca (CONDITIONAL_JUMP)  ; LAB_00418eca
    PUSH EDI                            ; 00418ea0
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00418ea1
    CALL dword ptr [EDX + 0xec]         ; 00418ea7
    ADD ESP,0x4                         ; 00418ead
    CMP EAX,EBX                         ; 00418eb0
    JNZ 0x00418eca                      ; 00418eb2
        ;   XREF to: 00418eca (CONDITIONAL_JUMP)  ; LAB_00418eca
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00418eb4
    PUSH EAX                            ; 00418eba
    MOV EDX,dword ptr [0x005be368]      ; 00418ebb | DAT_005be368
    PUSH EDX                            ; 00418ec1 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00418ec2
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00418ec7
    FLD float ptr [EBP + 0x92]          ; 00418eca
        ;   Label: LAB_00418eca
    FLD ST0                             ; 00418ed0
    FMUL double ptr [0x0057935e]        ; 00418ed2 | DAT_0057935e
    FLD float ptr [EBX + 0x2424]        ; 00418ed8
    FXCH                                ; 00418ede
    FSUBR ST0,ST1                       ; 00418ee0
    LEA ESI,[EBX + 0x2420]              ; 00418ee2
    FSTP ST1                            ; 00418ee8
    FSTP float ptr [EBX + 0x2424]       ; 00418eea
    FLD float ptr [ESI]                 ; 00418ef0
    FMUL ST1                            ; 00418ef2
    FSTP float ptr [EBP + 0x26]         ; 00418ef4
    FLD float ptr [ESI + 0x4]           ; 00418ef7
    FMUL ST1                            ; 00418efa
    LEA EDX,[EBX + 0x2414]              ; 00418efc
    FSTP float ptr [EBP + 0x2a]         ; 00418f02
    FMUL float ptr [ESI + 0x8]          ; 00418f05
    LEA EAX,[EBX + 0x23a4]              ; 00418f08
    FLD float ptr [EBP + 0x26]          ; 00418f0e
    FXCH                                ; 00418f11
    FSTP float ptr [EBP + 0x2e]         ; 00418f13
    FADD float ptr [EDX]                ; 00418f16
    FLD float ptr [EBP + 0x2a]          ; 00418f18
    FXCH                                ; 00418f1b
    FSTP float ptr [EBP + 0xe]          ; 00418f1d
    FADD float ptr [EDX + 0x4]          ; 00418f20
    FLD float ptr [EBP + 0x2e]          ; 00418f23
    FXCH                                ; 00418f26
    FSTP float ptr [EBP + 0x12]         ; 00418f28
    FADD float ptr [EDX + 0x8]          ; 00418f2b
    FLD float ptr [EBP + 0xe]           ; 00418f2e
    FXCH                                ; 00418f31
    FSTP float ptr [EBP + 0x16]         ; 00418f33
    FADD float ptr [EAX]                ; 00418f36
    FLD float ptr [EBP + 0x12]          ; 00418f38
    FXCH                                ; 00418f3b
    FSTP float ptr [EBP + -0x52]        ; 00418f3d
    FADD float ptr [EAX + 0x4]          ; 00418f40
    FLD float ptr [EBP + 0x16]          ; 00418f43
    FXCH                                ; 00418f46
    FSTP float ptr [EBP + -0x4e]        ; 00418f48
    FADD float ptr [EAX + 0x8]          ; 00418f4b
    FSTP float ptr [EBP + -0x4a]        ; 00418f4e
    MOV dword ptr [EDX + 0x8],0x0       ; 00418f51
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418f58
    MOV dword ptr [EDX + 0x4],ECX       ; 00418f5b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00418f5e
    MOV dword ptr [EDX],ECX             ; 00418f61
    MOV dword ptr [EAX + 0x8],0x0       ; 00418f63
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418f6a
    MOV dword ptr [EAX + 0x4],EDX       ; 00418f6d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418f70
    MOV dword ptr [EAX],EDX             ; 00418f73
    LEA EAX,[EBP + -0x52]               ; 00418f75
    PUSH EAX                            ; 00418f78
    PUSH EBX                            ; 00418f79
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00418f7a
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 00418f7f
    PUSH EBX                            ; 00418f82
        ;   Label: LAB_00418f82
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00418f83
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 00418f88
    LEA EAX,[EBX + 0x150]               ; 00418f8b
    PUSH EAX                            ; 00418f91
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00418f92
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 00418f97
    PUSH dword ptr [EBP + 0x92]         ; 00418f9a
    PUSH EBX                            ; 00418fa0
    CALL FUN_0042a150                   ; 00418fa1
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a150()
    MOV ECX,dword ptr [EBP + 0x56]      ; 00418fa6
    ADD ESP,0x8                         ; 00418fa9
    CMP ECX,0x1                         ; 00418fac
    JNZ 0x00418c90                      ; 00418faf
        ;   XREF to: 00418c90 (CONDITIONAL_JUMP)  ; LAB_00418c90
    PUSH 0x40590000                     ; 00418fb5
    PUSH 0x0                            ; 00418fba
    SUB ESP,0x8                         ; 00418fbc
    FLD float ptr [EBX + 0x28]          ; 00418fbf
    FSTP double ptr [ESP]               ; 00418fc2
    SUB ESP,0x8                         ; 00418fc5
    FLD float ptr [EBX + 0x24]          ; 00418fc8
    FSTP double ptr [ESP]               ; 00418fcb
    SUB ESP,0x8                         ; 00418fce
    FLD float ptr [EBX + 0x20]          ; 00418fd1
    FSTP double ptr [ESP]               ; 00418fd4
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 00418fd7
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880()
    ADD ESP,0x20                        ; 00418fdc
    TEST EAX,EAX                        ; 00418fdf
    JZ 0x00418c90                       ; 00418fe1
        ;   XREF to: 00418c90 (CONDITIONAL_JUMP)  ; LAB_00418c90
    MOV EDI,dword ptr [EBX + 0xbd34]    ; 00418fe7
    PUSH EDI                            ; 00418fed
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00418fee
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00418ff3
    TEST EAX,EAX                        ; 00418ff6
    JNZ 0x00418c88                      ; 00418ff8
        ;   XREF to: 00418c88 (CONDITIONAL_JUMP)  ; LAB_00418c88
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 00418ffe
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x2                            ; 00419003
    PUSH 0x3f800000                     ; 00419005
    PUSH 0x0                            ; 0041900a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041900c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    ADD ESP,0x8                         ; 00419011
    MOV dword ptr [EBP + 0x76],EAX      ; 00419014
    SUB ESP,0x8                         ; 00419017
    FLD float ptr [EBP + 0x76]          ; 0041901a
    FSTP double ptr [ESP]               ; 0041901d
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0 ; 00419020
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0()
    ADD ESP,0xc                         ; 00419025
    PUSH 0x57931e                       ; 00419028 | = "boneGuy-walkloop.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041902d
    PUSH EBX                            ; 00419033
    CALL dword ptr [EAX + 0x28]         ; 00419034
    ADD ESP,0x8                         ; 00419037
    MOV dword ptr [EBX + 0xbd34],EAX    ; 0041903a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 00419040
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    LEA ESP,[EBP + 0x7a]                ; 00419045
    POP EBP                             ; 00419048
    POP EDI                             ; 00419049
    POP ESI                             ; 0041904a
    POP EBX                             ; 0041904b
    RET                                 ; 0041904c
    PUSH 0x1                            ; 0041904d
        ;   Label: LAB_0041904d
    PUSH 0x0                            ; 0041904f
    PUSH ESI                            ; 00419051
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00419052
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00419057
    PUSH EBX                            ; 0041905a
    PUSH 0x5792c0                       ; 0041905b | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005ad350]      ; 00419060 | PTR_DAT_005ad350
    PUSH ESI                            ; 00419066 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00419067
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00418e49                      ; 0041906c
        ;   XREF to: 00418e49 (UNCONDITIONAL_JUMP)  ; LAB_00418e49
    JBE 0x00418e39                      ; 00419071
        ;   XREF to: 00418e39 (CONDITIONAL_JUMP)  ; LAB_00418e39
        ;   Label: LAB_00419071
    CMP EAX,0x3                         ; 00419077
    JZ 0x0041904d                       ; 0041907a
        ;   XREF to: 0041904d (CONDITIONAL_JUMP)  ; LAB_0041904d
    PUSH 0x1                            ; 0041907c
        ;   Label: LAB_0041907c
    PUSH 0x0                            ; 0041907e
    JMP 0x00418e3d                      ; 00419080
        ;   XREF to: 00418e3d (UNCONDITIONAL_JUMP)  ; LAB_00418e3d
    LEA EAX,[EBP + 0xffffff0a]          ; 00419085
        ;   Label: caseD_2
    PUSH EAX                            ; 0041908b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0041908c
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00419091
    PUSH 0x41700000                     ; 00419094
    PUSH 0x40e00000                     ; 00419099
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041909e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004190a3
    ADD ESP,0x8                         ; 004190a6
    LEA EAX,[EBP + 0xffffff0a]          ; 004190a9
    MOV EDX,dword ptr [0x00764794]      ; 004190af | DAT_00764794
    PUSH EAX                            ; 004190b5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004190b6
    MOV dword ptr [EBP + 0xffffff3e],EBX ; 004190bd
    SUB EAX,EDX                         ; 004190c3
    MOV dword ptr [EBP + 0xffffff42],EBX ; 004190c5
    SHL EAX,0x4                         ; 004190cb
    LEA EDX,[EBX + 0xfd0]               ; 004190ce
    ADD EAX,EDX                         ; 004190d4
    PUSH 0x3ecccccd                     ; 004190d6
    PUSH EAX                            ; 004190db
    PUSH 0x2dd1184                      ; 004190dc | DAT_02dd1184
    LEA EAX,[EBP + -0xa]                ; 004190e1
    FLD float ptr [EBP + 0x76]          ; 004190e4
    PUSH EAX                            ; 004190e7
    FSTP float ptr [EBP + 0xffffff0e]   ; 004190e8
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004190ee
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004190f3
    PUSH EAX                            ; 004190f6
    LEA EAX,[EBP + -0x5e]               ; 004190f7
    PUSH EAX                            ; 004190fa
    PUSH EBX                            ; 004190fb
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004190fc
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00419101
    PUSH EAX                            ; 00419104
    PUSH EBX                            ; 00419105
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00419106
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 0041910b
    JMP 0x00418e64                      ; 0041910e
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 00419113
        ;   Label: caseD_6
    TEST ESI,ESI                        ; 00419119
    JZ 0x00418e64                       ; 0041911b
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,ESI                         ; 00419121
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00419123
    LEA ESI,[EBP + 0xffffff46]          ; 00419129
    PUSH ESI                            ; 0041912f
    PUSH EAX                            ; 00419130
    CALL dword ptr [EDX + 0x14]         ; 00419131
    FLD float ptr [EBP + 0xffffff46]    ; 00419134
    FADD float ptr [EBP + 0xffffff52]   ; 0041913a
    FST float ptr [EBP + 0xffffff7e]    ; 00419140
    FLD float ptr [0x00579356]          ; 00419146 | DAT_00579356
    FXCH                                ; 0041914c
    FMUL ST1                            ; 0041914e
    FLD float ptr [EBP + 0xffffff4e]    ; 00419150
    FLD float ptr [EBP + 0xffffff4a]    ; 00419156
    FADD float ptr [EBP + 0xffffff56]   ; 0041915c
    FXCH                                ; 00419162
    FADD float ptr [EBP + 0xffffff5a]   ; 00419164
    FXCH                                ; 0041916a
    FST float ptr [EBP + -0x7e]         ; 0041916c
    FMUL ST3                            ; 0041916f
    FXCH                                ; 00419171
    FST float ptr [EBP + -0x7a]         ; 00419173
    FMULP ST3                           ; 00419176
    LEA EDX,[EBP + -0x3a]               ; 00419178
    LEA EAX,[EBP + -0x6a]               ; 0041917b
    ADD ESP,0x8                         ; 0041917e
    FXCH                                ; 00419181
    FSTP float ptr [EBP + -0x3a]        ; 00419183
    FSTP float ptr [EBP + -0x36]        ; 00419186
    FSTP float ptr [EBP + -0x32]        ; 00419189
    CMP EAX,EDX                         ; 0041918c
    JNZ 0x00419280                      ; 0041918e
        ;   XREF to: 00419280 (CONDITIONAL_JUMP)  ; LAB_00419280
    LEA EAX,[EBP + -0x76]               ; 00419194
        ;   Label: LAB_00419194
    LEA EDX,[EBP + -0x6a]               ; 00419197
    CMP EAX,EDX                         ; 0041919a
    JZ 0x004191b0                       ; 0041919c
        ;   XREF to: 004191b0 (CONDITIONAL_JUMP)  ; LAB_004191b0
    MOV EAX,dword ptr [EBP + -0x6a]     ; 0041919e
    MOV dword ptr [EBP + -0x76],EAX     ; 004191a1
    MOV EAX,dword ptr [EBP + -0x66]     ; 004191a4
    MOV dword ptr [EBP + -0x72],EAX     ; 004191a7
    MOV EAX,dword ptr [EBP + -0x62]     ; 004191aa
    MOV dword ptr [EBP + -0x6e],EAX     ; 004191ad
    MOV EAX,dword ptr [EBP + 0xffffff4e] ; 004191b0
        ;   Label: LAB_004191b0
    MOV dword ptr [EBP + -0x6e],EAX     ; 004191b6
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 004191b9
    MOV dword ptr [EBP + -0x62],EAX     ; 004191bf
    LEA EAX,[EBP + -0x76]               ; 004191c2
    PUSH EAX                            ; 004191c5
    LEA EAX,[EBP + -0x16]               ; 004191c6
    PUSH EAX                            ; 004191c9
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 004191ca
    PUSH EDI                            ; 004191d0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004191d1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 004191d6
    LEA EAX,[EBP + -0x76]               ; 004191d8
    ADD ESP,0xc                         ; 004191db
    CMP EAX,EDX                         ; 004191de
    JZ 0x004191f3                       ; 004191e0
        ;   XREF to: 004191f3 (CONDITIONAL_JUMP)  ; LAB_004191f3
    MOV EAX,dword ptr [EDX]             ; 004191e2
    MOV dword ptr [EBP + -0x76],EAX     ; 004191e4
    MOV EAX,dword ptr [EDX + 0x4]       ; 004191e7
    MOV dword ptr [EBP + -0x72],EAX     ; 004191ea
    MOV EAX,dword ptr [EDX + 0x8]       ; 004191ed
    MOV dword ptr [EBP + -0x6e],EAX     ; 004191f0
    LEA EAX,[EBP + -0x6a]               ; 004191f3
        ;   Label: LAB_004191f3
    PUSH EAX                            ; 004191f6
    LEA EAX,[EBP + 0x32]                ; 004191f7
    PUSH EAX                            ; 004191fa
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 004191fb
    PUSH EAX                            ; 00419201
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00419202
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EDX,EAX                         ; 00419207
    LEA EAX,[EBP + -0x6a]               ; 00419209
    ADD ESP,0xc                         ; 0041920c
    CMP EAX,EDX                         ; 0041920f
    JZ 0x00419224                       ; 00419211
        ;   XREF to: 00419224 (CONDITIONAL_JUMP)  ; LAB_00419224
    MOV EAX,dword ptr [EDX]             ; 00419213
    MOV dword ptr [EBP + -0x6a],EAX     ; 00419215
    MOV EAX,dword ptr [EDX + 0x4]       ; 00419218
    MOV dword ptr [EBP + -0x66],EAX     ; 0041921b
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041921e
    MOV dword ptr [EBP + -0x62],EAX     ; 00419221
    LEA EAX,[EBP + 0xfffffece]          ; 00419224
        ;   Label: LAB_00419224
    PUSH EAX                            ; 0041922a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0041922b
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00419230
    PUSH 0x41c80000                     ; 00419233
    PUSH 0x41700000                     ; 00419238
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041923d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00419242
    MOV EAX,dword ptr [EBP + 0x76]      ; 00419245
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 00419248
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0041924e
    ADD ESP,0x8                         ; 00419254
    MOV dword ptr [EBP + 0xffffff02],EAX ; 00419257
    LEA EAX,[EBP + 0xfffffece]          ; 0041925d
    PUSH EAX                            ; 00419263
    LEA EAX,[EBP + -0x6a]               ; 00419264
    PUSH EAX                            ; 00419267
    LEA EAX,[EBP + -0x76]               ; 00419268
    PUSH EAX                            ; 0041926b
    PUSH EBX                            ; 0041926c
    MOV dword ptr [EBP + 0xffffff06],EBX ; 0041926d
    CALL core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990 ; 00419273
        ;   XREF to: 00479990 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990()
    ADD ESP,0x10                        ; 00419278
    JMP 0x00418e64                      ; 0041927b
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [EBP + -0x3a]     ; 00419280
        ;   Label: LAB_00419280
    MOV dword ptr [EBP + -0x6a],EAX     ; 00419283
    MOV EAX,dword ptr [EBP + -0x36]     ; 00419286
    MOV dword ptr [EBP + -0x66],EAX     ; 00419289
    MOV EAX,dword ptr [EBP + -0x32]     ; 0041928c
    MOV dword ptr [EBP + -0x62],EAX     ; 0041928f
    JMP 0x00419194                      ; 00419292
        ;   XREF to: 00419194 (UNCONDITIONAL_JUMP)  ; LAB_00419194
    CMP dword ptr [EBX + 0xbc90],0x0    ; 00419297
        ;   Label: caseD_5
    JNZ 0x00418e64                      ; 0041929e
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 004192a4
    JNZ 0x00418e64                      ; 004192ab
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0xbc90],0x1    ; 004192b1
    JMP 0x00418e64                      ; 004192bb
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004192c0
        ;   Label: caseD_0
    PUSH EBX                            ; 004192c6
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004192c7
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004192cc
    TEST EAX,EAX                        ; 004192cf
    JZ 0x004192e5                       ; 004192d1
        ;   XREF to: 004192e5 (CONDITIONAL_JUMP)  ; LAB_004192e5
    PUSH 0x1                            ; 004192d3
    PUSH 0x1                            ; 004192d5
    PUSH ESI                            ; 004192d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004192d8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004192dd
    JMP 0x00418e64                      ; 004192e0
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004192e5
        ;   Label: LAB_004192e5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004192eb
    PUSH EBX                            ; 004192f1
    CALL dword ptr [EAX + 0x13c]        ; 004192f2
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 004192f8
    ADD ESP,0x8                         ; 004192fe
    TEST ECX,ECX                        ; 00419301
    JZ 0x00418e64                       ; 00419303
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00419309
    PUSH 0x1                            ; 0041930b
    PUSH ESI                            ; 0041930d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041930e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00419313
    JMP 0x00418e64                      ; 00419316
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041931b
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00419321
    PUSH EBX                            ; 00419327
    CALL dword ptr [EAX + 0x13c]        ; 00419328
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 0041932e
    ADD ESP,0x8                         ; 00419334
    TEST EDI,EDI                        ; 00419337
    JNZ 0x00419363                      ; 00419339
        ;   XREF to: 00419363 (CONDITIONAL_JUMP)  ; LAB_00419363
    PUSH dword ptr [EBP + 0x92]         ; 0041933b
    PUSH EBX                            ; 00419341
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00419342
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 00419347
    TEST EAX,EAX                        ; 0041934a
    JNZ 0x00418e64                      ; 0041934c
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00419352
    PUSH EDI                            ; 00419354
    PUSH ESI                            ; 00419355
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00419356
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0041935b
    JMP 0x00418e64                      ; 0041935e
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00419363
        ;   Label: LAB_00419363
    PUSH EBX                            ; 00419369
    CALL FUN_004196b0                   ; 0041936a
        ;   XREF to: 004196b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004196b0()
    ADD ESP,0x8                         ; 0041936f
    TEST EAX,EAX                        ; 00419372
    JNZ 0x00418e64                      ; 00419374
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x0059a898]                ; 0041937a | DAT_0059a898
    MOV dword ptr [EBP + 0x5a],EAX      ; 0041937f
    CMP dword ptr [EBX + 0x24f0],0x0    ; 00419382
    JZ 0x00419393                       ; 00419389
        ;   XREF to: 00419393 (CONDITIONAL_JUMP)  ; LAB_00419393
    MOV EAX,[0x0059a89c]                ; 0041938b | DAT_0059a89c
    MOV dword ptr [EBP + 0x5a],EAX      ; 00419390
    PUSH 0x3e32b8c2                     ; 00419393
        ;   Label: LAB_00419393
    PUSH 0x3f000000                     ; 00419398
    XOR EDX,EDX                         ; 0041939d
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0041939f
    MOV dword ptr [EBP + -0x46],EDX     ; 004193a2
    MOV dword ptr [EBP + -0x3e],EAX     ; 004193a5
    LEA EAX,[EBP + -0x46]               ; 004193a8
    MOV dword ptr [EBP + -0x42],EDX     ; 004193ab
    PUSH EAX                            ; 004193ae
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004193af
    PUSH EAX                            ; 004193b5
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004193b6
    CALL dword ptr [EDX + 0xbc]         ; 004193bc
    ADD ESP,0x4                         ; 004193c2
    PUSH EAX                            ; 004193c5
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004193c6
    ADD EAX,0x20                        ; 004193cc
    PUSH EAX                            ; 004193cf
    PUSH EBX                            ; 004193d0
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004193d1
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 004193d6
    LEA ESI,[EBX + 0x150]               ; 004193d9
    TEST EAX,EAX                        ; 004193df
    JL 0x00419470                       ; 004193e1
        ;   XREF to: 00419470 (CONDITIONAL_JUMP)  ; LAB_00419470
    LEA EDX,[EBX + 0x20]                ; 004193e7
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004193ea
    FLD float ptr [EDX]                 ; 004193f0
    FSUB float ptr [EAX + 0x20]         ; 004193f2
    FMUL ST0                            ; 004193f5
    FLD float ptr [EDX + 0x8]           ; 004193f7
    FSUB float ptr [EAX + 0x28]         ; 004193fa
    FMUL ST0                            ; 004193fd
    FADDP                               ; 004193ff
    FSQRT                               ; 00419401
    FLD float ptr [EBP + 0x5a]          ; 00419403
    FADD double ptr [0x00579336]        ; 00419406 | DAT_00579336
    FCOMPP                              ; 0041940c
    FNSTSW AX                           ; 0041940e
    SAHF                                ; 00419410
    JC 0x00418e64                       ; 00419411
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbca0]        ; 00419417
    FLDZ                                ; 0041941d
    FCOMPP                              ; 0041941f
    FNSTSW AX                           ; 00419421
    SAHF                                ; 00419423
    JC 0x00418e64                       ; 00419424
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0x24f0],0x0    ; 0041942a
    JNZ 0x00419497                      ; 00419431
        ;   XREF to: 00419497 (CONDITIONAL_JUMP)  ; LAB_00419497
    PUSH 0x1                            ; 00419433
    PUSH 0x2                            ; 00419435
    PUSH ESI                            ; 00419437
        ;   Label: LAB_00419437
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00419438
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0041943d
    MOV EAX,dword ptr [EBX + 0xbd34]    ; 00419440
    PUSH EAX                            ; 00419446
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00419447
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0041944c
    PUSH 0x57930b                       ; 0041944f | = "boneguy-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00419454
    PUSH EBX                            ; 0041945a
    CALL dword ptr [EAX + 0x24]         ; 0041945b
    ADD ESP,0x8                         ; 0041945e
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 00419461
    JMP 0x00418e64                      ; 0041946b
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 00419470
        ;   Label: LAB_00419470
    PUSH 0x5792ea                       ; 00419471 | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00419476 | PTR_DAT_005ad350
    PUSH EDX                            ; 0041947c | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0041947d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 00419482
    PUSH 0x1                            ; 00419485
    PUSH 0x0                            ; 00419487
    PUSH ESI                            ; 00419489
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041948a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0041948f
    JMP 0x00418e64                      ; 00419492
        ;   XREF to: 00418e64 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00419497
        ;   Label: LAB_00419497
    PUSH 0x6                            ; 00419499
    JMP 0x00419437                      ; 0041949b
        ;   XREF to: 00419437 (UNCONDITIONAL_JUMP)  ; LAB_00419437
    CMP EDI,0x6                         ; 0041949d
        ;   Label: LAB_0041949d
    JA 0x00418e64                       ; 004194a0
        ;   XREF to: 00418e64 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x4189e0]  ; 004194a6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

