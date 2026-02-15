; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_ground.cpp_CGround_render_FUN_004efc90 at 004efcd7
;
; Referenced Globals:
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   undefined4 g_InverseMatrix[1][0]
;   undefined4 g_InverseMatrix[1][1]
;   undefined4 g_InverseMatrix[1][2]
;   undefined4 g_InverseMatrix[2][0]
;   undefined4 g_InverseMatrix[2][1]
;   undefined4 g_InverseMatrix[2][2]
;
; Called Functions:
;   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef490
        ;   Label: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
    PUSH ESI                            ; 004ef491
    PUSH EDI                            ; 004ef492
    PUSH EBP                            ; 004ef493
    SUB ESP,0x5c                        ; 004ef494
    MOV ESI,dword ptr [ESP + 0x70]      ; 004ef497
    MOV EAX,dword ptr [ESI + 0x14]      ; 004ef49b
    IMUL EAX,dword ptr [ESI + 0x1c]     ; 004ef49e
    SHL EAX,0x8                         ; 004ef4a2
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ef4a5
    MOV dword ptr [ESP + 0x40],EAX      ; 004ef4a9
    MOV dword ptr [ESP + 0x44],EAX      ; 004ef4ad
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef4b1
    MOV EAX,[0x02f0d364]                ; 004ef4b5 | g_InverseMatrix
    IMUL EDX                            ; 004ef4ba
    SHRD EAX,EDX,0x10                   ; 004ef4bc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef4c0
    MOV ECX,EAX                         ; 004ef4c4
    MOV EAX,[0x02f0d370]                ; 004ef4c6 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 004ef4cb
    SHRD EAX,EDX,0x10                   ; 004ef4cd
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef4d1
    ADD ECX,EAX                         ; 004ef4d5
    MOV EAX,[0x02f0d37c]                ; 004ef4d7 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 004ef4dc
    SHRD EAX,EDX,0x10                   ; 004ef4de
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef4e2
    ADD ECX,EAX                         ; 004ef4e6
    MOV EAX,[0x02f0d368]                ; 004ef4e8 | g_InverseMatrix[0][1]
    MOV dword ptr [ESP],ECX             ; 004ef4ed
    IMUL EDX                            ; 004ef4f0
    SHRD EAX,EDX,0x10                   ; 004ef4f2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef4f6
    MOV ECX,EAX                         ; 004ef4fa
    MOV EAX,[0x02f0d374]                ; 004ef4fc | g_InverseMatrix[1][1]
    IMUL EDX                            ; 004ef501
    SHRD EAX,EDX,0x10                   ; 004ef503
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef507
    ADD ECX,EAX                         ; 004ef50b
    MOV EAX,[0x02f0d380]                ; 004ef50d | g_InverseMatrix[2][1]
    IMUL EDX                            ; 004ef512
    SHRD EAX,EDX,0x10                   ; 004ef514
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef518
    ADD ECX,EAX                         ; 004ef51c
    MOV EAX,[0x02f0d36c]                ; 004ef51e | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x4],ECX       ; 004ef523
    IMUL EDX                            ; 004ef527
    SHRD EAX,EDX,0x10                   ; 004ef529
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef52d
    MOV ECX,EAX                         ; 004ef531
    MOV EAX,[0x02f0d378]                ; 004ef533 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 004ef538
    SHRD EAX,EDX,0x10                   ; 004ef53a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef53e
    ADD ECX,EAX                         ; 004ef542
    MOV EAX,[0x02f0d384]                ; 004ef544 | g_InverseMatrix[2][2]
    IMUL EDX                            ; 004ef549
    SHRD EAX,EDX,0x10                   ; 004ef54b
    ADD ECX,EAX                         ; 004ef54f
    MOV dword ptr [ESP + 0x8],ECX       ; 004ef551
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004ef555
    NEG ECX                             ; 004ef559
    MOV EAX,[0x02f0d364]                ; 004ef55b | g_InverseMatrix
    MOV EDX,ECX                         ; 004ef560
    MOV dword ptr [ESP + 0x3c],ECX      ; 004ef562
    IMUL EDX                            ; 004ef566
    SHRD EAX,EDX,0x10                   ; 004ef568
    MOV EDX,dword ptr [ESP + 0x40]      ; 004ef56c
    MOV ECX,EAX                         ; 004ef570
    MOV EAX,[0x02f0d370]                ; 004ef572 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 004ef577
    SHRD EAX,EDX,0x10                   ; 004ef579
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef57d
    ADD ECX,EAX                         ; 004ef581
    MOV EAX,[0x02f0d37c]                ; 004ef583 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 004ef588
    SHRD EAX,EDX,0x10                   ; 004ef58a
    ADD ECX,EAX                         ; 004ef58e
    MOV dword ptr [ESP + 0xc],ECX       ; 004ef590
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef594
    MOV EAX,[0x02f0d368]                ; 004ef598 | g_InverseMatrix[0][1]
    IMUL EDX                            ; 004ef59d
    SHRD EAX,EDX,0x10                   ; 004ef59f
    MOV EDX,dword ptr [ESP + 0x40]      ; 004ef5a3
    MOV ECX,EAX                         ; 004ef5a7
    MOV EAX,[0x02f0d374]                ; 004ef5a9 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 004ef5ae
    SHRD EAX,EDX,0x10                   ; 004ef5b0
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef5b4
    ADD ECX,EAX                         ; 004ef5b8
    MOV EAX,[0x02f0d380]                ; 004ef5ba | g_InverseMatrix[2][1]
    IMUL EDX                            ; 004ef5bf
    SHRD EAX,EDX,0x10                   ; 004ef5c1
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef5c5
    ADD ECX,EAX                         ; 004ef5c9
    MOV EAX,[0x02f0d36c]                ; 004ef5cb | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x10],ECX      ; 004ef5d0
    IMUL EDX                            ; 004ef5d4
    SHRD EAX,EDX,0x10                   ; 004ef5d6
    MOV EDX,dword ptr [ESP + 0x40]      ; 004ef5da
    MOV ECX,EAX                         ; 004ef5de
    MOV EAX,[0x02f0d378]                ; 004ef5e0 | g_InverseMatrix[1][2]
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ef5e5
    IMUL EDX                            ; 004ef5e9
    SHRD EAX,EDX,0x10                   ; 004ef5eb
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef5ef
    ADD ECX,EAX                         ; 004ef5f3
    MOV EAX,[0x02f0d384]                ; 004ef5f5 | g_InverseMatrix[2][2]
    NEG EBX                             ; 004ef5fa
    IMUL EDX                            ; 004ef5fc
    SHRD EAX,EDX,0x10                   ; 004ef5fe
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef602
    ADD ECX,EAX                         ; 004ef606
    MOV EAX,[0x02f0d364]                ; 004ef608 | g_InverseMatrix
    MOV dword ptr [ESP + 0x14],ECX      ; 004ef60d
    IMUL EDX                            ; 004ef611
    SHRD EAX,EDX,0x10                   ; 004ef613
    MOV ECX,EAX                         ; 004ef617
    MOV EDX,EBX                         ; 004ef619
    MOV EAX,[0x02f0d370]                ; 004ef61b | g_InverseMatrix[1][0]
    IMUL EDX                            ; 004ef620
    SHRD EAX,EDX,0x10                   ; 004ef622
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef626
    ADD ECX,EAX                         ; 004ef62a
    MOV EAX,[0x02f0d37c]                ; 004ef62c | g_InverseMatrix[2][0]
    IMUL EDX                            ; 004ef631
    SHRD EAX,EDX,0x10                   ; 004ef633
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef637
    ADD ECX,EAX                         ; 004ef63b
    MOV EAX,[0x02f0d368]                ; 004ef63d | g_InverseMatrix[0][1]
    MOV dword ptr [ESP + 0x18],ECX      ; 004ef642
    IMUL EDX                            ; 004ef646
    SHRD EAX,EDX,0x10                   ; 004ef648
    MOV ECX,EAX                         ; 004ef64c
    MOV EDX,EBX                         ; 004ef64e
    MOV EAX,[0x02f0d374]                ; 004ef650 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 004ef655
    SHRD EAX,EDX,0x10                   ; 004ef657
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef65b
    ADD ECX,EAX                         ; 004ef65f
    MOV EAX,[0x02f0d380]                ; 004ef661 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 004ef666
    SHRD EAX,EDX,0x10                   ; 004ef668
    ADD ECX,EAX                         ; 004ef66c
    MOV dword ptr [ESP + 0x40],EBX      ; 004ef66e
    MOV dword ptr [ESP + 0x1c],ECX      ; 004ef672
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ef676
    MOV EAX,[0x02f0d36c]                ; 004ef67a | g_InverseMatrix[0][2]
    IMUL EDX                            ; 004ef67f
    SHRD EAX,EDX,0x10                   ; 004ef681
    MOV ECX,EAX                         ; 004ef685
    MOV EDX,EBX                         ; 004ef687
    MOV EAX,[0x02f0d378]                ; 004ef689 | g_InverseMatrix[1][2]
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004ef68e
    IMUL EDX                            ; 004ef692
    SHRD EAX,EDX,0x10                   ; 004ef694
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef698
    ADD ECX,EAX                         ; 004ef69c
    MOV EAX,[0x02f0d384]                ; 004ef69e | g_InverseMatrix[2][2]
    NEG EDI                             ; 004ef6a3
    IMUL EDX                            ; 004ef6a5
    SHRD EAX,EDX,0x10                   ; 004ef6a7
    MOV EDX,EDI                         ; 004ef6ab
    ADD ECX,EAX                         ; 004ef6ad
    MOV EAX,[0x02f0d364]                ; 004ef6af | g_InverseMatrix
    MOV dword ptr [ESP + 0x20],ECX      ; 004ef6b4
    IMUL EDX                            ; 004ef6b8
    SHRD EAX,EDX,0x10                   ; 004ef6ba
    MOV ECX,EAX                         ; 004ef6be
    MOV EDX,EBX                         ; 004ef6c0
    MOV EAX,[0x02f0d370]                ; 004ef6c2 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 004ef6c7
    SHRD EAX,EDX,0x10                   ; 004ef6c9
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef6cd
    ADD ECX,EAX                         ; 004ef6d1
    MOV EAX,[0x02f0d37c]                ; 004ef6d3 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 004ef6d8
    SHRD EAX,EDX,0x10                   ; 004ef6da
    MOV EDX,EDI                         ; 004ef6de
    ADD ECX,EAX                         ; 004ef6e0
    MOV EAX,[0x02f0d368]                ; 004ef6e2 | g_InverseMatrix[0][1]
    MOV dword ptr [ESP + 0x24],ECX      ; 004ef6e7
    IMUL EDX                            ; 004ef6eb
    SHRD EAX,EDX,0x10                   ; 004ef6ed
    MOV ECX,EAX                         ; 004ef6f1
    MOV EDX,EBX                         ; 004ef6f3
    MOV EAX,[0x02f0d374]                ; 004ef6f5 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 004ef6fa
    SHRD EAX,EDX,0x10                   ; 004ef6fc
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef700
    ADD ECX,EAX                         ; 004ef704
    MOV EAX,[0x02f0d380]                ; 004ef706 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 004ef70b
    SHRD EAX,EDX,0x10                   ; 004ef70d
    MOV EDX,EDI                         ; 004ef711
    ADD ECX,EAX                         ; 004ef713
    MOV EAX,[0x02f0d36c]                ; 004ef715 | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x28],ECX      ; 004ef71a
    IMUL EDX                            ; 004ef71e
    SHRD EAX,EDX,0x10                   ; 004ef720
    MOV ECX,EAX                         ; 004ef724
    MOV EDX,EBX                         ; 004ef726
    MOV EAX,[0x02f0d378]                ; 004ef728 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 004ef72d
    SHRD EAX,EDX,0x10                   ; 004ef72f
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ef733
    ADD ECX,EAX                         ; 004ef737
    MOV EAX,[0x02f0d384]                ; 004ef739 | g_InverseMatrix[2][2]
    IMUL EDX                            ; 004ef73e
    SHRD EAX,EDX,0x10                   ; 004ef740
    ADD ECX,EAX                         ; 004ef744
    MOV dword ptr [ESP + 0x3c],EDI      ; 004ef746
    MOV dword ptr [ESP + 0x2c],ECX      ; 004ef74a
    MOV ECX,0x3e7                       ; 004ef74e
    XOR EBP,EBP                         ; 004ef753
    MOV EBX,0x3e7                       ; 004ef755
    MOV dword ptr [ESP + 0x34],EBP      ; 004ef75a
    MOV dword ptr [ESP + 0x38],EBP      ; 004ef75e
    MOV dword ptr [ESP + 0x58],ECX      ; 004ef762
    MOV dword ptr [ESP + 0x30],EBP      ; 004ef766
    MOV dword ptr [ESP + 0x54],EBX      ; 004ef76a
    MOV ECX,0xfffffc19                  ; 004ef76e
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004ef773
    XOR EBX,EBX                         ; 004ef776
    SHL EAX,0x8                         ; 004ef778
    MOV EBP,ECX                         ; 004ef77b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ef77d
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 004ef781
        ;   Label: LAB_004ef781
    MOV EDX,EAX                         ; 004ef784
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004ef786
    SAR EDX,0x1f                        ; 004ef78a
    IDIV EDI                            ; 004ef78d
    MOV EDI,EAX                         ; 004ef78f
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004ef791
    MOV EDX,EAX                         ; 004ef795
    SAR EDX,0x1f                        ; 004ef797
    IDIV dword ptr [ESP + 0x4c]         ; 004ef79a
    CMP EDI,dword ptr [ESP + 0x58]      ; 004ef79e
    JL 0x004ef875                       ; 004ef7a2
        ;   XREF to: 004ef875 (CONDITIONAL_JUMP)  ; LAB_004ef875
    CMP EAX,dword ptr [ESP + 0x54]      ; 004ef7a8
        ;   Label: LAB_004ef7a8
    JGE 0x004ef7b2                      ; 004ef7ac
        ;   XREF to: 004ef7b2 (CONDITIONAL_JUMP)  ; LAB_004ef7b2
    MOV dword ptr [ESP + 0x54],EAX      ; 004ef7ae
    CMP EDI,ECX                         ; 004ef7b2
        ;   Label: LAB_004ef7b2
    JLE 0x004ef7b8                      ; 004ef7b4
        ;   XREF to: 004ef7b8 (CONDITIONAL_JUMP)  ; LAB_004ef7b8
    MOV ECX,EDI                         ; 004ef7b6
    CMP EAX,EBP                         ; 004ef7b8
        ;   Label: LAB_004ef7b8
    JLE 0x004ef7be                      ; 004ef7ba
        ;   XREF to: 004ef7be (CONDITIONAL_JUMP)  ; LAB_004ef7be
    MOV EBP,EAX                         ; 004ef7bc
    ADD EBX,0xc                         ; 004ef7be
        ;   Label: LAB_004ef7be
    CMP EBX,0x3c                        ; 004ef7c1
    JNZ 0x004ef781                      ; 004ef7c4
        ;   XREF to: 004ef781 (CONDITIONAL_JUMP)  ; LAB_004ef781
    MOV EDI,dword ptr [ESP + 0x54]      ; 004ef7c6
    MOV EBX,dword ptr [ESP + 0x58]      ; 004ef7ca
    ADD ECX,0x2                         ; 004ef7ce
    ADD EBP,0x2                         ; 004ef7d1
    MOV EAX,dword ptr [ESI + 0x10]      ; 004ef7d4
    SUB EDI,0x2                         ; 004ef7d7
    SUB EBX,0x2                         ; 004ef7da
    MOV dword ptr [ESI + 0x40],ECX      ; 004ef7dd
    MOV dword ptr [ESP + 0x50],EAX      ; 004ef7e0
    MOV dword ptr [ESI + 0x48],EBP      ; 004ef7e4
    MOV dword ptr [ESP + 0x54],EDI      ; 004ef7e7
    MOV EBP,EAX                         ; 004ef7eb
    MOV dword ptr [ESI + 0x3c],EBX      ; 004ef7ed
    MOV dword ptr [ESP + 0x58],EBX      ; 004ef7f0
    MOV dword ptr [ESI + 0x44],EDI      ; 004ef7f4
    NEG EBP                             ; 004ef7f7
    MOV EAX,dword ptr [ESI + 0x3c]      ; 004ef7f9
    MOV dword ptr [ESP + 0x50],EBP      ; 004ef7fc
    CMP EAX,EBP                         ; 004ef800
    JLE 0x004ef808                      ; 004ef802
        ;   XREF to: 004ef808 (CONDITIONAL_JUMP)  ; LAB_004ef808
    MOV dword ptr [ESP + 0x50],EAX      ; 004ef804
    MOV ECX,dword ptr [ESI + 0x40]      ; 004ef808
        ;   Label: LAB_004ef808
    MOV EBP,dword ptr [ESI + 0x10]      ; 004ef80b
    CMP EBP,ECX                         ; 004ef80e
    JLE 0x004ef814                      ; 004ef810
        ;   XREF to: 004ef814 (CONDITIONAL_JUMP)  ; LAB_004ef814
    MOV EBP,ECX                         ; 004ef812
    MOV EAX,dword ptr [ESI + 0x14]      ; 004ef814
        ;   Label: LAB_004ef814
    MOV EBX,dword ptr [ESI + 0x44]      ; 004ef817
    NEG EAX                             ; 004ef81a
    CMP EAX,EBX                         ; 004ef81c
    JGE 0x004ef822                      ; 004ef81e
        ;   XREF to: 004ef822 (CONDITIONAL_JUMP)  ; LAB_004ef822
    MOV EAX,EBX                         ; 004ef820
    MOV ECX,dword ptr [ESI + 0x14]      ; 004ef822
        ;   Label: LAB_004ef822
    MOV dword ptr [ESP + 0x48],ECX      ; 004ef825
    MOV EDI,dword ptr [ESP + 0x48]      ; 004ef829
    MOV ECX,dword ptr [ESI + 0x48]      ; 004ef82d
    CMP ECX,EDI                         ; 004ef830
    JGE 0x004ef838                      ; 004ef832
        ;   XREF to: 004ef838 (CONDITIONAL_JUMP)  ; LAB_004ef838
    MOV dword ptr [ESP + 0x48],ECX      ; 004ef834
    MOV EDX,dword ptr [ESP + 0x48]      ; 004ef838
        ;   Label: LAB_004ef838
    MOV EDI,EAX                         ; 004ef83c
    CMP EAX,EDX                         ; 004ef83e
    JG 0x004ef86d                       ; 004ef840
        ;   XREF to: 004ef86d (CONDITIONAL_JUMP)  ; LAB_004ef86d
    MOV EBX,dword ptr [ESP + 0x50]      ; 004ef842
        ;   Label: LAB_004ef842
    CMP EBP,EBX                         ; 004ef846
    JL 0x004ef864                       ; 004ef848
        ;   XREF to: 004ef864 (CONDITIONAL_JUMP)  ; LAB_004ef864
    MOV EAX,dword ptr [ESI + 0x30]      ; 004ef84a
        ;   Label: LAB_004ef84a
    ADD EAX,EDI                         ; 004ef84d
    PUSH EAX                            ; 004ef84f
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004ef850
    ADD EAX,EBX                         ; 004ef853
    PUSH EAX                            ; 004ef855
    PUSH ESI                            ; 004ef856
    INC EBX                             ; 004ef857
    CALL core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0 ; 004ef858
        ;   XREF to: 004ef3a0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround * this_ptr, int column, int row)
    ADD ESP,0xc                         ; 004ef85d
    CMP EBX,EBP                         ; 004ef860
    JLE 0x004ef84a                      ; 004ef862
        ;   XREF to: 004ef84a (CONDITIONAL_JUMP)  ; LAB_004ef84a
    MOV ECX,dword ptr [ESP + 0x48]      ; 004ef864
        ;   Label: LAB_004ef864
    INC EDI                             ; 004ef868
    CMP EDI,ECX                         ; 004ef869
    JLE 0x004ef842                      ; 004ef86b
        ;   XREF to: 004ef842 (CONDITIONAL_JUMP)  ; LAB_004ef842
    ADD ESP,0x5c                        ; 004ef86d
        ;   Label: LAB_004ef86d
    POP EBP                             ; 004ef870
    POP EDI                             ; 004ef871
    POP ESI                             ; 004ef872
    POP EBX                             ; 004ef873
    RET                                 ; 004ef874
    MOV dword ptr [ESP + 0x58],EDI      ; 004ef875
        ;   Label: LAB_004ef875
    JMP 0x004ef7a8                      ; 004ef879
        ;   XREF to: 004ef7a8 (UNCONDITIONAL_JUMP)  ; LAB_004ef7a8

