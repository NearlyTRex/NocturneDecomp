; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b650(void)
;
;
; XREF[9]:
;   FUN_00493410 at 00493471
;   FUN_00494670 at 0049470b
;   FUN_00495020 at 004950bb
;   FUN_00495bb0 at 00495c11
;   FUN_0049b9d0 at 0049ba5c
;   FUN_0049bd40 at 0049bdcf
;   FUN_0049f850 at 0049f968
;   FUN_004c7490 at 004c74f1
;   FUN_005a86a0 at 005a8748
;
; Called Functions:
;   FUN_004ea3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b650
        ;   Label: FUN_0046b650
    PUSH EDI                            ; 0046b651
    SUB ESP,0xc                         ; 0046b652
    MOV EBX,ESI                         ; 0046b655
    MOV ESI,ESP                         ; 0046b657
    MOV EDI,EBX                         ; 0046b659
    CALL FUN_004ea3e0                   ; 0046b65b
        ;   XREF to: 004ea3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea3e0()
    MOV ESI,ESP                         ; 0046b660
    MOVSD ES:EDI,ESI                    ; 0046b662
    MOVSD ES:EDI,ESI                    ; 0046b663
    MOVSD ES:EDI,ESI                    ; 0046b664
    MOV EAX,EBX                         ; 0046b665
    ADD ESP,0xc                         ; 0046b667
    POP EDI                             ; 0046b66a
    POP EBX                             ; 0046b66b
    RET                                 ; 0046b66c

