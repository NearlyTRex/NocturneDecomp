; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_zraster_c_rasterizePolygonCustom_FUN_005bf640(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)
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
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50 at 00483ccb
;
; Referenced Globals:
;   void* switchdataD_005bf618 = 005bf6b7
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c9eb34
;   undefined4 DAT_02c9eb38
;   undefined4 DAT_02c9eb88
;   undefined4 DAT_02c9f038
;   undefined4 DAT_02c9f03c
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_normalizeTextureCoords_FUN_0053dc30
;   engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bf640
        ;   Label: engine_zraster.c_rasterizePolygonCustom_FUN_005bf640
    PUSH ESI                            ; 005bf641
    PUSH EDI                            ; 005bf642
    PUSH EBP                            ; 005bf643
    SUB ESP,0x10                        ; 005bf644
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf647 | DAT_02c9eb34
    MOV EDX,dword ptr [ESP + 0x28]      ; 005bf64d
    MOV ECX,dword ptr [ESP + 0x24]      ; 005bf651
    XOR EDI,EDI                         ; 005bf655
    TEST EDX,EDX                        ; 005bf657
    JLE 0x005bf67f                      ; 005bf659
        ;   XREF to: 005bf67f (CONDITIONAL_JUMP)  ; LAB_005bf67f
    MOV AH,byte ptr [ECX + 0x13]        ; 005bf65b
        ;   Label: LAB_005bf65b
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf65e | DAT_02c9eb34
    TEST AH,0x80                        ; 005bf664
    JNZ 0x005bf842                      ; 005bf667
        ;   XREF to: 005bf842 (CONDITIONAL_JUMP)  ; LAB_005bf842
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf66d | DAT_02c9eb34
        ;   Label: LAB_005bf66d
    MOV EBX,dword ptr [ESP + 0x28]      ; 005bf673
    INC EDI                             ; 005bf677
    ADD ECX,0x30                        ; 005bf678
    CMP EDI,EBX                         ; 005bf67b
    JL 0x005bf65b                       ; 005bf67d
        ;   XREF to: 005bf65b (CONDITIONAL_JUMP)  ; LAB_005bf65b
    MOV EDI,dword ptr [0x00713a7c]      ; 005bf67f | DAT_00713a7c
        ;   Label: LAB_005bf67f
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf685 | DAT_02c9eb34
    TEST EDI,EDI                        ; 005bf68b
    JNZ 0x005bf88e                      ; 005bf68d
        ;   XREF to: 005bf88e (CONDITIONAL_JUMP)  ; LAB_005bf88e
    MOV EDX,dword ptr [0x01e7dac8]      ; 005bf693 | DAT_01e7dac8
        ;   Label: LAB_005bf693
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf699 | DAT_02c9eb34
    INC EDX                             ; 005bf69f
    MOV EAX,[0x01c51d18]                ; 005bf6a0 | DAT_01c51d18
    MOV dword ptr [0x01e7dac8],EDX      ; 005bf6a5 | DAT_01e7dac8
    CMP EAX,0x6                         ; 005bf6ab
    JA 0x005bf6b7                       ; 005bf6ae
        ;   XREF to: 005bf6b7 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x5bf618]  ; 005bf6b0 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,0x4b0                       ; 005bf6b7
        ;   Label: caseD_0
    MOV EDX,dword ptr [ESP + 0x28]      ; 005bf6bc
    XOR EBP,EBP                         ; 005bf6c0
    XOR ESI,ESI                         ; 005bf6c2
    MOV dword ptr [0x02c9f03c],EBP      ; 005bf6c4 | DAT_02c9f03c
    MOV dword ptr [ESP + 0x8],EBP       ; 005bf6ca
    MOV dword ptr [0x02c9f038],EDI      ; 005bf6ce | DAT_02c9f038
    TEST EDX,EDX                        ; 005bf6d4
    JLE 0x005bf72e                      ; 005bf6d6
        ;   XREF to: 005bf72e (CONDITIONAL_JUMP)  ; LAB_005bf72e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005bf6d8
        ;   Label: LAB_005bf6d8
    MOV EDI,dword ptr [ESP + 0x28]      ; 005bf6dc
    INC EAX                             ; 005bf6e0
    CMP EAX,EDI                         ; 005bf6e1
    JL 0x005bf6e7                       ; 005bf6e3
        ;   XREF to: 005bf6e7 (CONDITIONAL_JUMP)  ; LAB_005bf6e7
    XOR EAX,EAX                         ; 005bf6e5
    IMUL EAX,EAX,0x30                   ; 005bf6e7
        ;   Label: LAB_005bf6e7
    MOV EDX,dword ptr [ESP + 0x24]      ; 005bf6ea
    MOV EBP,dword ptr [ESP + 0x8]       ; 005bf6ee
    ADD EDX,EAX                         ; 005bf6f2
    IMUL EAX,EBP,0x30                   ; 005bf6f4
    MOV dword ptr [ESP],EDX             ; 005bf6f7
    MOV EDX,dword ptr [ESP + 0x24]      ; 005bf6fa
    ADD EDX,EAX                         ; 005bf6fe
    MOV EBP,dword ptr [ESP]             ; 005bf700
    MOV dword ptr [ESP + 0x4],EDX       ; 005bf703
    MOV EDI,EDX                         ; 005bf707
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bf709
    MOV EDX,dword ptr [EDX + 0x14]      ; 005bf70c
    SAR EAX,0x10                        ; 005bf70f
    SAR EDX,0x10                        ; 005bf712
    CMP EDX,EAX                         ; 005bf715
    JNZ 0x005bf934                      ; 005bf717
        ;   XREF to: 005bf934 (CONDITIONAL_JUMP)  ; LAB_005bf934
    MOV ECX,dword ptr [ESP + 0x8]       ; 005bf71d
        ;   Label: LAB_005bf71d
    INC ECX                             ; 005bf721
    MOV EBX,dword ptr [ESP + 0x28]      ; 005bf722
    MOV dword ptr [ESP + 0x8],ECX       ; 005bf726
    CMP ECX,EBX                         ; 005bf72a
    JL 0x005bf6d8                       ; 005bf72c
        ;   XREF to: 005bf6d8 (CONDITIONAL_JUMP)  ; LAB_005bf6d8
    MOV EAX,0x2c9eb38                   ; 005bf72e
        ;   Label: LAB_005bf72e
    MOV EDI,dword ptr [0x02c9f038]      ; 005bf733 | DAT_02c9f038
    XOR EDX,EDX                         ; 005bf739
    TEST ESI,ESI                        ; 005bf73b
    JLE 0x005bfa4d                      ; 005bf73d
        ;   XREF to: 005bfa4d (CONDITIONAL_JUMP)  ; LAB_005bfa4d
    CMP EDI,dword ptr [EAX]             ; 005bf743 | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf743
    JNZ 0x005bfa41                      ; 005bf745
        ;   XREF to: 005bfa41 (CONDITIONAL_JUMP)  ; LAB_005bfa41
    TEST EAX,EAX                        ; 005bf74b
    JZ 0x005bfa41                       ; 005bf74d
        ;   XREF to: 005bfa41 (CONDITIONAL_JUMP)  ; LAB_005bfa41
    MOV EBP,EAX                         ; 005bf753
        ;   Label: LAB_005bf753
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf755 | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf75b
    JZ 0x005bf834                       ; 005bf75d
        ;   XREF to: 005bf834 (CONDITIONAL_JUMP)  ; LAB_005bf834
    MOV EBX,dword ptr [0x02c9f038]      ; 005bf763 | DAT_02c9f038
    MOV ECX,EAX                         ; 005bf769
    XOR EDX,EDX                         ; 005bf76b
    MOV EAX,0x2c9eb38                   ; 005bf76d
    TEST ESI,ESI                        ; 005bf772
    JLE 0x005bfa60                      ; 005bf774
        ;   XREF to: 005bfa60 (CONDITIONAL_JUMP)  ; LAB_005bfa60
    CMP EBX,dword ptr [EAX]             ; 005bf77a | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf77a
    JNZ 0x005bfa54                      ; 005bf77c
        ;   XREF to: 005bfa54 (CONDITIONAL_JUMP)  ; LAB_005bfa54
    CMP EAX,ECX                         ; 005bf782
    JZ 0x005bfa54                       ; 005bf784
        ;   XREF to: 005bfa54 (CONDITIONAL_JUMP)  ; LAB_005bfa54
    MOV EDI,EAX                         ; 005bf78a
        ;   Label: LAB_005bf78a
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf78c | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf792
    JZ 0x005bf834                       ; 005bf794
        ;   XREF to: 005bf834 (CONDITIONAL_JUMP)  ; LAB_005bf834
    MOV EAX,[0x02c9f038]                ; 005bf79a | DAT_02c9f038
    MOV dword ptr [ESP + 0xc],EAX       ; 005bf79f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bf7a3
        ;   Label: LAB_005bf7a3
    CMP EAX,dword ptr [EBP + 0x4]       ; 005bf7a7
    JL 0x005bf7e8                       ; 005bf7aa
        ;   XREF to: 005bf7e8 (CONDITIONAL_JUMP)  ; LAB_005bf7e8
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf7ac | DAT_02c9eb34
    MOV EBX,EAX                         ; 005bf7b2
    MOV ECX,EDI                         ; 005bf7b4
    MOV dword ptr [EBP],0xffffffff      ; 005bf7b6
    XOR EDX,EDX                         ; 005bf7bd
    MOV EAX,0x2c9eb38                   ; 005bf7bf
    TEST ESI,ESI                        ; 005bf7c4
    JLE 0x005bfa73                      ; 005bf7c6
        ;   XREF to: 005bfa73 (CONDITIONAL_JUMP)  ; LAB_005bfa73
    CMP EBX,dword ptr [EAX]             ; 005bf7cc | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf7cc
    JNZ 0x005bfa67                      ; 005bf7ce
        ;   XREF to: 005bfa67 (CONDITIONAL_JUMP)  ; LAB_005bfa67
    CMP EAX,ECX                         ; 005bf7d4
    JZ 0x005bfa67                       ; 005bf7d6
        ;   XREF to: 005bfa67 (CONDITIONAL_JUMP)  ; LAB_005bfa67
    MOV EBP,EAX                         ; 005bf7dc
        ;   Label: LAB_005bf7dc
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf7de | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf7e4
    JZ 0x005bf834                       ; 005bf7e6
        ;   XREF to: 005bf834 (CONDITIONAL_JUMP)  ; LAB_005bf834
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bf7e8
        ;   Label: LAB_005bf7e8
    CMP EAX,dword ptr [EDI + 0x4]       ; 005bf7ec
    JL 0x005bfa8d                       ; 005bf7ef
        ;   XREF to: 005bfa8d (CONDITIONAL_JUMP)  ; LAB_005bfa8d
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf7f5 | DAT_02c9eb34
    MOV ECX,EAX                         ; 005bf7fb
    MOV EBX,EBP                         ; 005bf7fd
    MOV dword ptr [EDI],0xffffffff      ; 005bf7ff
    XOR EDX,EDX                         ; 005bf805
    MOV EAX,0x2c9eb38                   ; 005bf807
    TEST ESI,ESI                        ; 005bf80c
    JLE 0x005bfa86                      ; 005bf80e
        ;   XREF to: 005bfa86 (CONDITIONAL_JUMP)  ; LAB_005bfa86
    CMP ECX,dword ptr [EAX]             ; 005bf814 | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf814
    JNZ 0x005bfa7a                      ; 005bf816
        ;   XREF to: 005bfa7a (CONDITIONAL_JUMP)  ; LAB_005bfa7a
    CMP EAX,EBX                         ; 005bf81c
    JZ 0x005bfa7a                       ; 005bf81e
        ;   XREF to: 005bfa7a (CONDITIONAL_JUMP)  ; LAB_005bfa7a
    MOV EDI,EAX                         ; 005bf824
        ;   Label: LAB_005bf824
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf826 | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf82c
    JNZ 0x005bfa8d                      ; 005bf82e
        ;   XREF to: 005bfa8d (CONDITIONAL_JUMP)  ; LAB_005bfa8d
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf834 | DAT_02c9eb34
        ;   Label: LAB_005bf834
    ADD ESP,0x10                        ; 005bf83a
    POP EBP                             ; 005bf83d
    POP EDI                             ; 005bf83e
    POP ESI                             ; 005bf83f
    POP EBX                             ; 005bf840
    RET                                 ; 005bf841
    MOV EAX,0x7fffffff                  ; 005bf842
        ;   Label: LAB_005bf842
    MOV EDX,EAX                         ; 005bf847
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf849
    SAR EDX,0x1f                        ; 005bf84c
    IDIV EBX                            ; 005bf84f
    MOV dword ptr [ECX + 0xc],EAX       ; 005bf851
    MOV EDX,dword ptr [0x01c4eff8]      ; 005bf854 | DAT_01c4eff8
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf85a
    MOV EAX,dword ptr [ECX]             ; 005bf85d
    IMUL EDX                            ; 005bf85f
    IDIV EBX                            ; 005bf861
    MOV EDX,dword ptr [0x01c4f000]      ; 005bf863 | DAT_01c4f000
    ADD EAX,EDX                         ; 005bf869
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf86b
    MOV dword ptr [ECX + 0x10],EAX      ; 005bf86e
    MOV EDX,dword ptr [0x01c4effc]      ; 005bf871 | DAT_01c4effc
    MOV EAX,dword ptr [ECX + 0x4]       ; 005bf877
    IMUL EDX                            ; 005bf87a
    IDIV EBX                            ; 005bf87c
    MOV EDX,dword ptr [0x01c4f004]      ; 005bf87e | DAT_01c4f004
    ADD EAX,EDX                         ; 005bf884
    MOV dword ptr [ECX + 0x14],EAX      ; 005bf886
    JMP 0x005bf66d                      ; 005bf889
        ;   XREF to: 005bf66d (UNCONDITIONAL_JUMP)  ; LAB_005bf66d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005bf88e
        ;   Label: LAB_005bf88e
    ADD EAX,0x60                        ; 005bf892
    PUSH EAX                            ; 005bf895
    MOV EAX,dword ptr [ESP + 0x28]      ; 005bf896
    ADD EAX,0x30                        ; 005bf89a
    PUSH EAX                            ; 005bf89d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005bf89e
    PUSH EBP                            ; 005bf8a2
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 005bf8a3
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 005bf8a8
    TEST EAX,EAX                        ; 005bf8ab
    JNZ 0x005bf693                      ; 005bf8ad
        ;   XREF to: 005bf693 (CONDITIONAL_JUMP)  ; LAB_005bf693
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bf8b3 | DAT_02c9eb34
    ADD ESP,0x10                        ; 005bf8b9
    POP EBP                             ; 005bf8bc
    POP EDI                             ; 005bf8bd
    POP ESI                             ; 005bf8be
    POP EBX                             ; 005bf8bf
    RET                                 ; 005bf8c0
    MOV EBX,dword ptr [ESP + 0x28]      ; 005bf8c1
        ;   Label: caseD_1
    PUSH EBX                            ; 005bf8c5
    MOV ESI,dword ptr [ESP + 0x28]      ; 005bf8c6
    PUSH ESI                            ; 005bf8ca
    CALL engine_prim.c_prepareDepthBuffer_FUN_0053dbc0 ; 005bf8cb
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_0053dbc0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf8d0
    JMP 0x005bf6b7                      ; 005bf8d3
        ;   XREF to: 005bf6b7 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x28]      ; 005bf8d8
        ;   Label: caseD_2
    PUSH EDX                            ; 005bf8dc
    MOV ECX,dword ptr [ESP + 0x28]      ; 005bf8dd
    PUSH ECX                            ; 005bf8e1
    CALL engine_prim.c_normalizeTextureCoords_FUN_0053dc30 ; 005bf8e2
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_0053dc30(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf8e7
    JMP 0x005bf6b7                      ; 005bf8ea
        ;   XREF to: 005bf6b7 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x28]      ; 005bf8ef
        ;   Label: caseD_3
    PUSH EBP                            ; 005bf8f3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005bf8f4
    PUSH EAX                            ; 005bf8f8
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0 ; 005bf8f9
        ;   XREF to: 0053dcb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf8fe
    JMP 0x005bf6b7                      ; 005bf901
        ;   XREF to: 005bf6b7 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x28]      ; 005bf906
        ;   Label: caseD_5
    PUSH ESI                            ; 005bf90a
    MOV EDI,dword ptr [ESP + 0x28]      ; 005bf90b
    PUSH EDI                            ; 005bf90f
    CALL engine_prim.c_normalizeTextureCoords_FUN_0053dc30 ; 005bf910
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_0053dc30(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf915
    JMP 0x005bf6b7                      ; 005bf918
        ;   XREF to: 005bf6b7 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,dword ptr [ESP + 0x28]      ; 005bf91d
        ;   Label: caseD_6
    PUSH ECX                            ; 005bf921
    MOV EBX,dword ptr [ESP + 0x28]      ; 005bf922
    PUSH EBX                            ; 005bf926
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 005bf927
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0053dd20(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf92c
    JMP 0x005bf6b7                      ; 005bf92f
        ;   XREF to: 005bf6b7 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,EDI                         ; 005bf934
        ;   Label: LAB_005bf934
    MOV ECX,dword ptr [ECX + 0x14]      ; 005bf936
    CMP ECX,dword ptr [EBP + 0x14]      ; 005bf939
    JLE 0x005bf94a                      ; 005bf93c
        ;   XREF to: 005bf94a (CONDITIONAL_JUMP)  ; LAB_005bf94a
    MOV EDI,EBP                         ; 005bf93e
    MOV ECX,EDX                         ; 005bf940
    MOV EBP,dword ptr [ESP + 0x4]       ; 005bf942
    MOV EDX,EAX                         ; 005bf946
    MOV EAX,ECX                         ; 005bf948
    IMUL ECX,ESI,0x50                   ; 005bf94a
        ;   Label: LAB_005bf94a
    ADD ECX,0x2c9eb38                   ; 005bf94d
    MOV dword ptr [ECX],EDX             ; 005bf953 | DAT_02c9eb38
    MOV EBX,dword ptr [0x02c9f038]      ; 005bf955 | DAT_02c9f038
    MOV dword ptr [ECX + 0x4],EAX       ; 005bf95b
    CMP EDX,EBX                         ; 005bf95e
    JGE 0x005bf968                      ; 005bf960
        ;   XREF to: 005bf968 (CONDITIONAL_JUMP)  ; LAB_005bf968
    MOV dword ptr [0x02c9f038],EDX      ; 005bf962 | DAT_02c9f038
    CMP EAX,dword ptr [0x02c9f03c]      ; 005bf968 | DAT_02c9f03c
        ;   Label: LAB_005bf968
    JLE 0x005bf975                      ; 005bf96e
        ;   XREF to: 005bf975 (CONDITIONAL_JUMP)  ; LAB_005bf975
    MOV [0x02c9f03c],EAX                ; 005bf970 | DAT_02c9f03c
    MOV EAX,dword ptr [EDI + 0x10]      ; 005bf975
        ;   Label: LAB_005bf975
    MOV dword ptr [ECX + 0x8],EAX       ; 005bf978
    MOV EAX,dword ptr [EDI + 0x8]       ; 005bf97b
    SHL EAX,0x8                         ; 005bf97e
    MOV dword ptr [ECX + 0x28],EAX      ; 005bf981
    MOV EAX,dword ptr [EDI + 0x20]      ; 005bf984
    MOV dword ptr [ECX + 0x10],EAX      ; 005bf987
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bf98a
    SUB EBX,dword ptr [EDI + 0x14]      ; 005bf98d
    CMP EBX,0x10000                     ; 005bf990
    JNC 0x005bfa31                      ; 005bf996
        ;   XREF to: 005bfa31 (CONDITIONAL_JUMP)  ; LAB_005bfa31
    XOR EBX,EBX                         ; 005bf99c
    MOV EAX,dword ptr [EBP + 0x10]      ; 005bf99e
        ;   Label: LAB_005bf99e
    MOV EDX,dword ptr [EDI + 0x10]      ; 005bf9a1
    SUB EAX,EDX                         ; 005bf9a4
    MOV EDX,EAX                         ; 005bf9a6
    MOV EAX,EBX                         ; 005bf9a8
    MOV dword ptr [0x02c9eb34],ESI      ; 005bf9aa | DAT_02c9eb34
    IMUL EDX                            ; 005bf9b0
    SHRD EAX,EDX,0x10                   ; 005bf9b2
    MOV dword ptr [ECX + 0xc],EAX       ; 005bf9b6
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bf9b9
    MOV EDX,dword ptr [EDI + 0x8]       ; 005bf9bc
    SUB EAX,EDX                         ; 005bf9bf
    MOV EDX,EAX                         ; 005bf9c1
    SHL EDX,0x8                         ; 005bf9c3
    MOV EAX,EBX                         ; 005bf9c6
    IMUL EDX                            ; 005bf9c8
    SHRD EAX,EDX,0x10                   ; 005bf9ca
    MOV dword ptr [ECX + 0x2c],EAX      ; 005bf9ce
    MOV EDX,dword ptr [EBP + 0x20]      ; 005bf9d1
    MOV EBP,dword ptr [EDI + 0x20]      ; 005bf9d4
    MOV EAX,EBX                         ; 005bf9d7
    SUB EDX,EBP                         ; 005bf9d9
    IMUL EDX                            ; 005bf9db
    SHRD EAX,EDX,0x10                   ; 005bf9dd
    MOV dword ptr [ECX + 0x14],EAX      ; 005bf9e1
    MOV EBX,dword ptr [EDI + 0x14]      ; 005bf9e4
    AND EBX,0xffff                      ; 005bf9e7
    XOR BX,0xffff                       ; 005bf9ed
    MOV EDX,dword ptr [ECX + 0xc]       ; 005bf9f1
    MOV EAX,EBX                         ; 005bf9f4
    IMUL EDX                            ; 005bf9f6
    SHRD EAX,EDX,0x10                   ; 005bf9f8
    ADD dword ptr [ECX + 0x8],EAX       ; 005bf9fc
    MOV EAX,EBX                         ; 005bf9ff
    MOV EDX,dword ptr [ECX + 0x2c]      ; 005bfa01
    IMUL EDX                            ; 005bfa04
    SHRD EAX,EDX,0x10                   ; 005bfa06
    MOV EDI,dword ptr [ECX + 0x28]      ; 005bfa0a
    MOV EDX,dword ptr [ECX + 0x14]      ; 005bfa0d
    ADD EDI,EAX                         ; 005bfa10
    MOV EAX,EBX                         ; 005bfa12
    MOV dword ptr [ECX + 0x28],EDI      ; 005bfa14
    IMUL EDX                            ; 005bfa17
    SHRD EAX,EDX,0x10                   ; 005bfa19
    MOV EBP,dword ptr [ECX + 0x10]      ; 005bfa1d
    MOV ESI,dword ptr [0x02c9eb34]      ; 005bfa20 | DAT_02c9eb34
    ADD EBP,EAX                         ; 005bfa26
    INC ESI                             ; 005bfa28
    MOV dword ptr [ECX + 0x10],EBP      ; 005bfa29
    JMP 0x005bf71d                      ; 005bfa2c
        ;   XREF to: 005bf71d (UNCONDITIONAL_JUMP)  ; LAB_005bf71d
    MOV EAX,0xffffffff                  ; 005bfa31
        ;   Label: LAB_005bfa31
    XOR EDX,EDX                         ; 005bfa36
    DIV EBX                             ; 005bfa38
    MOV EBX,EAX                         ; 005bfa3a
    JMP 0x005bf99e                      ; 005bfa3c
        ;   XREF to: 005bf99e (UNCONDITIONAL_JUMP)  ; LAB_005bf99e
    INC EDX                             ; 005bfa41
        ;   Label: LAB_005bfa41
    ADD EAX,0x50                        ; 005bfa42
    CMP EDX,ESI                         ; 005bfa45
    JL 0x005bf743                       ; 005bfa47
        ;   XREF to: 005bf743 (CONDITIONAL_JUMP)  ; LAB_005bf743
    XOR EAX,EAX                         ; 005bfa4d
        ;   Label: LAB_005bfa4d
    JMP 0x005bf753                      ; 005bfa4f
        ;   XREF to: 005bf753 (UNCONDITIONAL_JUMP)  ; LAB_005bf753
    INC EDX                             ; 005bfa54
        ;   Label: LAB_005bfa54
    ADD EAX,0x50                        ; 005bfa55
    CMP EDX,ESI                         ; 005bfa58
    JL 0x005bf77a                       ; 005bfa5a
        ;   XREF to: 005bf77a (CONDITIONAL_JUMP)  ; LAB_005bf77a
    XOR EAX,EAX                         ; 005bfa60
        ;   Label: LAB_005bfa60
    JMP 0x005bf78a                      ; 005bfa62
        ;   XREF to: 005bf78a (UNCONDITIONAL_JUMP)  ; LAB_005bf78a
    INC EDX                             ; 005bfa67
        ;   Label: LAB_005bfa67
    ADD EAX,0x50                        ; 005bfa68
    CMP EDX,ESI                         ; 005bfa6b
    JL 0x005bf7cc                       ; 005bfa6d
        ;   XREF to: 005bf7cc (CONDITIONAL_JUMP)  ; LAB_005bf7cc
    XOR EAX,EAX                         ; 005bfa73
        ;   Label: LAB_005bfa73
    JMP 0x005bf7dc                      ; 005bfa75
        ;   XREF to: 005bf7dc (UNCONDITIONAL_JUMP)  ; LAB_005bf7dc
    INC EDX                             ; 005bfa7a
        ;   Label: LAB_005bfa7a
    ADD EAX,0x50                        ; 005bfa7b | DAT_02c9eb88
    CMP EDX,ESI                         ; 005bfa7e
    JL 0x005bf814                       ; 005bfa80
        ;   XREF to: 005bf814 (CONDITIONAL_JUMP)  ; LAB_005bf814
    XOR EAX,EAX                         ; 005bfa86
        ;   Label: LAB_005bfa86
    JMP 0x005bf824                      ; 005bfa88
        ;   XREF to: 005bf824 (UNCONDITIONAL_JUMP)  ; LAB_005bf824
    PUSH EDI                            ; 005bfa8d
        ;   Label: LAB_005bfa8d
    PUSH EBP                            ; 005bfa8e | DAT_02c9eb38
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bfa8f
    PUSH EAX                            ; 005bfa93
    CALL dword ptr [ESP + 0x38]         ; 005bfa94
    MOV EAX,dword ptr [EBP + 0xc]       ; 005bfa98
    ADD dword ptr [EBP + 0x8],EAX       ; 005bfa9b
    MOV EBX,dword ptr [EBP + 0x28]      ; 005bfa9e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005bfaa1
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bfaa4
    ADD EBX,EAX                         ; 005bfaa7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bfaa9
    MOV dword ptr [EBP + 0x28],EBX      ; 005bfaac
    ADD ECX,EAX                         ; 005bfaaf
    MOV dword ptr [EBP + 0x10],ECX      ; 005bfab1
    ADD ESP,0xc                         ; 005bfab4
    MOV EAX,dword ptr [EDI + 0xc]       ; 005bfab7
    MOV EBX,dword ptr [EDI + 0x8]       ; 005bfaba
    MOV EDX,dword ptr [EDI + 0x28]      ; 005bfabd
    MOV ECX,dword ptr [EDI + 0x10]      ; 005bfac0
    ADD EBX,EAX                         ; 005bfac3
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005bfac5
    MOV dword ptr [EDI + 0x8],EBX       ; 005bfac8
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bfacb
    ADD EDX,EAX                         ; 005bfacf
    INC EBX                             ; 005bfad1
    MOV EAX,dword ptr [EDI + 0x14]      ; 005bfad2
    MOV dword ptr [EDI + 0x28],EDX      ; 005bfad5
    ADD ECX,EAX                         ; 005bfad8
    MOV dword ptr [ESP + 0xc],EBX       ; 005bfada
    MOV dword ptr [EDI + 0x10],ECX      ; 005bfade
    JMP 0x005bf7a3                      ; 005bfae1
        ;   XREF to: 005bf7a3 (UNCONDITIONAL_JUMP)  ; LAB_005bf7a3

