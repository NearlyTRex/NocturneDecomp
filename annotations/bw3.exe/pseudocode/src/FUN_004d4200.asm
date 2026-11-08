; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d4200(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052ee37
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d4200
        ;   Label: FUN_004d4200
    PUSH 0x34                           ; 004d4204
    PUSH 0x0                            ; 004d4206
    ADD EAX,0xcdd4                      ; 004d4208
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d420d
    PUSH EAX                            ; 004d4211
    MOV dword ptr [EAX + 0x13df4],EDX   ; 004d4212
    CALL FUN_005a28f0                   ; 004d4218
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 004d421d
    RET                                 ; 004d4220

