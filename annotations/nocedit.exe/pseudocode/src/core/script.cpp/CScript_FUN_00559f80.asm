; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CScript_FUN_00559f80(CScript *this_ptr,char *param_2,int param_3)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; Local Variables:
; undefined1       Stack[-0x790]:1  local_790
; undefined1       Stack[-0x3e8]:1  local_3e8
; undefined1       Stack[-0x1e8]:1  local_1e8
; undefined1       Stack[-0x1e7]:1  local_1e7
; undefined1       Stack[-0xe4]:1  local_e4
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_FUN_005235b0 at 005235eb
;
; Referenced Globals:
;   TerminatedCString s_world_006417af
;   TerminatedCString s_txt_006417b5
;   undefined4 DAT_006417b6
;   undefined4 DAT_006417b7
;   undefined4 DAT_006417b8
;   TerminatedCString s_rt_006417ba
;   TerminatedCString s_world_006417bd
;   TerminatedCString s_core_script_cpp_006417c3
;   TerminatedCString s_Probable_non_text_file_s_006417d6
;   TerminatedCString s_core_script_cpp_0064181b
;   TerminatedCString s_core_script_cpp_0064182e
;   TerminatedCString s_wt_00641841
;   TerminatedCString s_script_txt_00641844
;   TerminatedCString s_s_4d_s_0064184f
;   TerminatedCString s_core_script_cpp_00641859
;   ... and 11 more
;
; Called Functions:
;   core_script.cpp_CScript_dbLoad_FUN_005603c0
;   core_script.cpp_CScript_FUN_00559870
;   core_script.cpp_CScript_FUN_0055a370
;   core_script.cpp_CScript_FUN_0055a4b0
;   core_script.cpp_CScript_FUN_0055a540
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_system_FUN_00602130
;   crt_string.c_splitpath_FUN_005ff178
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559f80
        ;   Label: core_script.cpp_CScript_FUN_00559f80
    PUSH ESI                            ; 00559f81
    PUSH EDI                            ; 00559f82
    PUSH EBP                            ; 00559f83
    SUB ESP,0x780                       ; 00559f84
    MOV EBP,dword ptr [ESP + 0x794]     ; 00559f8a
    LEA EAX,[EBP + 0x38]                ; 00559f91
    MOV dword ptr [ESP + 0x778],EAX     ; 00559f94
    PUSH EBP                            ; 00559f9b
        ;   Label: LAB_00559f9b
    CALL core_script.cpp_CScript_FUN_00559870 ; 00559f9c
        ;   XREF to: 00559870 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00559870(CScript * this_ptr)
    ADD ESP,0x4                         ; 00559fa1
    MOV EDX,dword ptr [ESP + 0x798]     ; 00559fa4
    PUSH EDX                            ; 00559fab
    PUSH 0x6417af                       ; 00559fac | = "world"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00559fb1
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    MOV EBX,EAX                         ; 00559fb6
    ADD ESP,0x8                         ; 00559fb8
    TEST EAX,EAX                        ; 00559fbb
    JG 0x00559fd1                       ; 00559fbd
        ;   XREF to: 00559fd1 (CONDITIONAL_JUMP)  ; LAB_00559fd1
    MOV ESI,0x1                         ; 00559fbf
        ;   Label: LAB_00559fbf
    MOV EAX,ESI                         ; 00559fc4
    ADD ESP,0x780                       ; 00559fc6
    POP EBP                             ; 00559fcc
    POP EDI                             ; 00559fcd
    POP ESI                             ; 00559fce
    POP EBX                             ; 00559fcf
    RET                                 ; 00559fd0
    PUSH 0x0                            ; 00559fd1
        ;   Label: LAB_00559fd1
    LEA EAX,[ESP + 0x5ac]               ; 00559fd3
    PUSH EAX                            ; 00559fda
    PUSH 0x0                            ; 00559fdb
    PUSH 0x0                            ; 00559fdd
    MOV ECX,dword ptr [ESP + 0x7a8]     ; 00559fdf
    PUSH ECX                            ; 00559fe6
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00559fe7
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00559fec
    MOV ESI,0x6417b5                    ; 00559fef | = ".txt"
    LEA EDI,[ESP + 0x5a8]               ; 00559ff4
    PUSH EDI                            ; 00559ffb
    SUB ECX,ECX                         ; 00559ffc
    DEC ECX                             ; 00559ffe
    MOV AL,0x0                          ; 00559fff
    SCASB.REPNE ES:EDI                  ; 0055a001
    DEC EDI                             ; 0055a003
    MOV AL,byte ptr [ESI]               ; 0055a004 | = ".txt" | DAT_006417b7
        ;   Label: LAB_0055a004
    MOV byte ptr [EDI],AL               ; 0055a006
    CMP AL,0x0                          ; 0055a008
    JZ 0x0055a01c                       ; 0055a00a
        ;   XREF to: 0055a01c (CONDITIONAL_JUMP)  ; LAB_0055a01c
    MOV AL,byte ptr [ESI + 0x1]         ; 0055a00c | DAT_006417b6 | DAT_006417b8
    ADD ESI,0x2                         ; 0055a00f
    MOV byte ptr [EDI + 0x1],AL         ; 0055a012
    ADD EDI,0x2                         ; 0055a015
    CMP AL,0x0                          ; 0055a018
    JNZ 0x0055a004                      ; 0055a01a
        ;   XREF to: 0055a004 (CONDITIONAL_JUMP)  ; LAB_0055a004
    POP EDI                             ; 0055a01c
        ;   Label: LAB_0055a01c
    LEA EAX,[ESP + 0x5a8]               ; 0055a01d
    PUSH EAX                            ; 0055a024
    PUSH EBP                            ; 0055a025
    CALL core_script.cpp_CScript_dbLoad_FUN_005603c0 ; 0055a026
        ;   XREF to: 005603c0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_dbLoad_FUN_005603c0(CScript * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 0055a02b
    PUSH 0x6417ba                       ; 0055a02e | = "rt"
    MOV ESI,dword ptr [ESP + 0x79c]     ; 0055a033
    PUSH ESI                            ; 0055a03a
    PUSH 0x6417bd                       ; 0055a03b | = "world"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0055a040
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0055a045
    MOV ESI,EAX                         ; 0055a048
    TEST EAX,EAX                        ; 0055a04a
    JZ 0x00559fbf                       ; 0055a04c
        ;   XREF to: 00559fbf (CONDITIONAL_JUMP)  ; LAB_00559fbf
    PUSH EAX                            ; 0055a052
    CALL crt_stdio.c_ftell_FUN_00601560 ; 0055a053
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 0055a058
    LEA EDI,[EBX + EAX*0x1]             ; 0055a05b
    MOV dword ptr [ESP + 0x77c],0x1     ; 0055a05e
    XOR EBX,EBX                         ; 0055a069
        ;   Label: LAB_0055a069
    PUSH ESI                            ; 0055a06b
        ;   Label: LAB_0055a06b
    CALL crt_stdio.c_ftell_FUN_00601560 ; 0055a06c
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 0055a071
    CMP EAX,EDI                         ; 0055a074
    JL 0x0055a264                       ; 0055a076
        ;   XREF to: 0055a264 (CONDITIONAL_JUMP)  ; LAB_0055a264
    XOR EAX,EAX                         ; 0055a07c
    MOV dword ptr [ESP + 0x77c],EAX     ; 0055a07e
    XOR AH,AH                           ; 0055a085
        ;   Label: LAB_0055a085
    MOV byte ptr [ESP + EBX*0x1 + 0x3a8],AH ; 0055a087
    LEA EAX,[ESP + 0x3a8]               ; 0055a08e
    PUSH EAX                            ; 0055a095
    MOV EDX,dword ptr [ESP + 0x77c]     ; 0055a096
    PUSH EDX                            ; 0055a09d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055a09e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055a0a3
    CMP dword ptr [ESP + 0x77c],0x0     ; 0055a0a6
    JNZ 0x0055a069                      ; 0055a0ae
        ;   XREF to: 0055a069 (CONDITIONAL_JUMP)  ; LAB_0055a069
    PUSH 0x32d                          ; 0055a0b0
    PUSH 0x64181b                       ; 0055a0b5 | = "..\\core\\script.cpp"
    PUSH ESI                            ; 0055a0ba
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0055a0bb
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0055a0c0
    PUSH EBP                            ; 0055a0c3
    CALL core_script.cpp_CScript_FUN_0055a370 ; 0055a0c4
        ;   XREF to: 0055a370 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_0055a370(CScript * this_ptr)
    ADD ESP,0x4                         ; 0055a0c9
    PUSH 0x336                          ; 0055a0cc
    PUSH 0x64182e                       ; 0055a0d1 | = "..\\core\\script.cpp"
    PUSH 0x641841                       ; 0055a0d6 | = "wt"
    PUSH 0x0                            ; 0055a0db
    PUSH 0x641844                       ; 0055a0dd | = "script.txt"
    XOR EDI,EDI                         ; 0055a0e2
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0055a0e4
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0055a0e9
    MOV EBX,dword ptr [EBP + 0x30]      ; 0055a0ec
    MOV ESI,EAX                         ; 0055a0ef
    TEST EBX,EBX                        ; 0055a0f1
    JLE 0x0055a11c                      ; 0055a0f3
        ;   XREF to: 0055a11c (CONDITIONAL_JUMP)  ; LAB_0055a11c
    XOR EBX,EBX                         ; 0055a0f5
    MOV EAX,dword ptr [EBP + 0x34]      ; 0055a0f7
        ;   Label: LAB_0055a0f7
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0055a0fa
    PUSH EDX                            ; 0055a0fe
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 0055a0ff
    PUSH ECX                            ; 0055a102
    PUSH 0x64184f                       ; 0055a103 | = "%4d | %s\n"
    PUSH ESI                            ; 0055a108
    ADD EBX,0x8                         ; 0055a109
    INC EDI                             ; 0055a10c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0055a10d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x30]      ; 0055a112
    ADD ESP,0x10                        ; 0055a115
    CMP EDI,EAX                         ; 0055a118
    JL 0x0055a0f7                       ; 0055a11a
        ;   XREF to: 0055a0f7 (CONDITIONAL_JUMP)  ; LAB_0055a0f7
    PUSH 0x33a                          ; 0055a11c
        ;   Label: LAB_0055a11c
    PUSH 0x641859                       ; 0055a121 | = "..\\core\\script.cpp"
    PUSH ESI                            ; 0055a126
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0055a127
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0055a12c
    CMP dword ptr [ESP + 0x79c],0x0     ; 0055a12f
    JNZ 0x0055a34a                      ; 0055a137
        ;   XREF to: 0055a34a (CONDITIONAL_JUMP)  ; LAB_0055a34a
    LEA EAX,[ESP + 0x774]               ; 0055a13d
    PUSH EAX                            ; 0055a144
    PUSH EBP                            ; 0055a145
    CALL core_script.cpp_CScript_FUN_0055a4b0 ; 0055a146
        ;   XREF to: 0055a4b0 (UNCONDITIONAL_CALL)  ; int * core_script.cpp_CScript_FUN_0055a4b0(CScript * this_ptr, int * param_2)
    ADD ESP,0x8                         ; 0055a14b
    PUSH 0x310f4b0                      ; 0055a14e | DAT_0310f4b0
    MOV ESI,EAX                         ; 0055a153
    MOV EBX,EAX                         ; 0055a155
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 0055a157
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0055a15c
    TEST ESI,ESI                        ; 0055a15f
    JZ 0x0055a34a                       ; 0055a161
        ;   XREF to: 0055a34a (CONDITIONAL_JUMP)  ; LAB_0055a34a
    MOV EDI,0x31089e8                   ; 0055a167 | DAT_031089e8
    XOR ESI,ESI                         ; 0055a16c
    MOV EAX,dword ptr [ESP + 0x774]     ; 0055a16e
        ;   Label: LAB_0055a16e
    PUSH EBX                            ; 0055a175
    INC EAX                             ; 0055a176
    PUSH EAX                            ; 0055a177
    MOV ECX,dword ptr [ESP + 0x7a0]     ; 0055a178
    PUSH ECX                            ; 0055a17f
    PUSH 0x64186c                       ; 0055a180 | = "Syntax error on %s line %d:\n%s"
    PUSH EDI                            ; 0055a185 | DAT_031089e8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0055a186
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0055a18b
    MOV EAX,ESP                         ; 0055a18e
    PUSH EAX                            ; 0055a190
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0055a191
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0055a196
    PUSH 0x64188b                       ; 0055a199 | = "Try to load the script again.  (You c..."
    LEA EAX,[ESP + 0x4]                 ; 0055a19e
    PUSH EAX                            ; 0055a1a2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055a1a3
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055a1a8
    PUSH 0x6418d5                       ; 0055a1ab | = "Don't use the script, just keep going."
    LEA EAX,[ESP + 0x4]                 ; 0055a1b0
    PUSH EAX                            ; 0055a1b4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055a1b5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055a1ba
    PUSH 0x6418fc                       ; 0055a1bd | = "Execute NOTEPAD on the script right now."
    LEA EAX,[ESP + 0x4]                 ; 0055a1c2
    PUSH EAX                            ; 0055a1c6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055a1c7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055a1cc
    PUSH 0x641925                       ; 0055a1cf | = "Cancel"
    LEA EAX,[ESP + 0x4]                 ; 0055a1d4
    PUSH EAX                            ; 0055a1d8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055a1d9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055a1de
    PUSH ESI                            ; 0055a1e1
    PUSH -0x1                           ; 0055a1e2
    PUSH EDI                            ; 0055a1e4 | DAT_031089e8
    LEA EAX,[ESP + 0xc]                 ; 0055a1e5
    PUSH EAX                            ; 0055a1e9
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0055a1ea
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0055a1ef
    TEST EAX,EAX                        ; 0055a1f2
    JZ 0x0055a337                       ; 0055a1f4
        ;   XREF to: 0055a337 (CONDITIONAL_JUMP)  ; LAB_0055a337
    CMP EAX,0x1                         ; 0055a1fa
    JZ 0x0055a2f0                       ; 0055a1fd
        ;   XREF to: 0055a2f0 (CONDITIONAL_JUMP)  ; LAB_0055a2f0
    CMP EAX,0x2                         ; 0055a203
    JNZ 0x0055a31a                      ; 0055a206
        ;   XREF to: 0055a31a (CONDITIONAL_JUMP)  ; LAB_0055a31a
    PUSH 0x64192c                       ; 0055a20c | = "Note: This only works in NT.\nWhen yo..."
    MOV EAX,[0x00678a60]                ; 0055a211 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0055a216 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0055a217
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0055a21c
    MOV EDX,dword ptr [ESP + 0x798]     ; 0055a21f
    PUSH EDX                            ; 0055a226
    PUSH 0x6419c2                       ; 0055a227 | = "start notepad world\\%s"
    LEA EAX,[ESP + 0x6b4]               ; 0055a22c
    PUSH EAX                            ; 0055a233
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0055a234
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055a239
    LEA EAX,[ESP + 0x6ac]               ; 0055a23c
    PUSH EAX                            ; 0055a243
    CALL crt_stdlib.c_system_FUN_00602130 ; 0055a244
        ;   XREF to: 00602130 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_system_FUN_00602130(char * command)
    ADD ESP,0x4                         ; 0055a249
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0055a24c
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH ESI                            ; 0055a251
    LEA EAX,[ESP + 0x4]                 ; 0055a252
    PUSH EAX                            ; 0055a256
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0055a257
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0055a25c
    JMP 0x0055a16e                      ; 0055a25f
        ;   XREF to: 0055a16e (UNCONDITIONAL_JUMP)  ; LAB_0055a16e
    PUSH ESI                            ; 0055a264
        ;   Label: LAB_0055a264
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0055a265
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0055a26a
    MOV EDX,EAX                         ; 0055a26d
    CMP EAX,-0x1                        ; 0055a26f
    JZ 0x0055a085                       ; 0055a272
        ;   XREF to: 0055a085 (CONDITIONAL_JUMP)  ; LAB_0055a085
    CMP EAX,0xd                         ; 0055a278
    JZ 0x0055a06b                       ; 0055a27b
        ;   XREF to: 0055a06b (CONDITIONAL_JUMP)  ; LAB_0055a06b
    CMP EAX,0xa                         ; 0055a281
    JZ 0x0055a085                       ; 0055a284
        ;   XREF to: 0055a085 (CONDITIONAL_JUMP)  ; LAB_0055a085
    TEST EAX,EAX                        ; 0055a28a
    JZ 0x0055a29b                       ; 0055a28c
        ;   XREF to: 0055a29b (CONDITIONAL_JUMP)  ; LAB_0055a29b
    INC EBX                             ; 0055a28e
    MOV byte ptr [ESP + EBX*0x1 + 0x3a7],DL ; 0055a28f
    JMP 0x0055a06b                      ; 0055a296
        ;   XREF to: 0055a06b (UNCONDITIONAL_JUMP)  ; LAB_0055a06b
    PUSH 0x31b                          ; 0055a29b
        ;   Label: LAB_0055a29b
    PUSH 0x6417c3                       ; 0055a2a0 | = "..\\core\\script.cpp"
    PUSH ESI                            ; 0055a2a5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0055a2a6
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0055a2ab
    LEA EAX,[EBP + 0x38]                ; 0055a2ae
    PUSH EAX                            ; 0055a2b1
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 0055a2b2
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0055a2b7
    INC EAX                             ; 0055a2ba
    PUSH EAX                            ; 0055a2bb
    MOV EDX,dword ptr [ESP + 0x79c]     ; 0055a2bc
    PUSH EDX                            ; 0055a2c3
    PUSH 0x6417d6                       ; 0055a2c4 | = "Probable non-text file %s detected ne..."
    MOV ECX,dword ptr [0x00678a60]      ; 0055a2c9 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0055a2cf | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0055a2d0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0055a2d5
    PUSH EBP                            ; 0055a2d8
    XOR ESI,ESI                         ; 0055a2d9
    CALL core_script.cpp_CScript_FUN_00559870 ; 0055a2db
        ;   XREF to: 00559870 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00559870(CScript * this_ptr)
    ADD ESP,0x4                         ; 0055a2e0
    MOV EAX,ESI                         ; 0055a2e3
    ADD ESP,0x780                       ; 0055a2e5
    POP EBP                             ; 0055a2eb
    POP EDI                             ; 0055a2ec
    POP ESI                             ; 0055a2ed
    POP EBX                             ; 0055a2ee
    RET                                 ; 0055a2ef
    PUSH EBP                            ; 0055a2f0
        ;   Label: LAB_0055a2f0
    CALL core_script.cpp_CScript_FUN_00559870 ; 0055a2f1
        ;   XREF to: 00559870 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00559870(CScript * this_ptr)
    ADD ESP,0x4                         ; 0055a2f6
    PUSH 0x0                            ; 0055a2f9
    LEA EAX,[ESP + 0x4]                 ; 0055a2fb
    PUSH EAX                            ; 0055a2ff
    MOV ESI,0x1                         ; 0055a300
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0055a305
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0055a30a
    MOV EAX,ESI                         ; 0055a30d
    ADD ESP,0x780                       ; 0055a30f
    POP EBP                             ; 0055a315
    POP EDI                             ; 0055a316
    POP ESI                             ; 0055a317
    POP EBX                             ; 0055a318
    RET                                 ; 0055a319
    XOR ESI,ESI                         ; 0055a31a
        ;   Label: LAB_0055a31a
    PUSH ESI                            ; 0055a31c
    LEA EAX,[ESP + 0x4]                 ; 0055a31d
    PUSH EAX                            ; 0055a321
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0055a322
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0055a327
    MOV EAX,ESI                         ; 0055a32a
    ADD ESP,0x780                       ; 0055a32c
    POP EBP                             ; 0055a332
    POP EDI                             ; 0055a333
    POP ESI                             ; 0055a334
    POP EBX                             ; 0055a335
    RET                                 ; 0055a336
    PUSH EAX                            ; 0055a337
        ;   Label: LAB_0055a337
    LEA EAX,[ESP + 0x4]                 ; 0055a338
    PUSH EAX                            ; 0055a33c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0055a33d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0055a342
    JMP 0x00559f9b                      ; 0055a345
        ;   XREF to: 00559f9b (UNCONDITIONAL_JUMP)  ; LAB_00559f9b
    PUSH EBP                            ; 0055a34a
        ;   Label: LAB_0055a34a
    MOV ESI,0x1                         ; 0055a34b
    CALL core_script.cpp_CScript_FUN_0055a540 ; 0055a350
        ;   XREF to: 0055a540 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_0055a540(CScript * this_ptr)
    ADD ESP,0x4                         ; 0055a355
    MOV EAX,ESI                         ; 0055a358
    ADD ESP,0x780                       ; 0055a35a
    POP EBP                             ; 0055a360
    POP EDI                             ; 0055a361
    POP ESI                             ; 0055a362
    POP EBX                             ; 0055a363
    RET                                 ; 0055a364

