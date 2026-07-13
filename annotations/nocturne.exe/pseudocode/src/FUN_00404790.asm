; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404790(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404790
        ;   Label: FUN_00404790
    MOV ECX,dword ptr [ESP + 0x8]       ; 00404791
    LEA EDX,[ECX + 0xc]                 ; 00404795
    MOV EBX,dword ptr [ECX + 0x8]       ; 00404798
    XOR EAX,EAX                         ; 0040479b
    TEST EBX,EBX                        ; 0040479d
    JLE 0x004047cf                      ; 0040479f
        ;   XREF to: 004047cf (CONDITIONAL_JUMP)  ; LAB_004047cf
    PUSH ESI                            ; 004047a1
    MOV ESI,dword ptr [ECX + 0x4]       ; 004047a2
        ;   Label: LAB_004047a2
    ADD ESI,EAX                         ; 004047a5
    IMUL ESI,ESI,0x30                   ; 004047a7
    MOV EBX,dword ptr [EDX]             ; 004047aa
    MOV dword ptr [ESI + 0x5c502c],EBX  ; 004047ac | DAT_005c502c
    MOV EBX,dword ptr [ECX + 0x4]       ; 004047b2
    ADD EBX,EAX                         ; 004047b5
    IMUL ESI,EBX,0x30                   ; 004047b7
    MOV EBX,dword ptr [EDX + 0x4]       ; 004047ba
    MOV dword ptr [ESI + 0x5c5030],EBX  ; 004047bd | DAT_005c5030
    INC EAX                             ; 004047c3
    MOV ESI,dword ptr [ECX + 0x8]       ; 004047c4
    ADD EDX,0x8                         ; 004047c7
    CMP EAX,ESI                         ; 004047ca
    JL 0x004047a2                       ; 004047cc
        ;   XREF to: 004047a2 (CONDITIONAL_JUMP)  ; LAB_004047a2
    POP ESI                             ; 004047ce
    MOV EAX,dword ptr [ECX + 0x8]       ; 004047cf
        ;   Label: LAB_004047cf
    ADD ECX,0xc                         ; 004047d2
    SHL EAX,0x3                         ; 004047d5
    ADD EAX,ECX                         ; 004047d8
    POP EBX                             ; 004047da
    RET                                 ; 004047db

