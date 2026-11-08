; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cd600(void)
;
;
; XREF[1]:
;   FUN_004ce630 at 004ce65a
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_0060b0bc
;   undefined4 DAT_0060b0c0
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d22e4c
;   undefined4 DAT_01d22e60
;   undefined4 DAT_01d22e64
;   undefined4 DAT_01d22e68
;   undefined4 DAT_01d22e6c
;
; Called Functions:
;   FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd600
        ;   Label: FUN_004cd600
    PUSH ESI                            ; 004cd601
    PUSH EDI                            ; 004cd602
    PUSH EBP                            ; 004cd603
    MOV EDX,0x4                         ; 004cd604
    MOV EBX,0x1                         ; 004cd609
    MOV ESI,0x2                         ; 004cd60e
    MOV EDI,0x3                         ; 004cd613
    MOV EBP,0x80000                     ; 004cd618
    MOV EAX,0xf80000                    ; 004cd61d
    PUSH 0xffff                         ; 004cd622
    XOR ECX,ECX                         ; 004cd627
    MOV dword ptr [0x01d22e4c],EDX      ; 004cd629 | DAT_01d22e4c
    MOV dword ptr [0x01d22e60],ECX      ; 004cd62f | DAT_01d22e60
    MOV dword ptr [0x01d22e64],EBX      ; 004cd635 | DAT_01d22e64
    MOV dword ptr [0x01d22e68],ESI      ; 004cd63b | DAT_01d22e68
    MOV dword ptr [0x01d22e6c],EDI      ; 004cd641 | DAT_01d22e6c
    MOV dword ptr [0x0060b02c],EBP      ; 004cd647 | DAT_0060b02c
    MOV [0x0060b030],EAX                ; 004cd64d | DAT_0060b030
    MOV [0x0060b05c],EAX                ; 004cd652 | DAT_0060b05c
    MOV [0x0060b060],EAX                ; 004cd657 | DAT_0060b060
    MOV [0x0060b08c],EAX                ; 004cd65c | DAT_0060b08c
    MOV EAX,[0x005f2afc]                ; 004cd661 | DAT_005f2afc
    MOV dword ptr [0x0060b090],EBP      ; 004cd666 | DAT_0060b090
    PUSH EAX                            ; 004cd66c | DAT_01bdd7e4
    MOV dword ptr [0x0060b0bc],EBP      ; 004cd66d | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EBP      ; 004cd673 | DAT_0060b0c0
    CALL FUN_0046d4c0                   ; 004cd679
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 004cd67e
    POP EBP                             ; 004cd681
    POP EDI                             ; 004cd682
    POP ESI                             ; 004cd683
    POP EBX                             ; 004cd684
    RET                                 ; 004cd685

