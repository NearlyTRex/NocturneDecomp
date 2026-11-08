; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005609b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[12]:
;   FUN_00412ee0 at 00413167
;   FUN_0048c2e0 at 0048f261
;   FUN_004bb100 at 004bb17f
;   FUN_004c4a60 at 004c4b56
;   FUN_004d9fc0 at 004d9ff8
;   FUN_004da020 at 004da186
;   FUN_004dcdb0 at 004dd131
;   FUN_00530150 at 005302ca
;   FUN_0055fd30 at 0055fe25
;   FUN_00560940 at 00560992
;   ... and 2 more
;
; Called Functions:
;   FUN_0055f020
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005609b0
        ;   Label: FUN_005609b0
    PUSH 0x0                            ; 005609b2
    PUSH 0x0                            ; 005609b4
    PUSH 0x0                            ; 005609b6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005609b8
    PUSH 0x0                            ; 005609bc
    PUSH EDX                            ; 005609be
    MOV ECX,dword ptr [ESP + 0x20]      ; 005609bf
    PUSH ECX                            ; 005609c3
    CALL FUN_0055f020                   ; 005609c4
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f020()
    ADD ESP,0x1c                        ; 005609c9
    RET                                 ; 005609cc

