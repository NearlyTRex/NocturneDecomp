; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_projectAllPlanarUVs_FUN_005d3e40(CObj * this_ptr, CVector2d * uv_scale)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVector2d *      Stack[0x8]:4   uv_scale
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3e40
        ;   Label: shape_superopt.cpp_CObj_projectAllPlanarUVs_FUN_005d3e40
    PUSH EDI                            ; 005d3e41
    PUSH EBP                            ; 005d3e42
    MOV EDI,dword ptr [ESP + 0x10]      ; 005d3e43
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d3e47
    MOV EDX,dword ptr [EDI + 0x8]       ; 005d3e4b
    XOR EBX,EBX                         ; 005d3e4e
    TEST EDX,EDX                        ; 005d3e50
    JBE 0x005d3e73                      ; 005d3e52
        ;   XREF to: 005d3e73 (CONDITIONAL_JUMP)  ; LAB_005d3e73
    PUSH ESI                            ; 005d3e54
    XOR ESI,ESI                         ; 005d3e55
    MOV EAX,dword ptr [EDI + 0xc]       ; 005d3e57
        ;   Label: LAB_005d3e57
    PUSH EBP                            ; 005d3e5a
    ADD EAX,ESI                         ; 005d3e5b
    PUSH EAX                            ; 005d3e5d
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d3e5e
    INC EBX                             ; 005d3e61
    ADD ESI,0x68                        ; 005d3e62
    CALL dword ptr [EDX + 0x4c]         ; 005d3e65
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d3e68
    ADD ESP,0x8                         ; 005d3e6b
    CMP EBX,ECX                         ; 005d3e6e
    JC 0x005d3e57                       ; 005d3e70
        ;   XREF to: 005d3e57 (CONDITIONAL_JUMP)  ; LAB_005d3e57
    POP ESI                             ; 005d3e72
    POP EBP                             ; 005d3e73
        ;   Label: LAB_005d3e73
    POP EDI                             ; 005d3e74
    POP EBX                             ; 005d3e75
    RET                                 ; 005d3e76

