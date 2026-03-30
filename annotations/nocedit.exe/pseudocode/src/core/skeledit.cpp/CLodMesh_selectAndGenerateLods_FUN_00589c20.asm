; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(CLodMesh *this_ptr,CLodMeshPrecomputeEntry *entry,int render_mode)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CLodMeshPrecomputeEntry * Stack[0x8]:4   entry
; int              Stack[0xc]:4   render_mode
; Local Variables:
; CPickList        Stack[-0xa70]:936  local_a70
; CPickList        Stack[-0x6c8]:936  local_6c8
; CLodMeshPrecomputeEntry Stack[-0x320]:784  local_320
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058d2d0
;
; Referenced Globals:
;   TerminatedCString s_dixie_wav_00649df5
;   TerminatedCString s_LOD_generation_complete_00649dff
;   TerminatedCString s_wt_00649e31
;   TerminatedCString s_core_skeledit_cpp_00649e34
;   TerminatedCString s_Can_t_create_mesh_precom_00649e49
;   TerminatedCString s_Use_the_file_and_select__00649e6c
;   TerminatedCString s_Rebuild_shadow_LOD_recre_00649e96
;   TerminatedCString s_Don_t_select_a_shadow_LO_00649eca
;   TerminatedCString s_Precomputed_LOD_exists_f_00649f1f
;   TerminatedCString s_Use_the_file_and_select__00649f54
;   TerminatedCString s_Rebuild_LODs_recreating__00649f76
;   TerminatedCString s_Don_t_select_LODs_at_thi_00649fa4
;   TerminatedCString s_Precomputed_LOD_exists_f_00649ff1
;   TerminatedCString s_rt_0064a017
;   TerminatedCString s_Error_loading_precompute_0064a01a
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
;   shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0
;   shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0
;   ... and 5 more
;
; *****************************************************************************

