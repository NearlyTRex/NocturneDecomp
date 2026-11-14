; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403480(void *frame_buffer,int width,int height,int bits_per_pixel,int stride)
;
; Parameters:
; void *           Stack[0x4]:4   frame_buffer
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bits_per_pixel
; int              Stack[0x14]:4   stride
;
; XREF[1]:
;   engine_2d.c_mapTextureFrameBuffer_FUN_004036a0 at 004036b3
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a38
;   undefined4 DAT_00713a3c
;   undefined4 DAT_00713a40
;   undefined4 DAT_00713a44
;   undefined4 DAT_00713a48
;   undefined4 DAT_00713a4c
;   undefined4 DAT_00713a50
;   undefined4 DAT_00713a54
;   undefined4 DAT_00713a58
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4f008
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403480
        ;   Label: engine_2d.c_mapFrameBuffer_FUN_00403480
    PUSH ESI                            ; 00403481
    PUSH EDI                            ; 00403482
    PUSH EBP                            ; 00403483
    MOV EBP,dword ptr [ESP + 0x18]      ; 00403484
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00403488
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040348c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403490
    CMP dword ptr [0x00713a38],0x0      ; 00403494 | DAT_00713a38
    JNZ 0x00403665                      ; 0040349b
        ;   XREF to: 00403665 (CONDITIONAL_JUMP)  ; LAB_00403665
    TEST EBX,EBX                        ; 004034a1
        ;   Label: LAB_004034a1
    JNZ 0x004034b9                      ; 004034a3
        ;   XREF to: 004034b9 (CONDITIONAL_JUMP)  ; LAB_004034b9
    MOV EDX,EBP                         ; 004034a5
    IMUL EDX,ESI                        ; 004034a7
    MOV EAX,EDX                         ; 004034aa
    SAR EDX,0x1f                        ; 004034ac
    SHL EDX,0x3                         ; 004034af
    SBB EAX,EDX                         ; 004034b2
    SAR EAX,0x3                         ; 004034b4
    MOV EBX,EAX                         ; 004034b7
    CMP ESI,0x8                         ; 004034b9
        ;   Label: LAB_004034b9
    JZ 0x004034eb                       ; 004034bc
        ;   XREF to: 004034eb (CONDITIONAL_JUMP)  ; LAB_004034eb
    CMP ESI,0x10                        ; 004034be
    JZ 0x004034eb                       ; 004034c1
        ;   XREF to: 004034eb (CONDITIONAL_JUMP)  ; LAB_004034eb
    CMP ESI,0x20                        ; 004034c3
    JZ 0x004034eb                       ; 004034c6
        ;   XREF to: 004034eb (CONDITIONAL_JUMP)  ; LAB_004034eb
    MOV EDX,0x5d21e8                    ; 004034c8
    MOV ECX,0x99d                       ; 004034cd
    PUSH 0x5d21f7                       ; 004034d2
    MOV dword ptr [0x01d1d400],EDX      ; 004034d7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004034dd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004034e3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004034e8
    MOV EDX,EBP                         ; 004034eb
        ;   Label: LAB_004034eb
    IMUL EDX,ESI                        ; 004034ed
    MOV EAX,EDX                         ; 004034f0
    SAR EDX,0x1f                        ; 004034f2
    SHL EDX,0x3                         ; 004034f5
    SBB EAX,EDX                         ; 004034f8
    SAR EAX,0x3                         ; 004034fa
    MOV ECX,EAX                         ; 004034fd
    MOV EAX,EBX                         ; 004034ff
    CDQ                                 ; 00403501
    XOR EAX,EDX                         ; 00403502
    SUB EAX,EDX                         ; 00403504
    CMP EAX,ECX                         ; 00403506
    JGE 0x0040352c                      ; 00403508
        ;   XREF to: 0040352c (CONDITIONAL_JUMP)  ; LAB_0040352c
    MOV EAX,0x5d221b                    ; 0040350a
    MOV EDX,0x99e                       ; 0040350f
    PUSH 0x5d222a                       ; 00403514
    MOV [0x01d1d400],EAX                ; 00403519 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0040351e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00403524
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00403529
    CMP EBP,0x1                         ; 0040352c
        ;   Label: LAB_0040352c
    JGE 0x0040368c                      ; 0040352f
        ;   XREF to: 0040368c (CONDITIONAL_JUMP)  ; LAB_0040368c
    MOV ECX,0x5d224a                    ; 00403535
        ;   Label: LAB_00403535
    MOV EAX,0x99f                       ; 0040353a
    PUSH 0x5d2259                       ; 0040353f
    MOV dword ptr [0x01d1d400],ECX      ; 00403544 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0040354a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040354f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00403554
    CMP EDI,0x4b0                       ; 00403557
        ;   Label: LAB_00403557
    JLE 0x00403582                      ; 0040355d
        ;   XREF to: 00403582 (CONDITIONAL_JUMP)  ; LAB_00403582
    MOV EDX,0x5d2277                    ; 0040355f
    MOV ECX,0x9a0                       ; 00403564
    PUSH 0x5d2286                       ; 00403569
    MOV dword ptr [0x01d1d400],EDX      ; 0040356e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00403574 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040357a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0040357f
    CMP dword ptr [ESP + 0x14],0x0      ; 00403582
        ;   Label: LAB_00403582
    JNZ 0x004035ac                      ; 00403587
        ;   XREF to: 004035ac (CONDITIONAL_JUMP)  ; LAB_004035ac
    MOV EDX,0x5d22a6                    ; 00403589
    MOV ECX,0x9a1                       ; 0040358e
    PUSH 0x5d22b5                       ; 00403593
    MOV dword ptr [0x01d1d400],EDX      ; 00403598 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040359e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004035a4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004035a9
    MOV EAX,[0x0061b498]                ; 004035ac | DAT_0061b498
        ;   Label: LAB_004035ac
    MOV [0x00713a38],EAX                ; 004035b1 | DAT_00713a38
    MOV EAX,[0x0061b49c]                ; 004035b6 | DAT_0061b49c
    MOV EDX,dword ptr [0x01c4354c]      ; 004035bb | DAT_01c4354c
    MOV [0x00713a3c],EAX                ; 004035c1 | DAT_00713a3c
    MOV EAX,[0x01c4f008]                ; 004035c6 | DAT_01c4f008
    XOR ECX,ECX                         ; 004035cb
    MOV [0x00713a40],EAX                ; 004035cd | DAT_00713a40
    MOV EAX,[0x01c4f00c]                ; 004035d2 | DAT_01c4f00c
    MOV dword ptr [0x0061b498],EBP      ; 004035d7 | DAT_0061b498
    MOV [0x00713a44],EAX                ; 004035dd | DAT_00713a44
    MOV EAX,[0x01c4f010]                ; 004035e2 | DAT_01c4f010
    DEC EBP                             ; 004035e7
    MOV [0x00713a48],EAX                ; 004035e8 | DAT_00713a48
    MOV EAX,[0x01c4f014]                ; 004035ed | DAT_01c4f014
    MOV dword ptr [0x0061b49c],EDI      ; 004035f2 | DAT_0061b49c
    MOV [0x00713a4c],EAX                ; 004035f8 | DAT_00713a4c
    MOV EAX,[0x0061b4a0]                ; 004035fd | DAT_0061b4a0
    MOV dword ptr [0x01c4f008],ECX      ; 00403602 | DAT_01c4f008
    MOV [0x00713a50],EAX                ; 00403608 | DAT_00713a50
    MOV EAX,[0x01c4354c]                ; 0040360d | DAT_01c4354c
    MOV dword ptr [0x01c4f00c],ECX      ; 00403612 | DAT_01c4f00c
    MOV [0x00713a54],EAX                ; 00403618 | DAT_00713a54
    MOV EAX,[0x01c43550]                ; 0040361d | DAT_01c43550
    MOV dword ptr [0x01c4f010],EBP      ; 00403622 | DAT_01c4f010
    SUB EAX,EDX                         ; 00403628
    MOV dword ptr [0x0061b4a0],ESI      ; 0040362a | DAT_0061b4a0
    MOV [0x00713a58],EAX                ; 00403630 | DAT_00713a58
    LEA EAX,[EDI + -0x1]                ; 00403635
    MOV EDX,dword ptr [ESP + 0x14]      ; 00403638
    MOV [0x01c4f014],EAX                ; 0040363c | DAT_01c4f014
    TEST EDI,EDI                        ; 00403641
    JLE 0x00403660                      ; 00403643
        ;   XREF to: 00403660 (CONDITIONAL_JUMP)  ; LAB_00403660
    LEA ECX,[EDI*0x4 + 0x0]             ; 00403645
    XOR EAX,EAX                         ; 0040364c
    MOV dword ptr [EAX + 0x1c4354c],EDX ; 0040364e
        ;   Label: LAB_0040364e
    ADD EAX,0x4                         ; 00403654
    ADD EDX,EBX                         ; 00403657
    CMP EAX,ECX                         ; 00403659
    JL 0x0040364e                       ; 0040365b
        ;   XREF to: 0040364e (CONDITIONAL_JUMP)  ; LAB_0040364e
    LEA EAX,[EAX]                       ; 0040365d
    POP EBP                             ; 00403660
        ;   Label: LAB_00403660
    POP EDI                             ; 00403661
    POP ESI                             ; 00403662
    POP EBX                             ; 00403663
    RET                                 ; 00403664
    MOV ECX,0x5d21b8                    ; 00403665
        ;   Label: LAB_00403665
    MOV EAX,0x995                       ; 0040366a
    PUSH 0x5d21c7                       ; 0040366f
    MOV dword ptr [0x01d1d400],ECX      ; 00403674 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0040367a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040367f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00403684
    JMP 0x004034a1                      ; 00403687
        ;   XREF to: 004034a1 (UNCONDITIONAL_JUMP)  ; LAB_004034a1
    CMP EDI,0x1                         ; 0040368c
        ;   Label: LAB_0040368c
    JL 0x00403535                       ; 0040368f
        ;   XREF to: 00403535 (CONDITIONAL_JUMP)  ; LAB_00403535
    JMP 0x00403557                      ; 00403695
        ;   XREF to: 00403557 (UNCONDITIONAL_JUMP)  ; LAB_00403557

