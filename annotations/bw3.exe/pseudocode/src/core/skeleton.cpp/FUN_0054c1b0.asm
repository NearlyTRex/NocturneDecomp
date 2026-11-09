; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054c1b0(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x1890]:4  local_1890
; undefined        Stack[-0x188c]:1  local_188c
; undefined        Stack[-0x124c]:1  local_124c
; undefined        Stack[-0xc0c]:1  local_c0c
; undefined        Stack[-0x2ac]:1  local_2ac
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
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_prye.cpp_FUN_0051e280 at 0051e2be
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 at 0054c13f
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180 at 0054c191
;
; Called Functions:
;   core_motion.cpp_FUN_004fcb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
;   core_skeleton.cpp_FUN_00548140
;   core_skeleton.cpp_FUN_005481d0
;   core_xform.cpp_multiplyQuaternion_FUN_00585990
;   core_xform.cpp_negateFirstComponent_FUN_00585930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c1b0
        ;   Label: core_skeleton.cpp_FUN_0054c1b0
    PUSH ESI                            ; 0054c1b1
    PUSH EDI                            ; 0054c1b2
    PUSH EBP                            ; 0054c1b3
    MOV EBP,ESP                         ; 0054c1b4
    SUB ESP,0x1880                      ; 0054c1b6
    AND ESP,0xfffffff8                  ; 0054c1bc
    MOV EDI,dword ptr [EBP + 0x18]      ; 0054c1bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054c1c2
    PUSH EDX                            ; 0054c1c5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054c1c6
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0054c1cb
    ADD ESP,0x4                         ; 0054c1cd
    MOV EBX,EAX                         ; 0054c1d0
    MOV EAX,ESP                         ; 0054c1d2
    PUSH EAX                            ; 0054c1d4
    LEA EAX,[ESP + 0x1814]              ; 0054c1d5
    PUSH EAX                            ; 0054c1dc
    LEA EAX,[ESP + 0x1814]              ; 0054c1dd
    PUSH EAX                            ; 0054c1e4
    PUSH dword ptr [EBP + 0x1c]         ; 0054c1e5
    PUSH EDI                            ; 0054c1e8
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054c1e9
    PUSH ECX                            ; 0054c1ec
    CALL core_motion.cpp_FUN_004fcb50   ; 0054c1ed
        ;   XREF to: 004fcb50 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcb50(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 0054c1f2
    CMP dword ptr [EBP + 0x20],0x0      ; 0054c1f5
    JL 0x0054c285                       ; 0054c1f9
        ;   XREF to: 0054c285 (CONDITIONAL_JUMP)  ; LAB_0054c285
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c1ff
    MOV EDX,dword ptr [EAX + 0x2340]    ; 0054c202
    CMP EDX,0x1                         ; 0054c208
    JZ 0x0054c4c7                       ; 0054c20b
        ;   XREF to: 0054c4c7 (CONDITIONAL_JUMP)  ; LAB_0054c4c7
    CMP EDX,0x2                         ; 0054c211
    JZ 0x0054c77b                       ; 0054c214
        ;   XREF to: 0054c77b (CONDITIONAL_JUMP)  ; LAB_0054c77b
    XOR EDI,EDI                         ; 0054c21a
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0054c21c
    MOV dword ptr [ESP + 0x1870],EDI    ; 0054c222
    TEST EAX,EAX                        ; 0054c229
    JLE 0x0054c27e                      ; 0054c22b
        ;   XREF to: 0054c27e (CONDITIONAL_JUMP)  ; LAB_0054c27e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c22d
    MOV dword ptr [ESP + 0x1848],EAX    ; 0054c230
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054c237
        ;   Label: LAB_0054c237
    PUSH ESI                            ; 0054c23a
    MOV EDI,dword ptr [ESP + 0x1874]    ; 0054c23b
    PUSH EDI                            ; 0054c242
    PUSH EBX                            ; 0054c243
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054c244
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054c249
    TEST EAX,EAX                        ; 0054c24c
    JGE 0x0054cc4c                      ; 0054c24e
        ;   XREF to: 0054cc4c (CONDITIONAL_JUMP)  ; LAB_0054cc4c
    MOV EAX,dword ptr [ESP + 0x1848]    ; 0054c254
        ;   Label: LAB_0054c254
    MOV EDX,dword ptr [ESP + 0x1870]    ; 0054c25b
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0054c262
    ADD EAX,0x10                        ; 0054c268
    INC EDX                             ; 0054c26b
    MOV dword ptr [ESP + 0x1848],EAX    ; 0054c26c
    MOV dword ptr [ESP + 0x1870],EDX    ; 0054c273
    CMP EDX,ECX                         ; 0054c27a
    JL 0x0054c237                       ; 0054c27c
        ;   XREF to: 0054c237 (CONDITIONAL_JUMP)  ; LAB_0054c237
    MOV ESP,EBP                         ; 0054c27e
        ;   Label: LAB_0054c27e
    POP EBP                             ; 0054c280
    POP EDI                             ; 0054c281
    POP ESI                             ; 0054c282
    POP EBX                             ; 0054c283
    RET                                 ; 0054c284
    XOR ECX,ECX                         ; 0054c285
        ;   Label: LAB_0054c285
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0054c287
    MOV dword ptr [ESP + 0x1860],ECX    ; 0054c28d
    TEST EDI,EDI                        ; 0054c294
    JLE 0x0054c340                      ; 0054c296
        ;   XREF to: 0054c340 (CONDITIONAL_JUMP)  ; LAB_0054c340
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c29c
    MOV dword ptr [ESP + 0x183c],EAX    ; 0054c29f
    MOV dword ptr [ESP + 0x1850],EAX    ; 0054c2a6
    MOV ESI,dword ptr [ESP + 0x1810]    ; 0054c2ad
        ;   Label: LAB_0054c2ad
    PUSH dword ptr [ESP]                ; 0054c2b4
    PUSH ESI                            ; 0054c2b7
    MOV EDI,dword ptr [ESP + 0x1814]    ; 0054c2b8
    PUSH EDI                            ; 0054c2bf
    MOV EAX,dword ptr [ESP + 0x186c]    ; 0054c2c0
    PUSH EAX                            ; 0054c2c7
    PUSH EBX                            ; 0054c2c8
    LEA ESI,[ESP + 0x1768]              ; 0054c2c9
    CALL core_skeleton.cpp_FUN_00548140 ; 0054c2d0
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    ADD ESP,0x14                        ; 0054c2d5
    LEA ESI,[ESP + 0x1754]              ; 0054c2d8
    MOV EDI,dword ptr [ESP + 0x183c]    ; 0054c2df
    MOV EAX,dword ptr [ESP + 0x1850]    ; 0054c2e6
    MOV ECX,dword ptr [ESP + 0x183c]    ; 0054c2ed
    LEA EDX,[EAX + 0x4]                 ; 0054c2f4
    LEA EDI,[EDI + 0x6b0]               ; 0054c2f7
    ADD ECX,0x10                        ; 0054c2fd
    MOV dword ptr [ESP + 0x1850],EDX    ; 0054c300
    MOVSD ES:EDI,ESI                    ; 0054c307
    MOVSD ES:EDI,ESI                    ; 0054c308
    MOVSD ES:EDI,ESI                    ; 0054c309
    MOVSD ES:EDI,ESI                    ; 0054c30a
    MOV dword ptr [ESP + 0x183c],ECX    ; 0054c30b
    FLD float ptr [EAX + 0x514]         ; 0054c312
    MOV ESI,dword ptr [ESP + 0x1860]    ; 0054c318
    FSTP float ptr [EAX + 0xcf0]        ; 0054c31f
    INC ESI                             ; 0054c325
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 0054c326
    MOV dword ptr [ESP + 0x1860],ESI    ; 0054c32c
    CMP ESI,EDI                         ; 0054c333
    JL 0x0054c2ad                       ; 0054c335
        ;   XREF to: 0054c2ad (CONDITIONAL_JUMP)  ; LAB_0054c2ad
    LEA EAX,[EAX]                       ; 0054c33b
    MOV ECX,ECX                         ; 0054c33e
    MOV EDX,dword ptr [ESP + 0x1810]    ; 0054c340
        ;   Label: LAB_0054c340
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054c347
    SUB EAX,EDX                         ; 0054c34e
    MOV EDX,dword ptr [EBX + 0x1ec94]   ; 0054c350
    FLD float ptr [EDX + EAX*0x4]       ; 0054c356
    FMUL float ptr [ESP]                ; 0054c359
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0054c35c
    FMUL float ptr [ESP]                ; 0054c360
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0054c363
    FMUL float ptr [ESP]                ; 0054c367
    FLD float ptr [ESP]                 ; 0054c36a
    LEA EDI,[ESP + 0x17dc]              ; 0054c36d
    LEA ESI,[ESP + 0x1800]              ; 0054c374
    FLD1                                ; 0054c37b
    MOV EBX,dword ptr [ESP + 0x180c]    ; 0054c37d
    FSUBRP                              ; 0054c384
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054c386
    FXCH ST3                            ; 0054c38d
    FSTP float ptr [ESP + 0x1800]       ; 0054c38f
    FXCH                                ; 0054c396
    FSTP float ptr [ESP + 0x1804]       ; 0054c398
    FSTP float ptr [ESP + 0x1808]       ; 0054c39f
    SUB EAX,EBX                         ; 0054c3a6
    MOVSD ES:EDI,ESI                    ; 0054c3a8
    MOVSD ES:EDI,ESI                    ; 0054c3a9
    MOVSD ES:EDI,ESI                    ; 0054c3aa
    FSTP float ptr [ESP + 0x1818]       ; 0054c3ab
    FLD float ptr [EDX + EAX*0x4]       ; 0054c3b2
    FMUL float ptr [ESP + 0x1818]       ; 0054c3b5
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0054c3bc
    FMUL float ptr [ESP + 0x1818]       ; 0054c3c0
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0054c3c7
    FMUL float ptr [ESP + 0x1818]       ; 0054c3cb
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054c3d2
    LEA EDI,[ESP + 0x17e8]              ; 0054c3d5
    LEA ESI,[ESP + 0x17c4]              ; 0054c3dc
    LEA EAX,[ESP + 0x17d0]              ; 0054c3e3
    FXCH ST2                            ; 0054c3ea
    FSTP float ptr [ESP + 0x17c4]       ; 0054c3ec
    FSTP float ptr [ESP + 0x17c8]       ; 0054c3f3
    FSTP float ptr [ESP + 0x17cc]       ; 0054c3fa
    MOVSD ES:EDI,ESI                    ; 0054c401
    MOVSD ES:EDI,ESI                    ; 0054c402
    MOVSD ES:EDI,ESI                    ; 0054c403
    ADD EBX,0x6a4                       ; 0054c404
    FLD float ptr [ESP + 0x17e8]        ; 0054c40a
    FLD float ptr [ESP + 0x17ec]        ; 0054c411
    FLD float ptr [ESP + 0x17f0]        ; 0054c418
    LEA EDI,[ESP + 0x17d0]              ; 0054c41f
    LEA ESI,[ESP + 0x17f4]              ; 0054c426
    FXCH ST2                            ; 0054c42d
    FADD float ptr [ESP + 0x17dc]       ; 0054c42f
    FXCH                                ; 0054c436
    FADD float ptr [ESP + 0x17e0]       ; 0054c438
    FXCH ST2                            ; 0054c43f
    FADD float ptr [ESP + 0x17e4]       ; 0054c441
    FXCH                                ; 0054c448
    FSTP float ptr [ESP + 0x17f4]       ; 0054c44a
    FXCH                                ; 0054c451
    FSTP float ptr [ESP + 0x17f8]       ; 0054c453
    FSTP float ptr [ESP + 0x17fc]       ; 0054c45a
    MOVSD ES:EDI,ESI                    ; 0054c461
    MOVSD ES:EDI,ESI                    ; 0054c462
    MOVSD ES:EDI,ESI                    ; 0054c463
    CMP EBX,EAX                         ; 0054c464
    JZ 0x0054c485                       ; 0054c466
        ;   XREF to: 0054c485 (CONDITIONAL_JUMP)  ; LAB_0054c485
    MOV EAX,dword ptr [ESP + 0x17d0]    ; 0054c468
    MOV dword ptr [EBX],EAX             ; 0054c46f
    MOV EAX,dword ptr [ESP + 0x17d4]    ; 0054c471
    MOV dword ptr [EBX + 0x4],EAX       ; 0054c478
    MOV EAX,dword ptr [ESP + 0x17d8]    ; 0054c47b
    MOV dword ptr [EBX + 0x8],EAX       ; 0054c482
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c485
        ;   Label: LAB_0054c485
    FLD float ptr [EAX + 0x508]         ; 0054c488
    FMUL float ptr [EAX + 0x6a4]        ; 0054c48e
    FLD float ptr [EAX + 0x50c]         ; 0054c494
    FMUL float ptr [EAX + 0x6a8]        ; 0054c49a
    FLD float ptr [EAX + 0x510]         ; 0054c4a0
    FMUL float ptr [EAX + 0x6ac]        ; 0054c4a6
    FXCH                                ; 0054c4ac
    FSTP float ptr [EAX + 0x6a8]        ; 0054c4ae
    FSTP float ptr [EAX + 0x6ac]        ; 0054c4b4
    FSTP float ptr [EAX + 0x6a4]        ; 0054c4ba
    MOV ESP,EBP                         ; 0054c4c0
    POP EBP                             ; 0054c4c2
    POP EDI                             ; 0054c4c3
    POP ESI                             ; 0054c4c4
    POP EBX                             ; 0054c4c5
    RET                                 ; 0054c4c6
    XOR EAX,EAX                         ; 0054c4c7
        ;   Label: LAB_0054c4c7
    MOV EDX,dword ptr [ESI + 0x1de78]   ; 0054c4c9
    MOV dword ptr [ESP + 0x1878],EAX    ; 0054c4cf
    TEST EDX,EDX                        ; 0054c4d6
    JLE 0x0054c596                      ; 0054c4d8
        ;   XREF to: 0054c596 (CONDITIONAL_JUMP)  ; LAB_0054c596
    MOV dword ptr [ESP + 0x1830],EAX    ; 0054c4de
    MOV dword ptr [ESP + 0x184c],EAX    ; 0054c4e5
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054c4ec
        ;   Label: LAB_0054c4ec
    PUSH EAX                            ; 0054c4ef
    MOV EDX,dword ptr [ESP + 0x187c]    ; 0054c4f0
    PUSH EDX                            ; 0054c4f7
    PUSH EBX                            ; 0054c4f8
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054c4f9
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054c4fe
    MOV EDX,dword ptr [ESP + 0x184c]    ; 0054c501
    MOV dword ptr [ESP + EDX*0x1 + 0x1454],EAX ; 0054c508
    TEST EAX,EAX                        ; 0054c50f
    JL 0x0054c557                       ; 0054c511
        ;   XREF to: 0054c557 (CONDITIONAL_JUMP)  ; LAB_0054c557
    MOV ESI,dword ptr [ESP + 0x1810]    ; 0054c513
    PUSH dword ptr [ESP]                ; 0054c51a
    PUSH ESI                            ; 0054c51d
    MOV EDI,dword ptr [ESP + 0x1814]    ; 0054c51e
    PUSH EDI                            ; 0054c525
    MOV EAX,dword ptr [ESP + 0x1884]    ; 0054c526
    PUSH EAX                            ; 0054c52d
    PUSH EBX                            ; 0054c52e
    LEA ESI,[ESP + 0x1718]              ; 0054c52f
    CALL core_skeleton.cpp_FUN_00548140 ; 0054c536
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    ADD ESP,0x14                        ; 0054c53b
    MOV EDI,dword ptr [ESP + 0x1830]    ; 0054c53e
    LEA ESI,[ESP + 0x1704]              ; 0054c545
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0054c54c
    MOVSD ES:EDI,ESI                    ; 0054c553
    MOVSD ES:EDI,ESI                    ; 0054c554
    MOVSD ES:EDI,ESI                    ; 0054c555
    MOVSD ES:EDI,ESI                    ; 0054c556
    MOV EDI,dword ptr [ESP + 0x184c]    ; 0054c557
        ;   Label: LAB_0054c557
    MOV EAX,dword ptr [ESP + 0x1830]    ; 0054c55e
    MOV EDX,dword ptr [ESP + 0x1878]    ; 0054c565
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0054c56c
    ADD EDI,0x4                         ; 0054c572
    ADD EAX,0x10                        ; 0054c575
    INC EDX                             ; 0054c578
    MOV dword ptr [ESP + 0x184c],EDI    ; 0054c579
    MOV dword ptr [ESP + 0x1830],EAX    ; 0054c580
    MOV dword ptr [ESP + 0x1878],EDX    ; 0054c587
    CMP EDX,ECX                         ; 0054c58e
    JL 0x0054c4ec                       ; 0054c590
        ;   XREF to: 0054c4ec (CONDITIONAL_JUMP)  ; LAB_0054c4ec
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054c596
        ;   Label: LAB_0054c596
    LEA EAX,[ESI*0x8 + 0x0]             ; 0054c599
    ADD EAX,ESI                         ; 0054c5a0
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1de9c] ; 0054c5a2
    TEST EDI,EDI                        ; 0054c5a9
    JL 0x0054c5e6                       ; 0054c5ab
        ;   XREF to: 0054c5e6 (CONDITIONAL_JUMP)  ; LAB_0054c5e6
    MOV ESI,dword ptr [ESP + 0x1810]    ; 0054c5ad
    PUSH dword ptr [ESP]                ; 0054c5b4
    PUSH ESI                            ; 0054c5b7
    MOV EAX,dword ptr [ESP + 0x1814]    ; 0054c5b8
    PUSH EAX                            ; 0054c5bf
    PUSH EDI                            ; 0054c5c0
    PUSH EBX                            ; 0054c5c1
    LEA ESI,[ESP + 0x1738]              ; 0054c5c2
    CALL core_skeleton.cpp_FUN_00548140 ; 0054c5c9
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    SHL EDI,0x4                         ; 0054c5ce
    ADD ESP,0x14                        ; 0054c5d1
    LEA ESI,[ESP + 0x1724]              ; 0054c5d4
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0054c5db
    MOVSD ES:EDI,ESI                    ; 0054c5e2
    MOVSD ES:EDI,ESI                    ; 0054c5e3
    MOVSD ES:EDI,ESI                    ; 0054c5e4
    MOVSD ES:EDI,ESI                    ; 0054c5e5
    XOR EDX,EDX                         ; 0054c5e6
        ;   Label: LAB_0054c5e6
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0054c5e8
    MOV dword ptr [ESP + 0x1868],EDX    ; 0054c5ee
    TEST ECX,ECX                        ; 0054c5f5
    JLE 0x0054c27e                      ; 0054c5f7
        ;   XREF to: 0054c27e (CONDITIONAL_JUMP)  ; LAB_0054c27e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c5fd
    ADD EAX,0x6b0                       ; 0054c600
    MOV dword ptr [ESP + 0x1840],EDX    ; 0054c605
    MOV dword ptr [ESP + 0x1820],EAX    ; 0054c60c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c613
    MOV dword ptr [ESP + 0x1838],EBX    ; 0054c616
    MOV dword ptr [ESP + 0x185c],EAX    ; 0054c61d
    MOV EAX,dword ptr [ESP + 0x1840]    ; 0054c624
        ;   Label: LAB_0054c624
    CMP dword ptr [ESP + EAX*0x1 + 0x1454],0x0 ; 0054c62b
    JL 0x0054c671                       ; 0054c633
        ;   XREF to: 0054c671 (CONDITIONAL_JUMP)  ; LAB_0054c671
    MOV EDX,dword ptr [ESP + 0x1868]    ; 0054c635
    MOV EAX,dword ptr [ESP + 0x1838]    ; 0054c63c
    SHL EDX,0x4                         ; 0054c643
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054c646
    MOV dword ptr [ESP + 0x182c],EDX    ; 0054c64c
    TEST EAX,EAX                        ; 0054c653
    JGE 0x0054c6c6                      ; 0054c655
        ;   XREF to: 0054c6c6 (CONDITIONAL_JUMP)  ; LAB_0054c6c6
    MOV EDI,dword ptr [ESP + 0x185c]    ; 0054c657
    MOV ESI,EDX                         ; 0054c65e
    LEA EDI,[EDI + 0x6b0]               ; 0054c660
    LEA ESI,[ESP + ESI*0x1 + 0x644]     ; 0054c666
    MOVSD ES:EDI,ESI                    ; 0054c66d
        ;   Label: LAB_0054c66d
    MOVSD ES:EDI,ESI                    ; 0054c66e
    MOVSD ES:EDI,ESI                    ; 0054c66f
    MOVSD ES:EDI,ESI                    ; 0054c670
    MOV EDX,dword ptr [ESP + 0x1840]    ; 0054c671
        ;   Label: LAB_0054c671
    MOV ECX,dword ptr [ESP + 0x185c]    ; 0054c678
    MOV ESI,dword ptr [ESP + 0x1838]    ; 0054c67f
    MOV EDI,dword ptr [ESP + 0x1868]    ; 0054c686
    ADD EDX,0x4                         ; 0054c68d
    ADD ECX,0x10                        ; 0054c690
    ADD ESI,0x24                        ; 0054c693
    INC EDI                             ; 0054c696
    MOV dword ptr [ESP + 0x1840],EDX    ; 0054c697
    MOV dword ptr [ESP + 0x185c],ECX    ; 0054c69e
    MOV dword ptr [ESP + 0x1838],ESI    ; 0054c6a5
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 0054c6ac
    MOV dword ptr [ESP + 0x1868],EDI    ; 0054c6b2
    CMP EDI,EDX                         ; 0054c6b9
    JGE 0x0054c27e                      ; 0054c6bb
        ;   XREF to: 0054c27e (CONDITIONAL_JUMP)  ; LAB_0054c27e
    JMP 0x0054c624                      ; 0054c6c1
        ;   XREF to: 0054c624 (UNCONDITIONAL_JUMP)  ; LAB_0054c624
    SHL EAX,0x4                         ; 0054c6c6
        ;   Label: LAB_0054c6c6
    MOV dword ptr [ESP + 0x1814],EAX    ; 0054c6c9
    LEA EAX,[ESP + 0x644]               ; 0054c6d0
    ADD EAX,dword ptr [ESP + 0x1814]    ; 0054c6d7
    PUSH EAX                            ; 0054c6de
    LEA ESI,[ESP + 0x1778]              ; 0054c6df
    LEA EDI,[ESP + 0x16d8]              ; 0054c6e6
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054c6ed
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054c6f2
    LEA EAX,[ESP + 0x16d4]              ; 0054c6f5
    MOV EDX,dword ptr [ESP + 0x182c]    ; 0054c6fc
    PUSH EAX                            ; 0054c703
    LEA EAX,[ESP + 0x648]               ; 0054c704
    LEA ESI,[ESP + 0x1778]              ; 0054c70b
    ADD EAX,EDX                         ; 0054c712
    MOVSD ES:EDI,ESI                    ; 0054c714
    MOVSD ES:EDI,ESI                    ; 0054c715
    MOVSD ES:EDI,ESI                    ; 0054c716
    MOVSD ES:EDI,ESI                    ; 0054c717
    PUSH EAX                            ; 0054c718
    LEA ESI,[ESP + 0x168c]              ; 0054c719
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054c720
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054c725
    MOV EAX,dword ptr [ESP + 0x1820]    ; 0054c728
    MOV ECX,dword ptr [ESP + 0x1814]    ; 0054c72f
    LEA EDI,[ESP + 0x1744]              ; 0054c736
    ADD EAX,ECX                         ; 0054c73d
    LEA ESI,[ESP + 0x1684]              ; 0054c73f
    PUSH EAX                            ; 0054c746
    LEA EAX,[ESP + 0x1748]              ; 0054c747
    MOVSD ES:EDI,ESI                    ; 0054c74e
    MOVSD ES:EDI,ESI                    ; 0054c74f
    MOVSD ES:EDI,ESI                    ; 0054c750
    MOVSD ES:EDI,ESI                    ; 0054c751
    PUSH EAX                            ; 0054c752
    LEA ESI,[ESP + 0x16bc]              ; 0054c753
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054c75a
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054c75f
    MOV EDI,dword ptr [ESP + 0x185c]    ; 0054c762
    LEA ESI,[ESP + 0x16b4]              ; 0054c769
    LEA EDI,[EDI + 0x6b0]               ; 0054c770
    JMP 0x0054c66d                      ; 0054c776
        ;   XREF to: 0054c66d (UNCONDITIONAL_JUMP)  ; LAB_0054c66d
    PUSH EAX                            ; 0054c77b
        ;   Label: LAB_0054c77b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054c77c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 0054c781
    LEA EAX,[EDI*0x8 + 0x0]             ; 0054c783
    ADD ESP,0x4                         ; 0054c78a
    ADD EAX,EDI                         ; 0054c78d
    XOR ECX,ECX                         ; 0054c78f
    SHL EAX,0x5                         ; 0054c791
    MOV dword ptr [ESP + 0x187c],ECX    ; 0054c794
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x1c88] ; 0054c79b
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0054c7a2
    MOV dword ptr [ESP + 0x1824],EAX    ; 0054c7a8
    TEST EDI,EDI                        ; 0054c7af
    JLE 0x0054c892                      ; 0054c7b1
        ;   XREF to: 0054c892 (CONDITIONAL_JUMP)  ; LAB_0054c892
    MOV dword ptr [ESP + 0x1854],ECX    ; 0054c7b7
    MOV dword ptr [ESP + 0x1858],ECX    ; 0054c7be
    MOV ECX,dword ptr [EBP + 0x20]      ; 0054c7c5
        ;   Label: LAB_0054c7c5
    PUSH ECX                            ; 0054c7c8
    MOV ESI,dword ptr [ESP + 0x1880]    ; 0054c7c9
    PUSH ESI                            ; 0054c7d0
    PUSH EBX                            ; 0054c7d1
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054c7d2
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054c7d7
    MOV EDX,dword ptr [ESP + 0x1858]    ; 0054c7da
    MOV dword ptr [ESP + EDX*0x1 + 0x12c4],EAX ; 0054c7e1
    TEST EAX,EAX                        ; 0054c7e8
    JL 0x0054c853                       ; 0054c7ea
        ;   XREF to: 0054c853 (CONDITIONAL_JUMP)  ; LAB_0054c853
    MOV EAX,dword ptr [ESP + 0x1824]    ; 0054c7ec
    PUSH EAX                            ; 0054c7f3
    PUSH ESI                            ; 0054c7f4
    PUSH EBX                            ; 0054c7f5
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120 ; 0054c7f6
        ;   XREF to: 00548120 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 0054c7fb
    MOV EDI,dword ptr [ESP + 0x1854]    ; 0054c7fe
    MOV ESI,EAX                         ; 0054c805
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 0054c807
    MOVSD ES:EDI,ESI                    ; 0054c80e
    MOVSD ES:EDI,ESI                    ; 0054c80f
    MOVSD ES:EDI,ESI                    ; 0054c810
    MOVSD ES:EDI,ESI                    ; 0054c811
    MOV ECX,dword ptr [ESP + 0x1810]    ; 0054c812
    PUSH dword ptr [ESP]                ; 0054c819
    PUSH ECX                            ; 0054c81c
    MOV ESI,dword ptr [ESP + 0x1814]    ; 0054c81d
    PUSH ESI                            ; 0054c824
    MOV EDI,dword ptr [ESP + 0x1888]    ; 0054c825
    PUSH EDI                            ; 0054c82c
    PUSH EBX                            ; 0054c82d
    LEA ESI,[ESP + 0x17c8]              ; 0054c82e
    CALL core_skeleton.cpp_FUN_00548140 ; 0054c835
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    ADD ESP,0x14                        ; 0054c83a
    MOV EDI,dword ptr [ESP + 0x1854]    ; 0054c83d
    LEA ESI,[ESP + 0x17b4]              ; 0054c844
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0054c84b
    MOVSD ES:EDI,ESI                    ; 0054c84f
    MOVSD ES:EDI,ESI                    ; 0054c850
    MOVSD ES:EDI,ESI                    ; 0054c851
    MOVSD ES:EDI,ESI                    ; 0054c852
    MOV ESI,dword ptr [ESP + 0x1858]    ; 0054c853
        ;   Label: LAB_0054c853
    MOV EDI,dword ptr [ESP + 0x1854]    ; 0054c85a
    MOV EAX,dword ptr [ESP + 0x187c]    ; 0054c861
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 0054c868
    ADD ESI,0x4                         ; 0054c86e
    ADD EDI,0x10                        ; 0054c871
    INC EAX                             ; 0054c874
    MOV dword ptr [ESP + 0x1858],ESI    ; 0054c875
    MOV dword ptr [ESP + 0x1854],EDI    ; 0054c87c
    MOV dword ptr [ESP + 0x187c],EAX    ; 0054c883
    CMP EAX,EDX                         ; 0054c88a
    JL 0x0054c7c5                       ; 0054c88c
        ;   XREF to: 0054c7c5 (CONDITIONAL_JUMP)  ; LAB_0054c7c5
    MOV EDX,dword ptr [EBP + 0x20]      ; 0054c892
        ;   Label: LAB_0054c892
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054c895
    ADD EAX,EDX                         ; 0054c89c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x1de9c] ; 0054c89e
    MOV dword ptr [ESP + 0x181c],EAX    ; 0054c8a5
    TEST EAX,EAX                        ; 0054c8ac
    JL 0x0054c920                       ; 0054c8ae
        ;   XREF to: 0054c920 (CONDITIONAL_JUMP)  ; LAB_0054c920
    MOV ESI,dword ptr [ESP + 0x1824]    ; 0054c8b0
    PUSH ESI                            ; 0054c8b7
    PUSH EAX                            ; 0054c8b8
    PUSH EBX                            ; 0054c8b9
    MOV EDI,EAX                         ; 0054c8ba
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120 ; 0054c8bc
        ;   XREF to: 00548120 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV EDX,EDI                         ; 0054c8c1
    SHL EDX,0x4                         ; 0054c8c3
    MOV EDI,EDX                         ; 0054c8c6
    ADD ESP,0xc                         ; 0054c8c8
    MOV ESI,EAX                         ; 0054c8cb
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 0054c8cd
    MOVSD ES:EDI,ESI                    ; 0054c8d4
    MOVSD ES:EDI,ESI                    ; 0054c8d5
    MOVSD ES:EDI,ESI                    ; 0054c8d6
    MOVSD ES:EDI,ESI                    ; 0054c8d7
    MOV EAX,dword ptr [ESP + 0x1810]    ; 0054c8d8
    PUSH dword ptr [ESP]                ; 0054c8df
    PUSH EAX                            ; 0054c8e2
    MOV dword ptr [ESP + 0x181c],EDX    ; 0054c8e3
    MOV EDX,dword ptr [ESP + 0x1814]    ; 0054c8ea
    PUSH EDX                            ; 0054c8f1
    MOV ECX,dword ptr [ESP + 0x1828]    ; 0054c8f2
    PUSH ECX                            ; 0054c8f9
    PUSH EBX                            ; 0054c8fa
    LEA ESI,[ESP + 0x1608]              ; 0054c8fb
    CALL core_skeleton.cpp_FUN_00548140 ; 0054c902
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    ADD ESP,0x14                        ; 0054c907
    MOV EDI,dword ptr [ESP + 0x1814]    ; 0054c90a
    LEA ESI,[ESP + 0x15f4]              ; 0054c911
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0054c918
    MOVSD ES:EDI,ESI                    ; 0054c91c
    MOVSD ES:EDI,ESI                    ; 0054c91d
    MOVSD ES:EDI,ESI                    ; 0054c91e
    MOVSD ES:EDI,ESI                    ; 0054c91f
    XOR ESI,ESI                         ; 0054c920
        ;   Label: LAB_0054c920
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 0054c922
    MOV dword ptr [ESP + 0x1864],ESI    ; 0054c928
    TEST EDI,EDI                        ; 0054c92f
    JLE 0x0054c27e                      ; 0054c931
        ;   XREF to: 0054c27e (CONDITIONAL_JUMP)  ; LAB_0054c27e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c937
    ADD EAX,0x6b0                       ; 0054c93a
    MOV dword ptr [ESP + 0x1844],ESI    ; 0054c93f
    MOV dword ptr [ESP + 0x1828],EAX    ; 0054c946
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c94d
    MOV dword ptr [ESP + 0x1834],EBX    ; 0054c950
    MOV dword ptr [ESP + 0x1874],EAX    ; 0054c957
    MOV EAX,dword ptr [ESP + 0x1844]    ; 0054c95e
        ;   Label: LAB_0054c95e
    CMP dword ptr [ESP + EAX*0x1 + 0x12c4],0x0 ; 0054c965
    JL 0x0054cab1                       ; 0054c96d
        ;   XREF to: 0054cab1 (CONDITIONAL_JUMP)  ; LAB_0054cab1
    MOV EAX,dword ptr [ESP + 0x1834]    ; 0054c973
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054c97a
    MOV dword ptr [ESP + 0x186c],EAX    ; 0054c980
    MOV EAX,dword ptr [ESP + 0x1864]    ; 0054c987
    SHL EAX,0x4                         ; 0054c98e
    LEA EDI,[ESP + 0x15e4]              ; 0054c991
    LEA ESI,[ESP + EAX*0x1 + 0xc84]     ; 0054c998
    MOVSD ES:EDI,ESI                    ; 0054c99f
    MOVSD ES:EDI,ESI                    ; 0054c9a0
    MOVSD ES:EDI,ESI                    ; 0054c9a1
    MOVSD ES:EDI,ESI                    ; 0054c9a2
    LEA EDI,[ESP + 0x1614]              ; 0054c9a3
    LEA ESI,[ESP + EAX*0x1 + 0x4]       ; 0054c9aa
    MOVSD ES:EDI,ESI                    ; 0054c9ae
    MOVSD ES:EDI,ESI                    ; 0054c9af
    MOVSD ES:EDI,ESI                    ; 0054c9b0
    MOVSD ES:EDI,ESI                    ; 0054c9b1
    MOV ESI,dword ptr [ESP + 0x1874]    ; 0054c9b2
    LEA EDI,[ESP + 0x1604]              ; 0054c9b9
    LEA ESI,[ESI + 0x6b0]               ; 0054c9c0
    MOV ECX,dword ptr [ESP + 0x186c]    ; 0054c9c6
    MOVSD ES:EDI,ESI                    ; 0054c9cd
    MOVSD ES:EDI,ESI                    ; 0054c9ce
    MOVSD ES:EDI,ESI                    ; 0054c9cf
    MOVSD ES:EDI,ESI                    ; 0054c9d0
    TEST ECX,ECX                        ; 0054c9d1
    JGE 0x0054cb06                      ; 0054c9d3
        ;   XREF to: 0054cb06 (CONDITIONAL_JUMP)  ; LAB_0054cb06
    LEA EAX,[ESP + 0x15e4]              ; 0054c9d9
        ;   Label: LAB_0054c9d9
    PUSH EAX                            ; 0054c9e0
    LEA ESI,[ESP + 0x1798]              ; 0054c9e1
    LEA EDI,[ESP + 0x1768]              ; 0054c9e8
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054c9ef
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054c9f4
    LEA EAX,[ESP + 0x1764]              ; 0054c9f7
    LEA ESI,[ESP + 0x1794]              ; 0054c9fe
    PUSH EAX                            ; 0054ca05
    LEA EAX,[ESP + 0x1618]              ; 0054ca06
    MOVSD ES:EDI,ESI                    ; 0054ca0d
    MOVSD ES:EDI,ESI                    ; 0054ca0e
    MOVSD ES:EDI,ESI                    ; 0054ca0f
    MOVSD ES:EDI,ESI                    ; 0054ca10
    PUSH EAX                            ; 0054ca11
    LEA ESI,[ESP + 0x178c]              ; 0054ca12
    LEA EDI,[ESP + 0x173c]              ; 0054ca19
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054ca20
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054ca25
    LEA EAX,[ESP + 0x1734]              ; 0054ca28
    LEA ESI,[ESP + 0x1784]              ; 0054ca2f
    PUSH EAX                            ; 0054ca36
    LEA EAX,[ESP + 0x1608]              ; 0054ca37
    MOVSD ES:EDI,ESI                    ; 0054ca3e
    MOVSD ES:EDI,ESI                    ; 0054ca3f
    MOVSD ES:EDI,ESI                    ; 0054ca40
    MOVSD ES:EDI,ESI                    ; 0054ca41
    PUSH EAX                            ; 0054ca42
    LEA ESI,[ESP + 0x17ac]              ; 0054ca43
    LEA EDI,[ESP + 0x16fc]              ; 0054ca4a
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054ca51
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054ca56
    LEA ESI,[ESP + 0x17a4]              ; 0054ca59
    MOV ECX,dword ptr [ESP + 0x186c]    ; 0054ca60
    MOVSD ES:EDI,ESI                    ; 0054ca67
    MOVSD ES:EDI,ESI                    ; 0054ca68
    MOVSD ES:EDI,ESI                    ; 0054ca69
    MOVSD ES:EDI,ESI                    ; 0054ca6a
    TEST ECX,ECX                        ; 0054ca6b
    JL 0x0054cc39                       ; 0054ca6d
        ;   XREF to: 0054cc39 (CONDITIONAL_JUMP)  ; LAB_0054cc39
    MOV EAX,ECX                         ; 0054ca73
    MOV ESI,dword ptr [ESP + 0x1828]    ; 0054ca75
    SHL EAX,0x4                         ; 0054ca7c
    ADD EAX,ESI                         ; 0054ca7f
    PUSH EAX                            ; 0054ca81
    LEA EAX,[ESP + 0x16f8]              ; 0054ca82
    PUSH EAX                            ; 0054ca89
    LEA ESI,[ESP + 0x171c]              ; 0054ca8a
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054ca91
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054ca96
    MOV EDI,dword ptr [ESP + 0x1874]    ; 0054ca99
    LEA ESI,[ESP + 0x1714]              ; 0054caa0
    LEA EDI,[EDI + 0x6b0]               ; 0054caa7
        ;   Label: LAB_0054caa7
    MOVSD ES:EDI,ESI                    ; 0054caad
    MOVSD ES:EDI,ESI                    ; 0054caae
    MOVSD ES:EDI,ESI                    ; 0054caaf
    MOVSD ES:EDI,ESI                    ; 0054cab0
    MOV EAX,dword ptr [ESP + 0x1844]    ; 0054cab1
        ;   Label: LAB_0054cab1
    MOV EDX,dword ptr [ESP + 0x1834]    ; 0054cab8
    MOV ECX,dword ptr [ESP + 0x1874]    ; 0054cabf
    MOV ESI,dword ptr [ESP + 0x1864]    ; 0054cac6
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 0054cacd
    ADD EAX,0x4                         ; 0054cad3
    ADD EDX,0x24                        ; 0054cad6
    ADD ECX,0x10                        ; 0054cad9
    INC ESI                             ; 0054cadc
    MOV dword ptr [ESP + 0x1844],EAX    ; 0054cadd
    MOV dword ptr [ESP + 0x1834],EDX    ; 0054cae4
    MOV dword ptr [ESP + 0x1874],ECX    ; 0054caeb
    MOV dword ptr [ESP + 0x1864],ESI    ; 0054caf2
    CMP ESI,EDI                         ; 0054caf9
    JGE 0x0054c27e                      ; 0054cafb
        ;   XREF to: 0054c27e (CONDITIONAL_JUMP)  ; LAB_0054c27e
    JMP 0x0054c95e                      ; 0054cb01
        ;   XREF to: 0054c95e (UNCONDITIONAL_JUMP)  ; LAB_0054c95e
    MOV EAX,ECX                         ; 0054cb06
        ;   Label: LAB_0054cb06
    SHL EAX,0x4                         ; 0054cb08
    MOV dword ptr [ESP + 0x1814],EAX    ; 0054cb0b
    LEA EAX,[ESP + 0xc84]               ; 0054cb12
    ADD EAX,dword ptr [ESP + 0x1814]    ; 0054cb19
    PUSH EAX                            ; 0054cb20
    LEA ESI,[ESP + 0x1648]              ; 0054cb21
    LEA EDI,[ESP + 0x1658]              ; 0054cb28
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054cb2f
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054cb34
    LEA EAX,[ESP + 0x1654]              ; 0054cb37
    LEA ESI,[ESP + 0x1644]              ; 0054cb3e
    PUSH EAX                            ; 0054cb45
    LEA EAX,[ESP + 0x15e8]              ; 0054cb46
    MOVSD ES:EDI,ESI                    ; 0054cb4d
    MOVSD ES:EDI,ESI                    ; 0054cb4e
    MOVSD ES:EDI,ESI                    ; 0054cb4f
    MOVSD ES:EDI,ESI                    ; 0054cb50
    PUSH EAX                            ; 0054cb51
    LEA ESI,[ESP + 0x16ec]              ; 0054cb52
    LEA EDI,[ESP + 0x15ec]              ; 0054cb59
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054cb60
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x16ec]              ; 0054cb65
    ADD ESP,0x8                         ; 0054cb6c
    MOVSD ES:EDI,ESI                    ; 0054cb6f
    MOVSD ES:EDI,ESI                    ; 0054cb70
    MOVSD ES:EDI,ESI                    ; 0054cb71
    MOVSD ES:EDI,ESI                    ; 0054cb72
    LEA EAX,[ESP + 0x4]                 ; 0054cb73
    ADD EAX,dword ptr [ESP + 0x1814]    ; 0054cb77
    PUSH EAX                            ; 0054cb7e
    LEA ESI,[ESP + 0x1678]              ; 0054cb7f
    LEA EDI,[ESP + 0x1668]              ; 0054cb86
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054cb8d
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054cb92
    LEA EAX,[ESP + 0x1664]              ; 0054cb95
    LEA ESI,[ESP + 0x1674]              ; 0054cb9c
    PUSH EAX                            ; 0054cba3
    LEA EAX,[ESP + 0x1618]              ; 0054cba4
    MOVSD ES:EDI,ESI                    ; 0054cbab
    MOVSD ES:EDI,ESI                    ; 0054cbac
    MOVSD ES:EDI,ESI                    ; 0054cbad
    MOVSD ES:EDI,ESI                    ; 0054cbae
    PUSH EAX                            ; 0054cbaf
    LEA ESI,[ESP + 0x169c]              ; 0054cbb0
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054cbb7
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054cbbc
    LEA EDI,[ESP + 0x1614]              ; 0054cbbf
    MOV EAX,dword ptr [ESP + 0x1828]    ; 0054cbc6
    MOV EDX,dword ptr [ESP + 0x1814]    ; 0054cbcd
    LEA ESI,[ESP + 0x1694]              ; 0054cbd4
    ADD EAX,EDX                         ; 0054cbdb
    MOVSD ES:EDI,ESI                    ; 0054cbdd
    MOVSD ES:EDI,ESI                    ; 0054cbde
    MOVSD ES:EDI,ESI                    ; 0054cbdf
    MOVSD ES:EDI,ESI                    ; 0054cbe0
    PUSH EAX                            ; 0054cbe1
    LEA ESI,[ESP + 0x16a8]              ; 0054cbe2
    LEA EDI,[ESP + 0x1628]              ; 0054cbe9
    CALL core_xform.cpp_negateFirstComponent_FUN_00585930 ; 0054cbf0
        ;   XREF to: 00585930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00585930()
    ADD ESP,0x4                         ; 0054cbf5
    LEA EAX,[ESP + 0x1624]              ; 0054cbf8
    LEA ESI,[ESP + 0x16a4]              ; 0054cbff
    PUSH EAX                            ; 0054cc06
    LEA EAX,[ESP + 0x1608]              ; 0054cc07
    MOVSD ES:EDI,ESI                    ; 0054cc0e
    MOVSD ES:EDI,ESI                    ; 0054cc0f
    MOVSD ES:EDI,ESI                    ; 0054cc10
    MOVSD ES:EDI,ESI                    ; 0054cc11
    PUSH EAX                            ; 0054cc12
    LEA ESI,[ESP + 0x16cc]              ; 0054cc13
    LEA EDI,[ESP + 0x160c]              ; 0054cc1a
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054cc21
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x16cc]              ; 0054cc26
    ADD ESP,0x8                         ; 0054cc2d
    MOVSD ES:EDI,ESI                    ; 0054cc30
    MOVSD ES:EDI,ESI                    ; 0054cc31
    MOVSD ES:EDI,ESI                    ; 0054cc32
    MOVSD ES:EDI,ESI                    ; 0054cc33
    JMP 0x0054c9d9                      ; 0054cc34
        ;   XREF to: 0054c9d9 (UNCONDITIONAL_JUMP)  ; LAB_0054c9d9
    MOV EDI,dword ptr [ESP + 0x1874]    ; 0054cc39
        ;   Label: LAB_0054cc39
    LEA ESI,[ESP + 0x17a4]              ; 0054cc40
    JMP 0x0054caa7                      ; 0054cc47
        ;   XREF to: 0054caa7 (UNCONDITIONAL_JUMP)  ; LAB_0054caa7
    MOV EAX,dword ptr [ESP + 0x1810]    ; 0054cc4c
        ;   Label: LAB_0054cc4c
    PUSH dword ptr [ESP]                ; 0054cc53
    PUSH EAX                            ; 0054cc56
    MOV EDX,dword ptr [ESP + 0x1814]    ; 0054cc57
    PUSH EDX                            ; 0054cc5e
    PUSH EDI                            ; 0054cc5f
    PUSH EBX                            ; 0054cc60
    LEA ESI,[ESP + 0x1648]              ; 0054cc61
    CALL core_skeleton.cpp_FUN_00548140 ; 0054cc68
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00548140()
    ADD ESP,0x14                        ; 0054cc6d
    MOV EDI,dword ptr [ESP + 0x1848]    ; 0054cc70
    LEA ESI,[ESP + 0x1634]              ; 0054cc77
    LEA EDI,[EDI + 0x6b0]               ; 0054cc7e
    MOVSD ES:EDI,ESI                    ; 0054cc84
    MOVSD ES:EDI,ESI                    ; 0054cc85
    MOVSD ES:EDI,ESI                    ; 0054cc86
    MOVSD ES:EDI,ESI                    ; 0054cc87
    JMP 0x0054c254                      ; 0054cc88
        ;   XREF to: 0054c254 (UNCONDITIONAL_JUMP)  ; LAB_0054c254

