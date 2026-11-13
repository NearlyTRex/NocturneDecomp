; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_netgame_cpp_FUN_0050b110(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d54640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b110
        ;   Label: core_netgame.cpp_FUN_0050b110
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050b111
    MOV ECX,dword ptr [0x01d54640]      ; 0050b115 | DAT_01d54640
    XOR EDX,EDX                         ; 0050b11b
    TEST ECX,ECX                        ; 0050b11d
    JLE 0x0050b144                      ; 0050b11f
        ;   XREF to: 0050b144 (CONDITIONAL_JUMP)  ; LAB_0050b144
    PUSH ESI                            ; 0050b121
    MOV ESI,ECX                         ; 0050b122
    SHL ECX,0x3                         ; 0050b124
    SUB ECX,ESI                         ; 0050b127
    SHL ECX,0x2                         ; 0050b129
    ADD ECX,ESI                         ; 0050b12c
    XOR EAX,EAX                         ; 0050b12e
    SHL ECX,0x2                         ; 0050b130
    POP ESI                             ; 0050b133
    CMP EBX,dword ptr [EAX + 0x1d54644] ; 0050b134
        ;   Label: LAB_0050b134
    JZ 0x0050b14d                       ; 0050b13a
        ;   XREF to: 0050b14d (CONDITIONAL_JUMP)  ; LAB_0050b14d
    ADD EAX,0x74                        ; 0050b13c
    INC EDX                             ; 0050b13f
    CMP EAX,ECX                         ; 0050b140
    JL 0x0050b134                       ; 0050b142
        ;   XREF to: 0050b134 (CONDITIONAL_JUMP)  ; LAB_0050b134
    MOV ECX,0xffffffff                  ; 0050b144
        ;   Label: LAB_0050b144
    MOV EAX,ECX                         ; 0050b149
    POP EBX                             ; 0050b14b
    RET                                 ; 0050b14c
    MOV ECX,EDX                         ; 0050b14d
        ;   Label: LAB_0050b14d
    MOV EAX,ECX                         ; 0050b14f
    POP EBX                             ; 0050b151
    RET                                 ; 0050b152

