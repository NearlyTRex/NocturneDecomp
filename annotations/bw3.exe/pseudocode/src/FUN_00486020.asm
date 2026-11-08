; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00486020(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_0047c2c0 at 0047c3fe
;   FUN_0047c8e0 at 0047ca47
;   FUN_004831c0 at 004831e2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00486020
        ;   Label: FUN_00486020
    MOV byte ptr [EAX + 0x4],0x0        ; 00486024
    MOV byte ptr [EAX + 0x1c],0x0       ; 00486028
    MOV dword ptr [EAX + 0x14],0x0      ; 0048602c
    MOV dword ptr [EAX + 0x18],0x0      ; 00486033
    MOV dword ptr [EAX],0x0             ; 0048603a
    MOV EDX,dword ptr [EAX + 0x14]      ; 00486040
    MOV dword ptr [EAX + 0x10],EDX      ; 00486043
    MOV dword ptr [EAX + 0xc],EDX       ; 00486046
    MOV dword ptr [EAX + 0x8],EDX       ; 00486049
    RET                                 ; 0048604c

