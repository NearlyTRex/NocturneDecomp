; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d615
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ed30
        ;   Label: shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30
    PUSH ESI                            ; 0051ed31
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051ed32
    MOV EDX,dword ptr [ESI]             ; 0051ed36
    XOR EBX,EBX                         ; 0051ed38
    TEST EDX,EDX                        ; 0051ed3a
    JLE 0x0051ed50                      ; 0051ed3c
        ;   XREF to: 0051ed50 (CONDITIONAL_JUMP)  ; LAB_0051ed50
    PUSH EBX                            ; 0051ed3e
        ;   Label: LAB_0051ed3e
    PUSH ESI                            ; 0051ed3f
    CALL shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0 ; 0051ed40
        ;   XREF to: 0051ecd0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh * this_ptr, int vertex_index)
    INC EBX                             ; 0051ed45
    MOV ECX,dword ptr [ESI]             ; 0051ed46
    ADD ESP,0x8                         ; 0051ed48
    CMP EBX,ECX                         ; 0051ed4b
    JL 0x0051ed3e                       ; 0051ed4d
        ;   XREF to: 0051ed3e (CONDITIONAL_JUMP)  ; LAB_0051ed3e
    NOP                                 ; 0051ed4f
    POP ESI                             ; 0051ed50
        ;   Label: LAB_0051ed50
    POP EBX                             ; 0051ed51
    RET                                 ; 0051ed52

