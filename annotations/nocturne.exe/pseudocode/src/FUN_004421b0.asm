; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004421b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00507f80 at 0050807d
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b65
;
; Referenced Globals:
;   undefined4 DAT_0057b803
;   undefined4 DAT_0057b80b
;   undefined4 DAT_005ad45c
;   undefined4 DAT_005ad460
;   undefined4 DAT_005ad47c
;   undefined4 DAT_005ad480
;   undefined4 DAT_007f8284
;   undefined4 DAT_007f8288
;   undefined4 DAT_007f828c
;   undefined4 DAT_008da184
;   undefined4 DAT_008da188
;   undefined4 DAT_008da18c
;   undefined4 DAT_009bc084
;   undefined4 DAT_009bc088
;   undefined4 DAT_009bc08c
;   ... and 7 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
;   FUN_00446810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004421b0
        ;   Label: FUN_004421b0
    PUSH ESI                            ; 004421b1
    PUSH EDI                            ; 004421b2
    PUSH EBP                            ; 004421b3
    MOV EBP,ESP                         ; 004421b4
    SUB ESP,0x70                        ; 004421b6
    AND ESP,0xfffffff8                  ; 004421b9
    MOV ECX,0x1                         ; 004421bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004421c1
    XOR EDX,EDX                         ; 004421c4
    MOV dword ptr [ESP + 0x48],ECX      ; 004421c6
    MOV EBX,dword ptr [EAX + 0x154]     ; 004421ca
    MOV dword ptr [ESP],EDX             ; 004421d0
    CMP EBX,ECX                         ; 004421d3
    JLE 0x004423e3                      ; 004421d5
        ;   XREF to: 004423e3 (CONDITIONAL_JUMP)  ; LAB_004423e3
    MOV EBX,0x500                       ; 004421db
    MOV ECX,0xf00                       ; 004421e0
    MOV dword ptr [ESP + 0x40],EBX      ; 004421e5
    MOV dword ptr [ESP + 0x44],ECX      ; 004421e9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004421ed
        ;   Label: LAB_004421ed
    MOV EAX,dword ptr [ESP + 0x48]      ; 004421f0
    IMUL EAX,dword ptr [EDX + 0x14c]    ; 004421f4
    ADD EAX,dword ptr [EDX + 0x148]     ; 004421fb
    MOV EDX,dword ptr [EDX + 0x144]     ; 00442201
    MOV EBX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 00442207 | DAT_01bd2fa0
    MOV EAX,0x1                         ; 0044220e
    SHL EDX,0x2                         ; 00442213
    MOV dword ptr [ESP + 0x58],EAX      ; 00442216
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044221a
    ADD EBX,EDX                         ; 0044221d
    CMP dword ptr [EAX + 0x150],0x1     ; 0044221f
    JLE 0x004423ad                      ; 00442226
        ;   XREF to: 004423ad (CONDITIONAL_JUMP)  ; LAB_004423ad
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044222c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00442230
    ADD EAX,0xc                         ; 00442234
    ADD EDX,0x4                         ; 00442237
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044223a
    MOV dword ptr [ESP + 0x54],EDX      ; 0044223e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00442242
    MOV EAX,dword ptr [EBP + 0x14]      ; 00442246
        ;   Label: LAB_00442246
    MOV EAX,dword ptr [EAX + 0x14c]     ; 00442249
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044224f
    SHL EAX,0x2                         ; 00442252
    MOV ESI,dword ptr [EDX + 0x14c]     ; 00442255
    ADD EBX,EAX                         ; 0044225b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044225d
    IMUL EAX,ESI                        ; 00442261
    PUSH EAX                            ; 00442264
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00442265
    IMUL EAX,ESI                        ; 00442269
    PUSH EAX                            ; 0044226c
    PUSH EDX                            ; 0044226d
    LEA ESI,[ESP + 0x28]                ; 0044226e
    LEA EDI,[ESP + 0x10]                ; 00442272
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 00442276
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0x28]                ; 0044227b
    ADD ESP,0xc                         ; 0044227f
    MOVSD ES:EDI,ESI                    ; 00442282
    MOVSD ES:EDI,ESI                    ; 00442283
    MOVSD ES:EDI,ESI                    ; 00442284
    MOV EDX,dword ptr [ESP + 0xc]       ; 00442285
    CMP EDX,0x7fffffff                  ; 00442289
    JZ 0x00442299                       ; 0044228f
        ;   XREF to: 00442299 (CONDITIONAL_JUMP)  ; LAB_00442299
    CMP EDX,dword ptr [ESP]             ; 00442291
    JLE 0x00442299                      ; 00442294
        ;   XREF to: 00442299 (CONDITIONAL_JUMP)  ; LAB_00442299
    MOV dword ptr [ESP],EDX             ; 00442296
    LEA EAX,[ESP + 0x4]                 ; 00442299
        ;   Label: LAB_00442299
    PUSH EAX                            ; 0044229d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044229e
    PUSH ESI                            ; 004422a1
    LEA ESI,[ESP + 0x18]                ; 004422a2
    LEA EDI,[ESP + 0x3c]                ; 004422a6
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0 ; 004422aa
        ;   XREF to: 004411b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0()
    LEA ESI,[ESP + 0x18]                ; 004422af
    ADD ESP,0x8                         ; 004422b3
    MOVSD ES:EDI,ESI                    ; 004422b6
    MOVSD ES:EDI,ESI                    ; 004422b7
    MOVSD ES:EDI,ESI                    ; 004422b8
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004422b9
    LEA ESI,[ESP + 0x10]                ; 004422bd
    LEA EDI,[EDI + 0x8d9278]            ; 004422c1
    MOVSD ES:EDI,ESI                    ; 004422c7 | DAT_008da184
    MOVSD ES:EDI,ESI                    ; 004422c8 | DAT_008da188
    MOVSD ES:EDI,ESI                    ; 004422c9 | DAT_008da18c
    MOV EAX,dword ptr [EBX]             ; 004422ca
    SHR EAX,0x18                        ; 004422cc
    TEST EAX,EAX                        ; 004422cf
    JZ 0x004422f4                       ; 004422d1
        ;   XREF to: 004422f4 (CONDITIONAL_JUMP)  ; LAB_004422f4
    PUSH EAX                            ; 004422d3
    LEA EAX,[ESP + 0x8]                 ; 004422d4
    PUSH EAX                            ; 004422d8
    MOV EDI,dword ptr [EBP + 0x14]      ; 004422d9
    PUSH EDI                            ; 004422dc
    LEA ESI,[ESP + 0x34]                ; 004422dd
    CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910 ; 004422e1
        ;   XREF to: 00447910 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910()
    LEA EDI,[ESP + 0x40]                ; 004422e6
    LEA ESI,[ESP + 0x34]                ; 004422ea
    ADD ESP,0xc                         ; 004422ee
    MOVSD ES:EDI,ESI                    ; 004422f1
    MOVSD ES:EDI,ESI                    ; 004422f2
    MOVSD ES:EDI,ESI                    ; 004422f3
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004422f4
        ;   Label: LAB_004422f4
    LEA ESI,[ESP + 0x34]                ; 004422f8
    LEA EDI,[EDI + 0x7f7378]            ; 004422fc
    MOVSD ES:EDI,ESI                    ; 00442302 | DAT_007f8284
    MOVSD ES:EDI,ESI                    ; 00442303 | DAT_007f8288
    MOVSD ES:EDI,ESI                    ; 00442304 | DAT_007f828c
    MOV EDX,dword ptr [ESP + 0x54]      ; 00442305
    MOV EAX,dword ptr [ESP + 0xc]       ; 00442309
    MOV dword ptr [EDX + 0xac2af8],EAX  ; 0044230d | DAT_00ac2ffc
    MOV EAX,dword ptr [EBX]             ; 00442313
    SHR EAX,0x10                        ; 00442315
    AND EAX,0xff                        ; 00442318
    CBW                                 ; 0044231d
    MOV EDX,dword ptr [EBX]             ; 0044231f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00442321
    SHR EDX,0x8                         ; 00442325
    FLD double ptr [0x0057b80b]         ; 00442328 | DAT_0057b80b
    FILD word ptr [ESP + 0x6c]          ; 0044232e
    FMUL ST1                            ; 00442332
    AND EDX,0xff                        ; 00442334
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044233a
    MOV DH,byte ptr [EBX]               ; 0044233e
    FSTP float ptr [EAX + 0x9bb178]     ; 00442340 | DAT_009bc084
    MOVSX AX,DL                         ; 00442346
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044234a
    FILD word ptr [ESP + 0x6c]          ; 0044234e
    FMUL ST1                            ; 00442352
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00442354
    FSTP float ptr [EAX + 0x9bb17c]     ; 00442358 | DAT_009bc088
    MOVSX AX,DH                         ; 0044235e
    MOV dword ptr [ESP + 0x6c],EAX      ; 00442362
    FILD word ptr [ESP + 0x6c]          ; 00442366
    FMULP                               ; 0044236a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044236c
    MOV ESI,dword ptr [ESP + 0x54]      ; 00442370
    ADD ECX,0xc                         ; 00442374
    ADD ESI,0x4                         ; 00442377
    MOV dword ptr [ESP + 0x4c],ECX      ; 0044237a
    MOV dword ptr [ESP + 0x54],ESI      ; 0044237e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00442382
    MOV EDX,dword ptr [EBP + 0x14]      ; 00442386
    LEA EDI,[EAX + 0xc]                 ; 00442389
    FSTP float ptr [EAX + 0x9bb180]     ; 0044238c | DAT_009bc08c
    MOV EAX,dword ptr [ESP + 0x58]      ; 00442392
    MOV dword ptr [ESP + 0x5c],EDI      ; 00442396
    INC EAX                             ; 0044239a
    MOV ECX,dword ptr [EDX + 0x150]     ; 0044239b
    MOV dword ptr [ESP + 0x58],EAX      ; 004423a1
    CMP EAX,ECX                         ; 004423a5
    JL 0x00442246                       ; 004423a7
        ;   XREF to: 00442246 (CONDITIONAL_JUMP)  ; LAB_00442246
    MOV ESI,dword ptr [ESP + 0x44]      ; 004423ad
        ;   Label: LAB_004423ad
    MOV EDI,dword ptr [ESP + 0x40]      ; 004423b1
    MOV EAX,dword ptr [ESP + 0x48]      ; 004423b5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004423b9
    ADD ESI,0xf00                       ; 004423bc
    ADD EDI,0x500                       ; 004423c2
    INC EAX                             ; 004423c8
    MOV ECX,dword ptr [EDX + 0x154]     ; 004423c9
    MOV dword ptr [ESP + 0x44],ESI      ; 004423cf
    MOV dword ptr [ESP + 0x40],EDI      ; 004423d3
    MOV dword ptr [ESP + 0x48],EAX      ; 004423d7
    CMP EAX,ECX                         ; 004423db
    JL 0x004421ed                       ; 004423dd
        ;   XREF to: 004421ed (CONDITIONAL_JUMP)  ; LAB_004421ed
    MOV EAX,dword ptr [ESP]             ; 004423e3
        ;   Label: LAB_004423e3
    MOV dword ptr [ESP + 0x68],EAX      ; 004423e6
    FILD dword ptr [ESP + 0x68]         ; 004423ea
    FMUL double ptr [0x0057b803]        ; 004423ee | DAT_0057b803
    MOV EAX,dword ptr [EBP + 0x14]      ; 004423f4
    XOR ESI,ESI                         ; 004423f7
    MOV EBX,EAX                         ; 004423f9
    PUSH EAX                            ; 004423fb
    FSTP float ptr [EAX + 0x100]        ; 004423fc
    CALL FUN_00446810                   ; 00442402
        ;   XREF to: 00446810 (UNCONDITIONAL_CALL)  ; undefined FUN_00446810()
    ADD ESP,0x4                         ; 00442407
    MOV EAX,EBX                         ; 0044240a
    MOV dword ptr [0x00b0e604],ESI      ; 0044240c | DAT_00b0e604
    MOV dword ptr [0x01216608],ESI      ; 00442412 | DAT_01216608
    MOV EDX,dword ptr [EAX + 0x140]     ; 00442418
    MOV dword ptr [0x012b0664],ESI      ; 0044241e | DAT_012b0664
    CMP EDX,0x1e0                       ; 00442424
    JL 0x00441f64                       ; 0044242a
        ;   XREF to: 00441f64 (CONDITIONAL_JUMP)  ; LAB_00441f64
    MOV EAX,dword ptr [EAX + 0x14c]     ; 00442430
    MOV dword ptr [ESP + 0x64],EAX      ; 00442436
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044243a
        ;   Label: LAB_0044243a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044243d
    MOV ECX,dword ptr [EDX + 0x14c]     ; 00442440
    MOV EAX,dword ptr [EAX + 0x140]     ; 00442446
    MOV EBX,dword ptr [ESP + 0x64]      ; 0044244c
    SUB EAX,ECX                         ; 00442450
    CMP EAX,EBX                         ; 00442452
    JLE 0x00441f64                      ; 00442454
        ;   XREF to: 00441f64 (CONDITIONAL_JUMP)  ; LAB_00441f64
    MOV EDI,ECX                         ; 0044245a
    LEA EAX,[ECX*0x4 + 0x0]             ; 0044245c
    MOV dword ptr [ESP + 0x50],EAX      ; 00442463
    MOV EAX,dword ptr [EBP + 0x14]      ; 00442467
        ;   Label: LAB_00442467
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044246a
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044246d
    MOV EDX,dword ptr [EDX + 0x13c]     ; 00442473
    ADD EAX,EAX                         ; 00442479
    SUB EDX,EAX                         ; 0044247b
    CMP EDI,EDX                         ; 0044247d
    JL 0x00442487                       ; 0044247f
        ;   XREF to: 00442487 (CONDITIONAL_JUMP)  ; LAB_00442487
    INC dword ptr [ESP + 0x64]          ; 00442481
    JMP 0x0044243a                      ; 00442485
        ;   XREF to: 0044243a (UNCONDITIONAL_JUMP)  ; LAB_0044243a
    CMP dword ptr [0x012b0664],0x2710   ; 00442487 | DAT_012b0664
        ;   Label: LAB_00442487
    JGE 0x004425af                      ; 00442491
        ;   XREF to: 004425af (CONDITIONAL_JUMP)  ; LAB_004425af
    TEST DI,0x1                         ; 00442497
    JZ 0x004425a4                       ; 0044249c
        ;   XREF to: 004425a4 (CONDITIONAL_JUMP)  ; LAB_004425a4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004424a2
        ;   Label: LAB_004424a2
    MOV EAX,dword ptr [ESP + 0x64]      ; 004424a5
    ADD EAX,dword ptr [EDX + 0x148]     ; 004424a9
    MOV EBX,dword ptr [ESP + 0x50]      ; 004424af
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 004424b3 | DAT_01bd4260
    MOV EDX,dword ptr [EDX + 0x144]     ; 004424ba
    ADD EAX,EBX                         ; 004424c0
    MOV EBX,dword ptr [EAX + EDX*0x4]   ; 004424c2
    MOV ESI,0x7fffffff                  ; 004424c5
    TEST EBX,EBX                        ; 004424ca
    JNZ 0x004425c0                      ; 004424cc
        ;   XREF to: 004425c0 (CONDITIONAL_JUMP)  ; LAB_004425c0
    MOV EBX,ESI                         ; 004424d2
    MOV EDX,dword ptr [ESP + 0x64]      ; 004424d4
        ;   Label: LAB_004424d4
    MOV CL,byte ptr [0x012b0660]        ; 004424d8 | DAT_012b0660
    SAR EDX,CL                          ; 004424de
    LEA EAX,[EDX*0x4 + 0x0]             ; 004424e0
    ADD EDX,EAX                         ; 004424e7
    MOV EAX,EDI                         ; 004424e9
    SAR EAX,CL                          ; 004424eb
    SHL EDX,0x8                         ; 004424ed
    MOV ECX,EAX                         ; 004424f0
    MOV EAX,dword ptr [EDX + ECX*0x4 + 0xac2af8] ; 004424f2
    MOV dword ptr [ESP + 0x60],EBX      ; 004424f9
    SUB EBX,EAX                         ; 004424fd
    MOV EAX,EBX                         ; 004424ff
    CDQ                                 ; 00442501
    XOR EAX,EDX                         ; 00442502
    SUB EAX,EDX                         ; 00442504
    CMP EAX,0x400                       ; 00442506
    JLE 0x004425af                      ; 0044250b
        ;   XREF to: 004425af (CONDITIONAL_JUMP)  ; LAB_004425af
    XOR EBX,EBX                         ; 00442511
    MOV EAX,dword ptr [ESP + 0x64]      ; 00442513
        ;   Label: LAB_00442513
    MOV CL,byte ptr [0x012b0660]        ; 00442517 | DAT_012b0660
    MOV EDX,dword ptr [EBX + 0x5ad47c]  ; 0044251d | DAT_005ad47c | DAT_005ad480
    SAR EAX,CL                          ; 00442523
    ADD EAX,EDX                         ; 00442525
    IMUL EDX,EAX,0x500                  ; 00442527
    MOV EAX,EDI                         ; 0044252d
    SAR EAX,CL                          ; 0044252f
    ADD EAX,dword ptr [EBX + 0x5ad45c]  ; 00442531 | DAT_005ad45c | DAT_005ad460
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xac2af8] ; 00442537
    MOV EDX,dword ptr [ESP + 0x60]      ; 0044253e
    SUB EDX,EAX                         ; 00442542
    MOV EAX,EDX                         ; 00442544
    CDQ                                 ; 00442546
    XOR EAX,EDX                         ; 00442547
    SUB EAX,EDX                         ; 00442549
    CMP EAX,ESI                         ; 0044254b
    JGE 0x00442570                      ; 0044254d
        ;   XREF to: 00442570 (CONDITIONAL_JUMP)  ; LAB_00442570
    MOV EDX,dword ptr [EBX + 0x5ad47c]  ; 0044254f | DAT_005ad47c
    MOV ESI,EAX                         ; 00442555
    IMUL EAX,EDX,0x140                  ; 00442557
    ADD EAX,dword ptr [EBX + 0x5ad45c]  ; 0044255d | DAT_005ad45c
    IMUL EDX,dword ptr [0x012b0664],0xc ; 00442563 | DAT_012b0664
    MOV dword ptr [EDX + 0x12b0668],EAX ; 0044256a
    ADD EBX,0x4                         ; 00442570
        ;   Label: LAB_00442570
    CMP EBX,0x20                        ; 00442573
    JNZ 0x00442513                      ; 00442576
        ;   XREF to: 00442513 (CONDITIONAL_JUMP)  ; LAB_00442513
    MOV EBX,dword ptr [0x012b0664]      ; 00442578 | DAT_012b0664
    IMUL EAX,EBX,0xc                    ; 0044257e
    CMP dword ptr [EAX + 0x12b0668],0x0 ; 00442581
    JZ 0x004425af                       ; 00442588
        ;   XREF to: 004425af (CONDITIONAL_JUMP)  ; LAB_004425af
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044258a
    MOV dword ptr [EAX + 0x12b066c],EDI ; 0044258e
    MOV dword ptr [EAX + 0x12b0670],EDX ; 00442594
    LEA EAX,[EBX + 0x1]                 ; 0044259a
    MOV [0x012b0664],EAX                ; 0044259d | DAT_012b0664
    JMP 0x004425af                      ; 004425a2
        ;   XREF to: 004425af (UNCONDITIONAL_JUMP)  ; LAB_004425af
    TEST byte ptr [ESP + 0x64],0x1      ; 004425a4
        ;   Label: LAB_004425a4
    JNZ 0x004424a2                      ; 004425a9
        ;   XREF to: 004424a2 (CONDITIONAL_JUMP)  ; LAB_004424a2
    MOV EDX,dword ptr [ESP + 0x50]      ; 004425af
        ;   Label: LAB_004425af
    ADD EDX,0x4                         ; 004425b3
    INC EDI                             ; 004425b6
    MOV dword ptr [ESP + 0x50],EDX      ; 004425b7
    JMP 0x00442467                      ; 004425bb
        ;   XREF to: 00442467 (UNCONDITIONAL_JUMP)  ; LAB_00442467
    MOV EDX,ESI                         ; 004425c0
        ;   Label: LAB_004425c0
    MOV EAX,ESI                         ; 004425c2
    SAR EDX,0x1f                        ; 004425c4
    IDIV EBX                            ; 004425c7
    MOV EBX,EAX                         ; 004425c9
    JMP 0x004424d4                      ; 004425cb
        ;   XREF to: 004424d4 (UNCONDITIONAL_JUMP)  ; LAB_004424d4

