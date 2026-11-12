; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00543490(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CBodyPart *      Stack[0xc]:4   body_part_ptr
; int              Stack[0x10]:4   part_index
; CVector3i *      Stack[0x14]:4   skinned_vertices
; int              Stack[0x18]:4   texture_set_index
; Local Variables:
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
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130 at 005481b8
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e707c
;   TerminatedCString s_CDeformableModel_dismemb_005e7091
;   TerminatedCString s_core_skeleton_cpp_005e70cb
;   TerminatedCString s_CDeformableModel_dismemb_005e70e0
;   TerminatedCString s_core_skeleton_cpp_005e7111
;   TerminatedCString s_CDeformableModel_dismemb_005e7126
;   TerminatedCString s_core_skeleton_cpp_005e7152
;   TerminatedCString s_CDeformableModel_dismemb_005e7167
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415890
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543490
        ;   Label: core_skeleton.cpp_CDeformableModel_dismember_FUN_00543490
    PUSH ESI                            ; 00543491
    PUSH EDI                            ; 00543492
    PUSH EBP                            ; 00543493
    SUB ESP,0x44                        ; 00543494
    MOV EBP,dword ptr [ESP + 0x60]      ; 00543497
    TEST EBP,EBP                        ; 0054349b
    JZ 0x005439f9                       ; 0054349d
        ;   XREF to: 005439f9 (CONDITIONAL_JUMP)  ; LAB_005439f9
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005434a3
    MOV EDX,dword ptr [ESP + 0x58]      ; 005434a7
    SHL EAX,0x3                         ; 005434ab
    ADD EAX,EDX                         ; 005434ae
    CMP dword ptr [EAX + 0x8],0x0       ; 005434b0
    JNZ 0x00543696                      ; 005434b4
        ;   XREF to: 00543696 (CONDITIONAL_JUMP)  ; LAB_00543696
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005434ba
        ;   Label: LAB_005434ba
    MOV EAX,dword ptr [ESP + 0x58]      ; 005434be
    SHL ECX,0x2                         ; 005434c2
    ADD EAX,ECX                         ; 005434c5
    MOV EBX,dword ptr [ESP + 0x64]      ; 005434c7
    XOR EDI,EDI                         ; 005434cb
    MOV EDX,dword ptr [EAX + 0x54]      ; 005434cd
    MOV dword ptr [ESP + 0x28],EDI      ; 005434d0
    MOV dword ptr [ESP + 0x24],EDX      ; 005434d4
    XOR EDX,EDX                         ; 005434d8
    TEST EBX,EBX                        ; 005434da
    JLE 0x00543510                      ; 005434dc
        ;   XREF to: 00543510 (CONDITIONAL_JUMP)  ; LAB_00543510
    MOV ESI,dword ptr [ESP + 0x28]      ; 005434de
        ;   Label: LAB_005434de
    MOV EDI,dword ptr [ESP + 0x24]      ; 005434e2
    MOV EBX,dword ptr [EAX + 0xc24]     ; 005434e6
    ADD EAX,0x60                        ; 005434ec
    INC EDX                             ; 005434ef
    ADD ESI,EBX                         ; 005434f0
    MOV EBX,dword ptr [EAX + 0xbd8]     ; 005434f2
    MOV dword ptr [ESP + 0x28],ESI      ; 005434f8
    ADD EDI,EBX                         ; 005434fc
    MOV EBX,dword ptr [ESP + 0x64]      ; 005434fe
    MOV dword ptr [ESP + 0x24],EDI      ; 00543502
    CMP EDX,EBX                         ; 00543506
    JL 0x005434de                       ; 00543508
        ;   XREF to: 005434de (CONDITIONAL_JUMP)  ; LAB_005434de
    LEA EAX,[EAX]                       ; 0054350a
    MOV EDX,dword ptr [ESP + 0x64]      ; 00543510
        ;   Label: LAB_00543510
    LEA EAX,[EDX*0x4 + 0x0]             ; 00543514
    SUB EAX,EDX                         ; 0054351b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054351d
    SHL EAX,0x5                         ; 00543521
    ADD EAX,ESI                         ; 00543524
    MOV EDX,dword ptr [ESP + 0x28]      ; 00543526
    ADD EDX,dword ptr [ECX + EAX*0x1 + 0xc24] ; 0054352a
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc38] ; 00543531
    MOV dword ptr [ESP],EDX             ; 00543538
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054353b
    ADD ECX,ESI                         ; 0054353f
    ADD EDX,EBX                         ; 00543541
    MOV EDI,dword ptr [ECX + 0x2c]      ; 00543543
    MOV dword ptr [ESP + 0x4],EDX       ; 00543546
    CMP EDI,0xfa0                       ; 0054354a
    JLE 0x00543574                      ; 00543550
        ;   XREF to: 00543574 (CONDITIONAL_JUMP)  ; LAB_00543574
    MOV EAX,0x5e70cb                    ; 00543552 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x661                       ; 00543557
    PUSH 0x5e70e0                       ; 0054355c | = "CDeformableModel::dismember - too man..."
    MOV [0x01d046a0],EAX                ; 00543561 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00543566 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054356c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00543571
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00543574
        ;   Label: LAB_00543574
    MOV ECX,dword ptr [ESP + 0x58]      ; 00543578
    SHL ESI,0x2                         ; 0054357c
    ADD ESI,ECX                         ; 0054357f
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00543581
    SHL EAX,0x2                         ; 00543584
    PUSH EAX                            ; 00543587
    PUSH 0x0                            ; 00543588
    PUSH 0x20b1a54                      ; 0054358a
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0054358f
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00543594
    MOV EAX,dword ptr [ESP + 0x28]      ; 00543597
    MOV EBX,dword ptr [ESP]             ; 0054359b
    CMP EAX,EBX                         ; 0054359e
    JGE 0x005435f0                      ; 005435a0
        ;   XREF to: 005435f0 (CONDITIONAL_JUMP)  ; LAB_005435f0
    MOV EDX,EAX                         ; 005435a2
    SHL EAX,0x3                         ; 005435a4
    ADD EAX,EDX                         ; 005435a7
    MOV EDX,EBX                         ; 005435a9
    SHL EBX,0x3                         ; 005435ab
    MOV EDI,0x1                         ; 005435ae
    ADD EBX,EDX                         ; 005435b3
    ADD EAX,EAX                         ; 005435b5
    ADD EBX,EBX                         ; 005435b7
    MOV EDX,dword ptr [ESI + 0x7c]      ; 005435b9
        ;   Label: LAB_005435b9
    XOR ECX,ECX                         ; 005435bc
    MOV CX,word ptr [EDX + EAX*0x1]     ; 005435be
    MOV dword ptr [ECX*0x4 + 0x20b1a54],EDI ; 005435c2
    XOR ECX,ECX                         ; 005435c9
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 005435cb
    MOV dword ptr [ECX*0x4 + 0x20b1a54],EDI ; 005435d0
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 005435d7
    AND EDX,0xffff                      ; 005435dc
    ADD EAX,0x12                        ; 005435e2
    MOV dword ptr [EDX*0x4 + 0x20b1a54],EDI ; 005435e5
    CMP EAX,EBX                         ; 005435ec
    JL 0x005435b9                       ; 005435ee
        ;   XREF to: 005435b9 (CONDITIONAL_JUMP)  ; LAB_005435b9
    MOV EAX,dword ptr [ESP + 0x24]      ; 005435f0
        ;   Label: LAB_005435f0
    CMP EAX,dword ptr [ESP + 0x4]       ; 005435f4
    JGE 0x00543660                      ; 005435f8
        ;   XREF to: 00543660 (CONDITIONAL_JUMP)  ; LAB_00543660
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005435fa
    MOV EBX,dword ptr [ESP + 0x58]      ; 005435fe
    MOV EDX,EAX                         ; 00543602
    SHL EAX,0x3                         ; 00543604
    SHL EDI,0x2                         ; 00543607
    ADD EAX,EDX                         ; 0054360a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054360c
    ADD EDI,EBX                         ; 00543610
    LEA EBX,[EDX*0x8 + 0x0]             ; 00543612
    MOV ESI,0x1                         ; 00543619
    ADD EBX,EDX                         ; 0054361e
    ADD EAX,EAX                         ; 00543620
    ADD EBX,EBX                         ; 00543622
    MOV EDX,dword ptr [EDI + 0x7c]      ; 00543624
        ;   Label: LAB_00543624
    XOR ECX,ECX                         ; 00543627
    MOV CX,word ptr [EDX + EAX*0x1]     ; 00543629
    MOV dword ptr [ECX*0x4 + 0x20b1a54],ESI ; 0054362d
    XOR ECX,ECX                         ; 00543634
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 00543636
    MOV dword ptr [ECX*0x4 + 0x20b1a54],ESI ; 0054363b
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 00543642
    AND EDX,0xffff                      ; 00543647
    ADD EAX,0x12                        ; 0054364d
    MOV dword ptr [EDX*0x4 + 0x20b1a54],ESI ; 00543650
    CMP EAX,EBX                         ; 00543657
    JL 0x00543624                       ; 00543659
        ;   XREF to: 00543624 (CONDITIONAL_JUMP)  ; LAB_00543624
    LEA EAX,[EAX]                       ; 0054365b
    MOV ECX,ECX                         ; 0054365e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00543660
        ;   Label: LAB_00543660
    MOV EAX,dword ptr [EBP + 0x2dc]     ; 00543664
    MOV EBX,dword ptr [EBP + 0x2d0]     ; 0054366a
    XOR EDX,EDX                         ; 00543670
    MOV dword ptr [ESP + 0x40],EAX      ; 00543672
    MOV ECX,EBX                         ; 00543676
    SHL EDI,0x2                         ; 00543678
    XOR EAX,EAX                         ; 0054367b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054367d
        ;   Label: LAB_0054367d
    CMP EAX,dword ptr [EDI + ESI*0x1 + 0x2c] ; 00543681
    JGE 0x005436c1                      ; 00543685
        ;   XREF to: 005436c1 (CONDITIONAL_JUMP)  ; LAB_005436c1
    CMP dword ptr [EDX + 0x20b1a54],0x0 ; 00543687
    JNZ 0x005436be                      ; 0054368e
        ;   XREF to: 005436be (CONDITIONAL_JUMP)  ; LAB_005436be
    INC EAX                             ; 00543690
        ;   Label: LAB_00543690
    ADD EDX,0x4                         ; 00543691
    JMP 0x0054367d                      ; 00543694
        ;   XREF to: 0054367d (UNCONDITIONAL_JUMP)  ; LAB_0054367d
    MOV EBX,0x5e707c                    ; 00543696 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00543696
    MOV ESI,0x64c                       ; 0054369b
    PUSH 0x5e7091                       ; 005436a0 | = "CDeformableModel::dismember - can't d..."
    MOV dword ptr [0x01d046a0],EBX      ; 005436a5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005436ab | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005436b1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005436b6
    JMP 0x005434ba                      ; 005436b9
        ;   XREF to: 005434ba (UNCONDITIONAL_JUMP)  ; LAB_005434ba
    INC ECX                             ; 005436be
        ;   Label: LAB_005436be
    JMP 0x00543690                      ; 005436bf
        ;   XREF to: 00543690 (UNCONDITIONAL_JUMP)  ; LAB_00543690
    MOV EDX,dword ptr [ESP + 0x64]      ; 005436c1
        ;   Label: LAB_005436c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005436c5
    SUB EAX,EDX                         ; 005436cc
    SHL EAX,0x5                         ; 005436ce
    ADD EAX,ESI                         ; 005436d1
    ADD EDI,EAX                         ; 005436d3
    MOV EAX,dword ptr [EBP + 0x2dc]     ; 005436d5
    MOV EDX,dword ptr [EDI + 0xc24]     ; 005436db
    MOV ESI,dword ptr [EDI + 0xc38]     ; 005436e1
    ADD EAX,EDX                         ; 005436e7
    ADD EAX,ESI                         ; 005436e9
    PUSH EAX                            ; 005436eb
    PUSH ECX                            ; 005436ec
    PUSH EBP                            ; 005436ed
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415890 ; 005436ee
        ;   XREF to: 00415890 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_00415890(CBodyPart * this_ptr, int vertex_count, int tri_count)
    ADD ESP,0xc                         ; 005436f3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005436f6
    MOV EDX,dword ptr [ESP + 0x58]      ; 005436fa
    SHL EAX,0x2                         ; 005436fe
    XOR EDI,EDI                         ; 00543701
    ADD EDX,EAX                         ; 00543703
    MOV dword ptr [ESP + 0x3c],EDI      ; 00543705
    MOV dword ptr [ESP + 0x10],EDX      ; 00543709
    LEA EDX,[EBX*0x4 + 0x0]             ; 0054370d
    MOV ESI,dword ptr [ESP + 0x10]      ; 00543714
    SUB EDX,EBX                         ; 00543718
    XOR EAX,EAX                         ; 0054371a
    LEA ECX,[EDX*0x4 + 0x0]             ; 0054371c
    MOV EDI,dword ptr [ESI + 0x2c]      ; 00543723
    MOV EDX,dword ptr [ESP + 0x68]      ; 00543726
    TEST EDI,EDI                        ; 0054372a
    JLE 0x0054376c                      ; 0054372c
        ;   XREF to: 0054376c (CONDITIONAL_JUMP)  ; LAB_0054376c
    CMP dword ptr [EAX + 0x20b1a54],0x0 ; 0054372e
        ;   Label: LAB_0054372e
    JZ 0x00543a01                       ; 00543735
        ;   XREF to: 00543a01 (CONDITIONAL_JUMP)  ; LAB_00543a01
    MOV dword ptr [EAX + 0x20b1a54],EBX ; 0054373b
    MOV EDI,dword ptr [EBP + 0x2d4]     ; 00543741
    MOV ESI,EDX                         ; 00543747
    ADD EDI,ECX                         ; 00543749
    INC EBX                             ; 0054374b
    ADD ECX,0xc                         ; 0054374c
    MOVSD ES:EDI,ESI                    ; 0054374f
    MOVSD ES:EDI,ESI                    ; 00543750
    MOVSD ES:EDI,ESI                    ; 00543751
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00543752
        ;   Label: LAB_00543752
    INC EDI                             ; 00543756
    MOV dword ptr [ESP + 0x3c],EDI      ; 00543757
    MOV ESI,EDI                         ; 0054375b
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054375d
    ADD EAX,0x4                         ; 00543761
    ADD EDX,0xc                         ; 00543764
    CMP ESI,dword ptr [EDI + 0x2c]      ; 00543767
    JL 0x0054372e                       ; 0054376a
        ;   XREF to: 0054372e (CONDITIONAL_JUMP)  ; LAB_0054372e
    CMP EBX,dword ptr [EBP + 0x2d0]     ; 0054376c
        ;   Label: LAB_0054376c
    JZ 0x00543797                       ; 00543772
        ;   XREF to: 00543797 (CONDITIONAL_JUMP)  ; LAB_00543797
    MOV EDX,0x5e7111                    ; 00543774 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x697                       ; 00543779
    PUSH 0x5e7126                       ; 0054377e | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01d046a0],EDX      ; 00543783 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00543789 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054378f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00543794
    MOV EAX,dword ptr [ESP + 0x28]      ; 00543797
        ;   Label: LAB_00543797
    MOV EBX,dword ptr [ESP]             ; 0054379b
    CMP EAX,EBX                         ; 0054379e
    JGE 0x005438c0                      ; 005437a0
        ;   XREF to: 005438c0 (CONDITIONAL_JUMP)  ; LAB_005438c0
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005437a6
    MOV EDX,dword ptr [ESP + 0x58]      ; 005437aa
    SHL EAX,0x2                         ; 005437ae
    ADD EDX,EAX                         ; 005437b1
    MOV dword ptr [ESP + 0x20],EDX      ; 005437b3
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005437b7
    LEA EAX,[EDX*0x8 + 0x0]             ; 005437bb
    ADD EDX,EAX                         ; 005437c2
    MOV EAX,dword ptr [ESP + 0x58]      ; 005437c4
    SHL EDX,0x6                         ; 005437c8
    ADD EAX,0xc0                        ; 005437cb
    ADD EAX,EDX                         ; 005437d0
    MOV EDX,dword ptr [ESP + 0x28]      ; 005437d2
    MOV dword ptr [ESP + 0x8],EAX       ; 005437d6
    LEA EAX,[EDX*0x8 + 0x0]             ; 005437da
    ADD EAX,EDX                         ; 005437e1
    ADD EAX,EAX                         ; 005437e3
    MOV dword ptr [ESP + 0x34],EAX      ; 005437e5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005437e9
    SHL EAX,0x2                         ; 005437ed
    MOV EDI,EAX                         ; 005437f0
    SHL EDI,0x4                         ; 005437f2
    SUB EDI,EAX                         ; 005437f5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005437f7
    SHL EAX,0x2                         ; 005437fb
    MOV dword ptr [ESP + 0x2c],EAX      ; 005437fe
    LEA EAX,[EBX*0x4 + 0x0]             ; 00543802
    LEA ESI,[EDX*0x4 + 0x0]             ; 00543809
    MOV dword ptr [ESP + 0x18],EAX      ; 00543810
    MOV EBX,dword ptr [ESP + 0x20]      ; 00543814
        ;   Label: LAB_00543814
    MOV EAX,dword ptr [ESP + 0x34]      ; 00543818
    MOV EDX,dword ptr [EBP + 0x2e0]     ; 0054381c
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00543822
    ADD EDX,EDI                         ; 00543825
    ADD EBX,EAX                         ; 00543827
    MOV dword ptr [EDX + 0x4],0x3       ; 00543829
    MOV EAX,EBX                         ; 00543830
    ADD EBX,0x6                         ; 00543832
    XOR ECX,ECX                         ; 00543835
        ;   Label: LAB_00543835
    MOV CX,word ptr [EAX]               ; 00543837
    MOV ECX,dword ptr [ECX*0x4 + 0x20b1a54] ; 0054383a
    MOV dword ptr [EDX + 0x18],ECX      ; 00543841
    XOR ECX,ECX                         ; 00543844
    MOV CX,word ptr [EAX + 0x6]         ; 00543846
    SHL ECX,0x8                         ; 0054384a
    MOV dword ptr [EDX + 0x1c],ECX      ; 0054384d
    XOR ECX,ECX                         ; 00543850
    MOV CX,word ptr [EAX + 0xc]         ; 00543852
    ADD EDX,0xc                         ; 00543856
    SHL ECX,0x8                         ; 00543859
    ADD EAX,0x2                         ; 0054385c
    MOV dword ptr [EDX + 0x14],ECX      ; 0054385f
    CMP EAX,EBX                         ; 00543862
    JNZ 0x00543835                      ; 00543864
        ;   XREF to: 00543835 (CONDITIONAL_JUMP)  ; LAB_00543835
    MOV EAX,dword ptr [ESP + 0x20]      ; 00543866
    MOV EAX,dword ptr [EAX + 0x90]      ; 0054386a
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 00543870
    ADD EAX,dword ptr [ESP + 0x8]       ; 00543874
    ADD EAX,0x8                         ; 00543878
    PUSH EAX                            ; 0054387b
    PUSH EBP                            ; 0054387c
    ADD EDI,0x3c                        ; 0054387d
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0 ; 00543880
        ;   XREF to: 004177e0 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 00543885
    MOV EDX,dword ptr [EBP + 0x2e4]     ; 00543888
    MOV ECX,dword ptr [ESP + 0x34]      ; 0054388e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00543892
    ADD ECX,0x12                        ; 00543896
    ADD EDX,EBX                         ; 00543899
    ADD ESI,0x4                         ; 0054389b
    MOV dword ptr [ESP + 0x34],ECX      ; 0054389e
    MOV dword ptr [EDX],EAX             ; 005438a2
    LEA EAX,[EBX + 0x4]                 ; 005438a4
    MOV EDX,dword ptr [ESP + 0x40]      ; 005438a7
    MOV EBX,dword ptr [ESP + 0x18]      ; 005438ab
    INC EDX                             ; 005438af
    MOV dword ptr [ESP + 0x2c],EAX      ; 005438b0
    MOV dword ptr [ESP + 0x40],EDX      ; 005438b4
    CMP ESI,EBX                         ; 005438b8
    JL 0x00543814                       ; 005438ba
        ;   XREF to: 00543814 (CONDITIONAL_JUMP)  ; LAB_00543814
    MOV EAX,dword ptr [ESP + 0x24]      ; 005438c0
        ;   Label: LAB_005438c0
    CMP EAX,dword ptr [ESP + 0x4]       ; 005438c4
    JGE 0x005439ed                      ; 005438c8
        ;   XREF to: 005439ed (CONDITIONAL_JUMP)  ; LAB_005439ed
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005438ce
    MOV EDX,dword ptr [ESP + 0x58]      ; 005438d2
    SHL EAX,0x2                         ; 005438d6
    ADD EDX,EAX                         ; 005438d9
    MOV dword ptr [ESP + 0x1c],EDX      ; 005438db
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005438df
    LEA EAX,[EDX*0x8 + 0x0]             ; 005438e3
    ADD EAX,EDX                         ; 005438ea
    MOV EDX,dword ptr [ESP + 0x58]      ; 005438ec
    SHL EAX,0x6                         ; 005438f0
    ADD EDX,0xc0                        ; 005438f3
    ADD EDX,EAX                         ; 005438f9
    MOV dword ptr [ESP + 0xc],EDX       ; 005438fb
    MOV EDX,dword ptr [ESP + 0x24]      ; 005438ff
    LEA EAX,[EDX*0x8 + 0x0]             ; 00543903
    ADD EAX,EDX                         ; 0054390a
    ADD EAX,EAX                         ; 0054390c
    MOV dword ptr [ESP + 0x30],EAX      ; 0054390e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00543912
    SHL EAX,0x2                         ; 00543916
    MOV EDX,EAX                         ; 00543919
    SHL EAX,0x4                         ; 0054391b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0054391e
    SUB EAX,EDX                         ; 00543922
    MOV ESI,dword ptr [ESP + 0x24]      ; 00543924
    MOV dword ptr [ESP + 0x38],EAX      ; 00543928
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054392c
    SHL EDI,0x2                         ; 00543930
    SHL EAX,0x2                         ; 00543933
    SHL ESI,0x2                         ; 00543936
    MOV dword ptr [ESP + 0x14],EAX      ; 00543939
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054393d
        ;   Label: LAB_0054393d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00543941
    MOV ECX,dword ptr [ESP + 0x30]      ; 00543945
    MOV EDX,dword ptr [EBP + 0x2e0]     ; 00543949
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0054394f
    ADD EDX,EAX                         ; 00543952
    ADD EBX,ECX                         ; 00543954
    MOV dword ptr [EDX + 0x4],0x3       ; 00543956
    MOV EAX,EBX                         ; 0054395d
    ADD EBX,0x6                         ; 0054395f
    XOR ECX,ECX                         ; 00543962
        ;   Label: LAB_00543962
    MOV CX,word ptr [EAX]               ; 00543964
    MOV ECX,dword ptr [ECX*0x4 + 0x20b1a54] ; 00543967
    MOV dword ptr [EDX + 0x18],ECX      ; 0054396e
    XOR ECX,ECX                         ; 00543971
    MOV CX,word ptr [EAX + 0x6]         ; 00543973
    SHL ECX,0x8                         ; 00543977
    MOV dword ptr [EDX + 0x1c],ECX      ; 0054397a
    XOR ECX,ECX                         ; 0054397d
    MOV CX,word ptr [EAX + 0xc]         ; 0054397f
    ADD EDX,0xc                         ; 00543983
    SHL ECX,0x8                         ; 00543986
    ADD EAX,0x2                         ; 00543989
    MOV dword ptr [EDX + 0x14],ECX      ; 0054398c
    CMP EAX,EBX                         ; 0054398f
    JNZ 0x00543962                      ; 00543991
        ;   XREF to: 00543962 (CONDITIONAL_JUMP)  ; LAB_00543962
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00543993
    MOV EAX,dword ptr [EAX + 0x90]      ; 00543997
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0054399d
    ADD EAX,dword ptr [ESP + 0xc]       ; 005439a1
    ADD EAX,0x8                         ; 005439a5
    PUSH EAX                            ; 005439a8
    PUSH EBP                            ; 005439a9
    ADD EDI,0x4                         ; 005439aa
    ADD ESI,0x4                         ; 005439ad
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0 ; 005439b0
        ;   XREF to: 004177e0 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 005439b5
    MOV EDX,dword ptr [EBP + 0x2e4]     ; 005439b8
    MOV EBX,dword ptr [ESP + 0x38]      ; 005439be
    MOV ECX,dword ptr [ESP + 0x14]      ; 005439c2
    MOV dword ptr [EDX + EDI*0x1 + -0x4],EAX ; 005439c6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005439ca
    ADD EBX,0x3c                        ; 005439ce
    MOV EDX,dword ptr [ESP + 0x30]      ; 005439d1
    MOV dword ptr [ESP + 0x38],EBX      ; 005439d5
    INC EAX                             ; 005439d9
    ADD EDX,0x12                        ; 005439da
    MOV dword ptr [ESP + 0x40],EAX      ; 005439dd
    MOV dword ptr [ESP + 0x30],EDX      ; 005439e1
    CMP ESI,ECX                         ; 005439e5
    JL 0x0054393d                       ; 005439e7
        ;   XREF to: 0054393d (CONDITIONAL_JUMP)  ; LAB_0054393d
    MOV EAX,dword ptr [ESP + 0x40]      ; 005439ed
        ;   Label: LAB_005439ed
    CMP EAX,dword ptr [EBP + 0x2dc]     ; 005439f1
    JNZ 0x00543a10                      ; 005439f7
        ;   XREF to: 00543a10 (CONDITIONAL_JUMP)  ; LAB_00543a10
    ADD ESP,0x44                        ; 005439f9
        ;   Label: LAB_005439f9
    POP EBP                             ; 005439fc
    POP EDI                             ; 005439fd
    POP ESI                             ; 005439fe
    POP EBX                             ; 005439ff
    RET                                 ; 00543a00
    MOV dword ptr [EAX + 0x20b1a54],0xffffffff ; 00543a01
        ;   Label: LAB_00543a01
    JMP 0x00543752                      ; 00543a0b
        ;   XREF to: 00543752 (UNCONDITIONAL_JUMP)  ; LAB_00543752
    MOV ESI,0x5e7152                    ; 00543a10 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00543a10
    MOV EDI,0x6ce                       ; 00543a15
    PUSH 0x5e7167                       ; 00543a1a | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01d046a0],ESI      ; 00543a1f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00543a25 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00543a2b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00543a30
    ADD ESP,0x44                        ; 00543a33
    POP EBP                             ; 00543a36
    POP EDI                             ; 00543a37
    POP ESI                             ; 00543a38
    POP EBX                             ; 00543a39
    RET                                 ; 00543a3a

