; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b5c0(void)
;
;
; XREF[8]:
;   FUN_0043c5d0 at 0043c651
;   FUN_0044b020 at 0044b0b8
;   FUN_0044b960 at 0044baed
;   FUN_0044c830 at 0044c884
;   FUN_00475000 at 00475054
;   FUN_005332f0 at 0053331f
;   FUN_00533810 at 00533865
;   FUN_00533a80 at 00533acf
;
; Called Functions:
;   FUN_004ea3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b5c0
        ;   Label: FUN_0046b5c0
    PUSH EDI                            ; 0046b5c1
    SUB ESP,0xc                         ; 0046b5c2
    MOV EBX,ESI                         ; 0046b5c5
    MOV ESI,ESP                         ; 0046b5c7
    MOV EDI,EBX                         ; 0046b5c9
    CALL FUN_004ea3b0                   ; 0046b5cb
        ;   XREF to: 004ea3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea3b0()
    MOV ESI,ESP                         ; 0046b5d0
    MOVSD ES:EDI,ESI                    ; 0046b5d2
    MOVSD ES:EDI,ESI                    ; 0046b5d3
    MOVSD ES:EDI,ESI                    ; 0046b5d4
    MOV EAX,EBX                         ; 0046b5d5
    ADD ESP,0xc                         ; 0046b5d7
    POP EDI                             ; 0046b5da
    POP EBX                             ; 0046b5db
    RET                                 ; 0046b5dc

