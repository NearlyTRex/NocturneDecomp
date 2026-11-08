; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496840(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_I_keyReel_005c049d+2
;   TerminatedCString s_keyEvent_005c04a7
;   undefined4 DAT_005fc4bc
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b930
;   FUN_00459500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496840
        ;   Label: FUN_00496840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496841
    PUSH EBX                            ; 00496845
    CALL FUN_00459500                   ; 00496846
        ;   XREF to: 00459500 (UNCONDITIONAL_CALL)  ; undefined FUN_00459500()
    MOV EDX,dword ptr [0x005fc4bc]      ; 0049684b | DAT_005fc4bc
    ADD ESP,0x4                         ; 00496851
    CMP EDX,0x2                         ; 00496854
    JGE 0x0049685b                      ; 00496857
        ;   XREF to: 0049685b (CONDITIONAL_JUMP)  ; LAB_0049685b
    POP EBX                             ; 00496859
    RET                                 ; 0049685a
    PUSH 0x5c049f                       ; 0049685b | s_I_keyReel_005c049d+2
        ;   Label: LAB_0049685b
    LEA EAX,[EBX + 0x370]               ; 00496860
    PUSH EAX                            ; 00496866
    CALL FUN_0040b930                   ; 00496867
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 0049686c
    PUSH 0x5c04a7                       ; 0049686f | = "keyEvent"
    LEA EAX,[EBX + 0x374]               ; 00496874
    PUSH EAX                            ; 0049687a
    CALL FUN_0040b680                   ; 0049687b
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00496880
    POP EBX                             ; 00496883
    RET                                 ; 00496884

