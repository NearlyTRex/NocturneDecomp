; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonLitDetailed_FUN_00404220(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 DAT_00772a78
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   undefined4 DAT_00fdffff
;   undefined4 DAT_00feffff
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_UseExternalRenderer
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404220
        ;   Label: engine_3d.c_renderPolygonLitDetailed_FUN_00404220
    PUSH EDI                            ; 00404221
    PUSH EBP                            ; 00404222
    MOV EAX,dword ptr [ESP + 0x10]      ; 00404223
    ADD EAX,0x8                         ; 00404227
    MOV EBP,dword ptr [ESP + 0x10]      ; 0040422a
    PUSH EAX                            ; 0040422e
    ADD EBP,0x18                        ; 0040422f
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404232
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404237
    TEST EAX,EAX                        ; 0040423a
    JZ 0x004043ff                       ; 0040423c
        ;   XREF to: 004043ff (CONDITIONAL_JUMP)  ; LAB_004043ff
    CMP dword ptr [0x00772a78],0x0      ; 00404242 | DAT_00772a78
    JNZ 0x0040435f                      ; 00404249
        ;   XREF to: 0040435f (CONDITIONAL_JUMP)  ; LAB_0040435f
    CMP dword ptr [0x02d05248],0x0      ; 0040424f | g_MMXSupported
    JNZ 0x00404338                      ; 00404256
        ;   XREF to: 00404338 (CONDITIONAL_JUMP)  ; LAB_00404338
    CMP dword ptr [0x0067939c],0x20     ; 0040425c | g_BitsPerPixel
    JNZ 0x00404329                      ; 00404263
        ;   XREF to: 00404329 (CONDITIONAL_JUMP)  ; LAB_00404329
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404269 | g_ScanlineRenderFunc
        ;   Label: LAB_00404269
    MOV ESI,dword ptr [ESP + 0x10]      ; 00404273
        ;   Label: LAB_00404273
    PUSH ESI                            ; 00404277
    MOV EDI,0x13                        ; 00404278
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 0040427d
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,[0x006793b4]                ; 00404282 | g_CurrentAlphaValue
    ADD ESP,0x4                         ; 00404287
    MOV dword ptr [0x02d052a0],EDI      ; 0040428a | g_RenderStateFlags
    CMP EAX,0xff                        ; 00404290
    JL 0x0040439c                       ; 00404295
        ;   XREF to: 0040439c (CONDITIONAL_JUMP)  ; LAB_0040439c
    PUSH EBX                            ; 0040429b
        ;   Label: LAB_0040429b
    XOR ECX,ECX                         ; 0040429c
    XOR EDI,EDI                         ; 0040429e
    XOR EBX,EBX                         ; 004042a0
    XOR ESI,ESI                         ; 004042a2
    MOV dword ptr [0x02d052a4],ECX      ; 004042a4 | g_RenderStateFlag2
    MOV ECX,EBP                         ; 004042aa
    MOV EAX,dword ptr [ESP + 0x14]      ; 004042ac
        ;   Label: LAB_004042ac
    MOV EAX,dword ptr [EAX + 0x4]       ; 004042b0
    LEA EAX,[EAX + EAX*0x2]             ; 004042b3
    CMP EBX,EAX                         ; 004042b6
    JGE 0x004043f0                      ; 004042b8
        ;   XREF to: 004043f0 (CONDITIONAL_JUMP)  ; LAB_004043f0
    MOV EAX,dword ptr [ECX]             ; 004042be
    MOV dword ptr [ESI + 0x772a98],EAX  ; 004042c0 | g_ProcessedVertexIndices | DAT_00772a9c
    MOV EBP,dword ptr [0x02d03e94]      ; 004042c6 | g_UseExternalRenderer
    MOV EAX,dword ptr [ECX + 0x4]       ; 004042cc
    MOV EDX,dword ptr [ECX + 0x8]       ; 004042cf
    TEST EBP,EBP                        ; 004042d2
    JZ 0x004043b5                       ; 004042d4
        ;   XREF to: 004043b5 (CONDITIONAL_JUMP)  ; LAB_004043b5
    CMP EAX,0x20000                     ; 004042da
    JGE 0x004042e6                      ; 004042df
        ;   XREF to: 004042e6 (CONDITIONAL_JUMP)  ; LAB_004042e6
    MOV EAX,0x20000                     ; 004042e1
    CMP EDX,0x20000                     ; 004042e6
        ;   Label: LAB_004042e6
    JGE 0x004042f3                      ; 004042ec
        ;   XREF to: 004042f3 (CONDITIONAL_JUMP)  ; LAB_004042f3
    MOV EDX,0x20000                     ; 004042ee
    CMP EAX,0xfdffff                    ; 004042f3 | DAT_00fdffff
        ;   Label: LAB_004042f3
    JLE 0x004042ff                      ; 004042f8
        ;   XREF to: 004042ff (CONDITIONAL_JUMP)  ; LAB_004042ff
    MOV EAX,0xfdffff                    ; 004042fa | DAT_00fdffff
    CMP EDX,0xfdffff                    ; 004042ff | DAT_00fdffff
        ;   Label: LAB_004042ff
    JG 0x004043ab                       ; 00404305
        ;   XREF to: 004043ab (CONDITIONAL_JUMP)  ; LAB_004043ab
    IMUL EBP,dword ptr [ECX],0x30       ; 0040430b
        ;   Label: LAB_0040430b
    MOV dword ptr [EBP + 0x68802c],EAX  ; 0040430e | g_RenderVertexBuffer[0].u | DAT_00fdffff
    IMUL EAX,dword ptr [ECX],0x30       ; 00404314
    ADD ESI,0x4                         ; 00404317
    INC EDI                             ; 0040431a
    ADD EBX,0x3                         ; 0040431b
    ADD ECX,0xc                         ; 0040431e
    MOV dword ptr [EAX + 0x688030],EDX  ; 00404321 | g_RenderVertexBuffer[0].v | DAT_00fdffff | DAT_00feffff
    JMP 0x004042ac                      ; 00404327
        ;   XREF to: 004042ac (UNCONDITIONAL_JUMP)  ; LAB_004042ac
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404329 | g_ScanlineRenderFunc
        ;   Label: LAB_00404329
    JMP 0x00404273                      ; 00404333
        ;   XREF to: 00404273 (UNCONDITIONAL_JUMP)  ; LAB_00404273
    CMP dword ptr [0x0067939c],0x20     ; 00404338 | g_BitsPerPixel
        ;   Label: LAB_00404338
    JNZ 0x00404350                      ; 0040433f
        ;   XREF to: 00404350 (CONDITIONAL_JUMP)  ; LAB_00404350
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404341 | g_ScanlineRenderFunc
    JMP 0x00404273                      ; 0040434b
        ;   XREF to: 00404273 (UNCONDITIONAL_JUMP)  ; LAB_00404273
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404350 | g_ScanlineRenderFunc
        ;   Label: LAB_00404350
    JMP 0x00404273                      ; 0040435a
        ;   XREF to: 00404273 (UNCONDITIONAL_JUMP)  ; LAB_00404273
    CMP dword ptr [0x02d05248],0x0      ; 0040435f | g_MMXSupported
        ;   Label: LAB_0040435f
    JNZ 0x00404384                      ; 00404366
        ;   XREF to: 00404384 (CONDITIONAL_JUMP)  ; LAB_00404384
    CMP dword ptr [0x0067939c],0x20     ; 00404368 | g_BitsPerPixel
    JZ 0x00404269                       ; 0040436f
        ;   XREF to: 00404269 (CONDITIONAL_JUMP)  ; LAB_00404269
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404375 | g_ScanlineRenderFunc
    JMP 0x00404273                      ; 0040437f
        ;   XREF to: 00404273 (UNCONDITIONAL_JUMP)  ; LAB_00404273
    CMP dword ptr [0x0067939c],0x20     ; 00404384 | g_BitsPerPixel
        ;   Label: LAB_00404384
    JNZ 0x00404350                      ; 0040438b
        ;   XREF to: 00404350 (CONDITIONAL_JUMP)  ; LAB_00404350
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040438d | g_ScanlineRenderFunc
    JMP 0x00404273                      ; 00404397
        ;   XREF to: 00404273 (UNCONDITIONAL_JUMP)  ; LAB_00404273
    MOV dword ptr [0x02d052a0],0x33     ; 0040439c | g_RenderStateFlags
        ;   Label: LAB_0040439c
    JMP 0x0040429b                      ; 004043a6
        ;   XREF to: 0040429b (UNCONDITIONAL_JUMP)  ; LAB_0040429b
    MOV EDX,0xfdffff                    ; 004043ab | DAT_00fdffff
        ;   Label: LAB_004043ab
    JMP 0x0040430b                      ; 004043b0
        ;   XREF to: 0040430b (UNCONDITIONAL_JUMP)  ; LAB_0040430b
    CMP EAX,0x10000                     ; 004043b5
        ;   Label: LAB_004043b5
    JGE 0x004043c1                      ; 004043ba
        ;   XREF to: 004043c1 (CONDITIONAL_JUMP)  ; LAB_004043c1
    MOV EAX,0x10000                     ; 004043bc
    CMP EDX,0x10000                     ; 004043c1
        ;   Label: LAB_004043c1
    JGE 0x004043ce                      ; 004043c7
        ;   XREF to: 004043ce (CONDITIONAL_JUMP)  ; LAB_004043ce
    MOV EDX,0x10000                     ; 004043c9
    CMP EAX,0xfeffff                    ; 004043ce | DAT_00feffff
        ;   Label: LAB_004043ce
    JLE 0x004043da                      ; 004043d3
        ;   XREF to: 004043da (CONDITIONAL_JUMP)  ; LAB_004043da
    MOV EAX,0xfeffff                    ; 004043d5 | DAT_00feffff
    CMP EDX,0xfeffff                    ; 004043da | DAT_00feffff
        ;   Label: LAB_004043da
    JLE 0x0040430b                      ; 004043e0
        ;   XREF to: 0040430b (CONDITIONAL_JUMP)  ; LAB_0040430b
    MOV EDX,0xfeffff                    ; 004043e6 | DAT_00feffff
    JMP 0x0040430b                      ; 004043eb
        ;   XREF to: 0040430b (UNCONDITIONAL_JUMP)  ; LAB_0040430b
    PUSH 0x772a98                       ; 004043f0 | g_ProcessedVertexIndices
        ;   Label: LAB_004043f0
    PUSH EDI                            ; 004043f5
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004043f6
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004043fb
    POP EBX                             ; 004043fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004043ff
        ;   Label: LAB_004043ff
    MOV EDX,dword ptr [EDX + 0x4]       ; 00404403
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404406
    SUB EAX,EDX                         ; 0040440d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040440f
    SHL EAX,0x2                         ; 00404413
    ADD EDX,0x18                        ; 00404416
    ADD EAX,EDX                         ; 00404419
    POP EBP                             ; 0040441b
    POP EDI                             ; 0040441c
    POP ESI                             ; 0040441d
    RET                                 ; 0040441e

