; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_CImp_process_FUN_004bbaf0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x34]:4  local_34
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
;   undefined1* switchdataD_004bbac8 = 004bc1e7
;   TerminatedCString s_ghoul_eat_wav_005863cc
;   TerminatedCString s_s_confused_while_walking_005863dc
;   TerminatedCString s_imp_jump_wav_00586406
;   TerminatedCString s_imp_laugh_wav_00586414
;   TerminatedCString s_imp_laugh_wav_00586423
;   double DOUBLE_00586435 = 3.14159265350000
;   double DOUBLE_0058643d = 0.75
;   float FLOAT_00586445 = 4
;   double DOUBLE_0058644d = 0.523598775583333
;   double DOUBLE_00586455 = 2.5
;   double DOUBLE_0058645d = 0.25
;   double DOUBLE_00586465 = 32
;   double DOUBLE_0058646d = 0.800000000000000
;   double DOUBLE_00586475 = 4
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
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
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbaf0
        ;   Label: core_imp.cpp_CImp_process_FUN_004bbaf0
    PUSH ESI                            ; 004bbaf1
    PUSH EDI                            ; 004bbaf2
    PUSH EBP                            ; 004bbaf3
    MOV EBP,ESP                         ; 004bbaf4
    SUB ESP,0x190                       ; 004bbaf6
    SUB EBP,0x7a                        ; 004bbafc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004bbaff
    PUSH dword ptr [EBP + 0x92]         ; 004bbb05
    PUSH EBX                            ; 004bbb0b
    CALL core_charactr.cpp_FUN_004259f0 ; 004bbb0c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004bbb11
    TEST EAX,EAX                        ; 004bbb14
    JZ 0x004bbfe5                       ; 004bbb16
        ;   XREF to: 004bbfe5 (CONDITIONAL_JUMP)  ; LAB_004bbfe5
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 004bbb1c
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004bbb22
    JZ 0x004bbb8f                       ; 004bbb2a
        ;   XREF to: 004bbb8f (CONDITIONAL_JUMP)  ; LAB_004bbb8f
    LEA EAX,[EBX + 0x23a4]              ; 004bbb2c
        ;   Label: LAB_004bbb2c
    MOV dword ptr [EAX + 0x8],0x0       ; 004bbb32
    FLD float ptr [EBP + 0x92]          ; 004bbb39
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bbb3f
    MOV dword ptr [EAX + 0x4],EDX       ; 004bbb42
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bbb45
    MOV dword ptr [EAX],EDX             ; 004bbb48
    FMUL float ptr [EBX + 0xbc8c]       ; 004bbb4a
    LEA EDI,[EBX + 0x150]               ; 004bbb50
    FSTP float ptr [EBP + 0x56]         ; 004bbb56
    FLD float ptr [EBP + 0x56]          ; 004bbb59
        ;   Label: LAB_004bbb59
    FLDZ                                ; 004bbb5c
    FCOMPP                              ; 004bbb5e
    FNSTSW AX                           ; 004bbb60
    SAHF                                ; 004bbb62
    JNC 0x004bbe1a                      ; 004bbb63
        ;   XREF to: 004bbe1a (CONDITIONAL_JUMP)  ; LAB_004bbe1a
    LEA EAX,[EBP + 0x56]                ; 004bbb69
    PUSH EAX                            ; 004bbb6c
    PUSH EDI                            ; 004bbb6d
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004bbb6e
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 004bbb73
    MOV ESI,EAX                         ; 004bbb76
    CMP EAX,0x29a                       ; 004bbb78
    JNC 0x004bbdfa                      ; 004bbb7d
        ;   XREF to: 004bbdfa (CONDITIONAL_JUMP)  ; LAB_004bbdfa
    PUSH ESI                            ; 004bbb83
    PUSH EBX                            ; 004bbb84
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004bbb85
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 004bbb8a
    JMP 0x004bbb59                      ; 004bbb8d
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    PUSH EBX                            ; 004bbb8f
        ;   Label: LAB_004bbb8f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bbb90
    CALL dword ptr [EAX + 0x104]        ; 004bbb96
    ADD ESP,0x4                         ; 004bbb9c
    TEST EAX,EAX                        ; 004bbb9f
    JNZ 0x004bbb2c                      ; 004bbba1
        ;   XREF to: 004bbb2c (CONDITIONAL_JUMP)  ; LAB_004bbb2c
    PUSH 0x1                            ; 004bbba3
    PUSH 0x6                            ; 004bbba5
    LEA EAX,[EBX + 0x150]               ; 004bbba7
    PUSH EAX                            ; 004bbbad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbbae
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbbb3
    JMP 0x004bbb2c                      ; 004bbbb6
        ;   XREF to: 004bbb2c (UNCONDITIONAL_JUMP)  ; LAB_004bbb2c
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbbbb
        ;   Label: LAB_004bbbbb
    MOV ESI,0x1                         ; 004bbbc1
    TEST EAX,EAX                        ; 004bbbc6
    JNZ 0x004bbbd9                      ; 004bbbc8
        ;   XREF to: 004bbbd9 (CONDITIONAL_JUMP)  ; LAB_004bbbd9
    PUSH 0x1                            ; 004bbbca
        ;   Label: LAB_004bbbca
    PUSH 0x0                            ; 004bbbcc
    PUSH EDI                            ; 004bbbce
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbbcf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbbd4
    JMP 0x004bbb59                      ; 004bbbd7
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    TEST ESI,ESI                        ; 004bbbd9
        ;   Label: LAB_004bbbd9
    JZ 0x004bbbf1                       ; 004bbbdb
        ;   XREF to: 004bbbf1 (CONDITIONAL_JUMP)  ; LAB_004bbbf1
    PUSH EAX                            ; 004bbbdd
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bbbde
    CALL dword ptr [EDX + 0x104]        ; 004bbbe4
    ADD ESP,0x4                         ; 004bbbea
    TEST EAX,EAX                        ; 004bbbed
    JNZ 0x004bbbca                      ; 004bbbef
        ;   XREF to: 004bbbca (CONDITIONAL_JUMP)  ; LAB_004bbbca
    TEST ESI,ESI                        ; 004bbbf1
        ;   Label: LAB_004bbbf1
    JZ 0x004bbc0f                       ; 004bbbf3
        ;   XREF to: 004bbc0f (CONDITIONAL_JUMP)  ; LAB_004bbc0f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbbf5
    PUSH EAX                            ; 004bbbfb
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bbbfc
    CALL dword ptr [EDX + 0xec]         ; 004bbc02
    ADD ESP,0x4                         ; 004bbc08
    TEST EAX,EAX                        ; 004bbc0b
    JNZ 0x004bbbca                      ; 004bbc0d
        ;   XREF to: 004bbbca (CONDITIONAL_JUMP)  ; LAB_004bbbca
    TEST ESI,ESI                        ; 004bbc0f
        ;   Label: LAB_004bbc0f
    JZ 0x004bbc30                       ; 004bbc11
        ;   XREF to: 004bbc30 (CONDITIONAL_JUMP)  ; LAB_004bbc30
    PUSH 0x0                            ; 004bbc13
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbc15
    PUSH EBX                            ; 004bbc1b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bbc1c
    PUSH EAX                            ; 004bbc22
    CALL dword ptr [EDX + 0xe0]         ; 004bbc23
    ADD ESP,0xc                         ; 004bbc29
    TEST EAX,EAX                        ; 004bbc2c
    JZ 0x004bbbca                       ; 004bbc2e
        ;   XREF to: 004bbbca (CONDITIONAL_JUMP)  ; LAB_004bbbca
    TEST ESI,ESI                        ; 004bbc30
        ;   Label: LAB_004bbc30
    JZ 0x004bbc99                       ; 004bbc32
        ;   XREF to: 004bbc99 (CONDITIONAL_JUMP)  ; LAB_004bbc99
    MOV EAX,[0x0059f56c]                ; 004bbc34 | FLOAT_0059f56c
    MOV dword ptr [EBP + 0x42],EAX      ; 004bbc39
    LEA EAX,[EBP + 0x3a]                ; 004bbc3c
    PUSH EAX                            ; 004bbc3f
    LEA EAX,[EBP + 0x22]                ; 004bbc40
    PUSH EAX                            ; 004bbc43
    XOR EDX,EDX                         ; 004bbc44
    PUSH EBX                            ; 004bbc46
    MOV dword ptr [EBP + 0x3a],EDX      ; 004bbc47
    MOV dword ptr [EBP + 0x3e],EDX      ; 004bbc4a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004bbc4d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbc52
    FLD float ptr [EBP + 0x22]          ; 004bbc58
    FSUB float ptr [EAX + 0x20]         ; 004bbc5b
    FMUL ST0                            ; 004bbc5e
    FLD float ptr [EBP + 0x2a]          ; 004bbc60
    FSUB float ptr [EAX + 0x28]         ; 004bbc63
    FMUL ST0                            ; 004bbc66
    FADDP                               ; 004bbc68
    FSQRT                               ; 004bbc6a
    ADD ESP,0xc                         ; 004bbc6c
    FCOMP double ptr [0x0058646d]       ; 004bbc6f | DOUBLE_0058646d
    FNSTSW AX                           ; 004bbc75
    SAHF                                ; 004bbc77
    JBE 0x004bbc7c                      ; 004bbc78
        ;   XREF to: 004bbc7c (CONDITIONAL_JUMP)  ; LAB_004bbc7c
    XOR ESI,ESI                         ; 004bbc7a
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbc7c
        ;   Label: LAB_004bbc7c
    FLD float ptr [EBP + 0x26]          ; 004bbc82
    FSUB float ptr [EAX + 0x24]         ; 004bbc85
    FABS                                ; 004bbc88
    FCOMP double ptr [0x00586475]       ; 004bbc8a | DOUBLE_00586475
    FNSTSW AX                           ; 004bbc90
    SAHF                                ; 004bbc92
    JA 0x004bbbca                       ; 004bbc93
        ;   XREF to: 004bbbca (CONDITIONAL_JUMP)  ; LAB_004bbbca
    TEST ESI,ESI                        ; 004bbc99
        ;   Label: LAB_004bbc99
    JZ 0x004bbcbe                       ; 004bbc9b
        ;   XREF to: 004bbcbe (CONDITIONAL_JUMP)  ; LAB_004bbcbe
    PUSH 0x0                            ; 004bbc9d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbc9f
    PUSH EBX                            ; 004bbca5
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bbca6
    PUSH EAX                            ; 004bbcac
    CALL dword ptr [EDX + 0xe4]         ; 004bbcad
    ADD ESP,0xc                         ; 004bbcb3
    TEST EAX,EAX                        ; 004bbcb6
    JZ 0x004bbbca                       ; 004bbcb8
        ;   XREF to: 004bbbca (CONDITIONAL_JUMP)  ; LAB_004bbbca
    TEST ESI,ESI                        ; 004bbcbe
        ;   Label: LAB_004bbcbe
    JZ 0x004bbbca                       ; 004bbcc0
        ;   XREF to: 004bbbca (CONDITIONAL_JUMP)  ; LAB_004bbbca
    PUSH 0x1                            ; 004bbcc6
    PUSH 0x9                            ; 004bbcc8
    PUSH EDI                            ; 004bbcca
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbccb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbcd0
    JMP 0x004bbb59                      ; 004bbcd3
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbcd8
        ;   Label: LAB_004bbcd8
    TEST EAX,EAX                        ; 004bbcde
    JNZ 0x004bbcf3                      ; 004bbce0
        ;   XREF to: 004bbcf3 (CONDITIONAL_JUMP)  ; LAB_004bbcf3
    PUSH 0x1                            ; 004bbce2
    PUSH EAX                            ; 004bbce4
    PUSH EDI                            ; 004bbce5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbce6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbceb
    JMP 0x004bbb59                      ; 004bbcee
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    MOV EDX,dword ptr [0x01cae30c]      ; 004bbcf3 | DAT_01cae30c
        ;   Label: LAB_004bbcf3
    PUSH EDX                            ; 004bbcf9
    LEA EAX,[EBP + -0x7a]               ; 004bbcfa
    PUSH EAX                            ; 004bbcfd
    PUSH EDI                            ; 004bbcfe
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004bbcff
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 004bbd04
    PUSH EAX                            ; 004bbd07
    LEA EAX,[EBP + -0x2]                ; 004bbd08
    PUSH EAX                            ; 004bbd0b
    PUSH EBX                            ; 004bbd0c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004bbd0d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004bbd12
    LEA EAX,[EBP + 0xffffff26]          ; 004bbd15
    PUSH EAX                            ; 004bbd1b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004bbd1c
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 004bbd21
    PUSH 0x41200000                     ; 004bbd24
    PUSH 0x40a00000                     ; 004bbd29
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004bbd2e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    LEA EDX,[EBP + 0xffffff26]          ; 004bbd33
    MOV dword ptr [EBP + 0x76],EAX      ; 004bbd39
    ADD ESP,0x8                         ; 004bbd3c
    MOV dword ptr [EBP + 0xffffff5a],EBX ; 004bbd3f
    MOV dword ptr [EBP + 0xffffff5e],EBX ; 004bbd45
    FLD float ptr [EBP + 0x76]          ; 004bbd4b
    PUSH EDX                            ; 004bbd4e
    FSTP float ptr [EBP + 0xffffff2a]   ; 004bbd4f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbd55
    PUSH EAX                            ; 004bbd5b
    MOV ESI,dword ptr [EAX + 0x14c]     ; 004bbd5c
    CALL dword ptr [ESI + 0x100]        ; 004bbd62
    FLD float ptr [EBP + 0xffffff2a]    ; 004bbd68
    FMUL double ptr [0x00586455]        ; 004bbd6e | DOUBLE_00586455
    ADD ESP,0x8                         ; 004bbd74
    FMUL double ptr [0x0058645d]        ; 004bbd77 | DOUBLE_0058645d
    PUSH 0x0                            ; 004bbd7d
    CALL crt_math.c_round_FUN_00563a30  ; 004bbd7f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x4e]        ; 004bbd84
    MOV ECX,dword ptr [EBP + 0x4e]      ; 004bbd87
    PUSH ECX                            ; 004bbd8a
    PUSH 0x0                            ; 004bbd8b
    LEA EAX,[EBP + -0x2]                ; 004bbd8d
    PUSH EAX                            ; 004bbd90
    MOV ESI,dword ptr [0x005b96c4]      ; 004bbd91 | INT_005b96c4
    PUSH ESI                            ; 004bbd97
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 004bbd98
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 004bbd9d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbda0
    PUSH EAX                            ; 004bbda6
    MOV ESI,dword ptr [EAX + 0x14c]     ; 004bbda7
    CALL dword ptr [ESI + 0x104]        ; 004bbdad
    ADD ESP,0x4                         ; 004bbdb3
    TEST EAX,EAX                        ; 004bbdb6
    JLE 0x004bbde2                      ; 004bbdb8
        ;   XREF to: 004bbde2 (CONDITIONAL_JUMP)  ; LAB_004bbde2
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bbdba
    PUSH EAX                            ; 004bbdc0
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bbdc1
    CALL dword ptr [EDX + 0xe8]         ; 004bbdc7
    ADD ESP,0x4                         ; 004bbdcd
    PUSH 0x1                            ; 004bbdd0
    PUSH 0x0                            ; 004bbdd2
    PUSH EDI                            ; 004bbdd4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbdd5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbdda
    JMP 0x004bbb59                      ; 004bbddd
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    MOV ESI,0x5863cc                    ; 004bbde2 | = "ghoul-eat-?.wav"
        ;   Label: LAB_004bbde2
    PUSH ESI                            ; 004bbde7 | = "ghoul-eat-?.wav"
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004bbde8
    PUSH EBX                            ; 004bbdee
    CALL dword ptr [EDX + 0x24]         ; 004bbdef
    ADD ESP,0x8                         ; 004bbdf2
    JMP 0x004bbb59                      ; 004bbdf5
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    JBE 0x004bbbbb                      ; 004bbdfa
        ;   XREF to: 004bbbbb (CONDITIONAL_JUMP)  ; LAB_004bbbbb
        ;   Label: LAB_004bbdfa
    CMP EAX,0x29b                       ; 004bbe00
    JZ 0x004bbcd8                       ; 004bbe05
        ;   XREF to: 004bbcd8 (CONDITIONAL_JUMP)  ; LAB_004bbcd8
    PUSH ESI                            ; 004bbe0b
    PUSH EBX                            ; 004bbe0c
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004bbe0d
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 004bbe12
    JMP 0x004bbb59                      ; 004bbe15
        ;   XREF to: 004bbb59 (UNCONDITIONAL_JUMP)  ; LAB_004bbb59
    FLD float ptr [EBX + 0xbc8c]        ; 004bbe1a
        ;   Label: LAB_004bbe1a
    FLD float ptr [EBP + 0x92]          ; 004bbe20
    FMUL double ptr [0x00586435]        ; 004bbe26 | DOUBLE_00586435
    FMULP                               ; 004bbe2c
    FLD float ptr [EBX + 0x23ac]        ; 004bbe2e
    LEA ESI,[EBX + 0x150]               ; 004bbe34
    FSTP float ptr [EBX + 0x242c]       ; 004bbe3a
    PUSH ESI                            ; 004bbe40
    FSTP float ptr [EBX + 0x2430]       ; 004bbe41
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004bbe47
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 004bbe4c
    PUSH dword ptr [EBP + 0x92]         ; 004bbe4f
    MOV EDI,dword ptr [EAX + 0x24]      ; 004bbe55
    PUSH EBX                            ; 004bbe58
    MOV dword ptr [EBP + 0x66],EDI      ; 004bbe59
    CALL core_charactr.cpp_FUN_00428c00 ; 004bbe5c
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 004bbe61
    TEST EAX,EAX                        ; 004bbe64
    JZ 0x004bc7a4                       ; 004bbe66
        ;   XREF to: 004bc7a4 (CONDITIONAL_JUMP)  ; LAB_004bc7a4
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004bbe6c
    CMP EAX,0x2                         ; 004bbe72
    JNC 0x004bc018                      ; 004bbe75
        ;   XREF to: 004bc018 (CONDITIONAL_JUMP)  ; LAB_004bc018
    CMP EAX,0x1                         ; 004bbe7b
    JNZ 0x004bc023                      ; 004bbe7e
        ;   XREF to: 004bc023 (CONDITIONAL_JUMP)  ; LAB_004bc023
    PUSH 0x1                            ; 004bbe84
        ;   Label: LAB_004bbe84
    PUSH 0x1                            ; 004bbe86
    LEA EAX,[EBX + 0x150]               ; 004bbe88
        ;   Label: LAB_004bbe88
    PUSH EAX                            ; 004bbe8e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbe8f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbe94
        ;   Label: LAB_004bbe94
    LEA EAX,[EBX + 0x23a4]              ; 004bbe97
    MOV dword ptr [EAX + 0x8],0x0       ; 004bbe9d
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bbea4
    MOV dword ptr [EAX + 0x4],EDX       ; 004bbea7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bbeaa
    MOV dword ptr [EAX],EDX             ; 004bbead
    FLD float ptr [EBX + 0xbca0]        ; 004bbeaf
        ;   Label: caseD_5
    FLDZ                                ; 004bbeb5
    FCOMPP                              ; 004bbeb7
    FNSTSW AX                           ; 004bbeb9
    SAHF                                ; 004bbebb
    JNC 0x004bbed0                      ; 004bbebc
        ;   XREF to: 004bbed0 (CONDITIONAL_JUMP)  ; LAB_004bbed0
    FLD float ptr [EBX + 0xbca0]        ; 004bbebe
    FSUB float ptr [EBP + 0x92]         ; 004bbec4
    FSTP float ptr [EBX + 0xbca0]       ; 004bbeca
    PUSH EBX                            ; 004bbed0
        ;   Label: LAB_004bbed0
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004bbed1
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 004bbed6
    TEST EAX,EAX                        ; 004bbed9
    JZ 0x004bbfbe                       ; 004bbedb
        ;   XREF to: 004bbfbe (CONDITIONAL_JUMP)  ; LAB_004bbfbe
    CMP dword ptr [EBP + 0x66],0x9      ; 004bbee1
    JZ 0x004bbfbe                       ; 004bbee5
        ;   XREF to: 004bbfbe (CONDITIONAL_JUMP)  ; LAB_004bbfbe
    FLD float ptr [EBP + 0x92]          ; 004bbeeb
    FLD ST0                             ; 004bbef1
    FMUL double ptr [0x00586465]        ; 004bbef3 | DOUBLE_00586465
    FLD float ptr [EBX + 0x2424]        ; 004bbef9
    FXCH                                ; 004bbeff
    FSUBR ST0,ST1                       ; 004bbf01
    LEA ESI,[EBX + 0x2420]              ; 004bbf03
    FSTP ST1                            ; 004bbf09
    FSTP float ptr [EBX + 0x2424]       ; 004bbf0b
    FLD float ptr [ESI]                 ; 004bbf11
    FMUL ST1                            ; 004bbf13
    FSTP float ptr [EBP + -0x32]        ; 004bbf15
    FLD float ptr [ESI + 0x4]           ; 004bbf18
    FMUL ST1                            ; 004bbf1b
    LEA EDX,[EBX + 0x2414]              ; 004bbf1d
    FSTP float ptr [EBP + -0x2e]        ; 004bbf23
    FMUL float ptr [ESI + 0x8]          ; 004bbf26
    LEA EAX,[EBX + 0x23a4]              ; 004bbf29
    FLD float ptr [EBP + -0x32]         ; 004bbf2f
    FXCH                                ; 004bbf32
    FSTP float ptr [EBP + -0x2a]        ; 004bbf34
    FADD float ptr [EDX]                ; 004bbf37
    FLD float ptr [EBP + -0x2e]         ; 004bbf39
    FXCH                                ; 004bbf3c
    FSTP float ptr [EBP + 0xffffff62]   ; 004bbf3e
    FADD float ptr [EDX + 0x4]          ; 004bbf44
    FLD float ptr [EBP + -0x2a]         ; 004bbf47
    FXCH                                ; 004bbf4a
    FSTP float ptr [EBP + 0xffffff66]   ; 004bbf4c
    FADD float ptr [EDX + 0x8]          ; 004bbf52
    FLD float ptr [EBP + 0xffffff62]    ; 004bbf55
    FXCH                                ; 004bbf5b
    FSTP float ptr [EBP + 0xffffff6a]   ; 004bbf5d
    FADD float ptr [EAX]                ; 004bbf63
    FLD float ptr [EBP + 0xffffff66]    ; 004bbf65
    FXCH                                ; 004bbf6b
    FSTP float ptr [EBP + 0xffffff7a]   ; 004bbf6d
    FADD float ptr [EAX + 0x4]          ; 004bbf73
    FLD float ptr [EBP + 0xffffff6a]    ; 004bbf76
    FXCH                                ; 004bbf7c
    FSTP float ptr [EBP + 0xffffff7e]   ; 004bbf7e
    FADD float ptr [EAX + 0x8]          ; 004bbf84
    FSTP float ptr [EBP + -0x7e]        ; 004bbf87
    MOV dword ptr [EDX + 0x8],0x0       ; 004bbf8a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004bbf91
    MOV dword ptr [EDX + 0x4],ECX       ; 004bbf94
    MOV ECX,dword ptr [EDX + 0x4]       ; 004bbf97
    MOV dword ptr [EDX],ECX             ; 004bbf9a
    MOV dword ptr [EAX + 0x8],0x0       ; 004bbf9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bbfa3
    MOV dword ptr [EAX + 0x4],EDX       ; 004bbfa6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bbfa9
    MOV dword ptr [EAX],EDX             ; 004bbfac
    LEA EAX,[EBP + 0xffffff7a]          ; 004bbfae
    PUSH EAX                            ; 004bbfb4
    PUSH EBX                            ; 004bbfb5
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004bbfb6
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 004bbfbb
    PUSH EBX                            ; 004bbfbe
        ;   Label: LAB_004bbfbe
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004bbfbf
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 004bbfc4
    LEA EAX,[EBX + 0x150]               ; 004bbfc7
    PUSH EAX                            ; 004bbfcd
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004bbfce
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004bbfd3
    PUSH dword ptr [EBP + 0x92]         ; 004bbfd6
    PUSH EBX                            ; 004bbfdc
    CALL core_charactr.cpp_FUN_0042a150 ; 004bbfdd
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 004bbfe2
    LEA ESP,[EBP + 0x7a]                ; 004bbfe5
        ;   Label: LAB_004bbfe5
    POP EBP                             ; 004bbfe8
    POP EDI                             ; 004bbfe9
    POP ESI                             ; 004bbfea
    POP EBX                             ; 004bbfeb
    RET                                 ; 004bbfec
    PUSH 0x1                            ; 004bbfed
        ;   Label: LAB_004bbfed
    PUSH 0x0                            ; 004bbfef
    LEA EAX,[EBX + 0x150]               ; 004bbff1
    PUSH EAX                            ; 004bbff7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bbff8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bbffd
    PUSH EBX                            ; 004bc000
    MOV EAX,0x5863dc                    ; 004bc001 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004bc006 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005ad350]      ; 004bc007 | PTR_DAT_005ad350
    PUSH ESI                            ; 004bc00d | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004bc00e
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004bbe94                      ; 004bc013
        ;   XREF to: 004bbe94 (UNCONDITIONAL_JUMP)  ; LAB_004bbe94
    JBE 0x004bbe84                      ; 004bc018
        ;   XREF to: 004bbe84 (CONDITIONAL_JUMP)  ; LAB_004bbe84
        ;   Label: LAB_004bc018
    CMP EAX,0x3                         ; 004bc01e
    JZ 0x004bbfed                       ; 004bc021
        ;   XREF to: 004bbfed (CONDITIONAL_JUMP)  ; LAB_004bbfed
    PUSH 0x1                            ; 004bc023
        ;   Label: LAB_004bc023
    PUSH 0x0                            ; 004bc025
    JMP 0x004bbe88                      ; 004bc027
        ;   XREF to: 004bbe88 (UNCONDITIONAL_JUMP)  ; LAB_004bbe88
    MOV EAX,dword ptr [EBX + 0xbc90]    ; 004bc02c
        ;   Label: caseD_7
    TEST EAX,EAX                        ; 004bc032
    JNZ 0x004bbeaf                      ; 004bc034
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xdc],0x0      ; 004bc03a
    JNZ 0x004bbeaf                      ; 004bc041
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EAX                            ; 004bc047
    LEA EAX,[EBP + -0x6e]               ; 004bc048
    PUSH EAX                            ; 004bc04b
    PUSH ESI                            ; 004bc04c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004bc04d
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 004bc052
    PUSH EAX                            ; 004bc055
    LEA EAX,[EBP + -0x3e]               ; 004bc056
    PUSH EAX                            ; 004bc059
    PUSH EBX                            ; 004bc05a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004bc05b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004bc060
    PUSH 0x0                            ; 004bc063
    LEA EAX,[EBP + -0x3e]               ; 004bc065
    PUSH EAX                            ; 004bc068
    MOV ECX,dword ptr [0x005b96c4]      ; 004bc069 | INT_005b96c4
    PUSH ECX                            ; 004bc06f
    CALL core_gore.cpp_FUN_004b0480     ; 004bc070
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004b0480()
    ADD ESP,0xc                         ; 004bc075
    MOV dword ptr [EBX + 0xbc90],0x1    ; 004bc078
    JMP 0x004bbeaf                      ; 004bc082
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 004bc087
        ;   Label: caseD_9
    TEST ECX,ECX                        ; 004bc08d
    JNZ 0x004bc0a3                      ; 004bc08f
        ;   XREF to: 004bc0a3 (CONDITIONAL_JUMP)  ; LAB_004bc0a3
    PUSH 0x1                            ; 004bc091
        ;   Label: LAB_004bc091
    PUSH 0x5                            ; 004bc093
    PUSH ESI                            ; 004bc095
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc096
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc09b
    JMP 0x004bbeaf                      ; 004bc09e
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH ECX                            ; 004bc0a3
        ;   Label: LAB_004bc0a3
    MOV EDX,dword ptr [ECX + 0x14c]     ; 004bc0a4
    CALL dword ptr [EDX + 0x104]        ; 004bc0aa
    ADD ESP,0x4                         ; 004bc0b0
    TEST EAX,EAX                        ; 004bc0b3
    JNZ 0x004bc091                      ; 004bc0b5
        ;   XREF to: 004bc091 (CONDITIONAL_JUMP)  ; LAB_004bc091
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc0b7
    MOV EDI,dword ptr [EAX + 0x2590]    ; 004bc0bd
    CMP EBX,EDI                         ; 004bc0c3
    JNZ 0x004bc091                      ; 004bc0c5
        ;   XREF to: 004bc091 (CONDITIONAL_JUMP)  ; LAB_004bc091
    FLD float ptr [EAX + 0x20]          ; 004bc0c7
    FLD double ptr [0x0058643d]         ; 004bc0ca | DOUBLE_0058643d
    FLD float ptr [EDI + 0x44]          ; 004bc0d0
    FMUL ST1                            ; 004bc0d3
    FSUBP ST2,ST0                       ; 004bc0d5
    MOV EAX,dword ptr [EDI + 0xbca4]    ; 004bc0d7
    FXCH                                ; 004bc0dd
    FSTP float ptr [EDI + 0x20]         ; 004bc0df
    FLD float ptr [EAX + 0x28]          ; 004bc0e2
    FLD float ptr [EDI + 0x5c]          ; 004bc0e5
    FMULP ST2                           ; 004bc0e8
    FSUBRP                              ; 004bc0ea
    FSTP float ptr [EDI + 0x28]         ; 004bc0ec
    JMP 0x004bbeaf                      ; 004bc0ef
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xfffffeea]          ; 004bc0f4
        ;   Label: caseD_4
    PUSH EAX                            ; 004bc0fa
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004bc0fb
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 004bc100
    PUSH 0x40a00000                     ; 004bc103
    PUSH 0x40400000                     ; 004bc108
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004bc10d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004bc112
    ADD ESP,0x8                         ; 004bc115
    LEA EAX,[EBP + 0xfffffeea]          ; 004bc118
    MOV EDX,dword ptr [0x01cae314]      ; 004bc11e | DAT_01cae314
    PUSH EAX                            ; 004bc124
    LEA EAX,[EDX*0x4 + 0x0]             ; 004bc125
    SUB EAX,EDX                         ; 004bc12c
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 004bc12e
    MOV EDX,EAX                         ; 004bc134
    MOV dword ptr [EBP + 0xffffff22],EBX ; 004bc136
    SHL EDX,0x4                         ; 004bc13c
    LEA EAX,[EBX + 0xfd0]               ; 004bc13f
    ADD EAX,EDX                         ; 004bc145
    PUSH 0x3ecccccd                     ; 004bc147
    PUSH EAX                            ; 004bc14c
    PUSH 0x2dd1184                      ; 004bc14d | DAT_02dd1184
    LEA EAX,[EBP + -0x26]               ; 004bc152
    FLD float ptr [EBP + 0x76]          ; 004bc155
    PUSH EAX                            ; 004bc158
    FSTP float ptr [EBP + 0xfffffeee]   ; 004bc159
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004bc15f
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004bc164
    PUSH EAX                            ; 004bc167
    LEA EAX,[EBP + 0x2e]                ; 004bc168
    PUSH EAX                            ; 004bc16b
    PUSH EBX                            ; 004bc16c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004bc16d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004bc172
    PUSH EAX                            ; 004bc175
    PUSH EBX                            ; 004bc176
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004bc177
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 004bc17c
    TEST EAX,EAX                        ; 004bc17f
    JZ 0x004bbeaf                       ; 004bc181
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    XOR EDI,EDI                         ; 004bc187
    XOR ESI,ESI                         ; 004bc189
    MOV EAX,[0x005be368]                ; 004bc18b | DAT_005be368
        ;   Label: LAB_004bc18b
    CMP ESI,dword ptr [EAX + 0x150bf4]  ; 004bc190 | DAT_01fa7e78
    JGE 0x004bbeaf                      ; 004bc196
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [0x01cae374]      ; 004bc19c | g_CImpActorType_01cae33c.name_hash
    PUSH ECX                            ; 004bc1a2
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150bf8] ; 004bc1a3
    PUSH EDX                            ; 004bc1aa
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bc1ab
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004bc1b0
    TEST EAX,EAX                        ; 004bc1b3
    JNZ 0x004bc1bd                      ; 004bc1b5
        ;   XREF to: 004bc1bd (CONDITIONAL_JUMP)  ; LAB_004bc1bd
    INC ESI                             ; 004bc1b7
        ;   Label: LAB_004bc1b7
    ADD EDI,0x4                         ; 004bc1b8
    JMP 0x004bc18b                      ; 004bc1bb
        ;   XREF to: 004bc18b (UNCONDITIONAL_JUMP)  ; LAB_004bc18b
    CMP EAX,EBX                         ; 004bc1bd
        ;   Label: LAB_004bc1bd
    JZ 0x004bc1b7                       ; 004bc1bf
        ;   XREF to: 004bc1b7 (CONDITIONAL_JUMP)  ; LAB_004bc1b7
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 004bc1c1
    CMP ECX,dword ptr [EAX + 0xbca4]    ; 004bc1c7
    JNZ 0x004bc1b7                      ; 004bc1cd
        ;   XREF to: 004bc1b7 (CONDITIONAL_JUMP)  ; LAB_004bc1b7
    PUSH 0x1                            ; 004bc1cf
    PUSH 0x3                            ; 004bc1d1
    ADD EAX,0x150                       ; 004bc1d3
    PUSH EAX                            ; 004bc1d8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc1d9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc1de
    INC ESI                             ; 004bc1e1
    ADD EDI,0x4                         ; 004bc1e2
    JMP 0x004bc18b                      ; 004bc1e5
        ;   XREF to: 004bc18b (UNCONDITIONAL_JUMP)  ; LAB_004bc18b
    MOV EAX,[0x01cae0e8]                ; 004bc1e7 | DAT_01cae0e8
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004bc1ec
    PUSH EAX                            ; 004bc1f3
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bc1f4
    CALL dword ptr [EDX + 0x104]        ; 004bc1fa
    ADD ESP,0x4                         ; 004bc200
    TEST EAX,EAX                        ; 004bc203
    JZ 0x004bc234                       ; 004bc205
        ;   XREF to: 004bc234 (CONDITIONAL_JUMP)  ; LAB_004bc234
    PUSH 0x3dcccccd                     ; 004bc207
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004bc20c
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004bc211
    TEST EAX,EAX                        ; 004bc214
    JZ 0x004bbeaf                       ; 004bc216
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004bc21c
    PUSH 0x3                            ; 004bc21e
    LEA EAX,[EBX + 0x150]               ; 004bc220
    PUSH EAX                            ; 004bc226
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc227
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc22c
    JMP 0x004bbeaf                      ; 004bc22f
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004bc234
        ;   Label: LAB_004bc234
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bc23a
    PUSH EBX                            ; 004bc240
    CALL dword ptr [EAX + 0x13c]        ; 004bc241
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004bc247
    ADD ESP,0x8                         ; 004bc24d
    TEST EDX,EDX                        ; 004bc250
    JZ 0x004bc355                       ; 004bc252
        ;   XREF to: 004bc355 (CONDITIONAL_JUMP)  ; LAB_004bc355
    CMP dword ptr [EDX + 0x2590],0x0    ; 004bc258
    JNZ 0x004bc2e4                      ; 004bc25f
        ;   XREF to: 004bc2e4 (CONDITIONAL_JUMP)  ; LAB_004bc2e4
    LEA EAX,[EBX + 0x20]                ; 004bc265
    FLD float ptr [EDX + 0x20]          ; 004bc268
    FSUB float ptr [EAX]                ; 004bc26b
    FSTP float ptr [EBP + 0xa]          ; 004bc26d
    FLD float ptr [EDX + 0x24]          ; 004bc270
    FSUB float ptr [EAX + 0x4]          ; 004bc273
    FST float ptr [EBP + 0xe]           ; 004bc276
    FMUL float ptr [EBP + 0xe]          ; 004bc279
    FLD float ptr [EBP + 0xa]           ; 004bc27c
    FMUL ST0                            ; 004bc27f
    FLD float ptr [EDX + 0x28]          ; 004bc281
    FSUB float ptr [EAX + 0x8]          ; 004bc284
    FXCH                                ; 004bc287
    FADDP ST2,ST0                       ; 004bc289
    FST float ptr [EBP + 0x12]          ; 004bc28b
    FMUL float ptr [EBP + 0x12]         ; 004bc28e
    FADDP                               ; 004bc291
    FSQRT                               ; 004bc293
    FSTP float ptr [EBP + 0x72]         ; 004bc295
    MOV EAX,dword ptr [EBP + 0x72]      ; 004bc298
    FLD float ptr [EBP + 0x72]          ; 004bc29b
    MOV dword ptr [EBP + 0x6a],EAX      ; 004bc29e
    FCOMP float ptr [0x0059f56c]        ; 004bc2a1 | FLOAT_0059f56c
    FNSTSW AX                           ; 004bc2a7
    SAHF                                ; 004bc2a9
    JC 0x004bc2f6                       ; 004bc2aa
        ;   XREF to: 004bc2f6 (CONDITIONAL_JUMP)  ; LAB_004bc2f6
    FLD float ptr [EBP + 0x6a]          ; 004bc2ac
        ;   Label: LAB_004bc2ac
    FCOMP float ptr [EBX + 0xbc9c]      ; 004bc2af
    FNSTSW AX                           ; 004bc2b5
    SAHF                                ; 004bc2b7
    JNC 0x004bbeaf                      ; 004bc2b8
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x6a]          ; 004bc2be
    LEA EDX,[EBX + 0x150]               ; 004bc2c1
    FCOMP float ptr [0x0059f578]        ; 004bc2c7 | FLOAT_0059f578
    FNSTSW AX                           ; 004bc2cd
    SAHF                                ; 004bc2cf
    JNC 0x004bc343                      ; 004bc2d0
        ;   XREF to: 004bc343 (CONDITIONAL_JUMP)  ; LAB_004bc343
    PUSH 0x1                            ; 004bc2d2
    PUSH 0x1                            ; 004bc2d4
    PUSH EDX                            ; 004bc2d6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc2d7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc2dc
    JMP 0x004bbeaf                      ; 004bc2df
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004bc2e4
        ;   Label: LAB_004bc2e4
    PUSH 0x3                            ; 004bc2e6
    PUSH ESI                            ; 004bc2e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc2e9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc2ee
    JMP 0x004bbeaf                      ; 004bc2f1
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xa]                 ; 004bc2f6
        ;   Label: LAB_004bc2f6
    PUSH EAX                            ; 004bc2f9
    LEA EAX,[EBP + -0x56]               ; 004bc2fa
    PUSH EAX                            ; 004bc2fd
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004bc2fe
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + -0x52]         ; 004bc303
    ADD ESP,0x8                         ; 004bc306
    FSUB float ptr [EBX + 0x34]         ; 004bc309
    SUB ESP,0x4                         ; 004bc30c
    FSTP float ptr [ESP]                ; 004bc30f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004bc312
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004bc317
    FLD float ptr [EBP + 0x76]          ; 004bc31a
    FABS                                ; 004bc31d
    ADD ESP,0x4                         ; 004bc31f
    FCOMP double ptr [0x0058644d]       ; 004bc322 | DOUBLE_0058644d
    FNSTSW AX                           ; 004bc328
    SAHF                                ; 004bc32a
    JNC 0x004bc2ac                      ; 004bc32b
        ;   XREF to: 004bc2ac (CONDITIONAL_JUMP)  ; LAB_004bc2ac
    PUSH 0x1                            ; 004bc331
    PUSH 0x4                            ; 004bc333
    PUSH ESI                            ; 004bc335
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc336
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc33b
    JMP 0x004bc2ac                      ; 004bc33e
        ;   XREF to: 004bc2ac (UNCONDITIONAL_JUMP)  ; LAB_004bc2ac
    PUSH 0x1                            ; 004bc343
        ;   Label: LAB_004bc343
    PUSH 0x2                            ; 004bc345
    PUSH EDX                            ; 004bc347
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc348
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc34d
    JMP 0x004bbeaf                      ; 004bc350
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004bc355
        ;   Label: LAB_004bc355
    PUSH EBX                            ; 004bc35b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004bc35c
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004bc361
    TEST EAX,EAX                        ; 004bc364
    JZ 0x004bbeaf                       ; 004bc366
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004bc36c
    PUSH 0x1                            ; 004bc36e
    PUSH ESI                            ; 004bc370
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc371
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc376
    JMP 0x004bbeaf                      ; 004bc379
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004bc37e
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bc384
    PUSH EBX                            ; 004bc38a
    CALL dword ptr [EAX + 0x13c]        ; 004bc38b
    ADD ESP,0x8                         ; 004bc391
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc394
    LEA ESI,[EBX + 0x150]               ; 004bc39a
    TEST EAX,EAX                        ; 004bc3a0
    JZ 0x004bc3c0                       ; 004bc3a2
        ;   XREF to: 004bc3c0 (CONDITIONAL_JUMP)  ; LAB_004bc3c0
    MOV EDX,dword ptr [EAX + 0x2590]    ; 004bc3a4
    TEST EDX,EDX                        ; 004bc3aa
    JZ 0x004bc3f6                       ; 004bc3ac
        ;   XREF to: 004bc3f6 (CONDITIONAL_JUMP)  ; LAB_004bc3f6
    PUSH 0x1                            ; 004bc3ae
    PUSH 0x3                            ; 004bc3b0
    PUSH ESI                            ; 004bc3b2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc3b3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc3b8
    JMP 0x004bbeaf                      ; 004bc3bb
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH dword ptr [EBP + 0x92]         ; 004bc3c0
        ;   Label: LAB_004bc3c0
    PUSH EBX                            ; 004bc3c6
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004bc3c7
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004bc3cc
    TEST EAX,EAX                        ; 004bc3cf
    JZ 0x004bc3e5                       ; 004bc3d1
        ;   XREF to: 004bc3e5 (CONDITIONAL_JUMP)  ; LAB_004bc3e5
    PUSH 0x1                            ; 004bc3d3
    PUSH 0x1                            ; 004bc3d5
    PUSH ESI                            ; 004bc3d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc3d8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc3dd
    JMP 0x004bbeaf                      ; 004bc3e0
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004bc3e5
        ;   Label: LAB_004bc3e5
    PUSH EAX                            ; 004bc3e7
    PUSH ESI                            ; 004bc3e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc3e9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc3ee
    JMP 0x004bbeaf                      ; 004bc3f1
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,[0x0059f56c]                ; 004bc3f6 | FLOAT_0059f56c
        ;   Label: LAB_004bc3f6
    MOV dword ptr [EBP + 0x62],EAX      ; 004bc3fb
    LEA EAX,[EBX + 0x23a4]              ; 004bc3fe
    PUSH 0x3e32b8c2                     ; 004bc404
    MOV dword ptr [EAX + 0x8],EDX       ; 004bc409
    PUSH 0x3f000000                     ; 004bc40c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004bc411
    MOV dword ptr [EAX + 0x4],ECX       ; 004bc414
    MOV ECX,dword ptr [EAX + 0x4]       ; 004bc417
    MOV dword ptr [EAX],ECX             ; 004bc41a
    MOV EAX,dword ptr [EBP + 0x62]      ; 004bc41c
    MOV dword ptr [EBP + -0xe],EDX      ; 004bc41f
    MOV dword ptr [EBP + -0x6],EAX      ; 004bc422
    LEA EAX,[EBP + -0xe]                ; 004bc425
    MOV dword ptr [EBP + -0xa],EDX      ; 004bc428
    PUSH EAX                            ; 004bc42b
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc42c
    PUSH EAX                            ; 004bc432
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bc433
    CALL dword ptr [EDX + 0xbc]         ; 004bc439
    ADD ESP,0x4                         ; 004bc43f
    PUSH EAX                            ; 004bc442
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc443
    ADD EAX,0x20                        ; 004bc449
    PUSH EAX                            ; 004bc44c
    PUSH EBX                            ; 004bc44d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004bc44e
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 004bc453
    TEST EAX,EAX                        ; 004bc456
    JL 0x004bbeaf                       ; 004bc458
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBX + 0x20]                ; 004bc45e
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004bc461
    FLD float ptr [EAX]                 ; 004bc467
    FSUB float ptr [EDX + 0x20]         ; 004bc469
    FSTP float ptr [EBP + -0x1a]        ; 004bc46c
    FLD float ptr [EAX + 0x4]           ; 004bc46f
    FSUB float ptr [EDX + 0x24]         ; 004bc472
    FLD float ptr [EBP + -0x1a]         ; 004bc475
    FXCH                                ; 004bc478
    FSTP float ptr [EBP + -0x16]        ; 004bc47a
    FLD float ptr [EAX + 0x8]           ; 004bc47d
    FSUB float ptr [EDX + 0x28]         ; 004bc480
    FXCH                                ; 004bc483
    FMUL float ptr [EBP + -0x1a]        ; 004bc485
    FXCH                                ; 004bc488
    FST float ptr [EBP + -0x12]         ; 004bc48a
    FMUL float ptr [EBP + -0x12]        ; 004bc48d
    XOR EAX,EAX                         ; 004bc490
    FADDP                               ; 004bc492
    MOV dword ptr [EBP + -0x16],EAX     ; 004bc494
    FSQRT                               ; 004bc497
    FSTP float ptr [EBP + 0x5e]         ; 004bc499
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004bc49c
    FLD float ptr [EBP + 0x5e]          ; 004bc49f
    MOV dword ptr [EBP + 0x6e],EAX      ; 004bc4a2
    FCOMP float ptr [0x0059f578]        ; 004bc4a5 | FLOAT_0059f578
    FNSTSW AX                           ; 004bc4ab
    SAHF                                ; 004bc4ad
    JBE 0x004bc4c4                      ; 004bc4ae
        ;   XREF to: 004bc4c4 (CONDITIONAL_JUMP)  ; LAB_004bc4c4
    MOV EDX,dword ptr [EBP + 0x66]      ; 004bc4b0
    CMP EDX,0x1                         ; 004bc4b3
    JNZ 0x004bc4c4                      ; 004bc4b6
        ;   XREF to: 004bc4c4 (CONDITIONAL_JUMP)  ; LAB_004bc4c4
    PUSH EDX                            ; 004bc4b8
    PUSH 0x2                            ; 004bc4b9
    PUSH ESI                            ; 004bc4bb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc4bc
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc4c1
    FLD float ptr [EBP + 0x6e]          ; 004bc4c4
        ;   Label: LAB_004bc4c4
    FCOMP float ptr [0x0059f57c]        ; 004bc4c7 | FLOAT_0059f57c
    FNSTSW AX                           ; 004bc4cd
    SAHF                                ; 004bc4cf
    JNC 0x004bc59d                      ; 004bc4d0
        ;   XREF to: 004bc59d (CONDITIONAL_JUMP)  ; LAB_004bc59d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc4d6
    PUSH EAX                            ; 004bc4dc
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bc4dd
    CALL dword ptr [EDX + 0xec]         ; 004bc4e3
    ADD ESP,0x4                         ; 004bc4e9
    TEST EAX,EAX                        ; 004bc4ec
    JNZ 0x004bc59d                      ; 004bc4ee
        ;   XREF to: 004bc59d (CONDITIONAL_JUMP)  ; LAB_004bc59d
    MOV EAX,dword ptr [EBX + 0xbd58]    ; 004bc4f4
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004bc4fa
    JZ 0x004bc59d                       ; 004bc502
        ;   XREF to: 004bc59d (CONDITIONAL_JUMP)  ; LAB_004bc59d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc508
    LEA EDX,[EBX + 0x20]                ; 004bc50e
    FLD float ptr [EAX + 0x20]          ; 004bc511
    FSUB float ptr [EDX]                ; 004bc514
    FSTP float ptr [EBP + 0x16]         ; 004bc516
    FLD float ptr [EAX + 0x24]          ; 004bc519
    FSUB float ptr [EDX + 0x4]          ; 004bc51c
    FSTP float ptr [EBP + 0x1a]         ; 004bc51f
    FLD float ptr [EAX + 0x28]          ; 004bc522
    LEA EAX,[EBP + 0x16]                ; 004bc525
    PUSH EAX                            ; 004bc528
    LEA EAX,[EBP + -0x62]               ; 004bc529
    FSUB float ptr [EDX + 0x8]          ; 004bc52c
    PUSH EAX                            ; 004bc52f
    FSTP float ptr [EBP + 0x1e]         ; 004bc530
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004bc533
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + -0x5e]         ; 004bc538
    ADD ESP,0x8                         ; 004bc53b
    FSUB float ptr [EBX + 0x34]         ; 004bc53e
    SUB ESP,0x4                         ; 004bc541
    FSTP float ptr [ESP]                ; 004bc544
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004bc547
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004bc54c
    FLD float ptr [EBP + 0x76]          ; 004bc54f
    FABS                                ; 004bc552
    ADD ESP,0x4                         ; 004bc554
    FCOMP double ptr [0x0058644d]       ; 004bc557 | DOUBLE_0058644d
    FNSTSW AX                           ; 004bc55d
    SAHF                                ; 004bc55f
    JNC 0x004bc59d                      ; 004bc560
        ;   XREF to: 004bc59d (CONDITIONAL_JUMP)  ; LAB_004bc59d
    PUSH 0x3dcccccd                     ; 004bc562
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004bc567
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004bc56c
    TEST EAX,EAX                        ; 004bc56f
    JZ 0x004bc59d                       ; 004bc571
        ;   XREF to: 004bc59d (CONDITIONAL_JUMP)  ; LAB_004bc59d
    PUSH 0x1                            ; 004bc573
    PUSH 0x8                            ; 004bc575
    LEA EAX,[EBX + 0x150]               ; 004bc577
    PUSH EAX                            ; 004bc57d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc57e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc583
    MOV ESI,dword ptr [EBX + 0xbd24]    ; 004bc586
    PUSH ESI                            ; 004bc58c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bc58d
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004bc592
    TEST EAX,EAX                        ; 004bc595
    JZ 0x004bc6ef                       ; 004bc597
        ;   XREF to: 004bc6ef (CONDITIONAL_JUMP)  ; LAB_004bc6ef
    FLD float ptr [EBP + 0x6e]          ; 004bc59d
        ;   Label: LAB_004bc59d
    FCOMP float ptr [EBP + 0x62]        ; 004bc5a0
    FNSTSW AX                           ; 004bc5a3
    SAHF                                ; 004bc5a5
    JA 0x004bc63c                       ; 004bc5a6
        ;   XREF to: 004bc63c (CONDITIONAL_JUMP)  ; LAB_004bc63c
    FLD float ptr [EBX + 0xbca0]        ; 004bc5ac
    FLDZ                                ; 004bc5b2
    FCOMPP                              ; 004bc5b4
    FNSTSW AX                           ; 004bc5b6
    SAHF                                ; 004bc5b8
    JC 0x004bc63c                       ; 004bc5b9
        ;   XREF to: 004bc63c (CONDITIONAL_JUMP)  ; LAB_004bc63c
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004bc5bf
    LEA EDX,[EBX + 0x20]                ; 004bc5c5
    FLD float ptr [EAX + 0x20]          ; 004bc5c8
    FSUB float ptr [EDX]                ; 004bc5cb
    FSTP float ptr [EBP + -0x4a]        ; 004bc5cd
    FLD float ptr [EAX + 0x24]          ; 004bc5d0
    FSUB float ptr [EDX + 0x4]          ; 004bc5d3
    FSTP float ptr [EBP + -0x46]        ; 004bc5d6
    FLD float ptr [EAX + 0x28]          ; 004bc5d9
    LEA EAX,[EBP + -0x4a]               ; 004bc5dc
    PUSH EAX                            ; 004bc5df
    LEA EAX,[EBP + 0xffffff6e]          ; 004bc5e0
    FSUB float ptr [EDX + 0x8]          ; 004bc5e6
    PUSH EAX                            ; 004bc5e9
    FSTP float ptr [EBP + -0x42]        ; 004bc5ea
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004bc5ed
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + 0xffffff72]    ; 004bc5f2
    ADD ESP,0x8                         ; 004bc5f8
    FSUB float ptr [EBX + 0x34]         ; 004bc5fb
    SUB ESP,0x4                         ; 004bc5fe
    FSTP float ptr [ESP]                ; 004bc601
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004bc604
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004bc609
    FLD float ptr [EBP + 0x76]          ; 004bc60c
    FABS                                ; 004bc60f
    ADD ESP,0x4                         ; 004bc611
    FCOMP double ptr [0x0058644d]       ; 004bc614 | DOUBLE_0058644d
    FNSTSW AX                           ; 004bc61a
    SAHF                                ; 004bc61c
    JNC 0x004bc63c                      ; 004bc61d
        ;   XREF to: 004bc63c (CONDITIONAL_JUMP)  ; LAB_004bc63c
    PUSH 0x1                            ; 004bc61f
    PUSH 0x4                            ; 004bc621
    LEA EAX,[EBX + 0x150]               ; 004bc623
    PUSH EAX                            ; 004bc629
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc62a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc62f
    MOV dword ptr [EBX + 0xbca0],0x40800000 ; 004bc632
    FLD float ptr [EBP + 0x6e]          ; 004bc63c
        ;   Label: LAB_004bc63c
    FCOMP float ptr [EBX + 0xbc9c]      ; 004bc63f
    FNSTSW AX                           ; 004bc645
    SAHF                                ; 004bc647
    JBE 0x004bc65d                      ; 004bc648
        ;   XREF to: 004bc65d (CONDITIONAL_JUMP)  ; LAB_004bc65d
    PUSH 0x1                            ; 004bc64a
    PUSH 0x0                            ; 004bc64c
    LEA EAX,[EBX + 0x150]               ; 004bc64e
    PUSH EAX                            ; 004bc654
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bc655
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004bc65a
    FLD float ptr [EBX + 0xbd2c]        ; 004bc65d
        ;   Label: LAB_004bc65d
    FSUB float ptr [EBP + 0x92]         ; 004bc663
    FST float ptr [EBX + 0xbd2c]        ; 004bc669
    FLDZ                                ; 004bc66f
    FCOMPP                              ; 004bc671
    FNSTSW AX                           ; 004bc673
    SAHF                                ; 004bc675
    JBE 0x004bbeaf                      ; 004bc676
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0xbd24]    ; 004bc67c
    PUSH EDI                            ; 004bc682
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 004bc683
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bc68d
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004bc692
    TEST EAX,EAX                        ; 004bc695
    JNZ 0x004bbeaf                      ; 004bc697
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 004bc69d
    PUSH EAX                            ; 004bc6a3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bc6a4
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004bc6a9
    TEST EAX,EAX                        ; 004bc6ac
    JNZ 0x004bbeaf                      ; 004bc6ae
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x586414                       ; 004bc6b4 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bc6b9
    PUSH EBX                            ; 004bc6bf
    CALL dword ptr [EAX + 0x24]         ; 004bc6c0
    ADD ESP,0x8                         ; 004bc6c3
    PUSH 0x41a00000                     ; 004bc6c6
    PUSH 0x41200000                     ; 004bc6cb
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004bc6d0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004bc6d6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004bc6db
    ADD ESP,0x8                         ; 004bc6de
    MOV EAX,dword ptr [EBP + 0x76]      ; 004bc6e1
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 004bc6e4
    JMP 0x004bbeaf                      ; 004bc6ea
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x586406                       ; 004bc6ef | = "imp-jump?.wav"
        ;   Label: LAB_004bc6ef
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bc6f4
    PUSH EBX                            ; 004bc6fa
    CALL dword ptr [EAX + 0x24]         ; 004bc6fb
    ADD ESP,0x8                         ; 004bc6fe
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004bc701
    JMP 0x004bc59d                      ; 004bc707
        ;   XREF to: 004bc59d (UNCONDITIONAL_JUMP)  ; LAB_004bc59d
    FLD float ptr [EBP + 0x92]          ; 004bc70c
        ;   Label: caseD_3
    FMUL float ptr [0x00586445]         ; 004bc712 | FLOAT_00586445
    FSUBR float ptr [EBX + 0xbd2c]      ; 004bc718
    FST float ptr [EBX + 0xbd2c]        ; 004bc71e
    FLDZ                                ; 004bc724
    FCOMPP                              ; 004bc726
    FNSTSW AX                           ; 004bc728
    SAHF                                ; 004bc72a
    JBE 0x004bbeaf                      ; 004bc72b
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    MOV ESI,dword ptr [EBX + 0xbd24]    ; 004bc731
    PUSH ESI                            ; 004bc737
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 004bc738
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bc742
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004bc747
    TEST EAX,EAX                        ; 004bc74a
    JNZ 0x004bbeaf                      ; 004bc74c
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0xbd28]    ; 004bc752
    PUSH EDI                            ; 004bc758
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bc759
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004bc75e
    TEST EAX,EAX                        ; 004bc761
    JNZ 0x004bbeaf                      ; 004bc763
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x586423                       ; 004bc769 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bc76e
    PUSH EBX                            ; 004bc774
    CALL dword ptr [EAX + 0x24]         ; 004bc775
    ADD ESP,0x8                         ; 004bc778
    PUSH 0x41a00000                     ; 004bc77b
    PUSH 0x41200000                     ; 004bc780
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004bc785
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004bc78b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004bc790
    ADD ESP,0x8                         ; 004bc793
    MOV EAX,dword ptr [EBP + 0x76]      ; 004bc796
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 004bc799
    JMP 0x004bbeaf                      ; 004bc79f
        ;   XREF to: 004bbeaf (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP EDI,0x9                         ; 004bc7a4
        ;   Label: LAB_004bc7a4
    JA 0x004bbeaf                       ; 004bc7a7
        ;   XREF to: 004bbeaf (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EDI*0x4 + 0x4bbac8]  ; 004bc7ad | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

