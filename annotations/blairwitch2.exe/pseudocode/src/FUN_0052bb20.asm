; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052bb20(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0052bb20
        ;   Label: FUN_0052bb20
    PUSH EDX                            ; 0052bb24
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052bb25
    PUSH ECX                            ; 0052bb29
    CALL FUN_00427680                   ; 0052bb2a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0052bb2f
    RET                                 ; 0052bb32

