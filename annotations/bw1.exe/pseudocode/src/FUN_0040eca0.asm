; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eca0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040eca0
        ;   Label: FUN_0040eca0
    PUSH EDX                            ; 0040eca4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040eca5
    PUSH ECX                            ; 0040eca9
    CALL FUN_004310b0                   ; 0040ecaa
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0040ecaf
    RET                                 ; 0040ecb2

