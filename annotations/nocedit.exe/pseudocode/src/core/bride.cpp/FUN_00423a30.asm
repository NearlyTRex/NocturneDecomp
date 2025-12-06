; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_FUN_00423a30()
;
; Local Variables:
; undefined1       Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined1       Stack[-0x1b8]:1  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined1       Stack[-0x17c]:1  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined1       Stack[-0x140]:1  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined1       Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined1       Stack[-0xe0]:1  local_e0
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined1       Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x68]:1  local_68
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_ub_attack_wav_00616bc8
;   TerminatedCString s_ub_attack_wav_00616be4
;   double DOUBLE_00616c15 = 3
;   double DOUBLE_00616c2d = 1.57079632675000
;   double DOUBLE_00616c35 = 2.5
;   double DOUBLE_00616c3d = 32
;   undefined4 DAT_0065b40c
;   CGore* g_CGorePtr = 02d83364
;   undefined4 DAT_00822cdc
;   undefined4 DAT_00822ce8
;   undefined4 DAT_00822cec
;   undefined4 DAT_00822cf0
;   undefined4 DAT_00822cf4
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042b670
;   core_charactr.cpp_CCharacter_FUN_0042b760
;   core_charactr.cpp_CCharacter_FUN_0042b810
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   core_gore.cpp_FUN_004ede30
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423a30
        ;   Label: core_bride.cpp_FUN_00423a30
    PUSH ESI                            ; 00423a31
    PUSH EDI                            ; 00423a32
    PUSH EBP                            ; 00423a33
    MOV EBP,ESP                         ; 00423a34
    SUB ESP,0x1e4                       ; 00423a36
    SUB EBP,0x7a                        ; 00423a3c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00423a3f
    PUSH dword ptr [EBP + 0x92]         ; 00423a45
    PUSH EBX                            ; 00423a4b
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 00423a4c | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00423a51
    TEST EAX,EAX                        ; 00423a54
    JZ 0x00424552                       ; 00423a56 | LAB_00424552
        ;   XREF to: 00424552 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbee0]        ; 00423a5c
    FLDZ                                ; 00423a62
    FCOMPP                              ; 00423a64
    FNSTSW AX                           ; 00423a66
    SAHF                                ; 00423a68
    JA 0x00423a7d                       ; 00423a69 | LAB_00423a7d
        ;   XREF to: 00423a7d (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbee0]        ; 00423a6b
    FSUB float ptr [EBP + 0x92]         ; 00423a71
    FSTP float ptr [EBX + 0xbee0]       ; 00423a77
    LEA ESI,[EBX + 0x158]               ; 00423a7d
        ;   Label: LAB_00423a7d
    MOV EDX,0xbf800000                  ; 00423a83
    PUSH ESI                            ; 00423a88
    MOV dword ptr [EBP + 0x72],EDX      ; 00423a89
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00423a8c | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00423a91
    ADD ESP,0x4                         ; 00423a94
    CMP EAX,0x5                         ; 00423a97
    JNC 0x004242b3                      ; 00423a9a | LAB_004242b3
        ;   XREF to: 004242b3 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 00423aa0
    JBE 0x00423c3e                      ; 00423aa2 | LAB_00423c3e
        ;   XREF to: 00423c3e (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 00423aa8
    JNZ 0x00423b75                      ; 00423aab | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbee0]        ; 00423ab1
    FLDZ                                ; 00423ab7
    FCOMPP                              ; 00423ab9
    FNSTSW AX                           ; 00423abb
    SAHF                                ; 00423abd
    JC 0x00423b02                       ; 00423abe | LAB_00423b02
        ;   XREF to: 00423b02 (CONDITIONAL_JUMP)
    PUSH 0x41a00000                     ; 00423ac0
    PUSH 0x41200000                     ; 00423ac5
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00423aca | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0xbe24]        ; 00423b02
        ;   Label: LAB_00423b02
    FMUL double ptr [0x00616c15]        ; 00423b08 | double DOUBLE_00616c15
    FLD float ptr [EBX + 0xbe24]        ; 00423b0e
    FMUL double ptr [0x00616c2d]        ; 00423b14 | double DOUBLE_00616c2d
    FLD float ptr [EBP + 0x92]          ; 00423b1a
    FXCH ST2                            ; 00423b20
    FMUL ST2                            ; 00423b22
    FXCH                                ; 00423b24
    FMULP ST2                           ; 00423b26
    PUSH dword ptr [EBP + 0x92]         ; 00423b28
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423b2e
    PUSH EBX                            ; 00423b34
    LEA ESI,[EBX + 0x158]               ; 00423b35
    FSTP float ptr [EBX + 0x2434]       ; 00423b3b
    FSTP float ptr [EBX + 0x2438]       ; 00423b41
    CALL dword ptr [EAX + 0x158]        ; 00423b47
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423b4d
    ADD ESP,0x8                         ; 00423b53
    TEST EAX,EAX                        ; 00423b56
    JNZ 0x00423d2b                      ; 00423b58 | LAB_00423d2b
        ;   XREF to: 00423d2b (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 00423b5e
    PUSH EBX                            ; 00423b64
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00423b65 | void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00423b6a
    TEST EAX,EAX                        ; 00423b6d
    JZ 0x00423d1a                       ; 00423b6f | LAB_00423d1a
        ;   XREF to: 00423d1a (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 00423b75
        ;   Label: LAB_00423b75
    JNZ 0x004242d0                      ; 00423b7c | LAB_004242d0
        ;   XREF to: 004242d0 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x23ac]              ; 00423b82
        ;   Label: LAB_00423b82
    MOV dword ptr [EAX + 0x8],0x0       ; 00423b88
    FLD float ptr [EBP + 0x92]          ; 00423b8f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00423b95
    MOV dword ptr [EAX + 0x4],EDX       ; 00423b98
    MOV EDX,dword ptr [EAX + 0x4]       ; 00423b9b
    MOV dword ptr [EAX],EDX             ; 00423b9e
    FMUL float ptr [EBX + 0xbe24]       ; 00423ba0
    LEA ESI,[EBX + 0x158]               ; 00423ba6
    FSTP float ptr [EBP + 0x66]         ; 00423bac
    FLD float ptr [EBP + 0x66]          ; 00423baf
        ;   Label: LAB_00423baf
    FLDZ                                ; 00423bb2
    FCOMPP                              ; 00423bb4
    FNSTSW AX                           ; 00423bb6
    SAHF                                ; 00423bb8
    JNC 0x00424383                      ; 00423bb9 | LAB_00424383
        ;   XREF to: 00424383 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x66]                ; 00423bbf
    PUSH EAX                            ; 00423bc2
    PUSH ESI                            ; 00423bc3
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00423bc4 | int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00423bc9
    CMP EAX,0x11                        ; 00423bcc
    JZ 0x00423baf                       ; 00423bcf | LAB_00423baf
        ;   XREF to: 00423baf (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00423bd1
    PUSH EBX                            ; 00423bd2
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00423bd3 | void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00423bd8
    JMP 0x00423baf                      ; 00423bdb | LAB_00423baf
        ;   XREF to: 00423baf (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0xbe28]    ; 00423bdd
        ;   Label: LAB_00423bdd
    TEST ECX,ECX                        ; 00423be3
    JNZ 0x00423b75                      ; 00423be5 | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    PUSH ECX                            ; 00423be7
    LEA EAX,[EBP + -0x3e]               ; 00423be8
    PUSH EAX                            ; 00423beb
    PUSH ESI                            ; 00423bec
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00423bed | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423bf2
    PUSH EAX                            ; 00423bf5
    LEA EAX,[EBP + -0x4a]               ; 00423bf6
    PUSH EAX                            ; 00423bf9
    PUSH EBX                            ; 00423bfa
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00423bfb | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423c00
    PUSH 0x0                            ; 00423c03
    LEA EAX,[EBP + -0x4a]               ; 00423c05
    PUSH EAX                            ; 00423c08
    MOV ESI,dword ptr [0x0067b9a0]      ; 00423c09 | CGore * g_CGorePtr
    PUSH ESI                            ; 00423c0f | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004ede30     ; 00423c10 | undefined core_gore.cpp_FUN_004ede30()
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423c15
    PUSH 0x41c80000                     ; 00423c18
    PUSH 0x32                           ; 00423c1d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423c1f
    PUSH EBX                            ; 00423c25
    CALL dword ptr [EAX + 0xa0]         ; 00423c26
    ADD ESP,0xc                         ; 00423c2c
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00423c2f
    JMP 0x00423b75                      ; 00423c39 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 00423c3e
        ;   Label: LAB_00423c3e
    PUSH EBX                            ; 00423c44
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00423c45 | void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00423c4a
    TEST EAX,EAX                        ; 00423c4d
    JZ 0x00423c69                       ; 00423c4f | LAB_00423c69
        ;   XREF to: 00423c69 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423c51
    PUSH 0x1                            ; 00423c53
    LEA EAX,[EBX + 0x158]               ; 00423c55
    PUSH EAX                            ; 00423c5b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423c5c | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423c61
    JMP 0x00423b75                      ; 00423c64 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 00423c69
        ;   Label: LAB_00423c69
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423c6f
    PUSH EBX                            ; 00423c75
    CALL dword ptr [EAX + 0x158]        ; 00423c76
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423c7c
    ADD ESP,0x8                         ; 00423c82
    TEST EAX,EAX                        ; 00423c85
    JZ 0x00423b75                       ; 00423c87 | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423c8d
    PUSH 0x1                            ; 00423c8f
    PUSH ESI                            ; 00423c91
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423c92 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423c97
    MOV EDX,dword ptr [EBX + 0xbee4]    ; 00423c9a
    PUSH EDX                            ; 00423ca0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423ca1 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00423ca6
    TEST EAX,EAX                        ; 00423ca9
    JNZ 0x00423b75                      ; 00423cab | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0xbee8]    ; 00423cb1
    PUSH ECX                            ; 00423cb7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423cb8 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00423cbd
    TEST EAX,EAX                        ; 00423cc0
    JNZ 0x00423b75                      ; 00423cc2 | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    MOV EDX,0x616bc8                    ; 00423cc8 | = "ub-attack?.wav" | s_ub_attack_wav_00616bc8 = ub-attack?.wav
    PUSH EDX                            ; 00423ccd | = "ub-attack?.wav" | s_ub_attack_wav_00616bc8 = ub-attack?.wav
    MOV ESI,dword ptr [EBX + 0x154]     ; 00423cce
    PUSH EBX                            ; 00423cd4
    CALL dword ptr [ESI + 0x24]         ; 00423cd5
    ADD ESP,0x8                         ; 00423cd8
    MOV dword ptr [EBX + 0xbee8],EAX    ; 00423cdb
    JMP 0x00423b75                      ; 00423ce1 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423d1a
        ;   Label: LAB_00423d1a
    PUSH EAX                            ; 00423d1c
    PUSH ESI                            ; 00423d1d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423d1e | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423d23
    JMP 0x00423b75                      ; 00423d26 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH 0x3e32b8c2                     ; 00423d2b
        ;   Label: LAB_00423d2b
    PUSH 0x3f800000                     ; 00423d30
    MOV EAX,[0x0065b40c]                ; 00423d35 | undefined4 DAT_0065b40c
    XOR EDX,EDX                         ; 00423d3a
    MOV dword ptr [EBP + -0x7a],EDX     ; 00423d3c
    MOV dword ptr [EBP + -0x72],EAX     ; 00423d3f
    LEA EAX,[EBP + -0x7a]               ; 00423d42
    MOV dword ptr [EBP + -0x76],EDX     ; 00423d45
    PUSH EAX                            ; 00423d48
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423d49
    PUSH EAX                            ; 00423d4f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00423d50
    CALL dword ptr [EDX + 0xbc]         ; 00423d56
    ADD ESP,0x4                         ; 00423d5c
    PUSH EAX                            ; 00423d5f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423d60
    ADD EAX,0x20                        ; 00423d66
    PUSH EAX                            ; 00423d69
    PUSH EBX                            ; 00423d6a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00423d6b | int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00423d70
    TEST EAX,EAX                        ; 00423d73
    JL 0x00423e1b                       ; 00423d75 | LAB_00423e1b
        ;   XREF to: 00423e1b (CONDITIONAL_JUMP)
    JLE 0x00423b75                      ; 00423d7b | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 00423d81
    FLDZ                                ; 00423d87
    FCOMPP                              ; 00423d89
    FNSTSW AX                           ; 00423d8b
    SAHF                                ; 00423d8d
    JC 0x00423b75                       ; 00423d8e | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423d94
    PUSH EAX                            ; 00423d9a
    MOV EDX,dword ptr [EAX + 0x154]     ; 00423d9b
    CALL dword ptr [EDX + 0x108]        ; 00423da1
    ADD ESP,0x4                         ; 00423da7
    TEST EAX,EAX                        ; 00423daa
    JNZ 0x00423b75                      ; 00423dac | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    PUSH 0x3f000000                     ; 00423db2
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00423db7 | int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00423dbc
    TEST EAX,EAX                        ; 00423dbf
    JZ 0x00423e2d                       ; 00423dc1 | LAB_00423e2d
        ;   XREF to: 00423e2d (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423dc3
    PUSH 0x5                            ; 00423dc5
    PUSH ESI                            ; 00423dc7
        ;   Label: LAB_00423dc7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423dc8 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423dcd
    MOV ESI,dword ptr [EBX + 0xbee4]    ; 00423dd0
    PUSH ESI                            ; 00423dd6
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423dd7 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00423ddc
    TEST EAX,EAX                        ; 00423ddf
    JNZ 0x00423b75                      ; 00423de1 | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0xbee8]    ; 00423de7
    PUSH EDI                            ; 00423ded
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423dee | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00423df3
    TEST EAX,EAX                        ; 00423df6
    JNZ 0x00423b75                      ; 00423df8 | LAB_00423b75
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)
    PUSH 0x616be4                       ; 00423dfe | = "ub-attack?.wav" | s_ub_attack_wav_00616be4 = ub-attack?.wav
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423e03
    PUSH EBX                            ; 00423e09
    CALL dword ptr [EAX + 0x24]         ; 00423e0a
    ADD ESP,0x8                         ; 00423e0d
    MOV dword ptr [EBX + 0xbee8],EAX    ; 00423e10
    JMP 0x00423b75                      ; 00423e16 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423e1b
        ;   Label: LAB_00423e1b
    PUSH 0x0                            ; 00423e1d
    PUSH ESI                            ; 00423e1f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423e20 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423e25
    JMP 0x00423b75                      ; 00423e28 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423e2d
        ;   Label: LAB_00423e2d
    PUSH 0x6                            ; 00423e2f
    JMP 0x00423dc7                      ; 00423e31 | LAB_00423dc7
        ;   XREF to: 00423dc7 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00423e33
        ;   Label: LAB_00423e33
    TEST EDI,EDI                        ; 00423e39
    JNZ 0x00423e4f                      ; 00423e3b | LAB_00423e4f
        ;   XREF to: 00423e4f (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423e3d
    PUSH 0x1                            ; 00423e3f
    PUSH ESI                            ; 00423e41
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423e42 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423e47
    JMP 0x00423b75                      ; 00423e4a | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00423e4f
        ;   Label: LAB_00423e4f
    MOV EDX,dword ptr [EDI + 0x154]     ; 00423e50
    CALL dword ptr [EDX + 0x108]        ; 00423e56
    ADD ESP,0x4                         ; 00423e5c
    TEST EAX,EAX                        ; 00423e5f
    JZ 0x00423e75                       ; 00423e61 | LAB_00423e75
        ;   XREF to: 00423e75 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00423e63
    PUSH 0x1                            ; 00423e65
    PUSH ESI                            ; 00423e67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423e68 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423e6d
    JMP 0x00423b75                      ; 00423e70 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH 0x3f000000                     ; 00423e75
        ;   Label: LAB_00423e75
    PUSH 0x3e4ccccd                     ; 00423e7a
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00423e7f | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0042404a
        ;   Label: LAB_0042404a
    TEST EDI,EDI                        ; 00424050
    JNZ 0x00424066                      ; 00424052 | LAB_00424066
        ;   XREF to: 00424066 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00424054
    PUSH 0x1                            ; 00424056
    PUSH ESI                            ; 00424058
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00424059 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042405e
    JMP 0x00423b75                      ; 00424061 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00424066
        ;   Label: LAB_00424066
    MOV EDX,dword ptr [EDI + 0x154]     ; 00424067
    CALL dword ptr [EDX + 0x108]        ; 0042406d
    ADD ESP,0x4                         ; 00424073
    TEST EAX,EAX                        ; 00424076
    JZ 0x0042408c                       ; 00424078 | LAB_0042408c
        ;   XREF to: 0042408c (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0042407a
    PUSH 0x1                            ; 0042407c
    PUSH ESI                            ; 0042407e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0042407f | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00424084
    JMP 0x00423b75                      ; 00424087 | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    PUSH 0x3f000000                     ; 0042408c
        ;   Label: LAB_0042408c
    PUSH 0x3e4ccccd                     ; 00424091
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00424096 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    JBE 0x00423e33                      ; 004242b3 | LAB_00423e33
        ;   Label: LAB_004242b3
        ;   XREF to: 00423e33 (CONDITIONAL_JUMP)
    CMP EAX,0x6                         ; 004242b9
    JBE 0x0042404a                      ; 004242bc | LAB_0042404a
        ;   XREF to: 0042404a (CONDITIONAL_JUMP)
    CMP EAX,0xe                         ; 004242c2
    JZ 0x00423bdd                       ; 004242c5 | LAB_00423bdd
        ;   XREF to: 00423bdd (CONDITIONAL_JUMP)
    JMP 0x00423b75                      ; 004242cb | LAB_00423b75
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x72]          ; 004242d0
        ;   Label: LAB_004242d0
    FLDZ                                ; 004242d3
    FCOMPP                              ; 004242d5
    FNSTSW AX                           ; 004242d7
    SAHF                                ; 004242d9
    JA 0x00423b82                       ; 004242da | LAB_00423b82
        ;   XREF to: 00423b82 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe24]        ; 004242e0
    FMUL double ptr [0x00616c2d]        ; 004242e6 | double DOUBLE_00616c2d
    FLD float ptr [EBX + 0xbe24]        ; 004242ec
    FLD float ptr [EBP + 0x92]          ; 004242f2
    FLD ST0                             ; 004242f8
    FMUL double ptr [0x00616c35]        ; 004242fa | double DOUBLE_00616c35
    FXCH ST3                            ; 00424300
    FMULP                               ; 00424302
    FXCH ST2                            ; 00424304
    FMULP                               ; 00424306
    PUSH 0x3f060a92                     ; 00424308
    PUSH 0x40400000                     ; 0042430d
    MOV EAX,dword ptr [EBP + 0x72]      ; 00424312
    XOR EDI,EDI                         ; 00424315
    FXCH                                ; 00424317
    FSTP float ptr [EBX + 0x2438]       ; 00424319
    FSTP float ptr [EBX + 0x2434]       ; 0042431f
    MOV dword ptr [EBP + -0x2],EDI      ; 00424325
    MOV dword ptr [EBP + 0x6],EAX       ; 00424328
    LEA EAX,[EBP + -0x2]                ; 0042432b
    MOV dword ptr [EBP + 0x2],EDI       ; 0042432e
    PUSH EAX                            ; 00424331
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00424332
    PUSH EAX                            ; 00424338
    MOV ESI,dword ptr [EAX + 0x154]     ; 00424339
    CALL dword ptr [ESI + 0xbc]         ; 0042433f
    ADD ESP,0x4                         ; 00424345
    PUSH EAX                            ; 00424348
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00424349
    ADD EAX,0x20                        ; 0042434f
    PUSH EAX                            ; 00424352
    PUSH EBX                            ; 00424353
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00424354 | int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00424359
    CMP EAX,0x1                         ; 0042435c
    JZ 0x00423b82                       ; 0042435f | LAB_00423b82
        ;   XREF to: 00423b82 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00424365
    PUSH 0x1                            ; 00424367
    LEA EAX,[EBX + 0x158]               ; 00424369
    PUSH EAX                            ; 0042436f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00424370 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00424375
    MOV dword ptr [EBX + 0x2418],EDI    ; 00424378
    JMP 0x00423b82                      ; 0042437e | LAB_00423b82
        ;   XREF to: 00423b82 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 00424383
        ;   Label: LAB_00424383
    FLDZ                                ; 00424389
    FCOMPP                              ; 0042438b
    FNSTSW AX                           ; 0042438d
    SAHF                                ; 0042438f
    JNC 0x004243a4                      ; 00424390 | LAB_004243a4
        ;   XREF to: 004243a4 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 00424392
    FSUB float ptr [EBP + 0x92]         ; 00424398
    FSTP float ptr [EBX + 0xbe38]       ; 0042439e
    FLD float ptr [EBX + 0x2418]        ; 004243a4
        ;   Label: LAB_004243a4
    FADD float ptr [EBX + 0x34]         ; 004243aa
    PUSH EBX                            ; 004243ad
    FSTP float ptr [EBX + 0x34]         ; 004243ae
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004243b1 | void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004243b6
    PUSH EBX                            ; 004243b9
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 004243ba | int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004243bf
    TEST EAX,EAX                        ; 004243c2
    JZ 0x00424471                       ; 004243c4 | LAB_00424471
        ;   XREF to: 00424471 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x92]          ; 004243ca
    FLD ST0                             ; 004243d0
    FMUL double ptr [0x00616c3d]        ; 004243d2 | double DOUBLE_00616c3d
    FLD float ptr [EBX + 0x242c]        ; 004243d8
    FXCH                                ; 004243de
    FSUBR ST0,ST1                       ; 004243e0
    LEA EAX,[EBX + 0x2428]              ; 004243e2
    FSTP ST1                            ; 004243e8
    FSTP float ptr [EBX + 0x242c]       ; 004243ea
    FLD float ptr [EAX]                 ; 004243f0
    FMUL ST1                            ; 004243f2
    FSTP float ptr [EBP + -0x32]        ; 004243f4
    FLD float ptr [EAX + 0x4]           ; 004243f7
    FMUL ST1                            ; 004243fa
    FSTP float ptr [EBP + -0x2e]        ; 004243fc
    FMUL float ptr [EAX + 0x8]          ; 004243ff
    LEA ESI,[EBX + 0x241c]              ; 00424402
    FLD float ptr [EBP + -0x32]         ; 00424408
    FLD float ptr [EBP + -0x2e]         ; 0042440b
    FXCH ST2                            ; 0042440e
    FSTP float ptr [EBP + -0x2a]        ; 00424410
    FADD float ptr [ESI]                ; 00424413
    LEA EAX,[EBX + 0x158]               ; 00424415
    FSTP float ptr [EBP + -0x62]        ; 0042441b
    FADD float ptr [ESI + 0x4]          ; 0042441e
    FLD float ptr [EBP + -0x2a]         ; 00424421
    FXCH                                ; 00424424
    FSTP float ptr [EBP + -0x5e]        ; 00424426
    FADD float ptr [ESI + 0x8]          ; 00424429 | DAT_00002424
    PUSH EAX                            ; 0042442c
    FSTP float ptr [EBP + -0x5a]        ; 0042442d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00424430 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00424435
    ADD ESP,0x4                         ; 00424438
    CMP EAX,0x1                         ; 0042443b
    JZ 0x00424464                       ; 0042443e | LAB_00424464
        ;   XREF to: 00424464 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x23ac]              ; 00424440
    FLD float ptr [EBP + -0x62]         ; 00424446
    FADD float ptr [EAX]                ; 00424449
    FLD float ptr [EBP + -0x5e]         ; 0042444b
    FXCH                                ; 0042444e
    FSTP float ptr [EBP + -0x62]        ; 00424450
    FADD float ptr [EAX + 0x4]          ; 00424453
    FLD float ptr [EBP + -0x5a]         ; 00424456
    FXCH                                ; 00424459
    FSTP float ptr [EBP + -0x5e]        ; 0042445b
    FADD float ptr [EAX + 0x8]          ; 0042445e
    FSTP float ptr [EBP + -0x5a]        ; 00424461
    LEA EAX,[EBP + -0x62]               ; 00424464
        ;   Label: LAB_00424464
    PUSH EAX                            ; 00424467
    PUSH EBX                            ; 00424468
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 00424469 | void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042446e
    LEA EAX,[EBX + 0x158]               ; 00424471
        ;   Label: LAB_00424471
    PUSH EAX                            ; 00424477
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00424478 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042447d
    PUSH dword ptr [EBP + 0x92]         ; 00424480
    PUSH EBX                            ; 00424486
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 00424487 | void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0xbe28]    ; 0042448c
    ADD ESP,0x8                         ; 00424492
    TEST EDX,EDX                        ; 00424495
    JNZ 0x00424552                      ; 00424497 | LAB_00424552
        ;   XREF to: 00424552 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x00822cf0]      ; 0042449d | undefined4 DAT_00822cf0
    PUSH 0x3e4ccccd                     ; 004244a3
    PUSH ECX                            ; 004244a8
    MOV ESI,dword ptr [EBX + 0xbebc]    ; 004244a9
    PUSH ESI                            ; 004244af
    PUSH EBX                            ; 004244b0
    CALL core_charactr.cpp_CCharacter_FUN_0042b760 ; 004244b1 | void core_charactr.cpp_CCharacter_FUN_0042b760(CCharacter * this_ptr)
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 004244b6
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004244bc
    ADD ESP,0x10                        ; 004244c3
    TEST EDI,EDI                        ; 004244c6
    JZ 0x004244e5                       ; 004244c8 | LAB_004244e5
        ;   XREF to: 004244e5 (CONDITIONAL_JUMP)
    MOV EAX,[0x00822ce8]                ; 004244ca | undefined4 DAT_00822ce8
    PUSH 0x3e4ccccd                     ; 004244cf
    PUSH EAX                            ; 004244d4
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 004244d5
    PUSH EDX                            ; 004244db
    PUSH EBX                            ; 004244dc
    CALL core_charactr.cpp_CCharacter_FUN_0042b760 ; 004244dd | void core_charactr.cpp_CCharacter_FUN_0042b760(CCharacter * this_ptr)
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004244e2
    MOV ECX,dword ptr [0x00822cf4]      ; 004244e5 | undefined4 DAT_00822cf4
        ;   Label: LAB_004244e5
    PUSH 0x3e4ccccd                     ; 004244eb
    PUSH ECX                            ; 004244f0
    MOV ESI,dword ptr [EBX + 0xbec4]    ; 004244f1
    PUSH ESI                            ; 004244f7
    PUSH EBX                            ; 004244f8
    CALL core_charactr.cpp_CCharacter_FUN_0042b760 ; 004244f9 | void core_charactr.cpp_CCharacter_FUN_0042b760(CCharacter * this_ptr)
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 004244fe
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00424504
    ADD ESP,0x10                        ; 0042450b
    TEST EDI,EDI                        ; 0042450e
    JZ 0x0042452d                       ; 00424510 | LAB_0042452d
        ;   XREF to: 0042452d (CONDITIONAL_JUMP)
    MOV EAX,[0x00822cec]                ; 00424512 | undefined4 DAT_00822cec
    PUSH 0x3e4ccccd                     ; 00424517
    PUSH EAX                            ; 0042451c
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 0042451d
    PUSH EDX                            ; 00424523
    PUSH EBX                            ; 00424524
    CALL core_charactr.cpp_CCharacter_FUN_0042b760 ; 00424525 | void core_charactr.cpp_CCharacter_FUN_0042b760(CCharacter * this_ptr)
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0042452a
    MOV ECX,dword ptr [0x00822cdc]      ; 0042452d | undefined4 DAT_00822cdc
        ;   Label: LAB_0042452d
    PUSH 0x3f333333                     ; 00424533
    PUSH ECX                            ; 00424538
    MOV ESI,dword ptr [EBX + 0xbedc]    ; 00424539
    PUSH ESI                            ; 0042453f
    PUSH EBX                            ; 00424540
    CALL core_charactr.cpp_CCharacter_FUN_0042b810 ; 00424541 | void core_charactr.cpp_CCharacter_FUN_0042b810(CCharacter * this_ptr)
        ;   XREF to: 0042b810 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00424546
    PUSH EBX                            ; 00424549
    CALL core_charactr.cpp_CCharacter_FUN_0042b670 ; 0042454a | void core_charactr.cpp_CCharacter_FUN_0042b670(CCharacter * this_ptr)
        ;   XREF to: 0042b670 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042454f
    LEA ESP,[EBP + 0x7a]                ; 00424552
        ;   Label: LAB_00424552
    POP EBP                             ; 00424555
    POP EDI                             ; 00424556
    POP ESI                             ; 00424557
    POP EBX                             ; 00424558
    RET                                 ; 00424559

