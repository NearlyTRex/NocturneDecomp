; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_setPolyMaterialIdsWithFlag_FUN_005d3f10(CObj *this_ptr,int material_id,uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   material_id
; uint             Stack[0xc]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3f10
        ;   Label: shape_superopt.cpp_CObj_setPolyMaterialIdsWithFlag_FUN_005d3f10
    PUSH ESI                            ; 005d3f11
    PUSH EDI                            ; 005d3f12
    PUSH EBP                            ; 005d3f13
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d3f14
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005d3f18
    MOV EDX,dword ptr [EBP + 0x8]       ; 005d3f1c
    MOV EBX,dword ptr [EBP + 0xc]       ; 005d3f1f
    XOR ESI,ESI                         ; 005d3f22
    TEST EDX,EDX                        ; 005d3f24
    JBE 0x005d3f3c                      ; 005d3f26
        ;   XREF to: 005d3f3c (CONDITIONAL_JUMP)  ; LAB_005d3f3c
    MOV EAX,dword ptr [EBX + 0x60]      ; 005d3f28
        ;   Label: LAB_005d3f28
    AND EAX,EDI                         ; 005d3f2b
    CMP EAX,EDI                         ; 005d3f2d
    JZ 0x005d3f41                       ; 005d3f2f
        ;   XREF to: 005d3f41 (CONDITIONAL_JUMP)  ; LAB_005d3f41
    INC ESI                             ; 005d3f31
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d3f32
    ADD EBX,0x68                        ; 005d3f35
    CMP ESI,ECX                         ; 005d3f38
    JC 0x005d3f28                       ; 005d3f3a
        ;   XREF to: 005d3f28 (CONDITIONAL_JUMP)  ; LAB_005d3f28
    POP EBP                             ; 005d3f3c
        ;   Label: LAB_005d3f3c
    POP EDI                             ; 005d3f3d
    POP ESI                             ; 005d3f3e
    POP EBX                             ; 005d3f3f
    RET                                 ; 005d3f40
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d3f41
        ;   Label: LAB_005d3f41
    PUSH EDX                            ; 005d3f45
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d3f46
    PUSH EBX                            ; 005d3f49
    CALL dword ptr [EAX + 0x50]         ; 005d3f4a
    ADD ESP,0x8                         ; 005d3f4d
    INC ESI                             ; 005d3f50
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d3f51
    ADD EBX,0x68                        ; 005d3f54
    CMP ESI,ECX                         ; 005d3f57
    JC 0x005d3f28                       ; 005d3f59
        ;   XREF to: 005d3f28 (CONDITIONAL_JUMP)  ; LAB_005d3f28
    POP EBP                             ; 005d3f5b
    POP EDI                             ; 005d3f5c
    POP ESI                             ; 005d3f5d
    POP EBX                             ; 005d3f5e
    RET                                 ; 005d3f5f

