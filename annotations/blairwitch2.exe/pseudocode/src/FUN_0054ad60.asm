; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054ad60(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0054ad60
        ;   Label: FUN_0054ad60
    PUSH EDX                            ; 0054ad64
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054ad65
    PUSH ECX                            ; 0054ad69
    CALL FUN_00427680                   ; 0054ad6a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0054ad6f
    RET                                 ; 0054ad72

