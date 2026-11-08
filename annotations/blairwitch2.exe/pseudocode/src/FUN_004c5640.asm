; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5640(int param_1)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
;
; XREF[2]:
;   FUN_004c5840 at 004c59ea
;   FUN_0052d0e0 at 0052d25e
;
; Referenced Globals:
;   undefined4 DAT_005f7a60
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0046a3a0
;   FUN_0046b8e0
;   FUN_0046b940
;   FUN_0046b960
;   FUN_0046ca00
;   FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c5640
        ;   Label: FUN_004c5640
    PUSH EDI                            ; 004c5641
    PUSH EBP                            ; 004c5642
    SUB ESP,0x3c                        ; 004c5643
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004c5646
    PUSH EDX                            ; 004c564a
    CALL FUN_004089d0                   ; 004c564b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004c5650
    PUSH 0x0                            ; 004c5653
    MOV ECX,dword ptr [ESP + 0x50]      ; 004c5655
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c5659
    PUSH ECX                            ; 004c565d
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004c565e
    LEA ESI,[ESP + 0x20]                ; 004c5664
    LEA EDI,[ESP + 0x8]                 ; 004c5668
    CALL dword ptr [EAX + 0x24]         ; 004c566c
    MOV ECX,0x6                         ; 004c566f
    ADD ESP,0x4                         ; 004c5674
    LEA EAX,[ESP + 0x4]                 ; 004c5677
    LEA ESI,[ESP + 0x1c]                ; 004c567b
    PUSH EAX                            ; 004c567f
    MOVSD.REP ES:EDI,ESI                ; 004c5680
    CALL FUN_0041a840                   ; 004c5682
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004c5687
    TEST EAX,EAX                        ; 004c568a
    JZ 0x004c5815                       ; 004c568c
        ;   XREF to: 004c5815 (CONDITIONAL_JUMP)  ; LAB_004c5815
    PUSH EBX                            ; 004c5692
    MOV EBX,dword ptr [0x0060b280]      ; 004c5693 | DAT_0060b280
    PUSH EBX                            ; 004c5699 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 004c569a
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004c569f
    MOV EBX,dword ptr [ESP + 0x50]      ; 004c56a2
    ADD EBX,0x4d0                       ; 004c56a6
    TEST EAX,EAX                        ; 004c56ac
    JZ 0x004c5829                       ; 004c56ae
        ;   XREF to: 004c5829 (CONDITIONAL_JUMP)  ; LAB_004c5829
    PUSH 0x0                            ; 004c56b4
    MOV EDI,dword ptr [0x0060b280]      ; 004c56b6 | DAT_0060b280
    PUSH EDI                            ; 004c56bc | DAT_01ba5c50
    CALL FUN_0046b940                   ; 004c56bd
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b940()
    ADD ESP,0x8                         ; 004c56c2
    PUSH EBX                            ; 004c56c5
    MOV EBP,dword ptr [0x0060b280]      ; 004c56c6 | DAT_0060b280
    PUSH EBP                            ; 004c56cc | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 004c56cd
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 004c56d2
    PUSH 0x1                            ; 004c56d5
    MOV EAX,[0x0060b280]                ; 004c56d7 | DAT_0060b280
    PUSH EAX                            ; 004c56dc | DAT_01ba5c50
    CALL FUN_0046b940                   ; 004c56dd
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b940()
    ADD ESP,0x8                         ; 004c56e2
        ;   Label: LAB_004c56e2
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c56e5
    MOV EDX,dword ptr [EAX + 0xc90]     ; 004c56e9
    XOR EBP,EBP                         ; 004c56ef
    TEST EDX,EDX                        ; 004c56f1
    JLE 0x004c5780                      ; 004c56f3
        ;   XREF to: 004c5780 (CONDITIONAL_JUMP)  ; LAB_004c5780
    LEA EDI,[EAX + 0x4e8]               ; 004c56f9
    XOR ESI,ESI                         ; 004c56ff
    LEA EBX,[ESP + 0x34]                ; 004c5701
        ;   Label: LAB_004c5701
    MOV EAX,EDI                         ; 004c5705
    MOV EDX,dword ptr [0x0060b280]      ; 004c5707 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c570d
    FMUL float ptr [0x005f7a60]         ; 004c570f | DAT_005f7a60
    FISTP dword ptr [EBX]               ; 004c5715
    FLD float ptr [EAX + 0x4]           ; 004c5717
    FMUL float ptr [0x005f7a60]         ; 004c571a | DAT_005f7a60
    FISTP dword ptr [EBX + 0x4]         ; 004c5720
    FLD float ptr [EAX + 0x8]           ; 004c5723
    FMUL float ptr [0x005f7a60]         ; 004c5726 | DAT_005f7a60
    FISTP dword ptr [EBX + 0x8]         ; 004c572c
    LEA EAX,[ESP + 0x34]                ; 004c572f
    PUSH EAX                            ; 004c5733
    MOV EAX,dword ptr [EDX]             ; 004c5734 | DAT_01ba5c50
    ADD EAX,ESI                         ; 004c5736
    PUSH EAX                            ; 004c5738
    CALL FUN_0055d723                   ; 004c5739
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV EAX,[0x0060b280]                ; 004c573e | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 004c5743 | DAT_01ba5c50
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004c5745
    MOV EBX,dword ptr [EAX]             ; 004c574d | DAT_01ba5c50
    MOV dword ptr [ESI + EBX*0x1 + 0x24],0xffff ; 004c574f
    MOV EAX,dword ptr [EAX]             ; 004c5757 | DAT_01ba5c50
    ADD ESP,0x8                         ; 004c5759
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 004c575c
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c5764
    INC EBP                             ; 004c5768
    ADD EDI,0xc                         ; 004c5769
    MOV EBX,dword ptr [EAX + 0xc90]     ; 004c576c
    ADD ESI,0x30                        ; 004c5772
    CMP EBP,EBX                         ; 004c5775
    JL 0x004c5701                       ; 004c5777
        ;   XREF to: 004c5701 (CONDITIONAL_JUMP)  ; LAB_004c5701
    LEA EAX,[EAX]                       ; 004c5779
    NOP                                 ; 004c577f
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c5780
        ;   Label: LAB_004c5780
    MOV ESI,dword ptr [EAX + 0x2d8]     ; 004c5784
    PUSH ESI                            ; 004c578a
    MOV EDI,dword ptr [0x0060b280]      ; 004c578b | DAT_0060b280
    PUSH EDI                            ; 004c5791 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 004c5792
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 004c5797
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c579a
    MOV EBP,dword ptr [EAX + 0xc94]     ; 004c579e
    XOR EBX,EBX                         ; 004c57a4
    TEST EBP,EBP                        ; 004c57a6
    JLE 0x004c5800                      ; 004c57a8
        ;   XREF to: 004c5800 (CONDITIONAL_JUMP)  ; LAB_004c5800
    LEA EDI,[EAX + 0x808]               ; 004c57aa
    MOV ESI,EAX                         ; 004c57b0
    MOV dword ptr [ESI + 0x810],0x0     ; 004c57b2
        ;   Label: LAB_004c57b2
    PUSH EDI                            ; 004c57bc
    MOV dword ptr [ESI + 0x814],0x0     ; 004c57bd
    MOV EAX,[0x0060b280]                ; 004c57c7 | DAT_0060b280
    MOV dword ptr [ESI + 0x818],0x0     ; 004c57cc
    PUSH EAX                            ; 004c57d6 | DAT_01ba5c50
    MOV dword ptr [ESI + 0x81c],0x0     ; 004c57d7
    CALL FUN_0046a3a0                   ; 004c57e1
        ;   XREF to: 0046a3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a3a0()
    ADD ESP,0x8                         ; 004c57e6
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c57e9
    ADD ESI,0x48                        ; 004c57ed
    INC EBX                             ; 004c57f0
    MOV EDX,dword ptr [EAX + 0xc94]     ; 004c57f1
    ADD EDI,0x48                        ; 004c57f7
    CMP EBX,EDX                         ; 004c57fa
    JL 0x004c57b2                       ; 004c57fc
        ;   XREF to: 004c57b2 (CONDITIONAL_JUMP)  ; LAB_004c57b2
    MOV EAX,EAX                         ; 004c57fe
    MOV ECX,dword ptr [ESP + 0x50]      ; 004c5800
        ;   Label: LAB_004c5800
    PUSH ECX                            ; 004c5804
    CALL FUN_00408a10                   ; 004c5805
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004c580a
    POP EBX                             ; 004c580d
    ADD ESP,0x3c                        ; 004c580e
    POP EBP                             ; 004c5811
    POP EDI                             ; 004c5812
    POP ESI                             ; 004c5813
    RET                                 ; 004c5814
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004c5815
        ;   Label: LAB_004c5815
    PUSH ECX                            ; 004c5819
    CALL FUN_00408a10                   ; 004c581a
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004c581f
    ADD ESP,0x3c                        ; 004c5822
    POP EBP                             ; 004c5825
    POP EDI                             ; 004c5826
    POP ESI                             ; 004c5827
    RET                                 ; 004c5828
    PUSH EBX                            ; 004c5829
        ;   Label: LAB_004c5829
    MOV ESI,dword ptr [0x0060b280]      ; 004c582a | DAT_0060b280
    PUSH ESI                            ; 004c5830 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 004c5831
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    JMP 0x004c56e2                      ; 004c5836
        ;   XREF to: 004c56e2 (UNCONDITIONAL_JUMP)  ; LAB_004c56e2

