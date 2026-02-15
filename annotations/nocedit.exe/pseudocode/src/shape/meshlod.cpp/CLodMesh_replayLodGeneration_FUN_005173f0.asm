; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637781
;   TerminatedCString s_rt_00637796
;   TerminatedCString s_Can_t_open_s_00637799
;   TerminatedCString s_Replaying_006377a7
;   TerminatedCString s_shape_meshlod_cpp_006377b4
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   TerminatedCString s_replay_txt_0067d4b8
;   undefined4 s_ay.txt_0067d4bc
;   undefined4 s_xt_0067d4c0
;   undefined4 s__0067d4c2
;   CEditorTools g_CEditorToolsInstance
;   int g_LodReplayMode
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
;   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
;   shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005173f0
        ;   Label: shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0
    PUSH ESI                            ; 005173f1
    PUSH EDI                            ; 005173f2
    PUSH EBP                            ; 005173f3
    SUB ESP,0x14                        ; 005173f4
    MOV EBX,dword ptr [ESP + 0x28]      ; 005173f7
    PUSH EBX                            ; 005173fb
    CALL shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 ; 005173fc
        ;   XREF to: 00516d50 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00517401
    PUSH 0x5f5                          ; 00517404
    PUSH 0x637781                       ; 00517409 | = "..\\shape\\meshlod.cpp"
    PUSH 0x637796                       ; 0051740e | = "rt"
    LEA EDI,[ESP + 0xc]                 ; 00517413
    PUSH 0x0                            ; 00517417
    LEA EAX,[ESP + 0x10]                ; 00517419
    MOV ESI,0x67d4b8                    ; 0051741d | = "replay.txt"
    PUSH EAX                            ; 00517422
    MOVSD ES:EDI,ESI                    ; 00517423 | = "replay.txt"
    MOVSD ES:EDI,ESI                    ; 00517424 | s_ay.txt_0067d4bc
    MOVSW ES:EDI,ESI                    ; 00517425 | s_xt_0067d4c0
    MOVSB ES:EDI,ESI                    ; 00517427 | s__0067d4c2
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00517428
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0051742d
    MOV EBP,EAX                         ; 00517430
    TEST EAX,EAX                        ; 00517432
    JZ 0x0051750d                       ; 00517434
        ;   XREF to: 0051750d (CONDITIONAL_JUMP)  ; LAB_0051750d
    PUSH EAX                            ; 0051743a
    PUSH EBX                            ; 0051743b
    CALL shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180 ; 0051743c
        ;   XREF to: 0051d180 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00517441
    PUSH 0x6377a7                       ; 00517444 | = "Replaying..."
    MOV EDX,dword ptr [0x00678a60]      ; 00517449 | g_CEditorToolsPtr
    PUSH EDX                            ; 0051744f | g_CEditorToolsInstance
    XOR ESI,ESI                         ; 00517450
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00517452
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    MOV ECX,0x1                         ; 00517457
    MOV EAX,[0x02f33330]                ; 0051745c | g_LodReplayMode
    ADD ESP,0x8                         ; 00517461
    MOV EDI,dword ptr [EBX + 0x4c]      ; 00517464
    MOV dword ptr [ESP + 0xc],EAX       ; 00517467
    MOV dword ptr [0x02f33330],ECX      ; 0051746b | g_LodReplayMode
    TEST EDI,EDI                        ; 00517471
    JLE 0x005174d0                      ; 00517473
        ;   XREF to: 005174d0 (CONDITIONAL_JUMP)  ; LAB_005174d0
    XOR EDI,EDI                         ; 00517475
    MOV EAX,dword ptr [EBX + 0x50]      ; 00517477
        ;   Label: LAB_00517477
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x4] ; 0051747a
    PUSH dword ptr [EDI + EAX*0x1 + 0x10] ; 0051747e
    PUSH EDX                            ; 00517482
    MOV ECX,dword ptr [EDI + EAX*0x1]   ; 00517483
    PUSH ECX                            ; 00517486
    PUSH EBX                            ; 00517487
    INC ESI                             ; 00517488
    CALL shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 ; 00517489
        ;   XREF to: 00517630 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, float collapse_weight)
    ADD ESP,0x10                        ; 0051748e
    FILD dword ptr [EBX + 0x4c]         ; 00517491
    SUB ESP,0x4                         ; 00517494
    MOV dword ptr [ESP + 0x14],ESI      ; 00517497
    FSTP float ptr [ESP]                ; 0051749b
    FILD dword ptr [ESP + 0x14]         ; 0051749e
    SUB ESP,0x4                         ; 005174a2
    MOV EAX,[0x00678a60]                ; 005174a5 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 005174aa
    PUSH EAX                            ; 005174ad | g_CEditorToolsInstance
    ADD EDI,0xf0                        ; 005174ae
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 005174b4
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    MOV EDX,dword ptr [EBX + 0x4c]      ; 005174b9
    ADD ESP,0xc                         ; 005174bc
    CMP ESI,EDX                         ; 005174bf
    JL 0x00517477                       ; 005174c1
        ;   XREF to: 00517477 (CONDITIONAL_JUMP)  ; LAB_00517477
    LEA EAX,[EAX]                       ; 005174c3
    LEA EDX,[EDX]                       ; 005174c9
    NOP                                 ; 005174cf
    MOV ECX,dword ptr [0x00678a60]      ; 005174d0 | g_CEditorToolsPtr
        ;   Label: LAB_005174d0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005174d6
    PUSH ECX                            ; 005174da | g_CEditorToolsInstance
    MOV [0x02f33330],EAX                ; 005174db | g_LodReplayMode
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005174e0
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005174e5
    PUSH EBP                            ; 005174e8
    PUSH EBX                            ; 005174e9
    CALL shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 ; 005174ea
        ;   XREF to: 0051cdf0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005174ef
    PUSH 0x60b                          ; 005174f2
    PUSH 0x6377b4                       ; 005174f7 | = "..\\shape\\meshlod.cpp"
    PUSH EBP                            ; 005174fc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005174fd
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00517502
    ADD ESP,0x14                        ; 00517505
    POP EBP                             ; 00517508
    POP EDI                             ; 00517509
    POP ESI                             ; 0051750a
    POP EBX                             ; 0051750b
    RET                                 ; 0051750c
    MOV EAX,ESP                         ; 0051750d
        ;   Label: LAB_0051750d
    PUSH EAX                            ; 0051750f
    PUSH 0x637799                       ; 00517510 | = "Can't open %s"
    MOV EBP,dword ptr [0x00678a60]      ; 00517515 | g_CEditorToolsPtr
    PUSH EBP                            ; 0051751b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0051751c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00517521
    ADD ESP,0x14                        ; 00517524
    POP EBP                             ; 00517527
    POP EDI                             ; 00517528
    POP ESI                             ; 00517529
    POP EBX                             ; 0051752a
    RET                                 ; 0051752b

