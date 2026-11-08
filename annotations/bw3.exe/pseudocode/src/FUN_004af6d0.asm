; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004af6d0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)
;
;
; XREF[1]:
;   FUN_004b1460 at 004b16ae
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af6d0
        ;   Label: FUN_004af6d0
    PUSH ESI                            ; 004af6d1
    PUSH EDI                            ; 004af6d2
    PUSH EBP                            ; 004af6d3
    MOV ESI,dword ptr [0x01c6b5ac]      ; 004af6d4 | DAT_01c6b5ac
    MOV EDI,dword ptr [0x01c6b5a8]      ; 004af6da | DAT_01c6b5a8
    MOV EBX,dword ptr [ESP + 0x14]      ; 004af6e0
    MOV ECX,dword ptr [ESP + 0x18]      ; 004af6e4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004af6e8
    MOV EBP,dword ptr [ESP + 0x24]      ; 004af6ec
    MOV EAX,dword ptr [ECX]             ; 004af6f0
    CMP EAX,EDI                         ; 004af6f2
    JGE 0x004af70c                      ; 004af6f4
        ;   XREF to: 004af70c (CONDITIONAL_JUMP)  ; LAB_004af70c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004af6f6
    MOV EAX,dword ptr [EAX]             ; 004af6fa
    CMP EAX,EDI                         ; 004af6fc
    JL 0x004af76d                       ; 004af6fe
        ;   XREF to: 004af76d (CONDITIONAL_JUMP)  ; LAB_004af76d
    MOV EAX,EDI                         ; 004af704
    SUB EAX,dword ptr [ECX]             ; 004af706
    ADD dword ptr [EBX],EAX             ; 004af708
    MOV dword ptr [ECX],EDI             ; 004af70a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004af70c
        ;   Label: LAB_004af70c
    MOV EAX,dword ptr [EAX]             ; 004af710
    CMP EAX,dword ptr [0x01c6b5b0]      ; 004af712 | DAT_01c6b5b0
    JLE 0x004af72e                      ; 004af718
        ;   XREF to: 004af72e (CONDITIONAL_JUMP)  ; LAB_004af72e
    MOV EAX,dword ptr [ECX]             ; 004af71a
    MOV ECX,dword ptr [0x01c6b5b0]      ; 004af71c | DAT_01c6b5b0
    CMP EAX,ECX                         ; 004af722
    JG 0x004af76d                       ; 004af724
        ;   XREF to: 004af76d (CONDITIONAL_JUMP)  ; LAB_004af76d
    MOV EAX,ECX                         ; 004af726
    MOV ECX,dword ptr [ESP + 0x20]      ; 004af728
    MOV dword ptr [ECX],EAX             ; 004af72c
    MOV EAX,dword ptr [EDX]             ; 004af72e
        ;   Label: LAB_004af72e
    CMP EAX,ESI                         ; 004af730
    JGE 0x004af748                      ; 004af732
        ;   XREF to: 004af748 (CONDITIONAL_JUMP)  ; LAB_004af748
    MOV EAX,dword ptr [EBP]             ; 004af734
    CMP EAX,ESI                         ; 004af737
    JL 0x004af76d                       ; 004af739
        ;   XREF to: 004af76d (CONDITIONAL_JUMP)  ; LAB_004af76d
    MOV EAX,ESI                         ; 004af73b
    SUB EAX,dword ptr [EDX]             ; 004af73d
    IMUL EAX,dword ptr [ESP + 0x28]     ; 004af73f
    ADD dword ptr [EBX],EAX             ; 004af744
    MOV dword ptr [EDX],ESI             ; 004af746
    MOV EBX,dword ptr [0x01c6b5b4]      ; 004af748 | DAT_01c6b5b4
        ;   Label: LAB_004af748
    CMP EBX,dword ptr [EBP]             ; 004af74e
    JGE 0x004af75a                      ; 004af751
        ;   XREF to: 004af75a (CONDITIONAL_JUMP)  ; LAB_004af75a
    CMP EBX,dword ptr [EDX]             ; 004af753
    JL 0x004af76d                       ; 004af755
        ;   XREF to: 004af76d (CONDITIONAL_JUMP)  ; LAB_004af76d
    MOV dword ptr [EBP],EBX             ; 004af757
    XOR EAX,EAX                         ; 004af75a
        ;   Label: LAB_004af75a
    MOV dword ptr [0x01c6b5a8],EDI      ; 004af75c | DAT_01c6b5a8
    MOV dword ptr [0x01c6b5ac],ESI      ; 004af762 | DAT_01c6b5ac
    POP EBP                             ; 004af768
    POP EDI                             ; 004af769
    POP ESI                             ; 004af76a
    POP EBX                             ; 004af76b
    RET                                 ; 004af76c
    MOV EAX,0x1                         ; 004af76d
        ;   Label: LAB_004af76d
    MOV dword ptr [0x01c6b5a8],EDI      ; 004af772 | DAT_01c6b5a8
    MOV dword ptr [0x01c6b5ac],ESI      ; 004af778 | DAT_01c6b5ac
    POP EBP                             ; 004af77e
    POP EDI                             ; 004af77f
    POP ESI                             ; 004af780
    POP EBX                             ; 004af781
    RET                                 ; 004af782

