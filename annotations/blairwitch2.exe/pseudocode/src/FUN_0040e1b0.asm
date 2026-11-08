; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e1b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005cb0dd+1
;   TerminatedCString s_weaponClassName_005cb0e8
;   TerminatedCString s_ammoCount_005cb0f8
;   TerminatedCString s_ammoType_005cb102
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b960
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e1b0
        ;   Label: FUN_0040e1b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e1b1
    PUSH EBX                            ; 0040e1b5
    CALL FUN_0040c330                   ; 0040e1b6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0040e1bb
    PUSH 0x5cb0de                       ; 0040e1be | s_modelName_005cb0dd+1
    LEA EAX,[EBX + 0x2b4]               ; 0040e1c3
    PUSH EAX                            ; 0040e1c9
    CALL FUN_0040ba60                   ; 0040e1ca
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 0040e1cf
    PUSH 0x5cb0e8                       ; 0040e1d2 | = "weaponClassName"
    LEA EAX,[EBX + 0x430]               ; 0040e1d7
    PUSH EAX                            ; 0040e1dd
    CALL FUN_0040b730                   ; 0040e1de
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0040e1e3
    PUSH 0x5cb0f8                       ; 0040e1e6 | = "ammoCount"
    LEA EAX,[EBX + 0x470]               ; 0040e1eb
    PUSH EAX                            ; 0040e1f1
    CALL FUN_0040b960                   ; 0040e1f2
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0040e1f7
    PUSH 0x5cb102                       ; 0040e1fa | = "ammoType"
    ADD EBX,0x474                       ; 0040e1ff
    PUSH EBX                            ; 0040e205
    CALL FUN_0040b960                   ; 0040e206
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0040e20b
    POP EBX                             ; 0040e20e
    RET                                 ; 0040e20f

