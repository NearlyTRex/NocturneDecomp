; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0040ab10(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ab10
        ;   Label: FUN_0040ab10
    MOV dword ptr [EAX + 0x48],0x0      ; 0040ab14
    MOV dword ptr [EAX + 0x50],0x0      ; 0040ab1b
    MOV EDX,dword ptr [EAX + 0x44]      ; 0040ab22
    MOV dword ptr [EAX + 0x4c],EDX      ; 0040ab25
    LEA EAX,[EAX]                       ; 0040ab28
    MOV EDX,EDX                         ; 0040ab2e
    RET                                 ; 0040ab30
        ;   Label: LAB_0040ab30

