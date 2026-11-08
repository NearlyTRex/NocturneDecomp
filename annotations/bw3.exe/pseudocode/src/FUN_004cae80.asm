; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cae80(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cae80
        ;   Label: FUN_004cae80
    CMP dword ptr [EAX + 0x1b0],0x0     ; 004cae84
    JZ 0x004cae96                       ; 004cae8b
        ;   XREF to: 004cae96 (CONDITIONAL_JUMP)  ; LAB_004cae96
    CMP dword ptr [EAX + 0x218],0x0     ; 004cae8d
    JZ 0x004cae9c                       ; 004cae94
        ;   XREF to: 004cae9c (CONDITIONAL_JUMP)  ; LAB_004cae9c
    MOV EAX,0x1                         ; 004cae96
        ;   Label: LAB_004cae96
    RET                                 ; 004cae9b
    MOV dword ptr [EAX + 0x100],0x1     ; 004cae9c
        ;   Label: LAB_004cae9c
    XOR EAX,EAX                         ; 004caea6
    RET                                 ; 004caea8

