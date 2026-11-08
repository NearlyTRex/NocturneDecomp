; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ebd0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b61f7
;   TerminatedCString s_effectClassNameList_005b61fc
;   TerminatedCString s_addToPathGrid_005b6210
;   undefined4 DAT_005f0bc8
;
; Called Functions:
;   FUN_0040b400
;   FUN_0040b680
;   FUN_0040b8b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ebd0
        ;   Label: FUN_0040ebd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ebd1
    PUSH EBX                            ; 0040ebd5
    CALL FUN_0040c280                   ; 0040ebd6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0040ebdb
    PUSH 0x5b61f7                       ; 0040ebde | DAT_005b61f7
    LEA EAX,[EBX + 0x158]               ; 0040ebe3
    PUSH EAX                            ; 0040ebe9
    CALL FUN_0040b400                   ; 0040ebea
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    MOV EDX,dword ptr [0x005f0bc8]      ; 0040ebef | DAT_005f0bc8
    ADD ESP,0x8                         ; 0040ebf5
    CMP EDX,0x2                         ; 0040ebf8
    JGE 0x0040ebff                      ; 0040ebfb
        ;   XREF to: 0040ebff (CONDITIONAL_JUMP)  ; LAB_0040ebff
    POP EBX                             ; 0040ebfd
    RET                                 ; 0040ebfe
    PUSH 0x5b61fc                       ; 0040ebff | = "effectClassNameList"
        ;   Label: LAB_0040ebff
    LEA EAX,[EBX + 0x168]               ; 0040ec04
    PUSH EAX                            ; 0040ec0a
    CALL FUN_0040b680                   ; 0040ec0b
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0040ec10
    PUSH 0x5b6210                       ; 0040ec13 | = "addToPathGrid"
    ADD EBX,0x164                       ; 0040ec18
    PUSH EBX                            ; 0040ec1e
    CALL FUN_0040b8b0                   ; 0040ec1f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0040ec24
    POP EBX                             ; 0040ec27
    RET                                 ; 0040ec28

