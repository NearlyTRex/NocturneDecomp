; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454510(int param_1)
;
;
; XREF[13]:
;   FUN_0040ed80 at 0040eebc
;   FUN_00417ac0 at 00417b1e
;   FUN_0041e430 at 0041e449
;   FUN_0041f6e0 at 0041f737
;   FUN_00424260 at 004242a9
;   FUN_00483290 at 004832a7
;   FUN_00483ff0 at 00484007
;   FUN_004850b0 at 004850c7
;   FUN_00486da0 at 00486dff
;   FUN_004873b0 at 0048741f
;   ... and 3 more
;
; Called Functions:
;   FUN_004543b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00454510
        ;   Label: FUN_00454510
    ADD EAX,0x78                        ; 00454514
    PUSH EAX                            ; 00454517
    CALL FUN_004543b0                   ; 00454518
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004543b0()
    ADD ESP,0x4                         ; 0045451d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00454520
    MOV dword ptr [EDX + 0x178],EAX     ; 00454524
    RET                                 ; 0045452a

