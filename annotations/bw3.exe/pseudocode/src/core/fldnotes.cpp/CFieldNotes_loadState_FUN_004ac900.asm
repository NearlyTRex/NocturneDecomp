; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_loadState_FUN_004ac900(CFieldNotes *this_ptr,_FILE *file)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file
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
;   core_game.cpp_FUN_004bdfb0 at 004be7f1
;
; Referenced Globals:
;   TerminatedCString s_anon_005c17b9
;   TerminatedCString s_anon_005c17c1
;   undefined4 DAT_005c17c9
;   TerminatedCString s_core_fldnotes_cpp_005c17cd
;   TerminatedCString s_Invalid_field_notes_file_005c17e2
;   TerminatedCString s_anon_005c1828
;   TerminatedCString s_anon_005c1830
;   undefined4 DAT_005c1838
;   TerminatedCString s_anon_005c183b
;   undefined4 DAT_005c1843
;   TerminatedCString s_d_005c1847
;   TerminatedCString s_Ignoring_saved_game_refe_005c1854
;   TerminatedCString s_anon_005c18a4
;   undefined4 DAT_005c18ac
;   TerminatedCString s_anon_005c18b0
;   ... and 26 more
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810
;   core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fscanf_FUN_005a3230
;   engine_alphabit.cpp_FUN_0040dbb0
;   shape_edittool.cpp_FUN_0047cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac900
        ;   Label: core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900
    PUSH ESI                            ; 004ac901
    PUSH EDI                            ; 004ac902
    PUSH EBP                            ; 004ac903
    SUB ESP,0x43c                       ; 004ac904
    MOV EBP,dword ptr [ESP + 0x454]     ; 004ac90a
    MOV EDX,dword ptr [ESP + 0x450]     ; 004ac911
    PUSH EDX                            ; 004ac918
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 ; 004ac919
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004ac91e
    PUSH 0x5c17b9                       ; 004ac921 | = "%*[^\n]\n"
    XOR ECX,ECX                         ; 004ac926
    PUSH EBP                            ; 004ac928
    MOV dword ptr [ESP + 0x408],ECX     ; 004ac929
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac930
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ac935
    PUSH 0x5c17c1                       ; 004ac938 | = "%*[^\n]\n"
    PUSH EBP                            ; 004ac93d
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac93e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ac943
    LEA EAX,[ESP + 0x400]               ; 004ac946
    PUSH EAX                            ; 004ac94d
    PUSH 0x5c17c9                       ; 004ac94e | DAT_005c17c9
    PUSH EBP                            ; 004ac953
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac954
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ac959
    MOV EBX,dword ptr [ESP + 0x400]     ; 004ac95c
    CMP EBX,0x1                         ; 004ac963
    JL 0x004ac96d                       ; 004ac966
        ;   XREF to: 004ac96d (CONDITIONAL_JUMP)  ; LAB_004ac96d
    CMP EBX,0x2                         ; 004ac968
    JLE 0x004ac999                      ; 004ac96b
        ;   XREF to: 004ac999 (CONDITIONAL_JUMP)  ; LAB_004ac999
    PUSH 0x2                            ; 004ac96d
        ;   Label: LAB_004ac96d
    MOV EDX,dword ptr [ESP + 0x404]     ; 004ac96f
    PUSH EDX                            ; 004ac976
    MOV EDI,0x5c17cd                    ; 004ac977 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0xbae                       ; 004ac97c
    PUSH 0x5c17e2                       ; 004ac981 | = "Invalid field notes file version: %d,..."
    MOV dword ptr [0x01d71de0],EDI      ; 004ac986 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ac98c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ac991
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004ac996
    MOV ECX,0x40                        ; 004ac999
        ;   Label: LAB_004ac999
    PUSH 0x5c1828                       ; 004ac99e | = "%*[^\n]\n"
    LEA EDI,[ESP + 0x104]               ; 004ac9a3
    MOV ESI,0x5fe4b8                    ; 004ac9aa | DAT_005fe4b8
    PUSH EBP                            ; 004ac9af
    MOVSD.REP ES:EDI,ESI                ; 004ac9b0 | DAT_005fe4b8 | DAT_005fe4bc
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac9b2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ac9b7
    LEA EAX,[ESP + 0x100]               ; 004ac9ba
    PUSH EAX                            ; 004ac9c1
    PUSH 0x5c1830                       ; 004ac9c2 | = " \"%[^\"]"
    PUSH EBP                            ; 004ac9c7
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac9c8
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ac9cd
    PUSH 0x5c1838                       ; 004ac9d0 | DAT_005c1838
    PUSH EBP                            ; 004ac9d5
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac9d6
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ac9db
    CMP byte ptr [ESP + 0x100],0x0      ; 004ac9de
    JNZ 0x004aca01                      ; 004ac9e6
        ;   XREF to: 004aca01 (CONDITIONAL_JUMP)  ; LAB_004aca01
    PUSH 0x5c19be                       ; 004ac9e8 | = "%*[^\n]\n"
        ;   Label: LAB_004ac9e8
    PUSH EBP                            ; 004ac9ed
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ac9ee
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ac9f3
    ADD ESP,0x43c                       ; 004ac9f6
    POP EBP                             ; 004ac9fc
    POP EDI                             ; 004ac9fd
    POP ESI                             ; 004ac9fe
    POP EBX                             ; 004ac9ff
    RET                                 ; 004aca00
    PUSH 0x0                            ; 004aca01
        ;   Label: LAB_004aca01
    LEA EAX,[ESP + 0x104]               ; 004aca03
    PUSH EAX                            ; 004aca0a
    MOV ECX,dword ptr [ESP + 0x458]     ; 004aca0b
    PUSH ECX                            ; 004aca12
    CALL core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 ; 004aca13
        ;   XREF to: 004aa810 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810(CFieldNotes * this_ptr, char * file_name, char * error_text)
    ADD ESP,0xc                         ; 004aca18
    PUSH 0x5c183b                       ; 004aca1b | = "%*[^\n]\n"
    XOR EBX,EBX                         ; 004aca20
    PUSH EBP                            ; 004aca22
    MOV dword ptr [ESP + 0x40c],EBX     ; 004aca23
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004aca2a
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004aca2f
    LEA EAX,[ESP + 0x404]               ; 004aca32
    PUSH EAX                            ; 004aca39
    PUSH 0x5c1843                       ; 004aca3a | DAT_005c1843
    PUSH EBP                            ; 004aca3f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004aca40
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004aca45
    MOV EDI,dword ptr [ESP + 0x404]     ; 004aca48
    MOV dword ptr [ESP + 0x42c],EBX     ; 004aca4f
    TEST EDI,EDI                        ; 004aca56
    JLE 0x004acb29                      ; 004aca58
        ;   XREF to: 004acb29 (CONDITIONAL_JUMP)  ; LAB_004acb29
    LEA EAX,[ESP + 0x408]               ; 004aca5e
        ;   Label: LAB_004aca5e
    PUSH EAX                            ; 004aca65
    LEA EAX,[ESP + 0x204]               ; 004aca66
    PUSH EAX                            ; 004aca6d
    MOV ECX,0x40                        ; 004aca6e
    LEA EDI,[ESP + 0x208]               ; 004aca73
    PUSH 0x5c1847                       ; 004aca7a | = "\"%[^\"]\", %d\n"
    MOV ESI,0x5fe5b8                    ; 004aca7f | = "(parse error)"
    XOR EBX,EBX                         ; 004aca84
    PUSH EBP                            ; 004aca86
    MOVSD.REP ES:EDI,ESI                ; 004aca87 | = "(parse error)" | s_parse_error_005fe5b8+4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004aca89
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    LEA EAX,[ESP + 0x210]               ; 004aca8e
    MOV ECX,dword ptr [0x01d0d210]      ; 004aca95 | DAT_01d0d210
    ADD ESP,0x10                        ; 004aca9b
    XOR EDX,EDX                         ; 004aca9e
    MOV dword ptr [ESP + 0x430],EAX     ; 004acaa0
    MOV dword ptr [ESP + 0x420],EDX     ; 004acaa7
    TEST ECX,ECX                        ; 004acaae
    JLE 0x004acae7                      ; 004acab0
        ;   XREF to: 004acae7 (CONDITIONAL_JUMP)  ; LAB_004acae7
    MOV ESI,0x1d0d214                   ; 004acab2
    MOV EDI,dword ptr [ESP + 0x430]     ; 004acab7
        ;   Label: LAB_004acab7
    PUSH EDI                            ; 004acabe
    PUSH ESI                            ; 004acabf
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30 ; 004acac0
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; SNotesEntry * core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30(SNotesSection * this_ptr, char * name)
    ADD ESP,0x8                         ; 004acac5
    MOV EDI,EAX                         ; 004acac8
    TEST EAX,EAX                        ; 004acaca
    JZ 0x004acb6f                       ; 004acacc
        ;   XREF to: 004acb6f (CONDITIONAL_JUMP)  ; LAB_004acb6f
    MOV EAX,dword ptr [ESP + 0x420]     ; 004acad2
    TEST EAX,EAX                        ; 004acad9
    JZ 0x004acadf                       ; 004acadb
        ;   XREF to: 004acadf (CONDITIONAL_JUMP)  ; LAB_004acadf
    MOV dword ptr [EAX],EBX             ; 004acadd
    TEST EDI,EDI                        ; 004acadf
        ;   Label: LAB_004acadf
    JNZ 0x004acb89                      ; 004acae1
        ;   XREF to: 004acb89 (CONDITIONAL_JUMP)  ; LAB_004acb89
    MOV EDX,dword ptr [ESP + 0x450]     ; 004acae7
        ;   Label: LAB_004acae7
    PUSH EDX                            ; 004acaee
    LEA EAX,[ESP + 0x204]               ; 004acaef
    PUSH EAX                            ; 004acaf6
    PUSH 0x5c1854                       ; 004acaf7 | = "Ignoring saved game reference to fiel..."
    MOV ECX,dword ptr [0x005fb140]      ; 004acafc | g_CEditorToolsPtr
    PUSH ECX                            ; 004acb02
    CALL shape_edittool.cpp_FUN_0047cee0 ; 004acb03
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x10                        ; 004acb08
    MOV EAX,dword ptr [ESP + 0x42c]     ; 004acb0b
        ;   Label: LAB_004acb0b
    INC EAX                             ; 004acb12
    MOV EDX,dword ptr [ESP + 0x404]     ; 004acb13
    MOV dword ptr [ESP + 0x42c],EAX     ; 004acb1a
    CMP EAX,EDX                         ; 004acb21
    JL 0x004aca5e                       ; 004acb23
        ;   XREF to: 004aca5e (CONDITIONAL_JUMP)  ; LAB_004aca5e
    CMP dword ptr [ESP + 0x400],0x2     ; 004acb29
        ;   Label: LAB_004acb29
    JGE 0x004acb9b                      ; 004acb31
        ;   XREF to: 004acb9b (CONDITIONAL_JUMP)  ; LAB_004acb9b
    MOV EBX,dword ptr [0x01d0e36c]      ; 004acb33 | DAT_01d0e36c
    XOR ESI,ESI                         ; 004acb39
    TEST EBX,EBX                        ; 004acb3b
    JLE 0x004ac9e8                      ; 004acb3d
        ;   XREF to: 004ac9e8 (CONDITIONAL_JUMP)  ; LAB_004ac9e8
    XOR EBX,EBX                         ; 004acb43
    MOV EAX,dword ptr [EBX + 0x1d0e370] ; 004acb45
        ;   Label: LAB_004acb45
    CMP dword ptr [EAX + 0x140],0x6     ; 004acb4b
    JZ 0x004ace9a                       ; 004acb52
        ;   XREF to: 004ace9a (CONDITIONAL_JUMP)  ; LAB_004ace9a
    MOV EDI,dword ptr [0x01d0e36c]      ; 004acb58 | DAT_01d0e36c
        ;   Label: LAB_004acb58
    INC ESI                             ; 004acb5e
    ADD EBX,0x126c                      ; 004acb5f
    CMP ESI,EDI                         ; 004acb65
    JGE 0x004ac9e8                      ; 004acb67
        ;   XREF to: 004ac9e8 (CONDITIONAL_JUMP)  ; LAB_004ac9e8
    JMP 0x004acb45                      ; 004acb6d
        ;   XREF to: 004acb45 (UNCONDITIONAL_JUMP)  ; LAB_004acb45
    MOV ECX,dword ptr [0x01d0d210]      ; 004acb6f | DAT_01d0d210
        ;   Label: LAB_004acb6f
    INC EBX                             ; 004acb75
    ADD ESI,0x2e4                       ; 004acb76
    CMP EBX,ECX                         ; 004acb7c
    JL 0x004acab7                       ; 004acb7e
        ;   XREF to: 004acab7 (CONDITIONAL_JUMP)  ; LAB_004acab7
    JMP 0x004acae7                      ; 004acb84
        ;   XREF to: 004acae7 (UNCONDITIONAL_JUMP)  ; LAB_004acae7
    MOV EAX,dword ptr [ESP + 0x408]     ; 004acb89
        ;   Label: LAB_004acb89
    MOV dword ptr [EDI + 0x140],EAX     ; 004acb90
    JMP 0x004acb0b                      ; 004acb96
        ;   XREF to: 004acb0b (UNCONDITIONAL_JUMP)  ; LAB_004acb0b
    PUSH 0x5c18a4                       ; 004acb9b | = "%*[^\n]\n"
        ;   Label: LAB_004acb9b
    XOR ESI,ESI                         ; 004acba0
    PUSH EBP                            ; 004acba2
    MOV dword ptr [ESP + 0x414],ESI     ; 004acba3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acbaa
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004acbaf
    LEA EAX,[ESP + 0x40c]               ; 004acbb2
    PUSH EAX                            ; 004acbb9
    PUSH 0x5c18ac                       ; 004acbba | DAT_005c18ac
    PUSH EBP                            ; 004acbbf
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acbc0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004acbc5
    MOV EAX,dword ptr [ESP + 0x40c]     ; 004acbc8
    MOV dword ptr [ESP + 0x428],ESI     ; 004acbcf
    TEST EAX,EAX                        ; 004acbd6
    JLE 0x004ac9e8                      ; 004acbd8
        ;   XREF to: 004ac9e8 (CONDITIONAL_JUMP)  ; LAB_004ac9e8
    MOV ECX,0x40                        ; 004acbde
        ;   Label: LAB_004acbde
    PUSH 0x5c18b0                       ; 004acbe3 | = "%*[^\n]\n"
    LEA EDI,[ESP + 0x304]               ; 004acbe8
    MOV ESI,0x5fe6b8                    ; 004acbef | = "(corrupt save game file)"
    PUSH EBP                            ; 004acbf4
    MOVSD.REP ES:EDI,ESI                ; 004acbf5 | = "(corrupt save game file)" | s_corrupt_save_game_file_005fe6b8+4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acbf7
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004acbfc
    LEA EAX,[ESP + 0x414]               ; 004acbff
    PUSH EAX                            ; 004acc06
    LEA EAX,[ESP + 0x414]               ; 004acc07
    PUSH EAX                            ; 004acc0e
    LEA EAX,[ESP + 0x308]               ; 004acc0f
    PUSH EAX                            ; 004acc16
    PUSH 0x5c18b8                       ; 004acc17 | = " %[^,], %d, %d\n"
    PUSH EBP                            ; 004acc1c
    XOR EBX,EBX                         ; 004acc1d
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acc1f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    LEA EAX,[ESP + 0x314]               ; 004acc24
    ADD ESP,0x14                        ; 004acc2b
    XOR EDI,EDI                         ; 004acc2e
    MOV dword ptr [ESP + 0x434],EAX     ; 004acc30
    MOV EAX,[0x01d0d210]                ; 004acc37 | DAT_01d0d210
    MOV dword ptr [ESP + 0x424],EDI     ; 004acc3c
    TEST EAX,EAX                        ; 004acc43
    JLE 0x004ace69                      ; 004acc45
        ;   XREF to: 004ace69 (CONDITIONAL_JUMP)  ; LAB_004ace69
    MOV ESI,0x1d0d214                   ; 004acc4b
    MOV ECX,dword ptr [ESP + 0x434]     ; 004acc50
        ;   Label: LAB_004acc50
    PUSH ECX                            ; 004acc57
    PUSH ESI                            ; 004acc58
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30 ; 004acc59
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; SNotesEntry * core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30(SNotesSection * this_ptr, char * name)
    ADD ESP,0x8                         ; 004acc5e
    MOV EDI,EAX                         ; 004acc61
    TEST EAX,EAX                        ; 004acc63
    JZ 0x004ace54                       ; 004acc65
        ;   XREF to: 004ace54 (CONDITIONAL_JUMP)  ; LAB_004ace54
    MOV ESI,dword ptr [ESP + 0x424]     ; 004acc6b
    TEST ESI,ESI                        ; 004acc72
    JZ 0x004acc78                       ; 004acc74
        ;   XREF to: 004acc78 (CONDITIONAL_JUMP)  ; LAB_004acc78
    MOV dword ptr [ESI],EBX             ; 004acc76
    MOV EAX,EDI                         ; 004acc78
        ;   Label: LAB_004acc78
    MOV EBX,EAX                         ; 004acc7a
        ;   Label: LAB_004acc7a
    TEST EAX,EAX                        ; 004acc7c
    JNZ 0x004accaa                      ; 004acc7e
        ;   XREF to: 004accaa (CONDITIONAL_JUMP)  ; LAB_004accaa
    MOV dword ptr [0x01d71de4],0xbe4    ; 004acc80 | DAT_01d71de4
    LEA EAX,[ESP + 0x300]               ; 004acc8a
    PUSH EAX                            ; 004acc91
    MOV EDI,0x5c18c8                    ; 004acc92 | = "..\\core\\fldnotes.cpp"
    PUSH 0x5c18dd                       ; 004acc97 | = "CFieldNotes::loadState - No such map ..."
    MOV dword ptr [0x01d71de0],EDI      ; 004acc9c | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004acca2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004acca7
    CMP dword ptr [EBX + 0x140],0x6     ; 004accaa
        ;   Label: LAB_004accaa
    JZ 0x004ace70                       ; 004accb1
        ;   XREF to: 004ace70 (CONDITIONAL_JUMP)  ; LAB_004ace70
    LEA EAX,[ESP + 0x300]               ; 004accb7
        ;   Label: LAB_004accb7
    PUSH EAX                            ; 004accbe
    MOV ESI,0x5c1907                    ; 004accbf | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xbe7                       ; 004accc4
    PUSH 0x5c191c                       ; 004accc9 | = "CFieldNotes::loadState - Entry '%s' i..."
    MOV dword ptr [0x01d71de0],ESI      ; 004accce | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004accd4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004accda
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004accdf
    IMUL EDI,dword ptr [EBX + 0x158],0x126c ; 004acce2
        ;   Label: LAB_004acce2
    ADD EDI,0x1d0e370                   ; 004accec
    MOV EAX,dword ptr [ESP + 0x410]     ; 004accf2
    CMP EAX,dword ptr [EDI + 0x94]      ; 004accf9
    JZ 0x004ace82                       ; 004accff
        ;   XREF to: 004ace82 (CONDITIONAL_JUMP)  ; LAB_004ace82
    LEA EAX,[ESP + 0x300]               ; 004acd05
        ;   Label: LAB_004acd05
    PUSH EAX                            ; 004acd0c
    MOV EBX,0x5c1956                    ; 004acd0d | = "..\\core\\fldnotes.cpp"
    MOV ESI,0xbec                       ; 004acd12
    PUSH 0x5c196b                       ; 004acd17 | = "CFieldNotes::loadState - Map '%s' has..."
    MOV dword ptr [0x01d71de0],EBX      ; 004acd1c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004acd22 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004acd28
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004acd2d
    PUSH 0x5c199e                       ; 004acd30 | = "%*[^\n]\n"
        ;   Label: LAB_004acd30
    PUSH EBP                            ; 004acd35
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acd36
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004acd3b
    XOR EAX,EAX                         ; 004acd3e
    MOV EDX,dword ptr [EDI + 0x98]      ; 004acd40
    MOV dword ptr [ESP + 0x438],EAX     ; 004acd46
    TEST EDX,EDX                        ; 004acd4d
    JLE 0x004acdd3                      ; 004acd4f
        ;   XREF to: 004acdd3 (CONDITIONAL_JUMP)  ; LAB_004acdd3
    PUSH 0x5c19a6                       ; 004acd55 | DAT_005c19a6
        ;   Label: LAB_004acd55
    PUSH EBP                            ; 004acd5a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acd5b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004acd60
    MOV EDX,dword ptr [EDI + 0x94]      ; 004acd63
    MOV EBX,dword ptr [ESP + 0x438]     ; 004acd69
    IMUL EBX,EDX                        ; 004acd70
    MOV EAX,dword ptr [EDI + 0x8c]      ; 004acd73
    XOR ESI,ESI                         ; 004acd79
    ADD EBX,EAX                         ; 004acd7b
    TEST EDX,EDX                        ; 004acd7d
    JLE 0x004acdac                      ; 004acd7f
        ;   XREF to: 004acdac (CONDITIONAL_JUMP)  ; LAB_004acdac
    LEA EAX,[ESP + 0x41c]               ; 004acd81
        ;   Label: LAB_004acd81
    PUSH EAX                            ; 004acd88
    PUSH 0x5c19a8                       ; 004acd89 | DAT_005c19a8
    PUSH EBP                            ; 004acd8e
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acd8f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004acd94
    MOV AL,byte ptr [ESP + 0x41c]       ; 004acd97
    MOV byte ptr [EBX],AL               ; 004acd9e
    INC ESI                             ; 004acda0
    MOV EAX,dword ptr [EDI + 0x94]      ; 004acda1
    INC EBX                             ; 004acda7
    CMP ESI,EAX                         ; 004acda8
    JL 0x004acd81                       ; 004acdaa
        ;   XREF to: 004acd81 (CONDITIONAL_JUMP)  ; LAB_004acd81
    PUSH 0x5c19ac                       ; 004acdac | DAT_005c19ac
        ;   Label: LAB_004acdac
    PUSH EBP                            ; 004acdb1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acdb2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004acdb7
    MOV ECX,dword ptr [ESP + 0x438]     ; 004acdba
    INC ECX                             ; 004acdc1
    MOV EBX,dword ptr [EDI + 0x98]      ; 004acdc2
    MOV dword ptr [ESP + 0x438],ECX     ; 004acdc8
    CMP ECX,EBX                         ; 004acdcf
    JL 0x004acd55                       ; 004acdd1
        ;   XREF to: 004acd55 (CONDITIONAL_JUMP)  ; LAB_004acd55
    PUSH 0x5c19ae                       ; 004acdd3 | = "%*[^\n]\n"
        ;   Label: LAB_004acdd3
    XOR ESI,ESI                         ; 004acdd8
    PUSH EBP                            ; 004acdda
    MOV dword ptr [ESP + 0x420],ESI     ; 004acddb
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acde2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004acde7
    LEA EAX,[ESP + 0x418]               ; 004acdea
    PUSH EAX                            ; 004acdf1
    PUSH 0x5c19b6                       ; 004acdf2 | DAT_005c19b6
    PUSH EBP                            ; 004acdf7
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004acdf8
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004acdfd
    CMP dword ptr [ESP + 0x418],0x0     ; 004ace00
    JLE 0x004ace31                      ; 004ace08
        ;   XREF to: 004ace31 (CONDITIONAL_JUMP)  ; LAB_004ace31
    MOV EAX,ESP                         ; 004ace0a
        ;   Label: LAB_004ace0a
    PUSH EAX                            ; 004ace0c
    PUSH 0x5c19ba                       ; 004ace0d | DAT_005c19ba
    PUSH EBP                            ; 004ace12
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004ace13
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ace18
    MOV EAX,ESP                         ; 004ace1b
    PUSH EAX                            ; 004ace1d
    PUSH EDI                            ; 004ace1e
    CALL core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0 ; 004ace1f
        ;   XREF to: 004aa1a0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0(SNotesMap * this_ptr, char * name)
    ADD ESP,0x8                         ; 004ace24
    INC ESI                             ; 004ace27
    CMP ESI,dword ptr [ESP + 0x418]     ; 004ace28
    JL 0x004ace0a                       ; 004ace2f
        ;   XREF to: 004ace0a (CONDITIONAL_JUMP)  ; LAB_004ace0a
    MOV EBX,dword ptr [ESP + 0x428]     ; 004ace31
        ;   Label: LAB_004ace31
    INC EBX                             ; 004ace38
    MOV ESI,dword ptr [ESP + 0x40c]     ; 004ace39
    MOV dword ptr [ESP + 0x428],EBX     ; 004ace40
    CMP EBX,ESI                         ; 004ace47
    JGE 0x004ac9e8                      ; 004ace49
        ;   XREF to: 004ac9e8 (CONDITIONAL_JUMP)  ; LAB_004ac9e8
    JMP 0x004acbde                      ; 004ace4f
        ;   XREF to: 004acbde (UNCONDITIONAL_JUMP)  ; LAB_004acbde
    MOV EDX,dword ptr [0x01d0d210]      ; 004ace54 | DAT_01d0d210
        ;   Label: LAB_004ace54
    INC EBX                             ; 004ace5a
    ADD ESI,0x2e4                       ; 004ace5b
    CMP EBX,EDX                         ; 004ace61
    JL 0x004acc50                       ; 004ace63
        ;   XREF to: 004acc50 (CONDITIONAL_JUMP)  ; LAB_004acc50
    XOR EAX,EAX                         ; 004ace69
        ;   Label: LAB_004ace69
    JMP 0x004acc7a                      ; 004ace6b
        ;   XREF to: 004acc7a (UNCONDITIONAL_JUMP)  ; LAB_004acc7a
    CMP dword ptr [EBX + 0x158],0x0     ; 004ace70
        ;   Label: LAB_004ace70
    JL 0x004accb7                       ; 004ace77
        ;   XREF to: 004accb7 (CONDITIONAL_JUMP)  ; LAB_004accb7
    JMP 0x004acce2                      ; 004ace7d
        ;   XREF to: 004acce2 (UNCONDITIONAL_JUMP)  ; LAB_004acce2
    MOV EAX,dword ptr [ESP + 0x414]     ; 004ace82
        ;   Label: LAB_004ace82
    CMP EAX,dword ptr [EDI + 0x98]      ; 004ace89
    JNZ 0x004acd05                      ; 004ace8f
        ;   XREF to: 004acd05 (CONDITIONAL_JUMP)  ; LAB_004acd05
    JMP 0x004acd30                      ; 004ace95
        ;   XREF to: 004acd30 (UNCONDITIONAL_JUMP)  ; LAB_004acd30
    MOV EAX,0x1d0e370                   ; 004ace9a
        ;   Label: LAB_004ace9a
    ADD EAX,EBX                         ; 004ace9f
    PUSH 0xff                           ; 004acea1
    ADD EAX,0x88                        ; 004acea6
    PUSH EAX                            ; 004aceab
    CALL engine_alphabit.cpp_FUN_0040dbb0 ; 004aceac
        ;   XREF to: 0040dbb0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dbb0()
    ADD ESP,0x8                         ; 004aceb1
    JMP 0x004acb58                      ; 004aceb4
        ;   XREF to: 004acb58 (UNCONDITIONAL_JUMP)  ; LAB_004acb58

