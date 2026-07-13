; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541840(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00541840
        ;   Label: FUN_00541840
    PUSH EDX                            ; 00541844
    MOV ECX,dword ptr [ESP + 0x8]       ; 00541845
    PUSH ECX                            ; 00541849
    CALL FUN_00427da0                   ; 0054184a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427da0()
    ADD ESP,0x8                         ; 0054184f
    RET                                 ; 00541852

