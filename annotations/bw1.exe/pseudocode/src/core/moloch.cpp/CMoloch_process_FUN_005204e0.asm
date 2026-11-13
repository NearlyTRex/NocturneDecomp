; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_process_FUN_005204e0(CMoloch *this_ptr,float delta_time)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005ea223
;   TerminatedCString s_moloch_h_dfm_005ea24d
;   TerminatedCString s_moloch_d_dfm_005ea25a
;   TerminatedCString s_moloch_d_dfm_005ea267
;   TerminatedCString s_moloch_h_dfm_005ea274
;   undefined4 DAT_005ea282
;   undefined4 DAT_005ea286
;   undefined4 DAT_005ea28a
;   undefined4 DAT_005ea28e
;   undefined4 DAT_00603ef8
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_moloch.cpp_CMoloch_processAI_FUN_00520c10
;   core_moloch.cpp_CMoloch_startMorph_FUN_00521230
;   core_morph.cpp_CMorph_getReady_FUN_00523310
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005204e0
        ;   Label: core_moloch.cpp_CMoloch_process_FUN_005204e0
    PUSH ESI                            ; 005204e1
    PUSH EDI                            ; 005204e2
    PUSH EBP                            ; 005204e3
    MOV EBP,ESP                         ; 005204e4
    SUB ESP,0x1b50                      ; 005204e6
    AND ESP,0xfffffff8                  ; 005204ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 005204ef
    CMP dword ptr [EBX + 0x1ffa8],0x4   ; 005204f2
    JNZ 0x00520502                      ; 005204f9
        ;   XREF to: 00520502 (CONDITIONAL_JUMP)  ; LAB_00520502
    MOV ESP,EBP                         ; 005204fb
        ;   Label: LAB_005204fb
    POP EBP                             ; 005204fd
    POP EDI                             ; 005204fe
    POP ESI                             ; 005204ff
    POP EBX                             ; 00520500
    RET                                 ; 00520501
    PUSH dword ptr [EBP + 0x18]         ; 00520502
        ;   Label: LAB_00520502
    PUSH EBX                            ; 00520505
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00520506
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052050b
    TEST EAX,EAX                        ; 0052050e
    JZ 0x005204fb                       ; 00520510
        ;   XREF to: 005204fb (CONDITIONAL_JUMP)  ; LAB_005204fb
    FLD float ptr [EBX + 0xc1d0]        ; 00520512
    FSUB float ptr [EBP + 0x18]         ; 00520518
    FST float ptr [EBX + 0xc1d0]        ; 0052051b
    FLDZ                                ; 00520521
    FCOMPP                              ; 00520523
    FNSTSW AX                           ; 00520525
    SAHF                                ; 00520527
    JA 0x00520572                       ; 00520528
        ;   XREF to: 00520572 (CONDITIONAL_JUMP)  ; LAB_00520572
    LEA EAX,[EBX + 0x249c]              ; 0052052a
        ;   Label: LAB_0052052a
    MOV dword ptr [EAX + 0x8],0x0       ; 00520530
    MOV EDX,dword ptr [EAX + 0x8]       ; 00520537
    MOV dword ptr [EAX + 0x4],EDX       ; 0052053a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052053d
    MOV dword ptr [EAX],EDX             ; 00520540
    MOV EAX,dword ptr [EBP + 0x18]      ; 00520542
    LEA ESI,[EBX + 0x158]               ; 00520545
    MOV dword ptr [ESP],EAX             ; 0052054b
    FLD float ptr [ESP]                 ; 0052054e
        ;   Label: LAB_0052054e
    FLDZ                                ; 00520551
    FCOMPP                              ; 00520553
    FNSTSW AX                           ; 00520555
    SAHF                                ; 00520557
    JNC 0x0052057e                      ; 00520558
        ;   XREF to: 0052057e (CONDITIONAL_JUMP)  ; LAB_0052057e
    MOV EAX,ESP                         ; 0052055a
    PUSH EAX                            ; 0052055c
    PUSH ESI                            ; 0052055d
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0052055e
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00520563
    PUSH EAX                            ; 00520566
    PUSH EBX                            ; 00520567
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00520568
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0052056d
    JMP 0x0052054e                      ; 00520570
        ;   XREF to: 0052054e (UNCONDITIONAL_JUMP)  ; LAB_0052054e
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 00520572
        ;   Label: LAB_00520572
    JMP 0x0052052a                      ; 0052057c
        ;   XREF to: 0052052a (UNCONDITIONAL_JUMP)  ; LAB_0052052a
    PUSH dword ptr [EBP + 0x18]         ; 0052057e
        ;   Label: LAB_0052057e
    FLD float ptr [EBX + 0x24a4]        ; 00520581
    PUSH EBX                            ; 00520587
    FSTP float ptr [EBX + 0x2524]       ; 00520588
    CALL core_charactr.cpp_FUN_00435320 ; 0052058e
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00520593
    PUSH dword ptr [EBP + 0x18]         ; 00520596
    PUSH EBX                            ; 00520599
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0052059a
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052059f
    TEST EAX,EAX                        ; 005205a2
    JZ 0x00520865                       ; 005205a4
        ;   XREF to: 00520865 (CONDITIONAL_JUMP)  ; LAB_00520865
    MOV EAX,dword ptr [EBX + 0x273c]    ; 005205aa
    CMP EAX,0x2                         ; 005205b0
    JNC 0x0052084e                      ; 005205b3
        ;   XREF to: 0052084e (CONDITIONAL_JUMP)  ; LAB_0052084e
    CMP EAX,0x1                         ; 005205b9
    JNZ 0x00520855                      ; 005205bc
        ;   XREF to: 00520855 (CONDITIONAL_JUMP)  ; LAB_00520855
    PUSH EAX                            ; 005205c2
    PUSH EAX                            ; 005205c3
    PUSH ESI                            ; 005205c4
        ;   Label: LAB_005205c4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005205c5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005205c5
    ADD ESP,0xc                         ; 005205ca
        ;   Label: LAB_005205ca
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 005205cd
        ;   Label: LAB_005205cd
    TEST EDI,EDI                        ; 005205d3
    JZ 0x00520961                       ; 005205d5
        ;   XREF to: 00520961 (CONDITIONAL_JUMP)  ; LAB_00520961
    CMP dword ptr [EBX + 0x2700],0x0    ; 005205db
    JNZ 0x00520711                      ; 005205e2
        ;   XREF to: 00520711 (CONDITIONAL_JUMP)  ; LAB_00520711
    LEA EAX,[EDI + 0x20]                ; 005205e8
    PUSH EAX                            ; 005205eb
    PUSH EBX                            ; 005205ec
    LEA ESI,[ESP + 0x1b2c]              ; 005205ed
    LEA EDI,[ESP + 0x1aa8]              ; 005205f4
    CALL core_actor.cpp_FUN_00408bb0    ; 005205fb
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x1b2c]              ; 00520600
    ADD ESP,0x8                         ; 00520607
    LEA EAX,[ESP + 0x1aa0]              ; 0052060a
    MOVSD ES:EDI,ESI                    ; 00520611
    MOVSD ES:EDI,ESI                    ; 00520612
    MOVSD ES:EDI,ESI                    ; 00520613
    PUSH EAX                            ; 00520614
    LEA ESI,[ESP + 0x1ae0]              ; 00520615
    LEA EDI,[ESP + 0x1af8]              ; 0052061c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00520623
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x1ae0]              ; 00520628
    ADD ESP,0x4                         ; 0052062f
    MOVSD ES:EDI,ESI                    ; 00520632
    MOVSD ES:EDI,ESI                    ; 00520633
    MOVSD ES:EDI,ESI                    ; 00520634
    PUSH dword ptr [ESP + 0x1af8]       ; 00520635
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0052063c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x1b50],EAX    ; 00520641
    FLD float ptr [ESP + 0x1b50]        ; 00520648
    ADD ESP,0x4                         ; 0052064f
    FST float ptr [ESP + 0x1b48]        ; 00520652
    FCOMP float ptr [0x005ea282]        ; 00520659 | DAT_005ea282
    FNSTSW AX                           ; 0052065f
    SAHF                                ; 00520661
    JNC 0x00520678                      ; 00520662
        ;   XREF to: 00520678 (CONDITIONAL_JUMP)  ; LAB_00520678
    FLD float ptr [ESP + 0x1b48]        ; 00520664
    FADD float ptr [0x005ea286]         ; 0052066b | DAT_005ea286
    FSTP float ptr [ESP + 0x1b48]       ; 00520671
    FLD float ptr [ESP + 0x1b48]        ; 00520678
        ;   Label: LAB_00520678
    FCOMP float ptr [0x005ea28a]        ; 0052067f | DAT_005ea28a
    FNSTSW AX                           ; 00520685
    SAHF                                ; 00520687
    JBE 0x0052069e                      ; 00520688
        ;   XREF to: 0052069e (CONDITIONAL_JUMP)  ; LAB_0052069e
    FLD float ptr [ESP + 0x1b48]        ; 0052068a
    FADD float ptr [0x005ea28e]         ; 00520691 | DAT_005ea28e
    FSTP float ptr [ESP + 0x1b48]       ; 00520697
    FLD float ptr [EBP + 0x18]          ; 0052069e
        ;   Label: LAB_0052069e
    FMUL float ptr [0x005ea286]         ; 005206a1 | DAT_005ea286
    FLD float ptr [ESP + 0x1b48]        ; 005206a7
    FXCH                                ; 005206ae
    FST float ptr [ESP + 0x1b44]        ; 005206b0
    FCHS                                ; 005206b7
    FSTP float ptr [ESP + 0x1b40]       ; 005206b9
    FCOMP float ptr [ESP + 0x1b40]      ; 005206c0
    FNSTSW AX                           ; 005206c7
    SAHF                                ; 005206c9
    JNC 0x005206da                      ; 005206ca
        ;   XREF to: 005206da (CONDITIONAL_JUMP)  ; LAB_005206da
    MOV EAX,dword ptr [ESP + 0x1b40]    ; 005206cc
    MOV dword ptr [ESP + 0x1b48],EAX    ; 005206d3
    FLD float ptr [ESP + 0x1b48]        ; 005206da
        ;   Label: LAB_005206da
    FCOMP float ptr [ESP + 0x1b44]      ; 005206e1
    FNSTSW AX                           ; 005206e8
    SAHF                                ; 005206ea
    JBE 0x005206fb                      ; 005206eb
        ;   XREF to: 005206fb (CONDITIONAL_JUMP)  ; LAB_005206fb
    MOV EAX,dword ptr [ESP + 0x1b44]    ; 005206ed
    MOV dword ptr [ESP + 0x1b48],EAX    ; 005206f4
    FLD float ptr [EBX + 0x34]          ; 005206fb
        ;   Label: LAB_005206fb
    FADD float ptr [ESP + 0x1b48]       ; 005206fe
    PUSH EBX                            ; 00520705
    FSTP float ptr [EBX + 0x34]         ; 00520706
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00520709
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052070e
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 00520711
        ;   Label: LAB_00520711
    MOV dword ptr [ESP + 0x1b30],EAX    ; 00520717
    MOV EAX,dword ptr [EAX + 0x154]     ; 0052071e
    PUSH 0x0                            ; 00520724
    MOV dword ptr [ESP + 0x1b50],EAX    ; 00520726
    LEA EAX,[EBX + 0x158]               ; 0052072d
    PUSH EAX                            ; 00520733
    LEA ESI,[ESP + 0x1b08]              ; 00520734
    MOV dword ptr [ESP + 0x1b40],EAX    ; 0052073b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00520742
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00520747
    LEA EAX,[ESP + 0x1b0c]              ; 0052074a
    PUSH EAX                            ; 00520751
    LEA EDI,[ESP + 0x1b10]              ; 00520752
    LEA ESI,[ESP + 0x1b04]              ; 00520759
    PUSH EBX                            ; 00520760
    MOV ECX,dword ptr [ESP + 0x1b38]    ; 00520761
    MOV EAX,dword ptr [ESP + 0x1b54]    ; 00520768
    PUSH ECX                            ; 0052076f
    MOVSD ES:EDI,ESI                    ; 00520770
    MOVSD ES:EDI,ESI                    ; 00520771
    MOVSD ES:EDI,ESI                    ; 00520772
    CALL dword ptr [EAX + 0x110]        ; 00520773
    ADD ESP,0xc                         ; 00520779
    TEST EAX,EAX                        ; 0052077c
    JZ 0x00520939                       ; 0052077e
        ;   XREF to: 00520939 (CONDITIONAL_JUMP)  ; LAB_00520939
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00520784
    JNZ 0x00520944                      ; 0052078b
        ;   XREF to: 00520944 (CONDITIONAL_JUMP)  ; LAB_00520944
    PUSH 0x1                            ; 00520791
        ;   Label: LAB_00520791
    PUSH 0x0                            ; 00520793
    LEA EAX,[EBX + 0x158]               ; 00520795
    PUSH EAX                            ; 0052079b
        ;   Label: LAB_0052079b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0052079c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005207a1
    PUSH EBX                            ; 005207a4
        ;   Label: LAB_005207a4
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 005207a5
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005207aa
    LEA ESI,[EBX + 0x158]               ; 005207ad
    PUSH ESI                            ; 005207b3
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005207b4
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005207b9
    MOV EAX,dword ptr [EBX + 0x154]     ; 005207bc
    PUSH EBX                            ; 005207c2
    CALL dword ptr [EAX + 0x10c]        ; 005207c3
    ADD ESP,0x4                         ; 005207c9
    PUSH dword ptr [EBP + 0x18]         ; 005207cc
    PUSH EBX                            ; 005207cf
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 005207d0
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x22354]   ; 005207d5
    ADD ESP,0x8                         ; 005207db
    TEST EDX,EDX                        ; 005207de
    JNZ 0x00520a8c                      ; 005207e0
        ;   XREF to: 00520a8c (CONDITIONAL_JUMP)  ; LAB_00520a8c
    CMP dword ptr [EBX + 0x22350],0x0   ; 005207e6
    JZ 0x00520bd8                       ; 005207ed
        ;   XREF to: 00520bd8 (CONDITIONAL_JUMP)  ; LAB_00520bd8
    LEA EAX,[EBX + 0x2235c]             ; 005207f3
    PUSH EAX                            ; 005207f9
    MOV EDI,dword ptr [0x0061b4d0]      ; 005207fa | DAT_0061b4d0
    PUSH EDI                            ; 00520800
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00520801
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00520806
    TEST EAX,EAX                        ; 00520809
    JZ 0x005204fb                       ; 0052080b
        ;   XREF to: 005204fb (CONDITIONAL_JUMP)  ; LAB_005204fb
    PUSH EBX                            ; 00520811
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_00521230 ; 00520812
        ;   XREF to: 00521230 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_00521230(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00520817
    MOV ESP,EBP                         ; 0052081a
    POP EBP                             ; 0052081c
    POP EDI                             ; 0052081d
    POP ESI                             ; 0052081e
    POP EBX                             ; 0052081f
    RET                                 ; 00520820
    PUSH 0x1                            ; 00520821
        ;   Label: LAB_00520821
    PUSH 0x0                            ; 00520823
    PUSH ESI                            ; 00520825
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00520826
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052082b
    PUSH EBX                            ; 0052082e
    PUSH 0x5ea223                       ; 0052082f | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 00520834 | g_CConsolePtr
    PUSH ESI                            ; 0052083a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0052083b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x005205ca                      ; 00520840
        ;   XREF to: 005205ca (UNCONDITIONAL_JUMP)  ; LAB_005205ca
    PUSH 0x1                            ; 00520845
        ;   Label: LAB_00520845
    PUSH 0x1                            ; 00520847
    JMP 0x005205c4                      ; 00520849
        ;   XREF to: 005205c4 (UNCONDITIONAL_JUMP)  ; LAB_005205c4
    JBE 0x00520845                      ; 0052084e
        ;   XREF to: 00520845 (CONDITIONAL_JUMP)  ; LAB_00520845
        ;   Label: LAB_0052084e
    CMP EAX,0x3                         ; 00520850
    JZ 0x00520821                       ; 00520853
        ;   XREF to: 00520821 (CONDITIONAL_JUMP)  ; LAB_00520821
    PUSH 0x1                            ; 00520855
        ;   Label: LAB_00520855
    PUSH 0x0                            ; 00520857
    LEA EAX,[EBX + 0x158]               ; 00520859
    PUSH EAX                            ; 0052085f
    JMP 0x005205c5                      ; 00520860
        ;   XREF to: 005205c5 (UNCONDITIONAL_JUMP)  ; LAB_005205c5
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 00520865
        ;   Label: LAB_00520865
    JNZ 0x0052087a                      ; 0052086c
        ;   XREF to: 0052087a (CONDITIONAL_JUMP)  ; LAB_0052087a
    PUSH dword ptr [EBP + 0x18]         ; 0052086e
    PUSH EBX                            ; 00520871
    CALL core_moloch.cpp_CMoloch_processAI_FUN_00520c10 ; 00520872
        ;   XREF to: 00520c10 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_processAI_FUN_00520c10(CMoloch * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00520877
    LEA EAX,[EBX + 0x158]               ; 0052087a
        ;   Label: LAB_0052087a
    PUSH EAX                            ; 00520880
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00520881
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00520886
    ADD ESP,0x4                         ; 00520889
    CMP EAX,0x1                         ; 0052088c
    JNC 0x00520925                      ; 0052088f
        ;   XREF to: 00520925 (CONDITIONAL_JUMP)  ; LAB_00520925
    TEST EAX,EAX                        ; 00520895
    JNZ 0x005205cd                      ; 00520897
        ;   XREF to: 005205cd (CONDITIONAL_JUMP)  ; LAB_005205cd
    CMP dword ptr [EBX + 0x2500],0x0    ; 0052089d
        ;   Label: LAB_0052089d
    JZ 0x005205cd                       ; 005208a4
        ;   XREF to: 005205cd (CONDITIONAL_JUMP)  ; LAB_005205cd
    MOV EDI,dword ptr [EBX + 0xc1d8]    ; 005208aa
    XOR ESI,ESI                         ; 005208b0
    TEST EDI,EDI                        ; 005208b2
    JZ 0x005208bb                       ; 005208b4
        ;   XREF to: 005208bb (CONDITIONAL_JUMP)  ; LAB_005208bb
    MOV ESI,0x1                         ; 005208b6
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 005208bb
        ;   Label: LAB_005208bb
    JZ 0x005208c9                       ; 005208c2
        ;   XREF to: 005208c9 (CONDITIONAL_JUMP)  ; LAB_005208c9
    MOV ESI,0x2                         ; 005208c4
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 005208c9
        ;   Label: LAB_005208c9
    JZ 0x005208e5                       ; 005208d0
        ;   XREF to: 005208e5 (CONDITIONAL_JUMP)  ; LAB_005208e5
    CMP dword ptr [EBX + 0x22354],0x0   ; 005208d2
    JZ 0x0052091a                       ; 005208d9
        ;   XREF to: 0052091a (CONDITIONAL_JUMP)  ; LAB_0052091a
    MOV dword ptr [EBX + 0xc1f0],0x0    ; 005208db
        ;   Label: LAB_005208db
    FLD float ptr [EBX + 0xc200]        ; 005208e5
        ;   Label: LAB_005208e5
    LEA EDI,[EBX + 0x158]               ; 005208eb
    FMUL float ptr [EBX + 0x2528]       ; 005208f1
    PUSH EDI                            ; 005208f7
    FSTP float ptr [EBX + 0x2508]       ; 005208f8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005208fe
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00520903
    ADD ESP,0x4                         ; 00520906
    CMP ESI,EAX                         ; 00520909
    JZ 0x005205cd                       ; 0052090b
        ;   XREF to: 005205cd (CONDITIONAL_JUMP)  ; LAB_005205cd
    PUSH 0x1                            ; 00520911
    PUSH ESI                            ; 00520913
    PUSH EDI                            ; 00520914
    JMP 0x005205c5                      ; 00520915
        ;   XREF to: 005205c5 (UNCONDITIONAL_JUMP)  ; LAB_005205c5
    PUSH EBX                            ; 0052091a
        ;   Label: LAB_0052091a
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_00521230 ; 0052091b
        ;   XREF to: 00521230 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_00521230(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00520920
    JMP 0x005208db                      ; 00520923
        ;   XREF to: 005208db (UNCONDITIONAL_JUMP)  ; LAB_005208db
    JBE 0x0052089d                      ; 00520925
        ;   XREF to: 0052089d (CONDITIONAL_JUMP)  ; LAB_0052089d
        ;   Label: LAB_00520925
    CMP EAX,0x2                         ; 0052092b
    JZ 0x0052089d                       ; 0052092e
        ;   XREF to: 0052089d (CONDITIONAL_JUMP)  ; LAB_0052089d
    JMP 0x005205cd                      ; 00520934
        ;   XREF to: 005205cd (UNCONDITIONAL_JUMP)  ; LAB_005205cd
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00520939
        ;   Label: LAB_00520939
    JMP 0x00520791                      ; 0052093f
        ;   XREF to: 00520791 (UNCONDITIONAL_JUMP)  ; LAB_00520791
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00520944
        ;   Label: LAB_00520944
    JZ 0x005207a4                       ; 0052094b
        ;   XREF to: 005207a4 (CONDITIONAL_JUMP)  ; LAB_005207a4
    PUSH 0x1                            ; 00520951
    PUSH 0x0                            ; 00520953
    MOV EAX,dword ptr [ESP + 0x1b40]    ; 00520955
    JMP 0x0052079b                      ; 0052095c
        ;   XREF to: 0052079b (UNCONDITIONAL_JUMP)  ; LAB_0052079b
    PUSH dword ptr [EBP + 0x18]         ; 00520961
        ;   Label: LAB_00520961
    PUSH EBX                            ; 00520964
    CALL core_charactr.cpp_FUN_0042d700 ; 00520965
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x2518]              ; 0052096a
    ADD ESP,0x8                         ; 00520970
    FLD float ptr [EAX]                 ; 00520973
    FMUL float ptr [EBP + 0x18]         ; 00520975
    FLD float ptr [EAX + 0x4]           ; 00520978
    FMUL float ptr [EBP + 0x18]         ; 0052097b
    FLD float ptr [EAX + 0x8]           ; 0052097e
    FMUL float ptr [EBP + 0x18]         ; 00520981
    LEA EDI,[ESP + 0x1ad0]              ; 00520984
    LEA ESI,[ESP + 0x1aac]              ; 0052098b
    LEA EDX,[EBX + 0x249c]              ; 00520992
    FXCH ST2                            ; 00520998
    FSTP float ptr [ESP + 0x1aac]       ; 0052099a
    FSTP float ptr [ESP + 0x1ab0]       ; 005209a1
    FSTP float ptr [ESP + 0x1ab4]       ; 005209a8
    MOVSD ES:EDI,ESI                    ; 005209af
    MOVSD ES:EDI,ESI                    ; 005209b0
    MOVSD ES:EDI,ESI                    ; 005209b1
    LEA EAX,[EBX + 0x250c]              ; 005209b2
    FLD float ptr [EDX]                 ; 005209b8
    FLD float ptr [EDX + 0x4]           ; 005209ba
    FLD float ptr [EDX + 0x8]           ; 005209bd
    LEA EDI,[ESP + 0x1ae8]              ; 005209c0
    LEA ESI,[ESP + 0x1ac4]              ; 005209c7
    FXCH ST2                            ; 005209ce
    FADD float ptr [EAX]                ; 005209d0
    FXCH                                ; 005209d2
    FADD float ptr [EAX + 0x4]          ; 005209d4
    FXCH ST2                            ; 005209d7
    FADD float ptr [EAX + 0x8]          ; 005209d9
    FXCH                                ; 005209dc
    FSTP float ptr [ESP + 0x1ac4]       ; 005209de
    FXCH                                ; 005209e5
    FSTP float ptr [ESP + 0x1ac8]       ; 005209e7
    FSTP float ptr [ESP + 0x1acc]       ; 005209ee
    MOVSD ES:EDI,ESI                    ; 005209f5
    MOVSD ES:EDI,ESI                    ; 005209f6
    MOVSD ES:EDI,ESI                    ; 005209f7
    FLD float ptr [ESP + 0x1ae8]        ; 005209f8
    FLD float ptr [ESP + 0x1aec]        ; 005209ff
    FLD float ptr [ESP + 0x1af0]        ; 00520a06
    LEA EDI,[ESP + 0x1ab8]              ; 00520a0d
    LEA ESI,[ESP + 0x1b18]              ; 00520a14
    FXCH ST2                            ; 00520a1b
    FADD float ptr [ESP + 0x1ad0]       ; 00520a1d
    FXCH                                ; 00520a24
    FADD float ptr [ESP + 0x1ad4]       ; 00520a26
    FXCH ST2                            ; 00520a2d
    FADD float ptr [ESP + 0x1ad8]       ; 00520a2f
    FXCH                                ; 00520a36
    FSTP float ptr [ESP + 0x1b18]       ; 00520a38
    FXCH                                ; 00520a3f
    FSTP float ptr [ESP + 0x1b1c]       ; 00520a41
    FSTP float ptr [ESP + 0x1b20]       ; 00520a48
    MOVSD ES:EDI,ESI                    ; 00520a4f
    MOVSD ES:EDI,ESI                    ; 00520a50
    MOVSD ES:EDI,ESI                    ; 00520a51
    MOV dword ptr [EDX + 0x8],0x0       ; 00520a52
    MOV ECX,dword ptr [EDX + 0x8]       ; 00520a59
    MOV dword ptr [EDX + 0x4],ECX       ; 00520a5c
    MOV ECX,dword ptr [EDX + 0x4]       ; 00520a5f
    MOV dword ptr [EDX],ECX             ; 00520a62
    MOV dword ptr [EAX + 0x8],0x0       ; 00520a64
    MOV EDX,dword ptr [EAX + 0x8]       ; 00520a6b
    MOV dword ptr [EAX + 0x4],EDX       ; 00520a6e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00520a71
    MOV dword ptr [EAX],EDX             ; 00520a74
    LEA EAX,[ESP + 0x1ab8]              ; 00520a76
    PUSH EAX                            ; 00520a7d
    PUSH EBX                            ; 00520a7e
    CALL core_charactr.cpp_FUN_0042d750 ; 00520a7f
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00520a84
    JMP 0x005207a4                      ; 00520a87
        ;   XREF to: 005207a4 (UNCONDITIONAL_JUMP)  ; LAB_005207a4
    PUSH ESI                            ; 00520a8c
        ;   Label: LAB_00520a8c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00520a8d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00520a92
    SUB ESP,0x4                         ; 00520a95
    MOV EDX,dword ptr [ESI + 0x8]       ; 00520a98
    MOV dword ptr [ESP],EDX             ; 00520a9b
    PUSH EAX                            ; 00520a9e
    LEA ESI,[EBX + 0x1ffac]             ; 00520a9f
    PUSH ESI                            ; 00520aa5
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 00520aa6
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00520aab
    PUSH ESI                            ; 00520aae
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 00520aaf
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00520ab4
    FLD float ptr [EBX + 0x22358]       ; 00520ab7
    FADD float ptr [EBP + 0x18]         ; 00520abd
    FST float ptr [EBX + 0x22358]       ; 00520ac0
    FCOMP float ptr [0x00603ef8]        ; 00520ac6 | DAT_00603ef8
    FNSTSW AX                           ; 00520acc
    SAHF                                ; 00520ace
    JBE 0x005204fb                      ; 00520acf
        ;   XREF to: 005204fb (CONDITIONAL_JUMP)  ; LAB_005204fb
    CMP dword ptr [EBX + 0x22350],0x0   ; 00520ad5
    JNZ 0x00520bb8                      ; 00520adc
        ;   XREF to: 00520bb8 (CONDITIONAL_JUMP)  ; LAB_00520bb8
    MOV EDX,0x5ea25a                    ; 00520ae2 | = "moloch_d.dfm"
    MOV EDI,0x5ea24d                    ; 00520ae7 | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x22350],0x1   ; 00520aec
    MOV dword ptr [ESP + 0x1b3c],EDX    ; 00520af6 | = "moloch_d.dfm"
    LEA EAX,[ESP + 0x4]                 ; 00520afd
        ;   Label: LAB_00520afd
    PUSH EAX                            ; 00520b01
    LEA ESI,[EBX + 0x1ffac]             ; 00520b02
    MOV dword ptr [EBX + 0x22354],0x0   ; 00520b08
    PUSH ESI                            ; 00520b12
    MOV dword ptr [EBX + 0x22358],0x0   ; 00520b13
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 00520b1d
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00520b22
    PUSH ESI                            ; 00520b25
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00520b26
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x1b50],EAX    ; 00520b2b
    ADD ESP,0x4                         ; 00520b32
    PUSH EDI                            ; 00520b35 | = "moloch_h.dfm"
    LEA EDI,[EBX + 0x158]               ; 00520b36
    MOV EAX,dword ptr [ESI + 0x8]       ; 00520b3c
    PUSH EDI                            ; 00520b3f
    MOV dword ptr [ESP + 0x1b3c],EAX    ; 00520b40
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00520b47
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00520b4c
    PUSH EDI                            ; 00520b4f
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00520b50
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00520b55
    MOV EAX,dword ptr [ESP + 0x1b4c]    ; 00520b58
    PUSH dword ptr [ESP + 0x1b34]       ; 00520b5f
    PUSH EAX                            ; 00520b66
    PUSH EDI                            ; 00520b67
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 00520b68
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00520b6d
    MOV EDX,dword ptr [ESP + 0x1b3c]    ; 00520b70
    PUSH EDX                            ; 00520b77 | = "moloch_d.dfm"
    PUSH ESI                            ; 00520b78
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00520b79
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00520b7e
    PUSH ESI                            ; 00520b81
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00520b82
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00520b87
    PUSH EDI                            ; 00520b8a
    PUSH 0x0                            ; 00520b8b
    ADD EBX,0x22424                     ; 00520b8d
    PUSH EBX                            ; 00520b93
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 00520b94
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00520b99
    PUSH ESI                            ; 00520b9c
    PUSH 0x1                            ; 00520b9d
    PUSH EBX                            ; 00520b9f
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 00520ba0
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00520ba5
    PUSH EBX                            ; 00520ba8
    CALL core_morph.cpp_CMorph_getReady_FUN_00523310 ; 00520ba9
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_00523310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00520bae
    MOV ESP,EBP                         ; 00520bb1
    POP EBP                             ; 00520bb3
    POP EDI                             ; 00520bb4
    POP ESI                             ; 00520bb5
    POP EBX                             ; 00520bb6
    RET                                 ; 00520bb7
    MOV EDI,0x5ea267                    ; 00520bb8 | = "moloch_d.dfm"
        ;   Label: LAB_00520bb8
    MOV ECX,0x5ea274                    ; 00520bbd | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x22350],0x0   ; 00520bc2
    MOV dword ptr [ESP + 0x1b3c],ECX    ; 00520bcc | = "moloch_h.dfm"
    JMP 0x00520afd                      ; 00520bd3
        ;   XREF to: 00520afd (UNCONDITIONAL_JUMP)  ; LAB_00520afd
    LEA EAX,[EBX + 0x223c0]             ; 00520bd8
        ;   Label: LAB_00520bd8
    PUSH EAX                            ; 00520bde
    MOV ESI,dword ptr [0x0061b4d0]      ; 00520bdf | DAT_0061b4d0
    PUSH ESI                            ; 00520be5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00520be6
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00520beb
    TEST EAX,EAX                        ; 00520bee
    JZ 0x005204fb                       ; 00520bf0
        ;   XREF to: 005204fb (CONDITIONAL_JUMP)  ; LAB_005204fb
    PUSH EBX                            ; 00520bf6
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_00521230 ; 00520bf7
        ;   XREF to: 00521230 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_00521230(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00520bfc
    MOV ESP,EBP                         ; 00520bff
    POP EBP                             ; 00520c01
    POP EDI                             ; 00520c02
    POP ESI                             ; 00520c03
    POP EBX                             ; 00520c04
    RET                                 ; 00520c05

