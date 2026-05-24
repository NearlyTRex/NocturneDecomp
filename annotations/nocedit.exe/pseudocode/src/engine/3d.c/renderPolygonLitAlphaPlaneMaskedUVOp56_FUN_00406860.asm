; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentTextureDimension = 0x100
;   int g_CurrentAlphaValue = 0xff
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int[24] g_ProcessedVertexIndices
;   undefined4 g_ProcessedVertexIndices[1]
;   undefined4 g_LightBufferPool[12][138743]
;   undefined4 g_LightBufferPool[13][28151]
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00406860
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860
    MOV EAX,dword ptr [ESP + 0x8]       ; 00406861
    ADD EAX,0x8                         ; 00406865
    MOV EBP,dword ptr [ESP + 0x8]       ; 00406868
    PUSH EAX                            ; 0040686c
    ADD EBP,0x18                        ; 0040686d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406870
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406875
    TEST EAX,EAX                        ; 00406878
    JZ 0x004069f3                       ; 0040687a
        ;   XREF to: 004069f3 (CONDITIONAL_JUMP)  ; LAB_004069f3
    CMP dword ptr [0x02d05248],0x0      ; 00406880 | g_MMXSupported
    JNZ 0x0040696d                      ; 00406887
        ;   XREF to: 0040696d (CONDITIONAL_JUMP)  ; LAB_0040696d
    CMP dword ptr [0x0067939c],0x20     ; 0040688d | g_BitsPerPixel
    JNZ 0x0040695e                      ; 00406894
        ;   XREF to: 0040695e (CONDITIONAL_JUMP)  ; LAB_0040695e
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040689a | g_ScanlineRenderFunc
    PUSH EDI                            ; 004068a4
        ;   Label: LAB_004068a4
    PUSH ESI                            ; 004068a5
    PUSH EBX                            ; 004068a6
    MOV EBX,dword ptr [ESP + 0x14]      ; 004068a7
    MOV ECX,0xd3                        ; 004068ab
    PUSH EBX                            ; 004068b0
    MOV dword ptr [0x02d052a0],ECX      ; 004068b1 | g_RenderStateFlags
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 004068b7
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    MOV ESI,dword ptr [0x006793b4]      ; 004068bc | g_CurrentAlphaValue
    ADD ESP,0x4                         ; 004068c2
    CMP ESI,0xff                        ; 004068c5
    JL 0x00406994                       ; 004068cb
        ;   XREF to: 00406994 (CONDITIONAL_JUMP)  ; LAB_00406994
    MOV EDI,0x1                         ; 004068d1
        ;   Label: LAB_004068d1
    MOV ECX,EBP                         ; 004068d6
    XOR EBX,EBX                         ; 004068d8
    XOR ESI,ESI                         ; 004068da
    MOV dword ptr [0x02d052a4],EDI      ; 004068dc | g_VertexPreprocessMode
    XOR EDI,EDI                         ; 004068e2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004068e4
        ;   Label: LAB_004068e4
    MOV EAX,dword ptr [EAX + 0x4]       ; 004068e8
    LEA EAX,[EAX + EAX*0x2]             ; 004068eb
    CMP EBX,EAX                         ; 004068ee
    JGE 0x004069e2                      ; 004068f0
        ;   XREF to: 004069e2 (CONDITIONAL_JUMP)  ; LAB_004069e2
    MOV EAX,dword ptr [ECX]             ; 004068f6
    MOV dword ptr [ESI + 0x772a98],EAX  ; 004068f8 | g_ProcessedVertexIndices | g_ProcessedVertexIndices[1]
    MOV EBP,dword ptr [0x006793a4]      ; 004068fe | g_CurrentTextureDimension
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406904
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406907
    CMP EBP,0x40                        ; 0040690a
    JG 0x004069a7                       ; 0040690d
        ;   XREF to: 004069a7 (CONDITIONAL_JUMP)  ; LAB_004069a7
    CMP EAX,0x40000                     ; 00406913
    JGE 0x0040691f                      ; 00406918
        ;   XREF to: 0040691f (CONDITIONAL_JUMP)  ; LAB_0040691f
    MOV EAX,0x40000                     ; 0040691a
    CMP EDX,0x40000                     ; 0040691f
        ;   Label: LAB_0040691f
    JGE 0x0040692c                      ; 00406925
        ;   XREF to: 0040692c (CONDITIONAL_JUMP)  ; LAB_0040692c
    MOV EDX,0x40000                     ; 00406927
    CMP EAX,0xfbffff                    ; 0040692c | g_LightBufferPool[12][138743]
        ;   Label: LAB_0040692c
    JLE 0x00406938                      ; 00406931
        ;   XREF to: 00406938 (CONDITIONAL_JUMP)  ; LAB_00406938
    MOV EAX,0xfbffff                    ; 00406933 | g_LightBufferPool[12][138743]
    CMP EDX,0xfbffff                    ; 00406938 | g_LightBufferPool[12][138743]
        ;   Label: LAB_00406938
    JG 0x004069a0                       ; 0040693e
        ;   XREF to: 004069a0 (CONDITIONAL_JUMP)  ; LAB_004069a0
    IMUL EBP,dword ptr [ECX],0x30       ; 00406940
        ;   Label: LAB_00406940
    MOV dword ptr [EBP + 0x68802c],EAX  ; 00406943 | g_RenderVertexBuffer[0].u | g_LightBufferPool[12][138743]
    IMUL EAX,dword ptr [ECX],0x30       ; 00406949
    ADD ESI,0x4                         ; 0040694c
    INC EDI                             ; 0040694f
    ADD EBX,0x3                         ; 00406950
    ADD ECX,0xc                         ; 00406953
    MOV dword ptr [EAX + 0x688030],EDX  ; 00406956 | g_RenderVertexBuffer[0].v | g_LightBufferPool[12][138743] | g_LightBufferPool[13][28151]
    JMP 0x004068e4                      ; 0040695c
        ;   XREF to: 004068e4 (UNCONDITIONAL_JUMP)  ; LAB_004068e4
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040695e | g_ScanlineRenderFunc
        ;   Label: LAB_0040695e
    JMP 0x004068a4                      ; 00406968
        ;   XREF to: 004068a4 (UNCONDITIONAL_JUMP)  ; LAB_004068a4
    CMP dword ptr [0x0067939c],0x20     ; 0040696d | g_BitsPerPixel
        ;   Label: LAB_0040696d
    JNZ 0x00406985                      ; 00406974
        ;   XREF to: 00406985 (CONDITIONAL_JUMP)  ; LAB_00406985
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406976 | g_ScanlineRenderFunc
    JMP 0x004068a4                      ; 00406980
        ;   XREF to: 004068a4 (UNCONDITIONAL_JUMP)  ; LAB_004068a4
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406985 | g_ScanlineRenderFunc
        ;   Label: LAB_00406985
    JMP 0x004068a4                      ; 0040698f
        ;   XREF to: 004068a4 (UNCONDITIONAL_JUMP)  ; LAB_004068a4
    OR byte ptr [0x02d052a0],0x20       ; 00406994 | g_RenderStateFlags
        ;   Label: LAB_00406994
    JMP 0x004068d1                      ; 0040699b
        ;   XREF to: 004068d1 (UNCONDITIONAL_JUMP)  ; LAB_004068d1
    MOV EDX,0xfbffff                    ; 004069a0 | g_LightBufferPool[12][138743]
        ;   Label: LAB_004069a0
    JMP 0x00406940                      ; 004069a5
        ;   XREF to: 00406940 (UNCONDITIONAL_JUMP)  ; LAB_00406940
    CMP EAX,0x10000                     ; 004069a7
        ;   Label: LAB_004069a7
    JGE 0x004069b3                      ; 004069ac
        ;   XREF to: 004069b3 (CONDITIONAL_JUMP)  ; LAB_004069b3
    MOV EAX,0x10000                     ; 004069ae
    CMP EDX,0x10000                     ; 004069b3
        ;   Label: LAB_004069b3
    JGE 0x004069c0                      ; 004069b9
        ;   XREF to: 004069c0 (CONDITIONAL_JUMP)  ; LAB_004069c0
    MOV EDX,0x10000                     ; 004069bb
    CMP EAX,0xfeffff                    ; 004069c0 | g_LightBufferPool[13][28151]
        ;   Label: LAB_004069c0
    JLE 0x004069cc                      ; 004069c5
        ;   XREF to: 004069cc (CONDITIONAL_JUMP)  ; LAB_004069cc
    MOV EAX,0xfeffff                    ; 004069c7 | g_LightBufferPool[13][28151]
    CMP EDX,0xfeffff                    ; 004069cc | g_LightBufferPool[13][28151]
        ;   Label: LAB_004069cc
    JLE 0x00406940                      ; 004069d2
        ;   XREF to: 00406940 (CONDITIONAL_JUMP)  ; LAB_00406940
    MOV EDX,0xfeffff                    ; 004069d8 | g_LightBufferPool[13][28151]
    JMP 0x00406940                      ; 004069dd
        ;   XREF to: 00406940 (UNCONDITIONAL_JUMP)  ; LAB_00406940
    PUSH 0x772a98                       ; 004069e2 | g_ProcessedVertexIndices
        ;   Label: LAB_004069e2
    PUSH EDI                            ; 004069e7
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004069e8
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004069ed
    POP EBX                             ; 004069f0
    POP ESI                             ; 004069f1
    POP EDI                             ; 004069f2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004069f3
        ;   Label: LAB_004069f3
    MOV EDX,dword ptr [EDX + 0x4]       ; 004069f7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004069fa
    SUB EAX,EDX                         ; 00406a01
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406a03
    MOV EAX,dword ptr [ESP + 0x8]       ; 00406a0a
    ADD EAX,0x18                        ; 00406a0e
    ADD EAX,EDX                         ; 00406a11
    POP EBP                             ; 00406a13
    RET                                 ; 00406a14

