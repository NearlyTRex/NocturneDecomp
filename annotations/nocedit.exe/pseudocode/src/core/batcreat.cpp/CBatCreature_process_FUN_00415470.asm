; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr,float delta_time)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x13c]:1  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined1       Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined1       Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xac]:1  local_ac
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
; undefined1       Stack[-0x64]:1  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_0041544c = 004157c1
;   TerminatedCString s_s_confused_while_walking_006155cd
;   TerminatedCString s_batman_attack_wav_006155f7
;   TerminatedCString s_batman_alert_wav_0061560a
;   TerminatedCString s_batman_attack_wav_0061561b
;   TerminatedCString s_batman_attack_wav_0061562e
;   double DOUBLE_00615641 = 3.14159265350000
;   double DOUBLE_00615649 = 0.523598775583333
;   double DOUBLE_00615651 = 2
;   double DOUBLE_00615659 = 32
;   float FLOAT_0065a5ac = 3.5
;   float FLOAT_0065a5b8 = 10
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_FUN_004a9880
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415470
        ;   Label: core_batcreat.cpp_CBatCreature_process_FUN_00415470
    PUSH ESI                            ; 00415471
    PUSH EDI                            ; 00415472
    PUSH EBP                            ; 00415473
    MOV EBP,ESP                         ; 00415474
    SUB ESP,0x12c                       ; 00415476
    SUB EBP,0x7a                        ; 0041547c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041547f
    PUSH dword ptr [EBP + 0x92]         ; 00415485
    PUSH EBX                            ; 0041548b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0041548c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00415491
    TEST EAX,EAX                        ; 00415494
    JZ 0x0041567c                       ; 00415496
        ;   XREF to: 0041567c (CONDITIONAL_JUMP)  ; LAB_0041567c
    LEA EAX,[EBX + 0x23ac]              ; 0041549c
    MOV dword ptr [EAX + 0x8],0x0       ; 004154a2
    FLD float ptr [EBP + 0x92]          ; 004154a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004154af
    MOV dword ptr [EAX + 0x4],EDX       ; 004154b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004154b5
    MOV dword ptr [EAX],EDX             ; 004154b8
    FMUL float ptr [EBX + 0xbe24]       ; 004154ba
    LEA ESI,[EBX + 0x158]               ; 004154c0
    FSTP float ptr [EBP + 0x5e]         ; 004154c6
    FLD float ptr [EBP + 0x5e]          ; 004154c9
        ;   Label: LAB_004154c9
    FLDZ                                ; 004154cc
    FCOMPP                              ; 004154ce
    FNSTSW AX                           ; 004154d0
    SAHF                                ; 004154d2
    JC 0x00415684                       ; 004154d3
        ;   XREF to: 00415684 (CONDITIONAL_JUMP)  ; LAB_00415684
    FLD float ptr [EBX + 0xbe24]        ; 004154d9
    FLD float ptr [EBP + 0x92]          ; 004154df
    FMUL double ptr [0x00615641]        ; 004154e5 | DOUBLE_00615641
    FMULP                               ; 004154eb
    FLD float ptr [EBX + 0x23b4]        ; 004154ed
    LEA ESI,[EBX + 0x158]               ; 004154f3
    FSTP float ptr [EBX + 0x2434]       ; 004154f9
    PUSH ESI                            ; 004154ff
    FSTP float ptr [EBX + 0x2438]       ; 00415500
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00415506
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0041550b
    PUSH dword ptr [EBP + 0x92]         ; 0041550e
    PUSH EBX                            ; 00415514
    MOV EDI,dword ptr [EAX + 0x24]      ; 00415515
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 00415518
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041551d
    TEST EAX,EAX                        ; 00415520
    JZ 0x00415d59                       ; 00415522
        ;   XREF to: 00415d59 (CONDITIONAL_JUMP)  ; LAB_00415d59
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00415528
    CMP EAX,0x2                         ; 0041552e
    JNC 0x004156cb                      ; 00415531
        ;   XREF to: 004156cb (CONDITIONAL_JUMP)  ; LAB_004156cb
    CMP EAX,0x1                         ; 00415537
    JNZ 0x004156d6                      ; 0041553a
        ;   XREF to: 004156d6 (CONDITIONAL_JUMP)  ; LAB_004156d6
    PUSH 0x1                            ; 00415540
        ;   Label: LAB_00415540
    PUSH 0x1                            ; 00415542
    LEA EAX,[EBX + 0x158]               ; 00415544
        ;   Label: LAB_00415544
    PUSH EAX                            ; 0041554a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041554b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415550
        ;   Label: LAB_00415550
    LEA EAX,[EBX + 0x23ac]              ; 00415553
    MOV dword ptr [EAX + 0x8],0x0       ; 00415559
    MOV EDX,dword ptr [EAX + 0x8]       ; 00415560
    MOV dword ptr [EAX + 0x4],EDX       ; 00415563
    MOV EDX,dword ptr [EAX + 0x4]       ; 00415566
    MOV dword ptr [EAX],EDX             ; 00415569
    FLD float ptr [EBX + 0xbe38]        ; 0041556b
        ;   Label: caseD_2
    FLDZ                                ; 00415571
    FCOMPP                              ; 00415573
    FNSTSW AX                           ; 00415575
    SAHF                                ; 00415577
    JNC 0x0041558c                      ; 00415578
        ;   XREF to: 0041558c (CONDITIONAL_JUMP)  ; LAB_0041558c
    FLD float ptr [EBX + 0xbe38]        ; 0041557a
    FSUB float ptr [EBP + 0x92]         ; 00415580
    FSTP float ptr [EBX + 0xbe38]       ; 00415586
    PUSH EBX                            ; 0041558c
        ;   Label: LAB_0041558c
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 0041558d
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00415592
    TEST EAX,EAX                        ; 00415595
    JZ 0x00415655                       ; 00415597
        ;   XREF to: 00415655 (CONDITIONAL_JUMP)  ; LAB_00415655
    FLD float ptr [EBP + 0x92]          ; 0041559d
    FLD ST0                             ; 004155a3
    FMUL double ptr [0x00615659]        ; 004155a5 | DOUBLE_00615659
    FLD float ptr [EBX + 0x242c]        ; 004155ab
    FXCH                                ; 004155b1
    FSUBR ST0,ST1                       ; 004155b3
    LEA EDX,[EBX + 0x2428]              ; 004155b5
    FSTP ST1                            ; 004155bb
    FSTP float ptr [EBX + 0x242c]       ; 004155bd
    FLD float ptr [EDX]                 ; 004155c3
    FMUL ST1                            ; 004155c5
    FSTP float ptr [EBP + -0x3a]        ; 004155c7
    FLD float ptr [EDX + 0x4]           ; 004155ca
    FMUL ST1                            ; 004155cd
    LEA ESI,[EBX + 0x241c]              ; 004155cf
    FSTP float ptr [EBP + -0x36]        ; 004155d5
    FMUL float ptr [EDX + 0x8]          ; 004155d8
    LEA EAX,[EBX + 0x23ac]              ; 004155db
    FLD float ptr [EBP + -0x3a]         ; 004155e1
    FXCH                                ; 004155e4
    FSTP float ptr [EBP + -0x32]        ; 004155e6
    FADD float ptr [ESI]                ; 004155e9
    FLD float ptr [EBP + -0x36]         ; 004155eb
    FXCH                                ; 004155ee
    FSTP float ptr [EBP + 0x32]         ; 004155f0
    FADD float ptr [ESI + 0x4]          ; 004155f3
    FLD float ptr [EBP + -0x32]         ; 004155f6
    FXCH                                ; 004155f9
    FSTP float ptr [EBP + 0x36]         ; 004155fb
    FADD float ptr [ESI + 0x8]          ; 004155fe | DAT_00002424
    FLD float ptr [EBP + 0x32]          ; 00415601
    FXCH                                ; 00415604
    FSTP float ptr [EBP + 0x3a]         ; 00415606
    FADD float ptr [EAX]                ; 00415609
    FLD float ptr [EBP + 0x36]          ; 0041560b
    FXCH                                ; 0041560e
    FSTP float ptr [EBP + 0x1a]         ; 00415610
    FADD float ptr [EAX + 0x4]          ; 00415613
    FLD float ptr [EBP + 0x3a]          ; 00415616
    FXCH                                ; 00415619
    FSTP float ptr [EBP + 0x1e]         ; 0041561b
    FADD float ptr [EAX + 0x8]          ; 0041561e
    FSTP float ptr [EBP + 0x22]         ; 00415621
    MOV dword ptr [ESI + 0x8],0x0       ; 00415624 | DAT_00002424
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041562b | DAT_00002424
    MOV dword ptr [ESI + 0x4],EDX       ; 0041562e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00415631
    MOV dword ptr [ESI],EDX             ; 00415634
    MOV dword ptr [EAX + 0x8],0x0       ; 00415636
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041563d
    MOV dword ptr [EAX + 0x4],EDX       ; 00415640
    MOV EDX,dword ptr [EAX + 0x4]       ; 00415643
    MOV dword ptr [EAX],EDX             ; 00415646
    LEA EAX,[EBP + 0x1a]                ; 00415648
    PUSH EAX                            ; 0041564b
    PUSH EBX                            ; 0041564c
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 0041564d
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00415652
    PUSH EBX                            ; 00415655
        ;   Label: LAB_00415655
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 00415656
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041565b
    LEA EAX,[EBX + 0x158]               ; 0041565e
    PUSH EAX                            ; 00415664
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00415665
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041566a
    PUSH dword ptr [EBP + 0x92]         ; 0041566d
    PUSH EBX                            ; 00415673
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00415674
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 00415679
    LEA ESP,[EBP + 0x7a]                ; 0041567c
        ;   Label: LAB_0041567c
    POP EBP                             ; 0041567f
    POP EDI                             ; 00415680
    POP ESI                             ; 00415681
    POP EBX                             ; 00415682
    RET                                 ; 00415683
    LEA EAX,[EBP + 0x5e]                ; 00415684
        ;   Label: LAB_00415684
    PUSH EAX                            ; 00415687
    PUSH ESI                            ; 00415688
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00415689
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 0041568e
    PUSH EAX                            ; 00415691
    PUSH EBX                            ; 00415692
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 00415693
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 00415698
    JMP 0x004154c9                      ; 0041569b
        ;   XREF to: 004154c9 (UNCONDITIONAL_JUMP)  ; LAB_004154c9
    PUSH 0x1                            ; 004156a0
        ;   Label: LAB_004156a0
    PUSH 0x0                            ; 004156a2
    LEA EAX,[EBX + 0x158]               ; 004156a4
    PUSH EAX                            ; 004156aa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004156ab
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004156b0
    PUSH EBX                            ; 004156b3
    MOV EAX,0x6155cd                    ; 004156b4 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004156b9 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 004156ba | g_CConsolePtr
    PUSH ECX                            ; 004156c0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004156c1
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x00415550                      ; 004156c6
        ;   XREF to: 00415550 (UNCONDITIONAL_JUMP)  ; LAB_00415550
    JBE 0x00415540                      ; 004156cb
        ;   XREF to: 00415540 (CONDITIONAL_JUMP)  ; LAB_00415540
        ;   Label: LAB_004156cb
    CMP EAX,0x3                         ; 004156d1
    JZ 0x004156a0                       ; 004156d4
        ;   XREF to: 004156a0 (CONDITIONAL_JUMP)  ; LAB_004156a0
    PUSH 0x1                            ; 004156d6
        ;   Label: LAB_004156d6
    PUSH 0x0                            ; 004156d8
    JMP 0x00415544                      ; 004156da
        ;   XREF to: 00415544 (UNCONDITIONAL_JUMP)  ; LAB_00415544
    CMP dword ptr [EBX + 0xbe28],0x0    ; 004156df
        ;   Label: caseD_8
    JNZ 0x0041556b                      ; 004156e6
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 004156ec
    JNZ 0x0041556b                      ; 004156f3
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 004156f9
    LEA EAX,[EBP + 0x3e]                ; 004156fa
    PUSH EAX                            ; 004156fd
    PUSH ESI                            ; 004156fe
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004156ff
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00415704
    PUSH EAX                            ; 00415707
    LEA EAX,[EBP + -0x76]               ; 00415708
    PUSH EAX                            ; 0041570b
    PUSH EBX                            ; 0041570c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041570d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00415712
    PUSH 0x0                            ; 00415715
    LEA EAX,[EBP + -0x76]               ; 00415717
    PUSH EAX                            ; 0041571a
    MOV ESI,dword ptr [0x0067b9a0]      ; 0041571b | g_CGorePtr
    PUSH ESI                            ; 00415721 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ede30 ; 00415722
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ede30(CGore * this_ptr)
    ADD ESP,0xc                         ; 00415727
    MOV dword ptr [EBX + 0xbe28],0x1    ; 0041572a
    JMP 0x0041556b                      ; 00415734
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xffffff4e]          ; 00415739
        ;   Label: caseD_3
    PUSH EAX                            ; 0041573f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00415740
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00415745
    PUSH 0x41700000                     ; 00415748
    PUSH 0x40e00000                     ; 0041574d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00415752
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00415757
    ADD ESP,0x8                         ; 0041575a
    LEA EAX,[EBP + 0xffffff4e]          ; 0041575d
    MOV EDX,dword ptr [0x00822754]      ; 00415763 | DAT_00822754
    PUSH EAX                            ; 00415769
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041576a
    MOV dword ptr [EBP + -0x7e],EBX     ; 00415771
    SUB EAX,EDX                         ; 00415774
    MOV dword ptr [EBP + -0x7a],EBX     ; 00415776
    SHL EAX,0x4                         ; 00415779
    LEA EDX,[EBX + 0xfd8]               ; 0041577c
    ADD EAX,EDX                         ; 00415782
    PUSH 0x3ecccccd                     ; 00415784
    PUSH EAX                            ; 00415789
    PUSH 0x3f87558                      ; 0041578a | g_ZeroVector
    LEA EAX,[EBP + -0x22]               ; 0041578f
    FLD float ptr [EBP + 0x76]          ; 00415792
    PUSH EAX                            ; 00415795
    FSTP float ptr [EBP + 0xffffff52]   ; 00415796
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0041579c
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004157a1
    PUSH EAX                            ; 004157a4
    LEA EAX,[EBP + 0x4a]                ; 004157a5
    PUSH EAX                            ; 004157a8
    PUSH EBX                            ; 004157a9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004157aa
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004157af
    PUSH EAX                            ; 004157b2
    PUSH EBX                            ; 004157b3
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 004157b4
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 004157b9
    JMP 0x0041556b                      ; 004157bc
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004157c1
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004157c7
    PUSH EBX                            ; 004157cd
    CALL dword ptr [EAX + 0x158]        ; 004157ce
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004157d4
    ADD ESP,0x8                         ; 004157da
    TEST EAX,EAX                        ; 004157dd
    JZ 0x00415a2c                       ; 004157df
        ;   XREF to: 00415a2c (CONDITIONAL_JUMP)  ; LAB_00415a2c
    MOV EDX,EAX                         ; 004157e5
    LEA EAX,[EBX + 0x20]                ; 004157e7
    FLD float ptr [EDX + 0x20]          ; 004157ea
    FSUB float ptr [EAX]                ; 004157ed
    FSTP float ptr [EBP + -0x6a]        ; 004157ef
    FLD float ptr [EDX + 0x24]          ; 004157f2
    FSUB float ptr [EAX + 0x4]          ; 004157f5
    FST float ptr [EBP + -0x66]         ; 004157f8
    FMUL float ptr [EBP + -0x66]        ; 004157fb
    FLD float ptr [EBP + -0x6a]         ; 004157fe
    FMUL ST0                            ; 00415801
    FLD float ptr [EDX + 0x28]          ; 00415803
    FSUB float ptr [EAX + 0x8]          ; 00415806
    FXCH                                ; 00415809
    FADDP ST2,ST0                       ; 0041580b
    FST float ptr [EBP + -0x62]         ; 0041580d
    FMUL float ptr [EBP + -0x62]        ; 00415810
    FADDP                               ; 00415813
    FSQRT                               ; 00415815
    FSTP float ptr [EBP + 0x62]         ; 00415817
    MOV EAX,dword ptr [EBP + 0x62]      ; 0041581a
    FLD float ptr [EBP + 0x62]          ; 0041581d
    MOV dword ptr [EBP + 0x6e],EAX      ; 00415820
    FCOMP float ptr [0x0065a5ac]        ; 00415823 | FLOAT_0065a5ac
    FNSTSW AX                           ; 00415829
    SAHF                                ; 0041582b
    JC 0x0041597c                       ; 0041582c
        ;   XREF to: 0041597c (CONDITIONAL_JUMP)  ; LAB_0041597c
    FLD float ptr [EBP + 0x6e]          ; 00415832
        ;   Label: LAB_00415832
    FCOMP float ptr [EBX + 0xbe34]      ; 00415835
    FNSTSW AX                           ; 0041583b
    SAHF                                ; 0041583d
    JNC 0x0041556b                      ; 0041583e
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBP + 0x6e]          ; 00415844
    LEA ESI,[EBX + 0x158]               ; 00415847
    FCOMP float ptr [0x0065a5b8]        ; 0041584d | FLOAT_0065a5b8
    FNSTSW AX                           ; 00415853
    SAHF                                ; 00415855
    JC 0x00415a0f                       ; 00415856
        ;   XREF to: 00415a0f (CONDITIONAL_JUMP)  ; LAB_00415a0f
    PUSH 0x3dcccccd                     ; 0041585c
    MOV dword ptr [EBX + 0xbe38],0x0    ; 00415861
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0041586b
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00415870
    TEST EAX,EAX                        ; 00415873
    JZ 0x00415a23                       ; 00415875
        ;   XREF to: 00415a23 (CONDITIONAL_JUMP)  ; LAB_00415a23
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0041587b
    LEA EDX,[EBX + 0x20]                ; 00415881
    FLD float ptr [EAX + 0x20]          ; 00415884
    FSUB float ptr [EDX]                ; 00415887
    FSTP float ptr [EBP + -0x5e]        ; 00415889
    FLD float ptr [EAX + 0x24]          ; 0041588c
    FSUB float ptr [EDX + 0x4]          ; 0041588f
    FSTP float ptr [EBP + -0x5a]        ; 00415892
    FLD float ptr [EAX + 0x28]          ; 00415895
    LEA EAX,[EBP + -0x5e]               ; 00415898
    PUSH EAX                            ; 0041589b
    LEA EAX,[EBP + 0x26]                ; 0041589c
    FSUB float ptr [EDX + 0x8]          ; 0041589f
    PUSH EAX                            ; 004158a2
    FSTP float ptr [EBP + -0x56]        ; 004158a3
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004158a6
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x2a]          ; 004158ab
    ADD ESP,0x8                         ; 004158ae
    FSUB float ptr [EBX + 0x34]         ; 004158b1
    SUB ESP,0x4                         ; 004158b4
    FSTP float ptr [ESP]                ; 004158b7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004158ba
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004158bf
    FLD float ptr [EBP + 0x76]          ; 004158c2
    FABS                                ; 004158c5
    ADD ESP,0x4                         ; 004158c7
    FCOMP double ptr [0x00615649]       ; 004158ca | DOUBLE_00615649
    FNSTSW AX                           ; 004158d0
    SAHF                                ; 004158d2
    JNC 0x00415a23                      ; 004158d3
        ;   XREF to: 00415a23 (CONDITIONAL_JUMP)  ; LAB_00415a23
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004158d9
    FLD float ptr [EAX + 0x24]          ; 004158df
    FSUB float ptr [EBX + 0x24]         ; 004158e2
    FABS                                ; 004158e5
    FCOMP double ptr [0x00615651]       ; 004158e7 | DOUBLE_00615651
    FNSTSW AX                           ; 004158ed
    SAHF                                ; 004158ef
    JNC 0x00415a23                      ; 004158f0
        ;   XREF to: 00415a23 (CONDITIONAL_JUMP)  ; LAB_00415a23
    PUSH 0x1                            ; 004158f6
    PUSH 0x2                            ; 004158f8
    PUSH ESI                            ; 004158fa
        ;   Label: LAB_004158fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004158fb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004158fb
    ADD ESP,0xc                         ; 00415900
    CMP dword ptr [EBX + 0xbf00],0x0    ; 00415903
    JNZ 0x0041556b                      ; 0041590a
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0xbef8]    ; 00415910
    PUSH EDI                            ; 00415916
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00415917
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0041591c
    TEST EAX,EAX                        ; 0041591f
    JNZ 0x0041556b                      ; 00415921
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xbefc]    ; 00415927
    PUSH EAX                            ; 0041592d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0041592e
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00415933
    TEST EAX,EAX                        ; 00415936
    JNZ 0x0041556b                      ; 00415938
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0xbef4]    ; 0041593e
    PUSH EDX                            ; 00415944
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00415945
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0041594a
    TEST EAX,EAX                        ; 0041594d
    JNZ 0x0041556b                      ; 0041594f
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x61560a                       ; 00415955 | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041595a
    PUSH EBX                            ; 00415960
    CALL dword ptr [EAX + 0x24]         ; 00415961
    MOV dword ptr [EBX + 0xbf00],0x1    ; 00415964
    ADD ESP,0x8                         ; 0041596e
    MOV dword ptr [EBX + 0xbef4],EAX    ; 00415971
    JMP 0x0041556b                      ; 00415977
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + -0x6a]               ; 0041597c
        ;   Label: LAB_0041597c
    PUSH EAX                            ; 0041597f
    LEA EAX,[EBP + -0x2e]               ; 00415980
    PUSH EAX                            ; 00415983
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00415984
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x2a]         ; 00415989
    ADD ESP,0x8                         ; 0041598c
    FSUB float ptr [EBX + 0x34]         ; 0041598f
    SUB ESP,0x4                         ; 00415992
    FSTP float ptr [ESP]                ; 00415995
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00415998
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041599d
    FLD float ptr [EBP + 0x76]          ; 004159a0
    FABS                                ; 004159a3
    ADD ESP,0x4                         ; 004159a5
    FCOMP double ptr [0x00615649]       ; 004159a8 | DOUBLE_00615649
    FNSTSW AX                           ; 004159ae
    SAHF                                ; 004159b0
    JNC 0x00415832                      ; 004159b1
        ;   XREF to: 00415832 (CONDITIONAL_JUMP)  ; LAB_00415832
    PUSH 0x1                            ; 004159b7
    PUSH 0x3                            ; 004159b9
    PUSH ESI                            ; 004159bb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004159bc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004159c1
    MOV EDX,dword ptr [EBX + 0xbef8]    ; 004159c4
    PUSH EDX                            ; 004159ca
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004159cb
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004159d0
    TEST EAX,EAX                        ; 004159d3
    JNZ 0x00415832                      ; 004159d5
        ;   XREF to: 00415832 (CONDITIONAL_JUMP)  ; LAB_00415832
    MOV ECX,dword ptr [EBX + 0xbefc]    ; 004159db
    PUSH ECX                            ; 004159e1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004159e2
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004159e7
    TEST EAX,EAX                        ; 004159ea
    JNZ 0x00415832                      ; 004159ec
        ;   XREF to: 00415832 (CONDITIONAL_JUMP)  ; LAB_00415832
    PUSH 0x6155f7                       ; 004159f2 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004159f7
    PUSH EBX                            ; 004159fd
    CALL dword ptr [EAX + 0x24]         ; 004159fe
    ADD ESP,0x8                         ; 00415a01
    MOV dword ptr [EBX + 0xbefc],EAX    ; 00415a04
    JMP 0x00415832                      ; 00415a0a
        ;   XREF to: 00415832 (UNCONDITIONAL_JUMP)  ; LAB_00415832
    PUSH 0x1                            ; 00415a0f
        ;   Label: LAB_00415a0f
    PUSH 0x1                            ; 00415a11
    PUSH ESI                            ; 00415a13
    MOV dword ptr [EBX + 0xbe38],0x0    ; 00415a14
    JMP 0x004158fb                      ; 00415a1e
        ;   XREF to: 004158fb (UNCONDITIONAL_JUMP)  ; LAB_004158fb
    PUSH 0x1                            ; 00415a23
        ;   Label: LAB_00415a23
    PUSH 0x1                            ; 00415a25
    JMP 0x004158fa                      ; 00415a27
        ;   XREF to: 004158fa (UNCONDITIONAL_JUMP)  ; LAB_004158fa
    PUSH dword ptr [EBP + 0x92]         ; 00415a2c
        ;   Label: LAB_00415a2c
    PUSH EBX                            ; 00415a32
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00415a33
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00415a38
    TEST EAX,EAX                        ; 00415a3b
    JZ 0x0041556b                       ; 00415a3d
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00415a43
    PUSH 0x1                            ; 00415a45
    PUSH ESI                            ; 00415a47
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00415a48
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415a4d
    JMP 0x0041556b                      ; 00415a50
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00415a55
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00415a5b
    PUSH EBX                            ; 00415a61
    CALL dword ptr [EAX + 0x158]        ; 00415a62
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415a68
    ADD ESP,0x8                         ; 00415a6e
    TEST EAX,EAX                        ; 00415a71
    JNZ 0x00415aab                      ; 00415a73
        ;   XREF to: 00415aab (CONDITIONAL_JUMP)  ; LAB_00415aab
    PUSH dword ptr [EBP + 0x92]         ; 00415a75
    PUSH EBX                            ; 00415a7b
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00415a7c
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00415a81
    TEST EAX,EAX                        ; 00415a84
    JZ 0x00415a9a                       ; 00415a86
        ;   XREF to: 00415a9a (CONDITIONAL_JUMP)  ; LAB_00415a9a
    PUSH 0x1                            ; 00415a88
    PUSH 0x1                            ; 00415a8a
    PUSH ESI                            ; 00415a8c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00415a8d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415a92
    JMP 0x0041556b                      ; 00415a95
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00415a9a
        ;   Label: LAB_00415a9a
    PUSH EAX                            ; 00415a9c
    PUSH ESI                            ; 00415a9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00415a9e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415aa3
    JMP 0x0041556b                      ; 00415aa6
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0065a5ac]                ; 00415aab | FLOAT_0065a5ac
        ;   Label: LAB_00415aab
    PUSH 0x3e32b8c2                     ; 00415ab0
    MOV dword ptr [EBP + 0x66],EAX      ; 00415ab5
    LEA EAX,[EBX + 0x23ac]              ; 00415ab8
    PUSH 0x3f000000                     ; 00415abe
    MOV dword ptr [EAX + 0x8],0x0       ; 00415ac3
    XOR EDX,EDX                         ; 00415aca
    MOV ECX,dword ptr [EAX + 0x8]       ; 00415acc
    MOV dword ptr [EAX + 0x4],ECX       ; 00415acf
    MOV ECX,dword ptr [EAX + 0x4]       ; 00415ad2
    MOV dword ptr [EAX],ECX             ; 00415ad5
    MOV EAX,dword ptr [EBP + 0x66]      ; 00415ad7
    MOV dword ptr [EBP + 0xe],EDX       ; 00415ada
    MOV dword ptr [EBP + 0x16],EAX      ; 00415add
    LEA EAX,[EBP + 0xe]                 ; 00415ae0
    MOV dword ptr [EBP + 0x12],EDX      ; 00415ae3
    PUSH EAX                            ; 00415ae6
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415ae7
    PUSH EAX                            ; 00415aed
    MOV EDX,dword ptr [EAX + 0x154]     ; 00415aee
    CALL dword ptr [EDX + 0xbc]         ; 00415af4
    ADD ESP,0x4                         ; 00415afa
    PUSH EAX                            ; 00415afd
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415afe
    ADD EAX,0x20                        ; 00415b04
    PUSH EAX                            ; 00415b07
    PUSH EBX                            ; 00415b08
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00415b09
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00415b0e
    TEST EAX,EAX                        ; 00415b11
    JL 0x0041556b                       ; 00415b13
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDX,[EBX + 0x20]                ; 00415b19
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415b1c
    FLD float ptr [EDX]                 ; 00415b22
    FSUB float ptr [EAX + 0x20]         ; 00415b24
    FSTP float ptr [EBP + -0x16]        ; 00415b27
    FLD float ptr [EDX + 0x4]           ; 00415b2a
    FSUB float ptr [EAX + 0x24]         ; 00415b2d
    FLD float ptr [EBP + -0x16]         ; 00415b30
    FXCH                                ; 00415b33
    FSTP float ptr [EBP + -0x12]        ; 00415b35
    FLD float ptr [EDX + 0x8]           ; 00415b38
    FSUB float ptr [EAX + 0x28]         ; 00415b3b
    FXCH                                ; 00415b3e
    FMUL float ptr [EBP + -0x16]        ; 00415b40
    FXCH                                ; 00415b43
    FST float ptr [EBP + -0xe]          ; 00415b45
    FMUL float ptr [EBP + -0xe]         ; 00415b48
    XOR EAX,EAX                         ; 00415b4b
    FADDP                               ; 00415b4d
    MOV dword ptr [EBP + -0x12],EAX     ; 00415b4f
    FSQRT                               ; 00415b52
    FSTP float ptr [EBP + 0x72]         ; 00415b54
    MOV EAX,dword ptr [EBP + 0x72]      ; 00415b57
    FLD float ptr [EBP + 0x72]          ; 00415b5a
    MOV dword ptr [EBP + 0x6a],EAX      ; 00415b5d
    FCOMP float ptr [0x0065a5b8]        ; 00415b60 | FLOAT_0065a5b8
    FNSTSW AX                           ; 00415b66
    SAHF                                ; 00415b68
    JBE 0x00415c1f                      ; 00415b69
        ;   XREF to: 00415c1f (CONDITIONAL_JUMP)  ; LAB_00415c1f
    MOV dword ptr [EBX + 0xbe38],0x0    ; 00415b6f
    CMP EDI,0x1                         ; 00415b79
    JNZ 0x00415c1f                      ; 00415b7c
        ;   XREF to: 00415c1f (CONDITIONAL_JUMP)  ; LAB_00415c1f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415b82
    FLD float ptr [EAX + 0x20]          ; 00415b88
    FSUB float ptr [EDX]                ; 00415b8b
    FSTP float ptr [EBP + -0xa]         ; 00415b8d
    FLD float ptr [EAX + 0x24]          ; 00415b90
    FSUB float ptr [EDX + 0x4]          ; 00415b93
    FSTP float ptr [EBP + -0x6]         ; 00415b96
    FLD float ptr [EAX + 0x28]          ; 00415b99
    LEA EAX,[EBP + -0xa]                ; 00415b9c
    PUSH EAX                            ; 00415b9f
    LEA EAX,[EBP + -0x52]               ; 00415ba0
    FSUB float ptr [EDX + 0x8]          ; 00415ba3
    PUSH EAX                            ; 00415ba6
    FSTP float ptr [EBP + -0x2]         ; 00415ba7
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00415baa
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x4e]         ; 00415baf
    ADD ESP,0x8                         ; 00415bb2
    FSUB float ptr [EBX + 0x34]         ; 00415bb5
    SUB ESP,0x4                         ; 00415bb8
    FSTP float ptr [ESP]                ; 00415bbb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00415bbe
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00415bc3
    FLD float ptr [EBP + 0x76]          ; 00415bc6
    FABS                                ; 00415bc9
    ADD ESP,0x4                         ; 00415bcb
    FCOMP double ptr [0x00615649]       ; 00415bce | DOUBLE_00615649
    FNSTSW AX                           ; 00415bd4
    SAHF                                ; 00415bd6
    JNC 0x00415c1f                      ; 00415bd7
        ;   XREF to: 00415c1f (CONDITIONAL_JUMP)  ; LAB_00415c1f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415bd9
    FLD float ptr [EAX + 0x24]          ; 00415bdf
    FSUB float ptr [EBX + 0x24]         ; 00415be2
    FABS                                ; 00415be5
    FCOMP double ptr [0x00615651]       ; 00415be7 | DOUBLE_00615651
    FNSTSW AX                           ; 00415bed
    SAHF                                ; 00415bef
    JNC 0x00415c1f                      ; 00415bf0
        ;   XREF to: 00415c1f (CONDITIONAL_JUMP)  ; LAB_00415c1f
    PUSH EDI                            ; 00415bf2
    PUSH 0x2                            ; 00415bf3
    PUSH ESI                            ; 00415bf5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00415bf6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415bfb
    MOV EDX,dword ptr [EBX + 0xbef8]    ; 00415bfe
    PUSH EDX                            ; 00415c04
    MOV dword ptr [EBX + 0xbe38],0x0    ; 00415c05
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00415c0f
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00415c14
    TEST EAX,EAX                        ; 00415c17
    JZ 0x00415cf5                       ; 00415c19
        ;   XREF to: 00415cf5 (CONDITIONAL_JUMP)  ; LAB_00415cf5
    FLD float ptr [EBP + 0x6a]          ; 00415c1f
        ;   Label: LAB_00415c1f
    FCOMP float ptr [EBP + 0x66]        ; 00415c22
    FNSTSW AX                           ; 00415c25
    SAHF                                ; 00415c27
    JA 0x00415ccb                       ; 00415c28
        ;   XREF to: 00415ccb (CONDITIONAL_JUMP)  ; LAB_00415ccb
    FLD float ptr [EBX + 0xbe38]        ; 00415c2e
    FLDZ                                ; 00415c34
    FCOMPP                              ; 00415c36
    FNSTSW AX                           ; 00415c38
    SAHF                                ; 00415c3a
    JC 0x00415ccb                       ; 00415c3b
        ;   XREF to: 00415ccb (CONDITIONAL_JUMP)  ; LAB_00415ccb
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00415c41
    LEA EDX,[EBX + 0x20]                ; 00415c47
    FLD float ptr [EAX + 0x20]          ; 00415c4a
    FSUB float ptr [EDX]                ; 00415c4d
    FSTP float ptr [EBP + 0x2]          ; 00415c4f
    FLD float ptr [EAX + 0x24]          ; 00415c52
    FSUB float ptr [EDX + 0x4]          ; 00415c55
    FSTP float ptr [EBP + 0x6]          ; 00415c58
    FLD float ptr [EAX + 0x28]          ; 00415c5b
    LEA EAX,[EBP + 0x2]                 ; 00415c5e
    PUSH EAX                            ; 00415c61
    LEA EAX,[EBP + -0x46]               ; 00415c62
    FSUB float ptr [EDX + 0x8]          ; 00415c65
    PUSH EAX                            ; 00415c68
    FSTP float ptr [EBP + 0xa]          ; 00415c69
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00415c6c
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x42]         ; 00415c71
    ADD ESP,0x8                         ; 00415c74
    FSUB float ptr [EBX + 0x34]         ; 00415c77
    SUB ESP,0x4                         ; 00415c7a
    FSTP float ptr [ESP]                ; 00415c7d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00415c80
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00415c85
    FLD float ptr [EBP + 0x76]          ; 00415c88
    FABS                                ; 00415c8b
    ADD ESP,0x4                         ; 00415c8d
    FCOMP double ptr [0x00615649]       ; 00415c90 | DOUBLE_00615649
    FNSTSW AX                           ; 00415c96
    SAHF                                ; 00415c98
    JNC 0x00415ccb                      ; 00415c99
        ;   XREF to: 00415ccb (CONDITIONAL_JUMP)  ; LAB_00415ccb
    PUSH 0x1                            ; 00415c9b
    PUSH 0x3                            ; 00415c9d
    LEA EAX,[EBX + 0x158]               ; 00415c9f
    PUSH EAX                            ; 00415ca5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00415ca6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415cab
    MOV ESI,dword ptr [EBX + 0xbef8]    ; 00415cae
    PUSH ESI                            ; 00415cb4
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 00415cb5
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00415cbf
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00415cc4
    TEST EAX,EAX                        ; 00415cc7
    JZ 0x00415d29                       ; 00415cc9
        ;   XREF to: 00415d29 (CONDITIONAL_JUMP)  ; LAB_00415d29
    FLD float ptr [EBP + 0x6a]          ; 00415ccb
        ;   Label: LAB_00415ccb
    FCOMP float ptr [EBX + 0xbe34]      ; 00415cce
    FNSTSW AX                           ; 00415cd4
    SAHF                                ; 00415cd6
    JBE 0x0041556b                      ; 00415cd7
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00415cdd
    PUSH 0x0                            ; 00415cdf
    LEA EAX,[EBX + 0x158]               ; 00415ce1
    PUSH EAX                            ; 00415ce7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00415ce8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415ced
    JMP 0x0041556b                      ; 00415cf0
        ;   XREF to: 0041556b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [EBX + 0xbefc]    ; 00415cf5
        ;   Label: LAB_00415cf5
    PUSH ECX                            ; 00415cfb
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00415cfc
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00415d01
    TEST EAX,EAX                        ; 00415d04
    JNZ 0x00415c1f                      ; 00415d06
        ;   XREF to: 00415c1f (CONDITIONAL_JUMP)  ; LAB_00415c1f
    PUSH 0x61561b                       ; 00415d0c | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00415d11
    PUSH EBX                            ; 00415d17
    CALL dword ptr [EAX + 0x24]         ; 00415d18
    ADD ESP,0x8                         ; 00415d1b
    MOV dword ptr [EBX + 0xbefc],EAX    ; 00415d1e
    JMP 0x00415c1f                      ; 00415d24
        ;   XREF to: 00415c1f (UNCONDITIONAL_JUMP)  ; LAB_00415c1f
    MOV EDI,dword ptr [EBX + 0xbefc]    ; 00415d29
        ;   Label: LAB_00415d29
    PUSH EDI                            ; 00415d2f
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00415d30
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00415d35
    TEST EAX,EAX                        ; 00415d38
    JNZ 0x00415ccb                      ; 00415d3a
        ;   XREF to: 00415ccb (CONDITIONAL_JUMP)  ; LAB_00415ccb
    PUSH 0x61562e                       ; 00415d3c | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00415d41
    PUSH EBX                            ; 00415d47
    CALL dword ptr [EAX + 0x24]         ; 00415d48
    ADD ESP,0x8                         ; 00415d4b
    MOV dword ptr [EBX + 0xbefc],EAX    ; 00415d4e
    JMP 0x00415ccb                      ; 00415d54
        ;   XREF to: 00415ccb (UNCONDITIONAL_JUMP)  ; LAB_00415ccb
    CMP EDI,0x8                         ; 00415d59
        ;   Label: LAB_00415d59
    JA 0x0041556b                       ; 00415d5c
        ;   XREF to: 0041556b (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x41544c]  ; 00415d62 | caseD_0 | caseD_1 | caseD_7
        ;   Label: switchD

