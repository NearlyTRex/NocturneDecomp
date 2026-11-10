; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d56b0(CHotDemon *this_ptr,float delta_time)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004d5670 = 004d5a66
;   TerminatedCString s_s_confused_while_walking_005c5379
;   TerminatedCString s_hotdemon_attack_wav_005c53a3
;   TerminatedCString s_hotdemon_attack_wav_005c53b7
;   undefined4 DAT_005c53d1
;   undefined4 DAT_005e18fc
;   undefined4 DAT_005e1908
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d5baf4
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0
;   core_enemy.cpp_FUN_004893f0
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d56b0
        ;   Label: core_hotdemon.cpp_CHotDemon_process_FUN_004d56b0
    PUSH ESI                            ; 004d56b1
    PUSH EDI                            ; 004d56b2
    PUSH EBP                            ; 004d56b3
    MOV EBP,ESP                         ; 004d56b4
    SUB ESP,0x190                       ; 004d56b6
    SUB EBP,0x7a                        ; 004d56bc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004d56bf
    PUSH dword ptr [EBP + 0x92]         ; 004d56c5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d56cb
    PUSH EBX                            ; 004d56d1
    CALL dword ptr [EAX + 0x148]        ; 004d56d2
    ADD ESP,0x8                         ; 004d56d8
    TEST EAX,EAX                        ; 004d56db
    JZ 0x004d58f8                       ; 004d56dd
        ;   XREF to: 004d58f8 (CONDITIONAL_JUMP)  ; LAB_004d58f8
    LEA EAX,[EBX + 0x249c]              ; 004d56e3
    MOV dword ptr [EAX + 0x8],0x0       ; 004d56e9
    FLD float ptr [EBP + 0x92]          ; 004d56f0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d56f6
    MOV dword ptr [EAX + 0x4],EDX       ; 004d56f9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d56fc
    MOV dword ptr [EAX],EDX             ; 004d56ff
    FMUL float ptr [EBX + 0xcdcc]       ; 004d5701
    LEA ESI,[EBX + 0x158]               ; 004d5707
    FSTP float ptr [EBP + 0x56]         ; 004d570d
    FLD float ptr [EBP + 0x56]          ; 004d5710
        ;   Label: LAB_004d5710
    FLDZ                                ; 004d5713
    FCOMPP                              ; 004d5715
    FNSTSW AX                           ; 004d5717
    SAHF                                ; 004d5719
    JC 0x004d5900                       ; 004d571a
        ;   XREF to: 004d5900 (CONDITIONAL_JUMP)  ; LAB_004d5900
    FLD float ptr [EBP + 0x92]          ; 004d5720
    FMUL float ptr [EBX + 0xcdcc]       ; 004d5726
    SUB ESP,0x4                         ; 004d572c
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004d572f
    MOV dword ptr [EBX + 0x2524],EAX    ; 004d5735
    FSTP float ptr [ESP]                ; 004d573b
    PUSH EBX                            ; 004d573e
    CALL core_charactr.cpp_FUN_00434850 ; 004d573f
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 004d5744
    PUSH ESI                            ; 004d5747
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004d5748
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d574d
    PUSH dword ptr [EBP + 0x92]         ; 004d5750
    MOV EDI,dword ptr [EAX + 0x24]      ; 004d5756
    PUSH EBX                            ; 004d5759
    MOV dword ptr [EBP + 0x72],EDI      ; 004d575a
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 004d575d
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d5762
    TEST EAX,EAX                        ; 004d5765
    JZ 0x004d5ef5                       ; 004d5767
        ;   XREF to: 004d5ef5 (CONDITIONAL_JUMP)  ; LAB_004d5ef5
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004d576d
    CMP EAX,0x2                         ; 004d5773
    JNC 0x004d5940                      ; 004d5776
        ;   XREF to: 004d5940 (CONDITIONAL_JUMP)  ; LAB_004d5940
    CMP EAX,0x1                         ; 004d577c
    JNZ 0x004d594b                      ; 004d577f
        ;   XREF to: 004d594b (CONDITIONAL_JUMP)  ; LAB_004d594b
    PUSH 0x1                            ; 004d5785
        ;   Label: LAB_004d5785
    PUSH 0x1                            ; 004d5787
    LEA EAX,[EBX + 0x158]               ; 004d5789
        ;   Label: LAB_004d5789
    PUSH EAX                            ; 004d578f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5790
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5795
        ;   Label: LAB_004d5795
    LEA EAX,[EBX + 0x249c]              ; 004d5798
    MOV dword ptr [EAX + 0x8],0x0       ; 004d579e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d57a5
    MOV dword ptr [EAX + 0x4],EDX       ; 004d57a8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d57ab
    MOV dword ptr [EAX],EDX             ; 004d57ae
    FLD float ptr [EBX + 0xcde0]        ; 004d57b0
        ;   Label: caseD_3
    FLDZ                                ; 004d57b6
    FCOMPP                              ; 004d57b8
    FNSTSW AX                           ; 004d57ba
    SAHF                                ; 004d57bc
    JNC 0x004d57d1                      ; 004d57bd
        ;   XREF to: 004d57d1 (CONDITIONAL_JUMP)  ; LAB_004d57d1
    FLD float ptr [EBX + 0xcde0]        ; 004d57bf
    FSUB float ptr [EBP + 0x92]         ; 004d57c5
    FSTP float ptr [EBX + 0xcde0]       ; 004d57cb
    PUSH EBX                            ; 004d57d1
        ;   Label: LAB_004d57d1
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 004d57d2
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d57d7
    TEST EAX,EAX                        ; 004d57da
    JZ 0x004d58d1                       ; 004d57dc
        ;   XREF to: 004d58d1 (CONDITIONAL_JUMP)  ; LAB_004d58d1
    PUSH dword ptr [EBP + 0x92]         ; 004d57e2
    PUSH EBX                            ; 004d57e8
    LEA ESI,[EBX + 0x2518]              ; 004d57e9
    CALL core_charactr.cpp_FUN_0042c1e0 ; 004d57ef
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 004d57f4
    FMUL float ptr [EBP + 0x92]         ; 004d57f6
    FLD float ptr [ESI + 0x4]           ; 004d57fc
    FMUL float ptr [EBP + 0x92]         ; 004d57ff
    FLD float ptr [ESI + 0x8]           ; 004d5805
    FMUL float ptr [EBP + 0x92]         ; 004d5808
    LEA EDI,[EBP + 0x22]                ; 004d580e
    LEA ESI,[EBP + 0xffffff4a]          ; 004d5811
    FXCH ST2                            ; 004d5817
    FSTP float ptr [EBP + 0xffffff4a]   ; 004d5819
    FSTP float ptr [EBP + 0xffffff4e]   ; 004d581f
    FSTP float ptr [EBP + 0xffffff52]   ; 004d5825
    MOVSD ES:EDI,ESI                    ; 004d582b
    MOVSD ES:EDI,ESI                    ; 004d582c
    MOVSD ES:EDI,ESI                    ; 004d582d
    LEA EDX,[EBX + 0x250c]              ; 004d582e
    FLD float ptr [EBP + 0x22]          ; 004d5834
    FLD float ptr [EBP + 0x26]          ; 004d5837
    FLD float ptr [EBP + 0x2a]          ; 004d583a
    LEA EDI,[EBP + 0x2e]                ; 004d583d
    LEA ESI,[EBP + 0xffffff7a]          ; 004d5840
    FXCH ST2                            ; 004d5846
    FADD float ptr [EDX]                ; 004d5848
    FXCH                                ; 004d584a
    FADD float ptr [EDX + 0x4]          ; 004d584c
    FXCH ST2                            ; 004d584f
    FADD float ptr [EDX + 0x8]          ; 004d5851
    FXCH                                ; 004d5854
    FSTP float ptr [EBP + 0xffffff7a]   ; 004d5856
    FXCH                                ; 004d585c
    FSTP float ptr [EBP + 0xffffff7e]   ; 004d585e
    FSTP float ptr [EBP + -0x7e]        ; 004d5864
    MOVSD ES:EDI,ESI                    ; 004d5867
    MOVSD ES:EDI,ESI                    ; 004d5868
    MOVSD ES:EDI,ESI                    ; 004d5869
    LEA EAX,[EBX + 0x249c]              ; 004d586a
    FLD float ptr [EBP + 0x2e]          ; 004d5870
    FLD float ptr [EBP + 0x32]          ; 004d5873
    FLD float ptr [EBP + 0x36]          ; 004d5876
    LEA EDI,[EBP + -0x3e]               ; 004d5879
    LEA ESI,[EBP + -0x56]               ; 004d587c
    FXCH ST2                            ; 004d587f
    FADD float ptr [EAX]                ; 004d5881
    FXCH                                ; 004d5883
    FADD float ptr [EAX + 0x4]          ; 004d5885
    FXCH ST2                            ; 004d5888
    FADD float ptr [EAX + 0x8]          ; 004d588a
    FXCH                                ; 004d588d
    FSTP float ptr [EBP + -0x56]        ; 004d588f
    FXCH                                ; 004d5892
    FSTP float ptr [EBP + -0x52]        ; 004d5894
    FSTP float ptr [EBP + -0x4e]        ; 004d5897
    MOVSD ES:EDI,ESI                    ; 004d589a
    MOVSD ES:EDI,ESI                    ; 004d589b
    MOVSD ES:EDI,ESI                    ; 004d589c
    MOV dword ptr [EDX + 0x8],0x0       ; 004d589d
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d58a4
    MOV dword ptr [EDX + 0x4],ECX       ; 004d58a7
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d58aa
    MOV dword ptr [EDX],ECX             ; 004d58ad
    MOV dword ptr [EAX + 0x8],0x0       ; 004d58af
    ADD ESP,0x8                         ; 004d58b6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d58b9
    MOV dword ptr [EAX + 0x4],EDX       ; 004d58bc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d58bf
    MOV dword ptr [EAX],EDX             ; 004d58c2
    LEA EAX,[EBP + -0x3e]               ; 004d58c4
    PUSH EAX                            ; 004d58c7
    PUSH EBX                            ; 004d58c8
    CALL core_charactr.cpp_FUN_0042c230 ; 004d58c9
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004d58ce
    PUSH EBX                            ; 004d58d1
        ;   Label: LAB_004d58d1
    CALL core_charactr.cpp_FUN_0042cd30 ; 004d58d2
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d58d7
    LEA EAX,[EBX + 0x158]               ; 004d58da
    PUSH EAX                            ; 004d58e0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004d58e1
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d58e6
    PUSH dword ptr [EBP + 0x92]         ; 004d58e9
    PUSH EBX                            ; 004d58ef
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 004d58f0
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d58f5
    LEA ESP,[EBP + 0x7a]                ; 004d58f8
        ;   Label: LAB_004d58f8
    POP EBP                             ; 004d58fb
    POP EDI                             ; 004d58fc
    POP ESI                             ; 004d58fd
    POP EBX                             ; 004d58fe
    RET                                 ; 004d58ff
    LEA EAX,[EBP + 0x56]                ; 004d5900
        ;   Label: LAB_004d5900
    PUSH EAX                            ; 004d5903
    PUSH ESI                            ; 004d5904
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 004d5905
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d590a
    PUSH EAX                            ; 004d590d
    PUSH EBX                            ; 004d590e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 004d590f
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d5914
    JMP 0x004d5710                      ; 004d5917
        ;   XREF to: 004d5710 (UNCONDITIONAL_JUMP)  ; LAB_004d5710
    PUSH 0x1                            ; 004d591c
        ;   Label: LAB_004d591c
    PUSH 0x0                            ; 004d591e
    PUSH ESI                            ; 004d5920
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5921
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5926
    PUSH EBX                            ; 004d5929
    PUSH 0x5c5379                       ; 004d592a | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005f1690]      ; 004d592f | g_CConsolePtr
    PUSH EDI                            ; 004d5935 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004d5936
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x004d5795                      ; 004d593b
        ;   XREF to: 004d5795 (UNCONDITIONAL_JUMP)  ; LAB_004d5795
    JBE 0x004d5785                      ; 004d5940
        ;   XREF to: 004d5785 (CONDITIONAL_JUMP)  ; LAB_004d5785
        ;   Label: LAB_004d5940
    CMP EAX,0x3                         ; 004d5946
    JZ 0x004d591c                       ; 004d5949
        ;   XREF to: 004d591c (CONDITIONAL_JUMP)  ; LAB_004d591c
    PUSH 0x1                            ; 004d594b
        ;   Label: LAB_004d594b
    PUSH 0x0                            ; 004d594d
    JMP 0x004d5789                      ; 004d594f
        ;   XREF to: 004d5789 (UNCONDITIONAL_JUMP)  ; LAB_004d5789
    MOV EDX,dword ptr [EBX + 0xcdd0]    ; 004d5954
        ;   Label: caseD_5
    TEST EDX,EDX                        ; 004d595a
    JNZ 0x004d57b0                      ; 004d595c
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d5962
    JNZ 0x004d57b0                      ; 004d5969
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH EDX                            ; 004d596f
    LEA EAX,[EBX + 0x158]               ; 004d5970
    PUSH EAX                            ; 004d5976
    LEA ESI,[EBP + -0xe]                ; 004d5977
    LEA EDI,[EBP + 0xffffff32]          ; 004d597a
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 004d5980
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 004d5985
    LEA EAX,[EBP + 0xffffff32]          ; 004d5988
    LEA ESI,[EBP + -0xe]                ; 004d598e
    PUSH EAX                            ; 004d5991
    MOVSD ES:EDI,ESI                    ; 004d5992
    MOVSD ES:EDI,ESI                    ; 004d5993
    MOVSD ES:EDI,ESI                    ; 004d5994
    PUSH EBX                            ; 004d5995
    LEA ESI,[EBP + -0x2]                ; 004d5996
    LEA EDI,[EBP + -0x32]               ; 004d5999
    CALL core_actor.cpp_FUN_00408b80    ; 004d599c
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d59a1
    LEA ESI,[EBP + -0x2]                ; 004d59a4
    LEA EAX,[EBP + -0x32]               ; 004d59a7
    PUSH 0x0                            ; 004d59aa
    MOVSD ES:EDI,ESI                    ; 004d59ac
    MOVSD ES:EDI,ESI                    ; 004d59ad
    MOVSD ES:EDI,ESI                    ; 004d59ae
    PUSH EAX                            ; 004d59af
    MOV ESI,dword ptr [0x005fed24]      ; 004d59b0 | g_CGorePtr
    PUSH ESI                            ; 004d59b6
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 004d59b7
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004d59bc
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 004d59bf
    JMP 0x004d57b0                      ; 004d59c9
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xfffffeea]          ; 004d59ce
        ;   Label: caseD_2
    PUSH EAX                            ; 004d59d4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004d59d5
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 004d59da
    ADD ESP,0x4                         ; 004d59e0
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 004d59e3
    LEA EAX,[EBP + 0xfffffeea]          ; 004d59e9
    MOV EDX,dword ptr [0x01d5baf4]      ; 004d59ef | DAT_01d5baf4
    PUSH EAX                            ; 004d59f5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d59f6
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 004d59fd
    SUB EAX,EDX                         ; 004d5a03
    MOV dword ptr [EBP + 0xffffff22],EBX ; 004d5a05
    SHL EAX,0x4                         ; 004d5a0b
    LEA EDX,[EBX + 0xfd8]               ; 004d5a0e
    ADD EAX,EDX                         ; 004d5a14
    PUSH 0x3ecccccd                     ; 004d5a16
    PUSH EAX                            ; 004d5a1b
    PUSH 0x2cfd900                      ; 004d5a1c | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff26]          ; 004d5a21
    LEA EDI,[EBP + -0x6e]               ; 004d5a27
    CALL core_xform.cpp_FUN_00583260    ; 004d5a2a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004d5a2f
    LEA EAX,[EBP + -0x6e]               ; 004d5a32
    LEA ESI,[EBP + 0xffffff26]          ; 004d5a35
    PUSH EAX                            ; 004d5a3b
    MOVSD ES:EDI,ESI                    ; 004d5a3c
    MOVSD ES:EDI,ESI                    ; 004d5a3d
    MOVSD ES:EDI,ESI                    ; 004d5a3e
    PUSH EBX                            ; 004d5a3f
    LEA ESI,[EBP + -0x26]               ; 004d5a40
    CALL core_actor.cpp_FUN_00408b80    ; 004d5a43
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d5a48
    LEA EAX,[EBP + -0x62]               ; 004d5a4b
    PUSH EAX                            ; 004d5a4e
    LEA EDI,[EBP + -0x62]               ; 004d5a4f
    LEA ESI,[EBP + -0x26]               ; 004d5a52
    PUSH EBX                            ; 004d5a55
    MOVSD ES:EDI,ESI                    ; 004d5a56
    MOVSD ES:EDI,ESI                    ; 004d5a57
    MOVSD ES:EDI,ESI                    ; 004d5a58
    CALL core_enemy.cpp_FUN_004893f0    ; 004d5a59
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 004d5a5e
    JMP 0x004d57b0                      ; 004d5a61
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004d5a66
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5a6c
    PUSH EBX                            ; 004d5a72
    CALL dword ptr [EAX + 0x144]        ; 004d5a73
    ADD ESP,0x8                         ; 004d5a79
    LEA EAX,[EBX + 0x158]               ; 004d5a7c
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004d5a82
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d5a88
    TEST ESI,ESI                        ; 004d5a8b
    JZ 0x004d5bf9                       ; 004d5a8d
        ;   XREF to: 004d5bf9 (CONDITIONAL_JUMP)  ; LAB_004d5bf9
    MOV EDX,ESI                         ; 004d5a93
    LEA EDI,[EBP + 0xffffff62]          ; 004d5a95
    LEA EAX,[EBX + 0x20]                ; 004d5a9b
    FLD float ptr [EDX + 0x20]          ; 004d5a9e
    FLD float ptr [EDX + 0x24]          ; 004d5aa1
    FLD float ptr [EDX + 0x28]          ; 004d5aa4
    LEA ESI,[EBP + 0x16]                ; 004d5aa7
    FXCH ST2                            ; 004d5aaa
    FSUB float ptr [EAX]                ; 004d5aac
    FXCH                                ; 004d5aae
    FSUB float ptr [EAX + 0x4]          ; 004d5ab0
    FXCH ST2                            ; 004d5ab3
    FSUB float ptr [EAX + 0x8]          ; 004d5ab5
    FXCH                                ; 004d5ab8
    FSTP float ptr [EBP + 0x16]         ; 004d5aba
    FXCH                                ; 004d5abd
    FSTP float ptr [EBP + 0x1a]         ; 004d5abf
    FSTP float ptr [EBP + 0x1e]         ; 004d5ac2
    MOVSD ES:EDI,ESI                    ; 004d5ac5
    MOVSD ES:EDI,ESI                    ; 004d5ac6
    MOVSD ES:EDI,ESI                    ; 004d5ac7
    FLD float ptr [EBP + 0xffffff66]    ; 004d5ac8
    FMUL ST0                            ; 004d5ace
    FLD float ptr [EBP + 0xffffff62]    ; 004d5ad0
    FMUL ST0                            ; 004d5ad6
    FADDP                               ; 004d5ad8
    FLD float ptr [EBP + 0xffffff6a]    ; 004d5ada
    FMUL ST0                            ; 004d5ae0
    FADDP                               ; 004d5ae2
    FSQRT                               ; 004d5ae4
    FSTP float ptr [EBP + 0x52]         ; 004d5ae6
    MOV EAX,dword ptr [EBP + 0x52]      ; 004d5ae9
    FLD float ptr [EBP + 0x52]          ; 004d5aec
    MOV dword ptr [EBP + 0x62],EAX      ; 004d5aef
    FCOMP float ptr [0x005e18fc]        ; 004d5af2 | DAT_005e18fc
    FNSTSW AX                           ; 004d5af8
    SAHF                                ; 004d5afa
    JC 0x004d5b43                       ; 004d5afb
        ;   XREF to: 004d5b43 (CONDITIONAL_JUMP)  ; LAB_004d5b43
    FLD float ptr [EBP + 0x62]          ; 004d5afd
        ;   Label: LAB_004d5afd
    FCOMP float ptr [EBX + 0xcddc]      ; 004d5b00
    FNSTSW AX                           ; 004d5b06
    SAHF                                ; 004d5b08
    JNC 0x004d57b0                      ; 004d5b09
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    FLD float ptr [EBP + 0x62]          ; 004d5b0f
    LEA EDX,[EBX + 0x158]               ; 004d5b12
    FCOMP float ptr [0x005e1908]        ; 004d5b18 | DAT_005e1908
    FNSTSW AX                           ; 004d5b1e
    SAHF                                ; 004d5b20
    JNC 0x004d5bdd                      ; 004d5b21
        ;   XREF to: 004d5bdd (CONDITIONAL_JUMP)  ; LAB_004d5bdd
    PUSH 0x1                            ; 004d5b27
    PUSH 0x1                            ; 004d5b29
    PUSH EDX                            ; 004d5b2b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5b2c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5b31
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004d5b34
    JMP 0x004d57b0                      ; 004d5b3e
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xffffff62]          ; 004d5b43
        ;   Label: LAB_004d5b43
    PUSH EAX                            ; 004d5b49
    LEA ESI,[EBP + 0xa]                 ; 004d5b4a
    LEA EDI,[EBP + 0x46]                ; 004d5b4d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d5b50
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xa]                 ; 004d5b55
    MOVSD ES:EDI,ESI                    ; 004d5b58
    MOVSD ES:EDI,ESI                    ; 004d5b59
    MOVSD ES:EDI,ESI                    ; 004d5b5a
    ADD ESP,0x4                         ; 004d5b5b
    FLD float ptr [EBP + 0x4a]          ; 004d5b5e
    FSUB float ptr [EBX + 0x34]         ; 004d5b61
    SUB ESP,0x4                         ; 004d5b64
    FSTP float ptr [ESP]                ; 004d5b67
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d5b6a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d5b6f
    FLD float ptr [EBP + 0x76]          ; 004d5b72
    FABS                                ; 004d5b75
    ADD ESP,0x4                         ; 004d5b77
    FCOMP double ptr [0x005c53d1]       ; 004d5b7a | DAT_005c53d1
    FNSTSW AX                           ; 004d5b80
    SAHF                                ; 004d5b82
    JNC 0x004d5afd                      ; 004d5b83
        ;   XREF to: 004d5afd (CONDITIONAL_JUMP)  ; LAB_004d5afd
    CMP dword ptr [EBP + 0x72],0x0      ; 004d5b89
    JZ 0x004d5bd3                       ; 004d5b8d
        ;   XREF to: 004d5bd3 (CONDITIONAL_JUMP)  ; LAB_004d5bd3
    PUSH 0x1                            ; 004d5b8f
    PUSH 0x8                            ; 004d5b91
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004d5b93
    PUSH EDX                            ; 004d5b96
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5b97
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d5b97
    ADD ESP,0xc                         ; 004d5b9c
    MOV ESI,dword ptr [EBX + 0xd054]    ; 004d5b9f
    PUSH ESI                            ; 004d5ba5
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d5ba6
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d5bab
    TEST EAX,EAX                        ; 004d5bae
    JNZ 0x004d5afd                      ; 004d5bb0
        ;   XREF to: 004d5afd (CONDITIONAL_JUMP)  ; LAB_004d5afd
    PUSH 0x5c53a3                       ; 004d5bb6 | = "hotdemon-attack.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5bbb
    PUSH EBX                            ; 004d5bc1
    CALL dword ptr [EAX + 0x2c]         ; 004d5bc2
    ADD ESP,0x8                         ; 004d5bc5
    MOV dword ptr [EBX + 0xd054],EAX    ; 004d5bc8
    JMP 0x004d5afd                      ; 004d5bce
        ;   XREF to: 004d5afd (UNCONDITIONAL_JUMP)  ; LAB_004d5afd
    PUSH 0x1                            ; 004d5bd3
        ;   Label: LAB_004d5bd3
    PUSH 0x2                            ; 004d5bd5
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004d5bd7
    PUSH ECX                            ; 004d5bda
    JMP 0x004d5b97                      ; 004d5bdb
        ;   XREF to: 004d5b97 (UNCONDITIONAL_JUMP)  ; LAB_004d5b97
    PUSH 0x1                            ; 004d5bdd
        ;   Label: LAB_004d5bdd
    PUSH 0x7                            ; 004d5bdf
    PUSH EDX                            ; 004d5be1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5be2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5be7
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004d5bea
    JMP 0x004d57b0                      ; 004d5bf4
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004d5bf9
        ;   Label: LAB_004d5bf9
    PUSH EBX                            ; 004d5bff
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004d5c00
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d5c05
    TEST EAX,EAX                        ; 004d5c08
    JZ 0x004d57b0                       ; 004d5c0a
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d5c10
    PUSH 0x1                            ; 004d5c12
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004d5c14
    PUSH EDI                            ; 004d5c17
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5c18
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5c1d
    JMP 0x004d57b0                      ; 004d5c20
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004d5c25
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5c2b
    PUSH EBX                            ; 004d5c31
    CALL dword ptr [EAX + 0x144]        ; 004d5c32
    ADD ESP,0x8                         ; 004d5c38
    LEA EAX,[EBX + 0x158]               ; 004d5c3b
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 004d5c41
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d5c47
    TEST EDI,EDI                        ; 004d5c4a
    JNZ 0x004d5ca6                      ; 004d5c4c
        ;   XREF to: 004d5ca6 (CONDITIONAL_JUMP)  ; LAB_004d5ca6
    PUSH dword ptr [EBP + 0x92]         ; 004d5c4e
    PUSH EBX                            ; 004d5c54
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004d5c55
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d5c5a
    TEST EAX,EAX                        ; 004d5c5d
    JNZ 0x004d5c7c                      ; 004d5c5f
        ;   XREF to: 004d5c7c (CONDITIONAL_JUMP)  ; LAB_004d5c7c
    MOV EDI,dword ptr [EBP + 0x72]      ; 004d5c61
    CMP EDI,0x1                         ; 004d5c64
    JNZ 0x004d5c91                      ; 004d5c67
        ;   XREF to: 004d5c91 (CONDITIONAL_JUMP)  ; LAB_004d5c91
    PUSH EDI                            ; 004d5c69
    PUSH EAX                            ; 004d5c6a
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004d5c6b
    PUSH EDX                            ; 004d5c6e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5c6f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5c74
    JMP 0x004d57b0                      ; 004d5c77
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d5c7c
        ;   Label: LAB_004d5c7c
    PUSH 0x1                            ; 004d5c7e
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004d5c80
    PUSH ECX                            ; 004d5c83
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5c84
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5c89
    JMP 0x004d57b0                      ; 004d5c8c
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d5c91
        ;   Label: LAB_004d5c91
    PUSH 0x6                            ; 004d5c93
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004d5c95
    PUSH EAX                            ; 004d5c98
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5c99
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5c9e
    JMP 0x004d57b0                      ; 004d5ca1
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x005e18fc]                ; 004d5ca6 | DAT_005e18fc
        ;   Label: LAB_004d5ca6
    MOV dword ptr [EBP + 0x5e],EAX      ; 004d5cab
    LEA EAX,[EBX + 0x249c]              ; 004d5cae
    MOV dword ptr [EAX + 0x8],0x0       ; 004d5cb4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d5cbb
    MOV dword ptr [EAX + 0x4],EDX       ; 004d5cbe
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d5cc1
    MOV dword ptr [EAX],EDX             ; 004d5cc4
    XOR EAX,EAX                         ; 004d5cc6
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 004d5cc8
    MOV dword ptr [EBP + 0xffffff42],EAX ; 004d5cce
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004d5cd4
    PUSH 0x3e32b8c2                     ; 004d5cd7
    MOV dword ptr [EBP + 0xffffff46],EAX ; 004d5cdc
    LEA EAX,[EBP + 0xffffff3e]          ; 004d5ce2
    PUSH 0x3f000000                     ; 004d5ce8
    PUSH EAX                            ; 004d5ced
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d5cee
    PUSH EAX                            ; 004d5cf4
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d5cf5
    CALL dword ptr [EDX + 0xc4]         ; 004d5cfb
    ADD ESP,0x4                         ; 004d5d01
    PUSH EAX                            ; 004d5d04
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004d5d05
    ADD EAX,0x20                        ; 004d5d0b
    PUSH EAX                            ; 004d5d0e
    PUSH EBX                            ; 004d5d0f
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004d5d10
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004d5d15
    TEST EAX,EAX                        ; 004d5d18
    JL 0x004d57b0                       ; 004d5d1a
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    LEA EDI,[EBP + 0xffffff56]          ; 004d5d20
    LEA EAX,[EBX + 0x20]                ; 004d5d26
    LEA ESI,[EBP + -0x7a]               ; 004d5d29
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004d5d2c
    FLD float ptr [EAX]                 ; 004d5d32
    FLD float ptr [EAX + 0x4]           ; 004d5d34
    FLD float ptr [EAX + 0x8]           ; 004d5d37
    FXCH ST2                            ; 004d5d3a
    FSUB float ptr [EDX + 0x20]         ; 004d5d3c
    FXCH                                ; 004d5d3f
    FSUB float ptr [EDX + 0x24]         ; 004d5d41
    FXCH ST2                            ; 004d5d44
    FSUB float ptr [EDX + 0x28]         ; 004d5d46
    FXCH                                ; 004d5d49
    FSTP float ptr [EBP + -0x7a]        ; 004d5d4b
    FXCH                                ; 004d5d4e
    FSTP float ptr [EBP + -0x76]        ; 004d5d50
    FSTP float ptr [EBP + -0x72]        ; 004d5d53
    MOVSD ES:EDI,ESI                    ; 004d5d56
    MOVSD ES:EDI,ESI                    ; 004d5d57
    MOVSD ES:EDI,ESI                    ; 004d5d58
    FLD float ptr [EBP + 0xffffff56]    ; 004d5d59
    FMUL ST0                            ; 004d5d5f
    FLD float ptr [EBP + 0xffffff5e]    ; 004d5d61
    FMUL ST0                            ; 004d5d67
    FADDP                               ; 004d5d69
    FSQRT                               ; 004d5d6b
    XOR ECX,ECX                         ; 004d5d6d
    MOV dword ptr [EBP + 0xffffff5a],ECX ; 004d5d6f
    FSTP float ptr [EBP + 0x66]         ; 004d5d75
    MOV EAX,dword ptr [EBP + 0x66]      ; 004d5d78
    FLD float ptr [EBP + 0x66]          ; 004d5d7b
    MOV dword ptr [EBP + 0x5a],EAX      ; 004d5d7e
    FCOMP float ptr [0x005e1908]        ; 004d5d81 | DAT_005e1908
    FNSTSW AX                           ; 004d5d87
    SAHF                                ; 004d5d89
    JBE 0x004d5da8                      ; 004d5d8a
        ;   XREF to: 004d5da8 (CONDITIONAL_JUMP)  ; LAB_004d5da8
    CMP dword ptr [EBP + 0x72],0x7      ; 004d5d8c
    JZ 0x004d5da8                       ; 004d5d90
        ;   XREF to: 004d5da8 (CONDITIONAL_JUMP)  ; LAB_004d5da8
    PUSH 0x1                            ; 004d5d92
    PUSH 0x7                            ; 004d5d94
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004d5d96
    PUSH EDI                            ; 004d5d99
    MOV dword ptr [EBX + 0xcde0],ECX    ; 004d5d9a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5da0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5da5
    FLD float ptr [EBP + 0x5a]          ; 004d5da8
        ;   Label: LAB_004d5da8
    FCOMP float ptr [EBP + 0x5e]        ; 004d5dab
    FNSTSW AX                           ; 004d5dae
    SAHF                                ; 004d5db0
    JA 0x004d5e7d                       ; 004d5db1
        ;   XREF to: 004d5e7d (CONDITIONAL_JUMP)  ; LAB_004d5e7d
    FLD float ptr [EBX + 0xcde0]        ; 004d5db7
    FLDZ                                ; 004d5dbd
    FCOMPP                              ; 004d5dbf
    FNSTSW AX                           ; 004d5dc1
    SAHF                                ; 004d5dc3
    JC 0x004d5e7d                       ; 004d5dc4
        ;   XREF to: 004d5e7d (CONDITIONAL_JUMP)  ; LAB_004d5e7d
    LEA EDI,[EBP + -0x1a]               ; 004d5dca
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004d5dcd
    LEA ESI,[EBP + -0x4a]               ; 004d5dd3
    LEA EAX,[EBX + 0x20]                ; 004d5dd6
    FLD float ptr [EDX + 0x20]          ; 004d5dd9
    FLD float ptr [EDX + 0x24]          ; 004d5ddc
    FLD float ptr [EDX + 0x28]          ; 004d5ddf
    FXCH ST2                            ; 004d5de2
    FSUB float ptr [EAX]                ; 004d5de4
    FXCH                                ; 004d5de6
    FSUB float ptr [EAX + 0x4]          ; 004d5de8
    FXCH ST2                            ; 004d5deb
    FSUB float ptr [EAX + 0x8]          ; 004d5ded
    FXCH                                ; 004d5df0
    FSTP float ptr [EBP + -0x4a]        ; 004d5df2
    FXCH                                ; 004d5df5
    FSTP float ptr [EBP + -0x46]        ; 004d5df7
    FSTP float ptr [EBP + -0x42]        ; 004d5dfa
    LEA EAX,[EBP + -0x1a]               ; 004d5dfd
    MOVSD ES:EDI,ESI                    ; 004d5e00
    MOVSD ES:EDI,ESI                    ; 004d5e01
    MOVSD ES:EDI,ESI                    ; 004d5e02
    PUSH EAX                            ; 004d5e03
    LEA ESI,[EBP + 0x3a]                ; 004d5e04
    LEA EDI,[EBP + 0xffffff6e]          ; 004d5e07
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d5e0d
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0x3a]                ; 004d5e12
    MOVSD ES:EDI,ESI                    ; 004d5e15
    MOVSD ES:EDI,ESI                    ; 004d5e16
    MOVSD ES:EDI,ESI                    ; 004d5e17
    ADD ESP,0x4                         ; 004d5e18
    FLD float ptr [EBP + 0xffffff72]    ; 004d5e1b
    FSUB float ptr [EBX + 0x34]         ; 004d5e21
    SUB ESP,0x4                         ; 004d5e24
    FSTP float ptr [ESP]                ; 004d5e27
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d5e2a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d5e2f
    FLD float ptr [EBP + 0x76]          ; 004d5e32
    FABS                                ; 004d5e35
    ADD ESP,0x4                         ; 004d5e37
    FCOMP double ptr [0x005c53d1]       ; 004d5e3a | DAT_005c53d1
    FNSTSW AX                           ; 004d5e40
    SAHF                                ; 004d5e42
    JNC 0x004d5e7d                      ; 004d5e43
        ;   XREF to: 004d5e7d (CONDITIONAL_JUMP)  ; LAB_004d5e7d
    MOV EDX,dword ptr [EBP + 0x72]      ; 004d5e45
    LEA EAX,[EBX + 0x158]               ; 004d5e48
    CMP EDX,0x7                         ; 004d5e4e
    JZ 0x004d5eb9                       ; 004d5e51
        ;   XREF to: 004d5eb9 (CONDITIONAL_JUMP)  ; LAB_004d5eb9
    PUSH 0x1                            ; 004d5e53
    PUSH 0x2                            ; 004d5e55
    PUSH EAX                            ; 004d5e57
        ;   Label: LAB_004d5e57
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5e58
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5e5d
    MOV ECX,dword ptr [EBX + 0xd054]    ; 004d5e60
    PUSH ECX                            ; 004d5e66
    CALL sound_sndmain.cpp_FUN_00556700 ; 004d5e67
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d5e6c
    TEST EAX,EAX                        ; 004d5e6f
    JZ 0x004d5ebf                       ; 004d5e71
        ;   XREF to: 004d5ebf (CONDITIONAL_JUMP)  ; LAB_004d5ebf
    MOV dword ptr [EBX + 0xcde0],0x40000000 ; 004d5e73
        ;   Label: LAB_004d5e73
    FLD float ptr [EBP + 0x5a]          ; 004d5e7d
        ;   Label: LAB_004d5e7d
    FCOMP float ptr [EBX + 0xcddc]      ; 004d5e80
    FNSTSW AX                           ; 004d5e86
    SAHF                                ; 004d5e88
    JBE 0x004d57b0                      ; 004d5e89
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ESI,dword ptr [EBP + 0x72]      ; 004d5e8f
    LEA EAX,[EBX + 0x158]               ; 004d5e92
    CMP ESI,0x7                         ; 004d5e98
    JZ 0x004d5ed9                       ; 004d5e9b
        ;   XREF to: 004d5ed9 (CONDITIONAL_JUMP)  ; LAB_004d5ed9
    PUSH 0x1                            ; 004d5e9d
    PUSH 0x0                            ; 004d5e9f
    PUSH EAX                            ; 004d5ea1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5ea2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5ea7
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004d5eaa
    JMP 0x004d57b0                      ; 004d5eb4
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004d5eb9
        ;   Label: LAB_004d5eb9
    PUSH 0x8                            ; 004d5ebb
    JMP 0x004d5e57                      ; 004d5ebd
        ;   XREF to: 004d5e57 (UNCONDITIONAL_JUMP)  ; LAB_004d5e57
    PUSH 0x5c53b7                       ; 004d5ebf | = "hotdemon-attack.wav"
        ;   Label: LAB_004d5ebf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5ec4
    PUSH EBX                            ; 004d5eca
    CALL dword ptr [EAX + 0x2c]         ; 004d5ecb
    ADD ESP,0x8                         ; 004d5ece
    MOV dword ptr [EBX + 0xd054],EAX    ; 004d5ed1
    JMP 0x004d5e73                      ; 004d5ed7
        ;   XREF to: 004d5e73 (UNCONDITIONAL_JUMP)  ; LAB_004d5e73
    PUSH 0x1                            ; 004d5ed9
        ;   Label: LAB_004d5ed9
    PUSH 0x6                            ; 004d5edb
    PUSH EAX                            ; 004d5edd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d5ede
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5ee3
    MOV dword ptr [EBX + 0xcde0],0x0    ; 004d5ee6
    JMP 0x004d57b0                      ; 004d5ef0
        ;   XREF to: 004d57b0 (UNCONDITIONAL_JUMP)  ; caseD_e
    CMP EDI,0xf                         ; 004d5ef5
        ;   Label: LAB_004d5ef5
    JA 0x004d57b0                       ; 004d5ef8
        ;   XREF to: 004d57b0 (CONDITIONAL_JUMP)  ; caseD_e
    JMP dword ptr [EDI*0x4 + 0x4d5670]  ; 004d5efe | caseD_6 | caseD_f | caseD_8
        ;   Label: switchD

