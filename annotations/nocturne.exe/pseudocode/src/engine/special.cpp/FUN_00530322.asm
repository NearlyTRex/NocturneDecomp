; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_special_cpp_FUN_00530322(void)
;
;
; XREF[51]:
;   engine_3d.c_FUN_00405340 at 004053d7
;   engine_3d.c_FUN_00406920 at 004069c4
;   engine_3d.c_FUN_00406a00 at 00406aa7
;   engine_3d.c_FUN_00406ae0 at 00406b53
;   engine_3d.c_FUN_00406b80 at 00406c27
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 0040615e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407ae1
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405ea8
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 0040858f
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 0040844f
;   ... and 41 more
;
; Referenced Globals:
;   undefined4 DAT_005bf014
;   undefined4 DAT_005bf050
;   undefined4 DAT_005bf054
;   undefined4 DAT_005bf05c
;   undefined4 DAT_005bf078
;   undefined4 DAT_005bf07c
;   undefined4 DAT_005bf480
;   undefined4 DAT_005bf484
;   undefined4 DAT_005bf488
;   undefined1 DAT_005bf550
;   undefined1 DAT_005bf570
;   undefined4 DAT_005bf590
;   undefined4 DAT_005bf5b0
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd4260
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00530322
        ;   Label: engine_special.cpp_FUN_00530322
    PUSH EDI                            ; 00530323
    PUSH EBP                            ; 00530324
    MOV EAX,dword ptr [ESI + 0x8]       ; 00530325
    MOV ECX,dword ptr [EDI + 0x8]       ; 00530328
    CMP EAX,ECX                         ; 0053032b
    JBE 0x00530332                      ; 0053032d
        ;   XREF to: 00530332 (CONDITIONAL_JUMP)  ; LAB_00530332
    XCHG EAX,ECX                        ; 0053032f
    XCHG EDI,ESI                        ; 00530330
    SHR ECX,0x10                        ; 00530332
        ;   Label: LAB_00530332
    SHR EAX,0x10                        ; 00530335
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 00530338 | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 0053033f | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00530346
    JLE 0x00530510                      ; 00530348
        ;   XREF to: 00530510 (CONDITIONAL_JUMP)  ; LAB_00530510
    LEA EBX,[EBX + EAX*0x2]             ; 0053034e
    SHL ECX,0x2                         ; 00530351
    LEA EBP,[EBP + EAX*0x4]             ; 00530354
    MOV dword ptr [0x005bf014],ECX      ; 00530358 | DAT_005bf014
    MOV dword ptr [0x005bf078],EBX      ; 0053035e | DAT_005bf078
    MOV dword ptr [0x005bf07c],EBP      ; 00530364 | DAT_005bf07c
    CMP dword ptr [0x01c039a0],0x80     ; 0053036a | DAT_01c039a0
    JZ 0x0053051b                       ; 00530374
        ;   XREF to: 0053051b (CONDITIONAL_JUMP)  ; LAB_0053051b
    CMP dword ptr [0x01c039a4],0x5      ; 0053037a | DAT_01c039a4
    JNZ 0x005303f3                      ; 00530381
        ;   XREF to: 005303f3 (CONDITIONAL_JUMP)  ; LAB_005303f3
    MOV EAX,dword ptr [ESI + 0x18]      ; 00530383
    MOV EBX,dword ptr [ESI + 0x28]      ; 00530386
    CDQ                                 ; 00530389
    SHLD EDX,EAX,0x18                   ; 0053038a
    SHL EAX,0x18                        ; 0053038e
    IDIV EBX                            ; 00530391
    MOV [0x005bf050],EAX                ; 00530393 | DAT_005bf050
    MOV EAX,dword ptr [EDI + 0x18]      ; 00530398
    MOV EBX,dword ptr [EDI + 0x28]      ; 0053039b
    CDQ                                 ; 0053039e
    SHLD EDX,EAX,0x18                   ; 0053039f
    SHL EAX,0x18                        ; 005303a3
    IDIV EBX                            ; 005303a6
    SUB EAX,dword ptr [0x005bf050]      ; 005303a8 | DAT_005bf050
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005303ae | DAT_01c00c84
    MOV dword ptr [0x005bf480],EDX      ; 005303b4 | DAT_005bf480
    MOV EAX,dword ptr [ESI + 0x20]      ; 005303ba
    MOV EBX,dword ptr [ESI + 0x28]      ; 005303bd
    CDQ                                 ; 005303c0
    SHLD EDX,EAX,0x18                   ; 005303c1
    SHL EAX,0x18                        ; 005303c5
    IDIV EBX                            ; 005303c8
    MOV [0x005bf054],EAX                ; 005303ca | DAT_005bf054
    MOV EAX,dword ptr [EDI + 0x20]      ; 005303cf
    MOV EBX,dword ptr [EDI + 0x28]      ; 005303d2
    CDQ                                 ; 005303d5
    SHLD EDX,EAX,0x18                   ; 005303d6
    SHL EAX,0x18                        ; 005303da
    IDIV EBX                            ; 005303dd
    SUB EAX,dword ptr [0x005bf054]      ; 005303df | DAT_005bf054
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005303e5 | DAT_01c00c84
    MOV dword ptr [0x005bf484],EDX      ; 005303eb | DAT_005bf484
    JMP 0x00530427                      ; 005303f1
        ;   XREF to: 00530427 (UNCONDITIONAL_JUMP)  ; LAB_00530427
    MOV EAX,dword ptr [EDI + 0x18]      ; 005303f3
        ;   Label: LAB_005303f3
    MOV EBX,dword ptr [ESI + 0x18]      ; 005303f6
    SUB EAX,EBX                         ; 005303f9
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005303fb | DAT_01c00c84
    MOV dword ptr [0x005bf050],EBX      ; 00530401 | DAT_005bf050
    MOV dword ptr [0x005bf480],EDX      ; 00530407 | DAT_005bf480
    MOV EAX,dword ptr [EDI + 0x20]      ; 0053040d
    MOV EBX,dword ptr [ESI + 0x20]      ; 00530410
    SUB EAX,EBX                         ; 00530413
    IMUL dword ptr [ECX + 0x1c00c84]    ; 00530415 | DAT_01c00c84
    MOV dword ptr [0x005bf054],EBX      ; 0053041b | DAT_005bf054
    MOV dword ptr [0x005bf484],EDX      ; 00530421 | DAT_005bf484
    MOV EAX,dword ptr [EDI + 0x28]      ; 00530427
        ;   Label: LAB_00530427
    MOV EBX,dword ptr [ESI + 0x28]      ; 0053042a
    SUB EAX,EBX                         ; 0053042d
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0053042f | DAT_01c00c84
    MOV dword ptr [0x005bf05c],EBX      ; 00530435 | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 0053043b | DAT_005bf488
    MOV EBP,dword ptr [0x005bf050]      ; 00530441 | DAT_005bf050
    MOV EDX,dword ptr [0x005bf054]      ; 00530447 | DAT_005bf054
    MOV ESI,dword ptr [0x005bf05c]      ; 0053044d | DAT_005bf05c
    MOV EDI,0x0                         ; 00530453
    CMP dword ptr [0x01c02584],0x0      ; 00530458 | DAT_01c02584
    JNZ 0x00530510                      ; 0053045f
        ;   XREF to: 00530510 (CONDITIONAL_JUMP)  ; LAB_00530510
    TEST dword ptr [0x01c039a0],0x2     ; 00530465 | DAT_01c039a0
    JNZ 0x00530510                      ; 0053046f
        ;   XREF to: 00530510 (CONDITIONAL_JUMP)  ; LAB_00530510
    TEST dword ptr [0x01c039a0],0x40    ; 00530475 | DAT_01c039a0
        ;   Label: LAB_00530475
    JZ 0x0053048d                       ; 0053047f
        ;   XREF to: 0053048d (CONDITIONAL_JUMP)  ; LAB_0053048d
    LEA EAX,[EDI]                       ; 00530481
    ADD EAX,dword ptr [0x005bf07c]      ; 00530483 | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 00530489
    JL 0x005304ee                       ; 0053048b
        ;   XREF to: 005304ee (CONDITIONAL_JUMP)  ; LAB_005304ee
    TEST dword ptr [0x01c039a0],0x1     ; 0053048d | DAT_01c039a0
        ;   Label: LAB_0053048d
    JZ 0x00530514                       ; 00530497
        ;   XREF to: 00530514 (CONDITIONAL_JUMP)  ; LAB_00530514
    MOV CL,byte ptr [0x005bf550]        ; 00530499 | DAT_005bf550
    MOV EAX,EBP                         ; 0053049f
    SHR EAX,CL                          ; 005304a1
    AND EAX,dword ptr [0x005bf590]      ; 005304a3 | DAT_005bf590
    MOV CL,byte ptr [0x005bf570]        ; 005304a9 | DAT_005bf570
    MOV EBX,EDX                         ; 005304af
    SHR EBX,CL                          ; 005304b1
    AND EBX,dword ptr [0x005bf5b0]      ; 005304b3 | DAT_005bf5b0
    ADD EAX,dword ptr [0x01c02580]      ; 005304b9 | DAT_01c02580
    ADD EAX,EBX                         ; 005304bf
    MOVZX EAX,byte ptr [EAX]            ; 005304c1
    MOV AX,word ptr [EAX*0x2 + 0x1c00424] ; 005304c4
    MOV EBX,EDI                         ; 005304cc
        ;   Label: LAB_005304cc
    SHR EBX,0x1                         ; 005304ce
    ADD EBX,dword ptr [0x005bf078]      ; 005304d0 | DAT_005bf078
    MOV word ptr [EBX],AX               ; 005304d6
    TEST dword ptr [0x01c039a0],0x80    ; 005304d9 | DAT_01c039a0
    JZ 0x005304ee                       ; 005304e3
        ;   XREF to: 005304ee (CONDITIONAL_JUMP)  ; LAB_005304ee
    MOV EAX,[0x005bf07c]                ; 005304e5 | DAT_005bf07c
    ADD EAX,EDI                         ; 005304ea
    MOV dword ptr [EAX],ESI             ; 005304ec
    ADD EDI,0x4                         ; 005304ee
        ;   Label: LAB_005304ee
    CMP EDI,dword ptr [0x005bf014]      ; 005304f1 | DAT_005bf014
    JNC 0x00530510                      ; 005304f7
        ;   XREF to: 00530510 (CONDITIONAL_JUMP)  ; LAB_00530510
    ADD EBP,dword ptr [0x005bf480]      ; 005304f9 | DAT_005bf480
    ADD EDX,dword ptr [0x005bf484]      ; 005304ff | DAT_005bf484
    ADD ESI,dword ptr [0x005bf488]      ; 00530505 | DAT_005bf488
    JMP 0x00530475                      ; 0053050b
        ;   XREF to: 00530475 (UNCONDITIONAL_JUMP)  ; LAB_00530475
    POP EBP                             ; 00530510
        ;   Label: LAB_00530510
    POP EDI                             ; 00530511
    POP ESI                             ; 00530512
    RET                                 ; 00530513
    MOV EAX,[0x01c00c70]                ; 00530514 | DAT_01c00c70
        ;   Label: LAB_00530514
    JMP 0x005304cc                      ; 00530519
        ;   XREF to: 005304cc (UNCONDITIONAL_JUMP)  ; LAB_005304cc
    MOV EAX,dword ptr [EDI + 0x28]      ; 0053051b
        ;   Label: LAB_0053051b
    MOV EBX,dword ptr [ESI + 0x28]      ; 0053051e
    SUB EAX,EBX                         ; 00530521
    IMUL dword ptr [ECX + 0x1c00c84]    ; 00530523 | DAT_01c00c84
    MOV dword ptr [0x005bf05c],EBX      ; 00530529 | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 0053052f | DAT_005bf488
    MOV EAX,[0x005bf05c]                ; 00530535 | DAT_005bf05c
    MOV EBX,dword ptr [0x005bf488]      ; 0053053a | DAT_005bf488
    MOV ESI,dword ptr [0x005bf07c]      ; 00530540 | DAT_005bf07c
    MOV ECX,dword ptr [0x005bf014]      ; 00530546 | DAT_005bf014
    MOV dword ptr [ESI],EAX             ; 0053054c
        ;   Label: LAB_0053054c
    ADD EAX,EBX                         ; 0053054e
    ADD ESI,0x4                         ; 00530550
    SUB ECX,0x4                         ; 00530553
    JG 0x0053054c                       ; 00530556
        ;   XREF to: 0053054c (CONDITIONAL_JUMP)  ; LAB_0053054c
    POP EBP                             ; 00530558
    POP EDI                             ; 00530559
    POP ESI                             ; 0053055a
    RET                                 ; 0053055b

