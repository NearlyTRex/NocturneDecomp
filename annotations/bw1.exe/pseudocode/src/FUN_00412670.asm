; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412670(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00412670
        ;   Label: FUN_00412670
    PUSH EDX                            ; 00412674
    MOV ECX,dword ptr [ESP + 0x8]       ; 00412675
    PUSH ECX                            ; 00412679
    CALL FUN_004310b0                   ; 0041267a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0041267f
    RET                                 ; 00412682

