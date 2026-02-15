; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace *this_ptr,int vertex_index)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
;
; XREF[4]:
;   shape_meshlod.cpp_CLodFace_containsVertex_FUN_0051ee30 at 0051ee3a
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 005182d0
;   shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000 at 005163a4
;   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 at 0051856b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00515e90
        ;   Label: shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00515e94
    CMP EDX,dword ptr [EAX + 0x10]      ; 00515e98
    JZ 0x005151dd                       ; 00515e9b
        ;   XREF to: 005151dd (CONDITIONAL_JUMP)  ; LAB_005151dd
    CMP EDX,dword ptr [EAX + 0x14]      ; 00515ea1
    JZ 0x005151d7                       ; 00515ea4
        ;   XREF to: 005151d7 (CONDITIONAL_JUMP)  ; LAB_005151d7
    CMP EDX,dword ptr [EAX + 0x18]      ; 00515eaa
    JNZ 0x00515eb5                      ; 00515ead
        ;   XREF to: 00515eb5 (CONDITIONAL_JUMP)  ; LAB_00515eb5
    MOV EAX,0x2                         ; 00515eaf
    RET                                 ; 00515eb4
    MOV EAX,0xffffffff                  ; 00515eb5
        ;   Label: LAB_00515eb5
    RET                                 ; 00515eba

