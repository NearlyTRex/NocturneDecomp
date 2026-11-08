; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048b640(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6e35c
;
; Called Functions:
;   FUN_00556be0
;   FUN_0057b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b640
        ;   Label: FUN_0048b640
    PUSH EBP                            ; 0048b641
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048b642
    CMP dword ptr [EBX + 0x2d4],0x2     ; 0048b646
    JNZ 0x0048b67d                      ; 0048b64d
        ;   XREF to: 0048b67d (CONDITIONAL_JUMP)  ; LAB_0048b67d
    CMP dword ptr [ESP + 0x10],0x1      ; 0048b64f
    JNZ 0x0048b67d                      ; 0048b654
        ;   XREF to: 0048b67d (CONDITIONAL_JUMP)  ; LAB_0048b67d
    PUSH EDI                            ; 0048b656
    PUSH ESI                            ; 0048b657
    MOV ESI,dword ptr [0x01c6e35c]      ; 0048b658 | DAT_01c6e35c
    PUSH ESI                            ; 0048b65e
    XOR EDI,EDI                         ; 0048b65f
    CALL FUN_00556be0                   ; 0048b661
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0048b666
    MOV dword ptr [EBX + 0x598],EDI     ; 0048b669
    MOV dword ptr [0x01c6e35c],EDI      ; 0048b66f | DAT_01c6e35c
    MOV dword ptr [EBX + 0x594],EDI     ; 0048b675
    POP ESI                             ; 0048b67b
    POP EDI                             ; 0048b67c
    MOV EBP,dword ptr [ESP + 0x10]      ; 0048b67d
        ;   Label: LAB_0048b67d
    PUSH EBP                            ; 0048b681
    PUSH EBX                            ; 0048b682
    CALL FUN_0057b7f0                   ; 0048b683
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b7f0()
    ADD ESP,0x8                         ; 0048b688
    POP EBP                             ; 0048b68b
    POP EBX                             ; 0048b68c
    RET                                 ; 0048b68d

