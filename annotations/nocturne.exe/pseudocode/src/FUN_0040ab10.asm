; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0040ab10(undefined4 param_1,int param_2)
;
;
; XREF[5]:
;   FUN_004add80 at 004add91
;   FUN_004ca300 at 004ca314
;   FUN_004cbcb0 at 004cbcbb
;   FUN_00548530 at 0054853c
;   FUN_005522a0 at 005522ab
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

