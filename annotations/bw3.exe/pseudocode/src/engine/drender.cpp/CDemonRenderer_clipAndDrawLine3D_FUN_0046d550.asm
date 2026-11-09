; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index1
; int              Stack[0xc]:4   vertex_index2
;
; XREF[3]:
;   core_bugs.cpp_FUN_004217c0 at 004218ed
;   core_cloth.cpp_FUN_0043f160 at 0043f300
;   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00549620 at 00549669
;
; Referenced Globals:
;   undefined4 DAT_007303dc
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401310
;   engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0
;   engine_clipper.c_interpolateVertexRightClip_FUN_004390c0
;   engine_clipper.c_interpolateVertexTopClip_FUN_004392c0
;   engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630
;   engine_prim.c_replaceWWithDepth_FUN_00515a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d550
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
    PUSH ESI                            ; 0046d551
    PUSH EDI                            ; 0046d552
    PUSH EBP                            ; 0046d553
    SUB ESP,0x90                        ; 0046d554
    MOV EBP,dword ptr [ESP + 0xa4]      ; 0046d55a
    MOV EAX,[0x007303dc]                ; 0046d561 | DAT_007303dc
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0046d566
    MOV [0x01c6b5c0],EAX                ; 0046d56d | DAT_01c6b5c0
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046d572
    MOV ECX,0xc                         ; 0046d579
    SUB EAX,EBX                         ; 0046d57e
    MOV ESI,dword ptr [EBP]             ; 0046d580
    SHL EAX,0x4                         ; 0046d583
    LEA EDI,[ESP + 0x60]                ; 0046d586
    ADD ESI,EAX                         ; 0046d58a
    MOV EBX,dword ptr [ESP + 0xac]      ; 0046d58c
    MOVSD.REP ES:EDI,ESI                ; 0046d593
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046d595
    MOV ECX,0xc                         ; 0046d59c
    SUB EAX,EBX                         ; 0046d5a1
    MOV ESI,dword ptr [EBP]             ; 0046d5a3
    SHL EAX,0x4                         ; 0046d5a6
    MOV EDI,ESP                         ; 0046d5a9
    ADD ESI,EAX                         ; 0046d5ab
    MOVSD.REP ES:EDI,ESI                ; 0046d5ad
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046d5af
    AND EAX,dword ptr [ESP + 0x10]      ; 0046d5b3
    TEST EAX,0x80000000                 ; 0046d5b7
    JNZ 0x0046d7ae                      ; 0046d5bc
        ;   XREF to: 0046d7ae (CONDITIONAL_JUMP)  ; LAB_0046d7ae
    XOR EBX,EBX                         ; 0046d5c2
        ;   Label: LAB_0046d5c2
    MOV EAX,dword ptr [ESP]             ; 0046d5c4
        ;   Label: LAB_0046d5c4
    CMP EAX,dword ptr [ESP + 0x8]       ; 0046d5c7
    JLE 0x0046d5f3                      ; 0046d5cb
        ;   XREF to: 0046d5f3 (CONDITIONAL_JUMP)  ; LAB_0046d5f3
    LEA EAX,[ESP + 0x30]                ; 0046d5cd
    PUSH EAX                            ; 0046d5d1
    LEA EAX,[ESP + 0x4]                 ; 0046d5d2
    PUSH EAX                            ; 0046d5d6
    LEA EAX,[ESP + 0x68]                ; 0046d5d7
    PUSH EAX                            ; 0046d5db
    LEA EDI,[ESP + 0xc]                 ; 0046d5dc
    LEA ESI,[ESP + 0x3c]                ; 0046d5e0
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 0046d5e4
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_004390c0()
    MOV ECX,0xc                         ; 0046d5e9
    ADD ESP,0xc                         ; 0046d5ee
    MOVSD.REP ES:EDI,ESI                ; 0046d5f1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d5f3
        ;   Label: LAB_0046d5f3
    MOV ESI,dword ptr [ESP]             ; 0046d5f7
    NEG EAX                             ; 0046d5fa
    CMP EAX,ESI                         ; 0046d5fc
    JLE 0x0046d626                      ; 0046d5fe
        ;   XREF to: 0046d626 (CONDITIONAL_JUMP)  ; LAB_0046d626
    LEA EAX,[ESP + 0x30]                ; 0046d600
    PUSH EAX                            ; 0046d604
    LEA EAX,[ESP + 0x4]                 ; 0046d605
    PUSH EAX                            ; 0046d609
    LEA EAX,[ESP + 0x68]                ; 0046d60a
    PUSH EAX                            ; 0046d60e
    LEA EDI,[ESP + 0xc]                 ; 0046d60f
    LEA ESI,[ESP + 0x3c]                ; 0046d613
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 0046d617
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0()
    MOV ECX,0xc                         ; 0046d61c
    ADD ESP,0xc                         ; 0046d621
    MOVSD.REP ES:EDI,ESI                ; 0046d624
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d626
        ;   Label: LAB_0046d626
    CMP EAX,dword ptr [ESP + 0x8]       ; 0046d62a
    JLE 0x0046d656                      ; 0046d62e
        ;   XREF to: 0046d656 (CONDITIONAL_JUMP)  ; LAB_0046d656
    LEA EAX,[ESP + 0x30]                ; 0046d630
    PUSH EAX                            ; 0046d634
    LEA EAX,[ESP + 0x4]                 ; 0046d635
    PUSH EAX                            ; 0046d639
    LEA EAX,[ESP + 0x68]                ; 0046d63a
    PUSH EAX                            ; 0046d63e
    LEA EDI,[ESP + 0xc]                 ; 0046d63f
    LEA ESI,[ESP + 0x3c]                ; 0046d643
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_004392c0 ; 0046d647
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_004392c0()
    MOV ECX,0xc                         ; 0046d64c
    ADD ESP,0xc                         ; 0046d651
    MOVSD.REP ES:EDI,ESI                ; 0046d654
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d656
        ;   Label: LAB_0046d656
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d65a
    NEG EAX                             ; 0046d65e
    CMP EAX,EDX                         ; 0046d660
    JLE 0x0046d68a                      ; 0046d662
        ;   XREF to: 0046d68a (CONDITIONAL_JUMP)  ; LAB_0046d68a
    LEA EAX,[ESP + 0x30]                ; 0046d664
    PUSH EAX                            ; 0046d668
    LEA EAX,[ESP + 0x4]                 ; 0046d669
    PUSH EAX                            ; 0046d66d
    LEA EAX,[ESP + 0x68]                ; 0046d66e
    PUSH EAX                            ; 0046d672
    LEA EDI,[ESP + 0xc]                 ; 0046d673
    LEA ESI,[ESP + 0x3c]                ; 0046d677
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 0046d67b
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0()
    MOV ECX,0xc                         ; 0046d680
    ADD ESP,0xc                         ; 0046d685
    MOVSD.REP ES:EDI,ESI                ; 0046d688
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046d68a
        ;   Label: LAB_0046d68a
    CMP EAX,dword ptr [ESP + 0x68]      ; 0046d68e
    JLE 0x0046d6ba                      ; 0046d692
        ;   XREF to: 0046d6ba (CONDITIONAL_JUMP)  ; LAB_0046d6ba
    LEA EAX,[ESP + 0x30]                ; 0046d694
    PUSH EAX                            ; 0046d698
    LEA EAX,[ESP + 0x64]                ; 0046d699
    PUSH EAX                            ; 0046d69d
    LEA EAX,[ESP + 0x8]                 ; 0046d69e
    PUSH EAX                            ; 0046d6a2
    LEA EDI,[ESP + 0x6c]                ; 0046d6a3
    LEA ESI,[ESP + 0x3c]                ; 0046d6a7
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 0046d6ab
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_004390c0()
    MOV ECX,0xc                         ; 0046d6b0
    ADD ESP,0xc                         ; 0046d6b5
    MOVSD.REP ES:EDI,ESI                ; 0046d6b8
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046d6ba
        ;   Label: LAB_0046d6ba
    MOV ESI,dword ptr [ESP + 0x60]      ; 0046d6be
    NEG EAX                             ; 0046d6c2
    CMP EAX,ESI                         ; 0046d6c4
    JLE 0x0046d6ee                      ; 0046d6c6
        ;   XREF to: 0046d6ee (CONDITIONAL_JUMP)  ; LAB_0046d6ee
    LEA EAX,[ESP + 0x30]                ; 0046d6c8
    PUSH EAX                            ; 0046d6cc
    LEA EAX,[ESP + 0x64]                ; 0046d6cd
    PUSH EAX                            ; 0046d6d1
    LEA EAX,[ESP + 0x8]                 ; 0046d6d2
    PUSH EAX                            ; 0046d6d6
    LEA EDI,[ESP + 0x6c]                ; 0046d6d7
    LEA ESI,[ESP + 0x3c]                ; 0046d6db
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 0046d6df
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0()
    MOV ECX,0xc                         ; 0046d6e4
    ADD ESP,0xc                         ; 0046d6e9
    MOVSD.REP ES:EDI,ESI                ; 0046d6ec
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046d6ee
        ;   Label: LAB_0046d6ee
    CMP EAX,dword ptr [ESP + 0x68]      ; 0046d6f2
    JLE 0x0046d71e                      ; 0046d6f6
        ;   XREF to: 0046d71e (CONDITIONAL_JUMP)  ; LAB_0046d71e
    LEA EAX,[ESP + 0x30]                ; 0046d6f8
    PUSH EAX                            ; 0046d6fc
    LEA EAX,[ESP + 0x64]                ; 0046d6fd
    PUSH EAX                            ; 0046d701
    LEA EAX,[ESP + 0x8]                 ; 0046d702
    PUSH EAX                            ; 0046d706
    LEA EDI,[ESP + 0x6c]                ; 0046d707
    LEA ESI,[ESP + 0x3c]                ; 0046d70b
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_004392c0 ; 0046d70f
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_004392c0()
    MOV ECX,0xc                         ; 0046d714
    ADD ESP,0xc                         ; 0046d719
    MOVSD.REP ES:EDI,ESI                ; 0046d71c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046d71e
        ;   Label: LAB_0046d71e
    MOV EDX,dword ptr [ESP + 0x64]      ; 0046d722
    NEG EAX                             ; 0046d726
    CMP EAX,EDX                         ; 0046d728
    JLE 0x0046d752                      ; 0046d72a
        ;   XREF to: 0046d752 (CONDITIONAL_JUMP)  ; LAB_0046d752
    LEA EAX,[ESP + 0x30]                ; 0046d72c
    PUSH EAX                            ; 0046d730
    LEA EAX,[ESP + 0x64]                ; 0046d731
    PUSH EAX                            ; 0046d735
    LEA EAX,[ESP + 0x8]                 ; 0046d736
    PUSH EAX                            ; 0046d73a
    LEA EDI,[ESP + 0x6c]                ; 0046d73b
    LEA ESI,[ESP + 0x3c]                ; 0046d73f
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 0046d743
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0()
    MOV ECX,0xc                         ; 0046d748
    ADD ESP,0xc                         ; 0046d74d
    MOVSD.REP ES:EDI,ESI                ; 0046d750
    INC EBX                             ; 0046d752
        ;   Label: LAB_0046d752
    CMP EBX,0x2                         ; 0046d753
    JL 0x0046d5c4                       ; 0046d756
        ;   XREF to: 0046d5c4 (CONDITIONAL_JUMP)  ; LAB_0046d5c4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046d75c
    MOV ECX,dword ptr [ESP + 0x68]      ; 0046d760
    CMP EAX,ECX                         ; 0046d764
    JG 0x0046d7a3                       ; 0046d766
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    MOV EBX,ECX                         ; 0046d768
    NEG EBX                             ; 0046d76a
    CMP EBX,EAX                         ; 0046d76c
    JG 0x0046d7a3                       ; 0046d76e
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046d770
    CMP EAX,ECX                         ; 0046d774
    JG 0x0046d7a3                       ; 0046d776
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    CMP EBX,EAX                         ; 0046d778
    JG 0x0046d7a3                       ; 0046d77a
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    MOV EAX,dword ptr [ESP]             ; 0046d77c
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d77f
    CMP EAX,EDX                         ; 0046d783
    JG 0x0046d7a3                       ; 0046d785
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    MOV EBX,EDX                         ; 0046d787
    NEG EBX                             ; 0046d789
    CMP EBX,EAX                         ; 0046d78b
    JG 0x0046d7a3                       ; 0046d78d
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d78f
    CMP EAX,EDX                         ; 0046d793
    JG 0x0046d7a3                       ; 0046d795
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    CMP EBX,EAX                         ; 0046d797
    JG 0x0046d7a3                       ; 0046d799
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    TEST ECX,ECX                        ; 0046d79b
    JLE 0x0046d7a3                      ; 0046d79d
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    TEST EDX,EDX                        ; 0046d79f
    JG 0x0046d7b7                       ; 0046d7a1
        ;   XREF to: 0046d7b7 (CONDITIONAL_JUMP)  ; LAB_0046d7b7
    ADD ESP,0x90                        ; 0046d7a3
        ;   Label: LAB_0046d7a3
    POP EBP                             ; 0046d7a9
    POP EDI                             ; 0046d7aa
    POP ESI                             ; 0046d7ab
    POP EBX                             ; 0046d7ac
    RET                                 ; 0046d7ad
    TEST AL,0xff                        ; 0046d7ae
        ;   Label: LAB_0046d7ae
    JNZ 0x0046d7a3                      ; 0046d7b0
        ;   XREF to: 0046d7a3 (CONDITIONAL_JUMP)  ; LAB_0046d7a3
    JMP 0x0046d5c2                      ; 0046d7b2
        ;   XREF to: 0046d5c2 (UNCONDITIONAL_JUMP)  ; LAB_0046d5c2
    MOV ECX,0xc                         ; 0046d7b7
        ;   Label: LAB_0046d7b7
    MOV EDI,dword ptr [EBP]             ; 0046d7bc
    LEA ESI,[ESP + 0x60]                ; 0046d7bf
    ADD EDI,0x124f20                    ; 0046d7c3
    MOVSD.REP ES:EDI,ESI                ; 0046d7c9
    MOV ECX,0xc                         ; 0046d7cb
    MOV EDI,dword ptr [EBP]             ; 0046d7d0
    MOV ESI,ESP                         ; 0046d7d3
    ADD EDI,0x124f50                    ; 0046d7d5
    PUSH 0x61a6                         ; 0046d7db
    MOVSD.REP ES:EDI,ESI                ; 0046d7e0
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630 ; 0046d7e2
        ;   XREF to: 004e5630 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
    ADD ESP,0x4                         ; 0046d7e7
    PUSH 0x61a7                         ; 0046d7ea
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630 ; 0046d7ef
        ;   XREF to: 004e5630 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
    ADD ESP,0x4                         ; 0046d7f4
    MOV EAX,dword ptr [EBP]             ; 0046d7f7
    PUSH 0x2                            ; 0046d7fa
    ADD EAX,0x124f20                    ; 0046d7fc
    PUSH EAX                            ; 0046d801
    CALL engine_prim.c_replaceWWithDepth_FUN_00515a80 ; 0046d802
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_00515a80()
    MOV EBX,dword ptr [EBP]             ; 0046d807
    LEA EAX,[EBX + 0x124f50]            ; 0046d80a
    ADD ESP,0x8                         ; 0046d810
    MOV ECX,dword ptr [EAX + 0x8]       ; 0046d813
    MOV ESI,dword ptr [EAX + 0x14]      ; 0046d816
    PUSH ECX                            ; 0046d819
    SAR ESI,0x10                        ; 0046d81a
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046d81d
    PUSH ESI                            ; 0046d820
    SAR EAX,0x10                        ; 0046d821
    PUSH EAX                            ; 0046d824
    LEA EAX,[EBX + 0x124f20]            ; 0046d825
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046d82b
    PUSH EBX                            ; 0046d82e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0046d82f
    SAR EBX,0x10                        ; 0046d832
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046d835
    PUSH EBX                            ; 0046d838
    SAR EAX,0x10                        ; 0046d839
    PUSH EAX                            ; 0046d83c
    CALL engine_2d.c_drawLine3D_FUN_00401310 ; 0046d83d
        ;   XREF to: 00401310 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine3D_FUN_00401310(int x1, int y1, uint z1, int x2, ...)
    ADD ESP,0x18                        ; 0046d842
    ADD ESP,0x90                        ; 0046d845
    POP EBP                             ; 0046d84b
    POP EDI                             ; 0046d84c
    POP ESI                             ; 0046d84d
    POP EBX                             ; 0046d84e
    RET                                 ; 0046d84f

