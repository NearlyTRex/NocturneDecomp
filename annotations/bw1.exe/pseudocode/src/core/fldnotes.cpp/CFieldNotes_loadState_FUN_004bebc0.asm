; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_loadState_FUN_004bebc0(CFieldNotes *this_ptr,undefined4 param_2)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; Local Variables:
; undefined        Stack[-0x34c]:1  local_34c
; undefined        Stack[-0x24c]:1  local_24c
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004d6990 at 004d718d
;
; Referenced Globals:
;   TerminatedCString s_anon_005e02ca
;   TerminatedCString s_anon_005e02d2
;   undefined4 DAT_005e02da
;   TerminatedCString s_core_fldnotes_cpp_005e02de
;   TerminatedCString s_Invalid_field_notes_file_005e02f3
;   TerminatedCString s_anon_005e0339
;   TerminatedCString s_anon_005e0341
;   undefined4 DAT_005e0349
;   TerminatedCString s_anon_005e034c
;   undefined4 DAT_005e0354
;   TerminatedCString s_d_005e0358
;   TerminatedCString s_Ignoring_saved_game_refe_005e0365
;   TerminatedCString s_anon_005e03b5
;   undefined4 DAT_005e03bd
;   TerminatedCString s_anon_005e03c1
;   ... and 26 more
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0
;   core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004bc540
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fscanf_FUN_005c04b0
;   engine_alphabit.cpp_FUN_0040d970
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bebc0
        ;   Label: core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0
    PUSH ESI                            ; 004bebc1
    PUSH EDI                            ; 004bebc2
    PUSH EBP                            ; 004bebc3
    SUB ESP,0x43c                       ; 004bebc4
    MOV EBP,dword ptr [ESP + 0x454]     ; 004bebca
    MOV EDX,dword ptr [ESP + 0x450]     ; 004bebd1
    PUSH EDX                            ; 004bebd8
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 ; 004bebd9
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004bebde
    PUSH 0x5e02ca                       ; 004bebe1 | = "%*[^\n]\n"
    XOR ECX,ECX                         ; 004bebe6
    PUSH EBP                            ; 004bebe8
    MOV dword ptr [ESP + 0x408],ECX     ; 004bebe9
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bebf0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bebf5
    PUSH 0x5e02d2                       ; 004bebf8 | = "%*[^\n]\n"
    PUSH EBP                            ; 004bebfd
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bebfe
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bec03
    LEA EAX,[ESP + 0x400]               ; 004bec06
    PUSH EAX                            ; 004bec0d
    PUSH 0x5e02da                       ; 004bec0e | DAT_005e02da
    PUSH EBP                            ; 004bec13
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bec14
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bec19
    MOV EBX,dword ptr [ESP + 0x400]     ; 004bec1c
    CMP EBX,0x1                         ; 004bec23
    JL 0x004bec2d                       ; 004bec26
        ;   XREF to: 004bec2d (CONDITIONAL_JUMP)  ; LAB_004bec2d
    CMP EBX,0x2                         ; 004bec28
    JLE 0x004bec59                      ; 004bec2b
        ;   XREF to: 004bec59 (CONDITIONAL_JUMP)  ; LAB_004bec59
    PUSH 0x2                            ; 004bec2d
        ;   Label: LAB_004bec2d
    MOV EDX,dword ptr [ESP + 0x404]     ; 004bec2f
    PUSH EDX                            ; 004bec36
    MOV EDI,0x5e02de                    ; 004bec37 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0xb96                       ; 004bec3c
    PUSH 0x5e02f3                       ; 004bec41 | = "Invalid field notes file version: %d,..."
    MOV dword ptr [0x01d1d400],EDI      ; 004bec46 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004bec4c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bec51
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004bec56
    MOV ECX,0x40                        ; 004bec59
        ;   Label: LAB_004bec59
    PUSH 0x5e0339                       ; 004bec5e | = "%*[^\n]\n"
    LEA EDI,[ESP + 0x104]               ; 004bec63
    MOV ESI,0x61d420                    ; 004bec6a | DAT_0061d420
    PUSH EBP                            ; 004bec6f
    MOVSD.REP ES:EDI,ESI                ; 004bec70 | DAT_0061d420 | DAT_0061d424
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bec72
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bec77
    LEA EAX,[ESP + 0x100]               ; 004bec7a
    PUSH EAX                            ; 004bec81
    PUSH 0x5e0341                       ; 004bec82 | = " \"%[^\"]"
    PUSH EBP                            ; 004bec87
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bec88
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bec8d
    PUSH 0x5e0349                       ; 004bec90 | DAT_005e0349
    PUSH EBP                            ; 004bec95
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bec96
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bec9b
    CMP byte ptr [ESP + 0x100],0x0      ; 004bec9e
    JNZ 0x004becc1                      ; 004beca6
        ;   XREF to: 004becc1 (CONDITIONAL_JUMP)  ; LAB_004becc1
    PUSH 0x5e04cf                       ; 004beca8 | = "%*[^\n]\n"
        ;   Label: LAB_004beca8
    PUSH EBP                            ; 004becad
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004becae
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004becb3
    ADD ESP,0x43c                       ; 004becb6
    POP EBP                             ; 004becbc
    POP EDI                             ; 004becbd
    POP ESI                             ; 004becbe
    POP EBX                             ; 004becbf
    RET                                 ; 004becc0
    PUSH 0x0                            ; 004becc1
        ;   Label: LAB_004becc1
    LEA EAX,[ESP + 0x104]               ; 004becc3
    PUSH EAX                            ; 004becca
    MOV ECX,dword ptr [ESP + 0x458]     ; 004beccb
    PUSH ECX                            ; 004becd2
    CALL core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 ; 004becd3
        ;   XREF to: 004bcba0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes * this_ptr, char * param_2, char * param_3)
    ADD ESP,0xc                         ; 004becd8
    PUSH 0x5e034c                       ; 004becdb | = "%*[^\n]\n"
    XOR EBX,EBX                         ; 004bece0
    PUSH EBP                            ; 004bece2
    MOV dword ptr [ESP + 0x40c],EBX     ; 004bece3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004becea
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004becef
    LEA EAX,[ESP + 0x404]               ; 004becf2
    PUSH EAX                            ; 004becf9
    PUSH 0x5e0354                       ; 004becfa | DAT_005e0354
    PUSH EBP                            ; 004becff
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bed00
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bed05
    MOV EDI,dword ptr [ESP + 0x404]     ; 004bed08
    MOV dword ptr [ESP + 0x42c],EBX     ; 004bed0f
    TEST EDI,EDI                        ; 004bed16
    JLE 0x004bede9                      ; 004bed18
        ;   XREF to: 004bede9 (CONDITIONAL_JUMP)  ; LAB_004bede9
    LEA EAX,[ESP + 0x408]               ; 004bed1e
        ;   Label: LAB_004bed1e
    PUSH EAX                            ; 004bed25
    LEA EAX,[ESP + 0x204]               ; 004bed26
    PUSH EAX                            ; 004bed2d
    MOV ECX,0x40                        ; 004bed2e
    LEA EDI,[ESP + 0x208]               ; 004bed33
    PUSH 0x5e0358                       ; 004bed3a | = "\"%[^\"]\", %d\n"
    MOV ESI,0x61d520                    ; 004bed3f | = "(parse error)"
    XOR EBX,EBX                         ; 004bed44
    PUSH EBP                            ; 004bed46
    MOVSD.REP ES:EDI,ESI                ; 004bed47 | = "(parse error)" | s_parse_error_0061d520+4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bed49
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    LEA EAX,[ESP + 0x210]               ; 004bed4e
    MOV ECX,dword ptr [0x01cc4470]      ; 004bed55 | DAT_01cc4470
    ADD ESP,0x10                        ; 004bed5b
    XOR EDX,EDX                         ; 004bed5e
    MOV dword ptr [ESP + 0x430],EAX     ; 004bed60
    MOV dword ptr [ESP + 0x420],EDX     ; 004bed67
    TEST ECX,ECX                        ; 004bed6e
    JLE 0x004beda7                      ; 004bed70
        ;   XREF to: 004beda7 (CONDITIONAL_JUMP)  ; LAB_004beda7
    MOV ESI,0x1cc4474                   ; 004bed72
    MOV EDI,dword ptr [ESP + 0x430]     ; 004bed77
        ;   Label: LAB_004bed77
    PUSH EDI                            ; 004bed7e
    PUSH ESI                            ; 004bed7f
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0 ; 004bed80
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bed85
    MOV EDI,EAX                         ; 004bed88
    TEST EAX,EAX                        ; 004bed8a
    JZ 0x004bee2f                       ; 004bed8c
        ;   XREF to: 004bee2f (CONDITIONAL_JUMP)  ; LAB_004bee2f
    MOV EAX,dword ptr [ESP + 0x420]     ; 004bed92
    TEST EAX,EAX                        ; 004bed99
    JZ 0x004bed9f                       ; 004bed9b
        ;   XREF to: 004bed9f (CONDITIONAL_JUMP)  ; LAB_004bed9f
    MOV dword ptr [EAX],EBX             ; 004bed9d
    TEST EDI,EDI                        ; 004bed9f
        ;   Label: LAB_004bed9f
    JNZ 0x004bee49                      ; 004beda1
        ;   XREF to: 004bee49 (CONDITIONAL_JUMP)  ; LAB_004bee49
    MOV EDX,dword ptr [ESP + 0x450]     ; 004beda7
        ;   Label: LAB_004beda7
    PUSH EDX                            ; 004bedae
    LEA EAX,[ESP + 0x204]               ; 004bedaf
    PUSH EAX                            ; 004bedb6
    PUSH 0x5e0365                       ; 004bedb7 | = "Ignoring saved game reference to fiel..."
    MOV ECX,dword ptr [0x0061abc0]      ; 004bedbc | g_CEditorToolsPtr
    PUSH ECX                            ; 004bedc2
    CALL shape_edittool.cpp_FUN_00494340 ; 004bedc3
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 004bedc8
    MOV EAX,dword ptr [ESP + 0x42c]     ; 004bedcb
        ;   Label: LAB_004bedcb
    INC EAX                             ; 004bedd2
    MOV EDX,dword ptr [ESP + 0x404]     ; 004bedd3
    MOV dword ptr [ESP + 0x42c],EAX     ; 004bedda
    CMP EAX,EDX                         ; 004bede1
    JL 0x004bed1e                       ; 004bede3
        ;   XREF to: 004bed1e (CONDITIONAL_JUMP)  ; LAB_004bed1e
    CMP dword ptr [ESP + 0x400],0x2     ; 004bede9
        ;   Label: LAB_004bede9
    JGE 0x004bee5b                      ; 004bedf1
        ;   XREF to: 004bee5b (CONDITIONAL_JUMP)  ; LAB_004bee5b
    MOV EBX,dword ptr [0x01cc55cc]      ; 004bedf3 | DAT_01cc55cc
    XOR ESI,ESI                         ; 004bedf9
    TEST EBX,EBX                        ; 004bedfb
    JLE 0x004beca8                      ; 004bedfd
        ;   XREF to: 004beca8 (CONDITIONAL_JUMP)  ; LAB_004beca8
    XOR EBX,EBX                         ; 004bee03
    MOV EAX,dword ptr [EBX + 0x1cc55d0] ; 004bee05
        ;   Label: LAB_004bee05
    CMP dword ptr [EAX + 0x140],0x6     ; 004bee0b
    JZ 0x004bf15a                       ; 004bee12
        ;   XREF to: 004bf15a (CONDITIONAL_JUMP)  ; LAB_004bf15a
    MOV EDI,dword ptr [0x01cc55cc]      ; 004bee18 | DAT_01cc55cc
        ;   Label: LAB_004bee18
    INC ESI                             ; 004bee1e
    ADD EBX,0x970                       ; 004bee1f
    CMP ESI,EDI                         ; 004bee25
    JGE 0x004beca8                      ; 004bee27
        ;   XREF to: 004beca8 (CONDITIONAL_JUMP)  ; LAB_004beca8
    JMP 0x004bee05                      ; 004bee2d
        ;   XREF to: 004bee05 (UNCONDITIONAL_JUMP)  ; LAB_004bee05
    MOV ECX,dword ptr [0x01cc4470]      ; 004bee2f | DAT_01cc4470
        ;   Label: LAB_004bee2f
    INC EBX                             ; 004bee35
    ADD ESI,0x2e4                       ; 004bee36
    CMP EBX,ECX                         ; 004bee3c
    JL 0x004bed77                       ; 004bee3e
        ;   XREF to: 004bed77 (CONDITIONAL_JUMP)  ; LAB_004bed77
    JMP 0x004beda7                      ; 004bee44
        ;   XREF to: 004beda7 (UNCONDITIONAL_JUMP)  ; LAB_004beda7
    MOV EAX,dword ptr [ESP + 0x408]     ; 004bee49
        ;   Label: LAB_004bee49
    MOV dword ptr [EDI + 0x140],EAX     ; 004bee50
    JMP 0x004bedcb                      ; 004bee56
        ;   XREF to: 004bedcb (UNCONDITIONAL_JUMP)  ; LAB_004bedcb
    PUSH 0x5e03b5                       ; 004bee5b | = "%*[^\n]\n"
        ;   Label: LAB_004bee5b
    XOR ESI,ESI                         ; 004bee60
    PUSH EBP                            ; 004bee62
    MOV dword ptr [ESP + 0x414],ESI     ; 004bee63
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bee6a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bee6f
    LEA EAX,[ESP + 0x40c]               ; 004bee72
    PUSH EAX                            ; 004bee79
    PUSH 0x5e03bd                       ; 004bee7a | DAT_005e03bd
    PUSH EBP                            ; 004bee7f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bee80
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bee85
    MOV EAX,dword ptr [ESP + 0x40c]     ; 004bee88
    MOV dword ptr [ESP + 0x428],ESI     ; 004bee8f
    TEST EAX,EAX                        ; 004bee96
    JLE 0x004beca8                      ; 004bee98
        ;   XREF to: 004beca8 (CONDITIONAL_JUMP)  ; LAB_004beca8
    MOV ECX,0x40                        ; 004bee9e
        ;   Label: LAB_004bee9e
    PUSH 0x5e03c1                       ; 004beea3 | = "%*[^\n]\n"
    LEA EDI,[ESP + 0x304]               ; 004beea8
    MOV ESI,0x61d620                    ; 004beeaf | = "(corrupt save game file)"
    PUSH EBP                            ; 004beeb4
    MOVSD.REP ES:EDI,ESI                ; 004beeb5 | = "(corrupt save game file)" | s_corrupt_save_game_file_0061d620+4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004beeb7
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004beebc
    LEA EAX,[ESP + 0x414]               ; 004beebf
    PUSH EAX                            ; 004beec6
    LEA EAX,[ESP + 0x414]               ; 004beec7
    PUSH EAX                            ; 004beece
    LEA EAX,[ESP + 0x308]               ; 004beecf
    PUSH EAX                            ; 004beed6
    PUSH 0x5e03c9                       ; 004beed7 | = " %[^,], %d, %d\n"
    PUSH EBP                            ; 004beedc
    XOR EBX,EBX                         ; 004beedd
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004beedf
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    LEA EAX,[ESP + 0x314]               ; 004beee4
    ADD ESP,0x14                        ; 004beeeb
    XOR EDI,EDI                         ; 004beeee
    MOV dword ptr [ESP + 0x434],EAX     ; 004beef0
    MOV EAX,[0x01cc4470]                ; 004beef7 | DAT_01cc4470
    MOV dword ptr [ESP + 0x424],EDI     ; 004beefc
    TEST EAX,EAX                        ; 004bef03
    JLE 0x004bf129                      ; 004bef05
        ;   XREF to: 004bf129 (CONDITIONAL_JUMP)  ; LAB_004bf129
    MOV ESI,0x1cc4474                   ; 004bef0b
    MOV ECX,dword ptr [ESP + 0x434]     ; 004bef10
        ;   Label: LAB_004bef10
    PUSH ECX                            ; 004bef17
    PUSH ESI                            ; 004bef18
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0 ; 004bef19
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bef1e
    MOV EDI,EAX                         ; 004bef21
    TEST EAX,EAX                        ; 004bef23
    JZ 0x004bf114                       ; 004bef25
        ;   XREF to: 004bf114 (CONDITIONAL_JUMP)  ; LAB_004bf114
    MOV ESI,dword ptr [ESP + 0x424]     ; 004bef2b
    TEST ESI,ESI                        ; 004bef32
    JZ 0x004bef38                       ; 004bef34
        ;   XREF to: 004bef38 (CONDITIONAL_JUMP)  ; LAB_004bef38
    MOV dword ptr [ESI],EBX             ; 004bef36
    MOV EAX,EDI                         ; 004bef38
        ;   Label: LAB_004bef38
    MOV EBX,EAX                         ; 004bef3a
        ;   Label: LAB_004bef3a
    TEST EAX,EAX                        ; 004bef3c
    JNZ 0x004bef6a                      ; 004bef3e
        ;   XREF to: 004bef6a (CONDITIONAL_JUMP)  ; LAB_004bef6a
    MOV dword ptr [0x01d1d404],0xbcc    ; 004bef40 | DAT_01d1d404
    LEA EAX,[ESP + 0x300]               ; 004bef4a
    PUSH EAX                            ; 004bef51
    MOV EDI,0x5e03d9                    ; 004bef52 | = "..\\core\\fldnotes.cpp"
    PUSH 0x5e03ee                       ; 004bef57 | = "CFieldNotes::loadState - No such map ..."
    MOV dword ptr [0x01d1d400],EDI      ; 004bef5c | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 004bef62
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004bef67
    CMP dword ptr [EBX + 0x140],0x6     ; 004bef6a
        ;   Label: LAB_004bef6a
    JZ 0x004bf130                       ; 004bef71
        ;   XREF to: 004bf130 (CONDITIONAL_JUMP)  ; LAB_004bf130
    LEA EAX,[ESP + 0x300]               ; 004bef77
        ;   Label: LAB_004bef77
    PUSH EAX                            ; 004bef7e
    MOV ESI,0x5e0418                    ; 004bef7f | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xbcf                       ; 004bef84
    PUSH 0x5e042d                       ; 004bef89 | = "CFieldNotes::loadState - Entry '%s' i..."
    MOV dword ptr [0x01d1d400],ESI      ; 004bef8e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004bef94 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bef9a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004bef9f
    IMUL EDI,dword ptr [EBX + 0x158],0x970 ; 004befa2
        ;   Label: LAB_004befa2
    ADD EDI,0x1cc55d0                   ; 004befac
    MOV EAX,dword ptr [ESP + 0x410]     ; 004befb2
    CMP EAX,dword ptr [EDI + 0x94]      ; 004befb9
    JZ 0x004bf142                       ; 004befbf
        ;   XREF to: 004bf142 (CONDITIONAL_JUMP)  ; LAB_004bf142
    LEA EAX,[ESP + 0x300]               ; 004befc5
        ;   Label: LAB_004befc5
    PUSH EAX                            ; 004befcc
    MOV EBX,0x5e0467                    ; 004befcd | = "..\\core\\fldnotes.cpp"
    MOV ESI,0xbd4                       ; 004befd2
    PUSH 0x5e047c                       ; 004befd7 | = "CFieldNotes::loadState - Map '%s' has..."
    MOV dword ptr [0x01d1d400],EBX      ; 004befdc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004befe2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004befe8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004befed
    PUSH 0x5e04af                       ; 004beff0 | = "%*[^\n]\n"
        ;   Label: LAB_004beff0
    PUSH EBP                            ; 004beff5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004beff6
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004beffb
    XOR EAX,EAX                         ; 004beffe
    MOV EDX,dword ptr [EDI + 0x98]      ; 004bf000
    MOV dword ptr [ESP + 0x438],EAX     ; 004bf006
    TEST EDX,EDX                        ; 004bf00d
    JLE 0x004bf093                      ; 004bf00f
        ;   XREF to: 004bf093 (CONDITIONAL_JUMP)  ; LAB_004bf093
    PUSH 0x5e04b7                       ; 004bf015 | DAT_005e04b7
        ;   Label: LAB_004bf015
    PUSH EBP                            ; 004bf01a
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bf01b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bf020
    MOV EDX,dword ptr [EDI + 0x94]      ; 004bf023
    MOV EBX,dword ptr [ESP + 0x438]     ; 004bf029
    IMUL EBX,EDX                        ; 004bf030
    MOV EAX,dword ptr [EDI + 0x8c]      ; 004bf033
    XOR ESI,ESI                         ; 004bf039
    ADD EBX,EAX                         ; 004bf03b
    TEST EDX,EDX                        ; 004bf03d
    JLE 0x004bf06c                      ; 004bf03f
        ;   XREF to: 004bf06c (CONDITIONAL_JUMP)  ; LAB_004bf06c
    LEA EAX,[ESP + 0x41c]               ; 004bf041
        ;   Label: LAB_004bf041
    PUSH EAX                            ; 004bf048
    PUSH 0x5e04b9                       ; 004bf049 | DAT_005e04b9
    PUSH EBP                            ; 004bf04e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bf04f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bf054
    MOV AL,byte ptr [ESP + 0x41c]       ; 004bf057
    MOV byte ptr [EBX],AL               ; 004bf05e
    INC ESI                             ; 004bf060
    MOV EAX,dword ptr [EDI + 0x94]      ; 004bf061
    INC EBX                             ; 004bf067
    CMP ESI,EAX                         ; 004bf068
    JL 0x004bf041                       ; 004bf06a
        ;   XREF to: 004bf041 (CONDITIONAL_JUMP)  ; LAB_004bf041
    PUSH 0x5e04bd                       ; 004bf06c | DAT_005e04bd
        ;   Label: LAB_004bf06c
    PUSH EBP                            ; 004bf071
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bf072
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bf077
    MOV ECX,dword ptr [ESP + 0x438]     ; 004bf07a
    INC ECX                             ; 004bf081
    MOV EBX,dword ptr [EDI + 0x98]      ; 004bf082
    MOV dword ptr [ESP + 0x438],ECX     ; 004bf088
    CMP ECX,EBX                         ; 004bf08f
    JL 0x004bf015                       ; 004bf091
        ;   XREF to: 004bf015 (CONDITIONAL_JUMP)  ; LAB_004bf015
    PUSH 0x5e04bf                       ; 004bf093 | = "%*[^\n]\n"
        ;   Label: LAB_004bf093
    XOR ESI,ESI                         ; 004bf098
    PUSH EBP                            ; 004bf09a
    MOV dword ptr [ESP + 0x420],ESI     ; 004bf09b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bf0a2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 004bf0a7
    LEA EAX,[ESP + 0x418]               ; 004bf0aa
    PUSH EAX                            ; 004bf0b1
    PUSH 0x5e04c7                       ; 004bf0b2 | DAT_005e04c7
    PUSH EBP                            ; 004bf0b7
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bf0b8
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bf0bd
    CMP dword ptr [ESP + 0x418],0x0     ; 004bf0c0
    JLE 0x004bf0f1                      ; 004bf0c8
        ;   XREF to: 004bf0f1 (CONDITIONAL_JUMP)  ; LAB_004bf0f1
    MOV EAX,ESP                         ; 004bf0ca
        ;   Label: LAB_004bf0ca
    PUSH EAX                            ; 004bf0cc
    PUSH 0x5e04cb                       ; 004bf0cd | DAT_005e04cb
    PUSH EBP                            ; 004bf0d2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004bf0d3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004bf0d8
    MOV EAX,ESP                         ; 004bf0db
    PUSH EAX                            ; 004bf0dd
    PUSH EDI                            ; 004bf0de
    CALL core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004bc540 ; 004bf0df
        ;   XREF to: 004bc540 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004bc540(SNotesMap * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bf0e4
    INC ESI                             ; 004bf0e7
    CMP ESI,dword ptr [ESP + 0x418]     ; 004bf0e8
    JL 0x004bf0ca                       ; 004bf0ef
        ;   XREF to: 004bf0ca (CONDITIONAL_JUMP)  ; LAB_004bf0ca
    MOV EBX,dword ptr [ESP + 0x428]     ; 004bf0f1
        ;   Label: LAB_004bf0f1
    INC EBX                             ; 004bf0f8
    MOV ESI,dword ptr [ESP + 0x40c]     ; 004bf0f9
    MOV dword ptr [ESP + 0x428],EBX     ; 004bf100
    CMP EBX,ESI                         ; 004bf107
    JGE 0x004beca8                      ; 004bf109
        ;   XREF to: 004beca8 (CONDITIONAL_JUMP)  ; LAB_004beca8
    JMP 0x004bee9e                      ; 004bf10f
        ;   XREF to: 004bee9e (UNCONDITIONAL_JUMP)  ; LAB_004bee9e
    MOV EDX,dword ptr [0x01cc4470]      ; 004bf114 | DAT_01cc4470
        ;   Label: LAB_004bf114
    INC EBX                             ; 004bf11a
    ADD ESI,0x2e4                       ; 004bf11b
    CMP EBX,EDX                         ; 004bf121
    JL 0x004bef10                       ; 004bf123
        ;   XREF to: 004bef10 (CONDITIONAL_JUMP)  ; LAB_004bef10
    XOR EAX,EAX                         ; 004bf129
        ;   Label: LAB_004bf129
    JMP 0x004bef3a                      ; 004bf12b
        ;   XREF to: 004bef3a (UNCONDITIONAL_JUMP)  ; LAB_004bef3a
    CMP dword ptr [EBX + 0x158],0x0     ; 004bf130
        ;   Label: LAB_004bf130
    JL 0x004bef77                       ; 004bf137
        ;   XREF to: 004bef77 (CONDITIONAL_JUMP)  ; LAB_004bef77
    JMP 0x004befa2                      ; 004bf13d
        ;   XREF to: 004befa2 (UNCONDITIONAL_JUMP)  ; LAB_004befa2
    MOV EAX,dword ptr [ESP + 0x414]     ; 004bf142
        ;   Label: LAB_004bf142
    CMP EAX,dword ptr [EDI + 0x98]      ; 004bf149
    JNZ 0x004befc5                      ; 004bf14f
        ;   XREF to: 004befc5 (CONDITIONAL_JUMP)  ; LAB_004befc5
    JMP 0x004beff0                      ; 004bf155
        ;   XREF to: 004beff0 (UNCONDITIONAL_JUMP)  ; LAB_004beff0
    MOV EAX,0x1cc55d0                   ; 004bf15a
        ;   Label: LAB_004bf15a
    ADD EAX,EBX                         ; 004bf15f
    PUSH 0xff                           ; 004bf161
    ADD EAX,0x88                        ; 004bf166
    PUSH EAX                            ; 004bf16b
    CALL engine_alphabit.cpp_FUN_0040d970 ; 004bf16c
        ;   XREF to: 0040d970 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d970()
    ADD ESP,0x8                         ; 004bf171
    JMP 0x004bee18                      ; 004bf174
        ;   XREF to: 004bee18 (UNCONDITIONAL_JUMP)  ; LAB_004bee18

