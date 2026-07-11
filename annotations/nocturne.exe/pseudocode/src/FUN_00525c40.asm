; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00525c40(int param_1)
;
;
; XREF[7]:
;   FUN_00521ca0 at 00521d0e
;   FUN_00522480 at 0052277a
;   FUN_00523910 at 00523a07
;   FUN_00523ba0 at 00523c2a
;   FUN_00523d10 at 00523dbc
;   FUN_00523ea0 at 00523faa
;   FUN_00527c70 at 00527d32
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00525c40
        ;   Label: FUN_00525c40
    MOV ECX,dword ptr [EAX + 0x108]     ; 00525c44
    MOV EDX,dword ptr [EAX + 0x104]     ; 00525c4a
    IMUL EDX,ECX                        ; 00525c50
    MOV EAX,EDX                         ; 00525c53
    SAR EDX,0x1f                        ; 00525c55
    SHL EDX,0x3                         ; 00525c58
    SBB EAX,EDX                         ; 00525c5b
    SAR EAX,0x3                         ; 00525c5d
    RET                                 ; 00525c60

