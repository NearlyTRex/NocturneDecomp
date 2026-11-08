; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c6530(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c6530
        ;   Label: FUN_004c6530
    PUSH EDX                            ; 004c6534
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c6535
    PUSH ECX                            ; 004c6539
    CALL FUN_00430430                   ; 004c653a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 004c653f
    RET                                 ; 004c6542

