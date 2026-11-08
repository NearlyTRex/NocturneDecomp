; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cec30(int param_1)
;
;
; XREF[1]:
;   FUN_004ce240 at 004ce37a
;
; Called Functions:
;   FUN_004da900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cec30
        ;   Label: FUN_004cec30
    ADD EAX,0x2437c                     ; 004cec34
    PUSH EAX                            ; 004cec39
    CALL FUN_004da900                   ; 004cec3a
        ;   XREF to: 004da900 (UNCONDITIONAL_CALL)  ; undefined FUN_004da900()
    ADD ESP,0x4                         ; 004cec3f
    RET                                 ; 004cec42

