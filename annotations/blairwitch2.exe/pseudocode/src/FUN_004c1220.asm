; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1220(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c1220
        ;   Label: FUN_004c1220
    PUSH EDX                            ; 004c1224
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c1225
    PUSH ECX                            ; 004c1229
    CALL FUN_00427680                   ; 004c122a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 004c122f
    RET                                 ; 004c1232

