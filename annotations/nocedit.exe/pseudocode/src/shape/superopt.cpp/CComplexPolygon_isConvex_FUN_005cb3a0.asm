; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; SExpandedEdge *  Stack[0x8]:4   edges
; int              Stack[0xc]:4   edge_count
; Local Variables:
; int              Stack[-0x180]:4  local_180
; double           Stack[-0x170]:8  local_170
; double           Stack[-0x168]:8  local_168
; double           Stack[-0x160]:8  local_160
; int              Stack[-0x148]:4  local_148
; CVector3d        Stack[-0x140]:24  local_140
; CVector2d        Stack[-0x128]:16  local_128
; CVector2d        Stack[-0x118]:16  local_118
; CVector2d        Stack[-0x108]:16  local_108
; CVector2d        Stack[-0xf8]:16  local_f8
; double           Stack[-0x40]:8  local_40
; SExpandedEdge *  Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[2]:
;   shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50 at 005c8d67
;   shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0 at 005c92b4
;
; Called Functions:
;   shape_superopt.cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40
;   shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb3a0
        ;   Label: shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
    PUSH ESI                            ; 005cb3a1
    PUSH EDI                            ; 005cb3a2
    PUSH EBP                            ; 005cb3a3
    MOV EBP,ESP                         ; 005cb3a4
    SUB ESP,0x16c                       ; 005cb3a6
    AND ESP,0xfffffff8                  ; 005cb3ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 005cb3af
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005cb3b2
    PUSH EDX                            ; 005cb3b5
    MOV ECX,dword ptr [EBP + 0x18]      ; 005cb3b6
    PUSH ECX                            ; 005cb3b9
    LEA EAX,[ESP + 0x48]                ; 005cb3ba
    PUSH EAX                            ; 005cb3be
    PUSH EBX                            ; 005cb3bf
    CALL shape_superopt.cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40 ; 005cb3c0
        ;   XREF to: 005cbb40 (UNCONDITIONAL_CALL)  ; CVector3d * shape_superopt.cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40(CComplexPolygon * this_ptr, CVector3d * output_normal, SExpandedEdge * edges, int edge_count)
    ADD ESP,0x10                        ; 005cb3c5
    LEA EAX,[EBX + 0x14]                ; 005cb3c8
    FLD double ptr [ESP + 0x48]         ; 005cb3cb
    FMUL double ptr [EAX + 0x8]         ; 005cb3cf
    FLD double ptr [ESP + 0x40]         ; 005cb3d2
    FMUL double ptr [EAX]               ; 005cb3d6
    FADDP                               ; 005cb3d8
    FLD double ptr [ESP + 0x50]         ; 005cb3da
    FMUL double ptr [EAX + 0x10]        ; 005cb3de
    FADDP                               ; 005cb3e1
    FLDZ                                ; 005cb3e3
    FCOMPP                              ; 005cb3e5
    FNSTSW AX                           ; 005cb3e7
    SAHF                                ; 005cb3e9
    JA 0x005cb62c                       ; 005cb3ea
        ;   XREF to: 005cb62c (CONDITIONAL_JUMP)  ; LAB_005cb62c
    FLDZ                                ; 005cb3f0
    FCOMP double ptr [EBX + 0x14]       ; 005cb3f2
    FNSTSW AX                           ; 005cb3f5
    SAHF                                ; 005cb3f7
    JBE 0x005cb635                      ; 005cb3f8
        ;   XREF to: 005cb635 (CONDITIONAL_JUMP)  ; LAB_005cb635
    FLD double ptr [EBX + 0x14]         ; 005cb3fe
    FCHS                                ; 005cb401
    FSTP double ptr [ESP + 0x20]        ; 005cb403
    MOV EAX,dword ptr [ESP + 0x20]      ; 005cb407
        ;   Label: LAB_005cb407
    MOV dword ptr [ESP + 0x28],EAX      ; 005cb40b
    MOV EAX,dword ptr [ESP + 0x24]      ; 005cb40f
    FLDZ                                ; 005cb413
    MOV dword ptr [ESP + 0x2c],EAX      ; 005cb415
    FCOMP double ptr [EBX + 0x1c]       ; 005cb419
    FNSTSW AX                           ; 005cb41c
    SAHF                                ; 005cb41e
    JA 0x005cb648                       ; 005cb41f
        ;   XREF to: 005cb648 (CONDITIONAL_JUMP)  ; LAB_005cb648
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005cb425
    MOV dword ptr [ESP + 0x10],EAX      ; 005cb428
    MOV EAX,dword ptr [EBX + 0x20]      ; 005cb42c
    MOV dword ptr [ESP + 0x14],EAX      ; 005cb42f
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cb433
        ;   Label: LAB_005cb433
    MOV dword ptr [ESP + 0x30],EAX      ; 005cb437
    MOV EAX,dword ptr [ESP + 0x14]      ; 005cb43b
    FLDZ                                ; 005cb43f
    MOV dword ptr [ESP + 0x34],EAX      ; 005cb441
    FCOMP double ptr [EBX + 0x24]       ; 005cb445
    FNSTSW AX                           ; 005cb448
    SAHF                                ; 005cb44a
    JA 0x005cb656                       ; 005cb44b
        ;   XREF to: 005cb656 (CONDITIONAL_JUMP)  ; LAB_005cb656
    MOV EAX,dword ptr [EBX + 0x24]      ; 005cb451
    MOV dword ptr [ESP + 0x18],EAX      ; 005cb454
    MOV EAX,dword ptr [EBX + 0x28]      ; 005cb458
    MOV dword ptr [ESP + 0x1c],EAX      ; 005cb45b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005cb45f
        ;   Label: LAB_005cb45f
    MOV dword ptr [ESP + 0x8],EAX       ; 005cb463
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005cb467
    FLD double ptr [ESP + 0x28]         ; 005cb46b
    MOV dword ptr [ESP + 0xc],EAX       ; 005cb46f
    FCOMP double ptr [ESP + 0x30]       ; 005cb473
    FNSTSW AX                           ; 005cb477
    SAHF                                ; 005cb479
    JC 0x005cb664                       ; 005cb47a
        ;   XREF to: 005cb664 (CONDITIONAL_JUMP)  ; LAB_005cb664
    FLD double ptr [ESP + 0x28]         ; 005cb480
    FCOMP double ptr [ESP + 0x18]       ; 005cb484
    FNSTSW AX                           ; 005cb488
    SAHF                                ; 005cb48a
    JC 0x005cb664                       ; 005cb48b
        ;   XREF to: 005cb664 (CONDITIONAL_JUMP)  ; LAB_005cb664
    MOV EAX,0x1                         ; 005cb491
    FLD double ptr [ESP + 0x30]         ; 005cb496
        ;   Label: LAB_005cb496
    MOV dword ptr [ESP + 0x164],EAX     ; 005cb49a
    FCOMP double ptr [ESP + 0x28]       ; 005cb4a1
    FNSTSW AX                           ; 005cb4a5
    SAHF                                ; 005cb4a7
    JC 0x005cb66b                       ; 005cb4a8
        ;   XREF to: 005cb66b (CONDITIONAL_JUMP)  ; LAB_005cb66b
    FLD double ptr [ESP + 0x30]         ; 005cb4ae
    FCOMP double ptr [ESP + 0x8]        ; 005cb4b2
    FNSTSW AX                           ; 005cb4b6
    SAHF                                ; 005cb4b8
    JC 0x005cb66b                       ; 005cb4b9
        ;   XREF to: 005cb66b (CONDITIONAL_JUMP)  ; LAB_005cb66b
    MOV EAX,0x1                         ; 005cb4bf
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005cb4c4
        ;   Label: LAB_005cb4c4
    MOV dword ptr [ESP + 0x168],EAX     ; 005cb4c7
    XOR EDI,EDI                         ; 005cb4ce
    TEST EBX,EBX                        ; 005cb4d0
    JBE 0x005cb620                      ; 005cb4d2
        ;   XREF to: 005cb620 (CONDITIONAL_JUMP)  ; LAB_005cb620
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cb4d8
    MOV dword ptr [ESP + 0x160],EAX     ; 005cb4db
    CMP dword ptr [ESP + 0x164],0x0     ; 005cb4e2
        ;   Label: LAB_005cb4e2
    JNZ 0x005cb672                      ; 005cb4ea
        ;   XREF to: 005cb672 (CONDITIONAL_JUMP)  ; LAB_005cb672
    CMP dword ptr [ESP + 0x168],0x0     ; 005cb4f0
    JZ 0x005cb756                       ; 005cb4f8
        ;   XREF to: 005cb756 (CONDITIONAL_JUMP)  ; LAB_005cb756
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb4fe
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cb505
    MOV dword ptr [ESP + 0xc0],EAX      ; 005cb508
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb50f
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cb516
    MOV dword ptr [ESP + 0xc4],EAX      ; 005cb519
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb520
    MOV EAX,dword ptr [EAX + 0x20]      ; 005cb527
    MOV dword ptr [ESP + 0x148],EAX     ; 005cb52a
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb531
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb538
    MOV dword ptr [ESP + 0x14c],EAX     ; 005cb53b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005cb542
    MOV dword ptr [ESP + 0x58],EAX      ; 005cb549
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005cb54d
    MOV dword ptr [ESP + 0x5c],EAX      ; 005cb554
    MOV EAX,dword ptr [ESP + 0x148]     ; 005cb558
    MOV dword ptr [ESP + 0x60],EAX      ; 005cb55f
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005cb563
    MOV dword ptr [ESP + 0x64],EAX      ; 005cb56a
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb56e
    MOV EAX,dword ptr [EAX + 0x28]      ; 005cb575
    MOV dword ptr [ESP + 0x150],EAX     ; 005cb578
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb57f
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005cb586
    MOV dword ptr [ESP + 0x154],EAX     ; 005cb589
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb590
    MOV EAX,dword ptr [EAX + 0x38]      ; 005cb597
    MOV dword ptr [ESP + 0x158],EAX     ; 005cb59a
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb5a1
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005cb5a8
    MOV dword ptr [ESP + 0x15c],EAX     ; 005cb5ab
    MOV EAX,dword ptr [ESP + 0x150]     ; 005cb5b2
    MOV dword ptr [ESP + 0x78],EAX      ; 005cb5b9
    MOV EAX,dword ptr [ESP + 0x154]     ; 005cb5bd
    MOV dword ptr [ESP + 0x7c],EAX      ; 005cb5c4
    MOV EAX,dword ptr [ESP + 0x158]     ; 005cb5c8
    MOV dword ptr [ESP + 0x80],EAX      ; 005cb5cf
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005cb5d6
    MOV dword ptr [ESP + 0x84],EAX      ; 005cb5dd
        ;   Label: LAB_005cb5dd
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005cb5e4
    XOR ESI,ESI                         ; 005cb5e7
    TEST EBX,EBX                        ; 005cb5e9
    JBE 0x005cb603                      ; 005cb5eb
        ;   XREF to: 005cb603 (CONDITIONAL_JUMP)  ; LAB_005cb603
    MOV EBX,dword ptr [EBP + 0x18]      ; 005cb5ed
    CMP ESI,EDI                         ; 005cb5f0
        ;   Label: LAB_005cb5f0
    JNZ 0x005cb83a                      ; 005cb5f2
        ;   XREF to: 005cb83a (CONDITIONAL_JUMP)  ; LAB_005cb83a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005cb5f8
        ;   Label: LAB_005cb5f8
    INC ESI                             ; 005cb5fb
    ADD EBX,0x60                        ; 005cb5fc
    CMP ESI,EAX                         ; 005cb5ff
    JC 0x005cb5f0                       ; 005cb601
        ;   XREF to: 005cb5f0 (CONDITIONAL_JUMP)  ; LAB_005cb5f0
    MOV ESI,dword ptr [ESP + 0x160]     ; 005cb603
        ;   Label: LAB_005cb603
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005cb60a
    ADD ESI,0x60                        ; 005cb60d
    INC EDI                             ; 005cb610
    MOV dword ptr [ESP + 0x160],ESI     ; 005cb611
    CMP EDI,EAX                         ; 005cb618
    JC 0x005cb4e2                       ; 005cb61a
        ;   XREF to: 005cb4e2 (CONDITIONAL_JUMP)  ; LAB_005cb4e2
    MOV EAX,0x1                         ; 005cb620
        ;   Label: LAB_005cb620
    MOV ESP,EBP                         ; 005cb625
    POP EBP                             ; 005cb627
    POP EDI                             ; 005cb628
    POP ESI                             ; 005cb629
    POP EBX                             ; 005cb62a
    RET                                 ; 005cb62b
    XOR EAX,EAX                         ; 005cb62c
        ;   Label: LAB_005cb62c
    MOV ESP,EBP                         ; 005cb62e
    POP EBP                             ; 005cb630
    POP EDI                             ; 005cb631
    POP ESI                             ; 005cb632
    POP EBX                             ; 005cb633
    RET                                 ; 005cb634
    MOV EAX,dword ptr [EBX + 0x14]      ; 005cb635
        ;   Label: LAB_005cb635
    MOV dword ptr [ESP + 0x20],EAX      ; 005cb638
    MOV EAX,dword ptr [EBX + 0x18]      ; 005cb63c
    MOV dword ptr [ESP + 0x24],EAX      ; 005cb63f
    JMP 0x005cb407                      ; 005cb643
        ;   XREF to: 005cb407 (UNCONDITIONAL_JUMP)  ; LAB_005cb407
    FLD double ptr [EBX + 0x1c]         ; 005cb648
        ;   Label: LAB_005cb648
    FCHS                                ; 005cb64b
    FSTP double ptr [ESP + 0x10]        ; 005cb64d
    JMP 0x005cb433                      ; 005cb651
        ;   XREF to: 005cb433 (UNCONDITIONAL_JUMP)  ; LAB_005cb433
    FLD double ptr [EBX + 0x24]         ; 005cb656
        ;   Label: LAB_005cb656
    FCHS                                ; 005cb659
    FSTP double ptr [ESP + 0x18]        ; 005cb65b
    JMP 0x005cb45f                      ; 005cb65f
        ;   XREF to: 005cb45f (UNCONDITIONAL_JUMP)  ; LAB_005cb45f
    XOR EAX,EAX                         ; 005cb664
        ;   Label: LAB_005cb664
    JMP 0x005cb496                      ; 005cb666
        ;   XREF to: 005cb496 (UNCONDITIONAL_JUMP)  ; LAB_005cb496
    XOR EAX,EAX                         ; 005cb66b
        ;   Label: LAB_005cb66b
    JMP 0x005cb4c4                      ; 005cb66d
        ;   XREF to: 005cb4c4 (UNCONDITIONAL_JUMP)  ; LAB_005cb4c4
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb672
        ;   Label: LAB_005cb672
    MOV EAX,dword ptr [EAX + 0x18]      ; 005cb679
    MOV dword ptr [ESP + 0x98],EAX      ; 005cb67c
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb683
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005cb68a
    MOV dword ptr [ESP + 0x9c],EAX      ; 005cb68d
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb694
    MOV EAX,dword ptr [EAX + 0x20]      ; 005cb69b
    MOV dword ptr [ESP + 0xe8],EAX      ; 005cb69e
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb6a5
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb6ac
    MOV dword ptr [ESP + 0xec],EAX      ; 005cb6af
    MOV EAX,dword ptr [ESP + 0x98]      ; 005cb6b6
    MOV dword ptr [ESP + 0x58],EAX      ; 005cb6bd
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005cb6c1
    MOV dword ptr [ESP + 0x5c],EAX      ; 005cb6c8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005cb6cc
    MOV dword ptr [ESP + 0x60],EAX      ; 005cb6d3
    MOV EAX,dword ptr [ESP + 0xec]      ; 005cb6d7
    MOV dword ptr [ESP + 0x64],EAX      ; 005cb6de
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb6e2
    MOV EAX,dword ptr [EAX + 0x30]      ; 005cb6e9
    MOV dword ptr [ESP + 0xf0],EAX      ; 005cb6ec
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb6f3
    MOV EAX,dword ptr [EAX + 0x34]      ; 005cb6fa
    MOV dword ptr [ESP + 0xf4],EAX      ; 005cb6fd
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb704
    MOV EAX,dword ptr [EAX + 0x38]      ; 005cb70b
    MOV dword ptr [ESP + 0xb0],EAX      ; 005cb70e
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb715
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005cb71c
    MOV dword ptr [ESP + 0xb4],EAX      ; 005cb71f
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005cb726
    MOV dword ptr [ESP + 0x78],EAX      ; 005cb72d
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005cb731
    MOV dword ptr [ESP + 0x7c],EAX      ; 005cb738
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005cb73c
    MOV dword ptr [ESP + 0x80],EAX      ; 005cb743
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005cb74a
    JMP 0x005cb5dd                      ; 005cb751
        ;   XREF to: 005cb5dd (UNCONDITIONAL_JUMP)  ; LAB_005cb5dd
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb756
        ;   Label: LAB_005cb756
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cb75d
    MOV dword ptr [ESP + 0x120],EAX     ; 005cb760
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb767
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cb76e
    MOV dword ptr [ESP + 0x124],EAX     ; 005cb771
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb778
    MOV EAX,dword ptr [EAX + 0x18]      ; 005cb77f
    MOV dword ptr [ESP + 0xc8],EAX      ; 005cb782
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb789
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005cb790
    MOV dword ptr [ESP + 0xcc],EAX      ; 005cb793
    MOV EAX,dword ptr [ESP + 0x120]     ; 005cb79a
    MOV dword ptr [ESP + 0x58],EAX      ; 005cb7a1
    MOV EAX,dword ptr [ESP + 0x124]     ; 005cb7a5
    MOV dword ptr [ESP + 0x5c],EAX      ; 005cb7ac
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005cb7b0
    MOV dword ptr [ESP + 0x60],EAX      ; 005cb7b7
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005cb7bb
    MOV dword ptr [ESP + 0x64],EAX      ; 005cb7c2
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb7c6
    MOV EAX,dword ptr [EAX + 0x28]      ; 005cb7cd
    MOV dword ptr [ESP + 0xb8],EAX      ; 005cb7d0
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb7d7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005cb7de
    MOV dword ptr [ESP + 0xbc],EAX      ; 005cb7e1
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb7e8
    MOV EAX,dword ptr [EAX + 0x30]      ; 005cb7ef
    MOV dword ptr [ESP + 0xd8],EAX      ; 005cb7f2
    MOV EAX,dword ptr [ESP + 0x160]     ; 005cb7f9
    MOV EAX,dword ptr [EAX + 0x34]      ; 005cb800
    MOV dword ptr [ESP + 0xdc],EAX      ; 005cb803
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005cb80a
    MOV dword ptr [ESP + 0x78],EAX      ; 005cb811
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005cb815
    MOV dword ptr [ESP + 0x7c],EAX      ; 005cb81c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005cb820
    MOV dword ptr [ESP + 0x80],EAX      ; 005cb827
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005cb82e
    JMP 0x005cb5dd                      ; 005cb835
        ;   XREF to: 005cb5dd (UNCONDITIONAL_JUMP)  ; LAB_005cb5dd
    CMP dword ptr [ESP + 0x164],0x0     ; 005cb83a
        ;   Label: LAB_005cb83a
    JZ 0x005cb9bf                       ; 005cb842
        ;   XREF to: 005cb9bf (CONDITIONAL_JUMP)  ; LAB_005cb9bf
    MOV EAX,dword ptr [EBX + 0x18]      ; 005cb848
    MOV dword ptr [ESP + 0xd0],EAX      ; 005cb84b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005cb852
    MOV dword ptr [ESP + 0xd4],EAX      ; 005cb855
    MOV EAX,dword ptr [EBX + 0x20]      ; 005cb85c
    MOV dword ptr [ESP + 0xa0],EAX      ; 005cb85f
    MOV EAX,dword ptr [EBX + 0x24]      ; 005cb866
    MOV dword ptr [ESP + 0xa4],EAX      ; 005cb869
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005cb870
    MOV dword ptr [ESP + 0x88],EAX      ; 005cb877
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005cb87e
    MOV dword ptr [ESP + 0x8c],EAX      ; 005cb885
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005cb88c
    MOV dword ptr [ESP + 0x90],EAX      ; 005cb893
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005cb89a
    MOV dword ptr [ESP + 0x94],EAX      ; 005cb8a1
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cb8a8
    MOV dword ptr [ESP + 0xa8],EAX      ; 005cb8ab
    MOV EAX,dword ptr [EBX + 0x34]      ; 005cb8b2
    MOV dword ptr [ESP + 0xac],EAX      ; 005cb8b5
    MOV EAX,dword ptr [EBX + 0x38]      ; 005cb8bc
    MOV dword ptr [ESP + 0xf8],EAX      ; 005cb8bf
    MOV EAX,dword ptr [EBX + 0x3c]      ; 005cb8c6
    MOV dword ptr [ESP + 0xfc],EAX      ; 005cb8c9
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005cb8d0
    MOV dword ptr [ESP + 0x68],EAX      ; 005cb8d7
    MOV EAX,dword ptr [ESP + 0xac]      ; 005cb8db
    MOV dword ptr [ESP + 0x6c],EAX      ; 005cb8e2
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005cb8e6
    MOV dword ptr [ESP + 0x70],EAX      ; 005cb8ed
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005cb8f1
    MOV dword ptr [ESP + 0x74],EAX      ; 005cb8f8
        ;   Label: LAB_005cb8f8
    LEA EAX,[ESP + 0x88]                ; 005cb8fc
    PUSH EAX                            ; 005cb903
    LEA EAX,[ESP + 0x7c]                ; 005cb904
    PUSH EAX                            ; 005cb908
    LEA EAX,[ESP + 0x60]                ; 005cb909
    PUSH EAX                            ; 005cb90d
    CALL shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640 ; 005cb90e
        ;   XREF to: 005d6640 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
    MOV dword ptr [ESP + 0x14c],EAX     ; 005cb913
    MOV dword ptr [ESP + 0x150],EDX     ; 005cb91a
    FLD double ptr [ESP + 0x14c]        ; 005cb921
    ADD ESP,0xc                         ; 005cb928
    LEA EAX,[ESP + 0x68]                ; 005cb92b
    PUSH EAX                            ; 005cb92f
    LEA EAX,[ESP + 0x7c]                ; 005cb930
    PUSH EAX                            ; 005cb934
    LEA EAX,[ESP + 0x60]                ; 005cb935
    PUSH EAX                            ; 005cb939
    FSTP double ptr [ESP + 0x44]        ; 005cb93a
    CALL shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640 ; 005cb93e
        ;   XREF to: 005d6640 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
    MOV dword ptr [ESP + 0x14c],EAX     ; 005cb943
    MOV dword ptr [ESP + 0x150],EDX     ; 005cb94a
    FLD double ptr [ESP + 0x14c]        ; 005cb951
    ADD ESP,0xc                         ; 005cb958
    FSTP double ptr [ESP]               ; 005cb95b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005cb95e
    MOV EDX,dword ptr [ESP + 0x38]      ; 005cb962
    TEST EAX,0x7fffffff                 ; 005cb966
    JNZ 0x005cb984                      ; 005cb96b
        ;   XREF to: 005cb984 (CONDITIONAL_JUMP)  ; LAB_005cb984
    TEST EDX,EDX                        ; 005cb96d
    JNZ 0x005cb984                      ; 005cb96f
        ;   XREF to: 005cb984 (CONDITIONAL_JUMP)  ; LAB_005cb984
    MOV ECX,dword ptr [ESP + 0x4]       ; 005cb971
    MOV EAX,dword ptr [ESP]             ; 005cb975
    TEST ECX,0x7fffffff                 ; 005cb978
    JNZ 0x005cb984                      ; 005cb97e
        ;   XREF to: 005cb984 (CONDITIONAL_JUMP)  ; LAB_005cb984
    TEST EAX,EAX                        ; 005cb980
    JZ 0x005cb9b6                       ; 005cb982
        ;   XREF to: 005cb9b6 (CONDITIONAL_JUMP)  ; LAB_005cb9b6
    FLDZ                                ; 005cb984
        ;   Label: LAB_005cb984
    FCOMP double ptr [ESP + 0x38]       ; 005cb986
    FNSTSW AX                           ; 005cb98a
    SAHF                                ; 005cb98c
    JBE 0x005cb999                      ; 005cb98d
        ;   XREF to: 005cb999 (CONDITIONAL_JUMP)  ; LAB_005cb999
    FLDZ                                ; 005cb98f
    FCOMP double ptr [ESP]              ; 005cb991
    FNSTSW AX                           ; 005cb994
    SAHF                                ; 005cb996
    JC 0x005cb9b6                       ; 005cb997
        ;   XREF to: 005cb9b6 (CONDITIONAL_JUMP)  ; LAB_005cb9b6
    FLDZ                                ; 005cb999
        ;   Label: LAB_005cb999
    FCOMP double ptr [ESP + 0x38]       ; 005cb99b
    FNSTSW AX                           ; 005cb99f
    SAHF                                ; 005cb9a1
    JNC 0x005cb5f8                      ; 005cb9a2
        ;   XREF to: 005cb5f8 (CONDITIONAL_JUMP)  ; LAB_005cb5f8
    FLDZ                                ; 005cb9a8
    FCOMP double ptr [ESP]              ; 005cb9aa
    FNSTSW AX                           ; 005cb9ad
    SAHF                                ; 005cb9af
    JBE 0x005cb5f8                      ; 005cb9b0
        ;   XREF to: 005cb5f8 (CONDITIONAL_JUMP)  ; LAB_005cb5f8
    XOR EAX,EAX                         ; 005cb9b6
        ;   Label: LAB_005cb9b6
    MOV ESP,EBP                         ; 005cb9b8
    POP EBP                             ; 005cb9ba
    POP EDI                             ; 005cb9bb
    POP ESI                             ; 005cb9bc
    POP EBX                             ; 005cb9bd
    RET                                 ; 005cb9be
    CMP dword ptr [ESP + 0x168],0x0     ; 005cb9bf
        ;   Label: LAB_005cb9bf
    JZ 0x005cba82                       ; 005cb9c7
        ;   XREF to: 005cba82 (CONDITIONAL_JUMP)  ; LAB_005cba82
    MOV EAX,dword ptr [EBX + 0x10]      ; 005cb9cd
    MOV dword ptr [ESP + 0x100],EAX     ; 005cb9d0
    MOV EAX,dword ptr [EBX + 0x14]      ; 005cb9d7
    MOV dword ptr [ESP + 0x104],EAX     ; 005cb9da
    MOV EAX,dword ptr [EBX + 0x20]      ; 005cb9e1
    MOV dword ptr [ESP + 0x108],EAX     ; 005cb9e4
    MOV EAX,dword ptr [EBX + 0x24]      ; 005cb9eb
    MOV dword ptr [ESP + 0x10c],EAX     ; 005cb9ee
    MOV EAX,dword ptr [ESP + 0x100]     ; 005cb9f5
    MOV dword ptr [ESP + 0x88],EAX      ; 005cb9fc
    MOV EAX,dword ptr [ESP + 0x104]     ; 005cba03
    MOV dword ptr [ESP + 0x8c],EAX      ; 005cba0a
    MOV EAX,dword ptr [ESP + 0x108]     ; 005cba11
    MOV dword ptr [ESP + 0x90],EAX      ; 005cba18
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005cba1f
    MOV dword ptr [ESP + 0x94],EAX      ; 005cba26
    MOV EAX,dword ptr [EBX + 0x28]      ; 005cba2d
    MOV dword ptr [ESP + 0x110],EAX     ; 005cba30
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005cba37
    MOV dword ptr [ESP + 0x114],EAX     ; 005cba3a
    MOV EAX,dword ptr [EBX + 0x38]      ; 005cba41
    MOV dword ptr [ESP + 0x118],EAX     ; 005cba44
    MOV EAX,dword ptr [EBX + 0x3c]      ; 005cba4b
    MOV dword ptr [ESP + 0x11c],EAX     ; 005cba4e
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cba55
    MOV dword ptr [ESP + 0x68],EAX      ; 005cba5c
    MOV EAX,dword ptr [ESP + 0x114]     ; 005cba60
    MOV dword ptr [ESP + 0x6c],EAX      ; 005cba67
    MOV EAX,dword ptr [ESP + 0x118]     ; 005cba6b
    MOV dword ptr [ESP + 0x70],EAX      ; 005cba72
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005cba76
    JMP 0x005cb8f8                      ; 005cba7d
        ;   XREF to: 005cb8f8 (UNCONDITIONAL_JUMP)  ; LAB_005cb8f8
    MOV EAX,dword ptr [EBX + 0x10]      ; 005cba82
        ;   Label: LAB_005cba82
    MOV dword ptr [ESP + 0xe0],EAX      ; 005cba85
    MOV EAX,dword ptr [EBX + 0x14]      ; 005cba8c
    MOV dword ptr [ESP + 0xe4],EAX      ; 005cba8f
    MOV EAX,dword ptr [EBX + 0x18]      ; 005cba96
    MOV dword ptr [ESP + 0x128],EAX     ; 005cba99
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005cbaa0
    MOV dword ptr [ESP + 0x12c],EAX     ; 005cbaa3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005cbaaa
    MOV dword ptr [ESP + 0x88],EAX      ; 005cbab1
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005cbab8
    MOV dword ptr [ESP + 0x8c],EAX      ; 005cbabf
    MOV EAX,dword ptr [ESP + 0x128]     ; 005cbac6
    MOV dword ptr [ESP + 0x90],EAX      ; 005cbacd
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005cbad4
    MOV dword ptr [ESP + 0x94],EAX      ; 005cbadb
    MOV EAX,dword ptr [EBX + 0x28]      ; 005cbae2
    MOV dword ptr [ESP + 0x130],EAX     ; 005cbae5
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005cbaec
    MOV dword ptr [ESP + 0x134],EAX     ; 005cbaef
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cbaf6
    MOV dword ptr [ESP + 0x138],EAX     ; 005cbaf9
    MOV EAX,dword ptr [EBX + 0x34]      ; 005cbb00
    MOV dword ptr [ESP + 0x13c],EAX     ; 005cbb03
    MOV EAX,dword ptr [ESP + 0x130]     ; 005cbb0a
    MOV dword ptr [ESP + 0x68],EAX      ; 005cbb11
    MOV EAX,dword ptr [ESP + 0x134]     ; 005cbb15
    MOV dword ptr [ESP + 0x6c],EAX      ; 005cbb1c
    MOV EAX,dword ptr [ESP + 0x138]     ; 005cbb20
    MOV dword ptr [ESP + 0x70],EAX      ; 005cbb27
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005cbb2b
    JMP 0x005cb8f8                      ; 005cbb32
        ;   XREF to: 005cb8f8 (UNCONDITIONAL_JUMP)  ; LAB_005cb8f8

