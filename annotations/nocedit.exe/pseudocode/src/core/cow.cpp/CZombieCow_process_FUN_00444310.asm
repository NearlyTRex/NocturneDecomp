; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_process_FUN_00444310(CZombieCow *this_ptr,float delta_time)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; SDamageInfo      Stack[-0xc0]:60  local_c0
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; CVector3f        Stack[-0x54]:12  local_54
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_004442f4 = 00444684
;   TerminatedCString s_s_confused_while_walking_006194ea
;   TerminatedCString s_cow_wav_00619514
;   TerminatedCString s_s_gave_up_chase_I_m_conf_0061951d
;   double DOUBLE_00619545 = 3.14159265350000
;   double DOUBLE_0061954d = 0.25
;   double DOUBLE_00619555 = 32
;   float FLOAT_0065c098 = 4.5
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CConsole g_CConsoleInstance
;   CGore g_CGoreInstance
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
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

    PUSH EBX                            ; 00444310
        ;   Label: core_cow.cpp_CZombieCow_process_FUN_00444310
    PUSH ESI                            ; 00444311
    PUSH EDI                            ; 00444312
    PUSH EBP                            ; 00444313
    MOV EBP,ESP                         ; 00444314
    SUB ESP,0xb0                        ; 00444316
    SUB EBP,0x7a                        ; 0044431c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0044431f
    PUSH dword ptr [EBP + 0x92]         ; 00444325
    PUSH EBX                            ; 0044432b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0044432c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00444331
    TEST EAX,EAX                        ; 00444334
    JZ 0x0044454d                       ; 00444336
        ;   XREF to: 0044454d (CONDITIONAL_JUMP)  ; LAB_0044454d
    LEA EAX,[EBX + 0x23ac]              ; 0044433c
    MOV dword ptr [EAX + 0x8],0x0       ; 00444342
    FLD float ptr [EBP + 0x92]          ; 00444349
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044434f
    MOV dword ptr [EAX + 0x4],EDX       ; 00444352
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444355
    MOV dword ptr [EAX],EDX             ; 00444358
    FMUL float ptr [EBX + 0xbe24]       ; 0044435a
    LEA ESI,[EBX + 0x158]               ; 00444360
    FSTP float ptr [EBP + 0x6e]         ; 00444366
    FLD float ptr [EBP + 0x6e]          ; 00444369
        ;   Label: LAB_00444369
    FLDZ                                ; 0044436c
    FCOMPP                              ; 0044436e
    FNSTSW AX                           ; 00444370
    SAHF                                ; 00444372
    JC 0x00444555                       ; 00444373
        ;   XREF to: 00444555 (CONDITIONAL_JUMP)  ; LAB_00444555
    FLD float ptr [EBX + 0xbe24]        ; 00444379
    FLD float ptr [EBP + 0x92]          ; 0044437f
    FMUL double ptr [0x00619545]        ; 00444385 | DOUBLE_00619545
    FMULP                               ; 0044438b
    FMUL double ptr [0x0061954d]        ; 0044438d | DOUBLE_0061954d
    FLD float ptr [EBX + 0x23b4]        ; 00444393
    PUSH ESI                            ; 00444399
    FSTP float ptr [EBX + 0x2434]       ; 0044439a
    FSTP float ptr [EBX + 0x2438]       ; 004443a0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004443a6
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004443ab
    PUSH dword ptr [EBP + 0x92]         ; 004443ae
    PUSH EBX                            ; 004443b4
    MOV EDI,dword ptr [EAX + 0x24]      ; 004443b5
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 004443b8
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004443bd
    TEST EAX,EAX                        ; 004443c0
    JZ 0x00444824                       ; 004443c2
        ;   XREF to: 00444824 (CONDITIONAL_JUMP)  ; LAB_00444824
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004443c8
    CMP EAX,0x2                         ; 004443ce
    JNC 0x00444595                      ; 004443d1
        ;   XREF to: 00444595 (CONDITIONAL_JUMP)  ; LAB_00444595
    CMP EAX,0x1                         ; 004443d7
    JNZ 0x004445a0                      ; 004443da
        ;   XREF to: 004445a0 (CONDITIONAL_JUMP)  ; LAB_004445a0
    PUSH 0x1                            ; 004443e0
        ;   Label: LAB_004443e0
    PUSH 0x1                            ; 004443e2
    LEA EAX,[EBX + 0x158]               ; 004443e4
        ;   Label: LAB_004443e4
    PUSH EAX                            ; 004443ea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004443eb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004443f0
        ;   Label: LAB_004443f0
    LEA EAX,[EBX + 0x23ac]              ; 004443f3
    MOV dword ptr [EAX + 0x8],0x0       ; 004443f9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444400
    MOV dword ptr [EAX + 0x4],EDX       ; 00444403
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444406
    MOV dword ptr [EAX],EDX             ; 00444409
    FLD float ptr [EBX + 0xbe38]        ; 0044440b
        ;   Label: caseD_3
    FLDZ                                ; 00444411
    FCOMPP                              ; 00444413
    FNSTSW AX                           ; 00444415
    SAHF                                ; 00444417
    JNC 0x0044442c                      ; 00444418
        ;   XREF to: 0044442c (CONDITIONAL_JUMP)  ; LAB_0044442c
    FLD float ptr [EBX + 0xbe38]        ; 0044441a
    FSUB float ptr [EBP + 0x92]         ; 00444420
    FSTP float ptr [EBX + 0xbe38]       ; 00444426
    PUSH EBX                            ; 0044442c
        ;   Label: LAB_0044442c
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 0044442d
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00444432
    TEST EAX,EAX                        ; 00444435
    JZ 0x00444526                       ; 00444437
        ;   XREF to: 00444526 (CONDITIONAL_JUMP)  ; LAB_00444526
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 0044443d
    TEST ECX,ECX                        ; 00444443
    JZ 0x00444471                       ; 00444445
        ;   XREF to: 00444471 (CONDITIONAL_JUMP)  ; LAB_00444471
    PUSH ECX                            ; 00444447
    MOV EDX,dword ptr [ECX + 0x154]     ; 00444448
    CALL dword ptr [EDX + 0x108]        ; 0044444e
    ADD ESP,0x4                         ; 00444454
    CMP EAX,EBX                         ; 00444457
    JNZ 0x00444471                      ; 00444459
        ;   XREF to: 00444471 (CONDITIONAL_JUMP)  ; LAB_00444471
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 0044445b
    PUSH ESI                            ; 00444461
    MOV EDI,dword ptr [0x006810c8]      ; 00444462 | g_CDemonSetPtr
    PUSH EDI                            ; 00444468 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00444469
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0044446e
    FLD float ptr [EBP + 0x92]          ; 00444471
        ;   Label: LAB_00444471
    FLD ST0                             ; 00444477
    FMUL double ptr [0x00619555]        ; 00444479 | DOUBLE_00619555
    FLD float ptr [EBX + 0x242c]        ; 0044447f
    FXCH                                ; 00444485
    FSUBR ST0,ST1                       ; 00444487
    LEA EDX,[EBX + 0x2428]              ; 00444489
    FSTP ST1                            ; 0044448f
    FSTP float ptr [EBX + 0x242c]       ; 00444491
    FLD float ptr [EDX]                 ; 00444497
    FMUL ST1                            ; 00444499
    FSTP float ptr [EBP + 0x42]         ; 0044449b
    FLD float ptr [EDX + 0x4]           ; 0044449e
    FMUL ST1                            ; 004444a1
    LEA EAX,[EBX + 0x241c]              ; 004444a3
    FSTP float ptr [EBP + 0x46]         ; 004444a9
    FMUL float ptr [EDX + 0x8]          ; 004444ac
    LEA ESI,[EBX + 0x23ac]              ; 004444af
    FLD float ptr [EBP + 0x42]          ; 004444b5
    FXCH                                ; 004444b8
    FSTP float ptr [EBP + 0x4a]         ; 004444ba
    FADD float ptr [EAX]                ; 004444bd
    FLD float ptr [EBP + 0x46]          ; 004444bf
    FXCH                                ; 004444c2
    FSTP float ptr [EBP + 0x2a]         ; 004444c4
    FADD float ptr [EAX + 0x4]          ; 004444c7
    FLD float ptr [EBP + 0x4a]          ; 004444ca
    FXCH                                ; 004444cd
    FSTP float ptr [EBP + 0x2e]         ; 004444cf
    FADD float ptr [EAX + 0x8]          ; 004444d2 | DAT_00002424
    FLD float ptr [EBP + 0x2a]          ; 004444d5
    FXCH                                ; 004444d8
    FSTP float ptr [EBP + 0x32]         ; 004444da
    FADD float ptr [ESI]                ; 004444dd
    FLD float ptr [EBP + 0x2e]          ; 004444df
    FXCH                                ; 004444e2
    FSTP float ptr [EBP + 0x1e]         ; 004444e4
    FADD float ptr [ESI + 0x4]          ; 004444e7
    FLD float ptr [EBP + 0x32]          ; 004444ea
    FXCH                                ; 004444ed
    FSTP float ptr [EBP + 0x22]         ; 004444ef
    FADD float ptr [ESI + 0x8]          ; 004444f2
    FSTP float ptr [EBP + 0x26]         ; 004444f5
    MOV dword ptr [EAX + 0x8],0x0       ; 004444f8 | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 004444ff | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 00444502
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444505
    MOV dword ptr [EAX],EDX             ; 00444508
    MOV dword ptr [ESI + 0x8],0x0       ; 0044450a
    LEA EAX,[EBP + 0x1e]                ; 00444511
    FLD float ptr [ESI + 0x8]           ; 00444514
    PUSH EAX                            ; 00444517
    FST float ptr [ESI + 0x4]           ; 00444518
    PUSH EBX                            ; 0044451b
    FSTP float ptr [ESI]                ; 0044451c
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 0044451e
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00444523
    PUSH EBX                            ; 00444526
        ;   Label: LAB_00444526
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 00444527
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0044452c
    LEA EAX,[EBX + 0x158]               ; 0044452f
    PUSH EAX                            ; 00444535
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00444536
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044453b
    PUSH dword ptr [EBP + 0x92]         ; 0044453e
    PUSH EBX                            ; 00444544
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00444545
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0044454a
    LEA ESP,[EBP + 0x7a]                ; 0044454d
        ;   Label: LAB_0044454d
    POP EBP                             ; 00444550
    POP EDI                             ; 00444551
    POP ESI                             ; 00444552
    POP EBX                             ; 00444553
    RET                                 ; 00444554
    LEA EAX,[EBP + 0x6e]                ; 00444555
        ;   Label: LAB_00444555
    PUSH EAX                            ; 00444558
    PUSH ESI                            ; 00444559
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0044455a
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0044455f
    PUSH EAX                            ; 00444562
    PUSH EBX                            ; 00444563
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 00444564
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00444569
    JMP 0x00444369                      ; 0044456c
        ;   XREF to: 00444369 (UNCONDITIONAL_JUMP)  ; LAB_00444369
    PUSH 0x1                            ; 00444571
        ;   Label: LAB_00444571
    PUSH 0x0                            ; 00444573
    PUSH ESI                            ; 00444575
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444576
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044457b
    PUSH EBX                            ; 0044457e
    PUSH 0x6194ea                       ; 0044457f | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 00444584 | g_CConsolePtr
    PUSH EDX                            ; 0044458a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0044458b
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004443f0                      ; 00444590
        ;   XREF to: 004443f0 (UNCONDITIONAL_JUMP)  ; LAB_004443f0
    JBE 0x004443e0                      ; 00444595
        ;   XREF to: 004443e0 (CONDITIONAL_JUMP)  ; LAB_004443e0
        ;   Label: LAB_00444595
    CMP EAX,0x3                         ; 0044459b
    JZ 0x00444571                       ; 0044459e
        ;   XREF to: 00444571 (CONDITIONAL_JUMP)  ; LAB_00444571
    PUSH 0x1                            ; 004445a0
        ;   Label: LAB_004445a0
    PUSH 0x0                            ; 004445a2
    JMP 0x004443e4                      ; 004445a4
        ;   XREF to: 004443e4 (UNCONDITIONAL_JUMP)  ; LAB_004443e4
    LEA EAX,[EBP + -0x36]               ; 004445a9
        ;   Label: caseD_2
    PUSH EAX                            ; 004445ac
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004445ad
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004445b2
    PUSH 0x41700000                     ; 004445b5
    PUSH 0x40e00000                     ; 004445ba
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004445bf
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004445c4
    MOV dword ptr [EBP + -0x2],EBX      ; 004445c7
    MOV dword ptr [EBP + 0x2],EBX       ; 004445ca
    ADD ESP,0x8                         ; 004445cd
    FLD float ptr [EBP + 0x76]          ; 004445d0
    LEA EAX,[EBP + -0x36]               ; 004445d3
    FSTP float ptr [EBP + -0x32]        ; 004445d6
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 004445d9
    PUSH EAX                            ; 004445df
    LEA EAX,[EDX*0x4 + 0x0]             ; 004445e0
    SUB EAX,EDX                         ; 004445e7
    MOV EDX,EAX                         ; 004445e9
    SHL EDX,0x4                         ; 004445eb
    LEA EAX,[EBX + 0xfd8]               ; 004445ee
    ADD EAX,EDX                         ; 004445f4
    PUSH 0x3f333333                     ; 004445f6
    PUSH EAX                            ; 004445fb
    PUSH 0x3f87558                      ; 004445fc | g_ZeroVector
    LEA EAX,[EBP + 0x4e]                ; 00444601
    PUSH EAX                            ; 00444604
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00444605
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0044460a
    PUSH EAX                            ; 0044460d
    LEA EAX,[EBP + 0x5a]                ; 0044460e
    PUSH EAX                            ; 00444611
    PUSH EBX                            ; 00444612
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00444613
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00444618
    PUSH EAX                            ; 0044461b
    PUSH EBX                            ; 0044461c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 0044461d
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00444622
    JMP 0x0044440b                      ; 00444625
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xbe28],0x0    ; 0044462a
        ;   Label: caseD_5
    JNZ 0x0044440b                      ; 00444631
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 00444637
    JNZ 0x0044440b                      ; 0044463e
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EAX                            ; 00444644
    LEA EAX,[EBP + 0x12]                ; 00444645
        ;   Label: LAB_00444645
    PUSH EAX                            ; 00444648
    PUSH ESI                            ; 00444649
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0044464a
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0044464f
    PUSH EAX                            ; 00444652
    LEA EAX,[EBP + 0x6]                 ; 00444653
    PUSH EAX                            ; 00444656
    PUSH EBX                            ; 00444657
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00444658
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0044465d
    PUSH 0x0                            ; 00444660
    LEA EAX,[EBP + 0x6]                 ; 00444662
    PUSH EAX                            ; 00444665
    MOV ESI,dword ptr [0x0067b9a0]      ; 00444666 | g_CGorePtr
    PUSH ESI                            ; 0044466c | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 0044466d
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00444672
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00444675
    JMP 0x0044440b                      ; 0044467f
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00444684
        ;   Label: caseD_0
    PUSH EBX                            ; 0044468a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 0044468b
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00444690
    TEST EAX,EAX                        ; 00444693
    JZ 0x004446a9                       ; 00444695
        ;   XREF to: 004446a9 (CONDITIONAL_JUMP)  ; LAB_004446a9
    PUSH 0x1                            ; 00444697
    PUSH 0x1                            ; 00444699
    PUSH ESI                            ; 0044469b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0044469c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004446a1
    JMP 0x0044440b                      ; 004446a4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004446a9
        ;   Label: LAB_004446a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004446af
    PUSH EBX                            ; 004446b5
    CALL dword ptr [EAX + 0x158]        ; 004446b6
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004446bc
    ADD ESP,0x8                         ; 004446c2
    TEST ESI,ESI                        ; 004446c5
    JZ 0x0044440b                       ; 004446c7
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0xbec4]    ; 004446cd
    PUSH EDI                            ; 004446d3
    MOV EAX,[0x00681ef8]                ; 004446d4 | g_CSoundPtr | g_CSoundInstance
    PUSH EAX                            ; 004446d9 | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 004446da
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004446df
    TEST EAX,EAX                        ; 004446e2
    JNZ 0x004446fe                      ; 004446e4
        ;   XREF to: 004446fe (CONDITIONAL_JUMP)  ; LAB_004446fe
    PUSH 0x619514                       ; 004446e6 | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004446eb
    PUSH EBX                            ; 004446f1
    CALL dword ptr [EAX + 0x24]         ; 004446f2
    ADD ESP,0x8                         ; 004446f5
    MOV dword ptr [EBX + 0xbec4],EAX    ; 004446f8
    PUSH 0x1                            ; 004446fe
        ;   Label: LAB_004446fe
    PUSH 0x1                            ; 00444700
    LEA EAX,[EBX + 0x158]               ; 00444702
    PUSH EAX                            ; 00444708
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444709
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044470e
    JMP 0x0044440b                      ; 00444711
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00444716
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044471c
    PUSH EBX                            ; 00444722
    CALL dword ptr [EAX + 0x158]        ; 00444723
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00444729
    ADD ESP,0x8                         ; 0044472f
    TEST EDI,EDI                        ; 00444732
    JNZ 0x0044475e                      ; 00444734
        ;   XREF to: 0044475e (CONDITIONAL_JUMP)  ; LAB_0044475e
    PUSH dword ptr [EBP + 0x92]         ; 00444736
    PUSH EBX                            ; 0044473c
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 0044473d
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00444742
    TEST EAX,EAX                        ; 00444745
    JNZ 0x0044440b                      ; 00444747
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0044474d
    PUSH EDI                            ; 0044474f
    PUSH ESI                            ; 00444750
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444751
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00444756
    JMP 0x0044440b                      ; 00444759
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x0065c098]                ; 0044475e | FLOAT_0065c098
        ;   Label: LAB_0044475e
    MOV dword ptr [EBP + 0x72],EAX      ; 00444763
    LEA EAX,[EBX + 0x23ac]              ; 00444766
    MOV dword ptr [EAX + 0x8],0x0       ; 0044476c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444773
    MOV dword ptr [EAX + 0x4],EDX       ; 00444776
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444779
    MOV dword ptr [EAX],EDX             ; 0044477c
    XOR EAX,EAX                         ; 0044477e
    MOV dword ptr [EBP + 0x36],EAX      ; 00444780
    MOV dword ptr [EBP + 0x3a],EAX      ; 00444783
    MOV EAX,dword ptr [EBP + 0x72]      ; 00444786
    PUSH 0x3e32b8c2                     ; 00444789
    MOV dword ptr [EBP + 0x3e],EAX      ; 0044478e
    LEA EAX,[EBP + 0x36]                ; 00444791
    PUSH 0x3f000000                     ; 00444794
    PUSH EAX                            ; 00444799
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0044479a
    PUSH EAX                            ; 004447a0
    MOV EDX,dword ptr [EAX + 0x154]     ; 004447a1
    CALL dword ptr [EDX + 0xbc]         ; 004447a7
    ADD ESP,0x4                         ; 004447ad
    PUSH EAX                            ; 004447b0
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004447b1
    ADD EAX,0x20                        ; 004447b7
    PUSH EAX                            ; 004447ba
    PUSH EBX                            ; 004447bb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004447bc
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004447c1
    TEST EAX,EAX                        ; 004447c4
    JL 0x004447fd                       ; 004447c6
        ;   XREF to: 004447fd (CONDITIONAL_JUMP)  ; LAB_004447fd
    JLE 0x0044440b                      ; 004447c8
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbe38]        ; 004447ce
    FLDZ                                ; 004447d4
    FCOMPP                              ; 004447d6
    FNSTSW AX                           ; 004447d8
    SAHF                                ; 004447da
    JC 0x0044440b                       ; 004447db
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004447e1
    PUSH 0x2                            ; 004447e3
    PUSH ESI                            ; 004447e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004447e6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004447eb
    MOV dword ptr [EBX + 0xbe38],0x40200000 ; 004447ee
    JMP 0x0044440b                      ; 004447f8
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 004447fd
        ;   Label: LAB_004447fd
    PUSH 0x61951d                       ; 004447fe | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 00444803 | g_CConsolePtr
    PUSH ECX                            ; 00444809 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0044480a
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0044480f
    PUSH 0x1                            ; 00444812
    PUSH 0x0                            ; 00444814
    PUSH ESI                            ; 00444816
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444817
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044481c
    JMP 0x0044440b                      ; 0044481f
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP EDI,0x5                         ; 00444824
        ;   Label: LAB_00444824
    JA 0x0044440b                       ; 00444827
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x4442f4]  ; 0044482d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

