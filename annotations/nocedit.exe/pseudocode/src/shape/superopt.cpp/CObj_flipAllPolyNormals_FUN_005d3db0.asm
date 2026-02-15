; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_flipAllPolyNormals_FUN_005d3db0(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3db0
        ;   Label: shape_superopt.cpp_CObj_flipAllPolyNormals_FUN_005d3db0
    PUSH ESI                            ; 005d3db1
    PUSH EDI                            ; 005d3db2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005d3db3
    MOV EDX,dword ptr [EDI + 0x8]       ; 005d3db7
    MOV EBX,dword ptr [EDI + 0xc]       ; 005d3dba
    XOR ESI,ESI                         ; 005d3dbd
    TEST EDX,EDX                        ; 005d3dbf
    JBE 0x005d3de0                      ; 005d3dc1
        ;   XREF to: 005d3de0 (CONDITIONAL_JUMP)  ; LAB_005d3de0
    PUSH EBX                            ; 005d3dc3
        ;   Label: LAB_005d3dc3
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d3dc4
    INC ESI                             ; 005d3dc7
    CALL dword ptr [EAX + 0x48]         ; 005d3dc8
    ADD ESP,0x4                         ; 005d3dcb
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d3dce
    ADD EBX,0x68                        ; 005d3dd1
    CMP ESI,ECX                         ; 005d3dd4
    JC 0x005d3dc3                       ; 005d3dd6
        ;   XREF to: 005d3dc3 (CONDITIONAL_JUMP)  ; LAB_005d3dc3
    LEA EAX,[EAX]                       ; 005d3dd8
    MOV EDX,EDX                         ; 005d3dde
    POP EDI                             ; 005d3de0
        ;   Label: LAB_005d3de0
    POP ESI                             ; 005d3de1
    POP EBX                             ; 005d3de2
    RET                                 ; 005d3de3

