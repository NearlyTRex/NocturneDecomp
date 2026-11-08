; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0010(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0010
        ;   Label: FUN_004e0010
    PUSH EDX                            ; 004e0014
    CALL FUN_00408a80                   ; 004e0015
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004e001a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e001d
    ADD EAX,0x2b4                       ; 004e0021
    PUSH EAX                            ; 004e0026
    CALL FUN_0044fd00                   ; 004e0027
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004e002c
    RET                                 ; 004e002f

