; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0250(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c6902
;   undefined4 DAT_005c690a
;   undefined4 DAT_005c6912
;   undefined4 DAT_005fba60
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d70c34
;
; Called Functions:
;   FUN_0040c840
;   FUN_0048c150
;   FUN_004e04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0250
        ;   Label: FUN_004e0250
    PUSH ESI                            ; 004e0251
    PUSH EDI                            ; 004e0252
    PUSH EBP                            ; 004e0253
    MOV EBP,ESP                         ; 004e0254
    SUB ESP,0xc                         ; 004e0256
    AND ESP,0xfffffff8                  ; 004e0259
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e025c
    CMP dword ptr [EBX + 0x418],0x0     ; 004e025f
    JNZ 0x004e02c6                      ; 004e0266
        ;   XREF to: 004e02c6 (CONDITIONAL_JUMP)  ; LAB_004e02c6
    CMP dword ptr [EBX + 0x40c],0x0     ; 004e0268
        ;   Label: LAB_004e0268
    JNZ 0x004e02bf                      ; 004e026f
        ;   XREF to: 004e02bf (CONDITIONAL_JUMP)  ; LAB_004e02bf
    FLD float ptr [EBX + 0x2dc]         ; 004e0271
    FCOMP double ptr [0x005c690a]       ; 004e0277 | DAT_005c690a
    FNSTSW AX                           ; 004e027d
    SAHF                                ; 004e027f
    JNC 0x004e02a1                      ; 004e0280
        ;   XREF to: 004e02a1 (CONDITIONAL_JUMP)  ; LAB_004e02a1
    CMP byte ptr [EBX + 0x344],0x0      ; 004e0282
    JZ 0x004e02a1                       ; 004e0289
        ;   XREF to: 004e02a1 (CONDITIONAL_JUMP)  ; LAB_004e02a1
    LEA EAX,[EBX + 0x344]               ; 004e028b
    PUSH EAX                            ; 004e0291
    MOV EDI,dword ptr [0x005fba60]      ; 004e0292 | DAT_005fba60
    PUSH EDI                            ; 004e0298
    CALL FUN_0048c150                   ; 004e0299
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004e029e
    FLD float ptr [EBX + 0x2dc]         ; 004e02a1
        ;   Label: LAB_004e02a1
    FCOMP double ptr [0x005c6912]       ; 004e02a7 | DAT_005c6912
    FNSTSW AX                           ; 004e02ad
    SAHF                                ; 004e02af
    JBE 0x004e02bf                      ; 004e02b0
        ;   XREF to: 004e02bf (CONDITIONAL_JUMP)  ; LAB_004e02bf
    CMP byte ptr [EBX + 0x2e0],0x0      ; 004e02b2
    JNZ 0x004e0491                      ; 004e02b9
        ;   XREF to: 004e0491 (CONDITIONAL_JUMP)  ; LAB_004e0491
    MOV ESP,EBP                         ; 004e02bf
        ;   Label: LAB_004e02bf
    POP EBP                             ; 004e02c1
    POP EDI                             ; 004e02c2
    POP ESI                             ; 004e02c3
    POP EBX                             ; 004e02c4
    RET                                 ; 004e02c5
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 004e02c6
        ;   Label: LAB_004e02c6
    MOV dword ptr [ESP],EAX             ; 004e02cc
    FLD float ptr [ESP]                 ; 004e02cf
    FCOMP float ptr [EBX + 0x41c]       ; 004e02d2
    FNSTSW AX                           ; 004e02d8
    SAHF                                ; 004e02da
    JNC 0x004e03c1                      ; 004e02db
        ;   XREF to: 004e03c1 (CONDITIONAL_JUMP)  ; LAB_004e03c1
    FLD float ptr [EBP + 0x18]          ; 004e02e1
    FMUL double ptr [0x005c6902]        ; 004e02e4 | DAT_005c6902
    FADD float ptr [ESP]                ; 004e02ea
    FST float ptr [EBX + 0x2dc]         ; 004e02ed
    FCOMP float ptr [EBX + 0x41c]       ; 004e02f3
    FNSTSW AX                           ; 004e02f9
    SAHF                                ; 004e02fb
    JBE 0x004e0344                      ; 004e02fc
        ;   XREF to: 004e0344 (CONDITIONAL_JUMP)  ; LAB_004e0344
    MOV dword ptr [EBX + 0x418],0x0     ; 004e02fe
    FLD float ptr [EBX + 0x41c]         ; 004e0308
    MOV EDI,dword ptr [EBX + 0x40c]     ; 004e030e
    FSTP float ptr [EBX + 0x2dc]        ; 004e0314
    TEST EDI,EDI                        ; 004e031a
    JZ 0x004e0344                       ; 004e031c
        ;   XREF to: 004e0344 (CONDITIONAL_JUMP)  ; LAB_004e0344
    FLD float ptr [EBX + 0x2dc]         ; 004e031e
    FCOMP double ptr [0x005c6912]       ; 004e0324 | DAT_005c6912
    FNSTSW AX                           ; 004e032a
    SAHF                                ; 004e032c
    JBE 0x004e0344                      ; 004e032d
        ;   XREF to: 004e0344 (CONDITIONAL_JUMP)  ; LAB_004e0344
    LEA EAX,[EBX + 0x2e0]               ; 004e032f
    PUSH EAX                            ; 004e0335
    MOV EAX,[0x005fba60]                ; 004e0336 | DAT_005fba60
    PUSH EAX                            ; 004e033b
    CALL FUN_0048c150                   ; 004e033c
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
        ;   Label: LAB_004e033c
    ADD ESP,0x8                         ; 004e0341
    FLDZ                                ; 004e0344
        ;   Label: LAB_004e0344
    FCOMP float ptr [EBX + 0x2dc]       ; 004e0346
    FNSTSW AX                           ; 004e034c
    SAHF                                ; 004e034e
    JNC 0x004e042e                      ; 004e034f
        ;   XREF to: 004e042e (CONDITIONAL_JUMP)  ; LAB_004e042e
    FLD float ptr [ESP]                 ; 004e0355
    FLDZ                                ; 004e0358
    FCOMPP                              ; 004e035a
    FNSTSW AX                           ; 004e035c
    SAHF                                ; 004e035e
    JC 0x004e042e                       ; 004e035f
        ;   XREF to: 004e042e (CONDITIONAL_JUMP)  ; LAB_004e042e
    LEA EAX,[EBX + 0x3a8]               ; 004e0365
        ;   Label: LAB_004e0365
    PUSH EAX                            ; 004e036b
    MOV ESI,dword ptr [EBX + 0x154]     ; 004e036c
    PUSH EBX                            ; 004e0372
    CALL dword ptr [ESI + 0x2c]         ; 004e0373
    ADD ESP,0x8                         ; 004e0376
    MOV ECX,dword ptr [EBX + 0x410]     ; 004e0379
        ;   Label: LAB_004e0379
    TEST ECX,ECX                        ; 004e037f
    JNZ 0x004e0453                      ; 004e0381
        ;   XREF to: 004e0453 (CONDITIONAL_JUMP)  ; LAB_004e0453
    XOR EDI,EDI                         ; 004e0387
        ;   Label: LAB_004e0387
    XOR ESI,ESI                         ; 004e0389
    MOV EAX,[0x00603b28]                ; 004e038b | DAT_00603b28
        ;   Label: LAB_004e038b
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 004e0390
    JGE 0x004e0268                      ; 004e0396
        ;   XREF to: 004e0268 (CONDITIONAL_JUMP)  ; LAB_004e0268
    MOV ECX,dword ptr [0x01d70c34]      ; 004e039c | DAT_01d70c34
    PUSH ECX                            ; 004e03a2
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 004e03a3
    PUSH EDX                            ; 004e03aa
    CALL FUN_0040c840                   ; 004e03ab
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004e03b0
    TEST EAX,EAX                        ; 004e03b3
    JNZ 0x004e0469                      ; 004e03b5
        ;   XREF to: 004e0469 (CONDITIONAL_JUMP)  ; LAB_004e0469
    INC ESI                             ; 004e03bb
        ;   Label: LAB_004e03bb
    ADD EDI,0x4                         ; 004e03bc
    JMP 0x004e038b                      ; 004e03bf
        ;   XREF to: 004e038b (UNCONDITIONAL_JUMP)  ; LAB_004e038b
    FLD float ptr [EBP + 0x18]          ; 004e03c1
        ;   Label: LAB_004e03c1
    FMUL double ptr [0x005c6902]        ; 004e03c4 | DAT_005c6902
    FSUBR float ptr [ESP]               ; 004e03ca
    FST float ptr [EBX + 0x2dc]         ; 004e03cd
    FCOMP float ptr [EBX + 0x41c]       ; 004e03d3
    FNSTSW AX                           ; 004e03d9
    SAHF                                ; 004e03db
    JNC 0x004e0344                      ; 004e03dc
        ;   XREF to: 004e0344 (CONDITIONAL_JUMP)  ; LAB_004e0344
    MOV dword ptr [EBX + 0x418],0x0     ; 004e03e2
    FLD float ptr [EBX + 0x41c]         ; 004e03ec
    MOV ECX,dword ptr [EBX + 0x40c]     ; 004e03f2
    FSTP float ptr [EBX + 0x2dc]        ; 004e03f8
    TEST ECX,ECX                        ; 004e03fe
    JZ 0x004e0344                       ; 004e0400
        ;   XREF to: 004e0344 (CONDITIONAL_JUMP)  ; LAB_004e0344
    FLD float ptr [EBX + 0x2dc]         ; 004e0406
    FCOMP double ptr [0x005c690a]       ; 004e040c | DAT_005c690a
    FNSTSW AX                           ; 004e0412
    SAHF                                ; 004e0414
    JNC 0x004e0344                      ; 004e0415
        ;   XREF to: 004e0344 (CONDITIONAL_JUMP)  ; LAB_004e0344
    LEA EAX,[EBX + 0x344]               ; 004e041b
    PUSH EAX                            ; 004e0421
    MOV ESI,dword ptr [0x005fba60]      ; 004e0422 | DAT_005fba60
    PUSH ESI                            ; 004e0428
    JMP 0x004e033c                      ; 004e0429
        ;   XREF to: 004e033c (UNCONDITIONAL_JUMP)  ; LAB_004e033c
    CMP dword ptr [EBX + 0x2dc],0x3f800000 ; 004e042e
        ;   Label: LAB_004e042e
    JGE 0x004e0379                      ; 004e0438
        ;   XREF to: 004e0379 (CONDITIONAL_JUMP)  ; LAB_004e0379
    FLD float ptr [ESP]                 ; 004e043e
    FLD1                                ; 004e0441
    FCOMPP                              ; 004e0443
    FNSTSW AX                           ; 004e0445
    SAHF                                ; 004e0447
    JBE 0x004e0365                      ; 004e0448
        ;   XREF to: 004e0365 (CONDITIONAL_JUMP)  ; LAB_004e0365
    JMP 0x004e0379                      ; 004e044e
        ;   XREF to: 004e0379 (UNCONDITIONAL_JUMP)  ; LAB_004e0379
    PUSH 0x0                            ; 004e0453
        ;   Label: LAB_004e0453
    PUSH dword ptr [EBX + 0x2dc]        ; 004e0455
    PUSH ECX                            ; 004e045b
    CALL FUN_004e04b0                   ; 004e045c
        ;   XREF to: 004e04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e04b0()
    ADD ESP,0xc                         ; 004e0461
    JMP 0x004e0387                      ; 004e0464
        ;   XREF to: 004e0387 (UNCONDITIONAL_JUMP)  ; LAB_004e0387
    MOV ECX,dword ptr [EAX + 0x410]     ; 004e0469
        ;   Label: LAB_004e0469
    CMP EBX,ECX                         ; 004e046f
    JNZ 0x004e03bb                      ; 004e0471
        ;   XREF to: 004e03bb (CONDITIONAL_JUMP)  ; LAB_004e03bb
    PUSH 0x0                            ; 004e0477
    PUSH dword ptr [ECX + 0x2dc]        ; 004e0479
    PUSH EAX                            ; 004e047f
    CALL FUN_004e04b0                   ; 004e0480
        ;   XREF to: 004e04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e04b0()
    ADD ESP,0xc                         ; 004e0485
    INC ESI                             ; 004e0488
    ADD EDI,0x4                         ; 004e0489
    JMP 0x004e038b                      ; 004e048c
        ;   XREF to: 004e038b (UNCONDITIONAL_JUMP)  ; LAB_004e038b
    ADD EBX,0x2e0                       ; 004e0491
        ;   Label: LAB_004e0491
    PUSH EBX                            ; 004e0497
    MOV EAX,[0x005fba60]                ; 004e0498 | DAT_005fba60
    PUSH EAX                            ; 004e049d
    CALL FUN_0048c150                   ; 004e049e
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004e04a3
    MOV ESP,EBP                         ; 004e04a6
    POP EBP                             ; 004e04a8
    POP EDI                             ; 004e04a9
    POP ESI                             ; 004e04aa
    POP EBX                             ; 004e04ab
    RET                                 ; 004e04ac

