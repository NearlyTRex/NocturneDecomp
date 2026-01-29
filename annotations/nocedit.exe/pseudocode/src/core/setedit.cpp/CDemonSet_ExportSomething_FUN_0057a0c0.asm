; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_CDemonSet_ExportSomething_FUN_0057a0c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x214]:1  local_214
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584c2a
;
; Referenced Globals:
;   TerminatedCString s_lc_0064730f
;   TerminatedCString s_Exporting_lights_and_cam_00647312
;   TerminatedCString s_wt_00647335
;   TerminatedCString s_models_00647338
;   TerminatedCString s_core_setedit_cpp_0064733f
;   TerminatedCString s_Can_t_create_models_s_00647353
;   TerminatedCString s_version_0064736a
;   TerminatedCString s_s_1_00647376
;   TerminatedCString s_lightCount_cameraCount_00647379
;   TerminatedCString s_d_d_00647394
;   TerminatedCString s_light_list_0064739b
;   TerminatedCString s_camera_list_006473aa
;   TerminatedCString s_core_setedit_cpp_006473ba
;   TerminatedCString s_Exported_s_OK_006473ce
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
;   core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a0c0
        ;   Label: core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0
    PUSH ESI                            ; 0057a0c1
    PUSH EDI                            ; 0057a0c2
    PUSH EBP                            ; 0057a0c3
    SUB ESP,0x204                       ; 0057a0c4
    MOV EBP,dword ptr [ESP + 0x218]     ; 0057a0ca
    PUSH 0x0                            ; 0057a0d1
    LEA EAX,[ESP + 0x108]               ; 0057a0d3
    PUSH EAX                            ; 0057a0da
    PUSH 0x0                            ; 0057a0db
    PUSH 0x0                            ; 0057a0dd
    LEA EAX,[EBP + 0x14d0f0]            ; 0057a0df
    PUSH EAX                            ; 0057a0e5
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0057a0e6
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0057a0eb
    PUSH 0x64730f                       ; 0057a0ee | = "lc"
    LEA EAX,[ESP + 0x108]               ; 0057a0f3
    PUSH EAX                            ; 0057a0fa
    PUSH 0x0                            ; 0057a0fb
    PUSH 0x0                            ; 0057a0fd
    LEA EAX,[ESP + 0x10]                ; 0057a0ff
    PUSH EAX                            ; 0057a103
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0057a104
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0057a109
    MOV EAX,ESP                         ; 0057a10c
    PUSH EAX                            ; 0057a10e
    PUSH 0x647312                       ; 0057a10f | = "Exporting lights and cameras to %s"
    MOV EDX,dword ptr [0x00678a60]      ; 0057a114 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0057a11a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0057a11b
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0057a120
    PUSH 0x647335                       ; 0057a123 | = "wt"
    LEA EAX,[ESP + 0x4]                 ; 0057a128
    PUSH EAX                            ; 0057a12c
    PUSH 0x647338                       ; 0057a12d | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057a132
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057a137
    MOV EDI,EAX                         ; 0057a13a
    TEST EAX,EAX                        ; 0057a13c
    JZ 0x0057a245                       ; 0057a13e
        ;   XREF to: 0057a245 (CONDITIONAL_JUMP)  ; LAB_0057a245
    PUSH 0x64736a                       ; 0057a144 | = "// version\n"
        ;   Label: LAB_0057a144
    PUSH EDI                            ; 0057a149
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a14a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a14f
    PUSH 0x647376                       ; 0057a152 | = "1\n"
    PUSH EDI                            ; 0057a157
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a158
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a15d
    PUSH 0x647379                       ; 0057a160 | = "// lightCount,cameraCount\n"
    PUSH EDI                            ; 0057a165
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a166
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057a16b
    MOV ESI,dword ptr [EBP]             ; 0057a16e
    PUSH ESI                            ; 0057a171
    MOV EAX,dword ptr [EBP + 0x19a2c]   ; 0057a172
    PUSH EAX                            ; 0057a178
    PUSH 0x647394                       ; 0057a179 | = "%d,%d\n"
    PUSH EDI                            ; 0057a17e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a17f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0057a184
    PUSH 0x64739b                       ; 0057a187 | = "// light list\n"
    PUSH EDI                            ; 0057a18c
    XOR EBX,EBX                         ; 0057a18d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a18f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBP + 0x19a2c]   ; 0057a194
    ADD ESP,0x8                         ; 0057a19a
    TEST EDX,EDX                        ; 0057a19d
    JLE 0x0057a1d0                      ; 0057a19f
        ;   XREF to: 0057a1d0 (CONDITIONAL_JUMP)  ; LAB_0057a1d0
    LEA ESI,[EBP + 0x19a30]             ; 0057a1a1
    PUSH EDI                            ; 0057a1a7
        ;   Label: LAB_0057a1a7
    PUSH ESI                            ; 0057a1a8
    INC EBX                             ; 0057a1a9
    CALL core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850 ; 0057a1aa
        ;   XREF to: 00587850 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057a1af
    MOV ECX,dword ptr [EBP + 0x19a2c]   ; 0057a1b2
    ADD ESI,0x1898                      ; 0057a1b8
    CMP EBX,ECX                         ; 0057a1be
    JL 0x0057a1a7                       ; 0057a1c0
        ;   XREF to: 0057a1a7 (CONDITIONAL_JUMP)  ; LAB_0057a1a7
    LEA EAX,[EAX]                       ; 0057a1c2
    LEA EDX,[EDX]                       ; 0057a1c8
    MOV EAX,EAX                         ; 0057a1ce
    PUSH 0x6473aa                       ; 0057a1d0 | = "// camera list\n"
        ;   Label: LAB_0057a1d0
    PUSH EDI                            ; 0057a1d5
    XOR ESI,ESI                         ; 0057a1d6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0057a1d8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EBX,dword ptr [EBP]             ; 0057a1dd
    ADD ESP,0x8                         ; 0057a1e0
    TEST EBX,EBX                        ; 0057a1e3
    JLE 0x0057a210                      ; 0057a1e5
        ;   XREF to: 0057a210 (CONDITIONAL_JUMP)  ; LAB_0057a210
    LEA EBX,[EBP + 0x4]                 ; 0057a1e7
    PUSH EDI                            ; 0057a1ea
        ;   Label: LAB_0057a1ea
    PUSH EBX                            ; 0057a1eb
    INC ESI                             ; 0057a1ec
    CALL core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190 ; 0057a1ed
        ;   XREF to: 00586190 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0057a1f2
    MOV EAX,dword ptr [EBP]             ; 0057a1f5
    ADD EBX,0x1a4                       ; 0057a1f8
    CMP ESI,EAX                         ; 0057a1fe
    JL 0x0057a1ea                       ; 0057a200
        ;   XREF to: 0057a1ea (CONDITIONAL_JUMP)  ; LAB_0057a1ea
    LEA EAX,[EAX]                       ; 0057a202
    LEA EDX,[EDX]                       ; 0057a208
    MOV EAX,EAX                         ; 0057a20e
    PUSH 0x672                          ; 0057a210
        ;   Label: LAB_0057a210
    PUSH 0x6473ba                       ; 0057a215 | = "..\\core\\setedit.cpp"
    PUSH EDI                            ; 0057a21a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057a21b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057a220
    MOV EAX,ESP                         ; 0057a223
    PUSH EAX                            ; 0057a225
    PUSH 0x6473ce                       ; 0057a226 | = "Exported %s OK."
    MOV EDX,dword ptr [0x00678a60]      ; 0057a22b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0057a231 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0057a232
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0057a237
    ADD ESP,0x204                       ; 0057a23a
    POP EBP                             ; 0057a240
    POP EDI                             ; 0057a241
    POP ESI                             ; 0057a242
    POP EBX                             ; 0057a243
    RET                                 ; 0057a244
    MOV EAX,ESP                         ; 0057a245
        ;   Label: LAB_0057a245
    PUSH EAX                            ; 0057a247
    MOV ECX,0x64733f                    ; 0057a248 | = "..\\core\\setedit.cpp"
    MOV EBX,0x659                       ; 0057a24d
    PUSH 0x647353                       ; 0057a252 | = "Can't create models\\%s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0057a257 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0057a25d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057a263
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057a268
    JMP 0x0057a144                      ; 0057a26b
        ;   XREF to: 0057a144 (UNCONDITIONAL_JUMP)  ; LAB_0057a144

