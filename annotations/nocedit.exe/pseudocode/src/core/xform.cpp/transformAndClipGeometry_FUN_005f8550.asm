; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SRenderVertex * __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; int *            Stack[-0x28]:4  local_28
; SRenderVertex *  Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 at 0048a7e3
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 at 0048c92e
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d4d3
;
; Referenced Globals:
;   void* switchdataD_005f850c = 005f86dc
;   void* PTR_caseD_3_005f8518 = 005f8721
;   void* PTR_caseD_1_005f8520 = 005f8a76
;   void* PTR_caseD_3_005f8528 = 005f87eb
;   void* switchdataD_005f852c = 005f886b
;   void* PTR_caseD_3_005f8538 = 005f88b0
;   void* PTR_caseD_1_005f8540 = 005f8baa
;   void* PTR_caseD_3_005f8548 = 005f897b
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   ... and 38 more
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
;   core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
;   core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f8550
        ;   Label: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
    PUSH ESI                            ; 005f8551
    PUSH EDI                            ; 005f8552
    PUSH EBP                            ; 005f8553
    SUB ESP,0x18                        ; 005f8554
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005f8557
    MOV EDI,dword ptr [ESP + 0x30]      ; 005f855b
    XOR EAX,EAX                         ; 005f855f
    XOR EBX,EBX                         ; 005f8561
    TEST EBP,EBP                        ; 005f8563
    JLE 0x005f8583                      ; 005f8565
        ;   XREF to: 005f8583 (CONDITIONAL_JUMP)  ; LAB_005f8583
    MOV EDX,EDI                         ; 005f8567
    IMUL ESI,dword ptr [EDX],0x30       ; 005f8569
        ;   Label: LAB_005f8569
    MOV ESI,dword ptr [ESI + 0x688024]  ; 005f856c | g_RenderVertexBuffer[0].projected_vertex.screen_x
    TEST ESI,0x80000000                 ; 005f8572
    JZ 0x005f857b                       ; 005f8578
        ;   XREF to: 005f857b (CONDITIONAL_JUMP)  ; LAB_005f857b
    INC EBX                             ; 005f857a
    INC EAX                             ; 005f857b
        ;   Label: LAB_005f857b
    ADD EDX,0x4                         ; 005f857c
    CMP EAX,EBP                         ; 005f857f
    JL 0x005f8569                       ; 005f8581
        ;   XREF to: 005f8569 (CONDITIONAL_JUMP)  ; LAB_005f8569
    TEST EBX,EBX                        ; 005f8583
        ;   Label: LAB_005f8583
    JNZ 0x005f85f8                      ; 005f8585
        ;   XREF to: 005f85f8 (CONDITIONAL_JUMP)  ; LAB_005f85f8
    MOV dword ptr [ESP + 0x4],EBX       ; 005f858b
    MOV dword ptr [0x00824e24],EBP      ; 005f858f | g_ClippedVertexCount
    TEST EBP,EBP                        ; 005f8595
    JLE 0x005f85f0                      ; 005f8597
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    MOV EDX,0x824e28                    ; 005f8599 | g_ClippedVertexBuffer
    MOV EBX,EDI                         ; 005f859e
    IMUL ESI,dword ptr [EBX],0x30       ; 005f85a0
        ;   Label: LAB_005f85a0
    MOV ECX,0x30                        ; 005f85a3
    ADD ESI,0x688014                    ; 005f85a8 | g_RenderVertexBuffer
    MOV EDI,EDX                         ; 005f85ae
    TEST EDI,0x7                        ; 005f85b0
    JZ 0x005f85be                       ; 005f85b6
        ;   XREF to: 005f85be (CONDITIONAL_JUMP)  ; LAB_005f85be
    MOVSD ES:EDI,ESI                    ; 005f85b8 | g_RenderVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 005f85b9
    JLE 0x005f85db                      ; 005f85bc
        ;   XREF to: 005f85db (CONDITIONAL_JUMP)  ; LAB_005f85db
    SUB ECX,0x8                         ; 005f85be
        ;   Label: LAB_005f85be
    JL 0x005f85cf                       ; 005f85c1
        ;   XREF to: 005f85cf (CONDITIONAL_JUMP)  ; LAB_005f85cf
    FILD qword ptr [ESI]                ; 005f85c3 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f85c5
    FISTP qword ptr [EDI]               ; 005f85c8 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f85ca
    JMP 0x005f85be                      ; 005f85cd
        ;   XREF to: 005f85be (UNCONDITIONAL_JUMP)  ; LAB_005f85be
    ADD ECX,0x8                         ; 005f85cf
        ;   Label: LAB_005f85cf
    JLE 0x005f85db                      ; 005f85d2
        ;   XREF to: 005f85db (CONDITIONAL_JUMP)  ; LAB_005f85db
    MOVSD ES:EDI,ESI                    ; 005f85d4 | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f85d5
    JLE 0x005f85db                      ; 005f85d8
        ;   XREF to: 005f85db (CONDITIONAL_JUMP)  ; LAB_005f85db
    MOVSD ES:EDI,ESI                    ; 005f85da | g_RenderVertexBuffer[0].projected_vertex.inv_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    MOV EAX,dword ptr [ESP + 0x4]       ; 005f85db
        ;   Label: LAB_005f85db
    ADD EBX,0x4                         ; 005f85df
    INC EAX                             ; 005f85e2
    ADD EDX,0x30                        ; 005f85e3
    MOV dword ptr [ESP + 0x4],EAX       ; 005f85e6
    CMP EBP,EAX                         ; 005f85ea
    JG 0x005f85a0                       ; 005f85ec
        ;   XREF to: 005f85a0 (CONDITIONAL_JUMP)  ; LAB_005f85a0
    MOV EAX,EAX                         ; 005f85ee
    ADD ESP,0x18                        ; 005f85f0
        ;   Label: LAB_005f85f0
    POP EBP                             ; 005f85f3
    POP EDI                             ; 005f85f4
    POP ESI                             ; 005f85f5
    POP EBX                             ; 005f85f6
    RET                                 ; 005f85f7
    MOV dword ptr [0x03f99510],EBP      ; 005f85f8 | g_ClipVertexCountStage1
        ;   Label: LAB_005f85f8
    XOR EDX,EDX                         ; 005f85fe
    XOR EBX,EBX                         ; 005f8600
    MOV dword ptr [0x03f99514],EDX      ; 005f8602 | g_ClipVertexCountStage2
    MOV dword ptr [0x03f99518],EDX      ; 005f8608 | g_ClipVertexCountStage3
    MOV dword ptr [0x03f9951c],EDX      ; 005f860e | g_ClipVertexCountStage4
    MOV dword ptr [0x00824e24],EDX      ; 005f8614 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 005f861a
    JLE 0x005f8680                      ; 005f861c
        ;   XREF to: 005f8680 (CONDITIONAL_JUMP)  ; LAB_005f8680
    MOV EDX,0x3f99b20                   ; 005f861e | g_ClipVertexBufferStage1
    MOV dword ptr [ESP],EDI             ; 005f8623
    MOV EAX,dword ptr [ESP]             ; 005f8626
        ;   Label: LAB_005f8626
    IMUL ESI,dword ptr [EAX],0x30       ; 005f8629
    MOV ECX,0x30                        ; 005f862c
    ADD ESI,0x688014                    ; 005f8631 | g_RenderVertexBuffer
    MOV EDI,EDX                         ; 005f8637
    TEST EDI,0x7                        ; 005f8639
    JZ 0x005f8647                       ; 005f863f
        ;   XREF to: 005f8647 (CONDITIONAL_JUMP)  ; LAB_005f8647
    MOVSD ES:EDI,ESI                    ; 005f8641 | g_RenderVertexBuffer | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 005f8642
    JLE 0x005f8664                      ; 005f8645
        ;   XREF to: 005f8664 (CONDITIONAL_JUMP)  ; LAB_005f8664
    SUB ECX,0x8                         ; 005f8647
        ;   Label: LAB_005f8647
    JL 0x005f8658                       ; 005f864a
        ;   XREF to: 005f8658 (CONDITIONAL_JUMP)  ; LAB_005f8658
    FILD qword ptr [ESI]                ; 005f864c | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f864e
    FISTP qword ptr [EDI]               ; 005f8651 | g_ClipVertexBufferStage1 | g_ClipVertexBufferStage1[0].projected_vertex.transformed_z | g_ClipVertexBufferStage1[1].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8653
    JMP 0x005f8647                      ; 005f8656
        ;   XREF to: 005f8647 (UNCONDITIONAL_JUMP)  ; LAB_005f8647
    ADD ECX,0x8                         ; 005f8658
        ;   Label: LAB_005f8658
    JLE 0x005f8664                      ; 005f865b
        ;   XREF to: 005f8664 (CONDITIONAL_JUMP)  ; LAB_005f8664
    MOVSD ES:EDI,ESI                    ; 005f865d | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_ClipVertexBufferStage1[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f865e
    JLE 0x005f8664                      ; 005f8661
        ;   XREF to: 005f8664 (CONDITIONAL_JUMP)  ; LAB_005f8664
    MOVSD ES:EDI,ESI                    ; 005f8663 | g_RenderVertexBuffer[0].projected_vertex.inv_z | g_ClipVertexBufferStage1[0].projected_vertex.inv_z
    MOV EAX,dword ptr [ESP]             ; 005f8664
        ;   Label: LAB_005f8664
    INC EBX                             ; 005f8667
    ADD EAX,0x4                         ; 005f8668
    ADD EDX,0x30                        ; 005f866b
    MOV dword ptr [ESP],EAX             ; 005f866e
    CMP EBX,EBP                         ; 005f8671
    JL 0x005f8626                       ; 005f8673
        ;   XREF to: 005f8626 (CONDITIONAL_JUMP)  ; LAB_005f8626
    LEA EAX,[EAX]                       ; 005f8675
    LEA EDX,[EDX]                       ; 005f867b | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    MOV EBX,EBX                         ; 005f867e
    XOR EDX,EDX                         ; 005f8680
        ;   Label: LAB_005f8680
    MOV ECX,dword ptr [0x03f99510]      ; 005f8682 | g_ClipVertexCountStage1
    MOV dword ptr [ESP + 0x8],EDX       ; 005f8688
    TEST ECX,ECX                        ; 005f868c
    JLE 0x005f873b                      ; 005f868e
        ;   XREF to: 005f873b (CONDITIONAL_JUMP)  ; LAB_005f873b
    MOV EBX,0x3f99b20                   ; 005f8694 | g_ClipVertexBufferStage1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f8699
        ;   Label: LAB_005f8699
    MOV ECX,dword ptr [0x03f99510]      ; 005f869d | g_ClipVertexCountStage1
    INC EAX                             ; 005f86a3
    CMP EAX,ECX                         ; 005f86a4
    JNZ 0x005f86aa                      ; 005f86a6
        ;   XREF to: 005f86aa (CONDITIONAL_JUMP)  ; LAB_005f86aa
    XOR EAX,ECX                         ; 005f86a8
    IMUL EAX,EAX,0x30                   ; 005f86aa
        ;   Label: LAB_005f86aa
    MOV EBP,0x3f99b20                   ; 005f86ad | g_ClipVertexBufferStage1
    MOV EDX,EBX                         ; 005f86b2 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    MOV ESI,dword ptr [EBX]             ; 005f86b4 | g_ClipVertexBufferStage1 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    MOV EDI,dword ptr [EBX + 0x8]       ; 005f86b6 | g_ClipVertexBufferStage1[0].projected_vertex.transformed_z | g_ClipVertexBufferStage1[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 005f86b9
    XOR EAX,EAX                         ; 005f86bb
    CMP ESI,EDI                         ; 005f86bd
    JL 0x005f86c6                       ; 005f86bf
        ;   XREF to: 005f86c6 (CONDITIONAL_JUMP)  ; LAB_005f86c6
    MOV EAX,0x1                         ; 005f86c1
    MOV ECX,dword ptr [EBP + 0x8]       ; 005f86c6 | g_ClipVertexBufferStage1[0].projected_vertex.transformed_z
        ;   Label: LAB_005f86c6
    CMP ECX,dword ptr [EBP]             ; 005f86c9 | g_ClipVertexBufferStage1
    JG 0x005f86d0                       ; 005f86cc
        ;   XREF to: 005f86d0 (CONDITIONAL_JUMP)  ; LAB_005f86d0
    OR AL,0x2                           ; 005f86ce
    CMP EAX,0x3                         ; 005f86d0
        ;   Label: LAB_005f86d0
    JA 0x005f8721                       ; 005f86d3
        ;   XREF to: 005f8721 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5f850c]  ; 005f86d5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x03f99514],0x30 ; 005f86dc | g_ClipVertexCountStage2
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f86e3
    MOV ESI,EDX                         ; 005f86e8
    ADD EDI,0x3f99520                   ; 005f86ea | g_ClipVertexBufferStage2
    TEST EDI,0x7                        ; 005f86f0
    JZ 0x005f86fe                       ; 005f86f6
        ;   XREF to: 005f86fe (CONDITIONAL_JUMP)  ; LAB_005f86fe
    MOVSD ES:EDI,ESI                    ; 005f86f8 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x | g_ClipVertexBufferStage2
    SUB ECX,0x4                         ; 005f86f9
    JLE 0x005f871b                      ; 005f86fc
        ;   XREF to: 005f871b (CONDITIONAL_JUMP)  ; LAB_005f871b
    SUB ECX,0x8                         ; 005f86fe
        ;   Label: LAB_005f86fe
    JL 0x005f870f                       ; 005f8701
        ;   XREF to: 005f870f (CONDITIONAL_JUMP)  ; LAB_005f870f
    FILD qword ptr [ESI]                ; 005f8703 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x | g_ClipVertexBufferStage1[1].projected_vertex.transformed_z | g_ClipVertexBufferStage1[1].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f8705
    FISTP qword ptr [EDI]               ; 005f8708 | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f870a
    JMP 0x005f86fe                      ; 005f870d
        ;   XREF to: 005f86fe (UNCONDITIONAL_JUMP)  ; LAB_005f86fe
    ADD ECX,0x8                         ; 005f870f
        ;   Label: LAB_005f870f
    JLE 0x005f871b                      ; 005f8712
        ;   XREF to: 005f871b (CONDITIONAL_JUMP)  ; LAB_005f871b
    MOVSD ES:EDI,ESI                    ; 005f8714 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_z | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f8715
    JLE 0x005f871b                      ; 005f8718
        ;   XREF to: 005f871b (CONDITIONAL_JUMP)  ; LAB_005f871b
    MOVSD ES:EDI,ESI                    ; 005f871a | g_ClipVertexBufferStage1[1].projected_vertex.inv_z | g_ClipVertexBufferStage2[0].projected_vertex.inv_z
    INC dword ptr [0x03f99514]          ; 005f871b | g_ClipVertexCountStage2
        ;   Label: LAB_005f871b
    MOV ESI,dword ptr [ESP + 0x8]       ; 005f8721
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x03f99510]      ; 005f8725 | g_ClipVertexCountStage1
    INC ESI                             ; 005f872b
    ADD EBX,0x30                        ; 005f872c | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    MOV dword ptr [ESP + 0x8],ESI       ; 005f872f
    CMP ESI,EDI                         ; 005f8733
    JL 0x005f8699                       ; 005f8735
        ;   XREF to: 005f8699 (CONDITIONAL_JUMP)  ; LAB_005f8699
    MOV EBP,dword ptr [0x03f99514]      ; 005f873b | g_ClipVertexCountStage2
        ;   Label: LAB_005f873b
    CMP EBP,0x3                         ; 005f8741
    JL 0x005f85f0                       ; 005f8744
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    XOR EAX,EAX                         ; 005f874a
    MOV dword ptr [ESP + 0x10],EAX      ; 005f874c
    TEST EBP,EBP                        ; 005f8750
    JLE 0x005f8805                      ; 005f8752
        ;   XREF to: 005f8805 (CONDITIONAL_JUMP)  ; LAB_005f8805
    MOV EBX,0x3f99520                   ; 005f8758 | g_ClipVertexBufferStage2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005f875d
        ;   Label: LAB_005f875d
    MOV EDX,dword ptr [0x03f99514]      ; 005f8761 | g_ClipVertexCountStage2
    INC EAX                             ; 005f8767
    CMP EAX,EDX                         ; 005f8768
    JNZ 0x005f876e                      ; 005f876a
        ;   XREF to: 005f876e (CONDITIONAL_JUMP)  ; LAB_005f876e
    XOR EAX,EDX                         ; 005f876c
    IMUL EAX,EAX,0x30                   ; 005f876e
        ;   Label: LAB_005f876e
    MOV EBP,0x3f99520                   ; 005f8771 | g_ClipVertexBufferStage2
    MOV EDX,EBX                         ; 005f8776 | g_ClipVertexBufferStage2
    MOV ESI,dword ptr [EBX + 0x8]       ; 005f8778 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage2[1].projected_vertex.transformed_z
    MOV ECX,dword ptr [EBX]             ; 005f877b | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage2[1].projected_vertex.transformed_x
    NEG ESI                             ; 005f877d
    ADD EBP,EAX                         ; 005f877f
    XOR EAX,EAX                         ; 005f8781
    CMP ESI,ECX                         ; 005f8783
    JL 0x005f878c                       ; 005f8785
        ;   XREF to: 005f878c (CONDITIONAL_JUMP)  ; LAB_005f878c
    MOV EAX,0x1                         ; 005f8787
    MOV ESI,dword ptr [EBP + 0x8]       ; 005f878c | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z
        ;   Label: LAB_005f878c
    MOV EDI,dword ptr [EBP]             ; 005f878f | g_ClipVertexBufferStage2
    NEG ESI                             ; 005f8792
    CMP ESI,EDI                         ; 005f8794
    JL 0x005f879a                       ; 005f8796
        ;   XREF to: 005f879a (CONDITIONAL_JUMP)  ; LAB_005f879a
    OR AL,0x2                           ; 005f8798
    CMP EAX,0x3                         ; 005f879a
        ;   Label: LAB_005f879a
    JA 0x005f87eb                       ; 005f879d
        ;   XREF to: 005f87eb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5f851c]  ; 005f879f | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    IMUL EDI,dword ptr [0x03f99518],0x30 ; 005f87a6 | g_ClipVertexCountStage3
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f87ad
    MOV ESI,EDX                         ; 005f87b2
    ADD EDI,0x3f9a120                   ; 005f87b4 | g_ClipVertexBufferStage3
    TEST EDI,0x7                        ; 005f87ba
    JZ 0x005f87c8                       ; 005f87c0
        ;   XREF to: 005f87c8 (CONDITIONAL_JUMP)  ; LAB_005f87c8
    MOVSD ES:EDI,ESI                    ; 005f87c2 | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage3
    SUB ECX,0x4                         ; 005f87c3
    JLE 0x005f87e5                      ; 005f87c6
        ;   XREF to: 005f87e5 (CONDITIONAL_JUMP)  ; LAB_005f87e5
    SUB ECX,0x8                         ; 005f87c8
        ;   Label: LAB_005f87c8
    JL 0x005f87d9                       ; 005f87cb
        ;   XREF to: 005f87d9 (CONDITIONAL_JUMP)  ; LAB_005f87d9
    FILD qword ptr [ESI]                ; 005f87cd | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f87cf
    FISTP qword ptr [EDI]               ; 005f87d2 | g_ClipVertexBufferStage3 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f87d4
    JMP 0x005f87c8                      ; 005f87d7
        ;   XREF to: 005f87c8 (UNCONDITIONAL_JUMP)  ; LAB_005f87c8
    ADD ECX,0x8                         ; 005f87d9
        ;   Label: LAB_005f87d9
    JLE 0x005f87e5                      ; 005f87dc
        ;   XREF to: 005f87e5 (CONDITIONAL_JUMP)  ; LAB_005f87e5
    MOVSD ES:EDI,ESI                    ; 005f87de | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f87df
    JLE 0x005f87e5                      ; 005f87e2
        ;   XREF to: 005f87e5 (CONDITIONAL_JUMP)  ; LAB_005f87e5
    MOVSD ES:EDI,ESI                    ; 005f87e4 | g_ClipVertexBufferStage2[0].projected_vertex.inv_z | g_ClipVertexBufferStage3[0].projected_vertex.inv_z
    INC dword ptr [0x03f99518]          ; 005f87e5 | g_ClipVertexCountStage3
        ;   Label: LAB_005f87e5
    MOV ECX,dword ptr [ESP + 0x10]      ; 005f87eb
        ;   Label: caseD_3
    MOV ESI,dword ptr [0x03f99514]      ; 005f87ef | g_ClipVertexCountStage2
    INC ECX                             ; 005f87f5
    ADD EBX,0x30                        ; 005f87f6
    MOV dword ptr [ESP + 0x10],ECX      ; 005f87f9
    CMP ECX,ESI                         ; 005f87fd
    JL 0x005f875d                       ; 005f87ff
        ;   XREF to: 005f875d (CONDITIONAL_JUMP)  ; LAB_005f875d
    MOV EDI,dword ptr [0x03f99518]      ; 005f8805 | g_ClipVertexCountStage3
        ;   Label: LAB_005f8805
    CMP EDI,0x3                         ; 005f880b
    JL 0x005f85f0                       ; 005f880e
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    XOR EBP,EBP                         ; 005f8814
    MOV dword ptr [ESP + 0x14],EBP      ; 005f8816
    TEST EDI,EDI                        ; 005f881a
    JLE 0x005f88ca                      ; 005f881c
        ;   XREF to: 005f88ca (CONDITIONAL_JUMP)  ; LAB_005f88ca
    MOV EBX,0x3f9a120                   ; 005f8822 | g_ClipVertexBufferStage3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005f8827
        ;   Label: LAB_005f8827
    MOV EBP,dword ptr [0x03f99518]      ; 005f882b | g_ClipVertexCountStage3
    INC EAX                             ; 005f8831
    CMP EAX,EBP                         ; 005f8832
    JNZ 0x005f8838                      ; 005f8834
        ;   XREF to: 005f8838 (CONDITIONAL_JUMP)  ; LAB_005f8838
    XOR EAX,EBP                         ; 005f8836
    IMUL EAX,EAX,0x30                   ; 005f8838
        ;   Label: LAB_005f8838
    MOV EBP,0x3f9a120                   ; 005f883b | g_ClipVertexBufferStage3
    MOV EDX,EBX                         ; 005f8840 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    MOV ESI,dword ptr [EBX + 0x4]       ; 005f8842 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y | g_ClipVertexBufferStage3[1].projected_vertex.transformed_y
    MOV ECX,dword ptr [EBX + 0x8]       ; 005f8845 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z | g_ClipVertexBufferStage3[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 005f8848
    XOR EAX,EAX                         ; 005f884a
    CMP ESI,ECX                         ; 005f884c
    JL 0x005f8855                       ; 005f884e
        ;   XREF to: 005f8855 (CONDITIONAL_JUMP)  ; LAB_005f8855
    MOV EAX,0x1                         ; 005f8850
    MOV EDI,dword ptr [EBP + 0x8]       ; 005f8855 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z
        ;   Label: LAB_005f8855
    CMP EDI,dword ptr [EBP + 0x4]       ; 005f8858 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    JG 0x005f885f                       ; 005f885b
        ;   XREF to: 005f885f (CONDITIONAL_JUMP)  ; LAB_005f885f
    OR AL,0x2                           ; 005f885d
    CMP EAX,0x3                         ; 005f885f
        ;   Label: LAB_005f885f
    JA 0x005f88b0                       ; 005f8862
        ;   XREF to: 005f88b0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5f852c]  ; 005f8864 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x03f9951c],0x30 ; 005f886b | g_ClipVertexCountStage4
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f8872
    MOV ESI,EDX                         ; 005f8877
    ADD EDI,0x3f9a720                   ; 005f8879 | g_ClipVertexBufferStage4
    TEST EDI,0x7                        ; 005f887f
    JZ 0x005f888d                       ; 005f8885
        ;   XREF to: 005f888d (CONDITIONAL_JUMP)  ; LAB_005f888d
    MOVSD ES:EDI,ESI                    ; 005f8887 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x | g_ClipVertexBufferStage4
    SUB ECX,0x4                         ; 005f8888
    JLE 0x005f88aa                      ; 005f888b
        ;   XREF to: 005f88aa (CONDITIONAL_JUMP)  ; LAB_005f88aa
    SUB ECX,0x8                         ; 005f888d
        ;   Label: LAB_005f888d
    JL 0x005f889e                       ; 005f8890
        ;   XREF to: 005f889e (CONDITIONAL_JUMP)  ; LAB_005f889e
    FILD qword ptr [ESI]                ; 005f8892 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x | g_ClipVertexBufferStage3[1].projected_vertex.transformed_z | g_ClipVertexBufferStage3[1].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f8894
    FISTP qword ptr [EDI]               ; 005f8897 | g_ClipVertexBufferStage4 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8899
    JMP 0x005f888d                      ; 005f889c
        ;   XREF to: 005f888d (UNCONDITIONAL_JUMP)  ; LAB_005f888d
    ADD ECX,0x8                         ; 005f889e
        ;   Label: LAB_005f889e
    JLE 0x005f88aa                      ; 005f88a1
        ;   XREF to: 005f88aa (CONDITIONAL_JUMP)  ; LAB_005f88aa
    MOVSD ES:EDI,ESI                    ; 005f88a3 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_z | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f88a4
    JLE 0x005f88aa                      ; 005f88a7
        ;   XREF to: 005f88aa (CONDITIONAL_JUMP)  ; LAB_005f88aa
    MOVSD ES:EDI,ESI                    ; 005f88a9 | g_ClipVertexBufferStage3[1].projected_vertex.inv_z | g_ClipVertexBufferStage4[0].projected_vertex.inv_z
    INC dword ptr [0x03f9951c]          ; 005f88aa | g_ClipVertexCountStage4
        ;   Label: LAB_005f88aa
    MOV EDX,dword ptr [ESP + 0x14]      ; 005f88b0
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x03f99518]      ; 005f88b4 | g_ClipVertexCountStage3
    INC EDX                             ; 005f88ba
    ADD EBX,0x30                        ; 005f88bb | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    MOV dword ptr [ESP + 0x14],EDX      ; 005f88be
    CMP EDX,ECX                         ; 005f88c2
    JL 0x005f8827                       ; 005f88c4
        ;   XREF to: 005f8827 (CONDITIONAL_JUMP)  ; LAB_005f8827
    MOV EBX,dword ptr [0x03f9951c]      ; 005f88ca | g_ClipVertexCountStage4
        ;   Label: LAB_005f88ca
    CMP EBX,0x3                         ; 005f88d0
    JL 0x005f85f0                       ; 005f88d3
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    XOR ESI,ESI                         ; 005f88d9
    MOV dword ptr [ESP + 0xc],ESI       ; 005f88db
    TEST EBX,EBX                        ; 005f88df
    JLE 0x005f8995                      ; 005f88e1
        ;   XREF to: 005f8995 (CONDITIONAL_JUMP)  ; LAB_005f8995
    MOV EBX,0x3f9a720                   ; 005f88e7 | g_ClipVertexBufferStage4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f88ec
        ;   Label: LAB_005f88ec
    MOV EDI,dword ptr [0x03f9951c]      ; 005f88f0 | g_ClipVertexCountStage4
    INC EAX                             ; 005f88f6
    CMP EAX,EDI                         ; 005f88f7
    JNZ 0x005f88fd                      ; 005f88f9
        ;   XREF to: 005f88fd (CONDITIONAL_JUMP)  ; LAB_005f88fd
    XOR EAX,EDI                         ; 005f88fb
    IMUL EAX,EAX,0x30                   ; 005f88fd
        ;   Label: LAB_005f88fd
    MOV EBP,0x3f9a720                   ; 005f8900 | g_ClipVertexBufferStage4
    MOV EDX,EBX                         ; 005f8905 | g_ClipVertexBufferStage4
    MOV ESI,dword ptr [EBX + 0x8]       ; 005f8907 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClipVertexBufferStage4[1].projected_vertex.transformed_z
    MOV ECX,dword ptr [EBX + 0x4]       ; 005f890a | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y | g_ClipVertexBufferStage4[1].projected_vertex.transformed_y
    NEG ESI                             ; 005f890d
    ADD EBP,EAX                         ; 005f890f
    XOR EAX,EAX                         ; 005f8911
    CMP ESI,ECX                         ; 005f8913
    JL 0x005f891c                       ; 005f8915
        ;   XREF to: 005f891c (CONDITIONAL_JUMP)  ; LAB_005f891c
    MOV EAX,0x1                         ; 005f8917
    MOV ESI,dword ptr [EBP + 0x8]       ; 005f891c | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
        ;   Label: LAB_005f891c
    MOV EDI,dword ptr [EBP + 0x4]       ; 005f891f | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    NEG ESI                             ; 005f8922
    CMP ESI,EDI                         ; 005f8924
    JL 0x005f892a                       ; 005f8926
        ;   XREF to: 005f892a (CONDITIONAL_JUMP)  ; LAB_005f892a
    OR AL,0x2                           ; 005f8928
    CMP EAX,0x3                         ; 005f892a
        ;   Label: LAB_005f892a
    JA 0x005f897b                       ; 005f892d
        ;   XREF to: 005f897b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5f853c]  ; 005f892f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 005f8936 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f893d
    MOV ESI,EDX                         ; 005f8942
    ADD EDI,0x824e28                    ; 005f8944 | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 005f894a
    JZ 0x005f8958                       ; 005f8950
        ;   XREF to: 005f8958 (CONDITIONAL_JUMP)  ; LAB_005f8958
    MOVSD ES:EDI,ESI                    ; 005f8952 | g_ClipVertexBufferStage4 | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 005f8953
    JLE 0x005f8975                      ; 005f8956
        ;   XREF to: 005f8975 (CONDITIONAL_JUMP)  ; LAB_005f8975
    SUB ECX,0x8                         ; 005f8958
        ;   Label: LAB_005f8958
    JL 0x005f8969                       ; 005f895b
        ;   XREF to: 005f8969 (CONDITIONAL_JUMP)  ; LAB_005f8969
    FILD qword ptr [ESI]                ; 005f895d | g_ClipVertexBufferStage4 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f895f
    FISTP qword ptr [EDI]               ; 005f8962 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8964
    JMP 0x005f8958                      ; 005f8967
        ;   XREF to: 005f8958 (UNCONDITIONAL_JUMP)  ; LAB_005f8958
    ADD ECX,0x8                         ; 005f8969
        ;   Label: LAB_005f8969
    JLE 0x005f8975                      ; 005f896c
        ;   XREF to: 005f8975 (CONDITIONAL_JUMP)  ; LAB_005f8975
    MOVSD ES:EDI,ESI                    ; 005f896e | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f896f
    JLE 0x005f8975                      ; 005f8972
        ;   XREF to: 005f8975 (CONDITIONAL_JUMP)  ; LAB_005f8975
    MOVSD ES:EDI,ESI                    ; 005f8974 | g_ClipVertexBufferStage4[0].projected_vertex.inv_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    INC dword ptr [0x00824e24]          ; 005f8975 | g_ClippedVertexCount
        ;   Label: LAB_005f8975
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f897b
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x03f9951c]      ; 005f897f | g_ClipVertexCountStage4
    INC EDX                             ; 005f8985
    ADD EBX,0x30                        ; 005f8986
    MOV dword ptr [ESP + 0xc],EDX       ; 005f8989
    CMP EDX,ECX                         ; 005f898d
    JL 0x005f88ec                       ; 005f898f
        ;   XREF to: 005f88ec (CONDITIONAL_JUMP)  ; LAB_005f88ec
    MOV EBX,dword ptr [0x00824e24]      ; 005f8995 | g_ClippedVertexCount
        ;   Label: LAB_005f8995
    CMP EBX,0x3                         ; 005f899b
    JL 0x005f85f0                       ; 005f899e
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    MOV EAX,0x824e28                    ; 005f89a4 | g_ClippedVertexBuffer
    XOR EBP,EBP                         ; 005f89a9
    TEST EBX,EBX                        ; 005f89ab
    JLE 0x005f85f0                      ; 005f89ad
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    MOV ECX,dword ptr [EAX + 0x8]       ; 005f89b3 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_005f89b3
    TEST ECX,ECX                        ; 005f89b6
    JZ 0x005f8c44                       ; 005f89b8
        ;   XREF to: 005f8c44 (CONDITIONAL_JUMP)  ; LAB_005f8c44
    CMP ECX,dword ptr [EAX]             ; 005f89be | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JGE 0x005f8c55                      ; 005f89c0
        ;   XREF to: 005f8c55 (CONDITIONAL_JUMP)  ; LAB_005f8c55
    MOV dword ptr [EAX],ECX             ; 005f89c6 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV EDX,dword ptr [0x00824e24]      ; 005f89c8 | g_ClippedVertexCount
        ;   Label: LAB_005f89c8
    INC EBP                             ; 005f89ce
    ADD EAX,0x30                        ; 005f89cf | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    CMP EBP,EDX                         ; 005f89d2
    JGE 0x005f85f0                      ; 005f89d4
        ;   XREF to: 005f85f0 (CONDITIONAL_JUMP)  ; LAB_005f85f0
    JMP 0x005f89b3                      ; 005f89da
        ;   XREF to: 005f89b3 (UNCONDITIONAL_JUMP)  ; LAB_005f89b3
    IMUL EAX,dword ptr [0x03f99514],0x30 ; 005f89dc | g_ClipVertexCountStage2
        ;   Label: caseD_1
    ADD EAX,0x3f99520                   ; 005f89e3 | g_ClipVertexBufferStage2
    PUSH EAX                            ; 005f89e8 | g_ClipVertexBufferStage2
    PUSH EDX                            ; 005f89e9 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    PUSH EBP                            ; 005f89ea
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0 ; 005f89eb
        ;   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EBP,dword ptr [0x03f99514]      ; 005f89f0 | g_ClipVertexCountStage2
    INC EBP                             ; 005f89f6
    ADD ESP,0xc                         ; 005f89f7
    MOV dword ptr [0x03f99514],EBP      ; 005f89fa | g_ClipVertexCountStage2
    JMP 0x005f8721                      ; 005f8a00
        ;   XREF to: 005f8721 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x03f99514],0x30 ; 005f8a05 | g_ClipVertexCountStage2
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f8a0c
    ADD EDI,0x3f99520                   ; 005f8a11 | g_ClipVertexBufferStage2
    MOV ESI,EDX                         ; 005f8a17
    TEST EDI,0x7                        ; 005f8a19
    JZ 0x005f8a27                       ; 005f8a1f
        ;   XREF to: 005f8a27 (CONDITIONAL_JUMP)  ; LAB_005f8a27
    MOVSD ES:EDI,ESI                    ; 005f8a21 | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x | g_ClipVertexBufferStage2
    SUB ECX,0x4                         ; 005f8a22
    JLE 0x005f8a44                      ; 005f8a25
        ;   XREF to: 005f8a44 (CONDITIONAL_JUMP)  ; LAB_005f8a44
    SUB ECX,0x8                         ; 005f8a27
        ;   Label: LAB_005f8a27
    JL 0x005f8a38                       ; 005f8a2a
        ;   XREF to: 005f8a38 (CONDITIONAL_JUMP)  ; LAB_005f8a38
    FILD qword ptr [ESI]                ; 005f8a2c | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x | g_ClipVertexBufferStage1[1].projected_vertex.transformed_z | g_ClipVertexBufferStage1[1].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f8a2e
    FISTP qword ptr [EDI]               ; 005f8a31 | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8a33
    JMP 0x005f8a27                      ; 005f8a36
        ;   XREF to: 005f8a27 (UNCONDITIONAL_JUMP)  ; LAB_005f8a27
    ADD ECX,0x8                         ; 005f8a38
        ;   Label: LAB_005f8a38
    JLE 0x005f8a44                      ; 005f8a3b
        ;   XREF to: 005f8a44 (CONDITIONAL_JUMP)  ; LAB_005f8a44
    MOVSD ES:EDI,ESI                    ; 005f8a3d | g_ClipVertexBufferStage1[1].projected_vertex.transformed_z | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f8a3e
    JLE 0x005f8a44                      ; 005f8a41
        ;   XREF to: 005f8a44 (CONDITIONAL_JUMP)  ; LAB_005f8a44
    MOVSD ES:EDI,ESI                    ; 005f8a43 | g_ClipVertexBufferStage1[1].projected_vertex.inv_z | g_ClipVertexBufferStage2[0].projected_vertex.inv_z
    MOV EDI,dword ptr [0x03f99514]      ; 005f8a44 | g_ClipVertexCountStage2
        ;   Label: LAB_005f8a44
    INC EDI                             ; 005f8a4a
    MOV dword ptr [0x03f99514],EDI      ; 005f8a4b | g_ClipVertexCountStage2
    IMUL EAX,EDI,0x30                   ; 005f8a51
    ADD EAX,0x3f99520                   ; 005f8a54 | g_ClipVertexBufferStage2[1].projected_vertex.transformed_x
    PUSH EAX                            ; 005f8a59 | g_ClipVertexBufferStage2[1].projected_vertex.transformed_x
    PUSH EBP                            ; 005f8a5a
    PUSH EDX                            ; 005f8a5b | g_ClipVertexBufferStage1[1].projected_vertex.transformed_x
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0 ; 005f8a5c
        ;   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x03f99514]      ; 005f8a61 | g_ClipVertexCountStage2
    INC ESI                             ; 005f8a67
    ADD ESP,0xc                         ; 005f8a68
    MOV dword ptr [0x03f99514],ESI      ; 005f8a6b | g_ClipVertexCountStage2
    JMP 0x005f8721                      ; 005f8a71
        ;   XREF to: 005f8721 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x03f99518],0x30 ; 005f8a76 | g_ClipVertexCountStage3
        ;   Label: caseD_1
    ADD EAX,0x3f9a120                   ; 005f8a7d | g_ClipVertexBufferStage3
    PUSH EAX                            ; 005f8a82 | g_ClipVertexBufferStage3
    PUSH EDX                            ; 005f8a83 | g_ClipVertexBufferStage2
    PUSH EBP                            ; 005f8a84
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80 ; 005f8a85
        ;   XREF to: 005f7c80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x03f99518]      ; 005f8a8a | g_ClipVertexCountStage3
    INC ESI                             ; 005f8a90
    ADD ESP,0xc                         ; 005f8a91
    MOV dword ptr [0x03f99518],ESI      ; 005f8a94 | g_ClipVertexCountStage3
    JMP 0x005f87eb                      ; 005f8a9a
        ;   XREF to: 005f87eb (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x03f99518],0x30 ; 005f8a9f | g_ClipVertexCountStage3
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f8aa6
    MOV ESI,EDX                         ; 005f8aab
    ADD EDI,0x3f9a120                   ; 005f8aad | g_ClipVertexBufferStage3
    TEST EDI,0x7                        ; 005f8ab3
    JZ 0x005f8ac1                       ; 005f8ab9
        ;   XREF to: 005f8ac1 (CONDITIONAL_JUMP)  ; LAB_005f8ac1
    MOVSD ES:EDI,ESI                    ; 005f8abb | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage3
    SUB ECX,0x4                         ; 005f8abc
    JLE 0x005f8ade                      ; 005f8abf
        ;   XREF to: 005f8ade (CONDITIONAL_JUMP)  ; LAB_005f8ade
    SUB ECX,0x8                         ; 005f8ac1
        ;   Label: LAB_005f8ac1
    JL 0x005f8ad2                       ; 005f8ac4
        ;   XREF to: 005f8ad2 (CONDITIONAL_JUMP)  ; LAB_005f8ad2
    FILD qword ptr [ESI]                ; 005f8ac6 | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f8ac8
    FISTP qword ptr [EDI]               ; 005f8acb | g_ClipVertexBufferStage3 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8acd
    JMP 0x005f8ac1                      ; 005f8ad0
        ;   XREF to: 005f8ac1 (UNCONDITIONAL_JUMP)  ; LAB_005f8ac1
    ADD ECX,0x8                         ; 005f8ad2
        ;   Label: LAB_005f8ad2
    JLE 0x005f8ade                      ; 005f8ad5
        ;   XREF to: 005f8ade (CONDITIONAL_JUMP)  ; LAB_005f8ade
    MOVSD ES:EDI,ESI                    ; 005f8ad7 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z | g_ClipVertexBufferStage3[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f8ad8
    JLE 0x005f8ade                      ; 005f8adb
        ;   XREF to: 005f8ade (CONDITIONAL_JUMP)  ; LAB_005f8ade
    MOVSD ES:EDI,ESI                    ; 005f8add | g_ClipVertexBufferStage2[0].projected_vertex.inv_z | g_ClipVertexBufferStage3[0].projected_vertex.inv_z
    MOV ECX,dword ptr [0x03f99518]      ; 005f8ade | g_ClipVertexCountStage3
        ;   Label: LAB_005f8ade
    INC ECX                             ; 005f8ae4
    MOV dword ptr [0x03f99518],ECX      ; 005f8ae5 | g_ClipVertexCountStage3
    IMUL EAX,ECX,0x30                   ; 005f8aeb
    ADD EAX,0x3f9a120                   ; 005f8aee | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    PUSH EAX                            ; 005f8af3 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    PUSH EBP                            ; 005f8af4
    PUSH EDX                            ; 005f8af5 | g_ClipVertexBufferStage2
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80 ; 005f8af6
        ;   XREF to: 005f7c80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x03f99518]      ; 005f8afb | g_ClipVertexCountStage3
    INC EDI                             ; 005f8b01
    ADD ESP,0xc                         ; 005f8b02
    MOV dword ptr [0x03f99518],EDI      ; 005f8b05 | g_ClipVertexCountStage3
    JMP 0x005f87eb                      ; 005f8b0b
        ;   XREF to: 005f87eb (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x03f9951c],0x30 ; 005f8b10 | g_ClipVertexCountStage4
        ;   Label: caseD_1
    ADD EAX,0x3f9a720                   ; 005f8b17 | g_ClipVertexBufferStage4
    PUSH EAX                            ; 005f8b1c | g_ClipVertexBufferStage4
    PUSH EDX                            ; 005f8b1d | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    PUSH EBP                            ; 005f8b1e
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40 ; 005f8b1f
        ;   XREF to: 005f7d40 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x03f9951c]      ; 005f8b24 | g_ClipVertexCountStage4
    INC ESI                             ; 005f8b2a
    ADD ESP,0xc                         ; 005f8b2b
    MOV dword ptr [0x03f9951c],ESI      ; 005f8b2e | g_ClipVertexCountStage4
    JMP 0x005f88b0                      ; 005f8b34
        ;   XREF to: 005f88b0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x03f9951c],0x30 ; 005f8b39 | g_ClipVertexCountStage4
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f8b40
    MOV ESI,EDX                         ; 005f8b45
    ADD EDI,0x3f9a720                   ; 005f8b47 | g_ClipVertexBufferStage4
    TEST EDI,0x7                        ; 005f8b4d
    JZ 0x005f8b5b                       ; 005f8b53
        ;   XREF to: 005f8b5b (CONDITIONAL_JUMP)  ; LAB_005f8b5b
    MOVSD ES:EDI,ESI                    ; 005f8b55 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x | g_ClipVertexBufferStage4
    SUB ECX,0x4                         ; 005f8b56
    JLE 0x005f8b78                      ; 005f8b59
        ;   XREF to: 005f8b78 (CONDITIONAL_JUMP)  ; LAB_005f8b78
    SUB ECX,0x8                         ; 005f8b5b
        ;   Label: LAB_005f8b5b
    JL 0x005f8b6c                       ; 005f8b5e
        ;   XREF to: 005f8b6c (CONDITIONAL_JUMP)  ; LAB_005f8b6c
    FILD qword ptr [ESI]                ; 005f8b60 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x | g_ClipVertexBufferStage3[1].projected_vertex.transformed_z | g_ClipVertexBufferStage3[1].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f8b62
    FISTP qword ptr [EDI]               ; 005f8b65 | g_ClipVertexBufferStage4 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8b67
    JMP 0x005f8b5b                      ; 005f8b6a
        ;   XREF to: 005f8b5b (UNCONDITIONAL_JUMP)  ; LAB_005f8b5b
    ADD ECX,0x8                         ; 005f8b6c
        ;   Label: LAB_005f8b6c
    JLE 0x005f8b78                      ; 005f8b6f
        ;   XREF to: 005f8b78 (CONDITIONAL_JUMP)  ; LAB_005f8b78
    MOVSD ES:EDI,ESI                    ; 005f8b71 | g_ClipVertexBufferStage3[1].projected_vertex.transformed_z | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f8b72
    JLE 0x005f8b78                      ; 005f8b75
        ;   XREF to: 005f8b78 (CONDITIONAL_JUMP)  ; LAB_005f8b78
    MOVSD ES:EDI,ESI                    ; 005f8b77 | g_ClipVertexBufferStage3[1].projected_vertex.inv_z | g_ClipVertexBufferStage4[0].projected_vertex.inv_z
    MOV ECX,dword ptr [0x03f9951c]      ; 005f8b78 | g_ClipVertexCountStage4
        ;   Label: LAB_005f8b78
    INC ECX                             ; 005f8b7e
    MOV dword ptr [0x03f9951c],ECX      ; 005f8b7f | g_ClipVertexCountStage4
    IMUL EAX,ECX,0x30                   ; 005f8b85
    ADD EAX,0x3f9a720                   ; 005f8b88 | g_ClipVertexBufferStage4[1].projected_vertex.transformed_x
    PUSH EAX                            ; 005f8b8d | g_ClipVertexBufferStage4[1].projected_vertex.transformed_x
    PUSH EBP                            ; 005f8b8e
    PUSH EDX                            ; 005f8b8f | g_ClipVertexBufferStage3[1].projected_vertex.transformed_x
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40 ; 005f8b90
        ;   XREF to: 005f7d40 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x03f9951c]      ; 005f8b95 | g_ClipVertexCountStage4
    INC EDI                             ; 005f8b9b
    ADD ESP,0xc                         ; 005f8b9c
    MOV dword ptr [0x03f9951c],EDI      ; 005f8b9f | g_ClipVertexCountStage4
    JMP 0x005f88b0                      ; 005f8ba5
        ;   XREF to: 005f88b0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 005f8baa | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 005f8bb1 | g_ClippedVertexBuffer
    PUSH EAX                            ; 005f8bb6 | g_ClippedVertexBuffer
    PUSH EDX                            ; 005f8bb7 | g_ClipVertexBufferStage4
    PUSH EBP                            ; 005f8bb8
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00 ; 005f8bb9
        ;   XREF to: 005f7e00 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x00824e24]      ; 005f8bbe | g_ClippedVertexCount
    INC ESI                             ; 005f8bc4
    ADD ESP,0xc                         ; 005f8bc5
    MOV dword ptr [0x00824e24],ESI      ; 005f8bc8 | g_ClippedVertexCount
    JMP 0x005f897b                      ; 005f8bce
        ;   XREF to: 005f897b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 005f8bd3 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f8bda
    MOV ESI,EDX                         ; 005f8bdf
    ADD EDI,0x824e28                    ; 005f8be1 | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 005f8be7
    JZ 0x005f8bf5                       ; 005f8bed
        ;   XREF to: 005f8bf5 (CONDITIONAL_JUMP)  ; LAB_005f8bf5
    MOVSD ES:EDI,ESI                    ; 005f8bef | g_ClipVertexBufferStage4 | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 005f8bf0
    JLE 0x005f8c12                      ; 005f8bf3
        ;   XREF to: 005f8c12 (CONDITIONAL_JUMP)  ; LAB_005f8c12
    SUB ECX,0x8                         ; 005f8bf5
        ;   Label: LAB_005f8bf5
    JL 0x005f8c06                       ; 005f8bf8
        ;   XREF to: 005f8c06 (CONDITIONAL_JUMP)  ; LAB_005f8c06
    FILD qword ptr [ESI]                ; 005f8bfa | g_ClipVertexBufferStage4 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 005f8bfc
    FISTP qword ptr [EDI]               ; 005f8bff | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8c01
    JMP 0x005f8bf5                      ; 005f8c04
        ;   XREF to: 005f8bf5 (UNCONDITIONAL_JUMP)  ; LAB_005f8bf5
    ADD ECX,0x8                         ; 005f8c06
        ;   Label: LAB_005f8c06
    JLE 0x005f8c12                      ; 005f8c09
        ;   XREF to: 005f8c12 (CONDITIONAL_JUMP)  ; LAB_005f8c12
    MOVSD ES:EDI,ESI                    ; 005f8c0b | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 005f8c0c
    JLE 0x005f8c12                      ; 005f8c0f
        ;   XREF to: 005f8c12 (CONDITIONAL_JUMP)  ; LAB_005f8c12
    MOVSD ES:EDI,ESI                    ; 005f8c11 | g_ClipVertexBufferStage4[0].projected_vertex.inv_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    MOV ECX,dword ptr [0x00824e24]      ; 005f8c12 | g_ClippedVertexCount
        ;   Label: LAB_005f8c12
    INC ECX                             ; 005f8c18
    MOV dword ptr [0x00824e24],ECX      ; 005f8c19 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 005f8c1f
    ADD EAX,0x824e28                    ; 005f8c22 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EAX                            ; 005f8c27 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 005f8c28
    PUSH EDX                            ; 005f8c29 | g_ClipVertexBufferStage4
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00 ; 005f8c2a
        ;   XREF to: 005f7e00 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x00824e24]      ; 005f8c2f | g_ClippedVertexCount
    INC EDI                             ; 005f8c35
    ADD ESP,0xc                         ; 005f8c36
    MOV dword ptr [0x00824e24],EDI      ; 005f8c39 | g_ClippedVertexCount
    JMP 0x005f897b                      ; 005f8c3f
        ;   XREF to: 005f897b (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 005f8c44 | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_005f8c44
    MOV dword ptr [EAX],ECX             ; 005f8c4b | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 005f8c4d | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x005f89c8                      ; 005f8c50
        ;   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)  ; LAB_005f89c8
    MOV EDX,ECX                         ; 005f8c55
        ;   Label: LAB_005f8c55
    MOV ESI,dword ptr [EAX]             ; 005f8c57 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    NEG EDX                             ; 005f8c59
    CMP EDX,ESI                         ; 005f8c5b
    JLE 0x005f8c66                      ; 005f8c5d
        ;   XREF to: 005f8c66 (CONDITIONAL_JUMP)  ; LAB_005f8c66
    MOV dword ptr [EAX],EDX             ; 005f8c5f | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JMP 0x005f89c8                      ; 005f8c61
        ;   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)  ; LAB_005f89c8
    MOV EBX,dword ptr [EAX + 0x4]       ; 005f8c66 | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_005f8c66
    CMP EBX,ECX                         ; 005f8c69
    JLE 0x005f8c75                      ; 005f8c6b
        ;   XREF to: 005f8c75 (CONDITIONAL_JUMP)  ; LAB_005f8c75
    MOV dword ptr [EAX + 0x4],ECX       ; 005f8c6d | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x005f89c8                      ; 005f8c70
        ;   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)  ; LAB_005f89c8
    CMP EDX,EBX                         ; 005f8c75
        ;   Label: LAB_005f8c75
    JLE 0x005f89c8                      ; 005f8c77
        ;   XREF to: 005f89c8 (CONDITIONAL_JUMP)  ; LAB_005f89c8
    MOV dword ptr [EAX + 0x4],EDX       ; 005f8c7d | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x005f89c8                      ; 005f8c80
        ;   XREF to: 005f89c8 (UNCONDITIONAL_JUMP)  ; LAB_005f89c8

