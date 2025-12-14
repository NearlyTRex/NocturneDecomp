; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_findSharedEdge_FUN_004635b0(int * edge1_vertices, int * edge2_vertices, int vertex_count, int * shared_edge_type)
;
; Parameters:
; int *            Stack[0x4]:4   edge1_vertices
; int *            Stack[0x8]:4   edge2_vertices
; int              Stack[0xc]:4   vertex_count
; int *            Stack[0x10]:4   shared_edge_type
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_complexPolygonReduction_FUN_00463b30 at 00463d63
;
; Referenced Globals:
;   void* switchdataD_004637c4 = 004636e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004635b0
        ;   Label: shape_design.c_findSharedEdge_FUN_004635b0
    PUSH ESI                            ; 004635b1
    PUSH EDI                            ; 004635b2
    PUSH EBP                            ; 004635b3
    MOV EBP,ESP                         ; 004635b4
    SUB ESP,0x8                         ; 004635b6
    MOV EAX,dword ptr [EBP + 0x20]      ; 004635bc
    CMP dword ptr [EAX],-0x1            ; 004635bf
    JNZ 0x004636db                      ; 004635c2
        ;   XREF to: 004636db (CONDITIONAL_JUMP)  ; LAB_004636db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004635c8
    MOV EDX,dword ptr [EAX]             ; 004635cb
    MOV EAX,dword ptr [EBP + 0x18]      ; 004635cd
    CMP EDX,dword ptr [EAX + 0x8]       ; 004635d0
    JNZ 0x004635e3                      ; 004635d3
        ;   XREF to: 004635e3 (CONDITIONAL_JUMP)  ; LAB_004635e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004635d5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004635d8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004635db
    CMP EDX,dword ptr [EAX + 0x4]       ; 004635de
    JZ 0x004635e5                       ; 004635e1
        ;   XREF to: 004635e5 (CONDITIONAL_JUMP)  ; LAB_004635e5
    JMP 0x004635fa                      ; 004635e3
        ;   XREF to: 004635fa (UNCONDITIONAL_JUMP)  ; LAB_004635fa
        ;   Label: LAB_004635e3
    MOV EAX,dword ptr [EBP + 0x20]      ; 004635e5
        ;   Label: LAB_004635e5
    MOV dword ptr [EAX],0x0             ; 004635e8
    MOV dword ptr [EBP + -0x4],0x1      ; 004635ee
    JMP 0x004637f1                      ; 004635f5
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    CMP dword ptr [EBP + 0x1c],0x3      ; 004635fa
        ;   Label: LAB_004635fa
    JNZ 0x0046366c                      ; 004635fe
        ;   XREF to: 0046366c (CONDITIONAL_JUMP)  ; LAB_0046366c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463604
    MOV EDX,dword ptr [EAX + 0x8]       ; 00463607
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046360a
    CMP EDX,dword ptr [EAX + 0x4]       ; 0046360d
    JNZ 0x0046361e                      ; 00463610
        ;   XREF to: 0046361e (CONDITIONAL_JUMP)  ; LAB_0046361e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463612
    MOV EDX,dword ptr [EAX]             ; 00463615
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463617
    CMP EDX,dword ptr [EAX]             ; 0046361a
    JZ 0x00463620                       ; 0046361c
        ;   XREF to: 00463620 (CONDITIONAL_JUMP)  ; LAB_00463620
    JMP 0x00463635                      ; 0046361e
        ;   XREF to: 00463635 (UNCONDITIONAL_JUMP)  ; LAB_00463635
        ;   Label: LAB_0046361e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00463620
        ;   Label: LAB_00463620
    MOV dword ptr [EAX],0x1             ; 00463623
    MOV dword ptr [EBP + -0x4],0x1      ; 00463629
    JMP 0x004637f1                      ; 00463630
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463635
        ;   Label: LAB_00463635
    MOV EDX,dword ptr [EAX + 0x4]       ; 00463638
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046363b
    CMP EDX,dword ptr [EAX]             ; 0046363e
    JNZ 0x00463650                      ; 00463640
        ;   XREF to: 00463650 (CONDITIONAL_JUMP)  ; LAB_00463650
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463642
    MOV EDX,dword ptr [EAX + 0x8]       ; 00463645
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463648
    CMP EDX,dword ptr [EAX + 0x8]       ; 0046364b
    JZ 0x00463652                       ; 0046364e
        ;   XREF to: 00463652 (CONDITIONAL_JUMP)  ; LAB_00463652
    JMP 0x00463667                      ; 00463650
        ;   XREF to: 00463667 (UNCONDITIONAL_JUMP)  ; LAB_00463667
        ;   Label: LAB_00463650
    MOV EAX,dword ptr [EBP + 0x20]      ; 00463652
        ;   Label: LAB_00463652
    MOV dword ptr [EAX],0x2             ; 00463655
    MOV dword ptr [EBP + -0x4],0x1      ; 0046365b
    JMP 0x004637f1                      ; 00463662
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004636d6                      ; 00463667
        ;   XREF to: 004636d6 (UNCONDITIONAL_JUMP)  ; LAB_004636d6
        ;   Label: LAB_00463667
    CMP dword ptr [EBP + 0x1c],0x4      ; 0046366c
        ;   Label: LAB_0046366c
    JNZ 0x004636d6                      ; 00463670
        ;   XREF to: 004636d6 (CONDITIONAL_JUMP)  ; LAB_004636d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463672
    MOV EDX,dword ptr [EAX + 0xc]       ; 00463675
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463678
    CMP EDX,dword ptr [EAX + 0x4]       ; 0046367b
    JNZ 0x0046368c                      ; 0046367e
        ;   XREF to: 0046368c (CONDITIONAL_JUMP)  ; LAB_0046368c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463680
    MOV EDX,dword ptr [EAX]             ; 00463683
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463685
    CMP EDX,dword ptr [EAX]             ; 00463688
    JZ 0x0046368e                       ; 0046368a
        ;   XREF to: 0046368e (CONDITIONAL_JUMP)  ; LAB_0046368e
    JMP 0x004636a3                      ; 0046368c
        ;   XREF to: 004636a3 (UNCONDITIONAL_JUMP)  ; LAB_004636a3
        ;   Label: LAB_0046368c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046368e
        ;   Label: LAB_0046368e
    MOV dword ptr [EAX],0x3             ; 00463691
    MOV dword ptr [EBP + -0x4],0x1      ; 00463697
    JMP 0x004637f1                      ; 0046369e
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004636a3
        ;   Label: LAB_004636a3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004636a6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004636a9
    CMP EDX,dword ptr [EAX + 0xc]       ; 004636ac
    JNZ 0x004636bf                      ; 004636af
        ;   XREF to: 004636bf (CONDITIONAL_JUMP)  ; LAB_004636bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004636b1
    MOV EDX,dword ptr [EAX + 0x8]       ; 004636b4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004636b7
    CMP EDX,dword ptr [EAX + 0x8]       ; 004636ba
    JZ 0x004636c1                       ; 004636bd
        ;   XREF to: 004636c1 (CONDITIONAL_JUMP)  ; LAB_004636c1
    JMP 0x004636d6                      ; 004636bf
        ;   XREF to: 004636d6 (UNCONDITIONAL_JUMP)  ; LAB_004636d6
        ;   Label: LAB_004636bf
    MOV EAX,dword ptr [EBP + 0x20]      ; 004636c1
        ;   Label: LAB_004636c1
    MOV dword ptr [EAX],0x4             ; 004636c4
    MOV dword ptr [EBP + -0x4],0x1      ; 004636ca
    JMP 0x004637f1                      ; 004636d1
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004637ea                      ; 004636d6
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_004636d6
    MOV EAX,dword ptr [EBP + 0x20]      ; 004636db
        ;   Label: LAB_004636db
    MOV EAX,dword ptr [EAX]             ; 004636de
    MOV dword ptr [EBP + -0x8],EAX      ; 004636e0
    JMP 0x004637d8                      ; 004636e3
        ;   XREF to: 004637d8 (UNCONDITIONAL_JUMP)  ; LAB_004637d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004636e8
        ;   Label: caseD_0
    MOV EDX,dword ptr [EAX]             ; 004636eb
    MOV EAX,dword ptr [EBP + 0x18]      ; 004636ed
    CMP EDX,dword ptr [EAX + 0x8]       ; 004636f0
    JNZ 0x00463703                      ; 004636f3
        ;   XREF to: 00463703 (CONDITIONAL_JUMP)  ; LAB_00463703
    MOV EAX,dword ptr [EBP + 0x14]      ; 004636f5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004636f8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004636fb
    CMP EDX,dword ptr [EAX + 0x4]       ; 004636fe
    JZ 0x00463705                       ; 00463701
        ;   XREF to: 00463705 (CONDITIONAL_JUMP)  ; LAB_00463705
    JMP 0x00463711                      ; 00463703
        ;   XREF to: 00463711 (UNCONDITIONAL_JUMP)  ; LAB_00463711
        ;   Label: LAB_00463703
    MOV dword ptr [EBP + -0x4],0x1      ; 00463705
        ;   Label: LAB_00463705
    JMP 0x004637f1                      ; 0046370c
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004637ea                      ; 00463711
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_00463711
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463716
        ;   Label: caseD_1
    MOV EDX,dword ptr [EAX + 0x8]       ; 00463719
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046371c
    CMP EDX,dword ptr [EAX + 0x4]       ; 0046371f
    JNZ 0x00463730                      ; 00463722
        ;   XREF to: 00463730 (CONDITIONAL_JUMP)  ; LAB_00463730
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463724
    MOV EDX,dword ptr [EAX]             ; 00463727
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463729
    CMP EDX,dword ptr [EAX]             ; 0046372c
    JZ 0x00463732                       ; 0046372e
        ;   XREF to: 00463732 (CONDITIONAL_JUMP)  ; LAB_00463732
    JMP 0x0046373e                      ; 00463730
        ;   XREF to: 0046373e (UNCONDITIONAL_JUMP)  ; LAB_0046373e
        ;   Label: LAB_00463730
    MOV dword ptr [EBP + -0x4],0x1      ; 00463732
        ;   Label: LAB_00463732
    JMP 0x004637f1                      ; 00463739
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004637ea                      ; 0046373e
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_0046373e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463743
        ;   Label: caseD_2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00463746
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463749
    CMP EDX,dword ptr [EAX]             ; 0046374c
    JNZ 0x0046375e                      ; 0046374e
        ;   XREF to: 0046375e (CONDITIONAL_JUMP)  ; LAB_0046375e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463750
    MOV EDX,dword ptr [EAX + 0x8]       ; 00463753
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463756
    CMP EDX,dword ptr [EAX + 0x8]       ; 00463759
    JZ 0x00463760                       ; 0046375c
        ;   XREF to: 00463760 (CONDITIONAL_JUMP)  ; LAB_00463760
    JMP 0x0046376c                      ; 0046375e
        ;   XREF to: 0046376c (UNCONDITIONAL_JUMP)  ; LAB_0046376c
        ;   Label: LAB_0046375e
    MOV dword ptr [EBP + -0x4],0x1      ; 00463760
        ;   Label: LAB_00463760
    JMP 0x004637f1                      ; 00463767
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004637ea                      ; 0046376c
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_0046376c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463771
        ;   Label: caseD_3
    MOV EDX,dword ptr [EAX + 0xc]       ; 00463774
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463777
    CMP EDX,dword ptr [EAX + 0x4]       ; 0046377a
    JNZ 0x0046378b                      ; 0046377d
        ;   XREF to: 0046378b (CONDITIONAL_JUMP)  ; LAB_0046378b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046377f
    MOV EDX,dword ptr [EAX]             ; 00463782
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463784
    CMP EDX,dword ptr [EAX]             ; 00463787
    JZ 0x0046378d                       ; 00463789
        ;   XREF to: 0046378d (CONDITIONAL_JUMP)  ; LAB_0046378d
    JMP 0x00463796                      ; 0046378b
        ;   XREF to: 00463796 (UNCONDITIONAL_JUMP)  ; LAB_00463796
        ;   Label: LAB_0046378b
    MOV dword ptr [EBP + -0x4],0x1      ; 0046378d
        ;   Label: LAB_0046378d
    JMP 0x004637f1                      ; 00463794
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004637ea                      ; 00463796
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_00463796
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463798
        ;   Label: caseD_4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046379b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046379e
    CMP EDX,dword ptr [EAX + 0xc]       ; 004637a1
    JNZ 0x004637b4                      ; 004637a4
        ;   XREF to: 004637b4 (CONDITIONAL_JUMP)  ; LAB_004637b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004637a6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004637a9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004637ac
    CMP EDX,dword ptr [EAX + 0x8]       ; 004637af
    JZ 0x004637b6                       ; 004637b2
        ;   XREF to: 004637b6 (CONDITIONAL_JUMP)  ; LAB_004637b6
    JMP 0x004637bf                      ; 004637b4
        ;   XREF to: 004637bf (UNCONDITIONAL_JUMP)  ; LAB_004637bf
        ;   Label: LAB_004637b4
    MOV dword ptr [EBP + -0x4],0x1      ; 004637b6
        ;   Label: LAB_004637b6
    JMP 0x004637f1                      ; 004637bd
        ;   XREF to: 004637f1 (UNCONDITIONAL_JUMP)  ; LAB_004637f1
    JMP 0x004637ea                      ; 004637bf
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_004637bf
    JMP 0x004637ea                      ; 004637c1
        ;   XREF to: 004637ea (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_004637c1
    CMP dword ptr [EBP + -0x8],0x4      ; 004637d8
        ;   Label: LAB_004637d8
    JA 0x004637c1                       ; 004637dc
        ;   XREF to: 004637c1 (CONDITIONAL_JUMP)  ; LAB_004637c1
    MOV EAX,dword ptr [EBP + -0x8]      ; 004637de
    SHL EAX,0x2                         ; 004637e1
    JMP dword ptr [EAX + 0x4637c4]      ; 004637e4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EBP + -0x4],0x0      ; 004637ea
        ;   Label: default
    MOV EAX,dword ptr [EBP + -0x4]      ; 004637f1
        ;   Label: LAB_004637f1
    MOV ESP,EBP                         ; 004637f4
    POP EBP                             ; 004637f6
    POP EDI                             ; 004637f7
    POP ESI                             ; 004637f8
    POP EBX                             ; 004637f9
    RET                                 ; 004637fa

