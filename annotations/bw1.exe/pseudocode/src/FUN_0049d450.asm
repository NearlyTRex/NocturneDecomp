; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049d450(void)
;
;
; XREF[2]:
;   FUN_0049b060 at 0049b404
;   FUN_0049b830 at 0049b931
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   FUN_0049d430
;
; *****************************************************************************

section .text

    CALL FUN_0049d430                   ; 0049d450
        ;   XREF to: 0049d430 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d430()
        ;   Label: FUN_0049d450
    MOV EDX,dword ptr [0x0061b49c]      ; 0049d455 | DAT_0061b49c
    IMUL EDX,EAX                        ; 0049d45b
    MOV ECX,dword ptr [0x0061b498]      ; 0049d45e | DAT_0061b498
    MOV EAX,EDX                         ; 0049d464
    SAR EDX,0x1f                        ; 0049d466
    IDIV ECX                            ; 0049d469
    LEA EDX,[EAX*0x4 + 0x0]             ; 0049d46b
    MOV ECX,0x3                         ; 0049d472
    MOV EAX,EDX                         ; 0049d477
    SAR EDX,0x1f                        ; 0049d479
    IDIV ECX                            ; 0049d47c
    RET                                 ; 0049d47e

