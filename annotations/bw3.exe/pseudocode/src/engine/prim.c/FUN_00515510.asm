; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_prim_c_FUN_00515510(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed2c88
;   undefined4 DAT_01ed318c
;   undefined4 DAT_01ed3190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515510
        ;   Label: engine_prim.c_FUN_00515510
    PUSH ESI                            ; 00515511
    PUSH EDI                            ; 00515512
    PUSH EBP                            ; 00515513
    SUB ESP,0x4                         ; 00515514
    MOV ESI,dword ptr [ESP + 0x18]      ; 00515517
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051551b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051551f
    MOV EBX,dword ptr [ESI + 0x14]      ; 00515522
    SAR EDI,0x10                        ; 00515525
    SAR EBX,0x10                        ; 00515528
    CMP EBX,EDI                         ; 0051552b
    JZ 0x005156b4                       ; 0051552d
        ;   XREF to: 005156b4 (CONDITIONAL_JUMP)  ; LAB_005156b4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00515533
    CMP EDX,dword ptr [ESI + 0x14]      ; 00515536
    JGE 0x00515547                      ; 00515539
        ;   XREF to: 00515547 (CONDITIONAL_JUMP)  ; LAB_00515547
    MOV EAX,ESI                         ; 0051553b
    MOV ESI,EBP                         ; 0051553d
    MOV EBP,EAX                         ; 0051553f
    MOV EAX,EBX                         ; 00515541
    MOV EBX,EDI                         ; 00515543
    MOV EDI,EAX                         ; 00515545
    MOV EAX,[0x01ed2c88]                ; 00515547 | DAT_01ed2c88
        ;   Label: LAB_00515547
    LEA ECX,[EAX*0x4 + 0x0]             ; 0051554c
    ADD ECX,EAX                         ; 00515553
    SHL ECX,0x4                         ; 00515555
    ADD ECX,0x1ed2c8c                   ; 00515558
    MOV dword ptr [ECX],EBX             ; 0051555e
    MOV EAX,[0x01ed318c]                ; 00515560 | DAT_01ed318c
    MOV dword ptr [ECX + 0x4],EDI       ; 00515565
    CMP EBX,EAX                         ; 00515568
    JGE 0x00515572                      ; 0051556a
        ;   XREF to: 00515572 (CONDITIONAL_JUMP)  ; LAB_00515572
    MOV dword ptr [0x01ed318c],EBX      ; 0051556c | DAT_01ed318c
    CMP EDI,dword ptr [0x01ed3190]      ; 00515572 | DAT_01ed3190
        ;   Label: LAB_00515572
    JLE 0x00515580                      ; 00515578
        ;   XREF to: 00515580 (CONDITIONAL_JUMP)  ; LAB_00515580
    MOV dword ptr [0x01ed3190],EDI      ; 0051557a | DAT_01ed3190
    MOV EDI,dword ptr [ESI + 0x14]      ; 00515580
        ;   Label: LAB_00515580
    MOV EBX,dword ptr [EBP + 0x14]      ; 00515583
    SUB EBX,EDI                         ; 00515586
    CMP EBX,0x10000                     ; 00515588
    JNC 0x005156bc                      ; 0051558e
        ;   XREF to: 005156bc (CONDITIONAL_JUMP)  ; LAB_005156bc
    XOR EBX,EBX                         ; 00515594
    MOV EAX,dword ptr [EBP + 0x10]      ; 00515596
        ;   Label: LAB_00515596
    MOV EDX,dword ptr [ESI + 0x10]      ; 00515599
    MOV EDI,dword ptr [ESI + 0x14]      ; 0051559c
    SUB EAX,EDX                         ; 0051559f
    AND EDI,0xffff                      ; 005155a1
    MOV EDX,EAX                         ; 005155a7
    MOV EAX,EBX                         ; 005155a9
    XOR DI,0xffff                       ; 005155ab
    IMUL EDX                            ; 005155af
    SHRD EAX,EDX,0x10                   ; 005155b1
    MOV EDX,EAX                         ; 005155b5
    MOV dword ptr [ECX + 0xc],EAX       ; 005155b7
    MOV EAX,EDI                         ; 005155ba
    IMUL EDX                            ; 005155bc
    SHRD EAX,EDX,0x10                   ; 005155be
    MOV dword ptr [ESP],EAX             ; 005155c2
    MOV EDX,dword ptr [ESP]             ; 005155c5
    MOV EAX,dword ptr [ESI + 0x10]      ; 005155c8
    ADD EAX,EDX                         ; 005155cb
    MOV dword ptr [ECX + 0x8],EAX       ; 005155cd
    MOV EAX,dword ptr [EBP + 0x18]      ; 005155d0
    MOV EDX,dword ptr [ESI + 0x18]      ; 005155d3
    SUB EAX,EDX                         ; 005155d6
    MOV EDX,EAX                         ; 005155d8
    MOV EAX,EBX                         ; 005155da
    IMUL EDX                            ; 005155dc
    SHRD EAX,EDX,0x10                   ; 005155de
    MOV EDX,EAX                         ; 005155e2
    MOV dword ptr [ECX + 0x1c],EAX      ; 005155e4
    MOV EAX,EDI                         ; 005155e7
    IMUL EDX                            ; 005155e9
    SHRD EAX,EDX,0x10                   ; 005155eb
    MOV dword ptr [ESP],EAX             ; 005155ef
    MOV EDX,dword ptr [ESP]             ; 005155f2
    MOV EAX,dword ptr [ESI + 0x18]      ; 005155f5
    ADD EAX,EDX                         ; 005155f8
    MOV dword ptr [ECX + 0x18],EAX      ; 005155fa
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005155fd
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00515600
    SUB EAX,EDX                         ; 00515603
    MOV EDX,EAX                         ; 00515605
    MOV EAX,EBX                         ; 00515607
    IMUL EDX                            ; 00515609
    SHRD EAX,EDX,0x10                   ; 0051560b
    MOV EDX,EAX                         ; 0051560f
    MOV dword ptr [ECX + 0x24],EAX      ; 00515611
    MOV EAX,EDI                         ; 00515614
    IMUL EDX                            ; 00515616
    SHRD EAX,EDX,0x10                   ; 00515618
    MOV dword ptr [ESP],EAX             ; 0051561c
    MOV EDX,dword ptr [ESP]             ; 0051561f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00515622
    ADD EAX,EDX                         ; 00515625
    MOV dword ptr [ECX + 0x20],EAX      ; 00515627
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051562a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0051562d
    SUB EAX,EDX                         ; 00515630
    MOV EDX,EAX                         ; 00515632
    MOV EAX,EBX                         ; 00515634
    IMUL EDX                            ; 00515636
    SHRD EAX,EDX,0x10                   ; 00515638
    MOV EDX,EAX                         ; 0051563c
    MOV dword ptr [ECX + 0x14],EAX      ; 0051563e
    MOV EAX,EDI                         ; 00515641
    IMUL EDX                            ; 00515643
    SHRD EAX,EDX,0x10                   ; 00515645
    MOV dword ptr [ESP],EAX             ; 00515649
    MOV EDX,dword ptr [ESP]             ; 0051564c
    MOV EAX,dword ptr [ESI + 0x20]      ; 0051564f
    ADD EAX,EDX                         ; 00515652
    MOV dword ptr [ECX + 0x10],EAX      ; 00515654
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00515657
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0051565a
    SUB EAX,EDX                         ; 0051565d
    MOV EDX,EAX                         ; 0051565f
    MOV EAX,EBX                         ; 00515661
    IMUL EDX                            ; 00515663
    SHRD EAX,EDX,0x10                   ; 00515665
    MOV EDX,EAX                         ; 00515669
    MOV dword ptr [ECX + 0x34],EAX      ; 0051566b
    MOV EAX,EDI                         ; 0051566e
    IMUL EDX                            ; 00515670
    SHRD EAX,EDX,0x10                   ; 00515672
    MOV dword ptr [ESP],EAX             ; 00515676
    MOV EDX,dword ptr [ESP]             ; 00515679
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0051567c
    ADD EAX,EDX                         ; 0051567f
    MOV dword ptr [ECX + 0x30],EAX      ; 00515681
    MOV EDX,dword ptr [EBP + 0x8]       ; 00515684
    SUB EDX,dword ptr [ESI + 0x8]       ; 00515687
    MOV EAX,EBX                         ; 0051568a
    IMUL EDX                            ; 0051568c
    SHRD EAX,EDX,0x10                   ; 0051568e
    MOV EDX,EAX                         ; 00515692
    MOV dword ptr [ECX + 0x2c],EAX      ; 00515694
    MOV EAX,EDI                         ; 00515697
    IMUL EDX                            ; 00515699
    SHRD EAX,EDX,0x10                   ; 0051569b
    MOV EDX,dword ptr [0x01ed2c88]      ; 0051569f | DAT_01ed2c88
    MOV EBX,dword ptr [ESI + 0x8]       ; 005156a5
    INC EDX                             ; 005156a8
    ADD EBX,EAX                         ; 005156a9
    MOV dword ptr [0x01ed2c88],EDX      ; 005156ab | DAT_01ed2c88
    MOV dword ptr [ECX + 0x28],EBX      ; 005156b1
    ADD ESP,0x4                         ; 005156b4
        ;   Label: LAB_005156b4
    POP EBP                             ; 005156b7
    POP EDI                             ; 005156b8
    POP ESI                             ; 005156b9
    POP EBX                             ; 005156ba
    RET                                 ; 005156bb
    MOV EAX,0xffffffff                  ; 005156bc
        ;   Label: LAB_005156bc
    XOR EDX,EDX                         ; 005156c1
    DIV EBX                             ; 005156c3
    MOV EBX,EAX                         ; 005156c5
    JMP 0x00515596                      ; 005156c7
        ;   XREF to: 00515596 (UNCONDITIONAL_JUMP)  ; LAB_00515596

