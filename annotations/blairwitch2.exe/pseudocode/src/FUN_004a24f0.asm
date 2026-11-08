; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a24f0(int *param_1)
;
;
; Called Functions:
;   FUN_0040d5a0
;   FUN_0040d900
;   FUN_005b7790
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a24f0
        ;   Label: FUN_004a24f0
    PUSH ESI                            ; 004a24f1
    PUSH EDI                            ; 004a24f2
    PUSH EBP                            ; 004a24f3
    SUB ESP,0x110                       ; 004a24f4
    MOV EAX,dword ptr [ESP + 0x124]     ; 004a24fa
    MOV EAX,dword ptr [EAX]             ; 004a2501
    MOV dword ptr [ESP + 0x108],EAX     ; 004a2503
    MOV EAX,dword ptr [ESP + 0x124]     ; 004a250a
    ADD EAX,0x78                        ; 004a2511
    MOV dword ptr [ESP + 0x100],EAX     ; 004a2514
    MOV EAX,dword ptr [ESP + 0x124]     ; 004a251b
    MOV EBP,dword ptr [ESP + 0x124]     ; 004a2522
    ADD EAX,0x18                        ; 004a2529
    XOR EBX,EBX                         ; 004a252c
    MOV dword ptr [ESP + 0x104],EAX     ; 004a252e
    MOV EAX,dword ptr [ESP + 0x124]     ; 004a2535
    ADD EBP,0xd8                        ; 004a253c
    MOV dword ptr [ESP + 0x10c],EAX     ; 004a2542
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004a2549
        ;   Label: LAB_004a2549
    MOV ESI,EBX                         ; 004a2550
    MOV DL,byte ptr [EAX + 0x18]        ; 004a2552
    SHL ESI,0x5                         ; 004a2555
    TEST DL,DL                          ; 004a2558
    JNZ 0x004a2592                      ; 004a255a
        ;   XREF to: 004a2592 (CONDITIONAL_JUMP)  ; LAB_004a2592
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004a255c
        ;   Label: LAB_004a255c
    MOV EDI,dword ptr [ESP + 0x108]     ; 004a2563
    ADD EBP,0x14                        ; 004a256a
    INC EBX                             ; 004a256d
    ADD EAX,0x20                        ; 004a256e
    ADD EDI,0x23                        ; 004a2571
    MOV dword ptr [ESP + 0x10c],EAX     ; 004a2574
    MOV dword ptr [ESP + 0x108],EDI     ; 004a257b
    CMP EBX,0x3                         ; 004a2582
    JL 0x004a2549                       ; 004a2585
        ;   XREF to: 004a2549 (CONDITIONAL_JUMP)  ; LAB_004a2549
    ADD ESP,0x110                       ; 004a2587
    POP EBP                             ; 004a258d
    POP EDI                             ; 004a258e
    POP ESI                             ; 004a258f
    POP EBX                             ; 004a2590
    RET                                 ; 004a2591
    MOV EDI,dword ptr [ESP + 0x100]     ; 004a2592
        ;   Label: LAB_004a2592
    ADD EDI,ESI                         ; 004a2599
    MOV EDX,dword ptr [ESP + 0x104]     ; 004a259b
    PUSH EDI                            ; 004a25a2
    ADD ESI,EDX                         ; 004a25a3
    PUSH ESI                            ; 004a25a5
    CALL FUN_005b8130                   ; 004a25a6
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004a25ab
    TEST EAX,EAX                        ; 004a25ae
    JZ 0x004a25f1                       ; 004a25b0
        ;   XREF to: 004a25f1 (CONDITIONAL_JUMP)  ; LAB_004a25f1
    PUSH ESI                            ; 004a25b2
    PUSH 0x5d5aab                       ; 004a25b3
    LEA EAX,[ESP + 0x8]                 ; 004a25b8
    PUSH EAX                            ; 004a25bc
    CALL FUN_005b7790                   ; 004a25bd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 004a25c2
    PUSH 0x2f                           ; 004a25c5
    PUSH 0x23                           ; 004a25c7
    LEA EAX,[ESP + 0x8]                 ; 004a25c9
    PUSH EAX                            ; 004a25cd
    PUSH EBP                            ; 004a25ce
    CALL FUN_0040d5a0                   ; 004a25cf
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d5a0()
    ADD ESP,0x10                        ; 004a25d4
    PUSH EDI                            ; 004a25d7
    MOV AL,byte ptr [ESI]               ; 004a25d8
        ;   Label: LAB_004a25d8
    MOV byte ptr [EDI],AL               ; 004a25da
    CMP AL,0x0                          ; 004a25dc
    JZ 0x004a25f0                       ; 004a25de
        ;   XREF to: 004a25f0 (CONDITIONAL_JUMP)  ; LAB_004a25f0
    MOV AL,byte ptr [ESI + 0x1]         ; 004a25e0
    ADD ESI,0x2                         ; 004a25e3
    MOV byte ptr [EDI + 0x1],AL         ; 004a25e6
    ADD EDI,0x2                         ; 004a25e9
    CMP AL,0x0                          ; 004a25ec
    JNZ 0x004a25d8                      ; 004a25ee
        ;   XREF to: 004a25d8 (CONDITIONAL_JUMP)  ; LAB_004a25d8
    POP EDI                             ; 004a25f0
        ;   Label: LAB_004a25f0
    MOV EAX,dword ptr [ESP + 0x124]     ; 004a25f1
        ;   Label: LAB_004a25f1
    PUSH 0xffff                         ; 004a25f8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004a25fd
    PUSH ECX                            ; 004a2600
    MOV ESI,dword ptr [ESP + 0x110]     ; 004a2601
    PUSH ESI                            ; 004a2608
    PUSH EBP                            ; 004a2609
    CALL FUN_0040d900                   ; 004a260a
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    ADD ESP,0x10                        ; 004a260f
    JMP 0x004a255c                      ; 004a2612
        ;   XREF to: 004a255c (UNCONDITIONAL_JUMP)  ; LAB_004a255c

