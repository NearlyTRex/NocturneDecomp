; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dcube_cpp_FUN_0044a150(undefined4 *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* switchdataD_0044a0e8 = 0044a3b5
;   undefined1* PTR_caseD_1_0044a0ec = 0044a736
;   undefined1* PTR_caseD_3_0044a0f4 = 0044a3dc
;   undefined1* switchdataD_0044a0f8 = 0044a457
;   undefined1* PTR_caseD_1_0044a0fc = 0044a7ea
;   undefined1* PTR_caseD_3_0044a104 = 0044a47e
;   undefined1* switchdataD_0044a108 = 0044a4fa
;   undefined1* PTR_caseD_1_0044a10c = 0044a898
;   undefined1* PTR_caseD_3_0044a114 = 0044a521
;   undefined1* switchdataD_0044a118 = 0044a59d
;   undefined1* PTR_caseD_1_0044a11c = 0044a94c
;   undefined1* PTR_caseD_3_0044a124 = 0044a5c4
;   undefined1* switchdataD_0044a128 = 0044a643
;   undefined1* PTR_caseD_1_0044a12c = 0044a9fc
;   undefined1* PTR_caseD_3_0044a134 = 0044a66a
;   ... and 86 more
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a150
        ;   Label: core_dcube.cpp_FUN_0044a150
    PUSH ESI                            ; 0044a151
    PUSH EDI                            ; 0044a152
    PUSH EBP                            ; 0044a153
    MOV EBP,ESP                         ; 0044a154
    SUB ESP,0x1c                        ; 0044a156
    AND ESP,0xfffffff8                  ; 0044a159
    MOV dword ptr [0x014b848c],0x3      ; 0044a15c | DAT_014b848c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044a166
    MOV EDX,dword ptr [EDX]             ; 0044a169
    CMP EDX,0x14b8490                   ; 0044a16b
    JNZ 0x0044a303                      ; 0044a171
        ;   XREF to: 0044a303 (CONDITIONAL_JUMP)  ; LAB_0044a303
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044a177
        ;   Label: LAB_0044a177
    MOV EDX,dword ptr [EDX + 0x4]       ; 0044a17a
    CMP EDX,0x14b849c                   ; 0044a17d
    JZ 0x0044a19e                       ; 0044a183
        ;   XREF to: 0044a19e (CONDITIONAL_JUMP)  ; LAB_0044a19e
    FLD float ptr [EDX]                 ; 0044a185
    FLD float ptr [EDX + 0x8]           ; 0044a187
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a18a
    MOV [0x014b84a0],EAX                ; 0044a18d | DAT_014b84a0
    FSTP float ptr [0x014b84a4]         ; 0044a192 | DAT_014b84a4
    FSTP float ptr [0x014b849c]         ; 0044a198 | DAT_014b849c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044a19e
        ;   Label: LAB_0044a19e
    MOV EDX,dword ptr [EDX + 0x8]       ; 0044a1a1
    CMP EDX,0x14b84a8                   ; 0044a1a4
    JZ 0x0044a1c5                       ; 0044a1aa
        ;   XREF to: 0044a1c5 (CONDITIONAL_JUMP)  ; LAB_0044a1c5
    FLD float ptr [EDX]                 ; 0044a1ac
    FLD float ptr [EDX + 0x8]           ; 0044a1ae
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a1b1
    MOV [0x014b84ac],EAX                ; 0044a1b4 | DAT_014b84ac
    FSTP float ptr [0x014b84b0]         ; 0044a1b9 | DAT_014b84b0
    FSTP float ptr [0x014b84a8]         ; 0044a1bf | DAT_014b84a8
    MOV EDI,0xffffffff                  ; 0044a1c5
        ;   Label: LAB_0044a1c5
    MOV ESI,dword ptr [0x014b848c]      ; 0044a1ca | DAT_014b848c
    XOR ECX,ECX                         ; 0044a1d0
    XOR EBX,EBX                         ; 0044a1d2
    MOV dword ptr [ESP + 0x10],ECX      ; 0044a1d4
    TEST ESI,ESI                        ; 0044a1d8
    JLE 0x0044a26b                      ; 0044a1da
        ;   XREF to: 0044a26b (CONDITIONAL_JUMP)  ; LAB_0044a26b
    MOV ESI,0x14b8490                   ; 0044a1e0
    FLD float ptr [ESI]                 ; 0044a1e5 | DAT_014b8490 | DAT_014b849c
        ;   Label: LAB_0044a1e5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044a1e7
    MOV ECX,ESI                         ; 0044a1ea
    XOR EDX,EDX                         ; 0044a1ec
    FCOMP float ptr [EAX]               ; 0044a1ee
    FNSTSW AX                           ; 0044a1f0
    SAHF                                ; 0044a1f2
    JBE 0x0044a1fa                      ; 0044a1f3
        ;   XREF to: 0044a1fa (CONDITIONAL_JUMP)  ; LAB_0044a1fa
    MOV EDX,0x1                         ; 0044a1f5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044a1fa
        ;   Label: LAB_0044a1fa
    FLD float ptr [ECX + 0x4]           ; 0044a1fd | DAT_014b8494 | DAT_014b84a0
    FCOMP float ptr [EAX + 0x4]         ; 0044a200
    FNSTSW AX                           ; 0044a203
    SAHF                                ; 0044a205
    JBE 0x0044a20b                      ; 0044a206
        ;   XREF to: 0044a20b (CONDITIONAL_JUMP)  ; LAB_0044a20b
    OR DL,0x2                           ; 0044a208
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044a20b
        ;   Label: LAB_0044a20b
    FLD float ptr [ECX + 0x8]           ; 0044a20e | DAT_014b8498 | DAT_014b84a4
    FCOMP float ptr [EAX + 0x8]         ; 0044a211
    FNSTSW AX                           ; 0044a214
    SAHF                                ; 0044a216
    JBE 0x0044a21c                      ; 0044a217
        ;   XREF to: 0044a21c (CONDITIONAL_JUMP)  ; LAB_0044a21c
    OR DL,0x4                           ; 0044a219
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044a21c
        ;   Label: LAB_0044a21c
    FLD float ptr [ECX]                 ; 0044a21f | DAT_014b8490
    FCOMP float ptr [EAX]               ; 0044a221
    FNSTSW AX                           ; 0044a223
    SAHF                                ; 0044a225
    JNC 0x0044a22b                      ; 0044a226
        ;   XREF to: 0044a22b (CONDITIONAL_JUMP)  ; LAB_0044a22b
    OR DL,0x8                           ; 0044a228
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044a22b
        ;   Label: LAB_0044a22b
    FLD float ptr [ECX + 0x4]           ; 0044a22e | DAT_014b8494
    FCOMP float ptr [EAX + 0x4]         ; 0044a231
    FNSTSW AX                           ; 0044a234
    SAHF                                ; 0044a236
    JNC 0x0044a23c                      ; 0044a237
        ;   XREF to: 0044a23c (CONDITIONAL_JUMP)  ; LAB_0044a23c
    OR DL,0x10                          ; 0044a239
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044a23c
        ;   Label: LAB_0044a23c
    FLD float ptr [ECX + 0x8]           ; 0044a23f | DAT_014b8498
    FCOMP float ptr [EAX + 0x8]         ; 0044a242
    FNSTSW AX                           ; 0044a245
    SAHF                                ; 0044a247
    JNC 0x0044a24d                      ; 0044a248
        ;   XREF to: 0044a24d (CONDITIONAL_JUMP)  ; LAB_0044a24d
    OR DL,0x20                          ; 0044a24a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044a24d
        ;   Label: LAB_0044a24d
    ADD ESI,0xc                         ; 0044a251
    INC EBX                             ; 0044a254
    AND EDI,EDX                         ; 0044a255
    OR EAX,EDX                          ; 0044a257
    MOV EDX,dword ptr [0x014b848c]      ; 0044a259 | DAT_014b848c
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a25f
    CMP EBX,EDX                         ; 0044a263
    JL 0x0044a1e5                       ; 0044a265
        ;   XREF to: 0044a1e5 (CONDITIONAL_JUMP)  ; LAB_0044a1e5
    CMP dword ptr [ESP + 0x10],0x0      ; 0044a26b
        ;   Label: LAB_0044a26b
    JNZ 0x0044a321                      ; 0044a270
        ;   XREF to: 0044a321 (CONDITIONAL_JUMP)  ; LAB_0044a321
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044a276
    MOV ESI,0x3                         ; 0044a279
    MOV EDX,dword ptr [EDX]             ; 0044a27e
    MOV dword ptr [0x014b8924],ESI      ; 0044a280 | DAT_014b8924
    CMP EDX,0x14b8928                   ; 0044a286
    JZ 0x0044a2a7                       ; 0044a28c
        ;   XREF to: 0044a2a7 (CONDITIONAL_JUMP)  ; LAB_0044a2a7
    FLD float ptr [EDX]                 ; 0044a28e
    FLD float ptr [EDX + 0x8]           ; 0044a290
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a293
    MOV [0x014b892c],EAX                ; 0044a296 | DAT_014b892c
    FSTP float ptr [0x014b8930]         ; 0044a29b | DAT_014b8930
    FSTP float ptr [0x014b8928]         ; 0044a2a1 | DAT_014b8928
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044a2a7
        ;   Label: LAB_0044a2a7
    MOV EDX,dword ptr [EDX + 0x4]       ; 0044a2aa
    CMP EDX,0x14b8934                   ; 0044a2ad
    JZ 0x0044a2ce                       ; 0044a2b3
        ;   XREF to: 0044a2ce (CONDITIONAL_JUMP)  ; LAB_0044a2ce
    FLD float ptr [EDX]                 ; 0044a2b5
    FLD float ptr [EDX + 0x8]           ; 0044a2b7
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a2ba
    MOV [0x014b8938],EAX                ; 0044a2bd | DAT_014b8938
    FSTP float ptr [0x014b893c]         ; 0044a2c2 | DAT_014b893c
    FSTP float ptr [0x014b8934]         ; 0044a2c8 | DAT_014b8934
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044a2ce
        ;   Label: LAB_0044a2ce
    MOV EDX,dword ptr [EDX + 0x8]       ; 0044a2d1
    CMP EDX,0x14b8940                   ; 0044a2d4
    JZ 0x0044a2f5                       ; 0044a2da
        ;   XREF to: 0044a2f5 (CONDITIONAL_JUMP)  ; LAB_0044a2f5
    FLD float ptr [EDX]                 ; 0044a2dc
    FLD float ptr [EDX + 0x8]           ; 0044a2de
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a2e1
    MOV [0x014b8944],EAX                ; 0044a2e4 | DAT_014b8944
    FSTP float ptr [0x014b8948]         ; 0044a2e9 | DAT_014b8948
    FSTP float ptr [0x014b8940]         ; 0044a2ef | DAT_014b8940
    MOV ECX,0x1                         ; 0044a2f5
        ;   Label: LAB_0044a2f5
    MOV EAX,ECX                         ; 0044a2fa
    MOV ESP,EBP                         ; 0044a2fc
    POP EBP                             ; 0044a2fe
    POP EDI                             ; 0044a2ff
    POP ESI                             ; 0044a300
    POP EBX                             ; 0044a301
    RET                                 ; 0044a302
    FLD float ptr [EDX]                 ; 0044a303
        ;   Label: LAB_0044a303
    FLD float ptr [EDX + 0x8]           ; 0044a305
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a308
    MOV [0x014b8494],EAX                ; 0044a30b | DAT_014b8494
    FSTP float ptr [0x014b8498]         ; 0044a310 | DAT_014b8498
    FSTP float ptr [0x014b8490]         ; 0044a316 | DAT_014b8490
    JMP 0x0044a177                      ; 0044a31c
        ;   XREF to: 0044a177 (UNCONDITIONAL_JUMP)  ; LAB_0044a177
    TEST EDI,EDI                        ; 0044a321
        ;   Label: LAB_0044a321
    JNZ 0x0044a72b                      ; 0044a323
        ;   XREF to: 0044a72b (CONDITIONAL_JUMP)  ; LAB_0044a72b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044a329
    MOV EBX,dword ptr [0x014b848c]      ; 0044a32c | DAT_014b848c
    MOV dword ptr [0x014b8614],EDI      ; 0044a332 | DAT_014b8614
    MOV dword ptr [0x014b86d8],EDI      ; 0044a338 | DAT_014b86d8
    MOV dword ptr [0x014b879c],EDI      ; 0044a33e | DAT_014b879c
    MOV dword ptr [0x014b8860],EDI      ; 0044a344 | DAT_014b8860
    MOV dword ptr [0x014b8924],EDI      ; 0044a34a | DAT_014b8924
    MOV dword ptr [0x014b8550],EDI      ; 0044a350 | DAT_014b8550
    MOV EDX,dword ptr [EDX + 0x4]       ; 0044a356
    XOR ESI,ESI                         ; 0044a359
    MOV dword ptr [ESP + 0x14],EDX      ; 0044a35b
    TEST EBX,EBX                        ; 0044a35f
    JLE 0x0044a3ea                      ; 0044a361
        ;   XREF to: 0044a3ea (CONDITIONAL_JUMP)  ; LAB_0044a3ea
    MOV EBX,0x14b8490                   ; 0044a367
    MOV EDI,dword ptr [0x014b848c]      ; 0044a36c | DAT_014b848c
        ;   Label: LAB_0044a36c
    LEA ECX,[ESI + 0x1]                 ; 0044a372
    CMP ECX,EDI                         ; 0044a375
    JNZ 0x0044a37b                      ; 0044a377
        ;   XREF to: 0044a37b (CONDITIONAL_JUMP)  ; LAB_0044a37b
    XOR ECX,EDI                         ; 0044a379
    IMUL ECX,ECX,0xc                    ; 0044a37b
        ;   Label: LAB_0044a37b
    FLD float ptr [EBX + 0x4]           ; 0044a37e | DAT_014b8494 | DAT_014b84a0
    MOV EDI,0x14b8490                   ; 0044a381
    MOV EDX,EBX                         ; 0044a386
    ADD EDI,ECX                         ; 0044a388
    XOR ECX,ECX                         ; 0044a38a
    FCOMP float ptr [ESP + 0x14]        ; 0044a38c
    FNSTSW AX                           ; 0044a390
    SAHF                                ; 0044a392
    JBE 0x0044a39a                      ; 0044a393
        ;   XREF to: 0044a39a (CONDITIONAL_JUMP)  ; LAB_0044a39a
    MOV ECX,0x1                         ; 0044a395
    FLD float ptr [EDI + 0x4]           ; 0044a39a | DAT_014b8494 | DAT_014b84a0 | DAT_014b84ac
        ;   Label: LAB_0044a39a
    FCOMP float ptr [ESP + 0x14]        ; 0044a39d
    FNSTSW AX                           ; 0044a3a1
    SAHF                                ; 0044a3a3
    JBE 0x0044a3a9                      ; 0044a3a4
        ;   XREF to: 0044a3a9 (CONDITIONAL_JUMP)  ; LAB_0044a3a9
    OR CL,0x2                           ; 0044a3a6
    CMP ECX,0x3                         ; 0044a3a9
        ;   Label: LAB_0044a3a9
    JA 0x0044a3dc                       ; 0044a3ac
        ;   XREF to: 0044a3dc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x44a0e8]  ; 0044a3ae | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x014b8550],0xc ; 0044a3b5 | DAT_014b8550
        ;   Label: caseD_0
    ADD ECX,0x14b8554                   ; 0044a3bc
    CMP ECX,EDX                         ; 0044a3c2
    JZ 0x0044a3d6                       ; 0044a3c4
        ;   XREF to: 0044a3d6 (CONDITIONAL_JUMP)  ; LAB_0044a3d6
    MOV EAX,dword ptr [EDX]             ; 0044a3c6 | DAT_014b8490 | DAT_014b849c
    MOV dword ptr [ECX],EAX             ; 0044a3c8 | DAT_014b8554 | DAT_014b8848
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a3ca | DAT_014b8494 | DAT_014b84a0
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a3cd | DAT_014b8558 | DAT_014b884c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a3d0 | DAT_014b8498 | DAT_014b84a4
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a3d3 | DAT_014b855c | DAT_014b8850
    INC dword ptr [0x014b8550]          ; 0044a3d6 | DAT_014b8550
        ;   Label: LAB_0044a3d6
    MOV EDI,dword ptr [0x014b848c]      ; 0044a3dc | DAT_014b848c
        ;   Label: caseD_3
    INC ESI                             ; 0044a3e2
    ADD EBX,0xc                         ; 0044a3e3
    CMP ESI,EDI                         ; 0044a3e6
    JL 0x0044a36c                       ; 0044a3e8
        ;   XREF to: 0044a36c (CONDITIONAL_JUMP)  ; LAB_0044a36c
    MOV EAX,[0x014b8550]                ; 0044a3ea | DAT_014b8550
        ;   Label: LAB_0044a3ea
    CMP EAX,0x3                         ; 0044a3ef
    JL 0x0044a72b                       ; 0044a3f2
        ;   XREF to: 0044a72b (CONDITIONAL_JUMP)  ; LAB_0044a72b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044a3f8
    MOV EDX,dword ptr [EDX + 0x4]       ; 0044a3fb
    XOR ESI,ESI                         ; 0044a3fe
    MOV dword ptr [ESP],EDX             ; 0044a400
    TEST EAX,EAX                        ; 0044a403
    JLE 0x0044a48c                      ; 0044a405
        ;   XREF to: 0044a48c (CONDITIONAL_JUMP)  ; LAB_0044a48c
    MOV EBX,0x14b8554                   ; 0044a40b
    MOV EDI,dword ptr [0x014b8550]      ; 0044a410 | DAT_014b8550
        ;   Label: LAB_0044a410
    LEA ECX,[ESI + 0x1]                 ; 0044a416
    CMP ECX,EDI                         ; 0044a419
    JNZ 0x0044a41f                      ; 0044a41b
        ;   XREF to: 0044a41f (CONDITIONAL_JUMP)  ; LAB_0044a41f
    XOR ECX,EDI                         ; 0044a41d
    IMUL ECX,ECX,0xc                    ; 0044a41f
        ;   Label: LAB_0044a41f
    FLD float ptr [EBX + 0x4]           ; 0044a422 | DAT_014b8558 | DAT_014b8564
    MOV EDI,0x14b8554                   ; 0044a425
    MOV EDX,EBX                         ; 0044a42a
    ADD EDI,ECX                         ; 0044a42c
    XOR ECX,ECX                         ; 0044a42e
    FCOMP float ptr [ESP]               ; 0044a430
    FNSTSW AX                           ; 0044a433
    SAHF                                ; 0044a435
    JNC 0x0044a43d                      ; 0044a436
        ;   XREF to: 0044a43d (CONDITIONAL_JUMP)  ; LAB_0044a43d
    MOV ECX,0x1                         ; 0044a438
    FLD float ptr [EDI + 0x4]           ; 0044a43d | DAT_014b8558 | DAT_014b8570 | DAT_014b8564
        ;   Label: LAB_0044a43d
    FCOMP float ptr [ESP]               ; 0044a440
    FNSTSW AX                           ; 0044a443
    SAHF                                ; 0044a445
    JNC 0x0044a44b                      ; 0044a446
        ;   XREF to: 0044a44b (CONDITIONAL_JUMP)  ; LAB_0044a44b
    OR CL,0x2                           ; 0044a448
    CMP ECX,0x3                         ; 0044a44b
        ;   Label: LAB_0044a44b
    JA 0x0044a47e                       ; 0044a44e
        ;   XREF to: 0044a47e (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x44a0f8]  ; 0044a450 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x014b8614],0xc ; 0044a457 | DAT_014b8614
        ;   Label: caseD_0
    ADD ECX,0x14b8618                   ; 0044a45e
    CMP ECX,EDX                         ; 0044a464
    JZ 0x0044a478                       ; 0044a466
        ;   XREF to: 0044a478 (CONDITIONAL_JUMP)  ; LAB_0044a478
    MOV EAX,dword ptr [EDX]             ; 0044a468 | DAT_014b8554 | DAT_014b8560
    MOV dword ptr [ECX],EAX             ; 0044a46a | DAT_014b8618 | DAT_014b890c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a46c | DAT_014b8558 | DAT_014b8564
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a46f | DAT_014b861c | DAT_014b8910
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a472 | DAT_014b855c | DAT_014b8568
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a475 | DAT_014b8620 | DAT_014b8914
    INC dword ptr [0x014b8614]          ; 0044a478 | DAT_014b8614
        ;   Label: LAB_0044a478
    MOV EDX,dword ptr [0x014b8550]      ; 0044a47e | DAT_014b8550
        ;   Label: caseD_3
    INC ESI                             ; 0044a484
    ADD EBX,0xc                         ; 0044a485
    CMP ESI,EDX                         ; 0044a488
    JL 0x0044a410                       ; 0044a48a
        ;   XREF to: 0044a410 (CONDITIONAL_JUMP)  ; LAB_0044a410
    MOV ECX,dword ptr [0x014b8614]      ; 0044a48c | DAT_014b8614
        ;   Label: LAB_0044a48c
    CMP ECX,0x3                         ; 0044a492
    JL 0x0044a72b                       ; 0044a495
        ;   XREF to: 0044a72b (CONDITIONAL_JUMP)  ; LAB_0044a72b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044a49b
    MOV EDX,dword ptr [EDX]             ; 0044a49e
    XOR EBX,EBX                         ; 0044a4a0
    MOV dword ptr [ESP + 0x18],EDX      ; 0044a4a2
    TEST ECX,ECX                        ; 0044a4a6
    JLE 0x0044a52f                      ; 0044a4a8
        ;   XREF to: 0044a52f (CONDITIONAL_JUMP)  ; LAB_0044a52f
    MOV ESI,0x14b8618                   ; 0044a4ae
    MOV EDI,dword ptr [0x014b8614]      ; 0044a4b3 | DAT_014b8614
        ;   Label: LAB_0044a4b3
    LEA ECX,[EBX + 0x1]                 ; 0044a4b9
    CMP ECX,EDI                         ; 0044a4bc
    JNZ 0x0044a4c2                      ; 0044a4be
        ;   XREF to: 0044a4c2 (CONDITIONAL_JUMP)  ; LAB_0044a4c2
    XOR ECX,EDI                         ; 0044a4c0
    IMUL ECX,ECX,0xc                    ; 0044a4c2
        ;   Label: LAB_0044a4c2
    FLD float ptr [ESI]                 ; 0044a4c5 | DAT_014b8618 | DAT_014b8624
    MOV EDI,0x14b8618                   ; 0044a4c7
    MOV EDX,ESI                         ; 0044a4cc
    ADD EDI,ECX                         ; 0044a4ce
    XOR ECX,ECX                         ; 0044a4d0
    FCOMP float ptr [ESP + 0x18]        ; 0044a4d2
    FNSTSW AX                           ; 0044a4d6
    SAHF                                ; 0044a4d8
    JBE 0x0044a4e0                      ; 0044a4d9
        ;   XREF to: 0044a4e0 (CONDITIONAL_JUMP)  ; LAB_0044a4e0
    MOV ECX,0x1                         ; 0044a4db
    FLD float ptr [EDI]                 ; 0044a4e0 | DAT_014b8618 | DAT_014b8630 | DAT_014b8624
        ;   Label: LAB_0044a4e0
    FCOMP float ptr [ESP + 0x18]        ; 0044a4e2
    FNSTSW AX                           ; 0044a4e6
    SAHF                                ; 0044a4e8
    JBE 0x0044a4ee                      ; 0044a4e9
        ;   XREF to: 0044a4ee (CONDITIONAL_JUMP)  ; LAB_0044a4ee
    OR CL,0x2                           ; 0044a4eb
    CMP ECX,0x3                         ; 0044a4ee
        ;   Label: LAB_0044a4ee
    JA 0x0044a521                       ; 0044a4f1
        ;   XREF to: 0044a521 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x44a108]  ; 0044a4f3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x014b86d8],0xc ; 0044a4fa | DAT_014b86d8
        ;   Label: caseD_0
    ADD ECX,0x14b86dc                   ; 0044a501
    CMP ECX,EDX                         ; 0044a507
    JZ 0x0044a51b                       ; 0044a509
        ;   XREF to: 0044a51b (CONDITIONAL_JUMP)  ; LAB_0044a51b
    MOV EAX,dword ptr [EDX]             ; 0044a50b | DAT_014b8618 | DAT_014b8624
    MOV dword ptr [ECX],EAX             ; 0044a50d | DAT_014b86dc | DAT_014b89d0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a50f | DAT_014b861c | DAT_014b8628
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a512 | DAT_014b86e0 | DAT_014b89d4
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a515 | DAT_014b8620 | DAT_014b862c
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a518 | DAT_014b86e4 | DAT_014b89d8
    INC dword ptr [0x014b86d8]          ; 0044a51b | DAT_014b86d8
        ;   Label: LAB_0044a51b
    MOV EDX,dword ptr [0x014b8614]      ; 0044a521 | DAT_014b8614
        ;   Label: caseD_3
    INC EBX                             ; 0044a527
    ADD ESI,0xc                         ; 0044a528
    CMP EBX,EDX                         ; 0044a52b
    JL 0x0044a4b3                       ; 0044a52d
        ;   XREF to: 0044a4b3 (CONDITIONAL_JUMP)  ; LAB_0044a4b3
    MOV ECX,dword ptr [0x014b86d8]      ; 0044a52f | DAT_014b86d8
        ;   Label: LAB_0044a52f
    CMP ECX,0x3                         ; 0044a535
    JL 0x0044a72b                       ; 0044a538
        ;   XREF to: 0044a72b (CONDITIONAL_JUMP)  ; LAB_0044a72b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044a53e
    MOV EDX,dword ptr [EDX]             ; 0044a541
    XOR EBX,EBX                         ; 0044a543
    MOV dword ptr [ESP + 0x4],EDX       ; 0044a545
    TEST ECX,ECX                        ; 0044a549
    JLE 0x0044a5d2                      ; 0044a54b
        ;   XREF to: 0044a5d2 (CONDITIONAL_JUMP)  ; LAB_0044a5d2
    MOV ESI,0x14b86dc                   ; 0044a551
    MOV EDI,dword ptr [0x014b86d8]      ; 0044a556 | DAT_014b86d8
        ;   Label: LAB_0044a556
    LEA ECX,[EBX + 0x1]                 ; 0044a55c
    CMP ECX,EDI                         ; 0044a55f
    JNZ 0x0044a565                      ; 0044a561
        ;   XREF to: 0044a565 (CONDITIONAL_JUMP)  ; LAB_0044a565
    XOR ECX,EDI                         ; 0044a563
    IMUL ECX,ECX,0xc                    ; 0044a565
        ;   Label: LAB_0044a565
    FLD float ptr [ESI]                 ; 0044a568 | DAT_014b86dc | DAT_014b86e8
    MOV EDI,0x14b86dc                   ; 0044a56a
    MOV EDX,ESI                         ; 0044a56f
    ADD EDI,ECX                         ; 0044a571
    XOR ECX,ECX                         ; 0044a573
    FCOMP float ptr [ESP + 0x4]         ; 0044a575
    FNSTSW AX                           ; 0044a579
    SAHF                                ; 0044a57b
    JNC 0x0044a583                      ; 0044a57c
        ;   XREF to: 0044a583 (CONDITIONAL_JUMP)  ; LAB_0044a583
    MOV ECX,0x1                         ; 0044a57e
    FLD float ptr [EDI]                 ; 0044a583 | DAT_014b86dc | DAT_014b86f4 | DAT_014b86e8
        ;   Label: LAB_0044a583
    FCOMP float ptr [ESP + 0x4]         ; 0044a585
    FNSTSW AX                           ; 0044a589
    SAHF                                ; 0044a58b
    JNC 0x0044a591                      ; 0044a58c
        ;   XREF to: 0044a591 (CONDITIONAL_JUMP)  ; LAB_0044a591
    OR CL,0x2                           ; 0044a58e
    CMP ECX,0x3                         ; 0044a591
        ;   Label: LAB_0044a591
    JA 0x0044a5c4                       ; 0044a594
        ;   XREF to: 0044a5c4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x44a118]  ; 0044a596 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x014b879c],0xc ; 0044a59d | DAT_014b879c
        ;   Label: caseD_0
    ADD ECX,0x14b87a0                   ; 0044a5a4
    CMP ECX,EDX                         ; 0044a5aa
    JZ 0x0044a5be                       ; 0044a5ac
        ;   XREF to: 0044a5be (CONDITIONAL_JUMP)  ; LAB_0044a5be
    MOV EAX,dword ptr [EDX]             ; 0044a5ae | DAT_014b86dc | DAT_014b86e8
    MOV dword ptr [ECX],EAX             ; 0044a5b0 | DAT_014b87a0 | DAT_014b8a94
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a5b2 | DAT_014b86e0 | DAT_014b86ec
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a5b5 | DAT_014b87a4 | DAT_014b8a98
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a5b8 | DAT_014b86e4 | DAT_014b86f0
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a5bb | DAT_014b87a8 | DAT_014b8a9c
    INC dword ptr [0x014b879c]          ; 0044a5be | DAT_014b879c
        ;   Label: LAB_0044a5be
    MOV EDX,dword ptr [0x014b86d8]      ; 0044a5c4 | DAT_014b86d8
        ;   Label: caseD_3
    INC EBX                             ; 0044a5ca
    ADD ESI,0xc                         ; 0044a5cb
    CMP EBX,EDX                         ; 0044a5ce
    JL 0x0044a556                       ; 0044a5d0
        ;   XREF to: 0044a556 (CONDITIONAL_JUMP)  ; LAB_0044a556
    MOV ECX,dword ptr [0x014b879c]      ; 0044a5d2 | DAT_014b879c
        ;   Label: LAB_0044a5d2
    CMP ECX,0x3                         ; 0044a5d8
    JL 0x0044a72b                       ; 0044a5db
        ;   XREF to: 0044a72b (CONDITIONAL_JUMP)  ; LAB_0044a72b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044a5e1
    MOV EDX,dword ptr [EDX + 0x8]       ; 0044a5e4
    XOR EBX,EBX                         ; 0044a5e7
    MOV dword ptr [ESP + 0x8],EDX       ; 0044a5e9
    TEST ECX,ECX                        ; 0044a5ed
    JLE 0x0044a678                      ; 0044a5ef
        ;   XREF to: 0044a678 (CONDITIONAL_JUMP)  ; LAB_0044a678
    MOV ESI,0x14b87a0                   ; 0044a5f5
    MOV EDI,dword ptr [0x014b879c]      ; 0044a5fa | DAT_014b879c
        ;   Label: LAB_0044a5fa
    LEA ECX,[EBX + 0x1]                 ; 0044a600
    CMP ECX,EDI                         ; 0044a603
    JNZ 0x0044a609                      ; 0044a605
        ;   XREF to: 0044a609 (CONDITIONAL_JUMP)  ; LAB_0044a609
    XOR ECX,EDI                         ; 0044a607
    IMUL ECX,ECX,0xc                    ; 0044a609
        ;   Label: LAB_0044a609
    FLD float ptr [ESI + 0x8]           ; 0044a60c | DAT_014b87a8 | DAT_014b87b4
    MOV EDI,0x14b87a0                   ; 0044a60f
    MOV EDX,ESI                         ; 0044a614
    ADD EDI,ECX                         ; 0044a616
    XOR ECX,ECX                         ; 0044a618
    FCOMP float ptr [ESP + 0x8]         ; 0044a61a
    FNSTSW AX                           ; 0044a61e
    SAHF                                ; 0044a620
    JNC 0x0044a628                      ; 0044a621
        ;   XREF to: 0044a628 (CONDITIONAL_JUMP)  ; LAB_0044a628
    MOV ECX,0x1                         ; 0044a623
    FLD float ptr [EDI + 0x8]           ; 0044a628 | DAT_014b87a8 | DAT_014b87c0 | DAT_014b87b4
        ;   Label: LAB_0044a628
    FCOMP float ptr [ESP + 0x8]         ; 0044a62b
    FNSTSW AX                           ; 0044a62f
    SAHF                                ; 0044a631
    JNC 0x0044a637                      ; 0044a632
        ;   XREF to: 0044a637 (CONDITIONAL_JUMP)  ; LAB_0044a637
    OR CL,0x2                           ; 0044a634
    CMP ECX,0x3                         ; 0044a637
        ;   Label: LAB_0044a637
    JA 0x0044a66a                       ; 0044a63a
        ;   XREF to: 0044a66a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x44a128]  ; 0044a63c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x014b8860],0xc ; 0044a643 | DAT_014b8860
        ;   Label: caseD_0
    ADD ECX,0x14b8864                   ; 0044a64a
    CMP ECX,EDX                         ; 0044a650
    JZ 0x0044a664                       ; 0044a652
        ;   XREF to: 0044a664 (CONDITIONAL_JUMP)  ; LAB_0044a664
    MOV EAX,dword ptr [EDX]             ; 0044a654 | DAT_014b87a0 | DAT_014b87ac
    MOV dword ptr [ECX],EAX             ; 0044a656 | DAT_014b8864 | DAT_014b8b58
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a658 | DAT_014b87a4 | DAT_014b87b0
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a65b | DAT_014b8868 | DAT_014b8b5c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a65e | DAT_014b87a8 | DAT_014b87b4
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a661 | DAT_014b886c | DAT_014b8b60
    INC dword ptr [0x014b8860]          ; 0044a664 | DAT_014b8860
        ;   Label: LAB_0044a664
    MOV EDX,dword ptr [0x014b879c]      ; 0044a66a | DAT_014b879c
        ;   Label: caseD_3
    INC EBX                             ; 0044a670
    ADD ESI,0xc                         ; 0044a671
    CMP EBX,EDX                         ; 0044a674
    JL 0x0044a5fa                       ; 0044a676
        ;   XREF to: 0044a5fa (CONDITIONAL_JUMP)  ; LAB_0044a5fa
    MOV ECX,dword ptr [0x014b8860]      ; 0044a678 | DAT_014b8860
        ;   Label: LAB_0044a678
    CMP ECX,0x3                         ; 0044a67e
    JL 0x0044a72b                       ; 0044a681
        ;   XREF to: 0044a72b (CONDITIONAL_JUMP)  ; LAB_0044a72b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044a687
    MOV EDX,dword ptr [EDX + 0x8]       ; 0044a68a
    XOR ESI,ESI                         ; 0044a68d
    MOV dword ptr [ESP + 0xc],EDX       ; 0044a68f
    TEST ECX,ECX                        ; 0044a693
    JLE 0x0044a71e                      ; 0044a695
        ;   XREF to: 0044a71e (CONDITIONAL_JUMP)  ; LAB_0044a71e
    MOV EBX,0x14b8864                   ; 0044a69b
    MOV EDI,dword ptr [0x014b8860]      ; 0044a6a0 | DAT_014b8860
        ;   Label: LAB_0044a6a0
    LEA ECX,[ESI + 0x1]                 ; 0044a6a6
    CMP ECX,EDI                         ; 0044a6a9
    JNZ 0x0044a6af                      ; 0044a6ab
        ;   XREF to: 0044a6af (CONDITIONAL_JUMP)  ; LAB_0044a6af
    XOR ECX,EDI                         ; 0044a6ad
    IMUL ECX,ECX,0xc                    ; 0044a6af
        ;   Label: LAB_0044a6af
    FLD float ptr [EBX + 0x8]           ; 0044a6b2 | DAT_014b886c | DAT_014b8878
    MOV EDI,0x14b8864                   ; 0044a6b5
    MOV EDX,EBX                         ; 0044a6ba
    ADD EDI,ECX                         ; 0044a6bc
    XOR ECX,ECX                         ; 0044a6be
    FCOMP float ptr [ESP + 0xc]         ; 0044a6c0
    FNSTSW AX                           ; 0044a6c4
    SAHF                                ; 0044a6c6
    JBE 0x0044a6ce                      ; 0044a6c7
        ;   XREF to: 0044a6ce (CONDITIONAL_JUMP)  ; LAB_0044a6ce
    MOV ECX,0x1                         ; 0044a6c9
    FLD float ptr [EDI + 0x8]           ; 0044a6ce | DAT_014b886c | DAT_014b8884 | DAT_014b8878
        ;   Label: LAB_0044a6ce
    FCOMP float ptr [ESP + 0xc]         ; 0044a6d1
    FNSTSW AX                           ; 0044a6d5
    SAHF                                ; 0044a6d7
    JBE 0x0044a6dd                      ; 0044a6d8
        ;   XREF to: 0044a6dd (CONDITIONAL_JUMP)  ; LAB_0044a6dd
    OR CL,0x2                           ; 0044a6da
    CMP ECX,0x3                         ; 0044a6dd
        ;   Label: LAB_0044a6dd
    JA 0x0044a710                       ; 0044a6e0
        ;   XREF to: 0044a710 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x44a138]  ; 0044a6e2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x014b8924],0xc ; 0044a6e9 | DAT_014b8924
        ;   Label: caseD_0
    ADD ECX,0x14b8928                   ; 0044a6f0
    CMP ECX,EDX                         ; 0044a6f6
    JZ 0x0044a70a                       ; 0044a6f8
        ;   XREF to: 0044a70a (CONDITIONAL_JUMP)  ; LAB_0044a70a
    MOV EAX,dword ptr [EDX]             ; 0044a6fa | DAT_014b8864 | DAT_014b8870
    MOV dword ptr [ECX],EAX             ; 0044a6fc | DAT_014b8c1c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a6fe | DAT_014b8868 | DAT_014b8874
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a701 | DAT_014b8c20
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a704 | DAT_014b886c | DAT_014b8878
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a707 | DAT_014b8c24
    INC dword ptr [0x014b8924]          ; 0044a70a | DAT_014b8924
        ;   Label: LAB_0044a70a
    MOV EDX,dword ptr [0x014b8860]      ; 0044a710 | DAT_014b8860
        ;   Label: caseD_3
    INC ESI                             ; 0044a716
    ADD EBX,0xc                         ; 0044a717
    CMP ESI,EDX                         ; 0044a71a
    JL 0x0044a6a0                       ; 0044a71c
        ;   XREF to: 0044a6a0 (CONDITIONAL_JUMP)  ; LAB_0044a6a0
    CMP dword ptr [0x014b8924],0x3      ; 0044a71e | DAT_014b8924
        ;   Label: LAB_0044a71e
    JGE 0x0044a2f5                      ; 0044a725
        ;   XREF to: 0044a2f5 (CONDITIONAL_JUMP)  ; LAB_0044a2f5
    XOR ECX,ECX                         ; 0044a72b
        ;   Label: LAB_0044a72b
    MOV EAX,ECX                         ; 0044a72d
    MOV ESP,EBP                         ; 0044a72f
    POP EBP                             ; 0044a731
    POP EDI                             ; 0044a732
    POP ESI                             ; 0044a733
    POP EBX                             ; 0044a734
    RET                                 ; 0044a735
    IMUL ECX,dword ptr [0x014b8550],0xc ; 0044a736 | DAT_014b8550
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 0044a73d
    SUB ESP,0x8                         ; 0044a741
    FCHS                                ; 0044a744
    FSTP double ptr [ESP]               ; 0044a746
    PUSH 0x0                            ; 0044a749
    PUSH 0x0                            ; 0044a74b
    PUSH 0x3ff00000                     ; 0044a74d
    PUSH 0x0                            ; 0044a752
    PUSH 0x0                            ; 0044a754
    PUSH 0x0                            ; 0044a756
    ADD ECX,0x14b8554                   ; 0044a758
    PUSH ECX                            ; 0044a75e | DAT_014b8848
    PUSH EDX                            ; 0044a75f | DAT_014b8490 | DAT_014b849c
    PUSH EDI                            ; 0044a760 | DAT_014b849c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a761
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8550]      ; 0044a766 | DAT_014b8550
    INC EDX                             ; 0044a76c
    ADD ESP,0x2c                        ; 0044a76d
    MOV dword ptr [0x014b8550],EDX      ; 0044a770 | DAT_014b8550
    JMP 0x0044a3dc                      ; 0044a776
        ;   XREF to: 0044a3dc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8550],0xc ; 0044a77b | DAT_014b8550
        ;   Label: caseD_2
    ADD ECX,0x14b8554                   ; 0044a782
    CMP ECX,EDX                         ; 0044a788
    JZ 0x0044a79c                       ; 0044a78a
        ;   XREF to: 0044a79c (CONDITIONAL_JUMP)  ; LAB_0044a79c
    MOV EAX,dword ptr [EDX]             ; 0044a78c | DAT_014b849c | DAT_014b8490
    MOV dword ptr [ECX],EAX             ; 0044a78e | DAT_014b8554 | DAT_014b8848
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a790 | DAT_014b84a0 | DAT_014b8494
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a793 | DAT_014b8558 | DAT_014b884c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a796 | DAT_014b84a4 | DAT_014b8498
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a799 | DAT_014b855c | DAT_014b8850
    MOV ECX,dword ptr [0x014b8550]      ; 0044a79c | DAT_014b8550
        ;   Label: LAB_0044a79c
    INC ECX                             ; 0044a7a2
    MOV dword ptr [0x014b8550],ECX      ; 0044a7a3 | DAT_014b8550
    IMUL ECX,ECX,0xc                    ; 0044a7a9
    FLD float ptr [ESP + 0x14]          ; 0044a7ac
    SUB ESP,0x8                         ; 0044a7b0
    FCHS                                ; 0044a7b3
    FSTP double ptr [ESP]               ; 0044a7b5
    PUSH 0x0                            ; 0044a7b8
    PUSH 0x0                            ; 0044a7ba
    PUSH 0x3ff00000                     ; 0044a7bc
    PUSH 0x0                            ; 0044a7c1
    PUSH 0x0                            ; 0044a7c3
    PUSH 0x0                            ; 0044a7c5
    ADD ECX,0x14b8554                   ; 0044a7c7
    PUSH ECX                            ; 0044a7cd
    PUSH EDI                            ; 0044a7ce | DAT_014b849c
    PUSH EDX                            ; 0044a7cf | DAT_014b849c | DAT_014b8490
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a7d0
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8550]      ; 0044a7d5 | DAT_014b8550
    INC EDX                             ; 0044a7db
    ADD ESP,0x2c                        ; 0044a7dc
    MOV dword ptr [0x014b8550],EDX      ; 0044a7df | DAT_014b8550
    JMP 0x0044a3dc                      ; 0044a7e5
        ;   XREF to: 0044a3dc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8614],0xc ; 0044a7ea | DAT_014b8614
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0044a7f1
    SUB ESP,0x8                         ; 0044a7f4
    FSTP double ptr [ESP]               ; 0044a7f7
    PUSH 0x0                            ; 0044a7fa
    PUSH 0x0                            ; 0044a7fc
    PUSH 0xbff00000                     ; 0044a7fe
    PUSH 0x0                            ; 0044a803
    PUSH 0x0                            ; 0044a805
    PUSH 0x0                            ; 0044a807
    ADD ECX,0x14b8618                   ; 0044a809
    PUSH ECX                            ; 0044a80f | DAT_014b890c
    PUSH EDX                            ; 0044a810 | DAT_014b8554 | DAT_014b8560
    PUSH EDI                            ; 0044a811 | DAT_014b8878
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a812
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8614]      ; 0044a817 | DAT_014b8614
    INC EDX                             ; 0044a81d
    ADD ESP,0x2c                        ; 0044a81e
    MOV dword ptr [0x014b8614],EDX      ; 0044a821 | DAT_014b8614
    JMP 0x0044a47e                      ; 0044a827
        ;   XREF to: 0044a47e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8614],0xc ; 0044a82c | DAT_014b8614
        ;   Label: caseD_2
    ADD ECX,0x14b8618                   ; 0044a833
    CMP ECX,EDX                         ; 0044a839
    JZ 0x0044a84d                       ; 0044a83b
        ;   XREF to: 0044a84d (CONDITIONAL_JUMP)  ; LAB_0044a84d
    MOV EAX,dword ptr [EDX]             ; 0044a83d | DAT_014b8554 | DAT_014b8560
    MOV dword ptr [ECX],EAX             ; 0044a83f | DAT_014b8618 | DAT_014b890c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a841 | DAT_014b8558 | DAT_014b8564
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a844 | DAT_014b861c | DAT_014b8910
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a847 | DAT_014b855c | DAT_014b8568
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a84a | DAT_014b8620 | DAT_014b8914
    MOV ECX,dword ptr [0x014b8614]      ; 0044a84d | DAT_014b8614
        ;   Label: LAB_0044a84d
    INC ECX                             ; 0044a853
    MOV dword ptr [0x014b8614],ECX      ; 0044a854 | DAT_014b8614
    IMUL ECX,ECX,0xc                    ; 0044a85a
    FLD float ptr [ESP]                 ; 0044a85d
    SUB ESP,0x8                         ; 0044a860
    FSTP double ptr [ESP]               ; 0044a863
    PUSH 0x0                            ; 0044a866
    PUSH 0x0                            ; 0044a868
    PUSH 0xbff00000                     ; 0044a86a
    PUSH 0x0                            ; 0044a86f
    PUSH 0x0                            ; 0044a871
    PUSH 0x0                            ; 0044a873
    ADD ECX,0x14b8618                   ; 0044a875
    PUSH ECX                            ; 0044a87b
    PUSH EDI                            ; 0044a87c | DAT_014b8878
    PUSH EDX                            ; 0044a87d | DAT_014b8554 | DAT_014b8560
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a87e
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8614]      ; 0044a883 | DAT_014b8614
    INC EDX                             ; 0044a889
    ADD ESP,0x2c                        ; 0044a88a
    MOV dword ptr [0x014b8614],EDX      ; 0044a88d | DAT_014b8614
    JMP 0x0044a47e                      ; 0044a893
        ;   XREF to: 0044a47e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b86d8],0xc ; 0044a898 | DAT_014b86d8
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0044a89f
    SUB ESP,0x8                         ; 0044a8a3
    FCHS                                ; 0044a8a6
    FSTP double ptr [ESP]               ; 0044a8a8
    PUSH 0x0                            ; 0044a8ab
    PUSH 0x0                            ; 0044a8ad
    PUSH 0x0                            ; 0044a8af
    PUSH 0x0                            ; 0044a8b1
    PUSH 0x3ff00000                     ; 0044a8b3
    PUSH 0x0                            ; 0044a8b8
    ADD ECX,0x14b86dc                   ; 0044a8ba
    PUSH ECX                            ; 0044a8c0 | DAT_014b89d0
    PUSH EDX                            ; 0044a8c1 | DAT_014b8618 | DAT_014b8624
    PUSH EDI                            ; 0044a8c2 | DAT_014b893c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a8c3
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b86d8]      ; 0044a8c8 | DAT_014b86d8
    INC EDX                             ; 0044a8ce
    ADD ESP,0x2c                        ; 0044a8cf
    MOV dword ptr [0x014b86d8],EDX      ; 0044a8d2 | DAT_014b86d8
    JMP 0x0044a521                      ; 0044a8d8
        ;   XREF to: 0044a521 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b86d8],0xc ; 0044a8dd | DAT_014b86d8
        ;   Label: caseD_2
    ADD ECX,0x14b86dc                   ; 0044a8e4
    CMP ECX,EDX                         ; 0044a8ea
    JZ 0x0044a8fe                       ; 0044a8ec
        ;   XREF to: 0044a8fe (CONDITIONAL_JUMP)  ; LAB_0044a8fe
    MOV EAX,dword ptr [EDX]             ; 0044a8ee | DAT_014b8618 | DAT_014b8624
    MOV dword ptr [ECX],EAX             ; 0044a8f0 | DAT_014b86dc | DAT_014b89d0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a8f2 | DAT_014b861c | DAT_014b8628
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a8f5 | DAT_014b86e0 | DAT_014b89d4
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a8f8 | DAT_014b8620 | DAT_014b862c
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a8fb | DAT_014b86e4 | DAT_014b89d8
    MOV ECX,dword ptr [0x014b86d8]      ; 0044a8fe | DAT_014b86d8
        ;   Label: LAB_0044a8fe
    INC ECX                             ; 0044a904
    MOV dword ptr [0x014b86d8],ECX      ; 0044a905 | DAT_014b86d8
    IMUL ECX,ECX,0xc                    ; 0044a90b
    FLD float ptr [ESP + 0x18]          ; 0044a90e
    SUB ESP,0x8                         ; 0044a912
    FCHS                                ; 0044a915
    FSTP double ptr [ESP]               ; 0044a917
    PUSH 0x0                            ; 0044a91a
    PUSH 0x0                            ; 0044a91c
    PUSH 0x0                            ; 0044a91e
    PUSH 0x0                            ; 0044a920
    PUSH 0x3ff00000                     ; 0044a922
    PUSH 0x0                            ; 0044a927
    ADD ECX,0x14b86dc                   ; 0044a929
    PUSH ECX                            ; 0044a92f
    PUSH EDI                            ; 0044a930 | DAT_014b893c
    PUSH EDX                            ; 0044a931 | DAT_014b8618 | DAT_014b8624
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a932
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b86d8]      ; 0044a937 | DAT_014b86d8
    INC EDX                             ; 0044a93d
    ADD ESP,0x2c                        ; 0044a93e
    MOV dword ptr [0x014b86d8],EDX      ; 0044a941 | DAT_014b86d8
    JMP 0x0044a521                      ; 0044a947
        ;   XREF to: 0044a521 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b879c],0xc ; 0044a94c | DAT_014b879c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 0044a953
    SUB ESP,0x8                         ; 0044a957
    FSTP double ptr [ESP]               ; 0044a95a
    PUSH 0x0                            ; 0044a95d
    PUSH 0x0                            ; 0044a95f
    PUSH 0x0                            ; 0044a961
    PUSH 0x0                            ; 0044a963
    PUSH 0xbff00000                     ; 0044a965
    PUSH 0x0                            ; 0044a96a
    ADD ECX,0x14b87a0                   ; 0044a96c
    PUSH ECX                            ; 0044a972 | DAT_014b8a94
    PUSH EDX                            ; 0044a973 | DAT_014b86dc | DAT_014b86e8
    PUSH EDI                            ; 0044a974 | DAT_014b8a00
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a975
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b879c]      ; 0044a97a | DAT_014b879c
    INC EDX                             ; 0044a980
    ADD ESP,0x2c                        ; 0044a981
    MOV dword ptr [0x014b879c],EDX      ; 0044a984 | DAT_014b879c
    JMP 0x0044a5c4                      ; 0044a98a
        ;   XREF to: 0044a5c4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b879c],0xc ; 0044a98f | DAT_014b879c
        ;   Label: caseD_2
    ADD ECX,0x14b87a0                   ; 0044a996
    CMP ECX,EDX                         ; 0044a99c
    JZ 0x0044a9b0                       ; 0044a99e
        ;   XREF to: 0044a9b0 (CONDITIONAL_JUMP)  ; LAB_0044a9b0
    MOV EAX,dword ptr [EDX]             ; 0044a9a0 | DAT_014b86dc | DAT_014b86e8
    MOV dword ptr [ECX],EAX             ; 0044a9a2 | DAT_014b87a0 | DAT_014b8a94
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a9a4 | DAT_014b86e0 | DAT_014b86ec
    MOV dword ptr [ECX + 0x4],EAX       ; 0044a9a7 | DAT_014b87a4 | DAT_014b8a98
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044a9aa | DAT_014b86e4 | DAT_014b86f0
    MOV dword ptr [ECX + 0x8],EAX       ; 0044a9ad | DAT_014b87a8 | DAT_014b8a9c
    MOV ECX,dword ptr [0x014b879c]      ; 0044a9b0 | DAT_014b879c
        ;   Label: LAB_0044a9b0
    INC ECX                             ; 0044a9b6
    MOV dword ptr [0x014b879c],ECX      ; 0044a9b7 | DAT_014b879c
    IMUL ECX,ECX,0xc                    ; 0044a9bd
    FLD float ptr [ESP + 0x4]           ; 0044a9c0
    SUB ESP,0x8                         ; 0044a9c4
    FSTP double ptr [ESP]               ; 0044a9c7
    PUSH 0x0                            ; 0044a9ca
    PUSH 0x0                            ; 0044a9cc
    PUSH 0x0                            ; 0044a9ce
    PUSH 0x0                            ; 0044a9d0
    PUSH 0xbff00000                     ; 0044a9d2
    PUSH 0x0                            ; 0044a9d7
    ADD ECX,0x14b87a0                   ; 0044a9d9
    PUSH ECX                            ; 0044a9df
    PUSH EDI                            ; 0044a9e0 | DAT_014b8a00
    PUSH EDX                            ; 0044a9e1 | DAT_014b86dc | DAT_014b86e8
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044a9e2
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b879c]      ; 0044a9e7 | DAT_014b879c
    INC EDX                             ; 0044a9ed
    ADD ESP,0x2c                        ; 0044a9ee
    MOV dword ptr [0x014b879c],EDX      ; 0044a9f1 | DAT_014b879c
    JMP 0x0044a5c4                      ; 0044a9f7
        ;   XREF to: 0044a5c4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8860],0xc ; 0044a9fc | DAT_014b8860
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 0044aa03
    SUB ESP,0x8                         ; 0044aa07
    FSTP double ptr [ESP]               ; 0044aa0a
    PUSH 0xbff00000                     ; 0044aa0d
    PUSH 0x0                            ; 0044aa12
    PUSH 0x0                            ; 0044aa14
    PUSH 0x0                            ; 0044aa16
    PUSH 0x0                            ; 0044aa18
    PUSH 0x0                            ; 0044aa1a
    ADD ECX,0x14b8864                   ; 0044aa1c
    PUSH ECX                            ; 0044aa22 | DAT_014b8b58
    PUSH EDX                            ; 0044aa23 | DAT_014b87a0 | DAT_014b87ac
    PUSH EDI                            ; 0044aa24
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044aa25
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8860]      ; 0044aa2a | DAT_014b8860
    INC EDX                             ; 0044aa30
    ADD ESP,0x2c                        ; 0044aa31
    MOV dword ptr [0x014b8860],EDX      ; 0044aa34 | DAT_014b8860
    JMP 0x0044a66a                      ; 0044aa3a
        ;   XREF to: 0044a66a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8860],0xc ; 0044aa3f | DAT_014b8860
        ;   Label: caseD_2
    ADD ECX,0x14b8864                   ; 0044aa46
    CMP ECX,EDX                         ; 0044aa4c
    JZ 0x0044aa60                       ; 0044aa4e
        ;   XREF to: 0044aa60 (CONDITIONAL_JUMP)  ; LAB_0044aa60
    MOV EAX,dword ptr [EDX]             ; 0044aa50 | DAT_014b87a0 | DAT_014b87ac
    MOV dword ptr [ECX],EAX             ; 0044aa52 | DAT_014b8864 | DAT_014b8b58
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044aa54 | DAT_014b87a4 | DAT_014b87b0
    MOV dword ptr [ECX + 0x4],EAX       ; 0044aa57 | DAT_014b8868 | DAT_014b8b5c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044aa5a | DAT_014b87a8 | DAT_014b87b4
    MOV dword ptr [ECX + 0x8],EAX       ; 0044aa5d | DAT_014b886c | DAT_014b8b60
    MOV ECX,dword ptr [0x014b8860]      ; 0044aa60 | DAT_014b8860
        ;   Label: LAB_0044aa60
    INC ECX                             ; 0044aa66
    MOV dword ptr [0x014b8860],ECX      ; 0044aa67 | DAT_014b8860
    IMUL ECX,ECX,0xc                    ; 0044aa6d
    FLD float ptr [ESP + 0x8]           ; 0044aa70
    SUB ESP,0x8                         ; 0044aa74
    FSTP double ptr [ESP]               ; 0044aa77
    PUSH 0xbff00000                     ; 0044aa7a
    PUSH 0x0                            ; 0044aa7f
    PUSH 0x0                            ; 0044aa81
    PUSH 0x0                            ; 0044aa83
    PUSH 0x0                            ; 0044aa85
    PUSH 0x0                            ; 0044aa87
    ADD ECX,0x14b8864                   ; 0044aa89
    PUSH ECX                            ; 0044aa8f
    PUSH EDI                            ; 0044aa90
    PUSH EDX                            ; 0044aa91 | DAT_014b87a0 | DAT_014b87ac
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044aa92
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8860]      ; 0044aa97 | DAT_014b8860
    INC EDX                             ; 0044aa9d
    ADD ESP,0x2c                        ; 0044aa9e
    MOV dword ptr [0x014b8860],EDX      ; 0044aaa1 | DAT_014b8860
    JMP 0x0044a66a                      ; 0044aaa7
        ;   XREF to: 0044a66a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8924],0xc ; 0044aaac | DAT_014b8924
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 0044aab3
    SUB ESP,0x8                         ; 0044aab7
    FSTP double ptr [ESP]               ; 0044aaba
    PUSH 0xbff00000                     ; 0044aabd
    PUSH 0x0                            ; 0044aac2
    PUSH 0x0                            ; 0044aac4
    PUSH 0x0                            ; 0044aac6
    PUSH 0x0                            ; 0044aac8
    PUSH 0x0                            ; 0044aaca
    ADD ECX,0x14b8928                   ; 0044aacc
    PUSH ECX                            ; 0044aad2 | DAT_014b8c1c
    PUSH EDX                            ; 0044aad3 | DAT_014b8864 | DAT_014b8870
    PUSH EDI                            ; 0044aad4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044aad5
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8924]      ; 0044aada | DAT_014b8924
    INC EDX                             ; 0044aae0
    ADD ESP,0x2c                        ; 0044aae1
    MOV dword ptr [0x014b8924],EDX      ; 0044aae4 | DAT_014b8924
    JMP 0x0044a710                      ; 0044aaea
        ;   XREF to: 0044a710 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x014b8924],0xc ; 0044aaef | DAT_014b8924
        ;   Label: caseD_2
    ADD ECX,0x14b8928                   ; 0044aaf6
    CMP ECX,EDX                         ; 0044aafc
    JZ 0x0044ab10                       ; 0044aafe
        ;   XREF to: 0044ab10 (CONDITIONAL_JUMP)  ; LAB_0044ab10
    MOV EAX,dword ptr [EDX]             ; 0044ab00 | DAT_014b8864 | DAT_014b8870
    MOV dword ptr [ECX],EAX             ; 0044ab02 | DAT_014b8c1c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044ab04 | DAT_014b8868 | DAT_014b8874
    MOV dword ptr [ECX + 0x4],EAX       ; 0044ab07 | DAT_014b8c20
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044ab0a | DAT_014b886c | DAT_014b8878
    MOV dword ptr [ECX + 0x8],EAX       ; 0044ab0d | DAT_014b8c24
    MOV ECX,dword ptr [0x014b8924]      ; 0044ab10 | DAT_014b8924
        ;   Label: LAB_0044ab10
    INC ECX                             ; 0044ab16
    MOV dword ptr [0x014b8924],ECX      ; 0044ab17 | DAT_014b8924
    IMUL ECX,ECX,0xc                    ; 0044ab1d
    FLD float ptr [ESP + 0xc]           ; 0044ab20
    SUB ESP,0x8                         ; 0044ab24
    FSTP double ptr [ESP]               ; 0044ab27
    PUSH 0xbff00000                     ; 0044ab2a
    PUSH 0x0                            ; 0044ab2f
    PUSH 0x0                            ; 0044ab31
    PUSH 0x0                            ; 0044ab33
    PUSH 0x0                            ; 0044ab35
    PUSH 0x0                            ; 0044ab37
    ADD ECX,0x14b8928                   ; 0044ab39
    PUSH ECX                            ; 0044ab3f
    PUSH EDI                            ; 0044ab40
    PUSH EDX                            ; 0044ab41 | DAT_014b8864 | DAT_014b8870
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004484c0 ; 0044ab42
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004484c0()
    MOV EDX,dword ptr [0x014b8924]      ; 0044ab47 | DAT_014b8924
    INC EDX                             ; 0044ab4d
    ADD ESP,0x2c                        ; 0044ab4e
    MOV dword ptr [0x014b8924],EDX      ; 0044ab51 | DAT_014b8924
    JMP 0x0044a710                      ; 0044ab57
        ;   XREF to: 0044a710 (UNCONDITIONAL_JUMP)  ; caseD_3

