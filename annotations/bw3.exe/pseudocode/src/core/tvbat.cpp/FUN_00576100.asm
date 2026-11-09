; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tvbat_cpp_FUN_00576100(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00576100
        ;   Label: core_tvbat.cpp_FUN_00576100
    MOV EDX,dword ptr [EAX + 0x70]      ; 00576104
    CMP EDX,0x2                         ; 00576107
    JZ 0x00576129                       ; 0057610a
        ;   XREF to: 00576129 (CONDITIONAL_JUMP)  ; LAB_00576129
    MOV ECX,dword ptr [EAX + 0xd210]    ; 0057610c
    TEST ECX,ECX                        ; 00576112
    JZ 0x005760f0                       ; 00576114
        ;   XREF to: 005760f0 (CONDITIONAL_JUMP)
    CMP ECX,0x1                         ; 00576116
    JZ 0x0057612c                       ; 00576119
        ;   XREF to: 0057612c (CONDITIONAL_JUMP)  ; LAB_0057612c
    CMP ECX,0x2                         ; 0057611b
    JZ 0x0057612c                       ; 0057611e
        ;   XREF to: 0057612c (CONDITIONAL_JUMP)  ; LAB_0057612c
    CMP ECX,0x3                         ; 00576120
    MOV EAX,0x2                         ; 00576123
    RET                                 ; 00576128
    MOV EAX,EDX                         ; 00576129
        ;   Label: LAB_00576129
    RET                                 ; 0057612b
    MOV EAX,ECX                         ; 0057612c
        ;   Label: LAB_0057612c
    RET                                 ; 0057612e

