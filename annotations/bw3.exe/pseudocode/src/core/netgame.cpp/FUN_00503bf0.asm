; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_netgame_cpp_FUN_00503bf0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01dc5c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503bf0
        ;   Label: core_netgame.cpp_FUN_00503bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503bf1
    MOV ECX,dword ptr [0x01dc5c80]      ; 00503bf5 | DAT_01dc5c80
    XOR EDX,EDX                         ; 00503bfb
    TEST ECX,ECX                        ; 00503bfd
    JLE 0x00503c24                      ; 00503bff
        ;   XREF to: 00503c24 (CONDITIONAL_JUMP)  ; LAB_00503c24
    PUSH ESI                            ; 00503c01
    MOV ESI,ECX                         ; 00503c02
    SHL ECX,0x3                         ; 00503c04
    SUB ECX,ESI                         ; 00503c07
    SHL ECX,0x2                         ; 00503c09
    ADD ECX,ESI                         ; 00503c0c
    XOR EAX,EAX                         ; 00503c0e
    SHL ECX,0x2                         ; 00503c10
    POP ESI                             ; 00503c13
    CMP EBX,dword ptr [EAX + 0x1dc5c84] ; 00503c14
        ;   Label: LAB_00503c14
    JZ 0x00503c2d                       ; 00503c1a
        ;   XREF to: 00503c2d (CONDITIONAL_JUMP)  ; LAB_00503c2d
    ADD EAX,0x74                        ; 00503c1c
    INC EDX                             ; 00503c1f
    CMP EAX,ECX                         ; 00503c20
    JL 0x00503c14                       ; 00503c22
        ;   XREF to: 00503c14 (CONDITIONAL_JUMP)  ; LAB_00503c14
    MOV ECX,0xffffffff                  ; 00503c24
        ;   Label: LAB_00503c24
    MOV EAX,ECX                         ; 00503c29
    POP EBX                             ; 00503c2b
    RET                                 ; 00503c2c
    MOV ECX,EDX                         ; 00503c2d
        ;   Label: LAB_00503c2d
    MOV EAX,ECX                         ; 00503c2f
    POP EBX                             ; 00503c31
    RET                                 ; 00503c32

