; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spireagl_cpp_CSpiritEagle_process_FUN_00599540(CSpiritEagle *this_ptr,float delta_time)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_STAND_005d9928
;   TerminatedCString s_s_confused_while_walking_005d992e
;   undefined4 DAT_005d9958
;   undefined4 DAT_005d995c
;   TerminatedCString s_WPPerch_005d9961
;   TerminatedCString s_PERCH_005d996a
;   TerminatedCString s_Landing_005d9970
;   TerminatedCString s_LAND_GROUND_005d997b
;   TerminatedCString s_STAND_005d9987
;   TerminatedCString s_AcrossBridge_005d998d
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d999a
;   undefined4 DAT_005d99bd
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   undefined4 DAT_00600530
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599540
        ;   Label: core_spireagl.cpp_CSpiritEagle_process_FUN_00599540
    PUSH ESI                            ; 00599541
    PUSH EDI                            ; 00599542
    PUSH EBP                            ; 00599543
    MOV EBP,ESP                         ; 00599544
    SUB ESP,0x74                        ; 00599546
    MOV EDX,dword ptr [EBP + 0x14]      ; 00599549
    PUSH dword ptr [EBP + 0x18]         ; 0059954c
    PUSH EDX                            ; 0059954f
    MOV ESI,dword ptr [EBP + 0x14]      ; 00599550
    CALL core_charactr.cpp_FUN_00433c60 ; 00599553
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599558
    ADD ESI,0x158                       ; 0059955b
    MOV ECX,0x1                         ; 00599561
    MOV dword ptr [EAX + 0x24a4],0x0    ; 00599566
    ADD ESP,0x8                         ; 00599570
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 00599573
    MOV dword ptr [EAX + 0x24a0],EDX    ; 00599579
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 0059957f
    MOV dword ptr [EAX + 0x249c],EDX    ; 00599585
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059958b
    MOV dword ptr [EBP + -0x8],ECX      ; 0059958e
    MOV dword ptr [EBP + -0xc],EAX      ; 00599591
    FLD float ptr [EBP + -0xc]          ; 00599594
        ;   Label: LAB_00599594
    FLDZ                                ; 00599597
    FCOMPP                              ; 00599599
    FNSTSW AX                           ; 0059959b
    SAHF                                ; 0059959d
    JC 0x00599762                       ; 0059959e
        ;   XREF to: 00599762 (CONDITIONAL_JUMP)  ; LAB_00599762
    MOV EBX,dword ptr [EBP + 0x14]      ; 005995a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005995a7
    PUSH EBX                            ; 005995aa
    MOV EAX,dword ptr [EAX + 0x154]     ; 005995ab
    CALL dword ptr [EAX + 0x10c]        ; 005995b1
    ADD ESP,0x4                         ; 005995b7
    CMP EAX,0x1                         ; 005995ba
    JLE 0x0059962e                      ; 005995bd
        ;   XREF to: 0059962e (CONDITIONAL_JUMP)  ; LAB_0059962e
    CMP dword ptr [EBX + 0x70],0x1      ; 005995bf
    JNZ 0x0059962e                      ; 005995c3
        ;   XREF to: 0059962e (CONDITIONAL_JUMP)  ; LAB_0059962e
    MOV EDX,dword ptr [EBX + 0x20868]   ; 005995c5
    TEST EDX,EDX                        ; 005995cb
    JNZ 0x0059962e                      ; 005995cd
        ;   XREF to: 0059962e (CONDITIONAL_JUMP)  ; LAB_0059962e
    CMP dword ptr [EBX + 0xdc],0x0      ; 005995cf
    JNZ 0x0059962e                      ; 005995d6
        ;   XREF to: 0059962e (CONDITIONAL_JUMP)  ; LAB_0059962e
    PUSH EDX                            ; 005995d8
    PUSH ESI                            ; 005995d9
    LEA ESI,[EBP + -0x2c]               ; 005995da
    LEA EDI,[EBP + -0x38]               ; 005995dd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 005995e0
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005995e5
    LEA EAX,[EBP + -0x38]               ; 005995e8
    LEA ESI,[EBP + -0x2c]               ; 005995eb
    PUSH EAX                            ; 005995ee
    MOVSD ES:EDI,ESI                    ; 005995ef
    MOVSD ES:EDI,ESI                    ; 005995f0
    MOVSD ES:EDI,ESI                    ; 005995f1
    PUSH EBX                            ; 005995f2
    LEA ESI,[EBP + -0x74]               ; 005995f3
    LEA EDI,[EBP + -0x44]               ; 005995f6
    CALL core_actor.cpp_FUN_00408b80    ; 005995f9
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005995fe
    LEA ESI,[EBP + -0x74]               ; 00599601
    LEA EAX,[EBP + -0x44]               ; 00599604
    PUSH 0x0                            ; 00599607
    MOVSD ES:EDI,ESI                    ; 00599609
    MOVSD ES:EDI,ESI                    ; 0059960a
    MOVSD ES:EDI,ESI                    ; 0059960b
    PUSH EAX                            ; 0059960c
    MOV ESI,dword ptr [0x005fed24]      ; 0059960d | g_CGorePtr
    PUSH ESI                            ; 00599613
    MOV EDI,0x1                         ; 00599614
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00599619
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    MOV dword ptr [EBP + -0x8],EDI      ; 0059961e
    ADD ESP,0xc                         ; 00599621
    MOV dword ptr [EBX + 0x20868],0x1   ; 00599624
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059962e
        ;   Label: LAB_0059962e
    PUSH dword ptr [EBP + 0x18]         ; 00599631
    FLD float ptr [EAX + 0x24a4]        ; 00599634
    PUSH EAX                            ; 0059963a
    FSTP float ptr [EAX + 0x2524]       ; 0059963b
    CALL core_charactr.cpp_FUN_00434850 ; 00599641
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00599646
    MOV EDX,dword ptr [EBP + 0x14]      ; 00599649
    PUSH dword ptr [EBP + 0x18]         ; 0059964c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059964f
    PUSH EDX                            ; 00599652
    ADD ESI,0x158                       ; 00599653
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00599659
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059965e
    TEST EAX,EAX                        ; 00599661
    JZ 0x00599821                       ; 00599663
        ;   XREF to: 00599821 (CONDITIONAL_JUMP)  ; LAB_00599821
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599669
    MOV EAX,dword ptr [EAX + 0x273c]    ; 0059966c
    CMP EAX,0x2                         ; 00599672
    JNC 0x005997e5                      ; 00599675
        ;   XREF to: 005997e5 (CONDITIONAL_JUMP)  ; LAB_005997e5
    CMP EAX,0x1                         ; 0059967b
    JNZ 0x005997ec                      ; 0059967e
        ;   XREF to: 005997ec (CONDITIONAL_JUMP)  ; LAB_005997ec
    PUSH EAX                            ; 00599684
    PUSH 0x5d995c                       ; 00599685 | DAT_005d995c
    PUSH ESI                            ; 0059968a
        ;   Label: LAB_0059968a
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0059968b
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
        ;   Label: LAB_0059968b
    ADD ESP,0xc                         ; 00599690
        ;   Label: LAB_00599690
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599693
    MOV dword ptr [EAX + 0x24a4],0x0    ; 00599696
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 005996a0
    MOV dword ptr [EAX + 0x24a0],EDX    ; 005996a6
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 005996ac
    MOV dword ptr [EAX + 0x249c],EDX    ; 005996b2
    MOV EDI,dword ptr [EBP + -0x4]      ; 005996b8
        ;   Label: LAB_005996b8
    CMP EDI,0x2                         ; 005996bb
    JZ 0x005996de                       ; 005996be
        ;   XREF to: 005996de (CONDITIONAL_JUMP)  ; LAB_005996de
    CMP EDI,0x3                         ; 005996c0
    JZ 0x005996de                       ; 005996c3
        ;   XREF to: 005996de (CONDITIONAL_JUMP)  ; LAB_005996de
    CMP EDI,0x1                         ; 005996c5
    JZ 0x005996de                       ; 005996c8
        ;   XREF to: 005996de (CONDITIONAL_JUMP)  ; LAB_005996de
    CMP EDI,0x4                         ; 005996ca
    JZ 0x005996de                       ; 005996cd
        ;   XREF to: 005996de (CONDITIONAL_JUMP)  ; LAB_005996de
    MOV EBX,dword ptr [EBP + 0x14]      ; 005996cf
    PUSH dword ptr [EBP + 0x18]         ; 005996d2
    PUSH EBX                            ; 005996d5
    CALL core_charactr.cpp_FUN_0042c1e0 ; 005996d6
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 005996db
    MOV EAX,dword ptr [EBP + 0x14]      ; 005996de
        ;   Label: LAB_005996de
    MOV dword ptr [EAX + 0x2514],0x0    ; 005996e1
    MOV EBX,EAX                         ; 005996eb
    MOV dword ptr [EAX + 0x24a4],0x0    ; 005996ed
    PUSH EAX                            ; 005996f7
    MOV EDX,dword ptr [EAX + 0x2514]    ; 005996f8
    MOV dword ptr [EAX + 0x2510],EDX    ; 005996fe
    MOV EDX,dword ptr [EAX + 0x2510]    ; 00599704
    MOV dword ptr [EAX + 0x250c],EDX    ; 0059970a
    MOV EDX,dword ptr [EBX + 0x24a4]    ; 00599710
    MOV dword ptr [EAX + 0x24a0],EDX    ; 00599716
    MOV EDX,dword ptr [EBX + 0x24a0]    ; 0059971c
    MOV dword ptr [EAX + 0x249c],EDX    ; 00599722
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 00599728
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059972d
    LEA EAX,[EBX + 0x158]               ; 00599730
    PUSH EAX                            ; 00599736
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00599737
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059973c
    MOV EDI,dword ptr [EBP + -0x8]      ; 0059973f
    PUSH EDI                            ; 00599742
    PUSH dword ptr [EBP + 0x18]         ; 00599743
    PUSH EBX                            ; 00599746
    CALL core_charactr.cpp_FUN_00432330 ; 00599747
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    ADD ESP,0xc                         ; 0059974c
    PUSH dword ptr [EBP + 0x18]         ; 0059974f
    PUSH EBX                            ; 00599752
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00599753
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00599758
    MOV ESP,EBP                         ; 0059975b
        ;   Label: LAB_0059975b
    POP EBP                             ; 0059975d
    POP EDI                             ; 0059975e
    POP ESI                             ; 0059975f
    POP EBX                             ; 00599760
    RET                                 ; 00599761
    LEA EAX,[EBP + -0xc]                ; 00599762
        ;   Label: LAB_00599762
    PUSH EAX                            ; 00599765
    PUSH ESI                            ; 00599766
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00599767
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0059976c
    PUSH EAX                            ; 0059976f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599770
    PUSH EAX                            ; 00599773
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00599774
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00599779
    JMP 0x00599594                      ; 0059977c
        ;   XREF to: 00599594 (UNCONDITIONAL_JUMP)  ; LAB_00599594
    PUSH 0x1                            ; 00599781
        ;   Label: LAB_00599781
    PUSH 0x5d9928                       ; 00599783 | = "STAND"
    PUSH ESI                            ; 00599788
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 00599789
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0059978e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599791
    PUSH EAX                            ; 00599794
    PUSH 0x5d992e                       ; 00599795 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 0059979a | g_CConsolePtr
    PUSH EDX                            ; 005997a0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005997a1
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x00599690                      ; 005997a6
        ;   XREF to: 00599690 (UNCONDITIONAL_JUMP)  ; LAB_00599690
    PUSH 0x1                            ; 005997ab
        ;   Label: LAB_005997ab
    PUSH 0x5d9958                       ; 005997ad | DAT_005d9958
    JMP 0x0059968a                      ; 005997b2
        ;   XREF to: 0059968a (UNCONDITIONAL_JUMP)  ; LAB_0059968a
    PUSH 0x5d9970                       ; 005997b7 | = "Landing..."
        ;   Label: LAB_005997b7
    MOV EDI,dword ptr [0x005f1690]      ; 005997bc | g_CConsolePtr
    PUSH EDI                            ; 005997c2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005997c3
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005997c8
    PUSH 0x1                            ; 005997cb
    PUSH 0x5d997b                       ; 005997cd | = "LAND_GROUND"
    PUSH EBX                            ; 005997d2
    JMP 0x0059968b                      ; 005997d3
        ;   XREF to: 0059968b (UNCONDITIONAL_JUMP)  ; LAB_0059968b
    PUSH 0x1                            ; 005997d8
        ;   Label: LAB_005997d8
    PUSH 0x5d9987                       ; 005997da | = "STAND"
    PUSH EBX                            ; 005997df
    JMP 0x0059968b                      ; 005997e0
        ;   XREF to: 0059968b (UNCONDITIONAL_JUMP)  ; LAB_0059968b
    JBE 0x005997ab                      ; 005997e5
        ;   XREF to: 005997ab (CONDITIONAL_JUMP)  ; LAB_005997ab
        ;   Label: LAB_005997e5
    CMP EAX,0x3                         ; 005997e7
    JZ 0x00599781                       ; 005997ea
        ;   XREF to: 00599781 (CONDITIONAL_JUMP)  ; LAB_00599781
    MOV EAX,dword ptr [EBP + 0x14]      ; 005997ec
        ;   Label: LAB_005997ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 005997ef
    MOV ECX,dword ptr [EAX + 0x2704]    ; 005997f2
    ADD EBX,0x158                       ; 005997f8
    TEST ECX,ECX                        ; 005997fe
    JZ 0x005997d8                       ; 00599800
        ;   XREF to: 005997d8 (CONDITIONAL_JUMP)  ; LAB_005997d8
    PUSH 0x5d9961                       ; 00599802 | = "WPPerch*"
    PUSH ECX                            ; 00599807
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00599808
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059980d
    CMP EAX,0x1                         ; 00599810
    JNZ 0x005997b7                      ; 00599813
        ;   XREF to: 005997b7 (CONDITIONAL_JUMP)  ; LAB_005997b7
    PUSH EAX                            ; 00599815
    PUSH 0x5d996a                       ; 00599816 | = "PERCH"
    PUSH EBX                            ; 0059981b
    JMP 0x0059968b                      ; 0059981c
        ;   XREF to: 0059968b (UNCONDITIONAL_JUMP)  ; LAB_0059968b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599821
        ;   Label: LAB_00599821
    FLD float ptr [EAX + 0x214a0]       ; 00599824
    FLD1                                ; 0059982a
    FCOMPP                              ; 0059982c
    FNSTSW AX                           ; 0059982e
    SAHF                                ; 00599830
    JBE 0x0059975b                      ; 00599831
        ;   XREF to: 0059975b (CONDITIONAL_JUMP)  ; LAB_0059975b
    PUSH ESI                            ; 00599837
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00599838
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059983d
    ADD ESP,0x4                         ; 00599840
    MOV dword ptr [EBP + -0x4],EAX      ; 00599843
    CMP EAX,0x6                         ; 00599846
    JNZ 0x00599975                      ; 00599849
        ;   XREF to: 00599975 (CONDITIONAL_JUMP)  ; LAB_00599975
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059984f
        ;   Label: LAB_0059984f
    MOV dword ptr [EAX + 0xf8],0x1      ; 00599852
    MOV dword ptr [EAX + 0xfc],0x0      ; 0059985c
    CMP dword ptr [EBP + -0x4],0x7      ; 00599866
        ;   Label: LAB_00599866
    JNZ 0x005998c9                      ; 0059986a
        ;   XREF to: 005998c9 (CONDITIONAL_JUMP)  ; LAB_005998c9
    FLD float ptr [EBP + 0x18]          ; 0059986c
    FMUL double ptr [0x005d99bd]        ; 0059986f | DAT_005d99bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00599875
    FADD float ptr [EAX + 0x214a0]      ; 00599878
    FST float ptr [EAX + 0x214a0]       ; 0059987e
    FLD1                                ; 00599884
    FCOMPP                              ; 00599886
    FNSTSW AX                           ; 00599888
    SAHF                                ; 0059988a
    JA 0x005998c9                       ; 0059988b
        ;   XREF to: 005998c9 (CONDITIONAL_JUMP)  ; LAB_005998c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059988d
    MOV EBX,dword ptr [EAX + 0x20870]   ; 00599890
    TEST EBX,EBX                        ; 00599896
    JZ 0x005998c9                       ; 00599898
        ;   XREF to: 005998c9 (CONDITIONAL_JUMP)  ; LAB_005998c9
    PUSH EBX                            ; 0059989a
    MOV EDI,dword ptr [0x00600530]      ; 0059989b | DAT_00600530
    PUSH EDI                            ; 005998a1 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 005998a2
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005998a7
    PUSH 0x1                            ; 005998aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 005998ac
    PUSH EAX                            ; 005998af
    MOV EDX,dword ptr [0x00600530]      ; 005998b0 | DAT_00600530
    PUSH EDX                            ; 005998b6 | DAT_01d81080
    MOV dword ptr [EAX + 0x20870],0x0   ; 005998b7
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 005998c1
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 005998c6
    CMP dword ptr [EBP + -0x4],0x0      ; 005998c9
        ;   Label: LAB_005998c9
    JZ 0x00599937                       ; 005998cd
        ;   XREF to: 00599937 (CONDITIONAL_JUMP)  ; LAB_00599937
    MOV EAX,dword ptr [EBP + 0x14]      ; 005998cf
    ADD EAX,0x249c                      ; 005998d2
    PUSH EAX                            ; 005998d7
    MOV EBX,dword ptr [EBP + 0x14]      ; 005998d8
    PUSH EBX                            ; 005998db
    LEA ESI,[EBP + -0x5c]               ; 005998dc
    LEA EDI,[EBP + -0x50]               ; 005998df
    CALL core_actor.cpp_FUN_00408b00    ; 005998e2
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + -0x5c]               ; 005998e7
    LEA EAX,[EBX + 0x20]                ; 005998ea
    MOVSD ES:EDI,ESI                    ; 005998ed
    MOVSD ES:EDI,ESI                    ; 005998ee
    MOVSD ES:EDI,ESI                    ; 005998ef
    FLD float ptr [EAX]                 ; 005998f0
    FLD float ptr [EAX + 0x4]           ; 005998f2
    FLD float ptr [EAX + 0x8]           ; 005998f5
    FXCH ST2                            ; 005998f8
    FADD float ptr [EBP + -0x50]        ; 005998fa
    FXCH                                ; 005998fd
    FADD float ptr [EBP + -0x4c]        ; 005998ff
    FXCH ST2                            ; 00599902
    FADD float ptr [EBP + -0x48]        ; 00599904
    FXCH                                ; 00599907
    FSTP float ptr [EAX]                ; 00599909
    FXCH                                ; 0059990b
    FSTP float ptr [EAX + 0x4]          ; 0059990d
    FSTP float ptr [EAX + 0x8]          ; 00599910
    MOV ESI,dword ptr [EBX + 0x20870]   ; 00599913
    ADD ESP,0x8                         ; 00599919
    TEST ESI,ESI                        ; 0059991c
    JZ 0x00599937                       ; 0059991e
        ;   XREF to: 00599937 (CONDITIONAL_JUMP)  ; LAB_00599937
    MOV EDX,dword ptr [EAX]             ; 00599920
    MOV dword ptr [ESI + 0x20],EDX      ; 00599922
    MOV EDX,dword ptr [EAX + 0x4]       ; 00599925
    MOV dword ptr [ESI + 0x24],EDX      ; 00599928
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059992b
    MOV dword ptr [ESI + 0x28],EDX      ; 0059992e
    MOV EAX,dword ptr [EAX + 0xc]       ; 00599931
    MOV dword ptr [ESI + 0x2c],EAX      ; 00599934
    CMP dword ptr [EBP + -0x4],0x2      ; 00599937
        ;   Label: LAB_00599937
    JNZ 0x005999f5                      ; 0059993b
        ;   XREF to: 005999f5 (CONDITIONAL_JUMP)  ; LAB_005999f5
    XOR ESI,ESI                         ; 00599941
    XOR EDI,EDI                         ; 00599943
    MOV EAX,[0x00603b28]                ; 00599945 | g_CDemonSetPtr
        ;   Label: LAB_00599945
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 0059994a | g_CDemonSetInstance.actor_count
    JGE 0x005999b2                      ; 00599950
        ;   XREF to: 005999b2 (CONDITIONAL_JUMP)  ; LAB_005999b2
    MOV ECX,dword ptr [0x02d0bcd8]      ; 00599952 | g_CWayPointClassInfo.name_hash
    PUSH ECX                            ; 00599958
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 00599959 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 00599960
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00599961
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00599966
    ADD ESP,0x8                         ; 00599968
    TEST EAX,EAX                        ; 0059996b
    JNZ 0x00599983                      ; 0059996d
        ;   XREF to: 00599983 (CONDITIONAL_JUMP)  ; LAB_00599983
    INC EDI                             ; 0059996f
        ;   Label: LAB_0059996f
    ADD ESI,0x4                         ; 00599970
    JMP 0x00599945                      ; 00599973
        ;   XREF to: 00599945 (UNCONDITIONAL_JUMP)  ; LAB_00599945
    CMP EAX,0x7                         ; 00599975
        ;   Label: LAB_00599975
    JZ 0x0059984f                       ; 00599978
        ;   XREF to: 0059984f (CONDITIONAL_JUMP)  ; LAB_0059984f
    JMP 0x00599866                      ; 0059997e
        ;   XREF to: 00599866 (UNCONDITIONAL_JUMP)  ; LAB_00599866
    PUSH 0x5d998d                       ; 00599983 | = "AcrossBridge"
        ;   Label: LAB_00599983
    PUSH EAX                            ; 00599988
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00599989
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059998e
    TEST EAX,EAX                        ; 00599991
    JNZ 0x0059996f                      ; 00599993
        ;   XREF to: 0059996f (CONDITIONAL_JUMP)  ; LAB_0059996f
    LEA EAX,[EBP + -0x20]               ; 00599995
    ADD EBX,0x20                        ; 00599998
    CMP EAX,EBX                         ; 0059999b
    JZ 0x0059996f                       ; 0059999d
        ;   XREF to: 0059996f (CONDITIONAL_JUMP)  ; LAB_0059996f
    MOV EAX,dword ptr [EBX]             ; 0059999f
    MOV dword ptr [EBP + -0x20],EAX     ; 005999a1
    MOV EAX,dword ptr [EBX + 0x4]       ; 005999a4
    MOV dword ptr [EBP + -0x1c],EAX     ; 005999a7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005999aa
    MOV dword ptr [EBP + -0x18],EAX     ; 005999ad
    JMP 0x0059996f                      ; 005999b0
        ;   XREF to: 0059996f (UNCONDITIONAL_JUMP)  ; LAB_0059996f
    PUSH 0x3db2b8c2                     ; 005999b2
        ;   Label: LAB_005999b2
    LEA EAX,[EBP + -0x68]               ; 005999b7
    PUSH 0x3f800000                     ; 005999ba
    PUSH EAX                            ; 005999bf
    XOR ECX,ECX                         ; 005999c0
    PUSH ECX                            ; 005999c2
    LEA EAX,[EBP + -0x20]               ; 005999c3
    PUSH EAX                            ; 005999c6
    MOV EDI,dword ptr [EBP + 0x14]      ; 005999c7
    MOV dword ptr [EBP + -0x68],ECX     ; 005999ca
    PUSH EDI                            ; 005999cd
    MOV dword ptr [EBP + -0x64],ECX     ; 005999ce
    MOV dword ptr [EBP + -0x60],ECX     ; 005999d1
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 005999d4
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005999d9
    LEA EBX,[EDI + 0x158]               ; 005999dc
    TEST EAX,EAX                        ; 005999e2
    JL 0x00599a1a                       ; 005999e4
        ;   XREF to: 00599a1a (CONDITIONAL_JUMP)  ; LAB_00599a1a
    JLE 0x005999f5                      ; 005999e6
        ;   XREF to: 005999f5 (CONDITIONAL_JUMP)  ; LAB_005999f5
    PUSH 0x1                            ; 005999e8
        ;   Label: LAB_005999e8
    PUSH 0x0                            ; 005999ea
    PUSH EBX                            ; 005999ec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005999ed
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005999f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005999f5
        ;   Label: LAB_005999f5
    ADD EAX,0x158                       ; 005999f8
    PUSH EAX                            ; 005999fd
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005999fe
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00599a03
    MOV ESI,dword ptr [EBP + 0x14]      ; 00599a06
    PUSH dword ptr [EBP + 0x18]         ; 00599a09
    PUSH ESI                            ; 00599a0c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00599a0d
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00599a12
    JMP 0x005996b8                      ; 00599a15
        ;   XREF to: 005996b8 (UNCONDITIONAL_JUMP)  ; LAB_005996b8
    PUSH EDI                            ; 00599a1a
        ;   Label: LAB_00599a1a
    PUSH 0x5d999a                       ; 00599a1b | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00599a20 | g_CConsolePtr
    PUSH EDX                            ; 00599a26 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00599a27
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00599a2c
    JMP 0x005999e8                      ; 00599a2f
        ;   XREF to: 005999e8 (UNCONDITIONAL_JUMP)  ; LAB_005999e8

