; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0053a610(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052c0e0 at 0052ca44
;   FUN_0052d980 at 0052db57
;
; Called Functions:
;   FUN_0053a1b0
;   FUN_0053a720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a610
        ;   Label: FUN_0053a610
    PUSH ESI                            ; 0053a611
    PUSH EDI                            ; 0053a612
    PUSH EBP                            ; 0053a613
    SUB ESP,0x18                        ; 0053a614
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053a617
    MOV EDX,dword ptr [EDI + 0x15b424]  ; 0053a61b
    XOR EAX,EAX                         ; 0053a621
    TEST EDX,EDX                        ; 0053a623
    JLE 0x0053a650                      ; 0053a625
        ;   XREF to: 0053a650 (CONDITIONAL_JUMP)  ; LAB_0053a650
    MOV EBX,EDI                         ; 0053a627
    MOV dword ptr [EBX + 0x15b468],0xffffffff ; 0053a629
        ;   Label: LAB_0053a629
    INC EAX                             ; 0053a633
    MOV ECX,dword ptr [EDI + 0x15b424]  ; 0053a634
    ADD EBX,0x44                        ; 0053a63a
    CMP EAX,ECX                         ; 0053a63d
    JL 0x0053a629                       ; 0053a63f
        ;   XREF to: 0053a629 (CONDITIONAL_JUMP)  ; LAB_0053a629
    LEA EAX,[EAX]                       ; 0053a641
    LEA EDX,[EDX]                       ; 0053a647
    LEA EAX,[EAX]                       ; 0053a64d
    XOR EBX,EBX                         ; 0053a650
        ;   Label: LAB_0053a650
    MOV ESI,dword ptr [EDI + 0x15b424]  ; 0053a652
    MOV dword ptr [ESP + 0x4],EBX       ; 0053a658
    TEST ESI,ESI                        ; 0053a65c
    JLE 0x0053a6aa                      ; 0053a65e
        ;   XREF to: 0053a6aa (CONDITIONAL_JUMP)  ; LAB_0053a6aa
    LEA EAX,[EDI + 0x15b428]            ; 0053a660
    MOV dword ptr [ESP],EBX             ; 0053a666
    MOV dword ptr [ESP + 0xc],EAX       ; 0053a669
    MOV EBX,dword ptr [ESP + 0x4]       ; 0053a66d
        ;   Label: LAB_0053a66d
    PUSH EBX                            ; 0053a671
    PUSH EDI                            ; 0053a672
    CALL FUN_0053a720                   ; 0053a673
        ;   XREF to: 0053a720 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a720()
    INC EBX                             ; 0053a678
    ADD ESP,0x8                         ; 0053a679
    MOV ESI,dword ptr [EDI + 0x15b424]  ; 0053a67c
    MOV dword ptr [ESP + 0x14],EAX      ; 0053a682
    CMP EBX,ESI                         ; 0053a686
    JL 0x0053a6b2                       ; 0053a688
        ;   XREF to: 0053a6b2 (CONDITIONAL_JUMP)  ; LAB_0053a6b2
    MOV EBP,dword ptr [ESP]             ; 0053a68e
        ;   Label: LAB_0053a68e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053a691
    MOV EDX,dword ptr [EDI + 0x15b424]  ; 0053a695
    ADD EBP,0x44                        ; 0053a69b
    INC EAX                             ; 0053a69e
    MOV dword ptr [ESP],EBP             ; 0053a69f
    MOV dword ptr [ESP + 0x4],EAX       ; 0053a6a2
    CMP EAX,EDX                         ; 0053a6a6
    JL 0x0053a66d                       ; 0053a6a8
        ;   XREF to: 0053a66d (CONDITIONAL_JUMP)  ; LAB_0053a66d
    ADD ESP,0x18                        ; 0053a6aa
        ;   Label: LAB_0053a6aa
    POP EBP                             ; 0053a6ad
    POP EDI                             ; 0053a6ae
    POP ESI                             ; 0053a6af
    POP EBX                             ; 0053a6b0
        ;   Label: LAB_0053a6b0
    RET                                 ; 0053a6b1
    IMUL ESI,EBX,0x44                   ; 0053a6b2
        ;   Label: LAB_0053a6b2
    MOV EAX,dword ptr [ESP]             ; 0053a6b5
    MOV dword ptr [ESP + 0x8],EAX       ; 0053a6b8
    ADD ESI,dword ptr [ESP + 0xc]       ; 0053a6bc
    JMP 0x0053a6de                      ; 0053a6c0
        ;   XREF to: 0053a6de (UNCONDITIONAL_JUMP)  ; LAB_0053a6de
    PUSH EBP                            ; 0053a6c2
        ;   Label: LAB_0053a6c2
    PUSH ESI                            ; 0053a6c3
    CALL FUN_0053a1b0                   ; 0053a6c4
        ;   XREF to: 0053a1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a1b0()
    ADD ESP,0x8                         ; 0053a6c9
    TEST EAX,EAX                        ; 0053a6cc
    JNZ 0x0053a70c                      ; 0053a6ce
        ;   XREF to: 0053a70c (CONDITIONAL_JUMP)  ; LAB_0053a70c
    INC EBX                             ; 0053a6d0
        ;   Label: LAB_0053a6d0
    MOV EBP,dword ptr [EDI + 0x15b424]  ; 0053a6d1
    ADD ESI,0x44                        ; 0053a6d7
    CMP EBX,EBP                         ; 0053a6da
    JGE 0x0053a68e                      ; 0053a6dc
        ;   XREF to: 0053a68e (CONDITIONAL_JUMP)  ; LAB_0053a68e
    PUSH EBX                            ; 0053a6de
        ;   Label: LAB_0053a6de
    PUSH EDI                            ; 0053a6df
    CALL FUN_0053a720                   ; 0053a6e0
        ;   XREF to: 0053a720 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a720()
    ADD ESP,0x8                         ; 0053a6e5
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053a6e8
    MOV dword ptr [ESP + 0x10],EAX      ; 0053a6ec
    CMP EAX,EDX                         ; 0053a6f0
    JZ 0x0053a6d0                       ; 0053a6f2
        ;   XREF to: 0053a6d0 (CONDITIONAL_JUMP)  ; LAB_0053a6d0
    MOV EBP,dword ptr [ESP + 0xc]       ; 0053a6f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0053a6f8
    PUSH ESI                            ; 0053a6fc
    ADD EBP,ECX                         ; 0053a6fd
    PUSH EBP                            ; 0053a6ff
    CALL FUN_0053a1b0                   ; 0053a700
        ;   XREF to: 0053a1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a1b0()
    ADD ESP,0x8                         ; 0053a705
    TEST EAX,EAX                        ; 0053a708
    JZ 0x0053a6c2                       ; 0053a70a
        ;   XREF to: 0053a6c2 (CONDITIONAL_JUMP)  ; LAB_0053a6c2
    IMUL EAX,dword ptr [ESP + 0x10],0x44 ; 0053a70c
        ;   Label: LAB_0053a70c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0053a711
    MOV dword ptr [EDI + EAX*0x1 + 0x15b468],EBP ; 0053a715
    JMP 0x0053a6d0                      ; 0053a71c
        ;   XREF to: 0053a6d0 (UNCONDITIONAL_JUMP)  ; LAB_0053a6d0

