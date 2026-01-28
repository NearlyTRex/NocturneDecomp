; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2840]:1  local_2840
; undefined4       Stack[-0x58c]:4  local_58c
; undefined1       Stack[-0x1e4]:1  local_1e4
; undefined1       Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_dfm_00615ea0
;   TerminatedCString s_models_00615ea6
;   TerminatedCString s_Select_model_to_dismembe_00615ead
;   TerminatedCString s_No_00615ec7
;   TerminatedCString s_Yes_00615eca
;   TerminatedCString s_s_s_00615ece
;   TerminatedCString s_Done_00615ed4
;   TerminatedCString s_Select_which_part_s_to_d_00615edb
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_bodypart.cpp_FUN_0041a050
;   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b280
        ;   Label: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
    PUSH ESI                            ; 0041b281
    PUSH EDI                            ; 0041b282
    PUSH EBP                            ; 0041b283
    SUB ESP,0x2830                      ; 0041b284
    PUSH 0x0                            ; 0041b28a
    LEA EAX,[ESP + 0x2660]              ; 0041b28c
    PUSH EAX                            ; 0041b293
    PUSH 0x615ea0                       ; 0041b294 | = "*.dfm"
    PUSH 0x615ea6                       ; 0041b299 | = "models"
    PUSH 0x615ead                       ; 0041b29e | = "Select model to dismember"
    MOV EDX,dword ptr [0x00678a60]      ; 0041b2a3 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0041b2a9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0041b2aa
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 0041b2af
    TEST EAX,EAX                        ; 0041b2b2
    JNZ 0x0041b2c5                      ; 0041b2b4
        ;   XREF to: 0041b2c5 (CONDITIONAL_JUMP)  ; LAB_0041b2c5
    XOR EBX,EBX                         ; 0041b2b6
    MOV EAX,EBX                         ; 0041b2b8
    ADD ESP,0x2830                      ; 0041b2ba
    POP EBP                             ; 0041b2c0
    POP EDI                             ; 0041b2c1
    POP ESI                             ; 0041b2c2
    POP EBX                             ; 0041b2c3
    RET                                 ; 0041b2c4
    MOV EAX,ESP                         ; 0041b2c5
        ;   Label: LAB_0041b2c5
    PUSH EAX                            ; 0041b2c7
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 0041b2c8
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b2cd
    LEA EAX,[ESP + 0x265c]              ; 0041b2d0
    PUSH EAX                            ; 0041b2d7
    LEA EAX,[ESP + 0x4]                 ; 0041b2d8
    PUSH EAX                            ; 0041b2dc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0041b2dd
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0041b2e2
    MOV EAX,ESP                         ; 0041b2e5
    PUSH EAX                            ; 0041b2e7
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0041b2e8
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b2ed
    MOV EAX,ESP                         ; 0041b2f0
    PUSH EAX                            ; 0041b2f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0041b2f3
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b2f8
    MOV EBX,dword ptr [EAX + 0x7140]    ; 0041b2fb
    MOV dword ptr [ESP + 0x282c],EAX    ; 0041b301
    MOV EBP,EBX                         ; 0041b308
    TEST EBX,EBX                        ; 0041b30a
    JLE 0x0041b330                      ; 0041b30c
        ;   XREF to: 0041b330 (CONDITIONAL_JUMP)  ; LAB_0041b330
    SHL EBX,0x2                         ; 0041b30e
    XOR EAX,EAX                         ; 0041b311
    ADD EAX,0x4                         ; 0041b313
        ;   Label: LAB_0041b313
    XOR ECX,ECX                         ; 0041b316
    MOV dword ptr [ESP + EAX*0x1 + 0x213c],ECX ; 0041b318
    CMP EAX,EBX                         ; 0041b31f
    JL 0x0041b313                       ; 0041b321
        ;   XREF to: 0041b313 (CONDITIONAL_JUMP)  ; LAB_0041b313
    LEA EAX,[EAX]                       ; 0041b323
    LEA EDX,[EDX]                       ; 0041b329 | g_CEditorToolsInstance
    NOP                                 ; 0041b32f
    XOR EBX,EBX                         ; 0041b330
        ;   Label: LAB_0041b330
    MOV dword ptr [ESP + 0x2828],EBX    ; 0041b332
    LEA EAX,[ESP + 0x22b4]              ; 0041b339
        ;   Label: LAB_0041b339
    PUSH EAX                            ; 0041b340
    XOR EDI,EDI                         ; 0041b341
    XOR EBX,EBX                         ; 0041b343
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0041b345
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0041b34a
    TEST EBP,EBP                        ; 0041b34d
    JLE 0x0041b3b5                      ; 0041b34f
        ;   XREF to: 0041b3b5 (CONDITIONAL_JUMP)  ; LAB_0041b3b5
    XOR ESI,ESI                         ; 0041b351
    MOV EDX,dword ptr [ESP + ESI*0x1 + 0x2140] ; 0041b353
        ;   Label: LAB_0041b353
    MOV EAX,0x615ec7                    ; 0041b35a | = "No"
    TEST EDX,EDX                        ; 0041b35f
    JZ 0x0041b36d                       ; 0041b361
        ;   XREF to: 0041b36d (CONDITIONAL_JUMP)  ; LAB_0041b36d
    MOV EAX,0x615eca                    ; 0041b363 | = "Yes"
    MOV EDI,0x1                         ; 0041b368
    PUSH EAX                            ; 0041b36d | = "No" | s_Yes_00615eca
        ;   Label: LAB_0041b36d
    PUSH EBX                            ; 0041b36e
    MOV EAX,dword ptr [ESP + 0x2834]    ; 0041b36f
    PUSH EAX                            ; 0041b376
    CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220 ; 0041b377
        ;   XREF to: 0059c220 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index)
    ADD ESP,0x8                         ; 0041b37c
    PUSH EAX                            ; 0041b37f
    PUSH 0x615ece                       ; 0041b380 | = "%s\t%s"
    LEA EAX,[ESP + 0x276c]              ; 0041b385
    PUSH EAX                            ; 0041b38c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0041b38d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0041b392
    LEA EAX,[ESP + 0x2760]              ; 0041b395
    PUSH EAX                            ; 0041b39c
    LEA EAX,[ESP + 0x22b8]              ; 0041b39d
    PUSH EAX                            ; 0041b3a4
    ADD ESI,0x4                         ; 0041b3a5
    INC EBX                             ; 0041b3a8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0041b3a9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0041b3ae
    CMP EBX,EBP                         ; 0041b3b1
    JL 0x0041b353                       ; 0041b3b3
        ;   XREF to: 0041b353 (CONDITIONAL_JUMP)  ; LAB_0041b353
    TEST EDI,EDI                        ; 0041b3b5
        ;   Label: LAB_0041b3b5
    JZ 0x0041b3ce                       ; 0041b3b7
        ;   XREF to: 0041b3ce (CONDITIONAL_JUMP)  ; LAB_0041b3ce
    PUSH 0x615ed4                       ; 0041b3b9 | = "(Done)"
    LEA EAX,[ESP + 0x22b8]              ; 0041b3be
    PUSH EAX                            ; 0041b3c5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0041b3c6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0041b3cb
    PUSH 0x0                            ; 0041b3ce
        ;   Label: LAB_0041b3ce
    MOV EDX,dword ptr [ESP + 0x282c]    ; 0041b3d0
    PUSH EDX                            ; 0041b3d7
    PUSH 0x615edb                       ; 0041b3d8 | = "Select which part(s) to dismember"
    LEA EAX,[ESP + 0x22c0]              ; 0041b3dd
    PUSH EAX                            ; 0041b3e4
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0041b3e5
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0041b3ea
    MOV dword ptr [ESP + 0x2828],EAX    ; 0041b3ed
    TEST EAX,EAX                        ; 0041b3f4
    JL 0x0041b432                       ; 0041b3f6
        ;   XREF to: 0041b432 (CONDITIONAL_JUMP)  ; LAB_0041b432
    TEST EDI,EDI                        ; 0041b3f8
    JNZ 0x0041b460                      ; 0041b3fa
        ;   XREF to: 0041b460 (CONDITIONAL_JUMP)  ; LAB_0041b460
    MOV EAX,dword ptr [ESP + 0x2828]    ; 0041b3fc
        ;   Label: LAB_0041b3fc
    CMP dword ptr [ESP + EAX*0x4 + 0x2140],0x0 ; 0041b403
    SETZ BL                             ; 0041b40b
    AND EBX,0xff                        ; 0041b40e
    PUSH 0x0                            ; 0041b414
    MOV dword ptr [ESP + EAX*0x4 + 0x2144],EBX ; 0041b416
    LEA EAX,[ESP + 0x22b8]              ; 0041b41d
    PUSH EAX                            ; 0041b424
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0041b425
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041b42a
    JMP 0x0041b339                      ; 0041b42d
        ;   XREF to: 0041b339 (UNCONDITIONAL_JUMP)  ; LAB_0041b339
    XOR EBX,EBX                         ; 0041b432
        ;   Label: LAB_0041b432
    PUSH EBX                            ; 0041b434
    LEA EAX,[ESP + 0x22b8]              ; 0041b435
    PUSH EAX                            ; 0041b43c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0041b43d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041b442
    PUSH EBX                            ; 0041b445
    LEA EAX,[ESP + 0x4]                 ; 0041b446
    PUSH EAX                            ; 0041b44a
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0041b44b
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041b450
    MOV EAX,EBX                         ; 0041b453
    ADD ESP,0x2830                      ; 0041b455
    POP EBP                             ; 0041b45b
    POP EDI                             ; 0041b45c
    POP ESI                             ; 0041b45d
    POP EBX                             ; 0041b45e
    RET                                 ; 0041b45f
    MOV EBX,dword ptr [ESP + 0x22b4]    ; 0041b460
        ;   Label: LAB_0041b460
    DEC EBX                             ; 0041b467
    CMP EAX,EBX                         ; 0041b468
    JNZ 0x0041b3fc                      ; 0041b46a
        ;   XREF to: 0041b3fc (CONDITIONAL_JUMP)  ; LAB_0041b3fc
    PUSH 0x0                            ; 0041b46c
    LEA EAX,[ESP + 0x22b8]              ; 0041b46e
    PUSH EAX                            ; 0041b475
    XOR ESI,ESI                         ; 0041b476
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0041b478
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041b47d
    TEST EBP,EBP                        ; 0041b480
    JLE 0x0041b4ae                      ; 0041b482
        ;   XREF to: 0041b4ae (CONDITIONAL_JUMP)  ; LAB_0041b4ae
    XOR EBX,EBX                         ; 0041b484
    CMP dword ptr [ESP + EBX*0x1 + 0x2140],0x0 ; 0041b486
        ;   Label: LAB_0041b486
    JZ 0x0041b4a6                       ; 0041b48e
        ;   XREF to: 0041b4a6 (CONDITIONAL_JUMP)  ; LAB_0041b4a6
    PUSH ESI                            ; 0041b490
    MOV EAX,dword ptr [ESP + 0x2848]    ; 0041b491
    PUSH EAX                            ; 0041b498
    LEA EAX,[ESP + 0x8]                 ; 0041b499
    PUSH EAX                            ; 0041b49d
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 ; 0041b49e
        ;   XREF to: 005a1040 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
    ADD ESP,0xc                         ; 0041b4a3
    INC ESI                             ; 0041b4a6
        ;   Label: LAB_0041b4a6
    ADD EBX,0x4                         ; 0041b4a7
    CMP ESI,EBP                         ; 0041b4aa
    JL 0x0041b486                       ; 0041b4ac
        ;   XREF to: 0041b486 (CONDITIONAL_JUMP)  ; LAB_0041b486
    MOV ECX,dword ptr [ESP + 0x2844]    ; 0041b4ae
        ;   Label: LAB_0041b4ae
    PUSH ECX                            ; 0041b4b5
    CALL core_bodypart.cpp_FUN_0041a050 ; 0041b4b6
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041a050()
    ADD ESP,0x4                         ; 0041b4bb
    PUSH 0x0                            ; 0041b4be
    LEA EAX,[ESP + 0x4]                 ; 0041b4c0
    PUSH EAX                            ; 0041b4c4
    MOV EBX,0x1                         ; 0041b4c5
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0041b4ca
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041b4cf
    MOV EAX,EBX                         ; 0041b4d2
    ADD ESP,0x2830                      ; 0041b4d4
    POP EBP                             ; 0041b4da
    POP EDI                             ; 0041b4db
    POP ESI                             ; 0041b4dc
    POP EBX                             ; 0041b4dd
    RET                                 ; 0041b4de

