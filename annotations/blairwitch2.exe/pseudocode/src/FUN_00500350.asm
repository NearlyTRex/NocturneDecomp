; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00500350(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00500350
        ;   Label: FUN_00500350
    PUSH EDX                            ; 00500354
    MOV ECX,dword ptr [ESP + 0x8]       ; 00500355
    PUSH ECX                            ; 00500359
    CALL FUN_00427680                   ; 0050035a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0050035f
    RET                                 ; 00500362

