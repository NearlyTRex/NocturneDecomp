; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e3fc0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e3fc0
        ;   Label: FUN_004e3fc0
    PUSH EDI                            ; 004e3fc1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e3fc2
    PUSH EDX                            ; 004e3fc6
    CALL FUN_00408600                   ; 004e3fc7
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    MOV dword ptr [EAX + 0x154],0x5e2634 ; 004e3fcc
    MOV ESI,0x5c6b12                    ; 004e3fd6
    MOV dword ptr [EAX + 0x158],0x42600000 ; 004e3fdb
    MOV EDX,EAX                         ; 004e3fe5
    MOV dword ptr [EAX + 0x15c],0x40c00000 ; 004e3fe7
    ADD ESP,0x4                         ; 004e3ff1
    MOV dword ptr [EAX + 0xfc],0x1      ; 004e3ff4
    LEA EDI,[EAX + 0x164]               ; 004e3ffe
    MOV dword ptr [EAX + 0x160],0x1     ; 004e4004
    PUSH EDI                            ; 004e400e
    MOV AL,byte ptr [ESI]               ; 004e400f
        ;   Label: LAB_004e400f
    MOV byte ptr [EDI],AL               ; 004e4011
    CMP AL,0x0                          ; 004e4013
    JZ 0x004e4027                       ; 004e4015
        ;   XREF to: 004e4027 (CONDITIONAL_JUMP)  ; LAB_004e4027
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4017
    ADD ESI,0x2                         ; 004e401a
    MOV byte ptr [EDI + 0x1],AL         ; 004e401d
    ADD EDI,0x2                         ; 004e4020
    CMP AL,0x0                          ; 004e4023
    JNZ 0x004e400f                      ; 004e4025
        ;   XREF to: 004e400f (CONDITIONAL_JUMP)  ; LAB_004e400f
    POP EDI                             ; 004e4027
        ;   Label: LAB_004e4027
    MOV ESI,0x5c6b17                    ; 004e4028
    LEA EDI,[EDX + 0x1c8]               ; 004e402d
    PUSH EDI                            ; 004e4033
    MOV AL,byte ptr [ESI]               ; 004e4034
        ;   Label: LAB_004e4034
    MOV byte ptr [EDI],AL               ; 004e4036
    CMP AL,0x0                          ; 004e4038
    JZ 0x004e404c                       ; 004e403a
        ;   XREF to: 004e404c (CONDITIONAL_JUMP)  ; LAB_004e404c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e403c
    ADD ESI,0x2                         ; 004e403f
    MOV byte ptr [EDI + 0x1],AL         ; 004e4042
    ADD EDI,0x2                         ; 004e4045
    CMP AL,0x0                          ; 004e4048
    JNZ 0x004e4034                      ; 004e404a
        ;   XREF to: 004e4034 (CONDITIONAL_JUMP)  ; LAB_004e4034
    POP EDI                             ; 004e404c
        ;   Label: LAB_004e404c
    MOV EAX,EDX                         ; 004e404d
    POP EDI                             ; 004e404f
    POP ESI                             ; 004e4050
    RET                                 ; 004e4051

