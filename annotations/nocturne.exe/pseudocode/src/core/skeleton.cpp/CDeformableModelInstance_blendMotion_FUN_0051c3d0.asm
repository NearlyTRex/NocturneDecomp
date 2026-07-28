; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)
;
; Local Variables:
; undefined4       Stack[-0x938]:4  local_938
; undefined        Stack[-0x934]:1  local_934
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[14]:
;   core_charactr.cpp_CCharacter_applyGesture_FUN_00429560 at 00429625
;   core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a700 at 0042a748
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497c7c
;   core_gabriela.cpp_FUN_004998c0 at 00499ac6
;   core_gabriela.cpp_FUN_00499b00 at 00499bd0
;   core_ghoul.cpp_FUN_004a9270 at 004a9576
;   core_hostage.cpp_FUN_004b6d80 at 004b80c8
;   core_icepick.cpp_FUN_004ba740 at 004ba7c0
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0 at 004db942
;   core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0 at 004fd18b
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591b6b
;   TerminatedCString s_Write_me_00591b80
;   double DOUBLE_00591b8b = 0.00100000000000000
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_negateFirstComponent_FUN_0055d0d0
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c3d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
    PUSH ESI                            ; 0051c3d1
    PUSH EDI                            ; 0051c3d2
    PUSH EBP                            ; 0051c3d3
    MOV EBP,ESP                         ; 0051c3d4
    SUB ESP,0x924                       ; 0051c3d6
    AND ESP,0xfffffff8                  ; 0051c3dc
    FLD float ptr [EBP + 0x20]          ; 0051c3df
    FCOMP double ptr [0x00591b8b]       ; 0051c3e2 | DOUBLE_00591b8b
    FNSTSW AX                           ; 0051c3e8
    SAHF                                ; 0051c3ea
    JA 0x0051c3f4                       ; 0051c3eb
        ;   XREF to: 0051c3f4 (CONDITIONAL_JUMP)  ; LAB_0051c3f4
    MOV ESP,EBP                         ; 0051c3ed
        ;   Label: LAB_0051c3ed
    POP EBP                             ; 0051c3ef
    POP EDI                             ; 0051c3f0
    POP ESI                             ; 0051c3f1
    POP EBX                             ; 0051c3f2
    RET                                 ; 0051c3f3
    MOV EAX,ESP                         ; 0051c3f4
        ;   Label: LAB_0051c3f4
    PUSH EAX                            ; 0051c3f6
    LEA EAX,[ESP + 0x8e0]               ; 0051c3f7
    PUSH EAX                            ; 0051c3fe
    LEA EAX,[ESP + 0x8e8]               ; 0051c3ff
    PUSH EAX                            ; 0051c406
    MOV EDX,dword ptr [EBP + 0x18]      ; 0051c407
    PUSH dword ptr [EBP + 0x1c]         ; 0051c40a
    PUSH EDX                            ; 0051c40d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051c40e
    PUSH ECX                            ; 0051c411
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070 ; 0051c412
        ;   XREF to: 004e2070 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 0051c417
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051c41a
    PUSH EBX                            ; 0051c41d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051c41e
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051c423
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051c426
    MOV EDI,dword ptr [ESI + 0x2250]    ; 0051c429
    MOV EBX,EAX                         ; 0051c42f
    TEST EDI,EDI                        ; 0051c431
    JNZ 0x0051c77c                      ; 0051c433
        ;   XREF to: 0051c77c (CONDITIONAL_JUMP)  ; LAB_0051c77c
    MOV ESI,dword ptr [EAX + 0x28558]   ; 0051c439
    MOV dword ptr [ESP + 0x91c],EDI     ; 0051c43f
    TEST ESI,ESI                        ; 0051c446
    JLE 0x0051c559                      ; 0051c448
        ;   XREF to: 0051c559 (CONDITIONAL_JUMP)  ; LAB_0051c559
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051c44e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051c451
    ADD EAX,0x6b0                       ; 0051c454
    MOV dword ptr [ESP + 0x904],ESI     ; 0051c459
    MOV dword ptr [ESP + 0x90c],EAX     ; 0051c460
    MOV ESI,dword ptr [EBP + 0x24]      ; 0051c467
        ;   Label: LAB_0051c467
    PUSH ESI                            ; 0051c46a
    MOV EDI,dword ptr [ESP + 0x920]     ; 0051c46b
    PUSH EDI                            ; 0051c472
    PUSH EBX                            ; 0051c473
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051c474
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0051c479
    TEST EAX,EAX                        ; 0051c47c
    JL 0x0051c51a                       ; 0051c47e
        ;   XREF to: 0051c51a (CONDITIONAL_JUMP)  ; LAB_0051c51a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051c484
    PUSH EDX                            ; 0051c487
    PUSH EAX                            ; 0051c488
    PUSH dword ptr [EBP + 0x20]         ; 0051c489
    PUSH ESI                            ; 0051c48c
    PUSH EDI                            ; 0051c48d
    CALL dword ptr [EBP + 0x28]         ; 0051c48e
    MOV dword ptr [ESP + 0x934],EAX     ; 0051c491
    FLD float ptr [ESP + 0x934]         ; 0051c498
    ADD ESP,0x14                        ; 0051c49f
    SUB ESP,0x4                         ; 0051c4a2
    MOV ESI,EDI                         ; 0051c4a5
    FSTP float ptr [ESP]                ; 0051c4a7
    MOV EDI,dword ptr [ESP + 0x8e0]     ; 0051c4aa
    PUSH dword ptr [ESP + 0x4]          ; 0051c4b1
    PUSH EDI                            ; 0051c4b5
    MOV EAX,dword ptr [ESP + 0x8ec]     ; 0051c4b6
    PUSH EAX                            ; 0051c4bd
    MOV EDX,ESI                         ; 0051c4be
    PUSH EDX                            ; 0051c4c0
    PUSH EBX                            ; 0051c4c1
    LEA ESI,[ESP + 0x7ec]               ; 0051c4c2
    LEA EDI,[ESP + 0x80c]               ; 0051c4c9
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051c4d0
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    LEA ESI,[ESP + 0x7ec]               ; 0051c4d5
    ADD ESP,0x14                        ; 0051c4dc
    LEA EAX,[ESP + 0x7f8]               ; 0051c4df
    MOV ECX,dword ptr [ESP + 0x910]     ; 0051c4e6
    PUSH EAX                            ; 0051c4ed
    MOVSD ES:EDI,ESI                    ; 0051c4ee
    MOVSD ES:EDI,ESI                    ; 0051c4ef
    MOVSD ES:EDI,ESI                    ; 0051c4f0
    MOVSD ES:EDI,ESI                    ; 0051c4f1
    PUSH ECX                            ; 0051c4f2
    LEA ESI,[ESP + 0x7f0]               ; 0051c4f3
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0051c4fa
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 0051c4ff
    MOV EDI,dword ptr [ESP + 0x904]     ; 0051c502
    LEA ESI,[ESP + 0x7e4]               ; 0051c509
    LEA EDI,[EDI + 0x6b0]               ; 0051c510
    MOVSD ES:EDI,ESI                    ; 0051c516
    MOVSD ES:EDI,ESI                    ; 0051c517
    MOVSD ES:EDI,ESI                    ; 0051c518
    MOVSD ES:EDI,ESI                    ; 0051c519
    MOV EDI,dword ptr [ESP + 0x904]     ; 0051c51a
        ;   Label: LAB_0051c51a
    MOV EAX,dword ptr [ESP + 0x90c]     ; 0051c521
    MOV EDX,dword ptr [ESP + 0x91c]     ; 0051c528
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0051c52f
    ADD EDI,0x10                        ; 0051c535
    ADD EAX,0x10                        ; 0051c538
    INC EDX                             ; 0051c53b
    MOV dword ptr [ESP + 0x904],EDI     ; 0051c53c
    MOV dword ptr [ESP + 0x90c],EAX     ; 0051c543
    MOV dword ptr [ESP + 0x91c],EDX     ; 0051c54a
    CMP EDX,ECX                         ; 0051c551
    JL 0x0051c467                       ; 0051c553
        ;   XREF to: 0051c467 (CONDITIONAL_JUMP)  ; LAB_0051c467
    CMP dword ptr [EBP + 0x24],0x0      ; 0051c559
        ;   Label: LAB_0051c559
    JGE 0x0051c3ed                      ; 0051c55d
        ;   XREF to: 0051c3ed (CONDITIONAL_JUMP)  ; LAB_0051c3ed
    MOV ESI,dword ptr [ESP + 0x8dc]     ; 0051c563
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051c56a
    SUB EAX,ESI                         ; 0051c571
    LEA ESI,[EAX*0x4 + 0x0]             ; 0051c573
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0051c57a
    FLD float ptr [ESI + EAX*0x1]       ; 0051c580
    FMUL float ptr [ESP]                ; 0051c583
    FSTP float ptr [ESP + 0x8b8]        ; 0051c586
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0051c58d
    FMUL float ptr [ESP]                ; 0051c591
    FSTP float ptr [ESP + 0x8bc]        ; 0051c594
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0051c59b
    FMUL float ptr [ESP]                ; 0051c59f
    MOV ESI,dword ptr [ESP + 0x8e0]     ; 0051c5a2
    FLD float ptr [ESP]                 ; 0051c5a9
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051c5ac
    FLD1                                ; 0051c5b3
    SUB EAX,ESI                         ; 0051c5b5
    FSUBRP                              ; 0051c5b7
    LEA ESI,[EAX*0x4 + 0x0]             ; 0051c5b9
    FXCH                                ; 0051c5c0
    FSTP float ptr [ESP + 0x8c0]        ; 0051c5c2
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0051c5c9
    FSTP float ptr [ESP + 0x8e4]        ; 0051c5cf
    FLD float ptr [ESI + EAX*0x1]       ; 0051c5d6
    FMUL float ptr [ESP + 0x8e4]        ; 0051c5d9
    FSTP float ptr [ESP + 0x8ac]        ; 0051c5e0
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0051c5e7
    FMUL float ptr [ESP + 0x8e4]        ; 0051c5eb
    FSTP float ptr [ESP + 0x8b0]        ; 0051c5f2
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0051c5f9
    FMUL float ptr [ESP + 0x8e4]        ; 0051c5fd
    FLD float ptr [ESP + 0x8ac]         ; 0051c604
    FADD float ptr [ESP + 0x8b8]        ; 0051c60b
    FLD float ptr [ESP + 0x8b0]         ; 0051c612
    FXCH                                ; 0051c619
    FSTP float ptr [ESP + 0x8c4]        ; 0051c61b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051c622
    FLD float ptr [ESP + 0x8c4]         ; 0051c625
    FXCH                                ; 0051c62c
    FADD float ptr [ESP + 0x8bc]        ; 0051c62e
    FXCH ST2                            ; 0051c635
    FST float ptr [ESP + 0x8b4]         ; 0051c637
    FADD float ptr [ESP + 0x8c0]        ; 0051c63e
    FXCH ST2                            ; 0051c645
    FSTP float ptr [ESP + 0x8c8]        ; 0051c647
    FXCH                                ; 0051c64e
    FSTP float ptr [ESP + 0x8cc]        ; 0051c650
    FMUL float ptr [EAX + 0x508]        ; 0051c657
    FLD float ptr [ESP + 0x8c8]         ; 0051c65d
    FXCH                                ; 0051c664
    FSTP float ptr [ESP + 0x8c4]        ; 0051c666
    FMUL float ptr [EAX + 0x50c]        ; 0051c66d
    FLD float ptr [EBP + 0x20]          ; 0051c673
    FLD float ptr [ESP + 0x8c4]         ; 0051c676
    FMUL ST1                            ; 0051c67d
    FLD float ptr [ESP + 0x8cc]         ; 0051c67f
    FXCH ST3                            ; 0051c686
    FSTP float ptr [ESP + 0x8c8]        ; 0051c688
    FXCH ST2                            ; 0051c68f
    FMUL float ptr [EAX + 0x510]        ; 0051c691
    FLD float ptr [ESP + 0x8c8]         ; 0051c697
    FMUL ST2                            ; 0051c69e
    FLD ST2                             ; 0051c6a0
    FLD1                                ; 0051c6a2
    FSUBRP                              ; 0051c6a4
    FXCH ST2                            ; 0051c6a6
    FST float ptr [ESP + 0x8cc]         ; 0051c6a8
    FMULP ST3                           ; 0051c6af
    FXCH                                ; 0051c6b1
    FSTP float ptr [ESP + 0x8e8]        ; 0051c6b3
    LEA EBX,[EAX + 0x6a4]               ; 0051c6ba
    FXCH ST2                            ; 0051c6c0
    FSTP float ptr [ESP + 0x8a0]        ; 0051c6c2
    FXCH                                ; 0051c6c9
    FSTP float ptr [ESP + 0x8a4]        ; 0051c6cb
    FSTP float ptr [ESP + 0x8a8]        ; 0051c6d2
    FLD float ptr [EBX]                 ; 0051c6d9
    FMUL float ptr [ESP + 0x8e8]        ; 0051c6db
    FSTP float ptr [ESP + 0x894]        ; 0051c6e2
    FLD float ptr [EBX + 0x4]           ; 0051c6e9
    FMUL float ptr [ESP + 0x8e8]        ; 0051c6ec
    FSTP float ptr [ESP + 0x898]        ; 0051c6f3
    FLD float ptr [EBX + 0x8]           ; 0051c6fa
    FMUL float ptr [ESP + 0x8e8]        ; 0051c6fd
    LEA EAX,[ESP + 0x8d0]               ; 0051c704
    FLD float ptr [ESP + 0x894]         ; 0051c70b
    FADD float ptr [ESP + 0x8a0]        ; 0051c712
    FLD float ptr [ESP + 0x898]         ; 0051c719
    FXCH                                ; 0051c720
    FSTP float ptr [ESP + 0x8d0]        ; 0051c722
    FADD float ptr [ESP + 0x8a4]        ; 0051c729
    FXCH                                ; 0051c730
    FST float ptr [ESP + 0x89c]         ; 0051c732
    FADD float ptr [ESP + 0x8a8]        ; 0051c739
    FXCH                                ; 0051c740
    FSTP float ptr [ESP + 0x8d4]        ; 0051c742
    FSTP float ptr [ESP + 0x8d8]        ; 0051c749
    CMP EBX,EAX                         ; 0051c750
    JZ 0x0051c3ed                       ; 0051c752
        ;   XREF to: 0051c3ed (CONDITIONAL_JUMP)  ; LAB_0051c3ed
    MOV EAX,dword ptr [ESP + 0x8d0]     ; 0051c758
    MOV dword ptr [EBX],EAX             ; 0051c75f
    MOV EAX,dword ptr [ESP + 0x8d4]     ; 0051c761
    MOV dword ptr [EBX + 0x4],EAX       ; 0051c768
    MOV EAX,dword ptr [ESP + 0x8d8]     ; 0051c76b
    MOV dword ptr [EBX + 0x8],EAX       ; 0051c772
    MOV ESP,EBP                         ; 0051c775
    POP EBP                             ; 0051c777
    POP EDI                             ; 0051c778
    POP ESI                             ; 0051c779
    POP EBX                             ; 0051c77a
    RET                                 ; 0051c77b
    CMP EDI,0x1                         ; 0051c77c
        ;   Label: LAB_0051c77c
    JNZ 0x0051ca7a                      ; 0051c77f
        ;   XREF to: 0051ca7a (CONDITIONAL_JUMP)  ; LAB_0051ca7a
    XOR EDI,EDI                         ; 0051c785
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051c787
    MOV dword ptr [ESP + 0x918],EDI     ; 0051c78d
    TEST EDX,EDX                        ; 0051c794
    JLE 0x0051c80c                      ; 0051c796
        ;   XREF to: 0051c80c (CONDITIONAL_JUMP)  ; LAB_0051c80c
    MOV dword ptr [ESP + 0x8f4],EDI     ; 0051c798
    MOV dword ptr [ESP + 0x910],EDI     ; 0051c79f
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051c7a6
        ;   Label: LAB_0051c7a6
    PUSH EAX                            ; 0051c7a9
    MOV EDX,dword ptr [ESP + 0x91c]     ; 0051c7aa
    PUSH EDX                            ; 0051c7b1
    PUSH EBX                            ; 0051c7b2
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051c7b3
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0051c7b8
    MOV ESI,dword ptr [ESP + 0x910]     ; 0051c7bb
    MOV dword ptr [ESP + ESI*0x1 + 0x644],EAX ; 0051c7c2
    TEST EAX,EAX                        ; 0051c7c9
    JGE 0x0051c98b                      ; 0051c7cb
        ;   XREF to: 0051c98b (CONDITIONAL_JUMP)  ; LAB_0051c98b
    MOV EDI,dword ptr [ESP + 0x910]     ; 0051c7d1
        ;   Label: LAB_0051c7d1
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 0051c7d8
    MOV EDX,dword ptr [ESP + 0x918]     ; 0051c7df
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0051c7e6
    ADD EDI,0x4                         ; 0051c7ec
    ADD EAX,0x10                        ; 0051c7ef
    INC EDX                             ; 0051c7f2
    MOV dword ptr [ESP + 0x910],EDI     ; 0051c7f3
    MOV dword ptr [ESP + 0x8f4],EAX     ; 0051c7fa
    MOV dword ptr [ESP + 0x918],EDX     ; 0051c801
    CMP EDX,ECX                         ; 0051c808
    JL 0x0051c7a6                       ; 0051c80a
        ;   XREF to: 0051c7a6 (CONDITIONAL_JUMP)  ; LAB_0051c7a6
    MOV ESI,dword ptr [EBP + 0x24]      ; 0051c80c
        ;   Label: LAB_0051c80c
    LEA EAX,[ESI*0x8 + 0x0]             ; 0051c80f
    ADD EAX,ESI                         ; 0051c816
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2857c] ; 0051c818
    TEST EDI,EDI                        ; 0051c81f
    JL 0x0051c859                       ; 0051c821
        ;   XREF to: 0051c859 (CONDITIONAL_JUMP)  ; LAB_0051c859
    MOV ESI,dword ptr [ESP + 0x8dc]     ; 0051c823
    PUSH dword ptr [ESP]                ; 0051c82a
    PUSH ESI                            ; 0051c82d
    MOV EAX,dword ptr [ESP + 0x8e8]     ; 0051c82e
    PUSH EAX                            ; 0051c835
    PUSH EDI                            ; 0051c836
    PUSH EBX                            ; 0051c837
    LEA ESI,[ESP + 0x858]               ; 0051c838
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051c83f
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    SHL EDI,0x4                         ; 0051c844
    ADD ESP,0x14                        ; 0051c847
    LEA ESI,[ESP + 0x844]               ; 0051c84a
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0051c851
    MOVSD ES:EDI,ESI                    ; 0051c855
    MOVSD ES:EDI,ESI                    ; 0051c856
    MOVSD ES:EDI,ESI                    ; 0051c857
    MOVSD ES:EDI,ESI                    ; 0051c858
    XOR EDX,EDX                         ; 0051c859
        ;   Label: LAB_0051c859
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0051c85b
    MOV dword ptr [ESP + 0x914],EDX     ; 0051c861
    TEST ECX,ECX                        ; 0051c868
    JLE 0x0051c559                      ; 0051c86a
        ;   XREF to: 0051c559 (CONDITIONAL_JUMP)  ; LAB_0051c559
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051c870
    ADD EAX,0x6b0                       ; 0051c873
    MOV dword ptr [ESP + 0x8ec],EAX     ; 0051c878
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051c87f
    MOV dword ptr [ESP + 0x8fc],EDX     ; 0051c882
    MOV dword ptr [ESP + 0x900],EAX     ; 0051c889
    MOV EAX,dword ptr [ESP + 0x8ec]     ; 0051c890
    MOV dword ptr [ESP + 0x908],EBX     ; 0051c897
    MOV dword ptr [ESP + 0x8f8],EAX     ; 0051c89e
    MOV EAX,dword ptr [ESP + 0x8fc]     ; 0051c8a5
        ;   Label: LAB_0051c8a5
    CMP dword ptr [ESP + EAX*0x1 + 0x644],0x0 ; 0051c8ac
    JL 0x0051c925                       ; 0051c8b4
        ;   XREF to: 0051c925 (CONDITIONAL_JUMP)  ; LAB_0051c925
    MOV ESI,dword ptr [ESP + 0x914]     ; 0051c8b6
    MOV EAX,dword ptr [ESP + 0x908]     ; 0051c8bd
    SHL ESI,0x4                         ; 0051c8c4
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0051c8c7
    MOV dword ptr [ESP + 0x8f0],ESI     ; 0051c8cd
    TEST EAX,EAX                        ; 0051c8d4
    JGE 0x0051c9d1                      ; 0051c8d6
        ;   XREF to: 0051c9d1 (CONDITIONAL_JUMP)  ; LAB_0051c9d1
    LEA EDI,[ESP + 0x864]               ; 0051c8dc
    LEA ESI,[ESP + ESI*0x1 + 0x4]       ; 0051c8e3
    MOVSD ES:EDI,ESI                    ; 0051c8e7
        ;   Label: LAB_0051c8e7
    MOVSD ES:EDI,ESI                    ; 0051c8e8
    MOVSD ES:EDI,ESI                    ; 0051c8e9
    MOVSD ES:EDI,ESI                    ; 0051c8ea
    LEA EAX,[ESP + 0x864]               ; 0051c8eb
    PUSH dword ptr [EBP + 0x20]         ; 0051c8f2
    PUSH EAX                            ; 0051c8f5
    MOV ESI,dword ptr [ESP + 0x900]     ; 0051c8f6
    PUSH ESI                            ; 0051c8fd
    LEA ESI,[ESP + 0x810]               ; 0051c8fe
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0051c905
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 0051c90a
    MOV EDI,dword ptr [ESP + 0x900]     ; 0051c90d
    LEA ESI,[ESP + 0x804]               ; 0051c914
    LEA EDI,[EDI + 0x6b0]               ; 0051c91b
    MOVSD ES:EDI,ESI                    ; 0051c921
    MOVSD ES:EDI,ESI                    ; 0051c922
    MOVSD ES:EDI,ESI                    ; 0051c923
    MOVSD ES:EDI,ESI                    ; 0051c924
    MOV EDX,dword ptr [ESP + 0x8fc]     ; 0051c925
        ;   Label: LAB_0051c925
    MOV ECX,dword ptr [ESP + 0x908]     ; 0051c92c
    MOV ESI,dword ptr [ESP + 0x900]     ; 0051c933
    MOV EDI,dword ptr [ESP + 0x8f8]     ; 0051c93a
    MOV EAX,dword ptr [ESP + 0x914]     ; 0051c941
    ADD EDX,0x4                         ; 0051c948
    ADD ECX,0x24                        ; 0051c94b
    ADD ESI,0x10                        ; 0051c94e
    ADD EDI,0x10                        ; 0051c951
    INC EAX                             ; 0051c954
    MOV dword ptr [ESP + 0x8fc],EDX     ; 0051c955
    MOV dword ptr [ESP + 0x908],ECX     ; 0051c95c
    MOV dword ptr [ESP + 0x900],ESI     ; 0051c963
    MOV dword ptr [ESP + 0x8f8],EDI     ; 0051c96a
    MOV EDX,dword ptr [EBX + 0x28558]   ; 0051c971
    MOV dword ptr [ESP + 0x914],EAX     ; 0051c977
    CMP EAX,EDX                         ; 0051c97e
    JGE 0x0051c559                      ; 0051c980
        ;   XREF to: 0051c559 (CONDITIONAL_JUMP)  ; LAB_0051c559
    JMP 0x0051c8a5                      ; 0051c986
        ;   XREF to: 0051c8a5 (UNCONDITIONAL_JUMP)  ; LAB_0051c8a5
    MOV ESI,dword ptr [ESP + 0x8dc]     ; 0051c98b
        ;   Label: LAB_0051c98b
    PUSH dword ptr [ESP]                ; 0051c992
    PUSH ESI                            ; 0051c995
    MOV EDI,dword ptr [ESP + 0x8e8]     ; 0051c996
    PUSH EDI                            ; 0051c99d
    MOV EAX,dword ptr [ESP + 0x924]     ; 0051c99e
    PUSH EAX                            ; 0051c9a5
    PUSH EBX                            ; 0051c9a6
    LEA ESI,[ESP + 0x828]               ; 0051c9a7
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051c9ae
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0051c9b3
    MOV EDI,dword ptr [ESP + 0x8f4]     ; 0051c9b6
    LEA ESI,[ESP + 0x814]               ; 0051c9bd
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0051c9c4
    MOVSD ES:EDI,ESI                    ; 0051c9c8
    MOVSD ES:EDI,ESI                    ; 0051c9c9
    MOVSD ES:EDI,ESI                    ; 0051c9ca
    MOVSD ES:EDI,ESI                    ; 0051c9cb
    JMP 0x0051c7d1                      ; 0051c9cc
        ;   XREF to: 0051c7d1 (UNCONDITIONAL_JUMP)  ; LAB_0051c7d1
    SHL EAX,0x4                         ; 0051c9d1
        ;   Label: LAB_0051c9d1
    MOV dword ptr [ESP + 0x920],EAX     ; 0051c9d4
    LEA EAX,[ESP + 0x4]                 ; 0051c9db
    ADD EAX,dword ptr [ESP + 0x920]     ; 0051c9df
    PUSH EAX                            ; 0051c9e6
    LEA ESI,[ESP + 0x858]               ; 0051c9e7
    LEA EDI,[ESP + 0x888]               ; 0051c9ee
    CALL core_xform.cpp_negateFirstComponent_FUN_0055d0d0 ; 0051c9f5
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_0055d0d0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0051c9fa
    LEA EAX,[ESP + 0x884]               ; 0051c9fd
    MOV EDX,dword ptr [ESP + 0x8f0]     ; 0051ca04
    PUSH EAX                            ; 0051ca0b
    LEA EAX,[ESP + 0x8]                 ; 0051ca0c
    LEA ESI,[ESP + 0x858]               ; 0051ca10
    ADD EAX,EDX                         ; 0051ca17
    MOVSD ES:EDI,ESI                    ; 0051ca19
    MOVSD ES:EDI,ESI                    ; 0051ca1a
    MOVSD ES:EDI,ESI                    ; 0051ca1b
    MOVSD ES:EDI,ESI                    ; 0051ca1c
    PUSH EAX                            ; 0051ca1d
    LEA ESI,[ESP + 0x87c]               ; 0051ca1e
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051ca25
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051ca2a
    MOV EAX,dword ptr [ESP + 0x8ec]     ; 0051ca2d
    MOV ECX,dword ptr [ESP + 0x920]     ; 0051ca34
    LEA EDI,[ESP + 0x824]               ; 0051ca3b
    ADD EAX,ECX                         ; 0051ca42
    LEA ESI,[ESP + 0x874]               ; 0051ca44
    PUSH EAX                            ; 0051ca4b
    LEA EAX,[ESP + 0x828]               ; 0051ca4c
    MOVSD ES:EDI,ESI                    ; 0051ca53
    MOVSD ES:EDI,ESI                    ; 0051ca54
    MOVSD ES:EDI,ESI                    ; 0051ca55
    MOVSD ES:EDI,ESI                    ; 0051ca56
    PUSH EAX                            ; 0051ca57
    LEA ESI,[ESP + 0x83c]               ; 0051ca58
    LEA EDI,[ESP + 0x86c]               ; 0051ca5f
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051ca66
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x83c]               ; 0051ca6b
    ADD ESP,0x8                         ; 0051ca72
    JMP 0x0051c8e7                      ; 0051ca75
        ;   XREF to: 0051c8e7 (UNCONDITIONAL_JUMP)  ; LAB_0051c8e7
    MOV ECX,0x591b6b                    ; 0051ca7a | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0051ca7a
    MOV ESI,0xa82                       ; 0051ca7f
    PUSH 0x591b80                       ; 0051ca84 | = "Write me!"
    MOV dword ptr [0x01cc4800],ECX      ; 0051ca89 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051ca8f | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051ca95
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051ca9a
    JMP 0x0051c559                      ; 0051ca9d
        ;   XREF to: 0051c559 (UNCONDITIONAL_JUMP)  ; LAB_0051c559

