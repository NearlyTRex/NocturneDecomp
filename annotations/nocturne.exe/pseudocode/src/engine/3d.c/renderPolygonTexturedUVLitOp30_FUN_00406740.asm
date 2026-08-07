; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00406740(SMRGLHeaderPrimitive *prim)
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

    PUSH ESI                            ; 00406740
        ;   Label: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00406740
    PUSH EBP                            ; 00406741
    MOV EBP,dword ptr [ESP + 0xc]       ; 00406742
    LEA ESI,[EBP + 0x18]                ; 00406746
    LEA EAX,[EBP + 0x8]                 ; 00406749
    PUSH EAX                            ; 0040674c
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040674d
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406752
    TEST EAX,EAX                        ; 00406755
    JZ 0x00406819                       ; 00406757
        ;   XREF to: 00406819 (CONDITIONAL_JUMP)  ; LAB_00406819
    CMP dword ptr [0x01c03948],0x0      ; 0040675d | g_MMXSupported
    JNZ 0x004067e5                      ; 00406764
        ;   XREF to: 004067e5 (CONDITIONAL_JUMP)  ; LAB_004067e5
    CMP dword ptr [0x005b7624],0x20     ; 0040676a | g_BitsPerPixel
    JNZ 0x004067d9                      ; 00406771
        ;   XREF to: 004067d9 (CONDITIONAL_JUMP)  ; LAB_004067d9
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406773 | g_ScanlineRenderFunc
    PUSH EDI                            ; 0040677d
        ;   Label: LAB_0040677d
    PUSH EBX                            ; 0040677e
    MOV EBX,0x1                         ; 0040677f
    PUSH EBP                            ; 00406784
    XOR EDI,EDI                         ; 00406785
    MOV dword ptr [0x01c039a0],EBX      ; 00406787 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EDI      ; 0040678d | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00406793
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406798
    MOV EAX,ESI                         ; 0040679b
    XOR EBX,EBX                         ; 0040679d
    XOR EDX,EDX                         ; 0040679f
    XOR ECX,ECX                         ; 004067a1
    MOV ESI,dword ptr [EBP + 0x4]       ; 004067a3
        ;   Label: LAB_004067a3
    LEA ESI,[ESI + ESI*0x2]             ; 004067a6
    CMP EDX,ESI                         ; 004067a9
    JGE 0x00406809                      ; 004067ab
        ;   XREF to: 00406809 (CONDITIONAL_JUMP)  ; LAB_00406809
    MOV ESI,dword ptr [EAX]             ; 004067ad
    MOV dword ptr [ECX + 0x6b029c],ESI  ; 004067af | DAT_006b029c | DAT_006b02a0
    IMUL EDI,ESI,0x30                   ; 004067b5
    MOV ESI,dword ptr [EAX + 0x4]       ; 004067b8
    MOV dword ptr [EDI + 0x5c502c],ESI  ; 004067bb | DAT_005c502c
    IMUL EDI,dword ptr [EAX],0x30       ; 004067c1
    ADD EAX,0xc                         ; 004067c4
    ADD ECX,0x4                         ; 004067c7
    INC EBX                             ; 004067ca
    MOV ESI,dword ptr [EAX + -0x4]      ; 004067cb
    ADD EDX,0x3                         ; 004067ce
    MOV dword ptr [EDI + 0x5c5030],ESI  ; 004067d1 | DAT_005c5030
    JMP 0x004067a3                      ; 004067d7
        ;   XREF to: 004067a3 (UNCONDITIONAL_JUMP)  ; LAB_004067a3
    MOV dword ptr [0x01c00c7c],0x530322 ; 004067d9 | g_ScanlineRenderFunc
        ;   Label: LAB_004067d9
    JMP 0x0040677d                      ; 004067e3
        ;   XREF to: 0040677d (UNCONDITIONAL_JUMP)  ; LAB_0040677d
    CMP dword ptr [0x005b7624],0x20     ; 004067e5 | g_BitsPerPixel
        ;   Label: LAB_004067e5
    JNZ 0x004067fa                      ; 004067ec
        ;   XREF to: 004067fa (CONDITIONAL_JUMP)  ; LAB_004067fa
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004067ee | g_ScanlineRenderFunc
    JMP 0x0040677d                      ; 004067f8
        ;   XREF to: 0040677d (UNCONDITIONAL_JUMP)  ; LAB_0040677d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004067fa | g_ScanlineRenderFunc
        ;   Label: LAB_004067fa
    JMP 0x0040677d                      ; 00406804
        ;   XREF to: 0040677d (UNCONDITIONAL_JUMP)  ; LAB_0040677d
    PUSH 0x6b029c                       ; 00406809 | DAT_006b029c
        ;   Label: LAB_00406809
    PUSH EBX                            ; 0040680e
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 0040680f
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406814
    POP EBX                             ; 00406817
    POP EDI                             ; 00406818
    MOV EDX,dword ptr [EBP + 0x4]       ; 00406819
        ;   Label: LAB_00406819
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040681c
    SUB EAX,EDX                         ; 00406823
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406825
    LEA EAX,[EBP + 0x18]                ; 0040682c
    ADD EAX,EDX                         ; 0040682f
    POP EBP                             ; 00406831
    POP ESI                             ; 00406832
    RET                                 ; 00406833

