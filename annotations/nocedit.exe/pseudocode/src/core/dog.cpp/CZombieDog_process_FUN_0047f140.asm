; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr,float delta_time)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; SDamageInfo      Stack[-0xe0]:60  local_e0
; CVector3f        Stack[-0xa4]:12  local_a4
; CVector3f        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_0047f118 = 0047f50a
;   TerminatedCString s_s_confused_while_walking_00620fbc
;   TerminatedCString s_dog5_wav_00620fe6
;   TerminatedCString s_dog5_wav_00620fef
;   TerminatedCString s_s_gave_up_chase_I_m_conf_00620ff8
;   double DOUBLE_00621019 = 3.14159265350000
;   double DOUBLE_00621021 = 2
;   double DOUBLE_00621029 = 0.5
;   double DOUBLE_00621031 = 32
;   float FLOAT_0065ca28 = 3
;   float FLOAT_0065ca34 = 8
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0
;   core_gore.cpp_CGore_createBloodPool_FUN_004ede30
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f140
        ;   Label: core_dog.cpp_CZombieDog_process_FUN_0047f140
    PUSH ESI                            ; 0047f141
    PUSH EDI                            ; 0047f142
    PUSH EBP                            ; 0047f143
    MOV EBP,ESP                         ; 0047f144
    SUB ESP,0xd0                        ; 0047f146
    SUB EBP,0x7a                        ; 0047f14c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0047f14f
    PUSH dword ptr [EBP + 0x92]         ; 0047f155
    PUSH EBX                            ; 0047f15b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0047f15c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047f161
    TEST EAX,EAX                        ; 0047f164
    JZ 0x0047f394                       ; 0047f166
        ;   XREF to: 0047f394 (CONDITIONAL_JUMP)  ; LAB_0047f394
    LEA EAX,[EBX + 0x23ac]              ; 0047f16c
    MOV dword ptr [EAX + 0x8],0x0       ; 0047f172
    FLD float ptr [EBP + 0x92]          ; 0047f179
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047f17f
    MOV dword ptr [EAX + 0x4],EDX       ; 0047f182
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047f185
    MOV dword ptr [EAX],EDX             ; 0047f188
    FMUL float ptr [EBX + 0xbe24]       ; 0047f18a
    LEA ESI,[EBX + 0x158]               ; 0047f190
    FSTP float ptr [EBP + 0x6a]         ; 0047f196
    FLD float ptr [EBP + 0x6a]          ; 0047f199
        ;   Label: LAB_0047f199
    FLDZ                                ; 0047f19c
    FCOMPP                              ; 0047f19e
    FNSTSW AX                           ; 0047f1a0
    SAHF                                ; 0047f1a2
    JC 0x0047f39c                       ; 0047f1a3
        ;   XREF to: 0047f39c (CONDITIONAL_JUMP)  ; LAB_0047f39c
    PUSH ESI                            ; 0047f1a9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0047f1aa
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    FLD float ptr [EBX + 0xbe24]        ; 0047f1af
    FLD float ptr [EBP + 0x92]          ; 0047f1b5
    FMUL double ptr [0x00621019]        ; 0047f1bb | DOUBLE_00621019
    FMULP                               ; 0047f1c1
    FLD float ptr [EBX + 0x23b4]        ; 0047f1c3
    ADD ESP,0x4                         ; 0047f1c9
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047f1cc
    FSTP float ptr [EBX + 0x2434]       ; 0047f1cf
    MOV EDI,EAX                         ; 0047f1d5
    FSTP float ptr [EBX + 0x2438]       ; 0047f1d7
    CMP EAX,0x2                         ; 0047f1dd
    JNZ 0x0047f1f8                      ; 0047f1e0
        ;   XREF to: 0047f1f8 (CONDITIONAL_JUMP)  ; LAB_0047f1f8
    FLD float ptr [EBX + 0x2438]        ; 0047f1e2
    FLD ST0                             ; 0047f1e8
    FMUL double ptr [0x00621021]        ; 0047f1ea | DOUBLE_00621021
    FSTP ST1                            ; 0047f1f0
    FSTP float ptr [EBX + 0x2438]       ; 0047f1f2
    PUSH dword ptr [EBP + 0x92]         ; 0047f1f8
        ;   Label: LAB_0047f1f8
    PUSH EBX                            ; 0047f1fe
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 0047f1ff
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047f204
    TEST EAX,EAX                        ; 0047f207
    JZ 0x0047f79a                       ; 0047f209
        ;   XREF to: 0047f79a (CONDITIONAL_JUMP)  ; LAB_0047f79a
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0047f20f
    CMP EAX,0x2                         ; 0047f215
    JNC 0x0047f3e2                      ; 0047f218
        ;   XREF to: 0047f3e2 (CONDITIONAL_JUMP)  ; LAB_0047f3e2
    CMP EAX,0x1                         ; 0047f21e
    JNZ 0x0047f3ed                      ; 0047f221
        ;   XREF to: 0047f3ed (CONDITIONAL_JUMP)  ; LAB_0047f3ed
    PUSH 0x1                            ; 0047f227
        ;   Label: LAB_0047f227
    PUSH 0x1                            ; 0047f229
    LEA EAX,[EBX + 0x158]               ; 0047f22b
        ;   Label: LAB_0047f22b
    PUSH EAX                            ; 0047f231
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f232
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f237
        ;   Label: LAB_0047f237
    LEA EAX,[EBX + 0x23ac]              ; 0047f23a
    MOV dword ptr [EAX + 0x8],0x0       ; 0047f240
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047f247
    MOV dword ptr [EAX + 0x4],EDX       ; 0047f24a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047f24d
    MOV dword ptr [EAX],EDX             ; 0047f250
    FLD float ptr [EBX + 0xbe38]        ; 0047f252
        ;   Label: caseD_5
    FLDZ                                ; 0047f258
    FCOMPP                              ; 0047f25a
    FNSTSW AX                           ; 0047f25c
    SAHF                                ; 0047f25e
    JNC 0x0047f273                      ; 0047f25f
        ;   XREF to: 0047f273 (CONDITIONAL_JUMP)  ; LAB_0047f273
    FLD float ptr [EBX + 0xbe38]        ; 0047f261
    FSUB float ptr [EBP + 0x92]         ; 0047f267
    FSTP float ptr [EBX + 0xbe38]       ; 0047f26d
    PUSH EBX                            ; 0047f273
        ;   Label: LAB_0047f273
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 0047f274
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0047f279
    TEST EAX,EAX                        ; 0047f27c
    JZ 0x0047f36d                       ; 0047f27e
        ;   XREF to: 0047f36d (CONDITIONAL_JUMP)  ; LAB_0047f36d
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0047f284
    TEST EAX,EAX                        ; 0047f28a
    JZ 0x0047f2b8                       ; 0047f28c
        ;   XREF to: 0047f2b8 (CONDITIONAL_JUMP)  ; LAB_0047f2b8
    PUSH EAX                            ; 0047f28e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047f28f
    CALL dword ptr [EDX + 0x108]        ; 0047f295
    ADD ESP,0x4                         ; 0047f29b
    CMP EAX,EBX                         ; 0047f29e
    JNZ 0x0047f2b8                      ; 0047f2a0
        ;   XREF to: 0047f2b8 (CONDITIONAL_JUMP)  ; LAB_0047f2b8
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 0047f2a2
    PUSH EDX                            ; 0047f2a8
    MOV ECX,dword ptr [0x006810c8]      ; 0047f2a9 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0047f2af | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0047f2b0
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0047f2b5
    FLD float ptr [EBP + 0x92]          ; 0047f2b8
        ;   Label: LAB_0047f2b8
    FLD ST0                             ; 0047f2be
    FMUL double ptr [0x00621031]        ; 0047f2c0 | DOUBLE_00621031
    FLD float ptr [EBX + 0x242c]        ; 0047f2c6
    FXCH                                ; 0047f2cc
    FSUBR ST0,ST1                       ; 0047f2ce
    LEA EDX,[EBX + 0x2428]              ; 0047f2d0
    FSTP ST1                            ; 0047f2d6
    FSTP float ptr [EBX + 0x242c]       ; 0047f2d8
    FLD float ptr [EDX]                 ; 0047f2de
    FMUL ST1                            ; 0047f2e0
    FSTP float ptr [EBP + 0x22]         ; 0047f2e2
    FLD float ptr [EDX + 0x4]           ; 0047f2e5
    FMUL ST1                            ; 0047f2e8
    LEA EAX,[EBX + 0x241c]              ; 0047f2ea
    FSTP float ptr [EBP + 0x26]         ; 0047f2f0
    FMUL float ptr [EDX + 0x8]          ; 0047f2f3
    LEA ESI,[EBX + 0x23ac]              ; 0047f2f6
    FLD float ptr [EBP + 0x22]          ; 0047f2fc
    FXCH                                ; 0047f2ff
    FSTP float ptr [EBP + 0x2a]         ; 0047f301
    FADD float ptr [EAX]                ; 0047f304
    FLD float ptr [EBP + 0x26]          ; 0047f306
    FXCH                                ; 0047f309
    FSTP float ptr [EBP + 0x52]         ; 0047f30b
    FADD float ptr [EAX + 0x4]          ; 0047f30e
    FLD float ptr [EBP + 0x2a]          ; 0047f311
    FXCH                                ; 0047f314
    FSTP float ptr [EBP + 0x56]         ; 0047f316
    FADD float ptr [EAX + 0x8]          ; 0047f319 | DAT_00002424
    FLD float ptr [EBP + 0x52]          ; 0047f31c
    FXCH                                ; 0047f31f
    FSTP float ptr [EBP + 0x5a]         ; 0047f321
    FADD float ptr [ESI]                ; 0047f324
    FLD float ptr [EBP + 0x56]          ; 0047f326
    FXCH                                ; 0047f329
    FSTP float ptr [EBP + 0xa]          ; 0047f32b
    FADD float ptr [ESI + 0x4]          ; 0047f32e
    FLD float ptr [EBP + 0x5a]          ; 0047f331
    FXCH                                ; 0047f334
    FSTP float ptr [EBP + 0xe]          ; 0047f336
    FADD float ptr [ESI + 0x8]          ; 0047f339
    FSTP float ptr [EBP + 0x12]         ; 0047f33c
    MOV dword ptr [EAX + 0x8],0x0       ; 0047f33f | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047f346 | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 0047f349
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047f34c
    MOV dword ptr [EAX],EDX             ; 0047f34f
    MOV dword ptr [ESI + 0x8],0x0       ; 0047f351
    LEA EAX,[EBP + 0xa]                 ; 0047f358
    FLD float ptr [ESI + 0x8]           ; 0047f35b
    PUSH EAX                            ; 0047f35e
    FST float ptr [ESI + 0x4]           ; 0047f35f
    PUSH EBX                            ; 0047f362
    FSTP float ptr [ESI]                ; 0047f363
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 0047f365
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0047f36a
    PUSH EBX                            ; 0047f36d
        ;   Label: LAB_0047f36d
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 0047f36e
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0047f373
    LEA EAX,[EBX + 0x158]               ; 0047f376
    PUSH EAX                            ; 0047f37c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0047f37d
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047f382
    PUSH dword ptr [EBP + 0x92]         ; 0047f385
    PUSH EBX                            ; 0047f38b
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 0047f38c
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047f391
    LEA ESP,[EBP + 0x7a]                ; 0047f394
        ;   Label: LAB_0047f394
    POP EBP                             ; 0047f397
    POP EDI                             ; 0047f398
    POP ESI                             ; 0047f399
    POP EBX                             ; 0047f39a
    RET                                 ; 0047f39b
    LEA EAX,[EBP + 0x6a]                ; 0047f39c
        ;   Label: LAB_0047f39c
    PUSH EAX                            ; 0047f39f
    PUSH ESI                            ; 0047f3a0
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0047f3a1
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0047f3a6
    PUSH EAX                            ; 0047f3a9
    PUSH EBX                            ; 0047f3aa
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 0047f3ab
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0047f3b0
    JMP 0x0047f199                      ; 0047f3b3
        ;   XREF to: 0047f199 (UNCONDITIONAL_JUMP)  ; LAB_0047f199
    PUSH 0x1                            ; 0047f3b8
        ;   Label: LAB_0047f3b8
    PUSH 0x0                            ; 0047f3ba
    LEA EAX,[EBX + 0x158]               ; 0047f3bc
    PUSH EAX                            ; 0047f3c2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f3c3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f3c8
    PUSH EBX                            ; 0047f3cb
    PUSH 0x620fbc                       ; 0047f3cc | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x0066e8e0]      ; 0047f3d1 | g_CConsolePtr
    PUSH EDI                            ; 0047f3d7 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0047f3d8
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x0047f237                      ; 0047f3dd
        ;   XREF to: 0047f237 (UNCONDITIONAL_JUMP)  ; LAB_0047f237
    JBE 0x0047f227                      ; 0047f3e2
        ;   XREF to: 0047f227 (CONDITIONAL_JUMP)  ; LAB_0047f227
        ;   Label: LAB_0047f3e2
    CMP EAX,0x3                         ; 0047f3e8
    JZ 0x0047f3b8                       ; 0047f3eb
        ;   XREF to: 0047f3b8 (CONDITIONAL_JUMP)  ; LAB_0047f3b8
    PUSH 0x1                            ; 0047f3ed
        ;   Label: LAB_0047f3ed
    PUSH 0x0                            ; 0047f3ef
    JMP 0x0047f22b                      ; 0047f3f1
        ;   XREF to: 0047f22b (UNCONDITIONAL_JUMP)  ; LAB_0047f22b
    LEA EAX,[EBP + -0x56]               ; 0047f3f6
        ;   Label: caseD_3
    PUSH EAX                            ; 0047f3f9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0047f3fa
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0047f3ff
    PUSH 0x41700000                     ; 0047f402
    PUSH 0x40e00000                     ; 0047f407
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0047f40c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047f411
    MOV dword ptr [EBP + -0x22],EBX     ; 0047f414
    MOV dword ptr [EBP + -0x1e],EBX     ; 0047f417
    ADD ESP,0x8                         ; 0047f41a
    FLD float ptr [EBP + 0x76]          ; 0047f41d
    LEA EAX,[EBP + -0x56]               ; 0047f420
    FSTP float ptr [EBP + -0x52]        ; 0047f423
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 0047f426
    PUSH EAX                            ; 0047f42c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047f42d
    SUB EAX,EDX                         ; 0047f434
    SHL EAX,0x4                         ; 0047f436
    LEA EDX,[EBX + 0xfd8]               ; 0047f439
    ADD EAX,EDX                         ; 0047f43f
    PUSH 0x3f333333                     ; 0047f441
    PUSH EAX                            ; 0047f446
    PUSH 0x3f87558                      ; 0047f447 | g_ZeroVector
    LEA EAX,[EBP + -0xe]                ; 0047f44c
    PUSH EAX                            ; 0047f44f
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0047f450
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0047f455
    PUSH EAX                            ; 0047f458
    LEA EAX,[EBP + -0x2]                ; 0047f459
    PUSH EAX                            ; 0047f45c
    PUSH EBX                            ; 0047f45d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0047f45e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0047f463
    PUSH EAX                            ; 0047f466
    PUSH EBX                            ; 0047f467
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 0047f468
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0047f46d
    MOV EDI,dword ptr [EBX + 0xbec4]    ; 0047f470
    PUSH EDI                            ; 0047f476
    MOV EAX,[0x00681ef8]                ; 0047f477 | g_CSoundPtr | g_CSoundInstance
    PUSH EAX                            ; 0047f47c | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 0047f47d
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0047f482
    TEST EAX,EAX                        ; 0047f485
    JNZ 0x0047f252                      ; 0047f487
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x620fe6                       ; 0047f48d | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047f492
    PUSH EBX                            ; 0047f498
    CALL dword ptr [EAX + 0x24]         ; 0047f499
    ADD ESP,0x8                         ; 0047f49c
    MOV dword ptr [EBX + 0xbec4],EAX    ; 0047f49f
    JMP 0x0047f252                      ; 0047f4a5
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xbe28],0x0    ; 0047f4aa
        ;   Label: caseD_7
    JNZ 0x0047f252                      ; 0047f4b1
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 0047f4b7
    JNZ 0x0047f252                      ; 0047f4be
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 0047f4c4
    LEA EAX,[EBP + 0x3a]                ; 0047f4c5
    PUSH EAX                            ; 0047f4c8
    LEA EAX,[EBX + 0x158]               ; 0047f4c9
    PUSH EAX                            ; 0047f4cf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0047f4d0
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0047f4d5
    PUSH EAX                            ; 0047f4d8
    LEA EAX,[EBP + 0x46]                ; 0047f4d9
    PUSH EAX                            ; 0047f4dc
    PUSH EBX                            ; 0047f4dd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0047f4de
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0047f4e3
    PUSH 0x0                            ; 0047f4e6
    LEA EAX,[EBP + 0x46]                ; 0047f4e8
    PUSH EAX                            ; 0047f4eb
    MOV ESI,dword ptr [0x0067b9a0]      ; 0047f4ec | g_CGorePtr
    PUSH ESI                            ; 0047f4f2 | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 0047f4f3
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 0047f4f8
    MOV dword ptr [EBX + 0xbe28],0x1    ; 0047f4fb
    JMP 0x0047f252                      ; 0047f505
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0047f50a
        ;   Label: caseD_0
    PUSH EBX                            ; 0047f510
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 0047f511
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047f516
    LEA ESI,[EBX + 0x158]               ; 0047f519
    TEST EAX,EAX                        ; 0047f51f
    JZ 0x0047f535                       ; 0047f521
        ;   XREF to: 0047f535 (CONDITIONAL_JUMP)  ; LAB_0047f535
    PUSH 0x1                            ; 0047f523
    PUSH 0x1                            ; 0047f525
    PUSH ESI                            ; 0047f527
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f528
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f52d
    JMP 0x0047f252                      ; 0047f530
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0047f535
        ;   Label: LAB_0047f535
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047f53b
    PUSH EBX                            ; 0047f541
    CALL dword ptr [EAX + 0x158]        ; 0047f542
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0047f548
    ADD ESP,0x8                         ; 0047f54e
    TEST EAX,EAX                        ; 0047f551
    JZ 0x0047f252                       ; 0047f553
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EDX,[EBX + 0x20]                ; 0047f559
    FLD float ptr [EAX + 0x20]          ; 0047f55c
    FSUB float ptr [EDX]                ; 0047f55f
    FSTP float ptr [EBP + 0x16]         ; 0047f561
    FLD float ptr [EAX + 0x24]          ; 0047f564
    FSUB float ptr [EDX + 0x4]          ; 0047f567
    FST float ptr [EBP + 0x1a]          ; 0047f56a
    FMUL float ptr [EBP + 0x1a]         ; 0047f56d
    FLD float ptr [EBP + 0x16]          ; 0047f570
    FMUL ST0                            ; 0047f573
    FLD float ptr [EAX + 0x28]          ; 0047f575
    FSUB float ptr [EDX + 0x8]          ; 0047f578
    FXCH                                ; 0047f57b
    FADDP ST2,ST0                       ; 0047f57d
    FST float ptr [EBP + 0x1e]          ; 0047f57f
    FMUL float ptr [EBP + 0x1e]         ; 0047f582
    FADDP                               ; 0047f585
    FSTP float ptr [EBP + 0x66]         ; 0047f587
    MOV EAX,dword ptr [EBP + 0x66]      ; 0047f58a
    MOV EDX,dword ptr [0x02d7a7b8]      ; 0047f58d | INT_02d7a7b8
    SAR EAX,0x1                         ; 0047f593
    ADD EAX,EDX                         ; 0047f595
    MOV dword ptr [EBP + 0x72],EAX      ; 0047f597
    FLD float ptr [EBP + 0x72]          ; 0047f59a
    FCOMP float ptr [0x0065ca34]        ; 0047f59d | FLOAT_0065ca34
    FNSTSW AX                           ; 0047f5a3
    SAHF                                ; 0047f5a5
    JC 0x0047f5f0                       ; 0047f5a6
        ;   XREF to: 0047f5f0 (CONDITIONAL_JUMP)  ; LAB_0047f5f0
    PUSH 0x1                            ; 0047f5a8
    PUSH 0x2                            ; 0047f5aa
    PUSH ESI                            ; 0047f5ac
        ;   Label: LAB_0047f5ac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f5ad
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f5b2
    MOV ECX,dword ptr [EBX + 0xbec4]    ; 0047f5b5
    PUSH ECX                            ; 0047f5bb
    MOV ESI,dword ptr [0x00681ef8]      ; 0047f5bc | g_CSoundPtr
    PUSH ESI                            ; 0047f5c2 | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 0047f5c3
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0047f5c8
    TEST EAX,EAX                        ; 0047f5cb
    JNZ 0x0047f252                      ; 0047f5cd
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x620fef                       ; 0047f5d3 | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047f5d8
    PUSH EBX                            ; 0047f5de
    CALL dword ptr [EAX + 0x24]         ; 0047f5df
    ADD ESP,0x8                         ; 0047f5e2
    MOV dword ptr [EBX + 0xbec4],EAX    ; 0047f5e5
    JMP 0x0047f252                      ; 0047f5eb
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0047f5f0
        ;   Label: LAB_0047f5f0
    PUSH 0x1                            ; 0047f5f2
    JMP 0x0047f5ac                      ; 0047f5f4
        ;   XREF to: 0047f5ac (UNCONDITIONAL_JUMP)  ; LAB_0047f5ac
    PUSH dword ptr [EBP + 0x92]         ; 0047f5f6
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047f5fc
    PUSH EBX                            ; 0047f602
    CALL dword ptr [EAX + 0x158]        ; 0047f603
    ADD ESP,0x8                         ; 0047f609
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 0047f60c
    LEA ESI,[EBX + 0x158]               ; 0047f612
    TEST EDX,EDX                        ; 0047f618
    JZ 0x0047f737                       ; 0047f61a
        ;   XREF to: 0047f737 (CONDITIONAL_JUMP)  ; LAB_0047f737
    MOV EAX,EDX                         ; 0047f620
    LEA EDX,[EBX + 0x20]                ; 0047f622
    FLD float ptr [EDX]                 ; 0047f625
    FSUB float ptr [EAX + 0x20]         ; 0047f627
    FSTP float ptr [EBP + 0x2e]         ; 0047f62a
    FLD float ptr [EDX + 0x4]           ; 0047f62d
    FSUB float ptr [EAX + 0x24]         ; 0047f630
    FST float ptr [EBP + 0x32]          ; 0047f633
    FMUL float ptr [EBP + 0x32]         ; 0047f636
    FLD float ptr [EBP + 0x2e]          ; 0047f639
    FMUL ST0                            ; 0047f63c
    FLD float ptr [EDX + 0x8]           ; 0047f63e
    FSUB float ptr [EAX + 0x28]         ; 0047f641
    FXCH                                ; 0047f644
    FADDP ST2,ST0                       ; 0047f646
    FST float ptr [EBP + 0x36]          ; 0047f648
    FMUL float ptr [EBP + 0x36]         ; 0047f64b
    FADDP                               ; 0047f64e
    FSQRT                               ; 0047f650
    FCOMP float ptr [0x0065ca34]        ; 0047f652 | FLOAT_0065ca34
    FNSTSW AX                           ; 0047f658
    SAHF                                ; 0047f65a
    JBE 0x0047f66e                      ; 0047f65b
        ;   XREF to: 0047f66e (CONDITIONAL_JUMP)  ; LAB_0047f66e
    CMP EDI,0x1                         ; 0047f65d
    JNZ 0x0047f66e                      ; 0047f660
        ;   XREF to: 0047f66e (CONDITIONAL_JUMP)  ; LAB_0047f66e
    PUSH EDI                            ; 0047f662
    PUSH 0x2                            ; 0047f663
    PUSH ESI                            ; 0047f665
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f666
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f66b
    MOV EAX,[0x0065ca28]                ; 0047f66e | FLOAT_0065ca28
        ;   Label: LAB_0047f66e
    PUSH 0x3e32b8c2                     ; 0047f673
    MOV dword ptr [EBP + 0x6e],EAX      ; 0047f678
    LEA EAX,[EBX + 0x23ac]              ; 0047f67b
    PUSH 0x3f000000                     ; 0047f681
    MOV dword ptr [EAX + 0x8],0x0       ; 0047f686
    XOR ECX,ECX                         ; 0047f68d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047f68f
    MOV dword ptr [EAX + 0x4],EDX       ; 0047f692
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047f695
    MOV dword ptr [EAX],EDX             ; 0047f698
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0047f69a
    MOV dword ptr [EBP + -0x1a],ECX     ; 0047f69d
    MOV dword ptr [EBP + -0x12],EAX     ; 0047f6a0
    LEA EAX,[EBP + -0x1a]               ; 0047f6a3
    MOV dword ptr [EBP + -0x16],ECX     ; 0047f6a6
    PUSH EAX                            ; 0047f6a9
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0047f6aa
    PUSH EAX                            ; 0047f6b0
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047f6b1
    CALL dword ptr [EDX + 0xbc]         ; 0047f6b7
    ADD ESP,0x4                         ; 0047f6bd
    PUSH EAX                            ; 0047f6c0
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0047f6c1
    ADD EAX,0x20                        ; 0047f6c7
    PUSH EAX                            ; 0047f6ca
    PUSH EBX                            ; 0047f6cb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0047f6cc
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0047f6d1
    LEA ESI,[EBX + 0x158]               ; 0047f6d4
    TEST EAX,EAX                        ; 0047f6da
    JL 0x0047f76d                       ; 0047f6dc
        ;   XREF to: 0047f76d (CONDITIONAL_JUMP)  ; LAB_0047f76d
    JLE 0x0047f252                      ; 0047f6e2
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xbe38]        ; 0047f6e8
    FLDZ                                ; 0047f6ee
    FCOMPP                              ; 0047f6f0
    FNSTSW AX                           ; 0047f6f2
    SAHF                                ; 0047f6f4
    JC 0x0047f252                       ; 0047f6f5
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x3f800000                     ; 0047f6fb
    PUSH 0x0                            ; 0047f700
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0047f702
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0047f707
    ADD ESP,0x8                         ; 0047f70a
    FLD float ptr [EBP + 0x76]          ; 0047f70d
    FCOMP double ptr [0x00621029]       ; 0047f710 | DOUBLE_00621029
    FNSTSW AX                           ; 0047f716
    SAHF                                ; 0047f718
    JA 0x0047f794                       ; 0047f719
        ;   XREF to: 0047f794 (CONDITIONAL_JUMP)  ; LAB_0047f794
    PUSH 0x1                            ; 0047f71b
    PUSH 0x4                            ; 0047f71d
    PUSH ESI                            ; 0047f71f
        ;   Label: LAB_0047f71f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f720
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f725
    MOV dword ptr [EBX + 0xbe38],0x40200000 ; 0047f728
    JMP 0x0047f252                      ; 0047f732
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 0047f737
        ;   Label: LAB_0047f737
    PUSH EBX                            ; 0047f73d
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 0047f73e
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0047f743
    TEST EAX,EAX                        ; 0047f746
    JZ 0x0047f75c                       ; 0047f748
        ;   XREF to: 0047f75c (CONDITIONAL_JUMP)  ; LAB_0047f75c
    PUSH 0x1                            ; 0047f74a
    PUSH 0x1                            ; 0047f74c
    PUSH ESI                            ; 0047f74e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f74f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f754
    JMP 0x0047f252                      ; 0047f757
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0047f75c
        ;   Label: LAB_0047f75c
    PUSH EAX                            ; 0047f75e
    PUSH ESI                            ; 0047f75f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f760
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f765
    JMP 0x0047f252                      ; 0047f768
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 0047f76d
        ;   Label: LAB_0047f76d
    PUSH 0x620ff8                       ; 0047f76e | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 0047f773 | g_CConsolePtr
    PUSH EDI                            ; 0047f779 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0047f77a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047f77f
    PUSH 0x1                            ; 0047f782
    PUSH 0x0                            ; 0047f784
    PUSH ESI                            ; 0047f786
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0047f787
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0047f78c
    JMP 0x0047f252                      ; 0047f78f
        ;   XREF to: 0047f252 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0047f794
        ;   Label: LAB_0047f794
    PUSH 0x3                            ; 0047f796
    JMP 0x0047f71f                      ; 0047f798
        ;   XREF to: 0047f71f (UNCONDITIONAL_JUMP)  ; LAB_0047f71f
    CMP EDI,0x7                         ; 0047f79a
        ;   Label: LAB_0047f79a
    JA 0x0047f252                       ; 0047f79d
        ;   XREF to: 0047f252 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EDI*0x4 + 0x47f118]  ; 0047f7a3 | caseD_0 | caseD_2 | caseD_4
        ;   Label: switchD

