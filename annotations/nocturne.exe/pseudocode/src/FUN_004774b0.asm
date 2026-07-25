; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004774b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bcde24
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01bd1d94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004774b0
        ;   Label: FUN_004774b0
    MOV ECX,dword ptr [0x01bcde24]      ; 004774b1 | DAT_01bcde24
    MOV EAX,dword ptr [ESP + 0x8]       ; 004774b7
    CMP dword ptr [EAX + 0x8],0x0       ; 004774bb
    JZ 0x00477514                       ; 004774bf
        ;   XREF to: 00477514 (CONDITIONAL_JUMP)  ; LAB_00477514
    XOR EDX,EDX                         ; 004774c1
        ;   Label: LAB_004774c1
    CMP ECX,EAX                         ; 004774c3
        ;   Label: LAB_004774c3
    JNZ 0x00477576                      ; 004774c5
        ;   XREF to: 00477576 (CONDITIONAL_JUMP)  ; LAB_00477576
    MOV BH,byte ptr [0x01bd1d94]        ; 004774cb | DAT_01bd1d94
    MOV dword ptr [EAX + 0x20],EDX      ; 004774d1
    TEST BH,0x1                         ; 004774d4
    JNZ 0x0047756c                      ; 004774d7
        ;   XREF to: 0047756c (CONDITIONAL_JUMP)  ; LAB_0047756c
    XOR ECX,EAX                         ; 004774dd
    TEST EDX,EDX                        ; 004774df
    JZ 0x0047756c                       ; 004774e1
        ;   XREF to: 0047756c (CONDITIONAL_JUMP)  ; LAB_0047756c
    PUSH EDI                            ; 004774e7
    MOV EBX,dword ptr [EAX]             ; 004774e8
    MOV dword ptr [EAX + 0x20],0x0      ; 004774ea
    CMP EBX,0x1                         ; 004774f1
    JZ 0x0047754a                       ; 004774f4
        ;   XREF to: 0047754a (CONDITIONAL_JUMP)  ; LAB_0047754a
    CMP dword ptr [EAX + 0x4],0x0       ; 004774f6
    SETZ DL                             ; 004774fa
    AND EDX,0xff                        ; 004774fd
    MOV dword ptr [EAX + 0x4],EDX       ; 00477503
    MOV EAX,0x1                         ; 00477506
        ;   Label: LAB_00477506
    POP EDI                             ; 0047750b
    MOV dword ptr [0x01bcde24],ECX      ; 0047750c | DAT_01bcde24
    POP EBX                             ; 00477512
    RET                                 ; 00477513
    MOV EDX,dword ptr [0x01bd1d8c]      ; 00477514 | DAT_01bd1d8c
        ;   Label: LAB_00477514
    CMP EDX,dword ptr [EAX + 0x10]      ; 0047751a
    JL 0x004774c1                       ; 0047751d
        ;   XREF to: 004774c1 (CONDITIONAL_JUMP)  ; LAB_004774c1
    MOV EDX,dword ptr [0x01bd1d90]      ; 0047751f | DAT_01bd1d90
    CMP EDX,dword ptr [EAX + 0x14]      ; 00477525
    JL 0x004774c1                       ; 00477528
        ;   XREF to: 004774c1 (CONDITIONAL_JUMP)  ; LAB_004774c1
    MOV EDX,dword ptr [0x01bd1d8c]      ; 0047752a | DAT_01bd1d8c
    CMP EDX,dword ptr [EAX + 0x18]      ; 00477530
    JGE 0x004774c1                      ; 00477533
        ;   XREF to: 004774c1 (CONDITIONAL_JUMP)  ; LAB_004774c1
    MOV EDX,dword ptr [0x01bd1d90]      ; 00477535 | DAT_01bd1d90
    CMP EDX,dword ptr [EAX + 0x1c]      ; 0047753b
    JGE 0x004774c1                      ; 0047753e
        ;   XREF to: 004774c1 (CONDITIONAL_JUMP)  ; LAB_004774c1
    MOV EDX,0x1                         ; 00477540
    JMP 0x004774c3                      ; 00477545
        ;   XREF to: 004774c3 (UNCONDITIONAL_JUMP)  ; LAB_004774c3
    MOV EDI,dword ptr [EAX + 0x4]       ; 0047754a
        ;   Label: LAB_0047754a
    ADD EDI,EBX                         ; 0047754d
    MOV dword ptr [EAX + 0x4],EDI       ; 0047754f
    CMP EDI,0x2                         ; 00477552
    JLE 0x00477506                      ; 00477555
        ;   XREF to: 00477506 (CONDITIONAL_JUMP)  ; LAB_00477506
    MOV dword ptr [EAX + 0x4],0x0       ; 00477557
    MOV EAX,0x1                         ; 0047755e
    POP EDI                             ; 00477563
    MOV dword ptr [0x01bcde24],ECX      ; 00477564 | DAT_01bcde24
    POP EBX                             ; 0047756a
    RET                                 ; 0047756b
    XOR EAX,EAX                         ; 0047756c
        ;   Label: LAB_0047756c
    MOV dword ptr [0x01bcde24],ECX      ; 0047756e | DAT_01bcde24
    POP EBX                             ; 00477574
    RET                                 ; 00477575
    TEST ECX,ECX                        ; 00477576
        ;   Label: LAB_00477576
    JNZ 0x00477587                      ; 00477578
        ;   XREF to: 00477587 (CONDITIONAL_JUMP)  ; LAB_00477587
    TEST byte ptr [0x01bd1d94],0x1      ; 0047757a | DAT_01bd1d94
    JZ 0x00477587                       ; 00477581
        ;   XREF to: 00477587 (CONDITIONAL_JUMP)  ; LAB_00477587
    TEST EDX,EDX                        ; 00477583
    JNZ 0x00477591                      ; 00477585
        ;   XREF to: 00477591 (CONDITIONAL_JUMP)  ; LAB_00477591
    XOR EAX,EAX                         ; 00477587
        ;   Label: LAB_00477587
    MOV dword ptr [0x01bcde24],ECX      ; 00477589 | DAT_01bcde24
    POP EBX                             ; 0047758f
    RET                                 ; 00477590
    MOV ECX,EAX                         ; 00477591
        ;   Label: LAB_00477591
    MOV dword ptr [EAX + 0x20],0x1      ; 00477593
    XOR EAX,EAX                         ; 0047759a
    MOV dword ptr [0x01bcde24],ECX      ; 0047759c | DAT_01bcde24
    POP EBX                             ; 004775a2
    RET                                 ; 004775a3

