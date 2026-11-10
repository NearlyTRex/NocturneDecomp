; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10c]:4  local_10c
; undefined8       Stack[-0x108]:8  local_108
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 at 00588bb6
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_005f6b09
;   TerminatedCString s_CStranger_makeDrawDecisi_005f6b1e
;   undefined4 DAT_005f6b59
;   undefined4 DAT_005f6b61
;   undefined4 DAT_005f6b69
;   undefined4 DAT_005f6b71
;   undefined4 DAT_005f6b79
;   undefined4 DAT_005f6b81
;   undefined4 DAT_005f6b85
;   undefined4 DAT_006060b0
;   undefined4 DAT_006060b4
;   undefined4 DAT_006060b8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8360c
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_motion.cpp_FUN_00524a40
;   core_motion.cpp_FUN_00525020
;   core_motion.cpp_FUN_00525110
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00568100
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0
;   core_xform.cpp_quaternionFromAngleX_FUN_005b7af0
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a360
        ;   Label: core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360
    PUSH ESI                            ; 0058a361
    PUSH EDI                            ; 0058a362
    PUSH EBP                            ; 0058a363
    MOV EBP,ESP                         ; 0058a364
    SUB ESP,0xf4                        ; 0058a366
    AND ESP,0xfffffff8                  ; 0058a36c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058a36f
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 0058a372
    TEST EDX,EDX                        ; 0058a378
    JL 0x0058a381                       ; 0058a37a
        ;   XREF to: 0058a381 (CONDITIONAL_JUMP)  ; LAB_0058a381
    CMP EDX,0x16                        ; 0058a37c
    JL 0x0058a3a4                       ; 0058a37f
        ;   XREF to: 0058a3a4 (CONDITIONAL_JUMP)  ; LAB_0058a3a4
    MOV ESI,0x5f6b09                    ; 0058a381 | = "..\\core\\stranger.cpp"
        ;   Label: LAB_0058a381
    MOV EDI,0xae2                       ; 0058a386
    PUSH 0x5f6b1e                       ; 0058a38b | = "CStranger::makeDrawDecision - draw mo..."
    MOV dword ptr [0x01d1d400],ESI      ; 0058a390 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0058a396 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0058a39c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0058a3a1
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0058a3a4
        ;   Label: LAB_0058a3a4
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0058a3ac
    SHL EAX,0x3                         ; 0058a3b2
    MOV ESI,EAX                         ; 0058a3b5
    SHL EAX,0x3                         ; 0058a3b7
    SUB EAX,ESI                         ; 0058a3ba
    CMP dword ptr [EBX + EAX*0x1 + 0x27c8],0x0 ; 0058a3bc
    JNZ 0x0058a3d0                      ; 0058a3c4
        ;   XREF to: 0058a3d0 (CONDITIONAL_JUMP)  ; LAB_0058a3d0
    MOV EAX,dword ptr [EBX + 0x2c9c]    ; 0058a3c6
    MOV dword ptr [ESP + 0x10],EAX      ; 0058a3cc
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0058a3d0
        ;   Label: LAB_0058a3d0
    SHL EAX,0x3                         ; 0058a3d6
    MOV ESI,EAX                         ; 0058a3d9
    SHL EAX,0x3                         ; 0058a3db
    SUB EAX,ESI                         ; 0058a3de
    CMP dword ptr [EBX + EAX*0x1 + 0x27cc],0x0 ; 0058a3e0
    JNZ 0x0058a3fc                      ; 0058a3e8
        ;   XREF to: 0058a3fc (CONDITIONAL_JUMP)  ; LAB_0058a3fc
    FLD float ptr [EBX + 0x2c9c]        ; 0058a3ea
    FLD1                                ; 0058a3f0
    FSUBRP                              ; 0058a3f2
    FMUL float ptr [ESP + 0x10]         ; 0058a3f4
    FSTP float ptr [ESP + 0x10]         ; 0058a3f8
    PUSH 0x35                           ; 0058a3fc
        ;   Label: LAB_0058a3fc
    LEA ESI,[EBX + 0x158]               ; 0058a3fe
    PUSH ESI                            ; 0058a404
    CALL core_motion.cpp_FUN_00524a40   ; 0058a405
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe0],EAX      ; 0058a40a
    ADD ESP,0x8                         ; 0058a411
    PUSH 0x36                           ; 0058a414
    PUSH ESI                            ; 0058a416
    CALL core_motion.cpp_FUN_00524a40   ; 0058a417
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0058a41c
    FLD float ptr [ESP + 0xf8]          ; 0058a423
    ADD ESP,0x8                         ; 0058a42a
    PUSH 0x31                           ; 0058a42d
    FADD float ptr [ESP + 0xdc]         ; 0058a42f
    PUSH ESI                            ; 0058a436
    FSTP float ptr [ESP + 0xe0]         ; 0058a437
    CALL core_motion.cpp_FUN_00524a40   ; 0058a43e
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0058a443
    FLD float ptr [ESP + 0xf8]          ; 0058a44a
    ADD ESP,0x8                         ; 0058a451
    PUSH 0x2f                           ; 0058a454
    FADD float ptr [ESP + 0xdc]         ; 0058a456
    PUSH ESI                            ; 0058a45d
    FSTP float ptr [ESP + 0xe0]         ; 0058a45e
    CALL core_motion.cpp_FUN_00524a40   ; 0058a465
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0058a46a
    FLD float ptr [ESP + 0xf8]          ; 0058a471
    ADD ESP,0x8                         ; 0058a478
    FADD float ptr [ESP + 0xd8]         ; 0058a47b
    FLD1                                ; 0058a482
    FSUBRP                              ; 0058a484
    FLD float ptr [ESP + 0x10]          ; 0058a486
    FXCH                                ; 0058a48a
    FMUL ST1                            ; 0058a48c
    FLDZ                                ; 0058a48e
    FXCH                                ; 0058a490
    FSTP ST2                            ; 0058a492
    FXCH                                ; 0058a494
    FSTP float ptr [ESP + 0x10]         ; 0058a496
    FCOMP float ptr [ESP + 0x10]        ; 0058a49a
    FNSTSW AX                           ; 0058a49e
    SAHF                                ; 0058a4a0
    JBE 0x0058a4a9                      ; 0058a4a1
        ;   XREF to: 0058a4a9 (CONDITIONAL_JUMP)  ; LAB_0058a4a9
    XOR ESI,ESI                         ; 0058a4a3
    MOV dword ptr [ESP + 0x10],ESI      ; 0058a4a5
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0058a4a9
        ;   Label: LAB_0058a4a9
    JNZ 0x0058a53a                      ; 0058a4b0
        ;   XREF to: 0058a53a (CONDITIONAL_JUMP)  ; LAB_0058a53a
    LEA ESI,[EBX + 0x158]               ; 0058a4b6
    PUSH ESI                            ; 0058a4bc
    CALL core_motion.cpp_FUN_00525020   ; 0058a4bd
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xf4],EAX      ; 0058a4c2
    FLD float ptr [ESP + 0xf4]          ; 0058a4c9
    ADD ESP,0x4                         ; 0058a4d0
    MOV EAX,0x3f800000                  ; 0058a4d3
    PUSH ESI                            ; 0058a4d8
    FSTP float ptr [ESP + 0x18]         ; 0058a4d9
    MOV dword ptr [ESP + 0xf0],EAX      ; 0058a4dd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0058a4e4
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058a4e9
    ADD ESP,0x4                         ; 0058a4ec
    CMP EAX,0x22                        ; 0058a4ef
    JNZ 0x0058a983                      ; 0058a4f2
        ;   XREF to: 0058a983 (CONDITIONAL_JUMP)  ; LAB_0058a983
    FLD float ptr [ESP + 0x14]          ; 0058a4f8
        ;   Label: LAB_0058a4f8
    FADD double ptr [0x005f6b69]        ; 0058a4fc | DAT_005f6b69
    FMUL double ptr [0x005f6b61]        ; 0058a502 | DAT_005f6b61
        ;   Label: LAB_0058a502
    FSTP float ptr [ESP + 0xec]         ; 0058a508
    CMP dword ptr [ESP + 0xec],0x3f800000 ; 0058a50f
        ;   Label: LAB_0058a50f
    JLE 0x0058a9aa                      ; 0058a51a
        ;   XREF to: 0058a9aa (CONDITIONAL_JUMP)  ; LAB_0058a9aa
    MOV dword ptr [ESP + 0xec],0x3f800000 ; 0058a520
    FLD float ptr [ESP + 0x10]          ; 0058a52b
        ;   Label: LAB_0058a52b
    FMUL float ptr [ESP + 0xec]         ; 0058a52f
    FSTP float ptr [ESP + 0x10]         ; 0058a536
    FLD float ptr [ESP + 0x10]          ; 0058a53a
        ;   Label: LAB_0058a53a
    FST double ptr [ESP]                ; 0058a53e
    FCOMP double ptr [0x005f6b71]       ; 0058a541 | DAT_005f6b71
    FNSTSW AX                           ; 0058a547
    SAHF                                ; 0058a549
    JBE 0x0058a97c                      ; 0058a54a
        ;   XREF to: 0058a97c (CONDITIONAL_JUMP)  ; LAB_0058a97c
    FLD1                                ; 0058a550
    FCOMP double ptr [ESP]              ; 0058a552
    FNSTSW AX                           ; 0058a555
    SAHF                                ; 0058a557
    JNC 0x0058a562                      ; 0058a558
        ;   XREF to: 0058a562 (CONDITIONAL_JUMP)  ; LAB_0058a562
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0058a55a
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0058a562
        ;   Label: LAB_0058a562
    SHL EAX,0x3                         ; 0058a568
    MOV ESI,EAX                         ; 0058a56b
    SHL EAX,0x3                         ; 0058a56d
    SUB EAX,ESI                         ; 0058a570
    MOV ESI,EAX                         ; 0058a572
    LEA EAX,[EBX + 0x27c8]              ; 0058a574
    ADD EAX,ESI                         ; 0058a57a
    PUSH 0x1                            ; 0058a57c
    ADD EAX,0x8                         ; 0058a57e
    PUSH EAX                            ; 0058a581
    LEA ESI,[EBX + 0x158]               ; 0058a582
    PUSH ESI                            ; 0058a588
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0058a589
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058a58e
    PUSH EAX                            ; 0058a591
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0058a592
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0058a597
    PUSH dword ptr [EBX + 0x2c9c]       ; 0058a59a
    PUSH EAX                            ; 0058a5a0
    PUSH ESI                            ; 0058a5a1
    MOV dword ptr [ESP + 0xf4],EAX      ; 0058a5a2
    CALL core_motion.cpp_FUN_00525110   ; 0058a5a9
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0xfc],EAX      ; 0058a5ae
    FLD float ptr [ESP + 0xfc]          ; 0058a5b5
    ADD ESP,0xc                         ; 0058a5bc
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0058a5bf
    FSTP float ptr [ESP + 0xe4]         ; 0058a5c5
    CMP EAX,0x9                         ; 0058a5cc
    JNZ 0x0058a653                      ; 0058a5cf
        ;   XREF to: 0058a653 (CONDITIONAL_JUMP)  ; LAB_0058a653
    FLD float ptr [EBX + 0x2c9c]        ; 0058a5d5
    FLD1                                ; 0058a5db
    FCOMPP                              ; 0058a5dd
    FNSTSW AX                           ; 0058a5df
    SAHF                                ; 0058a5e1
    JA 0x0058a653                       ; 0058a5e2
        ;   XREF to: 0058a653 (CONDITIONAL_JUMP)  ; LAB_0058a653
    CMP dword ptr [EBX + 0x2000c],0x0   ; 0058a5e4
    JZ 0x0058a653                       ; 0058a5eb
        ;   XREF to: 0058a653 (CONDITIONAL_JUMP)  ; LAB_0058a653
    PUSH 0x1                            ; 0058a5ed
    LEA EAX,[EBX + 0x2a00]              ; 0058a5ef
    PUSH EAX                            ; 0058a5f5
    PUSH ESI                            ; 0058a5f6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0058a5f7
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058a5fc
    PUSH EAX                            ; 0058a5ff
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0058a600
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0058a605
    PUSH 0x3f800000                     ; 0058a608
    MOV EDI,EAX                         ; 0058a60d
    PUSH 0x0                            ; 0058a60f
    MOV dword ptr [ESP + 0xf0],EAX      ; 0058a611
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0058a618
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0058a61d
    FLD float ptr [ESP + 0xf8]          ; 0058a624
    ADD ESP,0x8                         ; 0058a62b
    SUB ESP,0x4                         ; 0058a62e
    FSTP float ptr [ESP]                ; 0058a631
    PUSH EDI                            ; 0058a634
    PUSH ESI                            ; 0058a635
    CALL core_motion.cpp_FUN_00525110   ; 0058a636
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0xfc],EAX      ; 0058a63b
    FLD float ptr [ESP + 0xfc]          ; 0058a642
    ADD ESP,0xc                         ; 0058a649
    FSTP float ptr [ESP + 0xe4]         ; 0058a64c
    PUSH 0x567360                       ; 0058a653
        ;   Label: LAB_0058a653
    MOV ECX,dword ptr [0x02c83644]      ; 0058a658 | DAT_02c83644
    PUSH ECX                            ; 0058a65e
    PUSH dword ptr [ESP + 0x18]         ; 0058a65f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 0058a663
    PUSH dword ptr [ESP + 0xf0]         ; 0058a66a
    PUSH ESI                            ; 0058a671
    LEA EAX,[EBX + 0x158]               ; 0058a672
    PUSH EAX                            ; 0058a678
    CALL core_skeleton.cpp_FUN_00568100 ; 0058a679
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    MOV EDI,dword ptr [EBX + 0x2c98]    ; 0058a67e
    ADD ESP,0x18                        ; 0058a684
    TEST EDI,EDI                        ; 0058a687
    JNZ 0x0058a721                      ; 0058a689
        ;   XREF to: 0058a721 (CONDITIONAL_JUMP)  ; LAB_0058a721
    MOV EAX,[0x02c83618]                ; 0058a68f | DAT_02c83618
    LEA ESI,[EBX + 0x808]               ; 0058a694
    SHL EAX,0x4                         ; 0058a69a
    ADD EAX,ESI                         ; 0058a69d
    PUSH dword ptr [EBX + 0x2c9c]       ; 0058a69f
    PUSH EAX                            ; 0058a6a5
    MOV EAX,[0x02c83638]                ; 0058a6a6 | DAT_02c83638
    SHL EAX,0x4                         ; 0058a6ab
    ADD EAX,ESI                         ; 0058a6ae
    PUSH EAX                            ; 0058a6b0
    MOV dword ptr [ESP + 0xe4],ESI      ; 0058a6b1
    LEA ESI,[ESP + 0x54]                ; 0058a6b8
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0058a6bc
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    MOV EAX,[0x02c83638]                ; 0058a6c1 | DAT_02c83638
    SHL EAX,0x4                         ; 0058a6c6
    LEA ESI,[ESP + 0x54]                ; 0058a6c9
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0058a6cd
    ADD ESP,0xc                         ; 0058a6d4
    MOVSD ES:EDI,ESI                    ; 0058a6d7
    MOVSD ES:EDI,ESI                    ; 0058a6d8
    MOVSD ES:EDI,ESI                    ; 0058a6d9
    MOVSD ES:EDI,ESI                    ; 0058a6da
    MOV EAX,[0x02c83614]                ; 0058a6db | DAT_02c83614
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0058a6e0
    SHL EAX,0x4                         ; 0058a6e7
    ADD EAX,ESI                         ; 0058a6ea
    PUSH dword ptr [EBX + 0x2c9c]       ; 0058a6ec
    PUSH EAX                            ; 0058a6f2
    MOV EAX,[0x02c83634]                ; 0058a6f3 | DAT_02c83634
    SHL EAX,0x4                         ; 0058a6f8
    ADD EAX,ESI                         ; 0058a6fb
    PUSH EAX                            ; 0058a6fd
    LEA ESI,[ESP + 0x24]                ; 0058a6fe
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0058a702
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    MOV EAX,[0x02c83634]                ; 0058a707 | DAT_02c83634
    SHL EAX,0x4                         ; 0058a70c
    LEA ESI,[ESP + 0x24]                ; 0058a70f
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0058a713
    ADD ESP,0xc                         ; 0058a71a
    MOVSD ES:EDI,ESI                    ; 0058a71d
    MOVSD ES:EDI,ESI                    ; 0058a71e
    MOVSD ES:EDI,ESI                    ; 0058a71f
    MOVSD ES:EDI,ESI                    ; 0058a720
    CMP dword ptr [EBX + 0x2c98],0x1    ; 0058a721
        ;   Label: LAB_0058a721
    JNZ 0x0058a894                      ; 0058a728
        ;   XREF to: 0058a894 (CONDITIONAL_JUMP)  ; LAB_0058a894
    FLD float ptr [EBX + 0x1ffc8]       ; 0058a72e
    FADD float ptr [EBX + 0x1ffe8]      ; 0058a734
    FMUL double ptr [0x005f6b79]        ; 0058a73a | DAT_005f6b79
    MOV ECX,0x3e860a92                  ; 0058a740
    XOR EDX,EDX                         ; 0058a745
    MOV ESI,0x3f19999a                  ; 0058a747
    MOV dword ptr [ESP + 0x8],EDX       ; 0058a74c
    MOV dword ptr [ESP + 0xe0],ECX      ; 0058a750
    MOV dword ptr [ESP + 0xdc],ESI      ; 0058a757
    FST float ptr [ESP + 0xc]           ; 0058a75e
    FLDZ                                ; 0058a762
    FCOMPP                              ; 0058a764
    FNSTSW AX                           ; 0058a766
    SAHF                                ; 0058a768
    JBE 0x0058a78b                      ; 0058a769
        ;   XREF to: 0058a78b (CONDITIONAL_JUMP)  ; LAB_0058a78b
    FLD float ptr [0x005f6b81]          ; 0058a76b | DAT_005f6b81
    FLD float ptr [ESP + 0xc]           ; 0058a771
    FADD ST0,ST1                        ; 0058a775
    FLD float ptr [0x006060b0]          ; 0058a777 | DAT_006060b0
    FADDP ST2,ST0                       ; 0058a77d
    FDIVRP                              ; 0058a77f
    FMUL float ptr [0x005f6b85]         ; 0058a781 | DAT_005f6b85
    FSTP float ptr [ESP + 0x8]          ; 0058a787
    FLD float ptr [ESP + 0xc]           ; 0058a78b
        ;   Label: LAB_0058a78b
    FLDZ                                ; 0058a78f
    FCOMPP                              ; 0058a791
    FNSTSW AX                           ; 0058a793
    SAHF                                ; 0058a795
    JNC 0x0058a7ba                      ; 0058a796
        ;   XREF to: 0058a7ba (CONDITIONAL_JUMP)  ; LAB_0058a7ba
    FLD float ptr [ESP + 0xe0]          ; 0058a798
    FLD float ptr [ESP + 0xc]           ; 0058a79f
    FSUB ST0,ST1                        ; 0058a7a3
    FLD float ptr [0x006060b4]          ; 0058a7a5 | DAT_006060b4
    FSUBRP ST2,ST0                      ; 0058a7ab
    FDIVRP                              ; 0058a7ad
    FMUL float ptr [ESP + 0xdc]         ; 0058a7af
    FSTP float ptr [ESP + 0x8]          ; 0058a7b6
    PUSH 0x3                            ; 0058a7ba
        ;   Label: LAB_0058a7ba
    PUSH EBX                            ; 0058a7bc
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0058a7bd
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0058a7c2
    FLD float ptr [ESP + 0xf8]          ; 0058a7c9
    FLD1                                ; 0058a7d0
    FSUBRP                              ; 0058a7d2
    ADD ESP,0x8                         ; 0058a7d4
    FMUL float ptr [ESP + 0x10]         ; 0058a7d7
    FMUL float ptr [ESP + 0x8]          ; 0058a7db
    FST float ptr [ESP + 0x8]           ; 0058a7df
    FLDZ                                ; 0058a7e3
    FCOMPP                              ; 0058a7e5
    FNSTSW AX                           ; 0058a7e7
    SAHF                                ; 0058a7e9
    JNC 0x0058a838                      ; 0058a7ea
        ;   XREF to: 0058a838 (CONDITIONAL_JUMP)  ; LAB_0058a838
    PUSH 0x585040                       ; 0058a7ec
    MOV EDI,dword ptr [0x02c83644]      ; 0058a7f1 | DAT_02c83644
    PUSH EDI                            ; 0058a7f7
    PUSH dword ptr [ESP + 0x10]         ; 0058a7f8
    LEA ESI,[ESP + 0x84]                ; 0058a7fc
    PUSH dword ptr [ESP + 0x18]         ; 0058a803
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0058a807
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    ADD ESP,0x4                         ; 0058a80c
    LEA EAX,[ESP + 0xa4]                ; 0058a80f
    LEA EDI,[ESP + 0xa4]                ; 0058a816
    PUSH EAX                            ; 0058a81d
    LEA EAX,[EBX + 0x158]               ; 0058a81e
    LEA ESI,[ESP + 0x88]                ; 0058a824
    PUSH EAX                            ; 0058a82b
    MOVSD ES:EDI,ESI                    ; 0058a82c
    MOVSD ES:EDI,ESI                    ; 0058a82d
    MOVSD ES:EDI,ESI                    ; 0058a82e
    MOVSD ES:EDI,ESI                    ; 0058a82f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0058a830
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0058a835
    PUSH 0x0                            ; 0058a838
        ;   Label: LAB_0058a838
    PUSH EBX                            ; 0058a83a
    CALL core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 ; 0058a83b
        ;   XREF to: 0058aab0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0(CStranger * this_ptr, int arm_side)
    ADD ESP,0x8                         ; 0058a840
    PUSH 0x1                            ; 0058a843
    PUSH EBX                            ; 0058a845
    CALL core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 ; 0058a846
        ;   XREF to: 0058aab0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0(CStranger * this_ptr, int arm_side)
    MOV EAX,[0x02c83638]                ; 0058a84b | DAT_02c83638
    MOV ESI,dword ptr [0x02c83618]      ; 0058a850 | DAT_02c83618
    SHL EAX,0x4                         ; 0058a856
    SHL ESI,0x4                         ; 0058a859
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0058a85c
    LEA ESI,[ESI + EBX*0x1 + 0x808]     ; 0058a863
    MOVSD ES:EDI,ESI                    ; 0058a86a
    MOVSD ES:EDI,ESI                    ; 0058a86b
    MOVSD ES:EDI,ESI                    ; 0058a86c
    MOVSD ES:EDI,ESI                    ; 0058a86d
    MOV ESI,dword ptr [0x02c83634]      ; 0058a86e | DAT_02c83634
    MOV EAX,[0x02c83614]                ; 0058a874 | DAT_02c83614
    SHL ESI,0x4                         ; 0058a879
    SHL EAX,0x4                         ; 0058a87c
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0058a87f
    LEA ESI,[EBX + EAX*0x1 + 0x808]     ; 0058a886
    ADD ESP,0x8                         ; 0058a88d
    MOVSD ES:EDI,ESI                    ; 0058a890
    MOVSD ES:EDI,ESI                    ; 0058a891
    MOVSD ES:EDI,ESI                    ; 0058a892
    MOVSD ES:EDI,ESI                    ; 0058a893
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0058a894
        ;   Label: LAB_0058a894
    CMP EAX,0x3                         ; 0058a89a
    JNZ 0x0058a9ca                      ; 0058a89d
        ;   XREF to: 0058a9ca (CONDITIONAL_JUMP)  ; LAB_0058a9ca
    PUSH 0x3                            ; 0058a8a3
        ;   Label: LAB_0058a8a3
    PUSH EBX                            ; 0058a8a5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0058a8a6
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0058a8ab
    FLD float ptr [ESP + 0xf8]          ; 0058a8b2
    FLD1                                ; 0058a8b9
    FSUBRP                              ; 0058a8bb
    ADD ESP,0x8                         ; 0058a8bd
    FMUL float ptr [ESP + 0x10]         ; 0058a8c0
    LEA ESI,[ESP + 0x88]                ; 0058a8c4
    PUSH dword ptr [EBX + 0x1ffc8]      ; 0058a8cb
    FSTP float ptr [ESP + 0xd4]         ; 0058a8d1
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0058a8d8
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    ADD ESP,0x4                         ; 0058a8dd
    PUSH 0x585040                       ; 0058a8e0
    MOV EDX,dword ptr [0x02c83644]      ; 0058a8e5 | DAT_02c83644
    PUSH EDX                            ; 0058a8eb
    LEA EAX,[ESP + 0x30]                ; 0058a8ec
    PUSH dword ptr [ESP + 0xd8]         ; 0058a8f0
    LEA EDI,[ESP + 0x34]                ; 0058a8f7
    PUSH EAX                            ; 0058a8fb
    LEA EAX,[EBX + 0x158]               ; 0058a8fc
    LEA ESI,[ESP + 0x98]                ; 0058a902
    PUSH EAX                            ; 0058a909
    MOVSD ES:EDI,ESI                    ; 0058a90a
    MOVSD ES:EDI,ESI                    ; 0058a90b
    MOVSD ES:EDI,ESI                    ; 0058a90c
    MOVSD ES:EDI,ESI                    ; 0058a90d
    MOV dword ptr [ESP + 0xec],EAX      ; 0058a90e
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0058a915
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0058a91a
    LEA ESI,[ESP + 0xa8]                ; 0058a91d
    PUSH dword ptr [EBX + 0x1ffcc]      ; 0058a924
    LEA EDI,[ESP + 0xbc]                ; 0058a92a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0058a931
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    LEA ESI,[ESP + 0xac]                ; 0058a936
    ADD ESP,0x4                         ; 0058a93d
    MOVSD ES:EDI,ESI                    ; 0058a940
    MOVSD ES:EDI,ESI                    ; 0058a941
    MOVSD ES:EDI,ESI                    ; 0058a942
    MOVSD ES:EDI,ESI                    ; 0058a943
    PUSH 0x585040                       ; 0058a944
    MOV ESI,dword ptr [0x02c83644]      ; 0058a949 | DAT_02c83644
    PUSH ESI                            ; 0058a94f
    LEA EAX,[ESP + 0xc0]                ; 0058a950
    PUSH dword ptr [ESP + 0xd8]         ; 0058a957
    PUSH EAX                            ; 0058a95e
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0058a95f
    PUSH EDI                            ; 0058a966
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0058a967
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0058a96c
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0058a96f
    JZ 0x0058aa07                       ; 0058a976
        ;   XREF to: 0058aa07 (CONDITIONAL_JUMP)  ; LAB_0058aa07
    MOV ESP,EBP                         ; 0058a97c
        ;   Label: LAB_0058a97c
    POP EBP                             ; 0058a97e
    POP EDI                             ; 0058a97f
    POP ESI                             ; 0058a980
    POP EBX                             ; 0058a981
    RET                                 ; 0058a982
    CMP EAX,0x23                        ; 0058a983
        ;   Label: LAB_0058a983
    JZ 0x0058a4f8                       ; 0058a986
        ;   XREF to: 0058a4f8 (CONDITIONAL_JUMP)  ; LAB_0058a4f8
    CMP EAX,0x24                        ; 0058a98c
    JNZ 0x0058a9a0                      ; 0058a98f
        ;   XREF to: 0058a9a0 (CONDITIONAL_JUMP)  ; LAB_0058a9a0
    FLD float ptr [ESP + 0x14]          ; 0058a991
        ;   Label: LAB_0058a991
    FSUBR double ptr [0x005f6b59]       ; 0058a995 | DAT_005f6b59
    JMP 0x0058a502                      ; 0058a99b
        ;   XREF to: 0058a502 (UNCONDITIONAL_JUMP)  ; LAB_0058a502
    CMP EAX,0x25                        ; 0058a9a0
        ;   Label: LAB_0058a9a0
    JZ 0x0058a991                       ; 0058a9a3
        ;   XREF to: 0058a991 (CONDITIONAL_JUMP)  ; LAB_0058a991
    JMP 0x0058a50f                      ; 0058a9a5
        ;   XREF to: 0058a50f (UNCONDITIONAL_JUMP)  ; LAB_0058a50f
    FLDZ                                ; 0058a9aa
        ;   Label: LAB_0058a9aa
    FCOMP float ptr [ESP + 0xec]        ; 0058a9ac
    FNSTSW AX                           ; 0058a9b3
    SAHF                                ; 0058a9b5
    JBE 0x0058a52b                      ; 0058a9b6
        ;   XREF to: 0058a52b (CONDITIONAL_JUMP)  ; LAB_0058a52b
    XOR ECX,ECX                         ; 0058a9bc
    MOV dword ptr [ESP + 0xec],ECX      ; 0058a9be
    JMP 0x0058a52b                      ; 0058a9c5
        ;   XREF to: 0058a52b (UNCONDITIONAL_JUMP)  ; LAB_0058a52b
    CMP EAX,0x4                         ; 0058a9ca
        ;   Label: LAB_0058a9ca
    JZ 0x0058a8a3                       ; 0058a9cd
        ;   XREF to: 0058a8a3 (CONDITIONAL_JUMP)  ; LAB_0058a8a3
    CMP EAX,0x9                         ; 0058a9d3
    JZ 0x0058a8a3                       ; 0058a9d6
        ;   XREF to: 0058a8a3 (CONDITIONAL_JUMP)  ; LAB_0058a8a3
    CMP EAX,0x6                         ; 0058a9dc
    JZ 0x0058a8a3                       ; 0058a9df
        ;   XREF to: 0058a8a3 (CONDITIONAL_JUMP)  ; LAB_0058a8a3
    CMP EAX,0x7                         ; 0058a9e5
    JZ 0x0058a8a3                       ; 0058a9e8
        ;   XREF to: 0058a8a3 (CONDITIONAL_JUMP)  ; LAB_0058a8a3
    CMP EAX,0x8                         ; 0058a9ee
    JZ 0x0058a8a3                       ; 0058a9f1
        ;   XREF to: 0058a8a3 (CONDITIONAL_JUMP)  ; LAB_0058a8a3
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0058a9f7
    JZ 0x0058aa07                       ; 0058a9fe
        ;   XREF to: 0058aa07 (CONDITIONAL_JUMP)  ; LAB_0058aa07
    MOV ESP,EBP                         ; 0058aa00
    POP EBP                             ; 0058aa02
    POP EDI                             ; 0058aa03
    POP ESI                             ; 0058aa04
    POP EBX                             ; 0058aa05
    RET                                 ; 0058aa06
    FLD float ptr [EBX + 0x20084]       ; 0058aa07
        ;   Label: LAB_0058aa07
    FDIV float ptr [0x006060b8]         ; 0058aa0d | DAT_006060b8
    FLD1                                ; 0058aa13
    FPATAN                              ; 0058aa15
    LEA ESI,[ESP + 0x38]                ; 0058aa17
    FSTP float ptr [ESP + 0xd4]         ; 0058aa1b
    PUSH dword ptr [ESP + 0xd4]         ; 0058aa22
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0058aa29
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0058aa2e
    PUSH 0x567360                       ; 0058aa31
    MOV EDX,dword ptr [0x02c83610]      ; 0058aa36 | DAT_02c83610
    PUSH EDX                            ; 0058aa3c
    LEA EAX,[ESP + 0x70]                ; 0058aa3d
    PUSH 0x3f800000                     ; 0058aa41
    LEA EDI,[ESP + 0x74]                ; 0058aa46
    PUSH EAX                            ; 0058aa4a
    ADD EBX,0x158                       ; 0058aa4b
    LEA ESI,[ESP + 0x48]                ; 0058aa51
    PUSH EBX                            ; 0058aa55
    MOVSD ES:EDI,ESI                    ; 0058aa56
    MOVSD ES:EDI,ESI                    ; 0058aa57
    MOVSD ES:EDI,ESI                    ; 0058aa58
    MOVSD ES:EDI,ESI                    ; 0058aa59
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0058aa5a
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0058aa5f
    LEA ESI,[ESP + 0x58]                ; 0058aa62
    FLD float ptr [ESP + 0xd4]          ; 0058aa66
    SUB ESP,0x4                         ; 0058aa6d
    FCHS                                ; 0058aa70
    FSTP float ptr [ESP]                ; 0058aa72
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0058aa75
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0058aa7a
    PUSH 0x567360                       ; 0058aa7d
    MOV ECX,dword ptr [0x02c8360c]      ; 0058aa82 | DAT_02c8360c
    PUSH ECX                            ; 0058aa88
    LEA EAX,[ESP + 0x70]                ; 0058aa89
    PUSH 0x3f800000                     ; 0058aa8d
    PUSH EAX                            ; 0058aa92
    LEA EDI,[ESP + 0x78]                ; 0058aa93
    LEA ESI,[ESP + 0x68]                ; 0058aa97
    PUSH EBX                            ; 0058aa9b
    MOVSD ES:EDI,ESI                    ; 0058aa9c
    MOVSD ES:EDI,ESI                    ; 0058aa9d
    MOVSD ES:EDI,ESI                    ; 0058aa9e
    MOVSD ES:EDI,ESI                    ; 0058aa9f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0058aaa0
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0058aaa5
    MOV ESP,EBP                         ; 0058aaa8
    POP EBP                             ; 0058aaaa
    POP EDI                             ; 0058aaab
    POP ESI                             ; 0058aaac
    POP EBX                             ; 0058aaad
    RET                                 ; 0058aaae

