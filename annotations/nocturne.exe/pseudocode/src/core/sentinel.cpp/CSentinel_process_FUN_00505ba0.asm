; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sentinel_cpp_CSentinel_process_FUN_00505ba0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x128]:1  local_128
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00505b40 = 00505db1
;   undefined1* switchdataD_00505b54 = 00505ffe
;   string s_wing?.wav_00590021
;   string s_sentinel-fall.wav_0059002b
;   string s_%s_confused_while_walking_to_scr_0059003d
;   undefined4 DAT_0059006d
;   undefined4 DAT_00590075
;   undefined4 DAT_0059007d
;   undefined4 DAT_00590085
;   undefined4 DAT_0059008d
;   undefined4 DAT_005a1738
;   undefined4 DAT_005a1744
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b96c4
;   undefined4 DAT_0077ad0c
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505ba0
        ;   Label: core_sentinel.cpp_CSentinel_process_FUN_00505ba0
    PUSH ESI                            ; 00505ba1
    PUSH EDI                            ; 00505ba2
    PUSH EBP                            ; 00505ba3
    MOV EBP,ESP                         ; 00505ba4
    SUB ESP,0x190                       ; 00505ba6
    SUB EBP,0x7a                        ; 00505bac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00505baf
    PUSH dword ptr [EBP + 0x92]         ; 00505bb5
    PUSH EBX                            ; 00505bbb
    CALL core_charactr.cpp_FUN_004259f0 ; 00505bbc
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 00505bc1
    TEST EAX,EAX                        ; 00505bc4
    JZ 0x00505da9                       ; 00505bc6
        ;   XREF to: 00505da9 (CONDITIONAL_JUMP)  ; LAB_00505da9
    LEA EAX,[EBX + 0x23a4]              ; 00505bcc
    MOV dword ptr [EAX + 0x8],0x0       ; 00505bd2
    FLD float ptr [EBP + 0x92]          ; 00505bd9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00505bdf
    MOV dword ptr [EAX + 0x4],EDX       ; 00505be2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00505be5
    MOV dword ptr [EAX],EDX             ; 00505be8
    FMUL float ptr [EBX + 0xbc8c]       ; 00505bea
    LEA EDI,[EBX + 0x150]               ; 00505bf0
    FSTP float ptr [EBP + 0x5e]         ; 00505bf6
    FLD float ptr [EBP + 0x5e]          ; 00505bf9
        ;   Label: LAB_00505bf9
    FLDZ                                ; 00505bfc
    FCOMPP                              ; 00505bfe
    FNSTSW AX                           ; 00505c00
    SAHF                                ; 00505c02
    JC 0x00505f80                       ; 00505c03
        ;   XREF to: 00505f80 (CONDITIONAL_JUMP)  ; LAB_00505f80
    FLD float ptr [EBX + 0xbc8c]        ; 00505c09
    FLD float ptr [EBP + 0x92]          ; 00505c0f
    FMUL double ptr [0x0059006d]        ; 00505c15 | DAT_0059006d
    FMULP                               ; 00505c1b
    FLD float ptr [EBX + 0x23ac]        ; 00505c1d
    PUSH EDI                            ; 00505c23
    FSTP float ptr [EBX + 0x242c]       ; 00505c24
    FSTP float ptr [EBX + 0x2430]       ; 00505c2a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00505c30
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 00505c35
    PUSH dword ptr [EBP + 0x92]         ; 00505c38
    MOV ESI,dword ptr [EAX + 0x24]      ; 00505c3e
    PUSH EBX                            ; 00505c41
    MOV dword ptr [EBP + 0x6e],ESI      ; 00505c42
    CALL core_charactr.cpp_FUN_00428c00 ; 00505c45
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 00505c4a
    TEST EAX,EAX                        ; 00505c4d
    JZ 0x00505fd6                       ; 00505c4f
        ;   XREF to: 00505fd6 (CONDITIONAL_JUMP)  ; LAB_00505fd6
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00505c55
    CMP EAX,0x2                         ; 00505c5b
    JNC 0x00505fc2                      ; 00505c5e
        ;   XREF to: 00505fc2 (CONDITIONAL_JUMP)  ; LAB_00505fc2
    CMP EAX,0x1                         ; 00505c64
    JNZ 0x00505fcd                      ; 00505c67
        ;   XREF to: 00505fcd (CONDITIONAL_JUMP)  ; LAB_00505fcd
    PUSH 0x1                            ; 00505c6d
        ;   Label: LAB_00505c6d
    PUSH 0x2                            ; 00505c6f
    LEA EAX,[EBX + 0x150]               ; 00505c71
        ;   Label: LAB_00505c71
    PUSH EAX                            ; 00505c77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00505c78
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00505c7d
        ;   Label: LAB_00505c7d
    LEA EAX,[EBX + 0x23a4]              ; 00505c80
    MOV dword ptr [EAX + 0x8],0x0       ; 00505c86
    MOV EDX,dword ptr [EAX + 0x8]       ; 00505c8d
    MOV dword ptr [EAX + 0x4],EDX       ; 00505c90
    MOV EDX,dword ptr [EAX + 0x4]       ; 00505c93
    MOV dword ptr [EAX],EDX             ; 00505c96
    FLD float ptr [EBX + 0xbca0]        ; 00505c98
        ;   Label: caseD_5
    FLDZ                                ; 00505c9e
    FCOMPP                              ; 00505ca0
    FNSTSW AX                           ; 00505ca2
    SAHF                                ; 00505ca4
    JNC 0x00505cb9                      ; 00505ca5
        ;   XREF to: 00505cb9 (CONDITIONAL_JUMP)  ; LAB_00505cb9
    FLD float ptr [EBX + 0xbca0]        ; 00505ca7
    FSUB float ptr [EBP + 0x92]         ; 00505cad
    FSTP float ptr [EBX + 0xbca0]       ; 00505cb3
    PUSH EBX                            ; 00505cb9
        ;   Label: LAB_00505cb9
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 00505cba
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 00505cbf
    TEST EAX,EAX                        ; 00505cc2
    JZ 0x00505d82                       ; 00505cc4
        ;   XREF to: 00505d82 (CONDITIONAL_JUMP)  ; LAB_00505d82
    FLD float ptr [EBP + 0x92]          ; 00505cca
    FLD ST0                             ; 00505cd0
    FMUL double ptr [0x0059007d]        ; 00505cd2 | DAT_0059007d
    FLD float ptr [EBX + 0x2424]        ; 00505cd8
    FXCH                                ; 00505cde
    FSUBR ST0,ST1                       ; 00505ce0
    LEA ESI,[EBX + 0x2420]              ; 00505ce2
    FSTP ST1                            ; 00505ce8
    FSTP float ptr [EBX + 0x2424]       ; 00505cea
    FLD float ptr [ESI]                 ; 00505cf0
    FMUL ST1                            ; 00505cf2
    FSTP float ptr [EBP + -0x7a]        ; 00505cf4
    FLD float ptr [ESI + 0x4]           ; 00505cf7
    FMUL ST1                            ; 00505cfa
    LEA EDX,[EBX + 0x2414]              ; 00505cfc
    FSTP float ptr [EBP + -0x76]        ; 00505d02
    FMUL float ptr [ESI + 0x8]          ; 00505d05
    LEA EAX,[EBX + 0x23a4]              ; 00505d08
    FLD float ptr [EBP + -0x7a]         ; 00505d0e
    FXCH                                ; 00505d11
    FSTP float ptr [EBP + -0x72]        ; 00505d13
    FADD float ptr [EDX]                ; 00505d16
    FLD float ptr [EBP + -0x76]         ; 00505d18
    FXCH                                ; 00505d1b
    FSTP float ptr [EBP + -0x62]        ; 00505d1d
    FADD float ptr [EDX + 0x4]          ; 00505d20
    FLD float ptr [EBP + -0x72]         ; 00505d23
    FXCH                                ; 00505d26
    FSTP float ptr [EBP + -0x5e]        ; 00505d28
    FADD float ptr [EDX + 0x8]          ; 00505d2b
    FLD float ptr [EBP + -0x62]         ; 00505d2e
    FXCH                                ; 00505d31
    FSTP float ptr [EBP + -0x5a]        ; 00505d33
    FADD float ptr [EAX]                ; 00505d36
    FLD float ptr [EBP + -0x5e]         ; 00505d38
    FXCH                                ; 00505d3b
    FSTP float ptr [EBP + 0x22]         ; 00505d3d
    FADD float ptr [EAX + 0x4]          ; 00505d40
    FLD float ptr [EBP + -0x5a]         ; 00505d43
    FXCH                                ; 00505d46
    FSTP float ptr [EBP + 0x26]         ; 00505d48
    FADD float ptr [EAX + 0x8]          ; 00505d4b
    FSTP float ptr [EBP + 0x2a]         ; 00505d4e
    MOV dword ptr [EDX + 0x8],0x0       ; 00505d51
    MOV ECX,dword ptr [EDX + 0x8]       ; 00505d58
    MOV dword ptr [EDX + 0x4],ECX       ; 00505d5b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00505d5e
    MOV dword ptr [EDX],ECX             ; 00505d61
    MOV dword ptr [EAX + 0x8],0x0       ; 00505d63
    MOV EDX,dword ptr [EAX + 0x8]       ; 00505d6a
    MOV dword ptr [EAX + 0x4],EDX       ; 00505d6d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00505d70
    MOV dword ptr [EAX],EDX             ; 00505d73
    LEA EAX,[EBP + 0x22]                ; 00505d75
    PUSH EAX                            ; 00505d78
    PUSH EBX                            ; 00505d79
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00505d7a
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 00505d7f
    PUSH EBX                            ; 00505d82
        ;   Label: LAB_00505d82
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00505d83
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 00505d88
    LEA EAX,[EBX + 0x150]               ; 00505d8b
    PUSH EAX                            ; 00505d91
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00505d92
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 00505d97
    PUSH dword ptr [EBP + 0x92]         ; 00505d9a
    PUSH EBX                            ; 00505da0
    CALL core_charactr.cpp_FUN_0042a150 ; 00505da1
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 00505da6
    LEA ESP,[EBP + 0x7a]                ; 00505da9
        ;   Label: LAB_00505da9
    POP EBP                             ; 00505dac
    POP EDI                             ; 00505dad
    POP ESI                             ; 00505dae
    POP EBX                             ; 00505daf
    RET                                 ; 00505db0
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00505db1
        ;   Label: caseD_64
    MOV ESI,0x1                         ; 00505db7
    TEST EAX,EAX                        ; 00505dbc
    JNZ 0x00505dd2                      ; 00505dbe
        ;   XREF to: 00505dd2 (CONDITIONAL_JUMP)  ; LAB_00505dd2
    PUSH 0x1                            ; 00505dc0
        ;   Label: LAB_00505dc0
    PUSH 0x0                            ; 00505dc2
    PUSH EDI                            ; 00505dc4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00505dc5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00505dca
    JMP 0x00505bf9                      ; 00505dcd
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH EAX                            ; 00505dd2
        ;   Label: LAB_00505dd2
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00505dd3
    CALL dword ptr [EDX + 0x104]        ; 00505dd9
    ADD ESP,0x4                         ; 00505ddf
    TEST EAX,EAX                        ; 00505de2
    JNZ 0x00505dc0                      ; 00505de4
        ;   XREF to: 00505dc0 (CONDITIONAL_JUMP)  ; LAB_00505dc0
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00505de6
    PUSH EAX                            ; 00505dec
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00505ded
    CALL dword ptr [EDX + 0xec]         ; 00505df3
    ADD ESP,0x4                         ; 00505df9
    TEST EAX,EAX                        ; 00505dfc
    JNZ 0x00505dc0                      ; 00505dfe
        ;   XREF to: 00505dc0 (CONDITIONAL_JUMP)  ; LAB_00505dc0
    PUSH 0x0                            ; 00505e00
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00505e02
    PUSH EBX                            ; 00505e08
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00505e09
    PUSH EAX                            ; 00505e0f
    CALL dword ptr [EDX + 0xe0]         ; 00505e10
    ADD ESP,0xc                         ; 00505e16
    TEST EAX,EAX                        ; 00505e19
    JZ 0x00505dc0                       ; 00505e1b
        ;   XREF to: 00505dc0 (CONDITIONAL_JUMP)  ; LAB_00505dc0
    MOV EAX,[0x005a1738]                ; 00505e1d | DAT_005a1738
    MOV dword ptr [EBP + -0x7e],EAX     ; 00505e22
    LEA EAX,[EBP + 0xffffff7a]          ; 00505e25
    PUSH EAX                            ; 00505e2b
    LEA EAX,[EBP + -0x3e]               ; 00505e2c
    PUSH EAX                            ; 00505e2f
    XOR EDX,EDX                         ; 00505e30
    PUSH EBX                            ; 00505e32
    MOV dword ptr [EBP + 0xffffff7a],EDX ; 00505e33
    MOV dword ptr [EBP + 0xffffff7e],EDX ; 00505e39
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00505e3f
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00505e44
    FLD float ptr [EBP + -0x3e]         ; 00505e4a
    FSUB float ptr [EAX + 0x20]         ; 00505e4d
    FMUL ST0                            ; 00505e50
    FLD float ptr [EBP + -0x36]         ; 00505e52
    FSUB float ptr [EAX + 0x28]         ; 00505e55
    FMUL ST0                            ; 00505e58
    FADDP                               ; 00505e5a
    FSQRT                               ; 00505e5c
    ADD ESP,0xc                         ; 00505e5e
    FCOMP double ptr [0x00590085]       ; 00505e61 | DAT_00590085
    FNSTSW AX                           ; 00505e67
    SAHF                                ; 00505e69
    JBE 0x00505e6e                      ; 00505e6a
        ;   XREF to: 00505e6e (CONDITIONAL_JUMP)  ; LAB_00505e6e
    XOR ESI,ESI                         ; 00505e6c
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 00505e6e
        ;   Label: LAB_00505e6e
    FLD float ptr [EBP + -0x3a]         ; 00505e74
    FSUB float ptr [EDX + 0x24]         ; 00505e77
    FABS                                ; 00505e7a
    FCOMP double ptr [0x0059008d]       ; 00505e7c | DAT_0059008d
    FNSTSW AX                           ; 00505e82
    SAHF                                ; 00505e84
    JA 0x00505dc0                       ; 00505e85
        ;   XREF to: 00505dc0 (CONDITIONAL_JUMP)  ; LAB_00505dc0
    TEST ESI,ESI                        ; 00505e8b
    JNZ 0x00505ea9                      ; 00505e8d
        ;   XREF to: 00505ea9 (CONDITIONAL_JUMP)  ; LAB_00505ea9
    TEST ESI,ESI                        ; 00505e8f
        ;   Label: LAB_00505e8f
    JNZ 0x00505bf9                      ; 00505e91
        ;   XREF to: 00505bf9 (CONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH 0x1                            ; 00505e97
    PUSH 0x0                            ; 00505e99
    PUSH EDI                            ; 00505e9b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00505e9c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00505ea1
    JMP 0x00505bf9                      ; 00505ea4
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH 0x0                            ; 00505ea9
        ;   Label: LAB_00505ea9
    PUSH EBX                            ; 00505eab
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00505eac
    PUSH EDX                            ; 00505eb2
    CALL dword ptr [EAX + 0xe4]         ; 00505eb3
    ADD ESP,0xc                         ; 00505eb9
    TEST EAX,EAX                        ; 00505ebc
    JNZ 0x00505e8f                      ; 00505ebe
        ;   XREF to: 00505e8f (CONDITIONAL_JUMP)  ; LAB_00505e8f
    PUSH 0x1                            ; 00505ec0
    PUSH 0x0                            ; 00505ec2
    PUSH EDI                            ; 00505ec4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00505ec5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00505eca
    JMP 0x00505bf9                      ; 00505ecd
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH EBX                            ; 00505ed2
        ;   Label: caseD_65
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00505ed3
    CALL dword ptr [EAX + 0xf0]         ; 00505ed9
    ADD ESP,0x4                         ; 00505edf
    JMP 0x00505bf9                      ; 00505ee2
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    CMP dword ptr [EBX + 0xbca4],0x0    ; 00505ee7
        ;   Label: caseD_66
    JZ 0x00505bf9                       ; 00505eee
        ;   XREF to: 00505bf9 (CONDITIONAL_JUMP)  ; LAB_00505bf9
    LEA EAX,[EBP + 0xffffff26]          ; 00505ef4
    PUSH EAX                            ; 00505efa
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00505efb
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00505f00
    PUSH 0x40a00000                     ; 00505f03
    PUSH 0x3f800000                     ; 00505f08
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00505f0d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    LEA EDX,[EBP + 0xffffff26]          ; 00505f12
    MOV dword ptr [EBP + 0x76],EAX      ; 00505f18
    ADD ESP,0x8                         ; 00505f1b
    FLD float ptr [EBP + 0x76]          ; 00505f1e
    PUSH EDX                            ; 00505f21
    FSTP float ptr [EBP + 0xffffff2a]   ; 00505f22
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00505f28
    PUSH EAX                            ; 00505f2e
    MOV ESI,dword ptr [EAX + 0x14c]     ; 00505f2f
    CALL dword ptr [ESI + 0x100]        ; 00505f35
    ADD ESP,0x8                         ; 00505f3b
    JMP 0x00505bf9                      ; 00505f3e
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH 0x590021                       ; 00505f43 | = "wing?.wav"
        ;   Label: caseD_67
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00505f48
    PUSH EBX                            ; 00505f4e
    CALL dword ptr [EAX + 0x24]         ; 00505f4f
    ADD ESP,0x8                         ; 00505f52
    JMP 0x00505bf9                      ; 00505f55
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH 0x59002b                       ; 00505f5a | = "sentinel-fall.wav"
        ;   Label: caseD_68
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00505f5f
    PUSH EBX                            ; 00505f65
    CALL dword ptr [EAX + 0x24]         ; 00505f66
    ADD ESP,0x8                         ; 00505f69
    JMP 0x00505bf9                      ; 00505f6c
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    PUSH EDX                            ; 00505f71
        ;   Label: default
    PUSH EBX                            ; 00505f72
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00505f73
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 00505f78
    JMP 0x00505bf9                      ; 00505f7b
        ;   XREF to: 00505bf9 (UNCONDITIONAL_JUMP)  ; LAB_00505bf9
    LEA EAX,[EBP + 0x5e]                ; 00505f80
        ;   Label: LAB_00505f80
    PUSH EAX                            ; 00505f83
    PUSH EDI                            ; 00505f84
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00505f85
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    MOV EDX,EAX                         ; 00505f8a
    SUB EAX,0x64                        ; 00505f8c
    ADD ESP,0x8                         ; 00505f8f
    CMP EAX,0x4                         ; 00505f92
    JA 0x00505f71                       ; 00505f95
        ;   XREF to: 00505f71 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x505b40]  ; 00505f97 | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    PUSH 0x1                            ; 00505f9e
        ;   Label: LAB_00505f9e
    PUSH 0x0                            ; 00505fa0
    PUSH EDI                            ; 00505fa2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00505fa3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00505fa8
    PUSH EBX                            ; 00505fab
    PUSH 0x59003d                       ; 00505fac | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005ad350]      ; 00505fb1 | PTR_DAT_005ad350
    PUSH ECX                            ; 00505fb7 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00505fb8
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00505c7d                      ; 00505fbd
        ;   XREF to: 00505c7d (UNCONDITIONAL_JUMP)  ; LAB_00505c7d
    JBE 0x00505c6d                      ; 00505fc2
        ;   XREF to: 00505c6d (CONDITIONAL_JUMP)  ; LAB_00505c6d
        ;   Label: LAB_00505fc2
    CMP EAX,0x3                         ; 00505fc8
    JZ 0x00505f9e                       ; 00505fcb
        ;   XREF to: 00505f9e (CONDITIONAL_JUMP)  ; LAB_00505f9e
    PUSH 0x1                            ; 00505fcd
        ;   Label: LAB_00505fcd
    PUSH 0x0                            ; 00505fcf
    JMP 0x00505c71                      ; 00505fd1
        ;   XREF to: 00505c71 (UNCONDITIONAL_JUMP)  ; LAB_00505c71
    CMP ESI,0xa                         ; 00505fd6
        ;   Label: LAB_00505fd6
    JNZ 0x00506079                      ; 00505fd9
        ;   XREF to: 00506079 (CONDITIONAL_JUMP)  ; LAB_00506079
    MOV dword ptr [EBX + 0x2dd8],0x3f000000 ; 00505fdf
        ;   Label: LAB_00505fdf
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00505fe9
        ;   Label: LAB_00505fe9
    CMP EDX,0xf                         ; 00505fec
    JA 0x00505c98                       ; 00505fef
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,EDX                         ; 00505ff5
    JMP dword ptr [EAX*0x4 + 0x505b54]  ; 00505ff7 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [EBP + 0x92]         ; 00505ffe
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00506004
    PUSH EBX                            ; 0050600a
    CALL dword ptr [EAX + 0x13c]        ; 0050600b
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 00506011
    ADD ESP,0x8                         ; 00506017
    TEST EDX,EDX                        ; 0050601a
    JZ 0x0050624c                       ; 0050601c
        ;   XREF to: 0050624c (CONDITIONAL_JUMP)  ; LAB_0050624c
    LEA EAX,[EBX + 0x20]                ; 00506022
    FLD float ptr [EDX + 0x20]          ; 00506025
    FSUB float ptr [EAX]                ; 00506028
    FSTP float ptr [EBP + 0x2e]         ; 0050602a
    FLD float ptr [EDX + 0x24]          ; 0050602d
    FSUB float ptr [EAX + 0x4]          ; 00506030
    FST float ptr [EBP + 0x32]          ; 00506033
    FMUL float ptr [EBP + 0x32]         ; 00506036
    FLD float ptr [EBP + 0x2e]          ; 00506039
    FMUL ST0                            ; 0050603c
    FLD float ptr [EDX + 0x28]          ; 0050603e
    FSUB float ptr [EAX + 0x8]          ; 00506041
    FXCH                                ; 00506044
    FADDP ST2,ST0                       ; 00506046
    FST float ptr [EBP + 0x36]          ; 00506048
    FMUL float ptr [EBP + 0x36]         ; 0050604b
    FADDP                               ; 0050604e
    FSQRT                               ; 00506050
    FCOMP float ptr [0x005a1744]        ; 00506052 | DAT_005a1744
    FNSTSW AX                           ; 00506058
    SAHF                                ; 0050605a
    JBE 0x00506234                      ; 0050605b
        ;   XREF to: 00506234 (CONDITIONAL_JUMP)  ; LAB_00506234
    PUSH 0x1                            ; 00506061
    PUSH 0x3                            ; 00506063
    LEA EAX,[EBX + 0x150]               ; 00506065
    PUSH EAX                            ; 0050606b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0050606c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00506071
    JMP 0x00505c98                      ; 00506074
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP ESI,0xb                         ; 00506079
        ;   Label: LAB_00506079
    JZ 0x00505fdf                       ; 0050607c
        ;   XREF to: 00505fdf (CONDITIONAL_JUMP)  ; LAB_00505fdf
    MOV dword ptr [EBX + 0x2dd8],0x40000000 ; 00506082
    JMP 0x00505fe9                      ; 0050608c
        ;   XREF to: 00505fe9 (UNCONDITIONAL_JUMP)  ; LAB_00505fe9
    MOV ESI,dword ptr [EBX + 0xbc90]    ; 00506091
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 00506097
    JNZ 0x00505c98                      ; 00506099
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xdc],0x0      ; 0050609f
    JNZ 0x00505c98                      ; 005060a6
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH ESI                            ; 005060ac
    LEA EAX,[EBP + 0x46]                ; 005060ad
    PUSH EAX                            ; 005060b0
    LEA EAX,[EBX + 0x150]               ; 005060b1
    PUSH EAX                            ; 005060b7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 005060b8
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 005060bd
    PUSH EAX                            ; 005060c0
    LEA EAX,[EBP + 0xffffff62]          ; 005060c1
    PUSH EAX                            ; 005060c7
    PUSH EBX                            ; 005060c8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005060c9
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 005060ce
    PUSH ESI                            ; 005060d1
    LEA EAX,[EBP + 0xffffff62]          ; 005060d2
    PUSH EAX                            ; 005060d8
    MOV EAX,[0x005b96c4]                ; 005060d9 | DAT_005b96c4
    PUSH EAX                            ; 005060de
    CALL FUN_004b0480                   ; 005060df
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0xc                         ; 005060e4
    MOV dword ptr [EBX + 0xbc90],0x1    ; 005060e7
    JMP 0x00505c98                      ; 005060f1
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBP + 0xfffffeea]          ; 005060f6
        ;   Label: caseD_4
    PUSH EAX                            ; 005060fc
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 005060fd
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00506102
    PUSH 0x41700000                     ; 00506105
    PUSH 0x40e00000                     ; 0050610a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0050610f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV EDX,dword ptr [0x01e57220]      ; 00506114 | DAT_01e57220
    MOV dword ptr [EBP + 0x76],EAX      ; 0050611a
    ADD ESP,0x8                         ; 0050611d
    LEA EAX,[EBP + 0xfffffeea]          ; 00506120
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 00506126
    PUSH EAX                            ; 0050612c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050612d
    MOV dword ptr [EBP + 0xffffff22],EBX ; 00506134
    SUB EAX,EDX                         ; 0050613a
    LEA ESI,[EBX + 0xfd0]               ; 0050613c
    SHL EAX,0x4                         ; 00506142
    ADD EAX,ESI                         ; 00506145
    PUSH 0x3f800000                     ; 00506147
    PUSH EAX                            ; 0050614c
    PUSH 0x2dd1184                      ; 0050614d | DAT_02dd1184
    LEA EAX,[EBP + -0x26]               ; 00506152
    FLD float ptr [EBP + 0x76]          ; 00506155
    PUSH EAX                            ; 00506158
    FSTP float ptr [EBP + 0xfffffeee]   ; 00506159
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0050615f
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00506164
    PUSH EAX                            ; 00506167
    LEA EAX,[EBP + -0x1a]               ; 00506168
    PUSH EAX                            ; 0050616b
    PUSH EBX                            ; 0050616c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0050616d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00506172
    PUSH EAX                            ; 00506175
    PUSH EBX                            ; 00506176
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00506177
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 0050617c
    PUSH 0x41f00000                     ; 0050617f
    PUSH 0x41700000                     ; 00506184
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00506189
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0050618e
    ADD ESP,0x8                         ; 00506191
    LEA EAX,[EBP + 0xfffffeea]          ; 00506194
    MOV EDX,dword ptr [0x01e57218]      ; 0050619a | DAT_01e57218
    PUSH EAX                            ; 005061a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005061a1
    SUB EAX,EDX                         ; 005061a8
    SHL EAX,0x4                         ; 005061aa
    ADD EAX,ESI                         ; 005061ad
    PUSH 0x3f800000                     ; 005061af
    PUSH EAX                            ; 005061b4
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 005061b5
    MOV dword ptr [EBP + 0xffffff22],EBX ; 005061bb
    PUSH 0x2dd1184                      ; 005061c1 | DAT_02dd1184
    LEA EAX,[EBP + 0x3a]                ; 005061c6
    FLD float ptr [EBP + 0x76]          ; 005061c9
    PUSH EAX                            ; 005061cc
    FSTP float ptr [EBP + 0xfffffeee]   ; 005061cd
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005061d3
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 005061d8
    PUSH EAX                            ; 005061db
    LEA EAX,[EBP + -0x2]                ; 005061dc
    PUSH EAX                            ; 005061df
    PUSH EBX                            ; 005061e0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005061e1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 005061e6
    PUSH EAX                            ; 005061e9
    PUSH EBX                            ; 005061ea
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 005061eb
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 005061f0
    JMP 0x00505c98                      ; 005061f3
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 005061f8
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005061fe
    PUSH EBX                            ; 00506204
    CALL dword ptr [EAX + 0x13c]        ; 00506205
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0050620b
    ADD ESP,0x8                         ; 00506211
    TEST EAX,EAX                        ; 00506214
    JZ 0x00505c98                       ; 00506216
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0050621c
    PUSH 0x0                            ; 0050621e
    LEA EAX,[EBX + 0x150]               ; 00506220
    PUSH EAX                            ; 00506226
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506227
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050622c
    JMP 0x00505c98                      ; 0050622f
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00506234
        ;   Label: LAB_00506234
    PUSH 0x2                            ; 00506236
    LEA EAX,[EBX + 0x150]               ; 00506238
    PUSH EAX                            ; 0050623e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0050623f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00506244
    JMP 0x00505c98                      ; 00506247
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0050624c
        ;   Label: LAB_0050624c
    PUSH EBX                            ; 00506252
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00506253
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 00506258
    TEST EAX,EAX                        ; 0050625b
    JZ 0x00506277                       ; 0050625d
        ;   XREF to: 00506277 (CONDITIONAL_JUMP)  ; LAB_00506277
    PUSH 0x1                            ; 0050625f
    PUSH 0x2                            ; 00506261
    LEA EAX,[EBX + 0x150]               ; 00506263
    PUSH EAX                            ; 00506269
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0050626a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050626f
    JMP 0x00505c98                      ; 00506272
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00506277
        ;   Label: LAB_00506277
    PUSH 0x1                            ; 00506279
    LEA EAX,[EBX + 0x150]               ; 0050627b
    PUSH EAX                            ; 00506281
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506282
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00506287
    JMP 0x00505c98                      ; 0050628a
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0xbd28]        ; 0050628f
        ;   Label: caseD_a
    FSUB float ptr [EBP + 0x92]         ; 00506295
    FST float ptr [EBX + 0xbd28]        ; 0050629b
    FLDZ                                ; 005062a1
    FCOMPP                              ; 005062a3
    FNSTSW AX                           ; 005062a5
    SAHF                                ; 005062a7
    JBE 0x00505c98                      ; 005062a8
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 005062ae
    PUSH 0xb                            ; 005062b0
    LEA EAX,[EBX + 0x150]               ; 005062b2
    PUSH EAX                            ; 005062b8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005062b9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005062be
    JMP 0x00505c98                      ; 005062c1
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 005062c6
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005062cc
    PUSH EBX                            ; 005062d2
    CALL dword ptr [EAX + 0x13c]        ; 005062d3
    ADD ESP,0x8                         ; 005062d9
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 005062dc
    LEA ESI,[EBX + 0x150]               ; 005062e2
    TEST EAX,EAX                        ; 005062e8
    JNZ 0x00506322                      ; 005062ea
        ;   XREF to: 00506322 (CONDITIONAL_JUMP)  ; LAB_00506322
    PUSH dword ptr [EBP + 0x92]         ; 005062ec
    PUSH EBX                            ; 005062f2
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 005062f3
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 005062f8
    TEST EAX,EAX                        ; 005062fb
    JZ 0x00506311                       ; 005062fd
        ;   XREF to: 00506311 (CONDITIONAL_JUMP)  ; LAB_00506311
    PUSH 0x1                            ; 005062ff
        ;   Label: LAB_005062ff
    PUSH 0x2                            ; 00506301
    PUSH ESI                            ; 00506303
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506304
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00506309
    JMP 0x00505c98                      ; 0050630c
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00506311
        ;   Label: LAB_00506311
    PUSH EAX                            ; 00506313
    PUSH ESI                            ; 00506314
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506315
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050631a
    JMP 0x00505c98                      ; 0050631d
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,[0x005a1738]                ; 00506322 | DAT_005a1738
        ;   Label: LAB_00506322
    PUSH 0x3e32b8c2                     ; 00506327
    MOV dword ptr [EBP + 0x6a],EAX      ; 0050632c
    LEA EAX,[EBX + 0x23a4]              ; 0050632f
    PUSH 0x3f000000                     ; 00506335
    MOV dword ptr [EAX + 0x8],0x0       ; 0050633a
    XOR EDX,EDX                         ; 00506341
    MOV ECX,dword ptr [EAX + 0x8]       ; 00506343
    MOV dword ptr [EAX + 0x4],ECX       ; 00506346
    MOV ECX,dword ptr [EAX + 0x4]       ; 00506349
    MOV dword ptr [EAX],ECX             ; 0050634c
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0050634e
    MOV dword ptr [EBP + -0xe],EDX      ; 00506351
    MOV dword ptr [EBP + -0x6],EAX      ; 00506354
    LEA EAX,[EBP + -0xe]                ; 00506357
    MOV dword ptr [EBP + -0xa],EDX      ; 0050635a
    PUSH EAX                            ; 0050635d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0050635e
    PUSH EAX                            ; 00506364
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00506365
    CALL dword ptr [EDX + 0xbc]         ; 0050636b
    ADD ESP,0x4                         ; 00506371
    PUSH EAX                            ; 00506374
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00506375
    ADD EAX,0x20                        ; 0050637b
    PUSH EAX                            ; 0050637e
    PUSH EBX                            ; 0050637f
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00506380
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 00506385
    TEST EAX,EAX                        ; 00506388
    JL 0x00505c98                       ; 0050638a
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    LEA EDX,[EBX + 0x20]                ; 00506390
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00506393
    FLD float ptr [EDX]                 ; 00506399
    FSUB float ptr [EAX + 0x20]         ; 0050639b
    FSTP float ptr [EBP + -0x56]        ; 0050639e
    FLD float ptr [EDX + 0x4]           ; 005063a1
    FSUB float ptr [EAX + 0x24]         ; 005063a4
    FLD float ptr [EBP + -0x56]         ; 005063a7
    FXCH                                ; 005063aa
    FSTP float ptr [EBP + -0x52]        ; 005063ac
    FLD float ptr [EDX + 0x8]           ; 005063af
    FSUB float ptr [EAX + 0x28]         ; 005063b2
    FXCH                                ; 005063b5
    FMUL float ptr [EBP + -0x56]        ; 005063b7
    FXCH                                ; 005063ba
    FST float ptr [EBP + -0x4e]         ; 005063bc
    FMUL float ptr [EBP + -0x4e]        ; 005063bf
    FADDP                               ; 005063c2
    FSQRT                               ; 005063c4
    XOR EDI,EDI                         ; 005063c6
    MOV dword ptr [EBP + -0x52],EDI     ; 005063c8
    FSTP float ptr [EBP + 0x72]         ; 005063cb
    MOV EAX,dword ptr [EBP + 0x72]      ; 005063ce
    FLD float ptr [EBP + 0x72]          ; 005063d1
    MOV dword ptr [EBP + 0x66],EAX      ; 005063d4
    FCOMP float ptr [0x005a1744]        ; 005063d7 | DAT_005a1744
    FNSTSW AX                           ; 005063dd
    SAHF                                ; 005063df
    JBE 0x005063ef                      ; 005063e0
        ;   XREF to: 005063ef (CONDITIONAL_JUMP)  ; LAB_005063ef
    PUSH 0x1                            ; 005063e2
    PUSH 0x3                            ; 005063e4
    PUSH ESI                            ; 005063e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005063e7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005063ec
    FLD float ptr [EBP + 0x66]          ; 005063ef
        ;   Label: LAB_005063ef
    FCOMP float ptr [EBP + 0x6a]        ; 005063f2
    FNSTSW AX                           ; 005063f5
    SAHF                                ; 005063f7
    JA 0x00506499                       ; 005063f8
        ;   XREF to: 00506499 (CONDITIONAL_JUMP)  ; LAB_00506499
    FLD float ptr [EBX + 0xbca0]        ; 005063fe
    FLDZ                                ; 00506404
    FCOMPP                              ; 00506406
    FNSTSW AX                           ; 00506408
    SAHF                                ; 0050640a
    JC 0x00506499                       ; 0050640b
        ;   XREF to: 00506499 (CONDITIONAL_JUMP)  ; LAB_00506499
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00506411
    LEA EDX,[EBX + 0x20]                ; 00506417
    FLD float ptr [EAX + 0x20]          ; 0050641a
    FSUB float ptr [EDX]                ; 0050641d
    FSTP float ptr [EBP + -0x32]        ; 0050641f
    FLD float ptr [EAX + 0x24]          ; 00506422
    FSUB float ptr [EDX + 0x4]          ; 00506425
    FSTP float ptr [EBP + -0x2e]        ; 00506428
    FLD float ptr [EAX + 0x28]          ; 0050642b
    LEA EAX,[EBP + -0x32]               ; 0050642e
    PUSH EAX                            ; 00506431
    LEA EAX,[EBP + 0x16]                ; 00506432
    FSUB float ptr [EDX + 0x8]          ; 00506435
    PUSH EAX                            ; 00506438
    FSTP float ptr [EBP + -0x2a]        ; 00506439
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0050643c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + 0x1a]          ; 00506441
    ADD ESP,0x8                         ; 00506444
    FSUB float ptr [EBX + 0x34]         ; 00506447
    SUB ESP,0x4                         ; 0050644a
    FSTP float ptr [ESP]                ; 0050644d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00506450
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 00506455
    FLD float ptr [EBP + 0x76]          ; 00506458
    FABS                                ; 0050645b
    ADD ESP,0x4                         ; 0050645d
    FCOMP double ptr [0x00590075]       ; 00506460 | DAT_00590075
    FNSTSW AX                           ; 00506466
    SAHF                                ; 00506468
    JNC 0x00506499                      ; 00506469
        ;   XREF to: 00506499 (CONDITIONAL_JUMP)  ; LAB_00506499
    PUSH 0x3f000000                     ; 0050646b
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00506470
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00506475
    LEA EDX,[EBX + 0x150]               ; 00506478
    TEST EAX,EAX                        ; 0050647e
    JZ 0x005064c3                       ; 00506480
        ;   XREF to: 005064c3 (CONDITIONAL_JUMP)  ; LAB_005064c3
    PUSH 0x1                            ; 00506482
    PUSH 0x4                            ; 00506484
    PUSH EDX                            ; 00506486
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506487
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050648c
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 0050648f
        ;   Label: LAB_0050648f
    FLD float ptr [EBP + 0x66]          ; 00506499
        ;   Label: LAB_00506499
    FCOMP float ptr [EBX + 0xbc9c]      ; 0050649c
    FNSTSW AX                           ; 005064a2
    SAHF                                ; 005064a4
    JBE 0x00505c98                      ; 005064a5
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 005064ab
    PUSH 0x0                            ; 005064ad
    LEA EAX,[EBX + 0x150]               ; 005064af
    PUSH EAX                            ; 005064b5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005064b6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005064bb
    JMP 0x00505c98                      ; 005064be
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 005064c3
        ;   Label: LAB_005064c3
    PUSH 0xa                            ; 005064c5
    PUSH EDX                            ; 005064c7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005064c8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005064cd
    MOV dword ptr [EBX + 0xbd28],0x40a00000 ; 005064d0
    JMP 0x0050648f                      ; 005064da
        ;   XREF to: 0050648f (UNCONDITIONAL_JUMP)  ; LAB_0050648f
    PUSH dword ptr [EBP + 0x92]         ; 005064dc
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005064e2
    PUSH EBX                            ; 005064e8
    CALL dword ptr [EAX + 0x13c]        ; 005064e9
    ADD ESP,0x8                         ; 005064ef
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 005064f2
    LEA ESI,[EBX + 0x150]               ; 005064f8
    TEST EDX,EDX                        ; 005064fe
    JNZ 0x00506513                      ; 00506500
        ;   XREF to: 00506513 (CONDITIONAL_JUMP)  ; LAB_00506513
    PUSH 0x1                            ; 00506502
    PUSH EDX                            ; 00506504
    PUSH ESI                            ; 00506505
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506506
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050650b
    JMP 0x00505c98                      ; 0050650e
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 00506513
        ;   Label: LAB_00506513
    LEA EAX,[EBX + 0x23a4]              ; 00506518
    PUSH 0x3f000000                     ; 0050651e
    MOV dword ptr [EAX + 0x8],0x0       ; 00506523
    XOR ECX,ECX                         ; 0050652a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050652c
    MOV dword ptr [EAX + 0x4],EDX       ; 0050652f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00506532
    MOV dword ptr [EAX],EDX             ; 00506535
    MOV EAX,[0x005a1738]                ; 00506537 | DAT_005a1738
    MOV dword ptr [EBP + 0xa],ECX       ; 0050653c
    MOV dword ptr [EBP + 0x12],EAX      ; 0050653f
    LEA EAX,[EBP + 0xa]                 ; 00506542
    MOV dword ptr [EBP + 0xe],ECX       ; 00506545
    PUSH EAX                            ; 00506548
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00506549
    PUSH EAX                            ; 0050654f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00506550
    CALL dword ptr [EDX + 0xbc]         ; 00506556
    ADD ESP,0x4                         ; 0050655c
    PUSH EAX                            ; 0050655f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00506560
    ADD EAX,0x20                        ; 00506566
    PUSH EAX                            ; 00506569
    PUSH EBX                            ; 0050656a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0050656b
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    LEA EDX,[EBX + 0x20]                ; 00506570
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00506573
    FLD float ptr [EDX]                 ; 00506579
    FSUB float ptr [EAX + 0x20]         ; 0050657b
    FSTP float ptr [EBP + 0xffffff6e]   ; 0050657e
    FLD float ptr [EDX + 0x4]           ; 00506584
    FSUB float ptr [EAX + 0x24]         ; 00506587
    FST float ptr [EBP + 0xffffff72]    ; 0050658a
    FMUL float ptr [EBP + 0xffffff72]   ; 00506590
    FLD float ptr [EBP + 0xffffff6e]    ; 00506596
    FMUL ST0                            ; 0050659c
    FLD float ptr [EDX + 0x8]           ; 0050659e
    FSUB float ptr [EAX + 0x28]         ; 005065a1
    FXCH                                ; 005065a4
    FADDP ST2,ST0                       ; 005065a6
    FST float ptr [EBP + 0xffffff76]    ; 005065a8
    FMUL float ptr [EBP + 0xffffff76]   ; 005065ae
    FADDP                               ; 005065b4
    FSQRT                               ; 005065b6
    ADD ESP,0x18                        ; 005065b8
    FCOMP float ptr [0x005a1744]        ; 005065bb | DAT_005a1744
    FNSTSW AX                           ; 005065c1
    SAHF                                ; 005065c3
    JNC 0x00506633                      ; 005065c4
        ;   XREF to: 00506633 (CONDITIONAL_JUMP)  ; LAB_00506633
    PUSH 0x3f000000                     ; 005065c6
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 005065cb
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 005065d0
    TEST EAX,EAX                        ; 005065d3
    JZ 0x0050660c                       ; 005065d5
        ;   XREF to: 0050660c (CONDITIONAL_JUMP)  ; LAB_0050660c
    PUSH 0x3f000000                     ; 005065d7
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 005065dc
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 005065e1
    TEST EAX,EAX                        ; 005065e4
    JZ 0x005065fa                       ; 005065e6
        ;   XREF to: 005065fa (CONDITIONAL_JUMP)  ; LAB_005065fa
    PUSH 0x1                            ; 005065e8
    PUSH 0xe                            ; 005065ea
    PUSH ESI                            ; 005065ec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005065ed
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005065f2
    JMP 0x00505c98                      ; 005065f5
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 005065fa
        ;   Label: LAB_005065fa
    PUSH 0xf                            ; 005065fc
    PUSH ESI                            ; 005065fe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005065ff
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00506604
    JMP 0x00505c98                      ; 00506607
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 0050660c
        ;   Label: LAB_0050660c
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00506611
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00506616
    TEST EAX,EAX                        ; 00506619
    JZ 0x005062ff                       ; 0050661b
        ;   XREF to: 005062ff (CONDITIONAL_JUMP)  ; LAB_005062ff
    PUSH 0x1                            ; 00506621
    PUSH 0x4                            ; 00506623
    PUSH ESI                            ; 00506625
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506626
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050662b
    JMP 0x00505c98                      ; 0050662e
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3dcccccd                     ; 00506633
        ;   Label: LAB_00506633
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00506638
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0050663d
    TEST EAX,EAX                        ; 00506640
    JZ 0x00505c98                       ; 00506642
        ;   XREF to: 00505c98 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 00506648
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0050664d
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00506652
    TEST EAX,EAX                        ; 00506655
    JZ 0x005065fa                       ; 00506657
        ;   XREF to: 005065fa (CONDITIONAL_JUMP)  ; LAB_005065fa
    PUSH 0x1                            ; 00506659
    PUSH 0xe                            ; 0050665b
    PUSH ESI                            ; 0050665d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0050665e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00506663
    JMP 0x00505c98                      ; 00506666
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0050666b
        ;   Label: caseD_e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00506671
    PUSH EBX                            ; 00506677
    CALL dword ptr [EAX + 0x13c]        ; 00506678
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 0050667e
    ADD ESP,0x8                         ; 00506684
    TEST ECX,ECX                        ; 00506687
    JNZ 0x005066a2                      ; 00506689
        ;   XREF to: 005066a2 (CONDITIONAL_JUMP)  ; LAB_005066a2
    PUSH 0x1                            ; 0050668b
    PUSH ECX                            ; 0050668d
    LEA EAX,[EBX + 0x150]               ; 0050668e
    PUSH EAX                            ; 00506694
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506695
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0050669a
    JMP 0x00505c98                      ; 0050669d
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EDX,ECX                         ; 005066a2
        ;   Label: LAB_005066a2
    LEA EAX,[EBX + 0x20]                ; 005066a4
    FLD float ptr [EDX + 0x20]          ; 005066a7
    FSUB float ptr [EAX]                ; 005066aa
    FSTP float ptr [EBP + -0x6e]        ; 005066ac
    FLD float ptr [EDX + 0x24]          ; 005066af
    FSUB float ptr [EAX + 0x4]          ; 005066b2
    FSTP float ptr [EBP + -0x6a]        ; 005066b5
    FLD float ptr [EDX + 0x28]          ; 005066b8
    FSUB float ptr [EAX + 0x8]          ; 005066bb
    LEA EAX,[EBP + -0x6e]               ; 005066be
    PUSH EAX                            ; 005066c1
    LEA EAX,[EBP + -0x4a]               ; 005066c2
    PUSH EAX                            ; 005066c5
    FSTP float ptr [EBP + -0x66]        ; 005066c6
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 005066c9
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EAX,dword ptr [EBP + -0x46]     ; 005066ce
    ADD ESP,0x8                         ; 005066d1
    MOV dword ptr [EBX + 0x34],EAX      ; 005066d4
    JMP 0x00505c98                      ; 005066d7
        ;   XREF to: 00505c98 (UNCONDITIONAL_JUMP)  ; caseD_d

