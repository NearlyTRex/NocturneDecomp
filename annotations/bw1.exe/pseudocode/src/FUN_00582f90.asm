; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00582f90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582f90
        ;   Label: FUN_00582f90
    PUSH ESI                            ; 00582f91
    PUSH EDI                            ; 00582f92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00582f93
    PUSH EBX                            ; 00582f97
    CALL FUN_004085c0                   ; 00582f98
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 00582f9d
    ADD EAX,0x158                       ; 00582fa0
    PUSH EAX                            ; 00582fa5
    CALL FUN_00468860                   ; 00582fa6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 00582fab
    LEA EBX,[EAX + 0xfffffea8]          ; 00582fae
    PUSH 0x5f61ef                       ; 00582fb4
    LEA EAX,[EBX + 0x158]               ; 00582fb9
    PUSH EAX                            ; 00582fbf
    MOV ESI,0x5f61f9                    ; 00582fc0
    MOV dword ptr [EBX + 0x154],0x605ce4 ; 00582fc5
    CALL FUN_00468950                   ; 00582fcf
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00582fd4
    ADD ESP,0x8                         ; 00582fde
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00582fe1
    LEA EDI,[EBX + 0x2f0]               ; 00582feb
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00582ff1
    PUSH EDI                            ; 00582ffb
    MOV AL,byte ptr [ESI]               ; 00582ffc
        ;   Label: LAB_00582ffc
    MOV byte ptr [EDI],AL               ; 00582ffe
    CMP AL,0x0                          ; 00583000
    JZ 0x00583014                       ; 00583002
        ;   XREF to: 00583014 (CONDITIONAL_JUMP)  ; LAB_00583014
    MOV AL,byte ptr [ESI + 0x1]         ; 00583004
    ADD ESI,0x2                         ; 00583007
    MOV byte ptr [EDI + 0x1],AL         ; 0058300a
    ADD EDI,0x2                         ; 0058300d
    CMP AL,0x0                          ; 00583010
    JNZ 0x00582ffc                      ; 00583012
        ;   XREF to: 00582ffc (CONDITIONAL_JUMP)  ; LAB_00582ffc
    POP EDI                             ; 00583014
        ;   Label: LAB_00583014
    MOV ESI,0x5f61fe                    ; 00583015
    LEA EDI,[EBX + 0x354]               ; 0058301a
    PUSH EDI                            ; 00583020
    MOV AL,byte ptr [ESI]               ; 00583021
        ;   Label: LAB_00583021
    MOV byte ptr [EDI],AL               ; 00583023
    CMP AL,0x0                          ; 00583025
    JZ 0x00583039                       ; 00583027
        ;   XREF to: 00583039 (CONDITIONAL_JUMP)  ; LAB_00583039
    MOV AL,byte ptr [ESI + 0x1]         ; 00583029
    ADD ESI,0x2                         ; 0058302c
    MOV byte ptr [EDI + 0x1],AL         ; 0058302f
    ADD EDI,0x2                         ; 00583032
    CMP AL,0x0                          ; 00583035
    JNZ 0x00583021                      ; 00583037
        ;   XREF to: 00583021 (CONDITIONAL_JUMP)  ; LAB_00583021
    POP EDI                             ; 00583039
        ;   Label: LAB_00583039
    MOV ESI,0x5f6203                    ; 0058303a
    LEA EDI,[EBX + 0x3b8]               ; 0058303f
    PUSH EDI                            ; 00583045
    MOV AL,byte ptr [ESI]               ; 00583046
        ;   Label: LAB_00583046
    MOV byte ptr [EDI],AL               ; 00583048
    CMP AL,0x0                          ; 0058304a
    JZ 0x0058305e                       ; 0058304c
        ;   XREF to: 0058305e (CONDITIONAL_JUMP)  ; LAB_0058305e
    MOV AL,byte ptr [ESI + 0x1]         ; 0058304e
    ADD ESI,0x2                         ; 00583051
    MOV byte ptr [EDI + 0x1],AL         ; 00583054
    ADD EDI,0x2                         ; 00583057
    CMP AL,0x0                          ; 0058305a
    JNZ 0x00583046                      ; 0058305c
        ;   XREF to: 00583046 (CONDITIONAL_JUMP)  ; LAB_00583046
    POP EDI                             ; 0058305e
        ;   Label: LAB_0058305e
    MOV ESI,0x5f6208                    ; 0058305f
    LEA EDI,[EBX + 0x41c]               ; 00583064
    PUSH EDI                            ; 0058306a
    MOV AL,byte ptr [ESI]               ; 0058306b
        ;   Label: LAB_0058306b
    MOV byte ptr [EDI],AL               ; 0058306d
    CMP AL,0x0                          ; 0058306f
    JZ 0x00583083                       ; 00583071
        ;   XREF to: 00583083 (CONDITIONAL_JUMP)  ; LAB_00583083
    MOV AL,byte ptr [ESI + 0x1]         ; 00583073
    ADD ESI,0x2                         ; 00583076
    MOV byte ptr [EDI + 0x1],AL         ; 00583079
    ADD EDI,0x2                         ; 0058307c
    CMP AL,0x0                          ; 0058307f
    JNZ 0x0058306b                      ; 00583081
        ;   XREF to: 0058306b (CONDITIONAL_JUMP)  ; LAB_0058306b
    POP EDI                             ; 00583083
        ;   Label: LAB_00583083
    MOV dword ptr [EBX + 0x480],0x3f800000 ; 00583084
    MOV dword ptr [EBX + 0x484],0x3f800000 ; 0058308e
    MOV byte ptr [EBX + 0x48c],0x0      ; 00583098
    MOV byte ptr [EBX + 0x4f0],0x0      ; 0058309f
    MOV dword ptr [EBX + 0x554],0x3f800000 ; 005830a6
    MOV dword ptr [EBX + 0x558],0x3dcccccd ; 005830b0
    MOV EAX,EBX                         ; 005830ba
    MOV dword ptr [EBX + 0x55c],0x0     ; 005830bc
    POP EDI                             ; 005830c6
    POP ESI                             ; 005830c7
    POP EBX                             ; 005830c8
    RET                                 ; 005830c9

