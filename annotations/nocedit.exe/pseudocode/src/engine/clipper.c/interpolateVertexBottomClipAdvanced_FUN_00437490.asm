; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[3]:
;   engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980 at 00437a3b
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 at 004382ab
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 00438aa3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437490
        ;   Label: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
    PUSH ESI                            ; 00437491
    PUSH EDI                            ; 00437492
    PUSH EBP                            ; 00437493
    MOV ECX,dword ptr [ESP + 0x14]      ; 00437494
    MOV EDI,dword ptr [ESP + 0x18]      ; 00437498
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043749c
    MOV EAX,dword ptr [EDI + 0x4]       ; 004374a0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004374a3
    MOV EBX,dword ptr [ECX + 0x4]       ; 004374a6
    MOV EBP,dword ptr [EDI + 0x8]       ; 004374a9
    ADD EAX,EDX                         ; 004374ac
    ADD EBX,EBP                         ; 004374ae
    SUB EAX,EBX                         ; 004374b0
    MOV EBX,EDX                         ; 004374b2
    MOV EDX,dword ptr [ECX + 0x4]       ; 004374b4
    SUB EBX,EDX                         ; 004374b7
    MOV EDX,EBX                         ; 004374b9
    MOV EBX,EAX                         ; 004374bb
    CMP EDX,EBX                         ; 004374bd
    JGE 0x004374d3                      ; 004374bf | LAB_004374d3
        ;   XREF to: 004374d3 (CONDITIONAL_JUMP)
    NEG EBX                             ; 004374c1
    CMP EDX,EBX                         ; 004374c3
    JLE 0x004374da                      ; 004374c5 | LAB_004374da
        ;   XREF to: 004374da (CONDITIONAL_JUMP)
    NEG EBX                             ; 004374c7
    XOR EAX,EAX                         ; 004374c9
    SAR EDX,0x1                         ; 004374cb
    RCR EAX,0x1                         ; 004374cd
    IDIV EBX                            ; 004374cf
    JMP 0x004374e1                      ; 004374d1 | LAB_004374e1
        ;   XREF to: 004374e1 (UNCONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 004374d3
        ;   Label: LAB_004374d3
    JMP 0x004374e1                      ; 004374d8 | LAB_004374e1
        ;   XREF to: 004374e1 (UNCONDITIONAL_JUMP)
    NEG EBX                             ; 004374da
        ;   Label: LAB_004374da
    MOV EAX,0x80000000                  ; 004374dc
    MOV EBX,EAX                         ; 004374e1
        ;   Label: LAB_004374e1
    MOV EBP,dword ptr [ECX + 0x8]       ; 004374e3
    MOV EAX,dword ptr [EDI + 0x8]       ; 004374e6
    MOV EDX,EBX                         ; 004374e9
    SUB EAX,EBP                         ; 004374eb
    IMUL EDX                            ; 004374ed
    ADD EAX,EAX                         ; 004374ef
    ADC EDX,EDX                         ; 004374f1
    MOV EAX,EDX                         ; 004374f3
    MOV EDX,dword ptr [ECX + 0x8]       ; 004374f5
    ADD EAX,EDX                         ; 004374f8
    MOV dword ptr [ESI + 0x8],EAX       ; 004374fa
    MOV dword ptr [ESI + 0x4],EAX       ; 004374fd
    MOV EAX,dword ptr [EDI]             ; 00437500
    SUB EAX,dword ptr [ECX]             ; 00437502
    MOV EDX,EBX                         ; 00437504
    IMUL EDX                            ; 00437506
    ADD EAX,EAX                         ; 00437508
    ADC EDX,EDX                         ; 0043750a
    MOV EAX,EDX                         ; 0043750c
    MOV EDX,dword ptr [ECX]             ; 0043750e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00437510
    ADD EAX,EDX                         ; 00437517
    MOV dword ptr [ESI],EAX             ; 00437519
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043751b
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043751e
    MOV EDX,EBX                         ; 00437521
    SUB EAX,EBP                         ; 00437523
    IMUL EDX                            ; 00437525
    ADD EAX,EAX                         ; 00437527
    ADC EDX,EDX                         ; 00437529
    MOV EAX,EDX                         ; 0043752b
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043752d
    ADD EAX,EDX                         ; 00437530
    MOV dword ptr [ESI + 0x20],EAX      ; 00437532
    MOV EAX,dword ptr [EDI + 0x24]      ; 00437535
    SUB EAX,dword ptr [ECX + 0x24]      ; 00437538
    MOV EDX,EBX                         ; 0043753b
    IMUL EDX                            ; 0043753d
    ADD EAX,EAX                         ; 0043753f
    ADC EDX,EDX                         ; 00437541
    MOV EAX,EDX                         ; 00437543
    MOV EDX,dword ptr [ECX + 0x24]      ; 00437545
    ADD EDX,EAX                         ; 00437548
    MOV dword ptr [ESI + 0x24],EDX      ; 0043754a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043754d
    MOV EBP,dword ptr [ECX + 0x28]      ; 00437550
    MOV EDX,EBX                         ; 00437553
    SUB EAX,EBP                         ; 00437555
    IMUL EDX                            ; 00437557
    ADD EAX,EAX                         ; 00437559
    ADC EDX,EDX                         ; 0043755b
    MOV EAX,EDX                         ; 0043755d
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043755f
    ADD EDX,EAX                         ; 00437562
    MOV dword ptr [ESI + 0x28],EDX      ; 00437564
    MOV EAX,dword ptr [EDI + 0x18]      ; 00437567
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043756a
    MOV EDX,EBX                         ; 0043756d
    IMUL EDX                            ; 0043756f
    ADD EAX,EAX                         ; 00437571
    ADC EDX,EDX                         ; 00437573
    MOV EAX,EDX                         ; 00437575
    MOV EDX,dword ptr [ECX + 0x18]      ; 00437577
    ADD EDX,EAX                         ; 0043757a
    MOV dword ptr [ESI + 0x18],EDX      ; 0043757c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043757f
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00437582
    MOV EDX,EBX                         ; 00437585
    SUB EAX,EBP                         ; 00437587
    IMUL EDX                            ; 00437589
    ADD EAX,EAX                         ; 0043758b
    ADC EDX,EDX                         ; 0043758d
    MOV EAX,EDX                         ; 0043758f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 00437591
    ADD EDX,EAX                         ; 00437594
    MOV dword ptr [ESI + 0x1c],EDX      ; 00437596
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00437599
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043759c
    MOV EDX,EBX                         ; 0043759f
    IMUL EDX                            ; 004375a1
    ADD EAX,EAX                         ; 004375a3
    ADC EDX,EDX                         ; 004375a5
    MOV EAX,EDX                         ; 004375a7
    MOV EDX,dword ptr [ECX + 0x2c]      ; 004375a9
    ADD EDX,EAX                         ; 004375ac
    MOV dword ptr [ESI + 0x2c],EDX      ; 004375ae
    POP EBP                             ; 004375b1
    POP EDI                             ; 004375b2
    POP ESI                             ; 004375b3
    POP EBX                             ; 004375b4
    RET                                 ; 004375b5

