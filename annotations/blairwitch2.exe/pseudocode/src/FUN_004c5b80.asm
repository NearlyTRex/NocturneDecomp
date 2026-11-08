; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c5b80(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5b80
        ;   Label: FUN_004c5b80
    CMP dword ptr [EAX + 0x2dc],0x0     ; 004c5b84
    JZ 0x004c5b96                       ; 004c5b8b
        ;   XREF to: 004c5b96 (CONDITIONAL_JUMP)  ; LAB_004c5b96
    CMP dword ptr [EAX + 0x344],0x0     ; 004c5b8d
    JZ 0x004c5b9c                       ; 004c5b94
        ;   XREF to: 004c5b9c (CONDITIONAL_JUMP)  ; LAB_004c5b9c
    MOV EAX,0x1                         ; 004c5b96
        ;   Label: LAB_004c5b96
    RET                                 ; 004c5b9b
    MOV dword ptr [EAX + 0x100],0x1     ; 004c5b9c
        ;   Label: LAB_004c5b9c
    XOR EAX,EAX                         ; 004c5ba6
    RET                                 ; 004c5ba8

