; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_editActorAtIndex_FUN_0053b030(CDemonMission *this_ptr,CActorProperty *property)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CActorProperty * Stack[0x8]:4   property
; Local Variables:
; CActorPropertyList Stack[-0x2bb0]:9476  CStack_2bb0
; CPickList        Stack[-0x6ac]:936  local_6ac
; char[300]        Stack[-0x304]:300  acStack_304
; char[200]        Stack[-0x1d8]:200  acStack_1d8
; char[200]        Stack[-0x110]:200  local_110
; CStrList         Stack[-0x48]:16  CStack_48
; CStrList         Stack[-0x38]:16  local_38
; uint             Stack[-0x28]:4  local_28
; char *           Stack[-0x24]:4  pcStack_24
; uint             Stack[-0x20]:4  uStack_20
; int              Stack[-0x1c]:4  iStack_1c
; CDemonActor *    Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  iStack_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50 at 0053afc4
;
; Referenced Globals:
;   TerminatedCString s_none_0063b6e0
;   TerminatedCString s_true_0063b6e5
;   TerminatedCString s_s_Referenced_by_name_0063c5da
;   TerminatedCString s_s_Raises_s_in_s_0063c5f0
;   TerminatedCString s_No_actors_relevent_to_th_0063c607
;   TerminatedCString s_Actors_relevent_to_s_0063c63c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   uchar[257] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_init_FUN_0040e130
;   core_mission.cpp_CDemonMission_countActors_FUN_00523cc0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b030
        ;   Label: core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030
    PUSH ESI                            ; 0053b031
    PUSH EDI                            ; 0053b032
    PUSH EBP                            ; 0053b033
    SUB ESP,0x2ba0                      ; 0053b034
    LEA EAX,[ESP + 0x2b78]              ; 0053b03a
    PUSH EAX                            ; 0053b041
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0053b042
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053b047
    MOV EBX,dword ptr [ESP + 0x2bb8]    ; 0053b04a
    MOV EBX,dword ptr [EBX + 0x68]      ; 0053b051
    MOV AH,byte ptr [EBX]               ; 0053b054
    LEA EDI,[ESP + 0x2b78]              ; 0053b056
    TEST AH,AH                          ; 0053b05d
    JZ 0x0053b0df                       ; 0053b05f
        ;   XREF to: 0053b0df (CONDITIONAL_JUMP)  ; LAB_0053b0df
    XOR EAX,EAX                         ; 0053b065
        ;   Label: LAB_0053b065
    MOV AL,byte ptr [EBX]               ; 0053b067
    MOV EDX,EAX                         ; 0053b069
    INC DL                              ; 0053b06b
    AND EDX,0xff                        ; 0053b06d
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0053b073 | g_CharacterClassificationTable
    JZ 0x0053b327                       ; 0053b07a
        ;   XREF to: 0053b327 (CONDITIONAL_JUMP)  ; LAB_0053b327
    LEA EDX,[ESP + 0x2aa0]              ; 0053b080
        ;   Label: LAB_0053b080
    MOV AL,byte ptr [EBX]               ; 0053b087
        ;   Label: LAB_0053b087
    MOV byte ptr [EDX],AL               ; 0053b089
    XOR EAX,EAX                         ; 0053b08b
    MOV AL,byte ptr [EBX + 0x1]         ; 0053b08d
    MOV dword ptr [ESP + 0x2b88],EAX    ; 0053b090
    MOV CL,byte ptr [ESP + 0x2b88]      ; 0053b097
    INC CL                              ; 0053b09e
    MOVZX ESI,CL                        ; 0053b0a0
    INC EBX                             ; 0053b0a3
    MOV CH,byte ptr [ESI + 0x6849c4]    ; 0053b0a4 | g_CharacterClassificationTable
    INC EDX                             ; 0053b0aa
    TEST CH,0xe0                        ; 0053b0ab
    JNZ 0x0053b087                      ; 0053b0ae
        ;   XREF to: 0053b087 (CONDITIONAL_JUMP)  ; LAB_0053b087
    CMP EAX,0x2d                        ; 0053b0b0
    JZ 0x0053b087                       ; 0053b0b3
        ;   XREF to: 0053b087 (CONDITIONAL_JUMP)  ; LAB_0053b087
    CMP EAX,0x5f                        ; 0053b0b5
    JZ 0x0053b087                       ; 0053b0b8
        ;   XREF to: 0053b087 (CONDITIONAL_JUMP)  ; LAB_0053b087
    PUSH 0x63b6e0                       ; 0053b0ba | = "none"
    LEA EAX,[ESP + 0x2aa4]              ; 0053b0bf
    PUSH EAX                            ; 0053b0c6
    MOV byte ptr [EDX],0x0              ; 0053b0c7
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053b0ca
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b0cf
    TEST EAX,EAX                        ; 0053b0d2
    JNZ 0x0053b33f                      ; 0053b0d4
        ;   XREF to: 0053b33f (CONDITIONAL_JUMP)  ; LAB_0053b33f
    CMP byte ptr [EBX],0x0              ; 0053b0da
        ;   Label: LAB_0053b0da
    JNZ 0x0053b065                      ; 0053b0dd
        ;   XREF to: 0053b065 (CONDITIONAL_JUMP)  ; LAB_0053b065
    MOV EDX,dword ptr [ESP + 0x2bb4]    ; 0053b0df
        ;   Label: LAB_0053b0df
    PUSH EDX                            ; 0053b0e6
    CALL core_mission.cpp_CDemonMission_countActors_FUN_00523cc0 ; 0053b0e7
        ;   XREF to: 00523cc0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_countActors_FUN_00523cc0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053b0ec
    LEA EAX,[ESP + 0x2504]              ; 0053b0ef
    PUSH EAX                            ; 0053b0f6
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053b0f7
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053b0fc
    MOV EAX,dword ptr [ESP + 0x2bb4]    ; 0053b0ff
    MOV EAX,dword ptr [EAX + 0x548]     ; 0053b106
    MOV dword ptr [ESP + 0x2b98],EAX    ; 0053b10c
    TEST EAX,EAX                        ; 0053b113
    JZ 0x0053b25d                       ; 0053b115
        ;   XREF to: 0053b25d (CONDITIONAL_JUMP)  ; LAB_0053b25d
    MOV EAX,ESP                         ; 0053b11b
        ;   Label: LAB_0053b11b
    PUSH EAX                            ; 0053b11d
    CALL core_actor.cpp_CActorPropertyList_init_FUN_0040e130 ; 0053b11e
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList * this_ptr)
    ADD ESP,0x4                         ; 0053b123
    MOV EDX,ESP                         ; 0053b126
    MOV EAX,dword ptr [ESP + 0x2b98]    ; 0053b128
    PUSH EDX                            ; 0053b12f
    MOV EDX,dword ptr [ESP + 0x2b9c]    ; 0053b130
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053b137
    PUSH EDX                            ; 0053b13d
    CALL dword ptr [EAX + 0xd4]         ; 0053b13e
    ADD ESP,0x8                         ; 0053b144
    XOR ECX,ECX                         ; 0053b147
    MOV EBX,dword ptr [ESP + 0x2b78]    ; 0053b149
    MOV dword ptr [ESP + 0x2b94],ECX    ; 0053b150
    TEST EBX,EBX                        ; 0053b157
    JLE 0x0053b241                      ; 0053b159
        ;   XREF to: 0053b241 (CONDITIONAL_JUMP)  ; LAB_0053b241
    MOV EBP,dword ptr [ESP + 0x2b94]    ; 0053b15f
        ;   Label: LAB_0053b15f
    PUSH EBP                            ; 0053b166
    LEA EAX,[ESP + 0x2b7c]              ; 0053b167
    PUSH EAX                            ; 0053b16e
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053b16f
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053b174
    MOV EDX,dword ptr [ESP + 0x2b98]    ; 0053b177
    PUSH EDX                            ; 0053b17e
    PUSH EAX                            ; 0053b17f
    MOV EDI,EAX                         ; 0053b180
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053b182
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b187
    TEST EAX,EAX                        ; 0053b18a
    JNZ 0x0053b1c3                      ; 0053b18c
        ;   XREF to: 0053b1c3 (CONDITIONAL_JUMP)  ; LAB_0053b1c3
    MOV ECX,dword ptr [ESP + 0x2b98]    ; 0053b18e
    PUSH ECX                            ; 0053b195
    PUSH 0x63c5da                       ; 0053b196 | = "%s\tReferenced by name"
    LEA EAX,[ESP + 0x28b4]              ; 0053b19b
    PUSH EAX                            ; 0053b1a2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053b1a3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053b1a8
    LEA EAX,[ESP + 0x28ac]              ; 0053b1ab
    PUSH EAX                            ; 0053b1b2
    LEA EAX,[ESP + 0x2508]              ; 0053b1b3
    PUSH EAX                            ; 0053b1ba
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b1bb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b1c0
    XOR EBX,EBX                         ; 0053b1c3
        ;   Label: LAB_0053b1c3
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053b1c5
    MOV dword ptr [ESP + 0x2b9c],EBX    ; 0053b1c9
    TEST ESI,ESI                        ; 0053b1d0
    JLE 0x0053b223                      ; 0053b1d2
        ;   XREF to: 0053b223 (CONDITIONAL_JUMP)  ; LAB_0053b223
    LEA EAX,[ESP + 0x8]                 ; 0053b1d4
    ADD EAX,0x4                         ; 0053b1d8
    MOV dword ptr [ESP + 0x2b8c],EAX    ; 0053b1db
    IMUL EBX,dword ptr [ESP + 0x2b9c],0xec ; 0053b1e2
        ;   Label: LAB_0053b1e2
    CMP dword ptr [ESP + EBX*0x1 + 0x8],0xc ; 0053b1ed
    JZ 0x0053b372                       ; 0053b1f2
        ;   XREF to: 0053b372 (CONDITIONAL_JUMP)  ; LAB_0053b372
    MOV EBP,dword ptr [ESP + 0x2b8c]    ; 0053b1f8
        ;   Label: LAB_0053b1f8
    MOV EAX,dword ptr [ESP + 0x2b9c]    ; 0053b1ff
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053b206
    ADD EBP,0xec                        ; 0053b20a
    INC EAX                             ; 0053b210
    MOV dword ptr [ESP + 0x2b8c],EBP    ; 0053b211
    MOV dword ptr [ESP + 0x2b9c],EAX    ; 0053b218
    CMP EAX,EDX                         ; 0053b21f
    JL 0x0053b1e2                       ; 0053b221
        ;   XREF to: 0053b1e2 (CONDITIONAL_JUMP)  ; LAB_0053b1e2
    MOV ESI,dword ptr [ESP + 0x2b94]    ; 0053b223
        ;   Label: LAB_0053b223
    INC ESI                             ; 0053b22a
    MOV EDI,dword ptr [ESP + 0x2b78]    ; 0053b22b
    MOV dword ptr [ESP + 0x2b94],ESI    ; 0053b232
    CMP ESI,EDI                         ; 0053b239
    JL 0x0053b15f                       ; 0053b23b
        ;   XREF to: 0053b15f (CONDITIONAL_JUMP)  ; LAB_0053b15f
    MOV EAX,dword ptr [ESP + 0x2b98]    ; 0053b241
        ;   Label: LAB_0053b241
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053b248
    MOV dword ptr [ESP + 0x2b98],EAX    ; 0053b24e
    TEST EAX,EAX                        ; 0053b255
    JNZ 0x0053b11b                      ; 0053b257
        ;   XREF to: 0053b11b (CONDITIONAL_JUMP)  ; LAB_0053b11b
    CMP dword ptr [ESP + 0x2504],0x1    ; 0053b25d
        ;   Label: LAB_0053b25d
    JL 0x0053b4f3                       ; 0053b265
        ;   XREF to: 0053b4f3 (CONDITIONAL_JUMP)  ; LAB_0053b4f3
    LEA EAX,[ESP + 0x2504]              ; 0053b26b
    PUSH EAX                            ; 0053b272
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_004a2ec0 ; 0053b273
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sortAll_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053b278
    MOV EAX,dword ptr [ESP + 0x2bb8]    ; 0053b27b
    ADD EAX,0x4                         ; 0053b282
    PUSH EAX                            ; 0053b285
    PUSH 0x63c63c                       ; 0053b286 | = "Actors relevent to \"%s\""
    LEA EAX,[ESP + 0x28b4]              ; 0053b28b
    PUSH EAX                            ; 0053b292
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053b293
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053b298
    PUSH 0x0                            ; 0053b29b
    PUSH -0x1                           ; 0053b29d
    LEA EAX,[ESP + 0x28b4]              ; 0053b29f
    PUSH EAX                            ; 0053b2a6
    LEA EAX,[ESP + 0x2510]              ; 0053b2a7
    PUSH EAX                            ; 0053b2ae
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053b2af
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053b2b4
    TEST EAX,EAX                        ; 0053b2b7
    JL 0x0053b2f8                       ; 0053b2b9
        ;   XREF to: 0053b2f8 (CONDITIONAL_JUMP)  ; LAB_0053b2f8
    PUSH 0x0                            ; 0053b2bb
    PUSH EAX                            ; 0053b2bd
    LEA EAX,[ESP + 0x28b4]              ; 0053b2be
    PUSH EAX                            ; 0053b2c5
    LEA EAX,[ESP + 0x2510]              ; 0053b2c6
    PUSH EAX                            ; 0053b2cd
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0053b2ce
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0053b2d3
    LEA EAX,[ESP + 0x28ac]              ; 0053b2d6
    PUSH EAX                            ; 0053b2dd
    MOV EDI,dword ptr [ESP + 0x2bb8]    ; 0053b2de
    PUSH EDI                            ; 0053b2e5
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 0053b2e6
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0053b2eb
    PUSH EAX                            ; 0053b2ee
    PUSH EDI                            ; 0053b2ef
    CALL core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140 ; 0053b2f0
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053b2f5
        ;   Label: LAB_0053b2f5
    PUSH 0x0                            ; 0053b2f8
        ;   Label: LAB_0053b2f8
    LEA EAX,[ESP + 0x2508]              ; 0053b2fa
    PUSH EAX                            ; 0053b301
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053b302
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053b307
    PUSH 0x0                            ; 0053b30a
    LEA EAX,[ESP + 0x2b7c]              ; 0053b30c
    PUSH EAX                            ; 0053b313
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0053b314
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053b319
    ADD ESP,0x2ba0                      ; 0053b31c
    POP EBP                             ; 0053b322
    POP EDI                             ; 0053b323
    POP ESI                             ; 0053b324
    POP EBX                             ; 0053b325
    RET                                 ; 0053b326
    CMP EAX,0x2d                        ; 0053b327
        ;   Label: LAB_0053b327
    JZ 0x0053b080                       ; 0053b32a
        ;   XREF to: 0053b080 (CONDITIONAL_JUMP)  ; LAB_0053b080
    CMP EAX,0x5f                        ; 0053b330
    JZ 0x0053b080                       ; 0053b333
        ;   XREF to: 0053b080 (CONDITIONAL_JUMP)  ; LAB_0053b080
    INC EBX                             ; 0053b339
    JMP 0x0053b0da                      ; 0053b33a
        ;   XREF to: 0053b0da (UNCONDITIONAL_JUMP)  ; LAB_0053b0da
    PUSH 0x63b6e5                       ; 0053b33f | = "true"
        ;   Label: LAB_0053b33f
    LEA EAX,[ESP + 0x2aa4]              ; 0053b344
    PUSH EAX                            ; 0053b34b
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053b34c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b351
    TEST EAX,EAX                        ; 0053b354
    JZ 0x0053b0da                       ; 0053b356
        ;   XREF to: 0053b0da (CONDITIONAL_JUMP)  ; LAB_0053b0da
    LEA EAX,[ESP + 0x2aa0]              ; 0053b35c
    PUSH EAX                            ; 0053b363
    PUSH EDI                            ; 0053b364
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b365
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b36a
    JMP 0x0053b0da                      ; 0053b36d
        ;   XREF to: 0053b0da (UNCONDITIONAL_JUMP)  ; LAB_0053b0da
    LEA EAX,[ESP + 0x2b68]              ; 0053b372
        ;   Label: LAB_0053b372
    PUSH EAX                            ; 0053b379
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0053b37a
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053b37f
    MOV EBX,dword ptr [ESP + EBX*0x1 + 0x70] ; 0053b382
    MOV AL,byte ptr [EBX]               ; 0053b386
    LEA EBP,[ESP + 0x2b68]              ; 0053b388
    TEST AL,AL                          ; 0053b38f
    JZ 0x0053b411                       ; 0053b391
        ;   XREF to: 0053b411 (CONDITIONAL_JUMP)  ; LAB_0053b411
    XOR EAX,EAX                         ; 0053b397
        ;   Label: LAB_0053b397
    MOV AL,byte ptr [EBX]               ; 0053b399
    MOV EDX,EAX                         ; 0053b39b
    INC DL                              ; 0053b39d
    AND EDX,0xff                        ; 0053b39f
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0053b3a5 | g_CharacterClassificationTable
    JZ 0x0053b496                       ; 0053b3ac
        ;   XREF to: 0053b496 (CONDITIONAL_JUMP)  ; LAB_0053b496
    LEA EDX,[ESP + 0x29d8]              ; 0053b3b2
        ;   Label: LAB_0053b3b2
    MOV AL,byte ptr [EBX]               ; 0053b3b9
        ;   Label: LAB_0053b3b9
    MOV byte ptr [EDX],AL               ; 0053b3bb
    XOR EAX,EAX                         ; 0053b3bd
    MOV AL,byte ptr [EBX + 0x1]         ; 0053b3bf
    MOV dword ptr [ESP + 0x2b90],EAX    ; 0053b3c2
    MOV CL,byte ptr [ESP + 0x2b90]      ; 0053b3c9
    INC CL                              ; 0053b3d0
    MOVZX ESI,CL                        ; 0053b3d2
    INC EBX                             ; 0053b3d5
    MOV CH,byte ptr [ESI + 0x6849c4]    ; 0053b3d6 | g_CharacterClassificationTable
    INC EDX                             ; 0053b3dc
    TEST CH,0xe0                        ; 0053b3dd
    JNZ 0x0053b3b9                      ; 0053b3e0
        ;   XREF to: 0053b3b9 (CONDITIONAL_JUMP)  ; LAB_0053b3b9
    CMP EAX,0x2d                        ; 0053b3e2
    JZ 0x0053b3b9                       ; 0053b3e5
        ;   XREF to: 0053b3b9 (CONDITIONAL_JUMP)  ; LAB_0053b3b9
    CMP EAX,0x5f                        ; 0053b3e7
    JZ 0x0053b3b9                       ; 0053b3ea
        ;   XREF to: 0053b3b9 (CONDITIONAL_JUMP)  ; LAB_0053b3b9
    PUSH 0x63b6e0                       ; 0053b3ec | = "none"
    LEA EAX,[ESP + 0x29dc]              ; 0053b3f1
    PUSH EAX                            ; 0053b3f8
    MOV byte ptr [EDX],0x0              ; 0053b3f9
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053b3fc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b401
    TEST EAX,EAX                        ; 0053b404
    JNZ 0x0053b4ae                      ; 0053b406
        ;   XREF to: 0053b4ae (CONDITIONAL_JUMP)  ; LAB_0053b4ae
    CMP byte ptr [EBX],0x0              ; 0053b40c
        ;   Label: LAB_0053b40c
    JNZ 0x0053b397                      ; 0053b40f
        ;   XREF to: 0053b397 (CONDITIONAL_JUMP)  ; LAB_0053b397
    MOV EBP,dword ptr [ESP + 0x2b68]    ; 0053b411
        ;   Label: LAB_0053b411
    XOR EBX,EBX                         ; 0053b418
    TEST EBP,EBP                        ; 0053b41a
    JLE 0x0053b47f                      ; 0053b41c
        ;   XREF to: 0053b47f (CONDITIONAL_JUMP)  ; LAB_0053b47f
    PUSH EBX                            ; 0053b41e
        ;   Label: LAB_0053b41e
    LEA EAX,[ESP + 0x2b6c]              ; 0053b41f
    PUSH EAX                            ; 0053b426
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053b427
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053b42c
    PUSH EAX                            ; 0053b42f
    PUSH EDI                            ; 0053b430
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053b431
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b436
    TEST EAX,EAX                        ; 0053b439
    JNZ 0x0053b4e1                      ; 0053b43b
        ;   XREF to: 0053b4e1 (CONDITIONAL_JUMP)  ; LAB_0053b4e1
    MOV EDX,dword ptr [ESP + 0x2b8c]    ; 0053b441
    PUSH EDX                            ; 0053b448
    PUSH EDI                            ; 0053b449
    MOV ECX,dword ptr [ESP + 0x2ba0]    ; 0053b44a
    PUSH ECX                            ; 0053b451
    PUSH 0x63c5f0                       ; 0053b452 | = "%s\tRaises \"%s\" in \"%s\""
    LEA EAX,[ESP + 0x28bc]              ; 0053b457
    PUSH EAX                            ; 0053b45e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053b45f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0053b464
    LEA EAX,[ESP + 0x28ac]              ; 0053b467
    PUSH EAX                            ; 0053b46e
    LEA EAX,[ESP + 0x2508]              ; 0053b46f
    PUSH EAX                            ; 0053b476
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b477
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b47c
    PUSH 0x0                            ; 0053b47f
        ;   Label: LAB_0053b47f
    LEA EAX,[ESP + 0x2b6c]              ; 0053b481
    PUSH EAX                            ; 0053b488
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0053b489
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053b48e
    JMP 0x0053b1f8                      ; 0053b491
        ;   XREF to: 0053b1f8 (UNCONDITIONAL_JUMP)  ; LAB_0053b1f8
    CMP EAX,0x2d                        ; 0053b496
        ;   Label: LAB_0053b496
    JZ 0x0053b3b2                       ; 0053b499
        ;   XREF to: 0053b3b2 (CONDITIONAL_JUMP)  ; LAB_0053b3b2
    CMP EAX,0x5f                        ; 0053b49f
    JZ 0x0053b3b2                       ; 0053b4a2
        ;   XREF to: 0053b3b2 (CONDITIONAL_JUMP)  ; LAB_0053b3b2
    INC EBX                             ; 0053b4a8
    JMP 0x0053b40c                      ; 0053b4a9
        ;   XREF to: 0053b40c (UNCONDITIONAL_JUMP)  ; LAB_0053b40c
    PUSH 0x63b6e5                       ; 0053b4ae | = "true"
        ;   Label: LAB_0053b4ae
    LEA EAX,[ESP + 0x29dc]              ; 0053b4b3
    PUSH EAX                            ; 0053b4ba
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053b4bb
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b4c0
    TEST EAX,EAX                        ; 0053b4c3
    JZ 0x0053b40c                       ; 0053b4c5
        ;   XREF to: 0053b40c (CONDITIONAL_JUMP)  ; LAB_0053b40c
    LEA EAX,[ESP + 0x29d8]              ; 0053b4cb
    PUSH EAX                            ; 0053b4d2
    PUSH EBP                            ; 0053b4d3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053b4d4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053b4d9
    JMP 0x0053b40c                      ; 0053b4dc
        ;   XREF to: 0053b40c (UNCONDITIONAL_JUMP)  ; LAB_0053b40c
    MOV EAX,dword ptr [ESP + 0x2b68]    ; 0053b4e1
        ;   Label: LAB_0053b4e1
    INC EBX                             ; 0053b4e8
    CMP EBX,EAX                         ; 0053b4e9
    JL 0x0053b41e                       ; 0053b4eb
        ;   XREF to: 0053b41e (CONDITIONAL_JUMP)  ; LAB_0053b41e
    JMP 0x0053b47f                      ; 0053b4f1
        ;   XREF to: 0053b47f (UNCONDITIONAL_JUMP)  ; LAB_0053b47f
    PUSH 0x63c607                       ; 0053b4f3 | = "No actors relevent to the testing of ..."
        ;   Label: LAB_0053b4f3
    MOV EAX,[0x00678a60]                ; 0053b4f8 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0053b4fd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053b4fe
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    JMP 0x0053b2f5                      ; 0053b503
        ;   XREF to: 0053b2f5 (UNCONDITIONAL_JUMP)  ; LAB_0053b2f5

