; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tvbat_cpp_CTVBat_getDeathState_FUN_0054c0f0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054c0f0
        ;   Label: core_tvbat.cpp_CTVBat_getDeathState_FUN_0054c0f0
    MOV EDX,dword ptr [EAX + 0x70]      ; 0054c0f4
    CMP EDX,0x2                         ; 0054c0f7
    JZ 0x0054c119                       ; 0054c0fa
        ;   XREF to: 0054c119 (CONDITIONAL_JUMP)  ; LAB_0054c119
    MOV ECX,dword ptr [EAX + 0xbee0]    ; 0054c0fc
    TEST ECX,ECX                        ; 0054c102
    JZ 0x0054c0e0                       ; 0054c104
        ;   XREF to: 0054c0e0 (CONDITIONAL_JUMP)
    CMP ECX,0x1                         ; 0054c106
    JZ 0x0054c11c                       ; 0054c109
        ;   XREF to: 0054c11c (CONDITIONAL_JUMP)  ; LAB_0054c11c
    CMP ECX,0x2                         ; 0054c10b
    JZ 0x0054c11c                       ; 0054c10e
        ;   XREF to: 0054c11c (CONDITIONAL_JUMP)  ; LAB_0054c11c
    CMP ECX,0x3                         ; 0054c110
    MOV EAX,0x2                         ; 0054c113
    RET                                 ; 0054c118
    MOV EAX,EDX                         ; 0054c119
        ;   Label: LAB_0054c119
    RET                                 ; 0054c11b
    MOV EAX,ECX                         ; 0054c11c
        ;   Label: LAB_0054c11c
    RET                                 ; 0054c11e

