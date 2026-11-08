; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054ce10(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0054ce10
        ;   Label: FUN_0054ce10
    PUSH EDX                            ; 0054ce14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054ce15
    PUSH ECX                            ; 0054ce19
    CALL FUN_004310b0                   ; 0054ce1a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0054ce1f
    RET                                 ; 0054ce22

