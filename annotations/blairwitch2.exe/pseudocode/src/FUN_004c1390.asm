; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1390(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c1390
        ;   Label: FUN_004c1390
    PUSH EDX                            ; 004c1394
    CALL FUN_00408a80                   ; 004c1395
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004c139a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c139d
    ADD EAX,0x2b4                       ; 004c13a1
    PUSH EAX                            ; 004c13a6
    CALL FUN_0044fd00                   ; 004c13a7
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004c13ac
    RET                                 ; 004c13af

