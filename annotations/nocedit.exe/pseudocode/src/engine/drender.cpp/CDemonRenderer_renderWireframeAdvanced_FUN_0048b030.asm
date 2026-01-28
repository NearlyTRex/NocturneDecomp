; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
; int              Stack[0xc]:4   render_flags
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 at 0048db44
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d1d7
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   undefined4 g_VertexIndexBuffer[2]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048b030
        ;   Label: engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
    MOV ECX,dword ptr [ESP + 0x8]       ; 0048b031
    MOV EBP,dword ptr [ESP + 0xc]       ; 0048b035
    CMP dword ptr [ESP + 0x10],-0x1     ; 0048b039
    JZ 0x0048b0a5                       ; 0048b03e
        ;   XREF to: 0048b0a5 (CONDITIONAL_JUMP)  ; LAB_0048b0a5
    CMP dword ptr [ECX + 0x1c],0x0      ; 0048b040
        ;   Label: LAB_0048b040
    JNZ 0x0048b0af                      ; 0048b044
        ;   XREF to: 0048b0af (CONDITIONAL_JUMP)  ; LAB_0048b0af
    PUSH EBX                            ; 0048b046
    CMP dword ptr [ECX + 0x4],0x0       ; 0048b047
    JZ 0x0048b0c0                       ; 0048b04b
        ;   XREF to: 0048b0c0 (CONDITIONAL_JUMP)  ; LAB_0048b0c0
    XOR EAX,EAX                         ; 0048b04d
        ;   Label: LAB_0048b04d
    MOV AX,word ptr [EBP]               ; 0048b04f
    MOV [0x02c6d5ac],EAX                ; 0048b053 | g_VertexIndexBuffer
    XOR EAX,EAX                         ; 0048b058
    MOV AX,word ptr [EBP + 0x2]         ; 0048b05a
    MOV [0x02c6d5b0],EAX                ; 0048b05e | g_VertexIndexBuffer[1]
    XOR EAX,EAX                         ; 0048b063
    MOV AX,word ptr [EBP + 0x4]         ; 0048b065
    MOV EBX,dword ptr [ECX + 0x4]       ; 0048b069
    MOV [0x02c6d5b4],EAX                ; 0048b06c | g_VertexIndexBuffer[2]
    TEST EBX,EBX                        ; 0048b071
    JZ 0x0048b101                       ; 0048b073
        ;   XREF to: 0048b101 (CONDITIONAL_JUMP)  ; LAB_0048b101
    XOR EBX,EBX                         ; 0048b079
    MOV EDX,0x49072f                    ; 0048b07b
    MOV dword ptr [0x02d052a0],EBX      ; 0048b080 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBX      ; 0048b086 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],EDX      ; 0048b08c | g_ScanlineRenderFunc
    PUSH 0x2c6d5ac                      ; 0048b092 | g_VertexIndexBuffer
    PUSH 0x3                            ; 0048b097
    PUSH ECX                            ; 0048b099
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b09a
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b09f
    POP EBX                             ; 0048b0a2
    POP EBP                             ; 0048b0a3
    RET                                 ; 0048b0a4
    MOV dword ptr [ESP + 0x10],0x2cd    ; 0048b0a5
        ;   Label: LAB_0048b0a5
    JMP 0x0048b040                      ; 0048b0ad
        ;   XREF to: 0048b040 (UNCONDITIONAL_JUMP)  ; LAB_0048b040
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048b0af
        ;   Label: LAB_0048b0af
    PUSH EDX                            ; 0048b0b3
    PUSH EBP                            ; 0048b0b4
    PUSH ECX                            ; 0048b0b5
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 ; 0048b0b6
        ;   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0048b0bb
    POP EBP                             ; 0048b0be
    RET                                 ; 0048b0bf
    CMP dword ptr [ECX + 0x20],0x0      ; 0048b0c0
        ;   Label: LAB_0048b0c0
    JNZ 0x0048b04d                      ; 0048b0c4
        ;   XREF to: 0048b04d (CONDITIONAL_JUMP)  ; LAB_0048b04d
    PUSH EDI                            ; 0048b0c6
    PUSH ESI                            ; 0048b0c7
    MOV EAX,EBP                         ; 0048b0c8
    LEA EDI,[EBP + 0x6]                 ; 0048b0ca
    XOR EDX,EDX                         ; 0048b0cd
        ;   Label: LAB_0048b0cd
    MOV DX,word ptr [EAX]               ; 0048b0cf
    IMUL EDX,EDX,0x30                   ; 0048b0d2
    XOR ESI,ESI                         ; 0048b0d5
    MOV SI,word ptr [EAX + 0x6]         ; 0048b0d7
    MOV EBX,dword ptr [ECX]             ; 0048b0db
    SHL ESI,0x8                         ; 0048b0dd
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0048b0e0
    XOR EBX,EBX                         ; 0048b0e4
    MOV BX,word ptr [EAX + 0xc]         ; 0048b0e6
    MOV ESI,dword ptr [ECX]             ; 0048b0ea
    SHL EBX,0x8                         ; 0048b0ec
    ADD EAX,0x2                         ; 0048b0ef
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0048b0f2
    CMP EAX,EDI                         ; 0048b0f6
    JNZ 0x0048b0cd                      ; 0048b0f8
        ;   XREF to: 0048b0cd (CONDITIONAL_JUMP)  ; LAB_0048b0cd
    POP ESI                             ; 0048b0fa
    POP EDI                             ; 0048b0fb
    JMP 0x0048b04d                      ; 0048b0fc
        ;   XREF to: 0048b04d (UNCONDITIONAL_JUMP)  ; LAB_0048b04d
    CMP dword ptr [0x0067939c],0x20     ; 0048b101 | g_BitsPerPixel
        ;   Label: LAB_0048b101
    JNZ 0x0048b13a                      ; 0048b108
        ;   XREF to: 0048b13a (CONDITIONAL_JUMP)  ; LAB_0048b13a
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b10a | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048b114
        ;   Label: LAB_0048b114
    MOV [0x02d052a0],EAX                ; 0048b118 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],0x6      ; 0048b11d | g_RenderStateFlag2
    PUSH 0x2c6d5ac                      ; 0048b127 | g_VertexIndexBuffer
    PUSH 0x3                            ; 0048b12c
    PUSH ECX                            ; 0048b12e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b12f
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b134
    POP EBX                             ; 0048b137
    POP EBP                             ; 0048b138
    RET                                 ; 0048b139
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b13a | g_ScanlineRenderFunc
        ;   Label: LAB_0048b13a
    JMP 0x0048b114                      ; 0048b144
        ;   XREF to: 0048b114 (UNCONDITIONAL_JUMP)  ; LAB_0048b114

