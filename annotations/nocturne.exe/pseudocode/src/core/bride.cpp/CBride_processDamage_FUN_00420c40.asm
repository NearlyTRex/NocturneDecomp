; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_CBride_processDamage_FUN_00420c40(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_ub_die_wav_00579bd5
;   TerminatedCString s_ub_hurt_wav_00579be1
;   double DOUBLE_00579bf5 = 2
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_bride.cpp_CBride_processDismemberment_FUN_00420a10
;   core_charactr.cpp_FUN_00427730
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420c40
        ;   Label: core_bride.cpp_CBride_processDamage_FUN_00420c40
    PUSH ESI                            ; 00420c41
    PUSH EDI                            ; 00420c42
    PUSH EBP                            ; 00420c43
    MOV EBP,ESP                         ; 00420c44
    SUB ESP,0x2c                        ; 00420c46
    MOV ESI,dword ptr [EBP + 0x14]      ; 00420c49
    MOV EDI,dword ptr [EBP + 0x18]      ; 00420c4c
    MOV EDX,dword ptr [ESI + 0xbd50]    ; 00420c4f
    PUSH EDX                            ; 00420c55
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00420c56
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    MOV ECX,dword ptr [EDI + 0x28]      ; 00420c5b
    ADD ESP,0x4                         ; 00420c5e
    CMP ECX,0x7                         ; 00420c61
    JZ 0x00420d76                       ; 00420c64
        ;   XREF to: 00420d76 (CONDITIONAL_JUMP)  ; LAB_00420d76
    LEA EAX,[EAX]                       ; 00420c6a
    CMP dword ptr [EDI + 0x30],0x6c     ; 00420c70
        ;   Label: LAB_00420c70
    JNZ 0x00420cb1                      ; 00420c74
        ;   XREF to: 00420cb1 (CONDITIONAL_JUMP)  ; LAB_00420cb1
    PUSH 0x0                            ; 00420c76
    LEA EAX,[EBP + -0x14]               ; 00420c78
    PUSH EAX                            ; 00420c7b
    LEA EAX,[ESI + 0x150]               ; 00420c7c
    PUSH EAX                            ; 00420c82
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00420c83
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 00420c88
    PUSH EAX                            ; 00420c8b
    LEA EAX,[EBP + -0x20]               ; 00420c8c
    PUSH EAX                            ; 00420c8f
    PUSH ESI                            ; 00420c90
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00420c91
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00420c96
    PUSH 0x0                            ; 00420c99
    PUSH 0x41200000                     ; 00420c9b
    PUSH 0x0                            ; 00420ca0
    PUSH 0x0                            ; 00420ca2
    LEA EAX,[EBP + -0x20]               ; 00420ca4
    PUSH EAX                            ; 00420ca7
    PUSH ESI                            ; 00420ca8
    CALL core_charactr.cpp_FUN_00427730 ; 00420ca9
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427730()
    ADD ESP,0x18                        ; 00420cae
    PUSH EDI                            ; 00420cb1
        ;   Label: LAB_00420cb1
    PUSH ESI                            ; 00420cb2
    CALL core_bride.cpp_CBride_processDismemberment_FUN_00420a10 ; 00420cb3
        ;   XREF to: 00420a10 (UNCONDITIONAL_CALL)  ; undefined core_bride.cpp_CBride_processDismemberment_FUN_00420a10()
    FLD float ptr [EDI + 0x4]           ; 00420cb8
    FSUBR float ptr [ESI + 0x2434]      ; 00420cbb
    MOV EAX,dword ptr [ESI + 0xbd44]    ; 00420cc1
    FSTP float ptr [ESI + 0x2434]       ; 00420cc7
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0x2290] ; 00420ccd
    ADD ESP,0x8                         ; 00420cd4
    TEST ECX,ECX                        ; 00420cd7
    JZ 0x00420dc9                       ; 00420cd9
        ;   XREF to: 00420dc9 (CONDITIONAL_JUMP)  ; LAB_00420dc9
    FLD float ptr [ESI + 0x2434]        ; 00420cdf
        ;   Label: LAB_00420cdf
    FLDZ                                ; 00420ce5
    LEA EBX,[ESI + 0x150]               ; 00420ce7
    FCOMPP                              ; 00420ced
    FNSTSW AX                           ; 00420cef
    SAHF                                ; 00420cf1
    JC 0x00420dd4                       ; 00420cf2
        ;   XREF to: 00420dd4 (CONDITIONAL_JUMP)  ; LAB_00420dd4
    PUSH EBX                            ; 00420cf8
    MOV dword ptr [ESI + 0x2434],0x0    ; 00420cf9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00420d03
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00420d08
    ADD ESP,0x4                         ; 00420d0b
    CMP EAX,0xe                         ; 00420d0e
    JZ 0x00420d65                       ; 00420d11
        ;   XREF to: 00420d65 (CONDITIONAL_JUMP)  ; LAB_00420d65
    CMP EAX,0xd                         ; 00420d13
    JZ 0x00420d65                       ; 00420d16
        ;   XREF to: 00420d65 (CONDITIONAL_JUMP)  ; LAB_00420d65
    PUSH 0x1                            ; 00420d18
    PUSH 0x3f000000                     ; 00420d1a
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00420d1f
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00420d24
    TEST EAX,EAX                        ; 00420d27
    SETZ AL                             ; 00420d29
    AND EAX,0xff                        ; 00420d2c
    ADD EAX,0xb                         ; 00420d31
    PUSH EAX                            ; 00420d34
    PUSH EBX                            ; 00420d35
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420d36
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00420d3b
    MOV EAX,dword ptr [ESI + 0xbd4c]    ; 00420d3e
    PUSH EAX                            ; 00420d44
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00420d45
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00420d4a
    PUSH 0x579bd5                       ; 00420d4d | = "ub-die?.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00420d52
        ;   Label: LAB_00420d52
    PUSH ESI                            ; 00420d58
    CALL dword ptr [EAX + 0x24]         ; 00420d59
    ADD ESP,0x8                         ; 00420d5c
    MOV dword ptr [ESI + 0xbd4c],EAX    ; 00420d5f
    PUSH EDI                            ; 00420d65
        ;   Label: LAB_00420d65
    PUSH ESI                            ; 00420d66
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00420d67
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 00420d6c
    MOV ESP,EBP                         ; 00420d6f
    POP EBP                             ; 00420d71
    POP EDI                             ; 00420d72
    POP ESI                             ; 00420d73
    POP EBX                             ; 00420d74
    RET                                 ; 00420d75
    FLD float ptr [EDI + 0x4]           ; 00420d76
        ;   Label: LAB_00420d76
    LEA EAX,[EDI + 0x1c]                ; 00420d79
    FLD ST0                             ; 00420d7c
    FMUL double ptr [0x00579bf5]        ; 00420d7e | DOUBLE_00579bf5
    PUSH EAX                            ; 00420d84
    LEA EAX,[EBP + -0x2c]               ; 00420d85
    XOR EBX,EBX                         ; 00420d88
    PUSH EAX                            ; 00420d8a
    FSTP ST1                            ; 00420d8b
    PUSH ESI                            ; 00420d8d
    FSTP float ptr [EDI + 0x4]          ; 00420d8e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00420d91
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00420d96
    PUSH 0xffff                         ; 00420d99
        ;   Label: LAB_00420d99
    PUSH 0x0                            ; 00420d9e
    PUSH 0x4000                         ; 00420da0
    PUSH 0x4000                         ; 00420da5
    PUSH 0x0                            ; 00420daa
    LEA EAX,[EBP + -0x2c]               ; 00420dac
    PUSH EAX                            ; 00420daf
    MOV EAX,[0x005b80f0]                ; 00420db0 | DAT_005b80f0
    PUSH EAX                            ; 00420db5
    INC EBX                             ; 00420db6
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00420db7
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 00420dbc
    CMP EBX,0x5                         ; 00420dbf
    JL 0x00420d99                       ; 00420dc2
        ;   XREF to: 00420d99 (CONDITIONAL_JUMP)  ; LAB_00420d99
    JMP 0x00420c70                      ; 00420dc4
        ;   XREF to: 00420c70 (UNCONDITIONAL_JUMP)  ; LAB_00420c70
    MOV dword ptr [ESI + 0x2434],ECX    ; 00420dc9
        ;   Label: LAB_00420dc9
    JMP 0x00420cdf                      ; 00420dcf
        ;   XREF to: 00420cdf (UNCONDITIONAL_JUMP)  ; LAB_00420cdf
    PUSH 0x1                            ; 00420dd4
        ;   Label: LAB_00420dd4
    PUSH 0x3f000000                     ; 00420dd6
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00420ddb
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00420de0
    TEST EAX,EAX                        ; 00420de3
    SETZ AL                             ; 00420de5
    AND EAX,0xff                        ; 00420de8
    ADD EAX,0x7                         ; 00420ded
    PUSH EAX                            ; 00420df0
    PUSH EBX                            ; 00420df1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420df2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00420df7
    MOV EBX,dword ptr [ESI + 0xbd4c]    ; 00420dfa
    PUSH EBX                            ; 00420e00
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00420e01
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00420e06
    TEST EAX,EAX                        ; 00420e09
    JNZ 0x00420d65                      ; 00420e0b
        ;   XREF to: 00420d65 (CONDITIONAL_JUMP)  ; LAB_00420d65
    PUSH 0x579be1                       ; 00420e11 | = "ub-hurt?.wav"
    JMP 0x00420d52                      ; 00420e16
        ;   XREF to: 00420d52 (UNCONDITIONAL_JUMP)  ; LAB_00420d52

