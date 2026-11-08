; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059d330(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0059d4b0 at 0059d4ce
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059d330
        ;   Label: FUN_0059d330
    MOV dword ptr [EAX + 0x808],0x0     ; 0059d334
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059d33e
    MOV dword ptr [EAX],0x0             ; 0059d342
    MOV dword ptr [EAX + 0x4],EDX       ; 0059d348
    LEA EDX,[EAX + 0x8]                 ; 0059d34b
    MOV dword ptr [EAX + 0x80c],EDX     ; 0059d34e
    RET                                 ; 0059d354

