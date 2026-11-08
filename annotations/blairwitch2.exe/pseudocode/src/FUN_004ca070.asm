; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca070(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ca070
        ;   Label: FUN_004ca070
    PUSH EDX                            ; 004ca074
    CALL FUN_00510dd0                   ; 004ca075
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510dd0()
    ADD ESP,0x4                         ; 004ca07a
    MOV dword ptr [EAX + 0x3c],0x5f7bd4 ; 004ca07d
    RET                                 ; 004ca084

