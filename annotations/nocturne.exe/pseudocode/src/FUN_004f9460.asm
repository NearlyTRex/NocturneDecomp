; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9460(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01e52a68
;   undefined4 DAT_01e52a6c
;   undefined4 DAT_01e52eec
;   undefined4 DAT_01e52ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9460
        ;   Label: FUN_004f9460
    PUSH ESI                            ; 004f9461
    PUSH EDI                            ; 004f9462
    PUSH EBP                            ; 004f9463
    SUB ESP,0x4                         ; 004f9464
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f9467
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f946b
    MOV EDI,dword ptr [EBP + 0x14]      ; 004f946f
    MOV EBX,dword ptr [ESI + 0x14]      ; 004f9472
    SAR EDI,0x10                        ; 004f9475
    SAR EBX,0x10                        ; 004f9478
    CMP EBX,EDI                         ; 004f947b
    JZ 0x004f9604                       ; 004f947d
        ;   XREF to: 004f9604 (CONDITIONAL_JUMP)  ; LAB_004f9604
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f9483
    CMP EDX,dword ptr [ESI + 0x14]      ; 004f9486
    JGE 0x004f9497                      ; 004f9489
        ;   XREF to: 004f9497 (CONDITIONAL_JUMP)  ; LAB_004f9497
    MOV EAX,ESI                         ; 004f948b
    MOV ESI,EBP                         ; 004f948d
    MOV EBP,EAX                         ; 004f948f
    MOV EAX,EBX                         ; 004f9491
    MOV EBX,EDI                         ; 004f9493
    MOV EDI,EAX                         ; 004f9495
    MOV EAX,[0x01e52a68]                ; 004f9497 | DAT_01e52a68
        ;   Label: LAB_004f9497
    LEA ECX,[EAX*0x8 + 0x0]             ; 004f949c
    ADD ECX,EAX                         ; 004f94a3
    SHL ECX,0x3                         ; 004f94a5
    ADD ECX,0x1e52a6c                   ; 004f94a8
    MOV dword ptr [ECX],EBX             ; 004f94ae | DAT_01e52a6c
    MOV EAX,[0x01e52eec]                ; 004f94b0 | DAT_01e52eec
    MOV dword ptr [ECX + 0x4],EDI       ; 004f94b5
    CMP EBX,EAX                         ; 004f94b8
    JGE 0x004f94c2                      ; 004f94ba
        ;   XREF to: 004f94c2 (CONDITIONAL_JUMP)  ; LAB_004f94c2
    MOV dword ptr [0x01e52eec],EBX      ; 004f94bc | DAT_01e52eec
    CMP EDI,dword ptr [0x01e52ef0]      ; 004f94c2 | DAT_01e52ef0
        ;   Label: LAB_004f94c2
    JLE 0x004f94d0                      ; 004f94c8
        ;   XREF to: 004f94d0 (CONDITIONAL_JUMP)  ; LAB_004f94d0
    MOV dword ptr [0x01e52ef0],EDI      ; 004f94ca | DAT_01e52ef0
    MOV EDI,dword ptr [ESI + 0x14]      ; 004f94d0
        ;   Label: LAB_004f94d0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f94d3
    SUB EBX,EDI                         ; 004f94d6
    CMP EBX,0x10000                     ; 004f94d8
    JNC 0x004f960c                      ; 004f94de
        ;   XREF to: 004f960c (CONDITIONAL_JUMP)  ; LAB_004f960c
    XOR EBX,EBX                         ; 004f94e4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f94e6
        ;   Label: LAB_004f94e6
    MOV EDX,dword ptr [ESI + 0x10]      ; 004f94e9
    MOV EDI,dword ptr [ESI + 0x14]      ; 004f94ec
    SUB EAX,EDX                         ; 004f94ef
    AND EDI,0xffff                      ; 004f94f1
    MOV EDX,EAX                         ; 004f94f7
    MOV EAX,EBX                         ; 004f94f9
    XOR DI,0xffff                       ; 004f94fb
    IMUL EDX                            ; 004f94ff
    SHRD EAX,EDX,0x10                   ; 004f9501
    MOV EDX,EAX                         ; 004f9505
    MOV dword ptr [ECX + 0xc],EAX       ; 004f9507
    MOV EAX,EDI                         ; 004f950a
    IMUL EDX                            ; 004f950c
    SHRD EAX,EDX,0x10                   ; 004f950e
    MOV dword ptr [ESP],EAX             ; 004f9512
    MOV EDX,dword ptr [ESP]             ; 004f9515
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f9518
    ADD EAX,EDX                         ; 004f951b
    MOV dword ptr [ECX + 0x8],EAX       ; 004f951d
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f9520
    MOV EDX,dword ptr [ESI + 0x18]      ; 004f9523
    SUB EAX,EDX                         ; 004f9526
    MOV EDX,EAX                         ; 004f9528
    MOV EAX,EBX                         ; 004f952a
    IMUL EDX                            ; 004f952c
    SHRD EAX,EDX,0x10                   ; 004f952e
    MOV EDX,EAX                         ; 004f9532
    MOV dword ptr [ECX + 0x1c],EAX      ; 004f9534
    MOV EAX,EDI                         ; 004f9537
    IMUL EDX                            ; 004f9539
    SHRD EAX,EDX,0x10                   ; 004f953b
    MOV dword ptr [ESP],EAX             ; 004f953f
    MOV EDX,dword ptr [ESP]             ; 004f9542
    MOV EAX,dword ptr [ESI + 0x18]      ; 004f9545
    ADD EAX,EDX                         ; 004f9548
    MOV dword ptr [ECX + 0x18],EAX      ; 004f954a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f954d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004f9550
    SUB EAX,EDX                         ; 004f9553
    MOV EDX,EAX                         ; 004f9555
    MOV EAX,EBX                         ; 004f9557
    IMUL EDX                            ; 004f9559
    SHRD EAX,EDX,0x10                   ; 004f955b
    MOV EDX,EAX                         ; 004f955f
    MOV dword ptr [ECX + 0x24],EAX      ; 004f9561
    MOV EAX,EDI                         ; 004f9564
    IMUL EDX                            ; 004f9566
    SHRD EAX,EDX,0x10                   ; 004f9568
    MOV dword ptr [ESP],EAX             ; 004f956c
    MOV EDX,dword ptr [ESP]             ; 004f956f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f9572
    ADD EAX,EDX                         ; 004f9575
    MOV dword ptr [ECX + 0x20],EAX      ; 004f9577
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f957a
    MOV EDX,dword ptr [ESI + 0x20]      ; 004f957d
    SUB EAX,EDX                         ; 004f9580
    MOV EDX,EAX                         ; 004f9582
    MOV EAX,EBX                         ; 004f9584
    IMUL EDX                            ; 004f9586
    SHRD EAX,EDX,0x10                   ; 004f9588
    MOV EDX,EAX                         ; 004f958c
    MOV dword ptr [ECX + 0x14],EAX      ; 004f958e
    MOV EAX,EDI                         ; 004f9591
    IMUL EDX                            ; 004f9593
    SHRD EAX,EDX,0x10                   ; 004f9595
    MOV dword ptr [ESP],EAX             ; 004f9599
    MOV EDX,dword ptr [ESP]             ; 004f959c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004f959f
    ADD EAX,EDX                         ; 004f95a2
    MOV dword ptr [ECX + 0x10],EAX      ; 004f95a4
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004f95a7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004f95aa
    SUB EAX,EDX                         ; 004f95ad
    MOV EDX,EAX                         ; 004f95af
    MOV EAX,EBX                         ; 004f95b1
    IMUL EDX                            ; 004f95b3
    SHRD EAX,EDX,0x10                   ; 004f95b5
    MOV EDX,EAX                         ; 004f95b9
    MOV dword ptr [ECX + 0x34],EAX      ; 004f95bb
    MOV EAX,EDI                         ; 004f95be
    IMUL EDX                            ; 004f95c0
    SHRD EAX,EDX,0x10                   ; 004f95c2
    MOV dword ptr [ESP],EAX             ; 004f95c6
    MOV EDX,dword ptr [ESP]             ; 004f95c9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004f95cc
    ADD EAX,EDX                         ; 004f95cf
    MOV dword ptr [ECX + 0x30],EAX      ; 004f95d1
    MOV EDX,dword ptr [EBP + 0x8]       ; 004f95d4
    SUB EDX,dword ptr [ESI + 0x8]       ; 004f95d7
    MOV EAX,EBX                         ; 004f95da
    IMUL EDX                            ; 004f95dc
    SHRD EAX,EDX,0x10                   ; 004f95de
    MOV EDX,EAX                         ; 004f95e2
    MOV dword ptr [ECX + 0x2c],EAX      ; 004f95e4
    MOV EAX,EDI                         ; 004f95e7
    IMUL EDX                            ; 004f95e9
    SHRD EAX,EDX,0x10                   ; 004f95eb
    MOV EDX,dword ptr [0x01e52a68]      ; 004f95ef | DAT_01e52a68
    MOV EBX,dword ptr [ESI + 0x8]       ; 004f95f5
    INC EDX                             ; 004f95f8
    ADD EBX,EAX                         ; 004f95f9
    MOV dword ptr [0x01e52a68],EDX      ; 004f95fb | DAT_01e52a68
    MOV dword ptr [ECX + 0x28],EBX      ; 004f9601
    ADD ESP,0x4                         ; 004f9604
        ;   Label: LAB_004f9604
    POP EBP                             ; 004f9607
    POP EDI                             ; 004f9608
    POP ESI                             ; 004f9609
    POP EBX                             ; 004f960a
    RET                                 ; 004f960b
    MOV EAX,0xffffffff                  ; 004f960c
        ;   Label: LAB_004f960c
    XOR EDX,EDX                         ; 004f9611
    DIV EBX                             ; 004f9613
    MOV EBX,EAX                         ; 004f9615
    JMP 0x004f94e6                      ; 004f9617
        ;   XREF to: 004f94e6 (UNCONDITIONAL_JUMP)  ; LAB_004f94e6

