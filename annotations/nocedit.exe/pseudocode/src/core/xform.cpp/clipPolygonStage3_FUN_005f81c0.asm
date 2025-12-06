; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_clipPolygonStage3_FUN_005f81c0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_005f81a4 = 005f8222
;   void* PTR_caseD_3_005f81b0 = 005f8267
;   int g_ClipVertexCountStage3
;   int g_ClipVertexCountStage4
;   SRenderVertex[32] g_ClipVertexBufferStage3
;   undefined4 g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
;   undefined4 DAT_03f9a128
;   undefined4 DAT_03f9a150
;   undefined4 DAT_03f9a154
;   undefined4 DAT_03f9a158
;   undefined4 DAT_03f9a15c
;   undefined4 g_ClipVertexBufferStage3[1].projected_vertex.screen_x
;   SRenderVertex[32] g_ClipVertexBufferStage4
;   undefined4 g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
;   undefined4 DAT_03f9a72c
;   ... and 1 more
;
; Called Functions:
;   core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f81c0
        ;   Label: core_xform.cpp_clipPolygonStage3_FUN_005f81c0
    PUSH ESI                            ; 005f81c1
    PUSH EDI                            ; 005f81c2
    PUSH EBP                            ; 005f81c3
    SUB ESP,0x4                         ; 005f81c4
    XOR EDX,EDX                         ; 005f81c7
    MOV ECX,dword ptr [0x03f99518]      ; 005f81c9 | int g_ClipVertexCountStage3
    MOV dword ptr [ESP],EDX             ; 005f81cf
    TEST ECX,ECX                        ; 005f81d2
    JLE 0x005f827f                      ; 005f81d4 | LAB_005f827f
        ;   XREF to: 005f827f (CONDITIONAL_JUMP)
    MOV EBX,0x3f9a120                   ; 005f81da | SRenderVertex[32] g_ClipVertexBufferStage3
    MOV EAX,dword ptr [ESP]             ; 005f81df
        ;   Label: LAB_005f81df
    MOV EBP,dword ptr [0x03f99518]      ; 005f81e2 | int g_ClipVertexCountStage3
    INC EAX                             ; 005f81e8
    CMP EAX,EBP                         ; 005f81e9
    JNZ 0x005f81ef                      ; 005f81eb | LAB_005f81ef
        ;   XREF to: 005f81ef (CONDITIONAL_JUMP)
    XOR EAX,EBP                         ; 005f81ed
    IMUL EAX,EAX,0x30                   ; 005f81ef
        ;   Label: LAB_005f81ef
    MOV EBP,0x3f9a120                   ; 005f81f2 | SRenderVertex[32] g_ClipVertexBufferStage3
    MOV EDX,EBX                         ; 005f81f7 | DAT_03f9a150
    MOV EDI,dword ptr [EBX + 0x4]       ; 005f81f9 | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    MOV ECX,dword ptr [EBX + 0x8]       ; 005f81fc | DAT_03f9a128
    ADD EBP,EAX                         ; 005f81ff
    XOR EAX,EAX                         ; 005f8201
    CMP EDI,ECX                         ; 005f8203
    JL 0x005f820c                       ; 005f8205 | LAB_005f820c
        ;   XREF to: 005f820c (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005f8207
    MOV ESI,dword ptr [EBP + 0x8]       ; 005f820c | DAT_03f9a128
        ;   Label: LAB_005f820c
    CMP ESI,dword ptr [EBP + 0x4]       ; 005f820f | g_ClipVertexBufferStage3[0].projected_vertex.transformed_y
    JG 0x005f8216                       ; 005f8212 | LAB_005f8216
        ;   XREF to: 005f8216 (CONDITIONAL_JUMP)
    OR AL,0x2                           ; 005f8214
    CMP EAX,0x3                         ; 005f8216
        ;   Label: LAB_005f8216
    JA 0x005f8267                       ; 005f8219 | caseD_3
        ;   XREF to: 005f8267 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5f81a4]  ; 005f821b | void * PTR_caseD_3_005f81b0 | switchdataD_005f81a4 = 005f8222
        ;   Label: switchD
    IMUL EDI,dword ptr [0x03f9951c],0x30 ; 005f8222 | int g_ClipVertexCountStage4
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f8229
    MOV ESI,EDX                         ; 005f822e
    ADD EDI,0x3f9a720                   ; 005f8230 | SRenderVertex[32] g_ClipVertexBufferStage4
    TEST EDI,0x7                        ; 005f8236
    JZ 0x005f8244                       ; 005f823c | LAB_005f8244
        ;   XREF to: 005f8244 (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f823e | DAT_03f9a150 | g_ClipVertexBufferStage4
    SUB ECX,0x4                         ; 005f823f
    JLE 0x005f8261                      ; 005f8242 | LAB_005f8261
        ;   XREF to: 005f8261 (CONDITIONAL_JUMP)
    SUB ECX,0x8                         ; 005f8244
        ;   Label: LAB_005f8244
    JL 0x005f8255                       ; 005f8247 | LAB_005f8255
        ;   XREF to: 005f8255 (CONDITIONAL_JUMP)
    FILD qword ptr [ESI]                ; 005f8249 | DAT_03f9a154
    ADD ESI,0x8                         ; 005f824b
    FISTP qword ptr [EDI]               ; 005f824e | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f8250
    JMP 0x005f8244                      ; 005f8253 | LAB_005f8244
        ;   XREF to: 005f8244 (UNCONDITIONAL_JUMP)
    ADD ECX,0x8                         ; 005f8255
        ;   Label: LAB_005f8255
    JLE 0x005f8261                      ; 005f8258 | LAB_005f8261
        ;   XREF to: 005f8261 (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f825a | DAT_03f9a15c
    SUB ECX,0x4                         ; 005f825b
    JLE 0x005f8261                      ; 005f825e | LAB_005f8261
        ;   XREF to: 005f8261 (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f8260 | g_ClipVertexBufferStage3[1].projected_vertex.screen_x
    INC dword ptr [0x03f9951c]          ; 005f8261 | int g_ClipVertexCountStage4
        ;   Label: LAB_005f8261
    MOV ESI,dword ptr [ESP]             ; 005f8267
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x03f99518]      ; 005f826a | int g_ClipVertexCountStage3
    INC ESI                             ; 005f8270
    ADD EBX,0x30                        ; 005f8271 | DAT_03f9a150
    MOV dword ptr [ESP],ESI             ; 005f8274
    CMP ESI,EDI                         ; 005f8277
    JL 0x005f81df                       ; 005f8279 | LAB_005f81df
        ;   XREF to: 005f81df (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 005f827f
        ;   Label: LAB_005f827f
    POP EBP                             ; 005f8282
    POP EDI                             ; 005f8283
    POP ESI                             ; 005f8284
    POP EBX                             ; 005f8285
    RET                                 ; 005f8286
    IMUL EAX,dword ptr [0x03f9951c],0x30 ; 005f8287 | int g_ClipVertexCountStage4
        ;   Label: caseD_1
    ADD EAX,0x3f9a720                   ; 005f828e | SRenderVertex[32] g_ClipVertexBufferStage4
    PUSH EAX                            ; 005f8293
    PUSH EDX                            ; 005f8294 | DAT_03f9a150
    PUSH EBP                            ; 005f8295
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40 ; 005f8296 | void core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
        ;   XREF to: 005f7d40 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x03f9951c]      ; 005f829b | int g_ClipVertexCountStage4
    INC ESI                             ; 005f82a1
    ADD ESP,0xc                         ; 005f82a2
    MOV dword ptr [0x03f9951c],ESI      ; 005f82a5 | int g_ClipVertexCountStage4
    JMP 0x005f8267                      ; 005f82ab | caseD_3
        ;   XREF to: 005f8267 (UNCONDITIONAL_JUMP)
    IMUL EDI,dword ptr [0x03f9951c],0x30 ; 005f82ad | int g_ClipVertexCountStage4
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f82b4
    MOV ESI,EDX                         ; 005f82b9
    ADD EDI,0x3f9a720                   ; 005f82bb | SRenderVertex[32] g_ClipVertexBufferStage4
    TEST EDI,0x7                        ; 005f82c1
    JZ 0x005f82cf                       ; 005f82c7 | LAB_005f82cf
        ;   XREF to: 005f82cf (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f82c9 | DAT_03f9a150 | g_ClipVertexBufferStage4
    SUB ECX,0x4                         ; 005f82ca
    JLE 0x005f82ec                      ; 005f82cd | LAB_005f82ec
        ;   XREF to: 005f82ec (CONDITIONAL_JUMP)
    SUB ECX,0x8                         ; 005f82cf
        ;   Label: LAB_005f82cf
    JL 0x005f82e0                       ; 005f82d2 | LAB_005f82e0
        ;   XREF to: 005f82e0 (CONDITIONAL_JUMP)
    FILD qword ptr [ESI]                ; 005f82d4 | DAT_03f9a154
    ADD ESI,0x8                         ; 005f82d6
    FISTP qword ptr [EDI]               ; 005f82d9 | g_ClipVertexBufferStage4[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f82db
    JMP 0x005f82cf                      ; 005f82de | LAB_005f82cf
        ;   XREF to: 005f82cf (UNCONDITIONAL_JUMP)
    ADD ECX,0x8                         ; 005f82e0
        ;   Label: LAB_005f82e0
    JLE 0x005f82ec                      ; 005f82e3 | LAB_005f82ec
        ;   XREF to: 005f82ec (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f82e5 | DAT_03f9a15c
    SUB ECX,0x4                         ; 005f82e6
    JLE 0x005f82ec                      ; 005f82e9 | LAB_005f82ec
        ;   XREF to: 005f82ec (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f82eb | g_ClipVertexBufferStage3[1].projected_vertex.screen_x
    MOV ECX,dword ptr [0x03f9951c]      ; 005f82ec | int g_ClipVertexCountStage4
        ;   Label: LAB_005f82ec
    INC ECX                             ; 005f82f2
    MOV dword ptr [0x03f9951c],ECX      ; 005f82f3 | int g_ClipVertexCountStage4
    IMUL EAX,ECX,0x30                   ; 005f82f9
    ADD EAX,0x3f9a720                   ; 005f82fc | SRenderVertex[32] g_ClipVertexBufferStage4
    PUSH EAX                            ; 005f8301
    PUSH EBP                            ; 005f8302
    PUSH EDX                            ; 005f8303 | DAT_03f9a150
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40 ; 005f8304 | void core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
        ;   XREF to: 005f7d40 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x03f9951c]      ; 005f8309 | int g_ClipVertexCountStage4
    INC EDI                             ; 005f830f
    ADD ESP,0xc                         ; 005f8310
    MOV dword ptr [0x03f9951c],EDI      ; 005f8313 | int g_ClipVertexCountStage4
    JMP 0x005f8267                      ; 005f8319 | caseD_3
        ;   XREF to: 005f8267 (UNCONDITIONAL_JUMP)

