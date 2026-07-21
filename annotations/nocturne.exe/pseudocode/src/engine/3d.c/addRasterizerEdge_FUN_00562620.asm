; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_addRasterizerEdge_FUN_00562620(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4d1fc
;   undefined4 DAT_02de497c
;   undefined4 DAT_02de4e00
;   undefined4 DAT_02de4e04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562620
        ;   Label: engine_3d.c_addRasterizerEdge_FUN_00562620
    PUSH EDI                            ; 00562621
    PUSH EBP                            ; 00562622
    SUB ESP,0x4                         ; 00562623
    MOV EBX,dword ptr [ESP + 0x14]      ; 00562626
    MOV EDI,dword ptr [ESP + 0x18]      ; 0056262a
    MOV EDX,dword ptr [EDI + 0x14]      ; 0056262e
    MOV EAX,dword ptr [EBX + 0x14]      ; 00562631
    SAR EDX,0x10                        ; 00562634
    SAR EAX,0x10                        ; 00562637
    CMP EAX,EDX                         ; 0056263a
    JZ 0x00562725                       ; 0056263c
        ;   XREF to: 00562725 (CONDITIONAL_JUMP)  ; LAB_00562725
    PUSH ESI                            ; 00562642
    MOV ESI,dword ptr [EDI + 0x14]      ; 00562643
    CMP ESI,dword ptr [EBX + 0x14]      ; 00562646
    JGE 0x00562657                      ; 00562649
        ;   XREF to: 00562657 (CONDITIONAL_JUMP)  ; LAB_00562657
    MOV ECX,EBX                         ; 0056264b
    MOV EBX,EDI                         ; 0056264d
    MOV EDI,ECX                         ; 0056264f
    MOV ECX,EAX                         ; 00562651
    MOV EAX,EDX                         ; 00562653
    MOV EDX,ECX                         ; 00562655
    MOV ESI,dword ptr [0x02de497c]      ; 00562657 | DAT_02de497c
        ;   Label: LAB_00562657
    LEA ECX,[ESI*0x8 + 0x0]             ; 0056265d
    ADD ECX,ESI                         ; 00562664
    MOV ESI,0x2de4980                   ; 00562666
    SHL ECX,0x3                         ; 0056266b
    ADD ESI,ECX                         ; 0056266e
    MOV dword ptr [ESI],EAX             ; 00562670
    MOV EBP,dword ptr [0x02de4e00]      ; 00562672 | DAT_02de4e00
    MOV dword ptr [ESI + 0x4],EDX       ; 00562678
    CMP EAX,EBP                         ; 0056267b
    JGE 0x00562684                      ; 0056267d
        ;   XREF to: 00562684 (CONDITIONAL_JUMP)  ; LAB_00562684
    MOV [0x02de4e00],EAX                ; 0056267f | DAT_02de4e00
    CMP EDX,dword ptr [0x02de4e04]      ; 00562684 | DAT_02de4e04
        ;   Label: LAB_00562684
    JLE 0x00562692                      ; 0056268a
        ;   XREF to: 00562692 (CONDITIONAL_JUMP)  ; LAB_00562692
    MOV dword ptr [0x02de4e04],EDX      ; 0056268c | DAT_02de4e04
    MOV EDX,dword ptr [EBX + 0x14]      ; 00562692
        ;   Label: LAB_00562692
    MOV ECX,dword ptr [EDI + 0x14]      ; 00562695
    SUB ECX,EDX                         ; 00562698
    CMP ECX,0x10000                     ; 0056269a
    JNC 0x0056272c                      ; 005626a0
        ;   XREF to: 0056272c (CONDITIONAL_JUMP)  ; LAB_0056272c
    XOR ECX,ECX                         ; 005626a6
    MOV EAX,dword ptr [EDI + 0x10]      ; 005626a8
        ;   Label: LAB_005626a8
    MOV EDX,dword ptr [EBX + 0x10]      ; 005626ab
    MOV EBP,dword ptr [EBX + 0x14]      ; 005626ae
    SUB EAX,EDX                         ; 005626b1
    AND EBP,0xffff                      ; 005626b3
    MOV EDX,EAX                         ; 005626b9
    MOV EAX,ECX                         ; 005626bb
    XOR EBP,0xffff                      ; 005626bd
    IMUL EDX                            ; 005626c3
    SHRD EAX,EDX,0x10                   ; 005626c5
    MOV EDX,EAX                         ; 005626c9
    MOV dword ptr [ESI + 0xc],EAX       ; 005626cb
    MOV EAX,EBP                         ; 005626ce
    IMUL EDX                            ; 005626d0
    SHRD EAX,EDX,0x10                   ; 005626d2
    MOV dword ptr [ESP + 0x4],EAX       ; 005626d6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005626da
    MOV EAX,dword ptr [EBX + 0x10]      ; 005626de
    ADD EAX,EDX                         ; 005626e1
    MOV dword ptr [ESI + 0x8],EAX       ; 005626e3
    MOV EDX,dword ptr [EDI + 0x8]       ; 005626e6
    SUB EDX,dword ptr [EBX + 0x8]       ; 005626e9
    MOV EAX,ECX                         ; 005626ec
    SHL EDX,0x8                         ; 005626ee
    IMUL EDX                            ; 005626f1
    SHRD EAX,EDX,0x10                   ; 005626f3
    MOV dword ptr [ESI + 0x2c],EAX      ; 005626f7
    MOV ECX,dword ptr [EBX + 0x8]       ; 005626fa
    MOV EAX,[0x01b4d1fc]                ; 005626fd | DAT_01b4d1fc
    SHL ECX,0x8                         ; 00562702
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00562705
    SUB ECX,EAX                         ; 00562708
    MOV EAX,EBP                         ; 0056270a
    IMUL EDX                            ; 0056270c
    SHRD EAX,EDX,0x10                   ; 0056270e
    MOV EDX,dword ptr [0x02de497c]      ; 00562712 | DAT_02de497c
    ADD ECX,EAX                         ; 00562718
    INC EDX                             ; 0056271a
    MOV dword ptr [ESI + 0x28],ECX      ; 0056271b
    MOV dword ptr [0x02de497c],EDX      ; 0056271e | DAT_02de497c
    POP ESI                             ; 00562724
    ADD ESP,0x4                         ; 00562725
        ;   Label: LAB_00562725
    POP EBP                             ; 00562728
    POP EDI                             ; 00562729
    POP EBX                             ; 0056272a
    RET                                 ; 0056272b
    MOV EAX,0xffffffff                  ; 0056272c
        ;   Label: LAB_0056272c
    XOR EDX,EDX                         ; 00562731
    DIV ECX                             ; 00562733
    MOV ECX,EAX                         ; 00562735
    JMP 0x005626a8                      ; 00562737
        ;   XREF to: 005626a8 (UNCONDITIONAL_JUMP)  ; LAB_005626a8

