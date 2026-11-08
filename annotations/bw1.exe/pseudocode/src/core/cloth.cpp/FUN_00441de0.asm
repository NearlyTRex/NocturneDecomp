; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441de0(int *param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00468c80 at 0046903c
;   FUN_00585270 at 0058564b
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441de0
        ;   Label: FUN_00441de0
    PUSH ESI                            ; 00441de1
    PUSH EDI                            ; 00441de2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00441de3
    CMP dword ptr [EBX],0xa             ; 00441de7
    JGE 0x00441e30                      ; 00441dea
        ;   XREF to: 00441e30 (CONDITIONAL_JUMP)  ; LAB_00441e30
    MOV EDX,dword ptr [EBX]             ; 00441dec
        ;   Label: LAB_00441dec
    LEA EAX,[EDX*0x4 + 0x0]             ; 00441dee
    ADD EAX,EDX                         ; 00441df5
    LEA EDI,[EBX + 0x4]                 ; 00441df7
    SHL EAX,0x3                         ; 00441dfa
    MOV ESI,dword ptr [ESP + 0x14]      ; 00441dfd
    ADD EDI,EAX                         ; 00441e01
    PUSH EDI                            ; 00441e03
    MOV AL,byte ptr [ESI]               ; 00441e04
        ;   Label: LAB_00441e04
    MOV byte ptr [EDI],AL               ; 00441e06
    CMP AL,0x0                          ; 00441e08
    JZ 0x00441e1c                       ; 00441e0a
        ;   XREF to: 00441e1c (CONDITIONAL_JUMP)  ; LAB_00441e1c
    MOV AL,byte ptr [ESI + 0x1]         ; 00441e0c
    ADD ESI,0x2                         ; 00441e0f
    MOV byte ptr [EDI + 0x1],AL         ; 00441e12
    ADD EDI,0x2                         ; 00441e15
    CMP AL,0x0                          ; 00441e18
    JNZ 0x00441e04                      ; 00441e1a
        ;   XREF to: 00441e04 (CONDITIONAL_JUMP)  ; LAB_00441e04
    POP EDI                             ; 00441e1c
        ;   Label: LAB_00441e1c
    MOV EAX,dword ptr [EBX]             ; 00441e1d
    MOV dword ptr [EBX + EAX*0x4 + 0x194],0x0 ; 00441e1f
    INC dword ptr [EBX]                 ; 00441e2a
    POP EDI                             ; 00441e2c
    POP ESI                             ; 00441e2d
    POP EBX                             ; 00441e2e
    RET                                 ; 00441e2f
    MOV ECX,0x5d69b6                    ; 00441e30
        ;   Label: LAB_00441e30
    MOV ESI,0x5de                       ; 00441e35
    PUSH 0x5d69c8                       ; 00441e3a
    MOV dword ptr [0x01d1d400],ECX      ; 00441e3f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00441e45 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00441e4b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00441e50
    JMP 0x00441dec                      ; 00441e53
        ;   XREF to: 00441dec (UNCONDITIONAL_JUMP)  ; LAB_00441dec

