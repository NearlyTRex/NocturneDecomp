; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cfbb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004cfc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfbb0
        ;   Label: FUN_004cfbb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cfbb1
    PUSH EBX                            ; 004cfbb5
    CALL FUN_004cfc70                   ; 004cfbb6
        ;   XREF to: 004cfc70 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfc70()
    ADD ESP,0x4                         ; 004cfbbb
    MOV EAX,EBX                         ; 004cfbbe
    POP EBX                             ; 004cfbc0
    RET                                 ; 004cfbc1

