; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00579550(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00579720 at 00579794
;
; Called Functions:
;   FUN_00578d60
;   FUN_005b77c0
;   FUN_005b8c30
;   FUN_005b9cf0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00579550
        ;   Label: FUN_00579550
    SUB ESP,0x18                        ; 00579551
    PUSH 0x2b8                          ; 00579554
    PUSH 0x0                            ; 00579559
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0057955b
    PUSH EDX                            ; 0057955f
    CALL FUN_005b77c0                   ; 00579560
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00579565
    MOV ECX,dword ptr [ESP + 0x20]      ; 00579568
    TEST ECX,ECX                        ; 0057956c
    JNZ 0x00579577                      ; 0057956e
        ;   XREF to: 00579577 (CONDITIONAL_JUMP)  ; LAB_00579577
    XOR EAX,EAX                         ; 00579570
    ADD ESP,0x18                        ; 00579572
    POP EBP                             ; 00579575
    RET                                 ; 00579576
    PUSH EDI                            ; 00579577
        ;   Label: LAB_00579577
    PUSH ESI                            ; 00579578
    PUSH EBX                            ; 00579579
    PUSH 0x7f                           ; 0057957a
    MOV EBX,dword ptr [ECX]             ; 0057957c
    PUSH EBX                            ; 0057957e
    MOV ESI,dword ptr [ESP + 0x38]      ; 0057957f
    PUSH ESI                            ; 00579583
    CALL FUN_005b9cf0                   ; 00579584
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 00579589
    LEA EAX,[ESI + 0x84]                ; 0057958c
    XOR EDI,EDI                         ; 00579592
    MOV dword ptr [ESP + 0x10],EAX      ; 00579594
    MOV dword ptr [ESP + 0x18],EDI      ; 00579598
    MOV dword ptr [ESP + 0x20],EAX      ; 0057959c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005795a0
        ;   Label: LAB_005795a0
    MOV EDX,dword ptr [ESP + 0x18]      ; 005795a4
    MOV EAX,dword ptr [EAX + 0x4]       ; 005795a8
    ADD EAX,EDX                         ; 005795ab
    MOV EAX,dword ptr [EAX]             ; 005795ad
    TEST EAX,EAX                        ; 005795af
    JNZ 0x00579622                      ; 005795b1
        ;   XREF to: 00579622 (CONDITIONAL_JUMP)  ; LAB_00579622
    MOV EAX,dword ptr [ESP + 0x30]      ; 005795b3
        ;   Label: LAB_005795b3
    MOV dword ptr [EAX + 0x80],EDI      ; 005795b7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005795bd
    CMP word ptr [EAX + 0x8],0x2        ; 005795c1
    JNZ 0x00579607                      ; 005795c6
        ;   XREF to: 00579607 (CONDITIONAL_JUMP)  ; LAB_00579607
    CMP word ptr [EAX + 0xa],0x4        ; 005795c8
    JNZ 0x00579607                      ; 005795cd
        ;   XREF to: 00579607 (CONDITIONAL_JUMP)  ; LAB_00579607
    MOV EAX,dword ptr [ESP + 0x30]      ; 005795cf
    XOR EDI,EDI                         ; 005795d3
    ADD EAX,0x288                       ; 005795d5
    MOV dword ptr [ESP + 0x1c],EDI      ; 005795da
    MOV dword ptr [ESP + 0xc],EAX       ; 005795de
    MOV dword ptr [ESP + 0x14],EAX      ; 005795e2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005795e6
        ;   Label: LAB_005795e6
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005795ea
    MOV EAX,dword ptr [EAX + 0xc]       ; 005795ee
    ADD EAX,EBX                         ; 005795f1
    MOV EAX,dword ptr [EAX]             ; 005795f3
    TEST EAX,EAX                        ; 005795f5
    JNZ 0x0057969f                      ; 005795f7
        ;   XREF to: 0057969f (CONDITIONAL_JUMP)  ; LAB_0057969f
    MOV EAX,dword ptr [ESP + 0x30]      ; 005795fd
        ;   Label: LAB_005795fd
    MOV dword ptr [EAX + 0x284],EDI     ; 00579601
    MOV EAX,dword ptr [ESP + 0x30]      ; 00579607
        ;   Label: LAB_00579607
    CMP dword ptr [EAX + 0x284],0x0     ; 0057960b
    SETG AL                             ; 00579612
    AND EAX,0xff                        ; 00579615
    POP EBX                             ; 0057961a
    POP ESI                             ; 0057961b
    POP EDI                             ; 0057961c
    ADD ESP,0x18                        ; 0057961d
    POP EBP                             ; 00579620
    RET                                 ; 00579621
    PUSH 0x7f                           ; 00579622
        ;   Label: LAB_00579622
    PUSH EAX                            ; 00579624
    MOV EBP,dword ptr [ESP + 0x28]      ; 00579625
    LEA ECX,[EDX + 0x4]                 ; 00579629
    PUSH EBP                            ; 0057962c
    MOV dword ptr [ESP + 0x24],ECX      ; 0057962d
    CALL FUN_005b9cf0                   ; 00579631
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 00579636
    MOV ESI,dword ptr [ESP + 0x30]      ; 00579639
    PUSH ESI                            ; 0057963d
    PUSH EBP                            ; 0057963e
    CALL FUN_005b8c30                   ; 0057963f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 00579644
    TEST EAX,EAX                        ; 00579647
    JNZ 0x00579659                      ; 00579649
        ;   XREF to: 00579659 (CONDITIONAL_JUMP)  ; LAB_00579659
    CMP EDI,0x4                         ; 0057964b
        ;   Label: LAB_0057964b
    JL 0x005795a0                       ; 0057964e
        ;   XREF to: 005795a0 (CONDITIONAL_JUMP)  ; LAB_005795a0
    JMP 0x005795b3                      ; 00579654
        ;   XREF to: 005795b3 (UNCONDITIONAL_JUMP)  ; LAB_005795b3
    XOR EBX,EBX                         ; 00579659
        ;   Label: LAB_00579659
    TEST EDI,EDI                        ; 0057965b
    JLE 0x00579671                      ; 0057965d
        ;   XREF to: 00579671 (CONDITIONAL_JUMP)  ; LAB_00579671
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057965f
    PUSH ESI                            ; 00579663
        ;   Label: LAB_00579663
    PUSH EBP                            ; 00579664
    CALL FUN_005b8c30                   ; 00579665
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0057966a
    TEST EAX,EAX                        ; 0057966d
    JNZ 0x00579692                      ; 0057966f
        ;   XREF to: 00579692 (CONDITIONAL_JUMP)  ; LAB_00579692
    CMP EBX,EDI                         ; 00579671
        ;   Label: LAB_00579671
    JL 0x0057964b                       ; 00579673
        ;   XREF to: 0057964b (CONDITIONAL_JUMP)  ; LAB_0057964b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00579675
    ADD EDX,0x80                        ; 00579679
    INC EDI                             ; 0057967f
    MOV dword ptr [ESP + 0x20],EDX      ; 00579680
    CMP EDI,0x4                         ; 00579684
    JL 0x005795a0                       ; 00579687
        ;   XREF to: 005795a0 (CONDITIONAL_JUMP)  ; LAB_005795a0
    JMP 0x005795b3                      ; 0057968d
        ;   XREF to: 005795b3 (UNCONDITIONAL_JUMP)  ; LAB_005795b3
    INC EBX                             ; 00579692
        ;   Label: LAB_00579692
    ADD ESI,0x80                        ; 00579693
    CMP EBX,EDI                         ; 00579699
    JL 0x00579663                       ; 0057969b
        ;   XREF to: 00579663 (CONDITIONAL_JUMP)  ; LAB_00579663
    JMP 0x00579671                      ; 0057969d
        ;   XREF to: 00579671 (UNCONDITIONAL_JUMP)  ; LAB_00579671
    XOR EBX,EBX                         ; 0057969f
        ;   Label: LAB_0057969f
    MOV BL,byte ptr [EAX + 0x3]         ; 005796a1
    PUSH EBX                            ; 005796a4
    XOR EBX,EBX                         ; 005796a5
    MOV BL,byte ptr [EAX + 0x2]         ; 005796a7
    PUSH EBX                            ; 005796aa
    XOR EBX,EBX                         ; 005796ab
    MOV BL,byte ptr [EAX + 0x1]         ; 005796ad
    PUSH EBX                            ; 005796b0
    MOV AL,byte ptr [EAX]               ; 005796b1
    MOV ESI,dword ptr [ESP + 0x28]      ; 005796b3
    AND EAX,0xff                        ; 005796b7
    LEA EBP,[EDI*0x4 + 0x0]             ; 005796bc
    PUSH EAX                            ; 005796c3
    MOV EAX,dword ptr [ESP + 0x24]      ; 005796c4
    ADD ESI,0x4                         ; 005796c8
    PUSH EAX                            ; 005796cb
    XOR EBX,EBX                         ; 005796cc
    MOV dword ptr [ESP + 0x30],ESI      ; 005796ce
    CALL FUN_00578d60                   ; 005796d2
        ;   XREF to: 00578d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00578d60()
    ADD ESP,0x14                        ; 005796d7
    TEST EDI,EDI                        ; 005796da
    JLE 0x005796f3                      ; 005796dc
        ;   XREF to: 005796f3 (CONDITIONAL_JUMP)  ; LAB_005796f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 005796de
    MOV EAX,dword ptr [ESP + 0x30]      ; 005796e2
    ADD EBP,EDX                         ; 005796e6
    MOV ECX,dword ptr [EBP]             ; 005796e8
        ;   Label: LAB_005796e8
    CMP ECX,dword ptr [EAX + 0x288]     ; 005796eb
    JNZ 0x00579711                      ; 005796f1
        ;   XREF to: 00579711 (CONDITIONAL_JUMP)  ; LAB_00579711
    CMP EBX,EDI                         ; 005796f3
        ;   Label: LAB_005796f3
    JL 0x00579703                       ; 005796f5
        ;   XREF to: 00579703 (CONDITIONAL_JUMP)  ; LAB_00579703
    MOV EBX,dword ptr [ESP + 0x14]      ; 005796f7
    ADD EBX,0x4                         ; 005796fb
    INC EDI                             ; 005796fe
    MOV dword ptr [ESP + 0x14],EBX      ; 005796ff
    CMP EDI,0xc                         ; 00579703
        ;   Label: LAB_00579703
    JL 0x005795e6                       ; 00579706
        ;   XREF to: 005795e6 (CONDITIONAL_JUMP)  ; LAB_005795e6
    JMP 0x005795fd                      ; 0057970c
        ;   XREF to: 005795fd (UNCONDITIONAL_JUMP)  ; LAB_005795fd
    INC EBX                             ; 00579711
        ;   Label: LAB_00579711
    ADD EAX,0x4                         ; 00579712
    CMP EBX,EDI                         ; 00579715
    JL 0x005796e8                       ; 00579717
        ;   XREF to: 005796e8 (CONDITIONAL_JUMP)  ; LAB_005796e8
    JMP 0x005796f3                      ; 00579719
        ;   XREF to: 005796f3 (UNCONDITIONAL_JUMP)  ; LAB_005796f3

