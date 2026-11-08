; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484e20(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_0047b1f0 at 0047b32e
;   FUN_0047b800 at 0047b967
;   FUN_00481fc0 at 00481fe2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484e20
        ;   Label: FUN_00484e20
    MOV byte ptr [EAX + 0x4],0x0        ; 00484e24
    MOV byte ptr [EAX + 0x1c],0x0       ; 00484e28
    MOV dword ptr [EAX + 0x14],0x0      ; 00484e2c
    MOV dword ptr [EAX + 0x18],0x0      ; 00484e33
    MOV dword ptr [EAX],0x0             ; 00484e3a
    MOV EDX,dword ptr [EAX + 0x14]      ; 00484e40
    MOV dword ptr [EAX + 0x10],EDX      ; 00484e43
    MOV dword ptr [EAX + 0xc],EDX       ; 00484e46
    MOV dword ptr [EAX + 0x8],EDX       ; 00484e49
    RET                                 ; 00484e4c

