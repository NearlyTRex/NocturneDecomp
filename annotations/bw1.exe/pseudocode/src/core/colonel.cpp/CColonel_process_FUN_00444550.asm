; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_process_FUN_00444550(CColonel *this_ptr,float delta_time)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00444534 = 004448cc
;   TerminatedCString s_s_confused_while_walking_005d6c76
;   undefined4 DAT_005d6ca3
;   undefined4 DAT_005d6ca7
;   undefined4 DAT_005d6cab
;   undefined4 DAT_005d6caf
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_007db570
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_colonel.cpp_CColonel_processMotionEvents_FUN_00445140
;   core_colonel.cpp_FUN_00444b50
;   core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0
;   core_hero.cpp_CHero_tryInteract_FUN_004eb090
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444550
        ;   Label: core_colonel.cpp_CColonel_process_FUN_00444550
    PUSH ESI                            ; 00444551
    PUSH EDI                            ; 00444552
    PUSH EBP                            ; 00444553
    SUB ESP,0xc4                        ; 00444554
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0044455a
    PUSH dword ptr [ESP + 0xdc]         ; 00444561
    PUSH EBX                            ; 00444568
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00444569
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0044456e
    TEST EAX,EAX                        ; 00444571
    JZ 0x0044487e                       ; 00444573
        ;   XREF to: 0044487e (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xc1d0]        ; 00444579
    FSUB float ptr [ESP + 0xdc]         ; 0044457f
    FST float ptr [EBX + 0xc1d0]        ; 00444586
    FLDZ                                ; 0044458c
    FCOMPP                              ; 0044458e
    FNSTSW AX                           ; 00444590
    SAHF                                ; 00444592
    JBE 0x0044459f                      ; 00444593
        ;   XREF to: 0044459f (CONDITIONAL_JUMP)  ; LAB_0044459f
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 00444595
    LEA EAX,[EBX + 0x249c]              ; 0044459f
        ;   Label: LAB_0044459f
    PUSH dword ptr [ESP + 0xdc]         ; 004445a5
    MOV dword ptr [EAX + 0x8],0x0       ; 004445ac
    PUSH EBX                            ; 004445b3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004445b4
    MOV dword ptr [EAX + 0x4],EDX       ; 004445b7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004445ba
    MOV dword ptr [EAX],EDX             ; 004445bd
    CALL core_colonel.cpp_CColonel_processMotionEvents_FUN_00445140 ; 004445bf
        ;   XREF to: 00445140 (UNCONDITIONAL_CALL)  ; void core_colonel.cpp_CColonel_processMotionEvents_FUN_00445140(CColonel * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 004445c4
    ADD ESP,0x8                         ; 004445ca
    CMP EDX,0x2                         ; 004445cd
    JNZ 0x004445e2                      ; 004445d0
        ;   XREF to: 004445e2 (CONDITIONAL_JUMP)  ; LAB_004445e2
    PUSH dword ptr [ESP + 0xdc]         ; 004445d2
    PUSH EBX                            ; 004445d9
    CALL core_colonel.cpp_FUN_00444b50  ; 004445da
        ;   XREF to: 00444b50 (UNCONDITIONAL_CALL)  ; undefined core_colonel.cpp_FUN_00444b50()
    ADD ESP,0x8                         ; 004445df
    PUSH dword ptr [ESP + 0xdc]         ; 004445e2
        ;   Label: LAB_004445e2
    FLD float ptr [EBX + 0x24a4]        ; 004445e9
    PUSH EBX                            ; 004445ef
    FSTP float ptr [EBX + 0x2524]       ; 004445f0
    CALL core_charactr.cpp_FUN_00435320 ; 004445f6
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004445fb
    PUSH dword ptr [ESP + 0xdc]         ; 004445fe
    PUSH EBX                            ; 00444605
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00444606
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    MOV EDX,EAX                         ; 0044460b
    ADD ESP,0x8                         ; 0044460d
    LEA EAX,[EBX + 0x158]               ; 00444610
    TEST EDX,EDX                        ; 00444616
    JZ 0x00444a02                       ; 00444618
        ;   XREF to: 00444a02 (CONDITIONAL_JUMP)  ; LAB_00444a02
    MOV EDX,dword ptr [EBX + 0x273c]    ; 0044461e
    CMP EDX,0x2                         ; 00444624
    JNC 0x004448b6                      ; 00444627
        ;   XREF to: 004448b6 (CONDITIONAL_JUMP)  ; LAB_004448b6
    CMP EDX,0x1                         ; 0044462d
    JNZ 0x004448bd                      ; 00444630
        ;   XREF to: 004448bd (CONDITIONAL_JUMP)  ; LAB_004448bd
    PUSH EDX                            ; 00444636
    PUSH EDX                            ; 00444637
    PUSH EAX                            ; 00444638
        ;   Label: LAB_00444638
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00444639
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00444639
    ADD ESP,0xc                         ; 0044463e
        ;   Label: LAB_0044463e
    MOV ESI,dword ptr [EBX + 0x26fc]    ; 00444641
        ;   Label: caseD_4
    TEST ESI,ESI                        ; 00444647
    JZ 0x00444a40                       ; 00444649
        ;   XREF to: 00444a40 (CONDITIONAL_JUMP)  ; LAB_00444a40
    CMP dword ptr [EBX + 0x2700],0x0    ; 0044464f
    JNZ 0x00444777                      ; 00444656
        ;   XREF to: 00444777 (CONDITIONAL_JUMP)  ; LAB_00444777
    LEA EAX,[ESI + 0x20]                ; 0044465c
    PUSH EAX                            ; 0044465f
    PUSH EBX                            ; 00444660
    LEA ESI,[ESP + 0x70]                ; 00444661
    LEA EDI,[ESP + 0x34]                ; 00444665
    CALL core_actor.cpp_FUN_00408bb0    ; 00444669
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x70]                ; 0044466e
    ADD ESP,0x8                         ; 00444672
    LEA EAX,[ESP + 0x2c]                ; 00444675
    MOVSD ES:EDI,ESI                    ; 00444679
    MOVSD ES:EDI,ESI                    ; 0044467a
    MOVSD ES:EDI,ESI                    ; 0044467b
    PUSH EAX                            ; 0044467c
    LEA ESI,[ESP + 0xa8]                ; 0044467d
    LEA EDI,[ESP + 0x48]                ; 00444684
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00444688
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xa8]                ; 0044468d
    ADD ESP,0x4                         ; 00444694
    MOVSD ES:EDI,ESI                    ; 00444697
    MOVSD ES:EDI,ESI                    ; 00444698
    MOVSD ES:EDI,ESI                    ; 00444699
    PUSH dword ptr [ESP + 0x48]         ; 0044469a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0044469e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xc4],EAX      ; 004446a3
    FLD float ptr [ESP + 0xc4]          ; 004446aa
    ADD ESP,0x4                         ; 004446b1
    FST float ptr [ESP + 0xbc]          ; 004446b4
    FCOMP float ptr [0x005d6ca3]        ; 004446bb | DAT_005d6ca3
    FNSTSW AX                           ; 004446c1
    SAHF                                ; 004446c3
    JNC 0x004446da                      ; 004446c4
        ;   XREF to: 004446da (CONDITIONAL_JUMP)  ; LAB_004446da
    FLD float ptr [ESP + 0xbc]          ; 004446c6
    FADD float ptr [0x005d6ca7]         ; 004446cd | DAT_005d6ca7
    FSTP float ptr [ESP + 0xbc]         ; 004446d3
    FLD float ptr [ESP + 0xbc]          ; 004446da
        ;   Label: LAB_004446da
    FCOMP float ptr [0x005d6cab]        ; 004446e1 | DAT_005d6cab
    FNSTSW AX                           ; 004446e7
    SAHF                                ; 004446e9
    JBE 0x00444700                      ; 004446ea
        ;   XREF to: 00444700 (CONDITIONAL_JUMP)  ; LAB_00444700
    FLD float ptr [ESP + 0xbc]          ; 004446ec
    FADD float ptr [0x005d6caf]         ; 004446f3 | DAT_005d6caf
    FSTP float ptr [ESP + 0xbc]         ; 004446f9
    FLD float ptr [ESP + 0xdc]          ; 00444700
        ;   Label: LAB_00444700
    FMUL float ptr [0x005d6ca7]         ; 00444707 | DAT_005d6ca7
    FLD float ptr [ESP + 0xbc]          ; 0044470d
    FXCH                                ; 00444714
    FST float ptr [ESP + 0xb8]          ; 00444716
    FCHS                                ; 0044471d
    FSTP float ptr [ESP + 0xb4]         ; 0044471f
    FCOMP float ptr [ESP + 0xb4]        ; 00444726
    FNSTSW AX                           ; 0044472d
    SAHF                                ; 0044472f
    JNC 0x00444740                      ; 00444730
        ;   XREF to: 00444740 (CONDITIONAL_JUMP)  ; LAB_00444740
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00444732
    MOV dword ptr [ESP + 0xbc],EAX      ; 00444739
    FLD float ptr [ESP + 0xbc]          ; 00444740
        ;   Label: LAB_00444740
    FCOMP float ptr [ESP + 0xb8]        ; 00444747
    FNSTSW AX                           ; 0044474e
    SAHF                                ; 00444750
    JBE 0x00444761                      ; 00444751
        ;   XREF to: 00444761 (CONDITIONAL_JUMP)  ; LAB_00444761
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00444753
    MOV dword ptr [ESP + 0xbc],EAX      ; 0044475a
    FLD float ptr [EBX + 0x34]          ; 00444761
        ;   Label: LAB_00444761
    FADD float ptr [ESP + 0xbc]         ; 00444764
    PUSH EBX                            ; 0044476b
    FSTP float ptr [EBX + 0x34]         ; 0044476c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0044476f
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00444774
    PUSH 0x0                            ; 00444777
        ;   Label: LAB_00444777
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 00444779
    LEA EBP,[EBX + 0x158]               ; 0044477f
    MOV dword ptr [ESP + 0xb4],EAX      ; 00444785
    PUSH EBP                            ; 0044478c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044478d
    LEA ESI,[ESP + 0xa0]                ; 00444793
    MOV dword ptr [ESP + 0xc8],EAX      ; 0044479a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004447a1
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004447a6
    LEA EAX,[ESP + 0x8c]                ; 004447a9
    PUSH EAX                            ; 004447b0
    LEA EDI,[ESP + 0x90]                ; 004447b1
    PUSH EBX                            ; 004447b8
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004447b9
    LEA ESI,[ESP + 0xa0]                ; 004447c0
    PUSH EAX                            ; 004447c7
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004447c8
    MOVSD ES:EDI,ESI                    ; 004447cf
    MOVSD ES:EDI,ESI                    ; 004447d0
    MOVSD ES:EDI,ESI                    ; 004447d1
    CALL dword ptr [EAX + 0x110]        ; 004447d2
    ADD ESP,0xc                         ; 004447d8
    TEST EAX,EAX                        ; 004447db
    JZ 0x00444a1e                       ; 004447dd
        ;   XREF to: 00444a1e (CONDITIONAL_JUMP)  ; LAB_00444a1e
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004447e3
    JNZ 0x00444a29                      ; 004447ea
        ;   XREF to: 00444a29 (CONDITIONAL_JUMP)  ; LAB_00444a29
    PUSH 0x1                            ; 004447f0
        ;   Label: LAB_004447f0
    PUSH 0x0                            ; 004447f2
    LEA EAX,[EBX + 0x158]               ; 004447f4
    PUSH EAX                            ; 004447fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004447fb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004447fb
    ADD ESP,0xc                         ; 00444800
    PUSH EBX                            ; 00444803
        ;   Label: LAB_00444803
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00444804
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00444809
    LEA EBP,[EBX + 0x158]               ; 0044480c
    PUSH EBP                            ; 00444812
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00444813
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00444818
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044481b
    PUSH EBX                            ; 00444821
    CALL dword ptr [EAX + 0x10c]        ; 00444822
    ADD ESP,0x4                         ; 00444828
    TEST EAX,EAX                        ; 0044482b
    JNZ 0x0044486e                      ; 0044482d
        ;   XREF to: 0044486e (CONDITIONAL_JUMP)  ; LAB_0044486e
    PUSH 0x567360                       ; 0044482f
    MOV ESI,dword ptr [0x007db570]      ; 00444834 | DAT_007db570
    PUSH ESI                            ; 0044483a
    LEA EAX,[EBX + 0x1ffb4]             ; 0044483b
    PUSH dword ptr [EBX + 0x1ffc0]      ; 00444841
    PUSH EAX                            ; 00444847
    LEA ESI,[ESP + 0x20]                ; 00444848
    CALL core_xform.cpp_FUN_005b7ed0    ; 0044484c
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 00444851
    LEA EAX,[ESP + 0xc]                 ; 00444854
    PUSH EAX                            ; 00444858
    LEA EDI,[ESP + 0x10]                ; 00444859
    LEA ESI,[ESP + 0x20]                ; 0044485d
    PUSH EBP                            ; 00444861
    MOVSD ES:EDI,ESI                    ; 00444862
    MOVSD ES:EDI,ESI                    ; 00444863
    MOVSD ES:EDI,ESI                    ; 00444864
    MOVSD ES:EDI,ESI                    ; 00444865
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 00444866
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0044486b
    PUSH dword ptr [ESP + 0xdc]         ; 0044486e
        ;   Label: LAB_0044486e
    PUSH EBX                            ; 00444875
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00444876
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0044487b
    ADD ESP,0xc4                        ; 0044487e
        ;   Label: caseD_6
    POP EBP                             ; 00444884
    POP EDI                             ; 00444885
    POP ESI                             ; 00444886
    POP EBX                             ; 00444887
    RET                                 ; 00444888
    PUSH 0x1                            ; 00444889
        ;   Label: LAB_00444889
    PUSH 0x0                            ; 0044488b
    PUSH EAX                            ; 0044488d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0044488e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00444893
    PUSH EBX                            ; 00444896
    PUSH 0x5d6c76                       ; 00444897 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00611100]      ; 0044489c | g_CConsolePtr
    PUSH ECX                            ; 004448a2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004448a3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x0044463e                      ; 004448a8
        ;   XREF to: 0044463e (UNCONDITIONAL_JUMP)  ; LAB_0044463e
    PUSH 0x1                            ; 004448ad
        ;   Label: LAB_004448ad
    PUSH 0x2                            ; 004448af
    JMP 0x00444638                      ; 004448b1
        ;   XREF to: 00444638 (UNCONDITIONAL_JUMP)  ; LAB_00444638
    JBE 0x004448ad                      ; 004448b6
        ;   XREF to: 004448ad (CONDITIONAL_JUMP)  ; LAB_004448ad
        ;   Label: LAB_004448b6
    CMP EDX,0x3                         ; 004448b8
    JZ 0x00444889                       ; 004448bb
        ;   XREF to: 00444889 (CONDITIONAL_JUMP)  ; LAB_00444889
    PUSH 0x1                            ; 004448bd
        ;   Label: LAB_004448bd
    PUSH 0x0                            ; 004448bf
    LEA EAX,[EBX + 0x158]               ; 004448c1
    JMP 0x00444638                      ; 004448c7
        ;   XREF to: 00444638 (UNCONDITIONAL_JUMP)  ; LAB_00444638
    CMP dword ptr [EBX + 0x2500],0x0    ; 004448cc
        ;   Label: caseD_0
    JZ 0x00444641                       ; 004448d3
        ;   XREF to: 00444641 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0xc1d8]    ; 004448d9
    XOR ESI,ESI                         ; 004448df
    TEST EDI,EDI                        ; 004448e1
    JZ 0x004448f7                       ; 004448e3
        ;   XREF to: 004448f7 (CONDITIONAL_JUMP)  ; LAB_004448f7
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 004448e5
    JZ 0x0044498b                       ; 004448ec
        ;   XREF to: 0044498b (CONDITIONAL_JUMP)  ; LAB_0044498b
    MOV ESI,0x2                         ; 004448f2
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 004448f7
        ;   Label: LAB_004448f7
    JZ 0x00444905                       ; 004448fe
        ;   XREF to: 00444905 (CONDITIONAL_JUMP)  ; LAB_00444905
    MOV ESI,0x3                         ; 00444900
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 00444905
        ;   Label: LAB_00444905
    JZ 0x00444930                       ; 0044490c
        ;   XREF to: 00444930 (CONDITIONAL_JUMP)  ; LAB_00444930
    MOV ECX,dword ptr [EBX + 0x1ffac]   ; 0044490e
    MOV dword ptr [EBX + 0xc1f0],0x0    ; 00444914
    TEST ECX,ECX                        ; 0044491e
    SETZ AL                             ; 00444920
    AND EAX,0xff                        ; 00444923
    XOR ESI,ESI                         ; 00444928
    MOV dword ptr [EBX + 0x1ffac],EAX   ; 0044492a
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00444930
        ;   Label: LAB_00444930
    JZ 0x00444956                       ; 00444937
        ;   XREF to: 00444956 (CONDITIONAL_JUMP)  ; LAB_00444956
    MOV EAX,dword ptr [EBX + 0x1ffac]   ; 00444939
    MOV EBP,0x1                         ; 0044493f
    TEST EAX,EAX                        ; 00444944
    JZ 0x00444995                       ; 00444946
        ;   XREF to: 00444995 (CONDITIONAL_JUMP)  ; LAB_00444995
    TEST EBP,EBP                        ; 00444948
        ;   Label: LAB_00444948
    JZ 0x00444956                       ; 0044494a
        ;   XREF to: 00444956 (CONDITIONAL_JUMP)  ; LAB_00444956
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 0044494c
        ;   Label: LAB_0044494c
    FLD float ptr [EBX + 0xc200]        ; 00444956
        ;   Label: LAB_00444956
    LEA EBP,[EBX + 0x158]               ; 0044495c
    FMUL float ptr [EBX + 0x2528]       ; 00444962
    PUSH EBP                            ; 00444968
    FSTP float ptr [EBX + 0x2508]       ; 00444969
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0044496f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00444974
    ADD ESP,0x4                         ; 00444977
    CMP ESI,EAX                         ; 0044497a
    JZ 0x00444641                       ; 0044497c
        ;   XREF to: 00444641 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00444982
    PUSH ESI                            ; 00444984
    PUSH EBP                            ; 00444985
    JMP 0x00444639                      ; 00444986
        ;   XREF to: 00444639 (UNCONDITIONAL_JUMP)  ; LAB_00444639
    MOV ESI,0x1                         ; 0044498b
        ;   Label: LAB_0044498b
    JMP 0x004448f7                      ; 00444990
        ;   XREF to: 004448f7 (UNCONDITIONAL_JUMP)  ; LAB_004448f7
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 00444995
        ;   Label: LAB_00444995
    JZ 0x00444948                       ; 0044499c
        ;   XREF to: 00444948 (CONDITIONAL_JUMP)  ; LAB_00444948
    PUSH EBX                            ; 0044499e
    CALL core_hero.cpp_CHero_tryInteract_FUN_004eb090 ; 0044499f
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004eb090(CHero * this_ptr)
    XOR EBP,EBP                         ; 004449a4
    ADD ESP,0x4                         ; 004449a6
    TEST EAX,EAX                        ; 004449a9
    JNZ 0x00444948                      ; 004449ab
        ;   XREF to: 00444948 (CONDITIONAL_JUMP)  ; LAB_00444948
    PUSH EAX                            ; 004449ad
    PUSH EBX                            ; 004449ae
    CALL core_hero.cpp_FUN_004eb3e0     ; 004449af
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb3e0()
    ADD ESP,0x8                         ; 004449b4
    MOV EDI,EAX                         ; 004449b7
    TEST EAX,EAX                        ; 004449b9
    JBE 0x004449c2                      ; 004449bb
        ;   XREF to: 004449c2 (CONDITIONAL_JUMP)  ; LAB_004449c2
    CMP EAX,0x1                         ; 004449bd
    JNZ 0x004449e9                      ; 004449c0
        ;   XREF to: 004449e9 (CONDITIONAL_JUMP)  ; LAB_004449e9
    TEST EDI,EDI                        ; 004449c2
        ;   Label: LAB_004449c2
    JNZ 0x00444948                      ; 004449c4
        ;   XREF to: 00444948 (CONDITIONAL_JUMP)  ; LAB_00444948
    PUSH EBX                            ; 004449c6
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240 ; 004449c7
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero * this_ptr)
    ADD ESP,0x4                         ; 004449cc
    TEST EAX,EAX                        ; 004449cf
    JNZ 0x00444948                      ; 004449d1
        ;   XREF to: 00444948 (CONDITIONAL_JUMP)  ; LAB_00444948
    PUSH EBX                            ; 004449d7
    CALL core_hero.cpp_FUN_004eb660     ; 004449d8
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb660(CHero * this_ptr)
    ADD ESP,0x4                         ; 004449dd
    TEST EAX,EAX                        ; 004449e0
    JNZ 0x004449f4                      ; 004449e2
        ;   XREF to: 004449f4 (CONDITIONAL_JUMP)  ; LAB_004449f4
    JMP 0x0044494c                      ; 004449e4
        ;   XREF to: 0044494c (UNCONDITIONAL_JUMP)  ; LAB_0044494c
    PUSH EBX                            ; 004449e9
        ;   Label: LAB_004449e9
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 004449ea
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004449ef
    JMP 0x004449c2                      ; 004449f2
        ;   XREF to: 004449c2 (UNCONDITIONAL_JUMP)  ; LAB_004449c2
    PUSH EBX                            ; 004449f4
        ;   Label: LAB_004449f4
    CALL core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0 ; 004449f5
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined4 core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004449fa
    JMP 0x00444948                      ; 004449fd
        ;   XREF to: 00444948 (UNCONDITIONAL_JUMP)  ; LAB_00444948
    PUSH EAX                            ; 00444a02
        ;   Label: LAB_00444a02
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00444a03
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00444a08
    ADD ESP,0x4                         ; 00444a0b
    CMP EAX,0x6                         ; 00444a0e
    JA 0x00444641                       ; 00444a11
        ;   XREF to: 00444641 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x444534]  ; 00444a17 | caseD_3 | caseD_5 | caseD_6
        ;   Label: switchD
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00444a1e
        ;   Label: LAB_00444a1e
    JMP 0x004447f0                      ; 00444a24
        ;   XREF to: 004447f0 (UNCONDITIONAL_JUMP)  ; LAB_004447f0
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00444a29
        ;   Label: LAB_00444a29
    JZ 0x00444803                       ; 00444a30
        ;   XREF to: 00444803 (CONDITIONAL_JUMP)  ; LAB_00444803
    PUSH 0x1                            ; 00444a36
    PUSH 0x9                            ; 00444a38
    PUSH EBP                            ; 00444a3a
    JMP 0x004447fb                      ; 00444a3b
        ;   XREF to: 004447fb (UNCONDITIONAL_JUMP)  ; LAB_004447fb
    PUSH dword ptr [ESP + 0xdc]         ; 00444a40
        ;   Label: LAB_00444a40
    PUSH EBX                            ; 00444a47
    CALL core_charactr.cpp_FUN_0042d700 ; 00444a48
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x2518]              ; 00444a4d
    ADD ESP,0x8                         ; 00444a53
    FLD float ptr [EAX]                 ; 00444a56
    FMUL float ptr [ESP + 0xdc]         ; 00444a58
    FLD float ptr [EAX + 0x4]           ; 00444a5f
    FMUL float ptr [ESP + 0xdc]         ; 00444a62
    FLD float ptr [EAX + 0x8]           ; 00444a69
    FMUL float ptr [ESP + 0xdc]         ; 00444a6c
    LEA EDI,[ESP + 0x38]                ; 00444a73
    LEA ESI,[ESP + 0x74]                ; 00444a77
    LEA EDX,[EBX + 0x249c]              ; 00444a7b
    FXCH ST2                            ; 00444a81
    FSTP float ptr [ESP + 0x74]         ; 00444a83
    FSTP float ptr [ESP + 0x78]         ; 00444a87
    FSTP float ptr [ESP + 0x7c]         ; 00444a8b
    MOVSD ES:EDI,ESI                    ; 00444a8f
    MOVSD ES:EDI,ESI                    ; 00444a90
    MOVSD ES:EDI,ESI                    ; 00444a91
    LEA EAX,[EBX + 0x250c]              ; 00444a92
    FLD float ptr [EDX]                 ; 00444a98
    FLD float ptr [EDX + 0x4]           ; 00444a9a
    FLD float ptr [EDX + 0x8]           ; 00444a9d
    LEA EDI,[ESP + 0x50]                ; 00444aa0
    LEA ESI,[ESP + 0x80]                ; 00444aa4
    FXCH ST2                            ; 00444aab
    FADD float ptr [EAX]                ; 00444aad
    FXCH                                ; 00444aaf
    FADD float ptr [EAX + 0x4]          ; 00444ab1
    FXCH ST2                            ; 00444ab4
    FADD float ptr [EAX + 0x8]          ; 00444ab6
    FXCH                                ; 00444ab9
    FSTP float ptr [ESP + 0x80]         ; 00444abb
    FXCH                                ; 00444ac2
    FSTP float ptr [ESP + 0x84]         ; 00444ac4
    FSTP float ptr [ESP + 0x88]         ; 00444acb
    MOVSD ES:EDI,ESI                    ; 00444ad2
    MOVSD ES:EDI,ESI                    ; 00444ad3
    MOVSD ES:EDI,ESI                    ; 00444ad4
    FLD float ptr [ESP + 0x50]          ; 00444ad5
    FLD float ptr [ESP + 0x54]          ; 00444ad9
    FLD float ptr [ESP + 0x58]          ; 00444add
    LEA EDI,[ESP + 0x20]                ; 00444ae1
    LEA ESI,[ESP + 0x5c]                ; 00444ae5
    FXCH ST2                            ; 00444ae9
    FADD float ptr [ESP + 0x38]         ; 00444aeb
    FXCH                                ; 00444aef
    FADD float ptr [ESP + 0x3c]         ; 00444af1
    FXCH ST2                            ; 00444af5
    FADD float ptr [ESP + 0x40]         ; 00444af7
    FXCH                                ; 00444afb
    FSTP float ptr [ESP + 0x5c]         ; 00444afd
    FXCH                                ; 00444b01
    FSTP float ptr [ESP + 0x60]         ; 00444b03
    FSTP float ptr [ESP + 0x64]         ; 00444b07
    MOVSD ES:EDI,ESI                    ; 00444b0b
    MOVSD ES:EDI,ESI                    ; 00444b0c
    MOVSD ES:EDI,ESI                    ; 00444b0d
    MOV dword ptr [EDX + 0x8],0x0       ; 00444b0e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00444b15
    MOV dword ptr [EDX + 0x4],ECX       ; 00444b18
    MOV ECX,dword ptr [EDX + 0x4]       ; 00444b1b
    MOV dword ptr [EDX],ECX             ; 00444b1e
    MOV dword ptr [EAX + 0x8],0x0       ; 00444b20
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444b27
    MOV dword ptr [EAX + 0x4],EDX       ; 00444b2a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444b2d
    MOV dword ptr [EAX],EDX             ; 00444b30
    LEA EAX,[ESP + 0x20]                ; 00444b32
    PUSH EAX                            ; 00444b36
    PUSH EBX                            ; 00444b37
    CALL core_charactr.cpp_FUN_0042d750 ; 00444b38
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00444b3d
    JMP 0x00444803                      ; 00444b40
        ;   XREF to: 00444803 (UNCONDITIONAL_JUMP)  ; LAB_00444803

