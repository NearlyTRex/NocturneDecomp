; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00586500(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005864a8 = 005869fd
;   TerminatedCString s_s_confused_while_walking_005d8266
;   TerminatedCString s_dog5_wav_005d8290
;   TerminatedCString s_YowDead_005d8299
;   TerminatedCString s_dog5_wav_005d82a1
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d82aa
;   undefined4 DAT_005d82cf
;   undefined4 DAT_005d82d7
;   undefined4 DAT_005d82df
;   undefined4 DAT_005d82e7
;   undefined4 DAT_005d82eb
;   undefined4 DAT_005e65dc
;   undefined4 DAT_005e65e8
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005fba60
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586500
        ;   Label: core_xform.cpp_FUN_00586500
    PUSH ESI                            ; 00586501
    PUSH EDI                            ; 00586502
    PUSH EBP                            ; 00586503
    MOV EBP,ESP                         ; 00586504
    SUB ESP,0x14c                       ; 00586506
    SUB EBP,0x7a                        ; 0058650c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0058650f
    PUSH dword ptr [EBP + 0x92]         ; 00586515
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058651b
    PUSH EBX                            ; 00586521
    CALL dword ptr [EAX + 0x148]        ; 00586522
    ADD ESP,0x8                         ; 00586528
    TEST EAX,EAX                        ; 0058652b
    JNZ 0x00586537                      ; 0058652d
        ;   XREF to: 00586537 (CONDITIONAL_JUMP)  ; LAB_00586537
    LEA ESP,[EBP + 0x7a]                ; 0058652f
    POP EBP                             ; 00586532
    POP EDI                             ; 00586533
    POP ESI                             ; 00586534
    POP EBX                             ; 00586535
    RET                                 ; 00586536
    PUSH dword ptr [EBP + 0x92]         ; 00586537
        ;   Label: LAB_00586537
    PUSH EBX                            ; 0058653d
    CALL core_charactr.cpp_FUN_00433c60 ; 0058653e
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 00586543
    MOV EDX,dword ptr [EBX + 0xcdd0]    ; 00586546
    XOR EAX,EAX                         ; 0058654c
    CMP EDX,0x1                         ; 0058654e
    JZ 0x005865bb                       ; 00586551
        ;   XREF to: 005865bb (CONDITIONAL_JUMP)  ; LAB_005865bb
    PUSH EAX                            ; 00586553
        ;   Label: LAB_00586553
    PUSH dword ptr [EBP + 0x92]         ; 00586554
    PUSH EBX                            ; 0058655a
    CALL core_charactr.cpp_FUN_00432330 ; 0058655b
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    LEA EAX,[EBX + 0x249c]              ; 00586560
    MOV dword ptr [EAX + 0x8],0x0       ; 00586566
    FLD float ptr [EBP + 0x92]          ; 0058656d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00586573
    MOV dword ptr [EAX + 0x4],EDX       ; 00586576
    MOV EDX,dword ptr [EAX + 0x4]       ; 00586579
    MOV dword ptr [EAX],EDX             ; 0058657c
    FMUL float ptr [EBX + 0xcdcc]       ; 0058657e
    FMUL float ptr [EBX + 0xd074]       ; 00586584
    ADD ESP,0xc                         ; 0058658a
    LEA ESI,[EBX + 0x158]               ; 0058658d
    FSTP float ptr [EBP + 0x56]         ; 00586593
    FLD float ptr [EBP + 0x56]          ; 00586596
        ;   Label: LAB_00586596
    FLDZ                                ; 00586599
    FCOMPP                              ; 0058659b
    FNSTSW AX                           ; 0058659d
    SAHF                                ; 0058659f
    JNC 0x005865bf                      ; 005865a0
        ;   XREF to: 005865bf (CONDITIONAL_JUMP)  ; LAB_005865bf
    LEA EAX,[EBP + 0x56]                ; 005865a2
    PUSH EAX                            ; 005865a5
    PUSH ESI                            ; 005865a6
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 005865a7
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005865ac
    PUSH EAX                            ; 005865af
    PUSH EBX                            ; 005865b0
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 005865b1
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005865b6
    JMP 0x00586596                      ; 005865b9
        ;   XREF to: 00586596 (UNCONDITIONAL_JUMP)  ; LAB_00586596
    MOV EAX,EDX                         ; 005865bb
        ;   Label: LAB_005865bb
    JMP 0x00586553                      ; 005865bd
        ;   XREF to: 00586553 (UNCONDITIONAL_JUMP)  ; LAB_00586553
    PUSH ESI                            ; 005865bf
        ;   Label: LAB_005865bf
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005865c0
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 005865c5
    FMUL float ptr [EBX + 0xcdcc]       ; 005865cb
    FLD float ptr [EBX + 0x24a4]        ; 005865d1
    ADD ESP,0x4                         ; 005865d7
    MOV ESI,dword ptr [EAX + 0x24]      ; 005865da
    SUB ESP,0x4                         ; 005865dd
    FSTP float ptr [EBX + 0x2524]       ; 005865e0
    FSTP float ptr [ESP]                ; 005865e6
    PUSH EBX                            ; 005865e9
    MOV dword ptr [EBP + 0x6a],ESI      ; 005865ea
    CALL core_charactr.cpp_FUN_00434850 ; 005865ed
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 005865f2
    CMP ESI,0x8                         ; 005865f5
    JNZ 0x00586610                      ; 005865f8
        ;   XREF to: 00586610 (CONDITIONAL_JUMP)  ; LAB_00586610
    FLD float ptr [EBX + 0x2528]        ; 005865fa
    FLD ST0                             ; 00586600
    FMUL double ptr [0x005d82cf]        ; 00586602 | DAT_005d82cf
    FSTP ST1                            ; 00586608
    FSTP float ptr [EBX + 0x2528]       ; 0058660a
    PUSH dword ptr [EBP + 0x92]         ; 00586610
        ;   Label: LAB_00586610
    PUSH EBX                            ; 00586616
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00586617
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058661c
    TEST EAX,EAX                        ; 0058661f
    JZ 0x00586e34                       ; 00586621
        ;   XREF to: 00586e34 (CONDITIONAL_JUMP)  ; LAB_00586e34
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00586627
    LEA ESI,[EBX + 0x158]               ; 0058662d
    CMP EAX,0x2                         ; 00586633
    JNC 0x00586856                      ; 00586636
        ;   XREF to: 00586856 (CONDITIONAL_JUMP)  ; LAB_00586856
    CMP EAX,0x1                         ; 0058663c
    JNZ 0x0058685d                      ; 0058663f
        ;   XREF to: 0058685d (CONDITIONAL_JUMP)  ; LAB_0058685d
    PUSH ESI                            ; 00586645
    CALL core_motion.cpp_FUN_004fc930   ; 00586646
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058664b
    ADD ESP,0x4                         ; 0058664e
    FLD float ptr [EBP + 0x76]          ; 00586651
    FCOMP double ptr [0x005d82df]       ; 00586654 | DAT_005d82df
    FNSTSW AX                           ; 0058665a
    SAHF                                ; 0058665c
    JBE 0x0058667a                      ; 0058665d
        ;   XREF to: 0058667a (CONDITIONAL_JUMP)  ; LAB_0058667a
    PUSH 0x1                            ; 0058665f
    PUSH 0x2                            ; 00586661
    PUSH 0x0                            ; 00586663
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586665
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058666a
    ADD EAX,0x5                         ; 0058666d
    PUSH EAX                            ; 00586670
        ;   Label: LAB_00586670
    PUSH ESI                            ; 00586671
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586672
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586677
        ;   Label: LAB_00586677
    LEA EAX,[EBX + 0x249c]              ; 0058667a
        ;   Label: LAB_0058667a
    MOV dword ptr [EAX + 0x8],0x0       ; 00586680
    MOV EDX,dword ptr [EAX + 0x8]       ; 00586687
    MOV dword ptr [EAX + 0x4],EDX       ; 0058668a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058668d
    MOV dword ptr [EAX],EDX             ; 00586690
    FLD float ptr [EBX + 0xcde0]        ; 00586692
        ;   Label: caseD_4
    FLDZ                                ; 00586698
    FCOMPP                              ; 0058669a
    FNSTSW AX                           ; 0058669c
    SAHF                                ; 0058669e
    JNC 0x005866b3                      ; 0058669f
        ;   XREF to: 005866b3 (CONDITIONAL_JUMP)  ; LAB_005866b3
    FLD float ptr [EBX + 0xcde0]        ; 005866a1
    FSUB float ptr [EBP + 0x92]         ; 005866a7
    FSTP float ptr [EBX + 0xcde0]       ; 005866ad
    PUSH EBX                            ; 005866b3
        ;   Label: LAB_005866b3
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 005866b4
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005866b9
    TEST EAX,EAX                        ; 005866bc
    JZ 0x005867cf                       ; 005866be
        ;   XREF to: 005867cf (CONDITIONAL_JUMP)  ; LAB_005867cf
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005866c4
    TEST EAX,EAX                        ; 005866ca
    JZ 0x005866f8                       ; 005866cc
        ;   XREF to: 005866f8 (CONDITIONAL_JUMP)  ; LAB_005866f8
    PUSH EAX                            ; 005866ce
    MOV EDX,dword ptr [EAX + 0x154]     ; 005866cf
    CALL dword ptr [EDX + 0xf4]         ; 005866d5
    ADD ESP,0x4                         ; 005866db
    CMP EAX,EBX                         ; 005866de
    JNZ 0x005866f8                      ; 005866e0
        ;   XREF to: 005866f8 (CONDITIONAL_JUMP)  ; LAB_005866f8
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 005866e2
    PUSH EDX                            ; 005866e8
    MOV ECX,dword ptr [0x00603b28]      ; 005866e9 | g_CDemonSetPtr
    PUSH ECX                            ; 005866ef | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005866f0
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005866f5
    PUSH dword ptr [EBP + 0x92]         ; 005866f8
        ;   Label: LAB_005866f8
    PUSH EBX                            ; 005866fe
    LEA ESI,[EBX + 0x2518]              ; 005866ff
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00586705
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 0058670a
    FMUL float ptr [EBP + 0x92]         ; 0058670c
    FLD float ptr [ESI + 0x4]           ; 00586712
    FMUL float ptr [EBP + 0x92]         ; 00586715
    FLD float ptr [ESI + 0x8]           ; 0058671b
    FMUL float ptr [EBP + 0x92]         ; 0058671e
    LEA EDI,[EBP + -0x42]               ; 00586724
    LEA ESI,[EBP + -0x7e]               ; 00586727
    FXCH ST2                            ; 0058672a
    FSTP float ptr [EBP + -0x7e]        ; 0058672c
    FSTP float ptr [EBP + -0x7a]        ; 0058672f
    FSTP float ptr [EBP + -0x76]        ; 00586732
    MOVSD ES:EDI,ESI                    ; 00586735
    MOVSD ES:EDI,ESI                    ; 00586736
    MOVSD ES:EDI,ESI                    ; 00586737
    LEA EAX,[EBX + 0x250c]              ; 00586738
    FLD float ptr [EBP + -0x42]         ; 0058673e
    FLD float ptr [EBP + -0x3e]         ; 00586741
    FLD float ptr [EBP + -0x3a]         ; 00586744
    LEA EDI,[EBP + 0x2a]                ; 00586747
    LEA ESI,[EBP + 0x42]                ; 0058674a
    FXCH ST2                            ; 0058674d
    FADD float ptr [EAX]                ; 0058674f
    FXCH                                ; 00586751
    FADD float ptr [EAX + 0x4]          ; 00586753
    FXCH ST2                            ; 00586756
    FADD float ptr [EAX + 0x8]          ; 00586758
    FXCH                                ; 0058675b
    FSTP float ptr [EBP + 0x42]         ; 0058675d
    FXCH                                ; 00586760
    FSTP float ptr [EBP + 0x46]         ; 00586762
    FSTP float ptr [EBP + 0x4a]         ; 00586765
    MOVSD ES:EDI,ESI                    ; 00586768
    MOVSD ES:EDI,ESI                    ; 00586769
    MOVSD ES:EDI,ESI                    ; 0058676a
    LEA EDX,[EBX + 0x249c]              ; 0058676b
    FLD float ptr [EBP + 0x2a]          ; 00586771
    FLD float ptr [EBP + 0x2e]          ; 00586774
    FLD float ptr [EBP + 0x32]          ; 00586777
    LEA EDI,[EBP + 0x6]                 ; 0058677a
    LEA ESI,[EBP + 0x36]                ; 0058677d
    FXCH ST2                            ; 00586780
    FADD float ptr [EDX]                ; 00586782
    FXCH                                ; 00586784
    FADD float ptr [EDX + 0x4]          ; 00586786
    FXCH ST2                            ; 00586789
    FADD float ptr [EDX + 0x8]          ; 0058678b
    FXCH                                ; 0058678e
    FSTP float ptr [EBP + 0x36]         ; 00586790
    FXCH                                ; 00586793
    FSTP float ptr [EBP + 0x3a]         ; 00586795
    FSTP float ptr [EBP + 0x3e]         ; 00586798
    MOVSD ES:EDI,ESI                    ; 0058679b
    MOVSD ES:EDI,ESI                    ; 0058679c
    MOVSD ES:EDI,ESI                    ; 0058679d
    MOV dword ptr [EAX + 0x8],0x0       ; 0058679e
    ADD ESP,0x8                         ; 005867a5
    MOV ECX,dword ptr [EAX + 0x8]       ; 005867a8
    MOV dword ptr [EAX + 0x4],ECX       ; 005867ab
    MOV ECX,dword ptr [EAX + 0x4]       ; 005867ae
    MOV dword ptr [EAX],ECX             ; 005867b1
    MOV dword ptr [EDX + 0x8],0x0       ; 005867b3
    LEA EAX,[EBP + 0x6]                 ; 005867ba
    FLD float ptr [EDX + 0x8]           ; 005867bd
    PUSH EAX                            ; 005867c0
    FST float ptr [EDX + 0x4]           ; 005867c1
    PUSH EBX                            ; 005867c4
    FSTP float ptr [EDX]                ; 005867c5
    CALL core_charactr.cpp_FUN_0042c230 ; 005867c7
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005867cc
    PUSH EBX                            ; 005867cf
        ;   Label: LAB_005867cf
    CALL core_charactr.cpp_FUN_0042cd30 ; 005867d0
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005867d5
    LEA EAX,[EBX + 0x158]               ; 005867d8
    PUSH EAX                            ; 005867de
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005867df
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005867e4
    PUSH dword ptr [EBP + 0x92]         ; 005867e7
    PUSH EBX                            ; 005867ed
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 005867ee
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005867f3
    LEA ESP,[EBP + 0x7a]                ; 005867f6
    POP EBP                             ; 005867f9
    POP EDI                             ; 005867fa
    POP ESI                             ; 005867fb
    POP EBX                             ; 005867fc
    RET                                 ; 005867fd
    PUSH 0x1                            ; 005867fe
        ;   Label: LAB_005867fe
    PUSH 0x0                            ; 00586800
    PUSH ESI                            ; 00586802
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586803
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586808
    PUSH EBX                            ; 0058680b
    PUSH 0x5d8266                       ; 0058680c | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005f1690]      ; 00586811 | g_CConsolePtr
    PUSH EDI                            ; 00586817 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00586818
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x00586677                      ; 0058681d
        ;   XREF to: 00586677 (UNCONDITIONAL_JUMP)  ; LAB_00586677
    PUSH ESI                            ; 00586822
        ;   Label: LAB_00586822
    CALL core_motion.cpp_FUN_004fc930   ; 00586823
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00586828
    ADD ESP,0x4                         ; 0058682b
    FLD float ptr [EBP + 0x76]          ; 0058682e
    FCOMP double ptr [0x005d82df]       ; 00586831 | DAT_005d82df
    FNSTSW AX                           ; 00586837
    SAHF                                ; 00586839
    JBE 0x0058667a                      ; 0058683a
        ;   XREF to: 0058667a (CONDITIONAL_JUMP)  ; LAB_0058667a
    PUSH 0x1                            ; 00586840
    PUSH 0x0                            ; 00586842
    PUSH 0x0                            ; 00586844
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586846
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058684b
    ADD EAX,0x8                         ; 0058684e
    JMP 0x00586670                      ; 00586851
        ;   XREF to: 00586670 (UNCONDITIONAL_JUMP)  ; LAB_00586670
    JBE 0x00586822                      ; 00586856
        ;   XREF to: 00586822 (CONDITIONAL_JUMP)  ; LAB_00586822
        ;   Label: LAB_00586856
    CMP EAX,0x3                         ; 00586858
    JZ 0x005867fe                       ; 0058685b
        ;   XREF to: 005867fe (CONDITIONAL_JUMP)  ; LAB_005867fe
    LEA ESI,[EBX + 0x158]               ; 0058685d
        ;   Label: LAB_0058685d
    PUSH ESI                            ; 00586863
    CALL core_motion.cpp_FUN_004fc930   ; 00586864
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00586869
    ADD ESP,0x4                         ; 0058686c
    FLD float ptr [EBP + 0x76]          ; 0058686f
    FCOMP double ptr [0x005d82df]       ; 00586872 | DAT_005d82df
    FNSTSW AX                           ; 00586878
    SAHF                                ; 0058687a
    JBE 0x0058667a                      ; 0058687b
        ;   XREF to: 0058667a (CONDITIONAL_JUMP)  ; LAB_0058667a
    PUSH 0x1                            ; 00586881
    PUSH 0x3                            ; 00586883
    PUSH 0x0                            ; 00586885
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586887
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058688c
    JMP 0x00586670                      ; 0058688f
        ;   XREF to: 00586670 (UNCONDITIONAL_JUMP)  ; LAB_00586670
    LEA EAX,[EBP + 0xffffff2e]          ; 00586894
        ;   Label: caseD_9
    PUSH EAX                            ; 0058689a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0058689b
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005868a0
    PUSH 0x41700000                     ; 005868a3
    PUSH 0x40e00000                     ; 005868a8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005868ad
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005868b2
    MOV dword ptr [EBP + 0xffffff62],EBX ; 005868b5
    MOV dword ptr [EBP + 0xffffff66],EBX ; 005868bb
    ADD ESP,0x8                         ; 005868c1
    FLD float ptr [EBP + 0x76]          ; 005868c4
    LEA EAX,[EBP + 0xffffff2e]          ; 005868c7
    FSTP float ptr [EBP + 0xffffff32]   ; 005868cd
    MOV EDX,dword ptr [EBX + 0xd058]    ; 005868d3
    PUSH EAX                            ; 005868d9
    LEA EAX,[EDX*0x4 + 0x0]             ; 005868da
    SUB EAX,EDX                         ; 005868e1
    MOV EDX,EAX                         ; 005868e3
    SHL EDX,0x4                         ; 005868e5
    LEA EAX,[EBX + 0xfd8]               ; 005868e8
    ADD EAX,EDX                         ; 005868ee
    PUSH 0x3f333333                     ; 005868f0
    PUSH EAX                            ; 005868f5
    PUSH 0x2cfd900                      ; 005868f6 | DAT_02cfd900
    LEA ESI,[EBP + -0x66]               ; 005868fb
    LEA EDI,[EBP + 0xffffff76]          ; 005868fe
    CALL core_xform.cpp_FUN_00583260    ; 00586904
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00586909
    LEA EAX,[EBP + 0xffffff76]          ; 0058690c
    LEA ESI,[EBP + -0x66]               ; 00586912
    PUSH EAX                            ; 00586915
    MOVSD ES:EDI,ESI                    ; 00586916
    MOVSD ES:EDI,ESI                    ; 00586917
    MOVSD ES:EDI,ESI                    ; 00586918
    PUSH EBX                            ; 00586919
    LEA ESI,[EBP + -0x4e]               ; 0058691a
    CALL core_actor.cpp_FUN_00408b80    ; 0058691d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00586922
    LEA EAX,[EBP + 0x1e]                ; 00586925
    PUSH EAX                            ; 00586928
    LEA EDI,[EBP + 0x1e]                ; 00586929
    LEA ESI,[EBP + -0x4e]               ; 0058692c
    PUSH EBX                            ; 0058692f
    MOVSD ES:EDI,ESI                    ; 00586930
    MOVSD ES:EDI,ESI                    ; 00586931
    MOVSD ES:EDI,ESI                    ; 00586932
    CALL core_enemy.cpp_FUN_004893f0    ; 00586933
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 00586938
    MOV ECX,dword ptr [EBX + 0xd070]    ; 0058693b
    PUSH ECX                            ; 00586941
    MOV ESI,dword ptr [0x006045f8]      ; 00586942 | DAT_006045f8
    PUSH ESI                            ; 00586948
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00586949
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0058694e
    TEST EAX,EAX                        ; 00586951
    JNZ 0x00586692                      ; 00586953
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5d8290                       ; 00586959 | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058695e
    PUSH EBX                            ; 00586964
    CALL dword ptr [EAX + 0x2c]         ; 00586965
    ADD ESP,0x8                         ; 00586968
    MOV dword ptr [EBX + 0xd070],EAX    ; 0058696b
    JMP 0x00586692                      ; 00586971
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,dword ptr [EBX + 0xcdd0]    ; 00586976
        ;   Label: caseD_13
    TEST ESI,ESI                        ; 0058697c
    JNZ 0x00586692                      ; 0058697e
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    CMP dword ptr [EBX + 0xdc],0x0      ; 00586984
    JNZ 0x00586692                      ; 0058698b
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH ESI                            ; 00586991
    LEA EAX,[EBX + 0x158]               ; 00586992
    PUSH EAX                            ; 00586998
    LEA ESI,[EBP + -0x36]               ; 00586999
    LEA EDI,[EBP + 0x12]                ; 0058699c
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0058699f
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 005869a4
    LEA EAX,[EBP + 0x12]                ; 005869a7
    LEA ESI,[EBP + -0x36]               ; 005869aa
    PUSH EAX                            ; 005869ad
    MOVSD ES:EDI,ESI                    ; 005869ae
    MOVSD ES:EDI,ESI                    ; 005869af
    MOVSD ES:EDI,ESI                    ; 005869b0
    PUSH EBX                            ; 005869b1
    LEA ESI,[EBP + -0x2a]               ; 005869b2
    CALL core_actor.cpp_FUN_00408b80    ; 005869b5
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005869ba
    PUSH 0x0                            ; 005869bd
    LEA EAX,[EBP + -0x1e]               ; 005869bf
    LEA EDI,[EBP + -0x1e]               ; 005869c2
    PUSH EAX                            ; 005869c5
    MOV EAX,[0x005fed24]                ; 005869c6 | g_CGorePtr
    LEA ESI,[EBP + -0x2a]               ; 005869cb
    PUSH EAX                            ; 005869ce
    MOVSD ES:EDI,ESI                    ; 005869cf
    MOVSD ES:EDI,ESI                    ; 005869d0
    MOVSD ES:EDI,ESI                    ; 005869d1
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 005869d2
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 005869d7
    PUSH 0x5d8299                       ; 005869da | = "YowDead"
    MOV EDX,dword ptr [0x005fba60]      ; 005869df | DAT_005fba60
    PUSH EDX                            ; 005869e5
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 005869e6
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 005869f0
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005869f5
    JMP 0x00586692                      ; 005869f8
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 005869fd
        ;   Label: caseD_0
    PUSH EBX                            ; 00586a03
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00586a04
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    LEA EDX,[EBX + 0x158]               ; 00586a09
    ADD ESP,0x8                         ; 00586a0f
    MOV dword ptr [EBP + 0x66],EDX      ; 00586a12
    TEST EAX,EAX                        ; 00586a15
    JZ 0x00586a5a                       ; 00586a17
        ;   XREF to: 00586a5a (CONDITIONAL_JUMP)  ; LAB_00586a5a
    PUSH EDX                            ; 00586a19
    CALL core_motion.cpp_FUN_004fc930   ; 00586a1a
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00586a1f
    ADD ESP,0x4                         ; 00586a22
    FLD float ptr [EBP + 0x76]          ; 00586a25
    FCOMP double ptr [0x005d82df]       ; 00586a28 | DAT_005d82df
    FNSTSW AX                           ; 00586a2e
    SAHF                                ; 00586a30
    JBE 0x00586692                      ; 00586a31
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00586a37
    PUSH 0x2                            ; 00586a39
    PUSH 0x0                            ; 00586a3b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586a3d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586a42
    ADD EAX,0x5                         ; 00586a45
    PUSH EAX                            ; 00586a48
    MOV ESI,dword ptr [EBP + 0x66]      ; 00586a49
    PUSH ESI                            ; 00586a4c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586a4d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586a52
    JMP 0x00586692                      ; 00586a55
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 00586a5a
        ;   Label: LAB_00586a5a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586a60
    PUSH EBX                            ; 00586a66
    CALL dword ptr [EAX + 0x144]        ; 00586a67
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00586a6d
    ADD ESP,0x8                         ; 00586a73
    TEST EDX,EDX                        ; 00586a76
    JZ 0x00586692                       ; 00586a78
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,EDX                         ; 00586a7e
    LEA EDI,[EBP + -0x5a]               ; 00586a80
    LEA ESI,[EBP + -0x12]               ; 00586a83
    FLD float ptr [EAX + 0x20]          ; 00586a86
    FLD float ptr [EAX + 0x24]          ; 00586a89
    LEA EDX,[EBX + 0x20]                ; 00586a8c
    FLD float ptr [EAX + 0x28]          ; 00586a8f
    FXCH ST2                            ; 00586a92
    FSUB float ptr [EDX]                ; 00586a94
    FXCH                                ; 00586a96
    FSUB float ptr [EDX + 0x4]          ; 00586a98
    FXCH ST2                            ; 00586a9b
    FSUB float ptr [EDX + 0x8]          ; 00586a9d
    FXCH                                ; 00586aa0
    FSTP float ptr [EBP + -0x12]        ; 00586aa2
    FXCH                                ; 00586aa5
    FSTP float ptr [EBP + -0xe]         ; 00586aa7
    FSTP float ptr [EBP + -0xa]         ; 00586aaa
    MOVSD ES:EDI,ESI                    ; 00586aad
    MOVSD ES:EDI,ESI                    ; 00586aae
    MOVSD ES:EDI,ESI                    ; 00586aaf
    FLD float ptr [EBP + -0x56]         ; 00586ab0
    FMUL ST0                            ; 00586ab3
    FLD float ptr [EBP + -0x5a]         ; 00586ab5
    FMUL ST0                            ; 00586ab8
    FADDP                               ; 00586aba
    FLD float ptr [EBP + -0x52]         ; 00586abc
    FMUL ST0                            ; 00586abf
    FADDP                               ; 00586ac1
    FSTP float ptr [EBP + 0x5e]         ; 00586ac3
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00586ac6
    MOV ECX,dword ptr [0x01d1a0a4]      ; 00586ac9 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00586acf
    ADD EAX,ECX                         ; 00586ad1
    MOV dword ptr [EBP + 0x5a],EAX      ; 00586ad3
    FLD float ptr [EBP + 0x5a]          ; 00586ad6
    FCOMP float ptr [0x005e65e8]        ; 00586ad9 | DAT_005e65e8
    FNSTSW AX                           ; 00586adf
    SAHF                                ; 00586ae1
    JC 0x00586b3d                       ; 00586ae2
        ;   XREF to: 00586b3d (CONDITIONAL_JUMP)  ; LAB_00586b3d
    PUSH 0x1                            ; 00586ae4
    PUSH 0x0                            ; 00586ae6
    PUSH 0x0                            ; 00586ae8
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586aea
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586aef
    ADD EAX,0x8                         ; 00586af2
    PUSH EAX                            ; 00586af5
    MOV ESI,dword ptr [EBP + 0x66]      ; 00586af6
    PUSH ESI                            ; 00586af9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586afa
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00586afa
    ADD ESP,0xc                         ; 00586aff
    MOV EAX,dword ptr [EBX + 0xd070]    ; 00586b02
    PUSH EAX                            ; 00586b08
    MOV EDX,dword ptr [0x006045f8]      ; 00586b09 | DAT_006045f8
    PUSH EDX                            ; 00586b0f
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00586b10
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00586b15
    TEST EAX,EAX                        ; 00586b18
    JNZ 0x00586692                      ; 00586b1a
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5d82a1                       ; 00586b20 | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586b25
    PUSH EBX                            ; 00586b2b
    CALL dword ptr [EAX + 0x2c]         ; 00586b2c
    ADD ESP,0x8                         ; 00586b2f
    MOV dword ptr [EBX + 0xd070],EAX    ; 00586b32
    JMP 0x00586692                      ; 00586b38
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00586b3d
        ;   Label: LAB_00586b3d
    PUSH 0x2                            ; 00586b3f
    PUSH 0x0                            ; 00586b41
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586b43
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586b48
    ADD EAX,0x5                         ; 00586b4b
    PUSH EAX                            ; 00586b4e
    MOV EDI,dword ptr [EBP + 0x66]      ; 00586b4f
    PUSH EDI                            ; 00586b52
    JMP 0x00586afa                      ; 00586b53
        ;   XREF to: 00586afa (UNCONDITIONAL_JUMP)  ; LAB_00586afa
    PUSH dword ptr [EBP + 0x92]         ; 00586b55
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586b5b
    PUSH EBX                            ; 00586b61
    CALL dword ptr [EAX + 0x144]        ; 00586b62
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00586b68
    ADD ESP,0x8                         ; 00586b6e
    TEST EDI,EDI                        ; 00586b71
    JZ 0x00586d4e                       ; 00586b73
        ;   XREF to: 00586d4e (CONDITIONAL_JUMP)  ; LAB_00586d4e
    LEA EDX,[EBX + 0x20]                ; 00586b79
    LEA ESI,[EBP + -0x72]               ; 00586b7c
    FLD float ptr [EDX]                 ; 00586b7f
    FLD float ptr [EDX + 0x4]           ; 00586b81
    FLD float ptr [EDX + 0x8]           ; 00586b84
    FXCH ST2                            ; 00586b87
    FSUB float ptr [EDI + 0x20]         ; 00586b89
    FXCH                                ; 00586b8c
    FSUB float ptr [EDI + 0x24]         ; 00586b8e
    FXCH ST2                            ; 00586b91
    FSUB float ptr [EDI + 0x28]         ; 00586b93
    FXCH                                ; 00586b96
    FSTP float ptr [EBP + -0x72]        ; 00586b98
    FXCH                                ; 00586b9b
    FSTP float ptr [EBP + -0x6e]        ; 00586b9d
    LEA EDI,[EBP + 0xffffff6a]          ; 00586ba0
    FSTP float ptr [EBP + -0x6a]        ; 00586ba6
    MOVSD ES:EDI,ESI                    ; 00586ba9
    MOVSD ES:EDI,ESI                    ; 00586baa
    MOVSD ES:EDI,ESI                    ; 00586bab
    FLD float ptr [EBP + 0xffffff6e]    ; 00586bac
    FMUL ST0                            ; 00586bb2
    FLD float ptr [EBP + 0xffffff6a]    ; 00586bb4
    FMUL ST0                            ; 00586bba
    FADDP                               ; 00586bbc
    FLD float ptr [EBP + 0xffffff72]    ; 00586bbe
    FMUL ST0                            ; 00586bc4
    FADDP                               ; 00586bc6
    FSQRT                               ; 00586bc8
    FSTP float ptr [EBP + 0x72]         ; 00586bca
    MOV EAX,dword ptr [EBP + 0x72]      ; 00586bcd
    FLD float ptr [EBP + 0x72]          ; 00586bd0
    MOV dword ptr [EBP + 0x62],EAX      ; 00586bd3
    FCOMP float ptr [0x005e65e8]        ; 00586bd6 | DAT_005e65e8
    FNSTSW AX                           ; 00586bdc
    SAHF                                ; 00586bde
    JBE 0x00586dc0                      ; 00586bdf
        ;   XREF to: 00586dc0 (CONDITIONAL_JUMP)  ; LAB_00586dc0
    CMP dword ptr [EBP + 0x6a],0x5      ; 00586be5
    JNZ 0x00586dc0                      ; 00586be9
        ;   XREF to: 00586dc0 (CONDITIONAL_JUMP)  ; LAB_00586dc0
    FLD float ptr [EBX + 0xcde0]        ; 00586bef
        ;   Label: LAB_00586bef
    LEA ESI,[EBX + 0x158]               ; 00586bf5
    FCOMP double ptr [0x005d82d7]       ; 00586bfb | DAT_005d82d7
    FNSTSW AX                           ; 00586c01
    SAHF                                ; 00586c03
    JBE 0x00586dda                      ; 00586c04
        ;   XREF to: 00586dda (CONDITIONAL_JUMP)  ; LAB_00586dda
    PUSH ESI                            ; 00586c0a
    CALL core_motion.cpp_FUN_004fc930   ; 00586c0b
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00586c10
    ADD ESP,0x4                         ; 00586c13
    FLD float ptr [EBP + 0x76]          ; 00586c16
    FCOMP double ptr [0x005d82df]       ; 00586c19 | DAT_005d82df
    FNSTSW AX                           ; 00586c1f
    SAHF                                ; 00586c21
    JBE 0x00586c3f                      ; 00586c22
        ;   XREF to: 00586c3f (CONDITIONAL_JUMP)  ; LAB_00586c3f
    PUSH 0x1                            ; 00586c24
    PUSH 0x2                            ; 00586c26
    PUSH 0x0                            ; 00586c28
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586c2a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586c2f
    ADD EAX,0x5                         ; 00586c32
    PUSH EAX                            ; 00586c35
        ;   Label: LAB_00586c35
    PUSH ESI                            ; 00586c36
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586c37
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586c3c
    FLD float ptr [EBP + 0x62]          ; 00586c3f
        ;   Label: LAB_00586c3f
    FCOMP float ptr [0x005d82e7]        ; 00586c42 | DAT_005d82e7
    FNSTSW AX                           ; 00586c48
    SAHF                                ; 00586c4a
    JBE 0x00586c97                      ; 00586c4b
        ;   XREF to: 00586c97 (CONDITIONAL_JUMP)  ; LAB_00586c97
    FLD float ptr [EBP + 0x62]          ; 00586c4d
    FCOMP float ptr [0x005d82eb]        ; 00586c50 | DAT_005d82eb
    FNSTSW AX                           ; 00586c56
    SAHF                                ; 00586c58
    JNC 0x00586c97                      ; 00586c59
        ;   XREF to: 00586c97 (CONDITIONAL_JUMP)  ; LAB_00586c97
    PUSH 0xa                            ; 00586c5b
    PUSH 0x0                            ; 00586c5d
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586c5f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586c64
    CMP EAX,0x5                         ; 00586c67
    JNZ 0x00586c97                      ; 00586c6a
        ;   XREF to: 00586c97 (CONDITIONAL_JUMP)  ; LAB_00586c97
    PUSH 0x1                            ; 00586c6c
    PUSH 0x1                            ; 00586c6e
    PUSH 0x0                            ; 00586c70
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586c72
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586c77
    ADD EAX,0x9                         ; 00586c7a
    PUSH EAX                            ; 00586c7d
    LEA EAX,[EBX + 0x158]               ; 00586c7e
    PUSH EAX                            ; 00586c84
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586c85
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586c8a
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00586c8d
    MOV EAX,[0x005e65dc]                ; 00586c97 | DAT_005e65dc
        ;   Label: LAB_00586c97
    PUSH 0x3f060a92                     ; 00586c9c
    MOV dword ptr [EBP + 0x6e],EAX      ; 00586ca1
    LEA EAX,[EBX + 0x249c]              ; 00586ca4
    PUSH 0x3fc00000                     ; 00586caa
    MOV dword ptr [EAX + 0x8],0x0       ; 00586caf
    XOR ESI,ESI                         ; 00586cb6
    MOV EDX,dword ptr [EAX + 0x8]       ; 00586cb8
    MOV dword ptr [EAX + 0x4],EDX       ; 00586cbb
    MOV EDX,dword ptr [EAX + 0x4]       ; 00586cbe
    MOV dword ptr [EAX],EDX             ; 00586cc1
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00586cc3
    MOV dword ptr [EBP + -0x6],ESI      ; 00586cc6
    MOV dword ptr [EBP + 0x2],EAX       ; 00586cc9
    LEA EAX,[EBP + -0x6]                ; 00586ccc
    MOV dword ptr [EBP + -0x2],ESI      ; 00586ccf
    PUSH EAX                            ; 00586cd2
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00586cd3
    PUSH EAX                            ; 00586cd9
    MOV EDX,dword ptr [EAX + 0x154]     ; 00586cda
    CALL dword ptr [EDX + 0xc4]         ; 00586ce0
    ADD ESP,0x4                         ; 00586ce6
    PUSH EAX                            ; 00586ce9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00586cea
    ADD EAX,0x20                        ; 00586cf0
    PUSH EAX                            ; 00586cf3
    PUSH EBX                            ; 00586cf4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00586cf5
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00586cfa
    LEA ESI,[EBX + 0x158]               ; 00586cfd
    TEST EAX,EAX                        ; 00586d03
    JL 0x00586e0e                       ; 00586d05
        ;   XREF to: 00586e0e (CONDITIONAL_JUMP)  ; LAB_00586e0e
    JLE 0x00586692                      ; 00586d0b
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    FLD float ptr [EBX + 0xcde0]        ; 00586d11
    FLDZ                                ; 00586d17
    FCOMPP                              ; 00586d19
    FNSTSW AX                           ; 00586d1b
    SAHF                                ; 00586d1d
    JC 0x00586692                       ; 00586d1e
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00586d24
    PUSH 0x3                            ; 00586d26
    PUSH 0x2                            ; 00586d28
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586d2a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586d2f
    ADD EAX,0x9                         ; 00586d32
    PUSH EAX                            ; 00586d35
    PUSH ESI                            ; 00586d36
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586d37
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586d3c
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00586d3f
    JMP 0x00586692                      ; 00586d49
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 00586d4e
        ;   Label: LAB_00586d4e
    PUSH EBX                            ; 00586d54
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00586d55
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00586d5a
    LEA ESI,[EBX + 0x158]               ; 00586d5d
    TEST EAX,EAX                        ; 00586d63
    JZ 0x00586da4                       ; 00586d65
        ;   XREF to: 00586da4 (CONDITIONAL_JUMP)  ; LAB_00586da4
    PUSH ESI                            ; 00586d67
    CALL core_motion.cpp_FUN_004fc930   ; 00586d68
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00586d6d
    ADD ESP,0x4                         ; 00586d70
    FLD float ptr [EBP + 0x76]          ; 00586d73
    FCOMP double ptr [0x005d82df]       ; 00586d76 | DAT_005d82df
    FNSTSW AX                           ; 00586d7c
    SAHF                                ; 00586d7e
    JBE 0x00586692                      ; 00586d7f
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00586d85
    PUSH 0x2                            ; 00586d87
    PUSH EDI                            ; 00586d89
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586d8a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586d8f
    ADD EAX,0x5                         ; 00586d92
    PUSH EAX                            ; 00586d95
    PUSH ESI                            ; 00586d96
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586d97
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586d9c
    JMP 0x00586692                      ; 00586d9f
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00586da4
        ;   Label: LAB_00586da4
    PUSH 0x3                            ; 00586da6
    PUSH EDI                            ; 00586da8
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586da9
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586dae
    PUSH EAX                            ; 00586db1
    PUSH ESI                            ; 00586db2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586db3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586db8
    JMP 0x00586692                      ; 00586dbb
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00586dc0
        ;   Label: LAB_00586dc0
    CMP EDX,0x6                         ; 00586dc3
    JZ 0x00586bef                       ; 00586dc6
        ;   XREF to: 00586bef (CONDITIONAL_JUMP)  ; LAB_00586bef
    CMP EDX,0x7                         ; 00586dcc
    JZ 0x00586bef                       ; 00586dcf
        ;   XREF to: 00586bef (CONDITIONAL_JUMP)  ; LAB_00586bef
    JMP 0x00586c3f                      ; 00586dd5
        ;   XREF to: 00586c3f (UNCONDITIONAL_JUMP)  ; LAB_00586c3f
    PUSH ESI                            ; 00586dda
        ;   Label: LAB_00586dda
    CALL core_motion.cpp_FUN_004fc930   ; 00586ddb
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00586de0
    ADD ESP,0x4                         ; 00586de3
    FLD float ptr [EBP + 0x76]          ; 00586de6
    FCOMP double ptr [0x005d82df]       ; 00586de9 | DAT_005d82df
    FNSTSW AX                           ; 00586def
    SAHF                                ; 00586df1
    JBE 0x00586c3f                      ; 00586df2
        ;   XREF to: 00586c3f (CONDITIONAL_JUMP)  ; LAB_00586c3f
    PUSH 0x1                            ; 00586df8
    PUSH 0x0                            ; 00586dfa
    PUSH 0x0                            ; 00586dfc
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586dfe
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586e03
    ADD EAX,0x8                         ; 00586e06
    JMP 0x00586c35                      ; 00586e09
        ;   XREF to: 00586c35 (UNCONDITIONAL_JUMP)  ; LAB_00586c35
    PUSH EBX                            ; 00586e0e
        ;   Label: LAB_00586e0e
    PUSH 0x5d82aa                       ; 00586e0f | = "%s gave up chase - I'm confused\n"
    MOV EAX,[0x005f1690]                ; 00586e14 | g_CConsolePtr
    PUSH EAX                            ; 00586e19 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00586e1a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00586e1f
    PUSH 0x1                            ; 00586e22
    PUSH 0x0                            ; 00586e24
    PUSH ESI                            ; 00586e26
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586e27
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586e2c
    JMP 0x00586692                      ; 00586e2f
        ;   XREF to: 00586692 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00586e34
        ;   Label: LAB_00586e34
    CMP ECX,0x15                        ; 00586e37
    JA 0x00586692                       ; 00586e3a
        ;   XREF to: 00586692 (CONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,ECX                         ; 00586e40
    JMP dword ptr [EAX*0x4 + 0x5864a8]  ; 00586e42 | caseD_3 | caseD_12 | caseD_8
        ;   Label: switchD

