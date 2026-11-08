; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434190(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b88e2
;   undefined4 DAT_005b88e6
;   undefined4 DAT_005b88ee
;   undefined4 DAT_005b88f6
;   undefined4 DAT_005b88fe
;   undefined4 DAT_005b8906
;   undefined4 DAT_005b890e
;   undefined4 DAT_005b8912
;   undefined4 DAT_005b8916
;   undefined4 DAT_005b891e
;   void* PTR_DAT_005f1690 = 007f7ea4
;
; Called Functions:
;   FUN_00408bf0
;   FUN_0042b9e0
;   FUN_00441ff0
;   FUN_0045b550
;   FUN_0045b800
;   FUN_004d22c0
;   FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434190
        ;   Label: FUN_00434190
    PUSH ESI                            ; 00434191
    PUSH EDI                            ; 00434192
    PUSH EBP                            ; 00434193
    MOV EBP,ESP                         ; 00434194
    SUB ESP,0x188                       ; 00434196
    AND ESP,0xfffffff8                  ; 0043419c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043419f
    FLD float ptr [EAX + 0x3238]        ; 004341a2
    FLDZ                                ; 004341a8
    FCOMPP                              ; 004341aa
    FNSTSW AX                           ; 004341ac
    SAHF                                ; 004341ae
    JBE 0x0043423f                      ; 004341af
        ;   XREF to: 0043423f (CONDITIONAL_JUMP)  ; LAB_0043423f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004341b5
    FLD float ptr [EAX + 0x3238]        ; 004341b8
    FADD float ptr [EBP + 0x18]         ; 004341be
    FST float ptr [EAX + 0x3238]        ; 004341c1
    FLDZ                                ; 004341c7
    FCOMPP                              ; 004341c9
    FNSTSW AX                           ; 004341cb
    SAHF                                ; 004341cd
    JBE 0x004341e4                      ; 004341ce
        ;   XREF to: 004341e4 (CONDITIONAL_JUMP)  ; LAB_004341e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004341d0
    FLD float ptr [EAX + 0x3248]        ; 004341d3
    FCOMP double ptr [0x005b88e6]       ; 004341d9 | DAT_005b88e6
    FNSTSW AX                           ; 004341df
    SAHF                                ; 004341e1
    JBE 0x004341fa                      ; 004341e2
        ;   XREF to: 004341fa (CONDITIONAL_JUMP)  ; LAB_004341fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004341e4
        ;   Label: LAB_004341e4
    MOV dword ptr [EAX + 0x3238],0x0    ; 004341e7
    XOR EAX,EAX                         ; 004341f1
        ;   Label: LAB_004341f1
    MOV ESP,EBP                         ; 004341f3
    POP EBP                             ; 004341f5
    POP EDI                             ; 004341f6
    POP ESI                             ; 004341f7
    POP EBX                             ; 004341f8
    RET                                 ; 004341f9
    PUSH 0x0                            ; 004341fa
        ;   Label: LAB_004341fa
    PUSH 0x0                            ; 004341fc
    PUSH 0x2cfd900                      ; 004341fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00434203
    PUSH 0x0                            ; 00434206
    ADD EAX,0x323c                      ; 00434208
    PUSH EAX                            ; 0043420d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043420e
    PUSH ESI                            ; 00434211
    CALL FUN_0042b9e0                   ; 00434212
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b9e0()
    ADD ESP,0x18                        ; 00434217
    TEST EAX,EAX                        ; 0043421a
    JZ 0x00434233                       ; 0043421c
        ;   XREF to: 00434233 (CONDITIONAL_JUMP)  ; LAB_00434233
    MOV EAX,ESI                         ; 0043421e
    MOV dword ptr [ESI + 0x3238],0x0    ; 00434220
    XOR EAX,ESI                         ; 0043422a
    MOV ESP,EBP                         ; 0043422c
    POP EBP                             ; 0043422e
    POP EDI                             ; 0043422f
    POP ESI                             ; 00434230
    POP EBX                             ; 00434231
    RET                                 ; 00434232
    MOV EAX,0x1                         ; 00434233
        ;   Label: LAB_00434233
    MOV ESP,EBP                         ; 00434238
    POP EBP                             ; 0043423a
    POP EDI                             ; 0043423b
    POP ESI                             ; 0043423c
    POP EBX                             ; 0043423d
    RET                                 ; 0043423e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043423f
        ;   Label: LAB_0043423f
    ADD EAX,0x20                        ; 00434242
    PUSH EAX                            ; 00434245
    MOV dword ptr [ESP + 0x188],EAX     ; 00434246
    CALL FUN_004d22c0                   ; 0043424d
        ;   XREF to: 004d22c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d22c0()
    ADD ESP,0x4                         ; 00434252
    MOV ECX,dword ptr [ESP + 0x184]     ; 00434255
    PUSH ECX                            ; 0043425c
    LEA ESI,[ESP + 0xc8]                ; 0043425d
    LEA EDI,[ESP + 0x110]               ; 00434264
    PUSH EAX                            ; 0043426b
    MOV EBX,EAX                         ; 0043426c
    MOV dword ptr [ESP + 0x16c],EAX     ; 0043426e
    CALL FUN_00408bf0                   ; 00434275
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0xcc]                ; 0043427a
    ADD ESP,0x8                         ; 00434281
    LEA EAX,[ESP + 0x10c]               ; 00434284
    MOVSD ES:EDI,ESI                    ; 0043428b
    MOVSD ES:EDI,ESI                    ; 0043428c
    MOVSD ES:EDI,ESI                    ; 0043428d
    PUSH EAX                            ; 0043428e
    LEA ESI,[ESP + 0x140]               ; 0043428f
    LEA EDI,[ESP + 0x5c]                ; 00434296
    CALL FUN_00576250                   ; 0043429a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x140]               ; 0043429f
    ADD ESP,0x4                         ; 004342a6
    MOVSD ES:EDI,ESI                    ; 004342a9
    MOVSD ES:EDI,ESI                    ; 004342aa
    MOVSD ES:EDI,ESI                    ; 004342ab
    FLD float ptr [ESP + 0x5c]          ; 004342ac
    FABS                                ; 004342b0
    MOV ESI,dword ptr [ESP + 0x184]     ; 004342b2
    LEA EDI,[ESP + 0xac]                ; 004342b9
    FLD float ptr [ESI]                 ; 004342c0
    FLD float ptr [ESI + 0x4]           ; 004342c2
    FLD float ptr [ESI + 0x8]           ; 004342c5
    LEA ESI,[ESP + 0x88]                ; 004342c8
    LEA EAX,[EBX + 0x20]                ; 004342cf
    FXCH ST3                            ; 004342d2
    FSTP float ptr [ESP + 0x160]        ; 004342d4
    FXCH                                ; 004342db
    FSUB float ptr [EAX]                ; 004342dd
    FXCH                                ; 004342df
    FSUB float ptr [EAX + 0x4]          ; 004342e1
    FXCH ST2                            ; 004342e4
    FSUB float ptr [EAX + 0x8]          ; 004342e6
    FXCH                                ; 004342e9
    FSTP float ptr [ESP + 0x88]         ; 004342eb
    FXCH                                ; 004342f2
    FSTP float ptr [ESP + 0x8c]         ; 004342f4
    FSTP float ptr [ESP + 0x90]         ; 004342fb
    LEA EAX,[ESP + 0xac]                ; 00434302
    MOVSD ES:EDI,ESI                    ; 00434309
    MOVSD ES:EDI,ESI                    ; 0043430a
    MOVSD ES:EDI,ESI                    ; 0043430b
    PUSH EAX                            ; 0043430c
    LEA ESI,[ESP + 0x158]               ; 0043430d
    LEA EDI,[ESP + 0xbc]                ; 00434314
    CALL FUN_00576250                   ; 0043431b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x158]               ; 00434320
    ADD ESP,0x4                         ; 00434327
    MOVSD ES:EDI,ESI                    ; 0043432a
    MOVSD ES:EDI,ESI                    ; 0043432b
    MOVSD ES:EDI,ESI                    ; 0043432c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043432d
    PUSH EBX                            ; 00434334
    MOV dword ptr [ESP + 0x170],EAX     ; 00434335
    MOV EAX,dword ptr [EBX + 0x154]     ; 0043433c
    CALL dword ptr [EAX + 0x148]        ; 00434342
    ADD ESP,0x4                         ; 00434348
    TEST EAX,EAX                        ; 0043434b
    JZ 0x0043453e                       ; 0043434d
        ;   XREF to: 0043453e (CONDITIONAL_JUMP)  ; LAB_0043453e
    FLD float ptr [ESP + 0x160]         ; 00434353
    FCOMP float ptr [0x005b88e2]        ; 0043435a | DAT_005b88e2
    FNSTSW AX                           ; 00434360
    SAHF                                ; 00434362
    JNC 0x0043453e                      ; 00434363
        ;   XREF to: 0043453e (CONDITIONAL_JUMP)  ; LAB_0043453e
    FLD float ptr [ESP + 0x10c]         ; 00434369
    FLDZ                                ; 00434370
    FCOMPP                              ; 00434372
    FNSTSW AX                           ; 00434374
    SAHF                                ; 00434376
    JBE 0x0043451f                      ; 00434377
        ;   XREF to: 0043451f (CONDITIONAL_JUMP)  ; LAB_0043451f
    MOV EAX,0x1                         ; 0043437d
    MOV dword ptr [ESP + 0x168],EAX     ; 00434382
        ;   Label: LAB_00434382
    XOR EBX,EBX                         ; 00434389
    MOV EAX,dword ptr [ESP + 0x164]     ; 0043438b
    MOV dword ptr [ESP + 0x178],EBX     ; 00434392
    MOV EBX,dword ptr [EBP + 0x14]      ; 00434399
    ADD EAX,0x20                        ; 0043439c
    ADD EBX,0x323c                      ; 0043439f
    MOV dword ptr [ESP + 0x17c],EAX     ; 004343a5
    MOV EDI,dword ptr [ESP + 0x168]     ; 004343ac
        ;   Label: LAB_004343ac
    MOV EAX,dword ptr [ESP + 0x178]     ; 004343b3
    TEST EDI,EDI                        ; 004343ba
    JNZ 0x004346d2                      ; 004343bc
        ;   XREF to: 004346d2 (CONDITIONAL_JUMP)  ; LAB_004346d2
    FLD float ptr [ESP + 0x16c]         ; 004343c2
        ;   Label: LAB_004343c2
    FADD float ptr [EAX*0x4 + 0x5f0f30] ; 004343c9
    XOR EAX,EAX                         ; 004343d0
    FSTP float ptr [ESP + 0x184]        ; 004343d2
    MOV dword ptr [ESP + 0x148],EAX     ; 004343d9
    MOV dword ptr [ESP + 0x150],EAX     ; 004343e0
    MOV EAX,dword ptr [ESP + 0x184]     ; 004343e7
    MOV dword ptr [ESP + 0x14c],EAX     ; 004343ee
    LEA EAX,[ESP + 0xf4]                ; 004343f5
    LEA EDI,[ESP + 0xf4]                ; 004343fc
    PUSH EAX                            ; 00434403
    LEA EAX,[ESP + 0x34]                ; 00434404
    LEA ESI,[ESP + 0x14c]               ; 00434408
    PUSH EAX                            ; 0043440f
    MOVSD ES:EDI,ESI                    ; 00434410
    MOVSD ES:EDI,ESI                    ; 00434411
    MOVSD ES:EDI,ESI                    ; 00434412
    CALL FUN_0045b550                   ; 00434413
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    MOV ECX,0x40d00000                  ; 00434418
    ADD ESP,0x8                         ; 0043441d
    MOV dword ptr [ESP + 0x4],ECX       ; 00434420
    FLD float ptr [ESP + 0x4]           ; 00434424
        ;   Label: LAB_00434424
    FCOMP double ptr [0x005b8916]       ; 00434428 | DAT_005b8916
    FNSTSW AX                           ; 0043442e
    SAHF                                ; 00434430
    JBE 0x00434526                      ; 00434431
        ;   XREF to: 00434526 (CONDITIONAL_JUMP)  ; LAB_00434526
    XOR EAX,EAX                         ; 00434437
    MOV dword ptr [ESP + 0xa0],EAX      ; 00434439
    MOV dword ptr [ESP + 0xa4],EAX      ; 00434440
    MOV EAX,dword ptr [ESP + 0x4]       ; 00434447
    MOV dword ptr [ESP + 0xa8],EAX      ; 0043444b
    LEA EAX,[ESP + 0xa0]                ; 00434452
    PUSH EAX                            ; 00434459
    LEA EAX,[ESP + 0x34]                ; 0043445a
    PUSH EAX                            ; 0043445e
    LEA ESI,[ESP + 0x138]               ; 0043445f
    LEA EDI,[ESP + 0x108]               ; 00434466
    CALL FUN_0045b800                   ; 0043446d
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    ADD ESP,0x8                         ; 00434472
    LEA ESI,[ESP + 0x130]               ; 00434475
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0043447c
    MOVSD ES:EDI,ESI                    ; 00434483
    MOVSD ES:EDI,ESI                    ; 00434484
    MOVSD ES:EDI,ESI                    ; 00434485
    FLD float ptr [EAX + 0x4]           ; 00434486
    FLD float ptr [EAX + 0x8]           ; 00434489
    FLD float ptr [EAX]                 ; 0043448c
    LEA EDI,[ESP + 0x64]                ; 0043448e
    LEA ESI,[ESP + 0x70]                ; 00434492
    LEA EAX,[ESP + 0x64]                ; 00434496
    FADD float ptr [ESP + 0x100]        ; 0043449a
    FXCH ST2                            ; 004344a1
    FADD float ptr [ESP + 0x104]        ; 004344a3
    FXCH                                ; 004344aa
    FADD float ptr [ESP + 0x108]        ; 004344ac
    FXCH ST2                            ; 004344b3
    FSTP float ptr [ESP + 0x70]         ; 004344b5
    FSTP float ptr [ESP + 0x74]         ; 004344b9
    FSTP float ptr [ESP + 0x78]         ; 004344bd
    MOVSD ES:EDI,ESI                    ; 004344c1
    MOVSD ES:EDI,ESI                    ; 004344c2
    MOVSD ES:EDI,ESI                    ; 004344c3
    CMP EBX,EAX                         ; 004344c4
    JZ 0x004344dc                       ; 004344c6
        ;   XREF to: 004344dc (CONDITIONAL_JUMP)  ; LAB_004344dc
    MOV EAX,dword ptr [ESP + 0x64]      ; 004344c8
    MOV dword ptr [EBX],EAX             ; 004344cc
    MOV EAX,dword ptr [ESP + 0x68]      ; 004344ce
    MOV dword ptr [EBX + 0x4],EAX       ; 004344d2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004344d5
    MOV dword ptr [EBX + 0x8],EAX       ; 004344d9
    PUSH 0x0                            ; 004344dc
        ;   Label: LAB_004344dc
    PUSH 0x0                            ; 004344de
    PUSH 0x2cfd900                      ; 004344e0
    PUSH 0x0                            ; 004344e5
    PUSH EBX                            ; 004344e7
    MOV ECX,dword ptr [EBP + 0x14]      ; 004344e8
    PUSH ECX                            ; 004344eb
    CALL FUN_0042b9e0                   ; 004344ec
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b9e0()
    ADD ESP,0x18                        ; 004344f1
    TEST EAX,EAX                        ; 004344f4
    JL 0x004346d9                       ; 004344f6
        ;   XREF to: 004346d9 (CONDITIONAL_JUMP)  ; LAB_004346d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004344fc
    MOV dword ptr [EAX + 0x3248],0x0    ; 004344ff
    MOV dword ptr [EAX + 0x3238],0xc0800000 ; 00434509
    MOV EAX,0x2                         ; 00434513
    MOV ESP,EBP                         ; 00434518
    POP EBP                             ; 0043451a
    POP EDI                             ; 0043451b
    POP ESI                             ; 0043451c
    POP EBX                             ; 0043451d
    RET                                 ; 0043451e
    XOR EAX,EAX                         ; 0043451f
        ;   Label: LAB_0043451f
    JMP 0x00434382                      ; 00434521
        ;   XREF to: 00434382 (UNCONDITIONAL_JUMP)  ; LAB_00434382
    MOV ESI,dword ptr [ESP + 0x178]     ; 00434526
        ;   Label: LAB_00434526
    INC ESI                             ; 0043452d
    MOV dword ptr [ESP + 0x178],ESI     ; 0043452e
    CMP ESI,0x6                         ; 00434535
    JL 0x004343ac                       ; 00434538
        ;   XREF to: 004343ac (CONDITIONAL_JUMP)  ; LAB_004343ac
    FLD float ptr [ESP + 0x110]         ; 0043453e
        ;   Label: LAB_0043453e
    FABS                                ; 00434545
    FCOMP double ptr [0x005b88ee]       ; 00434547 | DAT_005b88ee
    FNSTSW AX                           ; 0043454d
    SAHF                                ; 0043454f
    JA 0x004341e4                       ; 00434550
        ;   XREF to: 004341e4 (CONDITIONAL_JUMP)  ; LAB_004341e4
    FLD float ptr [ESP + 0x160]         ; 00434556
    FCOMP float ptr [0x005b88f6]        ; 0043455d | DAT_005b88f6
    FNSTSW AX                           ; 00434563
    SAHF                                ; 00434565
    JA 0x004341e4                       ; 00434566
        ;   XREF to: 004341e4 (CONDITIONAL_JUMP)  ; LAB_004341e4
    FLD float ptr [ESP + 0x110]         ; 0043456c
    FMUL ST0                            ; 00434573
    FLD float ptr [ESP + 0x10c]         ; 00434575
    FMUL ST0                            ; 0043457c
    FADDP                               ; 0043457e
    FLD float ptr [ESP + 0x114]         ; 00434580
    FMUL ST0                            ; 00434587
    FADDP                               ; 00434589
    FSQRT                               ; 0043458b
    FCOMP double ptr [0x005b88fe]       ; 0043458d | DAT_005b88fe
    FNSTSW AX                           ; 00434593
    SAHF                                ; 00434595
    JA 0x004341e4                       ; 00434596
        ;   XREF to: 004341e4 (CONDITIONAL_JUMP)  ; LAB_004341e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043459c
    FLD float ptr [EAX + 0x3238]        ; 0043459f
    FADD float ptr [EBP + 0x18]         ; 004345a5
    FST float ptr [EAX + 0x3238]        ; 004345a8
    FCOMP double ptr [0x005b8906]       ; 004345ae | DAT_005b8906
    FNSTSW AX                           ; 004345b4
    SAHF                                ; 004345b6
    JC 0x004341f1                       ; 004345b7
        ;   XREF to: 004341f1 (CONDITIONAL_JUMP)  ; LAB_004341f1
    XOR EBX,EBX                         ; 004345bd
    MOV EAX,dword ptr [ESP + 0x164]     ; 004345bf
    MOV dword ptr [ESP + 0x174],EBX     ; 004345c6
    ADD EAX,0x20                        ; 004345cd
    MOV EBX,dword ptr [EBP + 0x14]      ; 004345d0
    MOV dword ptr [ESP + 0x180],EAX     ; 004345d3
    ADD EBX,0x323c                      ; 004345da
    MOV EAX,dword ptr [ESP + 0x174]     ; 004345e0
        ;   Label: LAB_004345e0
    MOV EDX,EAX                         ; 004345e7
    SAR EDX,0x1f                        ; 004345e9
    SUB EAX,EDX                         ; 004345ec
    SAR EAX,0x1                         ; 004345ee
    MOV dword ptr [ESP + 0x184],EAX     ; 004345f0
    FILD dword ptr [ESP + 0x184]        ; 004345f7
    FMUL float ptr [0x005b890e]         ; 004345fe | DAT_005b890e
    FMUL float ptr [0x005b8912]         ; 00434604 | DAT_005b8912
    MOV AH,byte ptr [ESP + 0x174]       ; 0043460a
    FSTP float ptr [ESP + 0x170]        ; 00434611
    TEST AH,0x1                         ; 00434618
    JNZ 0x004346ec                      ; 0043461b
        ;   XREF to: 004346ec (CONDITIONAL_JUMP)  ; LAB_004346ec
    FLD float ptr [ESP + 0x16c]         ; 00434621
        ;   Label: LAB_00434621
    LEA EDI,[ESP + 0xdc]                ; 00434628
    FADD float ptr [ESP + 0x170]        ; 0043462f
    XOR ESI,ESI                         ; 00434636
    FSTP float ptr [ESP + 0x184]        ; 00434638
    MOV EAX,dword ptr [ESP + 0x184]     ; 0043463f
    MOV dword ptr [ESP + 0x7c],ESI      ; 00434646
    MOV dword ptr [ESP + 0x80],EAX      ; 0043464a
    LEA EAX,[ESP + 0xdc]                ; 00434651
    MOV dword ptr [ESP + 0x84],ESI      ; 00434658
    PUSH EAX                            ; 0043465f
    LEA EAX,[ESP + 0xc]                 ; 00434660
    LEA ESI,[ESP + 0x80]                ; 00434664
    PUSH EAX                            ; 0043466b
    MOVSD ES:EDI,ESI                    ; 0043466c
    MOVSD ES:EDI,ESI                    ; 0043466d
    MOVSD ES:EDI,ESI                    ; 0043466e
    CALL FUN_0045b550                   ; 0043466f
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    MOV EAX,0x40900000                  ; 00434674
    ADD ESP,0x8                         ; 00434679
    MOV dword ptr [ESP],EAX             ; 0043467c
    FLD float ptr [ESP]                 ; 0043467f
        ;   Label: LAB_0043467f
    FCOMP double ptr [0x005b8916]       ; 00434682 | DAT_005b8916
    FNSTSW AX                           ; 00434688
    SAHF                                ; 0043468a
    JA 0x0043470a                       ; 0043468b
        ;   XREF to: 0043470a (CONDITIONAL_JUMP)  ; LAB_0043470a
    MOV EDX,dword ptr [ESP + 0x174]     ; 0043468d
    INC EDX                             ; 00434694
    MOV dword ptr [ESP + 0x174],EDX     ; 00434695
    CMP EDX,0x8                         ; 0043469c
    JLE 0x004345e0                      ; 0043469f
        ;   XREF to: 004345e0 (CONDITIONAL_JUMP)  ; LAB_004345e0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004346a5
    PUSH EBX                            ; 004346a8
    PUSH 0x5b88a6                       ; 004346a9
    MOV ESI,dword ptr [0x005f1690]      ; 004346ae | PTR_DAT_005f1690
    PUSH ESI                            ; 004346b4
    CALL FUN_00441ff0                   ; 004346b5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 004346ba
    MOV EAX,EBX                         ; 004346bd
    MOV dword ptr [EBX + 0x3238],0x0    ; 004346bf
    XOR EAX,EBX                         ; 004346c9
    MOV ESP,EBP                         ; 004346cb
    POP EBP                             ; 004346cd
    POP EDI                             ; 004346ce
    POP ESI                             ; 004346cf
    POP EBX                             ; 004346d0
    RET                                 ; 004346d1
    XOR AL,0x1                          ; 004346d2
        ;   Label: LAB_004346d2
    JMP 0x004343c2                      ; 004346d4
        ;   XREF to: 004343c2 (UNCONDITIONAL_JUMP)  ; LAB_004343c2
    FLD float ptr [ESP + 0x4]           ; 004346d9
        ;   Label: LAB_004346d9
    FADD float ptr [0x005b891e]         ; 004346dd | DAT_005b891e
    FSTP float ptr [ESP + 0x4]          ; 004346e3
    JMP 0x00434424                      ; 004346e7
        ;   XREF to: 00434424 (UNCONDITIONAL_JUMP)  ; LAB_00434424
    XOR byte ptr [ESP + 0x173],0x80     ; 004346ec
        ;   Label: LAB_004346ec
    JMP 0x00434621                      ; 004346f4
        ;   XREF to: 00434621 (UNCONDITIONAL_JUMP)  ; LAB_00434621
    FLD float ptr [ESP]                 ; 004346f9
        ;   Label: LAB_004346f9
    FADD float ptr [0x005b891e]         ; 004346fc | DAT_005b891e
    FSTP float ptr [ESP]                ; 00434702
    JMP 0x0043467f                      ; 00434705
        ;   XREF to: 0043467f (UNCONDITIONAL_JUMP)  ; LAB_0043467f
    MOV EAX,dword ptr [ESP]             ; 0043470a
        ;   Label: LAB_0043470a
    LEA ESI,[ESP + 0x94]                ; 0043470d
    MOV dword ptr [ESP + 0x12c],EAX     ; 00434714
    LEA EAX,[ESP + 0x124]               ; 0043471b
    XOR EDI,EDI                         ; 00434722
    PUSH EAX                            ; 00434724
    LEA EAX,[ESP + 0xc]                 ; 00434725
    MOV dword ptr [ESP + 0x128],EDI     ; 00434729
    PUSH EAX                            ; 00434730
    MOV dword ptr [ESP + 0x130],EDI     ; 00434731
    LEA EDI,[ESP + 0x120]               ; 00434738
    CALL FUN_0045b800                   ; 0043473f
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    ADD ESP,0x8                         ; 00434744
    LEA ESI,[ESP + 0x94]                ; 00434747
    MOV EAX,dword ptr [ESP + 0x180]     ; 0043474e
    MOVSD ES:EDI,ESI                    ; 00434755
    MOVSD ES:EDI,ESI                    ; 00434756
    MOVSD ES:EDI,ESI                    ; 00434757
    FLD float ptr [EAX + 0x4]           ; 00434758
    FLD float ptr [EAX + 0x8]           ; 0043475b
    FLD float ptr [EAX]                 ; 0043475e
    LEA EDI,[ESP + 0xd0]                ; 00434760
    LEA ESI,[ESP + 0xe8]                ; 00434767
    LEA EAX,[ESP + 0xd0]                ; 0043476e
    FADD float ptr [ESP + 0x118]        ; 00434775
    FXCH ST2                            ; 0043477c
    FADD float ptr [ESP + 0x11c]        ; 0043477e
    FXCH                                ; 00434785
    FADD float ptr [ESP + 0x120]        ; 00434787
    FXCH ST2                            ; 0043478e
    FSTP float ptr [ESP + 0xe8]         ; 00434790
    FSTP float ptr [ESP + 0xec]         ; 00434797
    FSTP float ptr [ESP + 0xf0]         ; 0043479e
    MOVSD ES:EDI,ESI                    ; 004347a5
    MOVSD ES:EDI,ESI                    ; 004347a6
    MOVSD ES:EDI,ESI                    ; 004347a7
    CMP EBX,EAX                         ; 004347a8
    JZ 0x004347c9                       ; 004347aa
        ;   XREF to: 004347c9 (CONDITIONAL_JUMP)  ; LAB_004347c9
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004347ac
    MOV dword ptr [EBX],EAX             ; 004347b3
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004347b5
    MOV dword ptr [EBX + 0x4],EAX       ; 004347bc
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004347bf
    MOV dword ptr [EBX + 0x8],EAX       ; 004347c6
    PUSH 0x0                            ; 004347c9
        ;   Label: LAB_004347c9
    PUSH 0x0                            ; 004347cb
    PUSH 0x2cfd900                      ; 004347cd
    PUSH 0x0                            ; 004347d2
    PUSH EBX                            ; 004347d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004347d5
    PUSH EDX                            ; 004347d8
    CALL FUN_0042b9e0                   ; 004347d9
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b9e0()
    ADD ESP,0x18                        ; 004347de
    TEST EAX,EAX                        ; 004347e1
    JL 0x004346f9                       ; 004347e3
        ;   XREF to: 004346f9 (CONDITIONAL_JUMP)  ; LAB_004346f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004347e9
    MOV dword ptr [EAX + 0x3248],0x0    ; 004347ec
    MOV dword ptr [EAX + 0x3238],0xc0a00000 ; 004347f6
    MOV EAX,0x1                         ; 00434800
    MOV ESP,EBP                         ; 00434805
    POP EBP                             ; 00434807
    POP EDI                             ; 00434808
    POP ESI                             ; 00434809
    POP EBX                             ; 0043480a
    RET                                 ; 0043480b

