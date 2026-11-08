; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7800(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e7800
        ;   Label: FUN_004e7800
    PUSH EDX                            ; 004e7804
    CALL FUN_00408a80                   ; 004e7805
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004e780a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e780d
    ADD EAX,0x2b4                       ; 004e7811
    PUSH EAX                            ; 004e7816
    CALL FUN_0044fd00                   ; 004e7817
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 004e781c
    RET                                 ; 004e781f

