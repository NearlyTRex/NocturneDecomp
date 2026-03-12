; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void)
;
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_005f8034 = 005f810c
;   void* PTR_caseD_3_005f803c = 005f80ec
;   int g_ClipVertexCountStage2
;   int g_ClipVertexCountStage3
;   SRenderVertex[32] g_ClipVertexBufferStage2
;   undefined4 g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
;   undefined4 DAT_03f99528
;   undefined4 DAT_03f9952c
;   undefined4 DAT_03f99530
;   undefined4 DAT_03f99550
;   undefined4 DAT_03f99558
;   SRenderVertex[32] g_ClipVertexBufferStage3
;   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
;   undefined4 DAT_03f9a12c
;   undefined4 DAT_03f9a130
;
; Called Functions:
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f8040
        ;   Label: core_xform.cpp_clipPolygonStage2_FUN_005f8040
    PUSH ESI                            ; 005f8041
    PUSH EDI                            ; 005f8042
    PUSH EBP                            ; 005f8043
    SUB ESP,0x4                         ; 005f8044
    XOR EDX,EDX                         ; 005f8047
    MOV ECX,dword ptr [0x03f99514]      ; 005f8049 | g_ClipVertexCountStage2
    MOV dword ptr [ESP],EDX             ; 005f804f
    TEST ECX,ECX                        ; 005f8052
    JLE 0x005f8104                      ; 005f8054
        ;   XREF to: 005f8104 (CONDITIONAL_JUMP)  ; LAB_005f8104
    MOV EBX,0x3f99520                   ; 005f805a | g_ClipVertexBufferStage2
    MOV EAX,dword ptr [ESP]             ; 005f805f
        ;   Label: LAB_005f805f
    MOV EBP,dword ptr [0x03f99514]      ; 005f8062 | g_ClipVertexCountStage2
    INC EAX                             ; 005f8068
    CMP EAX,EBP                         ; 005f8069
    JNZ 0x005f806f                      ; 005f806b
        ;   XREF to: 005f806f (CONDITIONAL_JUMP)  ; LAB_005f806f
    XOR EAX,EBP                         ; 005f806d
    IMUL EAX,EAX,0x30                   ; 005f806f
        ;   Label: LAB_005f806f
    MOV EBP,0x3f99520                   ; 005f8072 | g_ClipVertexBufferStage2
    MOV EDX,EBX                         ; 005f8077 | g_ClipVertexBufferStage2
    MOV EDI,dword ptr [EBX + 0x8]       ; 005f8079 | DAT_03f99528 | DAT_03f99558
    MOV ECX,dword ptr [EBX]             ; 005f807c | g_ClipVertexBufferStage2 | DAT_03f99550
    NEG EDI                             ; 005f807e
    ADD EBP,EAX                         ; 005f8080
    XOR EAX,EAX                         ; 005f8082
    CMP EDI,ECX                         ; 005f8084
    JL 0x005f808d                       ; 005f8086
        ;   XREF to: 005f808d (CONDITIONAL_JUMP)  ; LAB_005f808d
    MOV EAX,0x1                         ; 005f8088
    MOV EDI,dword ptr [EBP + 0x8]       ; 005f808d | DAT_03f99528
        ;   Label: LAB_005f808d
    MOV ESI,dword ptr [EBP]             ; 005f8090 | g_ClipVertexBufferStage2
    NEG EDI                             ; 005f8093
    CMP EDI,ESI                         ; 005f8095
    JL 0x005f809b                       ; 005f8097
        ;   XREF to: 005f809b (CONDITIONAL_JUMP)  ; LAB_005f809b
    OR AL,0x2                           ; 005f8099
    CMP EAX,0x3                         ; 005f809b
        ;   Label: LAB_005f809b
    JA 0x005f80ec                       ; 005f809e
        ;   XREF to: 005f80ec (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5f8030]  ; 005f80a0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x03f99518],0x30 ; 005f80a7 | g_ClipVertexCountStage3
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f80ae
    MOV ESI,EDX                         ; 005f80b3
    ADD EDI,0x3f9a120                   ; 005f80b5 | g_ClipVertexBufferStage3
    TEST EDI,0x7                        ; 005f80bb
    JZ 0x005f80c9                       ; 005f80c1
        ;   XREF to: 005f80c9 (CONDITIONAL_JUMP)  ; LAB_005f80c9
    MOVSD ES:EDI,ESI                    ; 005f80c3 | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage3
    SUB ECX,0x4                         ; 005f80c4
    JLE 0x005f80e6                      ; 005f80c7
        ;   XREF to: 005f80e6 (CONDITIONAL_JUMP)  ; LAB_005f80e6
    SUB ECX,0x8                         ; 005f80c9
        ;   Label: LAB_005f80c9
    JL 0x005f80da                       ; 005f80cc
        ;   XREF to: 005f80da (CONDITIONAL_JUMP)  ; LAB_005f80da
    FILD qword ptr [ESI]                ; 005f80ce | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y | DAT_03f9952c
    ADD ESI,0x8                         ; 005f80d0
    FISTP qword ptr [EDI]               ; 005f80d3 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y | DAT_03f9a12c
    ADD EDI,0x8                         ; 005f80d5
    JMP 0x005f80c9                      ; 005f80d8
        ;   XREF to: 005f80c9 (UNCONDITIONAL_JUMP)  ; LAB_005f80c9
    ADD ECX,0x8                         ; 005f80da
        ;   Label: LAB_005f80da
    JLE 0x005f80e6                      ; 005f80dd
        ;   XREF to: 005f80e6 (CONDITIONAL_JUMP)  ; LAB_005f80e6
    MOVSD ES:EDI,ESI                    ; 005f80df | DAT_03f9952c | DAT_03f9a12c
    SUB ECX,0x4                         ; 005f80e0
    JLE 0x005f80e6                      ; 005f80e3
        ;   XREF to: 005f80e6 (CONDITIONAL_JUMP)  ; LAB_005f80e6
    MOVSD ES:EDI,ESI                    ; 005f80e5 | DAT_03f99530 | DAT_03f9a130
    INC dword ptr [0x03f99518]          ; 005f80e6 | g_ClipVertexCountStage3
        ;   Label: LAB_005f80e6
    MOV ESI,dword ptr [ESP]             ; 005f80ec
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x03f99514]      ; 005f80ef | g_ClipVertexCountStage2
    INC ESI                             ; 005f80f5
    ADD EBX,0x30                        ; 005f80f6
    MOV dword ptr [ESP],ESI             ; 005f80f9
    CMP ESI,EDI                         ; 005f80fc
    JL 0x005f805f                       ; 005f80fe
        ;   XREF to: 005f805f (CONDITIONAL_JUMP)  ; LAB_005f805f
    ADD ESP,0x4                         ; 005f8104
        ;   Label: LAB_005f8104
    POP EBP                             ; 005f8107
    POP EDI                             ; 005f8108
    POP ESI                             ; 005f8109
    POP EBX                             ; 005f810a
    RET                                 ; 005f810b
    IMUL EAX,dword ptr [0x03f99518],0x30 ; 005f810c | g_ClipVertexCountStage3
        ;   Label: caseD_1
    ADD EAX,0x3f9a120                   ; 005f8113 | g_ClipVertexBufferStage3
    PUSH EAX                            ; 005f8118
    PUSH EDX                            ; 005f8119 | g_ClipVertexBufferStage2
    PUSH EBP                            ; 005f811a
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80 ; 005f811b
        ;   XREF to: 005f7c80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x03f99518]      ; 005f8120 | g_ClipVertexCountStage3
    INC ESI                             ; 005f8126
    ADD ESP,0xc                         ; 005f8127
    MOV dword ptr [0x03f99518],ESI      ; 005f812a | g_ClipVertexCountStage3
    JMP 0x005f80ec                      ; 005f8130
        ;   XREF to: 005f80ec (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x03f99518],0x30 ; 005f8132 | g_ClipVertexCountStage3
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f8139
    MOV ESI,EDX                         ; 005f813e
    ADD EDI,0x3f9a120                   ; 005f8140 | g_ClipVertexBufferStage3
    TEST EDI,0x7                        ; 005f8146
    JZ 0x005f8154                       ; 005f814c
        ;   XREF to: 005f8154 (CONDITIONAL_JUMP)  ; LAB_005f8154
    MOVSD ES:EDI,ESI                    ; 005f814e | g_ClipVertexBufferStage2 | g_ClipVertexBufferStage3
    SUB ECX,0x4                         ; 005f814f
    JLE 0x005f8171                      ; 005f8152
        ;   XREF to: 005f8171 (CONDITIONAL_JUMP)  ; LAB_005f8171
    SUB ECX,0x8                         ; 005f8154
        ;   Label: LAB_005f8154
    JL 0x005f8165                       ; 005f8157
        ;   XREF to: 005f8165 (CONDITIONAL_JUMP)  ; LAB_005f8165
    FILD qword ptr [ESI]                ; 005f8159 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y | DAT_03f9952c
    ADD ESI,0x8                         ; 005f815b
    FISTP qword ptr [EDI]               ; 005f815e | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y | DAT_03f9a12c
    ADD EDI,0x8                         ; 005f8160
    JMP 0x005f8154                      ; 005f8163
        ;   XREF to: 005f8154 (UNCONDITIONAL_JUMP)  ; LAB_005f8154
    ADD ECX,0x8                         ; 005f8165
        ;   Label: LAB_005f8165
    JLE 0x005f8171                      ; 005f8168
        ;   XREF to: 005f8171 (CONDITIONAL_JUMP)  ; LAB_005f8171
    MOVSD ES:EDI,ESI                    ; 005f816a | DAT_03f9952c | DAT_03f9a12c
    SUB ECX,0x4                         ; 005f816b
    JLE 0x005f8171                      ; 005f816e
        ;   XREF to: 005f8171 (CONDITIONAL_JUMP)  ; LAB_005f8171
    MOVSD ES:EDI,ESI                    ; 005f8170 | DAT_03f99530 | DAT_03f9a130
    MOV ECX,dword ptr [0x03f99518]      ; 005f8171 | g_ClipVertexCountStage3
        ;   Label: LAB_005f8171
    INC ECX                             ; 005f8177
    MOV dword ptr [0x03f99518],ECX      ; 005f8178 | g_ClipVertexCountStage3
    IMUL EAX,ECX,0x30                   ; 005f817e
    ADD EAX,0x3f9a120                   ; 005f8181 | g_ClipVertexBufferStage3
    PUSH EAX                            ; 005f8186
    PUSH EBP                            ; 005f8187
    PUSH EDX                            ; 005f8188 | g_ClipVertexBufferStage2
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80 ; 005f8189
        ;   XREF to: 005f7c80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x03f99518]      ; 005f818e | g_ClipVertexCountStage3
    INC EDI                             ; 005f8194
    ADD ESP,0xc                         ; 005f8195
    MOV dword ptr [0x03f99518],EDI      ; 005f8198 | g_ClipVertexCountStage3
    JMP 0x005f80ec                      ; 005f819e
        ;   XREF to: 005f80ec (UNCONDITIONAL_JUMP)  ; caseD_3

