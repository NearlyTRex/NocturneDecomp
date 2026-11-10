; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 at 0043bbae
;
; Referenced Globals:
;   void* switchdataD_0051745c = 005176d0
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b020
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6cee8
;   ... and 9 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_prim.c_normalizeTextureCoords_FUN_00515990
;   engine_prim.c_prepareDepthBuffer_FUN_00515920
;   engine_prim.c_replaceWWithDepth_FUN_00515a80
;   engine_special.cpp_drawPolygon2_FUN_00565c40
;   engine_special.cpp_FUN_00563257
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517480
        ;   Label: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480
    PUSH ESI                            ; 00517481
    PUSH EDI                            ; 00517482
    PUSH EBP                            ; 00517483
    SUB ESP,0x58                        ; 00517484
    CMP dword ptr [0x007303fc],0x0      ; 00517487 | DAT_007303fc
    JZ 0x005174ed                       ; 0051748e
        ;   XREF to: 005174ed (CONDITIONAL_JUMP)  ; LAB_005174ed
    MOV ECX,dword ptr [ESP + 0x70]      ; 00517490
    CMP ECX,0x3                         ; 00517494
    JLE 0x0051756b                      ; 00517497
        ;   XREF to: 0051756b (CONDITIONAL_JUMP)  ; LAB_0051756b
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0051749d
    LEA EBP,[ECX + -0x2]                ; 005174a1
    XOR ESI,ESI                         ; 005174a4
    XOR EDI,EDI                         ; 005174a6
    TEST EBP,EBP                        ; 005174a8
    JLE 0x005174e5                      ; 005174aa
        ;   XREF to: 005174e5 (CONDITIONAL_JUMP)  ; LAB_005174e5
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 005174ac
        ;   Label: LAB_005174ac
    ADD EAX,0x60b014                    ; 005174b0 | DAT_0060b014
    MOV ECX,dword ptr [EBX + 0x4]       ; 005174b5
    PUSH EAX                            ; 005174b8
    IMUL EAX,ECX,0x30                   ; 005174b9
    ADD EAX,0x60b014                    ; 005174bc | DAT_0060b014
    MOV EDX,dword ptr [EBX]             ; 005174c1
    PUSH EAX                            ; 005174c3
    IMUL EAX,EDX,0x30                   ; 005174c4
    ADD EAX,0x60b014                    ; 005174c7 | DAT_0060b014
    PUSH EAX                            ; 005174cc
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 005174cd
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 005174d2
    TEST EAX,EAX                        ; 005174d5
    JZ 0x00517565                       ; 005174d7
        ;   XREF to: 00517565 (CONDITIONAL_JUMP)  ; LAB_00517565
    INC ESI                             ; 005174dd
        ;   Label: LAB_005174dd
    ADD EBX,0x4                         ; 005174de
    CMP ESI,EBP                         ; 005174e1
    JL 0x005174ac                       ; 005174e3
        ;   XREF to: 005174ac (CONDITIONAL_JUMP)  ; LAB_005174ac
    CMP EDI,EBP                         ; 005174e5
        ;   Label: LAB_005174e5
    JZ 0x0051755d                       ; 005174e7
        ;   XREF to: 0051755d (CONDITIONAL_JUMP)  ; LAB_0051755d
    CMP dword ptr [0x01c6cee8],0x0      ; 005174ed | DAT_01c6cee8
        ;   Label: LAB_005174ed
    JZ 0x0051794f                       ; 005174f4
        ;   XREF to: 0051794f (CONDITIONAL_JUMP)  ; LAB_0051794f
    CMP dword ptr [0x007303f4],0x0      ; 005174fa | DAT_007303f4
    JNZ 0x0051794f                      ; 00517501
        ;   XREF to: 0051794f (CONDITIONAL_JUMP)  ; LAB_0051794f
    MOV EBX,dword ptr [ESP + 0x70]      ; 00517507
    XOR EAX,EAX                         ; 0051750b
    TEST EBX,EBX                        ; 0051750d
    JLE 0x00517530                      ; 0051750f
        ;   XREF to: 00517530 (CONDITIONAL_JUMP)  ; LAB_00517530
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00517511
    MOV EBP,dword ptr [ESP + 0x70]      ; 00517515
    IMUL ECX,dword ptr [EDX],0x30       ; 00517519
        ;   Label: LAB_00517519
    INC EAX                             ; 0051751c
    ADD ECX,0x60b014                    ; 0051751d | DAT_0060b014
    ADD EDX,0x4                         ; 00517523
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 00517526
    CMP EAX,EBP                         ; 0051752a
    JL 0x00517519                       ; 0051752c
        ;   XREF to: 00517519 (CONDITIONAL_JUMP)  ; LAB_00517519
    MOV EAX,EAX                         ; 0051752e
    MOV EAX,[0x01c6e2b4]                ; 00517530 | DAT_01c6e2b4
        ;   Label: LAB_00517530
    PUSH EAX                            ; 00517535
    MOV EDX,dword ptr [ESP + 0x74]      ; 00517536
    PUSH EDX                            ; 0051753a
    LEA EAX,[ESP + 0x8]                 ; 0051753b
    PUSH EAX                            ; 0051753f
    CALL engine_special.cpp_drawPolygon2_FUN_00565c40 ; 00517540
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon2_FUN_00565c40()
    ADD ESP,0xc                         ; 00517545
    MOV EAX,dword ptr [ESP + 0x70]      ; 00517548
    MOV ECX,dword ptr [0x01ed3198]      ; 0051754c | DAT_01ed3198
    SUB EAX,0x2                         ; 00517552
    ADD ECX,EAX                         ; 00517555
    MOV dword ptr [0x01ed3198],ECX      ; 00517557 | DAT_01ed3198
    ADD ESP,0x58                        ; 0051755d
        ;   Label: LAB_0051755d
    POP EBP                             ; 00517560
    POP EDI                             ; 00517561
    POP ESI                             ; 00517562
    POP EBX                             ; 00517563
    RET                                 ; 00517564
    INC EDI                             ; 00517565
        ;   Label: LAB_00517565
    JMP 0x005174dd                      ; 00517566
        ;   XREF to: 005174dd (UNCONDITIONAL_JUMP)  ; LAB_005174dd
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051756b
        ;   Label: LAB_0051756b
    MOV EDX,dword ptr [EDX + 0x8]       ; 0051756f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00517572
    SUB EAX,EDX                         ; 00517579
    SHL EAX,0x4                         ; 0051757b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051757e
    ADD EAX,0x60b014                    ; 00517582 | DAT_0060b014
    MOV EDX,dword ptr [EDX + 0x4]       ; 00517587
    PUSH EAX                            ; 0051758a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051758b
    SUB EAX,EDX                         ; 00517592
    SHL EAX,0x4                         ; 00517594
    MOV EDX,dword ptr [ESP + 0x70]      ; 00517597
    ADD EAX,0x60b014                    ; 0051759b | DAT_0060b014
    MOV EDX,dword ptr [EDX]             ; 005175a0
    PUSH EAX                            ; 005175a2
    LEA EAX,[EDX*0x4 + 0x0]             ; 005175a3
    SUB EAX,EDX                         ; 005175aa
    SHL EAX,0x4                         ; 005175ac
    ADD EAX,0x60b014                    ; 005175af | DAT_0060b014
    PUSH EAX                            ; 005175b4
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 005175b5
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 005175ba
    TEST EAX,EAX                        ; 005175bd
    JNZ 0x005174ed                      ; 005175bf
        ;   XREF to: 005174ed (CONDITIONAL_JUMP)  ; LAB_005174ed
    ADD ESP,0x58                        ; 005175c5
    POP EBP                             ; 005175c8
    POP EDI                             ; 005175c9
    POP ESI                             ; 005175ca
    POP EBX                             ; 005175cb
    RET                                 ; 005175cc
    MOV ECX,dword ptr [ESP + 0x70]      ; 005175cd
        ;   Label: caseD_1
    XOR ESI,ESI                         ; 005175d1
    TEST ECX,ECX                        ; 005175d3
    JLE 0x005176d0                      ; 005175d5
        ;   XREF to: 005176d0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005175db
    MOV EBP,dword ptr [ESP + 0x70]      ; 005175df
    IMUL EAX,dword ptr [EBX],0x30       ; 005175e3
        ;   Label: LAB_005175e3
    PUSH 0x1                            ; 005175e6
    ADD EAX,0x60b014                    ; 005175e8 | DAT_0060b014
    PUSH EAX                            ; 005175ed
    ADD EBX,0x4                         ; 005175ee
    INC ESI                             ; 005175f1
    CALL engine_prim.c_prepareDepthBuffer_FUN_00515920 ; 005175f2
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_00515920()
    ADD ESP,0x8                         ; 005175f7
    CMP ESI,EBP                         ; 005175fa
    JL 0x005175e3                       ; 005175fc
        ;   XREF to: 005175e3 (CONDITIONAL_JUMP)  ; LAB_005175e3
    JMP 0x005176d0                      ; 005175fe
        ;   XREF to: 005176d0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x70]      ; 00517603
        ;   Label: caseD_2
    XOR EBX,EBX                         ; 00517607
    TEST EDX,EDX                        ; 00517609
    JLE 0x005176d0                      ; 0051760b
        ;   XREF to: 005176d0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00517611
    IMUL EAX,dword ptr [ESI],0x30       ; 00517615
        ;   Label: LAB_00517615
    PUSH 0x1                            ; 00517618
    ADD EAX,0x60b014                    ; 0051761a | DAT_0060b014
    PUSH EAX                            ; 0051761f
    CALL engine_prim.c_normalizeTextureCoords_FUN_00515990 ; 00517620
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_00515990()
    ADD ESP,0x8                         ; 00517625
    INC EBX                             ; 00517628
    MOV ECX,dword ptr [ESP + 0x70]      ; 00517629
    ADD ESI,0x4                         ; 0051762d
    CMP EBX,ECX                         ; 00517630
    JL 0x00517615                       ; 00517632
        ;   XREF to: 00517615 (CONDITIONAL_JUMP)  ; LAB_00517615
    JMP 0x005176d0                      ; 00517634
        ;   XREF to: 005176d0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [ESP + 0x70]      ; 00517639
        ;   Label: caseD_3
    XOR ESI,ESI                         ; 0051763d
    TEST EAX,EAX                        ; 0051763f
    JLE 0x005176d0                      ; 00517641
        ;   XREF to: 005176d0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00517647
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051764b
    IMUL EAX,dword ptr [EBX],0x30       ; 0051764f
        ;   Label: LAB_0051764f
    PUSH 0x1                            ; 00517652
    ADD EAX,0x60b014                    ; 00517654 | DAT_0060b014
    PUSH EAX                            ; 00517659
    ADD EBX,0x4                         ; 0051765a
    INC ESI                             ; 0051765d
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10 ; 0051765e
        ;   XREF to: 00515a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10()
    ADD ESP,0x8                         ; 00517663
    CMP ESI,EBP                         ; 00517666
    JL 0x0051764f                       ; 00517668
        ;   XREF to: 0051764f (CONDITIONAL_JUMP)  ; LAB_0051764f
    JMP 0x005176d0                      ; 0051766a
        ;   XREF to: 005176d0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x70]      ; 0051766f
        ;   Label: caseD_5
    XOR ESI,ESI                         ; 00517673
    TEST EBP,EBP                        ; 00517675
    JLE 0x005176d0                      ; 00517677
        ;   XREF to: 005176d0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00517679
    IMUL EAX,dword ptr [EBX],0x30       ; 0051767d
        ;   Label: LAB_0051767d
    PUSH 0x1                            ; 00517680
    ADD EAX,0x60b014                    ; 00517682 | DAT_0060b014
    PUSH EAX                            ; 00517687
    CALL engine_prim.c_normalizeTextureCoords_FUN_00515990 ; 00517688
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_00515990()
    ADD ESP,0x8                         ; 0051768d
    INC ESI                             ; 00517690
    MOV ECX,dword ptr [ESP + 0x70]      ; 00517691
    ADD EBX,0x4                         ; 00517695
    CMP ESI,ECX                         ; 00517698
    JL 0x0051767d                       ; 0051769a
        ;   XREF to: 0051767d (CONDITIONAL_JUMP)  ; LAB_0051767d
    JMP 0x005176d0                      ; 0051769c
        ;   XREF to: 005176d0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [ESP + 0x70]      ; 0051769e
        ;   Label: caseD_6
    XOR ESI,ESI                         ; 005176a2
    TEST EDI,EDI                        ; 005176a4
    JLE 0x005176d0                      ; 005176a6
        ;   XREF to: 005176d0 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005176a8
    MOV EBP,dword ptr [ESP + 0x70]      ; 005176ac
    IMUL EAX,dword ptr [EBX],0x30       ; 005176b0
        ;   Label: LAB_005176b0
    PUSH 0x1                            ; 005176b3
    ADD EAX,0x60b014                    ; 005176b5 | DAT_0060b014
    PUSH EAX                            ; 005176ba
    ADD EBX,0x4                         ; 005176bb
    INC ESI                             ; 005176be
    CALL engine_prim.c_replaceWWithDepth_FUN_00515a80 ; 005176bf
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_00515a80()
    ADD ESP,0x8                         ; 005176c4
    CMP ESI,EBP                         ; 005176c7
    JL 0x005176b0                       ; 005176c9
        ;   XREF to: 005176b0 (CONDITIONAL_JUMP)  ; LAB_005176b0
    LEA EAX,[EAX]                       ; 005176cb
    MOV ECX,ECX                         ; 005176ce
    MOV EAX,0x4b0                       ; 005176d0
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 005176d5
    MOV ESI,dword ptr [ESP + 0x70]      ; 005176d7
    MOV dword ptr [0x01ed36a4],EDX      ; 005176db | DAT_01ed36a4
    MOV dword ptr [0x01ed319c],EDX      ; 005176e1 | DAT_01ed319c
    MOV dword ptr [ESP + 0x4c],EDX      ; 005176e7
    MOV [0x01ed36a0],EAX                ; 005176eb | DAT_01ed36a0
    TEST ESI,ESI                        ; 005176f0
    JLE 0x0051775e                      ; 005176f2
        ;   XREF to: 0051775e (CONDITIONAL_JUMP)  ; LAB_0051775e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005176f4
    MOV dword ptr [ESP + 0x44],EAX      ; 005176f8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005176fc
        ;   Label: LAB_005176fc
    MOV EDI,dword ptr [ESP + 0x70]      ; 00517700
    INC EAX                             ; 00517704
    CMP EAX,EDI                         ; 00517705
    JL 0x0051770b                       ; 00517707
        ;   XREF to: 0051770b (CONDITIONAL_JUMP)  ; LAB_0051770b
    XOR EAX,EAX                         ; 00517709
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0051770b
        ;   Label: LAB_0051770b
    SHL EAX,0x2                         ; 0051770f
    ADD EAX,EBP                         ; 00517712
    IMUL ECX,dword ptr [EAX],0x30       ; 00517714
    MOV EAX,dword ptr [ESP + 0x44]      ; 00517717
    IMUL ESI,dword ptr [EAX],0x30       ; 0051771b
    ADD ECX,0x60b014                    ; 0051771e | DAT_0060b014
    ADD ESI,0x60b014                    ; 00517724 | DAT_0060b014
    MOV EDI,ECX                         ; 0051772a
    MOV EAX,dword ptr [ECX + 0x14]      ; 0051772c | DAT_0060b028
    MOV EDX,dword ptr [ESI + 0x14]      ; 0051772f | DAT_0060b028
    SAR EAX,0x10                        ; 00517732
    SAR EDX,0x10                        ; 00517735
    MOV EBX,ESI                         ; 00517738
    CMP EDX,EAX                         ; 0051773a
    JNZ 0x00517971                      ; 0051773c
        ;   XREF to: 00517971 (CONDITIONAL_JUMP)  ; LAB_00517971
    MOV EDI,dword ptr [ESP + 0x44]      ; 00517742
        ;   Label: LAB_00517742
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00517746
    MOV EDX,dword ptr [ESP + 0x70]      ; 0051774a
    ADD EDI,0x4                         ; 0051774e
    INC EBP                             ; 00517751
    MOV dword ptr [ESP + 0x44],EDI      ; 00517752
    MOV dword ptr [ESP + 0x4c],EBP      ; 00517756
    CMP EBP,EDX                         ; 0051775a
    JL 0x005176fc                       ; 0051775c
        ;   XREF to: 005176fc (CONDITIONAL_JUMP)  ; LAB_005176fc
    MOV EAX,0x1ed31a0                   ; 0051775e
        ;   Label: LAB_0051775e
    MOV ESI,dword ptr [0x01ed319c]      ; 00517763 | DAT_01ed319c
    MOV EBX,dword ptr [0x01ed36a0]      ; 00517769 | DAT_01ed36a0
    XOR ECX,ECX                         ; 0051776f
    TEST ESI,ESI                        ; 00517771
    JLE 0x00517bdf                      ; 00517773
        ;   XREF to: 00517bdf (CONDITIONAL_JUMP)  ; LAB_00517bdf
    MOV EDX,dword ptr [0x01ed319c]      ; 00517779 | DAT_01ed319c
    CMP EBX,dword ptr [EAX]             ; 0051777f | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_0051777f
    JNZ 0x00517bd3                      ; 00517781
        ;   XREF to: 00517bd3 (CONDITIONAL_JUMP)  ; LAB_00517bd3
    TEST EAX,EAX                        ; 00517787
    JZ 0x00517bd3                       ; 00517789
        ;   XREF to: 00517bd3 (CONDITIONAL_JUMP)  ; LAB_00517bd3
    MOV dword ptr [ESP + 0x54],EAX      ; 0051778f | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_0051778f
    TEST EAX,EAX                        ; 00517793
    JZ 0x0051755d                       ; 00517795
        ;   XREF to: 0051755d (CONDITIONAL_JUMP)  ; LAB_0051755d
    MOV EDI,dword ptr [0x01ed319c]      ; 0051779b | DAT_01ed319c
    MOV ECX,dword ptr [0x01ed36a0]      ; 005177a1 | DAT_01ed36a0
    MOV EBX,EAX                         ; 005177a7
    XOR EDX,EDX                         ; 005177a9
    MOV EAX,0x1ed31a0                   ; 005177ab
    TEST EDI,EDI                        ; 005177b0
    JLE 0x00517bf2                      ; 005177b2
        ;   XREF to: 00517bf2 (CONDITIONAL_JUMP)  ; LAB_00517bf2
    MOV EBP,dword ptr [0x01ed319c]      ; 005177b8 | DAT_01ed319c
    CMP ECX,dword ptr [EAX]             ; 005177be | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_005177be
    JNZ 0x00517be6                      ; 005177c0
        ;   XREF to: 00517be6 (CONDITIONAL_JUMP)  ; LAB_00517be6
    CMP EAX,EBX                         ; 005177c6
    JZ 0x00517be6                       ; 005177c8
        ;   XREF to: 00517be6 (CONDITIONAL_JUMP)  ; LAB_00517be6
    MOV EBP,EAX                         ; 005177ce
        ;   Label: LAB_005177ce
    TEST EAX,EAX                        ; 005177d0
    JZ 0x0051755d                       ; 005177d2
        ;   XREF to: 0051755d (CONDITIONAL_JUMP)  ; LAB_0051755d
    MOV EAX,[0x01ed36a0]                ; 005177d8 | DAT_01ed36a0
    MOV dword ptr [ESP + 0x50],EAX      ; 005177dd
    MOV EDX,dword ptr [ESP + 0x54]      ; 005177e1
        ;   Label: LAB_005177e1
    MOV EAX,dword ptr [ESP + 0x50]      ; 005177e5
    CMP EAX,dword ptr [EDX + 0x4]       ; 005177e9
    JL 0x0051782f                       ; 005177ec
        ;   XREF to: 0051782f (CONDITIONAL_JUMP)  ; LAB_0051782f
    MOV ESI,dword ptr [0x01ed319c]      ; 005177ee | DAT_01ed319c
    MOV EBX,EAX                         ; 005177f4
    MOV ECX,EBP                         ; 005177f6
    MOV dword ptr [EDX],0xffffffff      ; 005177f8
    MOV EAX,0x1ed31a0                   ; 005177fe
    XOR EDX,EDX                         ; 00517803
    TEST ESI,ESI                        ; 00517805
    JLE 0x00517c05                      ; 00517807
        ;   XREF to: 00517c05 (CONDITIONAL_JUMP)  ; LAB_00517c05
    MOV EDI,dword ptr [0x01ed319c]      ; 0051780d | DAT_01ed319c
    CMP EBX,dword ptr [EAX]             ; 00517813 | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00517813
    JNZ 0x00517bf9                      ; 00517815
        ;   XREF to: 00517bf9 (CONDITIONAL_JUMP)  ; LAB_00517bf9
    CMP EAX,ECX                         ; 0051781b
    JZ 0x00517bf9                       ; 0051781d
        ;   XREF to: 00517bf9 (CONDITIONAL_JUMP)  ; LAB_00517bf9
    MOV dword ptr [ESP + 0x54],EAX      ; 00517823 | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00517823
    TEST EAX,EAX                        ; 00517827
    JZ 0x0051755d                       ; 00517829
        ;   XREF to: 0051755d (CONDITIONAL_JUMP)  ; LAB_0051755d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051782f
        ;   Label: LAB_0051782f
    CMP EAX,dword ptr [EBP + 0x4]       ; 00517833
    JL 0x0051787a                       ; 00517836
        ;   XREF to: 0051787a (CONDITIONAL_JUMP)  ; LAB_0051787a
    MOV EBX,dword ptr [ESP + 0x54]      ; 00517838
    MOV ECX,EAX                         ; 0051783c
    MOV dword ptr [EBP],0xffffffff      ; 0051783e
    XOR EDX,EDX                         ; 00517845
    MOV EBP,dword ptr [0x01ed319c]      ; 00517847 | DAT_01ed319c
    MOV EAX,0x1ed31a0                   ; 0051784d
    TEST EBP,EBP                        ; 00517852
    JLE 0x00517c18                      ; 00517854
        ;   XREF to: 00517c18 (CONDITIONAL_JUMP)  ; LAB_00517c18
    MOV ESI,dword ptr [0x01ed319c]      ; 0051785a | DAT_01ed319c
    CMP ECX,dword ptr [EAX]             ; 00517860 | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00517860
    JNZ 0x00517c0c                      ; 00517862
        ;   XREF to: 00517c0c (CONDITIONAL_JUMP)  ; LAB_00517c0c
    CMP EAX,EBX                         ; 00517868
    JZ 0x00517c0c                       ; 0051786a
        ;   XREF to: 00517c0c (CONDITIONAL_JUMP)  ; LAB_00517c0c
    MOV EBP,EAX                         ; 00517870
        ;   Label: LAB_00517870
    TEST EAX,EAX                        ; 00517872
    JZ 0x0051755d                       ; 00517874
        ;   XREF to: 0051755d (CONDITIONAL_JUMP)  ; LAB_0051755d
    MOV ESI,dword ptr [ESP + 0x54]      ; 0051787a
        ;   Label: LAB_0051787a
    MOV EBX,dword ptr [ESP + 0x50]      ; 0051787e
    MOV EDI,EBP                         ; 00517882
    CALL engine_special.cpp_FUN_00563257 ; 00517884
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00563257()
    MOV EAX,dword ptr [ESP + 0x54]      ; 00517889
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051788d
    MOV EAX,dword ptr [EAX + 0xc]       ; 00517891
    MOV ECX,dword ptr [EDX + 0x8]       ; 00517894
    MOV EBX,dword ptr [EDX + 0x18]      ; 00517897
    MOV ESI,dword ptr [EDX + 0x20]      ; 0051789a
    MOV EDI,dword ptr [EDX + 0x28]      ; 0051789d
    ADD ECX,EAX                         ; 005178a0
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005178a2
    MOV dword ptr [EDX + 0x8],ECX       ; 005178a5
    ADD EBX,EAX                         ; 005178a8
    MOV EAX,dword ptr [EDX + 0x24]      ; 005178aa
    MOV dword ptr [EDX + 0x18],EBX      ; 005178ad
    ADD ESI,EAX                         ; 005178b0
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005178b2
    MOV dword ptr [EDX + 0x20],ESI      ; 005178b5
    ADD EDI,EAX                         ; 005178b8
    MOV dword ptr [EDX + 0x28],EDI      ; 005178ba
    MOV ECX,dword ptr [EDX + 0x10]      ; 005178bd
    MOV EBX,dword ptr [EDX + 0x38]      ; 005178c0
    MOV ESI,dword ptr [EDX + 0x40]      ; 005178c3
    MOV EAX,dword ptr [EDX + 0x14]      ; 005178c6
    MOV EDI,dword ptr [EDX + 0x30]      ; 005178c9
    ADD ECX,EAX                         ; 005178cc
    MOV EAX,dword ptr [EDX + 0x3c]      ; 005178ce
    MOV dword ptr [EDX + 0x10],ECX      ; 005178d1
    ADD EBX,EAX                         ; 005178d4
    MOV EAX,dword ptr [EDX + 0x44]      ; 005178d6
    MOV dword ptr [EDX + 0x38],EBX      ; 005178d9
    ADD ESI,EAX                         ; 005178dc
    MOV EAX,dword ptr [EDX + 0x34]      ; 005178de
    MOV dword ptr [EDX + 0x40],ESI      ; 005178e1
    ADD EDI,EAX                         ; 005178e4
    MOV dword ptr [EDX + 0x30],EDI      ; 005178e6
    MOV EAX,dword ptr [EBP + 0xc]       ; 005178e9
    MOV EDX,dword ptr [EBP + 0x8]       ; 005178ec
    MOV ECX,dword ptr [EBP + 0x18]      ; 005178ef
    MOV EBX,dword ptr [EBP + 0x20]      ; 005178f2
    ADD EDX,EAX                         ; 005178f5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005178f7
    MOV dword ptr [EBP + 0x8],EDX       ; 005178fa
    ADD ECX,EAX                         ; 005178fd
    MOV EAX,dword ptr [EBP + 0x24]      ; 005178ff
    MOV dword ptr [EBP + 0x18],ECX      ; 00517902
    ADD EBX,EAX                         ; 00517905
    MOV dword ptr [EBP + 0x20],EBX      ; 00517907
    MOV ESI,dword ptr [EBP + 0x28]      ; 0051790a
    MOV EDI,dword ptr [EBP + 0x10]      ; 0051790d
    MOV EDX,dword ptr [EBP + 0x38]      ; 00517910
    MOV ECX,dword ptr [EBP + 0x40]      ; 00517913
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00517916
    MOV EBX,dword ptr [EBP + 0x30]      ; 00517919
    ADD ESI,EAX                         ; 0051791c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051791e
    MOV dword ptr [EBP + 0x28],ESI      ; 00517921
    MOV ESI,dword ptr [ESP + 0x50]      ; 00517924
    ADD EDI,EAX                         ; 00517928
    INC ESI                             ; 0051792a
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0051792b
    MOV dword ptr [EBP + 0x10],EDI      ; 0051792e
    ADD EDX,EAX                         ; 00517931
    MOV EAX,dword ptr [EBP + 0x44]      ; 00517933
    MOV dword ptr [EBP + 0x38],EDX      ; 00517936
    ADD ECX,EAX                         ; 00517939
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051793b
    MOV dword ptr [EBP + 0x40],ECX      ; 0051793e
    ADD EBX,EAX                         ; 00517941
    MOV dword ptr [ESP + 0x50],ESI      ; 00517943
    MOV dword ptr [EBP + 0x30],EBX      ; 00517947
    JMP 0x005177e1                      ; 0051794a
        ;   XREF to: 005177e1 (UNCONDITIONAL_JUMP)  ; LAB_005177e1
    MOV ESI,dword ptr [0x01ed3198]      ; 0051794f | DAT_01ed3198
        ;   Label: LAB_0051794f
    INC ESI                             ; 00517955
    MOV EAX,[0x01c6e2b8]                ; 00517956 | DAT_01c6e2b8
    MOV dword ptr [0x01ed3198],ESI      ; 0051795b | DAT_01ed3198
    CMP EAX,0x6                         ; 00517961
    JA 0x005176d0                       ; 00517964
        ;   XREF to: 005176d0 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x51745c]  ; 0051796a | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [ESI + 0x14]      ; 00517971 | DAT_0060b028
        ;   Label: LAB_00517971
    CMP EBP,dword ptr [ECX + 0x14]      ; 00517974 | DAT_0060b028
    JLE 0x00517983                      ; 00517977
        ;   XREF to: 00517983 (CONDITIONAL_JUMP)  ; LAB_00517983
    MOV EBX,ECX                         ; 00517979
    MOV EDI,ESI                         ; 0051797b
    MOV ECX,EDX                         ; 0051797d
    MOV EDX,EAX                         ; 0051797f
    MOV EAX,ECX                         ; 00517981
    IMUL EBP,dword ptr [0x01ed319c],0x50 ; 00517983 | DAT_01ed319c
        ;   Label: LAB_00517983
    ADD EBP,0x1ed31a0                   ; 0051798a
    MOV dword ptr [EBP],EDX             ; 00517990 | DAT_01ed31a0
    MOV ECX,dword ptr [0x01ed36a0]      ; 00517993 | DAT_01ed36a0
    MOV dword ptr [EBP + 0x4],EAX       ; 00517999
    CMP EDX,ECX                         ; 0051799c
    JGE 0x005179a6                      ; 0051799e
        ;   XREF to: 005179a6 (CONDITIONAL_JUMP)  ; LAB_005179a6
    MOV dword ptr [0x01ed36a0],EDX      ; 005179a0 | DAT_01ed36a0
    CMP EAX,dword ptr [0x01ed36a4]      ; 005179a6 | DAT_01ed36a4
        ;   Label: LAB_005179a6
    JLE 0x005179b3                      ; 005179ac
        ;   XREF to: 005179b3 (CONDITIONAL_JUMP)  ; LAB_005179b3
    MOV [0x01ed36a4],EAX                ; 005179ae | DAT_01ed36a4
    MOV EAX,dword ptr [EBX + 0x14]      ; 005179b3 | DAT_0060b028
        ;   Label: LAB_005179b3
    MOV ECX,dword ptr [EDI + 0x14]      ; 005179b6 | DAT_0060b028
    SUB ECX,EAX                         ; 005179b9
    CMP ECX,0x10000                     ; 005179bb
    JNC 0x00517b80                      ; 005179c1
        ;   XREF to: 00517b80 (CONDITIONAL_JUMP)  ; LAB_00517b80
    XOR ECX,ECX                         ; 005179c7
    MOV EAX,dword ptr [EDI + 0x10]      ; 005179c9 | DAT_0060b024
        ;   Label: LAB_005179c9
    MOV EDX,dword ptr [EBX + 0x10]      ; 005179cc | DAT_0060b024
    MOV ESI,dword ptr [EBX + 0x14]      ; 005179cf | DAT_0060b028
    SUB EAX,EDX                         ; 005179d2
    AND ESI,0xffff                      ; 005179d4
    MOV EDX,EAX                         ; 005179da
    MOV EAX,ECX                         ; 005179dc
    XOR SI,0xffff                       ; 005179de
    IMUL EDX                            ; 005179e2
    SHRD EAX,EDX,0x10                   ; 005179e4
    MOV EDX,EAX                         ; 005179e8
    MOV dword ptr [EBP + 0xc],EAX       ; 005179ea
    MOV EAX,ESI                         ; 005179ed
    IMUL EDX                            ; 005179ef
    SHRD EAX,EDX,0x10                   ; 005179f1
    MOV dword ptr [ESP + 0x40],EAX      ; 005179f5
    MOV EDX,dword ptr [ESP + 0x40]      ; 005179f9
    MOV EAX,dword ptr [EBX + 0x10]      ; 005179fd | DAT_0060b024
    ADD EAX,EDX                         ; 00517a00
    MOV dword ptr [EBP + 0x8],EAX       ; 00517a02
    MOV EAX,dword ptr [EDI + 0x18]      ; 00517a05 | DAT_0060b02c
    MOV EDX,dword ptr [EBX + 0x18]      ; 00517a08 | DAT_0060b02c
    SUB EAX,EDX                         ; 00517a0b
    MOV EDX,EAX                         ; 00517a0d
    MOV EAX,ECX                         ; 00517a0f
    IMUL EDX                            ; 00517a11
    SHRD EAX,EDX,0x10                   ; 00517a13
    MOV EDX,EAX                         ; 00517a17
    MOV dword ptr [EBP + 0x1c],EAX      ; 00517a19
    MOV EAX,ESI                         ; 00517a1c
    IMUL EDX                            ; 00517a1e
    SHRD EAX,EDX,0x10                   ; 00517a20
    MOV dword ptr [ESP + 0x40],EAX      ; 00517a24
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517a28
    MOV EAX,dword ptr [EBX + 0x18]      ; 00517a2c | DAT_0060b02c
    ADD EAX,EDX                         ; 00517a2f
    MOV dword ptr [EBP + 0x18],EAX      ; 00517a31
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00517a34 | DAT_0060b030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00517a37 | DAT_0060b030
    SUB EAX,EDX                         ; 00517a3a
    MOV EDX,EAX                         ; 00517a3c
    MOV EAX,ECX                         ; 00517a3e
    IMUL EDX                            ; 00517a40
    SHRD EAX,EDX,0x10                   ; 00517a42
    MOV EDX,EAX                         ; 00517a46
    MOV dword ptr [EBP + 0x24],EAX      ; 00517a48
    MOV EAX,ESI                         ; 00517a4b
    IMUL EDX                            ; 00517a4d
    SHRD EAX,EDX,0x10                   ; 00517a4f
    MOV dword ptr [ESP + 0x40],EAX      ; 00517a53
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517a57
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00517a5b | DAT_0060b030
    ADD EAX,EDX                         ; 00517a5e
    MOV dword ptr [EBP + 0x20],EAX      ; 00517a60
    MOV EAX,dword ptr [EDI + 0x20]      ; 00517a63 | DAT_0060b034
    MOV EDX,dword ptr [EBX + 0x20]      ; 00517a66 | DAT_0060b034
    SUB EAX,EDX                         ; 00517a69
    MOV EDX,EAX                         ; 00517a6b
    MOV EAX,ECX                         ; 00517a6d
    IMUL EDX                            ; 00517a6f
    SHRD EAX,EDX,0x10                   ; 00517a71
    MOV EDX,EAX                         ; 00517a75
    MOV dword ptr [EBP + 0x14],EAX      ; 00517a77
    MOV EAX,ESI                         ; 00517a7a
    IMUL EDX                            ; 00517a7c
    SHRD EAX,EDX,0x10                   ; 00517a7e
    MOV dword ptr [ESP + 0x40],EAX      ; 00517a82
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517a86
    MOV EAX,dword ptr [EBX + 0x20]      ; 00517a8a | DAT_0060b034
    ADD EAX,EDX                         ; 00517a8d
    MOV dword ptr [EBP + 0x10],EAX      ; 00517a8f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00517a92 | DAT_0060b040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00517a95 | DAT_0060b040
    SUB EAX,EDX                         ; 00517a98
    MOV EDX,EAX                         ; 00517a9a
    MOV EAX,ECX                         ; 00517a9c
    IMUL EDX                            ; 00517a9e
    SHRD EAX,EDX,0x10                   ; 00517aa0
    MOV EDX,EAX                         ; 00517aa4
    MOV dword ptr [EBP + 0x34],EAX      ; 00517aa6
    MOV EAX,ESI                         ; 00517aa9
    IMUL EDX                            ; 00517aab
    SHRD EAX,EDX,0x10                   ; 00517aad
    MOV dword ptr [ESP + 0x40],EAX      ; 00517ab1
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517ab5
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00517ab9 | DAT_0060b040
    ADD EAX,EDX                         ; 00517abc
    MOV dword ptr [EBP + 0x30],EAX      ; 00517abe
    CMP dword ptr [0x01c6e2b8],0x1      ; 00517ac1 | DAT_01c6e2b8
    JNZ 0x00517b9f                      ; 00517ac8
        ;   XREF to: 00517b9f (CONDITIONAL_JUMP)  ; LAB_00517b9f
    CMP dword ptr [0x01c6e2b0],0x0      ; 00517ace | DAT_01c6e2b0
    JZ 0x00517b90                       ; 00517ad5
        ;   XREF to: 00517b90 (CONDITIONAL_JUMP)  ; LAB_00517b90
    MOV EAX,0x7fffffff                  ; 00517adb
    MOV EDX,dword ptr [EBX + 0x8]       ; 00517ae0 | DAT_0060b01c
    SUB EAX,EDX                         ; 00517ae3
    MOV dword ptr [ESP + 0x48],EAX      ; 00517ae5
    MOV EDX,dword ptr [EDI + 0x8]       ; 00517ae9 | DAT_0060b01c
    MOV EAX,0x7fffffff                  ; 00517aec
    SUB EAX,EDX                         ; 00517af1
    MOV EDX,dword ptr [ESP + 0x48]      ; 00517af3
        ;   Label: LAB_00517af3
    SUB EAX,EDX                         ; 00517af7
    MOV dword ptr [ESP + 0x40],EAX      ; 00517af9
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517afd
    MOV EAX,ECX                         ; 00517b01
    IMUL EDX                            ; 00517b03
    SHRD EAX,EDX,0x10                   ; 00517b05
    MOV EDX,EAX                         ; 00517b09
    MOV dword ptr [EBP + 0x2c],EAX      ; 00517b0b
    MOV EAX,ESI                         ; 00517b0e
    IMUL EDX                            ; 00517b10
    SHRD EAX,EDX,0x10                   ; 00517b12
    MOV EDX,dword ptr [ESP + 0x48]      ; 00517b16
    ADD EDX,EAX                         ; 00517b1a
    MOV dword ptr [EBP + 0x28],EDX      ; 00517b1c
    MOV EAX,dword ptr [EDI + 0x24]      ; 00517b1f | DAT_0060b038
        ;   Label: LAB_00517b1f
    MOV EDX,dword ptr [EBX + 0x24]      ; 00517b22 | DAT_0060b038
    SUB EAX,EDX                         ; 00517b25
    MOV EDX,EAX                         ; 00517b27
    MOV EAX,ECX                         ; 00517b29
    IMUL EDX                            ; 00517b2b
    SHRD EAX,EDX,0x10                   ; 00517b2d
    MOV EDX,EAX                         ; 00517b31
    MOV dword ptr [EBP + 0x3c],EAX      ; 00517b33
    MOV EAX,ESI                         ; 00517b36
    IMUL EDX                            ; 00517b38
    SHRD EAX,EDX,0x10                   ; 00517b3a
    MOV dword ptr [ESP + 0x40],EAX      ; 00517b3e
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517b42
    MOV EAX,dword ptr [EBX + 0x24]      ; 00517b46 | DAT_0060b038
    ADD EAX,EDX                         ; 00517b49
    MOV dword ptr [EBP + 0x38],EAX      ; 00517b4b
    MOV EDX,dword ptr [EDI + 0x28]      ; 00517b4e | DAT_0060b03c
    MOV EDI,dword ptr [EBX + 0x28]      ; 00517b51 | DAT_0060b03c
    MOV EAX,ECX                         ; 00517b54
    SUB EDX,EDI                         ; 00517b56
    IMUL EDX                            ; 00517b58
    SHRD EAX,EDX,0x10                   ; 00517b5a
    MOV EDX,EAX                         ; 00517b5e
    MOV dword ptr [EBP + 0x44],EAX      ; 00517b60
    MOV EAX,ESI                         ; 00517b63
    IMUL EDX                            ; 00517b65
    SHRD EAX,EDX,0x10                   ; 00517b67
    MOV EDX,EAX                         ; 00517b6b
    MOV EAX,dword ptr [EBX + 0x28]      ; 00517b6d | DAT_0060b03c
    ADD EAX,EDX                         ; 00517b70
    MOV dword ptr [EBP + 0x40],EAX      ; 00517b72
    INC dword ptr [0x01ed319c]          ; 00517b75 | DAT_01ed319c
    JMP 0x00517742                      ; 00517b7b
        ;   XREF to: 00517742 (UNCONDITIONAL_JUMP)  ; LAB_00517742
    MOV EAX,0xffffffff                  ; 00517b80
        ;   Label: LAB_00517b80
    XOR EDX,EDX                         ; 00517b85
    DIV ECX                             ; 00517b87
    MOV ECX,EAX                         ; 00517b89
    JMP 0x005179c9                      ; 00517b8b
        ;   XREF to: 005179c9 (UNCONDITIONAL_JUMP)  ; LAB_005179c9
    MOV EAX,dword ptr [EBX + 0xc]       ; 00517b90 | DAT_0060b020
        ;   Label: LAB_00517b90
    MOV dword ptr [ESP + 0x48],EAX      ; 00517b93
    MOV EAX,dword ptr [EDI + 0xc]       ; 00517b97 | DAT_0060b020
    JMP 0x00517af3                      ; 00517b9a
        ;   XREF to: 00517af3 (UNCONDITIONAL_JUMP)  ; LAB_00517af3
    MOV EAX,dword ptr [EDI + 0x8]       ; 00517b9f | DAT_0060b01c
        ;   Label: LAB_00517b9f
    MOV EDX,dword ptr [EBX + 0x8]       ; 00517ba2 | DAT_0060b01c
    SUB EAX,EDX                         ; 00517ba5
    MOV EDX,EAX                         ; 00517ba7
    MOV EAX,ECX                         ; 00517ba9
    IMUL EDX                            ; 00517bab
    SHRD EAX,EDX,0x10                   ; 00517bad
    MOV EDX,EAX                         ; 00517bb1
    MOV dword ptr [EBP + 0x2c],EAX      ; 00517bb3
    MOV EAX,ESI                         ; 00517bb6
    IMUL EDX                            ; 00517bb8
    SHRD EAX,EDX,0x10                   ; 00517bba
    MOV dword ptr [ESP + 0x40],EAX      ; 00517bbe
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517bc2
    MOV EAX,dword ptr [EBX + 0x8]       ; 00517bc6 | DAT_0060b01c
    ADD EAX,EDX                         ; 00517bc9
    MOV dword ptr [EBP + 0x28],EAX      ; 00517bcb
    JMP 0x00517b1f                      ; 00517bce
        ;   XREF to: 00517b1f (UNCONDITIONAL_JUMP)  ; LAB_00517b1f
    INC ECX                             ; 00517bd3
        ;   Label: LAB_00517bd3
    ADD EAX,0x50                        ; 00517bd4
    CMP ECX,EDX                         ; 00517bd7
    JL 0x0051777f                       ; 00517bd9
        ;   XREF to: 0051777f (CONDITIONAL_JUMP)  ; LAB_0051777f
    XOR EAX,EAX                         ; 00517bdf
        ;   Label: LAB_00517bdf
    JMP 0x0051778f                      ; 00517be1
        ;   XREF to: 0051778f (UNCONDITIONAL_JUMP)  ; LAB_0051778f
    INC EDX                             ; 00517be6
        ;   Label: LAB_00517be6
    ADD EAX,0x50                        ; 00517be7
    CMP EDX,EBP                         ; 00517bea
    JL 0x005177be                       ; 00517bec
        ;   XREF to: 005177be (CONDITIONAL_JUMP)  ; LAB_005177be
    XOR EAX,EAX                         ; 00517bf2
        ;   Label: LAB_00517bf2
    JMP 0x005177ce                      ; 00517bf4
        ;   XREF to: 005177ce (UNCONDITIONAL_JUMP)  ; LAB_005177ce
    INC EDX                             ; 00517bf9
        ;   Label: LAB_00517bf9
    ADD EAX,0x50                        ; 00517bfa
    CMP EDX,EDI                         ; 00517bfd
    JL 0x00517813                       ; 00517bff
        ;   XREF to: 00517813 (CONDITIONAL_JUMP)  ; LAB_00517813
    XOR EAX,EAX                         ; 00517c05
        ;   Label: LAB_00517c05
    JMP 0x00517823                      ; 00517c07
        ;   XREF to: 00517823 (UNCONDITIONAL_JUMP)  ; LAB_00517823
    INC EDX                             ; 00517c0c
        ;   Label: LAB_00517c0c
    ADD EAX,0x50                        ; 00517c0d
    CMP EDX,ESI                         ; 00517c10
    JL 0x00517860                       ; 00517c12
        ;   XREF to: 00517860 (CONDITIONAL_JUMP)  ; LAB_00517860
    XOR EAX,EAX                         ; 00517c18
        ;   Label: LAB_00517c18
    JMP 0x00517870                      ; 00517c1a
        ;   XREF to: 00517870 (UNCONDITIONAL_JUMP)  ; LAB_00517870

