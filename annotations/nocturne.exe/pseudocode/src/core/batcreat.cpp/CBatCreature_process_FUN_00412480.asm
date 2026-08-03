; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batcreat_cpp_CBatCreature_process_FUN_00412480(CEnemy *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x13c]:1  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
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
;   undefined1* switchdataD_0041245c = 004127d1
;   TerminatedCString s_s_confused_while_walking_0057899e
;   TerminatedCString s_batman_attack_wav_005789c8
;   TerminatedCString s_batman_alert_wav_005789db
;   TerminatedCString s_batman_attack_wav_005789ec
;   TerminatedCString s_batman_attack_wav_005789ff
;   double DOUBLE_00578a17 = 3.14159265350000
;   double DOUBLE_00578a1f = 0.523598775583333
;   double DOUBLE_00578a27 = 2
;   double DOUBLE_00578a2f = 32
;   float FLOAT_00599fac = 3.5
;   float FLOAT_00599fb8 = 10
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   undefined4 DAT_007645a4
;   ... and 2 more
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
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412480
        ;   Label: core_batcreat.cpp_CBatCreature_process_FUN_00412480
    PUSH ESI                            ; 00412481
    PUSH EDI                            ; 00412482
    PUSH EBP                            ; 00412483
    MOV EBP,ESP                         ; 00412484
    SUB ESP,0x12c                       ; 00412486
    SUB EBP,0x7a                        ; 0041248c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041248f
    PUSH dword ptr [EBP + 0x92]         ; 00412495
    PUSH EBX                            ; 0041249b
    CALL core_charactr.cpp_FUN_004259f0 ; 0041249c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004124a1
    TEST EAX,EAX                        ; 004124a4
    JZ 0x0041268c                       ; 004124a6
        ;   XREF to: 0041268c (CONDITIONAL_JUMP)  ; LAB_0041268c
    LEA EAX,[EBX + 0x23a4]              ; 004124ac
    MOV dword ptr [EAX + 0x8],0x0       ; 004124b2
    FLD float ptr [EBP + 0x92]          ; 004124b9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004124bf
    MOV dword ptr [EAX + 0x4],EDX       ; 004124c2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004124c5
    MOV dword ptr [EAX],EDX             ; 004124c8
    FMUL float ptr [EBX + 0xbc8c]       ; 004124ca
    LEA ESI,[EBX + 0x150]               ; 004124d0
    FSTP float ptr [EBP + 0x5e]         ; 004124d6
    FLD float ptr [EBP + 0x5e]          ; 004124d9
        ;   Label: LAB_004124d9
    FLDZ                                ; 004124dc
    FCOMPP                              ; 004124de
    FNSTSW AX                           ; 004124e0
    SAHF                                ; 004124e2
    JC 0x00412694                       ; 004124e3
        ;   XREF to: 00412694 (CONDITIONAL_JUMP)  ; LAB_00412694
    FLD float ptr [EBX + 0xbc8c]        ; 004124e9
    FLD float ptr [EBP + 0x92]          ; 004124ef
    FMUL double ptr [0x00578a17]        ; 004124f5 | DOUBLE_00578a17
    FMULP                               ; 004124fb
    FLD float ptr [EBX + 0x23ac]        ; 004124fd
    LEA ESI,[EBX + 0x150]               ; 00412503
    FSTP float ptr [EBX + 0x242c]       ; 00412509
    PUSH ESI                            ; 0041250f
    FSTP float ptr [EBX + 0x2430]       ; 00412510
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00412516
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0041251b
    PUSH dword ptr [EBP + 0x92]         ; 0041251e
    PUSH EBX                            ; 00412524
    MOV EDI,dword ptr [EAX + 0x24]      ; 00412525
    CALL core_charactr.cpp_FUN_00428c00 ; 00412528
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041252d
    TEST EAX,EAX                        ; 00412530
    JZ 0x00412d69                       ; 00412532
        ;   XREF to: 00412d69 (CONDITIONAL_JUMP)  ; LAB_00412d69
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00412538
    CMP EAX,0x2                         ; 0041253e
    JNC 0x004126db                      ; 00412541
        ;   XREF to: 004126db (CONDITIONAL_JUMP)  ; LAB_004126db
    CMP EAX,0x1                         ; 00412547
    JNZ 0x004126e6                      ; 0041254a
        ;   XREF to: 004126e6 (CONDITIONAL_JUMP)  ; LAB_004126e6
    PUSH 0x1                            ; 00412550
        ;   Label: LAB_00412550
    PUSH 0x1                            ; 00412552
    LEA EAX,[EBX + 0x150]               ; 00412554
        ;   Label: LAB_00412554
    PUSH EAX                            ; 0041255a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041255b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412560
        ;   Label: LAB_00412560
    LEA EAX,[EBX + 0x23a4]              ; 00412563
    MOV dword ptr [EAX + 0x8],0x0       ; 00412569
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412570
    MOV dword ptr [EAX + 0x4],EDX       ; 00412573
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412576
    MOV dword ptr [EAX],EDX             ; 00412579
    FLD float ptr [EBX + 0xbca0]        ; 0041257b
        ;   Label: caseD_2
    FLDZ                                ; 00412581
    FCOMPP                              ; 00412583
    FNSTSW AX                           ; 00412585
    SAHF                                ; 00412587
    JNC 0x0041259c                      ; 00412588
        ;   XREF to: 0041259c (CONDITIONAL_JUMP)  ; LAB_0041259c
    FLD float ptr [EBX + 0xbca0]        ; 0041258a
    FSUB float ptr [EBP + 0x92]         ; 00412590
    FSTP float ptr [EBX + 0xbca0]       ; 00412596
    PUSH EBX                            ; 0041259c
        ;   Label: LAB_0041259c
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 0041259d
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004125a2
    TEST EAX,EAX                        ; 004125a5
    JZ 0x00412665                       ; 004125a7
        ;   XREF to: 00412665 (CONDITIONAL_JUMP)  ; LAB_00412665
    FLD float ptr [EBP + 0x92]          ; 004125ad
    FLD ST0                             ; 004125b3
    FMUL double ptr [0x00578a2f]        ; 004125b5 | DOUBLE_00578a2f
    FLD float ptr [EBX + 0x2424]        ; 004125bb
    FXCH                                ; 004125c1
    FSUBR ST0,ST1                       ; 004125c3
    LEA EDX,[EBX + 0x2420]              ; 004125c5
    FSTP ST1                            ; 004125cb
    FSTP float ptr [EBX + 0x2424]       ; 004125cd
    FLD float ptr [EDX]                 ; 004125d3
    FMUL ST1                            ; 004125d5
    FSTP float ptr [EBP + -0x3a]        ; 004125d7
    FLD float ptr [EDX + 0x4]           ; 004125da
    FMUL ST1                            ; 004125dd
    LEA ESI,[EBX + 0x2414]              ; 004125df
    FSTP float ptr [EBP + -0x36]        ; 004125e5
    FMUL float ptr [EDX + 0x8]          ; 004125e8
    LEA EAX,[EBX + 0x23a4]              ; 004125eb
    FLD float ptr [EBP + -0x3a]         ; 004125f1
    FXCH                                ; 004125f4
    FSTP float ptr [EBP + -0x32]        ; 004125f6
    FADD float ptr [ESI]                ; 004125f9
    FLD float ptr [EBP + -0x36]         ; 004125fb
    FXCH                                ; 004125fe
    FSTP float ptr [EBP + 0x32]         ; 00412600
    FADD float ptr [ESI + 0x4]          ; 00412603
    FLD float ptr [EBP + -0x32]         ; 00412606
    FXCH                                ; 00412609
    FSTP float ptr [EBP + 0x36]         ; 0041260b
    FADD float ptr [ESI + 0x8]          ; 0041260e
    FLD float ptr [EBP + 0x32]          ; 00412611
    FXCH                                ; 00412614
    FSTP float ptr [EBP + 0x3a]         ; 00412616
    FADD float ptr [EAX]                ; 00412619
    FLD float ptr [EBP + 0x36]          ; 0041261b
    FXCH                                ; 0041261e
    FSTP float ptr [EBP + 0x1a]         ; 00412620
    FADD float ptr [EAX + 0x4]          ; 00412623
    FLD float ptr [EBP + 0x3a]          ; 00412626
    FXCH                                ; 00412629
    FSTP float ptr [EBP + 0x1e]         ; 0041262b
    FADD float ptr [EAX + 0x8]          ; 0041262e
    FSTP float ptr [EBP + 0x22]         ; 00412631
    MOV dword ptr [ESI + 0x8],0x0       ; 00412634
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041263b
    MOV dword ptr [ESI + 0x4],EDX       ; 0041263e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00412641
    MOV dword ptr [ESI],EDX             ; 00412644
    MOV dword ptr [EAX + 0x8],0x0       ; 00412646
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041264d
    MOV dword ptr [EAX + 0x4],EDX       ; 00412650
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412653
    MOV dword ptr [EAX],EDX             ; 00412656
    LEA EAX,[EBP + 0x1a]                ; 00412658
    PUSH EAX                            ; 0041265b
    PUSH EBX                            ; 0041265c
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0041265d
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00412662
    PUSH EBX                            ; 00412665
        ;   Label: LAB_00412665
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00412666
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041266b
    LEA EAX,[EBX + 0x150]               ; 0041266e
    PUSH EAX                            ; 00412674
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00412675
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041267a
    PUSH dword ptr [EBP + 0x92]         ; 0041267d
    PUSH EBX                            ; 00412683
    CALL core_charactr.cpp_FUN_0042a150 ; 00412684
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412689
    LEA ESP,[EBP + 0x7a]                ; 0041268c
        ;   Label: LAB_0041268c
    POP EBP                             ; 0041268f
    POP EDI                             ; 00412690
    POP ESI                             ; 00412691
    POP EBX                             ; 00412692
    RET                                 ; 00412693
    LEA EAX,[EBP + 0x5e]                ; 00412694
        ;   Label: LAB_00412694
    PUSH EAX                            ; 00412697
    PUSH ESI                            ; 00412698
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00412699
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0041269e
    PUSH EAX                            ; 004126a1
    PUSH EBX                            ; 004126a2
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004126a3
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004126a8
    JMP 0x004124d9                      ; 004126ab
        ;   XREF to: 004124d9 (UNCONDITIONAL_JUMP)  ; LAB_004124d9
    PUSH 0x1                            ; 004126b0
        ;   Label: LAB_004126b0
    PUSH 0x0                            ; 004126b2
    LEA EAX,[EBX + 0x150]               ; 004126b4
    PUSH EAX                            ; 004126ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004126bb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004126c0
    PUSH EBX                            ; 004126c3
    MOV EAX,0x57899e                    ; 004126c4 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004126c9 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005ad350]      ; 004126ca | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004126d0 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004126d1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00412560                      ; 004126d6
        ;   XREF to: 00412560 (UNCONDITIONAL_JUMP)  ; LAB_00412560
    JBE 0x00412550                      ; 004126db
        ;   XREF to: 00412550 (CONDITIONAL_JUMP)  ; LAB_00412550
        ;   Label: LAB_004126db
    CMP EAX,0x3                         ; 004126e1
    JZ 0x004126b0                       ; 004126e4
        ;   XREF to: 004126b0 (CONDITIONAL_JUMP)  ; LAB_004126b0
    PUSH 0x1                            ; 004126e6
        ;   Label: LAB_004126e6
    PUSH 0x0                            ; 004126e8
    JMP 0x00412554                      ; 004126ea
        ;   XREF to: 00412554 (UNCONDITIONAL_JUMP)  ; LAB_00412554
    CMP dword ptr [EBX + 0xbc90],0x0    ; 004126ef
        ;   Label: caseD_8
    JNZ 0x0041257b                      ; 004126f6
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 004126fc
    JNZ 0x0041257b                      ; 00412703
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 00412709
    LEA EAX,[EBP + 0x3e]                ; 0041270a
    PUSH EAX                            ; 0041270d
    PUSH ESI                            ; 0041270e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0041270f
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00412714
    PUSH EAX                            ; 00412717
    LEA EAX,[EBP + -0x76]               ; 00412718
    PUSH EAX                            ; 0041271b
    PUSH EBX                            ; 0041271c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0041271d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00412722
    PUSH 0x0                            ; 00412725
    LEA EAX,[EBP + -0x76]               ; 00412727
    PUSH EAX                            ; 0041272a
    MOV ESI,dword ptr [0x005b96c4]      ; 0041272b | g_CGore_PTR_005b96c4
    PUSH ESI                            ; 00412731
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 00412732
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00412737
    MOV dword ptr [EBX + 0xbc90],0x1    ; 0041273a
    JMP 0x0041257b                      ; 00412744
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xffffff4e]          ; 00412749
        ;   Label: caseD_3
    PUSH EAX                            ; 0041274f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00412750
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00412755
    PUSH 0x41700000                     ; 00412758
    PUSH 0x40e00000                     ; 0041275d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00412762
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00412767
    ADD ESP,0x8                         ; 0041276a
    LEA EAX,[EBP + 0xffffff4e]          ; 0041276d
    MOV EDX,dword ptr [0x007645a4]      ; 00412773 | DAT_007645a4
    PUSH EAX                            ; 00412779
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041277a
    MOV dword ptr [EBP + -0x7e],EBX     ; 00412781
    SUB EAX,EDX                         ; 00412784
    MOV dword ptr [EBP + -0x7a],EBX     ; 00412786
    SHL EAX,0x4                         ; 00412789
    LEA EDX,[EBX + 0xfd0]               ; 0041278c
    ADD EAX,EDX                         ; 00412792
    PUSH 0x3ecccccd                     ; 00412794
    PUSH EAX                            ; 00412799
    PUSH 0x2dd1184                      ; 0041279a | DAT_02dd1184
    LEA EAX,[EBP + -0x22]               ; 0041279f
    FLD float ptr [EBP + 0x76]          ; 004127a2
    PUSH EAX                            ; 004127a5
    FSTP float ptr [EBP + 0xffffff52]   ; 004127a6
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004127ac
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004127b1
    PUSH EAX                            ; 004127b4
    LEA EAX,[EBP + 0x4a]                ; 004127b5
    PUSH EAX                            ; 004127b8
    PUSH EBX                            ; 004127b9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004127ba
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004127bf
    PUSH EAX                            ; 004127c2
    PUSH EBX                            ; 004127c3
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004127c4
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004127c9
    JMP 0x0041257b                      ; 004127cc
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004127d1
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004127d7
    PUSH EBX                            ; 004127dd
    CALL dword ptr [EAX + 0x13c]        ; 004127de
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004127e4
    ADD ESP,0x8                         ; 004127ea
    TEST EAX,EAX                        ; 004127ed
    JZ 0x00412a3c                       ; 004127ef
        ;   XREF to: 00412a3c (CONDITIONAL_JUMP)  ; LAB_00412a3c
    MOV EDX,EAX                         ; 004127f5
    LEA EAX,[EBX + 0x20]                ; 004127f7
    FLD float ptr [EDX + 0x20]          ; 004127fa
    FSUB float ptr [EAX]                ; 004127fd
    FSTP float ptr [EBP + -0x6a]        ; 004127ff
    FLD float ptr [EDX + 0x24]          ; 00412802
    FSUB float ptr [EAX + 0x4]          ; 00412805
    FST float ptr [EBP + -0x66]         ; 00412808
    FMUL float ptr [EBP + -0x66]        ; 0041280b
    FLD float ptr [EBP + -0x6a]         ; 0041280e
    FMUL ST0                            ; 00412811
    FLD float ptr [EDX + 0x28]          ; 00412813
    FSUB float ptr [EAX + 0x8]          ; 00412816
    FXCH                                ; 00412819
    FADDP ST2,ST0                       ; 0041281b
    FST float ptr [EBP + -0x62]         ; 0041281d
    FMUL float ptr [EBP + -0x62]        ; 00412820
    FADDP                               ; 00412823
    FSQRT                               ; 00412825
    FSTP float ptr [EBP + 0x62]         ; 00412827
    MOV EAX,dword ptr [EBP + 0x62]      ; 0041282a
    FLD float ptr [EBP + 0x62]          ; 0041282d
    MOV dword ptr [EBP + 0x6e],EAX      ; 00412830
    FCOMP float ptr [0x00599fac]        ; 00412833 | FLOAT_00599fac
    FNSTSW AX                           ; 00412839
    SAHF                                ; 0041283b
    JC 0x0041298c                       ; 0041283c
        ;   XREF to: 0041298c (CONDITIONAL_JUMP)  ; LAB_0041298c
    FLD float ptr [EBP + 0x6e]          ; 00412842
        ;   Label: LAB_00412842
    FCOMP float ptr [EBX + 0xbc9c]      ; 00412845
    FNSTSW AX                           ; 0041284b
    SAHF                                ; 0041284d
    JNC 0x0041257b                      ; 0041284e
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBP + 0x6e]          ; 00412854
    LEA ESI,[EBX + 0x150]               ; 00412857
    FCOMP float ptr [0x00599fb8]        ; 0041285d | FLOAT_00599fb8
    FNSTSW AX                           ; 00412863
    SAHF                                ; 00412865
    JC 0x00412a1f                       ; 00412866
        ;   XREF to: 00412a1f (CONDITIONAL_JUMP)  ; LAB_00412a1f
    PUSH 0x3dcccccd                     ; 0041286c
    MOV dword ptr [EBX + 0xbca0],0x0    ; 00412871
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0041287b
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 00412880
    TEST EAX,EAX                        ; 00412883
    JZ 0x00412a33                       ; 00412885
        ;   XREF to: 00412a33 (CONDITIONAL_JUMP)  ; LAB_00412a33
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0041288b
    LEA EDX,[EBX + 0x20]                ; 00412891
    FLD float ptr [EAX + 0x20]          ; 00412894
    FSUB float ptr [EDX]                ; 00412897
    FSTP float ptr [EBP + -0x5e]        ; 00412899
    FLD float ptr [EAX + 0x24]          ; 0041289c
    FSUB float ptr [EDX + 0x4]          ; 0041289f
    FSTP float ptr [EBP + -0x5a]        ; 004128a2
    FLD float ptr [EAX + 0x28]          ; 004128a5
    LEA EAX,[EBP + -0x5e]               ; 004128a8
    PUSH EAX                            ; 004128ab
    LEA EAX,[EBP + 0x26]                ; 004128ac
    FSUB float ptr [EDX + 0x8]          ; 004128af
    PUSH EAX                            ; 004128b2
    FSTP float ptr [EBP + -0x56]        ; 004128b3
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004128b6
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x2a]          ; 004128bb
    ADD ESP,0x8                         ; 004128be
    FSUB float ptr [EBX + 0x34]         ; 004128c1
    SUB ESP,0x4                         ; 004128c4
    FSTP float ptr [ESP]                ; 004128c7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004128ca
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004128cf
    FLD float ptr [EBP + 0x76]          ; 004128d2
    FABS                                ; 004128d5
    ADD ESP,0x4                         ; 004128d7
    FCOMP double ptr [0x00578a1f]       ; 004128da | DOUBLE_00578a1f
    FNSTSW AX                           ; 004128e0
    SAHF                                ; 004128e2
    JNC 0x00412a33                      ; 004128e3
        ;   XREF to: 00412a33 (CONDITIONAL_JUMP)  ; LAB_00412a33
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004128e9
    FLD float ptr [EAX + 0x24]          ; 004128ef
    FSUB float ptr [EBX + 0x24]         ; 004128f2
    FABS                                ; 004128f5
    FCOMP double ptr [0x00578a27]       ; 004128f7 | DOUBLE_00578a27
    FNSTSW AX                           ; 004128fd
    SAHF                                ; 004128ff
    JNC 0x00412a33                      ; 00412900
        ;   XREF to: 00412a33 (CONDITIONAL_JUMP)  ; LAB_00412a33
    PUSH 0x1                            ; 00412906
    PUSH 0x2                            ; 00412908
    PUSH ESI                            ; 0041290a
        ;   Label: LAB_0041290a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041290b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0041290b
    ADD ESP,0xc                         ; 00412910
    CMP dword ptr [EBX + 0xbd68],0x0    ; 00412913
    JNZ 0x0041257b                      ; 0041291a
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0xbd60]    ; 00412920
    PUSH EDI                            ; 00412926
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00412927
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0041292c
    TEST EAX,EAX                        ; 0041292f
    JNZ 0x0041257b                      ; 00412931
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xbd64]    ; 00412937
    PUSH EAX                            ; 0041293d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0041293e
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00412943
    TEST EAX,EAX                        ; 00412946
    JNZ 0x0041257b                      ; 00412948
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0xbd5c]    ; 0041294e
    PUSH EDX                            ; 00412954
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00412955
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0041295a
    TEST EAX,EAX                        ; 0041295d
    JNZ 0x0041257b                      ; 0041295f
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5789db                       ; 00412965 | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041296a
    PUSH EBX                            ; 00412970
    CALL dword ptr [EAX + 0x24]         ; 00412971
    MOV dword ptr [EBX + 0xbd68],0x1    ; 00412974
    ADD ESP,0x8                         ; 0041297e
    MOV dword ptr [EBX + 0xbd5c],EAX    ; 00412981
    JMP 0x0041257b                      ; 00412987
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + -0x6a]               ; 0041298c
        ;   Label: LAB_0041298c
    PUSH EAX                            ; 0041298f
    LEA EAX,[EBP + -0x2e]               ; 00412990
    PUSH EAX                            ; 00412993
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00412994
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x2a]         ; 00412999
    ADD ESP,0x8                         ; 0041299c
    FSUB float ptr [EBX + 0x34]         ; 0041299f
    SUB ESP,0x4                         ; 004129a2
    FSTP float ptr [ESP]                ; 004129a5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004129a8
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004129ad
    FLD float ptr [EBP + 0x76]          ; 004129b0
    FABS                                ; 004129b3
    ADD ESP,0x4                         ; 004129b5
    FCOMP double ptr [0x00578a1f]       ; 004129b8 | DOUBLE_00578a1f
    FNSTSW AX                           ; 004129be
    SAHF                                ; 004129c0
    JNC 0x00412842                      ; 004129c1
        ;   XREF to: 00412842 (CONDITIONAL_JUMP)  ; LAB_00412842
    PUSH 0x1                            ; 004129c7
    PUSH 0x3                            ; 004129c9
    PUSH ESI                            ; 004129cb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004129cc
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004129d1
    MOV EDX,dword ptr [EBX + 0xbd60]    ; 004129d4
    PUSH EDX                            ; 004129da
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004129db
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004129e0
    TEST EAX,EAX                        ; 004129e3
    JNZ 0x00412842                      ; 004129e5
        ;   XREF to: 00412842 (CONDITIONAL_JUMP)  ; LAB_00412842
    MOV ECX,dword ptr [EBX + 0xbd64]    ; 004129eb
    PUSH ECX                            ; 004129f1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004129f2
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004129f7
    TEST EAX,EAX                        ; 004129fa
    JNZ 0x00412842                      ; 004129fc
        ;   XREF to: 00412842 (CONDITIONAL_JUMP)  ; LAB_00412842
    PUSH 0x5789c8                       ; 00412a02 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00412a07
    PUSH EBX                            ; 00412a0d
    CALL dword ptr [EAX + 0x24]         ; 00412a0e
    ADD ESP,0x8                         ; 00412a11
    MOV dword ptr [EBX + 0xbd64],EAX    ; 00412a14
    JMP 0x00412842                      ; 00412a1a
        ;   XREF to: 00412842 (UNCONDITIONAL_JUMP)  ; LAB_00412842
    PUSH 0x1                            ; 00412a1f
        ;   Label: LAB_00412a1f
    PUSH 0x1                            ; 00412a21
    PUSH ESI                            ; 00412a23
    MOV dword ptr [EBX + 0xbca0],0x0    ; 00412a24
    JMP 0x0041290b                      ; 00412a2e
        ;   XREF to: 0041290b (UNCONDITIONAL_JUMP)  ; LAB_0041290b
    PUSH 0x1                            ; 00412a33
        ;   Label: LAB_00412a33
    PUSH 0x1                            ; 00412a35
    JMP 0x0041290a                      ; 00412a37
        ;   XREF to: 0041290a (UNCONDITIONAL_JUMP)  ; LAB_0041290a
    PUSH dword ptr [EBP + 0x92]         ; 00412a3c
        ;   Label: LAB_00412a3c
    PUSH EBX                            ; 00412a42
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00412a43
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412a48
    TEST EAX,EAX                        ; 00412a4b
    JZ 0x0041257b                       ; 00412a4d
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00412a53
    PUSH 0x1                            ; 00412a55
    PUSH ESI                            ; 00412a57
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00412a58
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412a5d
    JMP 0x0041257b                      ; 00412a60
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00412a65
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00412a6b
    PUSH EBX                            ; 00412a71
    CALL dword ptr [EAX + 0x13c]        ; 00412a72
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412a78
    ADD ESP,0x8                         ; 00412a7e
    TEST EAX,EAX                        ; 00412a81
    JNZ 0x00412abb                      ; 00412a83
        ;   XREF to: 00412abb (CONDITIONAL_JUMP)  ; LAB_00412abb
    PUSH dword ptr [EBP + 0x92]         ; 00412a85
    PUSH EBX                            ; 00412a8b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00412a8c
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00412a91
    TEST EAX,EAX                        ; 00412a94
    JZ 0x00412aaa                       ; 00412a96
        ;   XREF to: 00412aaa (CONDITIONAL_JUMP)  ; LAB_00412aaa
    PUSH 0x1                            ; 00412a98
    PUSH 0x1                            ; 00412a9a
    PUSH ESI                            ; 00412a9c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00412a9d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412aa2
    JMP 0x0041257b                      ; 00412aa5
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00412aaa
        ;   Label: LAB_00412aaa
    PUSH EAX                            ; 00412aac
    PUSH ESI                            ; 00412aad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00412aae
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412ab3
    JMP 0x0041257b                      ; 00412ab6
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x00599fac]                ; 00412abb | FLOAT_00599fac
        ;   Label: LAB_00412abb
    PUSH 0x3e32b8c2                     ; 00412ac0
    MOV dword ptr [EBP + 0x66],EAX      ; 00412ac5
    LEA EAX,[EBX + 0x23a4]              ; 00412ac8
    PUSH 0x3f000000                     ; 00412ace
    MOV dword ptr [EAX + 0x8],0x0       ; 00412ad3
    XOR EDX,EDX                         ; 00412ada
    MOV ECX,dword ptr [EAX + 0x8]       ; 00412adc
    MOV dword ptr [EAX + 0x4],ECX       ; 00412adf
    MOV ECX,dword ptr [EAX + 0x4]       ; 00412ae2
    MOV dword ptr [EAX],ECX             ; 00412ae5
    MOV EAX,dword ptr [EBP + 0x66]      ; 00412ae7
    MOV dword ptr [EBP + 0xe],EDX       ; 00412aea
    MOV dword ptr [EBP + 0x16],EAX      ; 00412aed
    LEA EAX,[EBP + 0xe]                 ; 00412af0
    MOV dword ptr [EBP + 0x12],EDX      ; 00412af3
    PUSH EAX                            ; 00412af6
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412af7
    PUSH EAX                            ; 00412afd
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00412afe
    CALL dword ptr [EDX + 0xbc]         ; 00412b04
    ADD ESP,0x4                         ; 00412b0a
    PUSH EAX                            ; 00412b0d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412b0e
    ADD EAX,0x20                        ; 00412b14
    PUSH EAX                            ; 00412b17
    PUSH EBX                            ; 00412b18
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00412b19
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00412b1e
    TEST EAX,EAX                        ; 00412b21
    JL 0x0041257b                       ; 00412b23
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDX,[EBX + 0x20]                ; 00412b29
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412b2c
    FLD float ptr [EDX]                 ; 00412b32
    FSUB float ptr [EAX + 0x20]         ; 00412b34
    FSTP float ptr [EBP + -0x16]        ; 00412b37
    FLD float ptr [EDX + 0x4]           ; 00412b3a
    FSUB float ptr [EAX + 0x24]         ; 00412b3d
    FLD float ptr [EBP + -0x16]         ; 00412b40
    FXCH                                ; 00412b43
    FSTP float ptr [EBP + -0x12]        ; 00412b45
    FLD float ptr [EDX + 0x8]           ; 00412b48
    FSUB float ptr [EAX + 0x28]         ; 00412b4b
    FXCH                                ; 00412b4e
    FMUL float ptr [EBP + -0x16]        ; 00412b50
    FXCH                                ; 00412b53
    FST float ptr [EBP + -0xe]          ; 00412b55
    FMUL float ptr [EBP + -0xe]         ; 00412b58
    XOR EAX,EAX                         ; 00412b5b
    FADDP                               ; 00412b5d
    MOV dword ptr [EBP + -0x12],EAX     ; 00412b5f
    FSQRT                               ; 00412b62
    FSTP float ptr [EBP + 0x72]         ; 00412b64
    MOV EAX,dword ptr [EBP + 0x72]      ; 00412b67
    FLD float ptr [EBP + 0x72]          ; 00412b6a
    MOV dword ptr [EBP + 0x6a],EAX      ; 00412b6d
    FCOMP float ptr [0x00599fb8]        ; 00412b70 | FLOAT_00599fb8
    FNSTSW AX                           ; 00412b76
    SAHF                                ; 00412b78
    JBE 0x00412c2f                      ; 00412b79
        ;   XREF to: 00412c2f (CONDITIONAL_JUMP)  ; LAB_00412c2f
    MOV dword ptr [EBX + 0xbca0],0x0    ; 00412b7f
    CMP EDI,0x1                         ; 00412b89
    JNZ 0x00412c2f                      ; 00412b8c
        ;   XREF to: 00412c2f (CONDITIONAL_JUMP)  ; LAB_00412c2f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412b92
    FLD float ptr [EAX + 0x20]          ; 00412b98
    FSUB float ptr [EDX]                ; 00412b9b
    FSTP float ptr [EBP + -0xa]         ; 00412b9d
    FLD float ptr [EAX + 0x24]          ; 00412ba0
    FSUB float ptr [EDX + 0x4]          ; 00412ba3
    FSTP float ptr [EBP + -0x6]         ; 00412ba6
    FLD float ptr [EAX + 0x28]          ; 00412ba9
    LEA EAX,[EBP + -0xa]                ; 00412bac
    PUSH EAX                            ; 00412baf
    LEA EAX,[EBP + -0x52]               ; 00412bb0
    FSUB float ptr [EDX + 0x8]          ; 00412bb3
    PUSH EAX                            ; 00412bb6
    FSTP float ptr [EBP + -0x2]         ; 00412bb7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00412bba
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x4e]         ; 00412bbf
    ADD ESP,0x8                         ; 00412bc2
    FSUB float ptr [EBX + 0x34]         ; 00412bc5
    SUB ESP,0x4                         ; 00412bc8
    FSTP float ptr [ESP]                ; 00412bcb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00412bce
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00412bd3
    FLD float ptr [EBP + 0x76]          ; 00412bd6
    FABS                                ; 00412bd9
    ADD ESP,0x4                         ; 00412bdb
    FCOMP double ptr [0x00578a1f]       ; 00412bde | DOUBLE_00578a1f
    FNSTSW AX                           ; 00412be4
    SAHF                                ; 00412be6
    JNC 0x00412c2f                      ; 00412be7
        ;   XREF to: 00412c2f (CONDITIONAL_JUMP)  ; LAB_00412c2f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412be9
    FLD float ptr [EAX + 0x24]          ; 00412bef
    FSUB float ptr [EBX + 0x24]         ; 00412bf2
    FABS                                ; 00412bf5
    FCOMP double ptr [0x00578a27]       ; 00412bf7 | DOUBLE_00578a27
    FNSTSW AX                           ; 00412bfd
    SAHF                                ; 00412bff
    JNC 0x00412c2f                      ; 00412c00
        ;   XREF to: 00412c2f (CONDITIONAL_JUMP)  ; LAB_00412c2f
    PUSH EDI                            ; 00412c02
    PUSH 0x2                            ; 00412c03
    PUSH ESI                            ; 00412c05
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00412c06
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412c0b
    MOV EDX,dword ptr [EBX + 0xbd60]    ; 00412c0e
    PUSH EDX                            ; 00412c14
    MOV dword ptr [EBX + 0xbca0],0x0    ; 00412c15
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00412c1f
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00412c24
    TEST EAX,EAX                        ; 00412c27
    JZ 0x00412d05                       ; 00412c29
        ;   XREF to: 00412d05 (CONDITIONAL_JUMP)  ; LAB_00412d05
    FLD float ptr [EBP + 0x6a]          ; 00412c2f
        ;   Label: LAB_00412c2f
    FCOMP float ptr [EBP + 0x66]        ; 00412c32
    FNSTSW AX                           ; 00412c35
    SAHF                                ; 00412c37
    JA 0x00412cdb                       ; 00412c38
        ;   XREF to: 00412cdb (CONDITIONAL_JUMP)  ; LAB_00412cdb
    FLD float ptr [EBX + 0xbca0]        ; 00412c3e
    FLDZ                                ; 00412c44
    FCOMPP                              ; 00412c46
    FNSTSW AX                           ; 00412c48
    SAHF                                ; 00412c4a
    JC 0x00412cdb                       ; 00412c4b
        ;   XREF to: 00412cdb (CONDITIONAL_JUMP)  ; LAB_00412cdb
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00412c51
    LEA EDX,[EBX + 0x20]                ; 00412c57
    FLD float ptr [EAX + 0x20]          ; 00412c5a
    FSUB float ptr [EDX]                ; 00412c5d
    FSTP float ptr [EBP + 0x2]          ; 00412c5f
    FLD float ptr [EAX + 0x24]          ; 00412c62
    FSUB float ptr [EDX + 0x4]          ; 00412c65
    FSTP float ptr [EBP + 0x6]          ; 00412c68
    FLD float ptr [EAX + 0x28]          ; 00412c6b
    LEA EAX,[EBP + 0x2]                 ; 00412c6e
    PUSH EAX                            ; 00412c71
    LEA EAX,[EBP + -0x46]               ; 00412c72
    FSUB float ptr [EDX + 0x8]          ; 00412c75
    PUSH EAX                            ; 00412c78
    FSTP float ptr [EBP + 0xa]          ; 00412c79
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00412c7c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x42]         ; 00412c81
    ADD ESP,0x8                         ; 00412c84
    FSUB float ptr [EBX + 0x34]         ; 00412c87
    SUB ESP,0x4                         ; 00412c8a
    FSTP float ptr [ESP]                ; 00412c8d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00412c90
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00412c95
    FLD float ptr [EBP + 0x76]          ; 00412c98
    FABS                                ; 00412c9b
    ADD ESP,0x4                         ; 00412c9d
    FCOMP double ptr [0x00578a1f]       ; 00412ca0 | DOUBLE_00578a1f
    FNSTSW AX                           ; 00412ca6
    SAHF                                ; 00412ca8
    JNC 0x00412cdb                      ; 00412ca9
        ;   XREF to: 00412cdb (CONDITIONAL_JUMP)  ; LAB_00412cdb
    PUSH 0x1                            ; 00412cab
    PUSH 0x3                            ; 00412cad
    LEA EAX,[EBX + 0x150]               ; 00412caf
    PUSH EAX                            ; 00412cb5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00412cb6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412cbb
    MOV ESI,dword ptr [EBX + 0xbd60]    ; 00412cbe
    PUSH ESI                            ; 00412cc4
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 00412cc5
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00412ccf
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00412cd4
    TEST EAX,EAX                        ; 00412cd7
    JZ 0x00412d39                       ; 00412cd9
        ;   XREF to: 00412d39 (CONDITIONAL_JUMP)  ; LAB_00412d39
    FLD float ptr [EBP + 0x6a]          ; 00412cdb
        ;   Label: LAB_00412cdb
    FCOMP float ptr [EBX + 0xbc9c]      ; 00412cde
    FNSTSW AX                           ; 00412ce4
    SAHF                                ; 00412ce6
    JBE 0x0041257b                      ; 00412ce7
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00412ced
    PUSH 0x0                            ; 00412cef
    LEA EAX,[EBX + 0x150]               ; 00412cf1
    PUSH EAX                            ; 00412cf7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00412cf8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412cfd
    JMP 0x0041257b                      ; 00412d00
        ;   XREF to: 0041257b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [EBX + 0xbd64]    ; 00412d05
        ;   Label: LAB_00412d05
    PUSH ECX                            ; 00412d0b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00412d0c
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00412d11
    TEST EAX,EAX                        ; 00412d14
    JNZ 0x00412c2f                      ; 00412d16
        ;   XREF to: 00412c2f (CONDITIONAL_JUMP)  ; LAB_00412c2f
    PUSH 0x5789ec                       ; 00412d1c | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00412d21
    PUSH EBX                            ; 00412d27
    CALL dword ptr [EAX + 0x24]         ; 00412d28
    ADD ESP,0x8                         ; 00412d2b
    MOV dword ptr [EBX + 0xbd64],EAX    ; 00412d2e
    JMP 0x00412c2f                      ; 00412d34
        ;   XREF to: 00412c2f (UNCONDITIONAL_JUMP)  ; LAB_00412c2f
    MOV EDI,dword ptr [EBX + 0xbd64]    ; 00412d39
        ;   Label: LAB_00412d39
    PUSH EDI                            ; 00412d3f
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00412d40
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00412d45
    TEST EAX,EAX                        ; 00412d48
    JNZ 0x00412cdb                      ; 00412d4a
        ;   XREF to: 00412cdb (CONDITIONAL_JUMP)  ; LAB_00412cdb
    PUSH 0x5789ff                       ; 00412d4c | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00412d51
    PUSH EBX                            ; 00412d57
    CALL dword ptr [EAX + 0x24]         ; 00412d58
    ADD ESP,0x8                         ; 00412d5b
    MOV dword ptr [EBX + 0xbd64],EAX    ; 00412d5e
    JMP 0x00412cdb                      ; 00412d64
        ;   XREF to: 00412cdb (UNCONDITIONAL_JUMP)  ; LAB_00412cdb
    CMP EDI,0x8                         ; 00412d69
        ;   Label: LAB_00412d69
    JA 0x0041257b                       ; 00412d6c
        ;   XREF to: 0041257b (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x41245c]  ; 00412d72 | caseD_0 | caseD_1 | caseD_7
        ;   Label: switchD

