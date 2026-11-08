; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ddc00(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e3a37
;
; Called Functions:
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ddc00
        ;   Label: FUN_004ddc00
    PUSH EDX                            ; 004ddc04
    CALL FUN_0040c040                   ; 004ddc05
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004ddc0a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ddc0d
    PUSH 0x5e3a37                       ; 004ddc11 | = "modelName"
    ADD EAX,0x158                       ; 004ddc16
    PUSH EAX                            ; 004ddc1b
    CALL FUN_0040b770                   ; 004ddc1c
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 004ddc21
    RET                                 ; 004ddc24

