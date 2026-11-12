; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004b6420(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,float param_12,float param_13,float param_14,float param_15,float param_16,float param_17,float param_18,float param_19,float param_20,float param_21,float param_22,float param_23,float param_24,int param_25)
;
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
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
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_emitter.cpp_CEmitter_renderOpaque_FUN_0049fdf0 at 0049fed0
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0 at 00505e37
;   core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90 at 005ae115
;
; Referenced Globals:
;   undefined4 DAT_005df628
;   undefined4 DAT_005df62c
;   undefined4 DAT_005df634
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_normal.x
;   undefined4 g_CDemonSetInstance.collision_normal.y
;   undefined4 g_CDemonSetInstance.collision_normal.z
;   undefined4 g_CDemonSetInstance.collision_impact_position.x
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408bb0
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310
;   core_setcolid.cpp_FUN_00557300
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6420
        ;   Label: core_fire.cpp_FUN_004b6420
    PUSH ESI                            ; 004b6421
    PUSH EDI                            ; 004b6422
    PUSH EBP                            ; 004b6423
    MOV EBP,ESP                         ; 004b6424
    SUB ESP,0x164                       ; 004b6426
    AND ESP,0xfffffff8                  ; 004b642c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004b642f
    MOV EDX,dword ptr [EBP + 0x74]      ; 004b6432
    CMP EDX,0x2                         ; 004b6435
    JG 0x004b6ae6                       ; 004b6438
        ;   XREF to: 004b6ae6 (CONDITIONAL_JUMP)  ; LAB_004b6ae6
    LEA EAX,[EDX + 0x1]                 ; 004b643e
    MOV dword ptr [ESP + 0x144],EAX     ; 004b6441
    MOV ECX,dword ptr [EBP + 0x34]      ; 004b6448
        ;   Label: LAB_004b6448
    PUSH ECX                            ; 004b644b
    MOV ESI,dword ptr [EBP + 0x30]      ; 004b644c
    PUSH ESI                            ; 004b644f
    MOV EDI,dword ptr [EBP + 0x2c]      ; 004b6450
    PUSH EDI                            ; 004b6453
    MOV EAX,dword ptr [EBP + 0x28]      ; 004b6454
    PUSH EAX                            ; 004b6457
    MOV EDX,dword ptr [0x00622c18]      ; 004b6458 | g_CDemonSetPtr
    PUSH EDX                            ; 004b645e | g_CDemonSetInstance
    LEA EDI,[ESP + 0x8c]                ; 004b645f
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310 ; 004b6466
        ;   XREF to: 00559310 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 004b646b
    LEA EAX,[ESP + 0x114]               ; 004b646e
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b6475
    MOV ECX,dword ptr [0x00622c18]      ; 004b6478 | g_CDemonSetPtr
    PUSH EAX                            ; 004b647e
    MOVSD ES:EDI,ESI                    ; 004b647f
    MOVSD ES:EDI,ESI                    ; 004b6480
    MOVSD ES:EDI,ESI                    ; 004b6481
    LEA EAX,[ESP + 0x7c]                ; 004b6482
    FLD float ptr [ESP + 0x7c]          ; 004b6486
    FLD float ptr [ESP + 0x80]          ; 004b648a
    FLD float ptr [ESP + 0x84]          ; 004b6491
    PUSH EAX                            ; 004b6498
    LEA EDI,[ESP + 0x11c]               ; 004b6499
    LEA ESI,[ESP + 0x68]                ; 004b64a0
    PUSH ECX                            ; 004b64a4 | g_CDemonSetInstance
    FXCH ST2                            ; 004b64a5
    FADD float ptr [EBX]                ; 004b64a7
    FXCH                                ; 004b64a9
    FADD float ptr [EBX + 0x4]          ; 004b64ab
    FXCH ST2                            ; 004b64ae
    FADD float ptr [EBX + 0x8]          ; 004b64b0
    FXCH                                ; 004b64b3
    FSTP float ptr [ESP + 0x6c]         ; 004b64b5
    FXCH                                ; 004b64b9
    FSTP float ptr [ESP + 0x70]         ; 004b64bb
    FSTP float ptr [ESP + 0x74]         ; 004b64bf
    MOVSD ES:EDI,ESI                    ; 004b64c3
    MOVSD ES:EDI,ESI                    ; 004b64c4
    MOVSD ES:EDI,ESI                    ; 004b64c5
    CALL core_setcolid.cpp_FUN_00557300 ; 004b64c6
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 004b64cb
    FLD float ptr [ESP + 0x16c]         ; 004b64d2
    ADD ESP,0xc                         ; 004b64d9
    FLDZ                                ; 004b64dc
    FXCH                                ; 004b64de
    FST float ptr [ESP + 0x14]          ; 004b64e0
    FSTP double ptr [ESP + 0x8]         ; 004b64e4
    FCOMP double ptr [ESP + 0x8]        ; 004b64e8
    FNSTSW AX                           ; 004b64ec
    SAHF                                ; 004b64ee
    JA 0x004b6aed                       ; 004b64ef
        ;   XREF to: 004b6aed (CONDITIONAL_JUMP)  ; LAB_004b6aed
    FLD1                                ; 004b64f5
    FCOMP double ptr [ESP + 0x8]        ; 004b64f7
    FNSTSW AX                           ; 004b64fb
    SAHF                                ; 004b64fd
    JBE 0x004b6aed                      ; 004b64fe
        ;   XREF to: 004b6aed (CONDITIONAL_JUMP)  ; LAB_004b6aed
    FLD float ptr [ESP + 0x14]          ; 004b6504
    FLD float ptr [EBX]                 ; 004b6508
    FMUL ST1                            ; 004b650a
    FLD float ptr [EBX + 0x4]           ; 004b650c
    FMUL ST2                            ; 004b650f
    FLD float ptr [EBX + 0x8]           ; 004b6511
    FMULP ST3                           ; 004b6514
    LEA EDI,[ESP + 0xb4]                ; 004b6516
    LEA ESI,[ESP + 0x30]                ; 004b651d
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b6521
    FXCH                                ; 004b6524
    FSTP float ptr [ESP + 0x30]         ; 004b6526
    FSTP float ptr [ESP + 0x34]         ; 004b652a
    FSTP float ptr [ESP + 0x38]         ; 004b652e
    MOVSD ES:EDI,ESI                    ; 004b6532
    MOVSD ES:EDI,ESI                    ; 004b6533
    MOVSD ES:EDI,ESI                    ; 004b6534
    LEA EDX,[ESP + 0xcc]                ; 004b6535
    FLD float ptr [EAX + 0x4]           ; 004b653c
    FLD float ptr [EAX + 0x8]           ; 004b653f
    FLD float ptr [EAX]                 ; 004b6542
    LEA EDI,[ESP + 0xcc]                ; 004b6544
    LEA ESI,[ESP + 0xc0]                ; 004b654b
    LEA EAX,[ESP + 0x114]               ; 004b6552
    FADD float ptr [ESP + 0xb4]         ; 004b6559
    FXCH ST2                            ; 004b6560
    FADD float ptr [ESP + 0xb8]         ; 004b6562
    FXCH                                ; 004b6569
    FADD float ptr [ESP + 0xbc]         ; 004b656b
    FXCH ST2                            ; 004b6572
    FSTP float ptr [ESP + 0xc0]         ; 004b6574
    FSTP float ptr [ESP + 0xc4]         ; 004b657b
    FSTP float ptr [ESP + 0xc8]         ; 004b6582
    MOVSD ES:EDI,ESI                    ; 004b6589
    MOVSD ES:EDI,ESI                    ; 004b658a
    MOVSD ES:EDI,ESI                    ; 004b658b
    CMP EAX,EDX                         ; 004b658c
    JZ 0x004b65ba                       ; 004b658e
        ;   XREF to: 004b65ba (CONDITIONAL_JUMP)  ; LAB_004b65ba
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004b6590
    MOV dword ptr [ESP + 0x114],EAX     ; 004b6597
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004b659e
    MOV dword ptr [ESP + 0x118],EAX     ; 004b65a5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004b65ac
    MOV dword ptr [ESP + 0x11c],EAX     ; 004b65b3
    MOV EDX,dword ptr [0x00622c18]      ; 004b65ba | g_CDemonSetPtr
        ;   Label: LAB_004b65ba
    LEA EAX,[ESP + 0x120]               ; 004b65c0
    ADD EDX,0x14d128                    ; 004b65c7
    CMP EAX,EDX                         ; 004b65cd
    JZ 0x004b65ee                       ; 004b65cf
        ;   XREF to: 004b65ee (CONDITIONAL_JUMP)  ; LAB_004b65ee
    MOV EAX,dword ptr [EDX]             ; 004b65d1 | g_CDemonSetInstance.collision_normal.x
    MOV dword ptr [ESP + 0x120],EAX     ; 004b65d3
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b65da | g_CDemonSetInstance.collision_normal.y
    MOV dword ptr [ESP + 0x124],EAX     ; 004b65dd
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b65e4 | g_CDemonSetInstance.collision_normal.z
    MOV dword ptr [ESP + 0x128],EAX     ; 004b65e7
    MOV EAX,[0x00622c18]                ; 004b65ee | g_CDemonSetPtr
        ;   Label: LAB_004b65ee
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 004b65f3 | g_CDemonSetInstance.collision_actor
    XOR EDX,EDX                         ; 004b65f9
    MOV dword ptr [ESP + 0x158],EAX     ; 004b65fb
    MOV dword ptr [EBP + 0x68],EDX      ; 004b6602
    MOV dword ptr [EBP + 0x6c],EDX      ; 004b6605
    MOV dword ptr [EBP + 0x70],EDX      ; 004b6608
    TEST EAX,EAX                        ; 004b660b
    JZ 0x004b683a                       ; 004b660d
        ;   XREF to: 004b683a (CONDITIONAL_JUMP)  ; LAB_004b683a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b6613
    PUSH EAX                            ; 004b6616
    MOV EDX,dword ptr [ESP + 0x15c]     ; 004b6617
    PUSH EDX                            ; 004b661e
    LEA ESI,[ESP + 0x104]               ; 004b661f
    LEA EDI,[ESP + 0x98]                ; 004b6626
    CALL core_actor.cpp_FUN_00408bb0    ; 004b662d
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x104]               ; 004b6632
    LEA EAX,[ESP + 0x98]                ; 004b6639
    ADD ESP,0x8                         ; 004b6640
    LEA EDX,[EBP + 0x40]                ; 004b6643
    MOVSD ES:EDI,ESI                    ; 004b6646
    MOVSD ES:EDI,ESI                    ; 004b6647
    MOVSD ES:EDI,ESI                    ; 004b6648
    CMP EDX,EAX                         ; 004b6649
    JZ 0x004b666b                       ; 004b664b
        ;   XREF to: 004b666b (CONDITIONAL_JUMP)  ; LAB_004b666b
    MOV EAX,dword ptr [ESP + 0x90]      ; 004b664d
    MOV dword ptr [EBP + 0x40],EAX      ; 004b6654
    MOV EAX,dword ptr [ESP + 0x94]      ; 004b6657
    MOV dword ptr [EBP + 0x44],EAX      ; 004b665e
    MOV EAX,dword ptr [ESP + 0x98]      ; 004b6661
    MOV dword ptr [EBP + 0x48],EAX      ; 004b6668
    MOV EAX,[0x00622c18]                ; 004b666b | g_CDemonSetPtr
        ;   Label: LAB_004b666b
    ADD EAX,0x14d138                    ; 004b6670
    PUSH EAX                            ; 004b6675 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004b6676
    PUSH ECX                            ; 004b667d
    LEA ESI,[ESP + 0x5c]                ; 004b667e
    LEA EDI,[ESP + 0x2c]                ; 004b6682
    CALL core_actor.cpp_FUN_00408bb0    ; 004b6686
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x5c]                ; 004b668b
    LEA EDX,[ESP + 0x2c]                ; 004b668f
    ADD ESP,0x8                         ; 004b6693
    LEA EAX,[EBP + 0x4c]                ; 004b6696
    MOVSD ES:EDI,ESI                    ; 004b6699
    MOVSD ES:EDI,ESI                    ; 004b669a
    MOVSD ES:EDI,ESI                    ; 004b669b
    CMP EAX,EDX                         ; 004b669c
    JZ 0x004b66b5                       ; 004b669e
        ;   XREF to: 004b66b5 (CONDITIONAL_JUMP)  ; LAB_004b66b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b66a0
    MOV dword ptr [EBP + 0x4c],EAX      ; 004b66a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b66a7
    MOV dword ptr [EBP + 0x50],EAX      ; 004b66ab
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b66ae
    MOV dword ptr [EBP + 0x54],EAX      ; 004b66b2
    MOV EAX,[0x00622c18]                ; 004b66b5 | g_CDemonSetPtr
        ;   Label: LAB_004b66b5
    ADD EAX,0x14d128                    ; 004b66ba
    PUSH EAX                            ; 004b66bf | g_CDemonSetInstance.collision_normal.x
    MOV ESI,dword ptr [ESP + 0x15c]     ; 004b66c0
    PUSH ESI                            ; 004b66c7
    LEA ESI,[ESP + 0x50]                ; 004b66c8
    LEA EDI,[ESP + 0x74]                ; 004b66cc
    CALL core_actor.cpp_FUN_00408b00    ; 004b66d0
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x50]                ; 004b66d5
    LEA EAX,[ESP + 0x74]                ; 004b66d9
    ADD ESP,0x8                         ; 004b66dd
    LEA EDX,[EBP + 0x58]                ; 004b66e0
    MOVSD ES:EDI,ESI                    ; 004b66e3
    MOVSD ES:EDI,ESI                    ; 004b66e4
    MOVSD ES:EDI,ESI                    ; 004b66e5
    CMP EDX,EAX                         ; 004b66e6
    JZ 0x004b66ff                       ; 004b66e8
        ;   XREF to: 004b66ff (CONDITIONAL_JUMP)  ; LAB_004b66ff
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004b66ea
    MOV dword ptr [EBP + 0x58],EAX      ; 004b66ee
    MOV EAX,dword ptr [ESP + 0x70]      ; 004b66f1
    MOV dword ptr [EBP + 0x5c],EAX      ; 004b66f5
    MOV EAX,dword ptr [ESP + 0x74]      ; 004b66f8
    MOV dword ptr [EBP + 0x60],EAX      ; 004b66fc
    MOV EDI,dword ptr [EBP + 0x74]      ; 004b66ff
        ;   Label: LAB_004b66ff
    TEST EDI,EDI                        ; 004b6702
    JNZ 0x004b6749                      ; 004b6704
        ;   XREF to: 004b6749 (CONDITIONAL_JUMP)  ; LAB_004b6749
    CMP dword ptr [EBP + 0x38],0x0      ; 004b6706
    JZ 0x004b6749                       ; 004b670a
        ;   XREF to: 004b6749 (CONDITIONAL_JUMP)  ; LAB_004b6749
    MOV EDX,dword ptr [0x007c637c]      ; 004b670c | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004b6712
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004b6713
    PUSH ECX                            ; 004b671a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004b671b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b6720
    TEST EAX,EAX                        ; 004b6723
    JZ 0x004b6749                       ; 004b6725
        ;   XREF to: 004b6749 (CONDITIONAL_JUMP)  ; LAB_004b6749
    PUSH EAX                            ; 004b6727
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b6728
    CALL dword ptr [EDX + 0xe0]         ; 004b672e
    ADD ESP,0x4                         ; 004b6734
    TEST EAX,EAX                        ; 004b6737
    JZ 0x004b6749                       ; 004b6739
        ;   XREF to: 004b6749 (CONDITIONAL_JUMP)  ; LAB_004b6749
    MOV ESI,0xff                        ; 004b673b
    MOV dword ptr [EBP + 0x34],EDI      ; 004b6740
    MOV dword ptr [EBP + 0x30],ESI      ; 004b6743
    MOV dword ptr [EBP + 0x2c],ESI      ; 004b6746
    LEA EDI,[ESP + 0x84]                ; 004b6749
        ;   Label: LAB_004b6749
    MOV ESI,EBX                         ; 004b6750
    MOVSD ES:EDI,ESI                    ; 004b6752
    MOVSD ES:EDI,ESI                    ; 004b6753
    MOVSD ES:EDI,ESI                    ; 004b6754
    FLD float ptr [ESP + 0x88]          ; 004b6755
    FMUL ST0                            ; 004b675c
    FLD float ptr [ESP + 0x84]          ; 004b675e
    FMUL ST0                            ; 004b6765
    FADDP                               ; 004b6767
    FLD float ptr [ESP + 0x8c]          ; 004b6769
    FMUL ST0                            ; 004b6770
    FADDP                               ; 004b6772
    FSQRT                               ; 004b6774
    FLDZ                                ; 004b6776
    FXCH                                ; 004b6778
    FSTP float ptr [ESP + 0x148]        ; 004b677a
    FCOMP float ptr [ESP + 0x148]       ; 004b6781
    FNSTSW AX                           ; 004b6788
    SAHF                                ; 004b678a
    JNC 0x004b6bf3                      ; 004b678b
        ;   XREF to: 004b6bf3 (CONDITIONAL_JUMP)  ; LAB_004b6bf3
    FLD1                                ; 004b6791
    FLD float ptr [ESP + 0x84]          ; 004b6793
    FXCH                                ; 004b679a
    FDIV float ptr [ESP + 0x148]        ; 004b679c
    FXCH                                ; 004b67a3
    FMUL ST1                            ; 004b67a5
    FLD float ptr [ESP + 0x88]          ; 004b67a7
    FMUL ST2                            ; 004b67ae
    FLD float ptr [ESP + 0x8c]          ; 004b67b0
    FMULP ST3                           ; 004b67b7
    FXCH                                ; 004b67b9
    FSTP float ptr [ESP + 0x84]         ; 004b67bb
    FSTP float ptr [ESP + 0x88]         ; 004b67c2
    FSTP float ptr [ESP + 0x8c]         ; 004b67c9
    FLD float ptr [ESP + 0x88]          ; 004b67d0
        ;   Label: LAB_004b67d0
    FMUL float ptr [EBX + 0x4]          ; 004b67d7
    FLD float ptr [ESP + 0x84]          ; 004b67da
    FMUL float ptr [EBX]                ; 004b67e1
    FADDP                               ; 004b67e3
    FLD float ptr [ESP + 0x8c]          ; 004b67e5
    FMUL float ptr [EBX + 0x8]          ; 004b67ec
    FADDP                               ; 004b67ef
    FST double ptr [ESP]                ; 004b67f1
    FCOMP double ptr [0x005df634]       ; 004b67f4 | DAT_005df634
    FNSTSW AX                           ; 004b67fa
    SAHF                                ; 004b67fc
    JA 0x004b6c0f                       ; 004b67fd
        ;   XREF to: 004b6c0f (CONDITIONAL_JUMP)  ; LAB_004b6c0f
    MOV dword ptr [ESP + 0x154],0x40490fdb ; 004b6803
    MOV EAX,dword ptr [ESP + 0x154]     ; 004b680e
        ;   Label: LAB_004b680e
    MOV dword ptr [EBP + 0x64],EAX      ; 004b6815
    LEA EAX,[EBP + 0x20]                ; 004b6818
    MOV EDX,dword ptr [ESP + 0x158]     ; 004b681b
    PUSH EAX                            ; 004b6822
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004b6823
    MOV EDX,dword ptr [EDX + 0x154]     ; 004b682a
    PUSH ECX                            ; 004b6830
    CALL dword ptr [EDX + 0xb4]         ; 004b6831
    ADD ESP,0x8                         ; 004b6837
    XOR ESI,ESI                         ; 004b683a
        ;   Label: LAB_004b683a
    MOV EDI,dword ptr [EBP + 0x3c]      ; 004b683c
    MOV dword ptr [ESP + 0x10],ESI      ; 004b683f
    TEST EDI,EDI                        ; 004b6843
    JZ 0x004b684e                       ; 004b6845
        ;   XREF to: 004b684e (CONDITIONAL_JUMP)  ; LAB_004b684e
    MOV EAX,dword ptr [EBP + 0x20]      ; 004b6847
    MOV dword ptr [ESP + 0x10],EAX      ; 004b684a
    FLD float ptr [EBP + 0x70]          ; 004b684e
        ;   Label: LAB_004b684e
    FLDZ                                ; 004b6851
    FCOMPP                              ; 004b6853
    FNSTSW AX                           ; 004b6855
    SAHF                                ; 004b6857
    JNC 0x004b6a0d                      ; 004b6858
        ;   XREF to: 004b6a0d (CONDITIONAL_JUMP)  ; LAB_004b6a0d
    FLD float ptr [ESP + 0x124]         ; 004b685e
    FMUL float ptr [EBX + 0x4]          ; 004b6865
    FLD float ptr [ESP + 0x120]         ; 004b6868
    FMUL float ptr [EBX]                ; 004b686f
    FADDP                               ; 004b6871
    FLD float ptr [ESP + 0x128]         ; 004b6873
    FMUL float ptr [EBX + 0x8]          ; 004b687a
    FADDP                               ; 004b687d
    FMUL float ptr [0x005df628]         ; 004b687f | DAT_005df628
    FLD float ptr [ESP + 0x120]         ; 004b6885
    FXCH                                ; 004b688c
    FSTP float ptr [ESP + 0x150]        ; 004b688e
    FMUL float ptr [ESP + 0x150]        ; 004b6895
    FLD float ptr [ESP + 0x124]         ; 004b689c
    FMUL float ptr [ESP + 0x150]        ; 004b68a3
    FLD float ptr [ESP + 0x128]         ; 004b68aa
    FMUL float ptr [ESP + 0x150]        ; 004b68b1
    LEA EDI,[ESP + 0xf0]                ; 004b68b8
    LEA ESI,[ESP + 0x9c]                ; 004b68bf
    FXCH ST2                            ; 004b68c6
    FSTP float ptr [ESP + 0x9c]         ; 004b68c8
    FSTP float ptr [ESP + 0xa0]         ; 004b68cf
    FSTP float ptr [ESP + 0xa4]         ; 004b68d6
    MOVSD ES:EDI,ESI                    ; 004b68dd
    MOVSD ES:EDI,ESI                    ; 004b68de
    MOVSD ES:EDI,ESI                    ; 004b68df
    LEA EAX,[ESP + 0xd8]                ; 004b68e0
    FLD float ptr [ESP + 0xf0]          ; 004b68e7
    FLD float ptr [ESP + 0xf4]          ; 004b68ee
    FLD float ptr [ESP + 0xf8]          ; 004b68f5
    LEA EDI,[ESP + 0x18]                ; 004b68fc
    LEA ESI,[ESP + 0x12c]               ; 004b6900
    FXCH ST2                            ; 004b6907
    FSUB float ptr [EBX]                ; 004b6909
    FXCH                                ; 004b690b
    FSUB float ptr [EBX + 0x4]          ; 004b690d
    FXCH ST2                            ; 004b6910
    FSUB float ptr [EBX + 0x8]          ; 004b6912
    FXCH                                ; 004b6915
    FSTP float ptr [ESP + 0x12c]        ; 004b6917
    FXCH                                ; 004b691e
    FSTP float ptr [ESP + 0x130]        ; 004b6920
    FSTP float ptr [ESP + 0x134]        ; 004b6927
    MOVSD ES:EDI,ESI                    ; 004b692e
    MOVSD ES:EDI,ESI                    ; 004b692f
    MOVSD ES:EDI,ESI                    ; 004b6930
    LEA EDX,[ESP + 0x18]                ; 004b6931
    FLD float ptr [ESP + 0x18]          ; 004b6935
    FLD float ptr [ESP + 0x1c]          ; 004b6939
    FLD float ptr [ESP + 0x20]          ; 004b693d
    LEA EDI,[ESP + 0xd8]                ; 004b6941
    LEA ESI,[ESP + 0x108]               ; 004b6948
    FXCH ST2                            ; 004b694f
    FCHS                                ; 004b6951
    FXCH                                ; 004b6953
    FCHS                                ; 004b6955
    FXCH ST2                            ; 004b6957
    FCHS                                ; 004b6959
    FXCH                                ; 004b695b
    FSTP float ptr [ESP + 0x108]        ; 004b695d
    FXCH                                ; 004b6964
    FSTP float ptr [ESP + 0x10c]        ; 004b6966
    FSTP float ptr [ESP + 0x110]        ; 004b696d
    MOVSD ES:EDI,ESI                    ; 004b6974
    MOVSD ES:EDI,ESI                    ; 004b6975
    MOVSD ES:EDI,ESI                    ; 004b6976
    CMP EDX,EAX                         ; 004b6977
    JZ 0x004b699c                       ; 004b6979
        ;   XREF to: 004b699c (CONDITIONAL_JUMP)  ; LAB_004b699c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004b697b
    MOV dword ptr [ESP + 0x18],EAX      ; 004b6982
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b6986
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b698d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004b6991
    MOV dword ptr [ESP + 0x20],EAX      ; 004b6998
    MOV EAX,[0x00622c18]                ; 004b699c | g_CDemonSetPtr
        ;   Label: LAB_004b699c
    PUSH EAX                            ; 004b69a1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0 ; 004b69a2
        ;   XREF to: 00558eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b69a7
    MOV EDX,dword ptr [0x00622c18]      ; 004b69aa | g_CDemonSetPtr
    PUSH EDX                            ; 004b69b0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004b69b1
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b69b6
    MOV ECX,dword ptr [ESP + 0x144]     ; 004b69b9
    PUSH ECX                            ; 004b69c0
    SUB ESP,0x54                        ; 004b69c1
    LEA ESI,[EBP + 0x20]                ; 004b69c4
    MOV EDI,ESP                         ; 004b69c7
    LEA EAX,[ESP + 0x70]                ; 004b69c9
    MOV ECX,0x15                        ; 004b69cd
    PUSH EAX                            ; 004b69d2
    LEA EAX,[ESP + 0x170]               ; 004b69d3
    MOVSD.REP ES:EDI,ESI                ; 004b69da
    PUSH EAX                            ; 004b69dc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b69dd
    PUSH ESI                            ; 004b69e0
    CALL core_fire.cpp_FUN_004b6420     ; 004b69e1
        ;   XREF to: 004b6420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b6420()
    ADD ESP,0x64                        ; 004b69e6
    MOV EDI,dword ptr [0x00622c18]      ; 004b69e9 | g_CDemonSetPtr
    PUSH EDI                            ; 004b69ef | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 004b69f0
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b69f5
    FLD float ptr [EBP + 0x70]          ; 004b69f8
    FLD1                                ; 004b69fb
    FSUBRP                              ; 004b69fd
    FMUL double ptr [0x005df62c]        ; 004b69ff | DAT_005df62c
    FMUL float ptr [ESP + 0x10]         ; 004b6a05
    FSTP float ptr [ESP + 0x10]         ; 004b6a09
    FLD float ptr [EBP + 0x68]          ; 004b6a0d
        ;   Label: LAB_004b6a0d
    FLDZ                                ; 004b6a10
    FCOMPP                              ; 004b6a12
    FNSTSW AX                           ; 004b6a14
    SAHF                                ; 004b6a16
    JNC 0x004b6aac                      ; 004b6a17
        ;   XREF to: 004b6aac (CONDITIONAL_JUMP)  ; LAB_004b6aac
    CMP dword ptr [EBP + 0x68],0x3f800000 ; 004b6a1d
    JNZ 0x004b6a35                      ; 004b6a24
        ;   XREF to: 004b6a35 (CONDITIONAL_JUMP)  ; LAB_004b6a35
    FLD float ptr [EBP + 0x6c]          ; 004b6a26
    FCOMP float ptr [EBP + 0x64]        ; 004b6a29
    FNSTSW AX                           ; 004b6a2c
    SAHF                                ; 004b6a2e
    JZ 0x004b6c3b                       ; 004b6a2f
        ;   XREF to: 004b6c3b (CONDITIONAL_JUMP)  ; LAB_004b6c3b
    LEA EDI,[ESP + 0xe4]                ; 004b6a35
        ;   Label: LAB_004b6a35
    MOV EDX,dword ptr [0x00622c18]      ; 004b6a3c | g_CDemonSetPtr
    MOV ESI,EBX                         ; 004b6a42
    PUSH EDX                            ; 004b6a44 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004b6a45
    MOVSD ES:EDI,ESI                    ; 004b6a46
    MOVSD ES:EDI,ESI                    ; 004b6a47
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004b6a48
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b6a4d
    MOV ECX,dword ptr [ESP + 0x158]     ; 004b6a50
    PUSH ECX                            ; 004b6a57
    MOV EBX,dword ptr [0x00622c18]      ; 004b6a58 | g_CDemonSetPtr
    PUSH EBX                            ; 004b6a5e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004b6a5f
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b6a64
    MOV EAX,dword ptr [EBP + 0x74]      ; 004b6a67
    INC EAX                             ; 004b6a6a
    PUSH EAX                            ; 004b6a6b
    SUB ESP,0x54                        ; 004b6a6c
    LEA ESI,[EBP + 0x20]                ; 004b6a6f
    MOV EDI,ESP                         ; 004b6a72
    LEA EAX,[ESP + 0x13c]               ; 004b6a74
    MOV ECX,0x15                        ; 004b6a7b
    PUSH EAX                            ; 004b6a80
    LEA EAX,[ESP + 0x170]               ; 004b6a81
    MOVSD.REP ES:EDI,ESI                ; 004b6a88
    PUSH EAX                            ; 004b6a8a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b6a8b
    PUSH ESI                            ; 004b6a8e
    CALL core_fire.cpp_FUN_004b6420     ; 004b6a8f
        ;   XREF to: 004b6420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b6420()
    ADD ESP,0x64                        ; 004b6a94
    FLD float ptr [EBP + 0x68]          ; 004b6a97
    FLD1                                ; 004b6a9a
    FSUBRP                              ; 004b6a9c
    FMUL double ptr [0x005df62c]        ; 004b6a9e | DAT_005df62c
    FMUL float ptr [ESP + 0x10]         ; 004b6aa4
    FSTP float ptr [ESP + 0x10]         ; 004b6aa8
    MOV EDI,dword ptr [EBP + 0x34]      ; 004b6aac
        ;   Label: LAB_004b6aac
    PUSH dword ptr [EBP + 0x24]         ; 004b6aaf
    PUSH EDI                            ; 004b6ab2
    MOV EAX,dword ptr [EBP + 0x30]      ; 004b6ab3
    PUSH EAX                            ; 004b6ab6
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004b6ab7
    PUSH EDX                            ; 004b6aba
    LEA EAX,[ESP + 0x130]               ; 004b6abb
    PUSH EAX                            ; 004b6ac2
    PUSH dword ptr [ESP + 0x24]         ; 004b6ac3
    LEA EAX,[ESP + 0x12c]               ; 004b6ac7
    PUSH dword ptr [EBP + 0x20]         ; 004b6ace
    PUSH EAX                            ; 004b6ad1
    LEA EAX,[ESP + 0x98]                ; 004b6ad2
    PUSH EAX                            ; 004b6ad9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b6ada
    PUSH ECX                            ; 004b6add
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070 ; 004b6ade
        ;   XREF to: 004b6070 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x28                        ; 004b6ae3
    MOV ESP,EBP                         ; 004b6ae6
        ;   Label: LAB_004b6ae6
    POP EBP                             ; 004b6ae8
    POP EDI                             ; 004b6ae9
    POP ESI                             ; 004b6aea
    POP EBX                             ; 004b6aeb
    RET                                 ; 004b6aec
    FLD float ptr [EBX]                 ; 004b6aed
        ;   Label: LAB_004b6aed
    FLD float ptr [EBX + 0x4]           ; 004b6aef
    FLD float ptr [EBX + 0x8]           ; 004b6af2
    LEA EDI,[ESP + 0xa8]                ; 004b6af5
    LEA ESI,[ESP + 0x3c]                ; 004b6afc
    LEA EAX,[ESP + 0xa8]                ; 004b6b00
    LEA EDX,[ESP + 0x120]               ; 004b6b07
    FXCH ST2                            ; 004b6b0e
    FCHS                                ; 004b6b10
    FXCH                                ; 004b6b12
    FCHS                                ; 004b6b14
    FXCH ST2                            ; 004b6b16
    FCHS                                ; 004b6b18
    FXCH ST2                            ; 004b6b1a
    FSTP float ptr [ESP + 0x40]         ; 004b6b1c
    FXCH                                ; 004b6b20
    FSTP float ptr [ESP + 0x44]         ; 004b6b22
    FSTP float ptr [ESP + 0x3c]         ; 004b6b26
    MOVSD ES:EDI,ESI                    ; 004b6b2a
    MOVSD ES:EDI,ESI                    ; 004b6b2b
    MOVSD ES:EDI,ESI                    ; 004b6b2c
    CMP EDX,EAX                         ; 004b6b2d
    JZ 0x004b6b5b                       ; 004b6b2f
        ;   XREF to: 004b6b5b (CONDITIONAL_JUMP)  ; LAB_004b6b5b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004b6b31
    MOV dword ptr [ESP + 0x120],EAX     ; 004b6b38
    MOV EAX,dword ptr [ESP + 0xac]      ; 004b6b3f
    MOV dword ptr [ESP + 0x124],EAX     ; 004b6b46
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004b6b4d
    MOV dword ptr [ESP + 0x128],EAX     ; 004b6b54
    FLD float ptr [ESP + 0x124]         ; 004b6b5b
        ;   Label: LAB_004b6b5b
    FMUL ST0                            ; 004b6b62
    FLD float ptr [ESP + 0x120]         ; 004b6b64
    FMUL ST0                            ; 004b6b6b
    FADDP                               ; 004b6b6d
    FLD float ptr [ESP + 0x128]         ; 004b6b6f
    FMUL ST0                            ; 004b6b76
    FADDP                               ; 004b6b78
    FSQRT                               ; 004b6b7a
    FLDZ                                ; 004b6b7c
    FXCH                                ; 004b6b7e
    FSTP float ptr [ESP + 0x14c]        ; 004b6b80
    FCOMP float ptr [ESP + 0x14c]       ; 004b6b87
    FNSTSW AX                           ; 004b6b8e
    SAHF                                ; 004b6b90
    JNC 0x004b6bd7                      ; 004b6b91
        ;   XREF to: 004b6bd7 (CONDITIONAL_JUMP)  ; LAB_004b6bd7
    FLD1                                ; 004b6b93
    FLD float ptr [ESP + 0x120]         ; 004b6b95
    FXCH                                ; 004b6b9c
    FDIV float ptr [ESP + 0x14c]        ; 004b6b9e
    FXCH                                ; 004b6ba5
    FMUL ST1                            ; 004b6ba7
    FLD float ptr [ESP + 0x124]         ; 004b6ba9
    FMUL ST2                            ; 004b6bb0
    FLD float ptr [ESP + 0x128]         ; 004b6bb2
    FMULP ST3                           ; 004b6bb9
    FXCH                                ; 004b6bbb
    FSTP float ptr [ESP + 0x120]        ; 004b6bbd
    FSTP float ptr [ESP + 0x124]        ; 004b6bc4
    FSTP float ptr [ESP + 0x128]        ; 004b6bcb
    JMP 0x004b65ee                      ; 004b6bd2
        ;   XREF to: 004b65ee (UNCONDITIONAL_JUMP)  ; LAB_004b65ee
    XOR ESI,ESI                         ; 004b6bd7
        ;   Label: LAB_004b6bd7
    MOV dword ptr [ESP + 0x124],ESI     ; 004b6bd9
    MOV dword ptr [ESP + 0x120],ESI     ; 004b6be0
    MOV dword ptr [ESP + 0x128],ESI     ; 004b6be7
    JMP 0x004b65ee                      ; 004b6bee
        ;   XREF to: 004b65ee (UNCONDITIONAL_JUMP)  ; LAB_004b65ee
    XOR EDX,EDX                         ; 004b6bf3
        ;   Label: LAB_004b6bf3
    MOV dword ptr [ESP + 0x88],EDX      ; 004b6bf5
    MOV dword ptr [ESP + 0x84],EDX      ; 004b6bfc
    MOV dword ptr [ESP + 0x8c],EDX      ; 004b6c03
    JMP 0x004b67d0                      ; 004b6c0a
        ;   XREF to: 004b67d0 (UNCONDITIONAL_JUMP)  ; LAB_004b67d0
    FLD1                                ; 004b6c0f
        ;   Label: LAB_004b6c0f
    FCOMP double ptr [ESP]              ; 004b6c11
    FNSTSW AX                           ; 004b6c14
    SAHF                                ; 004b6c16
    JA 0x004b6c27                       ; 004b6c17
        ;   XREF to: 004b6c27 (CONDITIONAL_JUMP)  ; LAB_004b6c27
    XOR EDI,EDI                         ; 004b6c19
    MOV dword ptr [ESP + 0x154],EDI     ; 004b6c1b
    JMP 0x004b680e                      ; 004b6c22
        ;   XREF to: 004b680e (UNCONDITIONAL_JUMP)  ; LAB_004b680e
    FLD double ptr [ESP]                ; 004b6c27
        ;   Label: LAB_004b6c27
    CALL crt_math.c_acos_FUN_005c1d04   ; 004b6c2a
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x154]        ; 004b6c2f
    JMP 0x004b680e                      ; 004b6c36
        ;   XREF to: 004b680e (UNCONDITIONAL_JUMP)  ; LAB_004b680e
    MOV ESI,dword ptr [ESP + 0x158]     ; 004b6c3b
        ;   Label: LAB_004b6c3b
    PUSH ESI                            ; 004b6c42
    MOV EDI,dword ptr [0x00622c18]      ; 004b6c43 | g_CDemonSetPtr
    PUSH EDI                            ; 004b6c49 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004b6c4a
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b6c4f
    JMP 0x004b6448                      ; 004b6c52
        ;   XREF to: 004b6448 (UNCONDITIONAL_JUMP)  ; LAB_004b6448

