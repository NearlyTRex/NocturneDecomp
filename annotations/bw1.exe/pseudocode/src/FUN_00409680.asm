; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00409680(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   FUN_00431160 at 0043116b
;   FUN_004e38f0 at 004e3901
;   FUN_00504ba0 at 00504bb4
;   FUN_005065f0 at 005065fb
;   FUN_0059bd80 at 0059bd8c
;   FUN_005ab7c0 at 005ab7cb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409680
        ;   Label: FUN_00409680
    MOV dword ptr [EAX + 0x48],0x0      ; 00409684
    MOV dword ptr [EAX + 0x50],0x0      ; 0040968b
    MOV EDX,dword ptr [EAX + 0x44]      ; 00409692
    MOV dword ptr [EAX + 0x4c],EDX      ; 00409695
    LEA EAX,[EAX]                       ; 00409698
    MOV EDX,EDX                         ; 0040969e
    RET                                 ; 004096a0
        ;   Label: LAB_004096a0

