; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004a41b0(CFieldNotes *this_ptr,char *param_2,char *param_3)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   param_3
; Local Variables:
; undefined        Stack[-0x5b4]:1  local_5b4
; undefined        Stack[-0x5b3]:1  local_5b3
; undefined1       Stack[-0x5b2]:1  local_5b2
; undefined1       Stack[-0x5b1]:1  local_5b1
; undefined1       Stack[-0x5b0]:1  local_5b0
; undefined1       Stack[-0x5af]:1  local_5af
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined1       Stack[-0x1b3]:1  local_1b3
; undefined        Stack[-0xb4]:1  local_b4
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a61b0 at 004a62cf
;   core_script.cpp_FUN_00522350 at 00525f14
;
; Referenced Globals:
;   undefined4 DAT_005d59e0
;   TerminatedCString s_world_005d5e7e
;   TerminatedCString s_Can_t_open_field_notes_f_005d5e84
;   undefined4 DAT_005d5ea3
;   TerminatedCString s_world_005d5ea6
;   TerminatedCString s_core_fldnotes_cpp_005d5eac
;   TerminatedCString s_Can_t_open_field_notes_f_005d5ec1
;   TerminatedCString s_section_005d5ee0
;   undefined4 s_ection_005d5ee0+1
;   TerminatedCString s_Too_many_field_notes_sec_005d5ee8
;   TerminatedCString s_title_005d5f15
;   undefined4 s_itle_005d5f15+1
;   TerminatedCString s_Didn_t_expect_title_in_s_005d5f1b
;   TerminatedCString s_entry_005d5f41
;   undefined4 s_ntry_005d5f41+1
;   ... and 52 more
;
; Called Functions:
;   core_flashlit.cpp_FUN_004a1390
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
;   core_fldnotes.cpp_SNotesMap_load_FUN_004a38e0
;   core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740
;   core_fldnotes.cpp_STextView_reset_FUN_004a27e0
;   core_fldnotes.cpp_STextView_setRect_FUN_004a2890
;   core_main.c_FUN_004e4500
;   crt_ctype.c_toupper_FUN_005b8e40
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_string.c_strstr_FUN_005ba9e0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a41b0
        ;   Label: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0
    PUSH ESI                            ; 004a41b1
    PUSH EDI                            ; 004a41b2
    PUSH EBP                            ; 004a41b3
    SUB ESP,0x5a4                       ; 004a41b4
    MOV ESI,dword ptr [ESP + 0x5bc]     ; 004a41ba
    MOV ECX,dword ptr [ESP + 0x5b8]     ; 004a41c1
    XOR EDX,EDX                         ; 004a41c8
    PUSH ECX                            ; 004a41ca
    MOV dword ptr [ESP + 0x568],EDX     ; 004a41cb
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004a41d2
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004a41d7
    MOV EDI,dword ptr [ESP + 0x5b8]     ; 004a41da
    XOR EBX,EBX                         ; 004a41e1
    PUSH EDI                            ; 004a41e3
    MOV AL,byte ptr [ESI]               ; 004a41e4
        ;   Label: LAB_004a41e4
    MOV byte ptr [EDI],AL               ; 004a41e6
    CMP AL,0x0                          ; 004a41e8
    JZ 0x004a41fc                       ; 004a41ea
        ;   XREF to: 004a41fc (CONDITIONAL_JUMP)  ; LAB_004a41fc
    MOV AL,byte ptr [ESI + 0x1]         ; 004a41ec
    ADD ESI,0x2                         ; 004a41ef
    MOV byte ptr [EDI + 0x1],AL         ; 004a41f2
    ADD EDI,0x2                         ; 004a41f5
    CMP AL,0x0                          ; 004a41f8
    JNZ 0x004a41e4                      ; 004a41fa
        ;   XREF to: 004a41e4 (CONDITIONAL_JUMP)  ; LAB_004a41e4
    POP EDI                             ; 004a41fc
        ;   Label: LAB_004a41fc
    MOV ESI,dword ptr [ESP + 0x5c0]     ; 004a41fd
    MOV dword ptr [0x01cab7e8],EBX      ; 004a4204 | DAT_01cab7e8
    TEST ESI,ESI                        ; 004a420a
    JZ 0x004a4218                       ; 004a420c
        ;   XREF to: 004a4218 (CONDITIONAL_JUMP)  ; LAB_004a4218
    MOV dword ptr [0x01cab7e8],0x1      ; 004a420e | DAT_01cab7e8
    MOV EBP,dword ptr [ESP + 0x5b8]     ; 004a4218
        ;   Label: LAB_004a4218
    PUSH EBP                            ; 004a421f
    PUSH 0x5d5e7e                       ; 004a4220 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 004a4225
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004a422a
    MOV dword ptr [ESP + 0x568],EAX     ; 004a422d
    TEST EAX,EAX                        ; 004a4234
    JL 0x004a43b8                       ; 004a4236
        ;   XREF to: 004a43b8 (CONDITIONAL_JUMP)  ; LAB_004a43b8
    PUSH 0x5d5ea3                       ; 004a423c | DAT_005d5ea3
    PUSH EBP                            ; 004a4241
    PUSH 0x5d5ea6                       ; 004a4242 | = "world"
    CALL engine_dosio.cpp_FUN_00460c70  ; 004a4247
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a424c
    MOV dword ptr [ESP + 0x564],EAX     ; 004a424f
    TEST EAX,EAX                        ; 004a4256
    JZ 0x004a443e                       ; 004a4258
        ;   XREF to: 004a443e (CONDITIONAL_JUMP)  ; LAB_004a443e
    MOV ESI,dword ptr [ESP + 0x564]     ; 004a425e
        ;   Label: LAB_004a425e
    PUSH ESI                            ; 004a4265
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 004a4266
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a426b
    XOR EBP,EBP                         ; 004a426e
    MOV EDI,dword ptr [ESP + 0x568]     ; 004a4270
    MOV dword ptr [ESP + 0x56c],EBP     ; 004a4277
    ADD EDI,EAX                         ; 004a427e
    MOV dword ptr [ESP + 0x570],EBP     ; 004a4280
    MOV dword ptr [ESP + 0x568],EDI     ; 004a4287
    MOV ECX,dword ptr [ESP + 0x564]     ; 004a428e
        ;   Label: LAB_004a428e
    PUSH ECX                            ; 004a4295
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 004a4296
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a429b
    CMP EAX,dword ptr [ESP + 0x568]     ; 004a429e
    JGE 0x004a42cd                      ; 004a42a5
        ;   XREF to: 004a42cd (CONDITIONAL_JUMP)  ; LAB_004a42cd
    MOV ESI,dword ptr [ESP + 0x564]     ; 004a42a7
    PUSH ESI                            ; 004a42ae
    PUSH 0x400                          ; 004a42af
    LEA EAX,[ESP + 0x8]                 ; 004a42b4
    PUSH EAX                            ; 004a42b8
    LEA EBX,[ESP + 0xc]                 ; 004a42b9
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004a42bd
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004a42c2
    CMP EAX,EBX                         ; 004a42c5
    JZ 0x004a4467                       ; 004a42c7
        ;   XREF to: 004a4467 (CONDITIONAL_JUMP)  ; LAB_004a4467
    MOV EAX,dword ptr [ESP + 0x564]     ; 004a42cd
        ;   Label: LAB_004a42cd
    PUSH EAX                            ; 004a42d4
    XOR ESI,ESI                         ; 004a42d5
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004a42d7
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004a42dc
    XOR EDX,EDX                         ; 004a42df
    MOV ECX,dword ptr [0x01cacb4c]      ; 004a42e1 | DAT_01cacb4c
    MOV dword ptr [ESP + 0x564],EDX     ; 004a42e7
    TEST ECX,ECX                        ; 004a42ee
    JLE 0x004a4320                      ; 004a42f0
        ;   XREF to: 004a4320 (CONDITIONAL_JUMP)  ; LAB_004a4320
    MOV EBX,0x1cacb50                   ; 004a42f2
    PUSH EBX                            ; 004a42f7
        ;   Label: LAB_004a42f7
    CALL core_fldnotes.cpp_SNotesMap_load_FUN_004a38e0 ; 004a42f8
        ;   XREF to: 004a38e0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesMap_load_FUN_004a38e0(SNotesMap * this_ptr)
    INC ESI                             ; 004a42fd
    MOV EDI,dword ptr [0x01cacb4c]      ; 004a42fe | DAT_01cacb4c
    ADD ESP,0x4                         ; 004a4304
    ADD EBX,0x970                       ; 004a4307
    CMP ESI,EDI                         ; 004a430d
    JL 0x004a42f7                       ; 004a430f
        ;   XREF to: 004a42f7 (CONDITIONAL_JUMP)  ; LAB_004a42f7
    LEA EAX,[EAX]                       ; 004a4311
    LEA EDX,[EDX]                       ; 004a4317
    LEA EAX,[EAX]                       ; 004a431d
    MOV EBP,0x1                         ; 004a4320
        ;   Label: LAB_004a4320
    MOV EDX,dword ptr [ESP + 0x5c0]     ; 004a4325
    MOV dword ptr [0x00616014],EBP      ; 004a432c | DAT_00616014
    MOV dword ptr [0x00616010],EBP      ; 004a4332 | DAT_00616010
    TEST EDX,EDX                        ; 004a4338
    JZ 0x004a43a8                       ; 004a433a
        ;   XREF to: 004a43a8 (CONDITIONAL_JUMP)  ; LAB_004a43a8
    PUSH 0x1b8                          ; 004a433c
    PUSH 0x1eb                          ; 004a4341
    PUSH 0x40                           ; 004a4346
    PUSH 0x60                           ; 004a4348
    PUSH 0x1caf240                      ; 004a434a
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a2890 ; 004a434f
        ;   XREF to: 004a2890 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a2890(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004a4354
    PUSH 0x1caf240                      ; 004a4357
    XOR BL,BL                           ; 004a435c
    XOR ESI,ESI                         ; 004a435e
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a27e0 ; 004a4360
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a27e0(STextView * this_ptr)
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a4365 | DAT_01cab9f0
    ADD ESP,0x4                         ; 004a436b
    MOV byte ptr [0x01cab7f0],BL        ; 004a436e | DAT_01cab7f0
    TEST ECX,ECX                        ; 004a4374
    JLE 0x004a43a0                      ; 004a4376
        ;   XREF to: 004a43a0 (CONDITIONAL_JUMP)  ; LAB_004a43a0
    MOV EBX,0x1cab9f4                   ; 004a4378
    PUSH 0x1caf240                      ; 004a437d
        ;   Label: LAB_004a437d
    PUSH EBX                            ; 004a4382
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740 ; 004a4383
        ;   XREF to: 004a3740 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004a4388
    TEST EAX,EAX                        ; 004a438b
    JZ 0x004a43cb                       ; 004a438d
        ;   XREF to: 004a43cb (CONDITIONAL_JUMP)  ; LAB_004a43cb
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a438f | DAT_01cab9f0
    INC ESI                             ; 004a4395
    ADD EBX,0x2e4                       ; 004a4396
    CMP ESI,EDI                         ; 004a439c
    JL 0x004a437d                       ; 004a439e
        ;   XREF to: 004a437d (CONDITIONAL_JUMP)  ; LAB_004a437d
    XOR EBP,EBP                         ; 004a43a0
        ;   Label: LAB_004a43a0
    MOV dword ptr [0x00616014],EBP      ; 004a43a2 | DAT_00616014
    MOV EAX,0x1                         ; 004a43a8
        ;   Label: LAB_004a43a8
    ADD ESP,0x5a4                       ; 004a43ad
    POP EBP                             ; 004a43b3
    POP EDI                             ; 004a43b4
    POP ESI                             ; 004a43b5
    POP EBX                             ; 004a43b6
    RET                                 ; 004a43b7
    PUSH EBP                            ; 004a43b8
        ;   Label: LAB_004a43b8
    PUSH 0x5d5e84                       ; 004a43b9 | = "Can't open field notes file %s"
    PUSH 0x1cab7f0                      ; 004a43be | DAT_01cab7f0
        ;   Label: LAB_004a43be
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a43c3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a43c8
    MOV EAX,dword ptr [ESP + 0x564]     ; 004a43cb
        ;   Label: LAB_004a43cb
    TEST EAX,EAX                        ; 004a43d2
    JZ 0x004a43df                       ; 004a43d4
        ;   XREF to: 004a43df (CONDITIONAL_JUMP)  ; LAB_004a43df
    PUSH EAX                            ; 004a43d6
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004a43d7
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004a43dc
    MOV ECX,dword ptr [ESP + 0x5c0]     ; 004a43df
        ;   Label: LAB_004a43df
    TEST ECX,ECX                        ; 004a43e6
    JNZ 0x004a441b                      ; 004a43e8
        ;   XREF to: 004a441b (CONDITIONAL_JUMP)  ; LAB_004a441b
    PUSH 0x1cab7f0                      ; 004a43ea | DAT_01cab7f0
    MOV EBX,dword ptr [0x006138e0]      ; 004a43ef | g_CEditorToolsPtr
    PUSH EBX                            ; 004a43f5
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004a43f6
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004a43fb
    MOV ESI,dword ptr [ESP + 0x5b8]     ; 004a43fe
        ;   Label: LAB_004a43fe
    PUSH ESI                            ; 004a4405
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004a4406
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004a440b
    XOR EAX,EAX                         ; 004a440e
    ADD ESP,0x5a4                       ; 004a4410
    POP EBP                             ; 004a4416
    POP EDI                             ; 004a4417
    POP ESI                             ; 004a4418
    POP EBX                             ; 004a4419
    RET                                 ; 004a441a
    MOV ESI,0x1cab7f0                   ; 004a441b
        ;   Label: LAB_004a441b
    MOV EDI,ECX                         ; 004a4420
    PUSH EDI                            ; 004a4422
    MOV AL,byte ptr [ESI]               ; 004a4423 | DAT_01cab7f0 | DAT_01cab7f2
        ;   Label: LAB_004a4423
    MOV byte ptr [EDI],AL               ; 004a4425
    CMP AL,0x0                          ; 004a4427
    JZ 0x004a443b                       ; 004a4429
        ;   XREF to: 004a443b (CONDITIONAL_JUMP)  ; LAB_004a443b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a442b | DAT_01cab7f1 | DAT_01cab7f3
    ADD ESI,0x2                         ; 004a442e
    MOV byte ptr [EDI + 0x1],AL         ; 004a4431
    ADD EDI,0x2                         ; 004a4434
    CMP AL,0x0                          ; 004a4437
    JNZ 0x004a4423                      ; 004a4439
        ;   XREF to: 004a4423 (CONDITIONAL_JUMP)  ; LAB_004a4423
    POP EDI                             ; 004a443b
        ;   Label: LAB_004a443b
    JMP 0x004a43fe                      ; 004a443c
        ;   XREF to: 004a43fe (UNCONDITIONAL_JUMP)  ; LAB_004a43fe
    PUSH EBP                            ; 004a443e
        ;   Label: LAB_004a443e
    MOV EDX,0x5d5eac                    ; 004a443f | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x889                       ; 004a4444
    PUSH 0x5d5ec1                       ; 004a4449 | = "Can't open field notes file %s"
    MOV dword ptr [0x01d046a0],EDX      ; 004a444e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004a4454 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a445a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004a445f
    JMP 0x004a425e                      ; 004a4462
        ;   XREF to: 004a425e (UNCONDITIONAL_JUMP)  ; LAB_004a425e
    PUSH 0x5d59e0                       ; 004a4467 | DAT_005d59e0
        ;   Label: LAB_004a4467
    PUSH EBX                            ; 004a446c
    CALL crt_string.c_strstr_FUN_005ba9e0 ; 004a446d
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005ba9e0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004a4472
    TEST EAX,EAX                        ; 004a4475
    JZ 0x004a447c                       ; 004a4477
        ;   XREF to: 004a447c (CONDITIONAL_JUMP)  ; LAB_004a447c
    MOV byte ptr [EAX],0x0              ; 004a4479
    PUSH EBX                            ; 004a447c
        ;   Label: LAB_004a447c
    CALL core_flashlit.cpp_FUN_004a1390 ; 004a447d
        ;   XREF to: 004a1390 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1390()
    ADD ESP,0x4                         ; 004a4482
    MOV AH,byte ptr [ESP]               ; 004a4485
    INC EBP                             ; 004a4488
    TEST AH,AH                          ; 004a4489
    JZ 0x004a428e                       ; 004a448b
        ;   XREF to: 004a428e (CONDITIONAL_JUMP)  ; LAB_004a428e
    MOV EBX,0x5d5ee0                    ; 004a4491 | = "section"
    LEA EAX,[ESP + 0x400]               ; 004a4496
    MOV ESI,ESP                         ; 004a449d
    MOV dword ptr [ESP + 0x574],EAX     ; 004a449f
    MOV AL,byte ptr [ESI]               ; 004a44a6
        ;   Label: LAB_004a44a6
    INC AL                              ; 004a44a8
    MOVZX EDI,AL                        ; 004a44aa
    MOV DL,byte ptr [EDI + 0x61ed94]    ; 004a44ad | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a44b3
    TEST DL,0x2                         ; 004a44b6
    JZ 0x004a44bf                       ; 004a44b9
        ;   XREF to: 004a44bf (CONDITIONAL_JUMP)  ; LAB_004a44bf
    MOV ESI,EAX                         ; 004a44bb
    JMP 0x004a44a6                      ; 004a44bd
        ;   XREF to: 004a44a6 (UNCONDITIONAL_JUMP)  ; LAB_004a44a6
    CMP byte ptr [ESI],0x5c             ; 004a44bf
        ;   Label: LAB_004a44bf
    JZ 0x004a44f6                       ; 004a44c2
        ;   XREF to: 004a44f6 (CONDITIONAL_JUMP)  ; LAB_004a44f6
    MOV EBX,0x5d5f15                    ; 004a44c4 | = "title"
        ;   Label: LAB_004a44c4
    LEA EAX,[ESP + 0x400]               ; 004a44c9
    MOV ESI,ESP                         ; 004a44d0
    MOV dword ptr [ESP + 0x578],EAX     ; 004a44d2
    MOV AL,byte ptr [ESI]               ; 004a44d9
        ;   Label: LAB_004a44d9
    INC AL                              ; 004a44db
    MOVZX EDI,AL                        ; 004a44dd
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a44e0 | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a44e6
    TEST DH,0x2                         ; 004a44e9
    JZ 0x004a45da                       ; 004a44ec
        ;   XREF to: 004a45da (CONDITIONAL_JUMP)  ; LAB_004a45da
    MOV ESI,EAX                         ; 004a44f2
    JMP 0x004a44d9                      ; 004a44f4
        ;   XREF to: 004a44d9 (UNCONDITIONAL_JUMP)  ; LAB_004a44d9
    MOV CL,byte ptr [EBX]               ; 004a44f6 | = "section"
        ;   Label: LAB_004a44f6
    MOV ESI,EAX                         ; 004a44f8
    TEST CL,CL                          ; 004a44fa
    JZ 0x004a4527                       ; 004a44fc
        ;   XREF to: 004a4527 (CONDITIONAL_JUMP)  ; LAB_004a4527
    XOR EAX,EAX                         ; 004a44fe
        ;   Label: LAB_004a44fe
    MOV AL,byte ptr [ESI]               ; 004a4500
    PUSH EAX                            ; 004a4502
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4503
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4508
    XOR EAX,EAX                         ; 004a450a
    ADD ESP,0x4                         ; 004a450c
    MOV AL,byte ptr [EBX]               ; 004a450f | = "section"
    PUSH EAX                            ; 004a4511
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4512
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4517
    CMP EDI,EAX                         ; 004a451a
    JNZ 0x004a44c4                      ; 004a451c
        ;   XREF to: 004a44c4 (CONDITIONAL_JUMP)  ; LAB_004a44c4
    MOV CH,byte ptr [EBX + 0x1]         ; 004a451e | s_ection_005d5ee0+1
    INC EBX                             ; 004a4521
    INC ESI                             ; 004a4522
    TEST CH,CH                          ; 004a4523
    JNZ 0x004a44fe                      ; 004a4525
        ;   XREF to: 004a44fe (CONDITIONAL_JUMP)  ; LAB_004a44fe
    MOV AL,byte ptr [ESI]               ; 004a4527
        ;   Label: LAB_004a4527
    INC AL                              ; 004a4529
    AND EAX,0xff                        ; 004a452b
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a4530 | DAT_0061ed94
    JZ 0x004a453c                       ; 004a4537
        ;   XREF to: 004a453c (CONDITIONAL_JUMP)  ; LAB_004a453c
    INC ESI                             ; 004a4539
    JMP 0x004a4527                      ; 004a453a
        ;   XREF to: 004a4527 (UNCONDITIONAL_JUMP)  ; LAB_004a4527
    MOV EDI,dword ptr [ESP + 0x574]     ; 004a453c
        ;   Label: LAB_004a453c
    PUSH EDI                            ; 004a4543
    MOV AL,byte ptr [ESI]               ; 004a4544
        ;   Label: LAB_004a4544
    MOV byte ptr [EDI],AL               ; 004a4546
    CMP AL,0x0                          ; 004a4548
    JZ 0x004a455c                       ; 004a454a
        ;   XREF to: 004a455c (CONDITIONAL_JUMP)  ; LAB_004a455c
    MOV AL,byte ptr [ESI + 0x1]         ; 004a454c
    ADD ESI,0x2                         ; 004a454f
    MOV byte ptr [EDI + 0x1],AL         ; 004a4552
    ADD EDI,0x2                         ; 004a4555
    CMP AL,0x0                          ; 004a4558
    JNZ 0x004a4544                      ; 004a455a
        ;   XREF to: 004a4544 (CONDITIONAL_JUMP)  ; LAB_004a4544
    POP EDI                             ; 004a455c
        ;   Label: LAB_004a455c
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a455d | DAT_01cab9f0
    CMP EDI,0x6                         ; 004a4563
    JGE 0x004a45ba                      ; 004a4566
        ;   XREF to: 004a45ba (CONDITIONAL_JUMP)  ; LAB_004a45ba
    IMUL EAX,EDI,0x2e4                  ; 004a4568
    MOV EDX,0x1cab9f4                   ; 004a456e
    ADD EDX,EAX                         ; 004a4573
    LEA ESI,[ESP + 0x400]               ; 004a4575
    MOV EDI,EDX                         ; 004a457c
    XOR ECX,ECX                         ; 004a457e
    PUSH EDI                            ; 004a4580
    MOV AL,byte ptr [ESI]               ; 004a4581
        ;   Label: LAB_004a4581
    MOV byte ptr [EDI],AL               ; 004a4583
    CMP AL,0x0                          ; 004a4585
    JZ 0x004a4599                       ; 004a4587
        ;   XREF to: 004a4599 (CONDITIONAL_JUMP)  ; LAB_004a4599
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4589
    ADD ESI,0x2                         ; 004a458c
    MOV byte ptr [EDI + 0x1],AL         ; 004a458f
    ADD EDI,0x2                         ; 004a4592
    CMP AL,0x0                          ; 004a4595
    JNZ 0x004a4581                      ; 004a4597
        ;   XREF to: 004a4581 (CONDITIONAL_JUMP)  ; LAB_004a4581
    POP EDI                             ; 004a4599
        ;   Label: LAB_004a4599
    MOV EBX,dword ptr [0x01cab9f0]      ; 004a459a | DAT_01cab9f0
    MOV dword ptr [ESP + 0x570],ECX     ; 004a45a0
    INC EBX                             ; 004a45a7
    MOV dword ptr [ESP + 0x56c],EDX     ; 004a45a8
    MOV dword ptr [0x01cab9f0],EBX      ; 004a45af | DAT_01cab9f0
    JMP 0x004a428e                      ; 004a45b5
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a45ba
        ;   Label: LAB_004a45ba
    MOV ESI,dword ptr [ESP + 0x5bc]     ; 004a45bb
    PUSH ESI                            ; 004a45c2
    PUSH 0x5d5ee8                       ; 004a45c3 | = "Too many field notes sections in %s, ..."
    PUSH 0x1cab7f0                      ; 004a45c8 | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a45cd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a45d2
    JMP 0x004a43cb                      ; 004a45d5
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    CMP byte ptr [ESI],0x5c             ; 004a45da
        ;   Label: LAB_004a45da
    JZ 0x004a4611                       ; 004a45dd
        ;   XREF to: 004a4611 (CONDITIONAL_JUMP)  ; LAB_004a4611
    MOV EBX,0x5d5f41                    ; 004a45df | = "entry"
        ;   Label: LAB_004a45df
    LEA EAX,[ESP + 0x400]               ; 004a45e4
    MOV ESI,ESP                         ; 004a45eb
    MOV dword ptr [ESP + 0x57c],EAX     ; 004a45ed
    MOV AL,byte ptr [ESI]               ; 004a45f4
        ;   Label: LAB_004a45f4
    INC AL                              ; 004a45f6
    MOVZX EDI,AL                        ; 004a45f8
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a45fb | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a4601
    TEST DH,0x2                         ; 004a4604
    JZ 0x004a4700                       ; 004a4607
        ;   XREF to: 004a4700 (CONDITIONAL_JUMP)  ; LAB_004a4700
    MOV ESI,EAX                         ; 004a460d
    JMP 0x004a45f4                      ; 004a460f
        ;   XREF to: 004a45f4 (UNCONDITIONAL_JUMP)  ; LAB_004a45f4
    MOV CH,byte ptr [EBX]               ; 004a4611 | = "title"
        ;   Label: LAB_004a4611
    MOV ESI,EAX                         ; 004a4613
    TEST CH,CH                          ; 004a4615
    JZ 0x004a4642                       ; 004a4617
        ;   XREF to: 004a4642 (CONDITIONAL_JUMP)  ; LAB_004a4642
    XOR EAX,EAX                         ; 004a4619
        ;   Label: LAB_004a4619
    MOV AL,byte ptr [ESI]               ; 004a461b
    PUSH EAX                            ; 004a461d
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a461e
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4623
    XOR EAX,EAX                         ; 004a4625
    ADD ESP,0x4                         ; 004a4627
    MOV AL,byte ptr [EBX]               ; 004a462a | = "title"
    PUSH EAX                            ; 004a462c
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a462d
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4632
    CMP EDI,EAX                         ; 004a4635
    JNZ 0x004a45df                      ; 004a4637
        ;   XREF to: 004a45df (CONDITIONAL_JUMP)  ; LAB_004a45df
    MOV AL,byte ptr [EBX + 0x1]         ; 004a4639 | s_itle_005d5f15+1
    INC EBX                             ; 004a463c
    INC ESI                             ; 004a463d
    TEST AL,AL                          ; 004a463e
    JNZ 0x004a4619                      ; 004a4640
        ;   XREF to: 004a4619 (CONDITIONAL_JUMP)  ; LAB_004a4619
    MOV AL,byte ptr [ESI]               ; 004a4642
        ;   Label: LAB_004a4642
    INC AL                              ; 004a4644
    AND EAX,0xff                        ; 004a4646
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a464b | DAT_0061ed94
    JZ 0x004a4657                       ; 004a4652
        ;   XREF to: 004a4657 (CONDITIONAL_JUMP)  ; LAB_004a4657
    INC ESI                             ; 004a4654
    JMP 0x004a4642                      ; 004a4655
        ;   XREF to: 004a4642 (UNCONDITIONAL_JUMP)  ; LAB_004a4642
    MOV EDI,dword ptr [ESP + 0x578]     ; 004a4657
        ;   Label: LAB_004a4657
    PUSH EDI                            ; 004a465e
    MOV AL,byte ptr [ESI]               ; 004a465f
        ;   Label: LAB_004a465f
    MOV byte ptr [EDI],AL               ; 004a4661
    CMP AL,0x0                          ; 004a4663
    JZ 0x004a4677                       ; 004a4665
        ;   XREF to: 004a4677 (CONDITIONAL_JUMP)  ; LAB_004a4677
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4667
    ADD ESI,0x2                         ; 004a466a
    MOV byte ptr [EDI + 0x1],AL         ; 004a466d
    ADD EDI,0x2                         ; 004a4670
    CMP AL,0x0                          ; 004a4673
    JNZ 0x004a465f                      ; 004a4675
        ;   XREF to: 004a465f (CONDITIONAL_JUMP)  ; LAB_004a465f
    POP EDI                             ; 004a4677
        ;   Label: LAB_004a4677
    MOV EDI,dword ptr [ESP + 0x570]     ; 004a4678
    TEST EDI,EDI                        ; 004a467f
    JNZ 0x004a46b7                      ; 004a4681
        ;   XREF to: 004a46b7 (CONDITIONAL_JUMP)  ; LAB_004a46b7
    MOV EAX,dword ptr [ESP + 0x56c]     ; 004a4683
    TEST EAX,EAX                        ; 004a468a
    JZ 0x004a46e0                       ; 004a468c
        ;   XREF to: 004a46e0 (CONDITIONAL_JUMP)  ; LAB_004a46e0
    LEA ESI,[ESP + 0x400]               ; 004a468e
    LEA EDI,[EAX + 0x40]                ; 004a4695
    PUSH EDI                            ; 004a4698
    MOV AL,byte ptr [ESI]               ; 004a4699
        ;   Label: LAB_004a4699
    MOV byte ptr [EDI],AL               ; 004a469b
    CMP AL,0x0                          ; 004a469d
    JZ 0x004a46b1                       ; 004a469f
        ;   XREF to: 004a46b1 (CONDITIONAL_JUMP)  ; LAB_004a46b1
    MOV AL,byte ptr [ESI + 0x1]         ; 004a46a1
    ADD ESI,0x2                         ; 004a46a4
    MOV byte ptr [EDI + 0x1],AL         ; 004a46a7
    ADD EDI,0x2                         ; 004a46aa
    CMP AL,0x0                          ; 004a46ad
    JNZ 0x004a4699                      ; 004a46af
        ;   XREF to: 004a4699 (CONDITIONAL_JUMP)  ; LAB_004a4699
    POP EDI                             ; 004a46b1
        ;   Label: LAB_004a46b1
    JMP 0x004a428e                      ; 004a46b2
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    LEA ESI,[ESP + 0x400]               ; 004a46b7
        ;   Label: LAB_004a46b7
    ADD EDI,0x40                        ; 004a46be
    PUSH EDI                            ; 004a46c1
    MOV AL,byte ptr [ESI]               ; 004a46c2
        ;   Label: LAB_004a46c2
    MOV byte ptr [EDI],AL               ; 004a46c4
    CMP AL,0x0                          ; 004a46c6
    JZ 0x004a46da                       ; 004a46c8
        ;   XREF to: 004a46da (CONDITIONAL_JUMP)  ; LAB_004a46da
    MOV AL,byte ptr [ESI + 0x1]         ; 004a46ca
    ADD ESI,0x2                         ; 004a46cd
    MOV byte ptr [EDI + 0x1],AL         ; 004a46d0
    ADD EDI,0x2                         ; 004a46d3
    CMP AL,0x0                          ; 004a46d6
    JNZ 0x004a46c2                      ; 004a46d8
        ;   XREF to: 004a46c2 (CONDITIONAL_JUMP)  ; LAB_004a46c2
    POP EDI                             ; 004a46da
        ;   Label: LAB_004a46da
    JMP 0x004a428e                      ; 004a46db
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a46e0
        ;   Label: LAB_004a46e0
    MOV EDX,dword ptr [ESP + 0x5bc]     ; 004a46e1
    PUSH EDX                            ; 004a46e8
    PUSH 0x5d5f1b                       ; 004a46e9 | = "Didn't expect '\\title' in %s, line %d"
    PUSH 0x1cab7f0                      ; 004a46ee | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a46f3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a46f8
    JMP 0x004a43cb                      ; 004a46fb
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    CMP byte ptr [ESI],0x5c             ; 004a4700
        ;   Label: LAB_004a4700
    JZ 0x004a4737                       ; 004a4703
        ;   XREF to: 004a4737 (CONDITIONAL_JUMP)  ; LAB_004a4737
    MOV EBX,0x5d5f88                    ; 004a4705 | DAT_005d5f88
        ;   Label: LAB_004a4705
    LEA EAX,[ESP + 0x400]               ; 004a470a
    MOV ESI,ESP                         ; 004a4711
    MOV dword ptr [ESP + 0x584],EAX     ; 004a4713
    MOV AL,byte ptr [ESI]               ; 004a471a
        ;   Label: LAB_004a471a
    INC AL                              ; 004a471c
    MOVZX EDI,AL                        ; 004a471e
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a4721 | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a4727
    TEST DH,0x2                         ; 004a472a
    JZ 0x004a4868                       ; 004a472d
        ;   XREF to: 004a4868 (CONDITIONAL_JUMP)  ; LAB_004a4868
    MOV ESI,EAX                         ; 004a4733
    JMP 0x004a471a                      ; 004a4735
        ;   XREF to: 004a471a (UNCONDITIONAL_JUMP)  ; LAB_004a471a
    MOV CH,byte ptr [EBX]               ; 004a4737 | = "entry"
        ;   Label: LAB_004a4737
    MOV ESI,EAX                         ; 004a4739
    TEST CH,CH                          ; 004a473b
    JZ 0x004a4768                       ; 004a473d
        ;   XREF to: 004a4768 (CONDITIONAL_JUMP)  ; LAB_004a4768
    XOR EAX,EAX                         ; 004a473f
        ;   Label: LAB_004a473f
    MOV AL,byte ptr [ESI]               ; 004a4741
    PUSH EAX                            ; 004a4743
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4744
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4749
    XOR EAX,EAX                         ; 004a474b
    ADD ESP,0x4                         ; 004a474d
    MOV AL,byte ptr [EBX]               ; 004a4750 | = "entry"
    PUSH EAX                            ; 004a4752
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4753
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4758
    CMP EDI,EAX                         ; 004a475b
    JNZ 0x004a4705                      ; 004a475d
        ;   XREF to: 004a4705 (CONDITIONAL_JUMP)  ; LAB_004a4705
    MOV AL,byte ptr [EBX + 0x1]         ; 004a475f | s_ntry_005d5f41+1
    INC EBX                             ; 004a4762
    INC ESI                             ; 004a4763
    TEST AL,AL                          ; 004a4764
    JNZ 0x004a473f                      ; 004a4766
        ;   XREF to: 004a473f (CONDITIONAL_JUMP)  ; LAB_004a473f
    MOV AL,byte ptr [ESI]               ; 004a4768
        ;   Label: LAB_004a4768
    INC AL                              ; 004a476a
    AND EAX,0xff                        ; 004a476c
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a4771 | DAT_0061ed94
    JZ 0x004a477d                       ; 004a4778
        ;   XREF to: 004a477d (CONDITIONAL_JUMP)  ; LAB_004a477d
    INC ESI                             ; 004a477a
    JMP 0x004a4768                      ; 004a477b
        ;   XREF to: 004a4768 (UNCONDITIONAL_JUMP)  ; LAB_004a4768
    MOV EDI,dword ptr [ESP + 0x57c]     ; 004a477d
        ;   Label: LAB_004a477d
    MOV ECX,dword ptr [ESP + 0x56c]     ; 004a4784
    PUSH EDI                            ; 004a478b
    MOV AL,byte ptr [ESI]               ; 004a478c
        ;   Label: LAB_004a478c
    MOV byte ptr [EDI],AL               ; 004a478e
    CMP AL,0x0                          ; 004a4790
    JZ 0x004a47a4                       ; 004a4792
        ;   XREF to: 004a47a4 (CONDITIONAL_JUMP)  ; LAB_004a47a4
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4794
    ADD ESI,0x2                         ; 004a4797
    MOV byte ptr [EDI + 0x1],AL         ; 004a479a
    ADD EDI,0x2                         ; 004a479d
    CMP AL,0x0                          ; 004a47a0
    JNZ 0x004a478c                      ; 004a47a2
        ;   XREF to: 004a478c (CONDITIONAL_JUMP)  ; LAB_004a478c
    POP EDI                             ; 004a47a4
        ;   Label: LAB_004a47a4
    TEST ECX,ECX                        ; 004a47a5
    JZ 0x004a480f                       ; 004a47a7
        ;   XREF to: 004a480f (CONDITIONAL_JUMP)  ; LAB_004a480f
    LEA EDI,[ESP + 0x400]               ; 004a47a9
    XOR EBX,EBX                         ; 004a47b0
    MOV ESI,dword ptr [0x01cab9f0]      ; 004a47b2 | DAT_01cab9f0
    MOV dword ptr [ESP + 0x580],EBX     ; 004a47b8
    TEST ESI,ESI                        ; 004a47bf
    JLE 0x004a47e9                      ; 004a47c1
        ;   XREF to: 004a47e9 (CONDITIONAL_JUMP)  ; LAB_004a47e9
    MOV ESI,0x1cab9f4                   ; 004a47c3
    PUSH EDI                            ; 004a47c8
        ;   Label: LAB_004a47c8
    PUSH ESI                            ; 004a47c9
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0 ; 004a47ca
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a47cf
    MOV EDX,EAX                         ; 004a47d2
    TEST EAX,EAX                        ; 004a47d4
    JZ 0x004a482f                       ; 004a47d6
        ;   XREF to: 004a482f (CONDITIONAL_JUMP)  ; LAB_004a482f
    MOV ECX,dword ptr [ESP + 0x580]     ; 004a47d8
    TEST ECX,ECX                        ; 004a47df
    JZ 0x004a47e5                       ; 004a47e1
        ;   XREF to: 004a47e5 (CONDITIONAL_JUMP)  ; LAB_004a47e5
    MOV dword ptr [ECX],EBX             ; 004a47e3
    TEST EDX,EDX                        ; 004a47e5
        ;   Label: LAB_004a47e5
    JNZ 0x004a4841                      ; 004a47e7
        ;   XREF to: 004a4841 (CONDITIONAL_JUMP)  ; LAB_004a4841
    PUSH 0x0                            ; 004a47e9
        ;   Label: LAB_004a47e9
    LEA EAX,[ESP + 0x404]               ; 004a47eb
    PUSH EAX                            ; 004a47f2
    MOV EBX,dword ptr [ESP + 0x574]     ; 004a47f3
    PUSH EBX                            ; 004a47fa
    CALL core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630 ; 004a47fb
        ;   XREF to: 004a3630 (UNCONDITIONAL_CALL)  ; char * core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630(SNotesSection * this_ptr, char * param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004a4800
    MOV dword ptr [ESP + 0x570],EAX     ; 004a4803
    JMP 0x004a428e                      ; 004a480a
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a480f
        ;   Label: LAB_004a480f
    MOV EDI,dword ptr [ESP + 0x5bc]     ; 004a4810
    PUSH EDI                            ; 004a4817
    PUSH 0x5d5f47                       ; 004a4818 | = "Didn't expect '\\entry' in %s, line %d"
    PUSH 0x1cab7f0                      ; 004a481d | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a4822
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4827
    JMP 0x004a43cb                      ; 004a482a
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    MOV EAX,[0x01cab9f0]                ; 004a482f | DAT_01cab9f0
        ;   Label: LAB_004a482f
    INC EBX                             ; 004a4834
    ADD ESI,0x2e4                       ; 004a4835
    CMP EBX,EAX                         ; 004a483b
    JL 0x004a47c8                       ; 004a483d
        ;   XREF to: 004a47c8 (CONDITIONAL_JUMP)  ; LAB_004a47c8
    JMP 0x004a47e9                      ; 004a483f
        ;   XREF to: 004a47e9 (UNCONDITIONAL_JUMP)  ; LAB_004a47e9
    MOV ESI,dword ptr [ESP + 0x5b8]     ; 004a4841
        ;   Label: LAB_004a4841
    PUSH ESI                            ; 004a4848
    LEA EAX,[ESP + 0x404]               ; 004a4849
    PUSH EAX                            ; 004a4850
    PUSH 0x5d5f6d                       ; 004a4851 | = "Duplicate entry '%s' in %s"
    PUSH 0x1cab7f0                      ; 004a4856 | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a485b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4860
    JMP 0x004a43cb                      ; 004a4863
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    CMP byte ptr [ESI],0x5c             ; 004a4868
        ;   Label: LAB_004a4868
    JZ 0x004a489f                       ; 004a486b
        ;   XREF to: 004a489f (CONDITIONAL_JUMP)  ; LAB_004a489f
    MOV EBX,0x5d5fcd                    ; 004a486d | DAT_005d5fcd
        ;   Label: LAB_004a486d
    LEA EAX,[ESP + 0x400]               ; 004a4872
    MOV ESI,ESP                         ; 004a4879
    MOV dword ptr [ESP + 0x590],EAX     ; 004a487b
    MOV AL,byte ptr [ESI]               ; 004a4882
        ;   Label: LAB_004a4882
    INC AL                              ; 004a4884
    MOVZX EDI,AL                        ; 004a4886
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a4889 | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a488f
    TEST DH,0x2                         ; 004a4892
    JZ 0x004a49e4                       ; 004a4895
        ;   XREF to: 004a49e4 (CONDITIONAL_JUMP)  ; LAB_004a49e4
    MOV ESI,EAX                         ; 004a489b
    JMP 0x004a4882                      ; 004a489d
        ;   XREF to: 004a4882 (UNCONDITIONAL_JUMP)  ; LAB_004a4882
    MOV CH,byte ptr [EBX]               ; 004a489f | DAT_005d5f88
        ;   Label: LAB_004a489f
    MOV ESI,EAX                         ; 004a48a1
    TEST CH,CH                          ; 004a48a3
    JZ 0x004a48d0                       ; 004a48a5
        ;   XREF to: 004a48d0 (CONDITIONAL_JUMP)  ; LAB_004a48d0
    XOR EAX,EAX                         ; 004a48a7
        ;   Label: LAB_004a48a7
    MOV AL,byte ptr [ESI]               ; 004a48a9
    PUSH EAX                            ; 004a48ab
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a48ac
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a48b1
    XOR EAX,EAX                         ; 004a48b3
    ADD ESP,0x4                         ; 004a48b5
    MOV AL,byte ptr [EBX]               ; 004a48b8 | DAT_005d5f88
    PUSH EAX                            ; 004a48ba
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a48bb
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a48c0
    CMP EDI,EAX                         ; 004a48c3
    JNZ 0x004a486d                      ; 004a48c5
        ;   XREF to: 004a486d (CONDITIONAL_JUMP)  ; LAB_004a486d
    MOV AL,byte ptr [EBX + 0x1]         ; 004a48c7 | DAT_005d5f89
    INC EBX                             ; 004a48ca
    INC ESI                             ; 004a48cb
    TEST AL,AL                          ; 004a48cc
    JNZ 0x004a48a7                      ; 004a48ce
        ;   XREF to: 004a48a7 (CONDITIONAL_JUMP)  ; LAB_004a48a7
    MOV AL,byte ptr [ESI]               ; 004a48d0
        ;   Label: LAB_004a48d0
    INC AL                              ; 004a48d2
    AND EAX,0xff                        ; 004a48d4
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a48d9 | DAT_0061ed94
    JZ 0x004a48e5                       ; 004a48e0
        ;   XREF to: 004a48e5 (CONDITIONAL_JUMP)  ; LAB_004a48e5
    INC ESI                             ; 004a48e2
    JMP 0x004a48d0                      ; 004a48e3
        ;   XREF to: 004a48d0 (UNCONDITIONAL_JUMP)  ; LAB_004a48d0
    MOV EDI,dword ptr [ESP + 0x584]     ; 004a48e5
        ;   Label: LAB_004a48e5
    PUSH EDI                            ; 004a48ec
    MOV AL,byte ptr [ESI]               ; 004a48ed
        ;   Label: LAB_004a48ed
    MOV byte ptr [EDI],AL               ; 004a48ef
    CMP AL,0x0                          ; 004a48f1
    JZ 0x004a4905                       ; 004a48f3
        ;   XREF to: 004a4905 (CONDITIONAL_JUMP)  ; LAB_004a4905
    MOV AL,byte ptr [ESI + 0x1]         ; 004a48f5
    ADD ESI,0x2                         ; 004a48f8
    MOV byte ptr [EDI + 0x1],AL         ; 004a48fb
    ADD EDI,0x2                         ; 004a48fe
    CMP AL,0x0                          ; 004a4901
    JNZ 0x004a48ed                      ; 004a4903
        ;   XREF to: 004a48ed (CONDITIONAL_JUMP)  ; LAB_004a48ed
    POP EDI                             ; 004a4905
        ;   Label: LAB_004a4905
    CMP dword ptr [ESP + 0x56c],0x0     ; 004a4906
    JZ 0x004a498a                       ; 004a490e
        ;   XREF to: 004a498a (CONDITIONAL_JUMP)  ; LAB_004a498a
    LEA EAX,[ESP + 0x400]               ; 004a4914
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a491b | DAT_01cab9f0
    MOV dword ptr [ESP + 0x588],EAX     ; 004a4921
    XOR EAX,EAX                         ; 004a4928
    XOR EBX,EBX                         ; 004a492a
    MOV dword ptr [ESP + 0x58c],EAX     ; 004a492c
    TEST EDX,EDX                        ; 004a4933
    JLE 0x004a4964                      ; 004a4935
        ;   XREF to: 004a4964 (CONDITIONAL_JUMP)  ; LAB_004a4964
    MOV ESI,0x1cab9f4                   ; 004a4937
    MOV EAX,dword ptr [ESP + 0x588]     ; 004a493c
        ;   Label: LAB_004a493c
    PUSH EAX                            ; 004a4943
    PUSH ESI                            ; 004a4944
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0 ; 004a4945
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a494a
    MOV EDI,EAX                         ; 004a494d
    TEST EAX,EAX                        ; 004a494f
    JZ 0x004a49aa                       ; 004a4951
        ;   XREF to: 004a49aa (CONDITIONAL_JUMP)  ; LAB_004a49aa
    MOV EDX,dword ptr [ESP + 0x58c]     ; 004a4953
    TEST EDX,EDX                        ; 004a495a
    JZ 0x004a4960                       ; 004a495c
        ;   XREF to: 004a4960 (CONDITIONAL_JUMP)  ; LAB_004a4960
    MOV dword ptr [EDX],EBX             ; 004a495e
    TEST EDI,EDI                        ; 004a4960
        ;   Label: LAB_004a4960
    JNZ 0x004a49bd                      ; 004a4962
        ;   XREF to: 004a49bd (CONDITIONAL_JUMP)  ; LAB_004a49bd
    PUSH 0x2                            ; 004a4964
        ;   Label: LAB_004a4964
    LEA EAX,[ESP + 0x404]               ; 004a4966
    PUSH EAX                            ; 004a496d
    MOV ECX,dword ptr [ESP + 0x574]     ; 004a496e
    PUSH ECX                            ; 004a4975
    CALL core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630 ; 004a4976
        ;   XREF to: 004a3630 (UNCONDITIONAL_CALL)  ; char * core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630(SNotesSection * this_ptr, char * param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004a497b
    MOV dword ptr [ESP + 0x570],EAX     ; 004a497e
    JMP 0x004a428e                      ; 004a4985
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a498a
        ;   Label: LAB_004a498a
    MOV ECX,dword ptr [ESP + 0x5bc]     ; 004a498b
    PUSH ECX                            ; 004a4992
    PUSH 0x5d5f8d                       ; 004a4993 | = "Didn't expect '\\task' in %s, line %d"
    PUSH 0x1cab7f0                      ; 004a4998 | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a499d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a49a2
    JMP 0x004a43cb                      ; 004a49a5
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a49aa | DAT_01cab9f0
        ;   Label: LAB_004a49aa
    INC EBX                             ; 004a49b0
    ADD ESI,0x2e4                       ; 004a49b1
    CMP EBX,EDI                         ; 004a49b7
    JL 0x004a493c                       ; 004a49b9
        ;   XREF to: 004a493c (CONDITIONAL_JUMP)  ; LAB_004a493c
    JMP 0x004a4964                      ; 004a49bb
        ;   XREF to: 004a4964 (UNCONDITIONAL_JUMP)  ; LAB_004a4964
    MOV EBX,dword ptr [ESP + 0x5b8]     ; 004a49bd
        ;   Label: LAB_004a49bd
    PUSH EBX                            ; 004a49c4
    LEA EAX,[ESP + 0x404]               ; 004a49c5
    PUSH EAX                            ; 004a49cc
    PUSH 0x5d5fb2                       ; 004a49cd | = "Duplicate entry '%s' in %s"
    PUSH 0x1cab7f0                      ; 004a49d2 | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a49d7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a49dc
    JMP 0x004a43cb                      ; 004a49df
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    CMP byte ptr [ESI],0x5c             ; 004a49e4
        ;   Label: LAB_004a49e4
    JZ 0x004a4a1b                       ; 004a49e7
        ;   XREF to: 004a4a1b (CONDITIONAL_JUMP)  ; LAB_004a4a1b
    MOV EBX,0x5d6011                    ; 004a49e9 | = "image"
        ;   Label: LAB_004a49e9
    LEA EAX,[ESP + 0x400]               ; 004a49ee
    MOV ESI,ESP                         ; 004a49f5
    MOV dword ptr [ESP + 0x594],EAX     ; 004a49f7
    MOV AL,byte ptr [ESI]               ; 004a49fe
        ;   Label: LAB_004a49fe
    INC AL                              ; 004a4a00
    MOVZX EDI,AL                        ; 004a4a02
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a4a05 | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a4a0b
    TEST DH,0x2                         ; 004a4a0e
    JZ 0x004a4b0e                       ; 004a4a11
        ;   XREF to: 004a4b0e (CONDITIONAL_JUMP)  ; LAB_004a4b0e
    MOV ESI,EAX                         ; 004a4a17
    JMP 0x004a49fe                      ; 004a4a19
        ;   XREF to: 004a49fe (UNCONDITIONAL_JUMP)  ; LAB_004a49fe
    MOV CH,byte ptr [EBX]               ; 004a4a1b | DAT_005d5fcd
        ;   Label: LAB_004a4a1b
    MOV ESI,EAX                         ; 004a4a1d
    TEST CH,CH                          ; 004a4a1f
    JZ 0x004a4a4c                       ; 004a4a21
        ;   XREF to: 004a4a4c (CONDITIONAL_JUMP)  ; LAB_004a4a4c
    XOR EAX,EAX                         ; 004a4a23
        ;   Label: LAB_004a4a23
    MOV AL,byte ptr [ESI]               ; 004a4a25
    PUSH EAX                            ; 004a4a27
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4a28
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4a2d
    XOR EAX,EAX                         ; 004a4a2f
    ADD ESP,0x4                         ; 004a4a31
    MOV AL,byte ptr [EBX]               ; 004a4a34 | DAT_005d5fcd
    PUSH EAX                            ; 004a4a36
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4a37
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4a3c
    CMP EDI,EAX                         ; 004a4a3f
    JNZ 0x004a49e9                      ; 004a4a41
        ;   XREF to: 004a49e9 (CONDITIONAL_JUMP)  ; LAB_004a49e9
    MOV AL,byte ptr [EBX + 0x1]         ; 004a4a43 | DAT_005d5fce
    INC EBX                             ; 004a4a46
    INC ESI                             ; 004a4a47
    TEST AL,AL                          ; 004a4a48
    JNZ 0x004a4a23                      ; 004a4a4a
        ;   XREF to: 004a4a23 (CONDITIONAL_JUMP)  ; LAB_004a4a23
    MOV AL,byte ptr [ESI]               ; 004a4a4c
        ;   Label: LAB_004a4a4c
    INC AL                              ; 004a4a4e
    AND EAX,0xff                        ; 004a4a50
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a4a55 | DAT_0061ed94
    JZ 0x004a4a61                       ; 004a4a5c
        ;   XREF to: 004a4a61 (CONDITIONAL_JUMP)  ; LAB_004a4a61
    INC ESI                             ; 004a4a5e
    JMP 0x004a4a4c                      ; 004a4a5f
        ;   XREF to: 004a4a4c (UNCONDITIONAL_JUMP)  ; LAB_004a4a4c
    MOV EDI,dword ptr [ESP + 0x590]     ; 004a4a61
        ;   Label: LAB_004a4a61
    PUSH EDI                            ; 004a4a68
    MOV AL,byte ptr [ESI]               ; 004a4a69
        ;   Label: LAB_004a4a69
    MOV byte ptr [EDI],AL               ; 004a4a6b
    CMP AL,0x0                          ; 004a4a6d
    JZ 0x004a4a81                       ; 004a4a6f
        ;   XREF to: 004a4a81 (CONDITIONAL_JUMP)  ; LAB_004a4a81
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4a71
    ADD ESI,0x2                         ; 004a4a74
    MOV byte ptr [EDI + 0x1],AL         ; 004a4a77
    ADD EDI,0x2                         ; 004a4a7a
    CMP AL,0x0                          ; 004a4a7d
    JNZ 0x004a4a69                      ; 004a4a7f
        ;   XREF to: 004a4a69 (CONDITIONAL_JUMP)  ; LAB_004a4a69
    POP EDI                             ; 004a4a81
        ;   Label: LAB_004a4a81
    MOV ESI,dword ptr [ESP + 0x56c]     ; 004a4a82
    TEST ESI,ESI                        ; 004a4a89
    JZ 0x004a4ae2                       ; 004a4a8b
        ;   XREF to: 004a4ae2 (CONDITIONAL_JUMP)  ; LAB_004a4ae2
    CMP dword ptr [0x01cacb4c],0x4      ; 004a4a8d | DAT_01cacb4c
    JGE 0x004a4b02                      ; 004a4a94
        ;   XREF to: 004a4b02 (CONDITIONAL_JUMP)  ; LAB_004a4b02
    PUSH 0x5                            ; 004a4a96
    LEA EAX,[ESP + 0x404]               ; 004a4a98
    PUSH EAX                            ; 004a4a9f
    PUSH ESI                            ; 004a4aa0
    CALL core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630 ; 004a4aa1
        ;   XREF to: 004a3630 (UNCONDITIONAL_CALL)  ; char * core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630(SNotesSection * this_ptr, char * param_2, undefined4 param_3)
    MOV EDX,dword ptr [0x01cacb4c]      ; 004a4aa6 | DAT_01cacb4c
    MOV EBX,EDX                         ; 004a4aac
    MOV dword ptr [EAX + 0x158],EDX     ; 004a4aae
    IMUL EDX,EDX,0x970                  ; 004a4ab4
    ADD ESP,0xc                         ; 004a4aba
    ADD EDX,0x1cacb50                   ; 004a4abd
    MOV dword ptr [ESP + 0x570],EAX     ; 004a4ac3
    INC EBX                             ; 004a4aca
    MOV dword ptr [EDX + 0x2c0],0x0     ; 004a4acb
    MOV dword ptr [0x01cacb4c],EBX      ; 004a4ad5 | DAT_01cacb4c
    MOV dword ptr [EDX],EAX             ; 004a4adb
    JMP 0x004a428e                      ; 004a4add
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a4ae2
        ;   Label: LAB_004a4ae2
    MOV ESI,dword ptr [ESP + 0x5bc]     ; 004a4ae3
    PUSH ESI                            ; 004a4aea
    PUSH 0x5d5fd1                       ; 004a4aeb | = "Didn't expect '\\map' in %s, line %d"
    PUSH 0x1cab7f0                      ; 004a4af0 | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a4af5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4afa
    JMP 0x004a43cb                      ; 004a4afd
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    PUSH 0x4                            ; 004a4b02
        ;   Label: LAB_004a4b02
    PUSH 0x5d5ff5                       ; 004a4b04 | = "Too many maps!  (max is %d)"
    JMP 0x004a43be                      ; 004a4b09
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    CMP byte ptr [ESI],0x5c             ; 004a4b0e
        ;   Label: LAB_004a4b0e
    JZ 0x004a4b45                       ; 004a4b11
        ;   XREF to: 004a4b45 (CONDITIONAL_JUMP)  ; LAB_004a4b45
    MOV EBX,0x5d60e9                    ; 004a4b13 | DAT_005d60e9
        ;   Label: LAB_004a4b13
    LEA EAX,[ESP + 0x400]               ; 004a4b18
    MOV ESI,ESP                         ; 004a4b1f
    MOV dword ptr [ESP + 0x598],EAX     ; 004a4b21
    MOV AL,byte ptr [ESI]               ; 004a4b28
        ;   Label: LAB_004a4b28
    INC AL                              ; 004a4b2a
    MOVZX EDI,AL                        ; 004a4b2c
    MOV CL,byte ptr [EDI + 0x61ed94]    ; 004a4b2f | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a4b35
    TEST CL,0x2                         ; 004a4b38
    JZ 0x004a4c8c                       ; 004a4b3b
        ;   XREF to: 004a4c8c (CONDITIONAL_JUMP)  ; LAB_004a4c8c
    MOV ESI,EAX                         ; 004a4b41
    JMP 0x004a4b28                      ; 004a4b43
        ;   XREF to: 004a4b28 (UNCONDITIONAL_JUMP)  ; LAB_004a4b28
    MOV CH,byte ptr [EBX]               ; 004a4b45 | = "image"
        ;   Label: LAB_004a4b45
    MOV ESI,EAX                         ; 004a4b47
    TEST CH,CH                          ; 004a4b49
    JZ 0x004a4b76                       ; 004a4b4b
        ;   XREF to: 004a4b76 (CONDITIONAL_JUMP)  ; LAB_004a4b76
    XOR EAX,EAX                         ; 004a4b4d
        ;   Label: LAB_004a4b4d
    MOV AL,byte ptr [ESI]               ; 004a4b4f
    PUSH EAX                            ; 004a4b51
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4b52
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4b57
    XOR EAX,EAX                         ; 004a4b59
    ADD ESP,0x4                         ; 004a4b5b
    MOV AL,byte ptr [EBX]               ; 004a4b5e | = "image"
    PUSH EAX                            ; 004a4b60
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4b61
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4b66
    CMP EDI,EAX                         ; 004a4b69
    JNZ 0x004a4b13                      ; 004a4b6b
        ;   XREF to: 004a4b13 (CONDITIONAL_JUMP)  ; LAB_004a4b13
    MOV AL,byte ptr [EBX + 0x1]         ; 004a4b6d | s_mage_005d6011+1
    INC EBX                             ; 004a4b70
    INC ESI                             ; 004a4b71
    TEST AL,AL                          ; 004a4b72
    JNZ 0x004a4b4d                      ; 004a4b74
        ;   XREF to: 004a4b4d (CONDITIONAL_JUMP)  ; LAB_004a4b4d
    MOV AL,byte ptr [ESI]               ; 004a4b76
        ;   Label: LAB_004a4b76
    INC AL                              ; 004a4b78
    AND EAX,0xff                        ; 004a4b7a
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a4b7f | DAT_0061ed94
    JZ 0x004a4b8b                       ; 004a4b86
        ;   XREF to: 004a4b8b (CONDITIONAL_JUMP)  ; LAB_004a4b8b
    INC ESI                             ; 004a4b88
    JMP 0x004a4b76                      ; 004a4b89
        ;   XREF to: 004a4b76 (UNCONDITIONAL_JUMP)  ; LAB_004a4b76
    MOV EDI,dword ptr [ESP + 0x594]     ; 004a4b8b
        ;   Label: LAB_004a4b8b
    PUSH EDI                            ; 004a4b92
    MOV AL,byte ptr [ESI]               ; 004a4b93
        ;   Label: LAB_004a4b93
    MOV byte ptr [EDI],AL               ; 004a4b95
    CMP AL,0x0                          ; 004a4b97
    JZ 0x004a4bab                       ; 004a4b99
        ;   XREF to: 004a4bab (CONDITIONAL_JUMP)  ; LAB_004a4bab
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4b9b
    ADD ESI,0x2                         ; 004a4b9e
    MOV byte ptr [EDI + 0x1],AL         ; 004a4ba1
    ADD EDI,0x2                         ; 004a4ba4
    CMP AL,0x0                          ; 004a4ba7
    JNZ 0x004a4b93                      ; 004a4ba9
        ;   XREF to: 004a4b93 (CONDITIONAL_JUMP)  ; LAB_004a4b93
    POP EDI                             ; 004a4bab
        ;   Label: LAB_004a4bab
    MOV EDI,dword ptr [ESP + 0x570]     ; 004a4bac
    TEST EDI,EDI                        ; 004a4bb3
    JZ 0x004a4c56                       ; 004a4bb5
        ;   XREF to: 004a4c56 (CONDITIONAL_JUMP)  ; LAB_004a4c56
    CMP dword ptr [EDI + 0x140],0x5     ; 004a4bbb
    JNZ 0x004a4c56                      ; 004a4bc2
        ;   XREF to: 004a4c56 (CONDITIONAL_JUMP)  ; LAB_004a4c56
    CMP dword ptr [0x01cacb4c],0x1      ; 004a4bc8 | DAT_01cacb4c
    JGE 0x004a4bf4                      ; 004a4bcf
        ;   XREF to: 004a4bf4 (CONDITIONAL_JUMP)  ; LAB_004a4bf4
    MOV EBX,0x5d6067                    ; 004a4bd1 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x904                       ; 004a4bd6
    PUSH 0x5d607c                       ; 004a4bdb | = "Hell froze!"
    MOV dword ptr [0x01d046a0],EBX      ; 004a4be0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a4be6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a4bec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a4bf1
    MOV EAX,[0x01cacb4c]                ; 004a4bf4 | DAT_01cacb4c
        ;   Label: LAB_004a4bf4
    DEC EAX                             ; 004a4bf9
    IMUL EAX,EAX,0x970                  ; 004a4bfa
    MOV EBX,0x1cacb50                   ; 004a4c00
    ADD EBX,EAX                         ; 004a4c05
    LEA EAX,[EBX + 0x6c]                ; 004a4c07
    PUSH EAX                            ; 004a4c0a
    LEA EAX,[EBX + 0x68]                ; 004a4c0b
    PUSH EAX                            ; 004a4c0e
    LEA EAX,[ESP + 0x508]               ; 004a4c0f
    PUSH EAX                            ; 004a4c16
    PUSH 0x5d6088                       ; 004a4c17 | = "%s %d %d"
    LEA EAX,[ESP + 0x410]               ; 004a4c1c
    PUSH EAX                            ; 004a4c23
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004a4c24
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 004a4c29
    CMP EAX,0x3                         ; 004a4c2c
    JNZ 0x004a4c61                      ; 004a4c2f
        ;   XREF to: 004a4c61 (CONDITIONAL_JUMP)  ; LAB_004a4c61
    CMP byte ptr [EBX + 0x4],0x0        ; 004a4c31
    JNZ 0x004a4c6c                      ; 004a4c35
        ;   XREF to: 004a4c6c (CONDITIONAL_JUMP)  ; LAB_004a4c6c
    PUSH 0x0                            ; 004a4c37
    ADD EBX,0x4                         ; 004a4c39
    PUSH EBX                            ; 004a4c3c
    PUSH 0x0                            ; 004a4c3d
    PUSH 0x0                            ; 004a4c3f
    LEA EAX,[ESP + 0x510]               ; 004a4c41
    PUSH EAX                            ; 004a4c48
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a4c49
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a4c4e
    JMP 0x004a428e                      ; 004a4c51
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a4c56
        ;   Label: LAB_004a4c56
    PUSH 0x5d6017                       ; 004a4c57 | = "Can only use \\image in a \\map entry..."
    JMP 0x004a43be                      ; 004a4c5c
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    PUSH EBP                            ; 004a4c61
        ;   Label: LAB_004a4c61
    PUSH 0x5d6091                       ; 004a4c62 | = "Syntax error in \\image parms on line %d"
    JMP 0x004a43be                      ; 004a4c67
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    PUSH EBP                            ; 004a4c6c
        ;   Label: LAB_004a4c6c
    MOV EDI,dword ptr [ESP + 0x574]     ; 004a4c6d
    PUSH EDI                            ; 004a4c74
    PUSH 0x5d60b9                       ; 004a4c75 | = "Multiple \\image tags found in map %s..."
    PUSH 0x1cab7f0                      ; 004a4c7a | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a4c7f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4c84
    JMP 0x004a43cb                      ; 004a4c87
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    CMP byte ptr [ESI],0x5c             ; 004a4c8c
        ;   Label: LAB_004a4c8c
    JZ 0x004a4cc3                       ; 004a4c8f
        ;   XREF to: 004a4cc3 (CONDITIONAL_JUMP)  ; LAB_004a4cc3
    MOV EBX,0x5d61b7                    ; 004a4c91 | = "annotation"
        ;   Label: LAB_004a4c91
    LEA EAX,[ESP + 0x400]               ; 004a4c96
    MOV ESI,ESP                         ; 004a4c9d
    MOV dword ptr [ESP + 0x59c],EAX     ; 004a4c9f
    MOV AL,byte ptr [ESI]               ; 004a4ca6
        ;   Label: LAB_004a4ca6
    INC AL                              ; 004a4ca8
    MOVZX EDI,AL                        ; 004a4caa
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a4cad | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a4cb3
    TEST DH,0x2                         ; 004a4cb6
    JZ 0x004a4e2b                       ; 004a4cb9
        ;   XREF to: 004a4e2b (CONDITIONAL_JUMP)  ; LAB_004a4e2b
    MOV ESI,EAX                         ; 004a4cbf
    JMP 0x004a4ca6                      ; 004a4cc1
        ;   XREF to: 004a4ca6 (UNCONDITIONAL_JUMP)  ; LAB_004a4ca6
    MOV ESI,EAX                         ; 004a4cc3
        ;   Label: LAB_004a4cc3
    CMP byte ptr [EBX],0x0              ; 004a4cc5 | DAT_005d60e9
    JZ 0x004a4cf3                       ; 004a4cc8
        ;   XREF to: 004a4cf3 (CONDITIONAL_JUMP)  ; LAB_004a4cf3
    XOR EAX,EAX                         ; 004a4cca
        ;   Label: LAB_004a4cca
    MOV AL,byte ptr [ESI]               ; 004a4ccc
    PUSH EAX                            ; 004a4cce
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4ccf
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4cd4
    XOR EAX,EAX                         ; 004a4cd6
    ADD ESP,0x4                         ; 004a4cd8
    MOV AL,byte ptr [EBX]               ; 004a4cdb | DAT_005d60e9
    PUSH EAX                            ; 004a4cdd
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4cde
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4ce3
    CMP EDI,EAX                         ; 004a4ce6
    JNZ 0x004a4c91                      ; 004a4ce8
        ;   XREF to: 004a4c91 (CONDITIONAL_JUMP)  ; LAB_004a4c91
    MOV AH,byte ptr [EBX + 0x1]         ; 004a4cea | DAT_005d60ea
    INC EBX                             ; 004a4ced
    INC ESI                             ; 004a4cee
    TEST AH,AH                          ; 004a4cef
    JNZ 0x004a4cca                      ; 004a4cf1
        ;   XREF to: 004a4cca (CONDITIONAL_JUMP)  ; LAB_004a4cca
    MOV AL,byte ptr [ESI]               ; 004a4cf3
        ;   Label: LAB_004a4cf3
    INC AL                              ; 004a4cf5
    AND EAX,0xff                        ; 004a4cf7
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a4cfc | DAT_0061ed94
    JZ 0x004a4d08                       ; 004a4d03
        ;   XREF to: 004a4d08 (CONDITIONAL_JUMP)  ; LAB_004a4d08
    INC ESI                             ; 004a4d05
    JMP 0x004a4cf3                      ; 004a4d06
        ;   XREF to: 004a4cf3 (UNCONDITIONAL_JUMP)  ; LAB_004a4cf3
    MOV EDI,dword ptr [ESP + 0x598]     ; 004a4d08
        ;   Label: LAB_004a4d08
    PUSH EDI                            ; 004a4d0f
    MOV AL,byte ptr [ESI]               ; 004a4d10
        ;   Label: LAB_004a4d10
    MOV byte ptr [EDI],AL               ; 004a4d12
    CMP AL,0x0                          ; 004a4d14
    JZ 0x004a4d28                       ; 004a4d16
        ;   XREF to: 004a4d28 (CONDITIONAL_JUMP)  ; LAB_004a4d28
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4d18
    ADD ESI,0x2                         ; 004a4d1b
    MOV byte ptr [EDI + 0x1],AL         ; 004a4d1e
    ADD EDI,0x2                         ; 004a4d21
    CMP AL,0x0                          ; 004a4d24
    JNZ 0x004a4d10                      ; 004a4d26
        ;   XREF to: 004a4d10 (CONDITIONAL_JUMP)  ; LAB_004a4d10
    POP EDI                             ; 004a4d28
        ;   Label: LAB_004a4d28
    MOV EAX,dword ptr [ESP + 0x570]     ; 004a4d29
    TEST EAX,EAX                        ; 004a4d30
    JZ 0x004a4df5                       ; 004a4d32
        ;   XREF to: 004a4df5 (CONDITIONAL_JUMP)  ; LAB_004a4df5
    CMP dword ptr [EAX + 0x140],0x5     ; 004a4d38
    JNZ 0x004a4df5                      ; 004a4d3f
        ;   XREF to: 004a4df5 (CONDITIONAL_JUMP)  ; LAB_004a4df5
    CMP dword ptr [0x01cacb4c],0x1      ; 004a4d45 | DAT_01cacb4c
    JGE 0x004a4d71                      ; 004a4d4c
        ;   XREF to: 004a4d71 (CONDITIONAL_JUMP)  ; LAB_004a4d71
    MOV EBX,0x5d611b                    ; 004a4d4e | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x928                       ; 004a4d53
    PUSH 0x5d6130                       ; 004a4d58 | = "Hell froze!"
    MOV dword ptr [0x01d046a0],EBX      ; 004a4d5d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a4d63 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a4d69
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a4d6e
    MOV EAX,[0x01cacb4c]                ; 004a4d71 | DAT_01cacb4c
        ;   Label: LAB_004a4d71
    DEC EAX                             ; 004a4d76
    IMUL EAX,EAX,0x970                  ; 004a4d77
    ADD EAX,0x1cacb50                   ; 004a4d7d
    MOV EDI,dword ptr [EAX + 0x9c]      ; 004a4d82
    CMP EDI,0x4                         ; 004a4d88
    JGE 0x004a4e00                      ; 004a4d8b
        ;   XREF to: 004a4e00 (CONDITIONAL_JUMP)  ; LAB_004a4e00
    IMUL EDX,EDI,0x88                   ; 004a4d8d
    LEA EBX,[EAX + 0xa0]                ; 004a4d93
    LEA ESI,[EDI + 0x1]                 ; 004a4d99
    ADD EBX,EDX                         ; 004a4d9c
    MOV dword ptr [EAX + 0x9c],ESI      ; 004a4d9e
    LEA EAX,[EBX + 0x80]                ; 004a4da4
    PUSH EAX                            ; 004a4daa
    LEA EAX,[EBX + 0x7c]                ; 004a4dab
    PUSH EAX                            ; 004a4dae
    LEA EAX,[EBX + 0x78]                ; 004a4daf
    PUSH EAX                            ; 004a4db2
    LEA EAX,[EBX + 0x74]                ; 004a4db3
    PUSH EAX                            ; 004a4db6
    LEA EAX,[EBX + 0x70]                ; 004a4db7
    PUSH EAX                            ; 004a4dba
    LEA EAX,[EBX + 0x6c]                ; 004a4dbb
    PUSH EAX                            ; 004a4dbe
    LEA EAX,[EBX + 0x68]                ; 004a4dbf
    PUSH EAX                            ; 004a4dc2
    LEA EAX,[EBX + 0x64]                ; 004a4dc3
    PUSH EAX                            ; 004a4dc6
    PUSH EBX                            ; 004a4dc7
    PUSH 0x5d6161                       ; 004a4dc8 | = "%s %d , %d , %d , %d , %f , %f , %f , %f"
    LEA EAX,[ESP + 0x428]               ; 004a4dcd
    PUSH EAX                            ; 004a4dd4
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004a4dd5
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x2c                        ; 004a4dda
    CMP EAX,0x9                         ; 004a4ddd
    JNZ 0x004a4e20                      ; 004a4de0
        ;   XREF to: 004a4e20 (CONDITIONAL_JUMP)  ; LAB_004a4e20
    PUSH 0x5d61b2                       ; 004a4de2 | DAT_005d61b2
    PUSH EBX                            ; 004a4de7
    CALL engine_dosio.cpp_changeFileExtension_FUN_004611a0 ; 004a4de8
        ;   XREF to: 004611a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_004611a0(char * path, char * new_extension)
    ADD ESP,0x8                         ; 004a4ded
    JMP 0x004a428e                      ; 004a4df0
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a4df5
        ;   Label: LAB_004a4df5
    PUSH 0x5d60ed                       ; 004a4df6 | = "Can only use \\set in a \\map entry o..."
    JMP 0x004a43be                      ; 004a4dfb
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    PUSH EBP                            ; 004a4e00
        ;   Label: LAB_004a4e00
    MOV EDI,dword ptr [ESP + 0x574]     ; 004a4e01
    PUSH EDI                            ; 004a4e08
    PUSH 0x5d613c                       ; 004a4e09 | = "Too many \\sets in map %s at line %d."
    PUSH 0x1cab7f0                      ; 004a4e0e | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a4e13
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4e18
    JMP 0x004a43cb                      ; 004a4e1b
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    PUSH EBP                            ; 004a4e20
        ;   Label: LAB_004a4e20
    PUSH 0x5d618a                       ; 004a4e21 | = "Syntax error in \\image parms on line %d"
    JMP 0x004a43be                      ; 004a4e26
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    CMP byte ptr [ESI],0x5c             ; 004a4e2b
        ;   Label: LAB_004a4e2b
    JZ 0x004a4e62                       ; 004a4e2e
        ;   XREF to: 004a4e62 (CONDITIONAL_JUMP)  ; LAB_004a4e62
    MOV EBX,0x5d628a                    ; 004a4e30 | DAT_005d628a
        ;   Label: LAB_004a4e30
    LEA EAX,[ESP + 0x400]               ; 004a4e35
    MOV ESI,ESP                         ; 004a4e3c
    MOV dword ptr [ESP + 0x5a0],EAX     ; 004a4e3e
    MOV AL,byte ptr [ESI]               ; 004a4e45
        ;   Label: LAB_004a4e45
    INC AL                              ; 004a4e47
    MOVZX EDI,AL                        ; 004a4e49
    MOV DH,byte ptr [EDI + 0x61ed94]    ; 004a4e4c | DAT_0061ed94
    LEA EAX,[ESI + 0x1]                 ; 004a4e52
    TEST DH,0x2                         ; 004a4e55
    JZ 0x004a4fc8                       ; 004a4e58
        ;   XREF to: 004a4fc8 (CONDITIONAL_JUMP)  ; LAB_004a4fc8
    MOV ESI,EAX                         ; 004a4e5e
    JMP 0x004a4e45                      ; 004a4e60
        ;   XREF to: 004a4e45 (UNCONDITIONAL_JUMP)  ; LAB_004a4e45
    MOV CH,byte ptr [EBX]               ; 004a4e62 | = "annotation"
        ;   Label: LAB_004a4e62
    MOV ESI,EAX                         ; 004a4e64
    TEST CH,CH                          ; 004a4e66
    JZ 0x004a4e93                       ; 004a4e68
        ;   XREF to: 004a4e93 (CONDITIONAL_JUMP)  ; LAB_004a4e93
    XOR EAX,EAX                         ; 004a4e6a
        ;   Label: LAB_004a4e6a
    MOV AL,byte ptr [ESI]               ; 004a4e6c
    PUSH EAX                            ; 004a4e6e
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4e6f
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a4e74
    XOR EAX,EAX                         ; 004a4e76
    ADD ESP,0x4                         ; 004a4e78
    MOV AL,byte ptr [EBX]               ; 004a4e7b | = "annotation"
    PUSH EAX                            ; 004a4e7d
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a4e7e
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a4e83
    CMP EDI,EAX                         ; 004a4e86
    JNZ 0x004a4e30                      ; 004a4e88
        ;   XREF to: 004a4e30 (CONDITIONAL_JUMP)  ; LAB_004a4e30
    MOV AL,byte ptr [EBX + 0x1]         ; 004a4e8a | s_nnotation_005d61b7+1
    INC EBX                             ; 004a4e8d
    INC ESI                             ; 004a4e8e
    TEST AL,AL                          ; 004a4e8f
    JNZ 0x004a4e6a                      ; 004a4e91
        ;   XREF to: 004a4e6a (CONDITIONAL_JUMP)  ; LAB_004a4e6a
    MOV AL,byte ptr [ESI]               ; 004a4e93
        ;   Label: LAB_004a4e93
    INC AL                              ; 004a4e95
    AND EAX,0xff                        ; 004a4e97
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a4e9c | DAT_0061ed94
    JZ 0x004a4ea8                       ; 004a4ea3
        ;   XREF to: 004a4ea8 (CONDITIONAL_JUMP)  ; LAB_004a4ea8
    INC ESI                             ; 004a4ea5
    JMP 0x004a4e93                      ; 004a4ea6
        ;   XREF to: 004a4e93 (UNCONDITIONAL_JUMP)  ; LAB_004a4e93
    MOV EDI,dword ptr [ESP + 0x59c]     ; 004a4ea8
        ;   Label: LAB_004a4ea8
    PUSH EDI                            ; 004a4eaf
    MOV AL,byte ptr [ESI]               ; 004a4eb0
        ;   Label: LAB_004a4eb0
    MOV byte ptr [EDI],AL               ; 004a4eb2
    CMP AL,0x0                          ; 004a4eb4
    JZ 0x004a4ec8                       ; 004a4eb6
        ;   XREF to: 004a4ec8 (CONDITIONAL_JUMP)  ; LAB_004a4ec8
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4eb8
    ADD ESI,0x2                         ; 004a4ebb
    MOV byte ptr [EDI + 0x1],AL         ; 004a4ebe
    ADD EDI,0x2                         ; 004a4ec1
    CMP AL,0x0                          ; 004a4ec4
    JNZ 0x004a4eb0                      ; 004a4ec6
        ;   XREF to: 004a4eb0 (CONDITIONAL_JUMP)  ; LAB_004a4eb0
    POP EDI                             ; 004a4ec8
        ;   Label: LAB_004a4ec8
    MOV EAX,dword ptr [ESP + 0x570]     ; 004a4ec9
    TEST EAX,EAX                        ; 004a4ed0
    JZ 0x004a4f92                       ; 004a4ed2
        ;   XREF to: 004a4f92 (CONDITIONAL_JUMP)  ; LAB_004a4f92
    CMP dword ptr [EAX + 0x140],0x5     ; 004a4ed8
    JNZ 0x004a4f92                      ; 004a4edf
        ;   XREF to: 004a4f92 (CONDITIONAL_JUMP)  ; LAB_004a4f92
    CMP dword ptr [0x01cacb4c],0x1      ; 004a4ee5 | DAT_01cacb4c
    JGE 0x004a4f11                      ; 004a4eec
        ;   XREF to: 004a4f11 (CONDITIONAL_JUMP)  ; LAB_004a4f11
    MOV EBX,0x5d61f7                    ; 004a4eee | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x954                       ; 004a4ef3
    PUSH 0x5d620c                       ; 004a4ef8 | = "Hell froze!"
    MOV dword ptr [0x01d046a0],EBX      ; 004a4efd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a4f03 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a4f09
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a4f0e
    MOV EAX,[0x01cacb4c]                ; 004a4f11 | DAT_01cacb4c
        ;   Label: LAB_004a4f11
    DEC EAX                             ; 004a4f16
    IMUL EAX,EAX,0x970                  ; 004a4f17
    ADD EAX,0x1cacb50                   ; 004a4f1d
    MOV EDI,dword ptr [EAX + 0x2c0]     ; 004a4f22
    CMP EDI,0x8                         ; 004a4f28
    JGE 0x004a4f9d                      ; 004a4f2b
        ;   XREF to: 004a4f9d (CONDITIONAL_JUMP)  ; LAB_004a4f9d
    IMUL EBX,EDI,0xd4                   ; 004a4f2d
    LEA EDX,[EAX + 0x2c4]               ; 004a4f33
    ADD EBX,EDX                         ; 004a4f39
    LEA ESI,[EBX + 0x64]                ; 004a4f3b
    LEA ECX,[EDI + 0x1]                 ; 004a4f3e
    PUSH ESI                            ; 004a4f41
    MOV dword ptr [EAX + 0x2c0],ECX     ; 004a4f42
    LEA EAX,[EBX + 0xcc]                ; 004a4f48
    PUSH EAX                            ; 004a4f4e
    LEA EAX,[EBX + 0xc8]                ; 004a4f4f
    PUSH EAX                            ; 004a4f55
    PUSH EBX                            ; 004a4f56
    PUSH 0x5d6244                       ; 004a4f57 | = "%[^,], %d , %d , \"%[^\"]\""
    LEA EAX,[ESP + 0x414]               ; 004a4f5c
    PUSH EAX                            ; 004a4f63
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004a4f64
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x18                        ; 004a4f69
    CMP EAX,0x4                         ; 004a4f6c
    JNZ 0x004a4fbd                      ; 004a4f6f
        ;   XREF to: 004a4fbd (CONDITIONAL_JUMP)  ; LAB_004a4fbd
    PUSH EBX                            ; 004a4f71
    CALL core_flashlit.cpp_FUN_004a1390 ; 004a4f72
        ;   XREF to: 004a1390 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1390()
    ADD ESP,0x4                         ; 004a4f77
    PUSH ESI                            ; 004a4f7a
    CALL core_flashlit.cpp_FUN_004a1390 ; 004a4f7b
        ;   XREF to: 004a1390 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1390()
    ADD ESP,0x4                         ; 004a4f80
    MOV dword ptr [EBX + 0xd0],0x0      ; 004a4f83
    JMP 0x004a428e                      ; 004a4f8d
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    PUSH EBP                            ; 004a4f92
        ;   Label: LAB_004a4f92
    PUSH 0x5d61c2                       ; 004a4f93 | = "Can only use \\annotation in a \\map ..."
    JMP 0x004a43be                      ; 004a4f98
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    PUSH EBP                            ; 004a4f9d
        ;   Label: LAB_004a4f9d
    MOV EBX,dword ptr [ESP + 0x574]     ; 004a4f9e
    PUSH EBX                            ; 004a4fa5
    PUSH 0x5d6218                       ; 004a4fa6 | = "Too many \\annotations in map %s at l..."
    PUSH 0x1cab7f0                      ; 004a4fab | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a4fb0
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a4fb5
    JMP 0x004a43cb                      ; 004a4fb8
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    PUSH EBP                            ; 004a4fbd
        ;   Label: LAB_004a4fbd
    PUSH 0x5d625d                       ; 004a4fbe | = "Syntax error in \\annotation parms on..."
    JMP 0x004a43be                      ; 004a4fc3
        ;   XREF to: 004a43be (UNCONDITIONAL_JUMP)  ; LAB_004a43be
    CMP byte ptr [ESI],0x5c             ; 004a4fc8
        ;   Label: LAB_004a4fc8
    JZ 0x004a4ffd                       ; 004a4fcb
        ;   XREF to: 004a4ffd (CONDITIONAL_JUMP)  ; LAB_004a4ffd
    CMP byte ptr [ESP],0x5c             ; 004a4fcd
        ;   Label: LAB_004a4fcd
    JZ 0x004a5069                       ; 004a4fd1
        ;   XREF to: 004a5069 (CONDITIONAL_JUMP)  ; LAB_004a5069
    MOV ESI,dword ptr [ESP + 0x570]     ; 004a4fd7
    TEST ESI,ESI                        ; 004a4fde
    JZ 0x004a508e                       ; 004a4fe0
        ;   XREF to: 004a508e (CONDITIONAL_JUMP)  ; LAB_004a508e
    MOV EAX,ESP                         ; 004a4fe6
    PUSH EAX                            ; 004a4fe8
    LEA EAX,[ESI + 0x148]               ; 004a4fe9
    PUSH EAX                            ; 004a4fef
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 004a4ff0
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a4ff5
    JMP 0x004a428e                      ; 004a4ff8
        ;   XREF to: 004a428e (UNCONDITIONAL_JUMP)  ; LAB_004a428e
    MOV CH,byte ptr [EBX]               ; 004a4ffd | DAT_005d628a
        ;   Label: LAB_004a4ffd
    MOV ESI,EAX                         ; 004a4fff
    TEST CH,CH                          ; 004a5001
    JZ 0x004a502e                       ; 004a5003
        ;   XREF to: 004a502e (CONDITIONAL_JUMP)  ; LAB_004a502e
    XOR EAX,EAX                         ; 004a5005
        ;   Label: LAB_004a5005
    MOV AL,byte ptr [ESI]               ; 004a5007
    PUSH EAX                            ; 004a5009
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a500a
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a500f
    XOR EAX,EAX                         ; 004a5011
    ADD ESP,0x4                         ; 004a5013
    MOV AL,byte ptr [EBX]               ; 004a5016 | DAT_005d628a
    PUSH EAX                            ; 004a5018
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a5019
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a501e
    CMP EDI,EAX                         ; 004a5021
    JNZ 0x004a4fcd                      ; 004a5023
        ;   XREF to: 004a4fcd (CONDITIONAL_JUMP)  ; LAB_004a4fcd
    MOV AL,byte ptr [EBX + 0x1]         ; 004a5025 | DAT_005d628b
    INC EBX                             ; 004a5028
    INC ESI                             ; 004a5029
    TEST AL,AL                          ; 004a502a
    JNZ 0x004a5005                      ; 004a502c
        ;   XREF to: 004a5005 (CONDITIONAL_JUMP)  ; LAB_004a5005
    MOV AL,byte ptr [ESI]               ; 004a502e
        ;   Label: LAB_004a502e
    INC AL                              ; 004a5030
    AND EAX,0xff                        ; 004a5032
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a5037 | DAT_0061ed94
    JZ 0x004a5043                       ; 004a503e
        ;   XREF to: 004a5043 (CONDITIONAL_JUMP)  ; LAB_004a5043
    INC ESI                             ; 004a5040
    JMP 0x004a502e                      ; 004a5041
        ;   XREF to: 004a502e (UNCONDITIONAL_JUMP)  ; LAB_004a502e
    MOV EDI,dword ptr [ESP + 0x5a0]     ; 004a5043
        ;   Label: LAB_004a5043
    PUSH EDI                            ; 004a504a
    MOV AL,byte ptr [ESI]               ; 004a504b
        ;   Label: LAB_004a504b
    MOV byte ptr [EDI],AL               ; 004a504d
    CMP AL,0x0                          ; 004a504f
    JZ 0x004a5063                       ; 004a5051
        ;   XREF to: 004a5063 (CONDITIONAL_JUMP)  ; LAB_004a5063
    MOV AL,byte ptr [ESI + 0x1]         ; 004a5053
    ADD ESI,0x2                         ; 004a5056
    MOV byte ptr [EDI + 0x1],AL         ; 004a5059
    ADD EDI,0x2                         ; 004a505c
    CMP AL,0x0                          ; 004a505f
    JNZ 0x004a504b                      ; 004a5061
        ;   XREF to: 004a504b (CONDITIONAL_JUMP)  ; LAB_004a504b
    POP EDI                             ; 004a5063
        ;   Label: LAB_004a5063
    JMP 0x004a42cd                      ; 004a5064
        ;   XREF to: 004a42cd (UNCONDITIONAL_JUMP)  ; LAB_004a42cd
    PUSH EBP                            ; 004a5069
        ;   Label: LAB_004a5069
    MOV EBP,dword ptr [ESP + 0x5bc]     ; 004a506a
    PUSH EBP                            ; 004a5071
    LEA EAX,[ESP + 0x8]                 ; 004a5072
    PUSH EAX                            ; 004a5076
    PUSH 0x5d628e                       ; 004a5077 | = "Unknown tag: '%s' in %s, line %d"
    PUSH 0x1cab7f0                      ; 004a507c | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a5081
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 004a5086
    JMP 0x004a43cb                      ; 004a5089
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb
    PUSH EBP                            ; 004a508e
        ;   Label: LAB_004a508e
    MOV EDI,dword ptr [ESP + 0x5bc]     ; 004a508f
    PUSH EDI                            ; 004a5096
    PUSH 0x5d62af                       ; 004a5097 | = "No entry started in %s, line %d"
    PUSH 0x1cab7f0                      ; 004a509c | DAT_01cab7f0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a50a1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a50a6
    JMP 0x004a43cb                      ; 004a50a9
        ;   XREF to: 004a43cb (UNCONDITIONAL_JUMP)  ; LAB_004a43cb

