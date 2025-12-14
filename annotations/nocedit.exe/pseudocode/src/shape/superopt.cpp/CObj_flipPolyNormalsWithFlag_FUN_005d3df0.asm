; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0(CObj * this_ptr, uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3df0
        ;   Label: shape_superopt.cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0
    PUSH ESI                            ; 005d3df1
    PUSH EDI                            ; 005d3df2
    PUSH EBP                            ; 005d3df3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d3df4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005d3df8
    MOV EDX,dword ptr [EBP + 0x8]       ; 005d3dfc
    MOV EBX,dword ptr [EBP + 0xc]       ; 005d3dff
    XOR ESI,ESI                         ; 005d3e02
    TEST EDX,EDX                        ; 005d3e04
    JBE 0x005d3e1c                      ; 005d3e06
        ;   XREF to: 005d3e1c (CONDITIONAL_JUMP)  ; LAB_005d3e1c
    MOV EAX,dword ptr [EBX + 0x60]      ; 005d3e08
        ;   Label: LAB_005d3e08
    AND EAX,EDI                         ; 005d3e0b
    CMP EAX,EDI                         ; 005d3e0d
    JZ 0x005d3e21                       ; 005d3e0f
        ;   XREF to: 005d3e21 (CONDITIONAL_JUMP)  ; LAB_005d3e21
    INC ESI                             ; 005d3e11
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d3e12
    ADD EBX,0x68                        ; 005d3e15
    CMP ESI,ECX                         ; 005d3e18
    JC 0x005d3e08                       ; 005d3e1a
        ;   XREF to: 005d3e08 (CONDITIONAL_JUMP)  ; LAB_005d3e08
    POP EBP                             ; 005d3e1c
        ;   Label: LAB_005d3e1c
    POP EDI                             ; 005d3e1d
    POP ESI                             ; 005d3e1e
    POP EBX                             ; 005d3e1f
    RET                                 ; 005d3e20
    PUSH EBX                            ; 005d3e21
        ;   Label: LAB_005d3e21
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d3e22
    CALL dword ptr [EAX + 0x48]         ; 005d3e25
    ADD ESP,0x4                         ; 005d3e28
    INC ESI                             ; 005d3e2b
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d3e2c
    ADD EBX,0x68                        ; 005d3e2f
    CMP ESI,ECX                         ; 005d3e32
    JC 0x005d3e08                       ; 005d3e34
        ;   XREF to: 005d3e08 (CONDITIONAL_JUMP)  ; LAB_005d3e08
    POP EBP                             ; 005d3e36
    POP EDI                             ; 005d3e37
    POP ESI                             ; 005d3e38
    POP EBX                             ; 005d3e39
    RET                                 ; 005d3e3a

