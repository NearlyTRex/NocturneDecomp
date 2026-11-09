; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_passngr_cpp_FUN_0050abbc(int param_1,undefined4 param_2,int param_3,undefined1 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed02b0
;   undefined4 DAT_01ed2a2c
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0050abbc
        ;   Label: unkafter_passngr.cpp_FUN_0050abbc
    PUSH EBX                            ; 0050abc0
    MOV ECX,dword ptr [0x01ed02b0]      ; 0050abc1 | DAT_01ed02b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050abc7
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050abcb
    SUB EAX,EDX                         ; 0050abd2
    SHL EAX,0x3                         ; 0050abd4
    ADD EAX,EDX                         ; 0050abd7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050abd9
    SHL EAX,0x2                         ; 0050abdd
    ADD EAX,EDX                         ; 0050abe0
    MOV DL,byte ptr [ESP + 0x14]        ; 0050abe2
    MOV byte ptr [EAX + 0x1ed02b8],DL   ; 0050abe6
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050abec
    MOV EBX,dword ptr [0x01ed2a2c]      ; 0050abf3 | DAT_01ed2a2c
    SUB EAX,ECX                         ; 0050abf9
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050abfb
    INC EBX                             ; 0050abff
    MOV dword ptr [EAX*0x4 + 0x1ec184c],EDX ; 0050ac00
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ac07
    MOV dword ptr [0x01ed2a2c],EBX      ; 0050ac0b | DAT_01ed2a2c
    MOV dword ptr [EAX*0x4 + 0x1ec1850],EDX ; 0050ac11
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050ac18
    INC ECX                             ; 0050ac1c
    MOV dword ptr [EAX*0x4 + 0x1ec1854],EDX ; 0050ac1d
    CMP ECX,0x1388                      ; 0050ac24
    JL 0x0050ac2e                       ; 0050ac2a
        ;   XREF to: 0050ac2e (CONDITIONAL_JUMP)  ; LAB_0050ac2e
    XOR ECX,ECX                         ; 0050ac2c
    MOV dword ptr [0x01ed02b0],ECX      ; 0050ac2e | DAT_01ed02b0
        ;   Label: LAB_0050ac2e
    POP EBX                             ; 0050ac34
    RET                                 ; 0050ac35

