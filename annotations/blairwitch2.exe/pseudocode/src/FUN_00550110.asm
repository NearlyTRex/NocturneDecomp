; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_004964c0 at 00496559
;   FUN_004e6b20 at 004e6c07
;   FUN_005594c0 at 00559a98
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550110 | DAT_0264161c
        ;   Label: FUN_00550110
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550116
    SUB EAX,EDX                         ; 0055011d
    SHL EAX,0x5                         ; 0055011f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550122
    MOV dword ptr [EAX + 0x2641624],EDX ; 00550126
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055012c
    MOV dword ptr [EAX + 0x2641628],EDX ; 00550130
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550136
    MOV dword ptr [EAX + 0x264162c],EDX ; 0055013a
    MOV EDX,dword ptr [ESP + 0x10]      ; 00550140
    MOV dword ptr [EAX + 0x2641630],EDX ; 00550144
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055014a
    MOV dword ptr [EAX + 0x2641634],EDX ; 0055014e
    MOV EDX,dword ptr [ESP + 0x18]      ; 00550154
    MOV dword ptr [EAX + 0x2641638],EDX ; 00550158
    XOR EDX,EDX                         ; 0055015e
    MOV dword ptr [EAX + 0x264163c],EDX ; 00550160
    MOV dword ptr [EAX + 0x2641640],EDX ; 00550166
    RET                                 ; 0055016c

