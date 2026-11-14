; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_buildHardwarePalettes_FUN_00437600(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e3d0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437600
        ;   Label: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00437600
    PUSH ESI                            ; 00437601
    PUSH EDI                            ; 00437602
    PUSH EBP                            ; 00437603
    SUB ESP,0x8                         ; 00437604
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00437607
    MOV EDX,dword ptr [0x0061b4a0]      ; 0043760b | DAT_0061b4a0
    MOV dword ptr [0x01c4e3d0],EBX      ; 00437611 | DAT_01c4e3d0
    CMP EDX,0x20                        ; 00437617
    JNZ 0x0043767b                      ; 0043761a
        ;   XREF to: 0043767b (CONDITIONAL_JUMP)  ; LAB_0043767b
    MOV EDX,dword ptr [0x0061b4a0]      ; 0043761c | DAT_0061b4a0
    XOR EAX,EAX                         ; 00437622
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 00437624
        ;   Label: LAB_00437624
    MOVZX EDI,byte ptr [EBX]            ; 00437628
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 0043762b
    CMP EDX,0x20                        ; 0043762f
    JNZ 0x0043766d                      ; 00437632
        ;   XREF to: 0043766d (CONDITIONAL_JUMP)  ; LAB_0043766d
    MOV CL,byte ptr [0x01c4e9d4]        ; 00437634 | DAT_01c4e9d4
    SHL EDI,CL                          ; 0043763a
    MOV CL,byte ptr [0x01c4e9e0]        ; 0043763c | DAT_01c4e9e0
    SHL EBP,CL                          ; 00437642
    MOV CL,byte ptr [0x01c4e9ec]        ; 00437644 | DAT_01c4e9ec
    SHL ESI,CL                          ; 0043764a
    OR EDI,EBP                          ; 0043764c
    MOV ECX,ESI                         ; 0043764e
    OR ECX,EDI                          ; 00437650
    ADD EAX,0x4                         ; 00437652
        ;   Label: LAB_00437652
    ADD EBX,0x3                         ; 00437655
    MOV dword ptr [EAX + 0x1c4e3d0],ECX ; 00437658
    CMP EAX,0x400                       ; 0043765e
    JNZ 0x00437624                      ; 00437663
        ;   XREF to: 00437624 (CONDITIONAL_JUMP)  ; LAB_00437624
    ADD ESP,0x8                         ; 00437665
    POP EBP                             ; 00437668
    POP EDI                             ; 00437669
    POP ESI                             ; 0043766a
    POP EBX                             ; 0043766b
    RET                                 ; 0043766c
    MOV ECX,EBP                         ; 0043766d
        ;   Label: LAB_0043766d
    SHL EDI,0x10                        ; 0043766f
    SHL ECX,0x8                         ; 00437672
    OR ECX,EDI                          ; 00437675
    OR ECX,ESI                          ; 00437677
    JMP 0x00437652                      ; 00437679
        ;   XREF to: 00437652 (UNCONDITIONAL_JUMP)  ; LAB_00437652
    XOR ESI,ESI                         ; 0043767b
        ;   Label: LAB_0043767b
    XOR EAX,EAX                         ; 0043767d
        ;   Label: LAB_0043767d
    MOV EDI,dword ptr [0x01c4e9d8]      ; 0043767f | DAT_01c4e9d8
    MOV AL,byte ptr [EBX]               ; 00437685
    XOR EDX,EDX                         ; 00437687
    MOV dword ptr [ESP],EAX             ; 00437689
    DIV EDI                             ; 0043768c
    XOR ECX,ECX                         ; 0043768e
    MOV CL,byte ptr [EBX + 0x1]         ; 00437690
    MOV dword ptr [ESP + 0x4],ECX       ; 00437693
    MOV dword ptr [ESP],EAX             ; 00437697
    XOR EDX,EDX                         ; 0043769a
    MOV EAX,ECX                         ; 0043769c
    DIV dword ptr [0x01c4e9e4]          ; 0043769e | DAT_01c4e9e4
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 004376a4
    MOV EDI,dword ptr [0x01c4e9f0]      ; 004376a8 | DAT_01c4e9f0
    MOV dword ptr [ESP + 0x4],EAX       ; 004376ae
    XOR EDX,EDX                         ; 004376b2
    MOV EAX,EBP                         ; 004376b4
    DIV EDI                             ; 004376b6
    MOV CL,byte ptr [0x01c4e9d4]        ; 004376b8 | DAT_01c4e9d4
    MOV EDX,dword ptr [ESP]             ; 004376be
    MOV EDI,EAX                         ; 004376c1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004376c3
    SHL EDX,CL                          ; 004376c7
    MOV CL,byte ptr [0x01c4e9e0]        ; 004376c9 | DAT_01c4e9e0
    SHL EAX,CL                          ; 004376cf
    MOV CL,byte ptr [0x01c4e9ec]        ; 004376d1 | DAT_01c4e9ec
    OR EAX,EDX                          ; 004376d7
    SHL EDI,CL                          ; 004376d9
    ADD ESI,0x2                         ; 004376db
    OR EAX,EDI                          ; 004376de
    ADD EBX,0x3                         ; 004376e0
    MOV word ptr [ESI + 0x1c4e7d2],AX   ; 004376e3
    CMP ESI,0x200                       ; 004376ea
    JNZ 0x0043767d                      ; 004376f0
        ;   XREF to: 0043767d (CONDITIONAL_JUMP)  ; LAB_0043767d
    ADD ESP,0x8                         ; 004376f2
    POP EBP                             ; 004376f5
    POP EDI                             ; 004376f6
    POP ESI                             ; 004376f7
    POP EBX                             ; 004376f8
    RET                                 ; 004376f9

