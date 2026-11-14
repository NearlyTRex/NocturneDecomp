; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_FUN_00511b90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e5ec70
;   undefined4 DAT_01e613ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511b90
        ;   Label: core_passngr.cpp_FUN_00511b90
    MOV ECX,dword ptr [0x01e5ec70]      ; 00511b91 | DAT_01e5ec70
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511b97
    LEA EAX,[EDX*0x4 + 0x0]             ; 00511b9b
    SUB EAX,EDX                         ; 00511ba2
    SHL EAX,0x3                         ; 00511ba4
    ADD EAX,EDX                         ; 00511ba7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511ba9
    SHL EAX,0x2                         ; 00511bad
    ADD EAX,EDX                         ; 00511bb0
    MOV DL,byte ptr [ESP + 0x14]        ; 00511bb2
    MOV byte ptr [EAX + 0x1e5ec78],DL   ; 00511bb6
    LEA EAX,[ECX*0x4 + 0x0]             ; 00511bbc
    MOV EBX,dword ptr [0x01e613ec]      ; 00511bc3 | DAT_01e613ec
    SUB EAX,ECX                         ; 00511bc9
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511bcb
    INC EBX                             ; 00511bcf
    MOV dword ptr [EAX*0x4 + 0x1e5020c],EDX ; 00511bd0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00511bd7
    MOV dword ptr [0x01e613ec],EBX      ; 00511bdb | DAT_01e613ec
    MOV dword ptr [EAX*0x4 + 0x1e50210],EDX ; 00511be1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511be8
    INC ECX                             ; 00511bec
    MOV dword ptr [EAX*0x4 + 0x1e50214],EDX ; 00511bed
    CMP ECX,0x1388                      ; 00511bf4
    JL 0x00511bfe                       ; 00511bfa
        ;   XREF to: 00511bfe (CONDITIONAL_JUMP)  ; LAB_00511bfe
    XOR ECX,ECX                         ; 00511bfc
    MOV dword ptr [0x01e5ec70],ECX      ; 00511bfe | DAT_01e5ec70
        ;   Label: LAB_00511bfe
    POP EBX                             ; 00511c04
    RET                                 ; 00511c05

