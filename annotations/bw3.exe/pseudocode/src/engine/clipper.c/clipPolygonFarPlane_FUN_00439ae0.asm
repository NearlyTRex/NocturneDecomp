; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_00439ae0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_3_00439adc = 00439c25
;   int g_INT_005f12f4 = 0x7fffffff
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007e3e8c
;   undefined4 g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
;   undefined4 g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.screen_x
;   int g_INT_007e450c
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007e4510
;   undefined4 g_SRenderVertex_ARRAY_007e4510[0].projected_vertex.transformed_z
;
; Called Functions:
;   engine_clipper.c_interpolateVertexFarClip_FUN_004394c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439ae0
        ;   Label: engine_clipper.c_clipPolygonFarPlane_FUN_00439ae0
    PUSH ESI                            ; 00439ae1
    PUSH EDI                            ; 00439ae2
    PUSH EBP                            ; 00439ae3
    SUB ESP,0x4                         ; 00439ae4
    MOV EDX,dword ptr [0x005f12f4]      ; 00439ae7 | g_INT_005f12f4
    XOR EBX,EBX                         ; 00439aed
    TEST EDX,EDX                        ; 00439aef
    JZ 0x00439b26                       ; 00439af1
        ;   XREF to: 00439b26 (CONDITIONAL_JUMP)  ; LAB_00439b26
    MOV ECX,dword ptr [0x007e3e88]      ; 00439af3 | g_ClippedVertexCount
    TEST ECX,ECX                        ; 00439af9
    JLE 0x00439b1e                      ; 00439afb
        ;   XREF to: 00439b1e (CONDITIONAL_JUMP)  ; LAB_00439b1e
    LEA EDI,[ECX*0x4 + 0x0]             ; 00439afd
    SUB EDI,ECX                         ; 00439b04
    XOR EAX,EAX                         ; 00439b06
    SHL EDI,0x4                         ; 00439b08
    MOV EDX,dword ptr [EAX + 0x7e3e94]  ; 00439b0b
        ;   Label: LAB_00439b0b
    CMP EBX,EDX                         ; 00439b11
    JGE 0x00439b17                      ; 00439b13
        ;   XREF to: 00439b17 (CONDITIONAL_JUMP)  ; LAB_00439b17
    MOV EBX,EDX                         ; 00439b15
    ADD EAX,0x30                        ; 00439b17
        ;   Label: LAB_00439b17
    CMP EAX,EDI                         ; 00439b1a
    JL 0x00439b0b                       ; 00439b1c
        ;   XREF to: 00439b0b (CONDITIONAL_JUMP)  ; LAB_00439b0b
    CMP EBX,dword ptr [0x005f12f4]      ; 00439b1e | g_INT_005f12f4
        ;   Label: LAB_00439b1e
    JGE 0x00439b2e                      ; 00439b24
        ;   XREF to: 00439b2e (CONDITIONAL_JUMP)  ; LAB_00439b2e
    ADD ESP,0x4                         ; 00439b26
        ;   Label: LAB_00439b26
    POP EBP                             ; 00439b29
    POP EDI                             ; 00439b2a
    POP ESI                             ; 00439b2b
    POP EBX                             ; 00439b2c
    RET                                 ; 00439b2d
    MOV EAX,[0x007e3e88]                ; 00439b2e | g_ClippedVertexCount
        ;   Label: LAB_00439b2e
    MOV [0x007e450c],EAX                ; 00439b33 | g_INT_007e450c
    LEA ECX,[EAX*0x4 + 0x0]             ; 00439b38
    MOV ESI,0x7e3e8c                    ; 00439b3f
    SUB ECX,EAX                         ; 00439b44
    MOV EDI,0x7e4510                    ; 00439b46
    SHL ECX,0x4                         ; 00439b4b
    XOR EBX,EBX                         ; 00439b4e
    TEST EDI,0x7                        ; 00439b50
    JZ 0x00439b5e                       ; 00439b56
        ;   XREF to: 00439b5e (CONDITIONAL_JUMP)  ; LAB_00439b5e
    MOVSD ES:EDI,ESI                    ; 00439b58
    SUB ECX,0x4                         ; 00439b59
    JLE 0x00439b7b                      ; 00439b5c
        ;   XREF to: 00439b7b (CONDITIONAL_JUMP)  ; LAB_00439b7b
    SUB ECX,0x8                         ; 00439b5e
        ;   Label: LAB_00439b5e
    JL 0x00439b6f                       ; 00439b61
        ;   XREF to: 00439b6f (CONDITIONAL_JUMP)  ; LAB_00439b6f
    FILD qword ptr [ESI]                ; 00439b63
    ADD ESI,0x8                         ; 00439b65
    FISTP qword ptr [EDI]               ; 00439b68
    ADD EDI,0x8                         ; 00439b6a
    JMP 0x00439b5e                      ; 00439b6d
        ;   XREF to: 00439b5e (UNCONDITIONAL_JUMP)  ; LAB_00439b5e
    ADD ECX,0x8                         ; 00439b6f
        ;   Label: LAB_00439b6f
    JLE 0x00439b7b                      ; 00439b72
        ;   XREF to: 00439b7b (CONDITIONAL_JUMP)  ; LAB_00439b7b
    MOVSD ES:EDI,ESI                    ; 00439b74
    SUB ECX,0x4                         ; 00439b75
    JLE 0x00439b7b                      ; 00439b78
        ;   XREF to: 00439b7b (CONDITIONAL_JUMP)  ; LAB_00439b7b
    MOVSD ES:EDI,ESI                    ; 00439b7a
    XOR EDI,EDI                         ; 00439b7b
        ;   Label: LAB_00439b7b
    MOV EBP,dword ptr [0x007e450c]      ; 00439b7d | g_INT_007e450c
    MOV dword ptr [0x007e3e88],EDI      ; 00439b83 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 00439b89
    JLE 0x00439b26                      ; 00439b8b
        ;   XREF to: 00439b26 (CONDITIONAL_JUMP)  ; LAB_00439b26
    MOV EBP,0x7e4510                    ; 00439b8d
    MOV ESI,dword ptr [0x007e450c]      ; 00439b92 | g_INT_007e450c
        ;   Label: LAB_00439b92
    LEA EAX,[EBX + 0x1]                 ; 00439b98
    CMP EAX,ESI                         ; 00439b9b
    JNZ 0x00439ba1                      ; 00439b9d
        ;   XREF to: 00439ba1 (CONDITIONAL_JUMP)  ; LAB_00439ba1
    XOR EAX,ESI                         ; 00439b9f
    IMUL EAX,EAX,0x30                   ; 00439ba1
        ;   Label: LAB_00439ba1
    MOV EDI,0x7e4510                    ; 00439ba4 | g_SRenderVertex_ARRAY_007e4510
    MOV ECX,dword ptr [0x005f12f4]      ; 00439ba9 | g_INT_005f12f4
    ADD EDI,EAX                         ; 00439baf
    MOV EDX,EBP                         ; 00439bb1
    MOV dword ptr [ESP],EDI             ; 00439bb3
    MOV EDI,dword ptr [EBP + 0x8]       ; 00439bb6
    XOR EAX,EAX                         ; 00439bb9
    CMP EDI,ECX                         ; 00439bbb
    JL 0x00439bc4                       ; 00439bbd
        ;   XREF to: 00439bc4 (CONDITIONAL_JUMP)  ; LAB_00439bc4
    MOV EAX,0x1                         ; 00439bbf
    MOV EDI,dword ptr [ESP]             ; 00439bc4
        ;   Label: LAB_00439bc4
    MOV ESI,dword ptr [0x005f12f4]      ; 00439bc7 | g_INT_005f12f4
    CMP ESI,dword ptr [EDI + 0x8]       ; 00439bcd | g_SRenderVertex_ARRAY_007e4510[0].projected_vertex.transformed_z
    JG 0x00439bd4                       ; 00439bd0
        ;   XREF to: 00439bd4 (CONDITIONAL_JUMP)  ; LAB_00439bd4
    OR AL,0x2                           ; 00439bd2
    CMP EAX,0x3                         ; 00439bd4
        ;   Label: LAB_00439bd4
    JA 0x00439c25                       ; 00439bd7
        ;   XREF to: 00439c25 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439ad0]  ; 00439bd9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 00439be0 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00439be7
    MOV ESI,EDX                         ; 00439bec
    ADD EDI,0x7e3e8c                    ; 00439bee | g_SRenderVertex_ARRAY_007e3e8c
    TEST EDI,0x7                        ; 00439bf4
    JZ 0x00439c02                       ; 00439bfa
        ;   XREF to: 00439c02 (CONDITIONAL_JUMP)  ; LAB_00439c02
    MOVSD ES:EDI,ESI                    ; 00439bfc | g_SRenderVertex_ARRAY_007e3e8c
    SUB ECX,0x4                         ; 00439bfd
    JLE 0x00439c1f                      ; 00439c00
        ;   XREF to: 00439c1f (CONDITIONAL_JUMP)  ; LAB_00439c1f
    SUB ECX,0x8                         ; 00439c02
        ;   Label: LAB_00439c02
    JL 0x00439c13                       ; 00439c05
        ;   XREF to: 00439c13 (CONDITIONAL_JUMP)  ; LAB_00439c13
    FILD qword ptr [ESI]                ; 00439c07
    ADD ESI,0x8                         ; 00439c09
    FISTP qword ptr [EDI]               ; 00439c0c | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00439c0e
    JMP 0x00439c02                      ; 00439c11
        ;   XREF to: 00439c02 (UNCONDITIONAL_JUMP)  ; LAB_00439c02
    ADD ECX,0x8                         ; 00439c13
        ;   Label: LAB_00439c13
    JLE 0x00439c1f                      ; 00439c16
        ;   XREF to: 00439c1f (CONDITIONAL_JUMP)  ; LAB_00439c1f
    MOVSD ES:EDI,ESI                    ; 00439c18 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 00439c19
    JLE 0x00439c1f                      ; 00439c1c
        ;   XREF to: 00439c1f (CONDITIONAL_JUMP)  ; LAB_00439c1f
    MOVSD ES:EDI,ESI                    ; 00439c1e | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.screen_x
    INC dword ptr [0x007e3e88]          ; 00439c1f | g_ClippedVertexCount
        ;   Label: LAB_00439c1f
    MOV ECX,dword ptr [0x007e450c]      ; 00439c25 | g_INT_007e450c
        ;   Label: caseD_3
    INC EBX                             ; 00439c2b
    ADD EBP,0x30                        ; 00439c2c
    CMP EBX,ECX                         ; 00439c2f
    JGE 0x00439b26                      ; 00439c31
        ;   XREF to: 00439b26 (CONDITIONAL_JUMP)  ; LAB_00439b26
    JMP 0x00439b92                      ; 00439c37
        ;   XREF to: 00439b92 (UNCONDITIONAL_JUMP)  ; LAB_00439b92
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 00439c3c | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 00439c43 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 00439c48
    PUSH EDX                            ; 00439c49
    MOV ESI,dword ptr [ESP + 0x8]       ; 00439c4a
    PUSH ESI                            ; 00439c4e
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_004394c0 ; 00439c4f
        ;   XREF to: 004394c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexFarClip_FUN_004394c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007e3e88]      ; 00439c54 | g_ClippedVertexCount
    INC EDI                             ; 00439c5a
    ADD ESP,0xc                         ; 00439c5b
    MOV dword ptr [0x007e3e88],EDI      ; 00439c5e | g_ClippedVertexCount
    JMP 0x00439c25                      ; 00439c64
        ;   XREF to: 00439c25 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 00439c66 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00439c6d
    MOV ESI,EDX                         ; 00439c72
    ADD EDI,0x7e3e8c                    ; 00439c74 | g_SRenderVertex_ARRAY_007e3e8c
    TEST EDI,0x7                        ; 00439c7a
    JZ 0x00439c88                       ; 00439c80
        ;   XREF to: 00439c88 (CONDITIONAL_JUMP)  ; LAB_00439c88
    MOVSD ES:EDI,ESI                    ; 00439c82 | g_SRenderVertex_ARRAY_007e3e8c
    SUB ECX,0x4                         ; 00439c83
    JLE 0x00439ca5                      ; 00439c86
        ;   XREF to: 00439ca5 (CONDITIONAL_JUMP)  ; LAB_00439ca5
    SUB ECX,0x8                         ; 00439c88
        ;   Label: LAB_00439c88
    JL 0x00439c99                       ; 00439c8b
        ;   XREF to: 00439c99 (CONDITIONAL_JUMP)  ; LAB_00439c99
    FILD qword ptr [ESI]                ; 00439c8d
    ADD ESI,0x8                         ; 00439c8f
    FISTP qword ptr [EDI]               ; 00439c92 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00439c94
    JMP 0x00439c88                      ; 00439c97
        ;   XREF to: 00439c88 (UNCONDITIONAL_JUMP)  ; LAB_00439c88
    ADD ECX,0x8                         ; 00439c99
        ;   Label: LAB_00439c99
    JLE 0x00439ca5                      ; 00439c9c
        ;   XREF to: 00439ca5 (CONDITIONAL_JUMP)  ; LAB_00439ca5
    MOVSD ES:EDI,ESI                    ; 00439c9e | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.inv_z
    SUB ECX,0x4                         ; 00439c9f
    JLE 0x00439ca5                      ; 00439ca2
        ;   XREF to: 00439ca5 (CONDITIONAL_JUMP)  ; LAB_00439ca5
    MOVSD ES:EDI,ESI                    ; 00439ca4 | g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.screen_x
    MOV ECX,dword ptr [0x007e3e88]      ; 00439ca5 | g_ClippedVertexCount
        ;   Label: LAB_00439ca5
    INC ECX                             ; 00439cab
    MOV dword ptr [0x007e3e88],ECX      ; 00439cac | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 00439cb2
    ADD EAX,0x7e3e8c                    ; 00439cb5 | g_SRenderVertex_ARRAY_007e3e8c
    PUSH EAX                            ; 00439cba
    MOV EDI,dword ptr [ESP + 0x4]       ; 00439cbb
    PUSH EDI                            ; 00439cbf
    PUSH EDX                            ; 00439cc0
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_004394c0 ; 00439cc1
        ;   XREF to: 004394c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexFarClip_FUN_004394c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EAX,[0x007e3e88]                ; 00439cc6 | g_ClippedVertexCount
    INC EAX                             ; 00439ccb
    ADD ESP,0xc                         ; 00439ccc
    MOV [0x007e3e88],EAX                ; 00439ccf | g_ClippedVertexCount
    JMP 0x00439c25                      ; 00439cd4
        ;   XREF to: 00439c25 (UNCONDITIONAL_JUMP)  ; caseD_3

