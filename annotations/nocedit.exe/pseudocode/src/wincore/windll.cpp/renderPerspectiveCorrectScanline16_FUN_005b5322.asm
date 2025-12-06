; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y)
;
;
; XREF[57]:
;   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 at 004040b7
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 004076b6
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 at 004077ff
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404bea
;   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 at 00405e8a
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 at 00405dea
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 at 0040606a
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 at 004059ca
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 0040724b
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 at 00407336
;   ... and 47 more
;
; Referenced Globals:
;   int g_ScanlinePixelCount = 0x0
;   int g_StartTextureU = 0x0
;   int g_StartTextureV = 0x0
;   int g_StartDepthW = 0x0
;   int* g_CurrentScreenPtr = 00000000
;   int* g_CurrentZBufferPtr = 00000000
;   int g_DeltaTextureU = 0x0
;   int g_DeltaTextureV = 0x0
;   int g_DeltaDepthW = 0x0
;   ulonglong g_TextureShift1 = 0x10
;   ulonglong g_TextureShift2 = 0x8
;   ulonglong g_TextureMask1 = 0xff
;   ulonglong g_TextureMask2 = 0xff00
;   void*[1024] g_ScreenBufferArray
;   uint*[1024] g_ZBufferScanlineArray
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b5322
        ;   Label: wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
    PUSH EDI                            ; 005b5323
    PUSH EBP                            ; 005b5324
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b5325
    MOV ECX,dword ptr [EDI + 0x8]       ; 005b5328
    CMP EAX,ECX                         ; 005b532b
    JBE 0x005b5332                      ; 005b532d | LAB_005b5332
        ;   XREF to: 005b5332 (CONDITIONAL_JUMP)
    XCHG EAX,ECX                        ; 005b532f
    XCHG EDI,ESI                        ; 005b5330
    SHR ECX,0x10                        ; 005b5332
        ;   Label: LAB_005b5332
    SHR EAX,0x10                        ; 005b5335
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 005b5338 | uint *[1024] g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 005b533f | void *[1024] g_ScreenBufferArray
    SUB ECX,EAX                         ; 005b5346
    JLE 0x005b5510                      ; 005b5348 | LAB_005b5510
        ;   XREF to: 005b5510 (CONDITIONAL_JUMP)
    LEA EBX,[EBX + EAX*0x2]             ; 005b534e
    SHL ECX,0x2                         ; 005b5351
    LEA EBP,[EBP + EAX*0x4]             ; 005b5354
    MOV dword ptr [0x006821a4],ECX      ; 005b5358 | int g_ScanlinePixelCount
    MOV dword ptr [0x00682208],EBX      ; 005b535e | int * g_CurrentScreenPtr
    MOV dword ptr [0x0068220c],EBP      ; 005b5364 | int * g_CurrentZBufferPtr
    CMP dword ptr [0x02d052a0],0x80     ; 005b536a | int g_RenderStateFlags
    JZ 0x005b551b                       ; 005b5374 | LAB_005b551b
        ;   XREF to: 005b551b (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d052a4],0x5      ; 005b537a | int g_RenderStateFlag2
    JNZ 0x005b53f3                      ; 005b5381 | LAB_005b53f3
        ;   XREF to: 005b53f3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x18]      ; 005b5383
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b5386
    CDQ                                 ; 005b5389
    SHLD EDX,EAX,0x18                   ; 005b538a
    SHL EAX,0x18                        ; 005b538e
    IDIV EBX                            ; 005b5391
    MOV [0x006821e0],EAX                ; 005b5393 | int g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b5398
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b539b
    CDQ                                 ; 005b539e
    SHLD EDX,EAX,0x18                   ; 005b539f
    SHL EAX,0x18                        ; 005b53a3
    IDIV EBX                            ; 005b53a6
    SUB EAX,dword ptr [0x006821e0]      ; 005b53a8 | int g_StartTextureU
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b53ae | DAT_02d02584
    MOV dword ptr [0x00682610],EDX      ; 005b53b4 | int g_DeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 005b53ba
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b53bd
    CDQ                                 ; 005b53c0
    SHLD EDX,EAX,0x18                   ; 005b53c1
    SHL EAX,0x18                        ; 005b53c5
    IDIV EBX                            ; 005b53c8
    MOV [0x006821e4],EAX                ; 005b53ca | int g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b53cf
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b53d2
    CDQ                                 ; 005b53d5
    SHLD EDX,EAX,0x18                   ; 005b53d6
    SHL EAX,0x18                        ; 005b53da
    IDIV EBX                            ; 005b53dd
    SUB EAX,dword ptr [0x006821e4]      ; 005b53df | int g_StartTextureV
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b53e5 | DAT_02d02584
    MOV dword ptr [0x00682614],EDX      ; 005b53eb | int g_DeltaTextureV
    JMP 0x005b5427                      ; 005b53f1 | LAB_005b5427
        ;   XREF to: 005b5427 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b53f3
        ;   Label: LAB_005b53f3
    MOV EBX,dword ptr [ESI + 0x18]      ; 005b53f6
    SUB EAX,EBX                         ; 005b53f9
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b53fb | DAT_02d02584
    MOV dword ptr [0x006821e0],EBX      ; 005b5401 | int g_StartTextureU
    MOV dword ptr [0x00682610],EDX      ; 005b5407 | int g_DeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b540d
    MOV EBX,dword ptr [ESI + 0x20]      ; 005b5410
    SUB EAX,EBX                         ; 005b5413
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b5415 | DAT_02d02584
    MOV dword ptr [0x006821e4],EBX      ; 005b541b | int g_StartTextureV
    MOV dword ptr [0x00682614],EDX      ; 005b5421 | int g_DeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b5427
        ;   Label: LAB_005b5427
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b542a
    SUB EAX,EBX                         ; 005b542d
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b542f | DAT_02d02584
    MOV dword ptr [0x006821ec],EBX      ; 005b5435 | int g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b543b | int g_DeltaDepthW
    MOV EBP,dword ptr [0x006821e0]      ; 005b5441 | int g_StartTextureU
    MOV EDX,dword ptr [0x006821e4]      ; 005b5447 | int g_StartTextureV
    MOV ESI,dword ptr [0x006821ec]      ; 005b544d | int g_StartDepthW
    MOV EDI,0x0                         ; 005b5453
    CMP dword ptr [0x02d03e84],0x0      ; 005b5458 | void * g_CurrentTextureOpacityData
    JNZ 0x005b5510                      ; 005b545f | LAB_005b5510
        ;   XREF to: 005b5510 (CONDITIONAL_JUMP)
    TEST dword ptr [0x02d052a0],0x2     ; 005b5465 | int g_RenderStateFlags
    JNZ 0x005b5510                      ; 005b546f | LAB_005b5510
        ;   XREF to: 005b5510 (CONDITIONAL_JUMP)
    TEST dword ptr [0x02d052a0],0x40    ; 005b5475 | int g_RenderStateFlags
        ;   Label: LAB_005b5475
    JZ 0x005b548d                       ; 005b547f | LAB_005b548d
        ;   XREF to: 005b548d (CONDITIONAL_JUMP)
    LEA EAX,[EDI]                       ; 005b5481
    ADD EAX,dword ptr [0x0068220c]      ; 005b5483 | int * g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b5489
    JL 0x005b54ee                       ; 005b548b | LAB_005b54ee
        ;   XREF to: 005b54ee (CONDITIONAL_JUMP)
    TEST dword ptr [0x02d052a0],0x1     ; 005b548d | int g_RenderStateFlags
        ;   Label: LAB_005b548d
    JZ 0x005b5514                       ; 005b5497 | LAB_005b5514
        ;   XREF to: 005b5514 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [0x006826e0]        ; 005b5499 | ulonglong g_TextureShift1
    MOV EAX,EBP                         ; 005b549f
    SHR EAX,CL                          ; 005b54a1
    AND EAX,dword ptr [0x00682720]      ; 005b54a3 | ulonglong g_TextureMask1
    MOV CL,byte ptr [0x00682700]        ; 005b54a9 | ulonglong g_TextureShift2
    MOV EBX,EDX                         ; 005b54af
    SHR EBX,CL                          ; 005b54b1
    AND EBX,dword ptr [0x00682740]      ; 005b54b3 | ulonglong g_TextureMask2
    ADD EAX,dword ptr [0x02d03e80]      ; 005b54b9 | void * g_CurrentTextureData
    ADD EAX,EBX                         ; 005b54bf
    MOVZX EAX,byte ptr [EAX]            ; 005b54c1
    MOV AX,word ptr [EAX*0x2 + 0x2d01d24] ; 005b54c4 | ushort[256] g_Hardware16BitPalette
    MOV EBX,EDI                         ; 005b54cc
        ;   Label: LAB_005b54cc
    SHR EBX,0x1                         ; 005b54ce
    ADD EBX,dword ptr [0x00682208]      ; 005b54d0 | int * g_CurrentScreenPtr
    MOV word ptr [EBX],AX               ; 005b54d6
    TEST dword ptr [0x02d052a0],0x80    ; 005b54d9 | int g_RenderStateFlags
    JZ 0x005b54ee                       ; 005b54e3 | LAB_005b54ee
        ;   XREF to: 005b54ee (CONDITIONAL_JUMP)
    MOV EAX,[0x0068220c]                ; 005b54e5 | int * g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 005b54ea
    MOV dword ptr [EAX],ESI             ; 005b54ec
    ADD EDI,0x4                         ; 005b54ee
        ;   Label: LAB_005b54ee
    CMP EDI,dword ptr [0x006821a4]      ; 005b54f1 | int g_ScanlinePixelCount
    JNC 0x005b5510                      ; 005b54f7 | LAB_005b5510
        ;   XREF to: 005b5510 (CONDITIONAL_JUMP)
    ADD EBP,dword ptr [0x00682610]      ; 005b54f9 | int g_DeltaTextureU
    ADD EDX,dword ptr [0x00682614]      ; 005b54ff | int g_DeltaTextureV
    ADD ESI,dword ptr [0x00682618]      ; 005b5505 | int g_DeltaDepthW
    JMP 0x005b5475                      ; 005b550b | LAB_005b5475
        ;   XREF to: 005b5475 (UNCONDITIONAL_JUMP)
    POP EBP                             ; 005b5510
        ;   Label: LAB_005b5510
    POP EDI                             ; 005b5511
    POP ESI                             ; 005b5512
    RET                                 ; 005b5513
    MOV EAX,[0x02d02570]                ; 005b5514 | int g_ActiveRenderColor
        ;   Label: LAB_005b5514
    JMP 0x005b54cc                      ; 005b5519 | LAB_005b54cc
        ;   XREF to: 005b54cc (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b551b
        ;   Label: LAB_005b551b
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b551e
    SUB EAX,EBX                         ; 005b5521
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b5523 | DAT_02d02584
    MOV dword ptr [0x006821ec],EBX      ; 005b5529 | int g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b552f | int g_DeltaDepthW
    MOV EAX,[0x006821ec]                ; 005b5535 | int g_StartDepthW
    MOV EBX,dword ptr [0x00682618]      ; 005b553a | int g_DeltaDepthW
    MOV ESI,dword ptr [0x0068220c]      ; 005b5540 | int * g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x006821a4]      ; 005b5546 | int g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 005b554c
        ;   Label: LAB_005b554c
    ADD EAX,EBX                         ; 005b554e
    ADD ESI,0x4                         ; 005b5550
    SUB ECX,0x4                         ; 005b5553
    JG 0x005b554c                       ; 005b5556 | LAB_005b554c
        ;   XREF to: 005b554c (CONDITIONAL_JUMP)
    POP EBP                             ; 005b5558
    POP EDI                             ; 005b5559
    POP ESI                             ; 005b555a
    RET                                 ; 005b555b

