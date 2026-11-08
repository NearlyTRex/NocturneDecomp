; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057dad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0057db00 at 0057db2a
;
; Referenced Globals:
;   undefined4 DAT_02c82a84
;   undefined4 DAT_02c82a88
;   undefined4 DAT_02c82a8c
;
; Called Functions:
;   FUN_005756f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dad0
        ;   Label: FUN_0057dad0
    MOV [0x02c82a84],EAX                ; 0057dad4 | DAT_02c82a84
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057dad9
    MOV [0x02c82a88],EAX                ; 0057dadd | DAT_02c82a88
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057dae2
    PUSH EAX                            ; 0057dae6
    PUSH dword ptr [ESP + 0x10]         ; 0057dae7
    PUSH dword ptr [ESP + 0x10]         ; 0057daeb
    MOV [0x02c82a8c],EAX                ; 0057daef | DAT_02c82a8c
    CALL FUN_005756f0                   ; 0057daf4
        ;   XREF to: 005756f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005756f0()
    ADD ESP,0xc                         ; 0057daf9
    RET                                 ; 0057dafc

