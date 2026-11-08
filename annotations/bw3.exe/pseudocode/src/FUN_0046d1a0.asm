; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d1a0(void)
;
;
; XREF[8]:
;   FUN_00449dd0 at 00449e51
;   FUN_0045d530 at 0045d5c2
;   FUN_0045dea0 at 0045e02d
;   FUN_0045ed70 at 0045edc4
;   FUN_00476070 at 004760c4
;   FUN_00539f30 at 00539f5f
;   FUN_0053a450 at 0053a4a5
;   FUN_0053a6c0 at 0053a70f
;
; Called Functions:
;   FUN_004e6a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d1a0
        ;   Label: FUN_0046d1a0
    PUSH EDI                            ; 0046d1a1
    SUB ESP,0xc                         ; 0046d1a2
    MOV EBX,ESI                         ; 0046d1a5
    MOV ESI,ESP                         ; 0046d1a7
    MOV EDI,EBX                         ; 0046d1a9
    CALL FUN_004e6a90                   ; 0046d1ab
        ;   XREF to: 004e6a90 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6a90()
    MOV ESI,ESP                         ; 0046d1b0
    MOVSD ES:EDI,ESI                    ; 0046d1b2
    MOVSD ES:EDI,ESI                    ; 0046d1b3
    MOVSD ES:EDI,ESI                    ; 0046d1b4
    MOV EAX,EBX                         ; 0046d1b5
    ADD ESP,0xc                         ; 0046d1b7
    POP EDI                             ; 0046d1ba
    POP EBX                             ; 0046d1bb
    RET                                 ; 0046d1bc

