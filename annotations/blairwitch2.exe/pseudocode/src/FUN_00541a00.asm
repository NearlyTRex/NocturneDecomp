; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00541a00(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00547320 at 0054734a
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541a00
        ;   Label: FUN_00541a00
    PUSH ESI                            ; 00541a01
    PUSH EDI                            ; 00541a02
    PUSH EBP                            ; 00541a03
    MOV EDI,dword ptr [0x0060b280]      ; 00541a04 | DAT_0060b280
    MOV EBP,dword ptr [0x01c38aec]      ; 00541a0a | DAT_01c38aec
    MOV ESI,dword ptr [ESP + 0x18]      ; 00541a10
    MOV ECX,dword ptr [ESP + 0x14]      ; 00541a14
    SHL ESI,0x2                         ; 00541a18
    ADD ESI,ECX                         ; 00541a1b
    XOR EAX,EAX                         ; 00541a1d
    MOV EBX,dword ptr [ESI + 0x2c]      ; 00541a1f
    XOR EDX,EDX                         ; 00541a22
    TEST EBX,EBX                        ; 00541a24
    JLE 0x00541a40                      ; 00541a26
        ;   XREF to: 00541a40 (CONDITIONAL_JUMP)  ; LAB_00541a40
    MOV ECX,dword ptr [EDI]             ; 00541a28 | DAT_01ba5c50
        ;   Label: LAB_00541a28
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 00541a2a
    INC EDX                             ; 00541a2e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00541a2f
    ADD EAX,0x30                        ; 00541a32
    CMP EDX,ECX                         ; 00541a35
    JL 0x00541a28                       ; 00541a37
        ;   XREF to: 00541a28 (CONDITIONAL_JUMP)  ; LAB_00541a28
    LEA EAX,[EAX]                       ; 00541a39
    NOP                                 ; 00541a3f
    MOV dword ptr [0x01c38aec],EBP      ; 00541a40 | DAT_01c38aec
        ;   Label: LAB_00541a40
    MOV dword ptr [0x0060b280],EDI      ; 00541a46 | DAT_0060b280
    POP EBP                             ; 00541a4c
    POP EDI                             ; 00541a4d
    POP ESI                             ; 00541a4e
    POP EBX                             ; 00541a4f
    RET                                 ; 00541a50

