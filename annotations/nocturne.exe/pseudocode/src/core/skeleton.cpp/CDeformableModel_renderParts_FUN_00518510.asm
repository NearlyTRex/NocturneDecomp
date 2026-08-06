; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   part_visibility_flags
; int *            Stack[0x10]:4   texture_set_indices
; int              Stack[0x14]:4   render_flags
; int              Stack[0x18]:4   skip_texture_capture
; Local Variables:
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xfc]:4  local_fc
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
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0 at 0051dbf9
;
; Referenced Globals:
;   float FLOAT_00591683 = 127
;   double DOUBLE_0059168b = 127
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc5118
;   undefined4 DAT_01cc511c
;   undefined4 DAT_01cc5120
;   undefined4 DAT_01cc5124
;   undefined4 DAT_01cc5128
;   undefined4 DAT_01cc512c
;   undefined4 DAT_01cc5130
;   undefined4 DAT_01cc5134
;   undefined4 DAT_01cc5138
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518510
        ;   Label: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510
    PUSH ESI                            ; 00518511
    PUSH EDI                            ; 00518512
    PUSH EBP                            ; 00518513
    MOV EBP,ESP                         ; 00518514
    SUB ESP,0x120                       ; 00518516
    AND ESP,0xfffffff8                  ; 0051851c
    MOV EDX,dword ptr [0x005ae704]      ; 0051851f | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00518525 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00518526
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0051852b
    MOV dword ptr [ESP + 0xac],EAX      ; 0051852e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518535
    MOV ECX,dword ptr [EBP + 0x14]      ; 00518538
    SHL EAX,0x3                         ; 0051853b
    ADD EAX,ECX                         ; 0051853e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00518540
    MOV dword ptr [ESP + 0xb0],EAX      ; 00518543
    TEST EAX,EAX                        ; 0051854a
    JZ 0x00518552                       ; 0051854c
        ;   XREF to: 00518552 (CONDITIONAL_JUMP)  ; LAB_00518552
    AND byte ptr [EBP + 0x24],0xfe      ; 0051854e
    PUSH 0x1                            ; 00518552
        ;   Label: LAB_00518552
    MOV ESI,dword ptr [0x005ae704]      ; 00518554 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0051855a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0051855b
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00518560
    XOR EDI,EDI                         ; 00518563
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518565
    MOV dword ptr [ESP + 0x80],EDI      ; 00518568
    MOV EDX,dword ptr [EAX + 0xc00]     ; 0051856f
    MOV dword ptr [ESP + 0x74],EDI      ; 00518575
    TEST EDX,EDX                        ; 00518579
    JLE 0x0051868f                      ; 0051857b
        ;   XREF to: 0051868f (CONDITIONAL_JUMP)  ; LAB_0051868f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518581
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518584
    SHL EAX,0x2                         ; 00518587
    ADD EDX,EAX                         ; 0051858a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051858c
    MOV dword ptr [ESP + 0xa0],EDX      ; 0051858f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518596
    ADD EAX,EDI                         ; 00518599
    ADD EDX,0xc0                        ; 0051859b
    MOV dword ptr [ESP + 0x68],EAX      ; 005185a1
    MOV dword ptr [ESP + 0x9c],EDX      ; 005185a5
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005185ac
    MOV EAX,dword ptr [EBP + 0x20]      ; 005185b3
    MOV dword ptr [ESP + 0x90],EDX      ; 005185b6
    MOV dword ptr [ESP + 0x84],EDX      ; 005185bd
    MOV dword ptr [ESP + 0x88],EDX      ; 005185c4
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005185cb
    MOV dword ptr [ESP + 0x78],EAX      ; 005185ce
    MOV dword ptr [ESP + 0x6c],EDX      ; 005185d2
    MOV EAX,dword ptr [ESP + 0x68]      ; 005185d6
        ;   Label: LAB_005185d6
    MOV EDI,dword ptr [ESP + 0x80]      ; 005185da
    MOV EDX,dword ptr [EAX + 0xc24]     ; 005185e1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005185e7
    ADD EDI,EDX                         ; 005185eb
    TEST byte ptr [EAX],0x1             ; 005185ed
    JZ 0x0051864d                       ; 005185f0
        ;   XREF to: 0051864d (CONDITIONAL_JUMP)  ; LAB_0051864d
    CMP dword ptr [ESP + 0xac],0x0      ; 005185f2
    JZ 0x0051880c                       ; 005185fa
        ;   XREF to: 0051880c (CONDITIONAL_JUMP)  ; LAB_0051880c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518600
        ;   Label: LAB_00518600
    CMP dword ptr [EAX + 0xbc],0x1      ; 00518603
    JNZ 0x00518cda                      ; 0051860a
        ;   XREF to: 00518cda (CONDITIONAL_JUMP)  ; LAB_00518cda
    CMP dword ptr [ESP + 0xac],0x0      ; 00518610
        ;   Label: LAB_00518610
    JZ 0x00518de3                       ; 00518618
        ;   XREF to: 00518de3 (CONDITIONAL_JUMP)  ; LAB_00518de3
    MOV ESI,dword ptr [EBP + 0x24]      ; 0051861e
        ;   Label: LAB_0051861e
    MOV EDX,dword ptr [ESP + 0x80]      ; 00518621
    MOV EAX,EDI                         ; 00518628
    PUSH ESI                            ; 0051862a
    SUB EAX,EDX                         ; 0051862b
    PUSH EAX                            ; 0051862d
    IMUL EAX,EDX,0x12                   ; 0051862e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00518631
    MOV EDX,dword ptr [EDX + 0x7c]      ; 00518638
    ADD EAX,EDX                         ; 0051863b
    PUSH EAX                            ; 0051863d
    MOV EBX,dword ptr [0x005be368]      ; 0051863e | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 00518644 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0 ; 00518645
        ;   XREF to: 0050ded0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 0051864a
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0051864d
        ;   Label: LAB_0051864d
    MOV EBX,dword ptr [ESP + 0x68]      ; 00518651
    MOV ESI,dword ptr [ESP + 0x78]      ; 00518655
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518659
    MOV dword ptr [ESP + 0x80],EDI      ; 0051865c
    MOV EDI,dword ptr [ESP + 0x74]      ; 00518663
    ADD ECX,0x4                         ; 00518667
    ADD EBX,0x60                        ; 0051866a
    ADD ESI,0x4                         ; 0051866d
    MOV dword ptr [ESP + 0x6c],ECX      ; 00518670
    MOV dword ptr [ESP + 0x68],EBX      ; 00518674
    MOV dword ptr [ESP + 0x78],ESI      ; 00518678
    INC EDI                             ; 0051867c
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0051867d
    MOV dword ptr [ESP + 0x74],EDI      ; 00518683
    CMP EDI,ECX                         ; 00518687
    JL 0x005185d6                       ; 00518689
        ;   XREF to: 005185d6 (CONDITIONAL_JUMP)  ; LAB_005185d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051868f
        ;   Label: LAB_0051868f
    XOR EBX,EBX                         ; 00518692
    MOV ESI,dword ptr [EAX + 0xc00]     ; 00518694
    MOV dword ptr [ESP + 0x7c],EBX      ; 0051869a
    TEST ESI,ESI                        ; 0051869e
    JLE 0x005187e3                      ; 005186a0
        ;   XREF to: 005187e3 (CONDITIONAL_JUMP)  ; LAB_005187e3
    ADD EAX,0xc0                        ; 005186a6
    MOV ESI,dword ptr [EBP + 0x14]      ; 005186ab
    MOV dword ptr [ESP + 0x8c],EAX      ; 005186ae
    MOV EAX,dword ptr [EBP + 0x18]      ; 005186b5
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005186b8
    SHL EAX,0x2                         ; 005186bb
    MOV EBX,dword ptr [EBP + 0x14]      ; 005186be
    ADD ESI,EAX                         ; 005186c1
    ADD EAX,EBX                         ; 005186c3
    MOV dword ptr [ESP + 0x64],EDX      ; 005186c5
    MOV dword ptr [ESP + 0x70],EAX      ; 005186c9
    MOV EDX,dword ptr [ESP + 0x70]      ; 005186cd
        ;   Label: LAB_005186cd
    MOV EAX,dword ptr [ESP + 0x80]      ; 005186d1
    MOV EDI,dword ptr [EDX + 0xc38]     ; 005186d8
    ADD EAX,EDI                         ; 005186de
    MOV dword ptr [ESP + 0xa8],EAX      ; 005186e0
    MOV EAX,0xffffffff                  ; 005186e7
    MOV EDX,dword ptr [ESP + 0x64]      ; 005186ec
    MOV dword ptr [ESP + 0xcc],EAX      ; 005186f0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005186f7
    MOV BL,byte ptr [EDX]               ; 005186fb
    SHL EAX,0x2                         ; 005186fd
    TEST BL,0x1                         ; 00518700
    JZ 0x005187a5                       ; 00518703
        ;   XREF to: 005187a5 (CONDITIONAL_JUMP)  ; LAB_005187a5
    MOV ECX,dword ptr [ESP + 0xa8]      ; 00518709
    MOV EBX,dword ptr [ESP + 0x80]      ; 00518710
    CMP EBX,ECX                         ; 00518717
    JGE 0x005187a5                      ; 00518719
        ;   XREF to: 005187a5 (CONDITIONAL_JUMP)  ; LAB_005187a5
    MOV EDX,dword ptr [EBP + 0x20]      ; 0051871f
    ADD EDX,EAX                         ; 00518722
    IMUL EAX,EBX,0x12                   ; 00518724
    MOV dword ptr [ESP + 0xe8],EAX      ; 00518727
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051872e
    MOV dword ptr [ESP + 0x94],EDX      ; 00518735
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051873c
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00518743
        ;   Label: LAB_00518743
    MOV EAX,dword ptr [ESI + 0x7c]      ; 0051874a
    MOV EDI,dword ptr [ESI + 0x54]      ; 0051874d
    ADD EDX,EAX                         ; 00518750
    MOV EAX,EBX                         ; 00518752
    SUB EAX,EDI                         ; 00518754
    MOV EDI,dword ptr [ESI + 0xa4]      ; 00518756
    MOV dword ptr [ESP + 0xc4],EDX      ; 0051875c
    MOV EAX,dword ptr [EDI + EAX*0x4]   ; 00518763
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00518766
    SHL EAX,0x2                         ; 00518769
    ADD EAX,EDX                         ; 0051876c
    TEST byte ptr [EAX],0x1             ; 0051876e
    JZ 0x00518e32                       ; 00518771
        ;   XREF to: 00518e32 (CONDITIONAL_JUMP)  ; LAB_00518e32
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00518777
        ;   Label: LAB_00518777
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0051877e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00518785
    INC EBX                             ; 0051878c
    ADD EDI,0x12                        ; 0051878d
    ADD EAX,0x4                         ; 00518790
    MOV dword ptr [ESP + 0xe8],EDI      ; 00518793
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051879a
    CMP EBX,EDX                         ; 005187a1
    JL 0x00518743                       ; 005187a3
        ;   XREF to: 00518743 (CONDITIONAL_JUMP)  ; LAB_00518743
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005187a5
        ;   Label: LAB_005187a5
    MOV EBX,dword ptr [ESP + 0x64]      ; 005187ac
    MOV EDI,dword ptr [ESP + 0x70]      ; 005187b0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005187b4
    MOV dword ptr [ESP + 0x80],EAX      ; 005187b7
    ADD EBX,0x4                         ; 005187be
    ADD EDI,0x60                        ; 005187c1
    MOV ECX,dword ptr [EDX + 0xc00]     ; 005187c4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005187ca
    MOV dword ptr [ESP + 0x64],EBX      ; 005187ce
    INC EAX                             ; 005187d2
    MOV dword ptr [ESP + 0x70],EDI      ; 005187d3
    MOV dword ptr [ESP + 0x7c],EAX      ; 005187d7
    CMP EAX,ECX                         ; 005187db
    JL 0x005186cd                       ; 005187dd
        ;   XREF to: 005186cd (CONDITIONAL_JUMP)  ; LAB_005186cd
    PUSH 0x0                            ; 005187e3
        ;   Label: LAB_005187e3
    MOV EDX,dword ptr [0x005ae704]      ; 005187e5 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 005187eb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 005187ec
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005187f1
    PUSH 0x1                            ; 005187f4
    MOV ECX,dword ptr [0x005ae704]      ; 005187f6 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 005187fc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 005187fd
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00518802
    MOV ESP,EBP                         ; 00518805
    POP EBP                             ; 00518807
    POP EDI                             ; 00518808
    POP ESI                             ; 00518809
    POP EBX                             ; 0051880a
    RET                                 ; 0051880b
    CMP dword ptr [ESP + 0xb0],0x0      ; 0051880c
        ;   Label: LAB_0051880c
    JZ 0x00518600                       ; 00518814
        ;   XREF to: 00518600 (CONDITIONAL_JUMP)  ; LAB_00518600
    PUSH 0x1                            ; 0051881a
    MOV ESI,dword ptr [0x005ae704]      ; 0051881c | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00518822 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00518823
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00518828
    MOV EAX,dword ptr [ESP + 0x80]      ; 0051882b
    CMP EDI,EAX                         ; 00518832
    JLE 0x0051864d                      ; 00518834
        ;   XREF to: 0051864d (CONDITIONAL_JUMP)  ; LAB_0051864d
    IMUL EAX,EAX,0x12                   ; 0051883a
    MOV dword ptr [ESP + 0xec],EAX      ; 0051883d
    IMUL EAX,EDI,0x12                   ; 00518844
    MOV dword ptr [ESP + 0xa4],EAX      ; 00518847
    MOV EAX,dword ptr [ESP + 0x88]      ; 0051884e
        ;   Label: LAB_0051884e
    MOV ESI,dword ptr [EAX + 0x7c]      ; 00518855
    ADD ESI,dword ptr [ESP + 0xec]      ; 00518858
    XOR ECX,ECX                         ; 0051885f
    MOV CX,word ptr [ESI + 0x2]         ; 00518861
    IMUL ECX,ECX,0x30                   ; 00518865
    XOR EAX,EAX                         ; 00518868
    MOV AX,word ptr [ESI]               ; 0051886a
    IMUL EDX,EAX,0x30                   ; 0051886d
    MOV EAX,[0x005ae704]                ; 00518870 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 00518875 | DAT_01b4d738
    ADD EDX,EAX                         ; 00518877
    LEA EBX,[EAX + ECX*0x1]             ; 00518879
    XOR ECX,ECX                         ; 0051887c
    MOV CX,word ptr [ESI + 0x4]         ; 0051887e
    IMUL ECX,ECX,0x30                   ; 00518882
    ADD EAX,ECX                         ; 00518885
    MOV ECX,dword ptr [EDX + 0x4]       ; 00518887
    IMUL ECX,dword ptr [0x01cc5124]     ; 0051888a | DAT_01cc5124
    MOV dword ptr [ESP + 0x100],ECX     ; 00518891
    MOV ECX,dword ptr [EDX]             ; 00518898
    IMUL ECX,dword ptr [0x01cc5118]     ; 0051889a | DAT_01cc5118
    ADD ECX,dword ptr [ESP + 0x100]     ; 005188a1
    MOV dword ptr [ESP + 0x104],ECX     ; 005188a8
    MOV ECX,dword ptr [EDX + 0x8]       ; 005188af
    IMUL ECX,dword ptr [0x01cc5130]     ; 005188b2 | DAT_01cc5130
    MOV dword ptr [ESP + 0x100],ECX     ; 005188b9
    MOV ECX,dword ptr [ESP + 0x104]     ; 005188c0
    ADD ECX,dword ptr [ESP + 0x100]     ; 005188c7
    MOV dword ptr [ESP + 0x100],ECX     ; 005188ce
    MOV ECX,dword ptr [EDX + 0x4]       ; 005188d5
    IMUL ECX,dword ptr [0x01cc5128]     ; 005188d8 | DAT_01cc5128
    MOV dword ptr [ESP + 0x104],ECX     ; 005188df
    MOV ECX,dword ptr [EDX]             ; 005188e6
    IMUL ECX,dword ptr [0x01cc511c]     ; 005188e8 | DAT_01cc511c
    ADD ECX,dword ptr [ESP + 0x104]     ; 005188ef
    MOV dword ptr [ESP + 0x108],ECX     ; 005188f6
    MOV ECX,dword ptr [EDX + 0x8]       ; 005188fd
    IMUL ECX,dword ptr [0x01cc5134]     ; 00518900 | DAT_01cc5134
    MOV dword ptr [ESP + 0x104],ECX     ; 00518907
    MOV ECX,dword ptr [ESP + 0x108]     ; 0051890e
    ADD ECX,dword ptr [ESP + 0x104]     ; 00518915
    MOV dword ptr [ESP + 0x104],ECX     ; 0051891c
    MOV ECX,dword ptr [EDX + 0x4]       ; 00518923
    IMUL ECX,dword ptr [0x01cc512c]     ; 00518926 | DAT_01cc512c
    MOV dword ptr [ESP + 0x108],ECX     ; 0051892d
    MOV ECX,dword ptr [EDX]             ; 00518934
    IMUL ECX,dword ptr [0x01cc5120]     ; 00518936 | DAT_01cc5120
    ADD ECX,dword ptr [ESP + 0x108]     ; 0051893d
    MOV EDX,dword ptr [EDX + 0x8]       ; 00518944
    MOV dword ptr [ESP + 0x108],ECX     ; 00518947
    IMUL EDX,dword ptr [0x01cc5138]     ; 0051894e | DAT_01cc5138
    ADD EDX,dword ptr [ESP + 0x108]     ; 00518955
    MOV ECX,dword ptr [0x01cc5124]      ; 0051895c | DAT_01cc5124
    MOV dword ptr [ESP + 0x108],EDX     ; 00518962
    IMUL ECX,dword ptr [EBX + 0x4]      ; 00518969
    MOV EDX,dword ptr [EBX]             ; 0051896d
    IMUL EDX,dword ptr [0x01cc5118]     ; 0051896f | DAT_01cc5118
    ADD EDX,ECX                         ; 00518976
    MOV ECX,dword ptr [0x01cc5130]      ; 00518978 | DAT_01cc5130
    MOV dword ptr [ESP + 0x10c],EDX     ; 0051897e
    MOV EDX,dword ptr [EBX + 0x8]       ; 00518985
    IMUL EDX,ECX                        ; 00518988
    ADD EDX,dword ptr [ESP + 0x10c]     ; 0051898b
    MOV ECX,dword ptr [0x01cc5128]      ; 00518992 | DAT_01cc5128
    MOV dword ptr [ESP + 0x10c],EDX     ; 00518998
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051899f
    IMUL EDX,ECX                        ; 005189a2
    MOV ECX,dword ptr [EBX]             ; 005189a5
    IMUL ECX,dword ptr [0x01cc511c]     ; 005189a7 | DAT_01cc511c
    ADD EDX,ECX                         ; 005189ae
    MOV ECX,dword ptr [EBX + 0x8]       ; 005189b0
    IMUL ECX,dword ptr [0x01cc5134]     ; 005189b3 | DAT_01cc5134
    ADD EDX,ECX                         ; 005189ba
    MOV ECX,dword ptr [0x01cc512c]      ; 005189bc | DAT_01cc512c
    MOV dword ptr [ESP + 0x110],EDX     ; 005189c2
    MOV EDX,dword ptr [EBX + 0x4]       ; 005189c9
    IMUL EDX,ECX                        ; 005189cc
    MOV ECX,dword ptr [EBX]             ; 005189cf
    IMUL ECX,dword ptr [0x01cc5120]     ; 005189d1 | DAT_01cc5120
    ADD ECX,EDX                         ; 005189d8
    MOV EDX,dword ptr [EBX + 0x8]       ; 005189da
    IMUL EDX,dword ptr [0x01cc5138]     ; 005189dd | DAT_01cc5138
    ADD EDX,ECX                         ; 005189e4
    MOV EBX,dword ptr [0x01cc5124]      ; 005189e6 | DAT_01cc5124
    MOV dword ptr [ESP + 0x114],EDX     ; 005189ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 005189f3
    IMUL EDX,EBX                        ; 005189f6
    MOV ECX,dword ptr [0x01cc5118]      ; 005189f9 | DAT_01cc5118
    MOV EBX,dword ptr [EAX]             ; 005189ff
    IMUL EBX,ECX                        ; 00518a01
    MOV ECX,dword ptr [0x01cc5130]      ; 00518a04 | DAT_01cc5130
    ADD EBX,EDX                         ; 00518a0a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00518a0c
    IMUL EDX,ECX                        ; 00518a0f
    ADD EDX,EBX                         ; 00518a12
    MOV dword ptr [ESP + 0x118],EDX     ; 00518a14
    MOV EBX,dword ptr [EAX + 0x4]       ; 00518a1b
    IMUL EBX,dword ptr [0x01cc5128]     ; 00518a1e | DAT_01cc5128
    MOV ECX,dword ptr [0x01cc511c]      ; 00518a25 | DAT_01cc511c
    MOV EDX,dword ptr [EAX]             ; 00518a2b
    IMUL EDX,ECX                        ; 00518a2d
    MOV ECX,dword ptr [0x01cc5134]      ; 00518a30 | DAT_01cc5134
    ADD EBX,EDX                         ; 00518a36
    MOV EDX,dword ptr [EAX + 0x8]       ; 00518a38
    IMUL EDX,ECX                        ; 00518a3b
    ADD EBX,EDX                         ; 00518a3e
    MOV EDX,dword ptr [0x01cc512c]      ; 00518a40 | DAT_01cc512c
    MOV dword ptr [ESP + 0x11c],EBX     ; 00518a46
    MOV EBX,dword ptr [EAX + 0x4]       ; 00518a4d
    IMUL EBX,EDX                        ; 00518a50
    MOV ECX,dword ptr [0x01cc5120]      ; 00518a53 | DAT_01cc5120
    MOV EDX,dword ptr [EAX]             ; 00518a59
    IMUL EDX,ECX                        ; 00518a5b
    MOV EAX,dword ptr [EAX + 0x8]       ; 00518a5e
    ADD EBX,EDX                         ; 00518a61
    IMUL EAX,dword ptr [0x01cc5138]     ; 00518a63 | DAT_01cc5138
    FILD dword ptr [ESP + 0x100]        ; 00518a6a
    FILD dword ptr [ESP + 0x104]        ; 00518a71
    FILD dword ptr [ESP + 0x108]        ; 00518a78
    FSTP float ptr [ESP + 0xb8]         ; 00518a7f
    FILD dword ptr [ESP + 0x10c]        ; 00518a86
    FST float ptr [ESP + 0xdc]          ; 00518a8d
    FSUBRP ST2,ST0                      ; 00518a94
    FILD dword ptr [ESP + 0x110]        ; 00518a96
    FST float ptr [ESP + 0xd0]          ; 00518a9d
    FSUBRP                              ; 00518aa4
    FXCH                                ; 00518aa6
    FSTP float ptr [ESP + 0xe0]         ; 00518aa8
    FSTP float ptr [ESP + 0xd8]         ; 00518aaf
    FILD dword ptr [ESP + 0x114]        ; 00518ab6
    FSTP float ptr [ESP + 0xd4]         ; 00518abd
    FILD dword ptr [ESP + 0x118]        ; 00518ac4
    FSTP float ptr [ESP + 0xb4]         ; 00518acb
    ADD EBX,EAX                         ; 00518ad2
    FILD dword ptr [ESP + 0x11c]        ; 00518ad4
    MOV dword ptr [ESP + 0x11c],EBX     ; 00518adb
    FSTP float ptr [ESP + 0xbc]         ; 00518ae2
    FILD dword ptr [ESP + 0x11c]        ; 00518ae9
    FSTP float ptr [ESP + 0xc0]         ; 00518af0
    FLD float ptr [ESP + 0xd8]          ; 00518af7
    FLD float ptr [ESP + 0xd4]          ; 00518afe
    FLD float ptr [ESP + 0xc0]          ; 00518b05
    FSUB ST0,ST1                        ; 00518b0c
    FSTP float ptr [ESP + 0x60]         ; 00518b0e
    FXCH                                ; 00518b12
    FMUL float ptr [ESP + 0x60]         ; 00518b14
    FLD float ptr [ESP + 0xbc]          ; 00518b18
    FSUB float ptr [ESP + 0xd0]         ; 00518b1f
    FLD float ptr [ESP + 0xe0]          ; 00518b26
    FMUL ST1                            ; 00518b2d
    FLD float ptr [ESP + 0xb4]          ; 00518b2f
    FXCH ST4                            ; 00518b36
    FSUB float ptr [ESP + 0xb8]         ; 00518b38
    FXCH ST4                            ; 00518b3f
    FSUB float ptr [ESP + 0xdc]         ; 00518b41
    FLD ST0                             ; 00518b48
    FMUL ST5                            ; 00518b4a
    FXCH ST3                            ; 00518b4c
    FMULP ST5                           ; 00518b4e
    FMUL float ptr [ESP + 0xd8]         ; 00518b50
    FLD float ptr [ESP + 0xe0]          ; 00518b57
    FXCH ST5                            ; 00518b5e
    FSUBP ST4,ST0                       ; 00518b60
    FXCH ST4                            ; 00518b62
    FMUL float ptr [ESP + 0x60]         ; 00518b64
    FXCH ST3                            ; 00518b68
    FSTP float ptr [ESP + 0xfc]         ; 00518b6a
    FXCH ST2                            ; 00518b71
    FSUBP                               ; 00518b73
    FLD float ptr [ESP + 0xfc]          ; 00518b75
    FMUL ST0                            ; 00518b7c
    FXCH                                ; 00518b7e
    FST float ptr [ESP + 0xf4]          ; 00518b80
    FMUL float ptr [ESP + 0xf4]         ; 00518b87
    FXCH ST3                            ; 00518b8e
    FSUBP ST2,ST0                       ; 00518b90
    FADDP ST2,ST0                       ; 00518b92
    FST float ptr [ESP + 0xf8]          ; 00518b94
    FMUL float ptr [ESP + 0xf8]         ; 00518b9b
    FADDP                               ; 00518ba2
    FLDZ                                ; 00518ba4
    FXCH                                ; 00518ba6
    FSTP float ptr [ESP]                ; 00518ba8
    FCOMP float ptr [ESP]               ; 00518bab
    FNSTSW AX                           ; 00518bae
    SAHF                                ; 00518bb0
    JNC 0x00518cce                      ; 00518bb1
        ;   XREF to: 00518cce (CONDITIONAL_JUMP)  ; LAB_00518cce
    FLD float ptr [ESP]                 ; 00518bb7
    FSQRT                               ; 00518bba
    FDIVR double ptr [0x0059168b]       ; 00518bbc | DOUBLE_0059168b
    FSTP float ptr [ESP]                ; 00518bc2
    FLD float ptr [ESP]                 ; 00518bc5
        ;   Label: LAB_00518bc5
    FLD float ptr [ESP + 0xfc]          ; 00518bc8
    FMUL ST1                            ; 00518bcf
    FLD float ptr [ESP + 0xf4]          ; 00518bd1
    FMUL ST2                            ; 00518bd8
    FLD float ptr [ESP + 0xf8]          ; 00518bda
    FMULP ST3                           ; 00518be1
    FXCH                                ; 00518be3
    FSTP float ptr [ESP + 0xfc]         ; 00518be5
    FSTP float ptr [ESP + 0xf4]         ; 00518bec
    FST float ptr [ESP + 0xf8]          ; 00518bf3
    FLD float ptr [ESP + 0xf4]          ; 00518bfa
    FLD float ptr [ESP + 0xfc]          ; 00518c01
    FXCH ST2                            ; 00518c08
    FLD float ptr [0x00591683]          ; 00518c0a | FLOAT_00591683
    FXCH                                ; 00518c10
    FADD ST0,ST1                        ; 00518c12
    FXCH ST2                            ; 00518c14
    FADD ST0,ST1                        ; 00518c16
    FXCH ST3                            ; 00518c18
    FADDP                               ; 00518c1a
    FXCH                                ; 00518c1c
    CALL crt_math.c_round_FUN_00563a30  ; 00518c1e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 00518c23
    CALL crt_math.c_round_FUN_00563a30  ; 00518c25
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 00518c2a
    FISTP dword ptr [ESP + 0x104]       ; 00518c2c
    FXCH                                ; 00518c33
    FISTP dword ptr [ESP + 0x100]       ; 00518c35
    MOV EAX,dword ptr [ESP + 0x104]     ; 00518c3c
    MOV EDX,dword ptr [ESP + 0x100]     ; 00518c43
    PUSH EAX                            ; 00518c4a
    CALL crt_math.c_round_FUN_00563a30  ; 00518c4b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EDX                            ; 00518c50
    FISTP dword ptr [ESP + 0x108]       ; 00518c51
    MOV ECX,dword ptr [ESP + 0x108]     ; 00518c58
    PUSH ECX                            ; 00518c5f
    MOV EBX,dword ptr [0x005ae704]      ; 00518c60 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00518c66 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20 ; 00518c67
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,0x3                         ; 00518c6c
    ADD ESP,0x10                        ; 00518c71
    MOV dword ptr [ESP + 0x8],EAX       ; 00518c74
    XOR EAX,EAX                         ; 00518c78
    MOV AX,word ptr [ESI]               ; 00518c7a
    MOV dword ptr [ESP + 0x1c],EAX      ; 00518c7d
    XOR EAX,EAX                         ; 00518c81
    MOV AX,word ptr [ESI + 0x2]         ; 00518c83
    MOV dword ptr [ESP + 0x28],EAX      ; 00518c87
    XOR EAX,EAX                         ; 00518c8b
    MOV AX,word ptr [ESI + 0x4]         ; 00518c8d
    MOV dword ptr [ESP + 0x34],EAX      ; 00518c91
    LEA EAX,[ESP + 0x4]                 ; 00518c95
    PUSH EAX                            ; 00518c99
    MOV EDX,dword ptr [0x005ae704]      ; 00518c9a | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00518ca0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 00518ca1
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00518ca6
    MOV ECX,dword ptr [ESP + 0xec]      ; 00518ca9
    ADD ECX,0x12                        ; 00518cb0
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00518cb3
    MOV dword ptr [ESP + 0xec],ECX      ; 00518cba
    CMP ECX,EBX                         ; 00518cc1
    JGE 0x0051864d                      ; 00518cc3
        ;   XREF to: 0051864d (CONDITIONAL_JUMP)  ; LAB_0051864d
    JMP 0x0051884e                      ; 00518cc9
        ;   XREF to: 0051884e (UNCONDITIONAL_JUMP)  ; LAB_0051884e
    MOV dword ptr [ESP],0x42fe0000      ; 00518cce
        ;   Label: LAB_00518cce
    JMP 0x00518bc5                      ; 00518cd5
        ;   XREF to: 00518bc5 (UNCONDITIONAL_JUMP)  ; LAB_00518bc5
    CMP dword ptr [ESP + 0xac],0x0      ; 00518cda
        ;   Label: LAB_00518cda
    JNZ 0x00518610                      ; 00518ce2
        ;   XREF to: 00518610 (CONDITIONAL_JUMP)  ; LAB_00518610
    CMP dword ptr [EBP + 0x28],0x0      ; 00518ce8
    JNZ 0x00518610                      ; 00518cec
        ;   XREF to: 00518610 (CONDITIONAL_JUMP)  ; LAB_00518610
    CMP dword ptr [ESP + 0xb0],0x0      ; 00518cf2
    JNZ 0x00518610                      ; 00518cfa
        ;   XREF to: 00518610 (CONDITIONAL_JUMP)  ; LAB_00518610
    MOV dword ptr [ESP + 0xc8],0xffffffff ; 00518d00
    MOV EAX,dword ptr [ESP + 0x80]      ; 00518d0b
    MOV dword ptr [ESP + 0xf0],EAX      ; 00518d12
    CMP EDI,EAX                         ; 00518d19
    JLE 0x0051864d                      ; 00518d1b
        ;   XREF to: 0051864d (CONDITIONAL_JUMP)  ; LAB_0051864d
    MOV EAX,dword ptr [ESP + 0x78]      ; 00518d21
    MOV dword ptr [ESP + 0x98],EAX      ; 00518d25
    MOV EDX,dword ptr [ESP + 0x84]      ; 00518d2c
        ;   Label: LAB_00518d2c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00518d33
    MOV EDX,dword ptr [EDX + 0x90]      ; 00518d3a
    LEA EBX,[EAX + 0x1]                 ; 00518d40
    MOV ESI,dword ptr [EDX + EAX*0x4]   ; 00518d43
    CMP EBX,EDI                         ; 00518d46
    JGE 0x00518d68                      ; 00518d48
        ;   XREF to: 00518d68 (CONDITIONAL_JUMP)  ; LAB_00518d68
    MOV EDX,dword ptr [ESP + 0x90]      ; 00518d4a
    LEA EAX,[EBX*0x4 + 0x0]             ; 00518d51
    MOV EDX,dword ptr [EDX + 0x90]      ; 00518d58
    ADD EAX,EDX                         ; 00518d5e
    CMP ESI,dword ptr [EAX]             ; 00518d60
        ;   Label: LAB_00518d60
    JZ 0x00518e21                       ; 00518d62
        ;   XREF to: 00518e21 (CONDITIONAL_JUMP)  ; LAB_00518e21
    CMP ESI,dword ptr [ESP + 0xc8]      ; 00518d68
        ;   Label: LAB_00518d68
    JZ 0x00518da0                       ; 00518d6f
        ;   XREF to: 00518da0 (CONDITIONAL_JUMP)  ; LAB_00518da0
    MOV EAX,dword ptr [ESP + 0x98]      ; 00518d71
    IMUL EAX,dword ptr [EAX],0x240      ; 00518d78
    IMUL EDX,ESI,0x48                   ; 00518d7e
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00518d81
    ADD EAX,EDX                         ; 00518d88
    PUSH EAX                            ; 00518d8a
    MOV EAX,[0x005ae704]                ; 00518d8b | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00518d90 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00518d91
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00518d96
    MOV dword ptr [ESP + 0xc8],ESI      ; 00518d99
    MOV EAX,dword ptr [EBP + 0x24]      ; 00518da0
        ;   Label: LAB_00518da0
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00518da3
    PUSH EAX                            ; 00518daa
    MOV EAX,EBX                         ; 00518dab
    SUB EAX,EDX                         ; 00518dad
    PUSH EAX                            ; 00518daf
    IMUL EAX,EDX,0x12                   ; 00518db0
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00518db3
    MOV EDX,dword ptr [EDX + 0x7c]      ; 00518dba
    ADD EAX,EDX                         ; 00518dbd
    PUSH EAX                            ; 00518dbf
    MOV ESI,dword ptr [0x005be368]      ; 00518dc0 | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 00518dc6 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0 ; 00518dc7
        ;   XREF to: 0050ded0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 00518dcc
    MOV dword ptr [ESP + 0xf0],EBX      ; 00518dcf
    CMP EBX,EDI                         ; 00518dd6
    JL 0x00518d2c                       ; 00518dd8
        ;   XREF to: 00518d2c (CONDITIONAL_JUMP)  ; LAB_00518d2c
    JMP 0x0051864d                      ; 00518dde
        ;   XREF to: 0051864d (UNCONDITIONAL_JUMP)  ; LAB_0051864d
    CMP dword ptr [EBP + 0x28],0x0      ; 00518de3
        ;   Label: LAB_00518de3
    JNZ 0x0051861e                      ; 00518de7
        ;   XREF to: 0051861e (CONDITIONAL_JUMP)  ; LAB_0051861e
    CMP dword ptr [ESP + 0xb0],0x0      ; 00518ded
    JNZ 0x0051861e                      ; 00518df5
        ;   XREF to: 0051861e (CONDITIONAL_JUMP)  ; LAB_0051861e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00518dfb
    IMUL EAX,dword ptr [EAX],0x240      ; 00518dff
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00518e05
    PUSH EAX                            ; 00518e0c
    MOV EBX,dword ptr [0x005ae704]      ; 00518e0d | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00518e13 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00518e14
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00518e19
    JMP 0x0051861e                      ; 00518e1c
        ;   XREF to: 0051861e (UNCONDITIONAL_JUMP)  ; LAB_0051861e
    INC EBX                             ; 00518e21
        ;   Label: LAB_00518e21
    ADD EAX,0x4                         ; 00518e22
    CMP EBX,EDI                         ; 00518e25
    JL 0x00518d60                       ; 00518e27
        ;   XREF to: 00518d60 (CONDITIONAL_JUMP)  ; LAB_00518d60
    JMP 0x00518d68                      ; 00518e2d
        ;   XREF to: 00518d68 (UNCONDITIONAL_JUMP)  ; LAB_00518d68
    CMP dword ptr [ESP + 0xac],0x0      ; 00518e32
        ;   Label: LAB_00518e32
    JNZ 0x00518e97                      ; 00518e3a
        ;   XREF to: 00518e97 (CONDITIONAL_JUMP)  ; LAB_00518e97
    CMP dword ptr [EBP + 0x28],0x0      ; 00518e3c
    JNZ 0x00518e97                      ; 00518e40
        ;   XREF to: 00518e97 (CONDITIONAL_JUMP)  ; LAB_00518e97
    CMP dword ptr [ESP + 0xb0],0x0      ; 00518e42
    JNZ 0x00518e97                      ; 00518e4a
        ;   XREF to: 00518e97 (CONDITIONAL_JUMP)  ; LAB_00518e97
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00518e4c
    MOV EAX,dword ptr [ESI + 0x90]      ; 00518e53
    ADD EAX,EDX                         ; 00518e59
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00518e5b
    MOV EDI,dword ptr [EAX]             ; 00518e62
    CMP EDI,ECX                         ; 00518e64
    JZ 0x00518e97                       ; 00518e66
        ;   XREF to: 00518e97 (CONDITIONAL_JUMP)  ; LAB_00518e97
    MOV EAX,dword ptr [ESP + 0x94]      ; 00518e68
    IMUL EAX,dword ptr [EAX],0x240      ; 00518e6f
    IMUL EDX,EDI,0x48                   ; 00518e75
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00518e78
    ADD EAX,EDX                         ; 00518e7f
    PUSH EAX                            ; 00518e81
    MOV EAX,[0x005ae704]                ; 00518e82 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00518e87 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00518e88
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00518e8d
    MOV dword ptr [ESP + 0xcc],EDI      ; 00518e90
    MOV EDX,dword ptr [EBP + 0x24]      ; 00518e97
        ;   Label: LAB_00518e97
    PUSH EDX                            ; 00518e9a
    PUSH 0x1                            ; 00518e9b
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00518e9d
    PUSH ECX                            ; 00518ea4
    MOV EDI,dword ptr [0x005be368]      ; 00518ea5 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 00518eab | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0 ; 00518eac
        ;   XREF to: 0050ded0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 00518eb1
    JMP 0x00518777                      ; 00518eb4
        ;   XREF to: 00518777 (UNCONDITIONAL_JUMP)  ; LAB_00518777

