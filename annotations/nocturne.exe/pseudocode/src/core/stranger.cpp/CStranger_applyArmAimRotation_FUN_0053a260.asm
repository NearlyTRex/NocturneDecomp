; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0053a260(CStranger *this_ptr,int arm_side)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   arm_side
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539feb
;
; Referenced Globals:
;   double DOUBLE_00595967 = 0.000100000000000000
;   undefined4 DAT_005a4508
;   undefined4 DAT_02dc9f5c
;   undefined4 DAT_02dc9f60
;   undefined4 DAT_02dc9f64
;   undefined4 DAT_02dc9f68
;
; Called Functions:
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0
;   core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0
;   core_xform.cpp_quaternionFromAngleZ_FUN_0055d520
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a260
        ;   Label: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260
    PUSH ESI                            ; 0053a261
    PUSH EDI                            ; 0053a262
    PUSH EBP                            ; 0053a263
    MOV EBP,ESP                         ; 0053a264
    SUB ESP,0x1cc                       ; 0053a266
    AND ESP,0xfffffff8                  ; 0053a26c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053a26f
    CMP dword ptr [EBP + 0x18],0x0      ; 0053a272
    JZ 0x0053a55d                       ; 0053a276
        ;   XREF to: 0053a55d (CONDITIONAL_JUMP)  ; LAB_0053a55d
    PUSH 0xbfc90fdb                     ; 0053a27c
    MOV EAX,[0x02dc9f60]                ; 0053a281 | DAT_02dc9f60
    LEA ESI,[ESP + 0x8]                 ; 0053a286
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0053a28a
    MOV EAX,[0x02dc9f68]                ; 0053a291 | DAT_02dc9f68
    LEA EDI,[ESP + 0x18]                ; 0053a296
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0053a29a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 0053a2a1
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x8]                 ; 0053a2a6
    ADD ESP,0x4                         ; 0053a2aa
    MOVSD ES:EDI,ESI                    ; 0053a2ad
    MOVSD ES:EDI,ESI                    ; 0053a2ae
    MOVSD ES:EDI,ESI                    ; 0053a2af
    MOVSD ES:EDI,ESI                    ; 0053a2b0
    PUSH 0xbfc90fdb                     ; 0053a2b1
    LEA ESI,[ESP + 0xf8]                ; 0053a2b6
    LEA EDI,[ESP + 0x28]                ; 0053a2bd
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_0055d520 ; 0053a2c1
        ;   XREF to: 0055d520 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0053a2c6
    LEA EAX,[EBX + 0x1fa50]             ; 0053a2c9
    LEA ESI,[ESP + 0xf4]                ; 0053a2cf
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0053a2d6
        ;   Label: LAB_0053a2d6
    MOVSD ES:EDI,ESI                    ; 0053a2dd
    MOVSD ES:EDI,ESI                    ; 0053a2de
    MOVSD ES:EDI,ESI                    ; 0053a2df
    MOVSD ES:EDI,ESI                    ; 0053a2e0
    MOV EAX,dword ptr [EBX + 0x2a88]    ; 0053a2e1
    MOV dword ptr [ESP],EAX             ; 0053a2e7
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0053a2ea
    FLD float ptr [EAX + 0x14]          ; 0053a2f1
    FLD1                                ; 0053a2f4
    FSUBRP                              ; 0053a2f6
    FLD float ptr [ESP]                 ; 0053a2f8
    FXCH                                ; 0053a2fb
    FMUL ST1                            ; 0053a2fd
    FLD1                                ; 0053a2ff
    FSUBRP                              ; 0053a301
    FMULP                               ; 0053a303
    FST float ptr [ESP]                 ; 0053a305
    FLDZ                                ; 0053a308
    FCOMPP                              ; 0053a30a
    FNSTSW AX                           ; 0053a30c
    SAHF                                ; 0053a30e
    JNC 0x0053a556                      ; 0053a30f
        ;   XREF to: 0053a556 (CONDITIONAL_JUMP)  ; LAB_0053a556
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 0053a315
    SHL EAX,0x3                         ; 0053a31b
    MOV ESI,EAX                         ; 0053a31e
    SHL EAX,0x3                         ; 0053a320
    SUB EAX,ESI                         ; 0053a323
    LEA ESI,[EBX + 0x2624]              ; 0053a325
    ADD EAX,ESI                         ; 0053a32b
    PUSH 0x1                            ; 0053a32d
    ADD EAX,0x8                         ; 0053a32f
    PUSH EAX                            ; 0053a332
    LEA EAX,[EBX + 0x150]               ; 0053a333
    PUSH EAX                            ; 0053a339
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0053a33a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0053a341
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053a346
    PUSH EAX                            ; 0053a349
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 0053a34a
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0053a34f
    PUSH dword ptr [EBX + 0x2a88]       ; 0053a352
    PUSH EAX                            ; 0053a358
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 0053a359
    PUSH EDI                            ; 0053a360
    MOV ESI,EAX                         ; 0053a361
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 0053a363
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0053a368
    FLD float ptr [ESP + 0x1d4]         ; 0053a36f
    ADD ESP,0xc                         ; 0053a376
    PUSH 0x51b650                       ; 0053a379
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0053a37e
    PUSH EAX                            ; 0053a385
    PUSH dword ptr [ESP + 0x8]          ; 0053a386
    FSTP float ptr [ESP + 0x1b8]        ; 0053a38a
    PUSH dword ptr [ESP + 0x1b8]        ; 0053a391
    PUSH ESI                            ; 0053a398
    PUSH EDI                            ; 0053a399
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 0053a39a
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0053a39f
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0053a3a2
    LEA ESI,[ESP + 0x194]               ; 0053a3a9
    PUSH dword ptr [EAX + 0xc]          ; 0053a3b0
    LEA EDI,[ESP + 0x78]                ; 0053a3b3
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 0053a3b7
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0053a3bc
    LEA EAX,[ESP + 0x74]                ; 0053a3bf
    LEA ESI,[ESP + 0x194]               ; 0053a3c3
    PUSH EAX                            ; 0053a3ca
    MOVSD ES:EDI,ESI                    ; 0053a3cb
    MOVSD ES:EDI,ESI                    ; 0053a3cc
    MOVSD ES:EDI,ESI                    ; 0053a3cd
    MOVSD ES:EDI,ESI                    ; 0053a3ce
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0053a3cf
    LEA ESI,[ESP + 0x48]                ; 0053a3d6
    PUSH dword ptr [EAX + 0x8]          ; 0053a3da
    LEA EDI,[ESP + 0x6c]                ; 0053a3dd
    CALL core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0 ; 0053a3e1
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x4c]                ; 0053a3e6
    ADD ESP,0x4                         ; 0053a3ea
    LEA EAX,[ESP + 0x68]                ; 0053a3ed
    MOVSD ES:EDI,ESI                    ; 0053a3f1
    MOVSD ES:EDI,ESI                    ; 0053a3f2
    MOVSD ES:EDI,ESI                    ; 0053a3f3
    MOVSD ES:EDI,ESI                    ; 0053a3f4
    PUSH EAX                            ; 0053a3f5
    LEA ESI,[ESP + 0x13c]               ; 0053a3f6
    LEA EDI,[ESP + 0x5c]                ; 0053a3fd
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0053a401
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0053a406
    LEA ESI,[ESP + 0x134]               ; 0053a409
    LEA EAX,[ESP + 0x14]                ; 0053a410
    PUSH 0x3f733333                     ; 0053a414
    PUSH EAX                            ; 0053a419
    MOVSD ES:EDI,ESI                    ; 0053a41a
    MOVSD ES:EDI,ESI                    ; 0053a41b
    MOVSD ES:EDI,ESI                    ; 0053a41c
    MOVSD ES:EDI,ESI                    ; 0053a41d
    PUSH 0x5a4508                       ; 0053a41e | DAT_005a4508
    LEA ESI,[ESP + 0x150]               ; 0053a423
    LEA EDI,[ESP + 0x90]                ; 0053a42a
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0053a431
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_0055d2d0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0053a436
    LEA EAX,[ESP + 0x54]                ; 0053a439
    PUSH dword ptr [ESP]                ; 0053a43d
    LEA ESI,[ESP + 0x148]               ; 0053a440
    PUSH EAX                            ; 0053a447
    LEA EAX,[ESP + 0x8c]                ; 0053a448
    MOVSD ES:EDI,ESI                    ; 0053a44f
    MOVSD ES:EDI,ESI                    ; 0053a450
    MOVSD ES:EDI,ESI                    ; 0053a451
    MOVSD ES:EDI,ESI                    ; 0053a452
    PUSH EAX                            ; 0053a453
    LEA ESI,[ESP + 0x130]               ; 0053a454
    LEA EDI,[ESP + 0xa0]                ; 0053a45b
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0053a462
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x130]               ; 0053a467
    ADD ESP,0x8                         ; 0053a46e
    LEA EAX,[ESP + 0x98]                ; 0053a471
    MOVSD ES:EDI,ESI                    ; 0053a478
    MOVSD ES:EDI,ESI                    ; 0053a479
    MOVSD ES:EDI,ESI                    ; 0053a47a
    MOVSD ES:EDI,ESI                    ; 0053a47b
    PUSH EAX                            ; 0053a47c
    MOV EDI,dword ptr [ESP + 0x1c4]     ; 0053a47d
    LEA EAX,[EBX + 0x800]               ; 0053a484
    SHL EDI,0x4                         ; 0053a48a
    ADD EAX,EDI                         ; 0053a48d
    PUSH EAX                            ; 0053a48f
    LEA ESI,[ESP + 0x180]               ; 0053a490
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0053a497
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0053a49e
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_0055d2d0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA EAX,[EBX + EDI*0x1]             ; 0053a4a3
    MOV EDI,EAX                         ; 0053a4a6
    LEA ESI,[ESP + 0x180]               ; 0053a4a8
    ADD ESP,0xc                         ; 0053a4af
    LEA EDI,[EDI + 0x800]               ; 0053a4b2
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0053a4b8
    MOVSD ES:EDI,ESI                    ; 0053a4bf
    MOVSD ES:EDI,ESI                    ; 0053a4c0
    MOVSD ES:EDI,ESI                    ; 0053a4c1
    MOVSD ES:EDI,ESI                    ; 0053a4c2
    LEA EAX,[ESP + 0x54]                ; 0053a4c3
    PUSH EAX                            ; 0053a4c7
    LEA EAX,[ESP + 0x28]                ; 0053a4c8
    PUSH EAX                            ; 0053a4cc
    LEA EAX,[ESP + 0x1c]                ; 0053a4cd
    PUSH EAX                            ; 0053a4d1
    LEA ESI,[ESP + 0x160]               ; 0053a4d2
    LEA EDI,[ESP + 0xc0]                ; 0053a4d9
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0053a4e0
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x160]               ; 0053a4e5
    ADD ESP,0x8                         ; 0053a4ec
    LEA EAX,[ESP + 0xb8]                ; 0053a4ef
    MOVSD ES:EDI,ESI                    ; 0053a4f6
    MOVSD ES:EDI,ESI                    ; 0053a4f7
    MOVSD ES:EDI,ESI                    ; 0053a4f8
    MOVSD ES:EDI,ESI                    ; 0053a4f9
    PUSH EAX                            ; 0053a4fa
    LEA ESI,[ESP + 0x16c]               ; 0053a4fb
    LEA EDI,[ESP + 0xac]                ; 0053a502
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0053a509
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x16c]               ; 0053a50e
    ADD ESP,0x8                         ; 0053a515
    MOVSD ES:EDI,ESI                    ; 0053a518
    MOVSD ES:EDI,ESI                    ; 0053a519
    MOVSD ES:EDI,ESI                    ; 0053a51a
    MOVSD ES:EDI,ESI                    ; 0053a51b
    PUSH 0x51b650                       ; 0053a51c
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 0053a521
    PUSH ESI                            ; 0053a528
    LEA EAX,[ESP + 0xac]                ; 0053a529
    PUSH dword ptr [ESP + 0x8]          ; 0053a530
    PUSH EAX                            ; 0053a534
    MOV EDI,dword ptr [ESP + 0x1d4]     ; 0053a535
    PUSH EDI                            ; 0053a53c
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 0053a53d
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x1faf4]       ; 0053a542
    ADD ESP,0x14                        ; 0053a548
    FCOMP double ptr [0x00595967]       ; 0053a54b | DOUBLE_00595967
    FNSTSW AX                           ; 0053a551
    SAHF                                ; 0053a553
    JA 0x0053a5bc                       ; 0053a554
        ;   XREF to: 0053a5bc (CONDITIONAL_JUMP)  ; LAB_0053a5bc
    MOV ESP,EBP                         ; 0053a556
        ;   Label: LAB_0053a556
    POP EBP                             ; 0053a558
    POP EDI                             ; 0053a559
    POP ESI                             ; 0053a55a
    POP EBX                             ; 0053a55b
    RET                                 ; 0053a55c
    PUSH 0x3fc90fdb                     ; 0053a55d
        ;   Label: LAB_0053a55d
    MOV EAX,[0x02dc9f5c]                ; 0053a562 | DAT_02dc9f5c
    LEA ESI,[ESP + 0xc8]                ; 0053a567
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0053a56e
    MOV EAX,[0x02dc9f64]                ; 0053a575 | DAT_02dc9f64
    LEA EDI,[ESP + 0x18]                ; 0053a57a
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0053a57e
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 0053a585
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xc8]                ; 0053a58a
    ADD ESP,0x4                         ; 0053a591
    MOVSD ES:EDI,ESI                    ; 0053a594
    MOVSD ES:EDI,ESI                    ; 0053a595
    MOVSD ES:EDI,ESI                    ; 0053a596
    MOVSD ES:EDI,ESI                    ; 0053a597
    PUSH 0x3fc90fdb                     ; 0053a598
    LEA ESI,[ESP + 0x38]                ; 0053a59d
    LEA EDI,[ESP + 0x28]                ; 0053a5a1
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_0055d520 ; 0053a5a5
        ;   XREF to: 0055d520 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0053a5aa
    LEA EAX,[EBX + 0x1fa70]             ; 0053a5ad
    LEA ESI,[ESP + 0x34]                ; 0053a5b3
    JMP 0x0053a2d6                      ; 0053a5b7
        ;   XREF to: 0053a2d6 (UNCONDITIONAL_JUMP)  ; LAB_0053a2d6
    PUSH 0x3fc90fdb                     ; 0053a5bc
        ;   Label: LAB_0053a5bc
    LEA ESI,[ESP + 0x188]               ; 0053a5c1
    LEA EDI,[ESP + 0xe8]                ; 0053a5c8
    CALL core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0 ; 0053a5cf
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0053a5d4
    LEA EAX,[ESP + 0xe4]                ; 0053a5d7
    LEA ESI,[ESP + 0x184]               ; 0053a5de
    PUSH EAX                            ; 0053a5e5
    LEA EAX,[ESP + 0x88]                ; 0053a5e6
    MOVSD ES:EDI,ESI                    ; 0053a5ed
    MOVSD ES:EDI,ESI                    ; 0053a5ee
    MOVSD ES:EDI,ESI                    ; 0053a5ef
    MOVSD ES:EDI,ESI                    ; 0053a5f0
    PUSH EAX                            ; 0053a5f1
    LEA ESI,[ESP + 0x10c]               ; 0053a5f2
    LEA EDI,[ESP + 0xdc]                ; 0053a5f9
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0053a600
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x10c]               ; 0053a605
    ADD ESP,0x8                         ; 0053a60c
    MOVSD ES:EDI,ESI                    ; 0053a60f
    MOVSD ES:EDI,ESI                    ; 0053a610
    MOVSD ES:EDI,ESI                    ; 0053a611
    MOVSD ES:EDI,ESI                    ; 0053a612
    LEA EAX,[ESP + 0xd4]                ; 0053a613
    PUSH dword ptr [EBX + 0x1faf4]      ; 0053a61a
    PUSH EAX                            ; 0053a620
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0053a621
    PUSH EAX                            ; 0053a628
    LEA ESI,[ESP + 0x120]               ; 0053a629
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0053a630
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_0055d2d0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0053a635
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 0053a638
    LEA ESI,[ESP + 0x114]               ; 0053a63f
    LEA EDI,[EDI + 0x800]               ; 0053a646
    MOVSD ES:EDI,ESI                    ; 0053a64c
    MOVSD ES:EDI,ESI                    ; 0053a64d
    MOVSD ES:EDI,ESI                    ; 0053a64e
    MOVSD ES:EDI,ESI                    ; 0053a64f
    MOV ESP,EBP                         ; 0053a650
    POP EBP                             ; 0053a652
    POP EDI                             ; 0053a653
    POP ESI                             ; 0053a654
    POP EBX                             ; 0053a655
    RET                                 ; 0053a656

