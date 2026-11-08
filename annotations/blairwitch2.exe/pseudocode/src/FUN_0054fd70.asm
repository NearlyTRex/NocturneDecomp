; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054fd70(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0054ddf0 at 0054df4a
;   FUN_00556f80 at 0055702d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054fd70
        ;   Label: FUN_0054fd70
    MOV ECX,dword ptr [EDX + 0x108]     ; 0054fd74
    IMUL ECX,dword ptr [EDX + 0x104]    ; 0054fd7a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054fd81
    SHL EDX,0x3                         ; 0054fd85
    MOV EAX,EDX                         ; 0054fd88
    SAR EDX,0x1f                        ; 0054fd8a
    IDIV ECX                            ; 0054fd8d
    RET                                 ; 0054fd8f

