; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7704(void)
;
;
; XREF[1]:
;   FUN_005a76ed at 005a76fe
;
; *****************************************************************************

section .text

    MOV CL,0xa                          ; 005a7704
        ;   Label: FUN_005a7704
    CMP AL,CL                           ; 005a7706
    XCHG AH,AL                          ; 005a7708
    JC 0x005a7710                       ; 005a770a
        ;   XREF to: 005a7710 (CONDITIONAL_JUMP)  ; LAB_005a7710
    XCHG AH,AL                          ; 005a770c
    DIV CL                              ; 005a770e
    ADD AH,0x30                         ; 005a7710
        ;   Label: LAB_005a7710
    ADD AL,0x30                         ; 005a7713
    MOV byte ptr [EBX],AL               ; 005a7715
    INC EBX                             ; 005a7717
    MOV byte ptr [EBX],AH               ; 005a7718
    INC EBX                             ; 005a771a
    RET                                 ; 005a771b

