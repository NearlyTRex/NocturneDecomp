; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b94d
;   shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0 at 0051b8e4
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516dc2
;
; Called Functions:
;   shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
;   shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ba0
        ;   Label: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
    PUSH ESI                            ; 00515ba1
    PUSH EDI                            ; 00515ba2
    PUSH EBP                            ; 00515ba3
    MOV EBP,ESP                         ; 00515ba4
    SUB ESP,0xc                         ; 00515ba6
    MOV EDI,dword ptr [EBP + 0x14]      ; 00515ba9
    MOV EDX,dword ptr [EDI]             ; 00515bac
    XOR EAX,EAX                         ; 00515bae
    TEST EDX,EDX                        ; 00515bb0
    JLE 0x00515be0                      ; 00515bb2
        ;   XREF to: 00515be0 (CONDITIONAL_JUMP)  ; LAB_00515be0
    XOR EDX,EDX                         ; 00515bb4
    MOV EBX,dword ptr [EDI + 0x4]       ; 00515bb6
        ;   Label: LAB_00515bb6
    MOV dword ptr [EDX + EBX*0x1 + 0x3f8],0x0 ; 00515bb9
    INC EAX                             ; 00515bc4
    MOV ECX,dword ptr [EDI]             ; 00515bc5
    ADD EDX,0x4c4                       ; 00515bc7
    CMP EAX,ECX                         ; 00515bcd
    JL 0x00515bb6                       ; 00515bcf
        ;   XREF to: 00515bb6 (CONDITIONAL_JUMP)  ; LAB_00515bb6
    LEA EAX,[EAX]                       ; 00515bd1
    LEA EDX,[EDX]                       ; 00515bd7
    LEA EAX,[EAX]                       ; 00515bdd
    MOV ESI,dword ptr [EDI + 0x8]       ; 00515be0
        ;   Label: LAB_00515be0
    XOR EBX,EBX                         ; 00515be3
    MOV dword ptr [EDI + 0x44],0x0      ; 00515be5
    MOV dword ptr [EBP + -0x8],EBX      ; 00515bec
    TEST ESI,ESI                        ; 00515bef
    JLE 0x00515c87                      ; 00515bf1
        ;   XREF to: 00515c87 (CONDITIONAL_JUMP)  ; LAB_00515c87
    MOV dword ptr [EBP + -0xc],EBX      ; 00515bf7
    MOV EDX,dword ptr [EBP + -0xc]      ; 00515bfa
        ;   Label: LAB_00515bfa
    MOV EAX,dword ptr [EDI + 0xc]       ; 00515bfd
    ADD EDX,EAX                         ; 00515c00
    MOV ESI,dword ptr [EDX + 0x40]      ; 00515c02
    MOV dword ptr [EBP + -0x4],EDX      ; 00515c05
    TEST ESI,ESI                        ; 00515c08
    JNZ 0x00515c6a                      ; 00515c0a
        ;   XREF to: 00515c6a (CONDITIONAL_JUMP)  ; LAB_00515c6a
    MOV ESI,EDX                         ; 00515c0c
    XOR EBX,EBX                         ; 00515c0e
    LEA EAX,[EBX + 0x1]                 ; 00515c10
        ;   Label: LAB_00515c10
    PUSH 0x1                            ; 00515c13
    CMP EAX,0x3                         ; 00515c15
    JL 0x00515c1c                       ; 00515c18
        ;   XREF to: 00515c1c (CONDITIONAL_JUMP)  ; LAB_00515c1c
    XOR EAX,EAX                         ; 00515c1a
    MOV EDX,dword ptr [EBP + -0x4]      ; 00515c1c
        ;   Label: LAB_00515c1c
    SHL EAX,0x2                         ; 00515c1f
    ADD EAX,EDX                         ; 00515c22
    MOV ECX,dword ptr [EAX + 0x10]      ; 00515c24
    PUSH ECX                            ; 00515c27
    MOV EAX,dword ptr [ESI + 0x10]      ; 00515c28
    PUSH EAX                            ; 00515c2b
    PUSH EDI                            ; 00515c2c
    CALL shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 ; 00515c2d
        ;   XREF to: 00515ec0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
    MOV EDX,EAX                         ; 00515c32
    LEA EAX,[EBX + -0x1]                ; 00515c34
    ADD ESP,0x10                        ; 00515c37
    TEST EAX,EAX                        ; 00515c3a
    JL 0x00515c92                       ; 00515c3c
        ;   XREF to: 00515c92 (CONDITIONAL_JUMP)  ; LAB_00515c92
    MOV ECX,dword ptr [EBP + -0x4]      ; 00515c3e
        ;   Label: LAB_00515c3e
    SHL EAX,0x2                         ; 00515c41
    ADD EAX,ECX                         ; 00515c44
    MOV dword ptr [EAX + 0x34],EDX      ; 00515c46
    IMUL EDX,EDX,0xf0                   ; 00515c49
    MOV EAX,dword ptr [EBP + -0x8]      ; 00515c4f
    PUSH EAX                            ; 00515c52
    MOV EAX,dword ptr [EDI + 0x48]      ; 00515c53
    ADD EAX,EDX                         ; 00515c56
    PUSH EAX                            ; 00515c58
    ADD ESI,0x4                         ; 00515c59
    INC EBX                             ; 00515c5c
    CALL shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0 ; 00515c5d
        ;   XREF to: 00515ca0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0(CLodEdge * this_ptr, int tri_index)
    ADD ESP,0x8                         ; 00515c62
    CMP EBX,0x3                         ; 00515c65
    JL 0x00515c10                       ; 00515c68
        ;   XREF to: 00515c10 (CONDITIONAL_JUMP)  ; LAB_00515c10
    MOV EAX,dword ptr [EBP + -0xc]      ; 00515c6a
        ;   Label: LAB_00515c6a
    MOV EDX,dword ptr [EBP + -0x8]      ; 00515c6d
    MOV ECX,dword ptr [EDI + 0x8]       ; 00515c70
    ADD EAX,0x8c                        ; 00515c73
    INC EDX                             ; 00515c78
    MOV dword ptr [EBP + -0xc],EAX      ; 00515c79
    MOV dword ptr [EBP + -0x8],EDX      ; 00515c7c
    CMP EDX,ECX                         ; 00515c7f
    JL 0x00515bfa                       ; 00515c81
        ;   XREF to: 00515bfa (CONDITIONAL_JUMP)  ; LAB_00515bfa
    PUSH EDI                            ; 00515c87
        ;   Label: LAB_00515c87
    ADD ESP,0x4                         ; 00515c88
    MOV ESP,EBP                         ; 00515c8b
    POP EBP                             ; 00515c8d
    POP EDI                             ; 00515c8e
    POP ESI                             ; 00515c8f
    POP EBX                             ; 00515c90
    RET                                 ; 00515c91
    MOV EAX,0x2                         ; 00515c92
        ;   Label: LAB_00515c92
    JMP 0x00515c3e                      ; 00515c97
        ;   XREF to: 00515c3e (UNCONDITIONAL_JUMP)  ; LAB_00515c3e

