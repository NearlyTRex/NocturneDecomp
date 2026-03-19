; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)
;
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_004376e8 = 00437761
;   void* PTR_caseD_3_004376f4 = 0043778b
;   int g_InputVertexCount
;   int g_OutputVertexCount
;   SRenderVertex[16] g_ClipperOutputBuffer
;   undefined4 g_ClipperOutputBuffer[0].projected_vertex.transformed_y
;   SRenderVertex[16] g_ClipperInputBuffer
;   undefined4 g_ClipperInputBuffer[0].projected_vertex.transformed_z
;   undefined4 g_ClipperInputBuffer[1].projected_vertex.transformed_x
;   undefined4 g_ClipperInputBuffer[1].projected_vertex.transformed_y
;   undefined4 g_ClipperInputBuffer[1].projected_vertex.transformed_z
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437700
        ;   Label: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
    PUSH ESI                            ; 00437701
    PUSH EDI                            ; 00437702
    PUSH EBP                            ; 00437703
    SUB ESP,0x4                         ; 00437704
    XOR EDX,EDX                         ; 00437707
    MOV ECX,dword ptr [0x00825cf0]      ; 00437709 | g_InputVertexCount
    MOV dword ptr [ESP],EDX             ; 0043770f
    TEST ECX,ECX                        ; 00437712
    JLE 0x0043779f                      ; 00437714
        ;   XREF to: 0043779f (CONDITIONAL_JUMP)  ; LAB_0043779f
    MOV EBX,0x826300                    ; 0043771a | g_ClipperInputBuffer
    MOV EAX,dword ptr [ESP]             ; 0043771f
        ;   Label: LAB_0043771f
    MOV EBP,dword ptr [0x00825cf0]      ; 00437722 | g_InputVertexCount
    INC EAX                             ; 00437728
    CMP EAX,EBP                         ; 00437729
    JNZ 0x0043772f                      ; 0043772b
        ;   XREF to: 0043772f (CONDITIONAL_JUMP)  ; LAB_0043772f
    XOR EAX,EBP                         ; 0043772d
    IMUL EAX,EAX,0x30                   ; 0043772f
        ;   Label: LAB_0043772f
    MOV EBP,0x826300                    ; 00437732 | g_ClipperInputBuffer
    MOV EDX,EBX                         ; 00437737
    MOV EDI,dword ptr [EBX]             ; 00437739 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043773b | g_ClipperInputBuffer[0].projected_vertex.transformed_z | g_ClipperInputBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0043773e
    XOR EAX,EAX                         ; 00437740
    CMP EDI,ECX                         ; 00437742
    JL 0x0043774b                       ; 00437744
        ;   XREF to: 0043774b (CONDITIONAL_JUMP)  ; LAB_0043774b
    MOV EAX,0x1                         ; 00437746
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043774b | g_ClipperInputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043774b
    CMP ESI,dword ptr [EBP]             ; 0043774e | g_ClipperInputBuffer
    JG 0x00437755                       ; 00437751
        ;   XREF to: 00437755 (CONDITIONAL_JUMP)  ; LAB_00437755
    OR AL,0x2                           ; 00437753
    CMP EAX,0x3                         ; 00437755
        ;   Label: LAB_00437755
    JA 0x0043778b                       ; 00437758
        ;   XREF to: 0043778b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4376e8]  ; 0043775a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf4],0x30 ; 00437761 | g_OutputVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00437768
    MOV ESI,EDX                         ; 0043776d
    ADD EDI,0x825d00                    ; 0043776f | g_ClipperOutputBuffer
    PUSH EDI                            ; 00437775
    MOV EAX,ECX                         ; 00437776
    SHR ECX,0x2                         ; 00437778
    MOVSD.REP ES:EDI,ESI                ; 0043777b | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043777d
    AND CL,0x3                          ; 0043777f
    MOVSB.REP ES:EDI,ESI                ; 00437782 | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 00437784
    INC dword ptr [0x00825cf4]          ; 00437785 | g_OutputVertexCount
    MOV ESI,dword ptr [ESP]             ; 0043778b
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00825cf0]      ; 0043778e | g_InputVertexCount
    INC ESI                             ; 00437794
    ADD EBX,0x30                        ; 00437795
    MOV dword ptr [ESP],ESI             ; 00437798
    CMP ESI,EDI                         ; 0043779b
    JL 0x0043771f                       ; 0043779d
        ;   XREF to: 0043771f (CONDITIONAL_JUMP)  ; LAB_0043771f
    ADD ESP,0x4                         ; 0043779f
        ;   Label: LAB_0043779f
    POP EBP                             ; 004377a2
    POP EDI                             ; 004377a3
    POP ESI                             ; 004377a4
    POP EBX                             ; 004377a5
    RET                                 ; 004377a6
    IMUL EAX,dword ptr [0x00825cf4],0x30 ; 004377a7 | g_OutputVertexCount
        ;   Label: caseD_1
    ADD EAX,0x825d00                    ; 004377ae | g_ClipperOutputBuffer
    PUSH EAX                            ; 004377b3
    PUSH EDX                            ; 004377b4 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 004377b5
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230 ; 004377b6
        ;   XREF to: 00437230 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cf4]      ; 004377bb | g_OutputVertexCount
    INC ESI                             ; 004377c1
    ADD ESP,0xc                         ; 004377c2
    MOV dword ptr [0x00825cf4],ESI      ; 004377c5 | g_OutputVertexCount
    JMP 0x0043778b                      ; 004377cb
        ;   XREF to: 0043778b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cf4],0x30 ; 004377cd | g_OutputVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004377d4
    MOV ESI,EDX                         ; 004377d9
    ADD EDI,0x825d00                    ; 004377db | g_ClipperOutputBuffer
    PUSH EDI                            ; 004377e1
    MOV EAX,ECX                         ; 004377e2
    SHR ECX,0x2                         ; 004377e4
    MOVSD.REP ES:EDI,ESI                ; 004377e7 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 004377e9
    AND CL,0x3                          ; 004377eb
    MOVSB.REP ES:EDI,ESI                ; 004377ee | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 004377f0
    MOV ECX,dword ptr [0x00825cf4]      ; 004377f1 | g_OutputVertexCount
    INC ECX                             ; 004377f7
    MOV dword ptr [0x00825cf4],ECX      ; 004377f8 | g_OutputVertexCount
    IMUL EAX,ECX,0x30                   ; 004377fe
    ADD EAX,0x825d00                    ; 00437801 | g_ClipperOutputBuffer
    PUSH EAX                            ; 00437806
    PUSH EBP                            ; 00437807
    PUSH EDX                            ; 00437808 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230 ; 00437809
        ;   XREF to: 00437230 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cf4]      ; 0043780e | g_OutputVertexCount
    INC EDI                             ; 00437814
    ADD ESP,0xc                         ; 00437815
    MOV dword ptr [0x00825cf4],EDI      ; 00437818 | g_OutputVertexCount
    JMP 0x0043778b                      ; 0043781e
        ;   XREF to: 0043778b (UNCONDITIONAL_JUMP)  ; caseD_3

