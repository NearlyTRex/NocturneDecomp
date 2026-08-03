; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_CLarva_process_FUN_004c4970(CEnemy *param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x200]:8  local_200
; undefined8       Stack[-0x1f8]:8  local_1f8
; undefined        Stack[-0x1f0]:1  local_1f0
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
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
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x74]:1  local_74
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   TerminatedCString s_larva_blow1_wav_00587784
;   TerminatedCString s_s_confused_while_walking_00587794
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005877be
;   TerminatedCString s_slime_wav_f_f_005877df
;   double DOUBLE_005877f4 = 0.392699081687500
;   double DOUBLE_005877fc = 3
;   double DOUBLE_00587804 = 12
;   double DOUBLE_0058780c = -0.200000000000000
;   double DOUBLE_00587814 = 32
;   float FLOAT_0058781c = 2
;   double DOUBLE_00587824 = -0.523598775583333
;   double DOUBLE_0058782c = 0.523598775583333
;   float FLOAT_0059fa6c = 20
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
;   core_gore.cpp_CGore_createBloodPool_FUN_004b0480
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4970
        ;   Label: core_larva.cpp_CLarva_process_FUN_004c4970
    PUSH ESI                            ; 004c4971
    PUSH EDI                            ; 004c4972
    PUSH EBP                            ; 004c4973
    MOV EBP,ESP                         ; 004c4974
    SUB ESP,0x1e0                       ; 004c4976
    SUB EBP,0x7a                        ; 004c497c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c497f
    PUSH dword ptr [EBP + 0x92]         ; 004c4985
    PUSH EBX                            ; 004c498b
    CALL core_charactr.cpp_FUN_004259f0 ; 004c498c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c4991
    TEST EAX,EAX                        ; 004c4994
    JZ 0x004c4bd7                       ; 004c4996
        ;   XREF to: 004c4bd7 (CONDITIONAL_JUMP)  ; LAB_004c4bd7
    LEA EAX,[EBX + 0x23a4]              ; 004c499c
    FLD float ptr [EBP + 0x92]          ; 004c49a2
    MOV dword ptr [EAX + 0x8],0x0       ; 004c49a8
    LEA ESI,[EBX + 0x20]                ; 004c49af
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c49b2
    MOV dword ptr [EAX + 0x4],EDX       ; 004c49b5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c49b8
    MOV dword ptr [EAX],EDX             ; 004c49bb
    FMUL float ptr [EBX + 0xbc8c]       ; 004c49bd
    LEA EDI,[EBX + 0x150]               ; 004c49c3
    FSTP float ptr [EBP + 0x72]         ; 004c49c9
    FLD float ptr [EBP + 0x72]          ; 004c49cc
        ;   Label: LAB_004c49cc
    FLDZ                                ; 004c49cf
    FCOMPP                              ; 004c49d1
    FNSTSW AX                           ; 004c49d3
    SAHF                                ; 004c49d5
    JC 0x004c4da7                       ; 004c49d6
        ;   XREF to: 004c4da7 (CONDITIONAL_JUMP)  ; LAB_004c4da7
    FLD float ptr [EBX + 0xbc8c]        ; 004c49dc
    FLD float ptr [EBP + 0x92]          ; 004c49e2
    FMUL double ptr [0x005877f4]        ; 004c49e8 | DOUBLE_005877f4
    FMULP                               ; 004c49ee
    FMUL double ptr [0x005877fc]        ; 004c49f0 | DOUBLE_005877fc
    FLD float ptr [EBX + 0x23ac]        ; 004c49f6
    PUSH EDI                            ; 004c49fc
    FSTP float ptr [EBX + 0x242c]       ; 004c49fd
    FSTP float ptr [EBX + 0x2430]       ; 004c4a03
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004c4a09
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004c4a0e
    PUSH dword ptr [EBP + 0x92]         ; 004c4a11
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c4a17
    PUSH EBX                            ; 004c4a1a
    MOV dword ptr [EBP + 0x62],EAX      ; 004c4a1b
    MOV dword ptr [EBP + 0x5a],EAX      ; 004c4a1e
    CALL core_charactr.cpp_FUN_00428c00 ; 004c4a21
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c4a26
    TEST EAX,EAX                        ; 004c4a29
    JZ 0x004c517e                       ; 004c4a2b
        ;   XREF to: 004c517e (CONDITIONAL_JUMP)  ; LAB_004c517e
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004c4a31
    CMP EAX,0x2                         ; 004c4a37
    JNC 0x004c4de6                      ; 004c4a3a
        ;   XREF to: 004c4de6 (CONDITIONAL_JUMP)  ; LAB_004c4de6
    CMP EAX,0x1                         ; 004c4a40
    JNZ 0x004c4df1                      ; 004c4a43
        ;   XREF to: 004c4df1 (CONDITIONAL_JUMP)  ; LAB_004c4df1
    PUSH 0x1                            ; 004c4a49
        ;   Label: LAB_004c4a49
    PUSH 0x1                            ; 004c4a4b
    LEA EAX,[EBX + 0x150]               ; 004c4a4d
        ;   Label: LAB_004c4a4d
    PUSH EAX                            ; 004c4a53
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c4a54
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4a59
        ;   Label: LAB_004c4a59
    LEA EAX,[EBX + 0x23a4]              ; 004c4a5c
    MOV dword ptr [EAX + 0x8],0x0       ; 004c4a62
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c4a69
    MOV dword ptr [EAX + 0x4],EDX       ; 004c4a6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c4a6f
    MOV dword ptr [EAX],EDX             ; 004c4a72
    FLD float ptr [EBX + 0xbca0]        ; 004c4a74
        ;   Label: LAB_004c4a74
    FLDZ                                ; 004c4a7a
    FCOMPP                              ; 004c4a7c
    FNSTSW AX                           ; 004c4a7e
    SAHF                                ; 004c4a80
    JNC 0x004c4a95                      ; 004c4a81
        ;   XREF to: 004c4a95 (CONDITIONAL_JUMP)  ; LAB_004c4a95
    FLD float ptr [EBX + 0xbca0]        ; 004c4a83
    FSUB float ptr [EBP + 0x92]         ; 004c4a89
    FSTP float ptr [EBX + 0xbca0]       ; 004c4a8f
    CMP dword ptr [EBP + 0x5a],0x1      ; 004c4a95
        ;   Label: LAB_004c4a95
    JNZ 0x004c522e                      ; 004c4a99
        ;   XREF to: 004c522e (CONDITIONAL_JUMP)  ; LAB_004c522e
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 004c4a9f
    PUSH EDX                            ; 004c4aa5
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004c4aa6
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004c4aab
    TEST EAX,EAX                        ; 004c4aae
    JZ 0x004c51a7                       ; 004c4ab0
        ;   XREF to: 004c51a7 (CONDITIONAL_JUMP)  ; LAB_004c51a7
    PUSH EBX                            ; 004c4ab6
        ;   Label: LAB_004c4ab6
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004c4ab7
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c4abc
    TEST EAX,EAX                        ; 004c4abf
    JZ 0x004c4bb0                       ; 004c4ac1
        ;   XREF to: 004c4bb0 (CONDITIONAL_JUMP)  ; LAB_004c4bb0
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 004c4ac7
    TEST ECX,ECX                        ; 004c4acd
    JZ 0x004c4afb                       ; 004c4acf
        ;   XREF to: 004c4afb (CONDITIONAL_JUMP)  ; LAB_004c4afb
    PUSH ECX                            ; 004c4ad1
    MOV EDX,dword ptr [ECX + 0x14c]     ; 004c4ad2
    CALL dword ptr [EDX + 0xec]         ; 004c4ad8
    ADD ESP,0x4                         ; 004c4ade
    CMP EAX,EBX                         ; 004c4ae1
    JNZ 0x004c4afb                      ; 004c4ae3
        ;   XREF to: 004c4afb (CONDITIONAL_JUMP)  ; LAB_004c4afb
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004c4ae5
    PUSH ESI                            ; 004c4aeb
    MOV EDI,dword ptr [0x005be368]      ; 004c4aec | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 004c4af2 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004c4af3
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c4af8
    FLD float ptr [EBP + 0x92]          ; 004c4afb
        ;   Label: LAB_004c4afb
    FLD ST0                             ; 004c4b01
    FMUL double ptr [0x00587814]        ; 004c4b03 | DOUBLE_00587814
    FLD float ptr [EBX + 0x2424]        ; 004c4b09
    FXCH                                ; 004c4b0f
    FSUBR ST0,ST1                       ; 004c4b11
    LEA ESI,[EBX + 0x2420]              ; 004c4b13
    FSTP ST1                            ; 004c4b19
    FSTP float ptr [EBX + 0x2424]       ; 004c4b1b
    FLD float ptr [ESI]                 ; 004c4b21
    FMUL ST1                            ; 004c4b23
    FSTP float ptr [EBP + -0x7a]        ; 004c4b25
    FLD float ptr [ESI + 0x4]           ; 004c4b28
    FMUL ST1                            ; 004c4b2b
    LEA EAX,[EBX + 0x2414]              ; 004c4b2d
    FSTP float ptr [EBP + -0x76]        ; 004c4b33
    FMUL float ptr [ESI + 0x8]          ; 004c4b36
    LEA EDX,[EBX + 0x23a4]              ; 004c4b39
    FLD float ptr [EBP + -0x7a]         ; 004c4b3f
    FXCH                                ; 004c4b42
    FSTP float ptr [EBP + -0x72]        ; 004c4b44
    FADD float ptr [EAX]                ; 004c4b47
    FLD float ptr [EBP + -0x76]         ; 004c4b49
    FXCH                                ; 004c4b4c
    FSTP float ptr [EBP + -0xe]         ; 004c4b4e
    FADD float ptr [EAX + 0x4]          ; 004c4b51
    FLD float ptr [EBP + -0x72]         ; 004c4b54
    FXCH                                ; 004c4b57
    FSTP float ptr [EBP + -0xa]         ; 004c4b59
    FADD float ptr [EAX + 0x8]          ; 004c4b5c
    FLD float ptr [EBP + -0xe]          ; 004c4b5f
    FXCH                                ; 004c4b62
    FSTP float ptr [EBP + -0x6]         ; 004c4b64
    FADD float ptr [EDX]                ; 004c4b67
    FLD float ptr [EBP + -0xa]          ; 004c4b69
    FXCH                                ; 004c4b6c
    FSTP float ptr [EBP + -0x32]        ; 004c4b6e
    FADD float ptr [EDX + 0x4]          ; 004c4b71
    FLD float ptr [EBP + -0x6]          ; 004c4b74
    FXCH                                ; 004c4b77
    FSTP float ptr [EBP + -0x2e]        ; 004c4b79
    FADD float ptr [EDX + 0x8]          ; 004c4b7c
    FSTP float ptr [EBP + -0x2a]        ; 004c4b7f
    MOV dword ptr [EAX + 0x8],0x0       ; 004c4b82
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c4b89
    MOV dword ptr [EAX + 0x4],ECX       ; 004c4b8c
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c4b8f
    MOV dword ptr [EAX],ECX             ; 004c4b92
    MOV dword ptr [EDX + 0x8],0x0       ; 004c4b94
    LEA EAX,[EBP + -0x32]               ; 004c4b9b
    FLD float ptr [EDX + 0x8]           ; 004c4b9e
    PUSH EAX                            ; 004c4ba1
    FST float ptr [EDX + 0x4]           ; 004c4ba2
    PUSH EBX                            ; 004c4ba5
    FSTP float ptr [EDX]                ; 004c4ba6
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004c4ba8
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004c4bad
    PUSH EBX                            ; 004c4bb0
        ;   Label: LAB_004c4bb0
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004c4bb1
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c4bb6
    LEA EAX,[EBX + 0x150]               ; 004c4bb9
    PUSH EAX                            ; 004c4bbf
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004c4bc0
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c4bc5
    PUSH dword ptr [EBP + 0x92]         ; 004c4bc8
    PUSH EBX                            ; 004c4bce
    CALL core_charactr.cpp_FUN_0042a150 ; 004c4bcf
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c4bd4
    LEA ESP,[EBP + 0x7a]                ; 004c4bd7
        ;   Label: LAB_004c4bd7
    POP EBP                             ; 004c4bda
    POP EDI                             ; 004c4bdb
    POP ESI                             ; 004c4bdc
    POP EBX                             ; 004c4bdd
    RET                                 ; 004c4bde
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004c4bdf
        ;   Label: LAB_004c4bdf
    TEST EAX,EAX                        ; 004c4be5
    JZ 0x004c49cc                       ; 004c4be7
        ;   XREF to: 004c49cc (CONDITIONAL_JUMP)  ; LAB_004c49cc
    FLD float ptr [EAX + 0x20]          ; 004c4bed
    FSUB float ptr [ESI]                ; 004c4bf0
    FSTP float ptr [EBP + -0x4a]        ; 004c4bf2
    FLD float ptr [EAX + 0x24]          ; 004c4bf5
    FSUB float ptr [ESI + 0x4]          ; 004c4bf8
    LEA EDX,[EBP + -0x62]               ; 004c4bfb
    FSTP float ptr [EBP + -0x46]        ; 004c4bfe
    FLD float ptr [EAX + 0x28]          ; 004c4c01
    FSUB float ptr [ESI + 0x8]          ; 004c4c04
    LEA EAX,[EBP + -0x4a]               ; 004c4c07
    FSTP float ptr [EBP + -0x42]        ; 004c4c0a
    CMP EDX,EAX                         ; 004c4c0d
    JZ 0x004c4c23                       ; 004c4c0f
        ;   XREF to: 004c4c23 (CONDITIONAL_JUMP)  ; LAB_004c4c23
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004c4c11
    MOV dword ptr [EBP + -0x62],EAX     ; 004c4c14
    MOV EAX,dword ptr [EBP + -0x46]     ; 004c4c17
    MOV dword ptr [EBP + -0x5e],EAX     ; 004c4c1a
    MOV EAX,dword ptr [EBP + -0x42]     ; 004c4c1d
    MOV dword ptr [EBP + -0x5a],EAX     ; 004c4c20
    FLD float ptr [EBP + -0x5e]         ; 004c4c23
        ;   Label: LAB_004c4c23
    PUSH 0x40000000                     ; 004c4c26
    FADD float ptr [0x0058781c]         ; 004c4c2b | FLOAT_0058781c
    PUSH 0xc0000000                     ; 004c4c31
    FSTP float ptr [EBP + -0x5e]        ; 004c4c36
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004c4c39
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c4c3e
    ADD ESP,0x8                         ; 004c4c41
    FLD float ptr [EBP + 0x76]          ; 004c4c44
    PUSH 0x40000000                     ; 004c4c47
    FADD float ptr [EBP + -0x62]        ; 004c4c4c
    PUSH 0xc0000000                     ; 004c4c4f
    FSTP float ptr [EBP + -0x62]        ; 004c4c54
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004c4c57
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    FLD double ptr [0x00587824]         ; 004c4c5c | DOUBLE_00587824
    FLD ST0                             ; 004c4c62
    MOV dword ptr [EBP + 0x76],EAX      ; 004c4c64
    FSIN                                ; 004c4c67
    FLD double ptr [0x0058782c]         ; 004c4c69 | DOUBLE_0058782c
    FPTAN                               ; 004c4c6f
    FSTP ST0                            ; 004c4c71
    FLD float ptr [EBP + 0x76]          ; 004c4c73
    FADD float ptr [EBP + -0x5a]        ; 004c4c76
    FST float ptr [EBP + -0x5a]         ; 004c4c79
    FLD float ptr [EBP + -0x62]         ; 004c4c7c
    CALL crt_math.c_atan2_FUN_00566c81  ; 004c4c7f
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FLD float ptr [EBP + -0x5a]         ; 004c4c84
    FMUL ST0                            ; 004c4c87
    FLD float ptr [EBP + -0x62]         ; 004c4c89
    FMUL ST0                            ; 004c4c8c
    FADDP                               ; 004c4c8e
    FSQRT                               ; 004c4c90
    FXCH ST4                            ; 004c4c92
    FCOS                                ; 004c4c94
    FLD ST1                             ; 004c4c96
    FSIN                                ; 004c4c98
    FXCH ST2                            ; 004c4c9a
    FCOS                                ; 004c4c9c
    FXCH ST5                            ; 004c4c9e
    FSTP double ptr [EBP + 0x2a]        ; 004c4ca0
    FXCH ST2                            ; 004c4ca3
    FMUL double ptr [EBP + 0x2a]        ; 004c4ca5
    FSUB float ptr [EBP + -0x5e]        ; 004c4ca8
    FLD ST2                             ; 004c4cab
    FMUL float ptr [0x0058781c]         ; 004c4cad | FLOAT_0058781c
    FLD double ptr [EBP + 0x2a]         ; 004c4cb3
    FMUL double ptr [0x00587814]        ; 004c4cb6 | DOUBLE_00587814
    FXCH                                ; 004c4cbc
    FMUL ST4                            ; 004c4cbe
    FXCH                                ; 004c4cc0
    FMUL double ptr [EBP + 0x2a]        ; 004c4cc2
    FXCH                                ; 004c4cc5
    FMULP ST2                           ; 004c4cc7
    FXCH ST2                            ; 004c4cc9
    FMUL ST3                            ; 004c4ccb
    ADD ESP,0x8                         ; 004c4ccd
    FXCH ST5                            ; 004c4cd0
    FMULP ST3                           ; 004c4cd2
    FXCH                                ; 004c4cd4
    FSTP float ptr [EBP + 0x66]         ; 004c4cd6
    FXCH ST2                            ; 004c4cd9
    FCHS                                ; 004c4cdb
    FSTP float ptr [EBP + -0x22]        ; 004c4cdd
    FXCH                                ; 004c4ce0
    FST float ptr [EBP + 0x6a]          ; 004c4ce2
    FLDZ                                ; 004c4ce5
    FXCH ST3                            ; 004c4ce7
    FSTP float ptr [EBP + -0x26]        ; 004c4ce9
    FXCH                                ; 004c4cec
    FSTP float ptr [EBP + -0x1e]        ; 004c4cee
    FXCH                                ; 004c4cf1
    FCOMPP                              ; 004c4cf3
    FNSTSW AX                           ; 004c4cf5
    SAHF                                ; 004c4cf7
    JNC 0x004c49cc                      ; 004c4cf8
        ;   XREF to: 004c49cc (CONDITIONAL_JUMP)  ; LAB_004c49cc
    FLD float ptr [EBP + 0x66]          ; 004c4cfe
    FDIV float ptr [EBP + 0x6a]         ; 004c4d01
    FSQRT                               ; 004c4d04
    FLD float ptr [EBP + -0x26]         ; 004c4d06
    FXCH                                ; 004c4d09
    FSTP float ptr [EBP + 0x6e]         ; 004c4d0b
    FMUL float ptr [EBP + 0x6e]         ; 004c4d0e
    FLD float ptr [EBP + -0x22]         ; 004c4d11
    FMUL float ptr [EBP + 0x6e]         ; 004c4d14
    FLD float ptr [EBP + -0x1e]         ; 004c4d17
    FMUL float ptr [EBP + 0x6e]         ; 004c4d1a
    LEA EDX,[EBP + -0x26]               ; 004c4d1d
    LEA EAX,[EBP + -0x2]                ; 004c4d20
    FXCH ST2                            ; 004c4d23
    FSTP float ptr [EBP + -0x2]         ; 004c4d25
    FSTP float ptr [EBP + 0x2]          ; 004c4d28
    FSTP float ptr [EBP + 0x6]          ; 004c4d2b
    CMP EDX,EAX                         ; 004c4d2e
    JZ 0x004c4d44                       ; 004c4d30
        ;   XREF to: 004c4d44 (CONDITIONAL_JUMP)  ; LAB_004c4d44
    MOV EAX,dword ptr [EBP + -0x2]      ; 004c4d32
    MOV dword ptr [EBP + -0x26],EAX     ; 004c4d35
    MOV EAX,dword ptr [EBP + 0x2]       ; 004c4d38
    MOV dword ptr [EBP + -0x22],EAX     ; 004c4d3b
    MOV EAX,dword ptr [EBP + 0x6]       ; 004c4d3e
    MOV dword ptr [EBP + -0x1e],EAX     ; 004c4d41
    MOV dword ptr [EBP + 0xffffff76],0x3f800000 ; 004c4d44
        ;   Label: LAB_004c4d44
    LEA EAX,[EBP + 0xffffff6e]          ; 004c4d4e
    PUSH EAX                            ; 004c4d54
    LEA EAX,[EBP + 0x16]                ; 004c4d55
    PUSH EAX                            ; 004c4d58
    MOV ECX,0x3f000000                  ; 004c4d59
    XOR EDX,EDX                         ; 004c4d5e
    PUSH EBX                            ; 004c4d60
    MOV dword ptr [EBP + 0xffffff6e],EDX ; 004c4d61
    MOV dword ptr [EBP + 0xffffff72],ECX ; 004c4d67
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c4d6d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004c4d72
    PUSH 0x0                            ; 004c4d75
    PUSH 0x2                            ; 004c4d77
    LEA EAX,[EBP + -0x26]               ; 004c4d79
    PUSH EAX                            ; 004c4d7c
    LEA EAX,[EBP + 0x16]                ; 004c4d7d
    PUSH EAX                            ; 004c4d80
    MOV EDX,dword ptr [0x005b80f0]      ; 004c4d81 | g_CFireEffect_PTR_005b80f0
    PUSH EDX                            ; 004c4d87
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_0048b270 ; 004c4d88
        ;   XREF to: 0048b270 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_0048b270(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 004c4d8d
    PUSH 0x587784                       ; 004c4d90 | = "larva-blow1.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c4d95
    PUSH EBX                            ; 004c4d9b
    CALL dword ptr [EAX + 0x24]         ; 004c4d9c
    ADD ESP,0x8                         ; 004c4d9f
    JMP 0x004c49cc                      ; 004c4da2
        ;   XREF to: 004c49cc (UNCONDITIONAL_JUMP)  ; LAB_004c49cc
    LEA EAX,[EBP + 0x72]                ; 004c4da7
        ;   Label: LAB_004c4da7
    PUSH EAX                            ; 004c4daa
    PUSH EDI                            ; 004c4dab
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004c4dac
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004c4db1
    CMP EAX,0x64                        ; 004c4db4
    JZ 0x004c4bdf                       ; 004c4db7
        ;   XREF to: 004c4bdf (CONDITIONAL_JUMP)  ; LAB_004c4bdf
    JMP 0x004c49cc                      ; 004c4dbd
        ;   XREF to: 004c49cc (UNCONDITIONAL_JUMP)  ; LAB_004c49cc
    PUSH 0x1                            ; 004c4dc2
        ;   Label: LAB_004c4dc2
    PUSH 0x0                            ; 004c4dc4
    PUSH EDI                            ; 004c4dc6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c4dc7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4dcc
    PUSH EBX                            ; 004c4dcf
    PUSH 0x587794                       ; 004c4dd0 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005ad350]      ; 004c4dd5 | g_CConsole_PTR_005ad350
    PUSH ESI                            ; 004c4ddb | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c4ddc
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004c4a59                      ; 004c4de1
        ;   XREF to: 004c4a59 (UNCONDITIONAL_JUMP)  ; LAB_004c4a59
    JBE 0x004c4a49                      ; 004c4de6
        ;   XREF to: 004c4a49 (CONDITIONAL_JUMP)  ; LAB_004c4a49
        ;   Label: LAB_004c4de6
    CMP EAX,0x3                         ; 004c4dec
    JZ 0x004c4dc2                       ; 004c4def
        ;   XREF to: 004c4dc2 (CONDITIONAL_JUMP)  ; LAB_004c4dc2
    PUSH 0x1                            ; 004c4df1
        ;   Label: LAB_004c4df1
    PUSH 0x0                            ; 004c4df3
    JMP 0x004c4a4d                      ; 004c4df5
        ;   XREF to: 004c4a4d (UNCONDITIONAL_JUMP)  ; LAB_004c4a4d
    MOV EAX,dword ptr [EBX + 0xbc90]    ; 004c4dfa
        ;   Label: LAB_004c4dfa
    TEST EAX,EAX                        ; 004c4e00
    JNZ 0x004c4a74                      ; 004c4e02
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    CMP dword ptr [EBX + 0xdc],0x0      ; 004c4e08
    JNZ 0x004c4a74                      ; 004c4e0f
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH EAX                            ; 004c4e15
    LEA EAX,[EBP + -0x3e]               ; 004c4e16
    PUSH EAX                            ; 004c4e19
    PUSH EDI                            ; 004c4e1a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004c4e1b
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004c4e20
    PUSH EAX                            ; 004c4e23
    LEA EAX,[EBP + -0x56]               ; 004c4e24
    PUSH EAX                            ; 004c4e27
    PUSH EBX                            ; 004c4e28
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c4e29
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004c4e2e
    PUSH 0x1                            ; 004c4e31
    LEA EAX,[EBP + -0x56]               ; 004c4e33
    PUSH EAX                            ; 004c4e36
    MOV ECX,dword ptr [0x005b96c4]      ; 004c4e37 | g_CGore_PTR_005b96c4
    PUSH ECX                            ; 004c4e3d
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 004c4e3e
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004c4e43
    MOV dword ptr [EBX + 0xbc90],0x1    ; 004c4e46
    JMP 0x004c4a74                      ; 004c4e50
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH dword ptr [EBP + 0x92]         ; 004c4e55
        ;   Label: LAB_004c4e55
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c4e5b
    PUSH EBX                            ; 004c4e61
    CALL dword ptr [EAX + 0x13c]        ; 004c4e62
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004c4e68
    ADD ESP,0x8                         ; 004c4e6e
    TEST EDX,EDX                        ; 004c4e71
    JNZ 0x004c4e9e                      ; 004c4e73
        ;   XREF to: 004c4e9e (CONDITIONAL_JUMP)  ; LAB_004c4e9e
    PUSH dword ptr [EBP + 0x92]         ; 004c4e75
    PUSH EBX                            ; 004c4e7b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004c4e7c
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c4e81
    TEST EAX,EAX                        ; 004c4e84
    JZ 0x004c4a74                       ; 004c4e86
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH 0x1                            ; 004c4e8c
    PUSH 0x1                            ; 004c4e8e
    PUSH EDI                            ; 004c4e90
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c4e91
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4e96
    JMP 0x004c4a74                      ; 004c4e99
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    MOV EAX,EDX                         ; 004c4e9e
        ;   Label: LAB_004c4e9e
    FLD float ptr [EAX + 0x20]          ; 004c4ea0
    FSUB float ptr [ESI]                ; 004c4ea3
    FSTP float ptr [EBP + 0xffffff62]   ; 004c4ea5
    FLD float ptr [EAX + 0x24]          ; 004c4eab
    FSUB float ptr [ESI + 0x4]          ; 004c4eae
    FST float ptr [EBP + 0xffffff66]    ; 004c4eb1
    FMUL float ptr [EBP + 0xffffff66]   ; 004c4eb7
    FLD float ptr [EBP + 0xffffff62]    ; 004c4ebd
    FMUL ST0                            ; 004c4ec3
    FLD float ptr [EAX + 0x28]          ; 004c4ec5
    FSUB float ptr [ESI + 0x8]          ; 004c4ec8
    FXCH                                ; 004c4ecb
    FADDP ST2,ST0                       ; 004c4ecd
    FST float ptr [EBP + 0xffffff6a]    ; 004c4ecf
    FMUL float ptr [EBP + 0xffffff6a]   ; 004c4ed5
    FADDP                               ; 004c4edb
    FSTP float ptr [EBP + 0x36]         ; 004c4edd
    MOV EAX,dword ptr [EBP + 0x36]      ; 004c4ee0
    MOV ECX,dword ptr [0x01c7070c]      ; 004c4ee3 | CVector3f_01c70708.y
    SAR EAX,0x1                         ; 004c4ee9
    ADD EAX,ECX                         ; 004c4eeb
    MOV dword ptr [EBP + 0x5e],EAX      ; 004c4eed
    LEA EAX,[EBP + 0xffffff62]          ; 004c4ef0
    PUSH EAX                            ; 004c4ef6
    LEA EAX,[EBP + 0xa]                 ; 004c4ef7
    PUSH EAX                            ; 004c4efa
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004c4efb
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0xe]           ; 004c4f00
    ADD ESP,0x8                         ; 004c4f03
    FSUB float ptr [EBX + 0x34]         ; 004c4f06
    SUB ESP,0x4                         ; 004c4f09
    FSTP float ptr [ESP]                ; 004c4f0c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004c4f0f
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c4f14
    FLD float ptr [EBP + 0x76]          ; 004c4f17
    FABS                                ; 004c4f1a
    ADD ESP,0x4                         ; 004c4f1c
    FCOMP double ptr [0x005877f4]       ; 004c4f1f | DOUBLE_005877f4
    FNSTSW AX                           ; 004c4f25
    SAHF                                ; 004c4f27
    JNC 0x004c4f7b                      ; 004c4f28
        ;   XREF to: 004c4f7b (CONDITIONAL_JUMP)  ; LAB_004c4f7b
    FLD float ptr [EBP + 0x5e]          ; 004c4f2a
    FCOMP double ptr [0x00587804]       ; 004c4f2d | DOUBLE_00587804
    FNSTSW AX                           ; 004c4f33
    SAHF                                ; 004c4f35
    JA 0x004c4f7b                       ; 004c4f36
        ;   XREF to: 004c4f7b (CONDITIONAL_JUMP)  ; LAB_004c4f7b
    FLD float ptr [EBX + 0xbca0]        ; 004c4f38
    FLDZ                                ; 004c4f3e
    FCOMPP                              ; 004c4f40
    FNSTSW AX                           ; 004c4f42
    SAHF                                ; 004c4f44
    JC 0x004c4a74                       ; 004c4f45
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH 0x1                            ; 004c4f4b
    PUSH 0x2                            ; 004c4f4d
    PUSH EDI                            ; 004c4f4f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c4f50
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4f55
    PUSH 0x41f00000                     ; 004c4f58
    PUSH 0x41700000                     ; 004c4f5d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004c4f62
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c4f67
    ADD ESP,0x8                         ; 004c4f6a
    MOV EAX,dword ptr [EBP + 0x76]      ; 004c4f6d
    MOV dword ptr [EBX + 0xbca0],EAX    ; 004c4f70
    JMP 0x004c4a74                      ; 004c4f76
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH 0x1                            ; 004c4f7b
        ;   Label: LAB_004c4f7b
    PUSH 0x1                            ; 004c4f7d
    LEA EAX,[EBX + 0x150]               ; 004c4f7f
    PUSH EAX                            ; 004c4f85
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c4f86
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4f8b
    JMP 0x004c4a74                      ; 004c4f8e
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH dword ptr [EBP + 0x92]         ; 004c4f93
        ;   Label: LAB_004c4f93
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c4f99
    PUSH EBX                            ; 004c4f9f
    CALL dword ptr [EAX + 0x13c]        ; 004c4fa0
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004c4fa6
    ADD ESP,0x8                         ; 004c4fac
    TEST ESI,ESI                        ; 004c4faf
    JNZ 0x004c4fdb                      ; 004c4fb1
        ;   XREF to: 004c4fdb (CONDITIONAL_JUMP)  ; LAB_004c4fdb
    PUSH dword ptr [EBP + 0x92]         ; 004c4fb3
    PUSH EBX                            ; 004c4fb9
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004c4fba
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c4fbf
    TEST EAX,EAX                        ; 004c4fc2
    JNZ 0x004c4a74                      ; 004c4fc4
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH 0x1                            ; 004c4fca
    PUSH ESI                            ; 004c4fcc
    PUSH EDI                            ; 004c4fcd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c4fce
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4fd3
    JMP 0x004c4a74                      ; 004c4fd6
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    MOV EAX,[0x0059fa6c]                ; 004c4fdb | FLOAT_0059fa6c
        ;   Label: LAB_004c4fdb
    MOV dword ptr [EBP + 0x52],EAX      ; 004c4fe0
    LEA EAX,[EBX + 0x23a4]              ; 004c4fe3
    MOV dword ptr [EAX + 0x8],0x0       ; 004c4fe9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c4ff0
    MOV dword ptr [EAX + 0x4],EDX       ; 004c4ff3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c4ff6
    MOV dword ptr [EAX],EDX             ; 004c4ff9
    XOR EAX,EAX                         ; 004c4ffb
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 004c4ffd
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 004c5003
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c5009
    PUSH 0x3e32b8c2                     ; 004c500c
    MOV dword ptr [EBP + -0x7e],EAX     ; 004c5011
    LEA EAX,[EBP + 0xffffff7a]          ; 004c5014
    PUSH 0x3f000000                     ; 004c501a
    PUSH EAX                            ; 004c501f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004c5020
    PUSH EAX                            ; 004c5026
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004c5027
    CALL dword ptr [EDX + 0xbc]         ; 004c502d
    ADD ESP,0x4                         ; 004c5033
    PUSH EAX                            ; 004c5036
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004c5037
    ADD EAX,0x20                        ; 004c503d
    PUSH EAX                            ; 004c5040
    PUSH EBX                            ; 004c5041
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004c5042
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004c5047
    TEST EAX,EAX                        ; 004c504a
    JL 0x004c5157                       ; 004c504c
        ;   XREF to: 004c5157 (CONDITIONAL_JUMP)  ; LAB_004c5157
    FLD float ptr [EBX + 0xbca0]        ; 004c5052
        ;   Label: LAB_004c5052
    FLDZ                                ; 004c5058
    FCOMPP                              ; 004c505a
    FNSTSW AX                           ; 004c505c
    SAHF                                ; 004c505e
    JC 0x004c4a74                       ; 004c505f
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004c5065
    LEA EDX,[EBX + 0x20]                ; 004c506b
    FLD float ptr [EAX + 0x20]          ; 004c506e
    FSUB float ptr [EDX]                ; 004c5071
    FSTP float ptr [EBP + -0x6e]        ; 004c5073
    FLD float ptr [EAX + 0x24]          ; 004c5076
    FSUB float ptr [EDX + 0x4]          ; 004c5079
    FST float ptr [EBP + -0x6a]         ; 004c507c
    FMUL float ptr [EBP + -0x6a]        ; 004c507f
    FLD float ptr [EBP + -0x6e]         ; 004c5082
    FMUL ST0                            ; 004c5085
    FLD float ptr [EAX + 0x28]          ; 004c5087
    FSUB float ptr [EDX + 0x8]          ; 004c508a
    FXCH                                ; 004c508d
    FADDP ST2,ST0                       ; 004c508f
    FST float ptr [EBP + -0x66]         ; 004c5091
    FMUL float ptr [EBP + -0x66]        ; 004c5094
    FADDP                               ; 004c5097
    FSTP float ptr [EBP + 0x46]         ; 004c5099
    MOV EAX,dword ptr [EBP + 0x46]      ; 004c509c
    MOV ESI,dword ptr [0x01c7070c]      ; 004c509f | CVector3f_01c70708.y
    SAR EAX,0x1                         ; 004c50a5
    ADD EAX,ESI                         ; 004c50a7
    MOV dword ptr [EBP + 0x4a],EAX      ; 004c50a9
    FLD float ptr [EBP + 0x4a]          ; 004c50ac
    FCOMP float ptr [EBX + 0xbc9c]      ; 004c50af
    FNSTSW AX                           ; 004c50b5
    SAHF                                ; 004c50b7
    JNC 0x004c4a74                      ; 004c50b8
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    LEA EAX,[EBP + -0x6e]               ; 004c50be
    PUSH EAX                            ; 004c50c1
    LEA EAX,[EBP + -0x1a]               ; 004c50c2
    PUSH EAX                            ; 004c50c5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004c50c6
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004c50cb
    LEA EAX,[EBP + -0x6e]               ; 004c50cd
    ADD ESP,0x8                         ; 004c50d0
    CMP EAX,EDX                         ; 004c50d3
    JZ 0x004c50e8                       ; 004c50d5
        ;   XREF to: 004c50e8 (CONDITIONAL_JUMP)  ; LAB_004c50e8
    MOV EAX,dword ptr [EDX]             ; 004c50d7
    MOV dword ptr [EBP + -0x6e],EAX     ; 004c50d9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004c50dc
    MOV dword ptr [EBP + -0x6a],EAX     ; 004c50df
    MOV EAX,dword ptr [EDX + 0x8]       ; 004c50e2
    MOV dword ptr [EBP + -0x66],EAX     ; 004c50e5
    PUSH dword ptr [EBP + -0x6a]        ; 004c50e8
        ;   Label: LAB_004c50e8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004c50eb
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c50f0
    ADD ESP,0x4                         ; 004c50f3
    FLD float ptr [EBP + 0x76]          ; 004c50f6
    PUSH dword ptr [EBX + 0x34]         ; 004c50f9
    FSTP float ptr [EBP + 0x4e]         ; 004c50fc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004c50ff
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c5104
    ADD ESP,0x4                         ; 004c5107
    FLD float ptr [EBP + 0x76]          ; 004c510a
    FSUBR float ptr [EBP + 0x4e]        ; 004c510d
    SUB ESP,0x4                         ; 004c5110
    FSTP float ptr [ESP]                ; 004c5113
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004c5116
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c511b
    FLD float ptr [EBP + 0x76]          ; 004c511e
    FABS                                ; 004c5121
    ADD ESP,0x4                         ; 004c5123
    FCOMP double ptr [0x005877f4]       ; 004c5126 | DOUBLE_005877f4
    FNSTSW AX                           ; 004c512c
    SAHF                                ; 004c512e
    JNC 0x004c4a74                      ; 004c512f
        ;   XREF to: 004c4a74 (CONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH 0x1                            ; 004c5135
    PUSH 0x2                            ; 004c5137
    LEA EAX,[EBX + 0x150]               ; 004c5139
    PUSH EAX                            ; 004c513f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c5140
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5145
    MOV dword ptr [EBX + 0xbca0],0x40c00000 ; 004c5148
    JMP 0x004c4a74                      ; 004c5152
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    PUSH EBX                            ; 004c5157
        ;   Label: LAB_004c5157
    PUSH 0x5877be                       ; 004c5158 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004c515d | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004c5163 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c5164
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 004c5169
    PUSH 0x1                            ; 004c516c
    PUSH 0x0                            ; 004c516e
    PUSH EDI                            ; 004c5170
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004c5171
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c5176
    JMP 0x004c5052                      ; 004c5179
        ;   XREF to: 004c5052 (UNCONDITIONAL_JUMP)  ; LAB_004c5052
    MOV EDX,dword ptr [EBP + 0x62]      ; 004c517e
        ;   Label: LAB_004c517e
    CMP EDX,0x1                         ; 004c5181
    JNC 0x004c5193                      ; 004c5184
        ;   XREF to: 004c5193 (CONDITIONAL_JUMP)  ; LAB_004c5193
    TEST EDX,EDX                        ; 004c5186
    JZ 0x004c4e55                       ; 004c5188
        ;   XREF to: 004c4e55 (CONDITIONAL_JUMP)  ; LAB_004c4e55
    JMP 0x004c4a74                      ; 004c518e
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    JBE 0x004c4f93                      ; 004c5193
        ;   XREF to: 004c4f93 (CONDITIONAL_JUMP)  ; LAB_004c4f93
        ;   Label: LAB_004c5193
    CMP EDX,0x5                         ; 004c5199
    JZ 0x004c4dfa                       ; 004c519c
        ;   XREF to: 004c4dfa (CONDITIONAL_JUMP)  ; LAB_004c4dfa
    JMP 0x004c4a74                      ; 004c51a2
        ;   XREF to: 004c4a74 (UNCONDITIONAL_JUMP)  ; LAB_004c4a74
    FLD float ptr [EBX + 0x2614]        ; 004c51a7
        ;   Label: LAB_004c51a7
    FLDLN2                              ; 004c51ad
    FXCH                                ; 004c51af
    FYL2X                               ; 004c51b1
    FMUL double ptr [0x0058780c]        ; 004c51b3 | DOUBLE_0058780c
    FLD1                                ; 004c51b9
    FLDL2E                              ; 004c51bb
    FMUL ST2                            ; 004c51bd
    FST ST2                             ; 004c51bf
    FPREM                               ; 004c51c1
    F2XM1                               ; 004c51c3
    FADDP                               ; 004c51c5
    FSCALE                              ; 004c51c7
    FSTP ST1                            ; 004c51c9
    PUSH 0x3f8147ae                     ; 004c51cb
    PUSH 0x3f7d70a4                     ; 004c51d0
    FSTP double ptr [EBP + 0x22]        ; 004c51d5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004c51d8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004c51dd
    ADD ESP,0x8                         ; 004c51e0
    FLD float ptr [EBP + 0x76]          ; 004c51e3
    FMUL double ptr [EBP + 0x22]        ; 004c51e6
    SUB ESP,0x8                         ; 004c51e9
    FSTP double ptr [ESP]               ; 004c51ec
    SUB ESP,0x8                         ; 004c51ef
    FLD float ptr [EBX + 0x2614]        ; 004c51f2
    FSTP double ptr [ESP]               ; 004c51f8
    PUSH 0x5877df                       ; 004c51fb | = "slime.wav @%f *%f"
    LEA EAX,[EBP + 0xfffffe9a]          ; 004c5200
    PUSH EAX                            ; 004c5206
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c5207
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x18                        ; 004c520c
    LEA EAX,[EBP + 0xfffffe9a]          ; 004c520f
    PUSH EAX                            ; 004c5215
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004c5216
    PUSH EBX                            ; 004c521c
    CALL dword ptr [EDX + 0x28]         ; 004c521d
    ADD ESP,0x8                         ; 004c5220
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 004c5223
    JMP 0x004c4ab6                      ; 004c5229
        ;   XREF to: 004c4ab6 (UNCONDITIONAL_JUMP)  ; LAB_004c4ab6
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 004c522e
        ;   Label: LAB_004c522e
    PUSH EAX                            ; 004c5234
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004c5235
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 004c523a
    JMP 0x004c4ab6                      ; 004c523d
        ;   XREF to: 004c4ab6 (UNCONDITIONAL_JUMP)  ; LAB_004c4ab6

