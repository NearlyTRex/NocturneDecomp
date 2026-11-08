; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a47e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a47e0
        ;   Label: FUN_004a47e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a47e2
    PUSH EDX                            ; 004a47e6
    CALL FUN_00509e30                   ; 004a47e7
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004a47ec
    RET                                 ; 004a47ef

