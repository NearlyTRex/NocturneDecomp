; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00502d70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00502d70
        ;   Label: FUN_00502d70
    PUSH EDI                            ; 00502d71
    MOV EDX,dword ptr [ESP + 0xc]       ; 00502d72
    PUSH EDX                            ; 00502d76
    CALL FUN_004085c0                   ; 00502d77
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    MOV dword ptr [EAX + 0x154],0x6032d4 ; 00502d7c
    MOV ESI,0x5e704d                    ; 00502d86
    MOV dword ptr [EAX + 0x158],0x42600000 ; 00502d8b
    MOV EDX,EAX                         ; 00502d95
    MOV dword ptr [EAX + 0x15c],0x40c00000 ; 00502d97
    ADD ESP,0x4                         ; 00502da1
    MOV dword ptr [EAX + 0xfc],0x1      ; 00502da4
    LEA EDI,[EAX + 0x164]               ; 00502dae
    MOV dword ptr [EAX + 0x160],0x1     ; 00502db4
    PUSH EDI                            ; 00502dbe
    MOV AL,byte ptr [ESI]               ; 00502dbf
        ;   Label: LAB_00502dbf
    MOV byte ptr [EDI],AL               ; 00502dc1
    CMP AL,0x0                          ; 00502dc3
    JZ 0x00502dd7                       ; 00502dc5
        ;   XREF to: 00502dd7 (CONDITIONAL_JUMP)  ; LAB_00502dd7
    MOV AL,byte ptr [ESI + 0x1]         ; 00502dc7
    ADD ESI,0x2                         ; 00502dca
    MOV byte ptr [EDI + 0x1],AL         ; 00502dcd
    ADD EDI,0x2                         ; 00502dd0
    CMP AL,0x0                          ; 00502dd3
    JNZ 0x00502dbf                      ; 00502dd5
        ;   XREF to: 00502dbf (CONDITIONAL_JUMP)  ; LAB_00502dbf
    POP EDI                             ; 00502dd7
        ;   Label: LAB_00502dd7
    MOV ESI,0x5e7052                    ; 00502dd8
    LEA EDI,[EDX + 0x1c8]               ; 00502ddd
    PUSH EDI                            ; 00502de3
    MOV AL,byte ptr [ESI]               ; 00502de4
        ;   Label: LAB_00502de4
    MOV byte ptr [EDI],AL               ; 00502de6
    CMP AL,0x0                          ; 00502de8
    JZ 0x00502dfc                       ; 00502dea
        ;   XREF to: 00502dfc (CONDITIONAL_JUMP)  ; LAB_00502dfc
    MOV AL,byte ptr [ESI + 0x1]         ; 00502dec
    ADD ESI,0x2                         ; 00502def
    MOV byte ptr [EDI + 0x1],AL         ; 00502df2
    ADD EDI,0x2                         ; 00502df5
    CMP AL,0x0                          ; 00502df8
    JNZ 0x00502de4                      ; 00502dfa
        ;   XREF to: 00502de4 (CONDITIONAL_JUMP)  ; LAB_00502de4
    POP EDI                             ; 00502dfc
        ;   Label: LAB_00502dfc
    MOV EAX,EDX                         ; 00502dfd
    POP EDI                             ; 00502dff
    POP ESI                             ; 00502e00
    RET                                 ; 00502e01

