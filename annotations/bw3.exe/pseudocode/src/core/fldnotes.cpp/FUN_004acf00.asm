; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004acf00(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
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
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bdcb7
;
; Referenced Globals:
;   void* switchdataD_004acebc = 004acf9d
;   void* switchdataD_004aced8 = 004ad031
;   TerminatedCString s_BEGIN_FIELD_NOTES_005c19c6
;   TerminatedCString s_field_notes_file_version_005c19fd
;   undefined4 DAT_005c1a1a
;   TerminatedCString s_filename_005c1a1e
;   TerminatedCString s_s_005c1a2b
;   TerminatedCString s_core_fldnotes_cpp_005c1a31
;   TerminatedCString s_Invalid_entry_item_type_005c1a46
;   TerminatedCString s_entry_count_list_name_ty_005c1a5e
;   undefined4 DAT_005c1a82
;   TerminatedCString s_s_d_005c1a86
;   TerminatedCString s_core_fldnotes_cpp_005c1a90
;   TerminatedCString s_Invalid_entry_item_type_005c1aa5
;   TerminatedCString s_core_fldnotes_cpp_005c1abd
;   ... and 31 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acf00
        ;   Label: core_fldnotes.cpp_FUN_004acf00
    PUSH ESI                            ; 004acf01
    PUSH EDI                            ; 004acf02
    PUSH EBP                            ; 004acf03
    SUB ESP,0x2c                        ; 004acf04
    MOV EBP,dword ptr [ESP + 0x44]      ; 004acf07
    PUSH 0x5c19c6                       ; 004acf0b | = "//-- BEGIN FIELD NOTES --------------..."
    PUSH EBP                            ; 004acf10
    CALL crt_unknown.c_FUN_005a3140     ; 004acf11
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004acf16
    PUSH 0x5c19fd                       ; 004acf19 | = "// field notes file version\n"
    PUSH EBP                            ; 004acf1e
    CALL crt_unknown.c_FUN_005a3140     ; 004acf1f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004acf24
    PUSH 0x2                            ; 004acf27
    PUSH 0x5c1a1a                       ; 004acf29 | DAT_005c1a1a
    PUSH EBP                            ; 004acf2e
    CALL crt_unknown.c_FUN_005a3140     ; 004acf2f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004acf34
    PUSH 0x5c1a1e                       ; 004acf37 | = "// filename\n"
    PUSH EBP                            ; 004acf3c
    CALL crt_unknown.c_FUN_005a3140     ; 004acf3d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004acf42
    MOV EDX,dword ptr [ESP + 0x40]      ; 004acf45
    PUSH EDX                            ; 004acf49
    PUSH 0x5c1a2b                       ; 004acf4a | = "\"%s\"\n"
    PUSH EBP                            ; 004acf4f
    XOR ESI,ESI                         ; 004acf50
    CALL crt_unknown.c_FUN_005a3140     ; 004acf52
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004acf57
    MOV EBX,dword ptr [0x01d0d210]      ; 004acf5a | DAT_01d0d210
    MOV dword ptr [ESP],ESI             ; 004acf60
    TEST EBX,EBX                        ; 004acf63
    JLE 0x004acfce                      ; 004acf65
        ;   XREF to: 004acfce (CONDITIONAL_JUMP)  ; LAB_004acfce
    MOV dword ptr [ESP + 0x10],ESI      ; 004acf67
    MOV EAX,dword ptr [ESP + 0x10]      ; 004acf6b
        ;   Label: LAB_004acf6b
    XOR EBX,EBX                         ; 004acf6f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004acf71
    MOV EDX,dword ptr [EAX + 0x1d0d364] ; 004acf75
    MOV EDI,EAX                         ; 004acf7b
    TEST EDX,EDX                        ; 004acf7d
    JLE 0x004acfaf                      ; 004acf7f
        ;   XREF to: 004acfaf (CONDITIONAL_JUMP)  ; LAB_004acfaf
    MOV EAX,dword ptr [EDI + 0x1d0d368] ; 004acf81
        ;   Label: LAB_004acf81
    MOV EAX,dword ptr [EAX + 0x140]     ; 004acf87
    CMP EAX,0x6                         ; 004acf8d
    JA 0x004ad153                       ; 004acf90
        ;   XREF to: 004ad153 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4acebc]  ; 004acf96 | caseD_5 | caseD_6 | switchdataD_004acebc
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004acf9d
        ;   Label: caseD_0
    INC EBX                             ; 004acfa1
    MOV ECX,dword ptr [EAX + 0x1d0d364] ; 004acfa2
    ADD EDI,0x4                         ; 004acfa8
    CMP EBX,ECX                         ; 004acfab
    JL 0x004acf81                       ; 004acfad
        ;   XREF to: 004acf81 (CONDITIONAL_JUMP)  ; LAB_004acf81
    MOV EDI,dword ptr [ESP + 0x10]      ; 004acfaf
        ;   Label: LAB_004acfaf
    MOV EAX,dword ptr [ESP]             ; 004acfb3
    MOV EDX,dword ptr [0x01d0d210]      ; 004acfb6 | DAT_01d0d210
    ADD EDI,0x2e4                       ; 004acfbc
    INC EAX                             ; 004acfc2
    MOV dword ptr [ESP + 0x10],EDI      ; 004acfc3
    MOV dword ptr [ESP],EAX             ; 004acfc7
    CMP EAX,EDX                         ; 004acfca
    JL 0x004acf6b                       ; 004acfcc
        ;   XREF to: 004acf6b (CONDITIONAL_JUMP)  ; LAB_004acf6b
    PUSH 0x5c1a5e                       ; 004acfce | = "// entry count, list(\"name\", type)\n"
        ;   Label: LAB_004acfce
    PUSH EBP                            ; 004acfd3
    CALL crt_unknown.c_FUN_005a3140     ; 004acfd4
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004acfd9
    PUSH ESI                            ; 004acfdc
    PUSH 0x5c1a82                       ; 004acfdd | DAT_005c1a82
    PUSH EBP                            ; 004acfe2
    CALL crt_unknown.c_FUN_005a3140     ; 004acfe3
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004acfe8
    XOR ECX,ECX                         ; 004acfeb
    MOV EBX,dword ptr [0x01d0d210]      ; 004acfed | DAT_01d0d210
    MOV dword ptr [ESP + 0xc],ECX       ; 004acff3
    TEST EBX,EBX                        ; 004acff7
    JLE 0x004ad056                      ; 004acff9
        ;   XREF to: 004ad056 (CONDITIONAL_JUMP)  ; LAB_004ad056
    IMUL EAX,dword ptr [ESP + 0xc],0x2e4 ; 004acffb
        ;   Label: LAB_004acffb
    XOR EDI,EDI                         ; 004ad003
    MOV dword ptr [ESP + 0x20],EAX      ; 004ad005
    MOV EDX,dword ptr [EAX + 0x1d0d364] ; 004ad009
    MOV EBX,EAX                         ; 004ad00f
    TEST EDX,EDX                        ; 004ad011
    JLE 0x004ad043                      ; 004ad013
        ;   XREF to: 004ad043 (CONDITIONAL_JUMP)  ; LAB_004ad043
    MOV EAX,dword ptr [EBX + 0x1d0d368] ; 004ad015
        ;   Label: LAB_004ad015
    MOV EAX,dword ptr [EAX + 0x140]     ; 004ad01b
    CMP EAX,0x6                         ; 004ad021
    JA 0x004ad19c                       ; 004ad024
        ;   XREF to: 004ad19c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4aced8]  ; 004ad02a | caseD_5 | caseD_6 | switchdataD_004aced8
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ad031
        ;   Label: caseD_0
    INC EDI                             ; 004ad035
    MOV ECX,dword ptr [EAX + 0x1d0d364] ; 004ad036
    ADD EBX,0x4                         ; 004ad03c
    CMP EDI,ECX                         ; 004ad03f
    JL 0x004ad015                       ; 004ad041
        ;   XREF to: 004ad015 (CONDITIONAL_JUMP)  ; LAB_004ad015
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ad043
        ;   Label: LAB_004ad043
    INC ECX                             ; 004ad047
    MOV EBX,dword ptr [0x01d0d210]      ; 004ad048 | DAT_01d0d210
    MOV dword ptr [ESP + 0xc],ECX       ; 004ad04e
    CMP ECX,EBX                         ; 004ad052
    JL 0x004acffb                       ; 004ad054
        ;   XREF to: 004acffb (CONDITIONAL_JUMP)  ; LAB_004acffb
    TEST ESI,ESI                        ; 004ad056
        ;   Label: LAB_004ad056
    JZ 0x004ad07d                       ; 004ad058
        ;   XREF to: 004ad07d (CONDITIONAL_JUMP)  ; LAB_004ad07d
    MOV ESI,0x5c1abd                    ; 004ad05a | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xc54                       ; 004ad05f
    PUSH 0x5c1ad2                       ; 004ad064 | = "Hell froze"
    MOV dword ptr [0x01d71de0],ESI      ; 004ad069 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004ad06f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ad075
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ad07a
    XOR EAX,EAX                         ; 004ad07d
        ;   Label: LAB_004ad07d
    MOV EDX,dword ptr [0x01d0e36c]      ; 004ad07f | DAT_01d0e36c
    MOV dword ptr [ESP + 0x14],EAX      ; 004ad085
    TEST EDX,EDX                        ; 004ad089
    JLE 0x004ad0bf                      ; 004ad08b
        ;   XREF to: 004ad0bf (CONDITIONAL_JUMP)  ; LAB_004ad0bf
    MOV ESI,EDX                         ; 004ad08d
    SHL ESI,0x5                         ; 004ad08f
    ADD ESI,EDX                         ; 004ad092
    SHL ESI,0x2                         ; 004ad094
    SUB ESI,EDX                         ; 004ad097
    SHL ESI,0x2                         ; 004ad099
    MOV EBX,ESI                         ; 004ad09c
    SHL ESI,0x3                         ; 004ad09e
    ADD ESI,EBX                         ; 004ad0a1
    MOV EBX,dword ptr [EAX + 0x1d0e370] ; 004ad0a3 | SNotesMap_ARRAY_01d0e370[1].field0_0x0
        ;   Label: LAB_004ad0a3
    CMP dword ptr [EBX + 0x140],0x6     ; 004ad0a9
    JNZ 0x004ad0b6                      ; 004ad0b0
        ;   XREF to: 004ad0b6 (CONDITIONAL_JUMP)  ; LAB_004ad0b6
    INC dword ptr [ESP + 0x14]          ; 004ad0b2
    ADD EAX,0x126c                      ; 004ad0b6
        ;   Label: LAB_004ad0b6
    CMP EAX,ESI                         ; 004ad0bb
    JL 0x004ad0a3                       ; 004ad0bd
        ;   XREF to: 004ad0a3 (CONDITIONAL_JUMP)  ; LAB_004ad0a3
    PUSH 0x5c1add                       ; 004ad0bf | = "// map coverage count\n"
        ;   Label: LAB_004ad0bf
    PUSH EBP                            ; 004ad0c4
    CALL crt_unknown.c_FUN_005a3140     ; 004ad0c5
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004ad0ca
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ad0cd
    PUSH ECX                            ; 004ad0d1
    PUSH 0x5c1af4                       ; 004ad0d2 | DAT_005c1af4
    PUSH EBP                            ; 004ad0d7
    XOR EBX,EBX                         ; 004ad0d8
    CALL crt_unknown.c_FUN_005a3140     ; 004ad0da
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004ad0df
    MOV ESI,dword ptr [0x01d0e36c]      ; 004ad0e2 | DAT_01d0e36c
    MOV dword ptr [ESP + 0x4],EBX       ; 004ad0e8
    TEST ESI,ESI                        ; 004ad0ec
    JLE 0x004ad12c                      ; 004ad0ee
        ;   XREF to: 004ad12c (CONDITIONAL_JUMP)  ; LAB_004ad12c
    MOV dword ptr [ESP + 0x8],0x1d0e370 ; 004ad0f0
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ad0f8
        ;   Label: LAB_004ad0f8
    MOV EBX,dword ptr [EDI]             ; 004ad0fc | SNotesMap_ARRAY_01d0e370 | SNotesMap_ARRAY_01d0e370[1].field0_0x0
    CMP dword ptr [EBX + 0x140],0x6     ; 004ad0fe
    JZ 0x004ad1c3                       ; 004ad105
        ;   XREF to: 004ad1c3 (CONDITIONAL_JUMP)  ; LAB_004ad1c3
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ad10b
        ;   Label: LAB_004ad10b
    MOV ESI,dword ptr [ESP + 0x4]       ; 004ad10f
    MOV EDI,dword ptr [0x01d0e36c]      ; 004ad113 | DAT_01d0e36c
    ADD EBX,0x126c                      ; 004ad119
    INC ESI                             ; 004ad11f
    MOV dword ptr [ESP + 0x8],EBX       ; 004ad120
    MOV dword ptr [ESP + 0x4],ESI       ; 004ad124
    CMP ESI,EDI                         ; 004ad128
    JL 0x004ad0f8                       ; 004ad12a
        ;   XREF to: 004ad0f8 (CONDITIONAL_JUMP)  ; LAB_004ad0f8
    CMP dword ptr [ESP + 0x14],0x0      ; 004ad12c
        ;   Label: LAB_004ad12c
    JNZ 0x004ad388                      ; 004ad131
        ;   XREF to: 004ad388 (CONDITIONAL_JUMP)  ; LAB_004ad388
    PUSH 0x5c1bd2                       ; 004ad137 | = "//-- END FIELD NOTES ----------------..."
        ;   Label: LAB_004ad137
    PUSH EBP                            ; 004ad13c
    CALL crt_unknown.c_FUN_005a3140     ; 004ad13d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004ad142
    ADD ESP,0x2c                        ; 004ad145
    POP EBP                             ; 004ad148
    POP EDI                             ; 004ad149
    POP ESI                             ; 004ad14a
    POP EBX                             ; 004ad14b
    RET                                 ; 004ad14c
    INC ESI                             ; 004ad14d
        ;   Label: caseD_1
    JMP 0x004acf9d                      ; 004ad14e
        ;   XREF to: 004acf9d (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,0x5c1a31                    ; 004ad153 | = "..\\core\\fldnotes.cpp"
        ;   Label: default
    MOV EDX,0xc38                       ; 004ad158
    PUSH 0x5c1a46                       ; 004ad15d | = "Invalid entry item type"
    MOV [0x01d71de0],EAX                ; 004ad162 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004ad167 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ad16d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ad172
    JMP 0x004acf9d                      ; 004ad175
        ;   XREF to: 004acf9d (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [EBX + 0x1d0d368] ; 004ad17a
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x140]     ; 004ad180
    PUSH ECX                            ; 004ad186
    PUSH EAX                            ; 004ad187
    PUSH 0x5c1a86                       ; 004ad188 | = "\"%s\", %d\n"
    PUSH EBP                            ; 004ad18d
    DEC ESI                             ; 004ad18e
    CALL crt_unknown.c_FUN_005a3140     ; 004ad18f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 004ad194
    JMP 0x004ad031                      ; 004ad197
        ;   XREF to: 004ad031 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,0x5c1a90                    ; 004ad19c | = "..\\core\\fldnotes.cpp"
        ;   Label: default
    MOV EDX,0xc50                       ; 004ad1a1
    PUSH 0x5c1aa5                       ; 004ad1a6 | = "Invalid entry item type"
    MOV [0x01d71de0],EAX                ; 004ad1ab | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004ad1b0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ad1b6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ad1bb
    JMP 0x004ad031                      ; 004ad1be
        ;   XREF to: 004ad031 (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [ESP + 0x14],0x0      ; 004ad1c3
        ;   Label: LAB_004ad1c3
    JLE 0x004ad360                      ; 004ad1c8
        ;   XREF to: 004ad360 (CONDITIONAL_JUMP)  ; LAB_004ad360
    PUSH 0x5c1b18                       ; 004ad1ce | = "// map entry name, xSize, ySize\n"
        ;   Label: LAB_004ad1ce
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ad1d3
    PUSH EBP                            ; 004ad1d7
    DEC ESI                             ; 004ad1d8
    CALL crt_unknown.c_FUN_005a3140     ; 004ad1d9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV dword ptr [ESP + 0x1c],ESI      ; 004ad1de
    ADD ESP,0x8                         ; 004ad1e2
    MOV EAX,dword ptr [EDI + 0x98]      ; 004ad1e5 | SNotesMap_ARRAY_01d0e370[1].field152_0x98
    PUSH EAX                            ; 004ad1eb
    MOV EDX,dword ptr [EDI + 0x94]      ; 004ad1ec | SNotesMap_ARRAY_01d0e370[1].field148_0x94
    PUSH EDX                            ; 004ad1f2
    PUSH EBX                            ; 004ad1f3
    PUSH 0x5c1b39                       ; 004ad1f4 | = "%s, %d, %d\n"
    PUSH EBP                            ; 004ad1f9
    CALL crt_unknown.c_FUN_005a3140     ; 004ad1fa
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 004ad1ff
    PUSH 0x5c1b45                       ; 004ad202 | = "\t// map coverage data\n"
    PUSH EBP                            ; 004ad207
    CALL crt_unknown.c_FUN_005a3140     ; 004ad208
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004ad20d
    XOR ECX,ECX                         ; 004ad210
    MOV EBX,dword ptr [EDI + 0x98]      ; 004ad212 | SNotesMap_ARRAY_01d0e370[1].field152_0x98
    MOV dword ptr [ESP + 0x28],ECX      ; 004ad218
    TEST EBX,EBX                        ; 004ad21c
    JLE 0x004ad28f                      ; 004ad21e
        ;   XREF to: 004ad28f (CONDITIONAL_JUMP)  ; LAB_004ad28f
    PUSH 0x5c1b5c                       ; 004ad220 | DAT_005c1b5c
        ;   Label: LAB_004ad220
    PUSH EBP                            ; 004ad225
    CALL crt_unknown.c_FUN_005a3140     ; 004ad226
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004ad22b
    MOV EBX,dword ptr [EDI + 0x94]      ; 004ad22e | SNotesMap_ARRAY_01d0e370[1].field148_0x94
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ad234
    IMUL EAX,EBX                        ; 004ad238
    MOV EBX,dword ptr [EDI + 0x8c]      ; 004ad23b | SNotesMap_ARRAY_01d0e370[1].field140_0x8c
    ADD EBX,EAX                         ; 004ad241
    MOV EAX,dword ptr [EDI + 0x94]      ; 004ad243 | SNotesMap_ARRAY_01d0e370[1].field148_0x94
    XOR ESI,ESI                         ; 004ad249
    TEST EAX,EAX                        ; 004ad24b
    JLE 0x004ad26e                      ; 004ad24d
        ;   XREF to: 004ad26e (CONDITIONAL_JUMP)  ; LAB_004ad26e
    XOR EAX,EAX                         ; 004ad24f
        ;   Label: LAB_004ad24f
    MOV AL,byte ptr [EBX]               ; 004ad251
    PUSH EAX                            ; 004ad253
    PUSH 0x5c1b5f                       ; 004ad254 | DAT_005c1b5f
    PUSH EBP                            ; 004ad259
    INC EBX                             ; 004ad25a
    INC ESI                             ; 004ad25b
    CALL crt_unknown.c_FUN_005a3140     ; 004ad25c
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EDI + 0x94]      ; 004ad261 | SNotesMap_ARRAY_01d0e370[1].field148_0x94
    ADD ESP,0xc                         ; 004ad267
    CMP ESI,ECX                         ; 004ad26a
    JL 0x004ad24f                       ; 004ad26c
        ;   XREF to: 004ad24f (CONDITIONAL_JUMP)  ; LAB_004ad24f
    PUSH 0x5c1b64                       ; 004ad26e | DAT_005c1b64
        ;   Label: LAB_004ad26e
    PUSH EBP                            ; 004ad273
    CALL crt_unknown.c_FUN_005a3140     ; 004ad274
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004ad279
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ad27c
    INC ESI                             ; 004ad280
    MOV EDX,dword ptr [EDI + 0x98]      ; 004ad281 | SNotesMap_ARRAY_01d0e370[1].field152_0x98
    MOV dword ptr [ESP + 0x28],ESI      ; 004ad287
    CMP ESI,EDX                         ; 004ad28b
    JL 0x004ad220                       ; 004ad28d
        ;   XREF to: 004ad220 (CONDITIONAL_JUMP)  ; LAB_004ad220
    MOV ECX,dword ptr [EDI + 0x5f0]     ; 004ad28f | SNotesMap_ARRAY_01d0e370[1].field1520_0x5f0
        ;   Label: LAB_004ad28f
    XOR EBX,EBX                         ; 004ad295
    XOR ESI,ESI                         ; 004ad297
    TEST ECX,ECX                        ; 004ad299
    JLE 0x004ad2b9                      ; 004ad29b
        ;   XREF to: 004ad2b9 (CONDITIONAL_JUMP)  ; LAB_004ad2b9
    MOV EAX,EDI                         ; 004ad29d
    CMP dword ptr [EAX + 0x6c4],0x0     ; 004ad29f | SNotesMap_ARRAY_01d0e370[1].field1732_0x6c4 | SNotesMap_ARRAY_01d0e370[1].field1944_0x798
        ;   Label: LAB_004ad29f
    JZ 0x004ad2a9                       ; 004ad2a6
        ;   XREF to: 004ad2a9 (CONDITIONAL_JUMP)  ; LAB_004ad2a9
    INC ESI                             ; 004ad2a8
    INC EBX                             ; 004ad2a9
        ;   Label: LAB_004ad2a9
    MOV EDX,dword ptr [EDI + 0x5f0]     ; 004ad2aa | SNotesMap_ARRAY_01d0e370[1].field1520_0x5f0
    ADD EAX,0xd4                        ; 004ad2b0
    CMP EBX,EDX                         ; 004ad2b5
    JL 0x004ad29f                       ; 004ad2b7
        ;   XREF to: 004ad29f (CONDITIONAL_JUMP)  ; LAB_004ad29f
    PUSH 0x5c1b66                       ; 004ad2b9 | = "\t// map annotation count, list\n"
        ;   Label: LAB_004ad2b9
    PUSH EBP                            ; 004ad2be
    CALL crt_unknown.c_FUN_005a3140     ; 004ad2bf
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004ad2c4
    PUSH ESI                            ; 004ad2c7
    PUSH 0x5c1b86                       ; 004ad2c8 | DAT_005c1b86
    PUSH EBP                            ; 004ad2cd
    XOR EBX,EBX                         ; 004ad2ce
    CALL crt_unknown.c_FUN_005a3140     ; 004ad2d0
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EDI + 0x5f0]     ; 004ad2d5 | SNotesMap_ARRAY_01d0e370[1].field1520_0x5f0
    ADD ESP,0xc                         ; 004ad2db
    TEST ECX,ECX                        ; 004ad2de
    JLE 0x004ad330                      ; 004ad2e0
        ;   XREF to: 004ad330 (CONDITIONAL_JUMP)  ; LAB_004ad330
    LEA EAX,[EDI + 0x5f4]               ; 004ad2e2
    MOV dword ptr [ESP + 0x24],EDI      ; 004ad2e8 | SNotesMap_ARRAY_01d0e370[1].field0_0x0
    MOV dword ptr [ESP + 0x18],EAX      ; 004ad2ec
    IMUL EAX,EBX,0xd4                   ; 004ad2f0
        ;   Label: LAB_004ad2f0
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ad2f6
    CMP dword ptr [EDX + 0x6c4],0x0     ; 004ad2fa | SNotesMap_ARRAY_01d0e370[1].field1732_0x6c4 | SNotesMap_ARRAY_01d0e370[1].field1944_0x798
    JZ 0x004ad317                       ; 004ad301
        ;   XREF to: 004ad317 (CONDITIONAL_JUMP)  ; LAB_004ad317
    ADD EAX,dword ptr [ESP + 0x18]      ; 004ad303
    PUSH EAX                            ; 004ad307
    PUSH 0x5c1b8b                       ; 004ad308 | = "\t\t%s\n"
    PUSH EBP                            ; 004ad30d
    DEC ESI                             ; 004ad30e
    CALL crt_unknown.c_FUN_005a3140     ; 004ad30f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004ad314
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ad317
        ;   Label: LAB_004ad317
    INC EBX                             ; 004ad31b
    ADD ECX,0xd4                        ; 004ad31c
    MOV EAX,dword ptr [EDI + 0x5f0]     ; 004ad322 | SNotesMap_ARRAY_01d0e370[1].field1520_0x5f0
    MOV dword ptr [ESP + 0x24],ECX      ; 004ad328
    CMP EBX,EAX                         ; 004ad32c
    JL 0x004ad2f0                       ; 004ad32e
        ;   XREF to: 004ad2f0 (CONDITIONAL_JUMP)  ; LAB_004ad2f0
    TEST ESI,ESI                        ; 004ad330
        ;   Label: LAB_004ad330
    JZ 0x004ad10b                       ; 004ad332
        ;   XREF to: 004ad10b (CONDITIONAL_JUMP)  ; LAB_004ad10b
    MOV EDX,0x5c1b91                    ; 004ad338 | = "..\\core\\fldnotes.cpp"
    MOV ECX,0xc85                       ; 004ad33d
    PUSH 0x5c1ba6                       ; 004ad342 | = "Hell froze."
    MOV dword ptr [0x01d71de0],EDX      ; 004ad347 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ad34d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ad353
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ad358
    JMP 0x004ad10b                      ; 004ad35b
        ;   XREF to: 004ad10b (UNCONDITIONAL_JUMP)  ; LAB_004ad10b
    MOV EDX,0x5c1af8                    ; 004ad360 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004ad360
    MOV ECX,0xc67                       ; 004ad365
    PUSH 0x5c1b0d                       ; 004ad36a | = "Hell froze"
    MOV dword ptr [0x01d71de0],EDX      ; 004ad36f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ad375 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ad37b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ad380
    JMP 0x004ad1ce                      ; 004ad383
        ;   XREF to: 004ad1ce (UNCONDITIONAL_JUMP)  ; LAB_004ad1ce
    MOV EDX,0x5c1bb2                    ; 004ad388 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004ad388
    MOV ECX,0xc89                       ; 004ad38d
    PUSH 0x5c1bc7                       ; 004ad392 | = "Hell froze"
    MOV dword ptr [0x01d71de0],EDX      ; 004ad397 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ad39d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ad3a3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ad3a8
    JMP 0x004ad137                      ; 004ad3ab
        ;   XREF to: 004ad137 (UNCONDITIONAL_JUMP)  ; LAB_004ad137

