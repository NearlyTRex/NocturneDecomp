; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(CLodMesh * this_ptr, int vertex_idx)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_idx
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 at 00518593
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518740
        ;   Label: shape_meshlod.cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
    PUSH ESI                            ; 00518741
    PUSH EDI                            ; 00518742
    MOV ESI,dword ptr [ESP + 0x10]      ; 00518743
    IMUL EDI,dword ptr [ESP + 0x14],0x4c4 ; 00518747
    XOR EAX,EAX                         ; 0051874f
    XOR EDX,EDX                         ; 00518751
    MOV ECX,dword ptr [ESI + 0x4]       ; 00518753
        ;   Label: LAB_00518753
    ADD ECX,EDI                         ; 00518756
    CMP EAX,dword ptr [ECX + 0x3f8]     ; 00518758
    JGE 0x00518784                      ; 0051875e | LAB_00518784
        ;   XREF to: 00518784 (CONDITIONAL_JUMP)
    IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0 ; 00518760
    MOV EBX,dword ptr [ESI + 0x48]      ; 0051876b
    CMP dword ptr [ECX + EBX*0x1 + 0x24],0x2 ; 0051876e
    JL 0x0051877b                       ; 00518773 | LAB_0051877b
        ;   XREF to: 0051877b (CONDITIONAL_JUMP)
    INC EAX                             ; 00518775
    ADD EDX,0x4                         ; 00518776
    JMP 0x00518753                      ; 00518779 | LAB_00518753
        ;   XREF to: 00518753 (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0051877b
        ;   Label: LAB_0051877b
    POP EDI                             ; 00518780
    POP ESI                             ; 00518781
    POP EBX                             ; 00518782
    RET                                 ; 00518783
    XOR EAX,EAX                         ; 00518784
        ;   Label: LAB_00518784
    POP EDI                             ; 00518786
    POP ESI                             ; 00518787
    POP EBX                             ; 00518788
    RET                                 ; 00518789

