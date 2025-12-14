; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b9e3
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b38f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516b40
        ;   Label: shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
    PUSH ESI                            ; 00516b41
    PUSH EDI                            ; 00516b42
    PUSH EBP                            ; 00516b43
    MOV ESI,dword ptr [ESP + 0x14]      ; 00516b44
    MOV EDX,dword ptr [ESI + 0x8]       ; 00516b48
    XOR ECX,ECX                         ; 00516b4b
    TEST EDX,EDX                        ; 00516b4d
    JLE 0x00516b6c                      ; 00516b4f
        ;   XREF to: 00516b6c (CONDITIONAL_JUMP)  ; LAB_00516b6c
    XOR EDX,EDX                         ; 00516b51
    MOV EAX,dword ptr [ESI + 0xc]       ; 00516b53
        ;   Label: LAB_00516b53
    ADD EAX,EDX                         ; 00516b56
    CMP dword ptr [EAX + 0x40],0x0      ; 00516b58
    JZ 0x00516b71                       ; 00516b5c
        ;   XREF to: 00516b71 (CONDITIONAL_JUMP)  ; LAB_00516b71
    INC ECX                             ; 00516b5e
        ;   Label: LAB_00516b5e
    MOV EBX,dword ptr [ESI + 0x8]       ; 00516b5f
    ADD EDX,0x8c                        ; 00516b62
    CMP ECX,EBX                         ; 00516b68
    JL 0x00516b53                       ; 00516b6a
        ;   XREF to: 00516b53 (CONDITIONAL_JUMP)  ; LAB_00516b53
    POP EBP                             ; 00516b6c
        ;   Label: LAB_00516b6c
    POP EDI                             ; 00516b6d
    POP ESI                             ; 00516b6e
    POP EBX                             ; 00516b6f
    RET                                 ; 00516b70
    MOV EBP,dword ptr [EAX + 0x14]      ; 00516b71
        ;   Label: LAB_00516b71
    MOV EBX,dword ptr [EAX + 0x10]      ; 00516b74
    CMP EBX,EBP                         ; 00516b77
    JNZ 0x00516b84                      ; 00516b79
        ;   XREF to: 00516b84 (CONDITIONAL_JUMP)  ; LAB_00516b84
    MOV dword ptr [EAX + 0x40],0x1      ; 00516b7b
        ;   Label: LAB_00516b7b
    JMP 0x00516b5e                      ; 00516b82
        ;   XREF to: 00516b5e (UNCONDITIONAL_JUMP)  ; LAB_00516b5e
    MOV EDI,dword ptr [EAX + 0x18]      ; 00516b84
        ;   Label: LAB_00516b84
    CMP EBX,EDI                         ; 00516b87
    JZ 0x00516b7b                       ; 00516b89
        ;   XREF to: 00516b7b (CONDITIONAL_JUMP)  ; LAB_00516b7b
    CMP EBP,EDI                         ; 00516b8b
    JZ 0x00516b7b                       ; 00516b8d
        ;   XREF to: 00516b7b (CONDITIONAL_JUMP)  ; LAB_00516b7b
    JMP 0x00516b5e                      ; 00516b8f
        ;   XREF to: 00516b5e (UNCONDITIONAL_JUMP)  ; LAB_00516b5e

