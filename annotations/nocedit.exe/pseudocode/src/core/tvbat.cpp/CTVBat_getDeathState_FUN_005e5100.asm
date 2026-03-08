; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_tvbat_cpp_CTVBat_getDeathState_FUN_005e5100(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e5100
        ;   Label: core_tvbat.cpp_CTVBat_getDeathState_FUN_005e5100
    MOV EDX,dword ptr [EAX + 0x70]      ; 005e5104
    CMP EDX,0x2                         ; 005e5107
    JZ 0x005e5129                       ; 005e510a
        ;   XREF to: 005e5129 (CONDITIONAL_JUMP)  ; LAB_005e5129
    MOV ECX,dword ptr [EAX + 0xc078]    ; 005e510c
    TEST ECX,ECX                        ; 005e5112
    JZ 0x005e50f0                       ; 005e5114
        ;   XREF to: 005e50f0 (CONDITIONAL_JUMP)
    CMP ECX,0x1                         ; 005e5116
    JZ 0x005e512c                       ; 005e5119
        ;   XREF to: 005e512c (CONDITIONAL_JUMP)  ; LAB_005e512c
    CMP ECX,0x2                         ; 005e511b
    JZ 0x005e512c                       ; 005e511e
        ;   XREF to: 005e512c (CONDITIONAL_JUMP)  ; LAB_005e512c
    CMP ECX,0x3                         ; 005e5120
    MOV EAX,0x2                         ; 005e5123
    RET                                 ; 005e5128
    MOV EAX,EDX                         ; 005e5129
        ;   Label: LAB_005e5129
    RET                                 ; 005e512b
    MOV EAX,ECX                         ; 005e512c
        ;   Label: LAB_005e512c
    RET                                 ; 005e512e

