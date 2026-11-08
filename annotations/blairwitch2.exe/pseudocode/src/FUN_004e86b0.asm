; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e86b0(uint param_1)
;
;
; XREF[3]:
;   FUN_004dbd80 at 004dbe61
;   FUN_004e1600 at 004e1763
;   FUN_004e8fd0 at 004e912c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e86b0
        ;   Label: FUN_004e86b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e86b1
    MOV EAX,EBX                         ; 004e86b5
    SAR EAX,0x8                         ; 004e86b7
    AND EAX,0xff                        ; 004e86ba
    MOV ECX,dword ptr [EAX*0x4 + 0x1d047b0] ; 004e86bf
    MOV EDX,dword ptr [EAX*0x4 + 0x1d047b4] ; 004e86c6
    AND EBX,0xff                        ; 004e86cd
    SUB EDX,ECX                         ; 004e86d3
    IMUL EDX,EBX                        ; 004e86d5
    MOV EAX,EDX                         ; 004e86d8
    SAR EDX,0x1f                        ; 004e86da
    SHL EDX,0x8                         ; 004e86dd
    SBB EAX,EDX                         ; 004e86e0
    SAR EAX,0x8                         ; 004e86e2
    ADD EAX,ECX                         ; 004e86e5
    POP EBX                             ; 004e86e7
    RET                                 ; 004e86e8

