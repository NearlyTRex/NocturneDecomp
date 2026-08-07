; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405240
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240
    PUSH EBP                            ; 00405241
    MOV EBP,dword ptr [ESP + 0xc]       ; 00405242
    LEA ESI,[EBP + 0x18]                ; 00405246
    LEA EAX,[EBP + 0x8]                 ; 00405249
    PUSH EAX                            ; 0040524c
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040524d
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405252
    TEST EAX,EAX                        ; 00405255
    JZ 0x0040531c                       ; 00405257
        ;   XREF to: 0040531c (CONDITIONAL_JUMP)  ; LAB_0040531c
    CMP dword ptr [0x01c03948],0x0      ; 0040525d | g_MMXSupported
    JNZ 0x004052e8                      ; 00405264
        ;   XREF to: 004052e8 (CONDITIONAL_JUMP)  ; LAB_004052e8
    CMP dword ptr [0x005b7624],0x20     ; 0040526a | g_BitsPerPixel
    JNZ 0x004052dc                      ; 00405271
        ;   XREF to: 004052dc (CONDITIONAL_JUMP)  ; LAB_004052dc
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405273 | g_ScanlineRenderFunc
    PUSH EDI                            ; 0040527d
        ;   Label: LAB_0040527d
    PUSH EBX                            ; 0040527e
    MOV EBX,0x1                         ; 0040527f
    MOV EDI,0x2                         ; 00405284
    PUSH EBP                            ; 00405289
    MOV dword ptr [0x01c039a0],EBX      ; 0040528a | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EDI      ; 00405290 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00405296
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 0040529b
    MOV EAX,ESI                         ; 0040529e
    XOR EBX,EBX                         ; 004052a0
    XOR EDX,EDX                         ; 004052a2
    XOR ECX,ECX                         ; 004052a4
    MOV ESI,dword ptr [EBP + 0x4]       ; 004052a6
        ;   Label: LAB_004052a6
    LEA ESI,[ESI + ESI*0x2]             ; 004052a9
    CMP EDX,ESI                         ; 004052ac
    JGE 0x0040530c                      ; 004052ae
        ;   XREF to: 0040530c (CONDITIONAL_JUMP)  ; LAB_0040530c
    MOV ESI,dword ptr [EAX]             ; 004052b0
    MOV dword ptr [ECX + 0x6b029c],ESI  ; 004052b2 | DAT_006b029c | DAT_006b02a0
    IMUL EDI,ESI,0x30                   ; 004052b8
    MOV ESI,dword ptr [EAX + 0x4]       ; 004052bb
    MOV dword ptr [EDI + 0x5c502c],ESI  ; 004052be | DAT_005c502c
    IMUL EDI,dword ptr [EAX],0x30       ; 004052c4
    ADD EAX,0xc                         ; 004052c7
    ADD ECX,0x4                         ; 004052ca
    INC EBX                             ; 004052cd
    MOV ESI,dword ptr [EAX + -0x4]      ; 004052ce
    ADD EDX,0x3                         ; 004052d1
    MOV dword ptr [EDI + 0x5c5030],ESI  ; 004052d4 | DAT_005c5030
    JMP 0x004052a6                      ; 004052da
        ;   XREF to: 004052a6 (UNCONDITIONAL_JUMP)  ; LAB_004052a6
    MOV dword ptr [0x01c00c7c],0x530322 ; 004052dc | g_ScanlineRenderFunc
        ;   Label: LAB_004052dc
    JMP 0x0040527d                      ; 004052e6
        ;   XREF to: 0040527d (UNCONDITIONAL_JUMP)  ; LAB_0040527d
    CMP dword ptr [0x005b7624],0x20     ; 004052e8 | g_BitsPerPixel
        ;   Label: LAB_004052e8
    JNZ 0x004052fd                      ; 004052ef
        ;   XREF to: 004052fd (CONDITIONAL_JUMP)  ; LAB_004052fd
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004052f1 | g_ScanlineRenderFunc
    JMP 0x0040527d                      ; 004052fb
        ;   XREF to: 0040527d (UNCONDITIONAL_JUMP)  ; LAB_0040527d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004052fd | g_ScanlineRenderFunc
        ;   Label: LAB_004052fd
    JMP 0x0040527d                      ; 00405307
        ;   XREF to: 0040527d (UNCONDITIONAL_JUMP)  ; LAB_0040527d
    PUSH 0x6b029c                       ; 0040530c | DAT_006b029c
        ;   Label: LAB_0040530c
    PUSH EBX                            ; 00405311
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 00405312
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405317
    POP EBX                             ; 0040531a
    POP EDI                             ; 0040531b
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040531c
        ;   Label: LAB_0040531c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040531f
    SUB EAX,EDX                         ; 00405326
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405328
    LEA EAX,[EBP + 0x18]                ; 0040532f
    ADD EAX,EDX                         ; 00405332
    POP EBP                             ; 00405334
    POP ESI                             ; 00405335
    RET                                 ; 00405336

