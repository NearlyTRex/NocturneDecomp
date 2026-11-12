; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a61b0(CFieldNotes *param_1,_FILE *param_2)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bbf70 at 004bc770
;
; Referenced Globals:
;   TerminatedCString s_anon_005d6460
;   TerminatedCString s_anon_005d6468
;   undefined4 DAT_005d6470
;   TerminatedCString s_core_fldnotes_cpp_005d6474
;   TerminatedCString s_Invalid_field_notes_file_005d6489
;   TerminatedCString s_anon_005d64cf
;   TerminatedCString s_anon_005d64d7
;   undefined4 DAT_005d64df
;   TerminatedCString s_anon_005d64e2
;   undefined4 DAT_005d64ea
;   TerminatedCString s_d_005d64ee
;   TerminatedCString s_Ignoring_saved_game_refe_005d64fb
;   TerminatedCString s_anon_005d654b
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_00616048
;   ... and 7 more
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fscanf_FUN_005b8100
;   engine_alphabit.cpp_FUN_0040dd20
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a61b0
        ;   Label: core_fldnotes.cpp_FUN_004a61b0
    PUSH ESI                            ; 004a61b1
    PUSH EDI                            ; 004a61b2
    PUSH EBP                            ; 004a61b3
    SUB ESP,0x210                       ; 004a61b4
    MOV EDX,dword ptr [ESP + 0x224]     ; 004a61ba
    PUSH EDX                            ; 004a61c1
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004a61c2
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004a61c7
    PUSH 0x5d6460                       ; 004a61ca | = "%*[^\n]\n"
    MOV EBX,dword ptr [ESP + 0x22c]     ; 004a61cf
    XOR ECX,ECX                         ; 004a61d6
    PUSH EBX                            ; 004a61d8
    MOV dword ptr [ESP + 0x208],ECX     ; 004a61d9
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a61e0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004a61e5
    PUSH 0x5d6468                       ; 004a61e8 | = "%*[^\n]\n"
    PUSH EBX                            ; 004a61ed
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a61ee
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004a61f3
    LEA EAX,[ESP + 0x200]               ; 004a61f6
    PUSH EAX                            ; 004a61fd
    PUSH 0x5d6470                       ; 004a61fe | DAT_005d6470
    PUSH EBX                            ; 004a6203
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a6204
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004a6209
    MOV EBP,dword ptr [ESP + 0x200]     ; 004a620c
    CMP EBP,0x1                         ; 004a6213
    JL 0x004a621a                       ; 004a6216
        ;   XREF to: 004a621a (CONDITIONAL_JUMP)  ; LAB_004a621a
    JLE 0x004a6247                      ; 004a6218
        ;   XREF to: 004a6247 (CONDITIONAL_JUMP)  ; LAB_004a6247
    PUSH 0x1                            ; 004a621a
        ;   Label: LAB_004a621a
    MOV EBX,dword ptr [ESP + 0x204]     ; 004a621c
    PUSH EBX                            ; 004a6223
    MOV EDX,0x5d6474                    ; 004a6224 | = "..\\core\\fldnotes.cpp"
    MOV ECX,0xb30                       ; 004a6229
    PUSH 0x5d6489                       ; 004a622e | = "Invalid field notes file version: %d,..."
    MOV dword ptr [0x01d046a0],EDX      ; 004a6233 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004a6239 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a623f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004a6244
    MOV ECX,0x40                        ; 004a6247
        ;   Label: LAB_004a6247
    LEA EDI,[ESP + 0x100]               ; 004a624c
    MOV ESI,0x616048                    ; 004a6253 | DAT_00616048
    MOVSD.REP ES:EDI,ESI                ; 004a6258 | DAT_00616048 | DAT_0061604c
    PUSH 0x5d64cf                       ; 004a625a | = "%*[^\n]\n"
    MOV ESI,dword ptr [ESP + 0x22c]     ; 004a625f
    PUSH ESI                            ; 004a6266
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a6267
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004a626c
    LEA EAX,[ESP + 0x100]               ; 004a626f
    PUSH EAX                            ; 004a6276
    PUSH 0x5d64d7                       ; 004a6277 | = " \"%[^\"]"
    PUSH ESI                            ; 004a627c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a627d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004a6282
    PUSH 0x5d64df                       ; 004a6285 | DAT_005d64df
    PUSH ESI                            ; 004a628a
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a628b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004a6290
    CMP byte ptr [ESP + 0x100],0x0      ; 004a6293
    JNZ 0x004a62bd                      ; 004a629b
        ;   XREF to: 004a62bd (CONDITIONAL_JUMP)  ; LAB_004a62bd
    PUSH 0x5d654b                       ; 004a629d | = "%*[^\n]\n"
        ;   Label: LAB_004a629d
    MOV EDI,dword ptr [ESP + 0x22c]     ; 004a62a2
    PUSH EDI                            ; 004a62a9
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a62aa
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004a62af
    ADD ESP,0x210                       ; 004a62b2
    POP EBP                             ; 004a62b8
    POP EDI                             ; 004a62b9
    POP ESI                             ; 004a62ba
    POP EBX                             ; 004a62bb
    RET                                 ; 004a62bc
    PUSH 0x0                            ; 004a62bd
        ;   Label: LAB_004a62bd
    LEA EAX,[ESP + 0x104]               ; 004a62bf
    PUSH EAX                            ; 004a62c6
    MOV EAX,dword ptr [ESP + 0x22c]     ; 004a62c7
    PUSH EAX                            ; 004a62ce
    CALL core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 ; 004a62cf
        ;   XREF to: 004a41b0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0(CFieldNotes * this_ptr, char * param_2, char * param_3)
    ADD ESP,0xc                         ; 004a62d4
    PUSH 0x5d64e2                       ; 004a62d7 | = "%*[^\n]\n"
    XOR EDX,EDX                         ; 004a62dc
    PUSH ESI                            ; 004a62de
    MOV dword ptr [ESP + 0x20c],EDX     ; 004a62df
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a62e6
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004a62eb
    LEA EAX,[ESP + 0x204]               ; 004a62ee
    PUSH EAX                            ; 004a62f5
    PUSH 0x5d64ea                       ; 004a62f6 | DAT_005d64ea
    PUSH ESI                            ; 004a62fb
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a62fc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004a6301
    MOV ESI,dword ptr [ESP + 0x204]     ; 004a6304
    XOR EBP,EBP                         ; 004a630b
    TEST ESI,ESI                        ; 004a630d
    JLE 0x004a63bf                      ; 004a630f
        ;   XREF to: 004a63bf (CONDITIONAL_JUMP)  ; LAB_004a63bf
    LEA EAX,[ESP + 0x208]               ; 004a6315
        ;   Label: LAB_004a6315
    PUSH EAX                            ; 004a631c
    LEA EAX,[ESP + 0x4]                 ; 004a631d
    MOV ECX,0x40                        ; 004a6321
    PUSH EAX                            ; 004a6326
    LEA EDI,[ESP + 0x8]                 ; 004a6327
    MOV ESI,0x616148                    ; 004a632b | = "(parse error)"
    PUSH 0x5d64ee                       ; 004a6330 | = "\"%[^\"]\", %d\n"
    MOV EAX,dword ptr [ESP + 0x234]     ; 004a6335
    MOVSD.REP ES:EDI,ESI                ; 004a633c | = "(parse error)" | s_parse_error_00616148+4
    PUSH EAX                            ; 004a633e
    XOR EBX,EBX                         ; 004a633f
    LEA EDI,[ESP + 0x10]                ; 004a6341
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004a6345
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004a634a
    XOR EDX,EDX                         ; 004a634d
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a634f | DAT_01cab9f0
    MOV dword ptr [ESP + 0x20c],EDX     ; 004a6355
    TEST ECX,ECX                        ; 004a635c
    JLE 0x004a638e                      ; 004a635e
        ;   XREF to: 004a638e (CONDITIONAL_JUMP)  ; LAB_004a638e
    MOV ESI,0x1cab9f4                   ; 004a6360
    PUSH EDI                            ; 004a6365
        ;   Label: LAB_004a6365
    PUSH ESI                            ; 004a6366
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0 ; 004a6367
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a636c
    MOV EDX,EAX                         ; 004a636f
    TEST EAX,EAX                        ; 004a6371
    JZ 0x004a63f7                       ; 004a6373
        ;   XREF to: 004a63f7 (CONDITIONAL_JUMP)  ; LAB_004a63f7
    MOV ECX,dword ptr [ESP + 0x20c]     ; 004a6379
    TEST ECX,ECX                        ; 004a6380
    JZ 0x004a6386                       ; 004a6382
        ;   XREF to: 004a6386 (CONDITIONAL_JUMP)  ; LAB_004a6386
    MOV dword ptr [ECX],EBX             ; 004a6384
    TEST EDX,EDX                        ; 004a6386
        ;   Label: LAB_004a6386
    JNZ 0x004a640d                      ; 004a6388
        ;   XREF to: 004a640d (CONDITIONAL_JUMP)  ; LAB_004a640d
    MOV EBX,dword ptr [ESP + 0x224]     ; 004a638e
        ;   Label: LAB_004a638e
    PUSH EBX                            ; 004a6395
    LEA EAX,[ESP + 0x4]                 ; 004a6396
    PUSH EAX                            ; 004a639a
    PUSH 0x5d64fb                       ; 004a639b | = "Ignoring saved game reference to fiel..."
    MOV ESI,dword ptr [0x006138e0]      ; 004a63a0 | g_CEditorToolsPtr
    PUSH ESI                            ; 004a63a6
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 004a63a7
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004a63ac
    MOV EDI,dword ptr [ESP + 0x204]     ; 004a63af
        ;   Label: LAB_004a63af
    INC EBP                             ; 004a63b6
    CMP EBP,EDI                         ; 004a63b7
    JL 0x004a6315                       ; 004a63b9
        ;   XREF to: 004a6315 (CONDITIONAL_JUMP)  ; LAB_004a6315
    MOV EBP,dword ptr [0x01cacb4c]      ; 004a63bf | DAT_01cacb4c
        ;   Label: LAB_004a63bf
    XOR EDI,EDI                         ; 004a63c5
    TEST EBP,EBP                        ; 004a63c7
    JLE 0x004a629d                      ; 004a63c9
        ;   XREF to: 004a629d (CONDITIONAL_JUMP)  ; LAB_004a629d
    XOR EBX,EBX                         ; 004a63cf
    MOV EAX,dword ptr [EBX + 0x1cacb50] ; 004a63d1
        ;   Label: LAB_004a63d1
    CMP dword ptr [EAX + 0x140],0x6     ; 004a63d7
    JZ 0x004a641c                       ; 004a63de
        ;   XREF to: 004a641c (CONDITIONAL_JUMP)  ; LAB_004a641c
    MOV ESI,dword ptr [0x01cacb4c]      ; 004a63e0 | DAT_01cacb4c
        ;   Label: LAB_004a63e0
    INC EDI                             ; 004a63e6
    ADD EBX,0x970                       ; 004a63e7
    CMP EDI,ESI                         ; 004a63ed
    JGE 0x004a629d                      ; 004a63ef
        ;   XREF to: 004a629d (CONDITIONAL_JUMP)  ; LAB_004a629d
    JMP 0x004a63d1                      ; 004a63f5
        ;   XREF to: 004a63d1 (UNCONDITIONAL_JUMP)  ; LAB_004a63d1
    MOV EAX,[0x01cab9f0]                ; 004a63f7 | DAT_01cab9f0
        ;   Label: LAB_004a63f7
    INC EBX                             ; 004a63fc
    ADD ESI,0x2e4                       ; 004a63fd
    CMP EBX,EAX                         ; 004a6403
    JL 0x004a6365                       ; 004a6405
        ;   XREF to: 004a6365 (CONDITIONAL_JUMP)  ; LAB_004a6365
    JMP 0x004a638e                      ; 004a640b
        ;   XREF to: 004a638e (UNCONDITIONAL_JUMP)  ; LAB_004a638e
    MOV EAX,dword ptr [ESP + 0x208]     ; 004a640d
        ;   Label: LAB_004a640d
    MOV dword ptr [EDX + 0x140],EAX     ; 004a6414
    JMP 0x004a63af                      ; 004a641a
        ;   XREF to: 004a63af (UNCONDITIONAL_JUMP)  ; LAB_004a63af
    MOV EAX,0x1cacb50                   ; 004a641c
        ;   Label: LAB_004a641c
    ADD EAX,EBX                         ; 004a6421
    PUSH 0xff                           ; 004a6423
    ADD EAX,0x88                        ; 004a6428
    PUSH EAX                            ; 004a642d
    CALL engine_alphabit.cpp_FUN_0040dd20 ; 004a642e
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dd20()
    ADD ESP,0x8                         ; 004a6433
    JMP 0x004a63e0                      ; 004a6436
        ;   XREF to: 004a63e0 (UNCONDITIONAL_JUMP)  ; LAB_004a63e0

