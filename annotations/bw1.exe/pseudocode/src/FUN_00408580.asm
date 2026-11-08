; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408580(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004085c0 at 004085ce
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408580
        ;   Label: FUN_00408580
    MOV dword ptr [EAX + 0x8],0x0       ; 00408584
    LEA EDX,[EAX + 0xc]                 ; 0040858b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0040858e
    MOV dword ptr [EAX + 0x4],ECX       ; 00408591
    MOV ECX,dword ptr [EAX + 0x4]       ; 00408594
    MOV dword ptr [EAX],ECX             ; 00408597
    MOV dword ptr [EDX + 0x8],0x0       ; 00408599
    MOV ECX,dword ptr [EDX + 0x8]       ; 004085a0
    MOV dword ptr [EDX + 0x4],ECX       ; 004085a3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004085a6
    MOV dword ptr [EDX],ECX             ; 004085a9
    MOV dword ptr [EAX + 0x18],0x1f     ; 004085ab
    RET                                 ; 004085b2

