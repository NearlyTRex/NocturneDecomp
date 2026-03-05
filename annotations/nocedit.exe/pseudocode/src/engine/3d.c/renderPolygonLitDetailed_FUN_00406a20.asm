; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitDetailed_FUN_00406a20(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
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

    PUSH ESI                            ; 00406a20
        ;   Label: engine_3d.c_renderPolygonLitDetailed_FUN_00406a20
    PUSH EBP                            ; 00406a21
    MOV EBP,dword ptr [ESP + 0xc]       ; 00406a22
    LEA ESI,[EBP + 0x18]                ; 00406a26
    LEA EAX,[EBP + 0x8]                 ; 00406a29
    PUSH EAX                            ; 00406a2c
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406a2d
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406a32
    TEST EAX,EAX                        ; 00406a35
    JZ 0x00406b1d                       ; 00406a37
        ;   XREF to: 00406b1d (CONDITIONAL_JUMP)  ; LAB_00406b1d
    CMP dword ptr [0x02d05248],0x0      ; 00406a3d | g_MMXSupported
    JNZ 0x00406ada                      ; 00406a44
        ;   XREF to: 00406ada (CONDITIONAL_JUMP)  ; LAB_00406ada
    CMP dword ptr [0x0067939c],0x20     ; 00406a4a | g_BitsPerPixel
    JNZ 0x00406ace                      ; 00406a51
        ;   XREF to: 00406ace (CONDITIONAL_JUMP)  ; LAB_00406ace
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406a57 | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406a61
        ;   Label: LAB_00406a61
    PUSH EBX                            ; 00406a62
    MOV EBX,0x13                        ; 00406a63
    PUSH EBP                            ; 00406a68
    MOV dword ptr [0x02d052a0],EBX      ; 00406a69 | g_RenderStateFlags
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00406a6f
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    MOV EDI,dword ptr [0x006793b4]      ; 00406a74 | g_CurrentAlphaValue
    ADD ESP,0x4                         ; 00406a7a
    CMP EDI,0xff                        ; 00406a7d
    JL 0x00406b01                       ; 00406a83
        ;   XREF to: 00406b01 (CONDITIONAL_JUMP)  ; LAB_00406b01
    XOR EAX,EAX                         ; 00406a89
        ;   Label: LAB_00406a89
    XOR EBX,EBX                         ; 00406a8b
    XOR ECX,ECX                         ; 00406a8d
    XOR EDX,EDX                         ; 00406a8f
    MOV [0x02d052a4],EAX                ; 00406a91 | g_RenderStateFlag2
    MOV EAX,ESI                         ; 00406a96
    MOV ESI,dword ptr [EBP + 0x4]       ; 00406a98
        ;   Label: LAB_00406a98
    LEA ESI,[ESI + ESI*0x2]             ; 00406a9b
    CMP ECX,ESI                         ; 00406a9e
    JGE 0x00406b0d                      ; 00406aa0
        ;   XREF to: 00406b0d (CONDITIONAL_JUMP)  ; LAB_00406b0d
    MOV ESI,dword ptr [EAX]             ; 00406aa2
    MOV dword ptr [EDX + 0x772a98],ESI  ; 00406aa4 | g_ProcessedVertexIndices | DAT_00772a9c
    IMUL EDI,ESI,0x30                   ; 00406aaa
    MOV ESI,dword ptr [EAX + 0x4]       ; 00406aad
    MOV dword ptr [EDI + 0x68802c],ESI  ; 00406ab0 | g_RenderVertexBuffer[0].u
    IMUL EDI,dword ptr [EAX],0x30       ; 00406ab6
    ADD EAX,0xc                         ; 00406ab9
    ADD EDX,0x4                         ; 00406abc
    INC EBX                             ; 00406abf
    MOV ESI,dword ptr [EAX + -0x4]      ; 00406ac0
    ADD ECX,0x3                         ; 00406ac3
    MOV dword ptr [EDI + 0x688030],ESI  ; 00406ac6 | g_RenderVertexBuffer[0].v
    JMP 0x00406a98                      ; 00406acc
        ;   XREF to: 00406a98 (UNCONDITIONAL_JUMP)  ; LAB_00406a98
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406ace | g_ScanlineRenderFunc
        ;   Label: LAB_00406ace
    JMP 0x00406a61                      ; 00406ad8
        ;   XREF to: 00406a61 (UNCONDITIONAL_JUMP)  ; LAB_00406a61
    CMP dword ptr [0x0067939c],0x20     ; 00406ada | g_BitsPerPixel
        ;   Label: LAB_00406ada
    JNZ 0x00406af2                      ; 00406ae1
        ;   XREF to: 00406af2 (CONDITIONAL_JUMP)  ; LAB_00406af2
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406ae3 | g_ScanlineRenderFunc
    JMP 0x00406a61                      ; 00406aed
        ;   XREF to: 00406a61 (UNCONDITIONAL_JUMP)  ; LAB_00406a61
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406af2 | g_ScanlineRenderFunc
        ;   Label: LAB_00406af2
    JMP 0x00406a61                      ; 00406afc
        ;   XREF to: 00406a61 (UNCONDITIONAL_JUMP)  ; LAB_00406a61
    OR byte ptr [0x02d052a0],0x20       ; 00406b01 | g_RenderStateFlags
        ;   Label: LAB_00406b01
    JMP 0x00406a89                      ; 00406b08
        ;   XREF to: 00406a89 (UNCONDITIONAL_JUMP)  ; LAB_00406a89
    PUSH 0x772a98                       ; 00406b0d | g_ProcessedVertexIndices
        ;   Label: LAB_00406b0d
    PUSH EBX                            ; 00406b12
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406b13
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406b18
    POP EBX                             ; 00406b1b
    POP EDI                             ; 00406b1c
    MOV EDX,dword ptr [EBP + 0x4]       ; 00406b1d
        ;   Label: LAB_00406b1d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00406b20
    SUB EAX,EDX                         ; 00406b27
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406b29
    LEA EAX,[EBP + 0x18]                ; 00406b30
    ADD EAX,EDX                         ; 00406b33
    POP EBP                             ; 00406b35
    POP ESI                             ; 00406b36
    RET                                 ; 00406b37

