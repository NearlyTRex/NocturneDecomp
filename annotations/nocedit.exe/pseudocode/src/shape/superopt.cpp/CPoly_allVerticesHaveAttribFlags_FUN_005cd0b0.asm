; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0(CPoly * this_ptr, uint flag_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd0b0
        ;   Label: shape_superopt.cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0
    PUSH ESI                            ; 005cd0b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005cd0b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005cd0b6
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cd0ba
    SHL EAX,0x3                         ; 005cd0bd
    MOV EBX,dword ptr [ESI]             ; 005cd0c0
    MOV ECX,EAX                         ; 005cd0c2
    SHL EAX,0x3                         ; 005cd0c4
    MOV EBX,dword ptr [EBX + 0x4]       ; 005cd0c7
    SUB EAX,ECX                         ; 005cd0ca
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x30] ; 005cd0cc
    AND EAX,EDX                         ; 005cd0d0
    CMP EAX,EDX                         ; 005cd0d2
    JNZ 0x005cd104                      ; 005cd0d4 | LAB_005cd104
        ;   XREF to: 005cd104 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cd0d6
    SHL EAX,0x3                         ; 005cd0d9
    MOV ECX,EAX                         ; 005cd0dc
    SHL EAX,0x3                         ; 005cd0de
    SUB EAX,ECX                         ; 005cd0e1
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x30] ; 005cd0e3
    AND EAX,EDX                         ; 005cd0e7
    CMP EAX,EDX                         ; 005cd0e9
    JNZ 0x005cd104                      ; 005cd0eb | LAB_005cd104
        ;   XREF to: 005cd104 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cd0ed
    SHL EAX,0x3                         ; 005cd0f0
    MOV ECX,EAX                         ; 005cd0f3
    SHL EAX,0x3                         ; 005cd0f5
    SUB EAX,ECX                         ; 005cd0f8
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x30] ; 005cd0fa
    AND EAX,EDX                         ; 005cd0fe
    CMP EAX,EDX                         ; 005cd100
    JZ 0x005cd109                       ; 005cd102 | LAB_005cd109
        ;   XREF to: 005cd109 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005cd104
        ;   Label: LAB_005cd104
    POP ESI                             ; 005cd106
    POP EBX                             ; 005cd107
    RET                                 ; 005cd108
    MOV EAX,0x1                         ; 005cd109
        ;   Label: LAB_005cd109
    POP ESI                             ; 005cd10e
    POP EBX                             ; 005cd10f
    RET                                 ; 005cd110

