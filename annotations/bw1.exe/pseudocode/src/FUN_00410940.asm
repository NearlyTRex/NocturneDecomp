; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410940(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d359a
;   TerminatedCString s_effectClassNameList_005d359f
;   TerminatedCString s_addToPathGrid_005d35b3
;   undefined4 DAT_00610954
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b670
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410940
        ;   Label: FUN_00410940
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410941
    PUSH EBX                            ; 00410945
    CALL FUN_0040c040                   ; 00410946
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0041094b
    PUSH 0x5d359a                       ; 0041094e | DAT_005d359a
    LEA EAX,[EBX + 0x158]               ; 00410953
    PUSH EAX                            ; 00410959
    CALL FUN_0040b1c0                   ; 0041095a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    MOV EDX,dword ptr [0x00610954]      ; 0041095f | DAT_00610954
    ADD ESP,0x8                         ; 00410965
    CMP EDX,0x2                         ; 00410968
    JGE 0x0041096f                      ; 0041096b
        ;   XREF to: 0041096f (CONDITIONAL_JUMP)  ; LAB_0041096f
    POP EBX                             ; 0041096d
    RET                                 ; 0041096e
    PUSH 0x5d359f                       ; 0041096f | = "effectClassNameList"
        ;   Label: LAB_0041096f
    LEA EAX,[EBX + 0x168]               ; 00410974
    PUSH EAX                            ; 0041097a
    CALL FUN_0040b440                   ; 0041097b
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00410980
    PUSH 0x5d35b3                       ; 00410983 | = "addToPathGrid"
    ADD EBX,0x164                       ; 00410988
    PUSH EBX                            ; 0041098e
    CALL FUN_0040b670                   ; 0041098f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00410994
    POP EBX                             ; 00410997
    RET                                 ; 00410998

