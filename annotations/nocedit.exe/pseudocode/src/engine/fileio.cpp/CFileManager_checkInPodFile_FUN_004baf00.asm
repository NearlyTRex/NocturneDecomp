; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_fileio_cpp_CFileManager_checkInPodFile_FUN_004baf00 (CFileManager *this_ptr,char *checkout_item_name,char *timestamp_file,char *pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   checkout_item_name
; char *           Stack[0xc]:4   timestamp_file
; char *           Stack[0x10]:4   pod_filename
; Local Variables:
; undefined4       Stack[-0x2608]:4  local_2608
; undefined        Stack[-0x2600]:1  local_2600
; undefined4       Stack[-0x21f0]:4  local_21f0
; undefined4       Stack[-0x21ec]:4  local_21ec
; undefined        Stack[-0x21d4]:1  local_21d4
; undefined        Stack[-0x1e2c]:1  local_1e2c
; undefined        Stack[-0x1a84]:1  local_1a84
; undefined        Stack[-0x16dc]:1  local_16dc
; undefined1       Stack[-0x16db]:1  local_16db
; undefined4       Stack[-0x14d8]:4  local_14d8
; undefined4       Stack[-0x14d0]:4  local_14d0
; undefined        Stack[-0x14c8]:1  local_14c8
; undefined1       Stack[-0x14c7]:1  local_14c7
; undefined4       Stack[-0x12c4]:4  local_12c4
; undefined4       Stack[-0x12bc]:4  local_12bc
; undefined        Stack[-0x12b4]:1  local_12b4
; undefined1       Stack[-0x12b3]:1  local_12b3
; undefined4       Stack[-0x10b0]:4  local_10b0
; undefined4       Stack[-0x10a8]:4  local_10a8
; undefined        Stack[-0x10a0]:1  local_10a0
; undefined        Stack[-0xeac]:1  local_eac
; undefined        Stack[-0xd1c]:1  local_d1c
; undefined        Stack[-0xb8c]:1  local_b8c
; undefined1       Stack[-0xb8b]:1  local_b8b
; undefined        Stack[-0xa88]:1  local_a88
; undefined        Stack[-0x984]:1  local_984
; undefined1       Stack[-0x983]:1  local_983
; undefined        Stack[-0x880]:1  local_880
; undefined1       Stack[-0x87f]:1  local_87f
; undefined        Stack[-0x77c]:1  local_77c
; undefined        Stack[-0x678]:1  local_678
; undefined1       Stack[-0x677]:1  local_677
; undefined        Stack[-0x574]:1  local_574
; undefined1       Stack[-0x573]:1  local_573
; undefined        Stack[-0x470]:1  local_470
; undefined        Stack[-0x370]:1  local_370
; undefined        Stack[-0x270]:1  local_270
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   SLEEP_FUNC* g_SleepFunc = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626060
;   TerminatedCString s_versionControlDirectory__00626075
;   TerminatedCString s_checkout_txt_00626096
;   undefined4 s_heckout.txt_00626097
;   undefined4 s_eckout.txt_00626098
;   undefined4 s_ckout.txt_00626099
;   TerminatedCString s_engine_fileio_cpp_006260a3
;   TerminatedCString s_versionControlDirectory__006260b8
;   TerminatedCString s_history_s_s_006260d9
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_anon_00626a5d
;   TerminatedCString s_Select_file_to_undo_chec_00626a5f
;   TerminatedCString s_anon_00626a7d
;   ... and 65 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c__errno_FUN_00601450
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fflush_FUN_00601540
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdio.c_rename_FUN_006015d0
;   crt_stdio.c_setvbuf_FUN_00601490
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__time_FUN_006001f0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getFileTimestamp_FUN_00481960
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baf00
        ;   Label: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
    PUSH ESI                            ; 004baf01
    PUSH EDI                            ; 004baf02
    PUSH EBP                            ; 004baf03
    MOV EBP,ESP                         ; 004baf04
    SUB ESP,0x25ec                      ; 004baf06
    AND ESP,0xfffffff8                  ; 004baf0c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004baf0f
    PUSH EDX                            ; 004baf12
    CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 ; 004baf13
        ;   XREF to: 004bccf0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004baf18
    TEST EAX,EAX                        ; 004baf1b
    JNZ 0x004baf2a                      ; 004baf1d
        ;   XREF to: 004baf2a (CONDITIONAL_JUMP)  ; LAB_004baf2a
    XOR ESI,ESI                         ; 004baf1f
        ;   Label: LAB_004baf1f
    MOV EAX,ESI                         ; 004baf21
    MOV ESP,EBP                         ; 004baf23
    POP EBP                             ; 004baf25
    POP EDI                             ; 004baf26
    POP ESI                             ; 004baf27
    POP EBX                             ; 004baf28
    RET                                 ; 004baf29
    PUSH 0x628dd7                       ; 004baf2a | = "*.pod"
        ;   Label: LAB_004baf2a
    PUSH 0x628ddd                       ; 004baf2f | = "Select file to check in"
    LEA EAX,[ESP + 0x1e8c]              ; 004baf34
    PUSH EAX                            ; 004baf3b
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004baf3c
    PUSH ECX                            ; 004baf3f
    MOV EBX,dword ptr [EBP + 0x18]      ; 004baf40
    PUSH EBX                            ; 004baf43
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004baf44
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, ...)
    ADD ESP,0x14                        ; 004baf49
    TEST EAX,EAX                        ; 004baf4c
    JZ 0x004baf1f                       ; 004baf4e
        ;   XREF to: 004baf1f (CONDITIONAL_JUMP)  ; LAB_004baf1f
    MOV EAX,ESP                         ; 004baf50
    PUSH EAX                            ; 004baf52
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004baf53
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004baf58
    LEA EAX,[ESP + 0x1e84]              ; 004baf5b
    PUSH EAX                            ; 004baf62
    LEA EAX,[ESP + 0x4]                 ; 004baf63
    PUSH EAX                            ; 004baf67
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004baf68
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004baf6d
    TEST EAX,EAX                        ; 004baf70
    JZ 0x004bb213                       ; 004baf72
        ;   XREF to: 004bb213 (CONDITIONAL_JUMP)  ; LAB_004bb213
    XOR EAX,EAX                         ; 004baf78
    MOV EDX,dword ptr [ESP + 0x410]     ; 004baf7a
    MOV dword ptr [ESP + 0x25d0],EAX    ; 004baf81
    TEST EDX,EDX                        ; 004baf88
    JLE 0x004bafed                      ; 004baf8a
        ;   XREF to: 004bafed (CONDITIONAL_JUMP)  ; LAB_004bafed
    MOV dword ptr [ESP + 0x25d4],EAX    ; 004baf8c
    MOV EBX,dword ptr [ESP + 0x414]     ; 004baf93
        ;   Label: LAB_004baf93
    ADD EBX,dword ptr [ESP + 0x25d4]    ; 004baf9a
    LEA EDI,[ESP + 0x1138]              ; 004bafa1
    MOV ESI,dword ptr [EBX]             ; 004bafa8
    PUSH EDI                            ; 004bafaa
    MOV AL,byte ptr [ESI]               ; 004bafab
        ;   Label: LAB_004bafab
    MOV byte ptr [EDI],AL               ; 004bafad
    CMP AL,0x0                          ; 004bafaf
    JZ 0x004bafc3                       ; 004bafb1
        ;   XREF to: 004bafc3 (CONDITIONAL_JUMP)  ; LAB_004bafc3
    MOV AL,byte ptr [ESI + 0x1]         ; 004bafb3
    ADD ESI,0x2                         ; 004bafb6
    MOV byte ptr [EDI + 0x1],AL         ; 004bafb9
    ADD EDI,0x2                         ; 004bafbc
    CMP AL,0x0                          ; 004bafbf
    JNZ 0x004bafab                      ; 004bafc1
        ;   XREF to: 004bafab (CONDITIONAL_JUMP)  ; LAB_004bafab
    POP EDI                             ; 004bafc3
        ;   Label: LAB_004bafc3
    LEA EAX,[ESP + 0x1138]              ; 004bafc4
    PUSH EAX                            ; 004bafcb
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bafcc
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bafd1
    TEST EAX,EAX                        ; 004bafd4
    JZ 0x004bafed                       ; 004bafd6
        ;   XREF to: 004bafed (CONDITIONAL_JUMP)  ; LAB_004bafed
    MOV EAX,dword ptr [EBX + 0xc]       ; 004bafd8
    MOV EDX,dword ptr [ESP + 0x1344]    ; 004bafdb
    ADD EAX,0x2                         ; 004bafe2
    CMP EAX,EDX                         ; 004bafe5
    JNC 0x004bb257                      ; 004bafe7
        ;   XREF to: 004bb257 (CONDITIONAL_JUMP)  ; LAB_004bb257
    MOV EAX,dword ptr [ESP + 0x25d0]    ; 004bafed
        ;   Label: LAB_004bafed
    CMP EAX,dword ptr [ESP + 0x410]     ; 004baff4
    JNZ 0x004bb2a9                      ; 004baffb
        ;   XREF to: 004bb2a9 (CONDITIONAL_JUMP)  ; LAB_004bb2a9
    MOV EDX,dword ptr [0x00680cdc]      ; 004bb001 | g_CDemonPodPtr
        ;   Label: LAB_004bb001
    TEST EDX,EDX                        ; 004bb007
    JZ 0x004bb024                       ; 004bb009
        ;   XREF to: 004bb024 (CONDITIONAL_JUMP)  ; LAB_004bb024
    LEA EAX,[ESP + 0x1e84]              ; 004bb00b
    PUSH EAX                            ; 004bb012
    PUSH EDX                            ; 004bb013 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 ; 004bb014
        ;   XREF to: 00551280 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bb019
    TEST EAX,EAX                        ; 004bb01c
    JZ 0x004bb399                       ; 004bb01e
        ;   XREF to: 004bb399 (CONDITIONAL_JUMP)  ; LAB_004bb399
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bb024
        ;   Label: LAB_004bb024
    MOV ECX,0x41                        ; 004bb027
    LEA EDI,[ESP + 0x1d80]              ; 004bb02c
    PUSH 0x626a7d                       ; 004bb033 | = "*"
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bb038
    XOR ESI,ESI                         ; 004bb03b
    MOV dword ptr [ESP + 0x25b4],EAX    ; 004bb03d
    LEA EAX,[ESP + 0x1e88]              ; 004bb044
    PUSH 0x626a7f                       ; 004bb04b | = "Select file to check in"
    MOV dword ptr [ESP + 0x25cc],EAX    ; 004bb050
    LEA EAX,[ESP + 0x1354]              ; 004bb057
    MOV dword ptr [ESP + 0x25b4],ESI    ; 004bb05e
    PUSH EAX                            ; 004bb065
    LEA EAX,[ESP + 0x1e90]              ; 004bb066
    MOV dword ptr [ESP + 0x25d4],ESI    ; 004bb06d
    PUSH EAX                            ; 004bb074
    MOV dword ptr [ESP + 0x25dc],ESI    ; 004bb075
    MOV ESI,0x679dd8                    ; 004bb07c | g_DefaultCheckOutPath
    PUSH EDX                            ; 004bb081
    MOVSD.REP ES:EDI,ESI                ; 004bb082 | g_DefaultCheckOutPath | s__00679ddc
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004bb084
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, ...)
    ADD ESP,0x14                        ; 004bb089
    TEST EAX,EAX                        ; 004bb08c
    JZ 0x004bb1fa                       ; 004bb08e
        ;   XREF to: 004bb1fa (CONDITIONAL_JUMP)  ; LAB_004bb1fa
    LEA EAX,[ESP + 0x134c]              ; 004bb094
    PUSH EAX                            ; 004bb09b
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bb09c
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bb0a1
    TEST EAX,EAX                        ; 004bb0a4
    JZ 0x004bb3ce                       ; 004bb0a6
        ;   XREF to: 004bb3ce (CONDITIONAL_JUMP)  ; LAB_004bb3ce
    LEA EAX,[ESP + 0x2290]              ; 004bb0ac
    PUSH EAX                            ; 004bb0b3
    LEA EAX,[ESP + 0x25e4]              ; 004bb0b4
    PUSH EAX                            ; 004bb0bb
    MOV EBX,dword ptr [EBP + 0x18]      ; 004bb0bc
    PUSH EBX                            ; 004bb0bf
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004bb0c0
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004bb0c5
    PUSH 0x0                            ; 004bb0c8
    PUSH 0x0                            ; 004bb0ca
    LEA EAX,[ESP + 0x2298]              ; 004bb0cc
    PUSH EAX                            ; 004bb0d3
    LEA EAX,[ESP + 0x25ec]              ; 004bb0d4
    PUSH EAX                            ; 004bb0db
    LEA EAX,[ESP + 0xf34]               ; 004bb0dc
    PUSH EAX                            ; 004bb0e3
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004bb0e4
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bb0e9
    LEA ESI,[ESP + 0x134c]              ; 004bb0ec
    LEA EDI,[ESP + 0xf24]               ; 004bb0f3
    PUSH EDI                            ; 004bb0fa
    SUB ECX,ECX                         ; 004bb0fb
    DEC ECX                             ; 004bb0fd
    MOV AL,0x0                          ; 004bb0fe
    SCASB.REPNE ES:EDI                  ; 004bb100
    DEC EDI                             ; 004bb102
    MOV AL,byte ptr [ESI]               ; 004bb103
        ;   Label: LAB_004bb103
    MOV byte ptr [EDI],AL               ; 004bb105
    CMP AL,0x0                          ; 004bb107
    JZ 0x004bb11b                       ; 004bb109
        ;   XREF to: 004bb11b (CONDITIONAL_JUMP)  ; LAB_004bb11b
    MOV AL,byte ptr [ESI + 0x1]         ; 004bb10b
    ADD ESI,0x2                         ; 004bb10e
    MOV byte ptr [EDI + 0x1],AL         ; 004bb111
    ADD EDI,0x2                         ; 004bb114
    CMP AL,0x0                          ; 004bb117
    JNZ 0x004bb103                      ; 004bb119
        ;   XREF to: 004bb103 (CONDITIONAL_JUMP)  ; LAB_004bb103
    POP EDI                             ; 004bb11b
        ;   Label: LAB_004bb11b
    LEA EAX,[ESP + 0xf24]               ; 004bb11c
    PUSH EAX                            ; 004bb123
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bb124
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bb129
    TEST EAX,EAX                        ; 004bb12c
    JZ 0x004bb3ef                       ; 004bb12e
        ;   XREF to: 004bb3ef (CONDITIONAL_JUMP)  ; LAB_004bb3ef
    MOV EAX,dword ptr [ESP + 0x1550]    ; 004bb134
    CMP EAX,dword ptr [ESP + 0x1128]    ; 004bb13b
    JNZ 0x004bb58e                      ; 004bb142
        ;   XREF to: 004bb58e (CONDITIONAL_JUMP)  ; LAB_004bb58e
    MOV EAX,dword ptr [ESP + 0x1130]    ; 004bb148
    MOV EDX,dword ptr [ESP + 0x1558]    ; 004bb14f
    ADD EAX,0x2                         ; 004bb156
    CMP EAX,EDX                         ; 004bb159
    JBE 0x004bb58e                      ; 004bb15b
        ;   XREF to: 004bb58e (CONDITIONAL_JUMP)  ; LAB_004bb58e
    MOV ECX,dword ptr [ESP + 0x1130]    ; 004bb161
    LEA EAX,[EDX + 0x2]                 ; 004bb168
    CMP EAX,ECX                         ; 004bb16b
    JBE 0x004bb58e                      ; 004bb16d
        ;   XREF to: 004bb58e (CONDITIONAL_JUMP)  ; LAB_004bb58e
    LEA EAX,[ESP + 0xb7c]               ; 004bb173
    PUSH EAX                            ; 004bb17a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bb17b
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004bb180
    PUSH 0x626aeb                       ; 004bb183 | = "Undo the checkout."
    LEA EAX,[ESP + 0xb80]               ; 004bb188
    PUSH EAX                            ; 004bb18f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bb190
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bb195
    PUSH 0x626afe                       ; 004bb198 | = "Yes, I did change the file.  Check it..."
    LEA EAX,[ESP + 0xb80]               ; 004bb19d
    PUSH EAX                            ; 004bb1a4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bb1a5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bb1aa
    PUSH 0x626b4e                       ; 004bb1ad | = "Oops.  Keep the file checked out."
    LEA EAX,[ESP + 0xb80]               ; 004bb1b2
    PUSH EAX                            ; 004bb1b9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bb1ba
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bb1bf
    PUSH 0x0                            ; 004bb1c2
    PUSH -0x1                           ; 004bb1c4
    PUSH 0x626b70                       ; 004bb1c6 | = "Checking in file that didn't change."
    LEA EAX,[ESP + 0xb88]               ; 004bb1cb
    PUSH EAX                            ; 004bb1d2
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bb1d3
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004bb1d8
    TEST EAX,EAX                        ; 004bb1db
    JL 0x004bb1e8                       ; 004bb1dd
        ;   XREF to: 004bb1e8 (CONDITIONAL_JUMP)  ; LAB_004bb1e8
    CMP EAX,0x2                         ; 004bb1df
    JNZ 0x004bb410                      ; 004bb1e2
        ;   XREF to: 004bb410 (CONDITIONAL_JUMP)  ; LAB_004bb410
    PUSH 0x0                            ; 004bb1e8
        ;   Label: LAB_004bb1e8
    LEA EAX,[ESP + 0xb80]               ; 004bb1ea
    PUSH EAX                            ; 004bb1f1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bb1f2
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb1f7
    XOR ESI,ESI                         ; 004bb1fa
        ;   Label: LAB_004bb1fa
    PUSH ESI                            ; 004bb1fc
    LEA EAX,[ESP + 0x4]                 ; 004bb1fd
    PUSH EAX                            ; 004bb201
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bb202
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bb207
    MOV EAX,ESI                         ; 004bb20a
    MOV ESP,EBP                         ; 004bb20c
    POP EBP                             ; 004bb20e
    POP EDI                             ; 004bb20f
    POP ESI                             ; 004bb210
    POP EBX                             ; 004bb211
    RET                                 ; 004bb212
    MOV ESI,dword ptr [0x00678a60]      ; 004bb213 | g_CEditorToolsPtr
        ;   Label: LAB_004bb213
    PUSH ESI                            ; 004bb219 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004bb21a
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004bb21f
    LEA EAX,[ESP + 0x1e84]              ; 004bb222
    PUSH EAX                            ; 004bb229
    PUSH 0x628df5                       ; 004bb22a | = "Can't mount %s to check status"
    MOV EDI,dword ptr [0x00678a60]      ; 004bb22f | g_CEditorToolsPtr
    PUSH EDI                            ; 004bb235 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bb236
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bb23b
    XOR ESI,ESI                         ; 004bb23e
    PUSH ESI                            ; 004bb240
    LEA EAX,[ESP + 0x4]                 ; 004bb241
    PUSH EAX                            ; 004bb245
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bb246
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bb24b
    MOV EAX,ESI                         ; 004bb24e
    MOV ESP,EBP                         ; 004bb250
    POP EBP                             ; 004bb252
    POP EDI                             ; 004bb253
    POP ESI                             ; 004bb254
    POP EBX                             ; 004bb255
    RET                                 ; 004bb256
    MOV EAX,dword ptr [EBX + 0xc]       ; 004bb257
        ;   Label: LAB_004bb257
    SUB EAX,0x2                         ; 004bb25a
    CMP EAX,EDX                         ; 004bb25d
    JA 0x004bafed                       ; 004bb25f
        ;   XREF to: 004bafed (CONDITIONAL_JUMP)  ; LAB_004bafed
    MOV EAX,dword ptr [ESP + 0x133c]    ; 004bb265
    CMP EAX,dword ptr [EBX + 0x4]       ; 004bb26c
    JNZ 0x004bafed                      ; 004bb26f
        ;   XREF to: 004bafed (CONDITIONAL_JUMP)  ; LAB_004bafed
    MOV ECX,dword ptr [ESP + 0x25d4]    ; 004bb275
    MOV EBX,dword ptr [ESP + 0x25d0]    ; 004bb27c
    MOV ESI,dword ptr [ESP + 0x410]     ; 004bb283
    ADD ECX,0x14                        ; 004bb28a
    INC EBX                             ; 004bb28d
    MOV dword ptr [ESP + 0x25d4],ECX    ; 004bb28e
    MOV dword ptr [ESP + 0x25d0],EBX    ; 004bb295
    CMP EBX,ESI                         ; 004bb29c
    JL 0x004baf93                       ; 004bb29e
        ;   XREF to: 004baf93 (CONDITIONAL_JUMP)  ; LAB_004baf93
    JMP 0x004bafed                      ; 004bb2a4
        ;   XREF to: 004bafed (UNCONDITIONAL_JUMP)  ; LAB_004bafed
    LEA EAX,[ESP + 0x7d4]               ; 004bb2a9
        ;   Label: LAB_004bb2a9
    PUSH EAX                            ; 004bb2b0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bb2b1
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004bb2b6
    PUSH 0x628e14                       ; 004bb2b9 | = "That's OK, check it in anyway."
    LEA EAX,[ESP + 0x7d8]               ; 004bb2be
    PUSH EAX                            ; 004bb2c5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bb2c6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bb2cb
    PUSH 0x628e33                       ; 004bb2ce | = "Oops.  Don't check the POD in."
    LEA EAX,[ESP + 0x7d8]               ; 004bb2d3
    PUSH EAX                            ; 004bb2da
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bb2db
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bb2e0
    PUSH 0x628e52                       ; 004bb2e3 | = "Show local file differences."
    LEA EAX,[ESP + 0x7d8]               ; 004bb2e8
    PUSH EAX                            ; 004bb2ef
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bb2f0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bb2f5
    LEA EAX,[ESP + 0x1e84]              ; 004bb2f8
    PUSH EAX                            ; 004bb2ff
    PUSH 0x628e6f                       ; 004bb300 | = "WARNING!\n\nYou are about to check in..."
    LEA EAX,[ESP + 0x175c]              ; 004bb305
    PUSH EAX                            ; 004bb30c
    MOV ESI,0x1                         ; 004bb30d
    XOR EBX,EBX                         ; 004bb312
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bb314
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bb319
    PUSH EBX                            ; 004bb31c
        ;   Label: LAB_004bb31c
    PUSH ESI                            ; 004bb31d
    LEA EAX,[ESP + 0x175c]              ; 004bb31e
    PUSH EAX                            ; 004bb325
    LEA EAX,[ESP + 0x7e0]               ; 004bb326
    PUSH EAX                            ; 004bb32d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bb32e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004bb333
    TEST EAX,EAX                        ; 004bb336
    JL 0x004bb359                       ; 004bb338
        ;   XREF to: 004bb359 (CONDITIONAL_JUMP)  ; LAB_004bb359
    CMP EAX,0x1                         ; 004bb33a
    JZ 0x004bb359                       ; 004bb33d
        ;   XREF to: 004bb359 (CONDITIONAL_JUMP)  ; LAB_004bb359
    TEST EAX,EAX                        ; 004bb33f
    JZ 0x004bb383                       ; 004bb341
        ;   XREF to: 004bb383 (CONDITIONAL_JUMP)  ; LAB_004bb383
    LEA EAX,[ESP + 0x1e84]              ; 004bb343
    PUSH EAX                            ; 004bb34a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bb34b
    PUSH EAX                            ; 004bb34e
    CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 ; 004bb34f
        ;   XREF to: 004b82a0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bb354
    JMP 0x004bb31c                      ; 004bb357
        ;   XREF to: 004bb31c (UNCONDITIONAL_JUMP)  ; LAB_004bb31c
    XOR ESI,ESI                         ; 004bb359
        ;   Label: LAB_004bb359
    PUSH ESI                            ; 004bb35b
    LEA EAX,[ESP + 0x7d8]               ; 004bb35c
    PUSH EAX                            ; 004bb363
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bb364
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb369
    PUSH ESI                            ; 004bb36c
    LEA EAX,[ESP + 0x4]                 ; 004bb36d
    PUSH EAX                            ; 004bb371
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bb372
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bb377
    MOV EAX,ESI                         ; 004bb37a
    MOV ESP,EBP                         ; 004bb37c
    POP EBP                             ; 004bb37e
    POP EDI                             ; 004bb37f
    POP ESI                             ; 004bb380
    POP EBX                             ; 004bb381
    RET                                 ; 004bb382
    PUSH EAX                            ; 004bb383
        ;   Label: LAB_004bb383
    LEA EAX,[ESP + 0x7d8]               ; 004bb384
    PUSH EAX                            ; 004bb38b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bb38c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb391
    JMP 0x004bb001                      ; 004bb394
        ;   XREF to: 004bb001 (UNCONDITIONAL_JUMP)  ; LAB_004bb001
    LEA EAX,[ESP + 0x1e84]              ; 004bb399
        ;   Label: LAB_004bb399
    PUSH EAX                            ; 004bb3a0
    PUSH 0x628f06                       ; 004bb3a1 | = "%s fails CRC check.  File not checked in"
    MOV EBX,dword ptr [0x00678a60]      ; 004bb3a6 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bb3ac | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bb3ad
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bb3b2
    XOR ESI,ESI                         ; 004bb3b5
    PUSH ESI                            ; 004bb3b7
    LEA EAX,[ESP + 0x4]                 ; 004bb3b8
    PUSH EAX                            ; 004bb3bc
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bb3bd
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bb3c2
    MOV EAX,ESI                         ; 004bb3c5
    MOV ESP,EBP                         ; 004bb3c7
    POP EBP                             ; 004bb3c9
    POP EDI                             ; 004bb3ca
    POP ESI                             ; 004bb3cb
    POP EBX                             ; 004bb3cc
    RET                                 ; 004bb3cd
    LEA EAX,[ESP + 0x134c]              ; 004bb3ce
        ;   Label: LAB_004bb3ce
    PUSH EAX                            ; 004bb3d5
    PUSH 0x626a97                       ; 004bb3d6 | = "Error accessing %s.  File not checked..."
    MOV ECX,dword ptr [0x00678a60]      ; 004bb3db | g_CEditorToolsPtr
    PUSH ECX                            ; 004bb3e1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bb3e2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bb3e7
    JMP 0x004bb1fa                      ; 004bb3ea
        ;   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)  ; LAB_004bb1fa
    LEA EAX,[ESP + 0xf24]               ; 004bb3ef
        ;   Label: LAB_004bb3ef
    PUSH EAX                            ; 004bb3f6
    PUSH 0x626ac1                       ; 004bb3f7 | = "Error accessing %s.  File not checked..."
    MOV ESI,dword ptr [0x00678a60]      ; 004bb3fc | g_CEditorToolsPtr
    PUSH ESI                            ; 004bb402 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bb403
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bb408
    JMP 0x004bb1fa                      ; 004bb40b
        ;   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)  ; LAB_004bb1fa
    TEST EAX,EAX                        ; 004bb410
        ;   Label: LAB_004bb410
    JNZ 0x004bb57c                      ; 004bb412
        ;   XREF to: 004bb57c (CONDITIONAL_JUMP)  ; LAB_004bb57c
    PUSH 0x626a5d                       ; 004bb418 | = "*"
    PUSH 0x626a5f                       ; 004bb41d | = "Select file to undo check out"
    LEA EAX,[ESP + 0x1b80]              ; 004bb422
    PUSH EAX                            ; 004bb429
    LEA EAX,[ESP + 0x1e90]              ; 004bb42a
    PUSH EAX                            ; 004bb431
    PUSH EBX                            ; 004bb432
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004bb433
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, ...)
    ADD ESP,0x14                        ; 004bb438
    TEST EAX,EAX                        ; 004bb43b
    JZ 0x004bb575                       ; 004bb43d
        ;   XREF to: 004bb575 (CONDITIONAL_JUMP)  ; LAB_004bb575
    LEA EAX,[ESP + 0x1b78]              ; 004bb443
    PUSH EAX                            ; 004bb44a
    PUSH EBX                            ; 004bb44b
    CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 ; 004bb44c
        ;   XREF to: 004b35a0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)
    ADD ESP,0x8                         ; 004bb451
    TEST EAX,EAX                        ; 004bb454
    JZ 0x004bb575                       ; 004bb456
        ;   XREF to: 004bb575 (CONDITIONAL_JUMP)  ; LAB_004bb575
    LEA EAX,[ESP + 0x1b78]              ; 004bb45c
    PUSH EAX                            ; 004bb463
    PUSH EBX                            ; 004bb464
    CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 ; 004bb465
        ;   XREF to: 004b3220 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
    ADD ESP,0x8                         ; 004bb46a
    MOV EBX,EAX                         ; 004bb46d
    PUSH 0x0                            ; 004bb46f
        ;   Label: LAB_004bb46f
    LEA EAX,[ESP + 0xb80]               ; 004bb471
    PUSH EAX                            ; 004bb478
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bb479
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb47e
    TEST EBX,EBX                        ; 004bb481
    JZ 0x004bb1fa                       ; 004bb483
        ;   XREF to: 004bb1fa (CONDITIONAL_JUMP)  ; LAB_004bb1fa
    CMP EBX,0x2                         ; 004bb489
    JZ 0x004bbfdd                       ; 004bb48c
        ;   XREF to: 004bbfdd (CONDITIONAL_JUMP)  ; LAB_004bbfdd
    LEA EAX,[ESP + 0x2590]              ; 004bb492
        ;   Label: LAB_004bb492
    PUSH EAX                            ; 004bb499
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bb49a
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bb49f
    LEA EAX,[ESP + 0x2590]              ; 004bb4a2
    PUSH EAX                            ; 004bb4a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004bb4aa
    PUSH EDI                            ; 004bb4ad
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004bb4ae
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bb4b3
    LEA EAX,[ESP + 0x1e84]              ; 004bb4b6
    PUSH EAX                            ; 004bb4bd
    LEA EAX,[ESP + 0x2594]              ; 004bb4be
    PUSH EAX                            ; 004bb4c5
    PUSH EDI                            ; 004bb4c6
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004bb4c7
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004bb4cc
    TEST EAX,EAX                        ; 004bb4cf
    JL 0x004bc112                       ; 004bb4d1
        ;   XREF to: 004bc112 (CONDITIONAL_JUMP)  ; LAB_004bc112
    PUSH 0x628fa5                       ; 004bb4d7 | = "Delete local files?"
    MOV EDX,dword ptr [0x00678a60]      ; 004bb4dc | g_CEditorToolsPtr
    PUSH EDX                            ; 004bb4e2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004bb4e3
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004bb4e8
    TEST EAX,EAX                        ; 004bb4eb
    JZ 0x004bb508                       ; 004bb4ed
        ;   XREF to: 004bb508 (CONDITIONAL_JUMP)  ; LAB_004bb508
    LEA EAX,[ESP + 0x1e84]              ; 004bb4ef
    PUSH EAX                            ; 004bb4f6
    PUSH EDI                            ; 004bb4f7
    CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 ; 004bb4f8
        ;   XREF to: 004bca50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bb4fd
    TEST EAX,EAX                        ; 004bb500
    JZ 0x004bc286                       ; 004bb502
        ;   XREF to: 004bc286 (CONDITIONAL_JUMP)  ; LAB_004bc286
    CMP dword ptr [0x00680cdc],0x0      ; 004bb508 | g_CDemonPodPtr
        ;   Label: LAB_004bb508
    JZ 0x004bb546                       ; 004bb50f
        ;   XREF to: 004bb546 (CONDITIONAL_JUMP)  ; LAB_004bb546
    PUSH 0x62759a                       ; 004bb511 | = "Remounting all pods..."
    MOV ECX,dword ptr [0x00678a60]      ; 004bb516 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bb51c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bb51d
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004bb522
    MOV EBX,dword ptr [0x00680cdc]      ; 004bb525 | g_CDemonPodPtr
    PUSH EBX                            ; 004bb52b | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004bb52c
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 004bb531
    MOV EAX,[0x00680cdc]                ; 004bb534 | g_CDemonPodPtr
    PUSH EAX                            ; 004bb539 | g_CDemonPodInstance
    MOV EBX,dword ptr [EAX + 0x194]     ; 004bb53a | DAT_030e5224
    CALL dword ptr [EBX + 0x4]          ; 004bb540
    ADD ESP,0x4                         ; 004bb543
    PUSH 0x0                            ; 004bb546
        ;   Label: LAB_004bb546
    LEA EAX,[ESP + 0x2594]              ; 004bb548
    PUSH EAX                            ; 004bb54f
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bb550
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb555
    PUSH 0x0                            ; 004bb558
    LEA EAX,[ESP + 0x4]                 ; 004bb55a
    PUSH EAX                            ; 004bb55e
    MOV ESI,0x1                         ; 004bb55f
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bb564
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bb569
    MOV EAX,ESI                         ; 004bb56c
    MOV ESP,EBP                         ; 004bb56e
    POP EBP                             ; 004bb570
    POP EDI                             ; 004bb571
    POP ESI                             ; 004bb572
    POP EBX                             ; 004bb573
    RET                                 ; 004bb574
    XOR EBX,EBX                         ; 004bb575
        ;   Label: LAB_004bb575
    JMP 0x004bb46f                      ; 004bb577
        ;   XREF to: 004bb46f (UNCONDITIONAL_JUMP)  ; LAB_004bb46f
    PUSH 0x0                            ; 004bb57c
        ;   Label: LAB_004bb57c
    LEA EAX,[ESP + 0xb80]               ; 004bb57e
    PUSH EAX                            ; 004bb585
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bb586
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bb58b
    LEA EAX,[ESP + 0x134c]              ; 004bb58e
        ;   Label: LAB_004bb58e
    PUSH EAX                            ; 004bb595
    PUSH 0x626b95                       ; 004bb596 | = "Keep %s checked out after updating to..."
    MOV EBX,dword ptr [0x00678a60]      ; 004bb59b | g_CEditorToolsPtr
    PUSH EBX                            ; 004bb5a1 | g_CEditorToolsInstance
    MOV ESI,0x626bc4                    ; 004bb5a2 | = "history"
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004bb5a7
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 004bb5ac
    LEA EDI,[ESP + 0x1c7c]              ; 004bb5af
    MOV dword ptr [ESP + 0x25bc],EAX    ; 004bb5b6
    MOV AH,byte ptr [0x02d12ac8]        ; 004bb5bd | g_VersionControlDirectory
    MOV EBX,dword ptr [ESP + 0x25c4]    ; 004bb5c3
    TEST AH,AH                          ; 004bb5ca
    JNZ 0x004bb5f0                      ; 004bb5cc
        ;   XREF to: 004bb5f0 (CONDITIONAL_JUMP)  ; LAB_004bb5f0
    MOV EAX,0x6260a3                    ; 004bb5ce | = "..\\engine\\fileio.cpp"
    MOV EDX,0xe7                        ; 004bb5d3
    PUSH 0x6260b8                       ; 004bb5d8 | = "versionControlDirectory not set!"
    MOV [0x02f0ca48],EAX                ; 004bb5dd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004bb5e2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bb5e8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004bb5ed
    PUSH ESI                            ; 004bb5f0 | = "history"
        ;   Label: LAB_004bb5f0
    PUSH EBX                            ; 004bb5f1
    PUSH 0x6260d9                       ; 004bb5f2 | = "history\\%s.%s"
    LEA EAX,[ESP + 0x1a80]              ; 004bb5f7
    PUSH EAX                            ; 004bb5fe
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bb5ff
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004bb604
    LEA EAX,[ESP + 0x2490]              ; 004bb607
    PUSH EAX                            ; 004bb60e
    LEA EAX,[ESP + 0x25e0]              ; 004bb60f
    PUSH EAX                            ; 004bb616
    PUSH 0x2d12ac8                      ; 004bb617 | g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004bb61c
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004bb621
    PUSH 0x0                            ; 004bb624
    PUSH 0x0                            ; 004bb626
    LEA EAX,[ESP + 0x2498]              ; 004bb628
    PUSH EAX                            ; 004bb62f
    LEA EAX,[ESP + 0x25e8]              ; 004bb630
    PUSH EAX                            ; 004bb637
    PUSH EDI                            ; 004bb638
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004bb639
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bb63e
    LEA ESI,[ESP + 0x1a74]              ; 004bb641
    PUSH EDI                            ; 004bb648
    SUB ECX,ECX                         ; 004bb649
    DEC ECX                             ; 004bb64b
    MOV AL,0x0                          ; 004bb64c
    SCASB.REPNE ES:EDI                  ; 004bb64e
    DEC EDI                             ; 004bb650
    MOV AL,byte ptr [ESI]               ; 004bb651
        ;   Label: LAB_004bb651
    MOV byte ptr [EDI],AL               ; 004bb653
    CMP AL,0x0                          ; 004bb655
    JZ 0x004bb669                       ; 004bb657
        ;   XREF to: 004bb669 (CONDITIONAL_JUMP)  ; LAB_004bb669
    MOV AL,byte ptr [ESI + 0x1]         ; 004bb659
    ADD ESI,0x2                         ; 004bb65c
    MOV byte ptr [EDI + 0x1],AL         ; 004bb65f
    ADD EDI,0x2                         ; 004bb662
    CMP AL,0x0                          ; 004bb665
    JNZ 0x004bb651                      ; 004bb667
        ;   XREF to: 004bb651 (CONDITIONAL_JUMP)  ; LAB_004bb651
    POP EDI                             ; 004bb669
        ;   Label: LAB_004bb669
    LEA EAX,[ESP + 0x1c7c]              ; 004bb66a
    PUSH EAX                            ; 004bb671
    PUSH 0x626bcc                       ; 004bb672 | = "Reading %s"
    MOV ECX,dword ptr [0x00678a60]      ; 004bb677 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bb67d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bb67e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004bb683
    LEA EAX,[ESP + 0x1c7c]              ; 004bb686
    PUSH EAX                            ; 004bb68d
    MOV EBX,dword ptr [ESP + 0x25c8]    ; 004bb68e
    PUSH EBX                            ; 004bb695
    CALL engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 ; 004bb696
        ;   XREF to: 004b2640 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640(char * filename)
    ADD ESP,0x8                         ; 004bb69b
    MOV dword ptr [ESP + 0x25b4],EAX    ; 004bb69e
    TEST EAX,EAX                        ; 004bb6a5
    JL 0x004bb1fa                       ; 004bb6a7
        ;   XREF to: 004bb1fa (CONDITIONAL_JUMP)  ; LAB_004bb1fa
    LEA EAX,[ESP + 0x134c]              ; 004bb6ad
    PUSH EAX                            ; 004bb6b4
    PUSH 0x626bd7                       ; 004bb6b5 | = "Opening local file %s"
    MOV ESI,dword ptr [0x00678a60]      ; 004bb6ba | g_CEditorToolsPtr
    PUSH ESI                            ; 004bb6c0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bb6c1
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004bb6c6
    PUSH 0x567                          ; 004bb6c9
    PUSH 0x626bed                       ; 004bb6ce | = "..\\engine\\fileio.cpp"
    PUSH 0x626c02                       ; 004bb6d3 | = "rb"
    PUSH 0x0                            ; 004bb6d8
    LEA EAX,[ESP + 0x135c]              ; 004bb6da
    PUSH EAX                            ; 004bb6e1
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bb6e2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004bb6e7
    MOV dword ptr [ESP + 0x25c0],EAX    ; 004bb6ea
    TEST EAX,EAX                        ; 004bb6f1
    JZ 0x004bb8ec                       ; 004bb6f3
        ;   XREF to: 004bb8ec (CONDITIONAL_JUMP)  ; LAB_004bb8ec
    CMP byte ptr [0x02d12bf8],0x0       ; 004bb6f9 | g_VersionControlSession.network_username[0]
    JZ 0x004bb723                       ; 004bb700
        ;   XREF to: 004bb723 (CONDITIONAL_JUMP)  ; LAB_004bb723
    PUSH 0x626c13                       ; 004bb702 | = "Logging on as version control user..."
    MOV EDI,dword ptr [0x00678a60]      ; 004bb707 | g_CEditorToolsPtr
    PUSH EDI                            ; 004bb70d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bb70e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004bb713
    CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 ; 004bb716
        ;   XREF to: 004b2770 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770()
    TEST EAX,EAX                        ; 004bb71b
    JZ 0x004bb847                       ; 004bb71d
        ;   XREF to: 004bb847 (CONDITIONAL_JUMP)  ; LAB_004bb847
    LEA EAX,[ESP + 0x134c]              ; 004bb723
        ;   Label: LAB_004bb723
    PUSH EAX                            ; 004bb72a
    PUSH 0x626c39                       ; 004bb72b | = "$$$.%s.$$$"
    LEA EAX,[ESP + 0x2094]              ; 004bb730
    PUSH EAX                            ; 004bb737
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bb738
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bb73d
    LEA EAX,[ESP + 0x2390]              ; 004bb740
    PUSH EAX                            ; 004bb747
    LEA EAX,[ESP + 0x25e8]              ; 004bb748
    PUSH EAX                            ; 004bb74f
    MOV EAX,dword ptr [ESP + 0x25b8]    ; 004bb750
    PUSH EAX                            ; 004bb757
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004bb758
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004bb75d
    PUSH 0x0                            ; 004bb760
    PUSH 0x0                            ; 004bb762
    LEA EAX,[ESP + 0x2398]              ; 004bb764
    PUSH EAX                            ; 004bb76b
    LEA EAX,[ESP + 0x25f0]              ; 004bb76c
    PUSH EAX                            ; 004bb773
    LEA EAX,[ESP + 0x1d90]              ; 004bb774
    PUSH EAX                            ; 004bb77b
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004bb77c
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bb781
    LEA ESI,[ESP + 0x208c]              ; 004bb784
    LEA EDI,[ESP + 0x1d80]              ; 004bb78b
    PUSH EDI                            ; 004bb792
    SUB ECX,ECX                         ; 004bb793
    DEC ECX                             ; 004bb795
    MOV AL,0x0                          ; 004bb796
    SCASB.REPNE ES:EDI                  ; 004bb798
    DEC EDI                             ; 004bb79a
    MOV AL,byte ptr [ESI]               ; 004bb79b
        ;   Label: LAB_004bb79b
    MOV byte ptr [EDI],AL               ; 004bb79d
    CMP AL,0x0                          ; 004bb79f
    JZ 0x004bb7b3                       ; 004bb7a1
        ;   XREF to: 004bb7b3 (CONDITIONAL_JUMP)  ; LAB_004bb7b3
    MOV AL,byte ptr [ESI + 0x1]         ; 004bb7a3
    ADD ESI,0x2                         ; 004bb7a6
    MOV byte ptr [EDI + 0x1],AL         ; 004bb7a9
    ADD EDI,0x2                         ; 004bb7ac
    CMP AL,0x0                          ; 004bb7af
    JNZ 0x004bb79b                      ; 004bb7b1
        ;   XREF to: 004bb79b (CONDITIONAL_JUMP)  ; LAB_004bb79b
    POP EDI                             ; 004bb7b3
        ;   Label: LAB_004bb7b3
    LEA EAX,[ESP + 0x1d80]              ; 004bb7b4
    PUSH EAX                            ; 004bb7bb
    PUSH 0x626c44                       ; 004bb7bc | = "Creating temporary network file %s..."
    MOV EDX,dword ptr [0x00678a60]      ; 004bb7c1 | g_CEditorToolsPtr
    PUSH EDX                            ; 004bb7c7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bb7c8
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004bb7cd
    PUSH 0x0                            ; 004bb7d0
    LEA EAX,[ESP + 0x1d84]              ; 004bb7d2
    PUSH EAX                            ; 004bb7d9
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004bb7da
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004bb7df
    LEA EAX,[ESP + 0x1d80]              ; 004bb7e2
    PUSH EAX                            ; 004bb7e9
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004bb7ea
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004bb7ef
    PUSH 0x591                          ; 004bb7f2
    PUSH 0x626c6a                       ; 004bb7f7 | = "..\\engine\\fileio.cpp"
    PUSH 0x626c7f                       ; 004bb7fc | = "wb"
    PUSH 0x0                            ; 004bb801
    LEA EAX,[ESP + 0x1d90]              ; 004bb803
    PUSH EAX                            ; 004bb80a
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bb80b
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004bb810
    MOV EBX,EAX                         ; 004bb813
    MOV ECX,dword ptr [ESP + 0x25c0]    ; 004bb815
    MOV dword ptr [ESP + 0x25c8],EAX    ; 004bb81c
    TEST ECX,ECX                        ; 004bb823
    JNZ 0x004bb90d                      ; 004bb825
        ;   XREF to: 004bb90d (CONDITIONAL_JUMP)  ; LAB_004bb90d
    LEA EAX,[ESP + 0x1d80]              ; 004bb82b
    PUSH EAX                            ; 004bb832
    PUSH 0x626c82                       ; 004bb833 | = "Can't create %s.\nGet Fletch."
    MOV EBX,dword ptr [0x00678a60]      ; 004bb838 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bb83e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bb83f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004bb83f
    ADD ESP,0xc                         ; 004bb844
    MOV ECX,dword ptr [ESP + 0x25ac]    ; 004bb847
        ;   Label: LAB_004bb847
    TEST ECX,ECX                        ; 004bb84e
    JZ 0x004bb86e                       ; 004bb850
        ;   XREF to: 004bb86e (CONDITIONAL_JUMP)  ; LAB_004bb86e
    PUSH 0xc4                           ; 004bb852
    PUSH 0x62604b                       ; 004bb857 | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004bb85c
    XOR ESI,ESI                         ; 004bb85d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bb85f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bb864
    MOV dword ptr [ESP + 0x25ac],ESI    ; 004bb867
    MOV EDI,dword ptr [ESP + 0x25c8]    ; 004bb86e
        ;   Label: LAB_004bb86e
    TEST EDI,EDI                        ; 004bb875
    JZ 0x004bb88c                       ; 004bb877
        ;   XREF to: 004bb88c (CONDITIONAL_JUMP)  ; LAB_004bb88c
    PUSH 0xc4                           ; 004bb879
    PUSH 0x62604b                       ; 004bb87e | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004bb883
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bb884
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bb889
    MOV EDX,dword ptr [ESP + 0x25c0]    ; 004bb88c
        ;   Label: LAB_004bb88c
    TEST EDX,EDX                        ; 004bb893
    JZ 0x004bb8aa                       ; 004bb895
        ;   XREF to: 004bb8aa (CONDITIONAL_JUMP)  ; LAB_004bb8aa
    PUSH 0xc4                           ; 004bb897
    PUSH 0x62604b                       ; 004bb89c | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004bb8a1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bb8a2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bb8a7
    MOV EBX,dword ptr [ESP + 0x25cc]    ; 004bb8aa
        ;   Label: LAB_004bb8aa
    TEST EBX,EBX                        ; 004bb8b1
    JZ 0x004bb8c8                       ; 004bb8b3
        ;   XREF to: 004bb8c8 (CONDITIONAL_JUMP)  ; LAB_004bb8c8
    PUSH 0xc4                           ; 004bb8b5
    PUSH 0x62604b                       ; 004bb8ba | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004bb8bf
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bb8c0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bb8c5
    CMP byte ptr [ESP + 0x1d80],0x0     ; 004bb8c8
        ;   Label: LAB_004bb8c8
    JZ 0x004bb8e2                       ; 004bb8d0
        ;   XREF to: 004bb8e2 (CONDITIONAL_JUMP)  ; LAB_004bb8e2
    LEA EAX,[ESP + 0x1d80]              ; 004bb8d2
    PUSH EAX                            ; 004bb8d9
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004bb8da
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004bb8df
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004bb8e2
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004bb8e2
    JMP 0x004bb1fa                      ; 004bb8e7
        ;   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)  ; LAB_004bb1fa
    LEA EAX,[ESP + 0x134c]              ; 004bb8ec
        ;   Label: LAB_004bb8ec
    PUSH EAX                            ; 004bb8f3
    PUSH 0x626c05                       ; 004bb8f4 | = "Can't open %s"
    MOV ESI,dword ptr [0x00678a60]      ; 004bb8f9 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bb8ff | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bb900
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bb905
    JMP 0x004bb1fa                      ; 004bb908
        ;   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)  ; LAB_004bb1fa
    PUSH 0x626c9f                       ; 004bb90d | = "Copying file to temporary network file"
        ;   Label: LAB_004bb90d
    MOV ESI,dword ptr [0x00678a60]      ; 004bb912 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bb918 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bb919
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004bb91e
    MOV EDI,dword ptr [ESP + 0x1550]    ; 004bb921
    PUSH EDI                            ; 004bb928
    PUSH 0x626cc6                       ; 004bb929 | = "network"
    LEA EAX,[ESP + 0x1354]              ; 004bb92e
    PUSH EAX                            ; 004bb935
    PUSH EBX                            ; 004bb936
    MOV EAX,dword ptr [ESP + 0x25d0]    ; 004bb937
    PUSH EAX                            ; 004bb93e
    CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 ; 004bb93f
        ;   XREF to: 004b2030 (UNCONDITIONAL_CALL)  ; char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(_FILE * source_file, _FILE * dest_file, char * source_filename, char * dest_filename, ...)
    ADD ESP,0x14                        ; 004bb944
    MOV EDX,dword ptr [ESP + 0x25c0]    ; 004bb947
    MOV EDI,EAX                         ; 004bb94e
    TEST EDX,EDX                        ; 004bb950
    JZ 0x004bb970                       ; 004bb952
        ;   XREF to: 004bb970 (CONDITIONAL_JUMP)  ; LAB_004bb970
    PUSH 0xc4                           ; 004bb954
    PUSH 0x62604b                       ; 004bb959 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004bb95e
    XOR EBX,EBX                         ; 004bb95f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bb961
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bb966
    MOV dword ptr [ESP + 0x25c0],EBX    ; 004bb969
    MOV ESI,dword ptr [ESP + 0x25c8]    ; 004bb970
        ;   Label: LAB_004bb970
    TEST ESI,ESI                        ; 004bb977
    JZ 0x004bb997                       ; 004bb979
        ;   XREF to: 004bb997 (CONDITIONAL_JUMP)  ; LAB_004bb997
    PUSH 0xc4                           ; 004bb97b
    PUSH 0x62604b                       ; 004bb980 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004bb985
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bb986
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bb98b
    XOR EDX,EDX                         ; 004bb98e
    MOV dword ptr [ESP + 0x25c8],EDX    ; 004bb990
    TEST EDI,EDI                        ; 004bb997
        ;   Label: LAB_004bb997
    JNZ 0x004bbbd3                      ; 004bb999
        ;   XREF to: 004bbbd3 (CONDITIONAL_JUMP)  ; LAB_004bbbd3
    MOV DH,byte ptr [0x02d12ac8]        ; 004bb99f | g_VersionControlDirectory
    LEA EDI,[ESP + 0x1f88]              ; 004bb9a5
    TEST DH,DH                          ; 004bb9ac
    JNZ 0x004bb9d3                      ; 004bb9ae
        ;   XREF to: 004bb9d3 (CONDITIONAL_JUMP)  ; LAB_004bb9d3
    MOV ECX,0x626060                    ; 004bb9b0 | = "..\\engine\\fileio.cpp"
    MOV EBX,0xdd                        ; 004bb9b5
    PUSH 0x626075                       ; 004bb9ba | = "versionControlDirectory not set!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004bb9bf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004bb9c5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bb9cb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004bb9d0
    LEA EAX,[ESP + 0x2190]              ; 004bb9d3
        ;   Label: LAB_004bb9d3
    PUSH EAX                            ; 004bb9da
    LEA EAX,[ESP + 0x25ec]              ; 004bb9db
    PUSH EAX                            ; 004bb9e2
    PUSH 0x2d12ac8                      ; 004bb9e3 | g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004bb9e8
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004bb9ed
    PUSH 0x0                            ; 004bb9f0
    PUSH 0x0                            ; 004bb9f2
    LEA EAX,[ESP + 0x2198]              ; 004bb9f4
    PUSH EAX                            ; 004bb9fb
    LEA EAX,[ESP + 0x25f4]              ; 004bb9fc
    PUSH EAX                            ; 004bba03
    PUSH EDI                            ; 004bba04
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004bba05
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bba0a
    MOV ESI,0x626096                    ; 004bba0d | = "checkout.txt"
    PUSH EDI                            ; 004bba12
    SUB ECX,ECX                         ; 004bba13
    DEC ECX                             ; 004bba15
    MOV AL,0x0                          ; 004bba16
    SCASB.REPNE ES:EDI                  ; 004bba18
    DEC EDI                             ; 004bba1a
    MOV AL,byte ptr [ESI]               ; 004bba1b | = "checkout.txt" | s_eckout.txt_00626098
        ;   Label: LAB_004bba1b
    MOV byte ptr [EDI],AL               ; 004bba1d
    CMP AL,0x0                          ; 004bba1f
    JZ 0x004bba33                       ; 004bba21
        ;   XREF to: 004bba33 (CONDITIONAL_JUMP)  ; LAB_004bba33
    MOV AL,byte ptr [ESI + 0x1]         ; 004bba23 | s_heckout.txt_00626097 | s_ckout.txt_00626099
    ADD ESI,0x2                         ; 004bba26
    MOV byte ptr [EDI + 0x1],AL         ; 004bba29
    ADD EDI,0x2                         ; 004bba2c
    CMP AL,0x0                          ; 004bba2f
    JNZ 0x004bba1b                      ; 004bba31
        ;   XREF to: 004bba1b (CONDITIONAL_JUMP)  ; LAB_004bba1b
    POP EDI                             ; 004bba33
        ;   Label: LAB_004bba33
    XOR ESI,ESI                         ; 004bba34
    MOV EAX,dword ptr [ESP + 0x25bc]    ; 004bba36
    MOV dword ptr [ESP + 0x25a0],ESI    ; 004bba3d
    MOV dword ptr [ESP + 0x25a4],ESI    ; 004bba44
    TEST EAX,EAX                        ; 004bba4b
    JZ 0x004bbbe5                       ; 004bba4d
        ;   XREF to: 004bbbe5 (CONDITIONAL_JUMP)  ; LAB_004bbbe5
    MOV EBX,dword ptr [ESP + 0x25c4]    ; 004bba53
        ;   Label: LAB_004bba53
    PUSH EBX                            ; 004bba5a
    PUSH 0x626d46                       ; 004bba5b | = "Finalizing %s to network..."
    MOV ESI,dword ptr [0x00678a60]      ; 004bba60 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bba66 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bba67
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004bba6c
    XOR EBX,EBX                         ; 004bba6f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004bba71
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    XOR EDI,EDI                         ; 004bba76
    PUSH EDI                            ; 004bba78
        ;   Label: LAB_004bba78
    LEA EAX,[ESP + 0xf28]               ; 004bba79
    PUSH EAX                            ; 004bba80
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004bba81
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004bba86
    LEA EAX,[ESP + 0xf24]               ; 004bba89
    PUSH EAX                            ; 004bba90
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004bba91
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004bba96
    LEA EAX,[ESP + 0xf24]               ; 004bba99
    PUSH EAX                            ; 004bbaa0
    LEA EAX,[ESP + 0x1d84]              ; 004bbaa1
    PUSH EAX                            ; 004bbaa8
    CALL crt_stdio.c_rename_FUN_006015d0 ; 004bbaa9
        ;   XREF to: 006015d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_rename_FUN_006015d0(char * old_filename, char * new_filename)
    ADD ESP,0x8                         ; 004bbaae
    TEST EAX,EAX                        ; 004bbab1
    JNZ 0x004bbd57                      ; 004bbab3
        ;   XREF to: 004bbd57 (CONDITIONAL_JUMP)  ; LAB_004bbd57
    TEST EBX,EBX                        ; 004bbab9
    JLE 0x004bbacc                      ; 004bbabb
        ;   XREF to: 004bbacc (CONDITIONAL_JUMP)  ; LAB_004bbacc
    MOV EDX,dword ptr [0x00678a60]      ; 004bbabd | g_CEditorToolsPtr
    PUSH EDX                            ; 004bbac3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004bbac4
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004bbac9
    MOV ECX,dword ptr [ESP + 0x1558]    ; 004bbacc
        ;   Label: LAB_004bbacc
    PUSH ECX                            ; 004bbad3
    LEA EAX,[ESP + 0xf28]               ; 004bbad4
    PUSH EAX                            ; 004bbadb
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004bbadc
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
    ADD ESP,0x8                         ; 004bbae1
    TEST EAX,EAX                        ; 004bbae4
    JZ 0x004bbe5c                       ; 004bbae6
        ;   XREF to: 004bbe5c (CONDITIONAL_JUMP)  ; LAB_004bbe5c
    PUSH 0x8                            ; 004bbaec
    LEA EAX,[ESP + 0xf28]               ; 004bbaee
    PUSH EAX                            ; 004bbaf5
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004bbaf6
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004bbafb
    TEST EAX,EAX                        ; 004bbafe
    JZ 0x004bbeb3                       ; 004bbb00
        ;   XREF to: 004bbeb3 (CONDITIONAL_JUMP)  ; LAB_004bbeb3
    LEA EDI,[ESP + 0x1c7c]              ; 004bbb06
    XOR ESI,ESI                         ; 004bbb0d
    PUSH 0x153                          ; 004bbb0f
        ;   Label: LAB_004bbb0f
    PUSH 0x626129                       ; 004bbb14 | = "..\\engine\\fileio.cpp"
    PUSH 0x62729a                       ; 004bbb19 | = "at"
    PUSH 0x0                            ; 004bbb1e
    PUSH EDI                            ; 004bbb20
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bbb21
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004bbb26
    ADD ESP,0x14                        ; 004bbb28
    TEST EAX,EAX                        ; 004bbb2b
    JZ 0x004bbf0b                       ; 004bbb2d
        ;   XREF to: 004bbf0b (CONDITIONAL_JUMP)  ; LAB_004bbf0b
    PUSH 0x400                          ; 004bbb33
    PUSH 0x0                            ; 004bbb38
    PUSH 0x0                            ; 004bbb3a
    PUSH EAX                            ; 004bbb3c
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004bbb3d
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004bbb42
    MOV dword ptr [ESP + 0x25cc],EBX    ; 004bbb45
        ;   Label: LAB_004bbb45
    TEST EBX,EBX                        ; 004bbb4c
    JNZ 0x004bbf32                      ; 004bbb4e
        ;   XREF to: 004bbf32 (CONDITIONAL_JUMP)  ; LAB_004bbf32
    MOV EDX,dword ptr [ESP + 0x25ac]    ; 004bbb54
        ;   Label: LAB_004bbb54
    TEST EDX,EDX                        ; 004bbb5b
    JZ 0x004bbb7b                       ; 004bbb5d
        ;   XREF to: 004bbb7b (CONDITIONAL_JUMP)  ; LAB_004bbb7b
    PUSH 0xc4                           ; 004bbb5f
    PUSH 0x62604b                       ; 004bbb64 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004bbb69
    XOR EBX,EBX                         ; 004bbb6a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbb6c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbb71
    MOV dword ptr [ESP + 0x25ac],EBX    ; 004bbb74
    MOV ESI,dword ptr [ESP + 0x25cc]    ; 004bbb7b
        ;   Label: LAB_004bbb7b
    TEST ESI,ESI                        ; 004bbb82
    JZ 0x004bbba2                       ; 004bbb84
        ;   XREF to: 004bbba2 (CONDITIONAL_JUMP)  ; LAB_004bbba2
    PUSH 0xc4                           ; 004bbb86
    PUSH 0x62604b                       ; 004bbb8b | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004bbb90
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbb91
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbb96
    XOR EAX,EAX                         ; 004bbb99
    MOV dword ptr [ESP + 0x25cc],EAX    ; 004bbb9b
    LEA EAX,[ESP + 0x1c7c]              ; 004bbba2
        ;   Label: LAB_004bbba2
    PUSH EAX                            ; 004bbba9
    PUSH 0x62729d                       ; 004bbbaa | = "Error creating history record in %s.\..."
    MOV EDX,dword ptr [0x00678a60]      ; 004bbbaf | g_CEditorToolsPtr
    PUSH EDX                            ; 004bbbb5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bbbb6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bbbbb
    LEA EAX,[ESP + 0x25a0]              ; 004bbbbe
    PUSH EAX                            ; 004bbbc5
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbbc6
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbbcb
    JMP 0x004bb847                      ; 004bbbce
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    PUSH EDI                            ; 004bbbd3
        ;   Label: LAB_004bbbd3
    PUSH 0x626cce                       ; 004bbbd4 | = "%s\nGet Fletch."
    MOV ECX,dword ptr [0x00678a60]      ; 004bbbd9 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bbbdf | g_CEditorToolsInstance
    JMP 0x004bb83f                      ; 004bbbe0
        ;   XREF to: 004bb83f (UNCONDITIONAL_JUMP)  ; LAB_004bb83f
    LEA EAX,[ESP + 0x1f88]              ; 004bbbe5
        ;   Label: LAB_004bbbe5
    PUSH EAX                            ; 004bbbec
    PUSH 0x626cdd                       ; 004bbbed | = "Grabbing %s..."
    MOV EDX,dword ptr [0x00678a60]      ; 004bbbf2 | g_CEditorToolsPtr
    PUSH EDX                            ; 004bbbf8 | g_CEditorToolsInstance
    LEA EDI,[ESP + 0x1f94]              ; 004bbbf9
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bbc00
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004bbc05
    PUSH 0x153                          ; 004bbc08
        ;   Label: LAB_004bbc08
    PUSH 0x626129                       ; 004bbc0d | = "..\\engine\\fileio.cpp"
    PUSH 0x626cec                       ; 004bbc12 | = "r+t"
    PUSH 0x0                            ; 004bbc17
    PUSH EDI                            ; 004bbc19
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bbc1a
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004bbc1f
    ADD ESP,0x14                        ; 004bbc21
    TEST EAX,EAX                        ; 004bbc24
    JZ 0x004bbc9e                       ; 004bbc26
        ;   XREF to: 004bbc9e (CONDITIONAL_JUMP)  ; LAB_004bbc9e
    PUSH 0x400                          ; 004bbc2c
    PUSH 0x0                            ; 004bbc31
    PUSH 0x0                            ; 004bbc33
    PUSH EAX                            ; 004bbc35
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004bbc36
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004bbc3b
    MOV EAX,EBX                         ; 004bbc3e
    MOV dword ptr [ESP + 0x25ac],EAX    ; 004bbc40
        ;   Label: LAB_004bbc40
    TEST EAX,EAX                        ; 004bbc47
    JNZ 0x004bbcc5                      ; 004bbc49
        ;   XREF to: 004bbcc5 (CONDITIONAL_JUMP)  ; LAB_004bbcc5
    JZ 0x004bbc6d                       ; 004bbc4f
        ;   XREF to: 004bbc6d (CONDITIONAL_JUMP)  ; LAB_004bbc6d
    PUSH 0xc4                           ; 004bbc51
    PUSH 0x62604b                       ; 004bbc56 | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004bbc5b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbc5c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbc61
    XOR EDX,EDX                         ; 004bbc64
    MOV dword ptr [ESP + 0x25ac],EDX    ; 004bbc66
    LEA EAX,[ESP + 0x1f88]              ; 004bbc6d
        ;   Label: LAB_004bbc6d
    PUSH EAX                            ; 004bbc74
    PUSH 0x626cf0                       ; 004bbc75 | = "Can't access %s.  Get Fletch."
    MOV ECX,dword ptr [0x00678a60]      ; 004bbc7a | g_CEditorToolsPtr
    PUSH ECX                            ; 004bbc80 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bbc81
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bbc86
    LEA EAX,[ESP + 0x25a0]              ; 004bbc89
    PUSH EAX                            ; 004bbc90
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbc91
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbc96
    JMP 0x004bb847                      ; 004bbc99
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    CALL crt_errno.c__errno_FUN_00601450 ; 004bbc9e
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004bbc9e
    CMP dword ptr [EAX],0x6             ; 004bbca3
    JNZ 0x004bbcbe                      ; 004bbca6
        ;   XREF to: 004bbcbe (CONDITIONAL_JUMP)  ; LAB_004bbcbe
    PUSH 0x1f4                          ; 004bbca8
    INC ESI                             ; 004bbcad
    CALL dword ptr CS:[0x611644]        ; 004bbcae | g_SleepFunc
    CMP ESI,0xa                         ; 004bbcb5
    JL 0x004bbc08                       ; 004bbcb8
        ;   XREF to: 004bbc08 (CONDITIONAL_JUMP)  ; LAB_004bbc08
    XOR EAX,EAX                         ; 004bbcbe
        ;   Label: LAB_004bbcbe
    JMP 0x004bbc40                      ; 004bbcc0
        ;   XREF to: 004bbc40 (UNCONDITIONAL_JUMP)  ; LAB_004bbc40
    LEA EAX,[ESP + 0x25ac]              ; 004bbcc5
        ;   Label: LAB_004bbcc5
    PUSH EAX                            ; 004bbccc
    LEA EAX,[ESP + 0x25a4]              ; 004bbccd
    PUSH EAX                            ; 004bbcd4
    CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 ; 004bbcd5
        ;   XREF to: 004b2a60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, _FILE * * file)
    ADD ESP,0x8                         ; 004bbcda
    TEST EAX,EAX                        ; 004bbcdd
    JZ 0x004bbd42                       ; 004bbcdf
        ;   XREF to: 004bbd42 (CONDITIONAL_JUMP)  ; LAB_004bbd42
    LEA EAX,[ESP + 0x134c]              ; 004bbce1
    PUSH EAX                            ; 004bbce8
    LEA EAX,[ESP + 0x25a4]              ; 004bbce9
    PUSH EAX                            ; 004bbcf0
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004bbcf1
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bbcf6
    MOV dword ptr [ESP + 0x25b8],EAX    ; 004bbcf9
    TEST EAX,EAX                        ; 004bbd00
    JGE 0x004bba53                      ; 004bbd02
        ;   XREF to: 004bba53 (CONDITIONAL_JUMP)  ; LAB_004bba53
    MOV EBX,dword ptr [ESP + 0x25ac]    ; 004bbd08
    TEST EBX,EBX                        ; 004bbd0f
    JZ 0x004bbd2f                       ; 004bbd11
        ;   XREF to: 004bbd2f (CONDITIONAL_JUMP)  ; LAB_004bbd2f
    PUSH 0xc4                           ; 004bbd13
    PUSH 0x62604b                       ; 004bbd18 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004bbd1d
    XOR EDI,EDI                         ; 004bbd1e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbd20
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbd25
    MOV dword ptr [ESP + 0x25ac],EDI    ; 004bbd28
    PUSH 0x626d0e                       ; 004bbd2f | = "Hell froze - we no longer have the fi..."
        ;   Label: LAB_004bbd2f
    MOV EAX,[0x00678a60]                ; 004bbd34 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bbd39 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bbd3a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bbd3f
    LEA EAX,[ESP + 0x25a0]              ; 004bbd42
        ;   Label: LAB_004bbd42
    PUSH EAX                            ; 004bbd49
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbd4a
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbd4f
    JMP 0x004bb847                      ; 004bbd52
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    CMP EBX,0x28                        ; 004bbd57
        ;   Label: LAB_004bbd57
    JL 0x004bbdca                       ; 004bbd5a
        ;   XREF to: 004bbdca (CONDITIONAL_JUMP)  ; LAB_004bbdca
    MOV ECX,dword ptr [ESP + 0x25ac]    ; 004bbd5c
    TEST ECX,ECX                        ; 004bbd63
    JZ 0x004bbd83                       ; 004bbd65
        ;   XREF to: 004bbd83 (CONDITIONAL_JUMP)  ; LAB_004bbd83
    PUSH 0xc4                           ; 004bbd67
    PUSH 0x62604b                       ; 004bbd6c | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004bbd71
    XOR ESI,ESI                         ; 004bbd72
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbd74
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbd79
    MOV dword ptr [ESP + 0x25ac],ESI    ; 004bbd7c
    LEA EAX,[ESP + 0xf24]               ; 004bbd83
        ;   Label: LAB_004bbd83
    PUSH EAX                            ; 004bbd8a
    LEA EAX,[ESP + 0x1d84]              ; 004bbd8b
    PUSH EAX                            ; 004bbd92
    PUSH 0x626d62                       ; 004bbd93 | = "Error renaming %s -> %s.\nThe file wa..."
    MOV EDI,dword ptr [0x00678a60]      ; 004bbd98 | g_CEditorToolsPtr
    PUSH EDI                            ; 004bbd9e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bbd9f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004bbda4
    MOV EAX,[0x00678a60]                ; 004bbda7 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bbdac | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004bbdad
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004bbdb2
    LEA EAX,[ESP + 0x25a0]              ; 004bbdb5
    PUSH EAX                            ; 004bbdbc
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbdbd
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbdc2
    JMP 0x004bb847                      ; 004bbdc5
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    INC EBX                             ; 004bbdca
        ;   Label: LAB_004bbdca
    CMP EBX,0x1                         ; 004bbdcb
    JNZ 0x004bbe03                      ; 004bbdce
        ;   XREF to: 004bbe03 (CONDITIONAL_JUMP)  ; LAB_004bbe03
    LEA EAX,[ESP + 0xf24]               ; 004bbdd0
    PUSH EAX                            ; 004bbdd7
    PUSH 0x626e66                       ; 004bbdd8 | = "Waiting for %s to become available.\n..."
    LEA EAX,[ESP + 0x18ec]              ; 004bbddd
    PUSH EAX                            ; 004bbde4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bbde5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bbdea
    LEA EAX,[ESP + 0x18e4]              ; 004bbded
    PUSH EAX                            ; 004bbdf4
    MOV EAX,[0x00678a60]                ; 004bbdf5 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bbdfa | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004bbdfb
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004bbe00
    PUSH 0x3fe00000                     ; 004bbe03
        ;   Label: LAB_004bbe03
    PUSH 0x0                            ; 004bbe08
    CALL wincore_winrun.cpp_sleep_FUN_005f40e0 ; 004bbe0a
        ;   XREF to: 005f40e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
    ADD ESP,0x8                         ; 004bbe0f
    MOV dword ptr [ESP + 0x25d8],EBX    ; 004bbe12
    PUSH 0x42200000                     ; 004bbe19
    FILD dword ptr [ESP + 0x25dc]       ; 004bbe1e
    SUB ESP,0x4                         ; 004bbe25
    MOV EDX,dword ptr [0x00678a60]      ; 004bbe28 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004bbe2e
    PUSH EDX                            ; 004bbe31 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004bbe32
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 004bbe37
    MOV EAX,[0x0067cf44]                ; 004bbe3a | g_CKeysPtr
    PUSH 0x1                            ; 004bbe3f
    MOV ESI,dword ptr [EAX]             ; 004bbe41 | g_CKeysInstance
    PUSH EAX                            ; 004bbe43 | g_CKeysInstance
    CALL dword ptr [ESI + 0x4]          ; 004bbe44
    ADD ESP,0x8                         ; 004bbe47
    TEST EAX,EAX                        ; 004bbe4a
    JZ 0x004bba78                       ; 004bbe4c
        ;   XREF to: 004bba78 (CONDITIONAL_JUMP)  ; LAB_004bba78
    MOV EBX,0x28                        ; 004bbe52
    JMP 0x004bba78                      ; 004bbe57
        ;   XREF to: 004bba78 (UNCONDITIONAL_JUMP)  ; LAB_004bba78
    MOV EBX,dword ptr [ESP + 0x25ac]    ; 004bbe5c
        ;   Label: LAB_004bbe5c
    TEST EBX,EBX                        ; 004bbe63
    JZ 0x004bbe83                       ; 004bbe65
        ;   XREF to: 004bbe83 (CONDITIONAL_JUMP)  ; LAB_004bbe83
    PUSH 0xc4                           ; 004bbe67
    PUSH 0x62604b                       ; 004bbe6c | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004bbe71
    XOR EDI,EDI                         ; 004bbe72
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbe74
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbe79
    MOV dword ptr [ESP + 0x25ac],EDI    ; 004bbe7c
    LEA EAX,[ESP + 0xf24]               ; 004bbe83
        ;   Label: LAB_004bbe83
    PUSH EAX                            ; 004bbe8a
    PUSH 0x626ea8                       ; 004bbe8b | = "Error setting file date/time for %s.\..."
    MOV EAX,[0x00678a60]                ; 004bbe90 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bbe95 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bbe96
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bbe9b
    LEA EAX,[ESP + 0x25a0]              ; 004bbe9e
    PUSH EAX                            ; 004bbea5
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbea6
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbeab
    JMP 0x004bb847                      ; 004bbeae
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    MOV EDX,dword ptr [ESP + 0x25ac]    ; 004bbeb3
        ;   Label: LAB_004bbeb3
    TEST EDX,EDX                        ; 004bbeba
    JZ 0x004bbeda                       ; 004bbebc
        ;   XREF to: 004bbeda (CONDITIONAL_JUMP)  ; LAB_004bbeda
    PUSH 0xc4                           ; 004bbebe
    PUSH 0x62604b                       ; 004bbec3 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004bbec8
    XOR EBX,EBX                         ; 004bbec9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbecb
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbed0
    MOV dword ptr [ESP + 0x25ac],EBX    ; 004bbed3
    LEA EAX,[ESP + 0xf24]               ; 004bbeda
        ;   Label: LAB_004bbeda
    PUSH EAX                            ; 004bbee1
    PUSH 0x6270ed                       ; 004bbee2 | = "Error setting file date/time for %s.\..."
    MOV ESI,dword ptr [0x00678a60]      ; 004bbee7 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bbeed | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bbeee
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bbef3
    LEA EAX,[ESP + 0x25a0]              ; 004bbef6
    PUSH EAX                            ; 004bbefd
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbefe
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbf03
    JMP 0x004bb847                      ; 004bbf06
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    CALL crt_errno.c__errno_FUN_00601450 ; 004bbf0b
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004bbf0b
    CMP dword ptr [EAX],0x6             ; 004bbf10
    JNZ 0x004bbf2b                      ; 004bbf13
        ;   XREF to: 004bbf2b (CONDITIONAL_JUMP)  ; LAB_004bbf2b
    PUSH 0x1f4                          ; 004bbf15
    INC ESI                             ; 004bbf1a
    CALL dword ptr CS:[0x611644]        ; 004bbf1b | g_SleepFunc
    CMP ESI,0xa                         ; 004bbf22
    JL 0x004bbb0f                       ; 004bbf25
        ;   XREF to: 004bbb0f (CONDITIONAL_JUMP)  ; LAB_004bbb0f
    XOR EBX,EBX                         ; 004bbf2b
        ;   Label: LAB_004bbf2b
    JMP 0x004bbb45                      ; 004bbf2d
        ;   XREF to: 004bbb45 (UNCONDITIONAL_JUMP)  ; LAB_004bbb45
    PUSH 0x0                            ; 004bbf32
        ;   Label: LAB_004bbf32
    CALL crt_time.c__time_FUN_006001f0  ; 004bbf34
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__time_FUN_006001f0(time_t * optional_output)
    ADD ESP,0x4                         ; 004bbf39
    MOV dword ptr [ESP + 0x25a8],EAX    ; 004bbf3c
    LEA EAX,[ESP + 0x25a8]              ; 004bbf43
    PUSH EAX                            ; 004bbf4a
    CALL crt_time.c__localtime_FUN_00600288 ; 004bbf4b
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004bbf50
    PUSH 0x2d12bd0                      ; 004bbf53 | g_VersionControlSession
    MOV ECX,dword ptr [EAX]             ; 004bbf58
    PUSH ECX                            ; 004bbf5a
    MOV ESI,dword ptr [EAX + 0x4]       ; 004bbf5b
    PUSH ESI                            ; 004bbf5e
    MOV EDI,dword ptr [EAX + 0x8]       ; 004bbf5f
    PUSH EDI                            ; 004bbf62
    MOV EDX,dword ptr [EAX + 0xc]       ; 004bbf63
    MOV ESI,dword ptr [EAX + 0x10]      ; 004bbf66
    PUSH EDX                            ; 004bbf69
    INC ESI                             ; 004bbf6a
    MOV EAX,dword ptr [EAX + 0x14]      ; 004bbf6b
    PUSH ESI                            ; 004bbf6e
    ADD EAX,0x76c                       ; 004bbf6f
    PUSH EAX                            ; 004bbf74
    MOV EAX,dword ptr [ESP + 0x25d0]    ; 004bbf75
    INC EAX                             ; 004bbf7c
    PUSH EAX                            ; 004bbf7d
    PUSH 0x62744a                       ; 004bbf7e | = "%4d: %04d/%02d/%02d %02d:%02d:%02d \"..."
    PUSH EBX                            ; 004bbf83
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bbf84
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x28                        ; 004bbf89
    PUSH EBX                            ; 004bbf8c
    CALL crt_stdio.c_fflush_FUN_00601540 ; 004bbf8d
        ;   XREF to: 00601540 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00601540(_FILE * stream)
    MOV CL,byte ptr [EBX + 0xc]         ; 004bbf92
    ADD ESP,0x4                         ; 004bbf95
    TEST CL,0x20                        ; 004bbf98
    JNZ 0x004bbb54                      ; 004bbf9b
        ;   XREF to: 004bbb54 (CONDITIONAL_JUMP)  ; LAB_004bbb54
    PUSH 0xc4                           ; 004bbfa1
    PUSH 0x62604b                       ; 004bbfa6 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004bbfab
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bbfac
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bbfb1
    XOR ECX,ECX                         ; 004bbfb4
    MOV EBX,dword ptr [ESP + 0x25bc]    ; 004bbfb6
    MOV dword ptr [ESP + 0x25cc],ECX    ; 004bbfbd
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004bbfc4
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
    TEST EBX,EBX                        ; 004bbfc9
    JZ 0x004bbffa                       ; 004bbfcb
        ;   XREF to: 004bbffa (CONDITIONAL_JUMP)  ; LAB_004bbffa
    LEA EAX,[ESP + 0x25a0]              ; 004bbfcd
    PUSH EAX                            ; 004bbfd4
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bbfd5
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bbfda
    PUSH 0x0                            ; 004bbfdd
        ;   Label: LAB_004bbfdd
    LEA EAX,[ESP + 0x4]                 ; 004bbfdf
    PUSH EAX                            ; 004bbfe3
    MOV ESI,0x2                         ; 004bbfe4
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bbfe9
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bbfee
    MOV EAX,ESI                         ; 004bbff1
    MOV ESP,EBP                         ; 004bbff3
    POP EBP                             ; 004bbff5
    POP EDI                             ; 004bbff6
    POP ESI                             ; 004bbff7
    POP EBX                             ; 004bbff8
    RET                                 ; 004bbff9
    MOV ESI,dword ptr [ESP + 0x25b8]    ; 004bbffa
        ;   Label: LAB_004bbffa
    PUSH ESI                            ; 004bc001
    LEA EAX,[ESP + 0x25a4]              ; 004bc002
    PUSH EAX                            ; 004bc009
    CALL engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 ; 004bc00a
        ;   XREF to: 004b2d70 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList * this_ptr, int entry_index)
    ADD ESP,0x8                         ; 004bc00f
    TEST EAX,EAX                        ; 004bc012
    JZ 0x004bc0c4                       ; 004bc014
        ;   XREF to: 004bc0c4 (CONDITIONAL_JUMP)  ; LAB_004bc0c4
    LEA EAX,[ESP + 0x25ac]              ; 004bc01a
    PUSH EAX                            ; 004bc021
    LEA EAX,[ESP + 0x25a4]              ; 004bc022
    PUSH EAX                            ; 004bc029
    CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 ; 004bc02a
        ;   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList * this_ptr, _FILE * * file_handle)
    ADD ESP,0x8                         ; 004bc02f
    TEST EAX,EAX                        ; 004bc032
    JZ 0x004bc0fd                       ; 004bc034
        ;   XREF to: 004bc0fd (CONDITIONAL_JUMP)  ; LAB_004bc0fd
    MOV EBX,dword ptr [ESP + 0x25ac]    ; 004bc03a
    TEST EBX,EBX                        ; 004bc041
    JZ 0x004bc061                       ; 004bc043
        ;   XREF to: 004bc061 (CONDITIONAL_JUMP)  ; LAB_004bc061
    PUSH 0xc4                           ; 004bc045
    PUSH 0x62604b                       ; 004bc04a | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004bc04f
    XOR EDI,EDI                         ; 004bc050
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bc052
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bc057
    MOV dword ptr [ESP + 0x25ac],EDI    ; 004bc05a
    LEA EAX,[ESP + 0x134c]              ; 004bc061
        ;   Label: LAB_004bc061
    PUSH EAX                            ; 004bc068
    PUSH 0x0                            ; 004bc069
    CALL engine_dosio.c_getFileTimestamp_FUN_00481960 ; 004bc06b
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004bc070
    MOV EBX,EAX                         ; 004bc073
    TEST EAX,EAX                        ; 004bc075
    JL 0x004bc090                       ; 004bc077
        ;   XREF to: 004bc090 (CONDITIONAL_JUMP)  ; LAB_004bc090
    OR AL,0x8                           ; 004bc079
    PUSH EAX                            ; 004bc07b
    LEA EAX,[ESP + 0x1350]              ; 004bc07c
    PUSH EAX                            ; 004bc083
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004bc084
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004bc089
    TEST EAX,EAX                        ; 004bc08c
    JZ 0x004bc094                       ; 004bc08e
        ;   XREF to: 004bc094 (CONDITIONAL_JUMP)  ; LAB_004bc094
    TEST EBX,EBX                        ; 004bc090
        ;   Label: LAB_004bc090
    JGE 0x004bc0af                      ; 004bc092
        ;   XREF to: 004bc0af (CONDITIONAL_JUMP)  ; LAB_004bc0af
    LEA EAX,[ESP + 0x134c]              ; 004bc094
        ;   Label: LAB_004bc094
    PUSH EAX                            ; 004bc09b
    PUSH 0x6274c1                       ; 004bc09c | = "Error marking local file %s as read o..."
    MOV EAX,[0x00678a60]                ; 004bc0a1 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bc0a6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 004bc0a7
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bc0ac
    LEA EAX,[ESP + 0x25a0]              ; 004bc0af
        ;   Label: LAB_004bc0af
    PUSH EAX                            ; 004bc0b6
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bc0b7
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bc0bc
    JMP 0x004bb492                      ; 004bc0bf
        ;   XREF to: 004bb492 (UNCONDITIONAL_JUMP)  ; LAB_004bb492
    MOV EDI,dword ptr [ESP + 0x25ac]    ; 004bc0c4
        ;   Label: LAB_004bc0c4
    TEST EDI,EDI                        ; 004bc0cb
    JZ 0x004bc0e9                       ; 004bc0cd
        ;   XREF to: 004bc0e9 (CONDITIONAL_JUMP)  ; LAB_004bc0e9
    PUSH 0xc4                           ; 004bc0cf
    PUSH 0x62604b                       ; 004bc0d4 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004bc0d9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bc0da
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bc0df
    MOV dword ptr [ESP + 0x25ac],EBX    ; 004bc0e2
    PUSH 0x627473                       ; 004bc0e9 | = "Out of memory...Restart the applicati..."
        ;   Label: LAB_004bc0e9
    MOV ECX,dword ptr [0x00678a60]      ; 004bc0ee | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc0f4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bc0f5
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bc0fa
    LEA EAX,[ESP + 0x25a0]              ; 004bc0fd
        ;   Label: LAB_004bc0fd
    PUSH EAX                            ; 004bc104
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004bc105
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004bc10a
    JMP 0x004bb847                      ; 004bc10d
        ;   XREF to: 004bb847 (UNCONDITIONAL_JUMP)  ; LAB_004bb847
    LEA EAX,[ESP + 0x42c]               ; 004bc112
        ;   Label: LAB_004bc112
    PUSH EAX                            ; 004bc119
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bc11a
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004bc11f
    PUSH 0x628f2f                       ; 004bc122 | = "Delete local files and mount"
    LEA EAX,[ESP + 0x430]               ; 004bc127
    PUSH EAX                            ; 004bc12e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc12f
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc134
    PUSH 0x628f4c                       ; 004bc137 | = "Delete local files but don't mount"
    LEA EAX,[ESP + 0x430]               ; 004bc13c
    PUSH EAX                            ; 004bc143
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc144
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc149
    PUSH 0x628f6f                       ; 004bc14c | = "Keep files extracted and pod dismounted"
    LEA EAX,[ESP + 0x430]               ; 004bc151
    PUSH EAX                            ; 004bc158
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc159
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc15e
    LEA EAX,[ESP + 0x1e84]              ; 004bc161
    PUSH EAX                            ; 004bc168
    PUSH 0x628f97                       ; 004bc169 | = "%s checked in"
    LEA EAX,[ESP + 0x1568]              ; 004bc16e
    PUSH EAX                            ; 004bc175
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bc176
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bc17b
    PUSH 0x0                            ; 004bc17e
    PUSH -0x1                           ; 004bc180
    LEA EAX,[ESP + 0x1568]              ; 004bc182
    PUSH EAX                            ; 004bc189
    LEA EAX,[ESP + 0x438]               ; 004bc18a
    PUSH EAX                            ; 004bc191
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bc192
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004bc197
    MOV ESI,EAX                         ; 004bc19a
    TEST EAX,EAX                        ; 004bc19c
    JNZ 0x004bc1de                      ; 004bc19e
        ;   XREF to: 004bc1de (CONDITIONAL_JUMP)  ; LAB_004bc1de
    LEA EAX,[ESP + 0x1e84]              ; 004bc1a0
    PUSH EAX                            ; 004bc1a7
    PUSH EDI                            ; 004bc1a8
    CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 ; 004bc1a9
        ;   XREF to: 004bca50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bc1ae
    TEST EAX,EAX                        ; 004bc1b1
    JZ 0x004bc212                       ; 004bc1b3
        ;   XREF to: 004bc212 (CONDITIONAL_JUMP)  ; LAB_004bc212
    LEA EAX,[ESP + 0x1e84]              ; 004bc1b5
    PUSH EAX                            ; 004bc1bc
    LEA EAX,[ESP + 0x2594]              ; 004bc1bd
    PUSH EAX                            ; 004bc1c4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc1c5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc1ca
    LEA EAX,[ESP + 0x2590]              ; 004bc1cd
    PUSH EAX                            ; 004bc1d4
    PUSH EDI                            ; 004bc1d5
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004bc1d6
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bc1db
    CMP ESI,0x1                         ; 004bc1de
        ;   Label: LAB_004bc1de
    JNZ 0x004bc1fb                      ; 004bc1e1
        ;   XREF to: 004bc1fb (CONDITIONAL_JUMP)  ; LAB_004bc1fb
    LEA EAX,[ESP + 0x1e84]              ; 004bc1e3
    PUSH EAX                            ; 004bc1ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bc1eb
    PUSH EAX                            ; 004bc1ee
    CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 ; 004bc1ef
        ;   XREF to: 004bca50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bc1f4
    TEST EAX,EAX                        ; 004bc1f7
    JZ 0x004bc24b                       ; 004bc1f9
        ;   XREF to: 004bc24b (CONDITIONAL_JUMP)  ; LAB_004bc24b
    PUSH 0x0                            ; 004bc1fb
        ;   Label: LAB_004bc1fb
    LEA EAX,[ESP + 0x430]               ; 004bc1fd
    PUSH EAX                            ; 004bc204
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bc205
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc20a
    JMP 0x004bb508                      ; 004bc20d
        ;   XREF to: 004bb508 (UNCONDITIONAL_JUMP)  ; LAB_004bb508
    PUSH EAX                            ; 004bc212
        ;   Label: LAB_004bc212
    LEA EAX,[ESP + 0x430]               ; 004bc213
    PUSH EAX                            ; 004bc21a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bc21b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc220
    PUSH ESI                            ; 004bc223
    LEA EAX,[ESP + 0x2594]              ; 004bc224
    PUSH EAX                            ; 004bc22b
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc22c
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc231
    PUSH ESI                            ; 004bc234
    LEA EAX,[ESP + 0x4]                 ; 004bc235
    PUSH EAX                            ; 004bc239
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bc23a
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bc23f
    MOV EAX,ESI                         ; 004bc242
    MOV ESP,EBP                         ; 004bc244
    POP EBP                             ; 004bc246
    POP EDI                             ; 004bc247
    POP ESI                             ; 004bc248
    POP EBX                             ; 004bc249
    RET                                 ; 004bc24a
    PUSH EAX                            ; 004bc24b
        ;   Label: LAB_004bc24b
    LEA EAX,[ESP + 0x430]               ; 004bc24c
    PUSH EAX                            ; 004bc253
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bc254
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc259
    XOR ESI,ESI                         ; 004bc25c
    PUSH ESI                            ; 004bc25e
    LEA EAX,[ESP + 0x2594]              ; 004bc25f
    PUSH EAX                            ; 004bc266
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc267
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc26c
    PUSH ESI                            ; 004bc26f
    LEA EAX,[ESP + 0x4]                 ; 004bc270
    PUSH EAX                            ; 004bc274
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bc275
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bc27a
    MOV EAX,ESI                         ; 004bc27d
    MOV ESP,EBP                         ; 004bc27f
    POP EBP                             ; 004bc281
    POP EDI                             ; 004bc282
    POP ESI                             ; 004bc283
    POP EBX                             ; 004bc284
    RET                                 ; 004bc285
    PUSH EAX                            ; 004bc286
        ;   Label: LAB_004bc286
    LEA EAX,[ESP + 0x2594]              ; 004bc287
    PUSH EAX                            ; 004bc28e
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc28f
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc294
    XOR ESI,ESI                         ; 004bc297
    PUSH ESI                            ; 004bc299
    LEA EAX,[ESP + 0x4]                 ; 004bc29a
    PUSH EAX                            ; 004bc29e
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bc29f
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bc2a4
    MOV EAX,ESI                         ; 004bc2a7
    MOV ESP,EBP                         ; 004bc2a9
    POP EBP                             ; 004bc2ab
    POP EDI                             ; 004bc2ac
    POP ESI                             ; 004bc2ad
    POP EBX                             ; 004bc2ae
    RET                                 ; 004bc2af

