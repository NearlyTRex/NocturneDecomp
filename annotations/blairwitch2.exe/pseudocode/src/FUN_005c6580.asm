; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c6580(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005c63dc at 005c6478
;
; Referenced Globals:
;   undefined4 DAT_026807e0
;   undefined4 DAT_026807e4
;
; Called Functions:
;   FUN_005b86a0
;   FUN_005b8e40
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6580
        ;   Label: FUN_005c6580
    PUSH ESI                            ; 005c6581
    PUSH EDI                            ; 005c6582
    PUSH EBP                            ; 005c6583
    MOV EBP,dword ptr [0x026807e4]      ; 005c6584 | DAT_026807e4
    JMP 0x005c6669                      ; 005c658a
        ;   XREF to: 005c6669 (UNCONDITIONAL_JUMP)  ; LAB_005c6669
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c658f
        ;   Label: LAB_005c658f
    CMP byte ptr [ESI],0x0              ; 005c6593
    JZ 0x005c6666                       ; 005c6596
        ;   XREF to: 005c6666 (CONDITIONAL_JUMP)  ; LAB_005c6666
    XOR EAX,EAX                         ; 005c659c
        ;   Label: LAB_005c659c
    MOV AL,byte ptr [EBX]               ; 005c659e
    PUSH EAX                            ; 005c65a0
    CALL FUN_005b8e40                   ; 005c65a1
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    MOV EDI,EAX                         ; 005c65a6
    XOR EAX,EAX                         ; 005c65a8
    ADD ESP,0x4                         ; 005c65aa
    MOV AL,byte ptr [ESI]               ; 005c65ad
    PUSH EAX                            ; 005c65af
    CALL FUN_005b8e40                   ; 005c65b0
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 005c65b5
    CMP EDI,EAX                         ; 005c65b8
    JNZ 0x005c6666                      ; 005c65ba
        ;   XREF to: 005c6666 (CONDITIONAL_JUMP)  ; LAB_005c6666
    CMP byte ptr [EBX],0x3d             ; 005c65c0
    JNZ 0x005c6659                      ; 005c65c3
        ;   XREF to: 005c6659 (CONDITIONAL_JUMP)  ; LAB_005c6659
    MOV EDX,dword ptr [0x026807e4]      ; 005c65c9 | DAT_026807e4
    MOV ESI,EBP                         ; 005c65cf
    SUB ESI,EDX                         ; 005c65d1
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c65d3
    SAR ESI,0x2                         ; 005c65d7
    TEST EBX,EBX                        ; 005c65da
    JZ 0x005c6651                       ; 005c65dc
        ;   XREF to: 005c6651 (CONDITIONAL_JUMP)  ; LAB_005c6651
    MOV EDI,dword ptr [EBP]             ; 005c65e2
    MOV EBX,EBP                         ; 005c65e5
    TEST EDI,EDI                        ; 005c65e7
    JZ 0x005c65fa                       ; 005c65e9
        ;   XREF to: 005c65fa (CONDITIONAL_JUMP)  ; LAB_005c65fa
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c65eb
        ;   Label: LAB_005c65eb
    MOV dword ptr [EBX],EAX             ; 005c65ee
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c65f0
    ADD EBX,0x4                         ; 005c65f3
    TEST ECX,ECX                        ; 005c65f6
    JNZ 0x005c65eb                      ; 005c65f8
        ;   XREF to: 005c65eb (CONDITIONAL_JUMP)  ; LAB_005c65eb
    MOV EBP,dword ptr [0x026807e0]      ; 005c65fa | DAT_026807e0
        ;   Label: LAB_005c65fa
    TEST EBP,EBP                        ; 005c6600
    JZ 0x005c664a                       ; 005c6602
        ;   XREF to: 005c664a (CONDITIONAL_JUMP)  ; LAB_005c664a
    MOV EAX,EBP                         ; 005c6604
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 005c6606
    JZ 0x005c6615                       ; 005c660a
        ;   XREF to: 005c6615 (CONDITIONAL_JUMP)  ; LAB_005c6615
    PUSH EDI                            ; 005c660c
    CALL FUN_005b86a0                   ; 005c660d
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c6612
    MOV EAX,[0x026807e4]                ; 005c6615 | DAT_026807e4
        ;   Label: LAB_005c6615
    MOV EDI,EBX                         ; 005c661a
    SUB EDI,EAX                         ; 005c661c
    SAR EDI,0x2                         ; 005c661e
    PUSH EDI                            ; 005c6621
    MOV EDX,dword ptr [0x026807e0]      ; 005c6622 | DAT_026807e0
    PUSH EDX                            ; 005c6628
    PUSH EBX                            ; 005c6629
    CALL FUN_005ba1f0                   ; 005c662a
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 005c662f
    MOV dword ptr [0x026807e0],EBX      ; 005c6632 | DAT_026807e0
    CMP ESI,EDI                         ; 005c6638
    JGE 0x005c664a                      ; 005c663a
        ;   XREF to: 005c664a (CONDITIONAL_JUMP)  ; LAB_005c664a
    LEA EAX,[ESI + EBX*0x1]             ; 005c663c
    INC EAX                             ; 005c663f
        ;   Label: LAB_005c663f
    MOV BL,byte ptr [EAX]               ; 005c6640
    INC ESI                             ; 005c6642
    MOV byte ptr [EAX + -0x1],BL        ; 005c6643
    CMP ESI,EDI                         ; 005c6646
    JL 0x005c663f                       ; 005c6648
        ;   XREF to: 005c663f (CONDITIONAL_JUMP)  ; LAB_005c663f
    XOR EAX,EAX                         ; 005c664a
        ;   Label: LAB_005c664a
    POP EBP                             ; 005c664c
    POP EDI                             ; 005c664d
    POP ESI                             ; 005c664e
    POP EBX                             ; 005c664f
    RET                                 ; 005c6650
    LEA EAX,[ESI + 0x1]                 ; 005c6651
        ;   Label: LAB_005c6651
    POP EBP                             ; 005c6654
    POP EDI                             ; 005c6655
    POP ESI                             ; 005c6656
    POP EBX                             ; 005c6657
    RET                                 ; 005c6658
    INC EBX                             ; 005c6659
        ;   Label: LAB_005c6659
    MOV DH,byte ptr [ESI + 0x1]         ; 005c665a
    INC ESI                             ; 005c665d
    TEST DH,DH                          ; 005c665e
    JNZ 0x005c659c                      ; 005c6660
        ;   XREF to: 005c659c (CONDITIONAL_JUMP)  ; LAB_005c659c
    ADD EBP,0x4                         ; 005c6666
        ;   Label: LAB_005c6666
    MOV EBX,dword ptr [EBP]             ; 005c6669
        ;   Label: LAB_005c6669
    TEST EBX,EBX                        ; 005c666c
    JNZ 0x005c658f                      ; 005c666e
        ;   XREF to: 005c658f (CONDITIONAL_JUMP)  ; LAB_005c658f
    MOV EAX,[0x026807e4]                ; 005c6674 | DAT_026807e4
    SUB EAX,EBP                         ; 005c6679
    SAR EAX,0x2                         ; 005c667b
    POP EBP                             ; 005c667e
    POP EDI                             ; 005c667f
    POP ESI                             ; 005c6680
    POP EBX                             ; 005c6681
    RET                                 ; 005c6682

