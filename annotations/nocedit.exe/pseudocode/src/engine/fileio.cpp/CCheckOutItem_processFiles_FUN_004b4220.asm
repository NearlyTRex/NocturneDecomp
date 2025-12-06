; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem * this_ptr, int operation_mode, char * filename)
;
; Parameters:
; CCheckOutItem *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   operation_mode
; char *           Stack[0xc]:4   filename
; Local Variables:
; undefined4       Stack[-0x13d0]:4  local_13d0
; undefined        Stack[-0x13c8]:1  local_13c8
; undefined        Stack[-0x1020]:1  local_1020
; undefined1       Stack[-0x101f]:1  local_101f
; undefined4       Stack[-0xe1c]:4  local_e1c
; undefined4       Stack[-0xe14]:4  local_e14
; undefined        Stack[-0xe0c]:1  local_e0c
; undefined1       Stack[-0xe0b]:1  local_e0b
; undefined4       Stack[-0xc08]:4  local_c08
; undefined4       Stack[-0xc00]:4  local_c00
; undefined        Stack[-0xbf8]:1  local_bf8
; undefined        Stack[-0xa68]:1  local_a68
; undefined1       Stack[-0xa67]:1  local_a67
; undefined        Stack[-0x964]:1  local_964
; undefined1       Stack[-0x963]:1  local_963
; undefined        Stack[-0x860]:1  local_860
; undefined1       Stack[-0x85f]:1  local_85f
; undefined        Stack[-0x75c]:1  local_75c
; undefined1       Stack[-0x75b]:1  local_75b
; undefined        Stack[-0x658]:1  local_658
; undefined        Stack[-0x554]:1  local_554
; undefined1       Stack[-0x553]:1  local_553
; undefined        Stack[-0x450]:1  local_450
; undefined        Stack[-0x350]:1  local_350
; undefined        Stack[-0x250]:1  local_250
; undefined        Stack[-0x150]:1  local_150
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
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   Sleep* Sleep = 00212228
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
;   ... and 48 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c_errno_FUN_00601450
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_stdio.c_fflush_FUN_00601540
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_rename_FUN_006015d0
;   crt_stdio.c_setvbuf_FUN_00601490
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_time.c_localtime_FUN_00600288
;   crt_time.c_time_with_rounding_FUN_006001f0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getFileTimestamp_FUN_00481960
;   ... and 28 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4220
        ;   Label: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
    PUSH ESI                            ; 004b4221
    PUSH EDI                            ; 004b4222
    PUSH EBP                            ; 004b4223
    MOV EBP,ESP                         ; 004b4224
    SUB ESP,0x13b8                      ; 004b4226
    AND ESP,0xfffffff8                  ; 004b422c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b422f
    MOV ECX,0x41                        ; 004b4232
    LEA EDI,[ESP + 0x960]               ; 004b4237
    PUSH 0x626a7d                       ; 004b423e | = "*" | s_anon_00626a7d = *
    MOV ESI,0x679dd8                    ; 004b4243 | char[260] g_DefaultCheckOutPath
    LEA EAX,[ESP + 0x5c0]               ; 004b4248
    PUSH 0x626a7f                       ; 004b424f | = "Select file to check in" | s_Select_file_to_check_in_00626a7f = Select file to check in
    MOVSD.REP ES:EDI,ESI                ; 004b4254 | char[260] g_DefaultCheckOutPath
    PUSH EAX                            ; 004b4256
    MOV EDI,dword ptr [EBP + 0x18]      ; 004b4257
    XOR EDX,EDX                         ; 004b425a
    PUSH EDI                            ; 004b425c
    MOV dword ptr [ESP + 0x1390],EDX    ; 004b425d
    PUSH EBX                            ; 004b4264
    MOV dword ptr [ESP + 0x13b0],EDX    ; 004b4265
    MOV dword ptr [ESP + 0x13b4],EDX    ; 004b426c
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004b4273 | int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, ...)
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b4278
    TEST EAX,EAX                        ; 004b427b
    JNZ 0x004b428a                      ; 004b427d | LAB_004b428a
        ;   XREF to: 004b428a (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004b427f
    MOV EAX,EBX                         ; 004b4281
    MOV ESP,EBP                         ; 004b4283
    POP EBP                             ; 004b4285
    POP EDI                             ; 004b4286
    POP ESI                             ; 004b4287
    POP EBX                             ; 004b4288
    RET                                 ; 004b4289
    LEA EAX,[ESP + 0x5bc]               ; 004b428a
        ;   Label: LAB_004b428a
    PUSH EAX                            ; 004b4291
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b4292 | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4297
    TEST EAX,EAX                        ; 004b429a
    JZ 0x004b448d                       ; 004b429c | LAB_004b448d
        ;   XREF to: 004b448d (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1178]              ; 004b42a2
    PUSH EAX                            ; 004b42a9
    LEA EAX,[ESP + 0x13ac]              ; 004b42aa
    PUSH EAX                            ; 004b42b1
    PUSH EBX                            ; 004b42b2
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b42b3 | void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b42b8
    PUSH 0x0                            ; 004b42bb
    PUSH 0x0                            ; 004b42bd
    LEA EAX,[ESP + 0x1180]              ; 004b42bf
    PUSH EAX                            ; 004b42c6
    LEA EAX,[ESP + 0x13b4]              ; 004b42c7
    PUSH EAX                            ; 004b42ce
    LEA EAX,[ESP + 0x3b8]               ; 004b42cf
    PUSH EAX                            ; 004b42d6
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b42d7 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b42dc
    LEA ESI,[ESP + 0x5bc]               ; 004b42df
    LEA EDI,[ESP + 0x3a8]               ; 004b42e6
    PUSH EDI                            ; 004b42ed
    SUB ECX,ECX                         ; 004b42ee
    DEC ECX                             ; 004b42f0
    MOV AL,0x0                          ; 004b42f1
    SCASB.REPNE ES:EDI                  ; 004b42f3
    DEC EDI                             ; 004b42f5
    MOV AL,byte ptr [ESI]               ; 004b42f6
        ;   Label: LAB_004b42f6
    MOV byte ptr [EDI],AL               ; 004b42f8
    CMP AL,0x0                          ; 004b42fa
    JZ 0x004b430e                       ; 004b42fc | LAB_004b430e
        ;   XREF to: 004b430e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b42fe
    ADD ESI,0x2                         ; 004b4301
    MOV byte ptr [EDI + 0x1],AL         ; 004b4304
    ADD EDI,0x2                         ; 004b4307
    CMP AL,0x0                          ; 004b430a
    JNZ 0x004b42f6                      ; 004b430c | LAB_004b42f6
        ;   XREF to: 004b42f6 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b430e
        ;   Label: LAB_004b430e
    LEA EAX,[ESP + 0x3a8]               ; 004b430f
    PUSH EAX                            ; 004b4316
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b4317 | int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b431c
    TEST EAX,EAX                        ; 004b431f
    JZ 0x004b44b3                       ; 004b4321 | LAB_004b44b3
        ;   XREF to: 004b44b3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x7c0]     ; 004b4327
    CMP EAX,dword ptr [ESP + 0x5ac]     ; 004b432e
    JNZ 0x004b435e                      ; 004b4335 | LAB_004b435e
        ;   XREF to: 004b435e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5b4]     ; 004b4337
    MOV ESI,dword ptr [ESP + 0x7c8]     ; 004b433e
    ADD EAX,0x2                         ; 004b4345
    CMP EAX,ESI                         ; 004b4348
    JBE 0x004b435e                      ; 004b434a | LAB_004b435e
        ;   XREF to: 004b435e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x5b4]     ; 004b434c
    LEA EAX,[ESI + 0x2]                 ; 004b4353
    CMP EAX,EDI                         ; 004b4356
    JA 0x004b44da                       ; 004b4358 | LAB_004b44da
        ;   XREF to: 004b44da (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x5bc]               ; 004b435e
        ;   Label: LAB_004b435e
    PUSH EAX                            ; 004b4365
    PUSH 0x626b95                       ; 004b4366 | = "Keep %s checked out after updating to..." | s_Keep_s_checked_out_after_00626b95 = Keep %s checked out after updating to network?
    MOV EAX,[0x00678a60]                ; 004b436b | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b4370 | CEditorTools g_CEditorToolsPtr
    LEA EDI,[ESP + 0xa70]               ; 004b4371
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004b4378 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b437d
    MOV EDX,0x626bc4                    ; 004b4380 | = "history" | s_history_00626bc4 = history
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b4385
    MOV dword ptr [ESP + 0x1394],EAX    ; 004b4388
    MOV AH,byte ptr [0x02d12ac8]        ; 004b438f | char[264] g_VersionControlDirectory
    MOV dword ptr [ESP + 0x1390],EDX    ; 004b4395 | = "history" | s_history_00626bc4 = history
    TEST AH,AH                          ; 004b439c
    JNZ 0x004b43c2                      ; 004b439e | LAB_004b43c2
        ;   XREF to: 004b43c2 (CONDITIONAL_JUMP)
    MOV ECX,0x6260a3                    ; 004b43a0 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_006260a3 = ..\engine\fileio.cpp
    MOV EAX,0xe7                        ; 004b43a5
    PUSH 0x6260b8                       ; 004b43aa | = "versionControlDirectory not set!" | s_versionControlDirectory__006260b8 = versionControlDirectory not set!
    MOV dword ptr [0x02f0ca48],ECX      ; 004b43af | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004b43b5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b43ba | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b43bf
    MOV EDX,dword ptr [ESP + 0x1390]    ; 004b43c2
        ;   Label: LAB_004b43c2
    PUSH EDX                            ; 004b43c9 | = "history" | s_history_00626bc4 = history
    PUSH ESI                            ; 004b43ca
    PUSH 0x6260d9                       ; 004b43cb | = "history\\%s.%s" | s_history_s_s_006260d9 = history\%s.%s
    LEA EAX,[ESP + 0xc78]               ; 004b43d0
    PUSH EAX                            ; 004b43d7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b43d8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b43dd
    LEA EAX,[ESP + 0x1278]              ; 004b43e0
    PUSH EAX                            ; 004b43e7
    LEA EAX,[ESP + 0x13b0]              ; 004b43e8
    PUSH EAX                            ; 004b43ef
    PUSH 0x2d12ac8                      ; 004b43f0 | char[264] g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b43f5 | void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b43fa
    PUSH 0x0                            ; 004b43fd
    PUSH 0x0                            ; 004b43ff
    LEA EAX,[ESP + 0x1280]              ; 004b4401
    PUSH EAX                            ; 004b4408
    LEA EAX,[ESP + 0x13b8]              ; 004b4409
    PUSH EAX                            ; 004b4410
    PUSH EDI                            ; 004b4411
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b4412 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b4417
    LEA ESI,[ESP + 0xc6c]               ; 004b441a
    PUSH EDI                            ; 004b4421
    SUB ECX,ECX                         ; 004b4422
    DEC ECX                             ; 004b4424
    MOV AL,0x0                          ; 004b4425
    SCASB.REPNE ES:EDI                  ; 004b4427
    DEC EDI                             ; 004b4429
    MOV AL,byte ptr [ESI]               ; 004b442a
        ;   Label: LAB_004b442a
    MOV byte ptr [EDI],AL               ; 004b442c
    CMP AL,0x0                          ; 004b442e
    JZ 0x004b4442                       ; 004b4430 | LAB_004b4442
        ;   XREF to: 004b4442 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b4432
    ADD ESI,0x2                         ; 004b4435
    MOV byte ptr [EDI + 0x1],AL         ; 004b4438
    ADD EDI,0x2                         ; 004b443b
    CMP AL,0x0                          ; 004b443e
    JNZ 0x004b442a                      ; 004b4440 | LAB_004b442a
        ;   XREF to: 004b442a (CONDITIONAL_JUMP)
    POP EDI                             ; 004b4442
        ;   Label: LAB_004b4442
    LEA EAX,[ESP + 0xa64]               ; 004b4443
    PUSH EAX                            ; 004b444a
    PUSH 0x626bcc                       ; 004b444b | = "Reading %s" | s_Reading_s_00626bcc = Reading %s
    MOV ECX,dword ptr [0x00678a60]      ; 004b4450 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b4456 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b4457 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b445c
    LEA EAX,[ESP + 0xa64]               ; 004b445f
    PUSH EAX                            ; 004b4466
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b4467
    PUSH ESI                            ; 004b446a
    CALL engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 ; 004b446b | int engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640(char * filename)
        ;   XREF to: 004b2640 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4470
    MOV dword ptr [ESP + 0x138c],EAX    ; 004b4473
    TEST EAX,EAX                        ; 004b447a
    JGE 0x004b45d6                      ; 004b447c | LAB_004b45d6
        ;   XREF to: 004b45d6 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004b4482
    MOV EAX,EBX                         ; 004b4484
    MOV ESP,EBP                         ; 004b4486
    POP EBP                             ; 004b4488
    POP EDI                             ; 004b4489
    POP ESI                             ; 004b448a
    POP EBX                             ; 004b448b
    RET                                 ; 004b448c
    LEA EAX,[ESP + 0x5bc]               ; 004b448d
        ;   Label: LAB_004b448d
    PUSH EAX                            ; 004b4494
    PUSH 0x626a97                       ; 004b4495 | = "Error accessing %s.  File not checked..." | s_Error_accessing_s_File_n_00626a97 = Error accessing %s.  File not checked in.
    MOV EAX,[0x00678a60]                ; 004b449a | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b449f | CEditorTools g_CEditorToolsPtr
    XOR EBX,EBX                         ; 004b44a0
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b44a2 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b44a7
    MOV EAX,EBX                         ; 004b44aa
    MOV ESP,EBP                         ; 004b44ac
    POP EBP                             ; 004b44ae
    POP EDI                             ; 004b44af
    POP ESI                             ; 004b44b0
    POP EBX                             ; 004b44b1
    RET                                 ; 004b44b2
    LEA EAX,[ESP + 0x3a8]               ; 004b44b3
        ;   Label: LAB_004b44b3
    PUSH EAX                            ; 004b44ba
    PUSH 0x626ac1                       ; 004b44bb | = "Error accessing %s.  File not checked..." | s_Error_accessing_s_File_n_00626ac1 = Error accessing %s.  File not checked in.
    MOV EDX,dword ptr [0x00678a60]      ; 004b44c0 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b44c6 | CEditorTools g_CEditorToolsPtr
    XOR EBX,EBX                         ; 004b44c7
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b44c9 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b44ce
    MOV EAX,EBX                         ; 004b44d1
    MOV ESP,EBP                         ; 004b44d3
    POP EBP                             ; 004b44d5
    POP EDI                             ; 004b44d6
    POP ESI                             ; 004b44d7
    POP EBX                             ; 004b44d8
    RET                                 ; 004b44d9
    MOV EAX,ESP                         ; 004b44da
        ;   Label: LAB_004b44da
    PUSH EAX                            ; 004b44dc
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b44dd | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b44e2
    PUSH 0x626aeb                       ; 004b44e5 | = "Undo the checkout." | s_Undo_the_checkout_00626aeb = Undo the checkout.
    LEA EAX,[ESP + 0x4]                 ; 004b44ea
    PUSH EAX                            ; 004b44ee
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b44ef | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b44f4
    PUSH 0x626afe                       ; 004b44f7 | = "Yes, I did change the file.  Check it..." | s_Yes_I_did_change_the_fil_00626afe = Yes, I did change the file.  Check it in, like I said to do in the first place.
    LEA EAX,[ESP + 0x4]                 ; 004b44fc
    PUSH EAX                            ; 004b4500
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b4501 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4506
    PUSH 0x626b4e                       ; 004b4509 | = "Oops.  Keep the file checked out." | s_Oops_Keep_the_file_check_00626b4e = Oops.  Keep the file checked out.
    LEA EAX,[ESP + 0x4]                 ; 004b450e
    PUSH EAX                            ; 004b4512
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b4513 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4518
    PUSH 0x0                            ; 004b451b
    PUSH -0x1                           ; 004b451d
    PUSH 0x626b70                       ; 004b451f | = "Checking in file that didn't change." | s_Checking_in_file_that_di_00626b70 = Checking in file that didn't change.
    LEA EAX,[ESP + 0xc]                 ; 004b4524
    PUSH EAX                            ; 004b4528
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b4529 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b452e
    TEST EAX,EAX                        ; 004b4531
    JL 0x004b45a5                       ; 004b4533 | LAB_004b45a5
        ;   XREF to: 004b45a5 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 004b4535
    JZ 0x004b45a5                       ; 004b4538 | LAB_004b45a5
        ;   XREF to: 004b45a5 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004b453a
    JNZ 0x004b45c2                      ; 004b453c | LAB_004b45c2
        ;   XREF to: 004b45c2 (CONDITIONAL_JUMP)
    PUSH 0x626a5d                       ; 004b4542 | = "*" | s_anon_00626a5d = *
    PUSH 0x626a5f                       ; 004b4547 | = "Select file to undo check out" | s_Select_file_to_undo_chec_00626a5f = Select file to undo check out
    LEA EAX,[ESP + 0xd78]               ; 004b454c
    PUSH EAX                            ; 004b4553
    MOV EDI,dword ptr [EBP + 0x18]      ; 004b4554
    PUSH EDI                            ; 004b4557
    PUSH EBX                            ; 004b4558
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004b4559 | int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, ...)
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b455e
    TEST EAX,EAX                        ; 004b4561
    JZ 0x004b45be                       ; 004b4563 | LAB_004b45be
        ;   XREF to: 004b45be (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xd70]               ; 004b4565
    PUSH EAX                            ; 004b456c
    PUSH EBX                            ; 004b456d
    CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 ; 004b456e | int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)
        ;   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4573
    TEST EAX,EAX                        ; 004b4576
    JZ 0x004b45be                       ; 004b4578 | LAB_004b45be
        ;   XREF to: 004b45be (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xd70]               ; 004b457a
    PUSH EAX                            ; 004b4581
    PUSH EBX                            ; 004b4582
    CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 ; 004b4583 | int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
        ;   XREF to: 004b3220 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4588
    MOV EBX,EAX                         ; 004b458b
    PUSH 0x0                            ; 004b458d
        ;   Label: LAB_004b458d
    LEA EAX,[ESP + 0x4]                 ; 004b458f
    PUSH EAX                            ; 004b4593
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b4594 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4599
    MOV EAX,EBX                         ; 004b459c
    MOV ESP,EBP                         ; 004b459e
    POP EBP                             ; 004b45a0
    POP EDI                             ; 004b45a1
    POP ESI                             ; 004b45a2
    POP EBX                             ; 004b45a3
    RET                                 ; 004b45a4
    XOR EBX,EBX                         ; 004b45a5
        ;   Label: LAB_004b45a5
    PUSH EBX                            ; 004b45a7
    LEA EAX,[ESP + 0x4]                 ; 004b45a8
    PUSH EAX                            ; 004b45ac
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b45ad | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b45b2
    MOV EAX,EBX                         ; 004b45b5
    MOV ESP,EBP                         ; 004b45b7
    POP EBP                             ; 004b45b9
    POP EDI                             ; 004b45ba
    POP ESI                             ; 004b45bb
    POP EBX                             ; 004b45bc
    RET                                 ; 004b45bd
    XOR EBX,EBX                         ; 004b45be
        ;   Label: LAB_004b45be
    JMP 0x004b458d                      ; 004b45c0 | LAB_004b458d
        ;   XREF to: 004b458d (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004b45c2
        ;   Label: LAB_004b45c2
    LEA EAX,[ESP + 0x4]                 ; 004b45c4
    PUSH EAX                            ; 004b45c8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b45c9 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b45ce
    JMP 0x004b435e                      ; 004b45d1 | LAB_004b435e
        ;   XREF to: 004b435e (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x5bc]               ; 004b45d6
        ;   Label: LAB_004b45d6
    PUSH EAX                            ; 004b45dd
    PUSH 0x626bd7                       ; 004b45de | = "Opening local file %s" | s_Opening_local_file_s_00626bd7 = Opening local file %s
    MOV EDI,dword ptr [0x00678a60]      ; 004b45e3 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b45e9 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b45ea | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b45ef
    PUSH 0x567                          ; 004b45f2
    PUSH 0x626bed                       ; 004b45f7 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626bed = ..\engine\fileio.cpp
    PUSH 0x626c02                       ; 004b45fc | = "rb" | s_rb_00626c02 = rb
    PUSH 0x0                            ; 004b4601
    LEA EAX,[ESP + 0x5cc]               ; 004b4603
    PUSH EAX                            ; 004b460a
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b460b | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b4610
    MOV dword ptr [ESP + 0x13a4],EAX    ; 004b4613
    TEST EAX,EAX                        ; 004b461a
    JZ 0x004b4813                       ; 004b461c | LAB_004b4813
        ;   XREF to: 004b4813 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d12bf8],0x0       ; 004b4622 | g_VersionControlSession.network_username[0]
    JZ 0x004b464b                       ; 004b4629 | LAB_004b464b
        ;   XREF to: 004b464b (CONDITIONAL_JUMP)
    PUSH 0x626c13                       ; 004b462b | = "Logging on as version control user..." | s_Logging_on_as_version_co_00626c13 = Logging on as version control user...
    MOV EAX,[0x00678a60]                ; 004b4630 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b4635 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b4636 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b463b
    CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 ; 004b463e | int engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770()
        ;   XREF to: 004b2770 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 004b4643
    JZ 0x004b4768                       ; 004b4645 | LAB_004b4768
        ;   XREF to: 004b4768 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x5bc]               ; 004b464b
        ;   Label: LAB_004b464b
    PUSH EAX                            ; 004b4652
    PUSH 0x626c39                       ; 004b4653 | = "$$$.%s.$$$" | s_s_00626c39 = $$$.%s.$$$
    LEA EAX,[ESP + 0xe7c]               ; 004b4658
    PUSH EAX                            ; 004b465f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b4660 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4665
    LEA EAX,[ESP + 0xf78]               ; 004b4668
    PUSH EAX                            ; 004b466f
    LEA EAX,[ESP + 0x13b8]              ; 004b4670
    PUSH EAX                            ; 004b4677
    PUSH EBX                            ; 004b4678
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b4679 | void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b467e
    PUSH 0x0                            ; 004b4681
    PUSH 0x0                            ; 004b4683
    LEA EAX,[ESP + 0xf80]               ; 004b4685
    PUSH EAX                            ; 004b468c
    LEA EAX,[ESP + 0x13c0]              ; 004b468d
    PUSH EAX                            ; 004b4694
    LEA EAX,[ESP + 0x970]               ; 004b4695
    PUSH EAX                            ; 004b469c
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b469d | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b46a2
    LEA ESI,[ESP + 0xe74]               ; 004b46a5
    LEA EDI,[ESP + 0x960]               ; 004b46ac
    PUSH EDI                            ; 004b46b3
    SUB ECX,ECX                         ; 004b46b4
    DEC ECX                             ; 004b46b6
    MOV AL,0x0                          ; 004b46b7
    SCASB.REPNE ES:EDI                  ; 004b46b9
    DEC EDI                             ; 004b46bb
    MOV AL,byte ptr [ESI]               ; 004b46bc
        ;   Label: LAB_004b46bc
    MOV byte ptr [EDI],AL               ; 004b46be
    CMP AL,0x0                          ; 004b46c0
    JZ 0x004b46d4                       ; 004b46c2 | LAB_004b46d4
        ;   XREF to: 004b46d4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b46c4
    ADD ESI,0x2                         ; 004b46c7
    MOV byte ptr [EDI + 0x1],AL         ; 004b46ca
    ADD EDI,0x2                         ; 004b46cd
    CMP AL,0x0                          ; 004b46d0
    JNZ 0x004b46bc                      ; 004b46d2 | LAB_004b46bc
        ;   XREF to: 004b46bc (CONDITIONAL_JUMP)
    POP EDI                             ; 004b46d4
        ;   Label: LAB_004b46d4
    LEA EAX,[ESP + 0x960]               ; 004b46d5
    PUSH EAX                            ; 004b46dc
    PUSH 0x626c44                       ; 004b46dd | = "Creating temporary network file %s..." | s_Creating_temporary_netwo_00626c44 = Creating temporary network file %s...
    MOV EDX,dword ptr [0x00678a60]      ; 004b46e2 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b46e8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b46e9 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b46ee
    PUSH 0x0                            ; 004b46f1
    LEA EAX,[ESP + 0x964]               ; 004b46f3
    PUSH EAX                            ; 004b46fa
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b46fb | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4700
    LEA EAX,[ESP + 0x960]               ; 004b4703
    PUSH EAX                            ; 004b470a
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 004b470b | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4710
    PUSH 0x591                          ; 004b4713
    PUSH 0x626c6a                       ; 004b4718 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626c6a = ..\engine\fileio.cpp
    PUSH 0x626c7f                       ; 004b471d | = "wb" | s_wb_00626c7f = wb
    PUSH 0x0                            ; 004b4722
    LEA EAX,[ESP + 0x970]               ; 004b4724
    PUSH EAX                            ; 004b472b
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b472c | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b4731
    MOV EBX,EAX                         ; 004b4734
    MOV ECX,dword ptr [ESP + 0x13a4]    ; 004b4736
    MOV dword ptr [ESP + 0x139c],EAX    ; 004b473d
    TEST ECX,ECX                        ; 004b4744
    JNZ 0x004b483a                      ; 004b4746 | LAB_004b483a
        ;   XREF to: 004b483a (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x960]               ; 004b474c
    PUSH EAX                            ; 004b4753
    PUSH 0x626c82                       ; 004b4754 | = "Can't create %s.\nGet Fletch." | s_Can_t_create_s_Get_Fletc_00626c82 = Can't create %s.
        ; Get Fletch.
    MOV EBX,dword ptr [0x00678a60]      ; 004b4759 | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b475f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4760 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004b4760
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4765
    MOV ECX,dword ptr [ESP + 0x1380]    ; 004b4768
        ;   Label: LAB_004b4768
    TEST ECX,ECX                        ; 004b476f
    JZ 0x004b478f                       ; 004b4771 | LAB_004b478f
        ;   XREF to: 004b478f (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4773
    PUSH 0x62604b                       ; 004b4778 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH ECX                            ; 004b477d
    XOR ESI,ESI                         ; 004b477e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4780 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4785
    MOV dword ptr [ESP + 0x1380],ESI    ; 004b4788
    MOV EDI,dword ptr [ESP + 0x139c]    ; 004b478f
        ;   Label: LAB_004b478f
    TEST EDI,EDI                        ; 004b4796
    JZ 0x004b47ad                       ; 004b4798 | LAB_004b47ad
        ;   XREF to: 004b47ad (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b479a
    PUSH 0x62604b                       ; 004b479f | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDI                            ; 004b47a4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b47a5 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b47aa
    MOV EDX,dword ptr [ESP + 0x13a4]    ; 004b47ad
        ;   Label: LAB_004b47ad
    TEST EDX,EDX                        ; 004b47b4
    JZ 0x004b47cb                       ; 004b47b6 | LAB_004b47cb
        ;   XREF to: 004b47cb (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b47b8
    PUSH 0x62604b                       ; 004b47bd | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDX                            ; 004b47c2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b47c3 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b47c8
    MOV EBX,dword ptr [ESP + 0x13a0]    ; 004b47cb
        ;   Label: LAB_004b47cb
    TEST EBX,EBX                        ; 004b47d2
    JZ 0x004b47e9                       ; 004b47d4 | LAB_004b47e9
        ;   XREF to: 004b47e9 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b47d6
    PUSH 0x62604b                       ; 004b47db | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EBX                            ; 004b47e0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b47e1 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b47e6
    CMP byte ptr [ESP + 0x960],0x0      ; 004b47e9
        ;   Label: LAB_004b47e9
    JZ 0x004b4803                       ; 004b47f1 | LAB_004b4803
        ;   XREF to: 004b4803 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x960]               ; 004b47f3
    PUSH EAX                            ; 004b47fa
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 004b47fb | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4800
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b4803 | void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004b4803
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 004b4808
    MOV EAX,EBX                         ; 004b480a
    MOV ESP,EBP                         ; 004b480c
    POP EBP                             ; 004b480e
    POP EDI                             ; 004b480f
    POP ESI                             ; 004b4810
    POP EBX                             ; 004b4811
    RET                                 ; 004b4812
    LEA EAX,[ESP + 0x5bc]               ; 004b4813
        ;   Label: LAB_004b4813
    PUSH EAX                            ; 004b481a
    PUSH 0x626c05                       ; 004b481b | = "Can't open %s" | s_Can_t_open_s_00626c05 = Can't open %s
    MOV ESI,dword ptr [0x00678a60]      ; 004b4820 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b4826 | CEditorTools g_CEditorToolsPtr
    XOR EBX,EBX                         ; 004b4827
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4829 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b482e
    MOV EAX,EBX                         ; 004b4831
    MOV ESP,EBP                         ; 004b4833
    POP EBP                             ; 004b4835
    POP EDI                             ; 004b4836
    POP ESI                             ; 004b4837
    POP EBX                             ; 004b4838
    RET                                 ; 004b4839
    PUSH 0x626c9f                       ; 004b483a | = "Copying file to temporary network file" | s_Copying_file_to_temporar_00626c9f = Copying file to temporary network file
        ;   Label: LAB_004b483a
    MOV ESI,dword ptr [0x00678a60]      ; 004b483f | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b4845 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b4846 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b484b
    MOV EDI,dword ptr [ESP + 0x7c0]     ; 004b484e
    PUSH EDI                            ; 004b4855
    PUSH 0x626cc6                       ; 004b4856 | = "network" | s_network_00626cc6 = network
    LEA EAX,[ESP + 0x5c4]               ; 004b485b
    PUSH EAX                            ; 004b4862
    PUSH EBX                            ; 004b4863
    MOV EAX,dword ptr [ESP + 0x13b4]    ; 004b4864
    PUSH EAX                            ; 004b486b
    CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 ; 004b486c | char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, ...)
        ;   XREF to: 004b2030 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b4871
    MOV EDX,dword ptr [ESP + 0x13a4]    ; 004b4874
    MOV EDI,EAX                         ; 004b487b
    TEST EDX,EDX                        ; 004b487d
    JZ 0x004b489d                       ; 004b487f | LAB_004b489d
        ;   XREF to: 004b489d (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4881
    PUSH 0x62604b                       ; 004b4886 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDX                            ; 004b488b
    XOR EBX,EBX                         ; 004b488c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b488e | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4893
    MOV dword ptr [ESP + 0x13a4],EBX    ; 004b4896
    MOV ESI,dword ptr [ESP + 0x139c]    ; 004b489d
        ;   Label: LAB_004b489d
    TEST ESI,ESI                        ; 004b48a4
    JZ 0x004b48c4                       ; 004b48a6 | LAB_004b48c4
        ;   XREF to: 004b48c4 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b48a8
    PUSH 0x62604b                       ; 004b48ad | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH ESI                            ; 004b48b2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b48b3 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b48b8
    XOR EDX,EDX                         ; 004b48bb
    MOV dword ptr [ESP + 0x139c],EDX    ; 004b48bd
    TEST EDI,EDI                        ; 004b48c4
        ;   Label: LAB_004b48c4
    JNZ 0x004b4a6c                      ; 004b48c6 | LAB_004b4a6c
        ;   XREF to: 004b4a6c (CONDITIONAL_JUMP)
    MOV DH,byte ptr [0x02d12ac8]        ; 004b48cc | char[264] g_VersionControlDirectory
    LEA EDI,[ESP + 0xb68]               ; 004b48d2
    TEST DH,DH                          ; 004b48d9
    JNZ 0x004b4900                      ; 004b48db | LAB_004b4900
        ;   XREF to: 004b4900 (CONDITIONAL_JUMP)
    MOV ECX,0x626060                    ; 004b48dd | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626060 = ..\engine\fileio.cpp
    MOV EBX,0xdd                        ; 004b48e2
    PUSH 0x626075                       ; 004b48e7 | = "versionControlDirectory not set!" | s_versionControlDirectory__00626075 = versionControlDirectory not set!
    MOV dword ptr [0x02f0ca48],ECX      ; 004b48ec | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b48f2 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b48f8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b48fd
    LEA EAX,[ESP + 0x1078]              ; 004b4900
        ;   Label: LAB_004b4900
    PUSH EAX                            ; 004b4907
    LEA EAX,[ESP + 0x13b4]              ; 004b4908
    PUSH EAX                            ; 004b490f
    PUSH 0x2d12ac8                      ; 004b4910 | char[264] g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b4915 | void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b491a
    PUSH 0x0                            ; 004b491d
    PUSH 0x0                            ; 004b491f
    LEA EAX,[ESP + 0x1080]              ; 004b4921
    PUSH EAX                            ; 004b4928
    LEA EAX,[ESP + 0x13bc]              ; 004b4929
    PUSH EAX                            ; 004b4930
    PUSH EDI                            ; 004b4931
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b4932 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b4937
    MOV ESI,0x626096                    ; 004b493a | = "checkout.txt" | s_checkout_txt_00626096 = checkout.txt
    PUSH EDI                            ; 004b493f
    SUB ECX,ECX                         ; 004b4940
    DEC ECX                             ; 004b4942
    MOV AL,0x0                          ; 004b4943
    SCASB.REPNE ES:EDI                  ; 004b4945
    DEC EDI                             ; 004b4947
    MOV AL,byte ptr [ESI]               ; 004b4948 | = "checkout.txt" | s_checkout_txt_00626096 = checkout.txt
        ;   Label: LAB_004b4948
    MOV byte ptr [EDI],AL               ; 004b494a
    CMP AL,0x0                          ; 004b494c
    JZ 0x004b4960                       ; 004b494e | LAB_004b4960
        ;   XREF to: 004b4960 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b4950 | s_heckout.txt_00626097
    ADD ESI,0x2                         ; 004b4953
    MOV byte ptr [EDI + 0x1],AL         ; 004b4956
    ADD EDI,0x2                         ; 004b4959
    CMP AL,0x0                          ; 004b495c
    JNZ 0x004b4948                      ; 004b495e | LAB_004b4948
        ;   XREF to: 004b4948 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b4960
        ;   Label: LAB_004b4960
    XOR ESI,ESI                         ; 004b4961
    MOV EAX,dword ptr [ESP + 0x1394]    ; 004b4963
    MOV dword ptr [ESP + 0x1378],ESI    ; 004b496a
    MOV dword ptr [ESP + 0x137c],ESI    ; 004b4971
    TEST EAX,EAX                        ; 004b4978
    JZ 0x004b4a7e                       ; 004b497a | LAB_004b4a7e
        ;   XREF to: 004b4a7e (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x18]      ; 004b4980
        ;   Label: LAB_004b4980
    PUSH ECX                            ; 004b4983
    PUSH 0x626d46                       ; 004b4984 | = "Finalizing %s to network..." | s_Finalizing_s_to_network_00626d46 = Finalizing %s to network...
    MOV EBX,dword ptr [0x00678a60]      ; 004b4989 | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b498f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b4990 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4995
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004b4998 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 004b499d
    XOR EDI,EDI                         ; 004b499f
    PUSH EDI                            ; 004b49a1
        ;   Label: LAB_004b49a1
    LEA EAX,[ESP + 0x3ac]               ; 004b49a2
    PUSH EAX                            ; 004b49a9
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b49aa | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b49af
    LEA EAX,[ESP + 0x3a8]               ; 004b49b2
    PUSH EAX                            ; 004b49b9
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 004b49ba | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b49bf
    LEA EAX,[ESP + 0x3a8]               ; 004b49c2
    PUSH EAX                            ; 004b49c9
    LEA EAX,[ESP + 0x964]               ; 004b49ca
    PUSH EAX                            ; 004b49d1
    CALL crt_stdio.c_rename_FUN_006015d0 ; 004b49d2 | int crt_stdio.c_rename_FUN_006015d0(char * old_filename, char * new_filename)
        ;   XREF to: 006015d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b49d7
    TEST EAX,EAX                        ; 004b49da
    JNZ 0x004b4bf1                      ; 004b49dc | LAB_004b4bf1
        ;   XREF to: 004b4bf1 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004b49e2
    JLE 0x004b49f4                      ; 004b49e4 | LAB_004b49f4
        ;   XREF to: 004b49f4 (CONDITIONAL_JUMP)
    MOV EAX,[0x00678a60]                ; 004b49e6 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b49eb | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b49ec | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b49f1
    MOV EDX,dword ptr [ESP + 0x7c8]     ; 004b49f4
        ;   Label: LAB_004b49f4
    PUSH EDX                            ; 004b49fb
    LEA EAX,[ESP + 0x3ac]               ; 004b49fc
    PUSH EAX                            ; 004b4a03
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004b4a04 | int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4a09
    TEST EAX,EAX                        ; 004b4a0c
    JNZ 0x004b4cf7                      ; 004b4a0e | LAB_004b4cf7
        ;   XREF to: 004b4cf7 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x1380]    ; 004b4a14
    TEST ECX,ECX                        ; 004b4a1b
    JZ 0x004b4a3b                       ; 004b4a1d | LAB_004b4a3b
        ;   XREF to: 004b4a3b (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4a1f
    PUSH 0x62604b                       ; 004b4a24 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH ECX                            ; 004b4a29
    XOR ESI,ESI                         ; 004b4a2a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4a2c | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4a31
    MOV dword ptr [ESP + 0x1380],ESI    ; 004b4a34
    LEA EAX,[ESP + 0x3a8]               ; 004b4a3b
        ;   Label: LAB_004b4a3b
    PUSH EAX                            ; 004b4a42
    PUSH 0x626ea8                       ; 004b4a43 | = "Error setting file date/time for %s.\..." | s_Error_setting_file_date__00626ea8 = Error setting file date/time for %s.
        ; Your version of the file has been updated to the network,
        ; but the date on the network file is incorrect.
        ; You still have the file checked out.
        ; This is probably harmless, and can happen in rare
        ; situations when somebody else is trying to get the pod
        ; while you are checking it in.
        ; Another possibility is that the time of the file is newer than
        ; the current system time on your computer.
        ; Leave this on your screen and get Fletch.
        ; If that isn't an option, simply check the file in again,
        ; and then make sure the network file is the same as your file.

    MOV EDI,dword ptr [0x00678a60]      ; 004b4a48 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b4a4e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4a4f | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4a54
    LEA EAX,[ESP + 0x1378]              ; 004b4a57
    PUSH EAX                            ; 004b4a5e
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4a5f | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4a64
    JMP 0x004b4768                      ; 004b4a67 | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004b4a6c
        ;   Label: LAB_004b4a6c
    PUSH 0x626cce                       ; 004b4a6d | = "%s\nGet Fletch." | s_s_Get_Fletch_00626cce = %s
        ; Get Fletch.
    MOV ECX,dword ptr [0x00678a60]      ; 004b4a72 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b4a78 | CEditorTools g_CEditorToolsPtr
    JMP 0x004b4760                      ; 004b4a79 | LAB_004b4760
        ;   XREF to: 004b4760 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xb68]               ; 004b4a7e
        ;   Label: LAB_004b4a7e
    PUSH EAX                            ; 004b4a85
    PUSH 0x626cdd                       ; 004b4a86 | = "Grabbing %s..." | s_Grabbing_s_00626cdd = Grabbing %s...
    MOV EDX,dword ptr [0x00678a60]      ; 004b4a8b | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b4a91 | CEditorTools g_CEditorToolsPtr
    LEA EDI,[ESP + 0xb74]               ; 004b4a92
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b4a99 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4a9e
    PUSH 0x153                          ; 004b4aa1
        ;   Label: LAB_004b4aa1
    PUSH 0x626129                       ; 004b4aa6 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626129 = ..\engine\fileio.cpp
    PUSH 0x626cec                       ; 004b4aab | = "r+t" | s_r_t_00626cec = r+t
    PUSH 0x0                            ; 004b4ab0
    PUSH EDI                            ; 004b4ab2
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b4ab3 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 004b4ab8
    ADD ESP,0x14                        ; 004b4aba
    TEST EAX,EAX                        ; 004b4abd
    JZ 0x004b4b37                       ; 004b4abf | LAB_004b4b37
        ;   XREF to: 004b4b37 (CONDITIONAL_JUMP)
    PUSH 0x400                          ; 004b4ac5
    PUSH 0x0                            ; 004b4aca
    PUSH 0x0                            ; 004b4acc
    PUSH EAX                            ; 004b4ace
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b4acf | int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b4ad4
    MOV EAX,EBX                         ; 004b4ad7
    MOV dword ptr [ESP + 0x1380],EAX    ; 004b4ad9
        ;   Label: LAB_004b4ad9
    TEST EAX,EAX                        ; 004b4ae0
    JNZ 0x004b4b5e                      ; 004b4ae2 | LAB_004b4b5e
        ;   XREF to: 004b4b5e (CONDITIONAL_JUMP)
    JZ 0x004b4b06                       ; 004b4ae8 | LAB_004b4b06
        ;   XREF to: 004b4b06 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4aea
    PUSH 0x62604b                       ; 004b4aef | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EAX                            ; 004b4af4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4af5 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4afa
    XOR EAX,EAX                         ; 004b4afd
    MOV dword ptr [ESP + 0x1380],EAX    ; 004b4aff
    LEA EAX,[ESP + 0xb68]               ; 004b4b06
        ;   Label: LAB_004b4b06
    PUSH EAX                            ; 004b4b0d
    PUSH 0x626cf0                       ; 004b4b0e | = "Can't access %s.  Get Fletch." | s_Can_t_access_s_Get_Fletc_00626cf0 = Can't access %s.  Get Fletch.
    MOV EDX,dword ptr [0x00678a60]      ; 004b4b13 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b4b19 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4b1a | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4b1f
    LEA EAX,[ESP + 0x1378]              ; 004b4b22
    PUSH EAX                            ; 004b4b29
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4b2a | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4b2f
    JMP 0x004b4768                      ; 004b4b32 | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    CALL crt_errno.c_errno_FUN_00601450 ; 004b4b37 | undefined crt_errno.c_errno_FUN_00601450()
        ;   Label: LAB_004b4b37
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)
    CMP dword ptr [EAX],0x6             ; 004b4b3c
    JNZ 0x004b4b57                      ; 004b4b3f | LAB_004b4b57
        ;   XREF to: 004b4b57 (CONDITIONAL_JUMP)
    PUSH 0x1f4                          ; 004b4b41
    INC ESI                             ; 004b4b46
    CALL dword ptr CS:[0x611644]        ; 004b4b47 | Sleep * Sleep
    CMP ESI,0xa                         ; 004b4b4e
    JL 0x004b4aa1                       ; 004b4b51 | LAB_004b4aa1
        ;   XREF to: 004b4aa1 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004b4b57
        ;   Label: LAB_004b4b57
    JMP 0x004b4ad9                      ; 004b4b59 | LAB_004b4ad9
        ;   XREF to: 004b4ad9 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1380]              ; 004b4b5e
        ;   Label: LAB_004b4b5e
    PUSH EAX                            ; 004b4b65
    LEA EAX,[ESP + 0x137c]              ; 004b4b66
    PUSH EAX                            ; 004b4b6d
    CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 ; 004b4b6e | int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, FILE * * file)
        ;   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4b73
    TEST EAX,EAX                        ; 004b4b76
    JZ 0x004b4bdc                       ; 004b4b78 | LAB_004b4bdc
        ;   XREF to: 004b4bdc (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x5bc]               ; 004b4b7a
    PUSH EAX                            ; 004b4b81
    LEA EAX,[ESP + 0x137c]              ; 004b4b82
    PUSH EAX                            ; 004b4b89
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b4b8a | int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4b8f
    MOV dword ptr [ESP + 0x1388],EAX    ; 004b4b92
    TEST EAX,EAX                        ; 004b4b99
    JGE 0x004b4980                      ; 004b4b9b | LAB_004b4980
        ;   XREF to: 004b4980 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x1380]    ; 004b4ba1
    TEST ECX,ECX                        ; 004b4ba8
    JZ 0x004b4bc8                       ; 004b4baa | LAB_004b4bc8
        ;   XREF to: 004b4bc8 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4bac
    PUSH 0x62604b                       ; 004b4bb1 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH ECX                            ; 004b4bb6
    XOR ESI,ESI                         ; 004b4bb7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4bb9 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4bbe
    MOV dword ptr [ESP + 0x1380],ESI    ; 004b4bc1
    PUSH 0x626d0e                       ; 004b4bc8 | = "Hell froze - we no longer have the fi..." | s_Hell_froze_we_no_longer__00626d0e = Hell froze - we no longer have the file checked out!!!!
        ;   Label: LAB_004b4bc8
    MOV EDI,dword ptr [0x00678a60]      ; 004b4bcd | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b4bd3 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4bd4 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4bd9
    LEA EAX,[ESP + 0x1378]              ; 004b4bdc
        ;   Label: LAB_004b4bdc
    PUSH EAX                            ; 004b4be3
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4be4 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4be9
    JMP 0x004b4768                      ; 004b4bec | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    CMP EBX,0x28                        ; 004b4bf1
        ;   Label: LAB_004b4bf1
    JL 0x004b4c65                       ; 004b4bf4 | LAB_004b4c65
        ;   XREF to: 004b4c65 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1380]    ; 004b4bf6
    TEST EDX,EDX                        ; 004b4bfd
    JZ 0x004b4c1d                       ; 004b4bff | LAB_004b4c1d
        ;   XREF to: 004b4c1d (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4c01
    PUSH 0x62604b                       ; 004b4c06 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDX                            ; 004b4c0b
    XOR EBX,EBX                         ; 004b4c0c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4c0e | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4c13
    MOV dword ptr [ESP + 0x1380],EBX    ; 004b4c16
    LEA EAX,[ESP + 0x3a8]               ; 004b4c1d
        ;   Label: LAB_004b4c1d
    PUSH EAX                            ; 004b4c24
    LEA EAX,[ESP + 0x964]               ; 004b4c25
    PUSH EAX                            ; 004b4c2c
    PUSH 0x626d62                       ; 004b4c2d | = "Error renaming %s -> %s.\nThe file wa..." | s_Error_renaming_s_s_The_f_00626d62 = Error renaming %s -> %s.
        ; The file was not checked in.
        ; The most likely cause is that somebody is currently trying to get
        ; the file you are checking in.  No file files have been modified,
        ; and you still have the file checked out.  Wait a little bit and
        ; try again.
    MOV ESI,dword ptr [0x00678a60]      ; 004b4c32 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b4c38 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4c39 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b4c3e
    MOV EDI,dword ptr [0x00678a60]      ; 004b4c41 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004b4c47 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b4c48 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4c4d
    LEA EAX,[ESP + 0x1378]              ; 004b4c50
    PUSH EAX                            ; 004b4c57
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4c58 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4c5d
    JMP 0x004b4768                      ; 004b4c60 | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 004b4c65
        ;   Label: LAB_004b4c65
    CMP EBX,0x1                         ; 004b4c66
    JNZ 0x004b4c9f                      ; 004b4c69 | LAB_004b4c9f
        ;   XREF to: 004b4c9f (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x3a8]               ; 004b4c6b
    PUSH EAX                            ; 004b4c72
    PUSH 0x626e66                       ; 004b4c73 | = "Waiting for %s to become available.\n..." | s_Waiting_for_s_to_become__00626e66 = Waiting for %s to become available.
        ; Press ESC to cancel check in.
    LEA EAX,[ESP + 0x7d8]               ; 004b4c78
    PUSH EAX                            ; 004b4c7f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b4c80 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4c85
    LEA EAX,[ESP + 0x7d0]               ; 004b4c88
    PUSH EAX                            ; 004b4c8f
    MOV ESI,dword ptr [0x00678a60]      ; 004b4c90 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 004b4c96 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004b4c97 | void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4c9c
    PUSH 0x3fe00000                     ; 004b4c9f
        ;   Label: LAB_004b4c9f
    PUSH 0x0                            ; 004b4ca4
    CALL wincore_winrun.cpp_sleep_FUN_005f40e0 ; 004b4ca6 | void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
        ;   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4cab
    MOV dword ptr [ESP + 0x1398],EBX    ; 004b4cae
    PUSH 0x42200000                     ; 004b4cb5
    FILD dword ptr [ESP + 0x139c]       ; 004b4cba
    SUB ESP,0x4                         ; 004b4cc1
    MOV EAX,[0x00678a60]                ; 004b4cc4 | CEditorTools * g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004b4cc9
    PUSH EAX                            ; 004b4ccc | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004b4ccd | void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4cd2
    MOV EAX,[0x0067cf44]                ; 004b4cd5 | CKeys * g_CKeysPtr
    PUSH 0x1                            ; 004b4cda
    MOV ESI,dword ptr [EAX]             ; 004b4cdc | void * g_CKeysPtr
    PUSH EAX                            ; 004b4cde | void * g_CKeysPtr
    CALL dword ptr [ESI + 0x4]          ; 004b4cdf
    ADD ESP,0x8                         ; 004b4ce2
    TEST EAX,EAX                        ; 004b4ce5
    JZ 0x004b49a1                       ; 004b4ce7 | LAB_004b49a1
        ;   XREF to: 004b49a1 (CONDITIONAL_JUMP)
    MOV EBX,0x28                        ; 004b4ced
    JMP 0x004b49a1                      ; 004b4cf2 | LAB_004b49a1
        ;   XREF to: 004b49a1 (UNCONDITIONAL_JUMP)
    PUSH 0x8                            ; 004b4cf7
        ;   Label: LAB_004b4cf7
    LEA EAX,[ESP + 0x3ac]               ; 004b4cf9
    PUSH EAX                            ; 004b4d00
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b4d01 | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4d06
    TEST EAX,EAX                        ; 004b4d09
    JZ 0x004b4dde                       ; 004b4d0b | LAB_004b4dde
        ;   XREF to: 004b4dde (CONDITIONAL_JUMP)
    LEA EDI,[ESP + 0xa64]               ; 004b4d11
    XOR ESI,ESI                         ; 004b4d18
    PUSH 0x153                          ; 004b4d1a
        ;   Label: LAB_004b4d1a
    PUSH 0x626129                       ; 004b4d1f | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626129 = ..\engine\fileio.cpp
    PUSH 0x62729a                       ; 004b4d24 | = "at" | s_at_0062729a = at
    PUSH 0x0                            ; 004b4d29
    PUSH EDI                            ; 004b4d2b
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b4d2c | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 004b4d31
    ADD ESP,0x14                        ; 004b4d33
    TEST EAX,EAX                        ; 004b4d36
    JZ 0x004b4e36                       ; 004b4d38 | LAB_004b4e36
        ;   XREF to: 004b4e36 (CONDITIONAL_JUMP)
    PUSH 0x400                          ; 004b4d3e
    PUSH 0x0                            ; 004b4d43
    PUSH 0x0                            ; 004b4d45
    PUSH EAX                            ; 004b4d47
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b4d48 | int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b4d4d
    MOV dword ptr [ESP + 0x13a0],EBX    ; 004b4d50
        ;   Label: LAB_004b4d50
    TEST EBX,EBX                        ; 004b4d57
    JNZ 0x004b4e5d                      ; 004b4d59 | LAB_004b4e5d
        ;   XREF to: 004b4e5d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1380]    ; 004b4d5f
        ;   Label: LAB_004b4d5f
    TEST EDX,EDX                        ; 004b4d66
    JZ 0x004b4d86                       ; 004b4d68 | LAB_004b4d86
        ;   XREF to: 004b4d86 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4d6a
    PUSH 0x62604b                       ; 004b4d6f | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDX                            ; 004b4d74
    XOR EBX,EBX                         ; 004b4d75
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4d77 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4d7c
    MOV dword ptr [ESP + 0x1380],EBX    ; 004b4d7f
    MOV ESI,dword ptr [ESP + 0x13a0]    ; 004b4d86
        ;   Label: LAB_004b4d86
    TEST ESI,ESI                        ; 004b4d8d
    JZ 0x004b4dad                       ; 004b4d8f | LAB_004b4dad
        ;   XREF to: 004b4dad (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4d91
    PUSH 0x62604b                       ; 004b4d96 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH ESI                            ; 004b4d9b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4d9c | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4da1
    XOR EAX,EAX                         ; 004b4da4
    MOV dword ptr [ESP + 0x13a0],EAX    ; 004b4da6
    LEA EAX,[ESP + 0xa64]               ; 004b4dad
        ;   Label: LAB_004b4dad
    PUSH EAX                            ; 004b4db4
    PUSH 0x62729d                       ; 004b4db5 | = "Error creating history record in %s.\..." | s_Error_creating_history_r_0062729d = Error creating history record in %s.
        ; Your version of the file has been updated to the network.
        ; You still have the file checked out.
        ; This is probably harmless, and can happen in rare
        ; situations when somebody else is trying to get the pod
        ; while you are checking it in.
        ; Leave this on your screen and get Fletch.
        ; If that isn't an option, simply check the file in again,
        ; and then make sure the network file is the same as your file.

    MOV EDX,dword ptr [0x00678a60]      ; 004b4dba | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b4dc0 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4dc1 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4dc6
    LEA EAX,[ESP + 0x1378]              ; 004b4dc9
    PUSH EAX                            ; 004b4dd0
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4dd1 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4dd6
    JMP 0x004b4768                      ; 004b4dd9 | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1380]    ; 004b4dde
        ;   Label: LAB_004b4dde
    TEST EAX,EAX                        ; 004b4de5
    JZ 0x004b4e05                       ; 004b4de7 | LAB_004b4e05
        ;   XREF to: 004b4e05 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4de9
    PUSH 0x62604b                       ; 004b4dee | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EAX                            ; 004b4df3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4df4 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4df9
    XOR ECX,ECX                         ; 004b4dfc
    MOV dword ptr [ESP + 0x1380],ECX    ; 004b4dfe
    LEA EAX,[ESP + 0x3a8]               ; 004b4e05
        ;   Label: LAB_004b4e05
    PUSH EAX                            ; 004b4e0c
    PUSH 0x6270ed                       ; 004b4e0d | = "Error setting file date/time for %s.\..." | s_Error_setting_file_date__006270ed = Error setting file date/time for %s.
        ; Your version of the file has been updated to the network.
        ; You still have the file checked out.
        ; This is probably harmless, and can happen in rare
        ; situations when somebody else is trying to get the pod
        ; while you are checking it in.
        ; Leave this on your screen and get Fletch.
        ; If that isn't an option, simply check the file in again,
        ; and then make sure the network file is the same as your file.

    MOV EBX,dword ptr [0x00678a60]      ; 004b4e12 | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b4e18 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4e19 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4e1e
    LEA EAX,[ESP + 0x1378]              ; 004b4e21
    PUSH EAX                            ; 004b4e28
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4e29 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4e2e
    JMP 0x004b4768                      ; 004b4e31 | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    CALL crt_errno.c_errno_FUN_00601450 ; 004b4e36 | undefined crt_errno.c_errno_FUN_00601450()
        ;   Label: LAB_004b4e36
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)
    CMP dword ptr [EAX],0x6             ; 004b4e3b
    JNZ 0x004b4e56                      ; 004b4e3e | LAB_004b4e56
        ;   XREF to: 004b4e56 (CONDITIONAL_JUMP)
    PUSH 0x1f4                          ; 004b4e40
    INC ESI                             ; 004b4e45
    CALL dword ptr CS:[0x611644]        ; 004b4e46 | Sleep * Sleep
    CMP ESI,0xa                         ; 004b4e4d
    JL 0x004b4d1a                       ; 004b4e50 | LAB_004b4d1a
        ;   XREF to: 004b4d1a (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004b4e56
        ;   Label: LAB_004b4e56
    JMP 0x004b4d50                      ; 004b4e58 | LAB_004b4d50
        ;   XREF to: 004b4d50 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004b4e5d
        ;   Label: LAB_004b4e5d
    CALL crt_time.c_time_with_rounding_FUN_006001f0 ; 004b4e5f | time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4e64
    MOV dword ptr [ESP + 0x1384],EAX    ; 004b4e67
    LEA EAX,[ESP + 0x1384]              ; 004b4e6e
    PUSH EAX                            ; 004b4e75
    CALL crt_time.c_localtime_FUN_00600288 ; 004b4e76 | tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4e7b
    PUSH 0x2d12bd0                      ; 004b4e7e | SVersionControlSession g_VersionControlSession
    MOV ECX,dword ptr [EAX]             ; 004b4e83
    PUSH ECX                            ; 004b4e85
    MOV ESI,dword ptr [EAX + 0x4]       ; 004b4e86
    PUSH ESI                            ; 004b4e89
    MOV EDI,dword ptr [EAX + 0x8]       ; 004b4e8a
    PUSH EDI                            ; 004b4e8d
    MOV EDX,dword ptr [EAX + 0xc]       ; 004b4e8e
    MOV ESI,dword ptr [EAX + 0x10]      ; 004b4e91
    PUSH EDX                            ; 004b4e94
    INC ESI                             ; 004b4e95
    MOV EAX,dword ptr [EAX + 0x14]      ; 004b4e96
    PUSH ESI                            ; 004b4e99
    ADD EAX,0x76c                       ; 004b4e9a
    PUSH EAX                            ; 004b4e9f
    MOV EAX,dword ptr [ESP + 0x13a8]    ; 004b4ea0
    INC EAX                             ; 004b4ea7
    PUSH EAX                            ; 004b4ea8
    PUSH 0x62744a                       ; 004b4ea9 | = "%4d: %04d/%02d/%02d %02d:%02d:%02d \"..." | s_s_4d_04d_02d_02d_02d_02d_0062744a = %4d: %04d/%02d/%02d %02d:%02d:%02d "%s"

    PUSH EBX                            ; 004b4eae
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b4eaf | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x28                        ; 004b4eb4
    PUSH EBX                            ; 004b4eb7
    CALL crt_stdio.c_fflush_FUN_00601540 ; 004b4eb8 | int crt_stdio.c_fflush_FUN_00601540(FILE * stream)
        ;   XREF to: 00601540 (UNCONDITIONAL_CALL)
    MOV CL,byte ptr [EBX + 0xc]         ; 004b4ebd
    ADD ESP,0x4                         ; 004b4ec0
    TEST CL,0x20                        ; 004b4ec3
    JNZ 0x004b4d5f                      ; 004b4ec6 | LAB_004b4d5f
        ;   XREF to: 004b4d5f (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4ecc
    PUSH 0x62604b                       ; 004b4ed1 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EBX                            ; 004b4ed6
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4ed7 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4edc
    XOR ECX,ECX                         ; 004b4edf
    MOV EBX,dword ptr [ESP + 0x1394]    ; 004b4ee1
    MOV dword ptr [ESP + 0x13a0],ECX    ; 004b4ee8
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b4eef | void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)
    TEST EBX,EBX                        ; 004b4ef4
    JNZ 0x004b4f62                      ; 004b4ef6 | LAB_004b4f62
        ;   XREF to: 004b4f62 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x1388]    ; 004b4ef8
    PUSH ESI                            ; 004b4eff
    LEA EAX,[ESP + 0x137c]              ; 004b4f00
    PUSH EAX                            ; 004b4f07
    CALL engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 ; 004b4f08 | int engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList * this_ptr, int entry_index)
        ;   XREF to: 004b2d70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4f0d
    TEST EAX,EAX                        ; 004b4f10
    JNZ 0x004b4f80                      ; 004b4f12 | LAB_004b4f80
        ;   XREF to: 004b4f80 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x1380]    ; 004b4f14
    TEST EDI,EDI                        ; 004b4f1b
    JZ 0x004b4f39                       ; 004b4f1d | LAB_004b4f39
        ;   XREF to: 004b4f39 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4f1f
    PUSH 0x62604b                       ; 004b4f24 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EDI                            ; 004b4f29
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4f2a | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4f2f
    MOV dword ptr [ESP + 0x1380],EBX    ; 004b4f32
    PUSH 0x627473                       ; 004b4f39 | = "Out of memory...Restart the applicati..." | s_Out_of_memory_Restart_th_00627473 = Out of memory...Restart the application NOW.
        ; Better yet, reboot the computer.
        ;   Label: LAB_004b4f39
    MOV ECX,dword ptr [0x00678a60]      ; 004b4f3e | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b4f44 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4f45 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4f4a
    LEA EAX,[ESP + 0x1378]              ; 004b4f4d
        ;   Label: LAB_004b4f4d
    PUSH EAX                            ; 004b4f54
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4f55 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4f5a
    JMP 0x004b4768                      ; 004b4f5d | LAB_004b4768
        ;   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1378]              ; 004b4f62
        ;   Label: LAB_004b4f62
    PUSH EAX                            ; 004b4f69
    MOV EBX,0x2                         ; 004b4f6a
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4f6f | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b4f74
    MOV EAX,EBX                         ; 004b4f77
    MOV ESP,EBP                         ; 004b4f79
    POP EBP                             ; 004b4f7b
    POP EDI                             ; 004b4f7c
    POP ESI                             ; 004b4f7d
    POP EBX                             ; 004b4f7e
    RET                                 ; 004b4f7f
    LEA EAX,[ESP + 0x1380]              ; 004b4f80
        ;   Label: LAB_004b4f80
    PUSH EAX                            ; 004b4f87
    LEA EAX,[ESP + 0x137c]              ; 004b4f88
    PUSH EAX                            ; 004b4f8f
    CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 ; 004b4f90 | int engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList * this_ptr, FILE * * file_handle)
        ;   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4f95
    TEST EAX,EAX                        ; 004b4f98
    JZ 0x004b4f4d                       ; 004b4f9a | LAB_004b4f4d
        ;   XREF to: 004b4f4d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x1380]    ; 004b4f9c
    TEST EBX,EBX                        ; 004b4fa3
    JZ 0x004b4fc3                       ; 004b4fa5 | LAB_004b4fc3
        ;   XREF to: 004b4fc3 (CONDITIONAL_JUMP)
    PUSH 0xc4                           ; 004b4fa7
    PUSH 0x62604b                       ; 004b4fac | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062604b = ..\engine\fileio.cpp
    PUSH EBX                            ; 004b4fb1
    XOR EDI,EDI                         ; 004b4fb2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b4fb4 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b4fb9
    MOV dword ptr [ESP + 0x1380],EDI    ; 004b4fbc
    LEA EAX,[ESP + 0x5bc]               ; 004b4fc3
        ;   Label: LAB_004b4fc3
    PUSH EAX                            ; 004b4fca
    PUSH 0x0                            ; 004b4fcb
    CALL engine_dosio.c_getFileTimestamp_FUN_00481960 ; 004b4fcd | int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4fd2
    MOV EBX,EAX                         ; 004b4fd5
    TEST EAX,EAX                        ; 004b4fd7
    JL 0x004b4ff2                       ; 004b4fd9 | LAB_004b4ff2
        ;   XREF to: 004b4ff2 (CONDITIONAL_JUMP)
    OR AL,0x8                           ; 004b4fdb
    PUSH EAX                            ; 004b4fdd
    LEA EAX,[ESP + 0x5c0]               ; 004b4fde
    PUSH EAX                            ; 004b4fe5
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b4fe6 | bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b4feb
    TEST EAX,EAX                        ; 004b4fee
    JZ 0x004b4ff6                       ; 004b4ff0 | LAB_004b4ff6
        ;   XREF to: 004b4ff6 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004b4ff2
        ;   Label: LAB_004b4ff2
    JGE 0x004b5011                      ; 004b4ff4 | LAB_004b5011
        ;   XREF to: 004b5011 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x5bc]               ; 004b4ff6
        ;   Label: LAB_004b4ff6
    PUSH EAX                            ; 004b4ffd
    PUSH 0x6274c1                       ; 004b4ffe | = "Error marking local file %s as read o..." | s_Error_marking_local_file_006274c1 = Error marking local file %s as read only.
        ; (But your check-in did complete to the network successfully.)
    MOV EAX,[0x00678a60]                ; 004b5003 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 004b5008 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 004b5009 | void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b500e
    LEA EAX,[ESP + 0x1378]              ; 004b5011
        ;   Label: LAB_004b5011
    PUSH EAX                            ; 004b5018
    MOV EBX,0x1                         ; 004b5019
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b501e | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b5023
    MOV EAX,EBX                         ; 004b5026
    MOV ESP,EBP                         ; 004b5028
    POP EBP                             ; 004b502a
    POP EDI                             ; 004b502b
    POP ESI                             ; 004b502c
    POP EBX                             ; 004b502d
    RET                                 ; 004b502e

