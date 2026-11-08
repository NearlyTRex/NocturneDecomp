; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540060(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_005ad770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540060
        ;   Label: FUN_00540060
    PUSH dword ptr [ESP + 0x8]          ; 00540064
    PUSH EAX                            ; 00540068
    MOV dword ptr [EAX + 0x57c],0x1     ; 00540069
    CALL FUN_005ad770                   ; 00540073
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad770()
    ADD ESP,0x8                         ; 00540078
    RET                                 ; 0054007b

