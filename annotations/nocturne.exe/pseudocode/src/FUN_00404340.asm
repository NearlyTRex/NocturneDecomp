; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00404340(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b762c
;   undefined4 DAT_01c02580
;
; Called Functions:
;   FUN_00404120
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404340
        ;   Label: FUN_00404340
    MOV EDX,dword ptr [0x005b762c]      ; 00404341 | DAT_005b762c
    PUSH EDX                            ; 00404347
    PUSH 0x8                            ; 00404348
    PUSH EDX                            ; 0040434a
    PUSH EDX                            ; 0040434b
    MOV ESI,dword ptr [0x01c02580]      ; 0040434c | DAT_01c02580
    PUSH ESI                            ; 00404352
    CALL FUN_00404120                   ; 00404353
        ;   XREF to: 00404120 (UNCONDITIONAL_CALL)  ; undefined FUN_00404120()
    ADD ESP,0x14                        ; 00404358
    POP ESI                             ; 0040435b
    RET                                 ; 0040435c

