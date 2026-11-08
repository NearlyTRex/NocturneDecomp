; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c45a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005c45b0 at 005c45f9
;
; Called Functions:
;   FUN_005b8580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c45a0
        ;   Label: FUN_005c45a0
    PUSH EDX                            ; 005c45a4
    CALL FUN_005b8580                   ; 005c45a5
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005c45aa
    RET                                 ; 005c45ad

