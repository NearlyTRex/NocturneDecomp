; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00409830(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   FUN_00427730 at 0042773b
;   FUN_004c7180 at 004c7191
;   FUN_004e5f00 at 004e5f14
;   FUN_004e7950 at 004e795b
;   FUN_00578500 at 0057850c
;   FUN_00587b60 at 00587b6b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409830
        ;   Label: FUN_00409830
    MOV dword ptr [EAX + 0x48],0x0      ; 00409834
    MOV dword ptr [EAX + 0x50],0x0      ; 0040983b
    MOV EDX,dword ptr [EAX + 0x44]      ; 00409842
    MOV dword ptr [EAX + 0x4c],EDX      ; 00409845
    LEA EAX,[EAX]                       ; 00409848
    MOV EDX,EDX                         ; 0040984e
    RET                                 ; 00409850
        ;   Label: LAB_00409850

