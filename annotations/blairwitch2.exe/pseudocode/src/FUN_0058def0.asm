; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058def0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe250
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058def0
        ;   Label: FUN_0058def0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058def1
    TEST byte ptr [ESP + 0xc],0x4       ; 0058def5
    JNZ 0x0058df5d                      ; 0058defa
        ;   XREF to: 0058df5d (CONDITIONAL_JUMP)  ; LAB_0058df5d
    PUSH 0x0                            ; 0058defc
    ADD EBX,0x3a20                      ; 0058defe
    PUSH EBX                            ; 0058df04
    CALL FUN_0040f2b0                   ; 0058df05
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0058df0a
    PUSH 0x0                            ; 0058df0d
    SUB EAX,0x9c8                       ; 0058df0f
    PUSH EAX                            ; 0058df14
    CALL FUN_0059df70                   ; 0058df15
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0058df1a
    PUSH 0x0                            ; 0058df1d
    SUB EAX,0x34c                       ; 0058df1f
    PUSH EAX                            ; 0058df24
    CALL FUN_005b1480                   ; 0058df25
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0058df2a
    PUSH 0x0                            ; 0058df2d
    SUB EAX,0x2a58                      ; 0058df2f
    PUSH EAX                            ; 0058df34
    CALL FUN_00544d50                   ; 0058df35
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0058df3a
    PUSH 0x1                            ; 0058df3d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0058df3f
    PUSH EBX                            ; 0058df45
    CALL FUN_00408930                   ; 0058df46
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0058df4b
    MOV DL,byte ptr [ESP + 0xc]         ; 0058df4e
    MOV EBX,EAX                         ; 0058df52
    TEST DL,0x2                         ; 0058df54
    JNZ 0x0058df78                      ; 0058df57
        ;   XREF to: 0058df78 (CONDITIONAL_JUMP)  ; LAB_0058df78
    MOV EAX,EBX                         ; 0058df59
    POP EBX                             ; 0058df5b
    RET                                 ; 0058df5c
    PUSH 0x5fe250                       ; 0058df5d | DAT_005fe250
        ;   Label: LAB_0058df5d
    PUSH EBX                            ; 0058df62
    CALL FUN_005b7fa7                   ; 0058df63
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0058df68
    PUSH EAX                            ; 0058df6b
    CALL FUN_005b7fce                   ; 0058df6c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0058df71
    MOV EAX,EBX                         ; 0058df74
    POP EBX                             ; 0058df76
    RET                                 ; 0058df77
    PUSH EAX                            ; 0058df78
        ;   Label: LAB_0058df78
    CALL FUN_005b7fdc                   ; 0058df79
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0058df7e
    MOV EAX,EBX                         ; 0058df81
    POP EBX                             ; 0058df83
    RET                                 ; 0058df84

