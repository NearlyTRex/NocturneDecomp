; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980(CLodMesh * this_ptr, int vertex_index, int edge_array_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
; int              Stack[0xc]:4   edge_array_index
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 005180e5
;   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 at 00518506
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a980
        ;   Label: shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051a981
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051a985
    IMUL EDX,EBX,0x4c4                  ; 0051a989
    MOV EAX,dword ptr [ECX + 0x4]       ; 0051a98f
    ADD EDX,EAX                         ; 0051a992
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051a994
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x3fc] ; 0051a998
    SHL EAX,0x4                         ; 0051a99f
    MOV EDX,EAX                         ; 0051a9a2
    SHL EAX,0x4                         ; 0051a9a4
    SUB EAX,EDX                         ; 0051a9a7
    MOV EDX,dword ptr [ECX + 0x48]      ; 0051a9a9
    ADD EDX,EAX                         ; 0051a9ac
    MOV EAX,dword ptr [EDX]             ; 0051a9ae
    CMP EAX,EBX                         ; 0051a9b0
    JNZ 0x0051a9b7                      ; 0051a9b2
        ;   XREF to: 0051a9b7 (CONDITIONAL_JUMP)  ; LAB_0051a9b7
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051a9b4
    POP EBX                             ; 0051a9b7
        ;   Label: LAB_0051a9b7
    LEA EAX,[EAX]                       ; 0051a9b8
    MOV EDX,EDX                         ; 0051a9be
    RET                                 ; 0051a9c0

