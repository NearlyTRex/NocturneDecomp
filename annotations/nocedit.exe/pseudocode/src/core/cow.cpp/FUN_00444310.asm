; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cow.cpp_FUN_00444310()
;
; Local Variables:
; undefined1       Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
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
;   undefined4 DAT_0065c098
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CConsole g_ConsolePtr
;   CGore g_CGoreInstance
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   core_enemy.cpp_FUN_004a9880
;   core_gore.cpp_FUN_004ede30
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444310
        ;   Label: core_cow.cpp_FUN_00444310
    PUSH ESI                            ; 00444311
    PUSH EDI                            ; 00444312
    PUSH EBP                            ; 00444313
    MOV EBP,ESP                         ; 00444314
    SUB ESP,0xb0                        ; 00444316
    SUB EBP,0x7a                        ; 0044431c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0044431f
    PUSH dword ptr [EBP + 0x92]         ; 00444325
    PUSH EBX                            ; 0044432b
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 0044432c | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444331
    TEST EAX,EAX                        ; 00444334
    JZ 0x0044454d                       ; 00444336 | LAB_0044454d
        ;   XREF to: 0044454d (CONDITIONAL_JUMP)
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
    JC 0x00444555                       ; 00444373 | LAB_00444555
        ;   XREF to: 00444555 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe24]        ; 00444379
    FLD float ptr [EBP + 0x92]          ; 0044437f
    FMUL double ptr [0x00619545]        ; 00444385 | double DOUBLE_00619545
    FMULP                               ; 0044438b
    FMUL double ptr [0x0061954d]        ; 0044438d | double DOUBLE_0061954d
    FLD float ptr [EBX + 0x23b4]        ; 00444393
    PUSH ESI                            ; 00444399
    FSTP float ptr [EBX + 0x2434]       ; 0044439a
    FSTP float ptr [EBX + 0x2438]       ; 004443a0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004443a6 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004443ab
    PUSH dword ptr [EBP + 0x92]         ; 004443ae
    PUSH EBX                            ; 004443b4
    MOV EDI,dword ptr [EAX + 0x24]      ; 004443b5
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 004443b8 | int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004443bd
    TEST EAX,EAX                        ; 004443c0
    JZ 0x00444824                       ; 004443c2 | LAB_00444824
        ;   XREF to: 00444824 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004443c8
    CMP EAX,0x2                         ; 004443ce
    JNC 0x00444595                      ; 004443d1 | LAB_00444595
        ;   XREF to: 00444595 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 004443d7
    JNZ 0x004445a0                      ; 004443da | LAB_004445a0
        ;   XREF to: 004445a0 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004443e0
        ;   Label: LAB_004443e0
    PUSH 0x1                            ; 004443e2
    LEA EAX,[EBX + 0x158]               ; 004443e4
        ;   Label: LAB_004443e4
    PUSH EAX                            ; 004443ea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004443eb | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
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
    JNC 0x0044442c                      ; 00444418 | LAB_0044442c
        ;   XREF to: 0044442c (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 0044441a
    FSUB float ptr [EBP + 0x92]         ; 00444420
    FSTP float ptr [EBX + 0xbe38]       ; 00444426
    PUSH EBX                            ; 0044442c
        ;   Label: LAB_0044442c
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 0044442d | int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00444432
    TEST EAX,EAX                        ; 00444435
    JZ 0x00444526                       ; 00444437 | LAB_00444526
        ;   XREF to: 00444526 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 0044443d
    TEST ECX,ECX                        ; 00444443
    JZ 0x00444471                       ; 00444445 | LAB_00444471
        ;   XREF to: 00444471 (CONDITIONAL_JUMP)
    PUSH ECX                            ; 00444447
    MOV EDX,dword ptr [ECX + 0x154]     ; 00444448
    CALL dword ptr [EDX + 0x108]        ; 0044444e
    ADD ESP,0x4                         ; 00444454
    CMP EAX,EBX                         ; 00444457
    JNZ 0x00444471                      ; 00444459 | LAB_00444471
        ;   XREF to: 00444471 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 0044445b
    PUSH ESI                            ; 00444461
    MOV EDI,dword ptr [0x006810c8]      ; 00444462 | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 00444468 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00444469 | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044446e
    FLD float ptr [EBP + 0x92]          ; 00444471
        ;   Label: LAB_00444471
    FLD ST0                             ; 00444477
    FMUL double ptr [0x00619555]        ; 00444479 | double DOUBLE_00619555
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
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 0044451e | void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444523
    PUSH EBX                            ; 00444526
        ;   Label: LAB_00444526
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00444527 | void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044452c
    LEA EAX,[EBX + 0x158]               ; 0044452f
    PUSH EAX                            ; 00444535
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00444536 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044453b
    PUSH dword ptr [EBP + 0x92]         ; 0044453e
    PUSH EBX                            ; 00444544
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 00444545 | void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
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
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0044455a | int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044455f
    PUSH EAX                            ; 00444562
    PUSH EBX                            ; 00444563
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00444564 | void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444569
    JMP 0x00444369                      ; 0044456c | LAB_00444369
        ;   XREF to: 00444369 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00444571
        ;   Label: LAB_00444571
    PUSH 0x0                            ; 00444573
    PUSH ESI                            ; 00444575
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444576 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044457b
    PUSH EBX                            ; 0044457e
    PUSH 0x6194ea                       ; 0044457f | = "%s confused while walking to scriptDe..." | s_s_confused_while_walking_006194ea = %s confused while walking to scriptDest!

    MOV EDX,dword ptr [0x0066e8e0]      ; 00444584 | CConsole * g_CConsolePtr
    PUSH EDX                            ; 0044458a | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0044458b | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    JMP 0x004443f0                      ; 00444590 | LAB_004443f0
        ;   XREF to: 004443f0 (UNCONDITIONAL_JUMP)
    JBE 0x004443e0                      ; 00444595 | LAB_004443e0
        ;   Label: LAB_00444595
        ;   XREF to: 004443e0 (CONDITIONAL_JUMP)
    CMP EAX,0x3                         ; 0044459b
    JZ 0x00444571                       ; 0044459e | LAB_00444571
        ;   XREF to: 00444571 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004445a0
        ;   Label: LAB_004445a0
    PUSH 0x0                            ; 004445a2
    JMP 0x004443e4                      ; 004445a4 | LAB_004443e4
        ;   XREF to: 004443e4 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x36]               ; 004445a9
        ;   Label: caseD_2
    PUSH EAX                            ; 004445ac
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004445ad | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004445b2
    PUSH 0x41700000                     ; 004445b5
    PUSH 0x40e00000                     ; 004445ba
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004445bf | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
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
    PUSH 0x3f87558                      ; 004445fc | CVector3f g_ZeroVector
    LEA EAX,[EBP + 0x4e]                ; 00444601
    PUSH EAX                            ; 00444604
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00444605 | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044460a
    PUSH EAX                            ; 0044460d
    LEA EAX,[EBP + 0x5a]                ; 0044460e
    PUSH EAX                            ; 00444611
    PUSH EBX                            ; 00444612
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00444613 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00444618
    PUSH EAX                            ; 0044461b
    PUSH EBX                            ; 0044461c
    CALL core_enemy.cpp_FUN_004a9880    ; 0044461d | undefined core_enemy.cpp_FUN_004a9880()
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00444622
    JMP 0x0044440b                      ; 00444625 | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe28],0x0    ; 0044462a
        ;   Label: caseD_5
    JNZ 0x0044440b                      ; 00444631 | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xdc],0x0      ; 00444637
    JNZ 0x0044440b                      ; 0044463e | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00444644
    LEA EAX,[EBP + 0x12]                ; 00444645
        ;   Label: LAB_00444645
    PUSH EAX                            ; 00444648
    PUSH ESI                            ; 00444649
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0044464a | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044464f
    PUSH EAX                            ; 00444652
    LEA EAX,[EBP + 0x6]                 ; 00444653
    PUSH EAX                            ; 00444656
    PUSH EBX                            ; 00444657
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00444658 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044465d
    PUSH 0x0                            ; 00444660
    LEA EAX,[EBP + 0x6]                 ; 00444662
    PUSH EAX                            ; 00444665
    MOV ESI,dword ptr [0x0067b9a0]      ; 00444666 | CGore * g_CGorePtr
    PUSH ESI                            ; 0044466c | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004ede30     ; 0044466d | undefined core_gore.cpp_FUN_004ede30()
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00444672
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00444675
    JMP 0x0044440b                      ; 0044467f | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 00444684
        ;   Label: caseD_0
    PUSH EBX                            ; 0044468a
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 0044468b | void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444690
    TEST EAX,EAX                        ; 00444693
    JZ 0x004446a9                       ; 00444695 | LAB_004446a9
        ;   XREF to: 004446a9 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00444697
    PUSH 0x1                            ; 00444699
    PUSH ESI                            ; 0044469b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0044469c | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004446a1
    JMP 0x0044440b                      ; 004446a4 | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 004446a9
        ;   Label: LAB_004446a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004446af
    PUSH EBX                            ; 004446b5
    CALL dword ptr [EAX + 0x158]        ; 004446b6
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004446bc
    ADD ESP,0x8                         ; 004446c2
    TEST ESI,ESI                        ; 004446c5
    JZ 0x0044440b                       ; 004446c7 | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0xbec4]    ; 004446cd
    PUSH EDI                            ; 004446d3
    MOV EAX,[0x00681ef8]                ; 004446d4 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EAX                            ; 004446d9 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 004446da | void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004446df
    TEST EAX,EAX                        ; 004446e2
    JNZ 0x004446fe                      ; 004446e4 | LAB_004446fe
        ;   XREF to: 004446fe (CONDITIONAL_JUMP)
    PUSH 0x619514                       ; 004446e6 | = "cow?.wav" | s_cow_wav_00619514 = cow?.wav
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
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444709 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044470e
    JMP 0x0044440b                      ; 00444711 | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 00444716
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044471c
    PUSH EBX                            ; 00444722
    CALL dword ptr [EAX + 0x158]        ; 00444723
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00444729
    ADD ESP,0x8                         ; 0044472f
    TEST EDI,EDI                        ; 00444732
    JNZ 0x0044475e                      ; 00444734 | LAB_0044475e
        ;   XREF to: 0044475e (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 00444736
    PUSH EBX                            ; 0044473c
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 0044473d | void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444742
    TEST EAX,EAX                        ; 00444745
    JNZ 0x0044440b                      ; 00444747 | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0044474d
    PUSH EDI                            ; 0044474f
    PUSH ESI                            ; 00444750
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444751 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00444756
    JMP 0x0044440b                      ; 00444759 | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0065c098]                ; 0044475e | undefined4 DAT_0065c098
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
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004447bc | int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004447c1
    TEST EAX,EAX                        ; 004447c4
    JL 0x004447fd                       ; 004447c6 | LAB_004447fd
        ;   XREF to: 004447fd (CONDITIONAL_JUMP)
    JLE 0x0044440b                      ; 004447c8 | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 004447ce
    FLDZ                                ; 004447d4
    FCOMPP                              ; 004447d6
    FNSTSW AX                           ; 004447d8
    SAHF                                ; 004447da
    JC 0x0044440b                       ; 004447db | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004447e1
    PUSH 0x2                            ; 004447e3
    PUSH ESI                            ; 004447e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004447e6 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004447eb
    MOV dword ptr [EBX + 0xbe38],0x40200000 ; 004447ee
    JMP 0x0044440b                      ; 004447f8 | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004447fd
        ;   Label: LAB_004447fd
    PUSH 0x61951d                       ; 004447fe | = "%s gave up chase - I'm confused\n" | s_s_gave_up_chase_I_m_conf_0061951d = %s gave up chase - I'm confused

    MOV ECX,dword ptr [0x0066e8e0]      ; 00444803 | CConsole * g_CConsolePtr
    PUSH ECX                            ; 00444809 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0044480a | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044480f
    PUSH 0x1                            ; 00444812
    PUSH 0x0                            ; 00444814
    PUSH ESI                            ; 00444816
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444817 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0044481c
    JMP 0x0044440b                      ; 0044481f | caseD_4
        ;   XREF to: 0044440b (UNCONDITIONAL_JUMP)
    CMP EDI,0x5                         ; 00444824
        ;   Label: LAB_00444824
    JA 0x0044440b                       ; 00444827 | caseD_4
        ;   XREF to: 0044440b (CONDITIONAL_JUMP)
    JMP dword ptr [EDI*0x4 + 0x4442f4]  ; 0044482d | pointer switchdataD_004442f4
        ;   Label: switchD

