; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_0055b3b1(void)
;
;
; XREF[58]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404bbe
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 00406526
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 0040490d
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00406fd4
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406e94
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 00405739
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 00405859
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0 at 00406d3c
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00405980 at 004059ff
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0 at 00406864
;   ... and 48 more
;
; Referenced Globals:
;   undefined4 DAT_006141d8
;   undefined4 DAT_0061c314
;   undefined4 DAT_0061c350
;   undefined4 DAT_0061c354
;   undefined4 DAT_0061c35c
;   undefined4 DAT_0061c378
;   undefined4 DAT_0061c37c
;   undefined4 DAT_0061c780
;   undefined4 DAT_0061c784
;   undefined4 DAT_0061c788
;   undefined8 DAT_0061c78c
;   undefined8 DAT_0061c800
;   undefined4 DAT_0061c808
;   undefined4 DAT_0061c810
;   undefined8 DAT_0061c820
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055b3b1
        ;   Label: engine_special.cpp_FUN_0055b3b1
    PUSH EDI                            ; 0055b3b2
    PUSH EBP                            ; 0055b3b3
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055b3b4
    MOV ECX,dword ptr [EDI + 0x8]       ; 0055b3b7
    CMP EAX,ECX                         ; 0055b3ba
    JBE 0x0055b3c1                      ; 0055b3bc
        ;   XREF to: 0055b3c1 (CONDITIONAL_JUMP)  ; LAB_0055b3c1
    XCHG EAX,ECX                        ; 0055b3be
    XCHG EDI,ESI                        ; 0055b3bf
    SHR ECX,0x10                        ; 0055b3c1
        ;   Label: LAB_0055b3c1
    SHR EAX,0x10                        ; 0055b3c4
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055b3c7 | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055b3ce | DAT_01c2a38c
    SUB ECX,EAX                         ; 0055b3d5
    JLE 0x0055b860                      ; 0055b3d7
        ;   XREF to: 0055b860 (CONDITIONAL_JUMP)  ; LAB_0055b860
    LEA EBX,[EBX + EAX*0x4]             ; 0055b3dd
    SHL ECX,0x2                         ; 0055b3e0
    LEA EBP,[EBP + EAX*0x4]             ; 0055b3e3
    MOV dword ptr [0x0061c314],ECX      ; 0055b3e7 | DAT_0061c314
    MOV dword ptr [0x0061c378],EBX      ; 0055b3ed | DAT_0061c378
    MOV dword ptr [0x0061c37c],EBP      ; 0055b3f3 | DAT_0061c37c
    CMP dword ptr [0x01c38b54],0x80     ; 0055b3f9 | DAT_01c38b54
    JZ 0x0055bb50                       ; 0055b403
        ;   XREF to: 0055bb50 (CONDITIONAL_JUMP)  ; LAB_0055bb50
    CMP dword ptr [0x01c38b58],0x5      ; 0055b409 | DAT_01c38b58
    JNZ 0x0055b482                      ; 0055b410
        ;   XREF to: 0055b482 (CONDITIONAL_JUMP)  ; LAB_0055b482
    MOV EAX,dword ptr [ESI + 0x18]      ; 0055b412
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055b415
    CDQ                                 ; 0055b418
    SHLD EDX,EAX,0x18                   ; 0055b419
    SHL EAX,0x18                        ; 0055b41d
    IDIV EBX                            ; 0055b420
    MOV [0x0061c350],EAX                ; 0055b422 | DAT_0061c350
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055b427
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055b42a
    CDQ                                 ; 0055b42d
    SHLD EDX,EAX,0x18                   ; 0055b42e
    SHL EAX,0x18                        ; 0055b432
    IDIV EBX                            ; 0055b435
    SUB EAX,dword ptr [0x0061c350]      ; 0055b437 | DAT_0061c350
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b43d | DAT_01c35e74
    MOV dword ptr [0x0061c780],EDX      ; 0055b443 | DAT_0061c780
    MOV EAX,dword ptr [ESI + 0x20]      ; 0055b449
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055b44c
    CDQ                                 ; 0055b44f
    SHLD EDX,EAX,0x18                   ; 0055b450
    SHL EAX,0x18                        ; 0055b454
    IDIV EBX                            ; 0055b457
    MOV [0x0061c354],EAX                ; 0055b459 | DAT_0061c354
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055b45e
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055b461
    CDQ                                 ; 0055b464
    SHLD EDX,EAX,0x18                   ; 0055b465
    SHL EAX,0x18                        ; 0055b469
    IDIV EBX                            ; 0055b46c
    SUB EAX,dword ptr [0x0061c354]      ; 0055b46e | DAT_0061c354
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b474 | DAT_01c35e74
    MOV dword ptr [0x0061c784],EDX      ; 0055b47a | DAT_0061c784
    JMP 0x0055b4b6                      ; 0055b480
        ;   XREF to: 0055b4b6 (UNCONDITIONAL_JUMP)  ; LAB_0055b4b6
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055b482
        ;   Label: LAB_0055b482
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055b485
    SUB EAX,EBX                         ; 0055b488
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b48a | DAT_01c35e74
    MOV dword ptr [0x0061c350],EBX      ; 0055b490 | DAT_0061c350
    MOV dword ptr [0x0061c780],EDX      ; 0055b496 | DAT_0061c780
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055b49c
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055b49f
    SUB EAX,EBX                         ; 0055b4a2
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b4a4 | DAT_01c35e74
    MOV dword ptr [0x0061c354],EBX      ; 0055b4aa | DAT_0061c354
    MOV dword ptr [0x0061c784],EDX      ; 0055b4b0 | DAT_0061c784
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055b4b6
        ;   Label: LAB_0055b4b6
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055b4b9
    SUB EAX,EBX                         ; 0055b4bc
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b4be | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055b4c4 | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055b4ca | DAT_0061c788
    MOV EAX,dword ptr [EDI + 0x30]      ; 0055b4d0
    MOV EBX,dword ptr [ESI + 0x30]      ; 0055b4d3
    SUB EAX,EBX                         ; 0055b4d6
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b4d8 | DAT_01c35e74
    MOV dword ptr [0x0061c840],EBX      ; 0055b4de | DAT_0061c840
    MOV dword ptr [0x0061c848],EDX      ; 0055b4e4 | DAT_0061c848
    MOV EBP,dword ptr [0x0061c840]      ; 0055b4ea | DAT_0061c840
    PXOR MM7,MM7                        ; 0055b4f0
    TEST dword ptr [0x01c38b54],0x200   ; 0055b4f3 | DAT_01c38b54
    JNZ 0x0055b540                      ; 0055b4fd
        ;   XREF to: 0055b540 (CONDITIONAL_JUMP)  ; LAB_0055b540
    TEST dword ptr [0x01c38b54],0x4     ; 0055b4ff | DAT_01c38b54
    JNZ 0x0055b600                      ; 0055b509
        ;   XREF to: 0055b600 (CONDITIONAL_JUMP)  ; LAB_0055b600
    TEST dword ptr [0x01c38b54],0x10    ; 0055b50f | DAT_01c38b54
    JNZ 0x0055b690                      ; 0055b519
        ;   XREF to: 0055b690 (CONDITIONAL_JUMP)  ; LAB_0055b690
    MOVQ MM5,qword ptr [0x0061d978]     ; 0055b51f | DAT_0061d978
    PSLLW MM5,0x7                       ; 0055b526
    PXOR MM6,MM6                        ; 0055b52a
    JMP 0x0055b6c0                      ; 0055b52d
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_JUMP)  ; LAB_0055b6c0
    MOV EAX,dword ptr [EDI + 0x10]      ; 0055b540
        ;   Label: LAB_0055b540
    MOV EBX,dword ptr [ESI + 0x10]      ; 0055b543
    SHR EAX,0x1                         ; 0055b546
    SHR EBX,0x1                         ; 0055b548
    SUB EAX,EBX                         ; 0055b54a
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b54c | DAT_01c35e74
    AND EBX,0xffff                      ; 0055b552
    AND EDX,0xffff                      ; 0055b558
    MOV dword ptr [0x0061c800],EBX      ; 0055b55e | DAT_0061c800
    MOV dword ptr [0x0061c820],EDX      ; 0055b564 | DAT_0061c820
    MOV EAX,dword ptr [EDI + 0x38]      ; 0055b56a
    MOV EBX,dword ptr [ESI + 0x38]      ; 0055b56d
    SHR EAX,0x1                         ; 0055b570
    SHR EBX,0x1                         ; 0055b572
    SUB EAX,EBX                         ; 0055b574
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b576 | DAT_01c35e74
    AND EBX,0xffff                      ; 0055b57c
    AND EDX,0xffff                      ; 0055b582
    MOV dword ptr [0x0061c808],EBX      ; 0055b588 | DAT_0061c808
    MOV dword ptr [0x0061c828],EDX      ; 0055b58e | DAT_0061c828
    MOV EAX,dword ptr [EDI + 0x40]      ; 0055b594
    MOV EBX,dword ptr [ESI + 0x40]      ; 0055b597
    SHR EAX,0x1                         ; 0055b59a
    SHR EBX,0x1                         ; 0055b59c
    SUB EAX,EBX                         ; 0055b59e
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b5a0 | DAT_01c35e74
    AND EBX,0xffff                      ; 0055b5a6
    AND EDX,0xffff                      ; 0055b5ac
    MOV dword ptr [0x0061c810],EBX      ; 0055b5b2 | DAT_0061c810
    MOV dword ptr [0x0061c830],EDX      ; 0055b5b8 | DAT_0061c830
    MOVQ MM5,qword ptr [0x0061c800]     ; 0055b5be | DAT_0061c800
    MOVQ MM6,qword ptr [0x0061c820]     ; 0055b5c5 | DAT_0061c820
    PSLLQ MM5,0x10                      ; 0055b5cc
    PSLLQ MM6,0x10                      ; 0055b5d0
    POR MM5,qword ptr [0x0061c808]      ; 0055b5d4 | DAT_0061c808
    POR MM6,qword ptr [0x0061c828]      ; 0055b5db | DAT_0061c828
    PSLLQ MM5,0x10                      ; 0055b5e2
    PSLLQ MM6,0x10                      ; 0055b5e6
    POR MM5,qword ptr [0x0061c810]      ; 0055b5ea | DAT_0061c810
    POR MM6,qword ptr [0x0061c830]      ; 0055b5f1 | DAT_0061c830
    JMP 0x0055b6c0                      ; 0055b5f8
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_JUMP)  ; LAB_0055b6c0
    MOV EAX,dword ptr [EDI + 0x10]      ; 0055b600
        ;   Label: LAB_0055b600
    MOV EBX,dword ptr [ESI + 0x10]      ; 0055b603
    SUB EAX,0x100                       ; 0055b606
    SUB EBX,0x100                       ; 0055b60b
    CMP EAX,0xfff                       ; 0055b611
    JBE 0x0055b61d                      ; 0055b616
        ;   XREF to: 0055b61d (CONDITIONAL_JUMP)  ; LAB_0055b61d
    MOV EAX,0xfff                       ; 0055b618
    CMP EBX,0xfff                       ; 0055b61d
        ;   Label: LAB_0055b61d
    JBE 0x0055b62a                      ; 0055b623
        ;   XREF to: 0055b62a (CONDITIONAL_JUMP)  ; LAB_0055b62a
    MOV EBX,0xfff                       ; 0055b625
    SHL EAX,0x3                         ; 0055b62a
        ;   Label: LAB_0055b62a
    SHL EBX,0x3                         ; 0055b62d
    SUB EAX,EBX                         ; 0055b630
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055b632 | DAT_01c35e74
    AND EBX,0xffff                      ; 0055b638
    AND EDX,0xffff                      ; 0055b63e
    MOV dword ptr [0x0061c800],EBX      ; 0055b644 | DAT_0061c800
    MOV dword ptr [0x0061c820],EDX      ; 0055b64a | DAT_0061c820
    MOVQ MM5,qword ptr [0x0061c800]     ; 0055b650 | DAT_0061c800
    MOVQ MM6,qword ptr [0x0061c820]     ; 0055b657 | DAT_0061c820
    PSLLQ MM5,0x10                      ; 0055b65e
    PSLLQ MM6,0x10                      ; 0055b662
    POR MM5,qword ptr [0x0061c800]      ; 0055b666 | DAT_0061c800
    POR MM6,qword ptr [0x0061c820]      ; 0055b66d | DAT_0061c820
    PSLLQ MM5,0x10                      ; 0055b674
    PSLLQ MM6,0x10                      ; 0055b678
    POR MM5,qword ptr [0x0061c800]      ; 0055b67c | DAT_0061c800
    POR MM6,qword ptr [0x0061c820]      ; 0055b683 | DAT_0061c820
    JMP 0x0055b6c0                      ; 0055b68a
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_JUMP)  ; LAB_0055b6c0
    MOV EAX,[0x01c35e64]                ; 0055b690 | DAT_01c35e64
        ;   Label: LAB_0055b690
    SUB EAX,0x100                       ; 0055b695
    SHR EAX,0x4                         ; 0055b69a
    CMP EAX,0xff                        ; 0055b69d
    JC 0x0055b6a9                       ; 0055b6a2
        ;   XREF to: 0055b6a9 (CONDITIONAL_JUMP)  ; LAB_0055b6a9
    MOV EAX,0xff                        ; 0055b6a4
    MOVQ MM5,qword ptr [EAX*0x8 + 0x61d180] ; 0055b6a9 | DAT_0061d978 | DAT_0061d180
        ;   Label: LAB_0055b6a9
    PSLLW MM5,0x7                       ; 0055b6b1
    PXOR MM6,MM6                        ; 0055b6b5
    JMP 0x0055b6c0                      ; 0055b6b8
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_JUMP)  ; LAB_0055b6c0
    MOV ECX,dword ptr [0x0061c350]      ; 0055b6c0 | DAT_0061c350
        ;   Label: LAB_0055b6c0
    MOV EDX,dword ptr [0x0061c354]      ; 0055b6c6 | DAT_0061c354
    MOV ESI,dword ptr [0x0061c35c]      ; 0055b6cc | DAT_0061c35c
    MOV EDI,0x0                         ; 0055b6d2
    CMP dword ptr [0x01c37774],0x0      ; 0055b6d7 | DAT_01c37774
    JNZ 0x0055b6f0                      ; 0055b6de
        ;   XREF to: 0055b6f0 (CONDITIONAL_JUMP)  ; LAB_0055b6f0
    TEST dword ptr [0x01c38b54],0x2     ; 0055b6e0 | DAT_01c38b54
    JZ 0x0055b9e6                       ; 0055b6ea
        ;   XREF to: 0055b9e6 (CONDITIONAL_JUMP)  ; LAB_0055b9e6
    TEST dword ptr [0x01c38b54],0x100   ; 0055b6f0 | DAT_01c38b54
        ;   Label: LAB_0055b6f0
    JNZ 0x0055b70f                      ; 0055b6fa
        ;   XREF to: 0055b70f (CONDITIONAL_JUMP)  ; LAB_0055b70f
    MOV EBP,dword ptr [0x006141d8]      ; 0055b6fc | DAT_006141d8
    SHL EBP,0x8                         ; 0055b702
    MOV dword ptr [0x0061c848],0x0      ; 0055b705 | DAT_0061c848
    CMP dword ptr [0x01c37774],0x0      ; 0055b70f | DAT_01c37774
        ;   Label: LAB_0055b70f
    JNZ 0x0055b870                      ; 0055b716
        ;   XREF to: 0055b870 (CONDITIONAL_JUMP)  ; LAB_0055b870
    TEST dword ptr [0x01c38b54],0x40    ; 0055b71c | DAT_01c38b54
        ;   Label: LAB_0055b71c
    JZ 0x0055b738                       ; 0055b726
        ;   XREF to: 0055b738 (CONDITIONAL_JUMP)  ; LAB_0055b738
    LEA EAX,[EDI]                       ; 0055b728
    ADD EAX,dword ptr [0x0061c37c]      ; 0055b72a | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055b730
    JL 0x0055b822                       ; 0055b732
        ;   XREF to: 0055b822 (CONDITIONAL_JUMP)  ; LAB_0055b822
    MOVD MM0,ECX                        ; 0055b738
        ;   Label: LAB_0055b738
    MOVD MM2,EDX                        ; 0055b73b
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055b73e | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055b745 | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055b74c | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055b753 | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0055b75a
    MOVD EBX,MM0                        ; 0055b75d
    ADD EBX,dword ptr [0x01c37770]      ; 0055b760 | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0055b766
    MOV EAX,dword ptr [EAX*0x4 + 0x1c35214] ; 0055b769 | DAT_01c35214
    CMP EAX,0x0                         ; 0055b770
    JZ 0x0055b822                       ; 0055b773
        ;   XREF to: 0055b822 (CONDITIONAL_JUMP)  ; LAB_0055b822
    MOVD MM0,EAX                        ; 0055b779
    PUNPCKLBW MM0,MM7                   ; 0055b77c
    PXOR MM4,MM4                        ; 0055b77f
    TEST dword ptr [0x01c38b54],0x20    ; 0055b782 | DAT_01c38b54
    JZ 0x0055b79c                       ; 0055b78c
        ;   XREF to: 0055b79c (CONDITIONAL_JUMP)  ; LAB_0055b79c
    MOV EBX,EDI                         ; 0055b78e
    ADD EBX,dword ptr [0x0061c378]      ; 0055b790 | DAT_0061c378
    MOVD MM4,dword ptr [EBX]            ; 0055b796
    PUNPCKLBW MM4,MM7                   ; 0055b799
    PSLLW MM0,0x4                       ; 0055b79c
        ;   Label: LAB_0055b79c
    MOVQ MM7,MM5                        ; 0055b7a0
    MOV EAX,EBP                         ; 0055b7a3
    PSRLW MM7,0x3                       ; 0055b7a5
    SAR EAX,0x8                         ; 0055b7a9
    PMULHW MM0,MM7                      ; 0055b7ac
    MOVQ MM2,qword ptr [EAX*0x8 + 0x61d180] ; 0055b7af | DAT_0061d978
    PXOR MM7,MM7                        ; 0055b7b7
    MOVQ MM3,MM2                        ; 0055b7ba
    PACKUSWB MM0,MM7                    ; 0055b7bd
    PXOR MM3,qword ptr [0x0061d978]     ; 0055b7c0 | DAT_0061d978
    PUNPCKLBW MM0,MM7                   ; 0055b7c7
    CMP dword ptr [0x01c38b4c],0x0      ; 0055b7ca | DAT_01c38b4c
    JNZ 0x0055b7f0                      ; 0055b7d1
        ;   XREF to: 0055b7f0 (CONDITIONAL_JUMP)  ; LAB_0055b7f0
    PMULLW MM4,MM3                      ; 0055b7d3
    PMULLW MM0,MM2                      ; 0055b7d6
    PADDUSW MM0,MM4                     ; 0055b7d9
    PSRLW MM0,0x8                       ; 0055b7dc
    PACKUSWB MM0,MM7                    ; 0055b7e0
    JMP 0x0055b801                      ; 0055b7e3
        ;   XREF to: 0055b801 (UNCONDITIONAL_JUMP)  ; LAB_0055b801
    PSLLW MM4,0x8                       ; 0055b7f0
        ;   Label: LAB_0055b7f0
    PMULLW MM0,MM2                      ; 0055b7f4
    PADDUSW MM0,MM4                     ; 0055b7f7
    PSRLW MM0,0x8                       ; 0055b7fa
    PACKUSWB MM0,MM7                    ; 0055b7fe
    MOV EBX,EDI                         ; 0055b801
        ;   Label: LAB_0055b801
    ADD EBX,dword ptr [0x0061c378]      ; 0055b803 | DAT_0061c378
    MOVD dword ptr [EBX],MM0            ; 0055b809
    TEST dword ptr [0x01c38b54],0x80    ; 0055b80c | DAT_01c38b54
    JZ 0x0055b822                       ; 0055b816
        ;   XREF to: 0055b822 (CONDITIONAL_JUMP)  ; LAB_0055b822
    MOV EAX,EDI                         ; 0055b818
    ADD EAX,dword ptr [0x0061c37c]      ; 0055b81a | DAT_0061c37c
    MOV dword ptr [EAX],ESI             ; 0055b820
    ADD EDI,0x4                         ; 0055b822
        ;   Label: LAB_0055b822
    CMP EDI,dword ptr [0x0061c314]      ; 0055b825 | DAT_0061c314
    JNC 0x0055b860                      ; 0055b82b
        ;   XREF to: 0055b860 (CONDITIONAL_JUMP)  ; LAB_0055b860
    ADD ECX,dword ptr [0x0061c780]      ; 0055b82d | DAT_0061c780
    PADDW MM5,MM6                       ; 0055b833
    ADD EDX,dword ptr [0x0061c784]      ; 0055b836 | DAT_0061c784
    MOVQ MM0,MM5                        ; 0055b83c
    ADD ESI,dword ptr [0x0061c788]      ; 0055b83f | DAT_0061c788
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055b845 | DAT_0061c78c
    ADD EBP,dword ptr [0x0061c848]      ; 0055b84c | DAT_0061c848
    PAND MM5,MM0                        ; 0055b852
    JMP 0x0055b71c                      ; 0055b855
        ;   XREF to: 0055b71c (UNCONDITIONAL_JUMP)  ; LAB_0055b71c
    POP EBP                             ; 0055b860
        ;   Label: LAB_0055b860
    EMMS                                ; 0055b861
    POP EDI                             ; 0055b863
    POP ESI                             ; 0055b864
    RET                                 ; 0055b865
    TEST dword ptr [0x01c38b54],0x40    ; 0055b870 | DAT_01c38b54
        ;   Label: LAB_0055b870
    JZ 0x0055b88c                       ; 0055b87a
        ;   XREF to: 0055b88c (CONDITIONAL_JUMP)  ; LAB_0055b88c
    LEA EAX,[EDI]                       ; 0055b87c
    ADD EAX,dword ptr [0x0061c37c]      ; 0055b87e | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055b884
    JL 0x0055b9a2                       ; 0055b886
        ;   XREF to: 0055b9a2 (CONDITIONAL_JUMP)  ; LAB_0055b9a2
    MOVD MM0,ECX                        ; 0055b88c
        ;   Label: LAB_0055b88c
    MOVD MM2,EDX                        ; 0055b88f
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055b892 | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055b899 | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055b8a0 | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055b8a7 | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0055b8ae
    MOVD EBX,MM0                        ; 0055b8b1
    ADD EBX,dword ptr [0x01c37770]      ; 0055b8b4 | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0055b8ba
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055b8bd | DAT_01c35214
    PUNPCKLBW MM0,MM7                   ; 0055b8c5
    SUB EBX,dword ptr [0x01c37770]      ; 0055b8c8 | DAT_01c37770
    ADD EBX,dword ptr [0x01c37774]      ; 0055b8ce | DAT_01c37774
    MOVZX EAX,byte ptr [EBX]            ; 0055b8d4
    TEST EAX,0xffffffff                 ; 0055b8d7
    JZ 0x0055b9a2                       ; 0055b8dc
        ;   XREF to: 0055b9a2 (CONDITIONAL_JUMP)  ; LAB_0055b9a2
    MOV EBX,EDI                         ; 0055b8e2
    ADD EBX,dword ptr [0x0061c378]      ; 0055b8e4 | DAT_0061c378
    MOVD MM4,dword ptr [EBX]            ; 0055b8ea
    PUNPCKLBW MM4,MM7                   ; 0055b8ed
    PSLLW MM0,0x4                       ; 0055b8f0
    MOVQ MM7,MM5                        ; 0055b8f4
    IMUL EAX,EBP                        ; 0055b8f7
    PSRLW MM7,0x3                       ; 0055b8fa
    SHR EAX,0x10                        ; 0055b8fe
    PMULHW MM0,MM7                      ; 0055b901
    MOVQ MM2,qword ptr [EAX*0x8 + 0x61d180] ; 0055b904 | DAT_0061d180
    PXOR MM7,MM7                        ; 0055b90c
    MOVQ MM3,MM2                        ; 0055b90f
    PACKUSWB MM0,MM7                    ; 0055b912
    PXOR MM3,qword ptr [0x0061d978]     ; 0055b915 | DAT_0061d978
    PUNPCKLBW MM0,MM7                   ; 0055b91c
    CMP dword ptr [0x01c38b4c],0x0      ; 0055b91f | DAT_01c38b4c
    JNZ 0x0055b970                      ; 0055b926
        ;   XREF to: 0055b970 (CONDITIONAL_JUMP)  ; LAB_0055b970
    PMULLW MM4,MM3                      ; 0055b928
    PMULLW MM0,MM2                      ; 0055b92b
    PADDUSW MM0,MM4                     ; 0055b92e
    PSRLW MM0,0x8                       ; 0055b931
    PACKUSWB MM0,MM7                    ; 0055b935
    JMP 0x0055b981                      ; 0055b938
        ;   XREF to: 0055b981 (UNCONDITIONAL_JUMP)  ; LAB_0055b981
    PSLLW MM4,0x8                       ; 0055b970
        ;   Label: LAB_0055b970
    PMULLW MM0,MM2                      ; 0055b974
    PADDUSW MM0,MM4                     ; 0055b977
    PSRLW MM0,0x8                       ; 0055b97a
    PACKUSWB MM0,MM7                    ; 0055b97e
    MOV EBX,EDI                         ; 0055b981
        ;   Label: LAB_0055b981
    ADD EBX,dword ptr [0x0061c378]      ; 0055b983 | DAT_0061c378
    MOVD dword ptr [EBX],MM0            ; 0055b989
    TEST dword ptr [0x01c38b54],0x80    ; 0055b98c | DAT_01c38b54
    JZ 0x0055b9a2                       ; 0055b996
        ;   XREF to: 0055b9a2 (CONDITIONAL_JUMP)  ; LAB_0055b9a2
    MOV EAX,EDI                         ; 0055b998
    ADD EAX,dword ptr [0x0061c37c]      ; 0055b99a | DAT_0061c37c
    MOV dword ptr [EAX],ESI             ; 0055b9a0
    ADD EDI,0x4                         ; 0055b9a2
        ;   Label: LAB_0055b9a2
    CMP EDI,dword ptr [0x0061c314]      ; 0055b9a5 | DAT_0061c314
    JNC 0x0055b9e0                      ; 0055b9ab
        ;   XREF to: 0055b9e0 (CONDITIONAL_JUMP)  ; LAB_0055b9e0
    ADD ECX,dword ptr [0x0061c780]      ; 0055b9ad | DAT_0061c780
    PADDW MM5,MM6                       ; 0055b9b3
    ADD EDX,dword ptr [0x0061c784]      ; 0055b9b6 | DAT_0061c784
    MOVQ MM0,MM5                        ; 0055b9bc
    ADD ESI,dword ptr [0x0061c788]      ; 0055b9bf | DAT_0061c788
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055b9c5 | DAT_0061c78c
    ADD EBP,dword ptr [0x0061c848]      ; 0055b9cc | DAT_0061c848
    PAND MM5,MM0                        ; 0055b9d2
    JMP 0x0055b870                      ; 0055b9d5
        ;   XREF to: 0055b870 (UNCONDITIONAL_JUMP)  ; LAB_0055b870
    POP EBP                             ; 0055b9e0
        ;   Label: LAB_0055b9e0
    EMMS                                ; 0055b9e1
    POP EDI                             ; 0055b9e3
    POP ESI                             ; 0055b9e4
    RET                                 ; 0055b9e5
    MOVQ MM1,qword ptr [0x01c38b5c]     ; 0055b9e6 | DAT_01c38b5c
        ;   Label: LAB_0055b9e6
    PUNPCKLBW MM1,MM7                   ; 0055b9ed
    TEST dword ptr [0x01c38b54],0x8     ; 0055b9f0 | DAT_01c38b54
    JNZ 0x0055ba0b                      ; 0055b9fa
        ;   XREF to: 0055ba0b (CONDITIONAL_JUMP)  ; LAB_0055ba0b
    MOV EBP,0x0                         ; 0055b9fc
    MOV dword ptr [0x0061c848],0x0      ; 0055ba01 | DAT_0061c848
    TEST dword ptr [0x01c38b54],0x40    ; 0055ba0b | DAT_01c38b54
        ;   Label: LAB_0055ba0b
    JZ 0x0055ba27                       ; 0055ba15
        ;   XREF to: 0055ba27 (CONDITIONAL_JUMP)  ; LAB_0055ba27
    LEA EAX,[EDI]                       ; 0055ba17
    ADD EAX,dword ptr [0x0061c37c]      ; 0055ba19 | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055ba1f
    JL 0x0055badd                       ; 0055ba21
        ;   XREF to: 0055badd (CONDITIONAL_JUMP)  ; LAB_0055badd
    TEST dword ptr [0x01c38b54],0x1     ; 0055ba27 | DAT_01c38b54
        ;   Label: LAB_0055ba27
    JZ 0x0055bb26                       ; 0055ba31
        ;   XREF to: 0055bb26 (CONDITIONAL_JUMP)  ; LAB_0055bb26
    MOVD MM0,ECX                        ; 0055ba37
    MOVD MM2,EDX                        ; 0055ba3a
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055ba3d | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055ba44 | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055ba4b | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055ba52 | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0055ba59
    MOVD EBX,MM0                        ; 0055ba5c
    ADD EBX,dword ptr [0x01c37770]      ; 0055ba5f | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0055ba65
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055ba68 | DAT_01c35214
    MOVQ MM3,MM5                        ; 0055ba70
        ;   Label: LAB_0055ba70
    PUNPCKLBW MM0,MM7                   ; 0055ba73
    PSRLW MM3,0x3                       ; 0055ba76
    PSLLW MM0,0x4                       ; 0055ba7a
    PMULHW MM0,MM3                      ; 0055ba7e
    PACKUSWB MM0,MM7                    ; 0055ba81
    TEST dword ptr [0x01c38b54],0x8     ; 0055ba84 | DAT_01c38b54
    JZ 0x0055babd                       ; 0055ba8e
        ;   XREF to: 0055babd (CONDITIONAL_JUMP)  ; LAB_0055babd
    MOV EAX,EBP                         ; 0055ba90
    SAR EAX,0x8                         ; 0055ba92
    MOVQ MM3,qword ptr [EAX*0x8 + 0x61d180] ; 0055ba95 | DAT_0061d180
    MOVQ MM4,MM1                        ; 0055ba9d
    MOVQ MM2,MM3                        ; 0055baa0
    PMULLW MM4,MM3                      ; 0055baa3
    PXOR MM2,qword ptr [0x0061d978]     ; 0055baa6 | DAT_0061d978
    PUNPCKLBW MM0,MM7                   ; 0055baad
    PMULLW MM0,MM2                      ; 0055bab0
    PADDW MM0,MM4                       ; 0055bab3
    PSRLW MM0,0x8                       ; 0055bab6
    PACKUSWB MM0,MM7                    ; 0055baba
    MOV EBX,dword ptr [0x0061c378]      ; 0055babd | DAT_0061c378
        ;   Label: LAB_0055babd
    ADD EBX,EDI                         ; 0055bac3
    MOVD dword ptr [EBX],MM0            ; 0055bac5
    TEST dword ptr [0x01c38b54],0x80    ; 0055bac8 | DAT_01c38b54
    JZ 0x0055badd                       ; 0055bad2
        ;   XREF to: 0055badd (CONDITIONAL_JUMP)  ; LAB_0055badd
    MOV EAX,[0x0061c37c]                ; 0055bad4 | DAT_0061c37c
    ADD EAX,EDI                         ; 0055bad9
    MOV dword ptr [EAX],ESI             ; 0055badb
    ADD EDI,0x4                         ; 0055badd
        ;   Label: LAB_0055badd
    CMP EDI,dword ptr [0x0061c314]      ; 0055bae0 | DAT_0061c314
    JNC 0x0055b860                      ; 0055bae6
        ;   XREF to: 0055b860 (CONDITIONAL_JUMP)  ; LAB_0055b860
    ADD ECX,dword ptr [0x0061c780]      ; 0055baec | DAT_0061c780
    PADDW MM5,MM6                       ; 0055baf2
    ADD EDX,dword ptr [0x0061c784]      ; 0055baf5 | DAT_0061c784
    MOVQ MM0,MM5                        ; 0055bafb
    ADD ESI,dword ptr [0x0061c788]      ; 0055bafe | DAT_0061c788
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055bb04 | DAT_0061c78c
    ADD EBP,dword ptr [0x0061c848]      ; 0055bb0b | DAT_0061c848
    PAND MM5,MM0                        ; 0055bb11
    JMP 0x0055ba0b                      ; 0055bb14
        ;   XREF to: 0055ba0b (UNCONDITIONAL_JUMP)  ; LAB_0055ba0b
    TEST dword ptr [0x01c38b54],0x200   ; 0055bb26 | DAT_01c38b54
        ;   Label: LAB_0055bb26
    JNZ 0x0055bb40                      ; 0055bb30
        ;   XREF to: 0055bb40 (CONDITIONAL_JUMP)  ; LAB_0055bb40
    MOVD MM0,dword ptr [0x01c35e60]     ; 0055bb32 | DAT_01c35e60
    JMP 0x0055ba70                      ; 0055bb39
        ;   XREF to: 0055ba70 (UNCONDITIONAL_JUMP)  ; LAB_0055ba70
    MOVD MM0,dword ptr [0x0061c978]     ; 0055bb40 | DAT_0061c978
        ;   Label: LAB_0055bb40
    JMP 0x0055ba70                      ; 0055bb47
        ;   XREF to: 0055ba70 (UNCONDITIONAL_JUMP)  ; LAB_0055ba70
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055bb50
        ;   Label: LAB_0055bb50
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055bb53
    SUB EAX,EBX                         ; 0055bb56
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bb58 | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055bb5e | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055bb64 | DAT_0061c788
    MOV EAX,[0x0061c35c]                ; 0055bb6a | DAT_0061c35c
    MOV EBX,dword ptr [0x0061c788]      ; 0055bb6f | DAT_0061c788
    MOV ESI,dword ptr [0x0061c37c]      ; 0055bb75 | DAT_0061c37c
    MOV ECX,dword ptr [0x0061c314]      ; 0055bb7b | DAT_0061c314
    MOV dword ptr [ESI],EAX             ; 0055bb81
        ;   Label: LAB_0055bb81
    ADD EAX,EBX                         ; 0055bb83
    ADD ESI,0x4                         ; 0055bb85
    SUB ECX,0x4                         ; 0055bb88
    JG 0x0055bb81                       ; 0055bb8b
        ;   XREF to: 0055bb81 (CONDITIONAL_JUMP)  ; LAB_0055bb81
    POP EBP                             ; 0055bb8d
    EMMS                                ; 0055bb8e
    POP EDI                             ; 0055bb90
    POP ESI                             ; 0055bb91
    RET                                 ; 0055bb92

