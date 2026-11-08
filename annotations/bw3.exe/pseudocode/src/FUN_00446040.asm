; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446040(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b99fc
;   TerminatedCString s_lastPlatform_005b9a06
;   undefined4 DAT_005f1770
;
; Called Functions:
;   FUN_0040b930
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446040
        ;   Label: FUN_00446040
    MOV EBX,dword ptr [ESP + 0x8]       ; 00446041
    PUSH EBX                            ; 00446045
    CALL FUN_0040c280                   ; 00446046
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0044604b
    PUSH 0x5b99fc                       ; 0044604e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00446053
    PUSH EAX                            ; 00446059
    CALL FUN_0040b9b0                   ; 0044605a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    MOV EDX,dword ptr [0x005f1770]      ; 0044605f | DAT_005f1770
    ADD ESP,0x8                         ; 00446065
    CMP EDX,0x2                         ; 00446068
    JGE 0x0044606f                      ; 0044606b
        ;   XREF to: 0044606f (CONDITIONAL_JUMP)  ; LAB_0044606f
    POP EBX                             ; 0044606d
    RET                                 ; 0044606e
    PUSH 0x5b9a06                       ; 0044606f | = "lastPlatform"
        ;   Label: LAB_0044606f
    LEA EAX,[EBX + 0x2dc]               ; 00446074
    PUSH EAX                            ; 0044607a
    CALL FUN_0040b930                   ; 0044607b
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 00446080
    POP EBX                             ; 00446083
    RET                                 ; 00446084

