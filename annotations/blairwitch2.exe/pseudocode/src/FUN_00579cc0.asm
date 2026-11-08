; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00579cc0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00579e40 at 00579e5e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00579cc0
        ;   Label: FUN_00579cc0
    MOV dword ptr [EAX + 0x808],0x0     ; 00579cc4
    MOV EDX,dword ptr [ESP + 0x8]       ; 00579cce
    MOV dword ptr [EAX],0x0             ; 00579cd2
    MOV dword ptr [EAX + 0x4],EDX       ; 00579cd8
    LEA EDX,[EAX + 0x8]                 ; 00579cdb
    MOV dword ptr [EAX + 0x80c],EDX     ; 00579cde
    RET                                 ; 00579ce4

