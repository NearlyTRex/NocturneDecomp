; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051f310(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0051f310
        ;   Label: FUN_0051f310
    PUSH EDX                            ; 0051f314
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051f315
    PUSH ECX                            ; 0051f319
    CALL FUN_004310b0                   ; 0051f31a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0051f31f
    RET                                 ; 0051f322

