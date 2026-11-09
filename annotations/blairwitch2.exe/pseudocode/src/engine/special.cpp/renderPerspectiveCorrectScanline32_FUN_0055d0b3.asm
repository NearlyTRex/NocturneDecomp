; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3(void)
;
;
; XREF[47]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404b44
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 0040649f
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 0040489e
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00406f85
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406e45
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 004056e9
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 00405809
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0 at 00406ccb
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00405980 at 004059ac
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0 at 004067f0
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
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055d0b3
        ;   Label: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
    PUSH EDI                            ; 0055d0b4
    PUSH EBP                            ; 0055d0b5
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055d0b6
    MOV ECX,dword ptr [EDI + 0x8]       ; 0055d0b9
    CMP EAX,ECX                         ; 0055d0bc
    JBE 0x0055d0c3                      ; 0055d0be
        ;   XREF to: 0055d0c3 (CONDITIONAL_JUMP)  ; LAB_0055d0c3
    XCHG EAX,ECX                        ; 0055d0c0
    XCHG EDI,ESI                        ; 0055d0c1
    SHR ECX,0x10                        ; 0055d0c3
        ;   Label: LAB_0055d0c3
    SHR EAX,0x10                        ; 0055d0c6
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055d0c9 | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055d0d0 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0055d0d7
    JLE 0x0055d29d                      ; 0055d0d9
        ;   XREF to: 0055d29d (CONDITIONAL_JUMP)  ; LAB_0055d29d
    LEA EBX,[EBX + EAX*0x4]             ; 0055d0df
    SHL ECX,0x2                         ; 0055d0e2
    LEA EBP,[EBP + EAX*0x4]             ; 0055d0e5
    MOV dword ptr [0x0061c314],ECX      ; 0055d0e9 | DAT_0061c314
    MOV dword ptr [0x0061c378],EBX      ; 0055d0ef | DAT_0061c378
    MOV dword ptr [0x0061c37c],EBP      ; 0055d0f5 | DAT_0061c37c
    CMP dword ptr [0x01c38b54],0x80     ; 0055d0fb | DAT_01c38b54
    JZ 0x0055d2a8                       ; 0055d105
        ;   XREF to: 0055d2a8 (CONDITIONAL_JUMP)  ; LAB_0055d2a8
    CMP dword ptr [0x01c38b58],0x5      ; 0055d10b | DAT_01c38b58
    JNZ 0x0055d184                      ; 0055d112
        ;   XREF to: 0055d184 (CONDITIONAL_JUMP)  ; LAB_0055d184
    MOV EAX,dword ptr [ESI + 0x18]      ; 0055d114
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d117
    CDQ                                 ; 0055d11a
    SHLD EDX,EAX,0x18                   ; 0055d11b
    SHL EAX,0x18                        ; 0055d11f
    IDIV EBX                            ; 0055d122
    MOV [0x0061c350],EAX                ; 0055d124 | DAT_0061c350
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055d129
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055d12c
    CDQ                                 ; 0055d12f
    SHLD EDX,EAX,0x18                   ; 0055d130
    SHL EAX,0x18                        ; 0055d134
    IDIV EBX                            ; 0055d137
    SUB EAX,dword ptr [0x0061c350]      ; 0055d139 | DAT_0061c350
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d13f | DAT_01c35e74
    MOV dword ptr [0x0061c780],EDX      ; 0055d145 | DAT_0061c780
    MOV EAX,dword ptr [ESI + 0x20]      ; 0055d14b
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d14e
    CDQ                                 ; 0055d151
    SHLD EDX,EAX,0x18                   ; 0055d152
    SHL EAX,0x18                        ; 0055d156
    IDIV EBX                            ; 0055d159
    MOV [0x0061c354],EAX                ; 0055d15b | DAT_0061c354
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d160
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055d163
    CDQ                                 ; 0055d166
    SHLD EDX,EAX,0x18                   ; 0055d167
    SHL EAX,0x18                        ; 0055d16b
    IDIV EBX                            ; 0055d16e
    SUB EAX,dword ptr [0x0061c354]      ; 0055d170 | DAT_0061c354
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d176 | DAT_01c35e74
    MOV dword ptr [0x0061c784],EDX      ; 0055d17c | DAT_0061c784
    JMP 0x0055d1b8                      ; 0055d182
        ;   XREF to: 0055d1b8 (UNCONDITIONAL_JUMP)  ; LAB_0055d1b8
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055d184
        ;   Label: LAB_0055d184
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055d187
    SUB EAX,EBX                         ; 0055d18a
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d18c | DAT_01c35e74
    MOV dword ptr [0x0061c350],EBX      ; 0055d192 | DAT_0061c350
    MOV dword ptr [0x0061c780],EDX      ; 0055d198 | DAT_0061c780
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d19e
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055d1a1
    SUB EAX,EBX                         ; 0055d1a4
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d1a6 | DAT_01c35e74
    MOV dword ptr [0x0061c354],EBX      ; 0055d1ac | DAT_0061c354
    MOV dword ptr [0x0061c784],EDX      ; 0055d1b2 | DAT_0061c784
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d1b8
        ;   Label: LAB_0055d1b8
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d1bb
    SUB EAX,EBX                         ; 0055d1be
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d1c0 | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055d1c6 | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055d1cc | DAT_0061c788
    MOV EBP,dword ptr [0x0061c350]      ; 0055d1d2 | DAT_0061c350
    MOV EDX,dword ptr [0x0061c354]      ; 0055d1d8 | DAT_0061c354
    MOV ESI,dword ptr [0x0061c35c]      ; 0055d1de | DAT_0061c35c
    MOV EDI,0x0                         ; 0055d1e4
    CMP dword ptr [0x01c37774],0x0      ; 0055d1e9 | DAT_01c37774
    JNZ 0x0055d29d                      ; 0055d1f0
        ;   XREF to: 0055d29d (CONDITIONAL_JUMP)  ; LAB_0055d29d
    TEST dword ptr [0x01c38b54],0x2     ; 0055d1f6 | DAT_01c38b54
    JNZ 0x0055d29d                      ; 0055d200
        ;   XREF to: 0055d29d (CONDITIONAL_JUMP)  ; LAB_0055d29d
    TEST dword ptr [0x01c38b54],0x40    ; 0055d206 | DAT_01c38b54
        ;   Label: LAB_0055d206
    JZ 0x0055d21e                       ; 0055d210
        ;   XREF to: 0055d21e (CONDITIONAL_JUMP)  ; LAB_0055d21e
    LEA EAX,[EDI]                       ; 0055d212
    ADD EAX,dword ptr [0x0061c37c]      ; 0055d214 | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055d21a
    JL 0x0055d27b                       ; 0055d21c
        ;   XREF to: 0055d27b (CONDITIONAL_JUMP)  ; LAB_0055d27b
    TEST dword ptr [0x01c38b54],0x1     ; 0055d21e | DAT_01c38b54
        ;   Label: LAB_0055d21e
    JZ 0x0055d2a1                       ; 0055d228
        ;   XREF to: 0055d2a1 (CONDITIONAL_JUMP)  ; LAB_0055d2a1
    MOV CL,byte ptr [0x0061c868]        ; 0055d22a | DAT_0061c868
    MOV EAX,EBP                         ; 0055d230
    SHR EAX,CL                          ; 0055d232
    AND EAX,dword ptr [0x0061c8a8]      ; 0055d234 | DAT_0061c8a8
    MOV CL,byte ptr [0x0061c888]        ; 0055d23a | DAT_0061c888
    MOV EBX,EDX                         ; 0055d240
    SHR EBX,CL                          ; 0055d242
    AND EBX,dword ptr [0x0061c8c8]      ; 0055d244 | DAT_0061c8c8
    ADD EAX,dword ptr [0x01c37770]      ; 0055d24a | DAT_01c37770
    ADD EAX,EBX                         ; 0055d250
    MOVZX EAX,byte ptr [EAX]            ; 0055d252
    MOV EAX,dword ptr [EAX*0x4 + 0x1c35214] ; 0055d255 | DAT_01c35214
    MOV EBX,dword ptr [0x0061c378]      ; 0055d25c | DAT_0061c378
        ;   Label: LAB_0055d25c
    ADD EBX,EDI                         ; 0055d262
    MOV dword ptr [EBX],EAX             ; 0055d264
    TEST dword ptr [0x01c38b54],0x80    ; 0055d266 | DAT_01c38b54
    JZ 0x0055d27b                       ; 0055d270
        ;   XREF to: 0055d27b (CONDITIONAL_JUMP)  ; LAB_0055d27b
    MOV EAX,[0x0061c37c]                ; 0055d272 | DAT_0061c37c
    ADD EAX,EDI                         ; 0055d277
    MOV dword ptr [EAX],ESI             ; 0055d279
    ADD EDI,0x4                         ; 0055d27b
        ;   Label: LAB_0055d27b
    CMP EDI,dword ptr [0x0061c314]      ; 0055d27e | DAT_0061c314
    JNC 0x0055d29d                      ; 0055d284
        ;   XREF to: 0055d29d (CONDITIONAL_JUMP)  ; LAB_0055d29d
    ADD EBP,dword ptr [0x0061c780]      ; 0055d286 | DAT_0061c780
    ADD EDX,dword ptr [0x0061c784]      ; 0055d28c | DAT_0061c784
    ADD ESI,dword ptr [0x0061c788]      ; 0055d292 | DAT_0061c788
    JMP 0x0055d206                      ; 0055d298
        ;   XREF to: 0055d206 (UNCONDITIONAL_JUMP)  ; LAB_0055d206
    POP EBP                             ; 0055d29d
        ;   Label: LAB_0055d29d
    POP EDI                             ; 0055d29e
    POP ESI                             ; 0055d29f
    RET                                 ; 0055d2a0
    MOV EAX,[0x01c35e60]                ; 0055d2a1 | DAT_01c35e60
        ;   Label: LAB_0055d2a1
    JMP 0x0055d25c                      ; 0055d2a6
        ;   XREF to: 0055d25c (UNCONDITIONAL_JUMP)  ; LAB_0055d25c
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d2a8
        ;   Label: LAB_0055d2a8
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d2ab
    SUB EAX,EBX                         ; 0055d2ae
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d2b0 | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055d2b6 | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055d2bc | DAT_0061c788
    MOV EAX,[0x0061c35c]                ; 0055d2c2 | DAT_0061c35c
    MOV EBX,dword ptr [0x0061c788]      ; 0055d2c7 | DAT_0061c788
    MOV ESI,dword ptr [0x0061c37c]      ; 0055d2cd | DAT_0061c37c
    MOV ECX,dword ptr [0x0061c314]      ; 0055d2d3 | DAT_0061c314
    MOV dword ptr [ESI],EAX             ; 0055d2d9
        ;   Label: LAB_0055d2d9
    ADD EAX,EBX                         ; 0055d2db
    ADD ESI,0x4                         ; 0055d2dd
    SUB ECX,0x4                         ; 0055d2e0
    JG 0x0055d2d9                       ; 0055d2e3
        ;   XREF to: 0055d2d9 (CONDITIONAL_JUMP)  ; LAB_0055d2d9
    POP EBP                             ; 0055d2e5
    POP EDI                             ; 0055d2e6
    POP ESI                             ; 0055d2e7
    RET                                 ; 0055d2e8

