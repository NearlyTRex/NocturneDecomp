; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004806d0(int param_1,char *param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0047ac50 at 0047bba4
;   FUN_004ff2c0 at 00501d49
;
; Referenced Globals:
;   string s_..\\core\\event.cpp_00580b39
;   string s_CEventList::setCounter_-_too_man_00580b4b
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00480900
;   FUN_004c8440
;   FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004806d0
        ;   Label: FUN_004806d0
    PUSH ESI                            ; 004806d1
    PUSH EDI                            ; 004806d2
    PUSH EBP                            ; 004806d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004806d4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004806d8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004806dc
    PUSH EDX                            ; 004806e0
    PUSH EBX                            ; 004806e1
    CALL FUN_00480900                   ; 004806e2
        ;   XREF to: 00480900 (UNCONDITIONAL_CALL)  ; undefined FUN_00480900()
    MOV ESI,EAX                         ; 004806e7
    ADD ESP,0x8                         ; 004806e9
    TEST EAX,EAX                        ; 004806ec
    JL 0x0048075e                       ; 004806ee
        ;   XREF to: 0048075e (CONDITIONAL_JUMP)  ; LAB_0048075e
    LEA EDI,[EAX*0x4 + 0x0]             ; 004806f0
    TEST EBP,EBP                        ; 004806f7
    JZ 0x00480707                       ; 004806f9
        ;   XREF to: 00480707 (CONDITIONAL_JUMP)  ; LAB_00480707
    MOV dword ptr [EDI + EBX*0x1 + 0x34c0],EBP ; 004806fb
    POP EBP                             ; 00480702
        ;   Label: LAB_00480702
    POP EDI                             ; 00480703
    POP ESI                             ; 00480704
    POP EBX                             ; 00480705
    RET                                 ; 00480706
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00480707
        ;   Label: LAB_00480707
    DEC EAX                             ; 0048070d
    MOV dword ptr [EBX + 0x337c],EAX    ; 0048070e
    SUB EAX,ESI                         ; 00480714
    SHL EAX,0x5                         ; 00480716
    PUSH EAX                            ; 00480719
    MOV EAX,ESI                         ; 0048071a
    SHL EAX,0x5                         ; 0048071c
    LEA EBP,[EBX + 0x3380]              ; 0048071f
    LEA EDX,[EAX + 0x20]                ; 00480725
    ADD EDX,EBP                         ; 00480728
    PUSH EDX                            ; 0048072a
    ADD EAX,EBP                         ; 0048072b
    PUSH EAX                            ; 0048072d
    CALL FUN_00566170                   ; 0048072e
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00480733
    SUB EAX,ESI                         ; 00480739
    ADD ESP,0xc                         ; 0048073b
    SHL EAX,0x2                         ; 0048073e
    ADD EBX,0x34c0                      ; 00480741
    PUSH EAX                            ; 00480747
    LEA EAX,[EDI + 0x4]                 ; 00480748
    ADD EAX,EBX                         ; 0048074b
    PUSH EAX                            ; 0048074d
    ADD EBX,EDI                         ; 0048074e
    PUSH EBX                            ; 00480750
    CALL FUN_00566170                   ; 00480751
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    ADD ESP,0xc                         ; 00480756
    POP EBP                             ; 00480759
    POP EDI                             ; 0048075a
    POP ESI                             ; 0048075b
    POP EBX                             ; 0048075c
    RET                                 ; 0048075d
    TEST EBP,EBP                        ; 0048075e
        ;   Label: LAB_0048075e
    JZ 0x00480702                       ; 00480760
        ;   XREF to: 00480702 (CONDITIONAL_JUMP)  ; LAB_00480702
    CMP dword ptr [EBX + 0x337c],0xa    ; 00480762
    JL 0x0048078e                       ; 00480769
        ;   XREF to: 0048078e (CONDITIONAL_JUMP)  ; LAB_0048078e
    MOV ESI,0x580b39                    ; 0048076b | = "..\\core\\event.cpp"
    MOV EDI,0xab2                       ; 00480770
    PUSH 0x580b4b                       ; 00480775 | = "CEventList::setCounter - too many cou..."
    MOV dword ptr [0x01cc4800],ESI      ; 0048077a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00480780 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00480786
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0048078b
    MOV EAX,dword ptr [EBX + 0x337c]    ; 0048078e
        ;   Label: LAB_0048078e
    LEA EDI,[EBX + 0x3380]              ; 00480794
    SHL EAX,0x5                         ; 0048079a
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048079d
    ADD EDI,EAX                         ; 004807a1
    PUSH EDI                            ; 004807a3
    MOV AL,byte ptr [ESI]               ; 004807a4
        ;   Label: LAB_004807a4
    MOV byte ptr [EDI],AL               ; 004807a6
    CMP AL,0x0                          ; 004807a8
    JZ 0x004807bc                       ; 004807aa
        ;   XREF to: 004807bc (CONDITIONAL_JUMP)  ; LAB_004807bc
    MOV AL,byte ptr [ESI + 0x1]         ; 004807ac
    ADD ESI,0x2                         ; 004807af
    MOV byte ptr [EDI + 0x1],AL         ; 004807b2
    ADD EDI,0x2                         ; 004807b5
    CMP AL,0x0                          ; 004807b8
    JNZ 0x004807a4                      ; 004807ba
        ;   XREF to: 004807a4 (CONDITIONAL_JUMP)  ; LAB_004807a4
    POP EDI                             ; 004807bc
        ;   Label: LAB_004807bc
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004807bd
    MOV dword ptr [EBX + EAX*0x4 + 0x34c0],EBP ; 004807c3
    INC dword ptr [EBX + 0x337c]        ; 004807ca
    POP EBP                             ; 004807d0
    POP EDI                             ; 004807d1
    POP ESI                             ; 004807d2
    POP EBX                             ; 004807d3
    RET                                 ; 004807d4

