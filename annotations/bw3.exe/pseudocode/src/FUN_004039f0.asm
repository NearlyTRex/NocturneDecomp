; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004039f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_007303e0
;
; Called Functions:
;   FUN_004e0ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004039f0
        ;   Label: FUN_004039f0
    PUSH ESI                            ; 004039f1
    PUSH EDI                            ; 004039f2
    PUSH EBP                            ; 004039f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004039f4
    LEA ESI,[EDI + 0xc]                 ; 004039f8
    MOV EDX,dword ptr [EDI + 0x8]       ; 004039fb
    XOR EBX,EBX                         ; 004039fe
    TEST EDX,EDX                        ; 00403a00
    JLE 0x00403a30                      ; 00403a02
        ;   XREF to: 00403a30 (CONDITIONAL_JUMP)  ; LAB_00403a30
    MOV EAX,dword ptr [EDI + 0x4]       ; 00403a04
        ;   Label: LAB_00403a04
    MOV ECX,dword ptr [0x007303e0]      ; 00403a07 | DAT_007303e0
    ADD EAX,EBX                         ; 00403a0d
    PUSH ESI                            ; 00403a0f
    ADD EAX,ECX                         ; 00403a10
    PUSH EAX                            ; 00403a12
    ADD ESI,0xc                         ; 00403a13
    INC EBX                             ; 00403a16
    CALL FUN_004e0ed0                   ; 00403a17
        ;   XREF to: 004e0ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0ed0()
    MOV EBP,dword ptr [EDI + 0x8]       ; 00403a1c
    ADD ESP,0x8                         ; 00403a1f
    CMP EBX,EBP                         ; 00403a22
    JL 0x00403a04                       ; 00403a24
        ;   XREF to: 00403a04 (CONDITIONAL_JUMP)  ; LAB_00403a04
    LEA EAX,[EAX]                       ; 00403a26
    LEA EDX,[EDX]                       ; 00403a2c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00403a30
        ;   Label: LAB_00403a30
    LEA EAX,[EBX*0x4 + 0x0]             ; 00403a33
    SUB EAX,EBX                         ; 00403a3a
    LEA EBX,[EAX*0x4 + 0x0]             ; 00403a3c
    LEA EAX,[EDI + 0xc]                 ; 00403a43
    ADD EAX,EBX                         ; 00403a46
    POP EBP                             ; 00403a48
    POP EDI                             ; 00403a49
    POP ESI                             ; 00403a4a
    POP EBX                             ; 00403a4b
    RET                                 ; 00403a4c

