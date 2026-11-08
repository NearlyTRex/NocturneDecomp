; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540840(void)
;
;
; Called Functions:
;   FUN_00502790
;   FUN_00540980
;   FUN_005badc7
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00540840
        ;   Label: FUN_00540840
    CALL FUN_005badc7                   ; 00540845
        ;   XREF to: 005badc7 (UNCONDITIONAL_CALL)  ; undefined FUN_005badc7()
    PUSH 0x1                            ; 0054084a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054084c
    PUSH EDX                            ; 00540850
    CALL FUN_00540980                   ; 00540851
        ;   XREF to: 00540980 (UNCONDITIONAL_CALL)  ; undefined FUN_00540980()
    ADD ESP,0x8                         ; 00540856
    PUSH 0x1                            ; 00540859
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054085b
    PUSH ECX                            ; 0054085f
    CALL FUN_00502790                   ; 00540860
        ;   XREF to: 00502790 (UNCONDITIONAL_CALL)  ; undefined FUN_00502790()
    ADD ESP,0x8                         ; 00540865
    RET                                 ; 00540868

