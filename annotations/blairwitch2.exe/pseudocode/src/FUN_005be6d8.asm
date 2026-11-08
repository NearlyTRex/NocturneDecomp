; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be6d8(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005b8590 at 005b8652
;
; Called Functions:
;   FUN_005be628
;   FUN_005c3750
;
; *****************************************************************************

section .text

    CALL FUN_005c3750                   ; 005be6d8
        ;   XREF to: 005c3750 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3750()
        ;   Label: FUN_005be6d8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005be6dd
    PUSH EDX                            ; 005be6e1
    CALL FUN_005be628                   ; 005be6e2
        ;   XREF to: 005be628 (UNCONDITIONAL_CALL)  ; undefined FUN_005be628()
    ADD ESP,0x4                         ; 005be6e7
    RET                                 ; 005be6ea

