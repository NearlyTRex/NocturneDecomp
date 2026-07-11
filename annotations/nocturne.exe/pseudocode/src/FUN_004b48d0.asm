; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b48d0(int param_1)
;
;
; Called Functions:
;   FUN_00424260
;   FUN_004c1510
;   FUN_0051dcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b48d0
        ;   Label: FUN_004b48d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b48d1
    LEA EAX,[EBX + 0x150]               ; 004b48d5
    PUSH EAX                            ; 004b48db
    CALL FUN_0051dcd0                   ; 004b48dc
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 004b48e1
    PUSH EBX                            ; 004b48e4
    CALL FUN_00424260                   ; 004b48e5
        ;   XREF to: 00424260 (UNCONDITIONAL_CALL)  ; undefined FUN_00424260()
    ADD ESP,0x4                         ; 004b48ea
    ADD EBX,0x1f5a0                     ; 004b48ed
    PUSH EBX                            ; 004b48f3
    MOV dword ptr [EBX + 0xfffec6ec],0x0 ; 004b48f4
    CALL FUN_004c1510                   ; 004b48fe
        ;   XREF to: 004c1510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1510()
    ADD ESP,0x4                         ; 004b4903
    POP EBX                             ; 004b4906
    RET                                 ; 004b4907

