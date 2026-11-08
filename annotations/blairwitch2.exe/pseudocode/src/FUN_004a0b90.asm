; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0b90(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005d5960+1
;   TerminatedCString s_onFire_005d596b
;   TerminatedCString s_timeToExplode_005d5972
;   TerminatedCString s_onFireCondition_005d5980
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

    PUSH EBX                            ; 004a0b90
        ;   Label: FUN_004a0b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0b91
    PUSH EBX                            ; 004a0b95
    CALL FUN_0040c330                   ; 004a0b96
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 004a0b9b
    PUSH 0x5d5961                       ; 004a0b9e | s_modelName_005d5960+1
    LEA EAX,[EBX + 0x2b4]               ; 004a0ba3
    PUSH EAX                            ; 004a0ba9
    CALL FUN_0040ba60                   ; 004a0baa
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 004a0baf
    PUSH 0x5d596b                       ; 004a0bb2 | = "onFire"
    LEA EAX,[EBX + 0x430]               ; 004a0bb7
    PUSH EAX                            ; 004a0bbd
    CALL FUN_0040b960                   ; 004a0bbe
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004a0bc3
    PUSH 0x5d5972                       ; 004a0bc6 | = "timeToExplode"
    LEA EAX,[EBX + 0x434]               ; 004a0bcb
    PUSH EAX                            ; 004a0bd1
    CALL FUN_0040b8e0                   ; 004a0bd2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004a0bd7
    PUSH 0x5d5980                       ; 004a0bda | = "onFireCondition"
    ADD EBX,0x438                       ; 004a0bdf
    PUSH EBX                            ; 004a0be5
    CALL FUN_0040b730                   ; 004a0be6
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004a0beb
    POP EBX                             ; 004a0bee
    RET                                 ; 004a0bef

