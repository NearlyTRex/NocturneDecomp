; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d230(void)
;
;
; XREF[8]:
;   FUN_00496c60 at 00496cc1
;   FUN_00497f70 at 0049800b
;   FUN_00498a10 at 00498aab
;   FUN_004995a0 at 00499601
;   FUN_004a0cd0 at 004a0d5c
;   FUN_004a1040 at 004a10cf
;   FUN_004a6090 at 004a61a8
;   FUN_004ccaf0 at 004ccb51
;
; Called Functions:
;   FUN_004e6ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d230
        ;   Label: FUN_0046d230
    PUSH EDI                            ; 0046d231
    SUB ESP,0xc                         ; 0046d232
    MOV EBX,ESI                         ; 0046d235
    MOV ESI,ESP                         ; 0046d237
    MOV EDI,EBX                         ; 0046d239
    CALL FUN_004e6ac0                   ; 0046d23b
        ;   XREF to: 004e6ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6ac0()
    MOV ESI,ESP                         ; 0046d240
    MOVSD ES:EDI,ESI                    ; 0046d242
    MOVSD ES:EDI,ESI                    ; 0046d243
    MOVSD ES:EDI,ESI                    ; 0046d244
    MOV EAX,EBX                         ; 0046d245
    ADD ESP,0xc                         ; 0046d247
    POP EDI                             ; 0046d24a
    POP EBX                             ; 0046d24b
    RET                                 ; 0046d24c

