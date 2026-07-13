; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506a60(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00506a60
        ;   Label: FUN_00506a60
    PUSH EDX                            ; 00506a64
    MOV ECX,dword ptr [ESP + 0x8]       ; 00506a65
    PUSH ECX                            ; 00506a69
    CALL FUN_00427da0                   ; 00506a6a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427da0()
    ADD ESP,0x8                         ; 00506a6f
    RET                                 ; 00506a72

