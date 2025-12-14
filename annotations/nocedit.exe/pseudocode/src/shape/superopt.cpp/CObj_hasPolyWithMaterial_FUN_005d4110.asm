; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_hasPolyWithMaterial_FUN_005d4110(CObj * this_ptr, int material_id)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   material_id
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d4110
        ;   Label: shape_superopt.cpp_CObj_hasPolyWithMaterial_FUN_005d4110
    PUSH ESI                            ; 005d4111
    PUSH EDI                            ; 005d4112
    PUSH EBP                            ; 005d4113
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d4114
    MOV EBP,dword ptr [ESP + 0x18]      ; 005d4118
    MOV EDX,dword ptr [EDI + 0x8]       ; 005d411c
    XOR ESI,ESI                         ; 005d411f
    TEST EDX,EDX                        ; 005d4121
    JBE 0x005d4145                      ; 005d4123
        ;   XREF to: 005d4145 (CONDITIONAL_JUMP)  ; LAB_005d4145
    XOR EBX,EBX                         ; 005d4125
    MOV EAX,dword ptr [EDI + 0xc]       ; 005d4127
        ;   Label: LAB_005d4127
    ADD EAX,EBX                         ; 005d412a
    PUSH EAX                            ; 005d412c
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d412d
    CALL dword ptr [EDX + 0x54]         ; 005d4130
    ADD ESP,0x4                         ; 005d4133
    CMP EAX,EBP                         ; 005d4136
    JZ 0x005d414c                       ; 005d4138
        ;   XREF to: 005d414c (CONDITIONAL_JUMP)  ; LAB_005d414c
    INC ESI                             ; 005d413a
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d413b
    ADD EBX,0x68                        ; 005d413e
    CMP ESI,ECX                         ; 005d4141
    JC 0x005d4127                       ; 005d4143
        ;   XREF to: 005d4127 (CONDITIONAL_JUMP)  ; LAB_005d4127
    XOR EAX,EAX                         ; 005d4145
        ;   Label: LAB_005d4145
    POP EBP                             ; 005d4147
    POP EDI                             ; 005d4148
    POP ESI                             ; 005d4149
    POP EBX                             ; 005d414a
    RET                                 ; 005d414b
    MOV EAX,0x1                         ; 005d414c
        ;   Label: LAB_005d414c
    POP EBP                             ; 005d4151
    POP EDI                             ; 005d4152
    POP ESI                             ; 005d4153
    POP EBX                             ; 005d4154
    RET                                 ; 005d4155

