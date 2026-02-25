; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureNormalized_FUN_00403f20(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00403f20
        ;   Label: engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20
    PUSH EBP                            ; 00403f21
    MOV EBP,dword ptr [ESP + 0xc]       ; 00403f22
    LEA ESI,[EBP + 0x18]                ; 00403f26
    LEA EAX,[EBP + 0x8]                 ; 00403f29
    PUSH EAX                            ; 00403f2c
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00403f2d
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00403f32
    TEST EAX,EAX                        ; 00403f35
    JZ 0x00403ffc                       ; 00403f37
        ;   XREF to: 00403ffc (CONDITIONAL_JUMP)  ; LAB_00403ffc
    CMP dword ptr [0x02d05248],0x0      ; 00403f3d | g_MMXSupported
    JNZ 0x00403fc8                      ; 00403f44
        ;   XREF to: 00403fc8 (CONDITIONAL_JUMP)  ; LAB_00403fc8
    CMP dword ptr [0x0067939c],0x20     ; 00403f4a | g_BitsPerPixel
    JNZ 0x00403fbc                      ; 00403f51
        ;   XREF to: 00403fbc (CONDITIONAL_JUMP)  ; LAB_00403fbc
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00403f53 | g_ScanlineRenderFunc
    PUSH EDI                            ; 00403f5d
        ;   Label: LAB_00403f5d
    PUSH EBX                            ; 00403f5e
    MOV EBX,0x1                         ; 00403f5f
    MOV EDI,0x2                         ; 00403f64
    PUSH EBP                            ; 00403f69
    MOV dword ptr [0x02d052a0],EBX      ; 00403f6a | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 00403f70 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00403f76
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00403f7b
    MOV EAX,ESI                         ; 00403f7e
    XOR EBX,EBX                         ; 00403f80
    XOR EDX,EDX                         ; 00403f82
    XOR ECX,ECX                         ; 00403f84
    MOV ESI,dword ptr [EBP + 0x4]       ; 00403f86
        ;   Label: LAB_00403f86
    LEA ESI,[ESI + ESI*0x2]             ; 00403f89
    CMP EDX,ESI                         ; 00403f8c
    JGE 0x00403fec                      ; 00403f8e
        ;   XREF to: 00403fec (CONDITIONAL_JUMP)  ; LAB_00403fec
    MOV ESI,dword ptr [EAX]             ; 00403f90
    MOV dword ptr [ECX + 0x772a98],ESI  ; 00403f92 | g_ProcessedVertexIndices | DAT_00772a9c
    IMUL EDI,ESI,0x30                   ; 00403f98
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403f9b
    MOV dword ptr [EDI + 0x68802c],ESI  ; 00403f9e | g_RenderVertexBuffer[0].u
    IMUL EDI,dword ptr [EAX],0x30       ; 00403fa4
    ADD EAX,0xc                         ; 00403fa7
    ADD ECX,0x4                         ; 00403faa
    INC EBX                             ; 00403fad
    MOV ESI,dword ptr [EAX + -0x4]      ; 00403fae
    ADD EDX,0x3                         ; 00403fb1
    MOV dword ptr [EDI + 0x688030],ESI  ; 00403fb4 | g_RenderVertexBuffer[0].v
    JMP 0x00403f86                      ; 00403fba
        ;   XREF to: 00403f86 (UNCONDITIONAL_JUMP)  ; LAB_00403f86
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00403fbc | g_ScanlineRenderFunc
        ;   Label: LAB_00403fbc
    JMP 0x00403f5d                      ; 00403fc6
        ;   XREF to: 00403f5d (UNCONDITIONAL_JUMP)  ; LAB_00403f5d
    CMP dword ptr [0x0067939c],0x20     ; 00403fc8 | g_BitsPerPixel
        ;   Label: LAB_00403fc8
    JNZ 0x00403fdd                      ; 00403fcf
        ;   XREF to: 00403fdd (CONDITIONAL_JUMP)  ; LAB_00403fdd
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00403fd1 | g_ScanlineRenderFunc
    JMP 0x00403f5d                      ; 00403fdb
        ;   XREF to: 00403f5d (UNCONDITIONAL_JUMP)  ; LAB_00403f5d
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00403fdd | g_ScanlineRenderFunc
        ;   Label: LAB_00403fdd
    JMP 0x00403f5d                      ; 00403fe7
        ;   XREF to: 00403f5d (UNCONDITIONAL_JUMP)  ; LAB_00403f5d
    PUSH 0x772a98                       ; 00403fec | g_ProcessedVertexIndices
        ;   Label: LAB_00403fec
    PUSH EBX                            ; 00403ff1
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00403ff2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403ff7
    POP EBX                             ; 00403ffa
    POP EDI                             ; 00403ffb
    MOV EDX,dword ptr [EBP + 0x4]       ; 00403ffc
        ;   Label: LAB_00403ffc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00403fff
    SUB EAX,EDX                         ; 00404006
    LEA EDX,[EAX*0x4 + 0x0]             ; 00404008
    LEA EAX,[EBP + 0x18]                ; 0040400f
    ADD EAX,EDX                         ; 00404012
    POP EBP                             ; 00404014
    POP ESI                             ; 00404015
    RET                                 ; 00404016

