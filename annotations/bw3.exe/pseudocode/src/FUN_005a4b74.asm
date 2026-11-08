; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 FUN_005a4b74(void)
;
;
; XREF[10]:
;   FUN_0045b8e0 at 0045b991
;   FUN_0045b9b0 at 0045bcfc
;   FUN_004a2e20 at 004a36b4
;   FUN_0051c1c0 at 0051c4f4
;   FUN_00522b00 at 00523463
;   FUN_00523800 at 00523d2a
;   FUN_00583a40 at 00583af2
;   FUN_00583b10 at 00583ef9
;   FUN_00583fb0 at 0058439b
;   FUN_00585a80 at 00585aee
;
; Referenced Globals:
;   undefined4 DAT_006075d0
;
; Called Functions:
;   FUN_005a5cc1
;   FUN_005aad76
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005a4b74
        ;   Label: FUN_005a4b74
    FLD ST0                             ; 005a4b76
    FMUL ST0                            ; 005a4b78
    FLD1                                ; 005a4b7a
    FSUBRP                              ; 005a4b7c
    FTST                                ; 005a4b7e
    FNSTSW AX                           ; 005a4b80
    SAHF                                ; 005a4b82
    JNZ 0x005a4b94                      ; 005a4b83
        ;   XREF to: 005a4b94 (CONDITIONAL_JUMP)  ; LAB_005a4b94
    FCOMPP                              ; 005a4b85
    FNSTSW AX                           ; 005a4b87
    SAHF                                ; 005a4b89
    JA 0x005a4b90                       ; 005a4b8a
        ;   XREF to: 005a4b90 (CONDITIONAL_JUMP)  ; LAB_005a4b90
    FLDZ                                ; 005a4b8c
    JMP 0x005a4b92                      ; 005a4b8e
        ;   XREF to: 005a4b92 (UNCONDITIONAL_JUMP)  ; LAB_005a4b92
    FLDPI                               ; 005a4b90
        ;   Label: LAB_005a4b90
    JMP 0x005a4bae                      ; 005a4b92
        ;   XREF to: 005a4bae (UNCONDITIONAL_JUMP)  ; LAB_005a4bae
        ;   Label: LAB_005a4b92
    MOV AL,0x1                          ; 005a4b94
        ;   Label: LAB_005a4b94
    CALL FUN_005aad76                   ; 005a4b96
        ;   XREF to: 005aad76 (UNCONDITIONAL_CALL)  ; undefined FUN_005aad76()
    CMP AL,0x0                          ; 005a4b9b
    JNZ 0x005a4bae                      ; 005a4b9d
        ;   XREF to: 005a4bae (CONDITIONAL_JUMP)  ; LAB_005a4bae
    FXCH                                ; 005a4b9f
    CALL FUN_005a5cc1                   ; 005a4ba1
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5cc1()
    FLD extended double ptr [0x006075d0] ; 005a4ba6 | DAT_006075d0
    FSUBRP                              ; 005a4bac
    POP AX                              ; 005a4bae
        ;   Label: LAB_005a4bae
    RET                                 ; 005a4bb0

