; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr,int *pixel_heights,int *face_counts,int max_lods,int render_mode)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   pixel_heights
; int *            Stack[0xc]:4   face_counts
; int              Stack[0x10]:4   max_lods
; int              Stack[0x14]:4   render_mode
; Local Variables:
; CPickList        Stack[-0x780]:936  CStack_780
; float[100]       Stack[-0x3d8]:400  local_3d8
; char[200]        Stack[-0x248]:200  local_248
; CLodMesh         Stack[-0x180]:116  local_180
; CSpotView        Stack[-0x10c]:60  local_10c
; CSpotView        Stack[-0xd0]:60  local_d0
; CBoundingBox3D   Stack[-0x94]:24  local_94
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; CVector3f        Stack[-0x70]:12  local_70
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; CVector3f        Stack[-0x58]:12  local_58
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  iStack_40
; int              Stack[-0x3c]:4  iStack_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int *            Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  iStack_28
; int              Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  iStack_1c
; int              Stack[-0x18]:4  iStack_18
; int *            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058d63c
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006382e0
;   TerminatedCString s_Can_t_call_LodMesh_choos_006382f5
;   TerminatedCString s_TEST_MODE_Adjust_view_to_0063833d
;   TerminatedCString s_Press_N_to_create_a_new__00638362
;   TerminatedCString s_Viewing_LOD_0_This_LOD_c_0063838f
;   TerminatedCString s_Editing_LOD_d_of_d_006383ba
;   TerminatedCString s_Use_LEFT_RIGHT_to_adjust_006383d0
;   TerminatedCString s_Press_T_to_go_to_test_mo_006383f5
;   TerminatedCString s_Press_TAB_SHIFT_TAB_for__00638411
;   TerminatedCString s_LOD_d_P_d_F_d_00638438
;   TerminatedCString s_LOD_d_F_d_00638449
;   TerminatedCString s_Current_d_pixelHeight_d__00638455
;   TerminatedCString s_Can_t_have_more_than_d_L_00638477
;   TerminatedCString s_Enter_face_count_00638495
;   TerminatedCString s_Delete_LOD_d_006384a6
;   ... and 21 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_memmove_FUN_005fe5e0
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d990
        ;   Label: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
    PUSH ESI                            ; 0051d991
    PUSH EDI                            ; 0051d992
    PUSH EBP                            ; 0051d993
    MOV EBP,ESP                         ; 0051d994
    SUB ESP,0x770                       ; 0051d996
    AND ESP,0xfffffff8                  ; 0051d99c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051d99f
    CMP dword ptr [EAX + 0x34],0x0      ; 0051d9a2
    JZ 0x0051e3d9                       ; 0051d9a6
        ;   XREF to: 0051e3d9 (CONDITIONAL_JUMP)  ; LAB_0051e3d9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051d9ac
        ;   Label: LAB_0051d9ac
    MOV dword ptr [EAX],0xf423f         ; 0051d9af
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051d9b5
    MOV EDI,dword ptr [EAX + 0x34]      ; 0051d9b8
    MOV ESI,0x1                         ; 0051d9bb
    PUSH EDI                            ; 0051d9c0
    MOV dword ptr [ESP + 0x754],ESI     ; 0051d9c1
    CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0 ; 0051d9c8
        ;   XREF to: 005164d0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d9cd
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0051d9d0
    MOV dword ptr [EDX],EAX             ; 0051d9d3
    LEA EAX,[ESP + 0x6ec]               ; 0051d9d5
    PUSH EAX                            ; 0051d9dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051d9dd
    PUSH EAX                            ; 0051d9e0
    CALL shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500 ; 0051d9e1
        ;   XREF to: 00516500 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh * this_ptr, CBoundingBox3D * out_bbox)
    ADD ESP,0x8                         ; 0051d9e6
    LEA EAX,[ESP + 0x6b0]               ; 0051d9e9
    PUSH EAX                            ; 0051d9f0
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0 ; 0051d9f1
        ;   XREF to: 005b95c0 (UNCONDITIONAL_CALL)  ; CSpotView * shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0051d9f6
    PUSH 0x1f                           ; 0051d9f9
    LEA EAX,[ESP + 0x6b4]               ; 0051d9fb
    PUSH EAX                            ; 0051da02
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005b9620 ; 0051da03
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005b9620(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0051da08
    LEA EAX,[ESP + 0x6ec]               ; 0051da0b
    PUSH EAX                            ; 0051da12
    LEA EAX,[ESP + 0x714]               ; 0051da13
    PUSH EAX                            ; 0051da1a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051da1b
    PUSH EDX                            ; 0051da1e
    CALL shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0 ; 0051da1f
        ;   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)
    MOV EDX,EAX                         ; 0051da24
    LEA EAX,[ESP + 0x6f8]               ; 0051da26
    ADD ESP,0xc                         ; 0051da2d
    CMP EAX,EDX                         ; 0051da30
    JZ 0x0051da51                       ; 0051da32
        ;   XREF to: 0051da51 (CONDITIONAL_JUMP)  ; LAB_0051da51
    MOV EAX,dword ptr [EDX]             ; 0051da34
    MOV dword ptr [ESP + 0x6ec],EAX     ; 0051da36
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051da3d
    MOV dword ptr [ESP + 0x6f0],EAX     ; 0051da40
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051da47
    MOV dword ptr [ESP + 0x6f4],EAX     ; 0051da4a
    LEA EAX,[ESP + 0x6f8]               ; 0051da51
        ;   Label: LAB_0051da51
    PUSH EAX                            ; 0051da58
    LEA EAX,[ESP + 0x72c]               ; 0051da59
    PUSH EAX                            ; 0051da60
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051da61
    PUSH ECX                            ; 0051da64
    CALL shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0 ; 0051da65
        ;   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)
    MOV EDX,EAX                         ; 0051da6a
    LEA EAX,[ESP + 0x704]               ; 0051da6c
    ADD ESP,0xc                         ; 0051da73
    CMP EAX,EDX                         ; 0051da76
    JZ 0x0051da97                       ; 0051da78
        ;   XREF to: 0051da97 (CONDITIONAL_JUMP)  ; LAB_0051da97
    MOV EAX,dword ptr [EDX]             ; 0051da7a
    MOV dword ptr [ESP + 0x6f8],EAX     ; 0051da7c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051da83
    MOV dword ptr [ESP + 0x6fc],EAX     ; 0051da86
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051da8d
    MOV dword ptr [ESP + 0x700],EAX     ; 0051da90
    FLD float ptr [ESP + 0x6ec]         ; 0051da97
        ;   Label: LAB_0051da97
    FADD float ptr [ESP + 0x6f8]        ; 0051da9e
    FST float ptr [ESP + 0x734]         ; 0051daa5
    FLD float ptr [0x00638515]          ; 0051daac | FLOAT_00638515
    FXCH                                ; 0051dab2
    FMUL ST1                            ; 0051dab4
    FLD float ptr [ESP + 0x6f4]         ; 0051dab6
    FLD float ptr [ESP + 0x6f0]         ; 0051dabd
    FADD float ptr [ESP + 0x6fc]        ; 0051dac4
    FXCH                                ; 0051dacb
    FADD float ptr [ESP + 0x700]        ; 0051dacd
    FXCH                                ; 0051dad4
    FST float ptr [ESP + 0x738]         ; 0051dad6
    FMUL ST3                            ; 0051dadd
    FXCH                                ; 0051dadf
    FST float ptr [ESP + 0x73c]         ; 0051dae1
    FMULP ST3                           ; 0051dae8
    LEA EAX,[ESP + 0x704]               ; 0051daea
    LEA EDX,[ESP + 0x6c8]               ; 0051daf1
    FXCH                                ; 0051daf8
    FSTP float ptr [ESP + 0x704]        ; 0051dafa
    FSTP float ptr [ESP + 0x708]        ; 0051db01
    FSTP float ptr [ESP + 0x70c]        ; 0051db08
    CMP EDX,EAX                         ; 0051db0f
    JNZ 0x0051e401                      ; 0051db11
        ;   XREF to: 0051e401 (CONDITIONAL_JUMP)  ; LAB_0051e401
    MOV EBX,dword ptr [0x0067b654]      ; 0051db17 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_0051db17
    PUSH EBX                            ; 0051db1d | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0051db1e
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051db23
    LEA EAX,[ESP + 0x600]               ; 0051db26
    PUSH EAX                            ; 0051db2d
    CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 ; 0051db2e
        ;   XREF to: 00515840 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051db33
    FLD float ptr [ESP + 0x6fc]         ; 0051db36
    FSUB float ptr [ESP + 0x6f0]        ; 0051db3d
    FST float ptr [ESP + 0x720]         ; 0051db44
    FMUL double ptr [0x0063851d]        ; 0051db4b | DOUBLE_0063851d
    MOV ESI,0xffffffff                  ; 0051db51
    FLD float ptr [ESP + 0x700]         ; 0051db56
    FLD float ptr [ESP + 0x6f8]         ; 0051db5d
    FSUB float ptr [ESP + 0x6ec]        ; 0051db64
    FXCH                                ; 0051db6b
    FSUB float ptr [ESP + 0x6f4]        ; 0051db6d
    FXCH                                ; 0051db74
    FSTP float ptr [ESP + 0x71c]        ; 0051db76
    FSTP float ptr [ESP + 0x724]        ; 0051db7d
    FSTP float ptr [ESP + 0x3a8]        ; 0051db84
    MOV EAX,[0x00679398]                ; 0051db8b | g_WindowHeight
        ;   Label: LAB_0051db8b
    PUSH 0xfc                           ; 0051db90
    DEC EAX                             ; 0051db95
    PUSH EAX                            ; 0051db96
    MOV EAX,[0x00679394]                ; 0051db97 | g_WindowWidth
    DEC EAX                             ; 0051db9c
    PUSH EAX                            ; 0051db9d
    PUSH 0x0                            ; 0051db9e
    PUSH 0x0                            ; 0051dba0
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0051dba2
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0051dba7
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 0051dbaa
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    TEST ESI,ESI                        ; 0051dbaf
    JNZ 0x0051dbc1                      ; 0051dbb1
        ;   XREF to: 0051dbc1 (CONDITIONAL_JUMP)  ; LAB_0051dbc1
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 0051dbb3
    MOV dword ptr [ESP + 0x6dc],EAX     ; 0051dbba
    LEA EAX,[ESP + 0x674]               ; 0051dbc1
        ;   Label: LAB_0051dbc1
    PUSH EAX                            ; 0051dbc8
    CALL shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0 ; 0051dbc9
        ;   XREF to: 005b95c0 (UNCONDITIONAL_CALL)  ; CSpotView * shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0051dbce
    MOV EAX,dword ptr [ESP + 0x6b0]     ; 0051dbd1
    MOV dword ptr [ESP + 0x674],EAX     ; 0051dbd8
    MOV EAX,dword ptr [ESP + 0x6b4]     ; 0051dbdf
    MOV dword ptr [ESP + 0x678],EAX     ; 0051dbe6
    MOV EAX,dword ptr [ESP + 0x6b8]     ; 0051dbed
    MOV dword ptr [ESP + 0x67c],EAX     ; 0051dbf4
    MOV EAX,dword ptr [ESP + 0x6bc]     ; 0051dbfb
    MOV dword ptr [ESP + 0x680],EAX     ; 0051dc02
    MOV EAX,dword ptr [ESP + 0x6c0]     ; 0051dc09
    MOV dword ptr [ESP + 0x684],EAX     ; 0051dc10
    MOV EAX,dword ptr [ESP + 0x6c4]     ; 0051dc17
    LEA EDX,[ESP + 0x68c]               ; 0051dc1e
    MOV dword ptr [ESP + 0x688],EAX     ; 0051dc25
    LEA EAX,[ESP + 0x6c8]               ; 0051dc2c
    CMP EDX,EAX                         ; 0051dc33
    JZ 0x0051dc61                       ; 0051dc35
        ;   XREF to: 0051dc61 (CONDITIONAL_JUMP)  ; LAB_0051dc61
    MOV EAX,dword ptr [ESP + 0x6c8]     ; 0051dc37
    MOV dword ptr [ESP + 0x68c],EAX     ; 0051dc3e
    MOV EAX,dword ptr [ESP + 0x6cc]     ; 0051dc45
    MOV dword ptr [ESP + 0x690],EAX     ; 0051dc4c
    MOV EAX,dword ptr [ESP + 0x6d0]     ; 0051dc53
    MOV dword ptr [ESP + 0x694],EAX     ; 0051dc5a
    MOV EAX,dword ptr [ESP + 0x6d8]     ; 0051dc61
        ;   Label: LAB_0051dc61
    MOV dword ptr [ESP + 0x69c],EAX     ; 0051dc68
    MOV EAX,dword ptr [ESP + 0x6dc]     ; 0051dc6f
    MOV dword ptr [ESP + 0x6a0],EAX     ; 0051dc76
    MOV EAX,dword ptr [ESP + 0x6e8]     ; 0051dc7d
    XOR EDI,EDI                         ; 0051dc84
    MOV dword ptr [ESP + 0x6ac],EAX     ; 0051dc86
    LEA EAX,[ESP + 0x674]               ; 0051dc8d
    MOV dword ptr [ESP + 0x698],EDI     ; 0051dc94
    PUSH EAX                            ; 0051dc9b
    MOV dword ptr [ESP + 0x6a8],EDI     ; 0051dc9c
    MOV dword ptr [ESP + 0x6ac],EDI     ; 0051dca3
    CALL shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20 ; 0051dcaa
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0051dcaf
    PUSH 0x3f87558                      ; 0051dcb2 | g_ZeroVector
    MOV ECX,dword ptr [0x006703ec]      ; 0051dcb7 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0051dcbd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0051dcbe
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0051dcc3
    LEA EAX,[ESP + 0x6ec]               ; 0051dcc6
    PUSH EAX                            ; 0051dccd
    CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840 ; 0051dcce
        ;   XREF to: 00420840 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D * this_ptr)
    MOV dword ptr [ESP + 0x770],EAX     ; 0051dcd3
    FLD float ptr [ESP + 0x770]         ; 0051dcda
    LEA EAX,[ESP + 0x6b4]               ; 0051dce1
    ADD ESP,0x4                         ; 0051dce8
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051dceb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 0051dcf0
    FISTP dword ptr [ESP + 0x750]       ; 0051dcf1
    CALL shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20 ; 0051dcf8
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0051dcfd
    PUSH 0x3f87558                      ; 0051dd00 | g_ZeroVector
    MOV EBX,dword ptr [0x006703ec]      ; 0051dd05 | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 0051dd0b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0051dd0c
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0051dd11
    TEST ESI,ESI                        ; 0051dd14
    JL 0x0051e430                       ; 0051dd16
        ;   XREF to: 0051e430 (CONDITIONAL_JUMP)  ; LAB_0051e430
    JNZ 0x0051e471                      ; 0051dd1c
        ;   XREF to: 0051e471 (CONDITIONAL_JUMP)  ; LAB_0051e471
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051dd22
    MOV EAX,dword ptr [EAX + 0x34]      ; 0051dd25
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051dd28
    MOV EDI,dword ptr [ESP + 0x608]     ; 0051dd2b
        ;   Label: LAB_0051dd2b
    LEA EDX,[EAX + -0x1]                ; 0051dd32
    CMP EDX,EDI                         ; 0051dd35
    JLE 0x0051e484                      ; 0051dd37
        ;   XREF to: 0051e484 (CONDITIONAL_JUMP)  ; LAB_0051e484
    LEA EDX,[ESP + 0x600]               ; 0051dd3d
        ;   Label: LAB_0051dd3d
    PUSH EDX                            ; 0051dd44
    PUSH EAX                            ; 0051dd45
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051dd46
    PUSH ECX                            ; 0051dd49
    CALL shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 ; 0051dd4a
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh * this_ptr, int target_face_count, CLodMesh * output_mesh)
    ADD ESP,0xc                         ; 0051dd4f
    CMP dword ptr [EBP + 0x24],0x2      ; 0051dd52
    JNZ 0x0051dd7c                      ; 0051dd56
        ;   XREF to: 0051dd7c (CONDITIONAL_JUMP)  ; LAB_0051dd7c
    LEA EAX,[ESP + 0x600]               ; 0051dd58
    XOR EDI,EDI                         ; 0051dd5f
    PUSH EAX                            ; 0051dd61
    MOV EBX,dword ptr [0x0067d39c]      ; 0051dd62 | INT_0067d39c
    MOV dword ptr [0x0067d39c],EDI      ; 0051dd68 | INT_0067d39c
    CALL shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 ; 0051dd6e
        ;   XREF to: 0051bac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051dd73
    MOV dword ptr [0x0067d39c],EBX      ; 0051dd76 | INT_0067d39c
    TEST ESI,ESI                        ; 0051dd7c
        ;   Label: LAB_0051dd7c
    JLE 0x0051dda8                      ; 0051dd7e
        ;   XREF to: 0051dda8 (CONDITIONAL_JUMP)  ; LAB_0051dda8
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0051dd80
    MOV EAX,dword ptr [ESP + 0x608]     ; 0051dd83
    MOV dword ptr [ECX + ESI*0x4],EAX   ; 0051dd8a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051dd8d
    MOV EAX,dword ptr [ESP + 0x74c]     ; 0051dd90
    MOV dword ptr [ECX + ESI*0x4],EAX   ; 0051dd97
    MOV EAX,dword ptr [ESP + 0x6dc]     ; 0051dd9a
    MOV dword ptr [ESP + ESI*0x4 + 0x3a8],EAX ; 0051dda1
    JL 0x0051e491                       ; 0051dda8
        ;   XREF to: 0051e491 (CONDITIONAL_JUMP)  ; LAB_0051e491
        ;   Label: LAB_0051dda8
    JNZ 0x0051e4b0                      ; 0051ddae
        ;   XREF to: 0051e4b0 (CONDITIONAL_JUMP)  ; LAB_0051e4b0
    PUSH ESI                            ; 0051ddb4
    PUSH ESI                            ; 0051ddb5
    PUSH 0x63838f                       ; 0051ddb6 | = "Viewing LOD 0.  This LOD cannot be ed..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051ddbb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
        ;   Label: LAB_0051ddbb
    ADD ESP,0xc                         ; 0051ddc0
    PUSH 0x2b                           ; 0051ddc3
    PUSH 0xa                            ; 0051ddc5
    MOV EAX,[0x00679398]                ; 0051ddc7 | g_WindowHeight
    PUSH 0x2b                           ; 0051ddcc
    MOV EDX,0x1                         ; 0051ddce
    SUB EAX,0x18                        ; 0051ddd3
    PUSH 0x0                            ; 0051ddd6
    MOV dword ptr [0x02d02570],EDX      ; 0051ddd8 | g_ActiveRenderColor
    MOV dword ptr [ESP + 0x76c],EAX     ; 0051ddde
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0051dde5
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0051ddea
    MOV EAX,dword ptr [ESP + 0x75c]     ; 0051dded
    ADD EAX,0xb                         ; 0051ddf4
    PUSH EAX                            ; 0051ddf7
    PUSH 0xa                            ; 0051ddf8
    PUSH EAX                            ; 0051ddfa
    PUSH 0x0                            ; 0051ddfb
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0051ddfd
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0051de02
    MOV ECX,dword ptr [ESP + 0x750]     ; 0051de05
    XOR EBX,EBX                         ; 0051de0c
    TEST ECX,ECX                        ; 0051de0e
    JLE 0x0051df26                      ; 0051de10
        ;   XREF to: 0051df26 (CONDITIONAL_JUMP)  ; LAB_0051df26
    MOV EAX,dword ptr [ESP + 0x75c]     ; 0051de16
    SUB EAX,0x2c                        ; 0051de1d
    MOV dword ptr [ESP + 0x748],EAX     ; 0051de20
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051de27
    MOV dword ptr [ESP + 0x754],EAX     ; 0051de2a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051de31
    MOV dword ptr [ESP + 0x760],EAX     ; 0051de34
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051de3b
        ;   Label: LAB_0051de3b
    TEST EBX,EBX                        ; 0051de42
    JLE 0x0051e512                      ; 0051de44
        ;   XREF to: 0051e512 (CONDITIONAL_JUMP)  ; LAB_0051e512
    MOV EDX,dword ptr [ESP + 0x760]     ; 0051de4a
    MOV EDI,dword ptr [EDX]             ; 0051de51
    ADD EAX,dword ptr [EBP + 0x18]      ; 0051de53
    PUSH EDI                            ; 0051de56
    MOV ECX,dword ptr [EAX]             ; 0051de57
    PUSH ECX                            ; 0051de59
    PUSH EBX                            ; 0051de5a
    PUSH 0x638438                       ; 0051de5b | = "LOD%d: P=%d F=%d"
    LEA EAX,[ESP + 0x548]               ; 0051de60
    PUSH EAX                            ; 0051de67
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051de68
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0051de6d
    MOV EDX,dword ptr [ESP + 0x754]     ; 0051de70
        ;   Label: LAB_0051de70
    MOV EDI,dword ptr [ESP + 0x748]     ; 0051de77
    MOV EDX,dword ptr [EDX]             ; 0051de7e
    IMUL EDX,EDI                        ; 0051de80
    MOV ECX,0x1e0                       ; 0051de83
    MOV EAX,EDX                         ; 0051de88
    SAR EDX,0x1f                        ; 0051de8a
    IDIV ECX                            ; 0051de8d
    MOV EDI,dword ptr [ESP + 0x75c]     ; 0051de8f
    SUB EDI,EAX                         ; 0051de96
    CMP EDI,0x2c                        ; 0051de98
    JGE 0x0051dea2                      ; 0051de9b
        ;   XREF to: 0051dea2 (CONDITIONAL_JUMP)  ; LAB_0051dea2
    MOV EDI,0x2c                        ; 0051de9d
    MOV EAX,dword ptr [ESP + 0x75c]     ; 0051dea2
        ;   Label: LAB_0051dea2
    CMP EDI,EAX                         ; 0051dea9
    JLE 0x0051deaf                      ; 0051deab
        ;   XREF to: 0051deaf (CONDITIONAL_JUMP)  ; LAB_0051deaf
    MOV EDI,EAX                         ; 0051dead
    TEST ESI,ESI                        ; 0051deaf
        ;   Label: LAB_0051deaf
    JNZ 0x0051e537                      ; 0051deb1
        ;   XREF to: 0051e537 (CONDITIONAL_JUMP)  ; LAB_0051e537
    TEST EBX,EBX                        ; 0051deb7
    JNZ 0x0051e537                      ; 0051deb9
        ;   XREF to: 0051e537 (CONDITIONAL_JUMP)  ; LAB_0051e537
    MOV EDX,dword ptr [0x00678a60]      ; 0051debf | g_CEditorToolsPtr
    PUSH EDX                            ; 0051dec5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0051dec6
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0051decb
    MOV [0x02d02570],EAX                ; 0051dece | g_ActiveRenderColor
    PUSH EDI                            ; 0051ded3
        ;   Label: LAB_0051ded3
    PUSH 0xa                            ; 0051ded4
    PUSH EDI                            ; 0051ded6
    PUSH 0x0                            ; 0051ded7
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0051ded9
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0051dede
    PUSH EDI                            ; 0051dee1
    PUSH 0xa                            ; 0051dee2
    LEA EAX,[ESP + 0x540]               ; 0051dee4
    PUSH EAX                            ; 0051deeb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051deec
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051def1
    INC EBX                             ; 0051def4
    MOV EDI,dword ptr [ESP + 0x754]     ; 0051def5
    MOV EAX,dword ptr [ESP + 0x760]     ; 0051defc
    MOV EDX,dword ptr [ESP + 0x750]     ; 0051df03
    ADD EDI,0x4                         ; 0051df0a
    ADD EAX,0x4                         ; 0051df0d
    MOV dword ptr [ESP + 0x754],EDI     ; 0051df10
    MOV dword ptr [ESP + 0x760],EAX     ; 0051df17
    CMP EBX,EDX                         ; 0051df1e
    JL 0x0051de3b                       ; 0051df20
        ;   XREF to: 0051de3b (CONDITIONAL_JUMP)  ; LAB_0051de3b
    TEST ESI,ESI                        ; 0051df26
        ;   Label: LAB_0051df26
    JZ 0x0051df8b                       ; 0051df28
        ;   XREF to: 0051df8b (CONDITIONAL_JUMP)  ; LAB_0051df8b
    MOV EDX,dword ptr [ESP + 0x75c]     ; 0051df2a
    MOV ECX,dword ptr [ESP + 0x74c]     ; 0051df31
    SUB EDX,0x2c                        ; 0051df38
    IMUL EDX,ECX                        ; 0051df3b
    MOV ECX,0x1e0                       ; 0051df3e
    MOV EAX,EDX                         ; 0051df43
    SAR EDX,0x1f                        ; 0051df45
    IDIV ECX                            ; 0051df48
    MOV EBX,dword ptr [ESP + 0x75c]     ; 0051df4a
    SUB EBX,EAX                         ; 0051df51
    CMP EBX,0x2c                        ; 0051df53
    JGE 0x0051df5d                      ; 0051df56
        ;   XREF to: 0051df5d (CONDITIONAL_JUMP)  ; LAB_0051df5d
    MOV EBX,0x2c                        ; 0051df58
    MOV EDI,dword ptr [ESP + 0x75c]     ; 0051df5d
        ;   Label: LAB_0051df5d
    CMP EBX,EDI                         ; 0051df64
    JLE 0x0051df6a                      ; 0051df66
        ;   XREF to: 0051df6a (CONDITIONAL_JUMP)  ; LAB_0051df6a
    MOV EBX,EDI                         ; 0051df68
    MOV EAX,[0x00678a60]                ; 0051df6a | g_CEditorToolsPtr
        ;   Label: LAB_0051df6a
    PUSH EAX                            ; 0051df6f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0051df70
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0051df75
    PUSH EBX                            ; 0051df78
    PUSH 0xa                            ; 0051df79
    PUSH EBX                            ; 0051df7b
    PUSH 0x0                            ; 0051df7c
    MOV [0x02d02570],EAX                ; 0051df7e | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0051df83
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0051df88
    LEA EAX,[ESP + 0x600]               ; 0051df8b
        ;   Label: LAB_0051df8b
    PUSH EAX                            ; 0051df92
    CALL shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0 ; 0051df93
        ;   XREF to: 0051e6b0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051df98
    MOV EDX,dword ptr [EBP + 0x24]      ; 0051df9b
    CMP EDX,0x1                         ; 0051df9e
    JNC 0x0051e57b                      ; 0051dfa1
        ;   XREF to: 0051e57b (CONDITIONAL_JUMP)  ; LAB_0051e57b
    TEST EDX,EDX                        ; 0051dfa7
    JNZ 0x0051dfbc                      ; 0051dfa9
        ;   XREF to: 0051dfbc (CONDITIONAL_JUMP)  ; LAB_0051dfbc
    PUSH EDX                            ; 0051dfab
    LEA EAX,[ESP + 0x604]               ; 0051dfac
    PUSH EAX                            ; 0051dfb3
    CALL shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 ; 0051dfb4
        ;   XREF to: 0051e990 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh * this_ptr, int use_palette_coloring)
    ADD ESP,0x8                         ; 0051dfb9
        ;   Label: LAB_0051dfb9
    LEA EAX,[ESP + 0x600]               ; 0051dfbc
        ;   Label: LAB_0051dfbc
    PUSH EAX                            ; 0051dfc3
    CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0 ; 0051dfc4
        ;   XREF to: 005164d0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051dfc9
    PUSH EAX                            ; 0051dfcc
    MOV EAX,dword ptr [ESP + 0x750]     ; 0051dfcd
    PUSH EAX                            ; 0051dfd4
    PUSH 0x638455                       ; 0051dfd5 | = "Current: %d pixelHeight, %d faces"
    LEA EAX,[ESP + 0x544]               ; 0051dfda
    PUSH EAX                            ; 0051dfe1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051dfe2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0051dfe7 | g_WindowHeight
    ADD ESP,0x10                        ; 0051dfec
    SUB EAX,0xb                         ; 0051dfef
    PUSH EAX                            ; 0051dff2
    PUSH 0x0                            ; 0051dff3
    LEA EAX,[ESP + 0x540]               ; 0051dff5
    PUSH EAX                            ; 0051dffc
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051dffd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051e002
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0051e005
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EDX,dword ptr [0x0067b654]      ; 0051e00a | g_CGamePtr
    PUSH EDX                            ; 0051e010 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0051e011
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051e016
    MOV EAX,[0x0067cf44]                ; 0051e019 | g_CKeysPtr
    PUSH 0x31                           ; 0051e01e
    MOV EDX,dword ptr [EAX]             ; 0051e020 | g_CKeysInstance
    PUSH EAX                            ; 0051e022 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e023
    ADD ESP,0x8                         ; 0051e026
    TEST EAX,EAX                        ; 0051e029
    JZ 0x0051e079                       ; 0051e02b
        ;   XREF to: 0051e079 (CONDITIONAL_JUMP)  ; LAB_0051e079
    MOV EAX,dword ptr [ESP + 0x750]     ; 0051e02d
    MOV ECX,dword ptr [EBP + 0x20]      ; 0051e034
    CMP EAX,ECX                         ; 0051e037
    JGE 0x0051e587                      ; 0051e039
        ;   XREF to: 0051e587 (CONDITIONAL_JUMP)  ; LAB_0051e587
    MOV ESI,EAX                         ; 0051e03f
    LEA EDX,[EAX*0x4 + 0x0]             ; 0051e041
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0051e048
    INC EAX                             ; 0051e04b
    ADD EDX,ECX                         ; 0051e04c
    MOV dword ptr [ESP + 0x750],EAX     ; 0051e04e
    MOV EAX,dword ptr [ESP + 0x608]     ; 0051e055
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051e05c
    MOV dword ptr [EDX],EAX             ; 0051e05f
    MOV EAX,dword ptr [ESP + 0x74c]     ; 0051e061
    MOV dword ptr [ECX + ESI*0x4],EAX   ; 0051e068
    MOV EAX,dword ptr [ESP + 0x6dc]     ; 0051e06b
    MOV dword ptr [ESP + ESI*0x4 + 0x3a8],EAX ; 0051e072
    TEST ESI,ESI                        ; 0051e079
        ;   Label: LAB_0051e079
    JLE 0x0051e150                      ; 0051e07b
        ;   XREF to: 0051e150 (CONDITIONAL_JUMP)  ; LAB_0051e150
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0051e081
    LEA EDX,[ESI*0x4 + 0x0]             ; 0051e084
    ADD EDX,EBX                         ; 0051e08b
    MOV EAX,dword ptr [EDX]             ; 0051e08d
    MOV EDX,EAX                         ; 0051e08f
    MOV ECX,0x14                        ; 0051e091
    SAR EDX,0x1f                        ; 0051e096
    IDIV ECX                            ; 0051e099
    PUSH 0x2a                           ; 0051e09b
    MOV EBX,EAX                         ; 0051e09d
    MOV EAX,[0x0067cf44]                ; 0051e09f | g_CKeysPtr
    PUSH EAX                            ; 0051e0a4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e0a5 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051e0a7
    ADD ESP,0x8                         ; 0051e0a9
    TEST EAX,EAX                        ; 0051e0ac
    JZ 0x0051e0b3                       ; 0051e0ae
        ;   XREF to: 0051e0b3 (CONDITIONAL_JUMP)  ; LAB_0051e0b3
    LEA EBX,[EBX + EBX*0x2]             ; 0051e0b0
    PUSH 0x38                           ; 0051e0b3
        ;   Label: LAB_0051e0b3
    MOV EAX,[0x0067cf44]                ; 0051e0b5 | g_CKeysPtr
    PUSH EAX                            ; 0051e0ba | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e0bb | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051e0bd
    ADD ESP,0x8                         ; 0051e0bf
    TEST EAX,EAX                        ; 0051e0c2
    JZ 0x0051e5a1                       ; 0051e0c4
        ;   XREF to: 0051e5a1 (CONDITIONAL_JUMP)  ; LAB_0051e5a1
    MOV EBX,0x2                         ; 0051e0ca
        ;   Label: LAB_0051e0ca
    PUSH 0x4b                           ; 0051e0cf
        ;   Label: LAB_0051e0cf
    MOV EAX,[0x0067cf44]                ; 0051e0d1 | g_CKeysPtr
    PUSH EAX                            ; 0051e0d6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e0d7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e0d9
    ADD ESP,0x8                         ; 0051e0dc
    TEST EAX,EAX                        ; 0051e0df
    JZ 0x0051e0f1                       ; 0051e0e1
        ;   XREF to: 0051e0f1 (CONDITIONAL_JUMP)  ; LAB_0051e0f1
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0051e0e3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051e0e6
    ADD EAX,EDI                         ; 0051e0ed
    SUB dword ptr [EAX],EBX             ; 0051e0ef
    PUSH 0x4d                           ; 0051e0f1
        ;   Label: LAB_0051e0f1
    MOV EAX,[0x0067cf44]                ; 0051e0f3 | g_CKeysPtr
    PUSH EAX                            ; 0051e0f8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e0f9 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e0fb
    ADD ESP,0x8                         ; 0051e0fe
    TEST EAX,EAX                        ; 0051e101
    JZ 0x0051e113                       ; 0051e103
        ;   XREF to: 0051e113 (CONDITIONAL_JUMP)  ; LAB_0051e113
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0051e105
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051e108
    ADD EAX,ECX                         ; 0051e10f
    ADD dword ptr [EAX],EBX             ; 0051e111
    PUSH 0x21                           ; 0051e113
        ;   Label: LAB_0051e113
    MOV EAX,[0x0067cf44]                ; 0051e115 | g_CKeysPtr
    PUSH EAX                            ; 0051e11a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e11b | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e11d
    ADD ESP,0x8                         ; 0051e120
    TEST EAX,EAX                        ; 0051e123
    JZ 0x0051e150                       ; 0051e125
        ;   XREF to: 0051e150 (CONDITIONAL_JUMP)  ; LAB_0051e150
    PUSH 0x1                            ; 0051e127
    PUSH 0x0                            ; 0051e129
    PUSH 0x0                            ; 0051e12b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0051e12d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051e130
    PUSH 0x0                            ; 0051e137
    ADD EAX,EDX                         ; 0051e139
    PUSH EAX                            ; 0051e13b
    PUSH 0x638495                       ; 0051e13c | = "Enter face count"
    MOV ECX,dword ptr [0x00678a60]      ; 0051e141 | g_CEditorToolsPtr
    PUSH ECX                            ; 0051e147 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 0051e148
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0051e14d
    PUSH 0x20                           ; 0051e150
        ;   Label: LAB_0051e150
    MOV EAX,[0x0067cf44]                ; 0051e152 | g_CKeysPtr
    PUSH EAX                            ; 0051e157 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e158 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e15a
    ADD ESP,0x8                         ; 0051e15d
    TEST EAX,EAX                        ; 0051e160
    JZ 0x0051e224                       ; 0051e162
        ;   XREF to: 0051e224 (CONDITIONAL_JUMP)  ; LAB_0051e224
    TEST ESI,ESI                        ; 0051e168
    JLE 0x0051e224                      ; 0051e16a
        ;   XREF to: 0051e224 (CONDITIONAL_JUMP)  ; LAB_0051e224
    PUSH ESI                            ; 0051e170
    PUSH 0x6384a6                       ; 0051e171 | = "Delete LOD %d?"
    LEA EAX,[ESP + 0x540]               ; 0051e176
    PUSH EAX                            ; 0051e17d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051e17e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0051e183
    LEA EAX,[ESP + 0x538]               ; 0051e186
    PUSH EAX                            ; 0051e18d
    MOV EBX,dword ptr [0x00678a60]      ; 0051e18e | g_CEditorToolsPtr
    PUSH EBX                            ; 0051e194 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060 ; 0051e195
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0051e19a
    TEST EAX,EAX                        ; 0051e19d
    JZ 0x0051e224                       ; 0051e19f
        ;   XREF to: 0051e224 (CONDITIONAL_JUMP)  ; LAB_0051e224
    MOV EDI,dword ptr [ESP + 0x750]     ; 0051e1a5
    DEC EDI                             ; 0051e1ac
    MOV dword ptr [ESP + 0x750],EDI     ; 0051e1ad
    SUB EDI,ESI                         ; 0051e1b4
    LEA EBX,[ESI*0x4 + 0x0]             ; 0051e1b6
    LEA EAX,[EBX + 0x4]                 ; 0051e1bd
    SHL EDI,0x2                         ; 0051e1c0
    MOV dword ptr [ESP + 0x76c],EAX     ; 0051e1c3
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051e1ca
    MOV EDX,dword ptr [ESP + 0x76c]     ; 0051e1cd
    PUSH EDI                            ; 0051e1d4
    ADD EAX,EDX                         ; 0051e1d5
    PUSH EAX                            ; 0051e1d7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051e1d8
    ADD EAX,EBX                         ; 0051e1db
    PUSH EAX                            ; 0051e1dd
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0051e1de
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0051e1e3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051e1e6
    MOV ECX,dword ptr [ESP + 0x76c]     ; 0051e1e9
    PUSH EDI                            ; 0051e1f0
    ADD EAX,ECX                         ; 0051e1f1
    PUSH EAX                            ; 0051e1f3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051e1f4
    ADD EAX,EBX                         ; 0051e1f7
    PUSH EAX                            ; 0051e1f9
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0051e1fa
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0051e1ff
    LEA EAX,[ESP + 0x3a8]               ; 0051e202
    PUSH EDI                            ; 0051e209
    ADD EAX,dword ptr [ESP + 0x770]     ; 0051e20a
    PUSH EAX                            ; 0051e211
    LEA EAX,[ESP + 0x3b0]               ; 0051e212
    ADD EAX,EBX                         ; 0051e219
    PUSH EAX                            ; 0051e21b
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0051e21c
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0051e221
    XOR EAX,EAX                         ; 0051e224
        ;   Label: LAB_0051e224
    MOV EDX,dword ptr [ESP + 0x750]     ; 0051e226
    MOV dword ptr [ESP + 0x758],EAX     ; 0051e22d
    TEST EDX,EDX                        ; 0051e234
    JLE 0x0051e338                      ; 0051e236
        ;   XREF to: 0051e338 (CONDITIONAL_JUMP)  ; LAB_0051e338
    LEA EAX,[EDX + -0x1]                ; 0051e23c
    MOV dword ptr [ESP + 0x764],EAX     ; 0051e23f
    MOV EDX,dword ptr [ESP + 0x764]     ; 0051e246
        ;   Label: LAB_0051e246
    MOV EAX,0x1                         ; 0051e24d
    CMP EDX,EAX                         ; 0051e252
    JLE 0x0051e31a                      ; 0051e254
        ;   XREF to: 0051e31a (CONDITIONAL_JUMP)  ; LAB_0051e31a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0051e25a
    ADD EDX,0x4                         ; 0051e25d
    LEA ECX,[EAX*0x4 + 0x0]             ; 0051e260
        ;   Label: LAB_0051e260
    MOV EBX,dword ptr [EDX + 0x4]       ; 0051e267
    MOV dword ptr [ESP + 0x768],ECX     ; 0051e26a
    CMP EBX,dword ptr [EDX]             ; 0051e271
    JLE 0x0051e307                      ; 0051e273
        ;   XREF to: 0051e307 (CONDITIONAL_JUMP)  ; LAB_0051e307
    MOV ECX,dword ptr [ESP + 0x768]     ; 0051e279
    MOV EDI,dword ptr [EDX]             ; 0051e280
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051e282
    MOV dword ptr [ESP + 0x740],EDI     ; 0051e285
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x4] ; 0051e28c
    ADD ECX,0x4                         ; 0051e290
    MOV dword ptr [EDX],EDI             ; 0051e293
    MOV EDI,dword ptr [ESP + 0x740]     ; 0051e295
    MOV dword ptr [ECX + EBX*0x1],EDI   ; 0051e29c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0051e29f
    ADD EBX,ECX                         ; 0051e2a2
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0051e2a4
    MOV dword ptr [ESP + 0x76c],EBX     ; 0051e2a7
    ADD EDI,dword ptr [ESP + 0x768]     ; 0051e2ae
    MOV EBX,dword ptr [EDI]             ; 0051e2b5
    MOV dword ptr [ESP + 0x744],EBX     ; 0051e2b7
    MOV EBX,dword ptr [ESP + 0x76c]     ; 0051e2be
    MOV EBX,dword ptr [EBX]             ; 0051e2c5
    MOV dword ptr [EDI],EBX             ; 0051e2c7
    MOV EDI,dword ptr [ESP + 0x76c]     ; 0051e2c9
    MOV EBX,dword ptr [ESP + 0x744]     ; 0051e2d0
    MOV dword ptr [EDI],EBX             ; 0051e2d7
    LEA EBX,[ESP + 0x3a8]               ; 0051e2d9
    MOV EDI,dword ptr [ESP + 0x768]     ; 0051e2e0
    ADD EBX,ECX                         ; 0051e2e7
    LEA ECX,[ESP + 0x3a8]               ; 0051e2e9
    ADD ECX,EDI                         ; 0051e2f0
    FLD float ptr [EBX]                 ; 0051e2f2
    MOV EDI,dword ptr [ECX]             ; 0051e2f4
    FSTP float ptr [ECX]                ; 0051e2f6
    LEA ECX,[EAX + 0x1]                 ; 0051e2f8
    MOV dword ptr [EBX],EDI             ; 0051e2fb
    CMP ESI,EAX                         ; 0051e2fd
    JNZ 0x0051e5af                      ; 0051e2ff
        ;   XREF to: 0051e5af (CONDITIONAL_JUMP)  ; LAB_0051e5af
    MOV ESI,ECX                         ; 0051e305
    MOV ECX,dword ptr [ESP + 0x764]     ; 0051e307
        ;   Label: LAB_0051e307
    INC EAX                             ; 0051e30e
    ADD EDX,0x4                         ; 0051e30f
    CMP EAX,ECX                         ; 0051e312
    JL 0x0051e260                       ; 0051e314
        ;   XREF to: 0051e260 (CONDITIONAL_JUMP)  ; LAB_0051e260
    MOV ECX,dword ptr [ESP + 0x758]     ; 0051e31a
        ;   Label: LAB_0051e31a
    INC ECX                             ; 0051e321
    MOV EBX,dword ptr [ESP + 0x750]     ; 0051e322
    MOV dword ptr [ESP + 0x758],ECX     ; 0051e329
    CMP ECX,EBX                         ; 0051e330
    JL 0x0051e246                       ; 0051e332
        ;   XREF to: 0051e246 (CONDITIONAL_JUMP)  ; LAB_0051e246
    PUSH 0xf                            ; 0051e338
        ;   Label: LAB_0051e338
    MOV EAX,[0x0067cf44]                ; 0051e33a | g_CKeysPtr
    PUSH EAX                            ; 0051e33f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e340 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e342
    ADD ESP,0x8                         ; 0051e345
    TEST EAX,EAX                        ; 0051e348
    JZ 0x0051e377                       ; 0051e34a
        ;   XREF to: 0051e377 (CONDITIONAL_JUMP)  ; LAB_0051e377
    PUSH 0x2a                           ; 0051e34c
    MOV EAX,[0x0067cf44]                ; 0051e34e | g_CKeysPtr
    PUSH EAX                            ; 0051e353 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e354 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051e356
    ADD ESP,0x8                         ; 0051e358
    TEST EAX,EAX                        ; 0051e35b
    JZ 0x0051e5be                       ; 0051e35d
        ;   XREF to: 0051e5be (CONDITIONAL_JUMP)  ; LAB_0051e5be
    DEC ESI                             ; 0051e363
    TEST ESI,ESI                        ; 0051e364
        ;   Label: LAB_0051e364
    JL 0x0051e5c4                       ; 0051e366
        ;   XREF to: 0051e5c4 (CONDITIONAL_JUMP)  ; LAB_0051e5c4
    CMP ESI,dword ptr [ESP + 0x750]     ; 0051e36c
        ;   Label: LAB_0051e36c
    JL 0x0051e377                       ; 0051e373
        ;   XREF to: 0051e377 (CONDITIONAL_JUMP)  ; LAB_0051e377
    XOR ESI,ESI                         ; 0051e375
    PUSH 0x14                           ; 0051e377
        ;   Label: LAB_0051e377
    MOV EAX,[0x0067cf44]                ; 0051e379 | g_CKeysPtr
    PUSH EAX                            ; 0051e37e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e37f | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e381
    ADD ESP,0x8                         ; 0051e384
    TEST EAX,EAX                        ; 0051e387
    JZ 0x0051e398                       ; 0051e389
        ;   XREF to: 0051e398 (CONDITIONAL_JUMP)  ; LAB_0051e398
    TEST ESI,ESI                        ; 0051e38b
    JL 0x0051e5d1                       ; 0051e38d
        ;   XREF to: 0051e5d1 (CONDITIONAL_JUMP)  ; LAB_0051e5d1
    MOV ESI,0xffffffff                  ; 0051e393
    PUSH 0x1                            ; 0051e398
        ;   Label: LAB_0051e398
    MOV EAX,[0x0067cf44]                ; 0051e39a | g_CKeysPtr
    PUSH EAX                            ; 0051e39f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051e3a0 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051e3a2
    ADD ESP,0x8                         ; 0051e3a5
    TEST EAX,EAX                        ; 0051e3a8
    JNZ 0x0051e5d8                      ; 0051e3aa
        ;   XREF to: 0051e5d8 (CONDITIONAL_JUMP)  ; LAB_0051e5d8
    TEST ESI,ESI                        ; 0051e3b0
        ;   Label: LAB_0051e3b0
    JL 0x0051e3c2                       ; 0051e3b2
        ;   XREF to: 0051e3c2 (CONDITIONAL_JUMP)  ; LAB_0051e3c2
    MOV EAX,dword ptr [ESP + ESI*0x4 + 0x3a8] ; 0051e3b4
    MOV dword ptr [ESP + 0x6dc],EAX     ; 0051e3bb
    PUSH 0xf                            ; 0051e3c2
        ;   Label: LAB_0051e3c2
    LEA EAX,[ESP + 0x6b4]               ; 0051e3c4
    PUSH EAX                            ; 0051e3cb
    CALL shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670 ; 0051e3cc
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0051e3d1
    JMP 0x0051db8b                      ; 0051e3d4
        ;   XREF to: 0051db8b (UNCONDITIONAL_JUMP)  ; LAB_0051db8b
    MOV ECX,0x6382e0                    ; 0051e3d9 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051e3d9
    MOV EBX,0x155a                      ; 0051e3de
    PUSH 0x6382f5                       ; 0051e3e3 | = "Can't call LodMesh::chooseLodsInterac..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0051e3e8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0051e3ee | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051e3f4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051e3f9
    JMP 0x0051d9ac                      ; 0051e3fc
        ;   XREF to: 0051d9ac (UNCONDITIONAL_JUMP)  ; LAB_0051d9ac
    MOV EAX,dword ptr [ESP + 0x704]     ; 0051e401
        ;   Label: LAB_0051e401
    MOV dword ptr [ESP + 0x6c8],EAX     ; 0051e408
    MOV EAX,dword ptr [ESP + 0x708]     ; 0051e40f
    MOV dword ptr [ESP + 0x6cc],EAX     ; 0051e416
    MOV EAX,dword ptr [ESP + 0x70c]     ; 0051e41d
    MOV dword ptr [ESP + 0x6d0],EAX     ; 0051e424
    JMP 0x0051db17                      ; 0051e42b
        ;   XREF to: 0051db17 (UNCONDITIONAL_JUMP)  ; LAB_0051db17
    MOV EDX,dword ptr [ESP + 0x750]     ; 0051e430
        ;   Label: LAB_0051e430
    DEC EDX                             ; 0051e437
    TEST EDX,EDX                        ; 0051e438
    JLE 0x0051e453                      ; 0051e43a
        ;   XREF to: 0051e453 (CONDITIONAL_JUMP)  ; LAB_0051e453
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051e43c
    LEA ECX,[EDX*0x4 + 0x0]             ; 0051e43f
    MOV EBX,dword ptr [ESP + 0x74c]     ; 0051e446
    ADD ECX,EAX                         ; 0051e44d
    CMP EBX,dword ptr [ECX]             ; 0051e44f
        ;   Label: LAB_0051e44f
    JGE 0x0051e45e                      ; 0051e451
        ;   XREF to: 0051e45e (CONDITIONAL_JUMP)  ; LAB_0051e45e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051e453
        ;   Label: LAB_0051e453
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0051e456
    JMP 0x0051dd2b                      ; 0051e459
        ;   XREF to: 0051dd2b (UNCONDITIONAL_JUMP)  ; LAB_0051dd2b
    DEC EDX                             ; 0051e45e
        ;   Label: LAB_0051e45e
    SUB ECX,0x4                         ; 0051e45f
    TEST EDX,EDX                        ; 0051e462
    JG 0x0051e44f                       ; 0051e464
        ;   XREF to: 0051e44f (CONDITIONAL_JUMP)  ; LAB_0051e44f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051e466
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0051e469
    JMP 0x0051dd2b                      ; 0051e46c
        ;   XREF to: 0051dd2b (UNCONDITIONAL_JUMP)  ; LAB_0051dd2b
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0051e471
        ;   Label: LAB_0051e471
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051e474
    ADD EAX,EDI                         ; 0051e47b
    MOV EAX,dword ptr [EAX]             ; 0051e47d
    JMP 0x0051dd2b                      ; 0051e47f
        ;   XREF to: 0051dd2b (UNCONDITIONAL_JUMP)  ; LAB_0051dd2b
    CMP EAX,EDI                         ; 0051e484
        ;   Label: LAB_0051e484
    JL 0x0051dd3d                       ; 0051e486
        ;   XREF to: 0051dd3d (CONDITIONAL_JUMP)  ; LAB_0051dd3d
    JMP 0x0051dd7c                      ; 0051e48c
        ;   XREF to: 0051dd7c (UNCONDITIONAL_JUMP)  ; LAB_0051dd7c
    PUSH 0x0                            ; 0051e491
        ;   Label: LAB_0051e491
    PUSH 0x0                            ; 0051e493
    PUSH 0x63833d                       ; 0051e495 | = "TEST MODE: Adjust view to test LODs."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051e49a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051e49f
    PUSH 0xb                            ; 0051e4a2
    PUSH 0x0                            ; 0051e4a4
    PUSH 0x638362                       ; 0051e4a6 | = "Press N to create a new LOD at this d..."
    JMP 0x0051ddbb                      ; 0051e4ab
        ;   XREF to: 0051ddbb (UNCONDITIONAL_JUMP)  ; LAB_0051ddbb
    MOV EAX,dword ptr [ESP + 0x750]     ; 0051e4b0
        ;   Label: LAB_0051e4b0
    PUSH EAX                            ; 0051e4b7
    PUSH ESI                            ; 0051e4b8
    PUSH 0x6383ba                       ; 0051e4b9 | = "Editing LOD %d of %d."
    LEA EAX,[ESP + 0x544]               ; 0051e4be
    PUSH EAX                            ; 0051e4c5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051e4c6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0051e4cb
    PUSH 0x0                            ; 0051e4ce
    PUSH 0x0                            ; 0051e4d0
    LEA EAX,[ESP + 0x540]               ; 0051e4d2
    PUSH EAX                            ; 0051e4d9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051e4da
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051e4df
    PUSH 0xb                            ; 0051e4e2
    PUSH 0x0                            ; 0051e4e4
    PUSH 0x6383d0                       ; 0051e4e6 | = "Use LEFT/RIGHT to adjust face count."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051e4eb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051e4f0
    PUSH 0x16                           ; 0051e4f3
    PUSH 0x0                            ; 0051e4f5
    PUSH 0x6383f5                       ; 0051e4f7 | = "Press T to go to test mode."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051e4fc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051e501
    PUSH 0x21                           ; 0051e504
    PUSH 0x0                            ; 0051e506
    PUSH 0x638411                       ; 0051e508 | = "Press TAB/SHIFT-TAB for prev/next LOD."
    JMP 0x0051ddbb                      ; 0051e50d
        ;   XREF to: 0051ddbb (UNCONDITIONAL_JUMP)  ; LAB_0051ddbb
    MOV EAX,dword ptr [ESP + 0x760]     ; 0051e512
        ;   Label: LAB_0051e512
    MOV ECX,dword ptr [EAX]             ; 0051e519
    PUSH ECX                            ; 0051e51b
    PUSH EBX                            ; 0051e51c
    PUSH 0x638449                       ; 0051e51d | = "LOD%d: F=%d"
    LEA EAX,[ESP + 0x544]               ; 0051e522
    PUSH EAX                            ; 0051e529
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051e52a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0051e52f
    JMP 0x0051de70                      ; 0051e532
        ;   XREF to: 0051de70 (UNCONDITIONAL_JUMP)  ; LAB_0051de70
    MOV EAX,dword ptr [ESP + 0x760]     ; 0051e537
        ;   Label: LAB_0051e537
    MOV EDX,dword ptr [ESP + 0x608]     ; 0051e53e
    CMP EDX,dword ptr [EAX]             ; 0051e545
    JNZ 0x0051e558                      ; 0051e547
        ;   XREF to: 0051e558 (CONDITIONAL_JUMP)  ; LAB_0051e558
    MOV dword ptr [0x02d02570],0xfa     ; 0051e549 | g_ActiveRenderColor
    JMP 0x0051ded3                      ; 0051e553
        ;   XREF to: 0051ded3 (UNCONDITIONAL_JUMP)  ; LAB_0051ded3
    MOV dword ptr [0x02d02570],0xff     ; 0051e558 | g_ActiveRenderColor
        ;   Label: LAB_0051e558
    JMP 0x0051ded3                      ; 0051e562
        ;   XREF to: 0051ded3 (UNCONDITIONAL_JUMP)  ; LAB_0051ded3
    PUSH 0x0                            ; 0051e567
        ;   Label: LAB_0051e567
    LEA EAX,[ESP + 0x604]               ; 0051e569
    PUSH EAX                            ; 0051e570
    CALL shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 ; 0051e571
        ;   XREF to: 0051ead0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh * this_ptr, int enable_texture_lookup)
    JMP 0x0051dfb9                      ; 0051e576
        ;   XREF to: 0051dfb9 (UNCONDITIONAL_JUMP)  ; LAB_0051dfb9
    JBE 0x0051e567                      ; 0051e57b
        ;   XREF to: 0051e567 (CONDITIONAL_JUMP)  ; LAB_0051e567
        ;   Label: LAB_0051e57b
    CMP EDX,0x2                         ; 0051e57d
    JZ 0x0051e567                       ; 0051e580
        ;   XREF to: 0051e567 (CONDITIONAL_JUMP)  ; LAB_0051e567
    JMP 0x0051dfbc                      ; 0051e582
        ;   XREF to: 0051dfbc (UNCONDITIONAL_JUMP)  ; LAB_0051dfbc
    PUSH ECX                            ; 0051e587
        ;   Label: LAB_0051e587
    PUSH 0x638477                       ; 0051e588 | = "Can't have more than %d LODs."
    MOV EDI,dword ptr [0x00678a60]      ; 0051e58d | g_CEditorToolsPtr
    PUSH EDI                            ; 0051e593 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0051e594
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0051e599
    JMP 0x0051e079                      ; 0051e59c
        ;   XREF to: 0051e079 (UNCONDITIONAL_JUMP)  ; LAB_0051e079
    CMP EBX,0x2                         ; 0051e5a1
        ;   Label: LAB_0051e5a1
    JL 0x0051e0ca                       ; 0051e5a4
        ;   XREF to: 0051e0ca (CONDITIONAL_JUMP)  ; LAB_0051e0ca
    JMP 0x0051e0cf                      ; 0051e5aa
        ;   XREF to: 0051e0cf (UNCONDITIONAL_JUMP)  ; LAB_0051e0cf
    CMP ESI,ECX                         ; 0051e5af
        ;   Label: LAB_0051e5af
    JNZ 0x0051e307                      ; 0051e5b1
        ;   XREF to: 0051e307 (CONDITIONAL_JUMP)  ; LAB_0051e307
    MOV ESI,EAX                         ; 0051e5b7
    JMP 0x0051e307                      ; 0051e5b9
        ;   XREF to: 0051e307 (UNCONDITIONAL_JUMP)  ; LAB_0051e307
    INC ESI                             ; 0051e5be
        ;   Label: LAB_0051e5be
    JMP 0x0051e364                      ; 0051e5bf
        ;   XREF to: 0051e364 (UNCONDITIONAL_JUMP)  ; LAB_0051e364
    MOV ESI,dword ptr [ESP + 0x750]     ; 0051e5c4
        ;   Label: LAB_0051e5c4
    DEC ESI                             ; 0051e5cb
    JMP 0x0051e36c                      ; 0051e5cc
        ;   XREF to: 0051e36c (UNCONDITIONAL_JUMP)  ; LAB_0051e36c
    XOR ESI,ESI                         ; 0051e5d1
        ;   Label: LAB_0051e5d1
    JMP 0x0051e398                      ; 0051e5d3
        ;   XREF to: 0051e398 (UNCONDITIONAL_JUMP)  ; LAB_0051e398
    MOV EAX,ESP                         ; 0051e5d8
        ;   Label: LAB_0051e5d8
    PUSH EAX                            ; 0051e5da
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0051e5db
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0051e5e0
    PUSH 0x6384b5                       ; 0051e5e3 | = "Accept LOD settings."
    LEA EAX,[ESP + 0x4]                 ; 0051e5e8
    PUSH EAX                            ; 0051e5ec
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0051e5ed
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0051e5f2
    PUSH 0x6384ca                       ; 0051e5f5 | = "Cancel LOD selection."
    LEA EAX,[ESP + 0x4]                 ; 0051e5fa
    PUSH EAX                            ; 0051e5fe
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0051e5ff
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0051e604
    PUSH 0x6384e0                       ; 0051e607 | = "Oops, go back to editing the LODs."
    LEA EAX,[ESP + 0x4]                 ; 0051e60c
    PUSH EAX                            ; 0051e610
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0051e611
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0051e616
    PUSH 0x0                            ; 0051e619
    PUSH -0x1                           ; 0051e61b
    PUSH 0x638503                       ; 0051e61d | = "Accept or Cancel?"
    LEA EAX,[ESP + 0xc]                 ; 0051e622
    PUSH EAX                            ; 0051e626
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0051e627
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0051e62c
    TEST EAX,EAX                        ; 0051e62f
    JZ 0x0051e64c                       ; 0051e631
        ;   XREF to: 0051e64c (CONDITIONAL_JUMP)  ; LAB_0051e64c
    CMP EAX,0x1                         ; 0051e633
    JZ 0x0051e67c                       ; 0051e636
        ;   XREF to: 0051e67c (CONDITIONAL_JUMP)  ; LAB_0051e67c
    PUSH 0x0                            ; 0051e638
    LEA EAX,[ESP + 0x4]                 ; 0051e63a
    PUSH EAX                            ; 0051e63e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0051e63f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051e644
    JMP 0x0051e3b0                      ; 0051e647
        ;   XREF to: 0051e3b0 (UNCONDITIONAL_JUMP)  ; LAB_0051e3b0
    PUSH EAX                            ; 0051e64c
        ;   Label: LAB_0051e64c
    LEA EAX,[ESP + 0x4]                 ; 0051e64d
    PUSH EAX                            ; 0051e651
    MOV ESI,dword ptr [ESP + 0x758]     ; 0051e652
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0051e659
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051e65e
    PUSH 0x0                            ; 0051e661
    LEA EAX,[ESP + 0x604]               ; 0051e663
    PUSH EAX                            ; 0051e66a
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0051e66b
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051e670
    MOV EAX,ESI                         ; 0051e673
    MOV ESP,EBP                         ; 0051e675
    POP EBP                             ; 0051e677
    POP EDI                             ; 0051e678
    POP ESI                             ; 0051e679
    POP EBX                             ; 0051e67a
    RET                                 ; 0051e67b
    PUSH 0x0                            ; 0051e67c
        ;   Label: LAB_0051e67c
    LEA EAX,[ESP + 0x4]                 ; 0051e67e
    PUSH EAX                            ; 0051e682
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0051e683
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051e688
    PUSH 0x0                            ; 0051e68b
    LEA EAX,[ESP + 0x604]               ; 0051e68d
    PUSH EAX                            ; 0051e694
    MOV ESI,0xffffffff                  ; 0051e695
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0051e69a
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051e69f
    MOV EAX,ESI                         ; 0051e6a2
    MOV ESP,EBP                         ; 0051e6a4
    POP EBP                             ; 0051e6a6
    POP EDI                             ; 0051e6a7
    POP ESI                             ; 0051e6a8
    POP EBX                             ; 0051e6a9
    RET                                 ; 0051e6aa

