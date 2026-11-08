; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005950c0(int param_1)
;
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b6f0
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005950c0
        ;   Label: FUN_005950c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005950c1
    PUSH EBX                            ; 005950c5
    CALL FUN_0040c040                   ; 005950c6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 005950cb
    PUSH 0x0                            ; 005950ce
    LEA EAX,[EBX + 0x158]               ; 005950d0
    PUSH EAX                            ; 005950d6
    CALL FUN_0040b1c0                   ; 005950d7
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 005950dc
    PUSH 0x0                            ; 005950df
    LEA EAX,[EBX + 0x164]               ; 005950e1
    PUSH EAX                            ; 005950e7
    CALL FUN_0040b6f0                   ; 005950e8
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005950ed
    POP EBX                             ; 005950f0
    RET                                 ; 005950f1

