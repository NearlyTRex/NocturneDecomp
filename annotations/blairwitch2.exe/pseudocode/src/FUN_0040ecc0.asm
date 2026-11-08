; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ecc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005cb323+1
;   TerminatedCString s_dropCondition_005cb32e
;   TerminatedCString s_dropHeight_005cb33c
;   TerminatedCString s_triggered_005cb347
;   undefined4 DAT_005cb351
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ecc0
        ;   Label: FUN_0040ecc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ecc1
    PUSH EBX                            ; 0040ecc5
    CALL FUN_0040c330                   ; 0040ecc6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0040eccb
    PUSH 0x5cb324                       ; 0040ecce | s_modelName_005cb323+1
    LEA EAX,[EBX + 0x2b4]               ; 0040ecd3
    PUSH EAX                            ; 0040ecd9
    CALL FUN_0040ba60                   ; 0040ecda
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 0040ecdf
    PUSH 0x5cb32e                       ; 0040ece2 | = "dropCondition"
    LEA EAX,[EBX + 0x430]               ; 0040ece7
    PUSH EAX                            ; 0040eced
    CALL FUN_0040b730                   ; 0040ecee
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0040ecf3
    PUSH 0x5cb33c                       ; 0040ecf6 | = "dropHeight"
    LEA EAX,[EBX + 0x494]               ; 0040ecfb
    PUSH EAX                            ; 0040ed01
    CALL FUN_0040b8e0                   ; 0040ed02
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040ed07
    PUSH 0x5cb347                       ; 0040ed0a | = "triggered"
    LEA EAX,[EBX + 0x498]               ; 0040ed0f
    PUSH EAX                            ; 0040ed15
    CALL FUN_0040b960                   ; 0040ed16
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0040ed1b
    PUSH 0x5cb351                       ; 0040ed1e | DAT_005cb351
    ADD EBX,0x49c                       ; 0040ed23
    PUSH EBX                            ; 0040ed29
    CALL FUN_0040b8e0                   ; 0040ed2a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040ed2f
    POP EBX                             ; 0040ed32
    RET                                 ; 0040ed33

