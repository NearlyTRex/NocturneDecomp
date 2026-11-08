; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484310(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00481fc0 at 00481fd6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484310
        ;   Label: FUN_00484310
    MOV dword ptr [EAX + 0x4],0x1       ; 00484314
    MOV dword ptr [EAX],0x0             ; 0048431b
    MOV dword ptr [EAX + 0x8],0x1       ; 00484321
    MOV dword ptr [EAX + 0x20],0x0      ; 00484328
    MOV dword ptr [EAX + 0xc],0x1       ; 0048432f
    MOV dword ptr [EAX + 0x10],0x0      ; 00484336
    MOV EDX,dword ptr [EAX + 0x20]      ; 0048433d
    MOV dword ptr [EAX + 0x1c],EDX      ; 00484340
    MOV dword ptr [EAX + 0x18],EDX      ; 00484343
    MOV dword ptr [EAX + 0x14],EDX      ; 00484346
    RET                                 ; 00484349

