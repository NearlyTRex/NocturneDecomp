; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0046f200(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined        Stack[-0x1e4]:1  local_1e4
; undefined        Stack[-0x1d4]:1  local_1d4
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x184]:1  local_184
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x164]:1  local_164
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_0046ea80 at 0046f044
;
; Referenced Globals:
;   undefined4 DAT_005da094
;   undefined4 DAT_005da09c
;   undefined4 DAT_005da0a4
;   undefined4 DAT_005da0ac
;   undefined4 DAT_006081e0
;   undefined4 DAT_01b68820
;   undefined4 DAT_01b68824
;   undefined4 DAT_01b68848
;   undefined4 DAT_01b6884c
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_motion.cpp_FUN_00525110
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_negateFirstComponent_FUN_005b7750
;   core_xform.cpp_quaternionFromAngleX_FUN_005b7af0
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;   core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f200
        ;   Label: core_doc.cpp_FUN_0046f200
    PUSH ESI                            ; 0046f201
    PUSH EDI                            ; 0046f202
    PUSH EBP                            ; 0046f203
    MOV EBP,ESP                         ; 0046f204
    SUB ESP,0x1d8                       ; 0046f206
    AND ESP,0xfffffff8                  ; 0046f20c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046f20f
    CMP dword ptr [EBP + 0x18],0x0      ; 0046f212
    JZ 0x0046f4fd                       ; 0046f216
        ;   XREF to: 0046f4fd (CONDITIONAL_JUMP)  ; LAB_0046f4fd
    PUSH 0xbfc90fdb                     ; 0046f21c
    MOV EAX,[0x01b68824]                ; 0046f221 | DAT_01b68824
    LEA ESI,[ESP + 0x108]               ; 0046f226
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0046f22d
    MOV EAX,[0x01b6884c]                ; 0046f234 | DAT_01b6884c
    LEA EDI,[ESP + 0x18]                ; 0046f239
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0046f23d
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0046f244
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    LEA ESI,[ESP + 0x108]               ; 0046f249
    ADD ESP,0x4                         ; 0046f250
    MOVSD ES:EDI,ESI                    ; 0046f253
    MOVSD ES:EDI,ESI                    ; 0046f254
    MOVSD ES:EDI,ESI                    ; 0046f255
    MOVSD ES:EDI,ESI                    ; 0046f256
    PUSH 0xbfc90fdb                     ; 0046f257
    LEA ESI,[ESP + 0x38]                ; 0046f25c
    LEA EDI,[ESP + 0x28]                ; 0046f260
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70 ; 0046f264
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70()
    LEA ESI,[ESP + 0x38]                ; 0046f269
    ADD ESP,0x4                         ; 0046f26d
    MOVSD ES:EDI,ESI                    ; 0046f270
    MOVSD ES:EDI,ESI                    ; 0046f271
    MOVSD ES:EDI,ESI                    ; 0046f272
    MOVSD ES:EDI,ESI                    ; 0046f273
    LEA ESI,[EBX + 0x1ffc0]             ; 0046f274
    FLD float ptr [EBX + 0x2c9c]        ; 0046f27a
        ;   Label: LAB_0046f27a
    FADD double ptr [0x005da094]        ; 0046f280 | DAT_005da094
    FMUL double ptr [0x005da09c]        ; 0046f286 | DAT_005da09c
    FST float ptr [ESP]                 ; 0046f28c
    FLDZ                                ; 0046f28f
    FCOMPP                              ; 0046f291
    FNSTSW AX                           ; 0046f293
    SAHF                                ; 0046f295
    JBE 0x0046f29d                      ; 0046f296
        ;   XREF to: 0046f29d (CONDITIONAL_JUMP)  ; LAB_0046f29d
    XOR ECX,ECX                         ; 0046f298
    MOV dword ptr [ESP],ECX             ; 0046f29a
    FLD float ptr [ESI + 0x14]          ; 0046f29d
        ;   Label: LAB_0046f29d
    FLD1                                ; 0046f2a0
    FSUBRP                              ; 0046f2a2
    FLD float ptr [ESP]                 ; 0046f2a4
    FXCH                                ; 0046f2a7
    FMUL ST1                            ; 0046f2a9
    FLD1                                ; 0046f2ab
    FSUBRP                              ; 0046f2ad
    FMULP                               ; 0046f2af
    FST float ptr [ESP]                 ; 0046f2b1
    FLDZ                                ; 0046f2b4
    FCOMPP                              ; 0046f2b6
    FNSTSW AX                           ; 0046f2b8
    SAHF                                ; 0046f2ba
    JNC 0x0046f4f6                      ; 0046f2bb
        ;   XREF to: 0046f4f6 (CONDITIONAL_JUMP)  ; LAB_0046f4f6
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0046f2c1
    SHL EAX,0x3                         ; 0046f2c7
    MOV EDI,EAX                         ; 0046f2ca
    SHL EAX,0x3                         ; 0046f2cc
    SUB EAX,EDI                         ; 0046f2cf
    LEA EDI,[EBX + 0x27c8]              ; 0046f2d1
    ADD EAX,EDI                         ; 0046f2d7
    PUSH 0x1                            ; 0046f2d9
    ADD EAX,0x8                         ; 0046f2db
    PUSH EAX                            ; 0046f2de
    LEA EAX,[EBX + 0x158]               ; 0046f2df
    PUSH EAX                            ; 0046f2e5
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0046f2e6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0046f2ed
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046f2f2
    PUSH EAX                            ; 0046f2f5
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0046f2f6
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0046f2fb
    PUSH dword ptr [EBX + 0x2c9c]       ; 0046f2fe
    PUSH EAX                            ; 0046f304
    MOV EDI,EAX                         ; 0046f305
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0046f307
    PUSH EAX                            ; 0046f30e
    CALL core_motion.cpp_FUN_00525110   ; 0046f30f
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0046f314
    FLD float ptr [ESP + 0x1e0]         ; 0046f31b
    ADD ESP,0xc                         ; 0046f322
    PUSH 0x567360                       ; 0046f325
    MOV EDX,dword ptr [ESP + 0x1d0]     ; 0046f32a
    PUSH EDX                            ; 0046f331
    PUSH dword ptr [ESP + 0x8]          ; 0046f332
    FSTP float ptr [ESP + 0x1cc]        ; 0046f336
    PUSH dword ptr [ESP + 0x1cc]        ; 0046f33d
    PUSH EDI                            ; 0046f344
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 0046f345
    PUSH ECX                            ; 0046f34c
    LEA EDI,[ESP + 0x1bc]               ; 0046f34d
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 ; 0046f354
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0046f359
    FLD float ptr [ESI + 0x8]           ; 0046f35c
    PUSH dword ptr [ESI + 0xc]          ; 0046f35f
    FADD double ptr [0x005da0a4]        ; 0046f362 | DAT_005da0a4
    LEA ESI,[ESP + 0x118]               ; 0046f368
    FSTP float ptr [ESP + 0x1c0]        ; 0046f36f
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0046f376
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0046f37b
    LEA EAX,[ESP + 0x1a4]               ; 0046f37e
    LEA ESI,[ESP + 0x114]               ; 0046f385
    PUSH EAX                            ; 0046f38c
    MOVSD ES:EDI,ESI                    ; 0046f38d
    MOVSD ES:EDI,ESI                    ; 0046f38e
    MOVSD ES:EDI,ESI                    ; 0046f38f
    MOVSD ES:EDI,ESI                    ; 0046f390
    PUSH dword ptr [ESP + 0x1c0]        ; 0046f391
    LEA ESI,[ESP + 0x18c]               ; 0046f398
    LEA EDI,[ESP + 0x7c]                ; 0046f39f
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0046f3a3
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    LEA ESI,[ESP + 0x18c]               ; 0046f3a8
    ADD ESP,0x4                         ; 0046f3af
    LEA EAX,[ESP + 0x78]                ; 0046f3b2
    MOVSD ES:EDI,ESI                    ; 0046f3b6
    MOVSD ES:EDI,ESI                    ; 0046f3b7
    MOVSD ES:EDI,ESI                    ; 0046f3b8
    MOVSD ES:EDI,ESI                    ; 0046f3b9
    PUSH EAX                            ; 0046f3ba
    LEA ESI,[ESP + 0xdc]                ; 0046f3bb
    LEA EDI,[ESP + 0x6c]                ; 0046f3c2
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 0046f3c6
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 0046f3cb
    LEA ESI,[ESP + 0xd4]                ; 0046f3ce
    LEA EAX,[ESP + 0x14]                ; 0046f3d5
    PUSH 0x3f733333                     ; 0046f3d9
    PUSH EAX                            ; 0046f3de
    MOVSD ES:EDI,ESI                    ; 0046f3df
    MOVSD ES:EDI,ESI                    ; 0046f3e0
    MOVSD ES:EDI,ESI                    ; 0046f3e1
    MOVSD ES:EDI,ESI                    ; 0046f3e2
    PUSH 0x6081e0                       ; 0046f3e3 | DAT_006081e0
    LEA ESI,[ESP + 0xf0]                ; 0046f3e8
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0046f3ef
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    ADD ESP,0xc                         ; 0046f3f4
    LEA EAX,[ESP + 0x64]                ; 0046f3f7
    LEA EDI,[ESP + 0x94]                ; 0046f3fb
    PUSH EAX                            ; 0046f402
    LEA EAX,[ESP + 0x28]                ; 0046f403
    LEA ESI,[ESP + 0xe8]                ; 0046f407
    PUSH EAX                            ; 0046f40e
    LEA EAX,[ESP + 0x1c]                ; 0046f40f
    MOVSD ES:EDI,ESI                    ; 0046f413
    MOVSD ES:EDI,ESI                    ; 0046f414
    MOVSD ES:EDI,ESI                    ; 0046f415
    MOVSD ES:EDI,ESI                    ; 0046f416
    PUSH EAX                            ; 0046f417
    LEA ESI,[ESP + 0x1a0]               ; 0046f418
    LEA EDI,[ESP + 0xc0]                ; 0046f41f
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 0046f426
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x1a0]               ; 0046f42b
    ADD ESP,0x8                         ; 0046f432
    LEA EAX,[ESP + 0xb8]                ; 0046f435
    MOVSD ES:EDI,ESI                    ; 0046f43c
    MOVSD ES:EDI,ESI                    ; 0046f43d
    MOVSD ES:EDI,ESI                    ; 0046f43e
    MOVSD ES:EDI,ESI                    ; 0046f43f
    PUSH EAX                            ; 0046f440
    LEA ESI,[ESP + 0x17c]               ; 0046f441
    LEA EDI,[ESP + 0xac]                ; 0046f448
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 0046f44f
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x17c]               ; 0046f454
    ADD ESP,0x8                         ; 0046f45b
    MOVSD ES:EDI,ESI                    ; 0046f45e
    MOVSD ES:EDI,ESI                    ; 0046f45f
    MOVSD ES:EDI,ESI                    ; 0046f460
    MOVSD ES:EDI,ESI                    ; 0046f461
    LEA EAX,[ESP + 0xa4]                ; 0046f462
    PUSH EAX                            ; 0046f469
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0046f46a
    LEA ESI,[EBX + 0x808]               ; 0046f471
    SHL EAX,0x4                         ; 0046f477
    ADD EAX,ESI                         ; 0046f47a
    MOV dword ptr [ESP + 0x1c8],ESI     ; 0046f47c
    PUSH EAX                            ; 0046f483
    LEA ESI,[ESP + 0x4c]                ; 0046f484
    LEA EDI,[ESP + 0xc]                 ; 0046f488
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 0046f48c
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    LEA ESI,[ESP + 0x4c]                ; 0046f491
    ADD ESP,0x4                         ; 0046f495
    LEA EAX,[ESP + 0x8]                 ; 0046f498
    MOVSD ES:EDI,ESI                    ; 0046f49c
    MOVSD ES:EDI,ESI                    ; 0046f49d
    MOVSD ES:EDI,ESI                    ; 0046f49e
    MOVSD ES:EDI,ESI                    ; 0046f49f
    PUSH EAX                            ; 0046f4a0
    LEA ESI,[ESP + 0x5c]                ; 0046f4a1
    LEA EDI,[ESP + 0xcc]                ; 0046f4a5
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 0046f4ac
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x5c]                ; 0046f4b1
    ADD ESP,0x8                         ; 0046f4b5
    MOVSD ES:EDI,ESI                    ; 0046f4b8
    MOVSD ES:EDI,ESI                    ; 0046f4b9
    MOVSD ES:EDI,ESI                    ; 0046f4ba
    MOVSD ES:EDI,ESI                    ; 0046f4bb
    PUSH 0x567360                       ; 0046f4bc
    MOV EDI,dword ptr [ESP + 0x1d0]     ; 0046f4c1
    PUSH EDI                            ; 0046f4c8
    LEA EAX,[ESP + 0xcc]                ; 0046f4c9
    PUSH dword ptr [ESP + 0x8]          ; 0046f4d0
    PUSH EAX                            ; 0046f4d4
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0046f4d5
    PUSH EAX                            ; 0046f4dc
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0046f4dd
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x20060]       ; 0046f4e2
    ADD ESP,0x14                        ; 0046f4e8
    FCOMP double ptr [0x005da0ac]       ; 0046f4eb | DAT_005da0ac
    FNSTSW AX                           ; 0046f4f1
    SAHF                                ; 0046f4f3
    JA 0x0046f566                       ; 0046f4f4
        ;   XREF to: 0046f566 (CONDITIONAL_JUMP)  ; LAB_0046f566
    MOV ESP,EBP                         ; 0046f4f6
        ;   Label: LAB_0046f4f6
    POP EBP                             ; 0046f4f8
    POP EDI                             ; 0046f4f9
    POP ESI                             ; 0046f4fa
    POP EBX                             ; 0046f4fb
    RET                                 ; 0046f4fc
    PUSH 0x3fc90fdb                     ; 0046f4fd
        ;   Label: LAB_0046f4fd
    MOV EAX,[0x01b68820]                ; 0046f502 | DAT_01b68820
    LEA ESI,[ESP + 0x88]                ; 0046f507
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0046f50e
    MOV EAX,[0x01b68848]                ; 0046f515 | DAT_01b68848
    LEA EDI,[ESP + 0x18]                ; 0046f51a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0046f51e
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0046f525
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    LEA ESI,[ESP + 0x88]                ; 0046f52a
    ADD ESP,0x4                         ; 0046f531
    MOVSD ES:EDI,ESI                    ; 0046f534
    MOVSD ES:EDI,ESI                    ; 0046f535
    MOVSD ES:EDI,ESI                    ; 0046f536
    MOVSD ES:EDI,ESI                    ; 0046f537
    PUSH 0x3fc90fdb                     ; 0046f538
    LEA ESI,[ESP + 0xf8]                ; 0046f53d
    LEA EDI,[ESP + 0x28]                ; 0046f544
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70 ; 0046f548
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70()
    LEA ESI,[ESP + 0xf8]                ; 0046f54d
    ADD ESP,0x4                         ; 0046f554
    MOVSD ES:EDI,ESI                    ; 0046f557
    MOVSD ES:EDI,ESI                    ; 0046f558
    MOVSD ES:EDI,ESI                    ; 0046f559
    MOVSD ES:EDI,ESI                    ; 0046f55a
    LEA ESI,[EBX + 0x1ffe0]             ; 0046f55b
    JMP 0x0046f27a                      ; 0046f561
        ;   XREF to: 0046f27a (UNCONDITIONAL_JUMP)  ; LAB_0046f27a
    PUSH 0x3fc90fdb                     ; 0046f566
        ;   Label: LAB_0046f566
    LEA ESI,[ESP + 0x138]               ; 0046f56b
    LEA EDI,[ESP + 0x168]               ; 0046f572
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0046f579
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    ADD ESP,0x4                         ; 0046f57e
    LEA EAX,[ESP + 0x164]               ; 0046f581
    LEA ESI,[ESP + 0x134]               ; 0046f588
    PUSH EAX                            ; 0046f58f
    LEA EAX,[ESP + 0x98]                ; 0046f590
    MOVSD ES:EDI,ESI                    ; 0046f597
    MOVSD ES:EDI,ESI                    ; 0046f598
    MOVSD ES:EDI,ESI                    ; 0046f599
    MOVSD ES:EDI,ESI                    ; 0046f59a
    PUSH EAX                            ; 0046f59b
    LEA ESI,[ESP + 0x14c]               ; 0046f59c
    LEA EDI,[ESP + 0x15c]               ; 0046f5a3
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 0046f5aa
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x14c]               ; 0046f5af
    ADD ESP,0x8                         ; 0046f5b6
    MOVSD ES:EDI,ESI                    ; 0046f5b9
    MOVSD ES:EDI,ESI                    ; 0046f5ba
    MOVSD ES:EDI,ESI                    ; 0046f5bb
    MOVSD ES:EDI,ESI                    ; 0046f5bc
    LEA EAX,[ESP + 0x154]               ; 0046f5bd
    PUSH dword ptr [EBX + 0x20060]      ; 0046f5c4
    MOV EDI,dword ptr [ESP + 0x1d0]     ; 0046f5ca
    PUSH EAX                            ; 0046f5d1
    SHL EDI,0x4                         ; 0046f5d2
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0046f5d5
    ADD EAX,EDI                         ; 0046f5dc
    PUSH EAX                            ; 0046f5de
    LEA ESI,[ESP + 0x130]               ; 0046f5df
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0046f5e6
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    LEA ESI,[ESP + 0x130]               ; 0046f5eb
    LEA EDI,[EDI + EBX*0x1 + 0x808]     ; 0046f5f2
    ADD ESP,0xc                         ; 0046f5f9
    MOVSD ES:EDI,ESI                    ; 0046f5fc
    MOVSD ES:EDI,ESI                    ; 0046f5fd
    MOVSD ES:EDI,ESI                    ; 0046f5fe
    MOVSD ES:EDI,ESI                    ; 0046f5ff
    MOV ESP,EBP                         ; 0046f600
    POP EBP                             ; 0046f602
    POP EDI                             ; 0046f603
    POP ESI                             ; 0046f604
    POP EBX                             ; 0046f605
    RET                                 ; 0046f606

