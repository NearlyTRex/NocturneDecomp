; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 at 0051d0c9
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516de0
;
; Referenced Globals:
;   TerminatedCString s_Computing_initial_edge_c_006379ed
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
;   shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519710
        ;   Label: shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710
    PUSH ESI                            ; 00519711
    PUSH EDI                            ; 00519712
    PUSH EBP                            ; 00519713
    SUB ESP,0x4                         ; 00519714
    MOV EBX,dword ptr [ESP + 0x18]      ; 00519717
    PUSH EBX                            ; 0051971b
    XOR ESI,ESI                         ; 0051971c
    MOV EDX,dword ptr [EBX + 0x44]      ; 0051971e
    ADD ESP,0x4                         ; 00519721
    TEST EDX,EDX                        ; 00519724
    JLE 0x00519740                      ; 00519726
        ;   XREF to: 00519740 (CONDITIONAL_JUMP)  ; LAB_00519740
    PUSH 0x1                            ; 00519728
        ;   Label: LAB_00519728
    PUSH ESI                            ; 0051972a
    PUSH EBX                            ; 0051972b
    CALL shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000 ; 0051972c
        ;   XREF to: 00516000 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh * this_ptr, int edge_index, int full_check)
    INC ESI                             ; 00519731
    MOV ECX,dword ptr [EBX + 0x44]      ; 00519732
    ADD ESP,0xc                         ; 00519735
    CMP ESI,ECX                         ; 00519738
    JL 0x00519728                       ; 0051973a
        ;   XREF to: 00519728 (CONDITIONAL_JUMP)  ; LAB_00519728
    LEA EAX,[EAX]                       ; 0051973c
    PUSH 0x6379ed                       ; 00519740 | = "Computing initial edge collapse costs..."
        ;   Label: LAB_00519740
    MOV ESI,dword ptr [0x00678a60]      ; 00519745 | g_CEditorToolsPtr
    PUSH ESI                            ; 0051974b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0051974c
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00519751
    MOV EDI,dword ptr [EBX + 0x44]      ; 00519754
    XOR ESI,ESI                         ; 00519757
    TEST EDI,EDI                        ; 00519759
    JLE 0x005197a0                      ; 0051975b
        ;   XREF to: 005197a0 (CONDITIONAL_JUMP)  ; LAB_005197a0
    PUSH ESI                            ; 0051975d
        ;   Label: LAB_0051975d
    PUSH EBX                            ; 0051975e
    CALL shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 ; 0051975f
        ;   XREF to: 00518910 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh * this_ptr, int edge_index)
    FILD dword ptr [EBX + 0x44]         ; 00519764
    ADD ESP,0x8                         ; 00519767
    LEA EAX,[ESI + 0x1]                 ; 0051976a
    SUB ESP,0x4                         ; 0051976d
    MOV dword ptr [ESP + 0x4],EAX       ; 00519770
    FSTP float ptr [ESP]                ; 00519774
    FILD dword ptr [ESP + 0x4]          ; 00519777
    SUB ESP,0x4                         ; 0051977b
    MOV EBP,dword ptr [0x00678a60]      ; 0051977e | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00519784
    PUSH EBP                            ; 00519787 | g_CEditorToolsInstance
    INC ESI                             ; 00519788
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00519789
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    MOV EAX,dword ptr [EBX + 0x44]      ; 0051978e
    ADD ESP,0xc                         ; 00519791
    CMP ESI,EAX                         ; 00519794
    JL 0x0051975d                       ; 00519796
        ;   XREF to: 0051975d (CONDITIONAL_JUMP)  ; LAB_0051975d
    LEA EAX,[EAX]                       ; 00519798
    MOV EDX,EDX                         ; 0051979e
    MOV EDX,dword ptr [0x00678a60]      ; 005197a0 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_005197a0
    PUSH EDX                            ; 005197a6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005197a7
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005197ac
    ADD ESP,0x4                         ; 005197af
    POP EBP                             ; 005197b2
    POP EDI                             ; 005197b3
    POP ESI                             ; 005197b4
    POP EBX                             ; 005197b5
    RET                                 ; 005197b6

