; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546870(int param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546870
        ;   Label: FUN_00546870
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546871
    PUSH EBX                            ; 00546875
    CALL FUN_00409fc0                   ; 00546876
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 0054687b
    LEA EAX,[EBX + 0x150]               ; 0054687e
    PUSH EAX                            ; 00546884
    CALL FUN_00454510                   ; 00546885
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 0054688a
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0054688d
    POP EBX                             ; 00546897
    RET                                 ; 00546898

