; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage4_FUN_005b9da0(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005b9d90 = 005b9e08
;   undefined1* PTR_caseD_1_005b9d94 = 005b9e6d
;   undefined1* PTR_caseD_3_005b9d9c = 005b9e4d
;   string caseD_0
;   string caseD_2
;   int g_INT_007c7554
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007c7558
;   int g_ClipVertexCountStage4
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9da0
        ;   Label: core_xform.cpp_clipPolygonStage4_FUN_005b9da0
    PUSH ESI                            ; 005b9da1
    PUSH EDI                            ; 005b9da2
    PUSH EBP                            ; 005b9da3
    SUB ESP,0x4                         ; 005b9da4
    XOR EDX,EDX                         ; 005b9da7
    MOV ECX,dword ptr [0x02c9d2f4]      ; 005b9da9 | g_ClipVertexCountStage4
    MOV dword ptr [ESP],EDX             ; 005b9daf
    TEST ECX,ECX                        ; 005b9db2
    JLE 0x005b9e65                      ; 005b9db4
        ;   XREF to: 005b9e65 (CONDITIONAL_JUMP)  ; LAB_005b9e65
    MOV EBX,0x2c9e4f8                   ; 005b9dba
    MOV EAX,dword ptr [ESP]             ; 005b9dbf
        ;   Label: LAB_005b9dbf
    MOV EBP,dword ptr [0x02c9d2f4]      ; 005b9dc2 | g_ClipVertexCountStage4
    INC EAX                             ; 005b9dc8
    CMP EAX,EBP                         ; 005b9dc9
    JNZ 0x005b9dcf                      ; 005b9dcb
        ;   XREF to: 005b9dcf (CONDITIONAL_JUMP)  ; LAB_005b9dcf
    XOR EAX,EBP                         ; 005b9dcd
    IMUL EAX,EAX,0x30                   ; 005b9dcf
        ;   Label: LAB_005b9dcf
    MOV EBP,0x2c9e4f8                   ; 005b9dd2
    MOV EDX,EBX                         ; 005b9dd7
    MOV EDI,dword ptr [EBX + 0x8]       ; 005b9dd9
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b9ddc
    NEG EDI                             ; 005b9ddf
    ADD EBP,EAX                         ; 005b9de1
    XOR EAX,EAX                         ; 005b9de3
    CMP EDI,ECX                         ; 005b9de5
    JL 0x005b9dee                       ; 005b9de7
        ;   XREF to: 005b9dee (CONDITIONAL_JUMP)  ; LAB_005b9dee
    MOV EAX,0x1                         ; 005b9de9
    MOV EDI,dword ptr [EBP + 0x8]       ; 005b9dee | g_ClipVertexBufferStage4[0].projected_vertex.transformed_z
        ;   Label: LAB_005b9dee
    MOV ESI,dword ptr [EBP + 0x4]       ; 005b9df1 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    NEG EDI                             ; 005b9df4
    CMP EDI,ESI                         ; 005b9df6
    JL 0x005b9dfc                       ; 005b9df8
        ;   XREF to: 005b9dfc (CONDITIONAL_JUMP)  ; LAB_005b9dfc
    OR AL,0x2                           ; 005b9dfa
    CMP EAX,0x3                         ; 005b9dfc
        ;   Label: LAB_005b9dfc
    JA 0x005b9e4d                       ; 005b9dff
        ;   XREF to: 005b9e4d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9d90]  ; 005b9e01 | = "k=Tu|" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [ESP]             ; 005b9e4d
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02c9d2f4]      ; 005b9e50 | g_ClipVertexCountStage4
    INC ESI                             ; 005b9e56
    ADD EBX,0x30                        ; 005b9e57
    MOV dword ptr [ESP],ESI             ; 005b9e5a
    CMP ESI,EDI                         ; 005b9e5d
    JL 0x005b9dbf                       ; 005b9e5f
        ;   XREF to: 005b9dbf (CONDITIONAL_JUMP)  ; LAB_005b9dbf
    ADD ESP,0x4                         ; 005b9e65
        ;   Label: LAB_005b9e65
    POP EBP                             ; 005b9e68
    POP EDI                             ; 005b9e69
    POP ESI                             ; 005b9e6a
    POP EBX                             ; 005b9e6b
    RET                                 ; 005b9e6c
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 005b9e6d | g_INT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 005b9e74 | g_SRenderVertex_ARRAY_007c7558
    PUSH EAX                            ; 005b9e79
    PUSH EDX                            ; 005b9e7a
    PUSH EBP                            ; 005b9e7b
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870 ; 005b9e7c
        ;   XREF to: 005b9870 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x007c7554]      ; 005b9e81 | g_INT_007c7554
    INC ESI                             ; 005b9e87
    ADD ESP,0xc                         ; 005b9e88
    MOV dword ptr [0x007c7554],ESI      ; 005b9e8b | g_INT_007c7554
    JMP 0x005b9e4d                      ; 005b9e91
        ;   XREF to: 005b9e4d (UNCONDITIONAL_JUMP)  ; caseD_3

