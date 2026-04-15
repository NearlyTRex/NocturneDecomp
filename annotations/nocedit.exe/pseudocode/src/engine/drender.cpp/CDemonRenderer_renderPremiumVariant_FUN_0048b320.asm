; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   undefined4 g_VertexIndexBuffer[2]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b320
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
    PUSH ESI                            ; 0048b321
    PUSH EDI                            ; 0048b322
    PUSH EBP                            ; 0048b323
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048b324
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048b328
    CMP dword ptr [ECX + 0x4],0x0       ; 0048b32c
    JZ 0x0048b3ae                       ; 0048b330
        ;   XREF to: 0048b3ae (CONDITIONAL_JUMP)  ; LAB_0048b3ae
    LEA EAX,[EAX]                       ; 0048b332
    LEA EDX,[EDX]                       ; 0048b338
    MOV EAX,EAX                         ; 0048b33e
    XOR EAX,EAX                         ; 0048b340
        ;   Label: LAB_0048b340
    MOV AX,word ptr [EBP]               ; 0048b342
    MOV [0x02c6d5ac],EAX                ; 0048b346 | g_VertexIndexBuffer
    XOR EAX,EAX                         ; 0048b34b
    MOV AX,word ptr [EBP + 0x2]         ; 0048b34d
    MOV [0x02c6d5b0],EAX                ; 0048b351 | g_VertexIndexBuffer[1]
    XOR EAX,EAX                         ; 0048b356
    MOV AX,word ptr [EBP + 0x4]         ; 0048b358
    MOV ESI,dword ptr [ECX + 0x4]       ; 0048b35c
    MOV [0x02c6d5b4],EAX                ; 0048b35f | g_VertexIndexBuffer[2]
    TEST ESI,ESI                        ; 0048b364
    JNZ 0x0048b3eb                      ; 0048b366
        ;   XREF to: 0048b3eb (CONDITIONAL_JUMP)  ; LAB_0048b3eb
    CMP dword ptr [0x0067939c],0x20     ; 0048b36c | g_BitsPerPixel
    JNZ 0x0048b406                      ; 0048b373
        ;   XREF to: 0048b406 (CONDITIONAL_JUMP)  ; LAB_0048b406
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b379 | g_ScanlineRenderFunc
    MOV EBX,0x6                         ; 0048b383
        ;   Label: LAB_0048b383
    MOV EDX,0x2cd                       ; 0048b388
    MOV dword ptr [0x02d052a4],EBX      ; 0048b38d | g_VertexPreprocessMode
    MOV dword ptr [0x02d052a0],EDX      ; 0048b393 | g_RenderStateFlags
    PUSH 0x2c6d5ac                      ; 0048b399 | g_VertexIndexBuffer
        ;   Label: LAB_0048b399
    PUSH 0x3                            ; 0048b39e
    PUSH ECX                            ; 0048b3a0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b3a1
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b3a6
    POP EBP                             ; 0048b3a9
    POP EDI                             ; 0048b3aa
    POP ESI                             ; 0048b3ab
    POP EBX                             ; 0048b3ac
    RET                                 ; 0048b3ad
    CMP dword ptr [ECX + 0x20],0x0      ; 0048b3ae
        ;   Label: LAB_0048b3ae
    JNZ 0x0048b340                      ; 0048b3b2
        ;   XREF to: 0048b340 (CONDITIONAL_JUMP)  ; LAB_0048b340
    MOV EAX,EBP                         ; 0048b3b4
    LEA EDI,[EBP + 0x6]                 ; 0048b3b6
    XOR EDX,EDX                         ; 0048b3b9
        ;   Label: LAB_0048b3b9
    MOV DX,word ptr [EAX]               ; 0048b3bb
    IMUL EDX,EDX,0x30                   ; 0048b3be
    XOR ESI,ESI                         ; 0048b3c1
    MOV SI,word ptr [EAX + 0x6]         ; 0048b3c3
    MOV EBX,dword ptr [ECX]             ; 0048b3c7
    SHL ESI,0x8                         ; 0048b3c9
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0048b3cc
    XOR EBX,EBX                         ; 0048b3d0
    MOV BX,word ptr [EAX + 0xc]         ; 0048b3d2
    MOV ESI,dword ptr [ECX]             ; 0048b3d6
    SHL EBX,0x8                         ; 0048b3d8
    ADD EAX,0x2                         ; 0048b3db
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0048b3de
    CMP EAX,EDI                         ; 0048b3e2
    JNZ 0x0048b3b9                      ; 0048b3e4
        ;   XREF to: 0048b3b9 (CONDITIONAL_JUMP)  ; LAB_0048b3b9
    JMP 0x0048b340                      ; 0048b3e6
        ;   XREF to: 0048b340 (UNCONDITIONAL_JUMP)  ; LAB_0048b340
    XOR EDI,EDI                         ; 0048b3eb
        ;   Label: LAB_0048b3eb
    MOV ESI,0x49072f                    ; 0048b3ed
    MOV dword ptr [0x02d052a0],EDI      ; 0048b3f2 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 0048b3f8 | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],ESI      ; 0048b3fe | g_ScanlineRenderFunc
    JMP 0x0048b399                      ; 0048b404
        ;   XREF to: 0048b399 (UNCONDITIONAL_JUMP)  ; LAB_0048b399
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b406 | g_ScanlineRenderFunc
        ;   Label: LAB_0048b406
    JMP 0x0048b383                      ; 0048b410
        ;   XREF to: 0048b383 (UNCONDITIONAL_JUMP)  ; LAB_0048b383