section .text

    NOP                                 ; 00589c20
        ;   Label: core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20
    NOP                                 ; 00589c21
    NOP                                 ; 00589c22
    NOP                                 ; 00589c23
    NOP                                 ; 00589c24
    NOP                                 ; 00589c25
    NOP                                 ; 00589c26
    NOP                                 ; 00589c27
    NOP                                 ; 00589c28
    NOP                                 ; 00589c29
    PUSH EBX                            ; 00589c2a
    PUSH ESI                            ; 00589c2b
    PUSH EDI                            ; 00589c2c
    PUSH EBP                            ; 00589c2d
    SUB ESP,0xa60                       ; 00589c2e
    MOV EBX,dword ptr [ESP + 0xa74]     ; 00589c34
    MOV EDI,dword ptr [ESP + 0xa78]     ; 00589c3b
    MOV EBP,dword ptr [ESP + 0xa7c]     ; 00589c42
    CMP dword ptr [EDI + 0x308],0x1     ; 00589c49
    JNZ 0x00589c5f                      ; 00589c50
        ;   XREF to: 00589c5f (CONDITIONAL_JUMP)  ; LAB_00589c5f
    XOR EAX,EAX                         ; 00589c52
    ADD ESP,0xa60                       ; 00589c54
        ;   Label: LAB_00589c54
    POP EBP                             ; 00589c5a
    POP EDI                             ; 00589c5b
    POP ESI                             ; 00589c5c
    POP EBX                             ; 00589c5d
    RET                                 ; 00589c5e
    PUSH EBP                            ; 00589c5f
        ;   Label: LAB_00589c5f
    PUSH 0x0                            ; 00589c60
    PUSH EBX                            ; 00589c62
    CALL shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 ; 00589c63
        ;   XREF to: 0051d520 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520(CLodMesh * this_ptr, int pause_flag, int render_mode)
    ADD ESP,0xc                         ; 00589c68
    PUSH EBX                            ; 00589c6b
    CALL shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0 ; 00589c6c
        ;   XREF to: 0051b6f0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00589c71
    TEST EAX,EAX                        ; 00589c74
    JZ 0x00589ec7                       ; 00589c76
        ;   XREF to: 00589ec7 (CONDITIONAL_JUMP)  ; LAB_00589ec7
    CMP dword ptr [EDI + 0x30c],0x0     ; 00589c7c
    JZ 0x00589d0f                       ; 00589c83
        ;   XREF to: 00589d0f (CONDITIONAL_JUMP)  ; LAB_00589d0f
    MOV EAX,ESP                         ; 00589c89
    PUSH EAX                            ; 00589c8b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00589c8c
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00589c91
    PUSH 0x649e6c                       ; 00589c94 | = "Use the file and select a shadow LOD ..."
    LEA EAX,[ESP + 0x4]                 ; 00589c99
    PUSH EAX                            ; 00589c9d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00589c9e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00589ca3
    PUSH 0x649e96                       ; 00589ca6 | = "Rebuild shadow LOD, recreating the pr..."
    LEA EAX,[ESP + 0x4]                 ; 00589cab
    PUSH EAX                            ; 00589caf
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00589cb0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00589cb5
    PUSH 0x649eca                       ; 00589cb8 | = "Don't select a shadow LOD at this tim..."
    LEA EAX,[ESP + 0x4]                 ; 00589cbd
    PUSH EAX                            ; 00589cc1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00589cc2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00589cc7
    PUSH 0x0                            ; 00589cca
    PUSH -0x1                           ; 00589ccc
    PUSH 0x649f1f                       ; 00589cce | = "Precomputed LOD exists for this model..."
    LEA EAX,[ESP + 0xc]                 ; 00589cd3
    PUSH EAX                            ; 00589cd7
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00589cd8
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00589cdd
    PUSH 0x0                            ; 00589ce0
    MOV ESI,EAX                         ; 00589ce2
    LEA EAX,[ESP + 0x4]                 ; 00589ce4
    PUSH EAX                            ; 00589ce8
        ;   Label: LAB_00589ce8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00589ce9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00589cee
    TEST ESI,ESI                        ; 00589cf1
    JZ 0x00589d87                       ; 00589cf3
        ;   XREF to: 00589d87 (CONDITIONAL_JUMP)  ; LAB_00589d87
    CMP ESI,0x1                         ; 00589cf9
    JZ 0x00589e3a                       ; 00589cfc
        ;   XREF to: 00589e3a (CONDITIONAL_JUMP)  ; LAB_00589e3a
    XOR EAX,EAX                         ; 00589d02
    ADD ESP,0xa60                       ; 00589d04
    POP EBP                             ; 00589d0a
    POP EDI                             ; 00589d0b
    POP ESI                             ; 00589d0c
    POP EBX                             ; 00589d0d
    RET                                 ; 00589d0e
    LEA EAX,[ESP + 0x3a8]               ; 00589d0f
        ;   Label: LAB_00589d0f
    PUSH EAX                            ; 00589d16
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00589d17
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00589d1c
    PUSH 0x649f54                       ; 00589d1f | = "Use the file and select LODs now."
    LEA EAX,[ESP + 0x3ac]               ; 00589d24
    PUSH EAX                            ; 00589d2b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00589d2c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00589d31
    PUSH 0x649f76                       ; 00589d34 | = "Rebuild LODs, recreating the precompu..."
    LEA EAX,[ESP + 0x3ac]               ; 00589d39
    PUSH EAX                            ; 00589d40
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00589d41
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00589d46
    PUSH 0x649fa4                       ; 00589d49 | = "Don't select LODs at this time.  I ca..."
    LEA EAX,[ESP + 0x3ac]               ; 00589d4e
    PUSH EAX                            ; 00589d55
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00589d56
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00589d5b
    PUSH 0x0                            ; 00589d5e
    PUSH -0x1                           ; 00589d60
    PUSH 0x649ff1                       ; 00589d62 | = "Precomputed LOD exists for this model"
    LEA EAX,[ESP + 0x3b4]               ; 00589d67
    PUSH EAX                            ; 00589d6e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00589d6f
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00589d74
    PUSH 0x0                            ; 00589d77
    MOV ESI,EAX                         ; 00589d79
    LEA EAX,[ESP + 0x3ac]               ; 00589d7b
    JMP 0x00589ce8                      ; 00589d82
        ;   XREF to: 00589ce8 (UNCONDITIONAL_JUMP)  ; LAB_00589ce8
    PUSH 0x64a017                       ; 00589d87 | = "rt"
        ;   Label: LAB_00589d87
    PUSH EBX                            ; 00589d8c
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 00589d8d
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)  ; _FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
    ADD ESP,0x8                         ; 00589d92
    MOV dword ptr [EBX + 0x38],EAX      ; 00589d95
    TEST EAX,EAX                        ; 00589d98
    JZ 0x00589dea                       ; 00589d9a
        ;   XREF to: 00589dea (CONDITIONAL_JUMP)  ; LAB_00589dea
    LEA EAX,[ESP + 0x750]               ; 00589d9c
    PUSH EAX                            ; 00589da3
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0 ; 00589da4
        ;   XREF to: 00589fa0 (UNCONDITIONAL_CALL)  ; CLodMeshPrecomputeEntry * core_skeledit.cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0(CLodMeshPrecomputeEntry * this_ptr)
    ADD ESP,0x4                         ; 00589da9
    MOV EDI,dword ptr [EBX + 0x38]      ; 00589dac
    PUSH EDI                            ; 00589daf
    LEA EAX,[ESP + 0x754]               ; 00589db0
    PUSH EAX                            ; 00589db7
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0 ; 00589db8
        ;   XREF to: 00589fe0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0(CLodMeshPrecomputeEntry * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00589dbd
    MOV EBP,dword ptr [EBX + 0x38]      ; 00589dc0
    PUSH EBP                            ; 00589dc3
    PUSH EBX                            ; 00589dc4
    CALL shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0 ; 00589dc5
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00589dca
    TEST EAX,EAX                        ; 00589dcd
    JZ 0x00589e0e                       ; 00589dcf
        ;   XREF to: 00589e0e (CONDITIONAL_JUMP)  ; LAB_00589e0e
    PUSH EBX                            ; 00589dd1
    CALL shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870 ; 00589dd2
        ;   XREF to: 0051b870 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh * this_ptr)
    MOV EAX,0x1                         ; 00589dd7
    ADD ESP,0x4                         ; 00589ddc
    ADD ESP,0xa60                       ; 00589ddf
    POP EBP                             ; 00589de5
    POP EDI                             ; 00589de6
    POP ESI                             ; 00589de7
    POP EBX                             ; 00589de8
    RET                                 ; 00589de9
    PUSH 0x64a01a                       ; 00589dea | = "Error loading precompute file."
        ;   Label: LAB_00589dea
    MOV EDX,dword ptr [0x00678a60]      ; 00589def | g_CEditorToolsPtr
    PUSH EDX                            ; 00589df5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00589df6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    MOV EAX,0xffffffff                  ; 00589dfb
    ADD ESP,0x8                         ; 00589e00
    ADD ESP,0xa60                       ; 00589e03
    POP EBP                             ; 00589e09
    POP EDI                             ; 00589e0a
    POP ESI                             ; 00589e0b
    POP EBX                             ; 00589e0c
    RET                                 ; 00589e0d
    PUSH EBX                            ; 00589e0e
        ;   Label: LAB_00589e0e
    CALL shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870 ; 00589e0f
        ;   XREF to: 0051b870 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00589e14
    PUSH 0x64a039                       ; 00589e17 | = "Error loading precompute file."
    MOV EAX,[0x00678a60]                ; 00589e1c | g_CEditorToolsPtr
    PUSH EAX                            ; 00589e21 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00589e22
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    MOV EAX,0xffffffff                  ; 00589e27
    ADD ESP,0x8                         ; 00589e2c
    ADD ESP,0xa60                       ; 00589e2f
    POP EBP                             ; 00589e35
    POP EDI                             ; 00589e36
    POP ESI                             ; 00589e37
    POP EBX                             ; 00589e38
    RET                                 ; 00589e39
    PUSH 0x649e31                       ; 00589e3a | = "wt"
        ;   Label: LAB_00589e3a
    PUSH EBX                            ; 00589e3f
    MOV ESI,EBX                         ; 00589e40
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 00589e42
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)  ; _FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
    ADD ESP,0x8                         ; 00589e47
    MOV dword ptr [EBX + 0x38],EAX      ; 00589e4a
    TEST EAX,EAX                        ; 00589e4d
    JNZ 0x00589e73                      ; 00589e4f
        ;   XREF to: 00589e73 (CONDITIONAL_JUMP)  ; LAB_00589e73
    MOV ECX,0x649e34                    ; 00589e51 | = "..\\core\\skeledit.cpp"
    MOV EAX,0x179                       ; 00589e56
    PUSH 0x649e49                       ; 00589e5b | = "Can't create mesh precompute file."
    MOV dword ptr [0x02f0ca48],ECX      ; 00589e60 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00589e66 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00589e6b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00589e70
    MOV EDX,dword ptr [ESI + 0x38]      ; 00589e73
        ;   Label: LAB_00589e73
    PUSH EDX                            ; 00589e76
    PUSH EDI                            ; 00589e77
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0 ; 00589e78
        ;   XREF to: 0058a0f0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00589e7d
    PUSH EBP                            ; 00589e80
    PUSH 0x0                            ; 00589e81
    PUSH EBX                            ; 00589e83
    CALL shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 ; 00589e84
        ;   XREF to: 00516ba0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh * this_ptr, int target_tri_count, int render_mode)
    ADD ESP,0xc                         ; 00589e89
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 00589e8c
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
    PUSH 0x649df5                       ; 00589e91 | = "dixie.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00589e96
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 00589e9b
    PUSH 0x649dff                       ; 00589e9e | = "LOD generation complete!"
    MOV ECX,dword ptr [0x00678a60]      ; 00589ea3 | g_CEditorToolsPtr
    PUSH ECX                            ; 00589ea9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589eaa
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00589eaf
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00589eb2
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    MOV EAX,0x1                         ; 00589eb7
    ADD ESP,0xa60                       ; 00589ebc
    POP EBP                             ; 00589ec2
    POP EDI                             ; 00589ec3
    POP ESI                             ; 00589ec4
    POP EBX                             ; 00589ec5
    RET                                 ; 00589ec6
    MOV ECX,dword ptr [EDI + 0x30c]     ; 00589ec7
        ;   Label: LAB_00589ec7
    MOV EAX,0x64a058                    ; 00589ecd | = "No precompute file exists.  Generate ..."
    TEST ECX,ECX                        ; 00589ed2
    JZ 0x00589edb                       ; 00589ed4
        ;   XREF to: 00589edb (CONDITIONAL_JUMP)  ; LAB_00589edb
    MOV EAX,0x64a089                    ; 00589ed6 | = "No precompute file exists.  Generate ..."
    PUSH EAX                            ; 00589edb | = "No precompute file exists.  Generate ..." | s_No_precompute_file_exist_0064a058
        ;   Label: LAB_00589edb
    MOV ESI,dword ptr [0x00678a60]      ; 00589edc | g_CEditorToolsPtr
    PUSH ESI                            ; 00589ee2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0 ; 00589ee3
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 00589ee8
    TEST EAX,EAX                        ; 00589eeb
    JZ 0x00589c54                       ; 00589eed
        ;   XREF to: 00589c54 (CONDITIONAL_JUMP)  ; LAB_00589c54
    PUSH EBP                            ; 00589ef3
    PUSH 0x0                            ; 00589ef4
    PUSH EBX                            ; 00589ef6
    CALL shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 ; 00589ef7
        ;   XREF to: 00516ba0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh * this_ptr, int target_tri_count, int render_mode)
    ADD ESP,0xc                         ; 00589efc
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 00589eff
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
    PUSH 0x649df5                       ; 00589f04 | = "dixie.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00589f09
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 00589f0e
    PUSH 0x649dff                       ; 00589f11 | = "LOD generation complete!"
    MOV EDI,dword ptr [0x00678a60]      ; 00589f16 | g_CEditorToolsPtr
    PUSH EDI                            ; 00589f1c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589f1d
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00589f22
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00589f25
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    MOV EAX,0x1                         ; 00589f2a
    ADD ESP,0xa60                       ; 00589f2f
    POP EBP                             ; 00589f35
    POP EDI                             ; 00589f36
    POP ESI                             ; 00589f37
    POP EBX                             ; 00589f38
    RET                                 ; 00589f39

