; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b48d0(int param_1)
;
;
; XREF[9]:
;   FUN_004102c0 at 004102c7
;   FUN_00439da0 at 00439da7
;   FUN_004957c0 at 004957c8
;   FUN_004b3110 at 004b3117
;   FUN_004b9db0 at 004b9db7
;   FUN_004dda70 at 004ddaf9
;   FUN_004fbcc0 at 004fbcc7
;   FUN_00535450 at 0053545b
;   FUN_00541a40 at 00541a71
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

