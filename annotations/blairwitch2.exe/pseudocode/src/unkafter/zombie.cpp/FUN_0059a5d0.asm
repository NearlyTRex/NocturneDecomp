; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkafter_zombie_cpp_FUN_0059a5d0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; int              Stack[0x8]:4   vertex_count
; CustomScanlineFunc * Stack[0xc]:4   scanline_renderer
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750 at 0046b7cb
;
; Referenced Globals:
;   void* switchdataD_0059a5a8 = 0059a647
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01e61b58
;   undefined4 DAT_026672a8
;   undefined4 DAT_026672ac
;   undefined4 DAT_026672fc
;   undefined4 DAT_026677ac
;   undefined4 DAT_026677b0
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_0051c6b0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;   engine_prim.c_normalizeTextureCoords_FUN_0051c630
;   engine_prim.c_prepareDepthBuffer_FUN_0051c5c0
;   engine_prim.c_replaceWWithDepth_FUN_0051c720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a5d0
        ;   Label: unkafter_zombie.cpp_FUN_0059a5d0
    PUSH ESI                            ; 0059a5d1
    PUSH EDI                            ; 0059a5d2
    PUSH EBP                            ; 0059a5d3
    SUB ESP,0x10                        ; 0059a5d4
    MOV ESI,dword ptr [0x026672a8]      ; 0059a5d7 | DAT_026672a8
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059a5dd
    MOV ECX,dword ptr [ESP + 0x24]      ; 0059a5e1
    XOR EDI,EDI                         ; 0059a5e5
    TEST EDX,EDX                        ; 0059a5e7
    JLE 0x0059a60f                      ; 0059a5e9
        ;   XREF to: 0059a60f (CONDITIONAL_JUMP)  ; LAB_0059a60f
    MOV AH,byte ptr [ECX + 0x13]        ; 0059a5eb
        ;   Label: LAB_0059a5eb
    MOV dword ptr [0x026672a8],ESI      ; 0059a5ee | DAT_026672a8
    TEST AH,0x80                        ; 0059a5f4
    JNZ 0x0059a7d2                      ; 0059a5f7
        ;   XREF to: 0059a7d2 (CONDITIONAL_JUMP)  ; LAB_0059a7d2
    MOV ESI,dword ptr [0x026672a8]      ; 0059a5fd | DAT_026672a8
        ;   Label: LAB_0059a5fd
    MOV EBX,dword ptr [ESP + 0x28]      ; 0059a603
    INC EDI                             ; 0059a607
    ADD ECX,0x30                        ; 0059a608
    CMP EDI,EBX                         ; 0059a60b
    JL 0x0059a5eb                       ; 0059a60d
        ;   XREF to: 0059a5eb (CONDITIONAL_JUMP)  ; LAB_0059a5eb
    MOV EDI,dword ptr [0x0070ca7c]      ; 0059a60f | DAT_0070ca7c
        ;   Label: LAB_0059a60f
    MOV dword ptr [0x026672a8],ESI      ; 0059a615 | DAT_026672a8
    TEST EDI,EDI                        ; 0059a61b
    JNZ 0x0059a81e                      ; 0059a61d
        ;   XREF to: 0059a81e (CONDITIONAL_JUMP)  ; LAB_0059a81e
    MOV EDX,dword ptr [0x01e61b58]      ; 0059a623 | DAT_01e61b58
        ;   Label: LAB_0059a623
    MOV ESI,dword ptr [0x026672a8]      ; 0059a629 | DAT_026672a8
    INC EDX                             ; 0059a62f
    MOV EAX,[0x01c38b58]                ; 0059a630 | DAT_01c38b58
    MOV dword ptr [0x01e61b58],EDX      ; 0059a635 | DAT_01e61b58
    CMP EAX,0x6                         ; 0059a63b
    JA 0x0059a647                       ; 0059a63e
        ;   XREF to: 0059a647 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x59a5a8]  ; 0059a640 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,0x4b0                       ; 0059a647
        ;   Label: caseD_0
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059a64c
    XOR EBP,EBP                         ; 0059a650
    XOR ESI,ESI                         ; 0059a652
    MOV dword ptr [0x026677b0],EBP      ; 0059a654 | DAT_026677b0
    MOV dword ptr [ESP + 0x8],EBP       ; 0059a65a
    MOV dword ptr [0x026677ac],EDI      ; 0059a65e | DAT_026677ac
    TEST EDX,EDX                        ; 0059a664
    JLE 0x0059a6be                      ; 0059a666
        ;   XREF to: 0059a6be (CONDITIONAL_JUMP)  ; LAB_0059a6be
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059a668
        ;   Label: LAB_0059a668
    MOV EDI,dword ptr [ESP + 0x28]      ; 0059a66c
    INC EAX                             ; 0059a670
    CMP EAX,EDI                         ; 0059a671
    JL 0x0059a677                       ; 0059a673
        ;   XREF to: 0059a677 (CONDITIONAL_JUMP)  ; LAB_0059a677
    XOR EAX,EAX                         ; 0059a675
    IMUL EAX,EAX,0x30                   ; 0059a677
        ;   Label: LAB_0059a677
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059a67a
    MOV EBP,dword ptr [ESP + 0x8]       ; 0059a67e
    ADD EDX,EAX                         ; 0059a682
    IMUL EAX,EBP,0x30                   ; 0059a684
    MOV dword ptr [ESP],EDX             ; 0059a687
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059a68a
    ADD EDX,EAX                         ; 0059a68e
    MOV EBP,dword ptr [ESP]             ; 0059a690
    MOV dword ptr [ESP + 0x4],EDX       ; 0059a693
    MOV EDI,EDX                         ; 0059a697
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059a699
    MOV EDX,dword ptr [EDX + 0x14]      ; 0059a69c
    SAR EAX,0x10                        ; 0059a69f
    SAR EDX,0x10                        ; 0059a6a2
    CMP EDX,EAX                         ; 0059a6a5
    JNZ 0x0059a8c4                      ; 0059a6a7
        ;   XREF to: 0059a8c4 (CONDITIONAL_JUMP)  ; LAB_0059a8c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059a6ad
        ;   Label: LAB_0059a6ad
    INC ECX                             ; 0059a6b1
    MOV EBX,dword ptr [ESP + 0x28]      ; 0059a6b2
    MOV dword ptr [ESP + 0x8],ECX       ; 0059a6b6
    CMP ECX,EBX                         ; 0059a6ba
    JL 0x0059a668                       ; 0059a6bc
        ;   XREF to: 0059a668 (CONDITIONAL_JUMP)  ; LAB_0059a668
    MOV EAX,0x26672ac                   ; 0059a6be
        ;   Label: LAB_0059a6be
    MOV EDI,dword ptr [0x026677ac]      ; 0059a6c3 | DAT_026677ac
    XOR EDX,EDX                         ; 0059a6c9
    TEST ESI,ESI                        ; 0059a6cb
    JLE 0x0059a9dd                      ; 0059a6cd
        ;   XREF to: 0059a9dd (CONDITIONAL_JUMP)  ; LAB_0059a9dd
    CMP EDI,dword ptr [EAX]             ; 0059a6d3 | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a6d3
    JNZ 0x0059a9d1                      ; 0059a6d5
        ;   XREF to: 0059a9d1 (CONDITIONAL_JUMP)  ; LAB_0059a9d1
    TEST EAX,EAX                        ; 0059a6db
    JZ 0x0059a9d1                       ; 0059a6dd
        ;   XREF to: 0059a9d1 (CONDITIONAL_JUMP)  ; LAB_0059a9d1
    MOV EBP,EAX                         ; 0059a6e3
        ;   Label: LAB_0059a6e3
    MOV dword ptr [0x026672a8],ESI      ; 0059a6e5 | DAT_026672a8
    TEST EAX,EAX                        ; 0059a6eb
    JZ 0x0059a7c4                       ; 0059a6ed
        ;   XREF to: 0059a7c4 (CONDITIONAL_JUMP)  ; LAB_0059a7c4
    MOV EBX,dword ptr [0x026677ac]      ; 0059a6f3 | DAT_026677ac
    MOV ECX,EAX                         ; 0059a6f9
    XOR EDX,EDX                         ; 0059a6fb
    MOV EAX,0x26672ac                   ; 0059a6fd
    TEST ESI,ESI                        ; 0059a702
    JLE 0x0059a9f0                      ; 0059a704
        ;   XREF to: 0059a9f0 (CONDITIONAL_JUMP)  ; LAB_0059a9f0
    CMP EBX,dword ptr [EAX]             ; 0059a70a | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a70a
    JNZ 0x0059a9e4                      ; 0059a70c
        ;   XREF to: 0059a9e4 (CONDITIONAL_JUMP)  ; LAB_0059a9e4
    CMP EAX,ECX                         ; 0059a712
    JZ 0x0059a9e4                       ; 0059a714
        ;   XREF to: 0059a9e4 (CONDITIONAL_JUMP)  ; LAB_0059a9e4
    MOV EDI,EAX                         ; 0059a71a
        ;   Label: LAB_0059a71a
    MOV dword ptr [0x026672a8],ESI      ; 0059a71c | DAT_026672a8
    TEST EAX,EAX                        ; 0059a722
    JZ 0x0059a7c4                       ; 0059a724
        ;   XREF to: 0059a7c4 (CONDITIONAL_JUMP)  ; LAB_0059a7c4
    MOV EAX,[0x026677ac]                ; 0059a72a | DAT_026677ac
    MOV dword ptr [ESP + 0xc],EAX       ; 0059a72f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059a733
        ;   Label: LAB_0059a733
    CMP EAX,dword ptr [EBP + 0x4]       ; 0059a737
    JL 0x0059a778                       ; 0059a73a
        ;   XREF to: 0059a778 (CONDITIONAL_JUMP)  ; LAB_0059a778
    MOV ESI,dword ptr [0x026672a8]      ; 0059a73c | DAT_026672a8
    MOV EBX,EAX                         ; 0059a742
    MOV ECX,EDI                         ; 0059a744
    MOV dword ptr [EBP],0xffffffff      ; 0059a746
    XOR EDX,EDX                         ; 0059a74d
    MOV EAX,0x26672ac                   ; 0059a74f
    TEST ESI,ESI                        ; 0059a754
    JLE 0x0059aa03                      ; 0059a756
        ;   XREF to: 0059aa03 (CONDITIONAL_JUMP)  ; LAB_0059aa03
    CMP EBX,dword ptr [EAX]             ; 0059a75c | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a75c
    JNZ 0x0059a9f7                      ; 0059a75e
        ;   XREF to: 0059a9f7 (CONDITIONAL_JUMP)  ; LAB_0059a9f7
    CMP EAX,ECX                         ; 0059a764
    JZ 0x0059a9f7                       ; 0059a766
        ;   XREF to: 0059a9f7 (CONDITIONAL_JUMP)  ; LAB_0059a9f7
    MOV EBP,EAX                         ; 0059a76c
        ;   Label: LAB_0059a76c
    MOV dword ptr [0x026672a8],ESI      ; 0059a76e | DAT_026672a8
    TEST EAX,EAX                        ; 0059a774
    JZ 0x0059a7c4                       ; 0059a776
        ;   XREF to: 0059a7c4 (CONDITIONAL_JUMP)  ; LAB_0059a7c4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059a778
        ;   Label: LAB_0059a778
    CMP EAX,dword ptr [EDI + 0x4]       ; 0059a77c
    JL 0x0059aa1d                       ; 0059a77f
        ;   XREF to: 0059aa1d (CONDITIONAL_JUMP)  ; LAB_0059aa1d
    MOV ESI,dword ptr [0x026672a8]      ; 0059a785 | DAT_026672a8
    MOV ECX,EAX                         ; 0059a78b
    MOV EBX,EBP                         ; 0059a78d
    MOV dword ptr [EDI],0xffffffff      ; 0059a78f
    XOR EDX,EDX                         ; 0059a795
    MOV EAX,0x26672ac                   ; 0059a797
    TEST ESI,ESI                        ; 0059a79c
    JLE 0x0059aa16                      ; 0059a79e
        ;   XREF to: 0059aa16 (CONDITIONAL_JUMP)  ; LAB_0059aa16
    CMP ECX,dword ptr [EAX]             ; 0059a7a4 | DAT_026672ac | DAT_026672fc
        ;   Label: LAB_0059a7a4
    JNZ 0x0059aa0a                      ; 0059a7a6
        ;   XREF to: 0059aa0a (CONDITIONAL_JUMP)  ; LAB_0059aa0a
    CMP EAX,EBX                         ; 0059a7ac
    JZ 0x0059aa0a                       ; 0059a7ae
        ;   XREF to: 0059aa0a (CONDITIONAL_JUMP)  ; LAB_0059aa0a
    MOV EDI,EAX                         ; 0059a7b4
        ;   Label: LAB_0059a7b4
    MOV dword ptr [0x026672a8],ESI      ; 0059a7b6 | DAT_026672a8
    TEST EAX,EAX                        ; 0059a7bc
    JNZ 0x0059aa1d                      ; 0059a7be
        ;   XREF to: 0059aa1d (CONDITIONAL_JUMP)  ; LAB_0059aa1d
    MOV ESI,dword ptr [0x026672a8]      ; 0059a7c4 | DAT_026672a8
        ;   Label: LAB_0059a7c4
    ADD ESP,0x10                        ; 0059a7ca
    POP EBP                             ; 0059a7cd
    POP EDI                             ; 0059a7ce
    POP ESI                             ; 0059a7cf
    POP EBX                             ; 0059a7d0
    RET                                 ; 0059a7d1
    MOV EAX,0x7fffffff                  ; 0059a7d2
        ;   Label: LAB_0059a7d2
    MOV EDX,EAX                         ; 0059a7d7
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a7d9
    SAR EDX,0x1f                        ; 0059a7dc
    IDIV EBX                            ; 0059a7df
    MOV dword ptr [ECX + 0xc],EAX       ; 0059a7e1
    MOV EDX,dword ptr [0x01c35e38]      ; 0059a7e4 | DAT_01c35e38
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a7ea
    MOV EAX,dword ptr [ECX]             ; 0059a7ed
    IMUL EDX                            ; 0059a7ef
    IDIV EBX                            ; 0059a7f1
    MOV EDX,dword ptr [0x01c35e40]      ; 0059a7f3 | DAT_01c35e40
    ADD EAX,EDX                         ; 0059a7f9
    MOV EBX,dword ptr [ECX + 0x8]       ; 0059a7fb
    MOV dword ptr [ECX + 0x10],EAX      ; 0059a7fe
    MOV EDX,dword ptr [0x01c35e3c]      ; 0059a801 | DAT_01c35e3c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0059a807
    IMUL EDX                            ; 0059a80a
    IDIV EBX                            ; 0059a80c
    MOV EDX,dword ptr [0x01c35e44]      ; 0059a80e | DAT_01c35e44
    ADD EAX,EDX                         ; 0059a814
    MOV dword ptr [ECX + 0x14],EAX      ; 0059a816
    JMP 0x0059a5fd                      ; 0059a819
        ;   XREF to: 0059a5fd (UNCONDITIONAL_JUMP)  ; LAB_0059a5fd
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059a81e
        ;   Label: LAB_0059a81e
    ADD EAX,0x60                        ; 0059a822
    PUSH EAX                            ; 0059a825
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059a826
    ADD EAX,0x30                        ; 0059a82a
    PUSH EAX                            ; 0059a82d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0059a82e
    PUSH EBP                            ; 0059a832
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 0059a833
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 0059a838
    TEST EAX,EAX                        ; 0059a83b
    JNZ 0x0059a623                      ; 0059a83d
        ;   XREF to: 0059a623 (CONDITIONAL_JUMP)  ; LAB_0059a623
    MOV ESI,dword ptr [0x026672a8]      ; 0059a843 | DAT_026672a8
    ADD ESP,0x10                        ; 0059a849
    POP EBP                             ; 0059a84c
    POP EDI                             ; 0059a84d
    POP ESI                             ; 0059a84e
    POP EBX                             ; 0059a84f
    RET                                 ; 0059a850
    MOV EBX,dword ptr [ESP + 0x28]      ; 0059a851
        ;   Label: caseD_1
    PUSH EBX                            ; 0059a855
    MOV ESI,dword ptr [ESP + 0x28]      ; 0059a856
    PUSH ESI                            ; 0059a85a
    CALL engine_prim.c_prepareDepthBuffer_FUN_0051c5c0 ; 0059a85b
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_0051c5c0()
    ADD ESP,0x8                         ; 0059a860
    JMP 0x0059a647                      ; 0059a863
        ;   XREF to: 0059a647 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059a868
        ;   Label: caseD_2
    PUSH EDX                            ; 0059a86c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0059a86d
    PUSH ECX                            ; 0059a871
    CALL engine_prim.c_normalizeTextureCoords_FUN_0051c630 ; 0059a872
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_0051c630()
    ADD ESP,0x8                         ; 0059a877
    JMP 0x0059a647                      ; 0059a87a
        ;   XREF to: 0059a647 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x28]      ; 0059a87f
        ;   Label: caseD_3
    PUSH EBP                            ; 0059a883
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059a884
    PUSH EAX                            ; 0059a888
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_0051c6b0 ; 0059a889
        ;   XREF to: 0051c6b0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_adjustNearPlaneTextureCoords_FUN_0051c6b0()
    ADD ESP,0x8                         ; 0059a88e
    JMP 0x0059a647                      ; 0059a891
        ;   XREF to: 0059a647 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0059a896
        ;   Label: caseD_5
    PUSH ESI                            ; 0059a89a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0059a89b
    PUSH EDI                            ; 0059a89f
    CALL engine_prim.c_normalizeTextureCoords_FUN_0051c630 ; 0059a8a0
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_0051c630()
    ADD ESP,0x8                         ; 0059a8a5
    JMP 0x0059a647                      ; 0059a8a8
        ;   XREF to: 0059a647 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,dword ptr [ESP + 0x28]      ; 0059a8ad
        ;   Label: caseD_6
    PUSH ECX                            ; 0059a8b1
    MOV EBX,dword ptr [ESP + 0x28]      ; 0059a8b2
    PUSH EBX                            ; 0059a8b6
    CALL engine_prim.c_replaceWWithDepth_FUN_0051c720 ; 0059a8b7
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_0051c720()
    ADD ESP,0x8                         ; 0059a8bc
    JMP 0x0059a647                      ; 0059a8bf
        ;   XREF to: 0059a647 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,EDI                         ; 0059a8c4
        ;   Label: LAB_0059a8c4
    MOV ECX,dword ptr [ECX + 0x14]      ; 0059a8c6
    CMP ECX,dword ptr [EBP + 0x14]      ; 0059a8c9
    JLE 0x0059a8da                      ; 0059a8cc
        ;   XREF to: 0059a8da (CONDITIONAL_JUMP)  ; LAB_0059a8da
    MOV EDI,EBP                         ; 0059a8ce
    MOV ECX,EDX                         ; 0059a8d0
    MOV EBP,dword ptr [ESP + 0x4]       ; 0059a8d2
    MOV EDX,EAX                         ; 0059a8d6
    MOV EAX,ECX                         ; 0059a8d8
    IMUL ECX,ESI,0x50                   ; 0059a8da
        ;   Label: LAB_0059a8da
    ADD ECX,0x26672ac                   ; 0059a8dd
    MOV dword ptr [ECX],EDX             ; 0059a8e3 | DAT_026672ac
    MOV EBX,dword ptr [0x026677ac]      ; 0059a8e5 | DAT_026677ac
    MOV dword ptr [ECX + 0x4],EAX       ; 0059a8eb
    CMP EDX,EBX                         ; 0059a8ee
    JGE 0x0059a8f8                      ; 0059a8f0
        ;   XREF to: 0059a8f8 (CONDITIONAL_JUMP)  ; LAB_0059a8f8
    MOV dword ptr [0x026677ac],EDX      ; 0059a8f2 | DAT_026677ac
    CMP EAX,dword ptr [0x026677b0]      ; 0059a8f8 | DAT_026677b0
        ;   Label: LAB_0059a8f8
    JLE 0x0059a905                      ; 0059a8fe
        ;   XREF to: 0059a905 (CONDITIONAL_JUMP)  ; LAB_0059a905
    MOV [0x026677b0],EAX                ; 0059a900 | DAT_026677b0
    MOV EAX,dword ptr [EDI + 0x10]      ; 0059a905
        ;   Label: LAB_0059a905
    MOV dword ptr [ECX + 0x8],EAX       ; 0059a908
    MOV EAX,dword ptr [EDI + 0x8]       ; 0059a90b
    SHL EAX,0x8                         ; 0059a90e
    MOV dword ptr [ECX + 0x28],EAX      ; 0059a911
    MOV EAX,dword ptr [EDI + 0x20]      ; 0059a914
    MOV dword ptr [ECX + 0x10],EAX      ; 0059a917
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059a91a
    SUB EBX,dword ptr [EDI + 0x14]      ; 0059a91d
    CMP EBX,0x10000                     ; 0059a920
    JNC 0x0059a9c1                      ; 0059a926
        ;   XREF to: 0059a9c1 (CONDITIONAL_JUMP)  ; LAB_0059a9c1
    XOR EBX,EBX                         ; 0059a92c
    MOV EAX,dword ptr [EBP + 0x10]      ; 0059a92e
        ;   Label: LAB_0059a92e
    MOV EDX,dword ptr [EDI + 0x10]      ; 0059a931
    SUB EAX,EDX                         ; 0059a934
    MOV EDX,EAX                         ; 0059a936
    MOV EAX,EBX                         ; 0059a938
    MOV dword ptr [0x026672a8],ESI      ; 0059a93a | DAT_026672a8
    IMUL EDX                            ; 0059a940
    SHRD EAX,EDX,0x10                   ; 0059a942
    MOV dword ptr [ECX + 0xc],EAX       ; 0059a946
    MOV EAX,dword ptr [EBP + 0x8]       ; 0059a949
    MOV EDX,dword ptr [EDI + 0x8]       ; 0059a94c
    SUB EAX,EDX                         ; 0059a94f
    MOV EDX,EAX                         ; 0059a951
    SHL EDX,0x8                         ; 0059a953
    MOV EAX,EBX                         ; 0059a956
    IMUL EDX                            ; 0059a958
    SHRD EAX,EDX,0x10                   ; 0059a95a
    MOV dword ptr [ECX + 0x2c],EAX      ; 0059a95e
    MOV EDX,dword ptr [EBP + 0x20]      ; 0059a961
    MOV EBP,dword ptr [EDI + 0x20]      ; 0059a964
    MOV EAX,EBX                         ; 0059a967
    SUB EDX,EBP                         ; 0059a969
    IMUL EDX                            ; 0059a96b
    SHRD EAX,EDX,0x10                   ; 0059a96d
    MOV dword ptr [ECX + 0x14],EAX      ; 0059a971
    MOV EBX,dword ptr [EDI + 0x14]      ; 0059a974
    AND EBX,0xffff                      ; 0059a977
    XOR BX,0xffff                       ; 0059a97d
    MOV EDX,dword ptr [ECX + 0xc]       ; 0059a981
    MOV EAX,EBX                         ; 0059a984
    IMUL EDX                            ; 0059a986
    SHRD EAX,EDX,0x10                   ; 0059a988
    ADD dword ptr [ECX + 0x8],EAX       ; 0059a98c
    MOV EAX,EBX                         ; 0059a98f
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0059a991
    IMUL EDX                            ; 0059a994
    SHRD EAX,EDX,0x10                   ; 0059a996
    MOV EDI,dword ptr [ECX + 0x28]      ; 0059a99a
    MOV EDX,dword ptr [ECX + 0x14]      ; 0059a99d
    ADD EDI,EAX                         ; 0059a9a0
    MOV EAX,EBX                         ; 0059a9a2
    MOV dword ptr [ECX + 0x28],EDI      ; 0059a9a4
    IMUL EDX                            ; 0059a9a7
    SHRD EAX,EDX,0x10                   ; 0059a9a9
    MOV EBP,dword ptr [ECX + 0x10]      ; 0059a9ad
    MOV ESI,dword ptr [0x026672a8]      ; 0059a9b0 | DAT_026672a8
    ADD EBP,EAX                         ; 0059a9b6
    INC ESI                             ; 0059a9b8
    MOV dword ptr [ECX + 0x10],EBP      ; 0059a9b9
    JMP 0x0059a6ad                      ; 0059a9bc
        ;   XREF to: 0059a6ad (UNCONDITIONAL_JUMP)  ; LAB_0059a6ad
    MOV EAX,0xffffffff                  ; 0059a9c1
        ;   Label: LAB_0059a9c1
    XOR EDX,EDX                         ; 0059a9c6
    DIV EBX                             ; 0059a9c8
    MOV EBX,EAX                         ; 0059a9ca
    JMP 0x0059a92e                      ; 0059a9cc
        ;   XREF to: 0059a92e (UNCONDITIONAL_JUMP)  ; LAB_0059a92e
    INC EDX                             ; 0059a9d1
        ;   Label: LAB_0059a9d1
    ADD EAX,0x50                        ; 0059a9d2
    CMP EDX,ESI                         ; 0059a9d5
    JL 0x0059a6d3                       ; 0059a9d7
        ;   XREF to: 0059a6d3 (CONDITIONAL_JUMP)  ; LAB_0059a6d3
    XOR EAX,EAX                         ; 0059a9dd
        ;   Label: LAB_0059a9dd
    JMP 0x0059a6e3                      ; 0059a9df
        ;   XREF to: 0059a6e3 (UNCONDITIONAL_JUMP)  ; LAB_0059a6e3
    INC EDX                             ; 0059a9e4
        ;   Label: LAB_0059a9e4
    ADD EAX,0x50                        ; 0059a9e5
    CMP EDX,ESI                         ; 0059a9e8
    JL 0x0059a70a                       ; 0059a9ea
        ;   XREF to: 0059a70a (CONDITIONAL_JUMP)  ; LAB_0059a70a
    XOR EAX,EAX                         ; 0059a9f0
        ;   Label: LAB_0059a9f0
    JMP 0x0059a71a                      ; 0059a9f2
        ;   XREF to: 0059a71a (UNCONDITIONAL_JUMP)  ; LAB_0059a71a
    INC EDX                             ; 0059a9f7
        ;   Label: LAB_0059a9f7
    ADD EAX,0x50                        ; 0059a9f8
    CMP EDX,ESI                         ; 0059a9fb
    JL 0x0059a75c                       ; 0059a9fd
        ;   XREF to: 0059a75c (CONDITIONAL_JUMP)  ; LAB_0059a75c
    XOR EAX,EAX                         ; 0059aa03
        ;   Label: LAB_0059aa03
    JMP 0x0059a76c                      ; 0059aa05
        ;   XREF to: 0059a76c (UNCONDITIONAL_JUMP)  ; LAB_0059a76c
    INC EDX                             ; 0059aa0a
        ;   Label: LAB_0059aa0a
    ADD EAX,0x50                        ; 0059aa0b | DAT_026672fc
    CMP EDX,ESI                         ; 0059aa0e
    JL 0x0059a7a4                       ; 0059aa10
        ;   XREF to: 0059a7a4 (CONDITIONAL_JUMP)  ; LAB_0059a7a4
    XOR EAX,EAX                         ; 0059aa16
        ;   Label: LAB_0059aa16
    JMP 0x0059a7b4                      ; 0059aa18
        ;   XREF to: 0059a7b4 (UNCONDITIONAL_JUMP)  ; LAB_0059a7b4
    PUSH EDI                            ; 0059aa1d
        ;   Label: LAB_0059aa1d
    PUSH EBP                            ; 0059aa1e | DAT_026672ac
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059aa1f
    PUSH EAX                            ; 0059aa23
    CALL dword ptr [ESP + 0x38]         ; 0059aa24
    MOV EAX,dword ptr [EBP + 0xc]       ; 0059aa28
    ADD dword ptr [EBP + 0x8],EAX       ; 0059aa2b
    MOV EBX,dword ptr [EBP + 0x28]      ; 0059aa2e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0059aa31
    MOV ECX,dword ptr [EBP + 0x10]      ; 0059aa34
    ADD EBX,EAX                         ; 0059aa37
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059aa39
    MOV dword ptr [EBP + 0x28],EBX      ; 0059aa3c
    ADD ECX,EAX                         ; 0059aa3f
    MOV dword ptr [EBP + 0x10],ECX      ; 0059aa41
    ADD ESP,0xc                         ; 0059aa44
    MOV EAX,dword ptr [EDI + 0xc]       ; 0059aa47
    MOV EBX,dword ptr [EDI + 0x8]       ; 0059aa4a
    MOV EDX,dword ptr [EDI + 0x28]      ; 0059aa4d
    MOV ECX,dword ptr [EDI + 0x10]      ; 0059aa50
    ADD EBX,EAX                         ; 0059aa53
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0059aa55
    MOV dword ptr [EDI + 0x8],EBX       ; 0059aa58
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059aa5b
    ADD EDX,EAX                         ; 0059aa5f
    INC EBX                             ; 0059aa61
    MOV EAX,dword ptr [EDI + 0x14]      ; 0059aa62
    MOV dword ptr [EDI + 0x28],EDX      ; 0059aa65
    ADD ECX,EAX                         ; 0059aa68
    MOV dword ptr [ESP + 0xc],EBX       ; 0059aa6a
    MOV dword ptr [EDI + 0x10],ECX      ; 0059aa6e
    JMP 0x0059a733                      ; 0059aa71
        ;   XREF to: 0059a733 (UNCONDITIONAL_JUMP)  ; LAB_0059a733

