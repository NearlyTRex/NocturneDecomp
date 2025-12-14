; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c02b0()
;
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined1       Stack[-0x1dc]:1  local_1dc
; undefined1       Stack[-0x1cc]:1  local_1cc
; undefined1       Stack[-0x1bc]:1  local_1bc
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0x18c]:1  local_18c
; undefined1       Stack[-0x17c]:1  local_17c
; undefined1       Stack[-0x16c]:1  local_16c
; undefined1       Stack[-0x15c]:1  local_15c
; undefined1       Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0xfc]:1  local_fc
; undefined1       Stack[-0xec]:1  local_ec
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xbc]:1  local_bc
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0x9c]:1  local_9c
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x4c]:1  local_4c
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
;   core_stranger.cpp_CStranger_FUN_005bfb60 at 005c003b
;
; Referenced Globals:
;   double DOUBLE_00653944 = 0.000100000000000000
;   undefined4 DAT_00665998
;   undefined4 DAT_03f6bad8
;   undefined4 DAT_03f6badc
;   undefined4 DAT_03f6bae0
;   undefined4 DAT_03f6bae4
;
; Called Functions:
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c02b0
        ;   Label: core_stranger.cpp_CStranger_FUN_005c02b0
    PUSH ESI                            ; 005c02b1
    PUSH EDI                            ; 005c02b2
    PUSH EBP                            ; 005c02b3
    MOV EBP,ESP                         ; 005c02b4
    SUB ESP,0x1cc                       ; 005c02b6
    AND ESP,0xfffffff8                  ; 005c02bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c02bf
    CMP dword ptr [EBP + 0x18],0x0      ; 005c02c2
    JZ 0x005c05ad                       ; 005c02c6
        ;   XREF to: 005c05ad (CONDITIONAL_JUMP)  ; LAB_005c05ad
    PUSH 0xbfc90fdb                     ; 005c02cc
    MOV EAX,[0x03f6badc]                ; 005c02d1 | DAT_03f6badc
    LEA ESI,[ESP + 0x8]                 ; 005c02d6
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005c02da
    MOV EAX,[0x03f6bae4]                ; 005c02e1 | DAT_03f6bae4
    LEA EDI,[ESP + 0x18]                ; 005c02e6
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005c02ea
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c02f1
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
    LEA ESI,[ESP + 0x8]                 ; 005c02f6
    ADD ESP,0x4                         ; 005c02fa
    MOVSD ES:EDI,ESI                    ; 005c02fd
    MOVSD ES:EDI,ESI                    ; 005c02fe
    MOVSD ES:EDI,ESI                    ; 005c02ff
    MOVSD ES:EDI,ESI                    ; 005c0300
    PUSH 0xbfc90fdb                     ; 005c0301
    LEA ESI,[ESP + 0xf8]                ; 005c0306
    LEA EDI,[ESP + 0x28]                ; 005c030d
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 005c0311
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians)
    ADD ESP,0x4                         ; 005c0316
    LEA EAX,[EBX + 0x1fbe8]             ; 005c0319
    LEA ESI,[ESP + 0xf4]                ; 005c031f
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005c0326
        ;   Label: LAB_005c0326
    MOVSD ES:EDI,ESI                    ; 005c032d
    MOVSD ES:EDI,ESI                    ; 005c032e
    MOVSD ES:EDI,ESI                    ; 005c032f
    MOVSD ES:EDI,ESI                    ; 005c0330
    MOV EAX,dword ptr [EBX + 0x2a90]    ; 005c0331
    MOV dword ptr [ESP],EAX             ; 005c0337
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005c033a
    FLD float ptr [EAX + 0x14]          ; 005c0341
    FLD1                                ; 005c0344
    FSUBRP                              ; 005c0346
    FLD float ptr [ESP]                 ; 005c0348
    FXCH                                ; 005c034b
    FMUL ST1                            ; 005c034d
    FLD1                                ; 005c034f
    FSUBRP                              ; 005c0351
    FMULP                               ; 005c0353
    FST float ptr [ESP]                 ; 005c0355
    FLDZ                                ; 005c0358
    FCOMPP                              ; 005c035a
    FNSTSW AX                           ; 005c035c
    SAHF                                ; 005c035e
    JNC 0x005c05a6                      ; 005c035f
        ;   XREF to: 005c05a6 (CONDITIONAL_JUMP)  ; LAB_005c05a6
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005c0365
    SHL EAX,0x3                         ; 005c036b
    MOV ESI,EAX                         ; 005c036e
    SHL EAX,0x3                         ; 005c0370
    SUB EAX,ESI                         ; 005c0373
    LEA ESI,[EBX + 0x262c]              ; 005c0375
    ADD EAX,ESI                         ; 005c037b
    PUSH 0x1                            ; 005c037d
    ADD EAX,0x8                         ; 005c037f
    PUSH EAX                            ; 005c0382
    LEA EAX,[EBX + 0x158]               ; 005c0383
    PUSH EAX                            ; 005c0389
    MOV dword ptr [ESP + 0x1d0],EAX     ; 005c038a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005c0391
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c0396
    PUSH EAX                            ; 005c0399
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005c039a
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 005c039f
    PUSH dword ptr [EBX + 0x2a90]       ; 005c03a2
    PUSH EAX                            ; 005c03a8
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 005c03a9
    PUSH EDI                            ; 005c03b0
    MOV ESI,EAX                         ; 005c03b1
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 005c03b3
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005c03b8
    FLD float ptr [ESP + 0x1d4]         ; 005c03bf
    ADD ESP,0xc                         ; 005c03c6
    PUSH 0x59ddb0                       ; 005c03c9
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005c03ce
    PUSH EAX                            ; 005c03d5
    PUSH dword ptr [ESP + 0x8]          ; 005c03d6
    FSTP float ptr [ESP + 0x1b8]        ; 005c03da
    PUSH dword ptr [ESP + 0x1b8]        ; 005c03e1
    PUSH ESI                            ; 005c03e8
    PUSH EDI                            ; 005c03e9
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 005c03ea
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 005c03ef
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005c03f2
    LEA ESI,[ESP + 0x194]               ; 005c03f9
    PUSH dword ptr [EAX + 0xc]          ; 005c0400
    LEA EDI,[ESP + 0x78]                ; 005c0403
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0407
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
    ADD ESP,0x4                         ; 005c040c
    LEA EAX,[ESP + 0x74]                ; 005c040f
    LEA ESI,[ESP + 0x194]               ; 005c0413
    PUSH EAX                            ; 005c041a
    MOVSD ES:EDI,ESI                    ; 005c041b
    MOVSD ES:EDI,ESI                    ; 005c041c
    MOVSD ES:EDI,ESI                    ; 005c041d
    MOVSD ES:EDI,ESI                    ; 005c041e
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 005c041f
    LEA ESI,[ESP + 0x48]                ; 005c0426
    PUSH dword ptr [EAX + 0x8]          ; 005c042a
    LEA EDI,[ESP + 0x6c]                ; 005c042d
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005c0431
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
    LEA ESI,[ESP + 0x4c]                ; 005c0436
    ADD ESP,0x4                         ; 005c043a
    LEA EAX,[ESP + 0x68]                ; 005c043d
    MOVSD ES:EDI,ESI                    ; 005c0441
    MOVSD ES:EDI,ESI                    ; 005c0442
    MOVSD ES:EDI,ESI                    ; 005c0443
    MOVSD ES:EDI,ESI                    ; 005c0444
    PUSH EAX                            ; 005c0445
    LEA ESI,[ESP + 0x13c]               ; 005c0446
    LEA EDI,[ESP + 0x5c]                ; 005c044d
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005c0451
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    ADD ESP,0x8                         ; 005c0456
    LEA ESI,[ESP + 0x134]               ; 005c0459
    LEA EAX,[ESP + 0x14]                ; 005c0460
    PUSH 0x3f733333                     ; 005c0464
    PUSH EAX                            ; 005c0469
    MOVSD ES:EDI,ESI                    ; 005c046a
    MOVSD ES:EDI,ESI                    ; 005c046b
    MOVSD ES:EDI,ESI                    ; 005c046c
    MOVSD ES:EDI,ESI                    ; 005c046d
    PUSH 0x665998                       ; 005c046e | DAT_00665998
    LEA ESI,[ESP + 0x150]               ; 005c0473
    LEA EDI,[ESP + 0x90]                ; 005c047a
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005c0481
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
    ADD ESP,0xc                         ; 005c0486
    LEA EAX,[ESP + 0x54]                ; 005c0489
    PUSH dword ptr [ESP]                ; 005c048d
    LEA ESI,[ESP + 0x148]               ; 005c0490
    PUSH EAX                            ; 005c0497
    LEA EAX,[ESP + 0x8c]                ; 005c0498
    MOVSD ES:EDI,ESI                    ; 005c049f
    MOVSD ES:EDI,ESI                    ; 005c04a0
    MOVSD ES:EDI,ESI                    ; 005c04a1
    MOVSD ES:EDI,ESI                    ; 005c04a2
    PUSH EAX                            ; 005c04a3
    LEA ESI,[ESP + 0x130]               ; 005c04a4
    LEA EDI,[ESP + 0xa0]                ; 005c04ab
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005c04b2
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    LEA ESI,[ESP + 0x130]               ; 005c04b7
    ADD ESP,0x8                         ; 005c04be
    LEA EAX,[ESP + 0x98]                ; 005c04c1
    MOVSD ES:EDI,ESI                    ; 005c04c8
    MOVSD ES:EDI,ESI                    ; 005c04c9
    MOVSD ES:EDI,ESI                    ; 005c04ca
    MOVSD ES:EDI,ESI                    ; 005c04cb
    PUSH EAX                            ; 005c04cc
    MOV EDI,dword ptr [ESP + 0x1c4]     ; 005c04cd
    LEA EAX,[EBX + 0x808]               ; 005c04d4
    SHL EDI,0x4                         ; 005c04da
    ADD EAX,EDI                         ; 005c04dd
    PUSH EAX                            ; 005c04df
    LEA ESI,[ESP + 0x180]               ; 005c04e0
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005c04e7
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005c04ee
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
    LEA EAX,[EBX + EDI*0x1]             ; 005c04f3
    MOV EDI,EAX                         ; 005c04f6
    LEA ESI,[ESP + 0x180]               ; 005c04f8
    ADD ESP,0xc                         ; 005c04ff
    LEA EDI,[EDI + 0x808]               ; 005c0502
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005c0508
    MOVSD ES:EDI,ESI                    ; 005c050f
    MOVSD ES:EDI,ESI                    ; 005c0510
    MOVSD ES:EDI,ESI                    ; 005c0511
    MOVSD ES:EDI,ESI                    ; 005c0512
    LEA EAX,[ESP + 0x54]                ; 005c0513
    PUSH EAX                            ; 005c0517
    LEA EAX,[ESP + 0x28]                ; 005c0518
    PUSH EAX                            ; 005c051c
    LEA EAX,[ESP + 0x1c]                ; 005c051d
    PUSH EAX                            ; 005c0521
    LEA ESI,[ESP + 0x160]               ; 005c0522
    LEA EDI,[ESP + 0xc0]                ; 005c0529
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005c0530
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    LEA ESI,[ESP + 0x160]               ; 005c0535
    ADD ESP,0x8                         ; 005c053c
    LEA EAX,[ESP + 0xb8]                ; 005c053f
    MOVSD ES:EDI,ESI                    ; 005c0546
    MOVSD ES:EDI,ESI                    ; 005c0547
    MOVSD ES:EDI,ESI                    ; 005c0548
    MOVSD ES:EDI,ESI                    ; 005c0549
    PUSH EAX                            ; 005c054a
    LEA ESI,[ESP + 0x16c]               ; 005c054b
    LEA EDI,[ESP + 0xac]                ; 005c0552
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005c0559
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    LEA ESI,[ESP + 0x16c]               ; 005c055e
    ADD ESP,0x8                         ; 005c0565
    MOVSD ES:EDI,ESI                    ; 005c0568
    MOVSD ES:EDI,ESI                    ; 005c0569
    MOVSD ES:EDI,ESI                    ; 005c056a
    MOVSD ES:EDI,ESI                    ; 005c056b
    PUSH 0x59ddb0                       ; 005c056c
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 005c0571
    PUSH ESI                            ; 005c0578
    LEA EAX,[ESP + 0xac]                ; 005c0579
    PUSH dword ptr [ESP + 0x8]          ; 005c0580
    PUSH EAX                            ; 005c0584
    MOV EDI,dword ptr [ESP + 0x1d4]     ; 005c0585
    PUSH EDI                            ; 005c058c
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 005c058d
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x1fc8c]       ; 005c0592
    ADD ESP,0x14                        ; 005c0598
    FCOMP double ptr [0x00653944]       ; 005c059b | DOUBLE_00653944
    FNSTSW AX                           ; 005c05a1
    SAHF                                ; 005c05a3
    JA 0x005c060c                       ; 005c05a4
        ;   XREF to: 005c060c (CONDITIONAL_JUMP)  ; LAB_005c060c
    MOV ESP,EBP                         ; 005c05a6
        ;   Label: LAB_005c05a6
    POP EBP                             ; 005c05a8
    POP EDI                             ; 005c05a9
    POP ESI                             ; 005c05aa
    POP EBX                             ; 005c05ab
    RET                                 ; 005c05ac
    PUSH 0x3fc90fdb                     ; 005c05ad
        ;   Label: LAB_005c05ad
    MOV EAX,[0x03f6bad8]                ; 005c05b2 | DAT_03f6bad8
    LEA ESI,[ESP + 0xc8]                ; 005c05b7
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005c05be
    MOV EAX,[0x03f6bae0]                ; 005c05c5 | DAT_03f6bae0
    LEA EDI,[ESP + 0x18]                ; 005c05ca
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005c05ce
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c05d5
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
    LEA ESI,[ESP + 0xc8]                ; 005c05da
    ADD ESP,0x4                         ; 005c05e1
    MOVSD ES:EDI,ESI                    ; 005c05e4
    MOVSD ES:EDI,ESI                    ; 005c05e5
    MOVSD ES:EDI,ESI                    ; 005c05e6
    MOVSD ES:EDI,ESI                    ; 005c05e7
    PUSH 0x3fc90fdb                     ; 005c05e8
    LEA ESI,[ESP + 0x38]                ; 005c05ed
    LEA EDI,[ESP + 0x28]                ; 005c05f1
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 005c05f5
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians)
    ADD ESP,0x4                         ; 005c05fa
    LEA EAX,[EBX + 0x1fc08]             ; 005c05fd
    LEA ESI,[ESP + 0x34]                ; 005c0603
    JMP 0x005c0326                      ; 005c0607
        ;   XREF to: 005c0326 (UNCONDITIONAL_JUMP)  ; LAB_005c0326
    PUSH 0x3fc90fdb                     ; 005c060c
        ;   Label: LAB_005c060c
    LEA ESI,[ESP + 0x188]               ; 005c0611
    LEA EDI,[ESP + 0xe8]                ; 005c0618
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005c061f
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
    ADD ESP,0x4                         ; 005c0624
    LEA EAX,[ESP + 0xe4]                ; 005c0627
    LEA ESI,[ESP + 0x184]               ; 005c062e
    PUSH EAX                            ; 005c0635
    LEA EAX,[ESP + 0x88]                ; 005c0636
    MOVSD ES:EDI,ESI                    ; 005c063d
    MOVSD ES:EDI,ESI                    ; 005c063e
    MOVSD ES:EDI,ESI                    ; 005c063f
    MOVSD ES:EDI,ESI                    ; 005c0640
    PUSH EAX                            ; 005c0641
    LEA ESI,[ESP + 0x10c]               ; 005c0642
    LEA EDI,[ESP + 0xdc]                ; 005c0649
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005c0650
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    LEA ESI,[ESP + 0x10c]               ; 005c0655
    ADD ESP,0x8                         ; 005c065c
    MOVSD ES:EDI,ESI                    ; 005c065f
    MOVSD ES:EDI,ESI                    ; 005c0660
    MOVSD ES:EDI,ESI                    ; 005c0661
    MOVSD ES:EDI,ESI                    ; 005c0662
    LEA EAX,[ESP + 0xd4]                ; 005c0663
    PUSH dword ptr [EBX + 0x1fc8c]      ; 005c066a
    PUSH EAX                            ; 005c0670
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005c0671
    PUSH EAX                            ; 005c0678
    LEA ESI,[ESP + 0x120]               ; 005c0679
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005c0680
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
    ADD ESP,0xc                         ; 005c0685
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 005c0688
    LEA ESI,[ESP + 0x114]               ; 005c068f
    LEA EDI,[EDI + 0x808]               ; 005c0696
    MOVSD ES:EDI,ESI                    ; 005c069c
    MOVSD ES:EDI,ESI                    ; 005c069d
    MOVSD ES:EDI,ESI                    ; 005c069e
    MOVSD ES:EDI,ESI                    ; 005c069f
    MOV ESP,EBP                         ; 005c06a0
    POP EBP                             ; 005c06a2
    POP EDI                             ; 005c06a3
    POP ESI                             ; 005c06a4
    POP EBX                             ; 005c06a5
    RET                                 ; 005c06a6

