; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00592cc0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00592cc0
        ;   Label: FUN_00592cc0
    PUSH EDX                            ; 00592cc4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00592cc5
    PUSH ECX                            ; 00592cc9
    CALL FUN_004310b0                   ; 00592cca
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 00592ccf
    RET                                 ; 00592cd2

