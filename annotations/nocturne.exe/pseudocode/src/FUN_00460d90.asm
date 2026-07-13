; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460d90(void)
;
;
; XREF[7]:
;   FUN_00482680 at 004826e1
;   FUN_004837a0 at 0048383b
;   FUN_004842a0 at 00484301
;   FUN_00489990 at 00489a1c
;   FUN_00489d00 at 00489d8f
;   FUN_0048d5d0 at 0048d6bf
;   FUN_004ae0a0 at 004ae101
;
; Called Functions:
;   FUN_004ce790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460d90
        ;   Label: FUN_00460d90
    PUSH EDI                            ; 00460d91
    SUB ESP,0xc                         ; 00460d92
    MOV EBX,ESI                         ; 00460d95
    MOV ESI,ESP                         ; 00460d97
    MOV EDI,EBX                         ; 00460d99
    CALL FUN_004ce790                   ; 00460d9b
        ;   XREF to: 004ce790 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce790()
    MOV ESI,ESP                         ; 00460da0
    MOVSD ES:EDI,ESI                    ; 00460da2
    MOVSD ES:EDI,ESI                    ; 00460da3
    MOVSD ES:EDI,ESI                    ; 00460da4
    MOV EAX,EBX                         ; 00460da5
    ADD ESP,0xc                         ; 00460da7
    POP EDI                             ; 00460daa
    POP EBX                             ; 00460dab
    RET                                 ; 00460dac

