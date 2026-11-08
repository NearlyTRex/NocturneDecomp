; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005764a0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005764a0
        ;   Label: FUN_005764a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005764a1
    PUSH EBX                            ; 005764a5
    CALL FUN_00408a80                   ; 005764a6
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 005764ab
    LEA EAX,[EBX + 0x2b4]               ; 005764ae
    PUSH EAX                            ; 005764b4
    CALL FUN_0044fd00                   ; 005764b5
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 005764ba
    MOV dword ptr [EBX + 0x430],0x0     ; 005764bd
    POP EBX                             ; 005764c7
    RET                                 ; 005764c8

