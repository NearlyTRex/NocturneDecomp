; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_process_FUN_00501530(CMoloch *this_ptr,float delta_time)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005df1d6
;   TerminatedCString s_moloch_h_dfm_005df200
;   TerminatedCString s_moloch_d_dfm_005df20d
;   TerminatedCString s_moloch_d_dfm_005df21a
;   TerminatedCString s_moloch_h_dfm_005df227
;   undefined4 DAT_005df235
;   undefined4 DAT_005df239
;   undefined4 DAT_005df23d
;   undefined4 DAT_005df241
;   undefined4 DAT_005fa3d8
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_moloch.cpp_CMoloch_processAI_FUN_00501c60
;   core_moloch.cpp_CMoloch_startMorph_FUN_00502280
;   core_morph.cpp_CMorph_getReady_FUN_005b71d0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501530
        ;   Label: core_moloch.cpp_CMoloch_process_FUN_00501530
    PUSH ESI                            ; 00501531
    PUSH EDI                            ; 00501532
    PUSH EBP                            ; 00501533
    MOV EBP,ESP                         ; 00501534
    SUB ESP,0x1b50                      ; 00501536
    AND ESP,0xfffffff8                  ; 0050153c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050153f
    CMP dword ptr [EBX + 0x25638],0x4   ; 00501542
    JNZ 0x00501552                      ; 00501549
        ;   XREF to: 00501552 (CONDITIONAL_JUMP)  ; LAB_00501552
    MOV ESP,EBP                         ; 0050154b
        ;   Label: LAB_0050154b
    POP EBP                             ; 0050154d
    POP EDI                             ; 0050154e
    POP ESI                             ; 0050154f
    POP EBX                             ; 00501550
    RET                                 ; 00501551
    PUSH dword ptr [EBP + 0x18]         ; 00501552
        ;   Label: LAB_00501552
    PUSH EBX                            ; 00501555
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00501556
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0050155b
    TEST EAX,EAX                        ; 0050155e
    JZ 0x0050154b                       ; 00501560
        ;   XREF to: 0050154b (CONDITIONAL_JUMP)  ; LAB_0050154b
    FLD float ptr [EBX + 0x10a60]       ; 00501562
    FSUB float ptr [EBP + 0x18]         ; 00501568
    FST float ptr [EBX + 0x10a60]       ; 0050156b
    FLDZ                                ; 00501571
    FCOMPP                              ; 00501573
    FNSTSW AX                           ; 00501575
    SAHF                                ; 00501577
    JA 0x005015c2                       ; 00501578
        ;   XREF to: 005015c2 (CONDITIONAL_JUMP)  ; LAB_005015c2
    LEA EAX,[EBX + 0x2508]              ; 0050157a
        ;   Label: LAB_0050157a
    MOV dword ptr [EAX + 0x8],0x0       ; 00501580
    MOV EDX,dword ptr [EAX + 0x8]       ; 00501587
    MOV dword ptr [EAX + 0x4],EDX       ; 0050158a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050158d
    MOV dword ptr [EAX],EDX             ; 00501590
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501592
    LEA ESI,[EBX + 0x2b4]               ; 00501595
    MOV dword ptr [ESP],EAX             ; 0050159b
    FLD float ptr [ESP]                 ; 0050159e
        ;   Label: LAB_0050159e
    FLDZ                                ; 005015a1
    FCOMPP                              ; 005015a3
    FNSTSW AX                           ; 005015a5
    SAHF                                ; 005015a7
    JNC 0x005015ce                      ; 005015a8
        ;   XREF to: 005015ce (CONDITIONAL_JUMP)  ; LAB_005015ce
    MOV EAX,ESP                         ; 005015aa
    PUSH EAX                            ; 005015ac
    PUSH ESI                            ; 005015ad
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 005015ae
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005015b3
    PUSH EAX                            ; 005015b6
    PUSH EBX                            ; 005015b7
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 005015b8
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005015bd
    JMP 0x0050159e                      ; 005015c0
        ;   XREF to: 0050159e (UNCONDITIONAL_JUMP)  ; LAB_0050159e
    MOV dword ptr [EBX + 0x10a60],0x0   ; 005015c2
        ;   Label: LAB_005015c2
    JMP 0x0050157a                      ; 005015cc
        ;   XREF to: 0050157a (UNCONDITIONAL_JUMP)  ; LAB_0050157a
    PUSH dword ptr [EBP + 0x18]         ; 005015ce
        ;   Label: LAB_005015ce
    FLD float ptr [EBX + 0x2510]        ; 005015d1
    PUSH EBX                            ; 005015d7
    FSTP float ptr [EBX + 0x2594]       ; 005015d8
    CALL core_charactr.cpp_FUN_0042b2a0 ; 005015de
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 005015e3
    PUSH dword ptr [EBP + 0x18]         ; 005015e6
    PUSH EBX                            ; 005015e9
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 005015ea
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005015ef
    TEST EAX,EAX                        ; 005015f2
    JZ 0x005018b5                       ; 005015f4
        ;   XREF to: 005018b5 (CONDITIONAL_JUMP)  ; LAB_005018b5
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 005015fa
    CMP EAX,0x2                         ; 00501600
    JNC 0x0050189e                      ; 00501603
        ;   XREF to: 0050189e (CONDITIONAL_JUMP)  ; LAB_0050189e
    CMP EAX,0x1                         ; 00501609
    JNZ 0x005018a5                      ; 0050160c
        ;   XREF to: 005018a5 (CONDITIONAL_JUMP)  ; LAB_005018a5
    PUSH EAX                            ; 00501612
    PUSH EAX                            ; 00501613
    PUSH ESI                            ; 00501614
        ;   Label: LAB_00501614
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00501615
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00501615
    ADD ESP,0xc                         ; 0050161a
        ;   Label: LAB_0050161a
    MOV EDI,dword ptr [EBX + 0x276c]    ; 0050161d
        ;   Label: LAB_0050161d
    TEST EDI,EDI                        ; 00501623
    JZ 0x005019b1                       ; 00501625
        ;   XREF to: 005019b1 (CONDITIONAL_JUMP)  ; LAB_005019b1
    CMP dword ptr [EBX + 0x2770],0x0    ; 0050162b
    JNZ 0x00501761                      ; 00501632
        ;   XREF to: 00501761 (CONDITIONAL_JUMP)  ; LAB_00501761
    LEA EAX,[EDI + 0x20]                ; 00501638
    PUSH EAX                            ; 0050163b
    PUSH EBX                            ; 0050163c
    LEA ESI,[ESP + 0x1b2c]              ; 0050163d
    LEA EDI,[ESP + 0x1aa8]              ; 00501644
    CALL core_actor.cpp_FUN_00408de0    ; 0050164b
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x1b2c]              ; 00501650
    ADD ESP,0x8                         ; 00501657
    LEA EAX,[ESP + 0x1aa0]              ; 0050165a
    MOVSD ES:EDI,ESI                    ; 00501661
    MOVSD ES:EDI,ESI                    ; 00501662
    MOVSD ES:EDI,ESI                    ; 00501663
    PUSH EAX                            ; 00501664
    LEA ESI,[ESP + 0x1ae0]              ; 00501665
    LEA EDI,[ESP + 0x1af8]              ; 0050166c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00501673
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x1ae0]              ; 00501678
    ADD ESP,0x4                         ; 0050167f
    MOVSD ES:EDI,ESI                    ; 00501682
    MOVSD ES:EDI,ESI                    ; 00501683
    MOVSD ES:EDI,ESI                    ; 00501684
    PUSH dword ptr [ESP + 0x1af8]       ; 00501685
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0050168c
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x1b50],EAX    ; 00501691
    FLD float ptr [ESP + 0x1b50]        ; 00501698
    ADD ESP,0x4                         ; 0050169f
    FST float ptr [ESP + 0x1b48]        ; 005016a2
    FCOMP float ptr [0x005df235]        ; 005016a9 | DAT_005df235
    FNSTSW AX                           ; 005016af
    SAHF                                ; 005016b1
    JNC 0x005016c8                      ; 005016b2
        ;   XREF to: 005016c8 (CONDITIONAL_JUMP)  ; LAB_005016c8
    FLD float ptr [ESP + 0x1b48]        ; 005016b4
    FADD float ptr [0x005df239]         ; 005016bb | DAT_005df239
    FSTP float ptr [ESP + 0x1b48]       ; 005016c1
    FLD float ptr [ESP + 0x1b48]        ; 005016c8
        ;   Label: LAB_005016c8
    FCOMP float ptr [0x005df23d]        ; 005016cf | DAT_005df23d
    FNSTSW AX                           ; 005016d5
    SAHF                                ; 005016d7
    JBE 0x005016ee                      ; 005016d8
        ;   XREF to: 005016ee (CONDITIONAL_JUMP)  ; LAB_005016ee
    FLD float ptr [ESP + 0x1b48]        ; 005016da
    FADD float ptr [0x005df241]         ; 005016e1 | DAT_005df241
    FSTP float ptr [ESP + 0x1b48]       ; 005016e7
    FLD float ptr [EBP + 0x18]          ; 005016ee
        ;   Label: LAB_005016ee
    FMUL float ptr [0x005df239]         ; 005016f1 | DAT_005df239
    FLD float ptr [ESP + 0x1b48]        ; 005016f7
    FXCH                                ; 005016fe
    FST float ptr [ESP + 0x1b44]        ; 00501700
    FCHS                                ; 00501707
    FSTP float ptr [ESP + 0x1b40]       ; 00501709
    FCOMP float ptr [ESP + 0x1b40]      ; 00501710
    FNSTSW AX                           ; 00501717
    SAHF                                ; 00501719
    JNC 0x0050172a                      ; 0050171a
        ;   XREF to: 0050172a (CONDITIONAL_JUMP)  ; LAB_0050172a
    MOV EAX,dword ptr [ESP + 0x1b40]    ; 0050171c
    MOV dword ptr [ESP + 0x1b48],EAX    ; 00501723
    FLD float ptr [ESP + 0x1b48]        ; 0050172a
        ;   Label: LAB_0050172a
    FCOMP float ptr [ESP + 0x1b44]      ; 00501731
    FNSTSW AX                           ; 00501738
    SAHF                                ; 0050173a
    JBE 0x0050174b                      ; 0050173b
        ;   XREF to: 0050174b (CONDITIONAL_JUMP)  ; LAB_0050174b
    MOV EAX,dword ptr [ESP + 0x1b44]    ; 0050173d
    MOV dword ptr [ESP + 0x1b48],EAX    ; 00501744
    FLD float ptr [EBX + 0x34]          ; 0050174b
        ;   Label: LAB_0050174b
    FADD float ptr [ESP + 0x1b48]       ; 0050174e
    PUSH EBX                            ; 00501755
    FSTP float ptr [EBX + 0x34]         ; 00501756
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00501759
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050175e
    MOV EAX,dword ptr [EBX + 0x276c]    ; 00501761
        ;   Label: LAB_00501761
    MOV dword ptr [ESP + 0x1b30],EAX    ; 00501767
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0050176e
    PUSH 0x0                            ; 00501774
    MOV dword ptr [ESP + 0x1b50],EAX    ; 00501776
    LEA EAX,[EBX + 0x2b4]               ; 0050177d
    PUSH EAX                            ; 00501783
    LEA ESI,[ESP + 0x1b08]              ; 00501784
    MOV dword ptr [ESP + 0x1b40],EAX    ; 0050178b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 00501792
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00501797
    LEA EAX,[ESP + 0x1b0c]              ; 0050179a
    PUSH EAX                            ; 005017a1
    LEA EDI,[ESP + 0x1b10]              ; 005017a2
    LEA ESI,[ESP + 0x1b04]              ; 005017a9
    PUSH EBX                            ; 005017b0
    MOV ECX,dword ptr [ESP + 0x1b38]    ; 005017b1
    MOV EAX,dword ptr [ESP + 0x1b54]    ; 005017b8
    PUSH ECX                            ; 005017bf
    MOVSD ES:EDI,ESI                    ; 005017c0
    MOVSD ES:EDI,ESI                    ; 005017c1
    MOVSD ES:EDI,ESI                    ; 005017c2
    CALL dword ptr [EAX + 0x118]        ; 005017c3
    ADD ESP,0xc                         ; 005017c9
    TEST EAX,EAX                        ; 005017cc
    JZ 0x00501989                       ; 005017ce
        ;   XREF to: 00501989 (CONDITIONAL_JUMP)  ; LAB_00501989
    CMP dword ptr [EBX + 0x276c],0x0    ; 005017d4
    JNZ 0x00501994                      ; 005017db
        ;   XREF to: 00501994 (CONDITIONAL_JUMP)  ; LAB_00501994
    PUSH 0x1                            ; 005017e1
        ;   Label: LAB_005017e1
    PUSH 0x0                            ; 005017e3
    LEA EAX,[EBX + 0x2b4]               ; 005017e5
    PUSH EAX                            ; 005017eb
        ;   Label: LAB_005017eb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005017ec
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005017f1
    PUSH EBX                            ; 005017f4
        ;   Label: LAB_005017f4
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 005017f5
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005017fa
    LEA ESI,[EBX + 0x2b4]               ; 005017fd
    PUSH ESI                            ; 00501803
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00501804
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00501809
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0050180c
    PUSH EBX                            ; 00501812
    CALL dword ptr [EAX + 0x114]        ; 00501813
    ADD ESP,0x4                         ; 00501819
    PUSH dword ptr [EBP + 0x18]         ; 0050181c
    PUSH EBX                            ; 0050181f
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 00501820
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x278f8]   ; 00501825
    ADD ESP,0x8                         ; 0050182b
    TEST EDX,EDX                        ; 0050182e
    JNZ 0x00501adc                      ; 00501830
        ;   XREF to: 00501adc (CONDITIONAL_JUMP)  ; LAB_00501adc
    CMP dword ptr [EBX + 0x278f4],0x0   ; 00501836
    JZ 0x00501c28                       ; 0050183d
        ;   XREF to: 00501c28 (CONDITIONAL_JUMP)  ; LAB_00501c28
    LEA EAX,[EBX + 0x27900]             ; 00501843
    PUSH EAX                            ; 00501849
    MOV EDI,dword ptr [0x006141f0]      ; 0050184a | DAT_006141f0
    PUSH EDI                            ; 00501850
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00501851
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00501856
    TEST EAX,EAX                        ; 00501859
    JZ 0x0050154b                       ; 0050185b
        ;   XREF to: 0050154b (CONDITIONAL_JUMP)  ; LAB_0050154b
    PUSH EBX                            ; 00501861
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_00502280 ; 00501862
        ;   XREF to: 00502280 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_00502280(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00501867
    MOV ESP,EBP                         ; 0050186a
    POP EBP                             ; 0050186c
    POP EDI                             ; 0050186d
    POP ESI                             ; 0050186e
    POP EBX                             ; 0050186f
    RET                                 ; 00501870
    PUSH 0x1                            ; 00501871
        ;   Label: LAB_00501871
    PUSH 0x0                            ; 00501873
    PUSH ESI                            ; 00501875
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00501876
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0050187b
    PUSH EBX                            ; 0050187e
    PUSH 0x5df1d6                       ; 0050187f | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 00501884 | g_CConsolePtr
    PUSH ESI                            ; 0050188a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0050188b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x0050161a                      ; 00501890
        ;   XREF to: 0050161a (UNCONDITIONAL_JUMP)  ; LAB_0050161a
    PUSH 0x1                            ; 00501895
        ;   Label: LAB_00501895
    PUSH 0x1                            ; 00501897
    JMP 0x00501614                      ; 00501899
        ;   XREF to: 00501614 (UNCONDITIONAL_JUMP)  ; LAB_00501614
    JBE 0x00501895                      ; 0050189e
        ;   XREF to: 00501895 (CONDITIONAL_JUMP)  ; LAB_00501895
        ;   Label: LAB_0050189e
    CMP EAX,0x3                         ; 005018a0
    JZ 0x00501871                       ; 005018a3
        ;   XREF to: 00501871 (CONDITIONAL_JUMP)  ; LAB_00501871
    PUSH 0x1                            ; 005018a5
        ;   Label: LAB_005018a5
    PUSH 0x0                            ; 005018a7
    LEA EAX,[EBX + 0x2b4]               ; 005018a9
    PUSH EAX                            ; 005018af
    JMP 0x00501615                      ; 005018b0
        ;   XREF to: 00501615 (UNCONDITIONAL_JUMP)  ; LAB_00501615
    CMP dword ptr [EBX + 0x10a64],0x2   ; 005018b5
        ;   Label: LAB_005018b5
    JNZ 0x005018ca                      ; 005018bc
        ;   XREF to: 005018ca (CONDITIONAL_JUMP)  ; LAB_005018ca
    PUSH dword ptr [EBP + 0x18]         ; 005018be
    PUSH EBX                            ; 005018c1
    CALL core_moloch.cpp_CMoloch_processAI_FUN_00501c60 ; 005018c2
        ;   XREF to: 00501c60 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_processAI_FUN_00501c60(CMoloch * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005018c7
    LEA EAX,[EBX + 0x2b4]               ; 005018ca
        ;   Label: LAB_005018ca
    PUSH EAX                            ; 005018d0
    CALL core_motion.cpp_FUN_005035c0   ; 005018d1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005018d6
    ADD ESP,0x4                         ; 005018d9
    CMP EAX,0x1                         ; 005018dc
    JNC 0x00501975                      ; 005018df
        ;   XREF to: 00501975 (CONDITIONAL_JUMP)  ; LAB_00501975
    TEST EAX,EAX                        ; 005018e5
    JNZ 0x0050161d                      ; 005018e7
        ;   XREF to: 0050161d (CONDITIONAL_JUMP)  ; LAB_0050161d
    CMP dword ptr [EBX + 0x2570],0x0    ; 005018ed
        ;   Label: LAB_005018ed
    JZ 0x0050161d                       ; 005018f4
        ;   XREF to: 0050161d (CONDITIONAL_JUMP)  ; LAB_0050161d
    MOV EDI,dword ptr [EBX + 0x10a68]   ; 005018fa
    XOR ESI,ESI                         ; 00501900
    TEST EDI,EDI                        ; 00501902
    JZ 0x0050190b                       ; 00501904
        ;   XREF to: 0050190b (CONDITIONAL_JUMP)  ; LAB_0050190b
    MOV ESI,0x1                         ; 00501906
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 0050190b
        ;   Label: LAB_0050190b
    JZ 0x00501919                       ; 00501912
        ;   XREF to: 00501919 (CONDITIONAL_JUMP)  ; LAB_00501919
    MOV ESI,0x2                         ; 00501914
    CMP dword ptr [EBX + 0x10a80],0x0   ; 00501919
        ;   Label: LAB_00501919
    JZ 0x00501935                       ; 00501920
        ;   XREF to: 00501935 (CONDITIONAL_JUMP)  ; LAB_00501935
    CMP dword ptr [EBX + 0x278f8],0x0   ; 00501922
    JZ 0x0050196a                       ; 00501929
        ;   XREF to: 0050196a (CONDITIONAL_JUMP)  ; LAB_0050196a
    MOV dword ptr [EBX + 0x10a80],0x0   ; 0050192b
        ;   Label: LAB_0050192b
    FLD float ptr [EBX + 0x10a90]       ; 00501935
        ;   Label: LAB_00501935
    LEA EDI,[EBX + 0x2b4]               ; 0050193b
    FMUL float ptr [EBX + 0x2598]       ; 00501941
    PUSH EDI                            ; 00501947
    FSTP float ptr [EBX + 0x2578]       ; 00501948
    CALL core_motion.cpp_FUN_005035c0   ; 0050194e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00501953
    ADD ESP,0x4                         ; 00501956
    CMP ESI,EAX                         ; 00501959
    JZ 0x0050161d                       ; 0050195b
        ;   XREF to: 0050161d (CONDITIONAL_JUMP)  ; LAB_0050161d
    PUSH 0x1                            ; 00501961
    PUSH ESI                            ; 00501963
    PUSH EDI                            ; 00501964
    JMP 0x00501615                      ; 00501965
        ;   XREF to: 00501615 (UNCONDITIONAL_JUMP)  ; LAB_00501615
    PUSH EBX                            ; 0050196a
        ;   Label: LAB_0050196a
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_00502280 ; 0050196b
        ;   XREF to: 00502280 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_00502280(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00501970
    JMP 0x0050192b                      ; 00501973
        ;   XREF to: 0050192b (UNCONDITIONAL_JUMP)  ; LAB_0050192b
    JBE 0x005018ed                      ; 00501975
        ;   XREF to: 005018ed (CONDITIONAL_JUMP)  ; LAB_005018ed
        ;   Label: LAB_00501975
    CMP EAX,0x2                         ; 0050197b
    JZ 0x005018ed                       ; 0050197e
        ;   XREF to: 005018ed (CONDITIONAL_JUMP)  ; LAB_005018ed
    JMP 0x0050161d                      ; 00501984
        ;   XREF to: 0050161d (UNCONDITIONAL_JUMP)  ; LAB_0050161d
    MOV dword ptr [EBX + 0x276c],EAX    ; 00501989
        ;   Label: LAB_00501989
    JMP 0x005017e1                      ; 0050198f
        ;   XREF to: 005017e1 (UNCONDITIONAL_JUMP)  ; LAB_005017e1
    CMP dword ptr [EBX + 0x10a74],0x0   ; 00501994
        ;   Label: LAB_00501994
    JZ 0x005017f4                       ; 0050199b
        ;   XREF to: 005017f4 (CONDITIONAL_JUMP)  ; LAB_005017f4
    PUSH 0x1                            ; 005019a1
    PUSH 0x0                            ; 005019a3
    MOV EAX,dword ptr [ESP + 0x1b40]    ; 005019a5
    JMP 0x005017eb                      ; 005019ac
        ;   XREF to: 005017eb (UNCONDITIONAL_JUMP)  ; LAB_005017eb
    PUSH dword ptr [EBP + 0x18]         ; 005019b1
        ;   Label: LAB_005019b1
    PUSH EBX                            ; 005019b4
    CALL core_charactr.cpp_FUN_00423a10 ; 005019b5
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA EAX,[EBX + 0x2588]              ; 005019ba
    ADD ESP,0x8                         ; 005019c0
    FLD float ptr [EAX]                 ; 005019c3
    FMUL float ptr [EBP + 0x18]         ; 005019c5
    FLD float ptr [EAX + 0x4]           ; 005019c8
    FMUL float ptr [EBP + 0x18]         ; 005019cb
    FLD float ptr [EAX + 0x8]           ; 005019ce
    FMUL float ptr [EBP + 0x18]         ; 005019d1
    LEA EDI,[ESP + 0x1ad0]              ; 005019d4
    LEA ESI,[ESP + 0x1aac]              ; 005019db
    LEA EDX,[EBX + 0x2508]              ; 005019e2
    FXCH ST2                            ; 005019e8
    FSTP float ptr [ESP + 0x1aac]       ; 005019ea
    FSTP float ptr [ESP + 0x1ab0]       ; 005019f1
    FSTP float ptr [ESP + 0x1ab4]       ; 005019f8
    MOVSD ES:EDI,ESI                    ; 005019ff
    MOVSD ES:EDI,ESI                    ; 00501a00
    MOVSD ES:EDI,ESI                    ; 00501a01
    LEA EAX,[EBX + 0x257c]              ; 00501a02
    FLD float ptr [EDX]                 ; 00501a08
    FLD float ptr [EDX + 0x4]           ; 00501a0a
    FLD float ptr [EDX + 0x8]           ; 00501a0d
    LEA EDI,[ESP + 0x1ae8]              ; 00501a10
    LEA ESI,[ESP + 0x1ac4]              ; 00501a17
    FXCH ST2                            ; 00501a1e
    FADD float ptr [EAX]                ; 00501a20
    FXCH                                ; 00501a22
    FADD float ptr [EAX + 0x4]          ; 00501a24
    FXCH ST2                            ; 00501a27
    FADD float ptr [EAX + 0x8]          ; 00501a29
    FXCH                                ; 00501a2c
    FSTP float ptr [ESP + 0x1ac4]       ; 00501a2e
    FXCH                                ; 00501a35
    FSTP float ptr [ESP + 0x1ac8]       ; 00501a37
    FSTP float ptr [ESP + 0x1acc]       ; 00501a3e
    MOVSD ES:EDI,ESI                    ; 00501a45
    MOVSD ES:EDI,ESI                    ; 00501a46
    MOVSD ES:EDI,ESI                    ; 00501a47
    FLD float ptr [ESP + 0x1ae8]        ; 00501a48
    FLD float ptr [ESP + 0x1aec]        ; 00501a4f
    FLD float ptr [ESP + 0x1af0]        ; 00501a56
    LEA EDI,[ESP + 0x1ab8]              ; 00501a5d
    LEA ESI,[ESP + 0x1b18]              ; 00501a64
    FXCH ST2                            ; 00501a6b
    FADD float ptr [ESP + 0x1ad0]       ; 00501a6d
    FXCH                                ; 00501a74
    FADD float ptr [ESP + 0x1ad4]       ; 00501a76
    FXCH ST2                            ; 00501a7d
    FADD float ptr [ESP + 0x1ad8]       ; 00501a7f
    FXCH                                ; 00501a86
    FSTP float ptr [ESP + 0x1b18]       ; 00501a88
    FXCH                                ; 00501a8f
    FSTP float ptr [ESP + 0x1b1c]       ; 00501a91
    FSTP float ptr [ESP + 0x1b20]       ; 00501a98
    MOVSD ES:EDI,ESI                    ; 00501a9f
    MOVSD ES:EDI,ESI                    ; 00501aa0
    MOVSD ES:EDI,ESI                    ; 00501aa1
    MOV dword ptr [EDX + 0x8],0x0       ; 00501aa2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00501aa9
    MOV dword ptr [EDX + 0x4],ECX       ; 00501aac
    MOV ECX,dword ptr [EDX + 0x4]       ; 00501aaf
    MOV dword ptr [EDX],ECX             ; 00501ab2
    MOV dword ptr [EAX + 0x8],0x0       ; 00501ab4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00501abb
    MOV dword ptr [EAX + 0x4],EDX       ; 00501abe
    MOV EDX,dword ptr [EAX + 0x4]       ; 00501ac1
    MOV dword ptr [EAX],EDX             ; 00501ac4
    LEA EAX,[ESP + 0x1ab8]              ; 00501ac6
    PUSH EAX                            ; 00501acd
    PUSH EBX                            ; 00501ace
    CALL core_charactr.cpp_FUN_00423a60 ; 00501acf
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00501ad4
    JMP 0x005017f4                      ; 00501ad7
        ;   XREF to: 005017f4 (UNCONDITIONAL_JUMP)  ; LAB_005017f4
    PUSH ESI                            ; 00501adc
        ;   Label: LAB_00501adc
    CALL core_motion.cpp_FUN_005035c0   ; 00501add
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00501ae2
    SUB ESP,0x4                         ; 00501ae5
    MOV EDX,dword ptr [ESI + 0x8]       ; 00501ae8
    MOV dword ptr [ESP],EDX             ; 00501aeb
    PUSH EAX                            ; 00501aee
    LEA ESI,[EBX + 0x25640]             ; 00501aef
    PUSH ESI                            ; 00501af5
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 00501af6
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00501afb
    PUSH ESI                            ; 00501afe
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 00501aff
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00501b04
    FLD float ptr [EBX + 0x278fc]       ; 00501b07
    FADD float ptr [EBP + 0x18]         ; 00501b0d
    FST float ptr [EBX + 0x278fc]       ; 00501b10
    FCOMP float ptr [0x005fa3d8]        ; 00501b16 | DAT_005fa3d8
    FNSTSW AX                           ; 00501b1c
    SAHF                                ; 00501b1e
    JBE 0x0050154b                      ; 00501b1f
        ;   XREF to: 0050154b (CONDITIONAL_JUMP)  ; LAB_0050154b
    CMP dword ptr [EBX + 0x278f4],0x0   ; 00501b25
    JNZ 0x00501c08                      ; 00501b2c
        ;   XREF to: 00501c08 (CONDITIONAL_JUMP)  ; LAB_00501c08
    MOV EDX,0x5df20d                    ; 00501b32 | = "moloch_d.dfm"
    MOV EDI,0x5df200                    ; 00501b37 | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x278f4],0x1   ; 00501b3c
    MOV dword ptr [ESP + 0x1b3c],EDX    ; 00501b46 | = "moloch_d.dfm"
    LEA EAX,[ESP + 0x4]                 ; 00501b4d
        ;   Label: LAB_00501b4d
    PUSH EAX                            ; 00501b51
    LEA ESI,[EBX + 0x25640]             ; 00501b52
    MOV dword ptr [EBX + 0x278f8],0x0   ; 00501b58
    PUSH ESI                            ; 00501b62
    MOV dword ptr [EBX + 0x278fc],0x0   ; 00501b63
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620 ; 00501b6d
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00501b72
    PUSH ESI                            ; 00501b75
    CALL core_motion.cpp_FUN_005035c0   ; 00501b76
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV dword ptr [ESP + 0x1b50],EAX    ; 00501b7b
    ADD ESP,0x4                         ; 00501b82
    PUSH EDI                            ; 00501b85 | = "moloch_h.dfm"
    LEA EDI,[EBX + 0x2b4]               ; 00501b86
    MOV EAX,dword ptr [ESI + 0x8]       ; 00501b8c
    PUSH EDI                            ; 00501b8f
    MOV dword ptr [ESP + 0x1b3c],EAX    ; 00501b90
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00501b97
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00501b9c
    PUSH EDI                            ; 00501b9f
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00501ba0
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00501ba5
    MOV EAX,dword ptr [ESP + 0x1b4c]    ; 00501ba8
    PUSH dword ptr [ESP + 0x1b34]       ; 00501baf
    PUSH EAX                            ; 00501bb6
    PUSH EDI                            ; 00501bb7
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 00501bb8
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00501bbd
    MOV EDX,dword ptr [ESP + 0x1b3c]    ; 00501bc0
    PUSH EDX                            ; 00501bc7 | = "moloch_d.dfm"
    PUSH ESI                            ; 00501bc8
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00501bc9
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00501bce
    PUSH ESI                            ; 00501bd1
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00501bd2
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00501bd7
    PUSH EDI                            ; 00501bda
    PUSH 0x0                            ; 00501bdb
    ADD EBX,0x279c8                     ; 00501bdd
    PUSH EBX                            ; 00501be3
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 ; 00501be4
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00501be9
    PUSH ESI                            ; 00501bec
    PUSH 0x1                            ; 00501bed
    PUSH EBX                            ; 00501bef
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 ; 00501bf0
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00501bf5
    PUSH EBX                            ; 00501bf8
    CALL core_morph.cpp_CMorph_getReady_FUN_005b71d0 ; 00501bf9
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_005b71d0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00501bfe
    MOV ESP,EBP                         ; 00501c01
    POP EBP                             ; 00501c03
    POP EDI                             ; 00501c04
    POP ESI                             ; 00501c05
    POP EBX                             ; 00501c06
    RET                                 ; 00501c07
    MOV EDI,0x5df21a                    ; 00501c08 | = "moloch_d.dfm"
        ;   Label: LAB_00501c08
    MOV ECX,0x5df227                    ; 00501c0d | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x278f4],0x0   ; 00501c12
    MOV dword ptr [ESP + 0x1b3c],ECX    ; 00501c1c | = "moloch_h.dfm"
    JMP 0x00501b4d                      ; 00501c23
        ;   XREF to: 00501b4d (UNCONDITIONAL_JUMP)  ; LAB_00501b4d
    LEA EAX,[EBX + 0x27964]             ; 00501c28
        ;   Label: LAB_00501c28
    PUSH EAX                            ; 00501c2e
    MOV ESI,dword ptr [0x006141f0]      ; 00501c2f | DAT_006141f0
    PUSH ESI                            ; 00501c35
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00501c36
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00501c3b
    TEST EAX,EAX                        ; 00501c3e
    JZ 0x0050154b                       ; 00501c40
        ;   XREF to: 0050154b (CONDITIONAL_JUMP)  ; LAB_0050154b
    PUSH EBX                            ; 00501c46
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_00502280 ; 00501c47
        ;   XREF to: 00502280 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_00502280(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00501c4c
    MOV ESP,EBP                         ; 00501c4f
    POP EBP                             ; 00501c51
    POP EDI                             ; 00501c52
    POP ESI                             ; 00501c53
    POP EBX                             ; 00501c54
    RET                                 ; 00501c55

