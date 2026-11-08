; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a54b0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00466220 at 00466225
;   FUN_004bda10 at 004bda26
;   FUN_004bdfb0 at 004bdfbf
;   FUN_004d8640 at 004d8819
;   FUN_00503e20 at 00503e27
;   FUN_005a3bc0 at 005a3c79
;
; Called Functions:
;   FUN_005acbc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a54b0
        ;   Label: FUN_005a54b0
    PUSH EDX                            ; 005a54b4
    CALL FUN_005acbc0                   ; 005a54b5
        ;   XREF to: 005acbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acbc0()
    ADD ESP,0x4                         ; 005a54ba
    RET                                 ; 005a54bd

