; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0(CLodEdge * this_ptr, int tri_index)
;
; Parameters:
; CLodEdge *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_index
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 at 00515c5d
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 00517fba
;
; Referenced Globals:
;   TerminatedCString s_Too_many_adj_faces_00637466
;   TerminatedCString s_shape_meshlod_cpp_0063747a
;   TerminatedCString s_Too_many_adj_faces_0063748f
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ca0
        ;   Label: shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515ca1
    CMP dword ptr [EBX + 0x24],0x32     ; 00515ca5
    JGE 0x00515cbb                      ; 00515ca9 | LAB_00515cbb
        ;   XREF to: 00515cbb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x24]      ; 00515cab
    MOV EDX,dword ptr [ESP + 0xc]       ; 00515cae
    MOV dword ptr [EBX + EAX*0x4 + 0x28],EDX ; 00515cb2
    INC dword ptr [EBX + 0x24]          ; 00515cb6
    POP EBX                             ; 00515cb9
    RET                                 ; 00515cba
    PUSH EDI                            ; 00515cbb
        ;   Label: LAB_00515cbb
    PUSH ESI                            ; 00515cbc
    PUSH 0x637466                       ; 00515cbd | = "Too many adj faces!" | s_Too_many_adj_faces_00637466 = Too many adj faces!
    MOV ECX,dword ptr [0x00678a60]      ; 00515cc2 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00515cc8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00515cc9 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00515cce
    MOV ESI,0x63747a                    ; 00515cd1 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_0063747a = ..\shape\meshlod.cpp
    MOV EDI,0x281                       ; 00515cd6
    PUSH 0x63748f                       ; 00515cdb | = "Too many adj faces!" | s_Too_many_adj_faces_0063748f = Too many adj faces!
    MOV dword ptr [0x02f0ca48],ESI      ; 00515ce0 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00515ce6 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00515cec | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00515cf1
    POP ESI                             ; 00515cf4
    POP EDI                             ; 00515cf5
    MOV EAX,dword ptr [EBX + 0x24]      ; 00515cf6
    MOV EDX,dword ptr [ESP + 0xc]       ; 00515cf9
    MOV dword ptr [EBX + EAX*0x4 + 0x28],EDX ; 00515cfd
    INC dword ptr [EBX + 0x24]          ; 00515d01
    POP EBX                             ; 00515d04
    RET                                 ; 00515d05

