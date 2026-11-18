; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005b9ab0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_005b9aa4 = 005b9b7c
;   undefined1* PTR_caseD_3_005b9aac = 005b9b5c
;   int g_ClipVertexCountStage2
;   int g_ClipVertexCountStage3
;   SRenderVertex[32] g_ClipVertexBufferStage2
;   undefined4 g_ClipVertexBufferStage2[0].projected_vertex.transformed_z
;   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
;
; Called Functions:
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9ab0
        ;   Label: core_xform.cpp_clipPolygonStage2_FUN_005b9ab0
    PUSH ESI                            ; 005b9ab1
    PUSH EDI                            ; 005b9ab2
    PUSH EBP                            ; 005b9ab3
    SUB ESP,0x4                         ; 005b9ab4
    XOR EDX,EDX                         ; 005b9ab7
    MOV ECX,dword ptr [0x02c9d2ec]      ; 005b9ab9 | g_ClipVertexCountStage2
    MOV dword ptr [ESP],EDX             ; 005b9abf
    TEST ECX,ECX                        ; 005b9ac2
    JLE 0x005b9b74                      ; 005b9ac4
        ;   XREF to: 005b9b74 (CONDITIONAL_JUMP)  ; LAB_005b9b74
    MOV EBX,0x2c9d2f8                   ; 005b9aca
    MOV EAX,dword ptr [ESP]             ; 005b9acf
        ;   Label: LAB_005b9acf
    MOV EBP,dword ptr [0x02c9d2ec]      ; 005b9ad2 | g_ClipVertexCountStage2
    INC EAX                             ; 005b9ad8
    CMP EAX,EBP                         ; 005b9ad9
    JNZ 0x005b9adf                      ; 005b9adb
        ;   XREF to: 005b9adf (CONDITIONAL_JUMP)  ; LAB_005b9adf
    XOR EAX,EBP                         ; 005b9add
    IMUL EAX,EAX,0x30                   ; 005b9adf
        ;   Label: LAB_005b9adf
    MOV EBP,0x2c9d2f8                   ; 005b9ae2
    MOV EDX,EBX                         ; 005b9ae7
    MOV EDI,dword ptr [EBX + 0x8]       ; 005b9ae9
    MOV ECX,dword ptr [EBX]             ; 005b9aec
    NEG EDI                             ; 005b9aee
    ADD EBP,EAX                         ; 005b9af0
    XOR EAX,EAX                         ; 005b9af2
    CMP EDI,ECX                         ; 005b9af4
    JL 0x005b9afd                       ; 005b9af6
        ;   XREF to: 005b9afd (CONDITIONAL_JUMP)  ; LAB_005b9afd
    MOV EAX,0x1                         ; 005b9af8
    MOV EDI,dword ptr [EBP + 0x8]       ; 005b9afd | g_ClipVertexBufferStage2[0].projected_vertex.transformed_z
        ;   Label: LAB_005b9afd
    MOV ESI,dword ptr [EBP]             ; 005b9b00 | g_ClipVertexBufferStage2
    NEG EDI                             ; 005b9b03
    CMP EDI,ESI                         ; 005b9b05
    JL 0x005b9b0b                       ; 005b9b07
        ;   XREF to: 005b9b0b (CONDITIONAL_JUMP)  ; LAB_005b9b0b
    OR AL,0x2                           ; 005b9b09
    CMP EAX,0x3                         ; 005b9b0b
        ;   Label: LAB_005b9b0b
    JA 0x005b9b5c                       ; 005b9b0e
        ;   XREF to: 005b9b5c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9aa0]  ; 005b9b10 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02c9d2f0],0x30 ; 005b9b17 | g_ClipVertexCountStage3
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005b9b1e
    MOV ESI,EDX                         ; 005b9b23
    ADD EDI,0x2c9def8                   ; 005b9b25
    TEST EDI,0x7                        ; 005b9b2b
    JZ 0x005b9b39                       ; 005b9b31
        ;   XREF to: 005b9b39 (CONDITIONAL_JUMP)  ; LAB_005b9b39
    MOVSD ES:EDI,ESI                    ; 005b9b33
    SUB ECX,0x4                         ; 005b9b34
    JLE 0x005b9b56                      ; 005b9b37
        ;   XREF to: 005b9b56 (CONDITIONAL_JUMP)  ; LAB_005b9b56
    SUB ECX,0x8                         ; 005b9b39
        ;   Label: LAB_005b9b39
    JL 0x005b9b4a                       ; 005b9b3c
        ;   XREF to: 005b9b4a (CONDITIONAL_JUMP)  ; LAB_005b9b4a
    FILD qword ptr [ESI]                ; 005b9b3e
    ADD ESI,0x8                         ; 005b9b40
    FISTP qword ptr [EDI]               ; 005b9b43 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005b9b45
    JMP 0x005b9b39                      ; 005b9b48
        ;   XREF to: 005b9b39 (UNCONDITIONAL_JUMP)  ; LAB_005b9b39
    ADD ECX,0x8                         ; 005b9b4a
        ;   Label: LAB_005b9b4a
    JLE 0x005b9b56                      ; 005b9b4d
        ;   XREF to: 005b9b56 (CONDITIONAL_JUMP)  ; LAB_005b9b56
    MOVSD ES:EDI,ESI                    ; 005b9b4f
    SUB ECX,0x4                         ; 005b9b50
    JLE 0x005b9b56                      ; 005b9b53
        ;   XREF to: 005b9b56 (CONDITIONAL_JUMP)  ; LAB_005b9b56
    MOVSD ES:EDI,ESI                    ; 005b9b55
    INC dword ptr [0x02c9d2f0]          ; 005b9b56 | g_ClipVertexCountStage3
        ;   Label: LAB_005b9b56
    MOV ESI,dword ptr [ESP]             ; 005b9b5c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02c9d2ec]      ; 005b9b5f | g_ClipVertexCountStage2
    INC ESI                             ; 005b9b65
    ADD EBX,0x30                        ; 005b9b66
    MOV dword ptr [ESP],ESI             ; 005b9b69
    CMP ESI,EDI                         ; 005b9b6c
    JL 0x005b9acf                       ; 005b9b6e
        ;   XREF to: 005b9acf (CONDITIONAL_JUMP)  ; LAB_005b9acf
    ADD ESP,0x4                         ; 005b9b74
        ;   Label: LAB_005b9b74
    POP EBP                             ; 005b9b77
    POP EDI                             ; 005b9b78
    POP ESI                             ; 005b9b79
    POP EBX                             ; 005b9b7a
    RET                                 ; 005b9b7b
    IMUL EAX,dword ptr [0x02c9d2f0],0x30 ; 005b9b7c | g_ClipVertexCountStage3
        ;   Label: caseD_1
    ADD EAX,0x2c9def8                   ; 005b9b83
    PUSH EAX                            ; 005b9b88
    PUSH EDX                            ; 005b9b89
    PUSH EBP                            ; 005b9b8a
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0 ; 005b9b8b
        ;   XREF to: 005b96f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02c9d2f0]      ; 005b9b90 | g_ClipVertexCountStage3
    INC ESI                             ; 005b9b96
    ADD ESP,0xc                         ; 005b9b97
    MOV dword ptr [0x02c9d2f0],ESI      ; 005b9b9a | g_ClipVertexCountStage3
    JMP 0x005b9b5c                      ; 005b9ba0
        ;   XREF to: 005b9b5c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02c9d2f0],0x30 ; 005b9ba2 | g_ClipVertexCountStage3
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005b9ba9
    MOV ESI,EDX                         ; 005b9bae
    ADD EDI,0x2c9def8                   ; 005b9bb0
    TEST EDI,0x7                        ; 005b9bb6
    JZ 0x005b9bc4                       ; 005b9bbc
        ;   XREF to: 005b9bc4 (CONDITIONAL_JUMP)  ; LAB_005b9bc4
    MOVSD ES:EDI,ESI                    ; 005b9bbe
    SUB ECX,0x4                         ; 005b9bbf
    JLE 0x005b9be1                      ; 005b9bc2
        ;   XREF to: 005b9be1 (CONDITIONAL_JUMP)  ; LAB_005b9be1
    SUB ECX,0x8                         ; 005b9bc4
        ;   Label: LAB_005b9bc4
    JL 0x005b9bd5                       ; 005b9bc7
        ;   XREF to: 005b9bd5 (CONDITIONAL_JUMP)  ; LAB_005b9bd5
    FILD qword ptr [ESI]                ; 005b9bc9
    ADD ESI,0x8                         ; 005b9bcb
    FISTP qword ptr [EDI]               ; 005b9bce | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005b9bd0
    JMP 0x005b9bc4                      ; 005b9bd3
        ;   XREF to: 005b9bc4 (UNCONDITIONAL_JUMP)  ; LAB_005b9bc4
    ADD ECX,0x8                         ; 005b9bd5
        ;   Label: LAB_005b9bd5
    JLE 0x005b9be1                      ; 005b9bd8
        ;   XREF to: 005b9be1 (CONDITIONAL_JUMP)  ; LAB_005b9be1
    MOVSD ES:EDI,ESI                    ; 005b9bda
    SUB ECX,0x4                         ; 005b9bdb
    JLE 0x005b9be1                      ; 005b9bde
        ;   XREF to: 005b9be1 (CONDITIONAL_JUMP)  ; LAB_005b9be1
    MOVSD ES:EDI,ESI                    ; 005b9be0
    MOV ECX,dword ptr [0x02c9d2f0]      ; 005b9be1 | g_ClipVertexCountStage3
        ;   Label: LAB_005b9be1
    INC ECX                             ; 005b9be7
    MOV dword ptr [0x02c9d2f0],ECX      ; 005b9be8 | g_ClipVertexCountStage3
    IMUL EAX,ECX,0x30                   ; 005b9bee
    ADD EAX,0x2c9def8                   ; 005b9bf1
    PUSH EAX                            ; 005b9bf6
    PUSH EBP                            ; 005b9bf7
    PUSH EDX                            ; 005b9bf8
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0 ; 005b9bf9
        ;   XREF to: 005b96f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02c9d2f0]      ; 005b9bfe | g_ClipVertexCountStage3
    INC EDI                             ; 005b9c04
    ADD ESP,0xc                         ; 005b9c05
    MOV dword ptr [0x02c9d2f0],EDI      ; 005b9c08 | g_ClipVertexCountStage3
    JMP 0x005b9b5c                      ; 005b9c0e
        ;   XREF to: 005b9b5c (UNCONDITIONAL_JUMP)  ; caseD_3

