; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_course.cpp_CCourse_showEditorMenu_FUN_00443040(CCourse * this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x4fc]:1  local_4fc
; undefined1       Stack[-0x3f8]:1  local_3f8
; undefined1       Stack[-0x2f4]:1  local_2f4
; undefined1       Stack[-0x1f0]:1  local_1f0
; undefined1       Stack[-0x1ef]:1  local_1ef
; undefined1       Stack[-0xec]:1  local_ec
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050784a
;
; Referenced Globals:
;   TerminatedCString s_Demon_Course_system_menu_00619195
;   TerminatedCString s_s_1_Load_course_from_PTH_006191ae
;   TerminatedCString s_s_2_Save_course_to_PTH_f_006191cc
;   TerminatedCString s_s_3_Import_course_from_C_006191e8
;   TerminatedCString s_s_4_Import_course_from_B_00619208
;   TerminatedCString s_s_5_View_course_00619228
;   TerminatedCString s_s_6_Rotate_all_course_or_00619237
;   TerminatedCString s_s_7_Scale_course_about_i_00619267
;   TerminatedCString s_s_8_Remove_bank_00619288
;   TerminatedCString s_ON_00619297
;   TerminatedCString s_OFF_0061929a
;   TerminatedCString s_L_Loop_flag_is_now_s_0061929e
;   TerminatedCString s_pth_006192b5
;   TerminatedCString s_data_006192bb
;   TerminatedCString s_Load_course_006192c0
;   ... and 35 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_course.cpp_CCourse_save_FUN_00442a90
;   core_course.cpp_FUN_00443bc0
;   core_course.cpp_OpeningCourseFile2_FUN_00442d70
;   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0
;   core_dmodel.cpp_loadModel_FUN_00478c00
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_splitpath_FUN_005ff178
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443040
        ;   Label: core_course.cpp_CCourse_showEditorMenu_FUN_00443040
    PUSH ESI                            ; 00443041
    PUSH EDI                            ; 00443042
    PUSH EBP                            ; 00443043
    SUB ESP,0x4ec                       ; 00443044
    MOV EBP,dword ptr [ESP + 0x500]     ; 0044304a
    MOV ECX,0x41                        ; 00443051
    LEA EDI,[ESP + 0x30c]               ; 00443056
    MOV ESI,0x66e940                    ; 0044305d | DAT_0066e940
    MOVSD.REP ES:EDI,ESI                ; 00443062 | DAT_0066e940 | DAT_0066e944
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00443064
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00443064
    PUSH 0x0                            ; 00443069
    PUSH 0x0                            ; 0044306b
    PUSH 0x619195                       ; 0044306d | = "Demon Course system menu"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00443072
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00443077
    PUSH 0x16                           ; 0044307a
    PUSH 0x0                            ; 0044307c
    PUSH 0x6191ae                       ; 0044307e | = "1. Load course from .PTH file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00443083
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00443088
    PUSH 0x21                           ; 0044308b
    PUSH 0x0                            ; 0044308d
    PUSH 0x6191cc                       ; 0044308f | = "2. Save course to .PTH file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00443094
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00443099
    PUSH 0x37                           ; 0044309c
    PUSH 0x0                            ; 0044309e
    PUSH 0x6191e8                       ; 004430a0 | = "3. Import course from .CRS file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004430a5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004430aa
    PUSH 0x42                           ; 004430ad
    PUSH 0x0                            ; 004430af
    PUSH 0x619208                       ; 004430b1 | = "4. Import course from .BON file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004430b6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004430bb
    PUSH 0x58                           ; 004430be
    PUSH 0x0                            ; 004430c0
    PUSH 0x619228                       ; 004430c2 | = "5. View course"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004430c7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004430cc
    PUSH 0x6e                           ; 004430cf
    PUSH 0x0                            ; 004430d1
    PUSH 0x619237                       ; 004430d3 | = "6. Rotate all course orientations on ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004430d8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004430dd
    PUSH 0x79                           ; 004430e0
    PUSH 0x0                            ; 004430e2
    PUSH 0x619267                       ; 004430e4 | = "7. Scale course about its center"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004430e9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004430ee
    PUSH 0x8f                           ; 004430f1
    PUSH 0x0                            ; 004430f6
    PUSH 0x619288                       ; 004430f8 | = "8. Remove bank"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004430fd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EDX,dword ptr [EBP + 0x8]       ; 00443102
    ADD ESP,0xc                         ; 00443105
    TEST EDX,EDX                        ; 00443108
    JZ 0x004431d6                       ; 0044310a
        ;   XREF to: 004431d6 (CONDITIONAL_JUMP)  ; LAB_004431d6
    MOV EAX,0x619297                    ; 00443110 | = "ON"
    PUSH EAX                            ; 00443115 | = "ON" | s_OFF_0061929a
        ;   Label: LAB_00443115
    PUSH 0x61929e                       ; 00443116 | = "L. Loop flag is now %s"
    LEA EAX,[ESP + 0x418]               ; 0044311b
    PUSH EAX                            ; 00443122
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00443123
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00443128
    PUSH 0xa5                           ; 0044312b
    PUSH 0x0                            ; 00443130
    LEA EAX,[ESP + 0x418]               ; 00443132
    PUSH EAX                            ; 00443139
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044313a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0044313f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00443142
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00443147
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0044314c
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 00443151
    PUSH EAX                            ; 00443156
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00443157
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0044315c
    MOV dword ptr [ESP + 0x4e0],EAX     ; 0044315f
    CMP EAX,0x35                        ; 00443166
    JNC 0x004435ef                      ; 00443169
        ;   XREF to: 004435ef (CONDITIONAL_JUMP)  ; LAB_004435ef
    CMP EAX,0x32                        ; 0044316f
    JNC 0x00443617                      ; 00443172
        ;   XREF to: 00443617 (CONDITIONAL_JUMP)  ; LAB_00443617
    CMP EAX,0x31                        ; 00443178
    JNZ 0x004431bd                      ; 0044317b
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    PUSH 0x0                            ; 0044317d
    LEA EAX,[ESP + 0x310]               ; 0044317f
    PUSH EAX                            ; 00443186
    MOV EAX,0x6192b5                    ; 00443187 | = "*.pth"
    PUSH EAX                            ; 0044318c | = "*.pth"
    MOV EAX,0x6192bb                    ; 0044318d | = "data"
    PUSH EAX                            ; 00443192 | = "data"
    MOV EAX,0x6192c0                    ; 00443193 | = "Load course"
    PUSH EAX                            ; 00443198 | = "Load course"
    MOV EDI,dword ptr [0x00678a60]      ; 00443199 | g_CEditorToolsPtr
    PUSH EDI                            ; 0044319f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004431a0
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 004431a5
    TEST EAX,EAX                        ; 004431a8
    JZ 0x004431bd                       ; 004431aa
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    LEA EAX,[ESP + 0x30c]               ; 004431ac
    PUSH EAX                            ; 004431b3
    PUSH EBP                            ; 004431b4
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 004431b5
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004431ba
        ;   Label: LAB_004431ba
    CMP dword ptr [ESP + 0x4e0],0x1b    ; 004431bd
        ;   Label: LAB_004431bd
    JNZ 0x00443064                      ; 004431c5
        ;   XREF to: 00443064 (CONDITIONAL_JUMP)  ; LAB_00443064
    ADD ESP,0x4ec                       ; 004431cb
    POP EBP                             ; 004431d1
    POP EDI                             ; 004431d2
    POP ESI                             ; 004431d3
    POP EBX                             ; 004431d4
    RET                                 ; 004431d5
    MOV EAX,0x61929a                    ; 004431d6 | = "OFF"
        ;   Label: LAB_004431d6
    JMP 0x00443115                      ; 004431db
        ;   XREF to: 00443115 (UNCONDITIONAL_JUMP)  ; LAB_00443115
    MOV EAX,dword ptr [EBP]             ; 004431e0
        ;   Label: LAB_004431e0
    CMP EAX,0x1                         ; 004431e3
    JGE 0x004431fc                      ; 004431e6
        ;   XREF to: 004431fc (CONDITIONAL_JUMP)  ; LAB_004431fc
    MOV EAX,0x6192cc                    ; 004431e8 | = "No course to save!"
    PUSH EAX                            ; 004431ed | = "No course to save!"
    MOV ESI,dword ptr [0x00678a60]      ; 004431ee | g_CEditorToolsPtr
    PUSH ESI                            ; 004431f4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004431f5
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x004431ba                      ; 004431fa
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    PUSH 0x1                            ; 004431fc
        ;   Label: LAB_004431fc
    LEA EAX,[ESP + 0x310]               ; 004431fe
    PUSH EAX                            ; 00443205
    MOV EAX,0x6192df                    ; 00443206 | = "pth"
    PUSH EAX                            ; 0044320b | = "pth"
    MOV EAX,0x6192e3                    ; 0044320c | = "data"
    PUSH EAX                            ; 00443211 | = "data"
    MOV EAX,0x6192e8                    ; 00443212 | = "Save course"
    PUSH EAX                            ; 00443217 | = "Save course"
    MOV EBX,dword ptr [0x00678a60]      ; 00443218 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0044321e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 0044321f
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; bool shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, ...)
    ADD ESP,0x18                        ; 00443224
    TEST EAX,EAX                        ; 00443227
    JZ 0x004431bd                       ; 00443229
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    LEA EAX,[ESP + 0x30c]               ; 0044322b
    PUSH EAX                            ; 00443232
    PUSH EBP                            ; 00443233
    CALL core_course.cpp_CCourse_save_FUN_00442a90 ; 00443234
        ;   XREF to: 00442a90 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_save_FUN_00442a90(CCourse * this_ptr)
    JMP 0x004431ba                      ; 00443239
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    MOV ECX,0x41                        ; 0044323e
        ;   Label: LAB_0044323e
    MOV EDI,ESP                         ; 00443243
    MOV ESI,0x66ea48                    ; 00443245 | DAT_0066ea48
    MOVSD.REP ES:EDI,ESI                ; 0044324a | DAT_0066ea48 | DAT_0066ea4c
    PUSH 0x1                            ; 0044324c
        ;   Label: LAB_0044324c
    LEA EAX,[ESP + 0x4]                 ; 0044324e
    PUSH EAX                            ; 00443252
    PUSH 0x6192f4                       ; 00443253 | = "*.crs"
    PUSH 0x6192fa                       ; 00443258 | = "Import .CRS file"
    MOV EDX,dword ptr [0x00678a60]      ; 0044325d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00443263 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 00443264
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)
    ADD ESP,0x14                        ; 00443269
    TEST EAX,EAX                        ; 0044326c
    JZ 0x004431bd                       ; 0044326e
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    MOV EAX,ESP                         ; 00443274
    PUSH EAX                            ; 00443276
    PUSH EBP                            ; 00443277
    CALL core_course.cpp_OpeningCourseFile2_FUN_00442d70 ; 00443278
        ;   XREF to: 00442d70 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_OpeningCourseFile2_FUN_00442d70()
    ADD ESP,0x8                         ; 0044327d
    TEST EAX,EAX                        ; 00443280
    JZ 0x0044324c                       ; 00443282
        ;   XREF to: 0044324c (CONDITIONAL_JUMP)  ; LAB_0044324c
    PUSH 0x0                            ; 00443284
    LEA EAX,[ESP + 0x310]               ; 00443286
    PUSH EAX                            ; 0044328d
    PUSH 0x0                            ; 0044328e
    PUSH 0x0                            ; 00443290
    LEA EAX,[ESP + 0x10]                ; 00443292
    PUSH EAX                            ; 00443296
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00443297
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0044329c
    MOV ESI,0x61930b                    ; 0044329f | = ".pth"
    LEA EDI,[ESP + 0x30c]               ; 004432a4
    PUSH EDI                            ; 004432ab
    SUB ECX,ECX                         ; 004432ac
    DEC ECX                             ; 004432ae
    MOV AL,0x0                          ; 004432af
    SCASB.REPNE ES:EDI                  ; 004432b1
    DEC EDI                             ; 004432b3
    MOV AL,byte ptr [ESI]               ; 004432b4 | = ".pth" | DAT_0061930d
        ;   Label: LAB_004432b4
    MOV byte ptr [EDI],AL               ; 004432b6
    CMP AL,0x0                          ; 004432b8
    JZ 0x004432cc                       ; 004432ba
        ;   XREF to: 004432cc (CONDITIONAL_JUMP)  ; LAB_004432cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004432bc | DAT_0061930c | DAT_0061930e
    ADD ESI,0x2                         ; 004432bf
    MOV byte ptr [EDI + 0x1],AL         ; 004432c2
    ADD EDI,0x2                         ; 004432c5
    CMP AL,0x0                          ; 004432c8
    JNZ 0x004432b4                      ; 004432ca
        ;   XREF to: 004432b4 (CONDITIONAL_JUMP)  ; LAB_004432b4
    POP EDI                             ; 004432cc
        ;   Label: LAB_004432cc
    JMP 0x004431bd                      ; 004432cd
        ;   XREF to: 004431bd (UNCONDITIONAL_JUMP)  ; LAB_004431bd
    MOV EAX,dword ptr [EBP]             ; 004432d2
        ;   Label: LAB_004432d2
    CMP EAX,0x1                         ; 004432d5
    JGE 0x004432f0                      ; 004432d8
        ;   XREF to: 004432f0 (CONDITIONAL_JUMP)  ; LAB_004432f0
    PUSH 0x61932c                       ; 004432da | = "No course to view!"
    MOV ECX,dword ptr [0x00678a60]      ; 004432df | g_CEditorToolsPtr
    PUSH ECX                            ; 004432e5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004432e6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x004431ba                      ; 004432eb
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    PUSH 0x0                            ; 004432f0
        ;   Label: LAB_004432f0
    LEA EAX,[ESP + 0x20c]               ; 004432f2
    PUSH EAX                            ; 004432f9
    PUSH 0x61933f                       ; 004432fa | = "*.kfm"
    PUSH 0x619345                       ; 004432ff | = "models"
    PUSH 0x61934c                       ; 00443304 | = "Select model to fly around"
    MOV EDX,dword ptr [0x00678a60]      ; 00443309 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0044330f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 00443310
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 00443315
    TEST EAX,EAX                        ; 00443318
    JZ 0x004431bd                       ; 0044331a
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    LEA EAX,[ESP + 0x208]               ; 00443320
    PUSH EAX                            ; 00443327
    CALL core_dmodel.cpp_loadModel_FUN_00478c00 ; 00443328
        ;   XREF to: 00478c00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00478c00(char * filename)
    ADD ESP,0x4                         ; 0044332d
    PUSH EAX                            ; 00443330
    PUSH EBP                            ; 00443331
    CALL core_course.cpp_FUN_00443bc0   ; 00443332
        ;   XREF to: 00443bc0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00443bc0()
    JMP 0x004431ba                      ; 00443337
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    MOV EAX,dword ptr [EBP]             ; 0044333c
        ;   Label: LAB_0044333c
    CMP EAX,0x1                         ; 0044333f
    JGE 0x00443359                      ; 00443342
        ;   XREF to: 00443359 (CONDITIONAL_JUMP)  ; LAB_00443359
    PUSH 0x619367                       ; 00443344 | = "No course to rotate!"
    MOV EAX,[0x00678a60]                ; 00443349 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0044334e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0044334f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x004431ba                      ; 00443354
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    PUSH 0x0                            ; 00443359
        ;   Label: LAB_00443359
    LEA EAX,[ESP + 0x4d4]               ; 0044335b
    PUSH EAX                            ; 00443362
    PUSH 0x61937c                       ; 00443363 | = "Enter local P,B,H to apply:"
    MOV ESI,dword ptr [0x00678a60]      ; 00443368 | g_CEditorToolsPtr
    PUSH ESI                            ; 0044336e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300 ; 0044336f
        ;   XREF to: 004a0300 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300(CEditorTools * editor_tools, char * prompt_text, CVector3f * result_ptr, bool show_current_value)
    ADD ESP,0x10                        ; 00443374
    TEST EAX,EAX                        ; 00443377
    JZ 0x004431bd                       ; 00443379
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 0044337f
    MOV dword ptr [ESP + 0x4b8],EAX     ; 00443386
    MOV EAX,dword ptr [ESP + 0x4d4]     ; 0044338d
    MOV dword ptr [ESP + 0x4c0],EAX     ; 00443394
    MOV EAX,dword ptr [ESP + 0x4d8]     ; 0044339b
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004433a2
    LEA EAX,[ESP + 0x4b8]               ; 004433a9
    PUSH EAX                            ; 004433b0
    LEA ESI,[ESP + 0x47c]               ; 004433b1
    LEA EDI,[ESP + 0x48c]               ; 004433b8
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004433bf
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles)
    LEA ESI,[ESP + 0x47c]               ; 004433c4
    ADD ESP,0x4                         ; 004433cb
    MOVSD ES:EDI,ESI                    ; 004433ce
    MOVSD ES:EDI,ESI                    ; 004433cf
    MOVSD ES:EDI,ESI                    ; 004433d0
    MOVSD ES:EDI,ESI                    ; 004433d1
    XOR EDI,EDI                         ; 004433d2
    XOR EBX,EBX                         ; 004433d4
    MOV dword ptr [ESP + 0x4e8],EDI     ; 004433d6
        ;   Label: LAB_004433d6
    MOV ESI,dword ptr [ESP + 0x4e8]     ; 004433dd
    CMP ESI,dword ptr [EBP]             ; 004433e4
    JGE 0x004431bd                      ; 004433e7
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    MOV EAX,dword ptr [EBP + 0x4]       ; 004433ed
    ADD EAX,EBX                         ; 004433f0
    ADD EAX,0xc                         ; 004433f2
    PUSH EAX                            ; 004433f5
    LEA EAX,[ESP + 0x48c]               ; 004433f6
    PUSH EAX                            ; 004433fd
    LEA ESI,[ESP + 0x4b0]               ; 004433fe
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 00443405
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    MOV EAX,dword ptr [EBP + 0x4]       ; 0044340a
    LEA ESI,[ESP + 0x4b0]               ; 0044340d
    LEA EDI,[EBX + EAX*0x1 + 0xc]       ; 00443414
    ADD ESP,0x8                         ; 00443418
    MOVSD ES:EDI,ESI                    ; 0044341b
    MOVSD ES:EDI,ESI                    ; 0044341c
    MOVSD ES:EDI,ESI                    ; 0044341d
    MOVSD ES:EDI,ESI                    ; 0044341e
    MOV EDI,dword ptr [ESP + 0x4e8]     ; 0044341f
    INC EDI                             ; 00443426
    ADD EBX,0x1c                        ; 00443427
    JMP 0x004433d6                      ; 0044342a
        ;   XREF to: 004433d6 (UNCONDITIONAL_JUMP)  ; LAB_004433d6
    MOV EAX,dword ptr [EBP]             ; 0044342c
        ;   Label: LAB_0044342c
    CMP EAX,0x1                         ; 0044342f
    JGE 0x0044344a                      ; 00443432
        ;   XREF to: 0044344a (CONDITIONAL_JUMP)  ; LAB_0044344a
    PUSH 0x619398                       ; 00443434 | = "No course to scale!"
    MOV EBX,dword ptr [0x00678a60]      ; 00443439 | g_CEditorToolsPtr
    PUSH EBX                            ; 0044343f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00443440
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x004431ba                      ; 00443445
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    PUSH 0x0                            ; 0044344a
        ;   Label: LAB_0044344a
    PUSH 0x461c3c00                     ; 0044344c
    PUSH 0x3a83126f                     ; 00443451
    PUSH 0x1                            ; 00443456
    LEA EAX,[ESP + 0x4ec]               ; 00443458
    PUSH EAX                            ; 0044345f
    PUSH 0x6193ac                       ; 00443460 | = "Enter scale factor"
    MOV ECX,dword ptr [0x00678a60]      ; 00443465 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0044346b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0044346c
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
    ADD ESP,0x1c                        ; 00443471
    TEST EAX,EAX                        ; 00443474
    JZ 0x004431bd                       ; 00443476
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    LEA EAX,[ESP + 0x460]               ; 0044347c
    MOV EBX,dword ptr [EBP + 0x4]       ; 00443483
    CMP EAX,EBX                         ; 00443486
    JNZ 0x004434c6                      ; 00443488
        ;   XREF to: 004434c6 (CONDITIONAL_JUMP)  ; LAB_004434c6
    LEA EAX,[ESP + 0x46c]               ; 0044348a
        ;   Label: LAB_0044348a
    CMP EAX,EBX                         ; 00443491
    JNZ 0x004434e5                      ; 00443493
        ;   XREF to: 004434e5 (CONDITIONAL_JUMP)  ; LAB_004434e5
    MOV ESI,0x1c                        ; 00443495
        ;   Label: LAB_00443495
    MOV EDI,0x1                         ; 0044349a
    MOV EAX,dword ptr [EBP]             ; 0044349f
        ;   Label: LAB_0044349f
    CMP EDI,EAX                         ; 004434a2
    JGE 0x004431bd                      ; 004434a4
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    MOV EAX,dword ptr [EBP + 0x4]       ; 004434aa
    ADD EAX,ESI                         ; 004434ad
    PUSH EAX                            ; 004434af
    LEA EAX,[ESP + 0x464]               ; 004434b0
    PUSH EAX                            ; 004434b7
    INC EDI                             ; 004434b8
    ADD ESI,0x1c                        ; 004434b9
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 004434bc
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004434c1
    JMP 0x0044349f                      ; 004434c4
        ;   XREF to: 0044349f (UNCONDITIONAL_JUMP)  ; LAB_0044349f
    MOV EAX,dword ptr [EBX]             ; 004434c6
        ;   Label: LAB_004434c6
    MOV dword ptr [ESP + 0x460],EAX     ; 004434c8
    MOV EAX,dword ptr [EBX + 0x4]       ; 004434cf
    MOV dword ptr [ESP + 0x464],EAX     ; 004434d2
    MOV EAX,dword ptr [EBX + 0x8]       ; 004434d9
    MOV dword ptr [ESP + 0x468],EAX     ; 004434dc
    JMP 0x0044348a                      ; 004434e3
        ;   XREF to: 0044348a (UNCONDITIONAL_JUMP)  ; LAB_0044348a
    MOV EAX,dword ptr [EBX]             ; 004434e5
        ;   Label: LAB_004434e5
    MOV dword ptr [ESP + 0x46c],EAX     ; 004434e7
    MOV EAX,dword ptr [EBX + 0x4]       ; 004434ee
    MOV dword ptr [ESP + 0x470],EAX     ; 004434f1
    MOV EAX,dword ptr [EBX + 0x8]       ; 004434f8
    MOV dword ptr [ESP + 0x474],EAX     ; 004434fb
    JMP 0x00443495                      ; 00443502
        ;   XREF to: 00443495 (UNCONDITIONAL_JUMP)  ; LAB_00443495
    MOV EAX,dword ptr [EBP]             ; 00443504
        ;   Label: LAB_00443504
    CMP EAX,0x1                         ; 00443507
    JGE 0x00443522                      ; 0044350a
        ;   XREF to: 00443522 (CONDITIONAL_JUMP)  ; LAB_00443522
    PUSH 0x6193bf                       ; 0044350c | = "No course in memory!"
    MOV EDX,dword ptr [0x00678a60]      ; 00443511 | g_CEditorToolsPtr
    PUSH EDX                            ; 00443517 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00443518
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x004431ba                      ; 0044351d
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    PUSH 0x6193d4                       ; 00443522 | = "Remove bank from course?"
        ;   Label: LAB_00443522
    MOV ESI,dword ptr [0x00678a60]      ; 00443527 | g_CEditorToolsPtr
    PUSH ESI                            ; 0044352d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 0044352e
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 00443533
    TEST EAX,EAX                        ; 00443536
    JZ 0x004431bd                       ; 00443538
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    XOR EDI,EDI                         ; 0044353e
    MOV EAX,dword ptr [EBP]             ; 00443540
    MOV dword ptr [ESP + 0x4e4],EDI     ; 00443543
    TEST EAX,EAX                        ; 0044354a
    JLE 0x004431bd                      ; 0044354c
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    XOR EBX,EBX                         ; 00443552
    MOV EAX,dword ptr [EBP + 0x4]       ; 00443554
        ;   Label: LAB_00443554
    ADD EAX,EBX                         ; 00443557
    ADD EAX,0xc                         ; 00443559
    PUSH EAX                            ; 0044355c
    LEA EAX,[ESP + 0x4c8]               ; 0044355d
    PUSH EAX                            ; 00443564
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 00443565
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
    ADD ESP,0x8                         ; 0044356a
    XOR EAX,EAX                         ; 0044356d
    MOV dword ptr [ESP + 0x4cc],EAX     ; 0044356f
    LEA EAX,[ESP + 0x4c4]               ; 00443576
    PUSH EAX                            ; 0044357d
    LEA ESI,[ESP + 0x49c]               ; 0044357e
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 00443585
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0x4]       ; 0044358a
    LEA ESI,[ESP + 0x49c]               ; 0044358d
    ADD ESP,0x4                         ; 00443594
    LEA EDI,[EBX + EAX*0x1 + 0xc]       ; 00443597
    ADD EBX,0x1c                        ; 0044359b
    MOV EDX,dword ptr [ESP + 0x4e4]     ; 0044359e
    MOVSD ES:EDI,ESI                    ; 004435a5
    MOVSD ES:EDI,ESI                    ; 004435a6
    MOVSD ES:EDI,ESI                    ; 004435a7
    MOVSD ES:EDI,ESI                    ; 004435a8
    INC EDX                             ; 004435a9
    MOV ECX,dword ptr [EBP]             ; 004435aa
    MOV dword ptr [ESP + 0x4e4],EDX     ; 004435ad
    CMP EDX,ECX                         ; 004435b4
    JL 0x00443554                       ; 004435b6
        ;   XREF to: 00443554 (CONDITIONAL_JUMP)  ; LAB_00443554
    JMP 0x004431bd                      ; 004435b8
        ;   XREF to: 004431bd (UNCONDITIONAL_JUMP)  ; LAB_004431bd
    MOV EAX,dword ptr [EBP]             ; 004435bd
        ;   Label: LAB_004435bd
    CMP EAX,0x1                         ; 004435c0
    JL 0x004435d9                       ; 004435c3
        ;   XREF to: 004435d9 (CONDITIONAL_JUMP)  ; LAB_004435d9
    CMP dword ptr [EBP + 0x8],0x0       ; 004435c5
    SETZ AL                             ; 004435c9
    AND EAX,0xff                        ; 004435cc
    MOV dword ptr [EBP + 0x8],EAX       ; 004435d1
    JMP 0x004431bd                      ; 004435d4
        ;   XREF to: 004431bd (UNCONDITIONAL_JUMP)  ; LAB_004431bd
    PUSH 0x6193ed                       ; 004435d9 | = "No course in memory!"
        ;   Label: LAB_004435d9
    MOV EBX,dword ptr [0x00678a60]      ; 004435de | g_CEditorToolsPtr
    PUSH EBX                            ; 004435e4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004435e5
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x004431ba                      ; 004435ea
        ;   XREF to: 004431ba (UNCONDITIONAL_JUMP)  ; LAB_004431ba
    JBE 0x004432d2                      ; 004435ef
        ;   XREF to: 004432d2 (CONDITIONAL_JUMP)  ; LAB_004432d2
        ;   Label: LAB_004435ef
    CMP EAX,0x37                        ; 004435f5
    JC 0x0044333c                       ; 004435f8
        ;   XREF to: 0044333c (CONDITIONAL_JUMP)  ; LAB_0044333c
    JBE 0x0044342c                      ; 004435fe
        ;   XREF to: 0044342c (CONDITIONAL_JUMP)  ; LAB_0044342c
    CMP EAX,0x38                        ; 00443604
    JBE 0x00443504                      ; 00443607
        ;   XREF to: 00443504 (CONDITIONAL_JUMP)  ; LAB_00443504
    CMP EAX,0x4c                        ; 0044360d
    JZ 0x004435bd                       ; 00443610
        ;   XREF to: 004435bd (CONDITIONAL_JUMP)  ; LAB_004435bd
    JMP 0x004431bd                      ; 00443612
        ;   XREF to: 004431bd (UNCONDITIONAL_JUMP)  ; LAB_004431bd
    JBE 0x004431e0                      ; 00443617
        ;   XREF to: 004431e0 (CONDITIONAL_JUMP)  ; LAB_004431e0
        ;   Label: LAB_00443617
    CMP EAX,0x33                        ; 0044361d
    JBE 0x0044323e                      ; 00443620
        ;   XREF to: 0044323e (CONDITIONAL_JUMP)  ; LAB_0044323e
    MOV ECX,0x41                        ; 00443626
    LEA EDI,[ESP + 0x104]               ; 0044362b
    MOV ESI,0x66eb50                    ; 00443632 | DAT_0066eb50
    MOVSD.REP ES:EDI,ESI                ; 00443637 | DAT_0066eb50 | DAT_0066eb54
    PUSH 0x1                            ; 00443639
        ;   Label: LAB_00443639
    LEA EAX,[ESP + 0x108]               ; 0044363b
    PUSH EAX                            ; 00443642
    PUSH 0x619310                       ; 00443643 | = "*.bon"
    PUSH 0x619316                       ; 00443648 | = "Import .BON file"
    MOV EAX,[0x00678a60]                ; 0044364d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00443652 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 00443653
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)
    ADD ESP,0x14                        ; 00443658
    TEST EAX,EAX                        ; 0044365b
    JZ 0x004431bd                       ; 0044365d
        ;   XREF to: 004431bd (CONDITIONAL_JUMP)  ; LAB_004431bd
    LEA EAX,[ESP + 0x104]               ; 00443663
    PUSH EAX                            ; 0044366a
    PUSH EBP                            ; 0044366b
    CALL core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 ; 0044366c
        ;   XREF to: 00442bc0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0()
    ADD ESP,0x8                         ; 00443671
    TEST EAX,EAX                        ; 00443674
    JZ 0x00443639                       ; 00443676
        ;   XREF to: 00443639 (CONDITIONAL_JUMP)  ; LAB_00443639
    PUSH 0x0                            ; 00443678
    LEA EAX,[ESP + 0x310]               ; 0044367a
    PUSH EAX                            ; 00443681
    PUSH 0x0                            ; 00443682
    PUSH 0x0                            ; 00443684
    LEA EAX,[ESP + 0x114]               ; 00443686
    PUSH EAX                            ; 0044368d
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0044368e
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00443693
    MOV ESI,0x619327                    ; 00443696 | = ".pth"
    LEA EDI,[ESP + 0x30c]               ; 0044369b
    PUSH EDI                            ; 004436a2
    SUB ECX,ECX                         ; 004436a3
    DEC ECX                             ; 004436a5
    MOV AL,0x0                          ; 004436a6
    SCASB.REPNE ES:EDI                  ; 004436a8
    DEC EDI                             ; 004436aa
    MOV AL,byte ptr [ESI]               ; 004436ab | = ".pth" | DAT_00619329
        ;   Label: LAB_004436ab
    MOV byte ptr [EDI],AL               ; 004436ad
    CMP AL,0x0                          ; 004436af
    JZ 0x004436c3                       ; 004436b1
        ;   XREF to: 004436c3 (CONDITIONAL_JUMP)  ; LAB_004436c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004436b3 | DAT_00619328 | DAT_0061932a
    ADD ESI,0x2                         ; 004436b6
    MOV byte ptr [EDI + 0x1],AL         ; 004436b9
    ADD EDI,0x2                         ; 004436bc
    CMP AL,0x0                          ; 004436bf
    JNZ 0x004436ab                      ; 004436c1
        ;   XREF to: 004436ab (CONDITIONAL_JUMP)  ; LAB_004436ab
    POP EDI                             ; 004436c3
        ;   Label: LAB_004436c3
    JMP 0x004431bd                      ; 004436c4
        ;   XREF to: 004431bd (UNCONDITIONAL_JUMP)  ; LAB_004431bd

