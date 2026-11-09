; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9(void)
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
;   undefined4 DAT_0061c314
;   undefined4 DAT_0061c350
;   undefined4 DAT_0061c354
;   undefined4 DAT_0061c35c
;   undefined4 DAT_0061c378
;   undefined4 DAT_0061c37c
;   undefined4 DAT_0061c780
;   undefined4 DAT_0061c784
;   undefined4 DAT_0061c788
;   undefined1 DAT_0061c868
;   undefined1 DAT_0061c888
;   undefined4 DAT_0061c8a8
;   undefined4 DAT_0061c8c8
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2b64c
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
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055d2ff | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055d306 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0055d30d
    JLE 0x0055d4d7                      ; 0055d30f
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    LEA EBX,[EBX + EAX*0x2]             ; 0055d315
    SHL ECX,0x2                         ; 0055d318
    LEA EBP,[EBP + EAX*0x4]             ; 0055d31b
    MOV dword ptr [0x0061c314],ECX      ; 0055d31f | DAT_0061c314
    MOV dword ptr [0x0061c378],EBX      ; 0055d325 | DAT_0061c378
    MOV dword ptr [0x0061c37c],EBP      ; 0055d32b | DAT_0061c37c
    CMP dword ptr [0x01c38b54],0x80     ; 0055d331 | DAT_01c38b54
    JZ 0x0055d4e2                       ; 0055d33b
        ;   XREF to: 0055d4e2 (CONDITIONAL_JUMP)  ; LAB_0055d4e2
    CMP dword ptr [0x01c38b58],0x5      ; 0055d341 | DAT_01c38b58
    JNZ 0x0055d3ba                      ; 0055d348
        ;   XREF to: 0055d3ba (CONDITIONAL_JUMP)  ; LAB_0055d3ba
    MOV EAX,dword ptr [ESI + 0x18]      ; 0055d34a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d34d
    CDQ                                 ; 0055d350
    SHLD EDX,EAX,0x18                   ; 0055d351
    SHL EAX,0x18                        ; 0055d355
    IDIV EBX                            ; 0055d358
    MOV [0x0061c350],EAX                ; 0055d35a | DAT_0061c350
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055d35f
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055d362
    CDQ                                 ; 0055d365
    SHLD EDX,EAX,0x18                   ; 0055d366
    SHL EAX,0x18                        ; 0055d36a
    IDIV EBX                            ; 0055d36d
    SUB EAX,dword ptr [0x0061c350]      ; 0055d36f | DAT_0061c350
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d375 | DAT_01c35e74
    MOV dword ptr [0x0061c780],EDX      ; 0055d37b | DAT_0061c780
    MOV EAX,dword ptr [ESI + 0x20]      ; 0055d381
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d384
    CDQ                                 ; 0055d387
    SHLD EDX,EAX,0x18                   ; 0055d388
    SHL EAX,0x18                        ; 0055d38c
    IDIV EBX                            ; 0055d38f
    MOV [0x0061c354],EAX                ; 0055d391 | DAT_0061c354
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d396
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055d399
    CDQ                                 ; 0055d39c
    SHLD EDX,EAX,0x18                   ; 0055d39d
    SHL EAX,0x18                        ; 0055d3a1
    IDIV EBX                            ; 0055d3a4
    SUB EAX,dword ptr [0x0061c354]      ; 0055d3a6 | DAT_0061c354
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3ac | DAT_01c35e74
    MOV dword ptr [0x0061c784],EDX      ; 0055d3b2 | DAT_0061c784
    JMP 0x0055d3ee                      ; 0055d3b8
        ;   XREF to: 0055d3ee (UNCONDITIONAL_JUMP)  ; LAB_0055d3ee
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055d3ba
        ;   Label: LAB_0055d3ba
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055d3bd
    SUB EAX,EBX                         ; 0055d3c0
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3c2 | DAT_01c35e74
    MOV dword ptr [0x0061c350],EBX      ; 0055d3c8 | DAT_0061c350
    MOV dword ptr [0x0061c780],EDX      ; 0055d3ce | DAT_0061c780
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d3d4
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055d3d7
    SUB EAX,EBX                         ; 0055d3da
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3dc | DAT_01c35e74
    MOV dword ptr [0x0061c354],EBX      ; 0055d3e2 | DAT_0061c354
    MOV dword ptr [0x0061c784],EDX      ; 0055d3e8 | DAT_0061c784
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d3ee
        ;   Label: LAB_0055d3ee
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d3f1
    SUB EAX,EBX                         ; 0055d3f4
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d3f6 | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055d3fc | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055d402 | DAT_0061c788
    MOV EBP,dword ptr [0x0061c350]      ; 0055d408 | DAT_0061c350
    MOV EDX,dword ptr [0x0061c354]      ; 0055d40e | DAT_0061c354
    MOV ESI,dword ptr [0x0061c35c]      ; 0055d414 | DAT_0061c35c
    MOV EDI,0x0                         ; 0055d41a
    CMP dword ptr [0x01c37774],0x0      ; 0055d41f | DAT_01c37774
    JNZ 0x0055d4d7                      ; 0055d426
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    TEST dword ptr [0x01c38b54],0x2     ; 0055d42c | DAT_01c38b54
    JNZ 0x0055d4d7                      ; 0055d436
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    TEST dword ptr [0x01c38b54],0x40    ; 0055d43c | DAT_01c38b54
        ;   Label: LAB_0055d43c
    JZ 0x0055d454                       ; 0055d446
        ;   XREF to: 0055d454 (CONDITIONAL_JUMP)  ; LAB_0055d454
    LEA EAX,[EDI]                       ; 0055d448
    ADD EAX,dword ptr [0x0061c37c]      ; 0055d44a | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055d450
    JL 0x0055d4b5                       ; 0055d452
        ;   XREF to: 0055d4b5 (CONDITIONAL_JUMP)  ; LAB_0055d4b5
    TEST dword ptr [0x01c38b54],0x1     ; 0055d454 | DAT_01c38b54
        ;   Label: LAB_0055d454
    JZ 0x0055d4db                       ; 0055d45e
        ;   XREF to: 0055d4db (CONDITIONAL_JUMP)  ; LAB_0055d4db
    MOV CL,byte ptr [0x0061c868]        ; 0055d460 | DAT_0061c868
    MOV EAX,EBP                         ; 0055d466
    SHR EAX,CL                          ; 0055d468
    AND EAX,dword ptr [0x0061c8a8]      ; 0055d46a | DAT_0061c8a8
    MOV CL,byte ptr [0x0061c888]        ; 0055d470 | DAT_0061c888
    MOV EBX,EDX                         ; 0055d476
    SHR EBX,CL                          ; 0055d478
    AND EBX,dword ptr [0x0061c8c8]      ; 0055d47a | DAT_0061c8c8
    ADD EAX,dword ptr [0x01c37770]      ; 0055d480 | DAT_01c37770
    ADD EAX,EBX                         ; 0055d486
    MOVZX EAX,byte ptr [EAX]            ; 0055d488
    MOV AX,word ptr [EAX*0x2 + 0x1c35614] ; 0055d48b
    MOV EBX,EDI                         ; 0055d493
        ;   Label: LAB_0055d493
    SHR EBX,0x1                         ; 0055d495
    ADD EBX,dword ptr [0x0061c378]      ; 0055d497 | DAT_0061c378
    MOV word ptr [EBX],AX               ; 0055d49d
    TEST dword ptr [0x01c38b54],0x80    ; 0055d4a0 | DAT_01c38b54
    JZ 0x0055d4b5                       ; 0055d4aa
        ;   XREF to: 0055d4b5 (CONDITIONAL_JUMP)  ; LAB_0055d4b5
    MOV EAX,[0x0061c37c]                ; 0055d4ac | DAT_0061c37c
    ADD EAX,EDI                         ; 0055d4b1
    MOV dword ptr [EAX],ESI             ; 0055d4b3
    ADD EDI,0x4                         ; 0055d4b5
        ;   Label: LAB_0055d4b5
    CMP EDI,dword ptr [0x0061c314]      ; 0055d4b8 | DAT_0061c314
    JNC 0x0055d4d7                      ; 0055d4be
        ;   XREF to: 0055d4d7 (CONDITIONAL_JUMP)  ; LAB_0055d4d7
    ADD EBP,dword ptr [0x0061c780]      ; 0055d4c0 | DAT_0061c780
    ADD EDX,dword ptr [0x0061c784]      ; 0055d4c6 | DAT_0061c784
    ADD ESI,dword ptr [0x0061c788]      ; 0055d4cc | DAT_0061c788
    JMP 0x0055d43c                      ; 0055d4d2
        ;   XREF to: 0055d43c (UNCONDITIONAL_JUMP)  ; LAB_0055d43c
    POP EBP                             ; 0055d4d7
        ;   Label: LAB_0055d4d7
    POP EDI                             ; 0055d4d8
    POP ESI                             ; 0055d4d9
    RET                                 ; 0055d4da
    MOV EAX,[0x01c35e60]                ; 0055d4db | DAT_01c35e60
        ;   Label: LAB_0055d4db
    JMP 0x0055d493                      ; 0055d4e0
        ;   XREF to: 0055d493 (UNCONDITIONAL_JUMP)  ; LAB_0055d493
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d4e2
        ;   Label: LAB_0055d4e2
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d4e5
    SUB EAX,EBX                         ; 0055d4e8
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d4ea | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055d4f0 | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055d4f6 | DAT_0061c788
    MOV EAX,[0x0061c35c]                ; 0055d4fc | DAT_0061c35c
    MOV EBX,dword ptr [0x0061c788]      ; 0055d501 | DAT_0061c788
    MOV ESI,dword ptr [0x0061c37c]      ; 0055d507 | DAT_0061c37c
    MOV ECX,dword ptr [0x0061c314]      ; 0055d50d | DAT_0061c314
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

