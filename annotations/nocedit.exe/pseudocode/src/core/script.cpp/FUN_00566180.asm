; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00566180()
;
;
; XREF[1]:
;   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 at 0053d1ef
;
; Referenced Globals:
;   TerminatedCString s_wt_00643f5e
;   TerminatedCString s_world_00643f61
;   TerminatedCString s_Can_t_create_world_s_00643f67
;   TerminatedCString s_s_00643f7d
;   TerminatedCString s_core_script_cpp_00643f81
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   undefined4 DAT_0310fd10
;
; Called Functions:
;   core_script.cpp_FUN_00566800
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566180
        ;   Label: core_script.cpp_FUN_00566180
    PUSH ESI                            ; 00566181
    PUSH EDI                            ; 00566182
    PUSH EBP                            ; 00566183
    MOV EBP,dword ptr [ESP + 0x14]      ; 00566184
    MOV EBX,dword ptr [ESP + 0x18]      ; 00566188
    LEA ESI,[EBP + 0x38]                ; 0056618c
    PUSH ESI                            ; 0056618f
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00566190
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00566195
    CMP EAX,0x1                         ; 00566198
    JGE 0x005661a2                      ; 0056619b
        ;   XREF to: 005661a2 (CONDITIONAL_JUMP)  ; LAB_005661a2
    POP EBP                             ; 0056619d
    POP EDI                             ; 0056619e
    POP ESI                             ; 0056619f
    POP EBX                             ; 005661a0
    RET                                 ; 005661a1
    PUSH 0x643f5e                       ; 005661a2 | = "wt"
        ;   Label: LAB_005661a2
    PUSH EBX                            ; 005661a7
    PUSH 0x643f61                       ; 005661a8 | = "world"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005661ad
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005661b2
    MOV EDI,EAX                         ; 005661b5
    TEST EAX,EAX                        ; 005661b7
    JZ 0x005661f8                       ; 005661b9
        ;   XREF to: 005661f8 (CONDITIONAL_JUMP)  ; LAB_005661f8
    XOR EDX,EDX                         ; 005661bb
    XOR EBX,EBX                         ; 005661bd
    MOV dword ptr [0x0310fd10],EDX      ; 005661bf | DAT_0310fd10
    PUSH ESI                            ; 005661c5
        ;   Label: LAB_005661c5
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005661c6
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 005661cb
    CMP EBX,EAX                         ; 005661ce
    JGE 0x00566212                      ; 005661d0
        ;   XREF to: 00566212 (CONDITIONAL_JUMP)  ; LAB_00566212
    PUSH EBX                            ; 005661d2
    PUSH EBP                            ; 005661d3
    CALL core_script.cpp_FUN_00566800   ; 005661d4
        ;   XREF to: 00566800 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566800()
    ADD ESP,0x8                         ; 005661d9
    PUSH EBX                            ; 005661dc
    PUSH ESI                            ; 005661dd
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005661de
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005661e3
    PUSH EAX                            ; 005661e6
    PUSH 0x643f7d                       ; 005661e7 | = "%s\n"
    PUSH EDI                            ; 005661ec
    INC EBX                             ; 005661ed
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005661ee
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005661f3
    JMP 0x005661c5                      ; 005661f6
        ;   XREF to: 005661c5 (UNCONDITIONAL_JUMP)  ; LAB_005661c5
    PUSH EBX                            ; 005661f8
        ;   Label: LAB_005661f8
    PUSH 0x643f67                       ; 005661f9 | = "Can't create world\\%s"
    MOV ECX,dword ptr [0x00678a60]      ; 005661fe | g_CEditorToolsPtr
    PUSH ECX                            ; 00566204 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00566205
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0056620a
    POP EBP                             ; 0056620d
    POP EDI                             ; 0056620e
    POP ESI                             ; 0056620f
    POP EBX                             ; 00566210
    RET                                 ; 00566211
    PUSH 0x1a65                         ; 00566212
        ;   Label: LAB_00566212
    PUSH 0x643f81                       ; 00566217 | = "..\\core\\script.cpp"
    PUSH EDI                            ; 0056621c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0056621d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00566222
    POP EBP                             ; 00566225
    POP EDI                             ; 00566226
    POP ESI                             ; 00566227
    POP EBX                             ; 00566228
    RET                                 ; 00566229

