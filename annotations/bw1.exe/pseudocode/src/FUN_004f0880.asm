; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f0880(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f0880
        ;   Label: FUN_004f0880
    PUSH EDX                            ; 004f0884
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f0885
    PUSH ECX                            ; 004f0889
    CALL FUN_004310b0                   ; 004f088a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 004f088f
    RET                                 ; 004f0892

