; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x1f0]:1  local_1f0
; CVector3f        Stack[-0x128]:12  local_128
; CVector3f        Stack[-0x11c]:12  local_11c
; float            Stack[-0x108]:4  local_108
; float            Stack[-0x104]:4  local_104
; float            Stack[-0x100]:4  local_100
; float            Stack[-0xfc]:4  local_fc
; CVector3f        Stack[-0xf8]:12  local_f8
; float            Stack[-0xec]:4  local_ec
; float            Stack[-0xe8]:4  local_e8
; float            Stack[-0xe4]:4  local_e4
; CVector3f        Stack[-0xe0]:12  local_e0
; float            Stack[-0xd4]:4  local_d4
; float            Stack[-0xd0]:4  local_d0
; float            Stack[-0xcc]:4  local_cc
; CVector3f        Stack[-0xc8]:12  local_c8
; CVector3f        Stack[-0xbc]:12  local_bc
; CVector3f        Stack[-0xb0]:12  local_b0
; CVector3f        Stack[-0xa4]:12  local_a4
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; CVector3f        Stack[-0x74]:12  local_74
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; uint             Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; uint             Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_larva_blow1_wav_00630ee5
;   TerminatedCString s_s_confused_while_walking_00630ef5
;   TerminatedCString s_s_gave_up_chase_I_m_conf_00630f1f
;   TerminatedCString s_slime_wav_f_f_00630f40
;   double DOUBLE_00630f53 = 0.392699081687500
;   double DOUBLE_00630f5b = 3
;   double DOUBLE_00630f63 = 12
;   double DOUBLE_00630f6b = -0.200000000000000
;   double DOUBLE_00630f73 = 32
;   float FLOAT_00630f7b = 2
;   double DOUBLE_00630f83 = -0.523598775583333
;   double DOUBLE_00630f8b = 0.523598775583333
;   float FLOAT_0066071c = 20
;   CConsole* g_CConsolePtr = 0083b1a4
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0
;   core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0
;   core_gore.cpp_CGore_createBloodPool_FUN_004ede30
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503080
        ;   Label: core_larva.cpp_CLarva_process_FUN_00503080
    PUSH ESI                            ; 00503081
    PUSH EDI                            ; 00503082
    PUSH EBP                            ; 00503083
    MOV EBP,ESP                         ; 00503084
    SUB ESP,0x1e0                       ; 00503086
    SUB EBP,0x7a                        ; 0050308c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0050308f
    PUSH dword ptr [EBP + 0x92]         ; 00503095
    PUSH EBX                            ; 0050309b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0050309c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005030a1
    TEST EAX,EAX                        ; 005030a4
    JZ 0x005032e7                       ; 005030a6
        ;   XREF to: 005032e7 (CONDITIONAL_JUMP)  ; LAB_005032e7
    LEA EAX,[EBX + 0x23ac]              ; 005030ac
    FLD float ptr [EBP + 0x92]          ; 005030b2
    MOV dword ptr [EAX + 0x8],0x0       ; 005030b8
    LEA ESI,[EBX + 0x20]                ; 005030bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 005030c2
    MOV dword ptr [EAX + 0x4],EDX       ; 005030c5
    MOV EDX,dword ptr [EAX + 0x4]       ; 005030c8
    MOV dword ptr [EAX],EDX             ; 005030cb
    FMUL float ptr [EBX + 0xbe24]       ; 005030cd
    LEA EDI,[EBX + 0x158]               ; 005030d3
    FSTP float ptr [EBP + 0x72]         ; 005030d9
    FLD float ptr [EBP + 0x72]          ; 005030dc
        ;   Label: LAB_005030dc
    FLDZ                                ; 005030df
    FCOMPP                              ; 005030e1
    FNSTSW AX                           ; 005030e3
    SAHF                                ; 005030e5
    JC 0x005034b7                       ; 005030e6
        ;   XREF to: 005034b7 (CONDITIONAL_JUMP)  ; LAB_005034b7
    FLD float ptr [EBX + 0xbe24]        ; 005030ec
    FLD float ptr [EBP + 0x92]          ; 005030f2
    FMUL double ptr [0x00630f53]        ; 005030f8 | DOUBLE_00630f53
    FMULP                               ; 005030fe
    FMUL double ptr [0x00630f5b]        ; 00503100 | DOUBLE_00630f5b
    FLD float ptr [EBX + 0x23b4]        ; 00503106
    PUSH EDI                            ; 0050310c
    FSTP float ptr [EBX + 0x2434]       ; 0050310d
    FSTP float ptr [EBX + 0x2438]       ; 00503113
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00503119
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0050311e
    PUSH dword ptr [EBP + 0x92]         ; 00503121
    MOV EAX,dword ptr [EAX + 0x24]      ; 00503127
    PUSH EBX                            ; 0050312a
    MOV dword ptr [EBP + 0x62],EAX      ; 0050312b
    MOV dword ptr [EBP + 0x5a],EAX      ; 0050312e
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 00503131
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00503136
    TEST EAX,EAX                        ; 00503139
    JZ 0x0050388e                       ; 0050313b
        ;   XREF to: 0050388e (CONDITIONAL_JUMP)  ; LAB_0050388e
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00503141
    CMP EAX,0x2                         ; 00503147
    JNC 0x005034f6                      ; 0050314a
        ;   XREF to: 005034f6 (CONDITIONAL_JUMP)  ; LAB_005034f6
    CMP EAX,0x1                         ; 00503150
    JNZ 0x00503501                      ; 00503153
        ;   XREF to: 00503501 (CONDITIONAL_JUMP)  ; LAB_00503501
    PUSH 0x1                            ; 00503159
        ;   Label: LAB_00503159
    PUSH 0x1                            ; 0050315b
    LEA EAX,[EBX + 0x158]               ; 0050315d
        ;   Label: LAB_0050315d
    PUSH EAX                            ; 00503163
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503164
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00503169
        ;   Label: LAB_00503169
    LEA EAX,[EBX + 0x23ac]              ; 0050316c
    MOV dword ptr [EAX + 0x8],0x0       ; 00503172
    MOV EDX,dword ptr [EAX + 0x8]       ; 00503179
    MOV dword ptr [EAX + 0x4],EDX       ; 0050317c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050317f
    MOV dword ptr [EAX],EDX             ; 00503182
    FLD float ptr [EBX + 0xbe38]        ; 00503184
        ;   Label: LAB_00503184
    FLDZ                                ; 0050318a
    FCOMPP                              ; 0050318c
    FNSTSW AX                           ; 0050318e
    SAHF                                ; 00503190
    JNC 0x005031a5                      ; 00503191
        ;   XREF to: 005031a5 (CONDITIONAL_JUMP)  ; LAB_005031a5
    FLD float ptr [EBX + 0xbe38]        ; 00503193
    FSUB float ptr [EBP + 0x92]         ; 00503199
    FSTP float ptr [EBX + 0xbe38]       ; 0050319f
    CMP dword ptr [EBP + 0x5a],0x1      ; 005031a5
        ;   Label: LAB_005031a5
    JNZ 0x0050393e                      ; 005031a9
        ;   XREF to: 0050393e (CONDITIONAL_JUMP)  ; LAB_0050393e
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 005031af
    PUSH EDX                            ; 005031b5
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005031b6
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005031bb
    TEST EAX,EAX                        ; 005031be
    JZ 0x005038b7                       ; 005031c0
        ;   XREF to: 005038b7 (CONDITIONAL_JUMP)  ; LAB_005038b7
    PUSH EBX                            ; 005031c6
        ;   Label: LAB_005031c6
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 005031c7
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005031cc
    TEST EAX,EAX                        ; 005031cf
    JZ 0x005032c0                       ; 005031d1
        ;   XREF to: 005032c0 (CONDITIONAL_JUMP)  ; LAB_005032c0
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005031d7
    TEST ECX,ECX                        ; 005031dd
    JZ 0x0050320b                       ; 005031df
        ;   XREF to: 0050320b (CONDITIONAL_JUMP)  ; LAB_0050320b
    PUSH ECX                            ; 005031e1
    MOV EDX,dword ptr [ECX + 0x154]     ; 005031e2
    CALL dword ptr [EDX + 0x108]        ; 005031e8
    ADD ESP,0x4                         ; 005031ee
    CMP EAX,EBX                         ; 005031f1
    JNZ 0x0050320b                      ; 005031f3
        ;   XREF to: 0050320b (CONDITIONAL_JUMP)  ; LAB_0050320b
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005031f5
    PUSH ESI                            ; 005031fb
    MOV EDI,dword ptr [0x006810c8]      ; 005031fc | g_CDemonSetPtr
    PUSH EDI                            ; 00503202 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00503203
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00503208
    FLD float ptr [EBP + 0x92]          ; 0050320b
        ;   Label: LAB_0050320b
    FLD ST0                             ; 00503211
    FMUL double ptr [0x00630f73]        ; 00503213 | DOUBLE_00630f73
    FLD float ptr [EBX + 0x242c]        ; 00503219
    FXCH                                ; 0050321f
    FSUBR ST0,ST1                       ; 00503221
    LEA ESI,[EBX + 0x2428]              ; 00503223
    FSTP ST1                            ; 00503229
    FSTP float ptr [EBX + 0x242c]       ; 0050322b
    FLD float ptr [ESI]                 ; 00503231
    FMUL ST1                            ; 00503233
    FSTP float ptr [EBP + -0x7a]        ; 00503235
    FLD float ptr [ESI + 0x4]           ; 00503238
    FMUL ST1                            ; 0050323b
    LEA EAX,[EBX + 0x241c]              ; 0050323d
    FSTP float ptr [EBP + -0x76]        ; 00503243
    FMUL float ptr [ESI + 0x8]          ; 00503246
    LEA EDX,[EBX + 0x23ac]              ; 00503249
    FLD float ptr [EBP + -0x7a]         ; 0050324f
    FXCH                                ; 00503252
    FSTP float ptr [EBP + -0x72]        ; 00503254
    FADD float ptr [EAX]                ; 00503257
    FLD float ptr [EBP + -0x76]         ; 00503259
    FXCH                                ; 0050325c
    FSTP float ptr [EBP + -0xe]         ; 0050325e
    FADD float ptr [EAX + 0x4]          ; 00503261
    FLD float ptr [EBP + -0x72]         ; 00503264
    FXCH                                ; 00503267
    FSTP float ptr [EBP + -0xa]         ; 00503269
    FADD float ptr [EAX + 0x8]          ; 0050326c | DAT_00002424
    FLD float ptr [EBP + -0xe]          ; 0050326f
    FXCH                                ; 00503272
    FSTP float ptr [EBP + -0x6]         ; 00503274
    FADD float ptr [EDX]                ; 00503277
    FLD float ptr [EBP + -0xa]          ; 00503279
    FXCH                                ; 0050327c
    FSTP float ptr [EBP + -0x32]        ; 0050327e
    FADD float ptr [EDX + 0x4]          ; 00503281
    FLD float ptr [EBP + -0x6]          ; 00503284
    FXCH                                ; 00503287
    FSTP float ptr [EBP + -0x2e]        ; 00503289
    FADD float ptr [EDX + 0x8]          ; 0050328c
    FSTP float ptr [EBP + -0x2a]        ; 0050328f
    MOV dword ptr [EAX + 0x8],0x0       ; 00503292 | DAT_00002424
    MOV ECX,dword ptr [EAX + 0x8]       ; 00503299 | DAT_00002424
    MOV dword ptr [EAX + 0x4],ECX       ; 0050329c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0050329f
    MOV dword ptr [EAX],ECX             ; 005032a2
    MOV dword ptr [EDX + 0x8],0x0       ; 005032a4
    LEA EAX,[EBP + -0x32]               ; 005032ab
    FLD float ptr [EDX + 0x8]           ; 005032ae
    PUSH EAX                            ; 005032b1
    FST float ptr [EDX + 0x4]           ; 005032b2
    PUSH EBX                            ; 005032b5
    FSTP float ptr [EDX]                ; 005032b6
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 005032b8
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005032bd
    PUSH EBX                            ; 005032c0
        ;   Label: LAB_005032c0
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 005032c1
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005032c6
    LEA EAX,[EBX + 0x158]               ; 005032c9
    PUSH EAX                            ; 005032cf
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005032d0
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005032d5
    PUSH dword ptr [EBP + 0x92]         ; 005032d8
    PUSH EBX                            ; 005032de
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005032df
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005032e4
    LEA ESP,[EBP + 0x7a]                ; 005032e7
        ;   Label: LAB_005032e7
    POP EBP                             ; 005032ea
    POP EDI                             ; 005032eb
    POP ESI                             ; 005032ec
    POP EBX                             ; 005032ed
    RET                                 ; 005032ee
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005032ef
        ;   Label: LAB_005032ef
    TEST EAX,EAX                        ; 005032f5
    JZ 0x005030dc                       ; 005032f7
        ;   XREF to: 005030dc (CONDITIONAL_JUMP)  ; LAB_005030dc
    FLD float ptr [EAX + 0x20]          ; 005032fd
    FSUB float ptr [ESI]                ; 00503300
    FSTP float ptr [EBP + -0x4a]        ; 00503302
    FLD float ptr [EAX + 0x24]          ; 00503305
    FSUB float ptr [ESI + 0x4]          ; 00503308
    LEA EDX,[EBP + -0x62]               ; 0050330b
    FSTP float ptr [EBP + -0x46]        ; 0050330e
    FLD float ptr [EAX + 0x28]          ; 00503311
    FSUB float ptr [ESI + 0x8]          ; 00503314
    LEA EAX,[EBP + -0x4a]               ; 00503317
    FSTP float ptr [EBP + -0x42]        ; 0050331a
    CMP EDX,EAX                         ; 0050331d
    JZ 0x00503333                       ; 0050331f
        ;   XREF to: 00503333 (CONDITIONAL_JUMP)  ; LAB_00503333
    MOV EAX,dword ptr [EBP + -0x4a]     ; 00503321
    MOV dword ptr [EBP + -0x62],EAX     ; 00503324
    MOV EAX,dword ptr [EBP + -0x46]     ; 00503327
    MOV dword ptr [EBP + -0x5e],EAX     ; 0050332a
    MOV EAX,dword ptr [EBP + -0x42]     ; 0050332d
    MOV dword ptr [EBP + -0x5a],EAX     ; 00503330
    FLD float ptr [EBP + -0x5e]         ; 00503333
        ;   Label: LAB_00503333
    PUSH 0x40000000                     ; 00503336
    FADD float ptr [0x00630f7b]         ; 0050333b | FLOAT_00630f7b
    PUSH 0xc0000000                     ; 00503341
    FSTP float ptr [EBP + -0x5e]        ; 00503346
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00503349
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0050334e
    ADD ESP,0x8                         ; 00503351
    FLD float ptr [EBP + 0x76]          ; 00503354
    PUSH 0x40000000                     ; 00503357
    FADD float ptr [EBP + -0x62]        ; 0050335c
    PUSH 0xc0000000                     ; 0050335f
    FSTP float ptr [EBP + -0x62]        ; 00503364
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00503367
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    FLD double ptr [0x00630f83]         ; 0050336c | DOUBLE_00630f83
    FLD ST0                             ; 00503372
    MOV dword ptr [EBP + 0x76],EAX      ; 00503374
    FSIN                                ; 00503377
    FLD double ptr [0x00630f8b]         ; 00503379 | DOUBLE_00630f8b
    FPTAN                               ; 0050337f
    FSTP ST0                            ; 00503381
    FLD float ptr [EBP + 0x76]          ; 00503383
    FADD float ptr [EBP + -0x5a]        ; 00503386
    FST float ptr [EBP + -0x5a]         ; 00503389
    FLD float ptr [EBP + -0x62]         ; 0050338c
    CALL crt_math.c_atan2_FUN_006013b1  ; 0050338f
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FLD float ptr [EBP + -0x5a]         ; 00503394
    FMUL ST0                            ; 00503397
    FLD float ptr [EBP + -0x62]         ; 00503399
    FMUL ST0                            ; 0050339c
    FADDP                               ; 0050339e
    FSQRT                               ; 005033a0
    FXCH ST4                            ; 005033a2
    FCOS                                ; 005033a4
    FLD ST1                             ; 005033a6
    FSIN                                ; 005033a8
    FXCH ST2                            ; 005033aa
    FCOS                                ; 005033ac
    FXCH ST5                            ; 005033ae
    FSTP double ptr [EBP + 0x2a]        ; 005033b0
    FXCH ST2                            ; 005033b3
    FMUL double ptr [EBP + 0x2a]        ; 005033b5
    FSUB float ptr [EBP + -0x5e]        ; 005033b8
    FLD ST2                             ; 005033bb
    FMUL float ptr [0x00630f7b]         ; 005033bd | FLOAT_00630f7b
    FLD double ptr [EBP + 0x2a]         ; 005033c3
    FMUL double ptr [0x00630f73]        ; 005033c6 | DOUBLE_00630f73
    FXCH                                ; 005033cc
    FMUL ST4                            ; 005033ce
    FXCH                                ; 005033d0
    FMUL double ptr [EBP + 0x2a]        ; 005033d2
    FXCH                                ; 005033d5
    FMULP ST2                           ; 005033d7
    FXCH ST2                            ; 005033d9
    FMUL ST3                            ; 005033db
    ADD ESP,0x8                         ; 005033dd
    FXCH ST5                            ; 005033e0
    FMULP ST3                           ; 005033e2
    FXCH                                ; 005033e4
    FSTP float ptr [EBP + 0x66]         ; 005033e6
    FXCH ST2                            ; 005033e9
    FCHS                                ; 005033eb
    FSTP float ptr [EBP + -0x22]        ; 005033ed
    FXCH                                ; 005033f0
    FST float ptr [EBP + 0x6a]          ; 005033f2
    FLDZ                                ; 005033f5
    FXCH ST3                            ; 005033f7
    FSTP float ptr [EBP + -0x26]        ; 005033f9
    FXCH                                ; 005033fc
    FSTP float ptr [EBP + -0x1e]        ; 005033fe
    FXCH                                ; 00503401
    FCOMPP                              ; 00503403
    FNSTSW AX                           ; 00503405
    SAHF                                ; 00503407
    JNC 0x005030dc                      ; 00503408
        ;   XREF to: 005030dc (CONDITIONAL_JUMP)  ; LAB_005030dc
    FLD float ptr [EBP + 0x66]          ; 0050340e
    FDIV float ptr [EBP + 0x6a]         ; 00503411
    FSQRT                               ; 00503414
    FLD float ptr [EBP + -0x26]         ; 00503416
    FXCH                                ; 00503419
    FSTP float ptr [EBP + 0x6e]         ; 0050341b
    FMUL float ptr [EBP + 0x6e]         ; 0050341e
    FLD float ptr [EBP + -0x22]         ; 00503421
    FMUL float ptr [EBP + 0x6e]         ; 00503424
    FLD float ptr [EBP + -0x1e]         ; 00503427
    FMUL float ptr [EBP + 0x6e]         ; 0050342a
    LEA EDX,[EBP + -0x26]               ; 0050342d
    LEA EAX,[EBP + -0x2]                ; 00503430
    FXCH ST2                            ; 00503433
    FSTP float ptr [EBP + -0x2]         ; 00503435
    FSTP float ptr [EBP + 0x2]          ; 00503438
    FSTP float ptr [EBP + 0x6]          ; 0050343b
    CMP EDX,EAX                         ; 0050343e
    JZ 0x00503454                       ; 00503440
        ;   XREF to: 00503454 (CONDITIONAL_JUMP)  ; LAB_00503454
    MOV EAX,dword ptr [EBP + -0x2]      ; 00503442
    MOV dword ptr [EBP + -0x26],EAX     ; 00503445
    MOV EAX,dword ptr [EBP + 0x2]       ; 00503448
    MOV dword ptr [EBP + -0x22],EAX     ; 0050344b
    MOV EAX,dword ptr [EBP + 0x6]       ; 0050344e
    MOV dword ptr [EBP + -0x1e],EAX     ; 00503451
    MOV dword ptr [EBP + 0xffffff76],0x3f800000 ; 00503454
        ;   Label: LAB_00503454
    LEA EAX,[EBP + 0xffffff6e]          ; 0050345e
    PUSH EAX                            ; 00503464
    LEA EAX,[EBP + 0x16]                ; 00503465
    PUSH EAX                            ; 00503468
    MOV ECX,0x3f000000                  ; 00503469
    XOR EDX,EDX                         ; 0050346e
    PUSH EBX                            ; 00503470
    MOV dword ptr [EBP + 0xffffff6e],EDX ; 00503471
    MOV dword ptr [EBP + 0xffffff72],ECX ; 00503477
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050347d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00503482
    PUSH 0x0                            ; 00503485
    PUSH 0x2                            ; 00503487
    LEA EAX,[EBP + -0x26]               ; 00503489
    PUSH EAX                            ; 0050348c
    LEA EAX,[EBP + 0x16]                ; 0050348d
    PUSH EAX                            ; 00503490
    MOV EDX,dword ptr [0x0067a3d0]      ; 00503491 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 00503497 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0 ; 00503498
        ;   XREF to: 004c7db0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 0050349d
    PUSH 0x630ee5                       ; 005034a0 | = "larva-blow1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005034a5
    PUSH EBX                            ; 005034ab
    CALL dword ptr [EAX + 0x24]         ; 005034ac
    ADD ESP,0x8                         ; 005034af
    JMP 0x005030dc                      ; 005034b2
        ;   XREF to: 005030dc (UNCONDITIONAL_JUMP)  ; LAB_005030dc
    LEA EAX,[EBP + 0x72]                ; 005034b7
        ;   Label: LAB_005034b7
    PUSH EAX                            ; 005034ba
    PUSH EDI                            ; 005034bb
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005034bc
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005034c1
    CMP EAX,0x64                        ; 005034c4
    JZ 0x005032ef                       ; 005034c7
        ;   XREF to: 005032ef (CONDITIONAL_JUMP)  ; LAB_005032ef
    JMP 0x005030dc                      ; 005034cd
        ;   XREF to: 005030dc (UNCONDITIONAL_JUMP)  ; LAB_005030dc
    PUSH 0x1                            ; 005034d2
        ;   Label: LAB_005034d2
    PUSH 0x0                            ; 005034d4
    PUSH EDI                            ; 005034d6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005034d7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005034dc
    PUSH EBX                            ; 005034df
    PUSH 0x630ef5                       ; 005034e0 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x0066e8e0]      ; 005034e5 | g_CConsolePtr
    PUSH ESI                            ; 005034eb | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005034ec
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x00503169                      ; 005034f1
        ;   XREF to: 00503169 (UNCONDITIONAL_JUMP)  ; LAB_00503169
    JBE 0x00503159                      ; 005034f6
        ;   XREF to: 00503159 (CONDITIONAL_JUMP)  ; LAB_00503159
        ;   Label: LAB_005034f6
    CMP EAX,0x3                         ; 005034fc
    JZ 0x005034d2                       ; 005034ff
        ;   XREF to: 005034d2 (CONDITIONAL_JUMP)  ; LAB_005034d2
    PUSH 0x1                            ; 00503501
        ;   Label: LAB_00503501
    PUSH 0x0                            ; 00503503
    JMP 0x0050315d                      ; 00503505
        ;   XREF to: 0050315d (UNCONDITIONAL_JUMP)  ; LAB_0050315d
    MOV EAX,dword ptr [EBX + 0xbe28]    ; 0050350a
        ;   Label: LAB_0050350a
    TEST EAX,EAX                        ; 00503510
    JNZ 0x00503184                      ; 00503512
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    CMP dword ptr [EBX + 0xdc],0x0      ; 00503518
    JNZ 0x00503184                      ; 0050351f
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    PUSH EAX                            ; 00503525
    LEA EAX,[EBP + -0x3e]               ; 00503526
    PUSH EAX                            ; 00503529
    PUSH EDI                            ; 0050352a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0050352b
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00503530
    PUSH EAX                            ; 00503533
    LEA EAX,[EBP + -0x56]               ; 00503534
    PUSH EAX                            ; 00503537
    PUSH EBX                            ; 00503538
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00503539
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0050353e
    PUSH 0x1                            ; 00503541
    LEA EAX,[EBP + -0x56]               ; 00503543
    PUSH EAX                            ; 00503546
    MOV ECX,dword ptr [0x0067b9a0]      ; 00503547 | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 0050354d | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 0050354e
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00503553
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00503556
    JMP 0x00503184                      ; 00503560
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    PUSH dword ptr [EBP + 0x92]         ; 00503565
        ;   Label: LAB_00503565
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050356b
    PUSH EBX                            ; 00503571
    CALL dword ptr [EAX + 0x158]        ; 00503572
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 00503578
    ADD ESP,0x8                         ; 0050357e
    TEST EDX,EDX                        ; 00503581
    JNZ 0x005035ae                      ; 00503583
        ;   XREF to: 005035ae (CONDITIONAL_JUMP)  ; LAB_005035ae
    PUSH dword ptr [EBP + 0x92]         ; 00503585
    PUSH EBX                            ; 0050358b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 0050358c
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00503591
    TEST EAX,EAX                        ; 00503594
    JZ 0x00503184                       ; 00503596
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    PUSH 0x1                            ; 0050359c
    PUSH 0x1                            ; 0050359e
    PUSH EDI                            ; 005035a0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005035a1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005035a6
    JMP 0x00503184                      ; 005035a9
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    MOV EAX,EDX                         ; 005035ae
        ;   Label: LAB_005035ae
    FLD float ptr [EAX + 0x20]          ; 005035b0
    FSUB float ptr [ESI]                ; 005035b3
    FSTP float ptr [EBP + 0xffffff62]   ; 005035b5
    FLD float ptr [EAX + 0x24]          ; 005035bb
    FSUB float ptr [ESI + 0x4]          ; 005035be
    FST float ptr [EBP + 0xffffff66]    ; 005035c1
    FMUL float ptr [EBP + 0xffffff66]   ; 005035c7
    FLD float ptr [EBP + 0xffffff62]    ; 005035cd
    FMUL ST0                            ; 005035d3
    FLD float ptr [EAX + 0x28]          ; 005035d5
    FSUB float ptr [ESI + 0x8]          ; 005035d8
    FXCH                                ; 005035db
    FADDP ST2,ST0                       ; 005035dd
    FST float ptr [EBP + 0xffffff6a]    ; 005035df
    FMUL float ptr [EBP + 0xffffff6a]   ; 005035e5
    FADDP                               ; 005035eb
    FSTP float ptr [EBP + 0x36]         ; 005035ed
    MOV EAX,dword ptr [EBP + 0x36]      ; 005035f0
    MOV ECX,dword ptr [0x02d7a7b8]      ; 005035f3 | g_FastSqrtMagic
    SAR EAX,0x1                         ; 005035f9
    ADD EAX,ECX                         ; 005035fb
    MOV dword ptr [EBP + 0x5e],EAX      ; 005035fd
    LEA EAX,[EBP + 0xffffff62]          ; 00503600
    PUSH EAX                            ; 00503606
    LEA EAX,[EBP + 0xa]                 ; 00503607
    PUSH EAX                            ; 0050360a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0050360b
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0xe]           ; 00503610
    ADD ESP,0x8                         ; 00503613
    FSUB float ptr [EBX + 0x34]         ; 00503616
    SUB ESP,0x4                         ; 00503619
    FSTP float ptr [ESP]                ; 0050361c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0050361f
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00503624
    FLD float ptr [EBP + 0x76]          ; 00503627
    FABS                                ; 0050362a
    ADD ESP,0x4                         ; 0050362c
    FCOMP double ptr [0x00630f53]       ; 0050362f | DOUBLE_00630f53
    FNSTSW AX                           ; 00503635
    SAHF                                ; 00503637
    JNC 0x0050368b                      ; 00503638
        ;   XREF to: 0050368b (CONDITIONAL_JUMP)  ; LAB_0050368b
    FLD float ptr [EBP + 0x5e]          ; 0050363a
    FCOMP double ptr [0x00630f63]       ; 0050363d | DOUBLE_00630f63
    FNSTSW AX                           ; 00503643
    SAHF                                ; 00503645
    JA 0x0050368b                       ; 00503646
        ;   XREF to: 0050368b (CONDITIONAL_JUMP)  ; LAB_0050368b
    FLD float ptr [EBX + 0xbe38]        ; 00503648
    FLDZ                                ; 0050364e
    FCOMPP                              ; 00503650
    FNSTSW AX                           ; 00503652
    SAHF                                ; 00503654
    JC 0x00503184                       ; 00503655
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    PUSH 0x1                            ; 0050365b
    PUSH 0x2                            ; 0050365d
    PUSH EDI                            ; 0050365f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503660
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00503665
    PUSH 0x41f00000                     ; 00503668
    PUSH 0x41700000                     ; 0050366d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00503672
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00503677
    ADD ESP,0x8                         ; 0050367a
    MOV EAX,dword ptr [EBP + 0x76]      ; 0050367d
    MOV dword ptr [EBX + 0xbe38],EAX    ; 00503680
    JMP 0x00503184                      ; 00503686
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    PUSH 0x1                            ; 0050368b
        ;   Label: LAB_0050368b
    PUSH 0x1                            ; 0050368d
    LEA EAX,[EBX + 0x158]               ; 0050368f
    PUSH EAX                            ; 00503695
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503696
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0050369b
    JMP 0x00503184                      ; 0050369e
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    PUSH dword ptr [EBP + 0x92]         ; 005036a3
        ;   Label: LAB_005036a3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005036a9
    PUSH EBX                            ; 005036af
    CALL dword ptr [EAX + 0x158]        ; 005036b0
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005036b6
    ADD ESP,0x8                         ; 005036bc
    TEST ESI,ESI                        ; 005036bf
    JNZ 0x005036eb                      ; 005036c1
        ;   XREF to: 005036eb (CONDITIONAL_JUMP)  ; LAB_005036eb
    PUSH dword ptr [EBP + 0x92]         ; 005036c3
    PUSH EBX                            ; 005036c9
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 005036ca
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005036cf
    TEST EAX,EAX                        ; 005036d2
    JNZ 0x00503184                      ; 005036d4
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    PUSH 0x1                            ; 005036da
    PUSH ESI                            ; 005036dc
    PUSH EDI                            ; 005036dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005036de
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005036e3
    JMP 0x00503184                      ; 005036e6
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    MOV EAX,[0x0066071c]                ; 005036eb | FLOAT_0066071c
        ;   Label: LAB_005036eb
    MOV dword ptr [EBP + 0x52],EAX      ; 005036f0
    LEA EAX,[EBX + 0x23ac]              ; 005036f3
    MOV dword ptr [EAX + 0x8],0x0       ; 005036f9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00503700
    MOV dword ptr [EAX + 0x4],EDX       ; 00503703
    MOV EDX,dword ptr [EAX + 0x4]       ; 00503706
    MOV dword ptr [EAX],EDX             ; 00503709
    XOR EAX,EAX                         ; 0050370b
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0050370d
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 00503713
    MOV EAX,dword ptr [EBP + 0x52]      ; 00503719
    PUSH 0x3e32b8c2                     ; 0050371c
    MOV dword ptr [EBP + -0x7e],EAX     ; 00503721
    LEA EAX,[EBP + 0xffffff7a]          ; 00503724
    PUSH 0x3f000000                     ; 0050372a
    PUSH EAX                            ; 0050372f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00503730
    PUSH EAX                            ; 00503736
    MOV EDX,dword ptr [EAX + 0x154]     ; 00503737
    CALL dword ptr [EDX + 0xbc]         ; 0050373d
    ADD ESP,0x4                         ; 00503743
    PUSH EAX                            ; 00503746
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00503747
    ADD EAX,0x20                        ; 0050374d
    PUSH EAX                            ; 00503750
    PUSH EBX                            ; 00503751
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00503752
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00503757
    TEST EAX,EAX                        ; 0050375a
    JL 0x00503867                       ; 0050375c
        ;   XREF to: 00503867 (CONDITIONAL_JUMP)  ; LAB_00503867
    FLD float ptr [EBX + 0xbe38]        ; 00503762
        ;   Label: LAB_00503762
    FLDZ                                ; 00503768
    FCOMPP                              ; 0050376a
    FNSTSW AX                           ; 0050376c
    SAHF                                ; 0050376e
    JC 0x00503184                       ; 0050376f
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00503775
    LEA EDX,[EBX + 0x20]                ; 0050377b
    FLD float ptr [EAX + 0x20]          ; 0050377e
    FSUB float ptr [EDX]                ; 00503781
    FSTP float ptr [EBP + -0x6e]        ; 00503783
    FLD float ptr [EAX + 0x24]          ; 00503786
    FSUB float ptr [EDX + 0x4]          ; 00503789
    FST float ptr [EBP + -0x6a]         ; 0050378c
    FMUL float ptr [EBP + -0x6a]        ; 0050378f
    FLD float ptr [EBP + -0x6e]         ; 00503792
    FMUL ST0                            ; 00503795
    FLD float ptr [EAX + 0x28]          ; 00503797
    FSUB float ptr [EDX + 0x8]          ; 0050379a
    FXCH                                ; 0050379d
    FADDP ST2,ST0                       ; 0050379f
    FST float ptr [EBP + -0x66]         ; 005037a1
    FMUL float ptr [EBP + -0x66]        ; 005037a4
    FADDP                               ; 005037a7
    FSTP float ptr [EBP + 0x46]         ; 005037a9
    MOV EAX,dword ptr [EBP + 0x46]      ; 005037ac
    MOV ESI,dword ptr [0x02d7a7b8]      ; 005037af | g_FastSqrtMagic
    SAR EAX,0x1                         ; 005037b5
    ADD EAX,ESI                         ; 005037b7
    MOV dword ptr [EBP + 0x4a],EAX      ; 005037b9
    FLD float ptr [EBP + 0x4a]          ; 005037bc
    FCOMP float ptr [EBX + 0xbe34]      ; 005037bf
    FNSTSW AX                           ; 005037c5
    SAHF                                ; 005037c7
    JNC 0x00503184                      ; 005037c8
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    LEA EAX,[EBP + -0x6e]               ; 005037ce
    PUSH EAX                            ; 005037d1
    LEA EAX,[EBP + -0x1a]               ; 005037d2
    PUSH EAX                            ; 005037d5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005037d6
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 005037db
    LEA EAX,[EBP + -0x6e]               ; 005037dd
    ADD ESP,0x8                         ; 005037e0
    CMP EAX,EDX                         ; 005037e3
    JZ 0x005037f8                       ; 005037e5
        ;   XREF to: 005037f8 (CONDITIONAL_JUMP)  ; LAB_005037f8
    MOV EAX,dword ptr [EDX]             ; 005037e7
    MOV dword ptr [EBP + -0x6e],EAX     ; 005037e9
    MOV EAX,dword ptr [EDX + 0x4]       ; 005037ec
    MOV dword ptr [EBP + -0x6a],EAX     ; 005037ef
    MOV EAX,dword ptr [EDX + 0x8]       ; 005037f2
    MOV dword ptr [EBP + -0x66],EAX     ; 005037f5
    PUSH dword ptr [EBP + -0x6a]        ; 005037f8
        ;   Label: LAB_005037f8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005037fb
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00503800
    ADD ESP,0x4                         ; 00503803
    FLD float ptr [EBP + 0x76]          ; 00503806
    PUSH dword ptr [EBX + 0x34]         ; 00503809
    FSTP float ptr [EBP + 0x4e]         ; 0050380c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0050380f
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00503814
    ADD ESP,0x4                         ; 00503817
    FLD float ptr [EBP + 0x76]          ; 0050381a
    FSUBR float ptr [EBP + 0x4e]        ; 0050381d
    SUB ESP,0x4                         ; 00503820
    FSTP float ptr [ESP]                ; 00503823
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00503826
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0050382b
    FLD float ptr [EBP + 0x76]          ; 0050382e
    FABS                                ; 00503831
    ADD ESP,0x4                         ; 00503833
    FCOMP double ptr [0x00630f53]       ; 00503836 | DOUBLE_00630f53
    FNSTSW AX                           ; 0050383c
    SAHF                                ; 0050383e
    JNC 0x00503184                      ; 0050383f
        ;   XREF to: 00503184 (CONDITIONAL_JUMP)  ; LAB_00503184
    PUSH 0x1                            ; 00503845
    PUSH 0x2                            ; 00503847
    LEA EAX,[EBX + 0x158]               ; 00503849
    PUSH EAX                            ; 0050384f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503850
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00503855
    MOV dword ptr [EBX + 0xbe38],0x40c00000 ; 00503858
    JMP 0x00503184                      ; 00503862
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    PUSH EBX                            ; 00503867
        ;   Label: LAB_00503867
    PUSH 0x630f1f                       ; 00503868 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 0050386d | g_CConsolePtr
    PUSH ECX                            ; 00503873 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00503874
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00503879
    PUSH 0x1                            ; 0050387c
    PUSH 0x0                            ; 0050387e
    PUSH EDI                            ; 00503880
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503881
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00503886
    JMP 0x00503762                      ; 00503889
        ;   XREF to: 00503762 (UNCONDITIONAL_JUMP)  ; LAB_00503762
    MOV EDX,dword ptr [EBP + 0x62]      ; 0050388e
        ;   Label: LAB_0050388e
    CMP EDX,0x1                         ; 00503891
    JNC 0x005038a3                      ; 00503894
        ;   XREF to: 005038a3 (CONDITIONAL_JUMP)  ; LAB_005038a3
    TEST EDX,EDX                        ; 00503896
    JZ 0x00503565                       ; 00503898
        ;   XREF to: 00503565 (CONDITIONAL_JUMP)  ; LAB_00503565
    JMP 0x00503184                      ; 0050389e
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    JBE 0x005036a3                      ; 005038a3
        ;   XREF to: 005036a3 (CONDITIONAL_JUMP)  ; LAB_005036a3
        ;   Label: LAB_005038a3
    CMP EDX,0x5                         ; 005038a9
    JZ 0x0050350a                       ; 005038ac
        ;   XREF to: 0050350a (CONDITIONAL_JUMP)  ; LAB_0050350a
    JMP 0x00503184                      ; 005038b2
        ;   XREF to: 00503184 (UNCONDITIONAL_JUMP)  ; LAB_00503184
    FLD float ptr [EBX + 0x261c]        ; 005038b7
        ;   Label: LAB_005038b7
    FLDLN2                              ; 005038bd
    FXCH                                ; 005038bf
    FYL2X                               ; 005038c1
    FMUL double ptr [0x00630f6b]        ; 005038c3 | DOUBLE_00630f6b
    FLD1                                ; 005038c9
    FLDL2E                              ; 005038cb
    FMUL ST2                            ; 005038cd
    FST ST2                             ; 005038cf
    FPREM                               ; 005038d1
    F2XM1                               ; 005038d3
    FADDP                               ; 005038d5
    FSCALE                              ; 005038d7
    FSTP ST1                            ; 005038d9
    PUSH 0x3f8147ae                     ; 005038db
    PUSH 0x3f7d70a4                     ; 005038e0
    FSTP double ptr [EBP + 0x22]        ; 005038e5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005038e8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005038ed
    ADD ESP,0x8                         ; 005038f0
    FLD float ptr [EBP + 0x76]          ; 005038f3
    FMUL double ptr [EBP + 0x22]        ; 005038f6
    SUB ESP,0x8                         ; 005038f9
    FSTP double ptr [ESP]               ; 005038fc
    SUB ESP,0x8                         ; 005038ff
    FLD float ptr [EBX + 0x261c]        ; 00503902
    FSTP double ptr [ESP]               ; 00503908
    PUSH 0x630f40                       ; 0050390b | = "slime.wav @%f *%f"
    LEA EAX,[EBP + 0xfffffe9a]          ; 00503910
    PUSH EAX                            ; 00503916
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00503917
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0050391c
    LEA EAX,[EBP + 0xfffffe9a]          ; 0050391f
    PUSH EAX                            ; 00503925
    MOV EDX,dword ptr [EBX + 0x154]     ; 00503926
    PUSH EBX                            ; 0050392c
    CALL dword ptr [EDX + 0x28]         ; 0050392d
    ADD ESP,0x8                         ; 00503930
    MOV dword ptr [EBX + 0xbec4],EAX    ; 00503933
    JMP 0x005031c6                      ; 00503939
        ;   XREF to: 005031c6 (UNCONDITIONAL_JUMP)  ; LAB_005031c6
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 0050393e
        ;   Label: LAB_0050393e
    PUSH EAX                            ; 00503944
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00503945
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0050394a
    JMP 0x005031c6                      ; 0050394d
        ;   XREF to: 005031c6 (UNCONDITIONAL_JUMP)  ; LAB_005031c6

