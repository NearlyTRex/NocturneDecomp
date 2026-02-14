; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80(CObj *this_ptr,CVector2d *uv_scale,uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVector2d *      Stack[0x8]:4   uv_scale
; uint             Stack[0xc]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3e80
        ;   Label: shape_superopt.cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
    PUSH ESI                            ; 005d3e81
    PUSH EDI                            ; 005d3e82
    PUSH EBP                            ; 005d3e83
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d3e84
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005d3e88
    MOV EDX,dword ptr [EBP + 0x8]       ; 005d3e8c
    MOV EBX,dword ptr [EBP + 0xc]       ; 005d3e8f
    XOR ESI,ESI                         ; 005d3e92
    TEST EDX,EDX                        ; 005d3e94
    JBE 0x005d3eac                      ; 005d3e96
        ;   XREF to: 005d3eac (CONDITIONAL_JUMP)  ; LAB_005d3eac
    MOV EAX,dword ptr [EBX + 0x60]      ; 005d3e98
        ;   Label: LAB_005d3e98
    AND EAX,EDI                         ; 005d3e9b
    CMP EAX,EDI                         ; 005d3e9d
    JZ 0x005d3eb1                       ; 005d3e9f
        ;   XREF to: 005d3eb1 (CONDITIONAL_JUMP)  ; LAB_005d3eb1
    INC ESI                             ; 005d3ea1
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d3ea2
    ADD EBX,0x68                        ; 005d3ea5
    CMP ESI,ECX                         ; 005d3ea8
    JC 0x005d3e98                       ; 005d3eaa
        ;   XREF to: 005d3e98 (CONDITIONAL_JUMP)  ; LAB_005d3e98
    POP EBP                             ; 005d3eac
        ;   Label: LAB_005d3eac
    POP EDI                             ; 005d3ead
    POP ESI                             ; 005d3eae
    POP EBX                             ; 005d3eaf
    RET                                 ; 005d3eb0
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d3eb1
        ;   Label: LAB_005d3eb1
    PUSH EDX                            ; 005d3eb5
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d3eb6
    PUSH EBX                            ; 005d3eb9
    CALL dword ptr [EAX + 0x4c]         ; 005d3eba
    ADD ESP,0x8                         ; 005d3ebd
    INC ESI                             ; 005d3ec0
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d3ec1
    ADD EBX,0x68                        ; 005d3ec4
    CMP ESI,ECX                         ; 005d3ec7
    JC 0x005d3e98                       ; 005d3ec9
        ;   XREF to: 005d3e98 (CONDITIONAL_JUMP)  ; LAB_005d3e98
    POP EBP                             ; 005d3ecb
    POP EDI                             ; 005d3ecc
    POP ESI                             ; 005d3ecd
    POP EBX                             ; 005d3ece
    RET                                 ; 005d3ecf

