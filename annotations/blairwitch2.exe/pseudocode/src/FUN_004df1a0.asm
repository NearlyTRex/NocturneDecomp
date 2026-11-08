; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df1a0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004df1a0
        ;   Label: FUN_004df1a0
    ADD EAX,0x2b4                       ; 004df1a4
    PUSH EAX                            ; 004df1a9
    CALL FUN_0044fd00                   ; 004df1aa
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004df1af
    MOV EDX,dword ptr [ESP + 0x4]       ; 004df1b2
    PUSH EDX                            ; 004df1b6
    CALL FUN_00408a80                   ; 004df1b7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004df1bc
    RET                                 ; 004df1bf

