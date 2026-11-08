; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a4fe0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4fe0
        ;   Label: FUN_005a4fe0
    MOV EDX,dword ptr [EAX + 0x70]      ; 005a4fe4
    CMP EDX,0x2                         ; 005a4fe7
    JZ 0x005a5009                       ; 005a4fea
        ;   XREF to: 005a5009 (CONDITIONAL_JUMP)  ; LAB_005a5009
    MOV ECX,dword ptr [EAX + 0xc424]    ; 005a4fec
    TEST ECX,ECX                        ; 005a4ff2
    JZ 0x005a4fd0                       ; 005a4ff4
        ;   XREF to: 005a4fd0 (CONDITIONAL_JUMP)  ; LAB_005a4fd0
    CMP ECX,0x1                         ; 005a4ff6
    JZ 0x005a500c                       ; 005a4ff9
        ;   XREF to: 005a500c (CONDITIONAL_JUMP)  ; LAB_005a500c
    CMP ECX,0x2                         ; 005a4ffb
    JZ 0x005a500c                       ; 005a4ffe
        ;   XREF to: 005a500c (CONDITIONAL_JUMP)  ; LAB_005a500c
    CMP ECX,0x3                         ; 005a5000
    MOV EAX,0x2                         ; 005a5003
    RET                                 ; 005a5008
    MOV EAX,EDX                         ; 005a5009
        ;   Label: LAB_005a5009
    RET                                 ; 005a500b
    MOV EAX,ECX                         ; 005a500c
        ;   Label: LAB_005a500c
    RET                                 ; 005a500e

