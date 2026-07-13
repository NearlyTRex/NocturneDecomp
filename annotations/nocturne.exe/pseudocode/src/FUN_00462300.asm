; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462300(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
;
; Referenced Globals:
;   undefined4 DAT_0057de6c
;   undefined4 DAT_0057de70
;   undefined4 DAT_0057de78
;   undefined4 DAT_0057de80
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;   undefined4 DAT_01fa5f3c
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_0040dda0
;   FUN_00423ed0
;   FUN_00454530
;   FUN_00467930
;   FUN_0048afe0
;   FUN_0048b320
;   FUN_0050e660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462300
        ;   Label: FUN_00462300
    PUSH ESI                            ; 00462301
    PUSH EDI                            ; 00462302
    PUSH EBP                            ; 00462303
    SUB ESP,0xa4                        ; 00462304
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0046230a
    CMP dword ptr [EBX + 0x2e4],0x0     ; 00462311
    JZ 0x0046235e                       ; 00462318
        ;   XREF to: 0046235e (CONDITIONAL_JUMP)  ; LAB_0046235e
    TEST dword ptr [EBX + 0x2d4],0x7fffffff ; 0046231a
        ;   Label: LAB_0046231a
    JZ 0x004623be                       ; 00462324
        ;   XREF to: 004623be (CONDITIONAL_JUMP)  ; LAB_004623be
    CMP dword ptr [EBX + 0x2d0],0x0     ; 0046232a
    JZ 0x00462353                       ; 00462331
        ;   XREF to: 00462353 (CONDITIONAL_JUMP)  ; LAB_00462353
    FLD float ptr [EBX + 0x2d4]         ; 00462333
    FSUB float ptr [ESP + 0xbc]         ; 00462339
    FST float ptr [EBX + 0x2d4]         ; 00462340
    FLDZ                                ; 00462346
    FCOMPP                              ; 00462348
    FNSTSW AX                           ; 0046234a
    SAHF                                ; 0046234c
    JA 0x004626f6                       ; 0046234d
        ;   XREF to: 004626f6 (CONDITIONAL_JUMP)  ; LAB_004626f6
    ADD ESP,0xa4                        ; 00462353
        ;   Label: LAB_00462353
    POP EBP                             ; 00462359
    POP EDI                             ; 0046235a
    POP ESI                             ; 0046235b
    POP EBX                             ; 0046235c
    RET                                 ; 0046235d
    LEA EDX,[EBX + 0x2f0]               ; 0046235e
        ;   Label: LAB_0046235e
    MOV EAX,dword ptr [EDX]             ; 00462364
    MOV dword ptr [ESP + 0x6c],EAX      ; 00462366
    LEA EAX,[EDX + 0x4]                 ; 0046236a
    MOV EAX,dword ptr [EAX]             ; 0046236d
    MOV dword ptr [ESP + 0x70],EAX      ; 0046236f
    LEA EAX,[EDX + 0x8]                 ; 00462373
    MOV EAX,dword ptr [EAX]             ; 00462376
    MOV dword ptr [ESP + 0x74],EAX      ; 00462378
    LEA EAX,[ESP + 0x6c]                ; 0046237c
    PUSH EAX                            ; 00462380
    LEA EAX,[ESP + 0x64]                ; 00462381
    PUSH EDX                            ; 00462385
    FLD float ptr [ESP + 0x78]          ; 00462386
    PUSH EAX                            ; 0046238a
    FADD float ptr [0x0057de6c]         ; 0046238b | DAT_0057de6c
    PUSH 0x1fba938                      ; 00462391 | DAT_01fba938
    FSTP float ptr [ESP + 0x80]         ; 00462396
    CALL FUN_00467930                   ; 0046239d
        ;   XREF to: 00467930 (UNCONDITIONAL_CALL)  ; undefined FUN_00467930()
    ADD ESP,0x10                        ; 004623a2
    MOV EAX,dword ptr [ESP + 0x64]      ; 004623a5
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004623a9
    MOV dword ptr [EBX + 0x2e8],EAX     ; 004623b3
    JMP 0x0046231a                      ; 004623b9
        ;   XREF to: 0046231a (UNCONDITIONAL_JUMP)  ; LAB_0046231a
    FLD float ptr [ESP + 0xbc]          ; 004623be
        ;   Label: LAB_004623be
    FLD ST0                             ; 004623c5
    FMUL double ptr [0x0057de70]        ; 004623c7 | DAT_0057de70
    FSUBR float ptr [EBX + 0x300]       ; 004623cd
    FST float ptr [EBX + 0x300]         ; 004623d3
    FMULP                               ; 004623d9
    LEA EAX,[ESP + 0x3c]                ; 004623db
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004623df
    PUSH EAX                            ; 004623e5
    FADD float ptr [EBX + 0x24]         ; 004623e6
    PUSH EBX                            ; 004623e9
    FSTP float ptr [EBX + 0x24]         ; 004623ea
    CALL dword ptr [EDX + 0x14]         ; 004623ed
    ADD ESP,0x8                         ; 004623f0
    FLD float ptr [ESP + 0x4c]          ; 004623f3
    FSUB float ptr [ESP + 0x40]         ; 004623f7
    FMUL double ptr [0x0057de78]        ; 004623fb | DAT_0057de78
    FSUBR float ptr [EBX + 0x2e8]       ; 00462401
    FLD float ptr [EBX + 0x24]          ; 00462407
    FCOMPP                              ; 0046240a
    FNSTSW AX                           ; 0046240c
    SAHF                                ; 0046240e
    JC 0x0046247a                       ; 0046240f
        ;   XREF to: 0046247a (CONDITIONAL_JUMP)  ; LAB_0046247a
    LEA EAX,[EBX + 0x20]                ; 00462411
        ;   Label: LAB_00462411
    XOR EDI,EDI                         ; 00462414
    XOR ESI,ESI                         ; 00462416
    MOV dword ptr [ESP + 0x94],EAX      ; 00462418
    MOV EAX,[0x005be368]                ; 0046241f | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_0046241f
    CMP EDI,dword ptr [EAX + 0x14ecb0]  ; 00462424 | DAT_01fa5f34
    JGE 0x00462353                      ; 0046242a
        ;   XREF to: 00462353 (CONDITIONAL_JUMP)  ; LAB_00462353
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14ecb4] ; 00462430 | DAT_01fa5f38 | DAT_01fa5f3c
    MOV EAX,ESP                         ; 00462437
    PUSH EAX                            ; 00462439
    CALL FUN_00423ed0                   ; 0046243a
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00423ed0()
    ADD ESP,0x4                         ; 0046243f
    MOV EDX,ESP                         ; 00462442
    MOV EAX,dword ptr [EBX + 0x308]     ; 00462444
    PUSH EDX                            ; 0046244a
    MOV dword ptr [ESP + 0x8],EAX       ; 0046244b
    MOV dword ptr [ESP + 0x38],EBX      ; 0046244f
    PUSH 0x3f800000                     ; 00462453
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00462458
    MOV dword ptr [ESP + 0x40],EBX      ; 0046245f
    PUSH EDX                            ; 00462463
    MOV EAX,dword ptr [EBP + 0x14c]     ; 00462464
    PUSH EBP                            ; 0046246a
    ADD ESI,0x4                         ; 0046246b
    INC EDI                             ; 0046246e
    CALL dword ptr [EAX + 0xf8]         ; 0046246f
    ADD ESP,0x10                        ; 00462475
    JMP 0x0046241f                      ; 00462478
        ;   XREF to: 0046241f (UNCONDITIONAL_JUMP)  ; LAB_0046241f
    CMP dword ptr [EBX + 0x330],0x0     ; 0046247a
        ;   Label: LAB_0046247a
    JZ 0x004624b4                       ; 00462481
        ;   XREF to: 004624b4 (CONDITIONAL_JUMP)  ; LAB_004624b4
    PUSH 0x3f800000                     ; 00462483
    PUSH 0x0                            ; 00462488
    PUSH 0x0                            ; 0046248a
    MOV EBP,dword ptr [0x005be368]      ; 0046248c | DAT_005be368
    PUSH 0x42c80000                     ; 00462492
    PUSH EBP                            ; 00462497 | DAT_01e57284
    CALL FUN_0050e660                   ; 00462498
        ;   XREF to: 0050e660 (UNCONDITIONAL_CALL)  ; undefined FUN_0050e660()
    ADD ESP,0x14                        ; 0046249d
    LEA EDX,[EBX + 0x30c]               ; 004624a0
    PUSH EDX                            ; 004624a6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004624a7
    PUSH EBX                            ; 004624ad
    CALL dword ptr [EAX + 0x24]         ; 004624ae
    ADD ESP,0x8                         ; 004624b1
    FLD float ptr [EBX + 0x2e8]         ; 004624b4
        ;   Label: LAB_004624b4
    MOV EAX,dword ptr [EBX + 0x32c]     ; 004624ba
    FSTP float ptr [EBX + 0x24]         ; 004624c0
    TEST EAX,EAX                        ; 004624c3
    JNZ 0x00462650                      ; 004624c5
        ;   XREF to: 00462650 (CONDITIONAL_JUMP)  ; LAB_00462650
    LEA ESI,[EBX + 0x20]                ; 004624cb
    XOR EDI,EDI                         ; 004624ce
    PUSH 0x3f000000                     ; 004624d0
        ;   Label: LAB_004624d0
    PUSH 0xbf000000                     ; 004624d5
    CALL FUN_0040dda0                   ; 004624da
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004624df
    FLD float ptr [ESP + 0xa8]          ; 004624e6
    ADD ESP,0x8                         ; 004624ed
    PUSH 0x3f000000                     ; 004624f0
    PUSH 0xbf000000                     ; 004624f5
    FSTP float ptr [ESP + 0x5c]         ; 004624fa
    CALL FUN_0040dda0                   ; 004624fe
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00462503
    FLD float ptr [ESP + 0xa8]          ; 0046250a
    ADD ESP,0x8                         ; 00462511
    PUSH 0x3f000000                     ; 00462514
    PUSH 0xbf000000                     ; 00462519
    FSTP float ptr [ESP + 0x60]         ; 0046251e
    CALL FUN_0040dda0                   ; 00462522
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00462527
    MOV EDX,dword ptr [0x005b80f0]      ; 0046252e | DAT_005b80f0
    FLD float ptr [ESP + 0xa8]          ; 00462534
    ADD ESP,0x8                         ; 0046253b
    LEA EAX,[ESP + 0x54]                ; 0046253e
    FLD float ptr [ESP + 0x54]          ; 00462542
    FLD float ptr [ESP + 0x58]          ; 00462546
    FXCH ST2                            ; 0046254a
    FSTP float ptr [ESP + 0x5c]         ; 0046254c
    PUSH 0xffff                         ; 00462550
    FLD float ptr [ESP + 0x60]          ; 00462555
    PUSH 0x0                            ; 00462559
    FXCH                                ; 0046255b
    FADD float ptr [ESI]                ; 0046255d
    PUSH 0x3f000000                     ; 0046255f
    FSTP float ptr [ESP + 0x60]         ; 00462564
    FXCH                                ; 00462568
    FADD float ptr [ESI + 0x4]          ; 0046256a
    PUSH EAX                            ; 0046256d
    FSTP float ptr [ESP + 0x68]         ; 0046256e
    FADD float ptr [ESI + 0x8]          ; 00462572
    PUSH EDX                            ; 00462575
    FSTP float ptr [ESP + 0x70]         ; 00462576
    CALL FUN_0048afe0                   ; 0046257a
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    ADD ESP,0x14                        ; 0046257f
    PUSH 0x3fc90fdb                     ; 00462582
    PUSH 0x3f490fdb                     ; 00462587
    CALL FUN_0040dda0                   ; 0046258c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00462591
    FLD float ptr [ESP + 0xa8]          ; 00462598
    ADD ESP,0x8                         ; 0046259f
    PUSH 0x40c90fdb                     ; 004625a2
    PUSH 0x0                            ; 004625a7
    FSTP float ptr [ESP + 0xa0]         ; 004625a9
    CALL FUN_0040dda0                   ; 004625b0
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004625b5
    FLD float ptr [ESP + 0xa8]          ; 004625bc
    ADD ESP,0x8                         ; 004625c3
    FLD ST0                             ; 004625c6
    FCOS                                ; 004625c8
    FLD float ptr [ESP + 0x98]          ; 004625ca
    FLD ST0                             ; 004625d1
    FCOS                                ; 004625d3
    FXCH ST3                            ; 004625d5
    FSIN                                ; 004625d7
    FXCH                                ; 004625d9
    FSIN                                ; 004625db
    FXCH ST2                            ; 004625dd
    FMUL float ptr [0x0057de80]         ; 004625df | DAT_0057de80
    FXCH                                ; 004625e5
    FMUL float ptr [0x0057de80]         ; 004625e7 | DAT_0057de80
    FXCH ST2                            ; 004625ed
    FMUL float ptr [0x0057de80]         ; 004625ef | DAT_0057de80
    FXCH ST3                            ; 004625f5
    FSTP float ptr [ESP + 0x9c]         ; 004625f7
    FMUL float ptr [ESP + 0x9c]         ; 004625fe
    FXCH                                ; 00462605
    FMUL float ptr [ESP + 0x9c]         ; 00462607
    PUSH 0x1b7b330                      ; 0046260e
    FXCH ST2                            ; 00462613
    FSTP float ptr [ESP + 0x80]         ; 00462615
    FSTP float ptr [ESP + 0x7c]         ; 0046261c
    FSTP float ptr [ESP + 0x84]         ; 00462620
    CALL FUN_00454530                   ; 00462627
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 0046262c
    PUSH EAX                            ; 0046262f
    LEA EAX,[ESP + 0x7c]                ; 00462630
    PUSH EAX                            ; 00462634
    PUSH ESI                            ; 00462635
    MOV ECX,dword ptr [0x005b80f0]      ; 00462636 | DAT_005b80f0
    PUSH ECX                            ; 0046263c
    INC EDI                             ; 0046263d
    CALL FUN_0048b320                   ; 0046263e
        ;   XREF to: 0048b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0048b320()
    ADD ESP,0x10                        ; 00462643
    CMP EDI,0xa                         ; 00462646
    JL 0x004624d0                       ; 00462649
        ;   XREF to: 004624d0 (CONDITIONAL_JUMP)  ; LAB_004624d0
    NOP                                 ; 0046264f
    PUSH 0x3f800000                     ; 00462650
        ;   Label: LAB_00462650
    FLD float ptr [EBX + 0x2f4]         ; 00462655
    PUSH 0x0                            ; 0046265b
    FSTP float ptr [EBX + 0x24]         ; 0046265d
    CALL FUN_0040dda0                   ; 00462660
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00462665
    FLD float ptr [ESP + 0xa8]          ; 0046266c
    ADD ESP,0x8                         ; 00462673
    FMUL float ptr [EBX + 0x2e0]        ; 00462676
    PUSH 0x3f800000                     ; 0046267c
    FADD float ptr [EBX + 0x2f0]        ; 00462681
    PUSH 0x0                            ; 00462687
    FSTP float ptr [EBX + 0x20]         ; 00462689
    CALL FUN_0040dda0                   ; 0046268c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00462691
    FLD float ptr [ESP + 0xa8]          ; 00462698
    FMUL float ptr [EBX + 0x2e0]        ; 0046269f
    FADD float ptr [EBX + 0x2f8]        ; 004626a5
    LEA EAX,[EBX + 0x2fc]               ; 004626ab
    FSTP float ptr [EBX + 0x28]         ; 004626b1
    MOV dword ptr [EAX + 0x8],0x0       ; 004626b4
    ADD ESP,0x8                         ; 004626bb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004626be
    MOV dword ptr [EAX + 0x4],EDX       ; 004626c1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004626c4
    MOV dword ptr [EAX],EDX             ; 004626c7
    PUSH dword ptr [EBX + 0x2dc]        ; 004626c9
    PUSH dword ptr [EBX + 0x2d8]        ; 004626cf
    CALL FUN_0040dda0                   ; 004626d5
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004626da
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004626e1
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004626e8
    ADD ESP,0x8                         ; 004626ee
    JMP 0x00462411                      ; 004626f1
        ;   XREF to: 00462411 (UNCONDITIONAL_JUMP)  ; LAB_00462411
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004626f6
        ;   Label: LAB_004626f6
    ADD ESP,0xa4                        ; 00462700
    POP EBP                             ; 00462706
    POP EDI                             ; 00462707
    POP ESI                             ; 00462708
    POP EBX                             ; 00462709
    RET                                 ; 0046270a

