; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004562a0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined        Stack[-0x29c]:1  local_29c
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x27c]:1  local_27c
; undefined        Stack[-0x26c]:1  local_26c
; undefined        Stack[-0x25c]:1  local_25c
; undefined        Stack[-0x24c]:1  local_24c
; undefined        Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1ec]:1  local_1ec
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
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_004555c0 at 00455b0c
;
; Referenced Globals:
;   undefined4 DAT_005d0287
;   undefined4 DAT_005fe2f0
;   undefined4 DAT_01b4d264
;   undefined4 DAT_01b4d268
;   undefined4 DAT_01b4d26c
;   undefined4 DAT_01b4d270
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_motion.cpp_FUN_00503f50
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004562a0
        ;   Label: core_doc.cpp_FUN_004562a0
    PUSH ESI                            ; 004562a1
    PUSH EDI                            ; 004562a2
    PUSH EBP                            ; 004562a3
    MOV EBP,ESP                         ; 004562a4
    SUB ESP,0x28c                       ; 004562a6
    AND ESP,0xfffffff8                  ; 004562ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004562af
    CMP dword ptr [EBP + 0x18],0x0      ; 004562b2
    JZ 0x00456641                       ; 004562b6
        ;   XREF to: 00456641 (CONDITIONAL_JUMP)  ; LAB_00456641
    PUSH 0xbfc90fdb                     ; 004562bc
    MOV EAX,[0x01b4d268]                ; 004562c1 | DAT_01b4d268
    LEA ESI,[ESP + 0x58]                ; 004562c6
    MOV dword ptr [ESP + 0x280],EAX     ; 004562ca
    MOV EAX,[0x01b4d270]                ; 004562d1 | DAT_01b4d270
    LEA EDI,[ESP + 0x18]                ; 004562d6
    MOV dword ptr [ESP + 0x274],EAX     ; 004562da
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 004562e1
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0x58]                ; 004562e6
    ADD ESP,0x4                         ; 004562ea
    MOVSD ES:EDI,ESI                    ; 004562ed
    MOVSD ES:EDI,ESI                    ; 004562ee
    MOVSD ES:EDI,ESI                    ; 004562ef
    MOVSD ES:EDI,ESI                    ; 004562f0
    PUSH 0xbfc90fdb                     ; 004562f1
    LEA ESI,[ESP + 0x178]               ; 004562f6
    LEA EDI,[ESP + 0x28]                ; 004562fd
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 00456301
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[ESP + 0x178]               ; 00456306
    ADD ESP,0x4                         ; 0045630d
    MOVSD ES:EDI,ESI                    ; 00456310
    MOVSD ES:EDI,ESI                    ; 00456311
    MOVSD ES:EDI,ESI                    ; 00456312
    MOVSD ES:EDI,ESI                    ; 00456313
    PUSH 0xbf490fdb                     ; 00456314
    LEA ESI,[ESP + 0x188]               ; 00456319
    LEA EDI,[ESP + 0x48]                ; 00456320
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00456324
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00456329
    LEA EAX,[ESP + 0x44]                ; 0045632c
    LEA ESI,[ESP + 0x184]               ; 00456330
    PUSH EAX                            ; 00456337
    MOVSD ES:EDI,ESI                    ; 00456338
    MOVSD ES:EDI,ESI                    ; 00456339
    MOVSD ES:EDI,ESI                    ; 0045633a
    MOVSD ES:EDI,ESI                    ; 0045633b
    PUSH 0xbfc90fdb                     ; 0045633c
    LEA ESI,[ESP + 0x19c]               ; 00456341
    LEA EDI,[ESP + 0x14c]               ; 00456348
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 0045634f
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[ESP + 0x19c]               ; 00456354
    ADD ESP,0x4                         ; 0045635b
    LEA EAX,[ESP + 0x148]               ; 0045635e
    MOVSD ES:EDI,ESI                    ; 00456365
    MOVSD ES:EDI,ESI                    ; 00456366
    MOVSD ES:EDI,ESI                    ; 00456367
    MOVSD ES:EDI,ESI                    ; 00456368
    PUSH EAX                            ; 00456369
    LEA ESI,[ESP + 0x1ac]               ; 0045636a
    LEA EDI,[ESP + 0x3c]                ; 00456371
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00456375
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 0045637a
    LEA EAX,[EBX + 0x25654]             ; 0045637d
    LEA ESI,[ESP + 0x1a4]               ; 00456383
    MOV dword ptr [ESP + 0x280],EAX     ; 0045638a
        ;   Label: LAB_0045638a
    MOVSD ES:EDI,ESI                    ; 00456391
    MOVSD ES:EDI,ESI                    ; 00456392
    MOVSD ES:EDI,ESI                    ; 00456393
    MOVSD ES:EDI,ESI                    ; 00456394
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 00456395
    MOV dword ptr [ESP],EAX             ; 0045639b
    MOV EAX,dword ptr [ESP + 0x280]     ; 0045639e
    FLD float ptr [EAX + 0x14]          ; 004563a5
    FLD1                                ; 004563a8
    FSUBRP                              ; 004563aa
    FLD float ptr [ESP]                 ; 004563ac
    FXCH                                ; 004563af
    FMUL ST1                            ; 004563b1
    FLD1                                ; 004563b3
    FSUBRP                              ; 004563b5
    FMULP                               ; 004563b7
    FST float ptr [ESP]                 ; 004563b9
    FLDZ                                ; 004563bc
    FCOMPP                              ; 004563be
    FNSTSW AX                           ; 004563c0
    SAHF                                ; 004563c2
    JNC 0x0045663a                      ; 004563c3
        ;   XREF to: 0045663a (CONDITIONAL_JUMP)  ; LAB_0045663a
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 004563c9
    SHL EAX,0x3                         ; 004563cf
    MOV ESI,EAX                         ; 004563d2
    SHL EAX,0x3                         ; 004563d4
    SUB EAX,ESI                         ; 004563d7
    MOV ESI,EAX                         ; 004563d9
    LEA EAX,[EBX + 0x2834]              ; 004563db
    ADD EAX,ESI                         ; 004563e1
    PUSH 0x1                            ; 004563e3
    ADD EAX,0x8                         ; 004563e5
    PUSH EAX                            ; 004563e8
    LEA EAX,[EBX + 0x2b4]               ; 004563e9
    PUSH EAX                            ; 004563ef
    MOV dword ptr [ESP + 0x290],EAX     ; 004563f0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004563f7
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004563fc
    PUSH EAX                            ; 004563ff
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00456400
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00456405
    PUSH dword ptr [EBX + 0x2d08]       ; 00456408
    PUSH EAX                            ; 0045640e
    MOV EDI,dword ptr [ESP + 0x28c]     ; 0045640f
    PUSH EDI                            ; 00456416
    MOV ESI,EAX                         ; 00456417
    CALL core_motion.cpp_FUN_00503f50   ; 00456419
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [ESP + 0x294],EAX     ; 0045641e
    FLD float ptr [ESP + 0x294]         ; 00456425
    ADD ESP,0xc                         ; 0045642c
    PUSH 0x544cc0                       ; 0045642f
    MOV EAX,dword ptr [ESP + 0x280]     ; 00456434
    PUSH EAX                            ; 0045643b
    PUSH dword ptr [ESP + 0x8]          ; 0045643c
    FSTP float ptr [ESP + 0x278]        ; 00456440
    PUSH dword ptr [ESP + 0x278]        ; 00456447
    PUSH ESI                            ; 0045644e
    PUSH EDI                            ; 0045644f
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 00456450
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 00456455
    MOV EAX,dword ptr [ESP + 0x280]     ; 00456458
    LEA ESI,[ESP + 0x214]               ; 0045645f
    PUSH dword ptr [EAX + 0xc]          ; 00456466
    LEA EDI,[ESP + 0x88]                ; 00456469
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00456470
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00456475
    LEA EAX,[ESP + 0x84]                ; 00456478
    LEA ESI,[ESP + 0x214]               ; 0045647f
    PUSH EAX                            ; 00456486
    MOVSD ES:EDI,ESI                    ; 00456487
    MOVSD ES:EDI,ESI                    ; 00456488
    MOVSD ES:EDI,ESI                    ; 00456489
    MOVSD ES:EDI,ESI                    ; 0045648a
    MOV EAX,dword ptr [ESP + 0x284]     ; 0045648b
    LEA ESI,[ESP + 0x238]               ; 00456492
    PUSH dword ptr [EAX + 0x8]          ; 00456499
    LEA EDI,[ESP + 0x7c]                ; 0045649c
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 004564a0
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[ESP + 0x23c]               ; 004564a5
    ADD ESP,0x4                         ; 004564ac
    LEA EAX,[ESP + 0x78]                ; 004564af
    MOVSD ES:EDI,ESI                    ; 004564b3
    MOVSD ES:EDI,ESI                    ; 004564b4
    MOVSD ES:EDI,ESI                    ; 004564b5
    MOVSD ES:EDI,ESI                    ; 004564b6
    PUSH EAX                            ; 004564b7
    LEA ESI,[ESP + 0x1bc]               ; 004564b8
    LEA EDI,[ESP + 0x6c]                ; 004564bf
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004564c3
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 004564c8
    LEA ESI,[ESP + 0x1b4]               ; 004564cb
    LEA EAX,[ESP + 0x14]                ; 004564d2
    PUSH 0x3f733333                     ; 004564d6
    PUSH EAX                            ; 004564db
    MOVSD ES:EDI,ESI                    ; 004564dc
    MOVSD ES:EDI,ESI                    ; 004564dd
    MOVSD ES:EDI,ESI                    ; 004564de
    MOVSD ES:EDI,ESI                    ; 004564df
    PUSH 0x5fe2f0                       ; 004564e0 | DAT_005fe2f0
    LEA ESI,[ESP + 0x1d0]               ; 004564e5
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 004564ec
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 004564f1
    LEA EAX,[ESP + 0x34]                ; 004564f4
    PUSH 0x3f733333                     ; 004564f8
    PUSH EAX                            ; 004564fd
    PUSH 0x5fe2f0                       ; 004564fe | DAT_005fe2f0
    LEA ESI,[ESP + 0x1e0]               ; 00456503
    LEA EDI,[ESP + 0x230]               ; 0045650a
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00456511
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00456516
    LEA EAX,[ESP + 0x64]                ; 00456519
    PUSH dword ptr [ESP]                ; 0045651d
    LEA ESI,[ESP + 0x1d8]               ; 00456520
    PUSH EAX                            ; 00456527
    LEA EAX,[ESP + 0x22c]               ; 00456528
    MOVSD ES:EDI,ESI                    ; 0045652f
    MOVSD ES:EDI,ESI                    ; 00456530
    MOVSD ES:EDI,ESI                    ; 00456531
    MOVSD ES:EDI,ESI                    ; 00456532
    PUSH EAX                            ; 00456533
    LEA ESI,[ESP + 0x1f0]               ; 00456534
    LEA EDI,[ESP + 0xb0]                ; 0045653b
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00456542
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x1f0]               ; 00456547
    ADD ESP,0x8                         ; 0045654e
    LEA EAX,[ESP + 0xa8]                ; 00456551
    MOVSD ES:EDI,ESI                    ; 00456558
    MOVSD ES:EDI,ESI                    ; 00456559
    MOVSD ES:EDI,ESI                    ; 0045655a
    MOVSD ES:EDI,ESI                    ; 0045655b
    PUSH EAX                            ; 0045655c
    MOV EDI,dword ptr [ESP + 0x284]     ; 0045655d
    LEA EAX,[EBX + 0x964]               ; 00456564
    SHL EDI,0x4                         ; 0045656a
    ADD EAX,EDI                         ; 0045656d
    PUSH EAX                            ; 0045656f
    LEA ESI,[ESP + 0x210]               ; 00456570
    MOV dword ptr [ESP + 0x284],EAX     ; 00456577
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 0045657e
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA EAX,[EBX + EDI*0x1]             ; 00456583
    MOV EDI,EAX                         ; 00456586
    LEA ESI,[ESP + 0x210]               ; 00456588
    ADD ESP,0xc                         ; 0045658f
    LEA EDI,[EDI + 0x964]               ; 00456592
    MOV dword ptr [ESP + 0x274],EAX     ; 00456598
    MOVSD ES:EDI,ESI                    ; 0045659f
    MOVSD ES:EDI,ESI                    ; 004565a0
    MOVSD ES:EDI,ESI                    ; 004565a1
    MOVSD ES:EDI,ESI                    ; 004565a2
    LEA EAX,[ESP + 0x64]                ; 004565a3
    PUSH EAX                            ; 004565a7
    LEA EAX,[ESP + 0x28]                ; 004565a8
    PUSH EAX                            ; 004565ac
    LEA EAX,[ESP + 0x1c]                ; 004565ad
    PUSH EAX                            ; 004565b1
    LEA ESI,[ESP + 0x110]               ; 004565b2
    LEA EDI,[ESP + 0xd0]                ; 004565b9
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004565c0
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x110]               ; 004565c5
    ADD ESP,0x8                         ; 004565cc
    LEA EAX,[ESP + 0xc8]                ; 004565cf
    MOVSD ES:EDI,ESI                    ; 004565d6
    MOVSD ES:EDI,ESI                    ; 004565d7
    MOVSD ES:EDI,ESI                    ; 004565d8
    MOVSD ES:EDI,ESI                    ; 004565d9
    PUSH EAX                            ; 004565da
    LEA ESI,[ESP + 0x11c]               ; 004565db
    LEA EDI,[ESP + 0xbc]                ; 004565e2
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004565e9
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x11c]               ; 004565ee
    ADD ESP,0x8                         ; 004565f5
    MOVSD ES:EDI,ESI                    ; 004565f8
    MOVSD ES:EDI,ESI                    ; 004565f9
    MOVSD ES:EDI,ESI                    ; 004565fa
    MOVSD ES:EDI,ESI                    ; 004565fb
    PUSH 0x544cc0                       ; 004565fc
    MOV ESI,dword ptr [ESP + 0x274]     ; 00456601
    PUSH ESI                            ; 00456608
    LEA EAX,[ESP + 0xbc]                ; 00456609
    PUSH dword ptr [ESP + 0x8]          ; 00456610
    PUSH EAX                            ; 00456614
    MOV EDI,dword ptr [ESP + 0x294]     ; 00456615
    PUSH EDI                            ; 0045661c
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 ; 0045661d
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x256f4]       ; 00456622
    ADD ESP,0x14                        ; 00456628
    FCOMP double ptr [0x005d0287]       ; 0045662b | DAT_005d0287
    FNSTSW AX                           ; 00456631
    SAHF                                ; 00456633
    JA 0x0045671a                       ; 00456634
        ;   XREF to: 0045671a (CONDITIONAL_JUMP)  ; LAB_0045671a
    MOV ESP,EBP                         ; 0045663a
        ;   Label: LAB_0045663a
    POP EBP                             ; 0045663c
    POP EDI                             ; 0045663d
    POP ESI                             ; 0045663e
    POP EBX                             ; 0045663f
    RET                                 ; 00456640
    PUSH 0x3fc90fdb                     ; 00456641
        ;   Label: LAB_00456641
    MOV EAX,[0x01b4d264]                ; 00456646 | DAT_01b4d264
    LEA ESI,[ESP + 0xf8]                ; 0045664b
    MOV dword ptr [ESP + 0x280],EAX     ; 00456652
    MOV EAX,[0x01b4d26c]                ; 00456659 | DAT_01b4d26c
    LEA EDI,[ESP + 0x18]                ; 0045665e
    MOV dword ptr [ESP + 0x274],EAX     ; 00456662
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00456669
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0xf8]                ; 0045666e
    ADD ESP,0x4                         ; 00456675
    MOVSD ES:EDI,ESI                    ; 00456678
    MOVSD ES:EDI,ESI                    ; 00456679
    MOVSD ES:EDI,ESI                    ; 0045667a
    MOVSD ES:EDI,ESI                    ; 0045667b
    PUSH 0x3fc90fdb                     ; 0045667c
    LEA ESI,[ESP + 0x8]                 ; 00456681
    LEA EDI,[ESP + 0x28]                ; 00456685
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 00456689
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[ESP + 0x8]                 ; 0045668e
    ADD ESP,0x4                         ; 00456692
    MOVSD ES:EDI,ESI                    ; 00456695
    MOVSD ES:EDI,ESI                    ; 00456696
    MOVSD ES:EDI,ESI                    ; 00456697
    MOVSD ES:EDI,ESI                    ; 00456698
    PUSH 0xbf490fdb                     ; 00456699
    LEA ESI,[ESP + 0x98]                ; 0045669e
    LEA EDI,[ESP + 0xe8]                ; 004566a5
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 004566ac
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 004566b1
    LEA EAX,[ESP + 0xe4]                ; 004566b4
    LEA ESI,[ESP + 0x94]                ; 004566bb
    PUSH EAX                            ; 004566c2
    MOVSD ES:EDI,ESI                    ; 004566c3
    MOVSD ES:EDI,ESI                    ; 004566c4
    MOVSD ES:EDI,ESI                    ; 004566c5
    MOVSD ES:EDI,ESI                    ; 004566c6
    PUSH 0x3fc90fdb                     ; 004566c7
    LEA ESI,[ESP + 0x12c]               ; 004566cc
    LEA EDI,[ESP + 0xdc]                ; 004566d3
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 004566da
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[ESP + 0x12c]               ; 004566df
    ADD ESP,0x4                         ; 004566e6
    LEA EAX,[ESP + 0xd8]                ; 004566e9
    MOVSD ES:EDI,ESI                    ; 004566f0
    MOVSD ES:EDI,ESI                    ; 004566f1
    MOVSD ES:EDI,ESI                    ; 004566f2
    MOVSD ES:EDI,ESI                    ; 004566f3
    PUSH EAX                            ; 004566f4
    LEA ESI,[ESP + 0x13c]               ; 004566f5
    LEA EDI,[ESP + 0x3c]                ; 004566fc
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00456700
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00456705
    LEA EAX,[EBX + 0x25674]             ; 00456708
    LEA ESI,[ESP + 0x134]               ; 0045670e
    JMP 0x0045638a                      ; 00456715
        ;   XREF to: 0045638a (UNCONDITIONAL_JUMP)  ; LAB_0045638a
    PUSH 0x3f490fdb                     ; 0045671a
        ;   Label: LAB_0045671a
    LEA ESI,[ESP + 0x158]               ; 0045671f
    LEA EDI,[ESP + 0x258]               ; 00456726
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 0045672d
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00456732
    LEA EAX,[ESP + 0x254]               ; 00456735
    LEA ESI,[ESP + 0x154]               ; 0045673c
    PUSH EAX                            ; 00456743
    LEA EAX,[ESP + 0x228]               ; 00456744
    MOVSD ES:EDI,ESI                    ; 0045674b
    MOVSD ES:EDI,ESI                    ; 0045674c
    MOVSD ES:EDI,ESI                    ; 0045674d
    MOVSD ES:EDI,ESI                    ; 0045674e
    PUSH EAX                            ; 0045674f
    LEA ESI,[ESP + 0x16c]               ; 00456750
    LEA EDI,[ESP + 0x24c]               ; 00456757
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0045675e
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x16c]               ; 00456763
    ADD ESP,0x8                         ; 0045676a
    MOVSD ES:EDI,ESI                    ; 0045676d
    MOVSD ES:EDI,ESI                    ; 0045676e
    MOVSD ES:EDI,ESI                    ; 0045676f
    MOVSD ES:EDI,ESI                    ; 00456770
    LEA EAX,[ESP + 0x244]               ; 00456771
    PUSH dword ptr [EBX + 0x256f4]      ; 00456778
    PUSH EAX                            ; 0045677e
    MOV EAX,dword ptr [ESP + 0x280]     ; 0045677f
    PUSH EAX                            ; 00456786
    LEA ESI,[ESP + 0x200]               ; 00456787
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 0045678e
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00456793
    MOV EDI,dword ptr [ESP + 0x274]     ; 00456796
    LEA ESI,[ESP + 0x1f4]               ; 0045679d
    LEA EDI,[EDI + 0x964]               ; 004567a4
    MOVSD ES:EDI,ESI                    ; 004567aa
    MOVSD ES:EDI,ESI                    ; 004567ab
    MOVSD ES:EDI,ESI                    ; 004567ac
    MOVSD ES:EDI,ESI                    ; 004567ad
    MOV ESP,EBP                         ; 004567ae
    POP EBP                             ; 004567b0
    POP EDI                             ; 004567b1
    POP ESI                             ; 004567b2
    POP EBX                             ; 004567b3
    RET                                 ; 004567b4

