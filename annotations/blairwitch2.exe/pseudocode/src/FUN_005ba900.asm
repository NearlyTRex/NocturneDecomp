; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba900(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004807e0 at 004807ff
;
; Called Functions:
;   FUN_005ba9b4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba900
        ;   Label: FUN_005ba900
    PUSH EDX                            ; 005ba904
    CALL FUN_005ba9b4                   ; 005ba905
        ;   XREF to: 005ba9b4 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba9b4()
    ADD ESP,0x4                         ; 005ba90a
    RET                                 ; 005ba90d

