; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_100116f0(byte *param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_10011360 at 10011379
;
; Referenced Globals:
;   undefined4 DAT_10016dd8+1
;   undefined4 DAT_10016edc
;
; Called Functions:
;   __lock
;   FUN_10005a10
;   FUN_100117f0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10016edc],0x0      ; 100116f0 | DAT_10016edc
        ;   Label: FUN_100116f0
    PUSH EBX                            ; 100116f7
    PUSH ESI                            ; 100116f8
    PUSH EDI                            ; 100116f9
    JNZ 0x10011712                      ; 100116fa
        ;   XREF to: 10011712 (CONDITIONAL_JUMP)  ; LAB_10011712
    MOV EDI,dword ptr [ESP + 0x14]      ; 100116fc
    MOV ESI,dword ptr [ESP + 0x10]      ; 10011700
    PUSH EDI                            ; 10011704
    PUSH ESI                            ; 10011705
    CALL FUN_100117f0                   ; 10011706
        ;   XREF to: 100117f0 (UNCONDITIONAL_CALL)  ; undefined FUN_100117f0()
    ADD ESP,0x8                         ; 1001170b
    POP EDI                             ; 1001170e
    POP ESI                             ; 1001170f
    POP EBX                             ; 10011710
    RET                                 ; 10011711
    PUSH 0x19                           ; 10011712
        ;   Label: LAB_10011712
    CALL __lock                         ; 10011714
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV ESI,dword ptr [ESP + 0x14]      ; 10011719
    MOV EDI,dword ptr [ESP + 0x18]      ; 1001171d
    ADD ESP,0x4                         ; 10011721
    MOVZX BX,byte ptr [ESI]             ; 10011724
    TEST BX,BX                          ; 10011728
    JZ 0x1001178b                       ; 1001172b
        ;   XREF to: 1001178b (CONDITIONAL_JUMP)  ; LAB_1001178b
    MOV EDX,0x4                         ; 1001172d
    XOR EAX,EAX                         ; 10011732
        ;   Label: LAB_10011732
    MOV AL,BL                           ; 10011734
    TEST byte ptr [EAX + 0x10016dd9],DL ; 10011736 | DAT_10016dd8+1
    JZ 0x10011767                       ; 1001173c
        ;   XREF to: 10011767 (CONDITIONAL_JUMP)  ; LAB_10011767
    MOV AL,byte ptr [ESI + 0x1]         ; 1001173e
    INC ESI                             ; 10011741
    TEST AL,AL                          ; 10011742
    JZ 0x1001177b                       ; 10011744
        ;   XREF to: 1001177b (CONDITIONAL_JUMP)  ; LAB_1001177b
    MOVZX EBX,BX                        ; 10011746
    SHL EBX,0x8                         ; 10011749
    XOR ECX,ECX                         ; 1001174c
    MOV CL,AL                           ; 1001174e
    OR EBX,ECX                          ; 10011750
    CMP EBX,EDI                         ; 10011752
    JNZ 0x1001176e                      ; 10011754
        ;   XREF to: 1001176e (CONDITIONAL_JUMP)  ; LAB_1001176e
    PUSH 0x19                           ; 10011756
    CALL FUN_10005a10                   ; 10011758
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1001175d
    LEA EAX,[ESI + -0x1]                ; 10011760
    POP EDI                             ; 10011763
    POP ESI                             ; 10011764
    POP EBX                             ; 10011765
    RET                                 ; 10011766
    MOVZX EAX,BX                        ; 10011767
        ;   Label: LAB_10011767
    CMP EAX,EDI                         ; 1001176a
    JZ 0x1001178b                       ; 1001176c
        ;   XREF to: 1001178b (CONDITIONAL_JUMP)  ; LAB_1001178b
    MOVZX BX,byte ptr [ESI + 0x1]       ; 1001176e
        ;   Label: LAB_1001176e
    INC ESI                             ; 10011773
    TEST BX,BX                          ; 10011774
    JNZ 0x10011732                      ; 10011777
        ;   XREF to: 10011732 (CONDITIONAL_JUMP)  ; LAB_10011732
    JMP 0x1001178b                      ; 10011779
        ;   XREF to: 1001178b (UNCONDITIONAL_JUMP)  ; LAB_1001178b
    PUSH 0x19                           ; 1001177b
        ;   Label: LAB_1001177b
    CALL FUN_10005a10                   ; 1001177d
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10011782
    XOR EAX,EAX                         ; 10011785
    POP EDI                             ; 10011787
    POP ESI                             ; 10011788
    POP EBX                             ; 10011789
    RET                                 ; 1001178a
    PUSH 0x19                           ; 1001178b
        ;   Label: LAB_1001178b
    CALL FUN_10005a10                   ; 1001178d
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    MOVZX EAX,BX                        ; 10011792
    ADD ESP,0x4                         ; 10011795
    SUB EAX,EDI                         ; 10011798
    CMP EAX,0x1                         ; 1001179a
    POP EDI                             ; 1001179d
    SBB EAX,EAX                         ; 1001179e
    AND EAX,ESI                         ; 100117a0
    POP ESI                             ; 100117a2
    POP EBX                             ; 100117a3
    RET                                 ; 100117a4

