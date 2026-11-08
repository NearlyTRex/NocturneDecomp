; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e4d90(uint param_1)
;
;
; XREF[2]:
;   FUN_004dbe70 at 004dbf55
;   FUN_004e56b0 at 004e580c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4d90
        ;   Label: FUN_004e4d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e4d91
    MOV EAX,EBX                         ; 004e4d95
    SAR EAX,0x8                         ; 004e4d97
    AND EAX,0xff                        ; 004e4d9a
    MOV ECX,dword ptr [EAX*0x4 + 0x1d71e3c] ; 004e4d9f
    MOV EDX,dword ptr [EAX*0x4 + 0x1d71e40] ; 004e4da6
    AND EBX,0xff                        ; 004e4dad
    SUB EDX,ECX                         ; 004e4db3
    IMUL EDX,EBX                        ; 004e4db5
    MOV EAX,EDX                         ; 004e4db8
    SAR EDX,0x1f                        ; 004e4dba
    SHL EDX,0x8                         ; 004e4dbd
    SBB EAX,EDX                         ; 004e4dc0
    SAR EAX,0x8                         ; 004e4dc2
    ADD EAX,ECX                         ; 004e4dc5
    POP EBX                             ; 004e4dc7
    RET                                 ; 004e4dc8

