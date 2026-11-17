; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[47]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404bae
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 00406511
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 004048f8
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00406fbf
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406e7f
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 00405724
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 00405844
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0 at 00406d27
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00405980 at 004059ea
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0 at 0040684f
;   ... and 37 more
;
; Referenced Globals:
;   int g_ScanlinePixelCount = 0x0
;   int g_StartTextureU = 0x0
;   int g_StartTextureV = 0x0
;   int g_StartDepthW = 0x0
;   int* g_CurrentScreenPtr = 00000000
;   int* g_CurrentZBufferPtr = 00000000
;   int g_HardwareDeltaTextureU = 0x0
;   int g_HardwareDeltaTextureV = 0x0
;   int g_HardwareDeltaDepthZ = 0x0
;   qword g_TextureShift1 = 0x10
;   qword g_TextureShift2 = 0x8
;   qword g_TextureMask1 = 0xff
;   qword g_TextureMask2 = 0xff00
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055d2e9
        ;   Label: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
    PUSH EDI                            ; 0055d2ea
    PUSH EBP                            ; 0055d2eb
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055d2ec
    MOV ECX,dword ptr [EDI + 0x8]       ; 0055d2ef
    CMP EAX,ECX                         ; 0055d2f2
    JBE 0x0055d2f9                      ; 0055d2f4
        ;   XREF to: 0055d2f9 (CONDITIONAL_JUMP)  ; LAB_0055d2f9
    XCHG EAX,ECX                        ; 0055d2f6
    XCHG EDI,ESI                        ; 0055d2f7
    SHR ECX,0x10                        ; 0055d2f9
        ;   Label: LAB_0055d2f9
    SHR EAX,0x10                        ; 0055d2fc
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055d2ff | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055d306 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0055d30d
    JLE 0x0055d4d7                      ; 0055d30f
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    LEA EBX,[EBX + EAX*0x2]             ; 0055d315
    SHL ECX,0x2                         ; 0055d318
    LEA EBP,[EBP + EAX*0x4]             ; 0055d31b
    MOV dword ptr [0x0061c314],ECX      ; 0055d31f | g_ScanlinePixelCount
    MOV dword ptr [0x0061c378],EBX      ; 0055d325 | g_CurrentScreenPtr
    MOV dword ptr [0x0061c37c],EBP      ; 0055d32b | g_CurrentZBufferPtr
    CMP dword ptr [0x01c38b54],0x80     ; 0055d331 | g_RenderStateFlags
    JZ 0x0055d4e2                       ; 0055d33b
        ;   XREF to: 0055d4e2 (CONDITIONAL_JUMP)  ; LAB_0055d4e2
    CMP dword ptr [0x01c38b58],0x5      ; 0055d341 | g_VertexPreprocessMode
    JNZ 0x0055d3ba                      ; 0055d348
        ;   XREF to: 0055d3ba (CONDITIONAL_JUMP)  ; LAB_0055d3ba
    MOV EAX,dword ptr [ESI + 0x18]      ; 0055d34a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d34d
    CDQ                                 ; 0055d350
    SHLD EDX,EAX,0x18                   ; 0055d351
    SHL EAX,0x18                        ; 0055d355
    IDIV EBX                            ; 0055d358
    MOV [0x0061c350],EAX                ; 0055d35a | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055d35f
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055d362
    CDQ                                 ; 0055d365
    SHLD EDX,EAX,0x18                   ; 0055d366
    SHL EAX,0x18                        ; 0055d36a
    IDIV EBX                            ; 0055d36d
    SUB EAX,dword ptr [0x0061c350]      ; 0055d36f | g_StartTextureU
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d375 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c780],EDX      ; 0055d37b | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 0055d381
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d384
    CDQ                                 ; 0055d387
    SHLD EDX,EAX,0x18                   ; 0055d388
    SHL EAX,0x18                        ; 0055d38c
    IDIV EBX                            ; 0055d38f
    MOV [0x0061c354],EAX                ; 0055d391 | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d396
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055d399
    CDQ                                 ; 0055d39c
    SHLD EDX,EAX,0x18                   ; 0055d39d
    SHL EAX,0x18                        ; 0055d3a1
    IDIV EBX                            ; 0055d3a4
    SUB EAX,dword ptr [0x0061c354]      ; 0055d3a6 | g_StartTextureV
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3ac | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c784],EDX      ; 0055d3b2 | g_HardwareDeltaTextureV
    JMP 0x0055d3ee                      ; 0055d3b8
        ;   XREF to: 0055d3ee (UNCONDITIONAL_JUMP)  ; LAB_0055d3ee
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055d3ba
        ;   Label: LAB_0055d3ba
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055d3bd
    SUB EAX,EBX                         ; 0055d3c0
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3c2 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c350],EBX      ; 0055d3c8 | g_StartTextureU
    MOV dword ptr [0x0061c780],EDX      ; 0055d3ce | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d3d4
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055d3d7
    SUB EAX,EBX                         ; 0055d3da
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3dc | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c354],EBX      ; 0055d3e2 | g_StartTextureV
    MOV dword ptr [0x0061c784],EDX      ; 0055d3e8 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d3ee
        ;   Label: LAB_0055d3ee
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d3f1
    SUB EAX,EBX                         ; 0055d3f4
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3f6 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c35c],EBX      ; 0055d3fc | g_StartDepthW
    MOV dword ptr [0x0061c788],EDX      ; 0055d402 | g_HardwareDeltaDepthZ
    MOV EBP,dword ptr [0x0061c350]      ; 0055d408 | g_StartTextureU
    MOV EDX,dword ptr [0x0061c354]      ; 0055d40e | g_StartTextureV
    MOV ESI,dword ptr [0x0061c35c]      ; 0055d414 | g_StartDepthW
    MOV EDI,0x0                         ; 0055d41a
    CMP dword ptr [0x01c37774],0x0      ; 0055d41f | g_CurrentTextureOpacityData
    JNZ 0x0055d4d7                      ; 0055d426
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    TEST dword ptr [0x01c38b54],0x2     ; 0055d42c | g_RenderStateFlags
    JNZ 0x0055d4d7                      ; 0055d436
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    TEST dword ptr [0x01c38b54],0x40    ; 0055d43c | g_RenderStateFlags
        ;   Label: LAB_0055d43c
    JZ 0x0055d454                       ; 0055d446
        ;   XREF to: 0055d454 (CONDITIONAL_JUMP)  ; LAB_0055d454
    LEA EAX,[EDI]                       ; 0055d448
    ADD EAX,dword ptr [0x0061c37c]      ; 0055d44a | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0055d450
    JL 0x0055d4b5                       ; 0055d452
        ;   XREF to: 0055d4b5 (CONDITIONAL_JUMP)  ; LAB_0055d4b5
    TEST dword ptr [0x01c38b54],0x1     ; 0055d454 | g_RenderStateFlags
        ;   Label: LAB_0055d454
    JZ 0x0055d4db                       ; 0055d45e
        ;   XREF to: 0055d4db (CONDITIONAL_JUMP)  ; LAB_0055d4db
    MOV CL,byte ptr [0x0061c868]        ; 0055d460 | g_TextureShift1
    MOV EAX,EBP                         ; 0055d466
    SHR EAX,CL                          ; 0055d468
    AND EAX,dword ptr [0x0061c8a8]      ; 0055d46a | g_TextureMask1
    MOV CL,byte ptr [0x0061c888]        ; 0055d470 | g_TextureShift2
    MOV EBX,EDX                         ; 0055d476
    SHR EBX,CL                          ; 0055d478
    AND EBX,dword ptr [0x0061c8c8]      ; 0055d47a | g_TextureMask2
    ADD EAX,dword ptr [0x01c37770]      ; 0055d480 | g_CurrentTextureData
    ADD EAX,EBX                         ; 0055d486
    MOVZX EAX,byte ptr [EAX]            ; 0055d488
    MOV AX,word ptr [EAX*0x2 + 0x1c35614] ; 0055d48b
    MOV EBX,EDI                         ; 0055d493
        ;   Label: LAB_0055d493
    SHR EBX,0x1                         ; 0055d495
    ADD EBX,dword ptr [0x0061c378]      ; 0055d497 | g_CurrentScreenPtr
    MOV word ptr [EBX],AX               ; 0055d49d
    TEST dword ptr [0x01c38b54],0x80    ; 0055d4a0 | g_RenderStateFlags
    JZ 0x0055d4b5                       ; 0055d4aa
        ;   XREF to: 0055d4b5 (CONDITIONAL_JUMP)  ; LAB_0055d4b5
    MOV EAX,[0x0061c37c]                ; 0055d4ac | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 0055d4b1
    MOV dword ptr [EAX],ESI             ; 0055d4b3
    ADD EDI,0x4                         ; 0055d4b5
        ;   Label: LAB_0055d4b5
    CMP EDI,dword ptr [0x0061c314]      ; 0055d4b8 | g_ScanlinePixelCount
    JNC 0x0055d4d7                      ; 0055d4be
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    ADD EBP,dword ptr [0x0061c780]      ; 0055d4c0 | g_HardwareDeltaTextureU
    ADD EDX,dword ptr [0x0061c784]      ; 0055d4c6 | g_HardwareDeltaTextureV
    ADD ESI,dword ptr [0x0061c788]      ; 0055d4cc | g_HardwareDeltaDepthZ
    JMP 0x0055d43c                      ; 0055d4d2
        ;   XREF to: 0055d43c (UNCONDITIONAL_JUMP)  ; LAB_0055d43c
    POP EBP                             ; 0055d4d7
        ;   Label: LAB_0055d4d7
    POP EDI                             ; 0055d4d8
    POP ESI                             ; 0055d4d9
    RET                                 ; 0055d4da
    MOV EAX,[0x01c35e60]                ; 0055d4db | g_INT_01c35e60
        ;   Label: LAB_0055d4db
    JMP 0x0055d493                      ; 0055d4e0
        ;   XREF to: 0055d493 (UNCONDITIONAL_JUMP)  ; LAB_0055d493
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d4e2
        ;   Label: LAB_0055d4e2
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d4e5
    SUB EAX,EBX                         ; 0055d4e8
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d4ea | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c35c],EBX      ; 0055d4f0 | g_StartDepthW
    MOV dword ptr [0x0061c788],EDX      ; 0055d4f6 | g_HardwareDeltaDepthZ
    MOV EAX,[0x0061c35c]                ; 0055d4fc | g_StartDepthW
    MOV EBX,dword ptr [0x0061c788]      ; 0055d501 | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x0061c37c]      ; 0055d507 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x0061c314]      ; 0055d50d | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 0055d513
        ;   Label: LAB_0055d513
    ADD EAX,EBX                         ; 0055d515
    ADD ESI,0x4                         ; 0055d517
    SUB ECX,0x4                         ; 0055d51a
    JG 0x0055d513                       ; 0055d51d
        ;   XREF to: 0055d513 (CONDITIONAL_JUMP)  ; LAB_0055d513
    POP EBP                             ; 0055d51f
    POP EDI                             ; 0055d520
    POP ESI                             ; 0055d521
    RET                                 ; 0055d522

