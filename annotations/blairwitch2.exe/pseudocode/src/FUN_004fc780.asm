; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc780(int param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_00489670 at 0048e0db
;   FUN_00572330 at 005723fd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fc780
        ;   Label: FUN_004fc780
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc784
    MOV ECX,dword ptr [EDX]             ; 004fc788
    MOV dword ptr [EAX + 0x111c],ECX    ; 004fc78a
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fc790
    MOV dword ptr [EAX + 0x1120],ECX    ; 004fc793
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fc799
    MOV dword ptr [EAX + 0x1124],ECX    ; 004fc79c
    MOV EDX,dword ptr [EDX + 0xc]       ; 004fc7a2
    MOV dword ptr [EAX + 0x1128],EDX    ; 004fc7a5
    RET                                 ; 004fc7ab

