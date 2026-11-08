; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[7]:
;   FUN_00412c50 at 00412d52
;   FUN_00448ff0 at 0044915a
;   FUN_00449840 at 0044994b
;   FUN_0045c530 at 0045c578
;   FUN_004dbe70 at 004dbfbf
;   FUN_0053f940 at 0053fa06
;   FUN_00540cf0 at 00540d2a
;
; Called Functions:
;   FUN_004e6af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d2f0
        ;   Label: FUN_0046d2f0
    PUSH ESI                            ; 0046d2f1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046d2f2
    PUSH EDX                            ; 0046d2f6
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046d2f7
    PUSH ECX                            ; 0046d2fb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046d2fc
    PUSH EBX                            ; 0046d300
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046d301
    PUSH ESI                            ; 0046d305
    CALL FUN_004e6af0                   ; 0046d306
        ;   XREF to: 004e6af0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6af0()
    ADD ESP,0x10                        ; 0046d30b
    POP ESI                             ; 0046d30e
    POP EBX                             ; 0046d30f
    RET                                 ; 0046d310

