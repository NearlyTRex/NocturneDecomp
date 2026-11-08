; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004664c0(uint param_1,uint param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00466f90 at 00467028
;   FUN_00467920 at 00467986
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c38
;   undefined4 DAT_01ba5c48
;   undefined4 DAT_01ba5c4c
;   undefined4 DAT_01c2a38c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004664c0
        ;   Label: FUN_004664c0
    PUSH ESI                            ; 004664c1
    PUSH EDI                            ; 004664c2
    MOV EDI,dword ptr [0x01ba5c48]      ; 004664c3 | DAT_01ba5c48
    MOV EDX,dword ptr [ESP + 0x10]      ; 004664c9
    MOV ESI,dword ptr [ESP + 0x14]      ; 004664cd
    MOV ECX,dword ptr [0x006141c0]      ; 004664d1 | DAT_006141c0
    CMP ECX,0x8                         ; 004664d7
    JZ 0x00466550                       ; 004664da
        ;   XREF to: 00466550 (CONDITIONAL_JUMP)  ; LAB_00466550
    MOV EBX,dword ptr [ESP + 0x18]      ; 004664e0
    SHL EBX,0x2                         ; 004664e4
    CMP ECX,0x10                        ; 004664e7
    JNZ 0x00466576                      ; 004664ea
        ;   XREF to: 00466576 (CONDITIONAL_JUMP)  ; LAB_00466576
    LEA ECX,[EDX + EDX*0x1]             ; 004664f0
    MOV EAX,dword ptr [EBX + 0x1c2a38c] ; 004664f3 | DAT_01c2a38c
    MOV EBX,EDX                         ; 004664f9
    ADD EAX,ECX                         ; 004664fb
    TEST DL,0x1                         ; 004664fd
    JZ 0x0046651d                       ; 00466500
        ;   XREF to: 0046651d (CONDITIONAL_JUMP)  ; LAB_0046651d
    XOR EBX,EDX                         ; 00466502
    MOV CL,byte ptr [0x01ba5c38]        ; 00466504 | DAT_01ba5c38
    MOV BX,word ptr [EAX]               ; 0046650a
    SHR EBX,CL                          ; 0046650d
    MOV ECX,EBX                         ; 0046650f
    ADD EAX,0x2                         ; 00466511
    AND ECX,EDI                         ; 00466514
    LEA EBX,[EDX + 0x1]                 ; 00466516
    MOV word ptr [EAX + -0x2],CX        ; 00466519
    CMP EBX,ESI                         ; 0046651d
        ;   Label: LAB_0046651d
    JGE 0x00466540                      ; 0046651f
        ;   XREF to: 00466540 (CONDITIONAL_JUMP)  ; LAB_00466540
    MOV CL,byte ptr [0x01ba5c38]        ; 00466521 | DAT_01ba5c38
        ;   Label: LAB_00466521
    MOV EDX,dword ptr [EAX]             ; 00466527
    SHR EDX,CL                          ; 00466529
    MOV ECX,dword ptr [0x01ba5c4c]      ; 0046652b | DAT_01ba5c4c
    ADD EAX,0x4                         ; 00466531
    AND EDX,ECX                         ; 00466534
    ADD EBX,0x2                         ; 00466536
    MOV dword ptr [EAX + -0x4],EDX      ; 00466539
    CMP EBX,ESI                         ; 0046653c
    JL 0x00466521                       ; 0046653e
        ;   XREF to: 00466521 (CONDITIONAL_JUMP)  ; LAB_00466521
    JZ 0x0046655a                       ; 00466540
        ;   XREF to: 0046655a (CONDITIONAL_JUMP)  ; LAB_0046655a
        ;   Label: LAB_00466540
    LEA EAX,[EAX]                       ; 00466542
    LEA EDX,[EDX]                       ; 00466548
    MOV EAX,EAX                         ; 0046654e
    MOV dword ptr [0x01ba5c48],EDI      ; 00466550 | DAT_01ba5c48
        ;   Label: LAB_00466550
    POP EDI                             ; 00466556
    POP ESI                             ; 00466557
    POP EBX                             ; 00466558
    RET                                 ; 00466559
    XOR EDX,EDX                         ; 0046655a
        ;   Label: LAB_0046655a
    MOV CL,byte ptr [0x01ba5c38]        ; 0046655c | DAT_01ba5c38
    MOV DX,word ptr [EAX]               ; 00466562
    SHR EDX,CL                          ; 00466565
    AND EDX,EDI                         ; 00466567
    MOV word ptr [EAX],DX               ; 00466569
    MOV dword ptr [0x01ba5c48],EDI      ; 0046656c | DAT_01ba5c48
    POP EDI                             ; 00466572
    POP ESI                             ; 00466573
    POP EBX                             ; 00466574
    RET                                 ; 00466575
    CMP ECX,0x20                        ; 00466576
        ;   Label: LAB_00466576
    JNZ 0x00466550                      ; 00466579
        ;   XREF to: 00466550 (CONDITIONAL_JUMP)  ; LAB_00466550
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046657b
    MOV ECX,dword ptr [EBX + 0x1c2a38c] ; 00466582 | DAT_01c2a38c
    MOV EBX,EDX                         ; 00466588
    ADD EAX,ECX                         ; 0046658a
    CMP EDX,ESI                         ; 0046658c
    JG 0x00466550                       ; 0046658e
        ;   XREF to: 00466550 (CONDITIONAL_JUMP)  ; LAB_00466550
    MOV CL,byte ptr [0x01ba5c38]        ; 00466590 | DAT_01ba5c38
        ;   Label: LAB_00466590
    MOV EDX,dword ptr [EAX]             ; 00466596
    SHR EDX,CL                          ; 00466598
    ADD EAX,0x4                         ; 0046659a
    AND EDX,EDI                         ; 0046659d
    INC EBX                             ; 0046659f
    MOV dword ptr [EAX + -0x4],EDX      ; 004665a0
    CMP EBX,ESI                         ; 004665a3
    JLE 0x00466590                      ; 004665a5
        ;   XREF to: 00466590 (CONDITIONAL_JUMP)  ; LAB_00466590
    MOV dword ptr [0x01ba5c48],EDI      ; 004665a7 | DAT_01ba5c48
    POP EDI                             ; 004665ad
    POP ESI                             ; 004665ae
    POP EBX                             ; 004665af
    RET                                 ; 004665b0

