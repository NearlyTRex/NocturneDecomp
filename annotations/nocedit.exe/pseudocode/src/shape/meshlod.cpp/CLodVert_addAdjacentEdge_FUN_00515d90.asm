; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert * this_ptr, int edge_index)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_index
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 005181bd
;   shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 at 00515fe9
;
; Referenced Globals:
;   TerminatedCString s_Too_many_adj_edges_006374a3
;   TerminatedCString s_shape_meshlod_cpp_006374b7
;   TerminatedCString s_Too_many_adj_edges_006374cc
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515d90
        ;   Label: shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515d91
    CMP dword ptr [EBX + 0x3f8],0x32    ; 00515d95
    JGE 0x00515db7                      ; 00515d9c
        ;   XREF to: 00515db7 (CONDITIONAL_JUMP)  ; LAB_00515db7
    MOV EAX,dword ptr [EBX + 0x3f8]     ; 00515d9e
        ;   Label: LAB_00515d9e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00515da4
    MOV dword ptr [EBX + EAX*0x4 + 0x3fc],EDX ; 00515da8
    INC dword ptr [EBX + 0x3f8]         ; 00515daf
    POP EBX                             ; 00515db5
    RET                                 ; 00515db6
    PUSH EDI                            ; 00515db7
        ;   Label: LAB_00515db7
    PUSH ESI                            ; 00515db8
    PUSH 0x6374a3                       ; 00515db9 | = "Too many adj edges!"
    MOV ECX,dword ptr [0x00678a60]      ; 00515dbe | g_CEditorToolsPtr
    PUSH ECX                            ; 00515dc4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00515dc5
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00515dca
    MOV ESI,0x6374b7                    ; 00515dcd | = "..\\shape\\meshlod.cpp"
    MOV EDI,0x2c1                       ; 00515dd2
    PUSH 0x6374cc                       ; 00515dd7 | = "Too many adj edges!"
    MOV dword ptr [0x02f0ca48],ESI      ; 00515ddc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00515de2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00515de8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00515ded
    POP ESI                             ; 00515df0
    POP EDI                             ; 00515df1
    JMP 0x00515d9e                      ; 00515df2
        ;   XREF to: 00515d9e (UNCONDITIONAL_JUMP)  ; LAB_00515d9e

