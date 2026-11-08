; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d480(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_00493720 at 0049385e
;   FUN_00493d40 at 00493ea7
;   FUN_0049a620 at 0049a642
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049d480
        ;   Label: FUN_0049d480
    MOV byte ptr [EAX + 0x4],0x0        ; 0049d484
    MOV byte ptr [EAX + 0x1c],0x0       ; 0049d488
    MOV dword ptr [EAX + 0x14],0x0      ; 0049d48c
    MOV dword ptr [EAX + 0x18],0x0      ; 0049d493
    MOV dword ptr [EAX],0x0             ; 0049d49a
    MOV EDX,dword ptr [EAX + 0x14]      ; 0049d4a0
    MOV dword ptr [EAX + 0x10],EDX      ; 0049d4a3
    MOV dword ptr [EAX + 0xc],EDX       ; 0049d4a6
    MOV dword ptr [EAX + 0x8],EDX       ; 0049d4a9
    RET                                 ; 0049d4ac

