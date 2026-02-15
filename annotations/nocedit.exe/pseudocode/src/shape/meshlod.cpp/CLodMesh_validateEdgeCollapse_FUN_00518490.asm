; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int vertex_idx_3)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_idx_1
; int              Stack[0xc]:4   vertex_idx_2
; int              Stack[0x10]:4   vertex_idx_3
; Local Variables:
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
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 at 00518958
;
; Referenced Globals:
;   int g_LodReplayMode
;
; Called Functions:
;   shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
;   shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
;   shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
;   shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
;   shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518490
        ;   Label: shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
    PUSH ESI                            ; 00518491
    PUSH EDI                            ; 00518492
    PUSH EBP                            ; 00518493
    SUB ESP,0x28                        ; 00518494
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00518497
    MOV EBP,dword ptr [ESP + 0x40]      ; 0051849b
    PUSH EDI                            ; 0051849f
    ADD ESP,0x4                         ; 005184a0
    PUSH 0x0                            ; 005184a3
    MOV EDX,dword ptr [ESP + 0x48]      ; 005184a5
    PUSH EDX                            ; 005184a9
    PUSH EBP                            ; 005184aa
    PUSH EDI                            ; 005184ab
    CALL shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 ; 005184ac
        ;   XREF to: 00515ec0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
    ADD ESP,0x10                        ; 005184b1
    MOV dword ptr [ESP + 0x24],EAX      ; 005184b4
    TEST EAX,EAX                        ; 005184b8
    JL 0x0051851c                       ; 005184ba
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    SHL EAX,0x4                         ; 005184bc
    MOV EDX,EAX                         ; 005184bf
    SHL EAX,0x4                         ; 005184c1
    SUB EAX,EDX                         ; 005184c4
    MOV EDX,dword ptr [EDI + 0x48]      ; 005184c6
    ADD EDX,EAX                         ; 005184c9
    MOV ECX,dword ptr [EDX + 0x14]      ; 005184cb
    MOV dword ptr [ESP + 0x14],EDX      ; 005184ce
    TEST ECX,ECX                        ; 005184d2
    JNZ 0x0051851c                      ; 005184d4
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    CMP dword ptr [EDX + 0x24],0x2      ; 005184d6
    JL 0x0051851c                       ; 005184da
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    IMUL EAX,EBP,0x4c4                  ; 005184dc
    MOV dword ptr [ESP + 0x1c],ECX      ; 005184e2
    MOV dword ptr [ESP + 0xc],EAX       ; 005184e6
    MOV EDX,dword ptr [ESP + 0xc]       ; 005184ea
        ;   Label: LAB_005184ea
    MOV EAX,dword ptr [EDI + 0x4]       ; 005184ee
    ADD EAX,EDX                         ; 005184f1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005184f3
    CMP EDX,dword ptr [EAX + 0x3f8]     ; 005184f7
    JGE 0x00518591                      ; 005184fd
        ;   XREF to: 00518591 (CONDITIONAL_JUMP)  ; LAB_00518591
    PUSH EDX                            ; 00518503
    PUSH EBP                            ; 00518504
    PUSH EDI                            ; 00518505
    CALL shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980 ; 00518506
        ;   XREF to: 0051a980 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980(CLodMesh * this_ptr, int vertex_index, int edge_array_index)
    ADD ESP,0xc                         ; 0051850b
    MOV EBX,dword ptr [ESP + 0x44]      ; 0051850e
    CMP EAX,EBX                         ; 00518512
    JNZ 0x00518529                      ; 00518514
        ;   XREF to: 00518529 (CONDITIONAL_JUMP)  ; LAB_00518529
    INC dword ptr [ESP + 0x1c]          ; 00518516
        ;   Label: LAB_00518516
    JMP 0x005184ea                      ; 0051851a
        ;   XREF to: 005184ea (UNCONDITIONAL_JUMP)  ; LAB_005184ea
    MOV EAX,0xffffffff                  ; 0051851c
        ;   Label: LAB_0051851c
    ADD ESP,0x28                        ; 00518521
    POP EBP                             ; 00518524
    POP EDI                             ; 00518525
    POP ESI                             ; 00518526
    POP EBX                             ; 00518527
    RET                                 ; 00518528
    PUSH 0x0                            ; 00518529
        ;   Label: LAB_00518529
    PUSH EBX                            ; 0051852b
    PUSH EAX                            ; 0051852c
    PUSH EDI                            ; 0051852d
    CALL shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 ; 0051852e
        ;   XREF to: 00515ec0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
    ADD ESP,0x10                        ; 00518533
    TEST EAX,EAX                        ; 00518536
    JL 0x00518516                       ; 00518538
        ;   XREF to: 00518516 (CONDITIONAL_JUMP)  ; LAB_00518516
    IMUL EAX,EAX,0xf0                   ; 0051853a
    XOR EDX,EDX                         ; 00518540
    XOR EBX,EBX                         ; 00518542
    XOR ESI,ESI                         ; 00518544
    MOV dword ptr [ESP + 0x18],EDX      ; 00518546
    MOV dword ptr [ESP + 0x20],EAX      ; 0051854a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0051854e
        ;   Label: LAB_0051854e
    MOV EAX,dword ptr [EDI + 0x48]      ; 00518552
    ADD EAX,ECX                         ; 00518555
    CMP EBX,dword ptr [EAX + 0x24]      ; 00518557
    JGE 0x0051857d                      ; 0051855a
        ;   XREF to: 0051857d (CONDITIONAL_JUMP)  ; LAB_0051857d
    IMUL EAX,dword ptr [ESI + EAX*0x1 + 0x28],0x8c ; 0051855c
    MOV EDX,dword ptr [EDI + 0xc]       ; 00518564
    PUSH EBP                            ; 00518567
    ADD EAX,EDX                         ; 00518568
    PUSH EAX                            ; 0051856a
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 0051856b
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00518570
    TEST EAX,EAX                        ; 00518573
    JGE 0x00518516                      ; 00518575
        ;   XREF to: 00518516 (CONDITIONAL_JUMP)  ; LAB_00518516
    INC EBX                             ; 00518577
    ADD ESI,0x4                         ; 00518578
    JMP 0x0051854e                      ; 0051857b
        ;   XREF to: 0051854e (UNCONDITIONAL_JUMP)  ; LAB_0051854e
    CMP dword ptr [ESP + 0x18],0x0      ; 0051857d
        ;   Label: LAB_0051857d
    JNZ 0x00518516                      ; 00518582
        ;   XREF to: 00518516 (CONDITIONAL_JUMP)  ; LAB_00518516
    MOV EAX,0xffffffff                  ; 00518584
    ADD ESP,0x28                        ; 00518589
    POP EBP                             ; 0051858c
    POP EDI                             ; 0051858d
    POP ESI                             ; 0051858e
    POP EBX                             ; 0051858f
    RET                                 ; 00518590
    PUSH EBP                            ; 00518591
        ;   Label: LAB_00518591
    PUSH EDI                            ; 00518592
    CALL shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740 ; 00518593
        ;   XREF to: 00518740 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh * this_ptr, int vertex_idx)
    ADD ESP,0x8                         ; 00518598
    TEST EAX,EAX                        ; 0051859b
    JNZ 0x005186d2                      ; 0051859d
        ;   XREF to: 005186d2 (CONDITIONAL_JUMP)  ; LAB_005186d2
    CMP dword ptr [0x02f33330],0x0      ; 005185a3 | g_LodReplayMode
        ;   Label: LAB_005185a3
    JNZ 0x00518729                      ; 005185aa
        ;   XREF to: 00518729 (CONDITIONAL_JUMP)  ; LAB_00518729
    MOV EAX,dword ptr [ESP + 0x44]      ; 005185b0
    MOV dword ptr [ESP + 0x4],EAX       ; 005185b4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005185b8
    MOV dword ptr [ESP + 0x8],EBP       ; 005185bc
    MOV EDX,dword ptr [EAX + 0x24]      ; 005185c0
    XOR EBP,EBP                         ; 005185c3
    TEST EDX,EDX                        ; 005185c5
    JLE 0x0051866e                      ; 005185c7
        ;   XREF to: 0051866e (CONDITIONAL_JUMP)  ; LAB_0051866e
    MOV EAX,dword ptr [EDI + 0xc]       ; 005185cd
    MOV ESI,dword ptr [ESP + 0x14]      ; 005185d0
    MOV dword ptr [ESP + 0x10],EAX      ; 005185d4
    IMUL EBX,dword ptr [ESI + 0x28],0x8c ; 005185d8
        ;   Label: LAB_005185d8
    ADD EBX,dword ptr [ESP + 0x10]      ; 005185df
    XOR EAX,EAX                         ; 005185e3
    MOV ECX,dword ptr [EBX + 0x34]      ; 005185e5
    MOV EDX,EBX                         ; 005185e8
    CMP ECX,dword ptr [ESP + 0x24]      ; 005185ea
    JZ 0x00518602                       ; 005185ee
        ;   XREF to: 00518602 (CONDITIONAL_JUMP)  ; LAB_00518602
    INC EAX                             ; 005185f0
        ;   Label: LAB_005185f0
    ADD EDX,0x4                         ; 005185f1
    CMP EAX,0x3                         ; 005185f4
    JGE 0x0051865b                      ; 005185f7
        ;   XREF to: 0051865b (CONDITIONAL_JUMP)  ; LAB_0051865b
    MOV ECX,dword ptr [EDX + 0x34]      ; 005185f9
    CMP ECX,dword ptr [ESP + 0x24]      ; 005185fc
    JNZ 0x005185f0                      ; 00518600
        ;   XREF to: 005185f0 (CONDITIONAL_JUMP)  ; LAB_005185f0
    LEA EDX,[EAX + -0x1]                ; 00518602
        ;   Label: LAB_00518602
    TEST EDX,EDX                        ; 00518605
    JL 0x00518711                       ; 00518607
        ;   XREF to: 00518711 (CONDITIONAL_JUMP)  ; LAB_00518711
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x34] ; 0051860d
        ;   Label: LAB_0051860d
    IMUL EDX,ECX,0xf0                   ; 00518611
    MOV dword ptr [ESP],EDX             ; 00518617
    MOV ECX,dword ptr [ESP]             ; 0051861a
    MOV EDX,dword ptr [EDI + 0x48]      ; 0051861d
    INC EAX                             ; 00518620
    ADD EDX,ECX                         ; 00518621
    CMP EAX,0x3                         ; 00518623
    JL 0x0051862a                       ; 00518626
        ;   XREF to: 0051862a (CONDITIONAL_JUMP)  ; LAB_0051862a
    XOR EAX,EAX                         ; 00518628
    IMUL EAX,dword ptr [EBX + EAX*0x4 + 0x34],0xf0 ; 0051862a
        ;   Label: LAB_0051862a
    MOV EBX,dword ptr [EDI + 0x48]      ; 00518632
    ADD EAX,EBX                         ; 00518635
    CMP dword ptr [EDX + 0x18],0x0      ; 00518637
    JZ 0x00518647                       ; 0051863b
        ;   XREF to: 00518647 (CONDITIONAL_JUMP)  ; LAB_00518647
    CMP dword ptr [EAX + 0x18],0x0      ; 0051863d
    JNZ 0x0051851c                      ; 00518641
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    CMP dword ptr [EDX + 0x18],0x1      ; 00518647
        ;   Label: LAB_00518647
    JG 0x0051851c                       ; 0051864b
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    CMP dword ptr [EAX + 0x18],0x1      ; 00518651
    JG 0x0051851c                       ; 00518655
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051865b
        ;   Label: LAB_0051865b
    INC EBP                             ; 0051865f
    MOV EBX,dword ptr [EAX + 0x24]      ; 00518660
    ADD ESI,0x4                         ; 00518663
    CMP EBP,EBX                         ; 00518666
    JL 0x005185d8                       ; 00518668
        ;   XREF to: 005185d8 (CONDITIONAL_JUMP)  ; LAB_005185d8
    MOV ESI,dword ptr [ESP + 0x8]       ; 0051866e
        ;   Label: LAB_0051866e
    PUSH ESI                            ; 00518672
    PUSH EDI                            ; 00518673
    CALL shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420 ; 00518674
        ;   XREF to: 00516420 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420(CLodMesh * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00518679
    MOV EBP,dword ptr [ESP + 0x4]       ; 0051867c
    PUSH EBP                            ; 00518680
    PUSH EDI                            ; 00518681
    MOV EBX,EAX                         ; 00518682
    MOV ESI,EAX                         ; 00518684
    CALL shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420 ; 00518686
        ;   XREF to: 00516420 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420(CLodMesh * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 0051868b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0051868e
    MOV EDI,dword ptr [ECX + 0x18]      ; 00518692
    MOV EDX,EAX                         ; 00518695
    TEST EDI,EDI                        ; 00518697
    JZ 0x0051871b                       ; 00518699
        ;   XREF to: 0051871b (CONDITIONAL_JUMP)  ; LAB_0051871b
    CMP EBX,0x3                         ; 0051869f
    JL 0x005186ad                       ; 005186a2
        ;   XREF to: 005186ad (CONDITIONAL_JUMP)  ; LAB_005186ad
    CMP EAX,0x3                         ; 005186a4
    JGE 0x0051851c                      ; 005186a7
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    CMP ESI,0x1                         ; 005186ad
        ;   Label: LAB_005186ad
    JNZ 0x005186bb                      ; 005186b0
        ;   XREF to: 005186bb (CONDITIONAL_JUMP)  ; LAB_005186bb
    CMP EDX,0x2                         ; 005186b2
    JNZ 0x0051851c                      ; 005186b5
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    CMP EDX,0x1                         ; 005186bb
        ;   Label: LAB_005186bb
    JNZ 0x00518729                      ; 005186be
        ;   XREF to: 00518729 (CONDITIONAL_JUMP)  ; LAB_00518729
    CMP ESI,0x2                         ; 005186c0
    JZ 0x00518729                       ; 005186c3
        ;   XREF to: 00518729 (CONDITIONAL_JUMP)  ; LAB_00518729
    MOV EAX,0xffffffff                  ; 005186c5
    ADD ESP,0x28                        ; 005186ca
    POP EBP                             ; 005186cd
    POP EDI                             ; 005186ce
    POP ESI                             ; 005186cf
    POP EBX                             ; 005186d0
    RET                                 ; 005186d1
    MOV EBX,dword ptr [ESP + 0x44]      ; 005186d2
        ;   Label: LAB_005186d2
    PUSH EBX                            ; 005186d6
    PUSH EDI                            ; 005186d7
    CALL shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740 ; 005186d8
        ;   XREF to: 00518740 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh * this_ptr, int vertex_idx)
    ADD ESP,0x8                         ; 005186dd
    TEST EAX,EAX                        ; 005186e0
    JZ 0x005185a3                       ; 005186e2
        ;   XREF to: 005185a3 (CONDITIONAL_JUMP)  ; LAB_005185a3
    MOV EAX,dword ptr [ESP + 0x24]      ; 005186e8
    SHL EAX,0x4                         ; 005186ec
    MOV EDX,EAX                         ; 005186ef
    SHL EAX,0x4                         ; 005186f1
    SUB EAX,EDX                         ; 005186f4
    MOV EDX,dword ptr [EDI + 0x48]      ; 005186f6
    CMP dword ptr [EDX + EAX*0x1 + 0x24],0x2 ; 005186f9
    JL 0x005185a3                       ; 005186fe
        ;   XREF to: 005185a3 (CONDITIONAL_JUMP)  ; LAB_005185a3
    MOV EAX,0xffffffff                  ; 00518704
    ADD ESP,0x28                        ; 00518709
    POP EBP                             ; 0051870c
    POP EDI                             ; 0051870d
    POP ESI                             ; 0051870e
    POP EBX                             ; 0051870f
    RET                                 ; 00518710
    MOV EDX,0x2                         ; 00518711
        ;   Label: LAB_00518711
    JMP 0x0051860d                      ; 00518716
        ;   XREF to: 0051860d (UNCONDITIONAL_JUMP)  ; LAB_0051860d
    CMP EAX,0x1                         ; 0051871b
        ;   Label: LAB_0051871b
    JL 0x00518729                       ; 0051871e
        ;   XREF to: 00518729 (CONDITIONAL_JUMP)  ; LAB_00518729
    CMP EBX,0x1                         ; 00518720
    JGE 0x0051851c                      ; 00518723
        ;   XREF to: 0051851c (CONDITIONAL_JUMP)  ; LAB_0051851c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00518729
        ;   Label: LAB_00518729
    ADD ESP,0x28                        ; 0051872d
    POP EBP                             ; 00518730
    POP EDI                             ; 00518731
    POP ESI                             ; 00518732
    POP EBX                             ; 00518733
    RET                                 ; 00518734

