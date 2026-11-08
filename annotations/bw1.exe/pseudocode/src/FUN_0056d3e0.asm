; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056d3e0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0056d3e0
        ;   Label: FUN_0056d3e0
    PUSH EDX                            ; 0056d3e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056d3e5
    PUSH ECX                            ; 0056d3e9
    CALL FUN_004310b0                   ; 0056d3ea
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0056d3ef
    RET                                 ; 0056d3f2

