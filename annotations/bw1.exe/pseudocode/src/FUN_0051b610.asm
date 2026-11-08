; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b610(int *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0051b8d0 at 0051ba10
;   FUN_0051bad0 at 0051bb27
;   FUN_0051bdc0 at 0051be62
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_00622c18
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf618
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_004dc000
;   FUN_0051b2b0
;   FUN_0051b420
;   FUN_0051b7b0
;   FUN_0054d3c0
;   FUN_00573b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b610
        ;   Label: FUN_0051b610
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b611
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b615
    CMP EAX,dword ptr [EBX]             ; 0051b619
    JNZ 0x0051b61f                      ; 0051b61b
        ;   XREF to: 0051b61f (CONDITIONAL_JUMP)  ; LAB_0051b61f
    POP EBX                             ; 0051b61d
    RET                                 ; 0051b61e
    PUSH ESI                            ; 0051b61f
        ;   Label: LAB_0051b61f
    LEA EDX,[EBX + 0x8]                 ; 0051b620
    MOV dword ptr [EBX],EAX             ; 0051b623
    SHL EAX,0x8                         ; 0051b625
    ADD EAX,EDX                         ; 0051b628
    PUSH EAX                            ; 0051b62a
    MOV ECX,dword ptr [0x00622c18]      ; 0051b62b | DAT_00622c18
    PUSH ECX                            ; 0051b631 | DAT_01e82168
    CALL FUN_0054d3c0                   ; 0051b632
        ;   XREF to: 0054d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3c0()
    MOV ESI,dword ptr [EBX + 0x1008]    ; 0051b637
    ADD ESP,0x8                         ; 0051b63d
    TEST ESI,ESI                        ; 0051b640
    JZ 0x0051b684                       ; 0051b642
        ;   XREF to: 0051b684 (CONDITIONAL_JUMP)  ; LAB_0051b684
    PUSH EBX                            ; 0051b644
    CALL FUN_0051b420                   ; 0051b645
        ;   XREF to: 0051b420 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b420()
    ADD ESP,0x4                         ; 0051b64a
        ;   Label: LAB_0051b64a
    PUSH EDI                            ; 0051b64d
    MOV EDI,dword ptr [EBX]             ; 0051b64e
    CMP EDI,dword ptr [EBX + 0x1454]    ; 0051b650
    JNZ 0x0051b68c                      ; 0051b656
        ;   XREF to: 0051b68c (CONDITIONAL_JUMP)  ; LAB_0051b68c
    XOR EBX,EBX                         ; 0051b658
        ;   Label: LAB_0051b658
    XOR ESI,ESI                         ; 0051b65a
    POP EDI                             ; 0051b65c
    MOV EAX,[0x00622c18]                ; 0051b65d | DAT_00622c18
        ;   Label: LAB_0051b65d
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0051b662 | DAT_01fcf2cc
    JGE 0x0051b697                      ; 0051b668
        ;   XREF to: 0051b697 (CONDITIONAL_JUMP)  ; LAB_0051b697
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 0051b66a | DAT_01fcf2d0
    PUSH EAX                            ; 0051b671
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051b672
    ADD EBX,0x4                         ; 0051b678
    INC ESI                             ; 0051b67b
    CALL dword ptr [EDX + 0x50]         ; 0051b67c
    ADD ESP,0x4                         ; 0051b67f
    JMP 0x0051b65d                      ; 0051b682
        ;   XREF to: 0051b65d (UNCONDITIONAL_JUMP)  ; LAB_0051b65d
    PUSH EBX                            ; 0051b684
        ;   Label: LAB_0051b684
    CALL FUN_0051b7b0                   ; 0051b685
        ;   XREF to: 0051b7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b7b0()
    JMP 0x0051b64a                      ; 0051b68a
        ;   XREF to: 0051b64a (UNCONDITIONAL_JUMP)  ; LAB_0051b64a
    PUSH EBX                            ; 0051b68c
        ;   Label: LAB_0051b68c
    CALL FUN_0051b2b0                   ; 0051b68d
        ;   XREF to: 0051b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b2b0()
    ADD ESP,0x4                         ; 0051b692
    JMP 0x0051b658                      ; 0051b695
        ;   XREF to: 0051b658 (UNCONDITIONAL_JUMP)  ; LAB_0051b658
    CALL FUN_00573b00                   ; 0051b697
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b00()
        ;   Label: LAB_0051b697
    MOV EAX,[0x0061d95c]                ; 0051b69c | DAT_0061d95c
    PUSH EAX                            ; 0051b6a1 | DAT_01ccf390
    CALL FUN_004dc000                   ; 0051b6a2
        ;   XREF to: 004dc000 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc000()
    MOV EAX,[0x0061d95c]                ; 0051b6a7 | DAT_0061d95c | DAT_01ccf390
    ADD ESP,0x4                         ; 0051b6ac
    MOV dword ptr [EAX + 0x288],0x1     ; 0051b6af | DAT_01ccf618
    POP ESI                             ; 0051b6b9
    POP EBX                             ; 0051b6ba
    RET                                 ; 0051b6bb

