; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0050(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00415370 at 00415394
;   FUN_004d4450 at 004d4473
;   FUN_004dd930 at 004dd954
;   FUN_004ef4e0 at 004ef4fb
;   FUN_00540b40 at 00540b72
;   FUN_0054c2b0 at 0054c2fc
;
; Referenced Globals:
;   undefined4 DAT_005a0ce0
;
; Called Functions:
;   FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5a0ce0                       ; 004e0050 | DAT_005a0ce0
        ;   Label: FUN_004e0050
    PUSH 0x2                            ; 004e0055
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e0057
    PUSH EDX                            ; 004e005b
    CALL FUN_005644a7                   ; 004e005c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 004e0061
    MOV dword ptr [EAX + 0xc28],0x1     ; 004e0064
    RET                                 ; 004e006e

