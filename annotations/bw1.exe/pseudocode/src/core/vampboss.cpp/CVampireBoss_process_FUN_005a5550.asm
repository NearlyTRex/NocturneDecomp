; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005a5550(CVampireBoss *this_ptr,float delta_time)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_005a5514 = 005a6601
;   undefined1* switchdataD_005a5524 = 005a61fe
;   TerminatedCString s_core_vampboss_cpp_005f8d36
;   TerminatedCString s_CVampireBoss_process_Nee_005f8d4b
;   TerminatedCString s_morphCompleted_005f8d74
;   TerminatedCString s_backToHuman_005f8d83
;   TerminatedCString s_morphToBat_005f8d8f
;   TerminatedCString s_flyout_005f8d9a
;   undefined4 DAT_005f8da8
;   undefined4 DAT_005f8db0
;   undefined4 DAT_005f8db8
;   undefined4 DAT_005f8dc0
;   undefined4 DAT_005f8dc8
;   undefined4 DAT_005f8dd0
;   undefined4 DAT_005f8dd8
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00431cc0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_cloth.cpp_CCloth_process_FUN_00440610
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5550
        ;   Label: core_vampboss.cpp_CVampireBoss_process_FUN_005a5550
    PUSH ESI                            ; 005a5551
    PUSH EDI                            ; 005a5552
    PUSH EBP                            ; 005a5553
    MOV EBP,ESP                         ; 005a5554
    SUB ESP,0x318                       ; 005a5556
    AND ESP,0xfffffff8                  ; 005a555c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a555f
    MOV ESI,EBX                         ; 005a5562
    LEA EDI,[EBX + 0x10]                ; 005a5564
    CMP dword ptr [ESI + 0xbf3e8],0x0   ; 005a5567
        ;   Label: LAB_005a5567
    JZ 0x005a5bcf                       ; 005a556e
        ;   XREF to: 005a5bcf (CONDITIONAL_JUMP)  ; LAB_005a5bcf
    ADD ESI,0x4                         ; 005a5574
        ;   Label: LAB_005a5574
    CMP ESI,EDI                         ; 005a5577
    JNZ 0x005a5567                      ; 005a5579
        ;   XREF to: 005a5567 (CONDITIONAL_JUMP)  ; LAB_005a5567
    PUSH dword ptr [EBP + 0x18]         ; 005a557b
    PUSH EBX                            ; 005a557e
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 005a557f
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a5584
    TEST EAX,EAX                        ; 005a5587
    JZ 0x005a5bc8                       ; 005a5589
        ;   XREF to: 005a5bc8 (CONDITIONAL_JUMP)  ; LAB_005a5bc8
    MOV EDX,dword ptr [EBX + 0xbe79c]   ; 005a558f
    CMP EDX,0x2                         ; 005a5595
    JNZ 0x005a5cda                      ; 005a5598
        ;   XREF to: 005a5cda (CONDITIONAL_JUMP)  ; LAB_005a5cda
    PUSH dword ptr [EBP + 0x18]         ; 005a559e
    PUSH EBX                            ; 005a55a1
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005a6a00 ; 005a55a2
        ;   XREF to: 005a6a00 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(CVampireBoss * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a55a7
    LEA ESI,[EBX + 0xc268]              ; 005a55aa
    PUSH ESI                            ; 005a55b0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a55b1
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a55b6
    PUSH ESI                            ; 005a55b9
    PUSH dword ptr [EBX + 0x2504]       ; 005a55ba
    LEA EAX,[EBX + 0x30]                ; 005a55c0
    PUSH dword ptr [EBP + 0x18]         ; 005a55c3
    PUSH EAX                            ; 005a55c6
    LEA EAX,[EBX + 0x20]                ; 005a55c7
    PUSH EAX                            ; 005a55ca
    LEA EAX,[EBX + 0xe60c]              ; 005a55cb
    PUSH EAX                            ; 005a55d1
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a55d2
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    FLD float ptr [EBX + 0x2538]        ; 005a55d7
    ADD ESP,0x18                        ; 005a55dd
    FCOMP double ptr [0x005f8da8]       ; 005a55e0 | DAT_005f8da8
    FNSTSW AX                           ; 005a55e6
    SAHF                                ; 005a55e8
    JNC 0x005a5622                      ; 005a55e9
        ;   XREF to: 005a5622 (CONDITIONAL_JUMP)  ; LAB_005a5622
    MOV EDX,dword ptr [EBX + 0xbf3e0]   ; 005a55eb
    MOV dword ptr [EBX + 0x2538],0x41c7fdf4 ; 005a55f1
    CMP EDX,0x2                         ; 005a55fb
    JZ 0x005a5622                       ; 005a55fe
        ;   XREF to: 005a5622 (CONDITIONAL_JUMP)  ; LAB_005a5622
    CMP EDX,0x3                         ; 005a5600
    JZ 0x005a5622                       ; 005a5603
        ;   XREF to: 005a5622 (CONDITIONAL_JUMP)  ; LAB_005a5622
    PUSH EBX                            ; 005a5605
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0 ; 005a5606
        ;   XREF to: 005a72e0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(CVampireBoss * this_ptr)
    MOV dword ptr [EBX + 0xbf3e0],0x2   ; 005a560b
    ADD ESP,0x4                         ; 005a5615
    MOV dword ptr [EBX + 0xbf3d4],0x40a00000 ; 005a5618
    MOV ESI,dword ptr [EBX + 0xbf3e0]   ; 005a5622
        ;   Label: LAB_005a5622
    CMP ESI,0x2                         ; 005a5628
    JZ 0x005a57f5                       ; 005a562b
        ;   XREF to: 005a57f5 (CONDITIONAL_JUMP)  ; LAB_005a57f5
    CMP ESI,0x3                         ; 005a5631
    JZ 0x005a57f5                       ; 005a5634
        ;   XREF to: 005a57f5 (CONDITIONAL_JUMP)  ; LAB_005a57f5
    MOV EAX,[0x01d06ab4]                ; 005a563a | DAT_01d06ab4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a563f
    LEA EAX,[EBX + 0x20]                ; 005a5646
    LEA EDI,[ESP + 0x240]               ; 005a5649
    LEA ESI,[ESP + 0x204]               ; 005a5650
    FLD float ptr [EAX]                 ; 005a5657
    FLD float ptr [EAX + 0x4]           ; 005a5659
    FLD float ptr [EAX + 0x8]           ; 005a565c
    FXCH ST2                            ; 005a565f
    FSUB float ptr [EDX + 0x20]         ; 005a5661
    FXCH                                ; 005a5664
    FSUB float ptr [EDX + 0x24]         ; 005a5666
    FXCH ST2                            ; 005a5669
    FSUB float ptr [EDX + 0x28]         ; 005a566b
    FXCH                                ; 005a566e
    FSTP float ptr [ESP + 0x204]        ; 005a5670
    FXCH                                ; 005a5677
    FSTP float ptr [ESP + 0x208]        ; 005a5679
    FSTP float ptr [ESP + 0x20c]        ; 005a5680
    MOVSD ES:EDI,ESI                    ; 005a5687
    MOVSD ES:EDI,ESI                    ; 005a5688
    MOVSD ES:EDI,ESI                    ; 005a5689
    FLD float ptr [ESP + 0x248]         ; 005a568a
    FMUL ST0                            ; 005a5691
    FLD float ptr [ESP + 0x240]         ; 005a5693
    FMUL ST0                            ; 005a569a
    FADDP                               ; 005a569c
    FSQRT                               ; 005a569e
    FST float ptr [ESP + 0x4]           ; 005a56a0
    FCOMP double ptr [0x005f8db0]       ; 005a56a4 | DAT_005f8db0
    FNSTSW AX                           ; 005a56aa
    SAHF                                ; 005a56ac
    JNC 0x005a5733                      ; 005a56ad
        ;   XREF to: 005a5733 (CONDITIONAL_JUMP)  ; LAB_005a5733
    FLD float ptr [ESP + 0x244]         ; 005a56b3
    MOV dword ptr [EBX + 0xbf3e0],0x1   ; 005a56ba
    FCOMP double ptr [0x005f8db8]       ; 005a56c4 | DAT_005f8db8
    FNSTSW AX                           ; 005a56ca
    SAHF                                ; 005a56cc
    JNC 0x005a5bf6                      ; 005a56cd
        ;   XREF to: 005a5bf6 (CONDITIONAL_JUMP)  ; LAB_005a5bf6
    MOV EAX,0x1                         ; 005a56d3
    MOV dword ptr [ESP + 0x314],EAX     ; 005a56d8
        ;   Label: LAB_005a56d8
    FILD dword ptr [ESP + 0x314]        ; 005a56df
    FABS                                ; 005a56e6
    FLDZ                                ; 005a56e8
    FCOMPP                              ; 005a56ea
    FNSTSW AX                           ; 005a56ec
    SAHF                                ; 005a56ee
    JZ 0x005a5733                       ; 005a56ef
        ;   XREF to: 005a5733 (CONDITIONAL_JUMP)  ; LAB_005a5733
    LEA EAX,[ESP + 0x48]                ; 005a56f1
    PUSH EAX                            ; 005a56f5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005a56f6
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,0x41200000                  ; 005a56fb
    ADD ESP,0x4                         ; 005a5700
    LEA ESI,[ESP + 0x48]                ; 005a5703
    MOV dword ptr [ESP + 0x4c],EAX      ; 005a5707
    MOV EAX,[0x01d06ab4]                ; 005a570b | DAT_01d06ab4
    MOV dword ptr [ESP + 0x7c],EBX      ; 005a5710
    PUSH ESI                            ; 005a5714
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a5715
    MOV dword ptr [ESP + 0x84],EBX      ; 005a571c
    PUSH EAX                            ; 005a5723
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a5724
    CALL dword ptr [EDX + 0x108]        ; 005a572a
    ADD ESP,0x8                         ; 005a5730
    FLD float ptr [ESP + 0x4]           ; 005a5733
        ;   Label: LAB_005a5733
    FCOMP double ptr [0x005f8dc0]       ; 005a5737 | DAT_005f8dc0
    FNSTSW AX                           ; 005a573d
    SAHF                                ; 005a573f
    JBE 0x005a5760                      ; 005a5740
        ;   XREF to: 005a5760 (CONDITIONAL_JUMP)  ; LAB_005a5760
    MOV dword ptr [EBX + 0xbf3d0],0x40a00000 ; 005a5742
    MOV dword ptr [EBX + 0xbf3d8],0x0   ; 005a574c
    MOV dword ptr [EBX + 0xbf3e0],0x0   ; 005a5756
    MOV EDX,dword ptr [EBX + 0xbf3e0]   ; 005a5760
        ;   Label: LAB_005a5760
    TEST EDX,EDX                        ; 005a5766
    JNZ 0x005a5792                      ; 005a5768
        ;   XREF to: 005a5792 (CONDITIONAL_JUMP)  ; LAB_005a5792
    FLD float ptr [EBX + 0xbf3d0]       ; 005a576a
    FSUB float ptr [EBP + 0x18]         ; 005a5770
    FST float ptr [EBX + 0xbf3d0]       ; 005a5773
    FLDZ                                ; 005a5779
    FCOMPP                              ; 005a577b
    FNSTSW AX                           ; 005a577d
    SAHF                                ; 005a577f
    JBE 0x005a5792                      ; 005a5780
        ;   XREF to: 005a5792 (CONDITIONAL_JUMP)  ; LAB_005a5792
    MOV dword ptr [EBX + 0xbf3e0],0x1   ; 005a5782
    MOV dword ptr [EBX + 0xbf3d0],EDX   ; 005a578c
    LEA ESI,[EBX + 0xc268]              ; 005a5792
        ;   Label: LAB_005a5792
    PUSH ESI                            ; 005a5798
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005a5799
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a579e
    ADD ESP,0x4                         ; 005a57a1
    TEST EAX,EAX                        ; 005a57a4
    JNZ 0x005a57f5                      ; 005a57a6
        ;   XREF to: 005a57f5 (CONDITIONAL_JUMP)  ; LAB_005a57f5
    CMP dword ptr [EBX + 0xbf3e0],0x0   ; 005a57a8
    JNZ 0x005a57f5                      ; 005a57af
        ;   XREF to: 005a57f5 (CONDITIONAL_JUMP)  ; LAB_005a57f5
    FLD float ptr [ESP + 0x4]           ; 005a57b1
    FCOMP double ptr [0x005f8dc8]       ; 005a57b5 | DAT_005f8dc8
    FNSTSW AX                           ; 005a57bb
    SAHF                                ; 005a57bd
    JNC 0x005a57f5                      ; 005a57be
        ;   XREF to: 005a57f5 (CONDITIONAL_JUMP)  ; LAB_005a57f5
    CMP dword ptr [EBX + 0xbf3d8],0x0   ; 005a57c0
    JNZ 0x005a57f5                      ; 005a57c7
        ;   XREF to: 005a57f5 (CONDITIONAL_JUMP)  ; LAB_005a57f5
    PUSH 0x3f000000                     ; 005a57c9
    MOV dword ptr [EBX + 0xbf3d8],0x1   ; 005a57ce
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 005a57d8
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005a57dd
    TEST EAX,EAX                        ; 005a57e0
    JZ 0x005a5bfd                       ; 005a57e2
        ;   XREF to: 005a5bfd (CONDITIONAL_JUMP)  ; LAB_005a5bfd
    PUSH 0x1                            ; 005a57e8
    PUSH 0x1                            ; 005a57ea
    PUSH ESI                            ; 005a57ec
        ;   Label: LAB_005a57ec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a57ed
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a57f2
    MOV EDX,dword ptr [0x01d06ab4]      ; 005a57f5 | DAT_01d06ab4
        ;   Label: LAB_005a57f5
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 005a57fb
    LEA EAX,[ESP + 0x1e0]               ; 005a5802
    ADD EDX,0x20                        ; 005a5809
    CMP EAX,EDX                         ; 005a580c
    JZ 0x005a582d                       ; 005a580e
        ;   XREF to: 005a582d (CONDITIONAL_JUMP)  ; LAB_005a582d
    MOV EAX,dword ptr [EDX]             ; 005a5810
    MOV dword ptr [ESP + 0x1e0],EAX     ; 005a5812
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a5819
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005a581c
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a5823
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005a5826
    MOV EAX,dword ptr [EBX + 0xbf3e0]   ; 005a582d
        ;   Label: LAB_005a582d
    CMP EAX,0x2                         ; 005a5833
    JNZ 0x005a5c38                      ; 005a5836
        ;   XREF to: 005a5c38 (CONDITIONAL_JUMP)  ; LAB_005a5c38
    FLD float ptr [EBX + 0xbf3d4]       ; 005a583c
    MOV EAX,0x4                         ; 005a5842
    MOV ECX,dword ptr [EBX + 0xbf3e4]   ; 005a5847
    FSUB float ptr [EBP + 0x18]         ; 005a584d
    SUB EAX,ECX                         ; 005a5850
    FSTP float ptr [EBX + 0xbf3d4]      ; 005a5852
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbf3e4] ; 005a5858
    LEA EAX,[ESP + 0x1e0]               ; 005a585f
    ADD EDX,0x20                        ; 005a5866
    CMP EAX,EDX                         ; 005a5869
    JZ 0x005a588a                       ; 005a586b
        ;   XREF to: 005a588a (CONDITIONAL_JUMP)  ; LAB_005a588a
    MOV EAX,dword ptr [EDX]             ; 005a586d
    MOV dword ptr [ESP + 0x1e0],EAX     ; 005a586f
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a5876
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005a5879
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a5880
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005a5883
    FLD float ptr [EBX + 0xbf3d4]       ; 005a588a
        ;   Label: LAB_005a588a
    FLDZ                                ; 005a5890
    FCOMPP                              ; 005a5892
    FNSTSW AX                           ; 005a5894
    SAHF                                ; 005a5896
    JC 0x005a5c06                       ; 005a5897
        ;   XREF to: 005a5c06 (CONDITIONAL_JUMP)  ; LAB_005a5c06
    MOV dword ptr [EBX + 0xbf3d4],0x40a00000 ; 005a589d
        ;   Label: LAB_005a589d
    MOV dword ptr [EBX + 0xbf3e0],0x3   ; 005a58a7
    FLD float ptr [ESP + 0x1e4]         ; 005a58b1
        ;   Label: LAB_005a58b1
    FLD float ptr [ESP + 0x1e0]         ; 005a58b8
    FLD float ptr [ESP + 0x1e8]         ; 005a58bf
    MOV ESI,0x3f99999a                  ; 005a58c6
    MOV EDI,0x41a00000                  ; 005a58cb
    LEA EAX,[EBX + 0x20]                ; 005a58d0
    MOV dword ptr [ESP + 0x2d0],ESI     ; 005a58d3
    FXCH ST2                            ; 005a58da
    FADD float ptr [0x005f8de0]         ; 005a58dc | DAT_005f8de0
    MOV dword ptr [ESP + 0x2e0],EDI     ; 005a58e2
    FST float ptr [ESP + 0x1e4]         ; 005a58e9
    LEA EDI,[ESP + 0x1a4]               ; 005a58f0
    LEA ESI,[ESP + 0x1f8]               ; 005a58f7
    FXCH                                ; 005a58fe
    FSUB float ptr [EAX]                ; 005a5900
    FXCH ST2                            ; 005a5902
    FSUB float ptr [EAX + 0x8]          ; 005a5904
    FXCH ST2                            ; 005a5907
    FSTP float ptr [ESP + 0x1f8]        ; 005a5909
    FSUB float ptr [EAX + 0x4]          ; 005a5910
    FXCH                                ; 005a5913
    FSTP float ptr [ESP + 0x200]        ; 005a5915
    FSTP float ptr [ESP + 0x1fc]        ; 005a591c
    MOVSD ES:EDI,ESI                    ; 005a5923
    MOVSD ES:EDI,ESI                    ; 005a5924
    MOVSD ES:EDI,ESI                    ; 005a5925
    FLD float ptr [ESP + 0x1ac]         ; 005a5926
    FLD float ptr [ESP + 0x1a4]         ; 005a592d
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005a5934
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FLD float ptr [ESP + 0x1ac]         ; 005a5939
    FMUL ST0                            ; 005a5940
    FLD float ptr [ESP + 0x1a4]         ; 005a5942
    FMUL ST0                            ; 005a5949
    FADDP                               ; 005a594b
    FSQRT                               ; 005a594d
    FLD float ptr [ESP + 0x1a8]         ; 005a594f
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005a5956
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FXCH                                ; 005a595b
    FSTP float ptr [ESP + 0x2f8]        ; 005a595d
    FCHS                                ; 005a5964
    MOV EAX,dword ptr [EBX + 0xbf3e0]   ; 005a5966
    FSTP float ptr [ESP + 0x300]        ; 005a596c
    CMP EAX,0x1                         ; 005a5973
    JNZ 0x005a599a                      ; 005a5976
        ;   XREF to: 005a599a (CONDITIONAL_JUMP)  ; LAB_005a599a
    MOV DL,byte ptr [ESP + 0x2fb]       ; 005a5978
    MOV AH,byte ptr [ESP + 0x303]       ; 005a597f
    XOR DL,0x80                         ; 005a5986
    XOR AH,0x80                         ; 005a5989
    MOV byte ptr [ESP + 0x2fb],DL       ; 005a598c
    MOV byte ptr [ESP + 0x303],AH       ; 005a5993
    FLD float ptr [ESP + 0x2f8]         ; 005a599a
        ;   Label: LAB_005a599a
    FSUB float ptr [EBX + 0x34]         ; 005a59a1
    SUB ESP,0x4                         ; 005a59a4
    FSTP float ptr [ESP]                ; 005a59a7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a59aa
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 005a59af
    FLD float ptr [ESP + 0x318]         ; 005a59b6
    ADD ESP,0x4                         ; 005a59bd
    FST float ptr [ESP + 0x8]           ; 005a59c0
    FMUL float ptr [EBP + 0x18]         ; 005a59c4
    FMUL float ptr [ESP + 0x2d0]        ; 005a59c7
    FST float ptr [ESP]                 ; 005a59ce
    FABS                                ; 005a59d1
    FLD float ptr [ESP + 0x8]           ; 005a59d3
    FABS                                ; 005a59d7
    FCOMPP                              ; 005a59d9
    FNSTSW AX                           ; 005a59db
    SAHF                                ; 005a59dd
    JNC 0x005a5ccc                      ; 005a59de
        ;   XREF to: 005a5ccc (CONDITIONAL_JUMP)  ; LAB_005a5ccc
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 005a59e4
    MOV dword ptr [EBX + 0x34],EAX      ; 005a59eb
    FLD float ptr [ESP + 0x300]         ; 005a59ee
        ;   Label: LAB_005a59ee
    FSUB float ptr [EBX + 0x30]         ; 005a59f5
    SUB ESP,0x4                         ; 005a59f8
    FSTP float ptr [ESP]                ; 005a59fb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a59fe
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 005a5a03
    FLD float ptr [ESP + 0x318]         ; 005a5a0a
    ADD ESP,0x4                         ; 005a5a11
    FST float ptr [ESP + 0x300]         ; 005a5a14
    FMUL float ptr [EBP + 0x18]         ; 005a5a1b
    FMUL float ptr [ESP + 0x2d0]        ; 005a5a1e
    FLD float ptr [EBX + 0x2538]        ; 005a5a25
    MOV EDX,0xbec90fdb                  ; 005a5a2b
    MOV ECX,0x3ec90fdb                  ; 005a5a30
    MOV dword ptr [ESP + 0x2ec],EDX     ; 005a5a35
    FXCH                                ; 005a5a3c
    FADD float ptr [EBX + 0x30]         ; 005a5a3e
    MOV dword ptr [ESP + 0x2f4],ECX     ; 005a5a41
    FSTP float ptr [EBX + 0x30]         ; 005a5a48
    FCOMP double ptr [0x005f8da8]       ; 005a5a4b | DAT_005f8da8
    FNSTSW AX                           ; 005a5a51
    SAHF                                ; 005a5a53
    JNC 0x005a5a77                      ; 005a5a54
        ;   XREF to: 005a5a77 (CONDITIONAL_JUMP)  ; LAB_005a5a77
    CMP dword ptr [EBX + 0xbf3e0],0x0   ; 005a5a56
    JNZ 0x005a5a77                      ; 005a5a5d
        ;   XREF to: 005a5a77 (CONDITIONAL_JUMP)  ; LAB_005a5a77
    MOV EAX,0x3fc90fdb                  ; 005a5a5f
    MOV EDI,0xbfc90fdb                  ; 005a5a64
    MOV dword ptr [ESP + 0x2f4],EAX     ; 005a5a69
    MOV dword ptr [ESP + 0x2ec],EDI     ; 005a5a70
    FLD float ptr [EBX + 0x30]          ; 005a5a77
        ;   Label: LAB_005a5a77
    FCOMP float ptr [ESP + 0x2ec]       ; 005a5a7a
    FNSTSW AX                           ; 005a5a81
    SAHF                                ; 005a5a83
    JNC 0x005a5a90                      ; 005a5a84
        ;   XREF to: 005a5a90 (CONDITIONAL_JUMP)  ; LAB_005a5a90
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 005a5a86
    MOV dword ptr [EBX + 0x30],EAX      ; 005a5a8d
    FLD float ptr [EBX + 0x30]          ; 005a5a90
        ;   Label: LAB_005a5a90
    FCOMP float ptr [ESP + 0x2f4]       ; 005a5a93
    FNSTSW AX                           ; 005a5a9a
    SAHF                                ; 005a5a9c
    JBE 0x005a5aa9                      ; 005a5a9d
        ;   XREF to: 005a5aa9 (CONDITIONAL_JUMP)  ; LAB_005a5aa9
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 005a5a9f
    MOV dword ptr [EBX + 0x30],EAX      ; 005a5aa6
    FLD float ptr [EBX + 0x30]          ; 005a5aa9
        ;   Label: LAB_005a5aa9
    FLD ST0                             ; 005a5aac
    FSIN                                ; 005a5aae
    FLD float ptr [EBX + 0x34]          ; 005a5ab0
    FLD ST0                             ; 005a5ab3
    FSIN                                ; 005a5ab5
    FXCH ST3                            ; 005a5ab7
    FCOS                                ; 005a5ab9
    FXCH                                ; 005a5abb
    FCOS                                ; 005a5abd
    FXCH ST3                            ; 005a5abf
    FMUL ST1                            ; 005a5ac1
    FXCH ST3                            ; 005a5ac3
    FMULP                               ; 005a5ac5
    FXCH                                ; 005a5ac7
    FCHS                                ; 005a5ac9
    FLD float ptr [ESP + 0x2e0]         ; 005a5acb
    FXCH                                ; 005a5ad2
    FMUL ST1                            ; 005a5ad4
    FXCH ST3                            ; 005a5ad6
    FMUL ST1                            ; 005a5ad8
    FXCH ST3                            ; 005a5ada
    FLD float ptr [EBP + 0x18]          ; 005a5adc
    FXCH                                ; 005a5adf
    FMUL ST1                            ; 005a5ae1
    FXCH ST3                            ; 005a5ae3
    FMULP ST2                           ; 005a5ae5
    FXCH ST3                            ; 005a5ae7
    FMUL ST3                            ; 005a5ae9
    FXCH ST2                            ; 005a5aeb
    FADD float ptr [EBX + 0x24]         ; 005a5aed
    FXCH                                ; 005a5af0
    FMULP ST3                           ; 005a5af2
    FST float ptr [EBX + 0x24]          ; 005a5af4
    FXCH                                ; 005a5af7
    FADD float ptr [EBX + 0x20]         ; 005a5af9
    FXCH ST2                            ; 005a5afc
    FADD float ptr [EBX + 0x28]         ; 005a5afe
    FXCH ST2                            ; 005a5b01
    FSTP float ptr [EBX + 0x20]         ; 005a5b03
    FXCH                                ; 005a5b06
    FSTP float ptr [EBX + 0x28]         ; 005a5b08
    FCOMP float ptr [ESP + 0x1e4]       ; 005a5b0b
    FNSTSW AX                           ; 005a5b12
    SAHF                                ; 005a5b14
    JNC 0x005a5b21                      ; 005a5b15
        ;   XREF to: 005a5b21 (CONDITIONAL_JUMP)  ; LAB_005a5b21
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005a5b17
    MOV dword ptr [EBX + 0x24],EAX      ; 005a5b1e
    PUSH EBX                            ; 005a5b21
        ;   Label: LAB_005a5b21
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 005a5b22
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a5b27
    LEA EAX,[EBX + 0xc268]              ; 005a5b2a
    PUSH EAX                            ; 005a5b30
    LEA ESI,[ESP + 0x148]               ; 005a5b31
    LEA EDI,[ESP + 0xe8]                ; 005a5b38
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70 ; 005a5b3f
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005a5b44
    LEA ESI,[ESP + 0x148]               ; 005a5b49
    ADD ESP,0x4                         ; 005a5b50
    MOVSD.REP ES:EDI,ESI                ; 005a5b53
    LEA EDX,[EBX + 0x2788]              ; 005a5b55
    LEA EDI,[ESP + 0xe4]                ; 005a5b5b
    MOV ESI,EDX                         ; 005a5b62
    CMP EDX,EDI                         ; 005a5b64
    JZ 0x005a5b85                       ; 005a5b66
        ;   XREF to: 005a5b85 (CONDITIONAL_JUMP)  ; LAB_005a5b85
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005a5b68
    MOV dword ptr [EDX],EAX             ; 005a5b6f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005a5b71
    MOV dword ptr [EDX + 0x4],EAX       ; 005a5b78
    MOV EAX,dword ptr [ESP + 0xec]      ; 005a5b7b
    MOV dword ptr [EDX + 0x8],EAX       ; 005a5b82
    LEA EDX,[EDI + 0xc]                 ; 005a5b85
        ;   Label: LAB_005a5b85
    LEA EAX,[ESI + 0xc]                 ; 005a5b88
    CMP EAX,EDX                         ; 005a5b8b
    JZ 0x005a5b9f                       ; 005a5b8d
        ;   XREF to: 005a5b9f (CONDITIONAL_JUMP)  ; LAB_005a5b9f
    MOV ECX,dword ptr [EDX]             ; 005a5b8f
    MOV dword ptr [EAX],ECX             ; 005a5b91
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a5b93
    MOV dword ptr [EAX + 0x4],ECX       ; 005a5b96
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a5b99
    MOV dword ptr [EAX + 0x8],ECX       ; 005a5b9c
    LEA EAX,[EBX + 0x158]               ; 005a5b9f
        ;   Label: LAB_005a5b9f
    PUSH EAX                            ; 005a5ba5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005a5ba6
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a5bab
    ADD ESP,0x4                         ; 005a5bae
    CMP EAX,0x2                         ; 005a5bb1
    JZ 0x005a5bc8                       ; 005a5bb4
        ;   XREF to: 005a5bc8 (CONDITIONAL_JUMP)  ; LAB_005a5bc8
    MOV EAX,[0x0061d95c]                ; 005a5bb6 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x244],0x0     ; 005a5bbb | g_CGameInstance.letterbox_mode
    JZ 0x005a689d                       ; 005a5bc2
        ;   XREF to: 005a689d (CONDITIONAL_JUMP)  ; LAB_005a689d
    MOV ESP,EBP                         ; 005a5bc8
        ;   Label: LAB_005a5bc8
    POP EBP                             ; 005a5bca
    POP EDI                             ; 005a5bcb
    POP ESI                             ; 005a5bcc
    POP EBX                             ; 005a5bcd
    RET                                 ; 005a5bce
    MOV ECX,0x5f8d36                    ; 005a5bcf | = "..\\core\\vampboss.cpp"
        ;   Label: LAB_005a5bcf
    MOV EAX,0xcf                        ; 005a5bd4
    PUSH 0x5f8d4b                       ; 005a5bd9 | = "CVampireBoss::process - Need 4 waypoints"
    MOV dword ptr [0x01d1d400],ECX      ; 005a5bde | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005a5be4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a5be9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a5bee
    JMP 0x005a5574                      ; 005a5bf1
        ;   XREF to: 005a5574 (UNCONDITIONAL_JUMP)  ; LAB_005a5574
    XOR EAX,EAX                         ; 005a5bf6
        ;   Label: LAB_005a5bf6
    JMP 0x005a56d8                      ; 005a5bf8
        ;   XREF to: 005a56d8 (UNCONDITIONAL_JUMP)  ; LAB_005a56d8
    PUSH 0x1                            ; 005a5bfd
        ;   Label: LAB_005a5bfd
    PUSH 0x2                            ; 005a5bff
    JMP 0x005a57ec                      ; 005a5c01
        ;   XREF to: 005a57ec (UNCONDITIONAL_JUMP)  ; LAB_005a57ec
    LEA EAX,[EBX + 0x20]                ; 005a5c06
        ;   Label: LAB_005a5c06
    FLD float ptr [ESP + 0x1e0]         ; 005a5c09
    FSUB float ptr [EAX]                ; 005a5c10
    FMUL ST0                            ; 005a5c12
    FLD float ptr [ESP + 0x1e8]         ; 005a5c14
    FSUB float ptr [EAX + 0x8]          ; 005a5c1b
    FMUL ST0                            ; 005a5c1e
    FADDP                               ; 005a5c20
    FSQRT                               ; 005a5c22
    FCOMP double ptr [0x005f8dd8]       ; 005a5c24 | DAT_005f8dd8
    FNSTSW AX                           ; 005a5c2a
    SAHF                                ; 005a5c2c
    JC 0x005a589d                       ; 005a5c2d
        ;   XREF to: 005a589d (CONDITIONAL_JUMP)  ; LAB_005a589d
    JMP 0x005a58b1                      ; 005a5c33
        ;   XREF to: 005a58b1 (UNCONDITIONAL_JUMP)  ; LAB_005a58b1
    CMP EAX,0x3                         ; 005a5c38
        ;   Label: LAB_005a5c38
    JNZ 0x005a58b1                      ; 005a5c3b
        ;   XREF to: 005a58b1 (CONDITIONAL_JUMP)  ; LAB_005a58b1
    MOV EAX,dword ptr [EBX + 0xbf3e4]   ; 005a5c41
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbf3e8] ; 005a5c47
    LEA EAX,[ESP + 0x1e0]               ; 005a5c4e
    ADD EDX,0x20                        ; 005a5c55
    CMP EAX,EDX                         ; 005a5c58
    JZ 0x005a5c79                       ; 005a5c5a
        ;   XREF to: 005a5c79 (CONDITIONAL_JUMP)  ; LAB_005a5c79
    MOV EAX,dword ptr [EDX]             ; 005a5c5c
    MOV dword ptr [ESP + 0x1e0],EAX     ; 005a5c5e
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a5c65
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005a5c68
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a5c6f
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005a5c72
    FLD float ptr [EBX + 0xbf3d4]       ; 005a5c79
        ;   Label: LAB_005a5c79
    FSUB float ptr [EBP + 0x18]         ; 005a5c7f
    FST float ptr [EBX + 0xbf3d4]       ; 005a5c82
    FLDZ                                ; 005a5c88
    FCOMPP                              ; 005a5c8a
    FNSTSW AX                           ; 005a5c8c
    SAHF                                ; 005a5c8e
    JNC 0x005a5cbe                      ; 005a5c8f
        ;   XREF to: 005a5cbe (CONDITIONAL_JUMP)  ; LAB_005a5cbe
    LEA EAX,[EBX + 0x20]                ; 005a5c91
    FLD float ptr [ESP + 0x1e0]         ; 005a5c94
    FSUB float ptr [EAX]                ; 005a5c9b
    FMUL ST0                            ; 005a5c9d
    FLD float ptr [ESP + 0x1e8]         ; 005a5c9f
    FSUB float ptr [EAX + 0x8]          ; 005a5ca6
    FMUL ST0                            ; 005a5ca9
    FADDP                               ; 005a5cab
    FSQRT                               ; 005a5cad
    FCOMP double ptr [0x005f8dd0]       ; 005a5caf | DAT_005f8dd0
    FNSTSW AX                           ; 005a5cb5
    SAHF                                ; 005a5cb7
    JNC 0x005a58b1                      ; 005a5cb8
        ;   XREF to: 005a58b1 (CONDITIONAL_JUMP)  ; LAB_005a58b1
    PUSH EBX                            ; 005a5cbe
        ;   Label: LAB_005a5cbe
    CALL core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_005a7290 ; 005a5cbf
        ;   XREF to: 005a7290 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_005a7290(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005a5cc4
    JMP 0x005a58b1                      ; 005a5cc7
        ;   XREF to: 005a58b1 (UNCONDITIONAL_JUMP)  ; LAB_005a58b1
    FLD float ptr [EBX + 0x34]          ; 005a5ccc
        ;   Label: LAB_005a5ccc
    FADD float ptr [ESP]                ; 005a5ccf
    FSTP float ptr [EBX + 0x34]         ; 005a5cd2
    JMP 0x005a59ee                      ; 005a5cd5
        ;   XREF to: 005a59ee (UNCONDITIONAL_JUMP)  ; LAB_005a59ee
    CMP EDX,0x1                         ; 005a5cda
        ;   Label: LAB_005a5cda
    JNZ 0x005a5ec3                      ; 005a5cdd
        ;   XREF to: 005a5ec3 (CONDITIONAL_JUMP)  ; LAB_005a5ec3
    FLD float ptr [EBP + 0x18]          ; 005a5ce3
    FDIV float ptr [0x006077ac]         ; 005a5ce6 | DAT_006077ac
    FADD float ptr [EBX + 0xbf3cc]      ; 005a5cec
    FST float ptr [EBX + 0xbf3cc]       ; 005a5cf2
    FLD1                                ; 005a5cf8
    FCOMPP                              ; 005a5cfa
    FNSTSW AX                           ; 005a5cfc
    SAHF                                ; 005a5cfe
    JA 0x005a5d1e                       ; 005a5cff
        ;   XREF to: 005a5d1e (CONDITIONAL_JUMP)  ; LAB_005a5d1e
    PUSH 0x5f8d74                       ; 005a5d01 | = "morphCompleted"
    MOV EAX,[0x0061b4d0]                ; 005a5d06 | DAT_0061b4d0
    PUSH EAX                            ; 005a5d0b
    MOV dword ptr [EBX + 0xbe79c],0x2   ; 005a5d0c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005a5d16
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005a5d1b
    PUSH dword ptr [EBP + 0x18]         ; 005a5d1e
        ;   Label: LAB_005a5d1e
    PUSH EBX                            ; 005a5d21
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005a6a00 ; 005a5d22
        ;   XREF to: 005a6a00 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(CVampireBoss * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a5d27
    LEA ESI,[EBX + 0xc268]              ; 005a5d2a
    PUSH ESI                            ; 005a5d30
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a5d31
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5d36
    PUSH ESI                            ; 005a5d39
    PUSH dword ptr [EBX + 0x2504]       ; 005a5d3a
    LEA EAX,[EBX + 0x30]                ; 005a5d40
    PUSH dword ptr [EBP + 0x18]         ; 005a5d43
    PUSH EAX                            ; 005a5d46
    LEA EAX,[EBX + 0x20]                ; 005a5d47
    PUSH EAX                            ; 005a5d4a
    LEA EAX,[EBX + 0xe60c]              ; 005a5d4b
    PUSH EAX                            ; 005a5d51
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a5d52
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a5d57
    LEA ESI,[EBX + 0x158]               ; 005a5d5a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a5d60
    FLDZ                                ; 005a5d63
    MOV dword ptr [ESP + 0x2c0],EAX     ; 005a5d65
    FCOMP float ptr [EBP + 0x18]        ; 005a5d6c
    FNSTSW AX                           ; 005a5d6f
    SAHF                                ; 005a5d71
    JNC 0x005a5da0                      ; 005a5d72
        ;   XREF to: 005a5da0 (CONDITIONAL_JUMP)  ; LAB_005a5da0
    LEA EAX,[ESP + 0x2c0]               ; 005a5d74
        ;   Label: LAB_005a5d74
    PUSH EAX                            ; 005a5d7b
    PUSH ESI                            ; 005a5d7c
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005a5d7d
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005a5d82
    FLDZ                                ; 005a5d85
    FCOMP float ptr [ESP + 0x2c0]       ; 005a5d87
    FNSTSW AX                           ; 005a5d8e
    SAHF                                ; 005a5d90
    JC 0x005a5d74                       ; 005a5d91
        ;   XREF to: 005a5d74 (CONDITIONAL_JUMP)  ; LAB_005a5d74
    LEA EAX,[EAX]                       ; 005a5d93
    LEA EDX,[EDX]                       ; 005a5d99
    NOP                                 ; 005a5d9f
    PUSH ESI                            ; 005a5da0
        ;   Label: LAB_005a5da0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a5da1
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5da6
    PUSH ESI                            ; 005a5da9
    PUSH dword ptr [EBX + 0x2504]       ; 005a5daa
    LEA EDI,[EBX + 0x30]                ; 005a5db0
    PUSH dword ptr [EBP + 0x18]         ; 005a5db3
    PUSH EDI                            ; 005a5db6
    LEA EAX,[EBX + 0x20]                ; 005a5db7
    PUSH EAX                            ; 005a5dba
    MOV dword ptr [ESP + 0x328],EAX     ; 005a5dbb
    LEA EAX,[EBX + 0x4913c]             ; 005a5dc2
    PUSH EAX                            ; 005a5dc8
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a5dc9
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a5dce
    PUSH ESI                            ; 005a5dd1
    PUSH dword ptr [EBX + 0x2504]       ; 005a5dd2
    PUSH dword ptr [EBP + 0x18]         ; 005a5dd8
    PUSH EDI                            ; 005a5ddb
    MOV EDX,dword ptr [ESP + 0x324]     ; 005a5ddc
    PUSH EDX                            ; 005a5de3
    LEA EAX,[EBX + 0x83c6c]             ; 005a5de4
    PUSH EAX                            ; 005a5dea
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a5deb
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a5df0
    PUSH ESI                            ; 005a5df3
    LEA ESI,[ESP + 0x178]               ; 005a5df4
    LEA EDI,[ESP + 0x160]               ; 005a5dfb
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70 ; 005a5e02
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005a5e07
    LEA ESI,[ESP + 0x178]               ; 005a5e0c
    ADD ESP,0x4                         ; 005a5e13
    MOVSD.REP ES:EDI,ESI                ; 005a5e16
    LEA EDX,[EBX + 0x2788]              ; 005a5e18
    LEA EDI,[ESP + 0x15c]               ; 005a5e1e
    MOV ESI,EDX                         ; 005a5e25
    CMP EDX,EDI                         ; 005a5e27
    JZ 0x005a5e48                       ; 005a5e29
        ;   XREF to: 005a5e48 (CONDITIONAL_JUMP)  ; LAB_005a5e48
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a5e2b
    MOV dword ptr [EDX],EAX             ; 005a5e32
    MOV EAX,dword ptr [ESP + 0x160]     ; 005a5e34
    MOV dword ptr [EDX + 0x4],EAX       ; 005a5e3b
    MOV EAX,dword ptr [ESP + 0x164]     ; 005a5e3e
    MOV dword ptr [EDX + 0x8],EAX       ; 005a5e45
    LEA EAX,[EDI + 0xc]                 ; 005a5e48
        ;   Label: LAB_005a5e48
    LEA EDX,[ESI + 0xc]                 ; 005a5e4b
    CMP EDX,EAX                         ; 005a5e4e
    JZ 0x005a5e62                       ; 005a5e50
        ;   XREF to: 005a5e62 (CONDITIONAL_JUMP)  ; LAB_005a5e62
    MOV ECX,dword ptr [EAX]             ; 005a5e52
    MOV dword ptr [EDX],ECX             ; 005a5e54
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a5e56
    MOV dword ptr [EDX + 0x4],ECX       ; 005a5e59
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a5e5c
    MOV dword ptr [EDX + 0x8],ECX       ; 005a5e5f
    LEA EAX,[EBX + 0xc268]              ; 005a5e62
        ;   Label: LAB_005a5e62
    PUSH EAX                            ; 005a5e68
    LEA ESI,[ESP + 0xa0]                ; 005a5e69
    LEA EDI,[ESP + 0x100]               ; 005a5e70
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70 ; 005a5e77
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005a5e7c
    LEA ESI,[ESP + 0xa0]                ; 005a5e81
    ADD ESP,0x4                         ; 005a5e88
    LEA EAX,[ESP + 0xfc]                ; 005a5e8b
    MOVSD.REP ES:EDI,ESI                ; 005a5e92
    PUSH EAX                            ; 005a5e94
    LEA ESI,[EBX + 0x2788]              ; 005a5e95
    PUSH ESI                            ; 005a5e9b
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005a5e9c
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a5ea1
    LEA EAX,[ESP + 0x108]               ; 005a5ea4
    PUSH EAX                            ; 005a5eab
    PUSH ESI                            ; 005a5eac
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005a5ead
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a5eb2
    FLD float ptr [EBX + 0x24]          ; 005a5eb5
    FADD float ptr [EBP + 0x18]         ; 005a5eb8
    FSTP float ptr [EBX + 0x24]         ; 005a5ebb
    JMP 0x005a5b9f                      ; 005a5ebe
        ;   XREF to: 005a5b9f (UNCONDITIONAL_JUMP)  ; LAB_005a5b9f
    CMP EDX,0x3                         ; 005a5ec3
        ;   Label: LAB_005a5ec3
    JNZ 0x005a60fb                      ; 005a5ec6
        ;   XREF to: 005a60fb (CONDITIONAL_JUMP)  ; LAB_005a60fb
    FLD float ptr [EBP + 0x18]          ; 005a5ecc
    FDIV float ptr [0x006077ac]         ; 005a5ecf | DAT_006077ac
    MOV EAX,dword ptr [EBX + 0xbf3cc]   ; 005a5ed5
    MOV dword ptr [ESP + 0x2c8],EAX     ; 005a5edb
    FLD float ptr [ESP + 0x2c8]         ; 005a5ee2
    FXCH                                ; 005a5ee9
    FSTP float ptr [ESP + 0x2cc]        ; 005a5eeb
    FSUB float ptr [ESP + 0x2cc]        ; 005a5ef2
    FST float ptr [EBX + 0xbf3cc]       ; 005a5ef9
    FLDZ                                ; 005a5eff
    FCOMPP                              ; 005a5f01
    FNSTSW AX                           ; 005a5f03
    SAHF                                ; 005a5f05
    JC 0x005a60da                       ; 005a5f06
        ;   XREF to: 005a60da (CONDITIONAL_JUMP)  ; LAB_005a60da
    PUSH 0x5f8d83                       ; 005a5f0c | = "backToHuman"
    MOV EDI,dword ptr [0x0061b4d0]      ; 005a5f11 | DAT_0061b4d0
    PUSH EDI                            ; 005a5f17
    MOV dword ptr [EBX + 0xbe79c],0x0   ; 005a5f18
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005a5f22
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    FLD float ptr [EBX + 0x2504]        ; 005a5f27
    MOV dword ptr [EBX + 0xbf3cc],0x0   ; 005a5f2d
    ADD ESP,0x8                         ; 005a5f37
    FSTP float ptr [EBX + 0x24]         ; 005a5f3a
        ;   Label: LAB_005a5f3a
    PUSH dword ptr [EBP + 0x18]         ; 005a5f3d
    PUSH EBX                            ; 005a5f40
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005a6a00 ; 005a5f41
        ;   XREF to: 005a6a00 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005a6a00(CVampireBoss * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a5f46
    LEA ESI,[EBX + 0xc268]              ; 005a5f49
    PUSH ESI                            ; 005a5f4f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a5f50
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5f55
    PUSH ESI                            ; 005a5f58
    PUSH dword ptr [EBX + 0x2504]       ; 005a5f59
    LEA EAX,[EBX + 0x30]                ; 005a5f5f
    PUSH dword ptr [EBP + 0x18]         ; 005a5f62
    PUSH EAX                            ; 005a5f65
    LEA EAX,[EBX + 0x20]                ; 005a5f66
    PUSH EAX                            ; 005a5f69
    LEA EAX,[EBX + 0xe60c]              ; 005a5f6a
    PUSH EAX                            ; 005a5f70
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a5f71
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a5f76
    LEA ESI,[EBX + 0x158]               ; 005a5f79
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a5f7f
    FLDZ                                ; 005a5f82
    MOV dword ptr [ESP + 0x310],EAX     ; 005a5f84
    FCOMP float ptr [EBP + 0x18]        ; 005a5f8b
    FNSTSW AX                           ; 005a5f8e
    SAHF                                ; 005a5f90
    JNC 0x005a5fc0                      ; 005a5f91
        ;   XREF to: 005a5fc0 (CONDITIONAL_JUMP)  ; LAB_005a5fc0
    LEA EAX,[ESP + 0x310]               ; 005a5f93
        ;   Label: LAB_005a5f93
    PUSH EAX                            ; 005a5f9a
    PUSH ESI                            ; 005a5f9b
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005a5f9c
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005a5fa1
    FLDZ                                ; 005a5fa4
    FCOMP float ptr [ESP + 0x310]       ; 005a5fa6
    FNSTSW AX                           ; 005a5fad
    SAHF                                ; 005a5faf
    JC 0x005a5f93                       ; 005a5fb0
        ;   XREF to: 005a5f93 (CONDITIONAL_JUMP)  ; LAB_005a5f93
    LEA EAX,[EAX]                       ; 005a5fb2
    LEA EDX,[EDX]                       ; 005a5fb8
    MOV EAX,EAX                         ; 005a5fbe
    PUSH ESI                            ; 005a5fc0
        ;   Label: LAB_005a5fc0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a5fc1
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5fc6
    PUSH ESI                            ; 005a5fc9
    PUSH dword ptr [EBX + 0x2504]       ; 005a5fca
    LEA EDI,[EBX + 0x30]                ; 005a5fd0
    PUSH dword ptr [EBP + 0x18]         ; 005a5fd3
    PUSH EDI                            ; 005a5fd6
    LEA EAX,[EBX + 0x20]                ; 005a5fd7
    PUSH EAX                            ; 005a5fda
    MOV dword ptr [ESP + 0x328],EAX     ; 005a5fdb
    LEA EAX,[EBX + 0x4913c]             ; 005a5fe2
    PUSH EAX                            ; 005a5fe8
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a5fe9
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a5fee
    PUSH ESI                            ; 005a5ff1
    PUSH dword ptr [EBX + 0x2504]       ; 005a5ff2
    PUSH dword ptr [EBP + 0x18]         ; 005a5ff8
    PUSH EDI                            ; 005a5ffb
    MOV ECX,dword ptr [ESP + 0x324]     ; 005a5ffc
    PUSH ECX                            ; 005a6003
    LEA EAX,[EBX + 0x83c6c]             ; 005a6004
    PUSH EAX                            ; 005a600a
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a600b
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a6010
    PUSH ESI                            ; 005a6013
    LEA ESI,[ESP + 0x190]               ; 005a6014
    LEA EDI,[ESP + 0xb8]                ; 005a601b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70 ; 005a6022
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005a6027
    LEA ESI,[ESP + 0x190]               ; 005a602c
    ADD ESP,0x4                         ; 005a6033
    MOVSD.REP ES:EDI,ESI                ; 005a6036
    LEA EDX,[EBX + 0x2788]              ; 005a6038
    LEA EDI,[ESP + 0xb4]                ; 005a603e
    MOV ESI,EDX                         ; 005a6045
    CMP EDX,EDI                         ; 005a6047
    JZ 0x005a6068                       ; 005a6049
        ;   XREF to: 005a6068 (CONDITIONAL_JUMP)  ; LAB_005a6068
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005a604b
    MOV dword ptr [EDX],EAX             ; 005a6052
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005a6054
    MOV dword ptr [EDX + 0x4],EAX       ; 005a605b
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005a605e
    MOV dword ptr [EDX + 0x8],EAX       ; 005a6065
    LEA EDX,[EDI + 0xc]                 ; 005a6068
        ;   Label: LAB_005a6068
    LEA EAX,[ESI + 0xc]                 ; 005a606b
    CMP EAX,EDX                         ; 005a606e
    JZ 0x005a6082                       ; 005a6070
        ;   XREF to: 005a6082 (CONDITIONAL_JUMP)  ; LAB_005a6082
    MOV ECX,dword ptr [EDX]             ; 005a6072
    MOV dword ptr [EAX],ECX             ; 005a6074
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a6076
    MOV dword ptr [EAX + 0x4],ECX       ; 005a6079
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a607c
    MOV dword ptr [EAX + 0x8],ECX       ; 005a607f
    LEA EAX,[EBX + 0xc268]              ; 005a6082
        ;   Label: LAB_005a6082
    PUSH EAX                            ; 005a6088
    LEA ESI,[ESP + 0x118]               ; 005a6089
    LEA EDI,[ESP + 0x130]               ; 005a6090
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70 ; 005a6097
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005a609c
    LEA ESI,[ESP + 0x118]               ; 005a60a1
    ADD ESP,0x4                         ; 005a60a8
    LEA EAX,[ESP + 0x12c]               ; 005a60ab
    MOVSD.REP ES:EDI,ESI                ; 005a60b2
    PUSH EAX                            ; 005a60b4
    LEA ESI,[EBX + 0x2788]              ; 005a60b5
    PUSH ESI                            ; 005a60bb
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005a60bc
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a60c1
    LEA EAX,[ESP + 0x138]               ; 005a60c4
    PUSH EAX                            ; 005a60cb
    PUSH ESI                            ; 005a60cc
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005a60cd
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a60d2
    JMP 0x005a5b9f                      ; 005a60d5
        ;   XREF to: 005a5b9f (UNCONDITIONAL_JUMP)  ; LAB_005a5b9f
    FLD float ptr [EBX + 0x2504]        ; 005a60da
        ;   Label: LAB_005a60da
    FSUB float ptr [EBX + 0x24]         ; 005a60e0
    FLD float ptr [ESP + 0x2cc]         ; 005a60e3
    FDIV float ptr [ESP + 0x2c8]        ; 005a60ea
    FMULP                               ; 005a60f1
    FADD float ptr [EBX + 0x24]         ; 005a60f3
    JMP 0x005a5f3a                      ; 005a60f6
        ;   XREF to: 005a5f3a (UNCONDITIONAL_JUMP)  ; LAB_005a5f3a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a60fb
        ;   Label: LAB_005a60fb
    MOV dword ptr [ESP + 0x2bc],EAX     ; 005a60fe
    LEA EAX,[EBX + 0x158]               ; 005a6105
    FLDZ                                ; 005a610b
    MOV dword ptr [ESP + 0x308],EAX     ; 005a610d
    FCOMP float ptr [EBP + 0x18]        ; 005a6114
    FNSTSW AX                           ; 005a6117
    SAHF                                ; 005a6119
    JNC 0x005a6163                      ; 005a611a
        ;   XREF to: 005a6163 (CONDITIONAL_JUMP)  ; LAB_005a6163
    LEA EAX,[ESP + 0x2bc]               ; 005a611c
        ;   Label: LAB_005a611c
    PUSH EAX                            ; 005a6123
    MOV ESI,dword ptr [ESP + 0x30c]     ; 005a6124
    PUSH ESI                            ; 005a612b
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005a612c
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005a6131
    CMP EAX,0x2                         ; 005a6134
    JNC 0x005a649b                      ; 005a6137
        ;   XREF to: 005a649b (CONDITIONAL_JUMP)  ; LAB_005a649b
    CMP EAX,0x1                         ; 005a613d
    JNZ 0x005a6155                      ; 005a6140
        ;   XREF to: 005a6155 (CONDITIONAL_JUMP)  ; LAB_005a6155
    PUSH EBX                            ; 005a6142
    CALL core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_005a7160 ; 005a6143
        ;   XREF to: 005a7160 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_005a7160(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005a6148
        ;   Label: LAB_005a6148
    MOV dword ptr [EBX + 0xbf3d0],0x3f800000 ; 005a614b
    FLDZ                                ; 005a6155
        ;   Label: LAB_005a6155
    FCOMP float ptr [ESP + 0x2bc]       ; 005a6157
    FNSTSW AX                           ; 005a615e
    SAHF                                ; 005a6160
    JC 0x005a611c                       ; 005a6161
        ;   XREF to: 005a611c (CONDITIONAL_JUMP)  ; LAB_005a611c
    MOV ECX,dword ptr [ESP + 0x308]     ; 005a6163
        ;   Label: LAB_005a6163
    PUSH ECX                            ; 005a616a
    LEA ESI,[ESP + 0xd0]                ; 005a616b
    LEA EDI,[ESP + 0x88]                ; 005a6172
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70 ; 005a6179
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0056ae70(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005a617e
    LEA ESI,[ESP + 0xd0]                ; 005a6183
    ADD ESP,0x4                         ; 005a618a
    MOVSD.REP ES:EDI,ESI                ; 005a618d
    LEA EDX,[EBX + 0x2788]              ; 005a618f
    LEA ESI,[ESP + 0x84]                ; 005a6195
    MOV EDI,EDX                         ; 005a619c
    CMP EDX,ESI                         ; 005a619e
    JZ 0x005a61bf                       ; 005a61a0
        ;   XREF to: 005a61bf (CONDITIONAL_JUMP)  ; LAB_005a61bf
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a61a2
    MOV dword ptr [EDX],EAX             ; 005a61a9
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a61ab
    MOV dword ptr [EDX + 0x4],EAX       ; 005a61b2
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a61b5
    MOV dword ptr [EDX + 0x8],EAX       ; 005a61bc
    LEA EDX,[ESI + 0xc]                 ; 005a61bf
        ;   Label: LAB_005a61bf
    LEA EAX,[EDI + 0xc]                 ; 005a61c2
    CMP EAX,EDX                         ; 005a61c5
    JZ 0x005a61d9                       ; 005a61c7
        ;   XREF to: 005a61d9 (CONDITIONAL_JUMP)  ; LAB_005a61d9
    MOV ECX,dword ptr [EDX]             ; 005a61c9
    MOV dword ptr [EAX],ECX             ; 005a61cb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a61cd
    MOV dword ptr [EAX + 0x4],ECX       ; 005a61d0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a61d3
    MOV dword ptr [EAX + 0x8],ECX       ; 005a61d6
    LEA ESI,[EBX + 0x158]               ; 005a61d9
        ;   Label: LAB_005a61d9
    PUSH ESI                            ; 005a61df
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005a61e0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a61e5
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a61e8
    MOV dword ptr [ESP + 0x2c4],EAX     ; 005a61eb
    CMP EAX,0x9                         ; 005a61f2
    JA 0x005a624e                       ; 005a61f5
        ;   XREF to: 005a624e (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x5a5524]  ; 005a61f7 | caseD_0 | caseD_9 | caseD_2
        ;   Label: switchD
    FLD float ptr [0x006077b4]          ; 005a61fe | DAT_006077b4
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 005a6204
    MOV EAX,[0x0061d95c]                ; 005a6207 | g_CGamePtr
    FSTP float ptr [EBX + 0x2528]       ; 005a620c
    CMP dword ptr [EAX + 0x244],0x0     ; 005a6212 | g_CGameInstance.letterbox_mode
    JZ 0x005a6822                       ; 005a6219
        ;   XREF to: 005a6822 (CONDITIONAL_JUMP)  ; LAB_005a6822
    PUSH 0x5f8d8f                       ; 005a621f | = "morphToBat"
    MOV ESI,dword ptr [0x0061b4d0]      ; 005a6224 | DAT_0061b4d0
    PUSH ESI                            ; 005a622a
    MOV dword ptr [EBX + 0xbf3d0],0x40400000 ; 005a622b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005a6235
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a623a
    TEST EAX,EAX                        ; 005a623d
    JZ 0x005a64ba                       ; 005a623f
        ;   XREF to: 005a64ba (CONDITIONAL_JUMP)  ; LAB_005a64ba
    PUSH EBX                            ; 005a6245
        ;   Label: LAB_005a6245
    CALL core_vampboss.cpp_CVampireBoss_transformToBat_FUN_005a7250 ; 005a6246
        ;   XREF to: 005a7250 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_transformToBat_FUN_005a7250(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005a624b
        ;   Label: LAB_005a624b
    MOV EAX,[0x0061d95c]                ; 005a624e | g_CGamePtr
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x244],0x0     ; 005a6253 | g_CGameInstance.letterbox_mode
    JNZ 0x005a62e0                      ; 005a625a
        ;   XREF to: 005a62e0 (CONDITIONAL_JUMP)  ; LAB_005a62e0
    CMP dword ptr [ESP + 0x2c4],0x2     ; 005a6260
    JZ 0x005a62e0                       ; 005a6268
        ;   XREF to: 005a62e0 (CONDITIONAL_JUMP)  ; LAB_005a62e0
    FLD float ptr [EBP + 0x18]          ; 005a626a
    FMUL double ptr [0x005f8df0]        ; 005a626d | DAT_005f8df0
    LEA EAX,[EBX + 0x250c]              ; 005a6273
    LEA EDI,[ESP + 0x234]               ; 005a6279
    LEA ESI,[ESP + 0x210]               ; 005a6280
    FLD float ptr [EAX + 0x4]           ; 005a6287
    FLD float ptr [EAX + 0x8]           ; 005a628a
    LEA EDX,[EBX + 0x249c]              ; 005a628d
    FLD float ptr [EAX]                 ; 005a6293
    LEA EAX,[ESP + 0x234]               ; 005a6295
    FADD float ptr [EDX]                ; 005a629c
    FXCH ST2                            ; 005a629e
    FADD float ptr [EDX + 0x4]          ; 005a62a0
    FXCH                                ; 005a62a3
    FADD float ptr [EDX + 0x8]          ; 005a62a5
    FXCH ST2                            ; 005a62a8
    FSTP float ptr [ESP + 0x210]        ; 005a62aa
    FSTP float ptr [ESP + 0x214]        ; 005a62b1
    FSTP float ptr [ESP + 0x218]        ; 005a62b8
    MOVSD ES:EDI,ESI                    ; 005a62bf
    MOVSD ES:EDI,ESI                    ; 005a62c0
    MOVSD ES:EDI,ESI                    ; 005a62c1
    PUSH EAX                            ; 005a62c2
    FLD float ptr [ESP + 0x23c]         ; 005a62c3
    FXCH                                ; 005a62ca
    FSUBR ST0,ST1                       ; 005a62cc
    PUSH EBX                            ; 005a62ce
    FSTP ST1                            ; 005a62cf
    FSTP float ptr [ESP + 0x240]        ; 005a62d1
    CALL core_charactr.cpp_FUN_0042d750 ; 005a62d8
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005a62dd
    LEA EAX,[EBX + 0x250c]              ; 005a62e0
        ;   Label: LAB_005a62e0
    MOV dword ptr [EAX + 0x8],0x0       ; 005a62e6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a62ed
    MOV dword ptr [EAX + 0x4],EDX       ; 005a62f0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a62f3
    MOV dword ptr [EAX],EDX             ; 005a62f6
    LEA EAX,[EBX + 0x249c]              ; 005a62f8
    MOV dword ptr [EAX + 0x8],0x0       ; 005a62fe
    PUSH EBX                            ; 005a6305
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a6306
    MOV dword ptr [EAX + 0x4],EDX       ; 005a6309
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a630c
    MOV dword ptr [EAX],EDX             ; 005a630f
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 005a6311
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005a6316
    LEA ESI,[EBX + 0x158]               ; 005a6319
    PUSH ESI                            ; 005a631f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005a6320
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a6325
    PUSH dword ptr [EBP + 0x18]         ; 005a6328
    PUSH EBX                            ; 005a632b
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 005a632c
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a6331
    PUSH ESI                            ; 005a6334
    PUSH dword ptr [EBX + 0x2504]       ; 005a6335
    LEA EDI,[EBX + 0x30]                ; 005a633b
    PUSH dword ptr [EBP + 0x18]         ; 005a633e
    PUSH EDI                            ; 005a6341
    LEA EAX,[EBX + 0x20]                ; 005a6342
    PUSH EAX                            ; 005a6345
    MOV dword ptr [ESP + 0x328],EAX     ; 005a6346
    LEA EAX,[EBX + 0x4913c]             ; 005a634d
    PUSH EAX                            ; 005a6353
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a6354
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a6359
    PUSH ESI                            ; 005a635c
    PUSH dword ptr [EBX + 0x2504]       ; 005a635d
    PUSH dword ptr [EBP + 0x18]         ; 005a6363
    PUSH EDI                            ; 005a6366
    MOV ECX,dword ptr [ESP + 0x324]     ; 005a6367
    PUSH ECX                            ; 005a636e
    LEA EAX,[EBX + 0x83c6c]             ; 005a636f
    PUSH EAX                            ; 005a6375
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005a6376
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005a637b
    JMP 0x005a5b9f                      ; 005a637e
        ;   XREF to: 005a5b9f (UNCONDITIONAL_JUMP)  ; LAB_005a5b9f
    PUSH EBX                            ; 005a6383
        ;   Label: LAB_005a6383
    CALL core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0 ; 005a6384
        ;   XREF to: 005a71e0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0(CVampireBoss * this_ptr)
    JMP 0x005a6148                      ; 005a6389
        ;   XREF to: 005a6148 (UNCONDITIONAL_JUMP)  ; LAB_005a6148
    PUSH EBX                            ; 005a638e
        ;   Label: LAB_005a638e
    CALL core_vampboss.cpp_CVampireBoss_summonBats_FUN_005a70f0 ; 005a638f
        ;   XREF to: 005a70f0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_summonBats_FUN_005a70f0(CVampireBoss * this_ptr)
    JMP 0x005a6148                      ; 005a6394
        ;   XREF to: 005a6148 (UNCONDITIONAL_JUMP)  ; LAB_005a6148
    PUSH 0x0                            ; 005a6399
        ;   Label: LAB_005a6399
    PUSH 0x0                            ; 005a639b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a639d
    PUSH EBX                            ; 005a63a3
    CALL dword ptr [EAX + 0x128]        ; 005a63a4
    MOV EAX,0x41a00000                  ; 005a63aa
    ADD ESP,0xc                         ; 005a63af
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005a63b2
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005a63b9
    LEA EAX,[ESP + 0x1bc]               ; 005a63c0
    PUSH EAX                            ; 005a63c7
    XOR EDI,EDI                         ; 005a63c8
    PUSH EBX                            ; 005a63ca
    LEA ESI,[ESP + 0x1b8]               ; 005a63cb
    MOV dword ptr [ESP + 0x1c4],EDI     ; 005a63d2
    CALL core_actor.cpp_FUN_00408ac0    ; 005a63d9
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 005a63de
    PUSH 0x0                            ; 005a63e1
    LEA EAX,[ESP + 0x274]               ; 005a63e3
    PUSH 0xbf800000                     ; 005a63ea
    PUSH EAX                            ; 005a63ef
    LEA EDI,[ESP + 0x27c]               ; 005a63f0
    LEA ESI,[ESP + 0x1bc]               ; 005a63f7
    PUSH EBX                            ; 005a63fe
    MOVSD ES:EDI,ESI                    ; 005a63ff
    MOVSD ES:EDI,ESI                    ; 005a6400
    MOVSD ES:EDI,ESI                    ; 005a6401
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00430d90 ; 005a6402
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00430d90(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 005a6407
    XOR ECX,ECX                         ; 005a640a
    XOR EDI,EDI                         ; 005a640c
    MOV dword ptr [ESP + 0x30c],ECX     ; 005a640e
        ;   Label: LAB_005a640e
    MOV EAX,[0x00622c18]                ; 005a6415 | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x30c]     ; 005a641a
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 005a6421 | g_CDemonSetInstance.enemy_count
    JGE 0x005a6155                      ; 005a6427
        ;   XREF to: 005a6155 (CONDITIONAL_JUMP)  ; LAB_005a6155
    MOV EDX,dword ptr [0x02c8aee8]      ; 005a642d | g_CTVBatClassInfo.name_hash
    PUSH EDX                            ; 005a6433
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 005a6434
    PUSH ECX                            ; 005a643b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005a643c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005a6441
    ADD ESP,0x8                         ; 005a6443
    TEST EAX,EAX                        ; 005a6446
    JNZ 0x005a6457                      ; 005a6448
        ;   XREF to: 005a6457 (CONDITIONAL_JUMP)  ; LAB_005a6457
    MOV ECX,dword ptr [ESP + 0x30c]     ; 005a644a
        ;   Label: LAB_005a644a
    INC ECX                             ; 005a6451
    ADD EDI,0x4                         ; 005a6452
    JMP 0x005a640e                      ; 005a6455
        ;   XREF to: 005a640e (UNCONDITIONAL_JUMP)  ; LAB_005a640e
    CMP dword ptr [EAX + 0xc410],0x0    ; 005a6457
        ;   Label: LAB_005a6457
    JZ 0x005a644a                       ; 005a645e
        ;   XREF to: 005a644a (CONDITIONAL_JUMP)  ; LAB_005a644a
    LEA EAX,[ESP + 0xc]                 ; 005a6460
    PUSH EAX                            ; 005a6464
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005a6465
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EDX,0x4479c000                  ; 005a646a
    ADD ESP,0x4                         ; 005a646f
    MOV dword ptr [ESP + 0x10],EDX      ; 005a6472
    LEA EDX,[ESP + 0xc]                 ; 005a6476
    PUSH EDX                            ; 005a647a
    MOV EAX,dword ptr [ESI + 0x154]     ; 005a647b
    PUSH ESI                            ; 005a6481
    CALL dword ptr [EAX + 0x108]        ; 005a6482
    ADD ESP,0x8                         ; 005a6488
    MOV ECX,dword ptr [ESP + 0x30c]     ; 005a648b
    INC ECX                             ; 005a6492
    ADD EDI,0x4                         ; 005a6493
    JMP 0x005a640e                      ; 005a6496
        ;   XREF to: 005a640e (UNCONDITIONAL_JUMP)  ; LAB_005a640e
    JBE 0x005a6383                      ; 005a649b
        ;   XREF to: 005a6383 (CONDITIONAL_JUMP)  ; LAB_005a6383
        ;   Label: LAB_005a649b
    CMP EAX,0x3                         ; 005a64a1
    JBE 0x005a638e                      ; 005a64a4
        ;   XREF to: 005a638e (CONDITIONAL_JUMP)  ; LAB_005a638e
    CMP EAX,0x29a                       ; 005a64aa
    JZ 0x005a6399                       ; 005a64af
        ;   XREF to: 005a6399 (CONDITIONAL_JUMP)  ; LAB_005a6399
    JMP 0x005a6155                      ; 005a64b5
        ;   XREF to: 005a6155 (UNCONDITIONAL_JUMP)  ; LAB_005a6155
    MOV EAX,[0x01d06ab4]                ; 005a64ba | DAT_01d06ab4
        ;   Label: LAB_005a64ba
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a64bf
    LEA EDI,[ESP + 0x264]               ; 005a64c6
    LEA ESI,[ESP + 0x1ec]               ; 005a64cd
    FLD float ptr [EDX + 0x20]          ; 005a64d4
    FLD float ptr [EDX + 0x24]          ; 005a64d7
    LEA EAX,[EBX + 0x20]                ; 005a64da
    FLD float ptr [EDX + 0x28]          ; 005a64dd
    FXCH ST2                            ; 005a64e0
    FSUB float ptr [EAX]                ; 005a64e2
    FXCH                                ; 005a64e4
    FSUB float ptr [EAX + 0x4]          ; 005a64e6
    FXCH ST2                            ; 005a64e9
    FSUB float ptr [EAX + 0x8]          ; 005a64eb
    FXCH                                ; 005a64ee
    FSTP float ptr [ESP + 0x1ec]        ; 005a64f0
    FXCH                                ; 005a64f7
    FSTP float ptr [ESP + 0x1f0]        ; 005a64f9
    FSTP float ptr [ESP + 0x1f4]        ; 005a6500
    LEA EAX,[ESP + 0x264]               ; 005a6507
    MOVSD ES:EDI,ESI                    ; 005a650e
    MOVSD ES:EDI,ESI                    ; 005a650f
    MOVSD ES:EDI,ESI                    ; 005a6510
    PUSH EAX                            ; 005a6511
    LEA ESI,[ESP + 0x22c]               ; 005a6512
    LEA EDI,[ESP + 0x220]               ; 005a6519
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 005a6520
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x22c]               ; 005a6525
    ADD ESP,0x4                         ; 005a652c
    MOVSD ES:EDI,ESI                    ; 005a652f
    MOVSD ES:EDI,ESI                    ; 005a6530
    MOVSD ES:EDI,ESI                    ; 005a6531
    FLD float ptr [ESP + 0x220]         ; 005a6532
    FSUB float ptr [EBX + 0x34]         ; 005a6539
    SUB ESP,0x4                         ; 005a653c
    FSTP float ptr [ESP]                ; 005a653f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a6542
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 005a6547
    MOV EAX,dword ptr [ESP + 0x318]     ; 005a654e
    MOV dword ptr [EBX + 0x2508],EAX    ; 005a6555
    ADD ESP,0x4                         ; 005a655b
    MOV EAX,dword ptr [EBX + 0x2508]    ; 005a655e
    MOV dword ptr [ESP + 0x304],EAX     ; 005a6564
    MOV EAX,dword ptr [EBX + 0x2528]    ; 005a656b
    PUSH dword ptr [ESP + 0x304]        ; 005a6571
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005a6578
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a657f
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 005a6584
    FLD float ptr [ESP + 0x318]         ; 005a658b
    ADD ESP,0x4                         ; 005a6592
    FLD float ptr [ESP + 0x2e4]         ; 005a6595
    FXCH                                ; 005a659c
    FST float ptr [ESP + 0x304]         ; 005a659e
    FXCH                                ; 005a65a5
    FCHS                                ; 005a65a7
    FSTP float ptr [ESP + 0x2d4]        ; 005a65a9
    FCOMP float ptr [ESP + 0x2d4]       ; 005a65b0
    FNSTSW AX                           ; 005a65b7
    SAHF                                ; 005a65b9
    JNC 0x005a65dc                      ; 005a65ba
        ;   XREF to: 005a65dc (CONDITIONAL_JUMP)  ; LAB_005a65dc
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 005a65bc
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005a65c3
        ;   Label: LAB_005a65c3
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 005a65ca
    MOV dword ptr [EBX + 0x2508],EAX    ; 005a65d1
    JMP 0x005a624e                      ; 005a65d7
        ;   XREF to: 005a624e (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [ESP + 0x304]         ; 005a65dc
        ;   Label: LAB_005a65dc
    FCOMP float ptr [ESP + 0x2e4]       ; 005a65e3
    FNSTSW AX                           ; 005a65ea
    SAHF                                ; 005a65ec
    JBE 0x005a65f8                      ; 005a65ed
        ;   XREF to: 005a65f8 (CONDITIONAL_JUMP)  ; LAB_005a65f8
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 005a65ef
    JMP 0x005a65c3                      ; 005a65f6
        ;   XREF to: 005a65c3 (UNCONDITIONAL_JUMP)  ; LAB_005a65c3
    MOV EAX,dword ptr [ESP + 0x304]     ; 005a65f8
        ;   Label: LAB_005a65f8
    JMP 0x005a65c3                      ; 005a65ff
        ;   XREF to: 005a65c3 (UNCONDITIONAL_JUMP)  ; LAB_005a65c3
    FLD float ptr [EBX + 0x253c]        ; 005a6601
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 005a6607
    FDIV float ptr [0x006077b8]         ; 005a660a | DAT_006077b8
    FADD float ptr [EBX + 0x2538]       ; 005a6610
    FST float ptr [EBX + 0x2538]        ; 005a6616
    FCOMP double ptr [0x005f8de8]       ; 005a661c | DAT_005f8de8
    FNSTSW AX                           ; 005a6622
    SAHF                                ; 005a6624
    JA 0x005a6245                       ; 005a6625
        ;   XREF to: 005a6245 (CONDITIONAL_JUMP)  ; LAB_005a6245
    LEA ESI,[EBX + 0x20]                ; 005a662b
    PUSH 0x41400000                     ; 005a662e
    PUSH ESI                            ; 005a6633
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 005a6634
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 005a6639
    TEST EAX,EAX                        ; 005a663c
    JNZ 0x005a6808                      ; 005a663e
        ;   XREF to: 005a6808 (CONDITIONAL_JUMP)  ; LAB_005a6808
    MOV EAX,[0x01d06ab4]                ; 005a6644 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a6649
    LEA EDI,[ESP + 0x24c]               ; 005a6650
    FLD float ptr [EAX + 0x24]          ; 005a6657
    FLD float ptr [EAX + 0x28]          ; 005a665a
    FLD float ptr [EAX + 0x20]          ; 005a665d
    LEA EAX,[ESP + 0x24c]               ; 005a6660
    FSUB float ptr [ESI]                ; 005a6667
    FXCH ST2                            ; 005a6669
    FSUB float ptr [ESI + 0x4]          ; 005a666b
    FXCH                                ; 005a666e
    FSUB float ptr [ESI + 0x8]          ; 005a6670
    FXCH ST2                            ; 005a6673
    FSTP float ptr [ESP + 0x1c8]        ; 005a6675
    FSTP float ptr [ESP + 0x1cc]        ; 005a667c
    LEA ESI,[ESP + 0x1c8]               ; 005a6683
    FSTP float ptr [ESP + 0x1d0]        ; 005a668a
    MOVSD ES:EDI,ESI                    ; 005a6691
    MOVSD ES:EDI,ESI                    ; 005a6692
    MOVSD ES:EDI,ESI                    ; 005a6693
    PUSH EAX                            ; 005a6694
    LEA ESI,[ESP + 0x1d8]               ; 005a6695
    LEA EDI,[ESP + 0x25c]               ; 005a669c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 005a66a3
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x1d8]               ; 005a66a8
    ADD ESP,0x4                         ; 005a66af
    MOVSD ES:EDI,ESI                    ; 005a66b2
    MOVSD ES:EDI,ESI                    ; 005a66b3
    MOVSD ES:EDI,ESI                    ; 005a66b4
    FLD float ptr [ESP + 0x25c]         ; 005a66b5
    FSUB float ptr [EBX + 0x34]         ; 005a66bc
    SUB ESP,0x4                         ; 005a66bf
    FSTP float ptr [ESP]                ; 005a66c2
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a66c5
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 005a66ca
    MOV EAX,dword ptr [ESP + 0x318]     ; 005a66d1
    MOV dword ptr [EBX + 0x2508],EAX    ; 005a66d8
    ADD ESP,0x4                         ; 005a66de
    MOV EAX,dword ptr [EBX + 0x2508]    ; 005a66e1
    MOV dword ptr [ESP + 0x2fc],EAX     ; 005a66e7
    MOV EAX,dword ptr [EBX + 0x2528]    ; 005a66ee
    PUSH dword ptr [ESP + 0x2fc]        ; 005a66f4
    MOV dword ptr [ESP + 0x2e0],EAX     ; 005a66fb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a6702
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 005a6707
    FLD float ptr [ESP + 0x318]         ; 005a670e
    ADD ESP,0x4                         ; 005a6715
    FLD float ptr [ESP + 0x2dc]         ; 005a6718
    FXCH                                ; 005a671f
    FST float ptr [ESP + 0x2fc]         ; 005a6721
    FXCH                                ; 005a6728
    FCHS                                ; 005a672a
    FSTP float ptr [ESP + 0x2d8]        ; 005a672c
    FCOMP float ptr [ESP + 0x2d8]       ; 005a6733
    FNSTSW AX                           ; 005a673a
    SAHF                                ; 005a673c
    JNC 0x005a67ba                      ; 005a673d
        ;   XREF to: 005a67ba (CONDITIONAL_JUMP)  ; LAB_005a67ba
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 005a6743
    MOV dword ptr [ESP + 0x2f0],EAX     ; 005a674a
        ;   Label: LAB_005a674a
    FLD float ptr [EBX + 0xbf3d0]       ; 005a6751
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 005a6757
    FSUB float ptr [EBP + 0x18]         ; 005a675e
    MOV dword ptr [EBX + 0x2508],EAX    ; 005a6761
    FST float ptr [EBX + 0xbf3d0]       ; 005a6767
    FLDZ                                ; 005a676d
    FCOMPP                              ; 005a676f
    FNSTSW AX                           ; 005a6771
    SAHF                                ; 005a6773
    JC 0x005a624e                       ; 005a6774
        ;   XREF to: 005a624e (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 005a677a
    PUSH 0x0                            ; 005a677c
    MOV dword ptr [EBX + 0xbf3d0],0x0   ; 005a677e
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005a6788
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a678d
    LEA EDX,[EBX + 0x158]               ; 005a6790
    TEST EAX,EAX                        ; 005a6796
    JZ 0x005a67e5                       ; 005a6798
        ;   XREF to: 005a67e5 (CONDITIONAL_JUMP)  ; LAB_005a67e5
    CMP EAX,0x1                         ; 005a679a
    JZ 0x005a67f7                       ; 005a679d
        ;   XREF to: 005a67f7 (CONDITIONAL_JUMP)  ; LAB_005a67f7
    CMP EAX,0x2                         ; 005a679f
    JNZ 0x005a624e                      ; 005a67a2
        ;   XREF to: 005a624e (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x1                            ; 005a67a8
    PUSH 0x6                            ; 005a67aa
    PUSH EDX                            ; 005a67ac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a67ad
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a67b2
    JMP 0x005a624e                      ; 005a67b5
        ;   XREF to: 005a624e (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [ESP + 0x2fc]         ; 005a67ba
        ;   Label: LAB_005a67ba
    FCOMP float ptr [ESP + 0x2dc]       ; 005a67c1
    FNSTSW AX                           ; 005a67c8
    SAHF                                ; 005a67ca
    JBE 0x005a67d9                      ; 005a67cb
        ;   XREF to: 005a67d9 (CONDITIONAL_JUMP)  ; LAB_005a67d9
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005a67cd
    JMP 0x005a674a                      ; 005a67d4
        ;   XREF to: 005a674a (UNCONDITIONAL_JUMP)  ; LAB_005a674a
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 005a67d9
        ;   Label: LAB_005a67d9
    JMP 0x005a674a                      ; 005a67e0
        ;   XREF to: 005a674a (UNCONDITIONAL_JUMP)  ; LAB_005a674a
    PUSH 0x1                            ; 005a67e5
        ;   Label: LAB_005a67e5
    PUSH 0x4                            ; 005a67e7
    PUSH EDX                            ; 005a67e9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a67ea
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a67ef
    JMP 0x005a624e                      ; 005a67f2
        ;   XREF to: 005a624e (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH EAX                            ; 005a67f7
        ;   Label: LAB_005a67f7
    PUSH 0x5                            ; 005a67f8
    PUSH EDX                            ; 005a67fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a67fb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a6800
    JMP 0x005a624e                      ; 005a6803
        ;   XREF to: 005a624e (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH EBX                            ; 005a6808
        ;   Label: LAB_005a6808
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0 ; 005a6809
        ;   XREF to: 005a72e0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(CVampireBoss * this_ptr)
    JMP 0x005a624b                      ; 005a680e
        ;   XREF to: 005a624b (UNCONDITIONAL_JUMP)  ; LAB_005a624b
    MOV dword ptr [EBX + 0xbf3d0],0x40400000 ; 005a6813
        ;   Label: caseD_1
    JMP 0x005a624e                      ; 005a681d
        ;   XREF to: 005a624e (UNCONDITIONAL_JUMP)  ; caseD_9
    LEA EAX,[EBX + 0xbf3f8]             ; 005a6822
        ;   Label: LAB_005a6822
    FLD float ptr [0x006077b0]          ; 005a6828 | DAT_006077b0
    PUSH EAX                            ; 005a682e
    FMUL float ptr [EBP + 0x18]         ; 005a682f
    PUSH 0x497423f0                     ; 005a6832
    MOV EAX,dword ptr [EBX + 0xbf3e4]   ; 005a6837
    FSTP float ptr [EBX + 0x2524]       ; 005a683d
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xbf3e8] ; 005a6843
    PUSH 0x3e4ccccd                     ; 005a684a
    PUSH ECX                            ; 005a684f
    PUSH EBX                            ; 005a6850
    CALL core_charactr.cpp_FUN_00431cc0 ; 005a6851
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    MOV EAX,dword ptr [EBX + 0xbf3f8]   ; 005a6856
    ADD ESP,0x14                        ; 005a685c
    CMP EAX,0x3                         ; 005a685f
    JA 0x005a6601                       ; 005a6862
        ;   XREF to: 005a6601 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5a5514]  ; 005a6868 | caseD_3 | caseD_2 | switchdataD_005a5514
        ;   Label: switchD
    PUSH 0x5f8d9a                       ; 005a686f | = "flyout"
        ;   Label: caseD_2
    MOV EDI,dword ptr [0x0061b4d0]      ; 005a6874 | DAT_0061b4d0
    PUSH EDI                            ; 005a687a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005a687b
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a6880
    TEST EAX,EAX                        ; 005a6883
    JZ 0x005a624e                       ; 005a6885
        ;   XREF to: 005a624e (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x1                            ; 005a688b
    PUSH 0x0                            ; 005a688d
    PUSH ESI                            ; 005a688f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a6890
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a6895
    JMP 0x005a624e                      ; 005a6898
        ;   XREF to: 005a624e (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [EBX + 0x2538]        ; 005a689d
        ;   Label: LAB_005a689d
    FDIV float ptr [EBX + 0x253c]       ; 005a68a3
    PUSH 0x3f000000                     ; 005a68a9
    SUB ESP,0x4                         ; 005a68ae
    ADD EBX,0x2544                      ; 005a68b1
    FSTP float ptr [ESP]                ; 005a68b7
    PUSH EBX                            ; 005a68ba
    PUSH EAX                            ; 005a68bb | g_CGameInstance
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004d6340 ; 005a68bc
        ;   XREF to: 004d6340 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004d6340(CGame * this_ptr, char * name, float value, float duration)
    ADD ESP,0x10                        ; 005a68c1
    MOV ESP,EBP                         ; 005a68c4
    POP EBP                             ; 005a68c6
    POP EDI                             ; 005a68c7
    POP ESI                             ; 005a68c8
    POP EBX                             ; 005a68c9
    RET                                 ; 005a68ca

