; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc800(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005c4617
;
; Called Functions:
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cc800
        ;   Label: FUN_004cc800
    PUSH EDX                            ; 004cc804
    CALL FUN_0040c280                   ; 004cc805
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 004cc80a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc80d
    PUSH 0x5c4617                       ; 004cc811 | = "modelName"
    ADD EAX,0x158                       ; 004cc816
    PUSH EAX                            ; 004cc81b
    CALL FUN_0040b9b0                   ; 004cc81c
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 004cc821
    RET                                 ; 004cc824

