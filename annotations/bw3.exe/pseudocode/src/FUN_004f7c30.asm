; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f7c30(void)
;
;
; XREF[1]:
;   FUN_004e44e0 at 004e4588
;
; Referenced Globals:
;   undefined4 DAT_005fba34
;   undefined1 DAT_00600698
;   undefined1 DAT_0060069c
;   undefined1 DAT_006006a1
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2a4
;
; Called Functions:
;   FUN_004f7c6c
;   FUN_004f7d19
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004f7c30
        ;   Label: FUN_004f7c30
    CALL FUN_004f7c6c                   ; 004f7c31
        ;   XREF to: 004f7c6c (UNCONDITIONAL_CALL)  ; undefined FUN_004f7c6c()
    CALL FUN_004f7d19                   ; 004f7c36
        ;   XREF to: 004f7d19 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7d19()
    XOR EAX,EAX                         ; 004f7c3b
    MOV AL,[0x006006a1]                 ; 004f7c3d | DAT_006006a1
    MOV [0x01c6e2a0],EAX                ; 004f7c42 | DAT_01c6e2a0
    XOR EAX,EAX                         ; 004f7c47
    MOV AL,[0x00600698]                 ; 004f7c49 | DAT_00600698
    MOV [0x005fba34],EAX                ; 004f7c4e | DAT_005fba34
    MOVZX EAX,byte ptr [0x0060069c]     ; 004f7c53 | DAT_0060069c
    MOV [0x01c6e2a4],EAX                ; 004f7c5a | DAT_01c6e2a4
    POP EAX                             ; 004f7c5f
    RET                                 ; 004f7c60

