; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_004096c0(undefined4 param_1,int param_2)
;
;
; XREF[4]:
;   FUN_004304e0 at 004304eb
;   FUN_004cc480 at 004cc491
;   FUN_0056ed70 at 0056ed7c
;   FUN_00578fc0 at 00578fcb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004096c0
        ;   Label: FUN_004096c0
    MOV dword ptr [EAX + 0x48],0x0      ; 004096c4
    MOV dword ptr [EAX + 0x50],0x0      ; 004096cb
    MOV EDX,dword ptr [EAX + 0x44]      ; 004096d2
    MOV dword ptr [EAX + 0x4c],EDX      ; 004096d5
    LEA EAX,[EAX]                       ; 004096d8
    MOV EDX,EDX                         ; 004096de
    RET                                 ; 004096e0
        ;   Label: LAB_004096e0

