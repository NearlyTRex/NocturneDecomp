; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_3d_c_FUN_00409590(uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)
;
;
; XREF[2]:
;   engine_3d.c_FUN_00405900 at 00405986
;   engine_3d.c_FUN_00409510 at 00409575
;
; Referenced Globals:
;   undefined4 DAT_006af5bc
;   undefined4 DAT_006af5c4
;   undefined4 DAT_006af5c8
;   undefined4 DAT_006af5ec
;   undefined4 DAT_006af5f4
;   undefined4 DAT_006af5f8
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401710
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00431530
;   engine_clipper.c_interpolateVertexRightClip_FUN_00431630
;   engine_clipper.c_interpolateVertexTopClip_FUN_00431830
;   engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
;   engine_prim.c_prepareDepthBuffer_FUN_004f9870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409590
        ;   Label: engine_3d.c_FUN_00409590
    PUSH ESI                            ; 00409591
    PUSH EDI                            ; 00409592
    PUSH EBP                            ; 00409593
    SUB ESP,0x30                        ; 00409594
    MOV EAX,dword ptr [ESP + 0x54]      ; 00409597
    AND EAX,dword ptr [ESP + 0x84]      ; 0040959b
    TEST EAX,0x80000000                 ; 004095a2
    JNZ 0x004097a1                      ; 004095a7
        ;   XREF to: 004097a1 (CONDITIONAL_JUMP)  ; LAB_004097a1
    XOR EBX,EBX                         ; 004095ad
        ;   Label: LAB_004095ad
    MOV EAX,dword ptr [ESP + 0x74]      ; 004095af
        ;   Label: LAB_004095af
    CMP EAX,dword ptr [ESP + 0x7c]      ; 004095b3
    JLE 0x004095e0                      ; 004095b7
        ;   XREF to: 004095e0 (CONDITIONAL_JUMP)  ; LAB_004095e0
    MOV EAX,ESP                         ; 004095b9
    PUSH EAX                            ; 004095bb
    LEA EAX,[ESP + 0x78]                ; 004095bc
    PUSH EAX                            ; 004095c0
    LEA EAX,[ESP + 0x4c]                ; 004095c1
    PUSH EAX                            ; 004095c5
    LEA EDI,[ESP + 0x80]                ; 004095c6
    LEA ESI,[ESP + 0xc]                 ; 004095cd
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 004095d1
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00431530()
    MOV ECX,0xc                         ; 004095d6
    ADD ESP,0xc                         ; 004095db
    MOVSD.REP ES:EDI,ESI                ; 004095de
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004095e0
        ;   Label: LAB_004095e0
    MOV ESI,dword ptr [ESP + 0x74]      ; 004095e4
    NEG EAX                             ; 004095e8
    CMP EAX,ESI                         ; 004095ea
    JLE 0x00409615                      ; 004095ec
        ;   XREF to: 00409615 (CONDITIONAL_JUMP)  ; LAB_00409615
    MOV EAX,ESP                         ; 004095ee
    PUSH EAX                            ; 004095f0
    LEA EAX,[ESP + 0x78]                ; 004095f1
    PUSH EAX                            ; 004095f5
    LEA EAX,[ESP + 0x4c]                ; 004095f6
    PUSH EAX                            ; 004095fa
    LEA EDI,[ESP + 0x80]                ; 004095fb
    LEA ESI,[ESP + 0xc]                 ; 00409602
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 00409606
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_00431630()
    MOV ECX,0xc                         ; 0040960b
    ADD ESP,0xc                         ; 00409610
    MOVSD.REP ES:EDI,ESI                ; 00409613
    MOV EAX,dword ptr [ESP + 0x78]      ; 00409615
        ;   Label: LAB_00409615
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00409619
    JLE 0x00409646                      ; 0040961d
        ;   XREF to: 00409646 (CONDITIONAL_JUMP)  ; LAB_00409646
    MOV EAX,ESP                         ; 0040961f
    PUSH EAX                            ; 00409621
    LEA EAX,[ESP + 0x78]                ; 00409622
    PUSH EAX                            ; 00409626
    LEA EAX,[ESP + 0x4c]                ; 00409627
    PUSH EAX                            ; 0040962b
    LEA EDI,[ESP + 0x80]                ; 0040962c
    LEA ESI,[ESP + 0xc]                 ; 00409633
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 00409637
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_00431730()
    MOV ECX,0xc                         ; 0040963c
    ADD ESP,0xc                         ; 00409641
    MOVSD.REP ES:EDI,ESI                ; 00409644
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00409646
        ;   Label: LAB_00409646
    MOV EBP,dword ptr [ESP + 0x78]      ; 0040964a
    NEG EAX                             ; 0040964e
    CMP EAX,EBP                         ; 00409650
    JLE 0x0040967b                      ; 00409652
        ;   XREF to: 0040967b (CONDITIONAL_JUMP)  ; LAB_0040967b
    MOV EAX,ESP                         ; 00409654
    PUSH EAX                            ; 00409656
    LEA EAX,[ESP + 0x78]                ; 00409657
    PUSH EAX                            ; 0040965b
    LEA EAX,[ESP + 0x4c]                ; 0040965c
    PUSH EAX                            ; 00409660
    LEA EDI,[ESP + 0x80]                ; 00409661
    LEA ESI,[ESP + 0xc]                 ; 00409668
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 0040966c
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_00431830()
    MOV ECX,0xc                         ; 00409671
    ADD ESP,0xc                         ; 00409676
    MOVSD.REP ES:EDI,ESI                ; 00409679
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040967b
        ;   Label: LAB_0040967b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0040967f
    JLE 0x004096a9                      ; 00409683
        ;   XREF to: 004096a9 (CONDITIONAL_JUMP)  ; LAB_004096a9
    MOV EAX,ESP                         ; 00409685
    PUSH EAX                            ; 00409687
    LEA EAX,[ESP + 0x48]                ; 00409688
    PUSH EAX                            ; 0040968c
    LEA EAX,[ESP + 0x7c]                ; 0040968d
    PUSH EAX                            ; 00409691
    LEA EDI,[ESP + 0x50]                ; 00409692
    LEA ESI,[ESP + 0xc]                 ; 00409696
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 0040969a
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00431530()
    MOV ECX,0xc                         ; 0040969f
    ADD ESP,0xc                         ; 004096a4
    MOVSD.REP ES:EDI,ESI                ; 004096a7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004096a9
        ;   Label: LAB_004096a9
    MOV ECX,dword ptr [ESP + 0x44]      ; 004096ad
    NEG EAX                             ; 004096b1
    CMP EAX,ECX                         ; 004096b3
    JLE 0x004096db                      ; 004096b5
        ;   XREF to: 004096db (CONDITIONAL_JUMP)  ; LAB_004096db
    MOV EAX,ESP                         ; 004096b7
    PUSH EAX                            ; 004096b9
    LEA EAX,[ESP + 0x48]                ; 004096ba
    PUSH EAX                            ; 004096be
    LEA EAX,[ESP + 0x7c]                ; 004096bf
    PUSH EAX                            ; 004096c3
    LEA EDI,[ESP + 0x50]                ; 004096c4
    LEA ESI,[ESP + 0xc]                 ; 004096c8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 004096cc
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_00431630()
    MOV ECX,0xc                         ; 004096d1
    ADD ESP,0xc                         ; 004096d6
    MOVSD.REP ES:EDI,ESI                ; 004096d9
    MOV EAX,dword ptr [ESP + 0x48]      ; 004096db
        ;   Label: LAB_004096db
    CMP EAX,dword ptr [ESP + 0x4c]      ; 004096df
    JLE 0x00409709                      ; 004096e3
        ;   XREF to: 00409709 (CONDITIONAL_JUMP)  ; LAB_00409709
    MOV EAX,ESP                         ; 004096e5
    PUSH EAX                            ; 004096e7
    LEA EAX,[ESP + 0x48]                ; 004096e8
    PUSH EAX                            ; 004096ec
    LEA EAX,[ESP + 0x7c]                ; 004096ed
    PUSH EAX                            ; 004096f1
    LEA EDI,[ESP + 0x50]                ; 004096f2
    LEA ESI,[ESP + 0xc]                 ; 004096f6
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 004096fa
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_00431730()
    MOV ECX,0xc                         ; 004096ff
    ADD ESP,0xc                         ; 00409704
    MOVSD.REP ES:EDI,ESI                ; 00409707
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00409709
        ;   Label: LAB_00409709
    MOV EDI,dword ptr [ESP + 0x48]      ; 0040970d
    NEG EAX                             ; 00409711
    CMP EAX,EDI                         ; 00409713
    JLE 0x0040973b                      ; 00409715
        ;   XREF to: 0040973b (CONDITIONAL_JUMP)  ; LAB_0040973b
    MOV EAX,ESP                         ; 00409717
    PUSH EAX                            ; 00409719
    LEA EAX,[ESP + 0x48]                ; 0040971a
    PUSH EAX                            ; 0040971e
    LEA EAX,[ESP + 0x7c]                ; 0040971f
    PUSH EAX                            ; 00409723
    LEA EDI,[ESP + 0x50]                ; 00409724
    LEA ESI,[ESP + 0xc]                 ; 00409728
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 0040972c
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_00431830()
    MOV ECX,0xc                         ; 00409731
    ADD ESP,0xc                         ; 00409736
    MOVSD.REP ES:EDI,ESI                ; 00409739
    INC EBX                             ; 0040973b
        ;   Label: LAB_0040973b
    CMP EBX,0x2                         ; 0040973c
    JL 0x004095af                       ; 0040973f
        ;   XREF to: 004095af (CONDITIONAL_JUMP)  ; LAB_004095af
    MOV EAX,dword ptr [ESP + 0x44]      ; 00409745
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00409749
    CMP EAX,EBP                         ; 0040974d
    JG 0x0040978f                       ; 0040974f
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    MOV EBX,EBP                         ; 00409751
    NEG EBX                             ; 00409753
    CMP EBX,EAX                         ; 00409755
    JG 0x0040978f                       ; 00409757
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00409759
    CMP EAX,EBP                         ; 0040975d
    JG 0x0040978f                       ; 0040975f
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    CMP EBX,EAX                         ; 00409761
    JG 0x0040978f                       ; 00409763
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00409765
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00409769
    CMP EAX,EBX                         ; 0040976d
    JG 0x0040978f                       ; 0040976f
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    NEG EBX                             ; 00409771
    CMP EBX,EAX                         ; 00409773
    JG 0x0040978f                       ; 00409775
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00409777
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0040977b
    CMP EAX,EDI                         ; 0040977f
    JG 0x0040978f                       ; 00409781
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    CMP EBX,EAX                         ; 00409783
    JG 0x0040978f                       ; 00409785
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    TEST EBP,EBP                        ; 00409787
    JLE 0x0040978f                      ; 00409789
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    TEST EDI,EDI                        ; 0040978b
    JG 0x004097aa                       ; 0040978d
        ;   XREF to: 004097aa (CONDITIONAL_JUMP)  ; LAB_004097aa
    ADD ESP,0x30                        ; 0040978f
        ;   Label: LAB_0040978f
    POP EBP                             ; 00409792
    POP EDI                             ; 00409793
    POP ESI                             ; 00409794
    POP EBX                             ; 00409795
    LEA EAX,[EAX]                       ; 00409796
    LEA EDX,[EDX]                       ; 0040979c
    RET                                 ; 004097a0
    TEST AL,0xff                        ; 004097a1
        ;   Label: LAB_004097a1
    JNZ 0x0040978f                      ; 004097a3
        ;   XREF to: 0040978f (CONDITIONAL_JUMP)  ; LAB_0040978f
    JMP 0x004095ad                      ; 004097a5
        ;   XREF to: 004095ad (UNCONDITIONAL_JUMP)  ; LAB_004095ad
    MOV ECX,0xc                         ; 004097aa
        ;   Label: LAB_004097aa
    LEA ESI,[ESP + 0x44]                ; 004097af
    MOV EDI,0x6af5b4                    ; 004097b3
    MOVSD.REP ES:EDI,ESI                ; 004097b8
    MOV ECX,0xc                         ; 004097ba
    LEA ESI,[ESP + 0x74]                ; 004097bf
    MOV EDI,0x6af5e4                    ; 004097c3
    PUSH 0x4e1e                         ; 004097c8
    MOVSD.REP ES:EDI,ESI                ; 004097cd
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300 ; 004097cf
        ;   XREF to: 004cd300 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300()
    ADD ESP,0x4                         ; 004097d4
    PUSH 0x4e1f                         ; 004097d7
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300 ; 004097dc
        ;   XREF to: 004cd300 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300()
    ADD ESP,0x4                         ; 004097e1
    MOV EAX,0x5c5014                    ; 004097e4
    PUSH 0x2                            ; 004097e9
    ADD EAX,0xea5a0                     ; 004097eb
    PUSH EAX                            ; 004097f0
    CALL engine_prim.c_prepareDepthBuffer_FUN_004f9870 ; 004097f1
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_004f9870()
    ADD ESP,0x8                         ; 004097f6
    MOV ECX,dword ptr [0x006af5ec]      ; 004097f9 | DAT_006af5ec
    MOV EAX,[0x006af5f8]                ; 004097ff | DAT_006af5f8
    PUSH ECX                            ; 00409804
    SAR EAX,0x10                        ; 00409805
    PUSH EAX                            ; 00409808
    MOV EAX,[0x006af5f4]                ; 00409809 | DAT_006af5f4
    SAR EAX,0x10                        ; 0040980e
    PUSH EAX                            ; 00409811
    MOV EBX,dword ptr [0x006af5bc]      ; 00409812 | DAT_006af5bc
    MOV EAX,[0x006af5c8]                ; 00409818 | DAT_006af5c8
    PUSH EBX                            ; 0040981d
    SAR EAX,0x10                        ; 0040981e
    PUSH EAX                            ; 00409821
    MOV EAX,[0x006af5c4]                ; 00409822 | DAT_006af5c4
    SAR EAX,0x10                        ; 00409827
    PUSH EAX                            ; 0040982a
    CALL engine_2d.c_drawLine3D_FUN_00401710 ; 0040982b
        ;   XREF to: 00401710 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine3D_FUN_00401710()
    ADD ESP,0x18                        ; 00409830
    ADD ESP,0x30                        ; 00409833
    POP EBP                             ; 00409836
    POP EDI                             ; 00409837
    POP ESI                             ; 00409838
    POP EBX                             ; 00409839
    RET                                 ; 0040983a

