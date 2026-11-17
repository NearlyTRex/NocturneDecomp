; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage4_FUN_00587ab0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00587aa4 = 00587b7d
;   undefined1* PTR_caseD_3_00587aac = 00587b5d
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007e3e8c
;   undefined4 g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
;   undefined4 g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.screen_x
;   int g_ClipVertexCountStage4
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587ab0
        ;   Label: core_xform.cpp_clipPolygonStage4_FUN_00587ab0
    PUSH ESI                            ; 00587ab1
    PUSH EDI                            ; 00587ab2
    PUSH EBP                            ; 00587ab3
    SUB ESP,0x4                         ; 00587ab4
    XOR EDX,EDX                         ; 00587ab7
    MOV ECX,dword ptr [0x02d23004]      ; 00587ab9 | g_ClipVertexCountStage4
    MOV dword ptr [ESP],EDX             ; 00587abf
    TEST ECX,ECX                        ; 00587ac2
    JLE 0x00587b75                      ; 00587ac4
        ;   XREF to: 00587b75 (CONDITIONAL_JUMP)  ; LAB_00587b75
    MOV EBX,0x2d24208                   ; 00587aca
    MOV EAX,dword ptr [ESP]             ; 00587acf
        ;   Label: LAB_00587acf
    MOV EBP,dword ptr [0x02d23004]      ; 00587ad2 | g_ClipVertexCountStage4
    INC EAX                             ; 00587ad8
    CMP EAX,EBP                         ; 00587ad9
    JNZ 0x00587adf                      ; 00587adb
        ;   XREF to: 00587adf (CONDITIONAL_JUMP)  ; LAB_00587adf
    XOR EAX,EBP                         ; 00587add
    IMUL EAX,EAX,0x30                   ; 00587adf
        ;   Label: LAB_00587adf
    MOV EBP,0x2d24208                   ; 00587ae2
    MOV EDX,EBX                         ; 00587ae7
    MOV EDI,dword ptr [EBX + 0x8]       ; 00587ae9
    MOV ECX,dword ptr [EBX + 0x4]       ; 00587aec
    NEG EDI                             ; 00587aef
    ADD EBP,EAX                         ; 00587af1
    XOR EAX,EAX                         ; 00587af3
    CMP EDI,ECX                         ; 00587af5
    JL 0x00587afe                       ; 00587af7
        ;   XREF to: 00587afe (CONDITIONAL_JUMP)  ; LAB_00587afe
    MOV EAX,0x1                         ; 00587af9
    MOV EDI,dword ptr [EBP + 0x8]       ; 00587afe | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
        ;   Label: LAB_00587afe
    MOV ESI,dword ptr [EBP + 0x4]       ; 00587b01 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    NEG EDI                             ; 00587b04
    CMP EDI,ESI                         ; 00587b06
    JL 0x00587b0c                       ; 00587b08
        ;   XREF to: 00587b0c (CONDITIONAL_JUMP)  ; LAB_00587b0c
    OR AL,0x2                           ; 00587b0a
    CMP EAX,0x3                         ; 00587b0c
        ;   Label: LAB_00587b0c
    JA 0x00587b5d                       ; 00587b0f
        ;   XREF to: 00587b5d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x587aa0]  ; 00587b11 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 00587b18 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00587b1f
    MOV ESI,EDX                         ; 00587b24
    ADD EDI,0x7e3e8c                    ; 00587b26 | g_SRenderVertex_ARRAY_007e3e8c
    TEST EDI,0x7                        ; 00587b2c
    JZ 0x00587b3a                       ; 00587b32
        ;   XREF to: 00587b3a (CONDITIONAL_JUMP)  ; LAB_00587b3a
    MOVSD ES:EDI,ESI                    ; 00587b34 | g_SRenderVertex_ARRAY_007e3e8c
    SUB ECX,0x4                         ; 00587b35
    JLE 0x00587b57                      ; 00587b38
        ;   XREF to: 00587b57 (CONDITIONAL_JUMP)  ; LAB_00587b57
    SUB ECX,0x8                         ; 00587b3a
        ;   Label: LAB_00587b3a
    JL 0x00587b4b                       ; 00587b3d
        ;   XREF to: 00587b4b (CONDITIONAL_JUMP)  ; LAB_00587b4b
    FILD qword ptr [ESI]                ; 00587b3f
    ADD ESI,0x8                         ; 00587b41
    FISTP qword ptr [EDI]               ; 00587b44 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00587b46
    JMP 0x00587b3a                      ; 00587b49
        ;   XREF to: 00587b3a (UNCONDITIONAL_JUMP)  ; LAB_00587b3a
    ADD ECX,0x8                         ; 00587b4b
        ;   Label: LAB_00587b4b
    JLE 0x00587b57                      ; 00587b4e
        ;   XREF to: 00587b57 (CONDITIONAL_JUMP)  ; LAB_00587b57
    MOVSD ES:EDI,ESI                    ; 00587b50 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 00587b51
    JLE 0x00587b57                      ; 00587b54
        ;   XREF to: 00587b57 (CONDITIONAL_JUMP)  ; LAB_00587b57
    MOVSD ES:EDI,ESI                    ; 00587b56 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.screen_x
    INC dword ptr [0x007e3e88]          ; 00587b57 | g_ClippedVertexCount
        ;   Label: LAB_00587b57
    MOV ESI,dword ptr [ESP]             ; 00587b5d
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02d23004]      ; 00587b60 | g_ClipVertexCountStage4
    INC ESI                             ; 00587b66
    ADD EBX,0x30                        ; 00587b67
    MOV dword ptr [ESP],ESI             ; 00587b6a
    CMP ESI,EDI                         ; 00587b6d
    JL 0x00587acf                       ; 00587b6f
        ;   XREF to: 00587acf (CONDITIONAL_JUMP)  ; LAB_00587acf
    ADD ESP,0x4                         ; 00587b75
        ;   Label: LAB_00587b75
    POP EBP                             ; 00587b78
    POP EDI                             ; 00587b79
    POP ESI                             ; 00587b7a
    POP EBX                             ; 00587b7b
    RET                                 ; 00587b7c
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 00587b7d | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 00587b84 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 00587b89
    PUSH EDX                            ; 00587b8a
    PUSH EBP                            ; 00587b8b
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580 ; 00587b8c
        ;   XREF to: 00587580 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x007e3e88]      ; 00587b91 | g_ClippedVertexCount
    INC ESI                             ; 00587b97
    ADD ESP,0xc                         ; 00587b98
    MOV dword ptr [0x007e3e88],ESI      ; 00587b9b | g_ClippedVertexCount
    JMP 0x00587b5d                      ; 00587ba1
        ;   XREF to: 00587b5d (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 00587ba3 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00587baa
    MOV ESI,EDX                         ; 00587baf
    ADD EDI,0x7e3e8c                    ; 00587bb1 | g_SRenderVertex_ARRAY_007e3e8c
    TEST EDI,0x7                        ; 00587bb7
    JZ 0x00587bc5                       ; 00587bbd
        ;   XREF to: 00587bc5 (CONDITIONAL_JUMP)  ; LAB_00587bc5
    MOVSD ES:EDI,ESI                    ; 00587bbf | g_SRenderVertex_ARRAY_007e3e8c
    SUB ECX,0x4                         ; 00587bc0
    JLE 0x00587be2                      ; 00587bc3
        ;   XREF to: 00587be2 (CONDITIONAL_JUMP)  ; LAB_00587be2
    SUB ECX,0x8                         ; 00587bc5
        ;   Label: LAB_00587bc5
    JL 0x00587bd6                       ; 00587bc8
        ;   XREF to: 00587bd6 (CONDITIONAL_JUMP)  ; LAB_00587bd6
    FILD qword ptr [ESI]                ; 00587bca
    ADD ESI,0x8                         ; 00587bcc
    FISTP qword ptr [EDI]               ; 00587bcf | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00587bd1
    JMP 0x00587bc5                      ; 00587bd4
        ;   XREF to: 00587bc5 (UNCONDITIONAL_JUMP)  ; LAB_00587bc5
    ADD ECX,0x8                         ; 00587bd6
        ;   Label: LAB_00587bd6
    JLE 0x00587be2                      ; 00587bd9
        ;   XREF to: 00587be2 (CONDITIONAL_JUMP)  ; LAB_00587be2
    MOVSD ES:EDI,ESI                    ; 00587bdb | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 00587bdc
    JLE 0x00587be2                      ; 00587bdf
        ;   XREF to: 00587be2 (CONDITIONAL_JUMP)  ; LAB_00587be2
    MOVSD ES:EDI,ESI                    ; 00587be1 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.screen_x
    MOV ECX,dword ptr [0x007e3e88]      ; 00587be2 | g_ClippedVertexCount
        ;   Label: LAB_00587be2
    INC ECX                             ; 00587be8
    MOV dword ptr [0x007e3e88],ECX      ; 00587be9 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 00587bef
    ADD EAX,0x7e3e8c                    ; 00587bf2 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 00587bf7
    PUSH EBP                            ; 00587bf8
    PUSH EDX                            ; 00587bf9
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580 ; 00587bfa
        ;   XREF to: 00587580 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x007e3e88]      ; 00587bff | g_ClippedVertexCount
    INC EDI                             ; 00587c05
    ADD ESP,0xc                         ; 00587c06
    MOV dword ptr [0x007e3e88],EDI      ; 00587c09 | g_ClippedVertexCount
    JMP 0x00587b5d                      ; 00587c0f
        ;   XREF to: 00587b5d (UNCONDITIONAL_JUMP)  ; caseD_3

