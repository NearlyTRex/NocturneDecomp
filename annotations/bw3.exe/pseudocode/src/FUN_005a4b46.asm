; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4b46(void)
;
;
; XREF[7]:
;   FUN_0045b8e0 at 0045b908
;   FUN_0045b9b0 at 0045ba54
;   FUN_00583a40 at 00583a65
;   FUN_00583b10 at 00583c24
;   FUN_00583fb0 at 005840c6
;   FUN_00585de0 at 00585e2a
;   FUN_00585f40 at 00585f8c
;
; Called Functions:
;   FUN_005a5cc1
;   FUN_005aad76
;
; *****************************************************************************

section .text

    FLD ST0                             ; 005a4b46
        ;   Label: FUN_005a4b46
    FMUL ST0                            ; 005a4b48
    FLD1                                ; 005a4b4a
    FSUBRP                              ; 005a4b4c
    MOV AL,0x2                          ; 005a4b4e
    CALL FUN_005aad76                   ; 005a4b50
        ;   XREF to: 005aad76 (UNCONDITIONAL_CALL)  ; undefined FUN_005aad76()
    CMP AL,0x0                          ; 005a4b55
    JNZ 0x005a4b60                      ; 005a4b57
        ;   XREF to: 005a4b60 (CONDITIONAL_JUMP)  ; LAB_005a4b60
    FXCH                                ; 005a4b59
    CALL FUN_005a5cc1                   ; 005a4b5b
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5cc1()
    RET                                 ; 005a4b60
        ;   Label: LAB_005a4b60

