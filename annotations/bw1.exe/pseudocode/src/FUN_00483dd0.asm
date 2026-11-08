; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483dd0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[34]:
;   FUN_004101f0 at 00410331
;   FUN_00413970 at 00413ab5
;   FUN_00430060 at 00430079
;   FUN_00436600 at 0043670e
;   FUN_00463820 at 00463d46
;   FUN_00464190 at 004644d8
;   FUN_00465890 at 00465904
;   FUN_0047cfe0 at 0047d134
;   FUN_004ad140 at 004ad255
;   FUN_004adaf0 at 004adc1b
;   ... and 24 more
;
; Called Functions:
;   FUN_00406c20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00483dd0
        ;   Label: FUN_00483dd0
    PUSH EDX                            ; 00483dd4
    CALL FUN_00406c20                   ; 00483dd5
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00406c20()
    ADD ESP,0x4                         ; 00483dda
    RET                                 ; 00483ddd

