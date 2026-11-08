; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00536020(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536020
        ;   Label: FUN_00536020
    PUSH ESI                            ; 00536021
    PUSH EDI                            ; 00536022
    MOV EBX,dword ptr [ESP + 0x10]      ; 00536023
    PUSH EBX                            ; 00536027
    CALL FUN_004085c0                   ; 00536028
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0053602d
    ADD EAX,0x158                       ; 00536030
    PUSH EAX                            ; 00536035
    CALL FUN_00468860                   ; 00536036
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 0053603b
    LEA EBX,[EAX + 0xfffffea8]          ; 0053603e
    PUSH 0x5ecc57                       ; 00536044
    LEA EAX,[EBX + 0x158]               ; 00536049
    PUSH EAX                            ; 0053604f
    MOV dword ptr [EBX + 0x154],0x6047f4 ; 00536050
    CALL FUN_00468950                   ; 0053605a
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 0053605f
    MOV ESI,0x5ecc60                    ; 00536062
    LEA EDI,[EBX + 0x2d4]               ; 00536067
    PUSH EDI                            ; 0053606d
    MOV AL,byte ptr [ESI]               ; 0053606e
        ;   Label: LAB_0053606e
    MOV byte ptr [EDI],AL               ; 00536070
    CMP AL,0x0                          ; 00536072
    JZ 0x00536086                       ; 00536074
        ;   XREF to: 00536086 (CONDITIONAL_JUMP)  ; LAB_00536086
    MOV AL,byte ptr [ESI + 0x1]         ; 00536076
    ADD ESI,0x2                         ; 00536079
    MOV byte ptr [EDI + 0x1],AL         ; 0053607c
    ADD EDI,0x2                         ; 0053607f
    CMP AL,0x0                          ; 00536082
    JNZ 0x0053606e                      ; 00536084
        ;   XREF to: 0053606e (CONDITIONAL_JUMP)  ; LAB_0053606e
    POP EDI                             ; 00536086
        ;   Label: LAB_00536086
    MOV ESI,0x5ecc65                    ; 00536087
    LEA EDI,[EBX + 0x338]               ; 0053608c
    PUSH EDI                            ; 00536092
    MOV AL,byte ptr [ESI]               ; 00536093
        ;   Label: LAB_00536093
    MOV byte ptr [EDI],AL               ; 00536095
    CMP AL,0x0                          ; 00536097
    JZ 0x005360ab                       ; 00536099
        ;   XREF to: 005360ab (CONDITIONAL_JUMP)  ; LAB_005360ab
    MOV AL,byte ptr [ESI + 0x1]         ; 0053609b
    ADD ESI,0x2                         ; 0053609e
    MOV byte ptr [EDI + 0x1],AL         ; 005360a1
    ADD EDI,0x2                         ; 005360a4
    CMP AL,0x0                          ; 005360a7
    JNZ 0x00536093                      ; 005360a9
        ;   XREF to: 00536093 (CONDITIONAL_JUMP)  ; LAB_00536093
    POP EDI                             ; 005360ab
        ;   Label: LAB_005360ab
    MOV dword ptr [EBX + 0x39c],0x1     ; 005360ac
    MOV dword ptr [EBX + 0x3a0],0x0     ; 005360b6
    MOV dword ptr [EBX + 0x3a8],0x3f060a92 ; 005360c0
    MOV byte ptr [EBX + 0x3ac],0x0      ; 005360ca
    MOV byte ptr [EBX + 0x3d0],0x0      ; 005360d1
    MOV byte ptr [EBX + 0x3f0],0x0      ; 005360d8
    MOV dword ptr [EBX + 0x3cc],0x0     ; 005360df
    MOV dword ptr [EBX + 0x428],0x0     ; 005360e9
    MOV dword ptr [EBX + 0x42c],0x0     ; 005360f3
    MOV dword ptr [EBX + 0x430],0x0     ; 005360fd
    MOV dword ptr [EBX + 0x434],0x0     ; 00536107
    MOV dword ptr [EBX + 0x440],0x0     ; 00536111
    MOV EAX,EBX                         ; 0053611b
    MOV dword ptr [EBX + 0x43c],0x0     ; 0053611d
    POP EDI                             ; 00536127
    POP ESI                             ; 00536128
    POP EBX                             ; 00536129
    RET                                 ; 0053612a

