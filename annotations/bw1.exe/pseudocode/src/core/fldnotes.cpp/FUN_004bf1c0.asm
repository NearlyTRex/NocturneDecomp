; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bf1c0(undefined4 param_1,undefined4 param_2)
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
;   core_game.cpp_FUN_004d6420 at 004d66a0
;
; Referenced Globals:
;   void* switchdataD_004bf17c = 004bf25d
;   void* switchdataD_004bf198 = 004bf2f1
;   TerminatedCString s_BEGIN_FIELD_NOTES_005e04d7
;   TerminatedCString s_field_notes_file_version_005e050e
;   undefined4 DAT_005e052b
;   TerminatedCString s_filename_005e052f
;   TerminatedCString s_s_005e053c
;   TerminatedCString s_core_fldnotes_cpp_005e0542
;   TerminatedCString s_Invalid_entry_item_type_005e0557
;   TerminatedCString s_entry_count_list_name_ty_005e056f
;   undefined4 DAT_005e0593
;   TerminatedCString s_s_d_005e0597
;   TerminatedCString s_core_fldnotes_cpp_005e05a1
;   TerminatedCString s_Invalid_entry_item_type_005e05b6
;   TerminatedCString s_core_fldnotes_cpp_005e05ce
;   ... and 31 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf1c0
        ;   Label: core_fldnotes.cpp_FUN_004bf1c0
    PUSH ESI                            ; 004bf1c1
    PUSH EDI                            ; 004bf1c2
    PUSH EBP                            ; 004bf1c3
    SUB ESP,0x2c                        ; 004bf1c4
    MOV EBP,dword ptr [ESP + 0x44]      ; 004bf1c7
    PUSH 0x5e04d7                       ; 004bf1cb | = "//-- BEGIN FIELD NOTES --------------..."
    PUSH EBP                            ; 004bf1d0
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf1d1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf1d6
    PUSH 0x5e050e                       ; 004bf1d9 | = "// field notes file version\n"
    PUSH EBP                            ; 004bf1de
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf1df
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf1e4
    PUSH 0x2                            ; 004bf1e7
    PUSH 0x5e052b                       ; 004bf1e9 | DAT_005e052b
    PUSH EBP                            ; 004bf1ee
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf1ef
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004bf1f4
    PUSH 0x5e052f                       ; 004bf1f7 | = "// filename\n"
    PUSH EBP                            ; 004bf1fc
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf1fd
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf202
    MOV EDX,dword ptr [ESP + 0x40]      ; 004bf205
    PUSH EDX                            ; 004bf209
    PUSH 0x5e053c                       ; 004bf20a | = "\"%s\"\n"
    PUSH EBP                            ; 004bf20f
    XOR ESI,ESI                         ; 004bf210
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf212
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004bf217
    MOV EBX,dword ptr [0x01cc4470]      ; 004bf21a | DAT_01cc4470
    MOV dword ptr [ESP],ESI             ; 004bf220
    TEST EBX,EBX                        ; 004bf223
    JLE 0x004bf28e                      ; 004bf225
        ;   XREF to: 004bf28e (CONDITIONAL_JUMP)  ; LAB_004bf28e
    MOV dword ptr [ESP + 0x10],ESI      ; 004bf227
    MOV EAX,dword ptr [ESP + 0x10]      ; 004bf22b
        ;   Label: LAB_004bf22b
    XOR EBX,EBX                         ; 004bf22f
    MOV dword ptr [ESP + 0x18],EAX      ; 004bf231
    MOV EDX,dword ptr [EAX + 0x1cc45c4] ; 004bf235
    MOV EDI,EAX                         ; 004bf23b
    TEST EDX,EDX                        ; 004bf23d
    JLE 0x004bf26f                      ; 004bf23f
        ;   XREF to: 004bf26f (CONDITIONAL_JUMP)  ; LAB_004bf26f
    MOV EAX,dword ptr [EDI + 0x1cc45c8] ; 004bf241
        ;   Label: LAB_004bf241
    MOV EAX,dword ptr [EAX + 0x140]     ; 004bf247
    CMP EAX,0x6                         ; 004bf24d
    JA 0x004bf403                       ; 004bf250
        ;   XREF to: 004bf403 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4bf17c]  ; 004bf256 | caseD_5 | caseD_6 | switchdataD_004bf17c
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bf25d
        ;   Label: caseD_0
    INC EBX                             ; 004bf261
    MOV ECX,dword ptr [EAX + 0x1cc45c4] ; 004bf262
    ADD EDI,0x4                         ; 004bf268
    CMP EBX,ECX                         ; 004bf26b
    JL 0x004bf241                       ; 004bf26d
        ;   XREF to: 004bf241 (CONDITIONAL_JUMP)  ; LAB_004bf241
    MOV EDI,dword ptr [ESP + 0x10]      ; 004bf26f
        ;   Label: LAB_004bf26f
    MOV EAX,dword ptr [ESP]             ; 004bf273
    MOV EDX,dword ptr [0x01cc4470]      ; 004bf276 | DAT_01cc4470
    ADD EDI,0x2e4                       ; 004bf27c
    INC EAX                             ; 004bf282
    MOV dword ptr [ESP + 0x10],EDI      ; 004bf283
    MOV dword ptr [ESP],EAX             ; 004bf287
    CMP EAX,EDX                         ; 004bf28a
    JL 0x004bf22b                       ; 004bf28c
        ;   XREF to: 004bf22b (CONDITIONAL_JUMP)  ; LAB_004bf22b
    PUSH 0x5e056f                       ; 004bf28e | = "// entry count, list(\"name\", type)\n"
        ;   Label: LAB_004bf28e
    PUSH EBP                            ; 004bf293
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf294
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf299
    PUSH ESI                            ; 004bf29c
    PUSH 0x5e0593                       ; 004bf29d | DAT_005e0593
    PUSH EBP                            ; 004bf2a2
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf2a3
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004bf2a8
    XOR ECX,ECX                         ; 004bf2ab
    MOV EBX,dword ptr [0x01cc4470]      ; 004bf2ad | DAT_01cc4470
    MOV dword ptr [ESP + 0xc],ECX       ; 004bf2b3
    TEST EBX,EBX                        ; 004bf2b7
    JLE 0x004bf316                      ; 004bf2b9
        ;   XREF to: 004bf316 (CONDITIONAL_JUMP)  ; LAB_004bf316
    IMUL EAX,dword ptr [ESP + 0xc],0x2e4 ; 004bf2bb
        ;   Label: LAB_004bf2bb
    XOR EDI,EDI                         ; 004bf2c3
    MOV dword ptr [ESP + 0x20],EAX      ; 004bf2c5
    MOV EDX,dword ptr [EAX + 0x1cc45c4] ; 004bf2c9
    MOV EBX,EAX                         ; 004bf2cf
    TEST EDX,EDX                        ; 004bf2d1
    JLE 0x004bf303                      ; 004bf2d3
        ;   XREF to: 004bf303 (CONDITIONAL_JUMP)  ; LAB_004bf303
    MOV EAX,dword ptr [EBX + 0x1cc45c8] ; 004bf2d5
        ;   Label: LAB_004bf2d5
    MOV EAX,dword ptr [EAX + 0x140]     ; 004bf2db
    CMP EAX,0x6                         ; 004bf2e1
    JA 0x004bf44c                       ; 004bf2e4
        ;   XREF to: 004bf44c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4bf198]  ; 004bf2ea | caseD_5 | caseD_6 | switchdataD_004bf198
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bf2f1
        ;   Label: caseD_0
    INC EDI                             ; 004bf2f5
    MOV EDX,dword ptr [EAX + 0x1cc45c4] ; 004bf2f6
    ADD EBX,0x4                         ; 004bf2fc
    CMP EDI,EDX                         ; 004bf2ff
    JL 0x004bf2d5                       ; 004bf301
        ;   XREF to: 004bf2d5 (CONDITIONAL_JUMP)  ; LAB_004bf2d5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004bf303
        ;   Label: LAB_004bf303
    INC ECX                             ; 004bf307
    MOV EBX,dword ptr [0x01cc4470]      ; 004bf308 | DAT_01cc4470
    MOV dword ptr [ESP + 0xc],ECX       ; 004bf30e
    CMP ECX,EBX                         ; 004bf312
    JL 0x004bf2bb                       ; 004bf314
        ;   XREF to: 004bf2bb (CONDITIONAL_JUMP)  ; LAB_004bf2bb
    TEST ESI,ESI                        ; 004bf316
        ;   Label: LAB_004bf316
    JZ 0x004bf33d                       ; 004bf318
        ;   XREF to: 004bf33d (CONDITIONAL_JUMP)  ; LAB_004bf33d
    MOV ESI,0x5e05ce                    ; 004bf31a | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xc3c                       ; 004bf31f
    PUSH 0x5e05e3                       ; 004bf324 | = "Hell froze"
    MOV dword ptr [0x01d1d400],ESI      ; 004bf329 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004bf32f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bf335
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bf33a
    XOR EAX,EAX                         ; 004bf33d
        ;   Label: LAB_004bf33d
    MOV EDX,dword ptr [0x01cc55cc]      ; 004bf33f | DAT_01cc55cc
    MOV dword ptr [ESP + 0x14],EAX      ; 004bf345
    TEST EDX,EDX                        ; 004bf349
    JLE 0x004bf36f                      ; 004bf34b
        ;   XREF to: 004bf36f (CONDITIONAL_JUMP)  ; LAB_004bf36f
    IMUL ESI,EDX,0x970                  ; 004bf34d
    MOV EBX,dword ptr [EAX + 0x1cc55d0] ; 004bf353 | SNotesMap_ARRAY_01cc55d0[1].entry
        ;   Label: LAB_004bf353
    CMP dword ptr [EBX + 0x140],0x6     ; 004bf359
    JNZ 0x004bf366                      ; 004bf360
        ;   XREF to: 004bf366 (CONDITIONAL_JUMP)  ; LAB_004bf366
    INC dword ptr [ESP + 0x14]          ; 004bf362
    ADD EAX,0x970                       ; 004bf366
        ;   Label: LAB_004bf366
    CMP EAX,ESI                         ; 004bf36b
    JL 0x004bf353                       ; 004bf36d
        ;   XREF to: 004bf353 (CONDITIONAL_JUMP)  ; LAB_004bf353
    PUSH 0x5e05ee                       ; 004bf36f | = "// map coverage count\n"
        ;   Label: LAB_004bf36f
    PUSH EBP                            ; 004bf374
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf375
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf37a
    MOV ECX,dword ptr [ESP + 0x14]      ; 004bf37d
    PUSH ECX                            ; 004bf381
    PUSH 0x5e0605                       ; 004bf382 | DAT_005e0605
    PUSH EBP                            ; 004bf387
    XOR EBX,EBX                         ; 004bf388
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf38a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004bf38f
    MOV ESI,dword ptr [0x01cc55cc]      ; 004bf392 | DAT_01cc55cc
    MOV dword ptr [ESP + 0x4],EBX       ; 004bf398
    TEST ESI,ESI                        ; 004bf39c
    JLE 0x004bf3dc                      ; 004bf39e
        ;   XREF to: 004bf3dc (CONDITIONAL_JUMP)  ; LAB_004bf3dc
    MOV dword ptr [ESP + 0x8],0x1cc55d0 ; 004bf3a0
    MOV EDI,dword ptr [ESP + 0x8]       ; 004bf3a8
        ;   Label: LAB_004bf3a8
    MOV EBX,dword ptr [EDI]             ; 004bf3ac | SNotesMap_ARRAY_01cc55d0 | SNotesMap_ARRAY_01cc55d0[1].entry
    CMP dword ptr [EBX + 0x140],0x6     ; 004bf3ae
    JZ 0x004bf473                       ; 004bf3b5
        ;   XREF to: 004bf473 (CONDITIONAL_JUMP)  ; LAB_004bf473
    MOV ECX,dword ptr [ESP + 0x8]       ; 004bf3bb
        ;   Label: LAB_004bf3bb
    MOV EBX,dword ptr [ESP + 0x4]       ; 004bf3bf
    MOV ESI,dword ptr [0x01cc55cc]      ; 004bf3c3 | DAT_01cc55cc
    ADD ECX,0x970                       ; 004bf3c9
    INC EBX                             ; 004bf3cf
    MOV dword ptr [ESP + 0x8],ECX       ; 004bf3d0
    MOV dword ptr [ESP + 0x4],EBX       ; 004bf3d4
    CMP EBX,ESI                         ; 004bf3d8
    JL 0x004bf3a8                       ; 004bf3da
        ;   XREF to: 004bf3a8 (CONDITIONAL_JUMP)  ; LAB_004bf3a8
    CMP dword ptr [ESP + 0x14],0x0      ; 004bf3dc
        ;   Label: LAB_004bf3dc
    JNZ 0x004bf638                      ; 004bf3e1
        ;   XREF to: 004bf638 (CONDITIONAL_JUMP)  ; LAB_004bf638
    PUSH 0x5e06e3                       ; 004bf3e7 | = "//-- END FIELD NOTES ----------------..."
        ;   Label: LAB_004bf3e7
    PUSH EBP                            ; 004bf3ec
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf3ed
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf3f2
    ADD ESP,0x2c                        ; 004bf3f5
    POP EBP                             ; 004bf3f8
    POP EDI                             ; 004bf3f9
    POP ESI                             ; 004bf3fa
    POP EBX                             ; 004bf3fb
    RET                                 ; 004bf3fc
    INC ESI                             ; 004bf3fd
        ;   Label: caseD_1
    JMP 0x004bf25d                      ; 004bf3fe
        ;   XREF to: 004bf25d (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,0x5e0542                    ; 004bf403 | = "..\\core\\fldnotes.cpp"
        ;   Label: default
    MOV EDX,0xc20                       ; 004bf408
    PUSH 0x5e0557                       ; 004bf40d | = "Invalid entry item type"
    MOV [0x01d1d400],EAX                ; 004bf412 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004bf417 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bf41d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bf422
    JMP 0x004bf25d                      ; 004bf425
        ;   XREF to: 004bf25d (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [EBX + 0x1cc45c8] ; 004bf42a
        ;   Label: caseD_1
    MOV EDX,dword ptr [EAX + 0x140]     ; 004bf430
    PUSH EDX                            ; 004bf436
    PUSH EAX                            ; 004bf437
    PUSH 0x5e0597                       ; 004bf438 | = "\"%s\", %d\n"
    PUSH EBP                            ; 004bf43d
    DEC ESI                             ; 004bf43e
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf43f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 004bf444
    JMP 0x004bf2f1                      ; 004bf447
        ;   XREF to: 004bf2f1 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV ECX,0x5e05a1                    ; 004bf44c | = "..\\core\\fldnotes.cpp"
        ;   Label: default
    MOV EAX,0xc38                       ; 004bf451
    PUSH 0x5e05b6                       ; 004bf456 | = "Invalid entry item type"
    MOV dword ptr [0x01d1d400],ECX      ; 004bf45b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004bf461 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bf466
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bf46b
    JMP 0x004bf2f1                      ; 004bf46e
        ;   XREF to: 004bf2f1 (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [ESP + 0x14],0x0      ; 004bf473
        ;   Label: LAB_004bf473
    JLE 0x004bf610                      ; 004bf478
        ;   XREF to: 004bf610 (CONDITIONAL_JUMP)  ; LAB_004bf610
    PUSH 0x5e0629                       ; 004bf47e | = "// map entry name, xSize, ySize\n"
        ;   Label: LAB_004bf47e
    MOV ESI,dword ptr [ESP + 0x18]      ; 004bf483
    PUSH EBP                            ; 004bf487
    DEC ESI                             ; 004bf488
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf489
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV dword ptr [ESP + 0x1c],ESI      ; 004bf48e
    ADD ESP,0x8                         ; 004bf492
    MOV EAX,dword ptr [EDI + 0x98]      ; 004bf495 | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.height
    PUSH EAX                            ; 004bf49b
    MOV EDX,dword ptr [EDI + 0x94]      ; 004bf49c | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.width
    PUSH EDX                            ; 004bf4a2
    PUSH EBX                            ; 004bf4a3
    PUSH 0x5e064a                       ; 004bf4a4 | = "%s, %d, %d\n"
    PUSH EBP                            ; 004bf4a9
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf4aa
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 004bf4af
    PUSH 0x5e0656                       ; 004bf4b2 | = "\t// map coverage data\n"
    PUSH EBP                            ; 004bf4b7
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf4b8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf4bd
    XOR ECX,ECX                         ; 004bf4c0
    MOV EBX,dword ptr [EDI + 0x98]      ; 004bf4c2 | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.height
    MOV dword ptr [ESP + 0x28],ECX      ; 004bf4c8
    TEST EBX,EBX                        ; 004bf4cc
    JLE 0x004bf53f                      ; 004bf4ce
        ;   XREF to: 004bf53f (CONDITIONAL_JUMP)  ; LAB_004bf53f
    PUSH 0x5e066d                       ; 004bf4d0 | DAT_005e066d
        ;   Label: LAB_004bf4d0
    PUSH EBP                            ; 004bf4d5
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf4d6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf4db
    MOV EBX,dword ptr [EDI + 0x94]      ; 004bf4de | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.width
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bf4e4
    IMUL ESI,EBX                        ; 004bf4e8
    MOV EAX,dword ptr [EDI + 0x8c]      ; 004bf4eb | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.opa
    ADD ESI,EAX                         ; 004bf4f1
    MOV EAX,dword ptr [EDI + 0x94]      ; 004bf4f3 | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.width
    XOR EBX,EBX                         ; 004bf4f9
    TEST EAX,EAX                        ; 004bf4fb
    JLE 0x004bf51e                      ; 004bf4fd
        ;   XREF to: 004bf51e (CONDITIONAL_JUMP)  ; LAB_004bf51e
    XOR EAX,EAX                         ; 004bf4ff
        ;   Label: LAB_004bf4ff
    MOV AL,byte ptr [ESI]               ; 004bf501
    PUSH EAX                            ; 004bf503
    PUSH 0x5e0670                       ; 004bf504 | DAT_005e0670
    PUSH EBP                            ; 004bf509
    INC ESI                             ; 004bf50a
    INC EBX                             ; 004bf50b
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf50c
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EDI + 0x94]      ; 004bf511 | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.width
    ADD ESP,0xc                         ; 004bf517
    CMP EBX,ECX                         ; 004bf51a
    JL 0x004bf4ff                       ; 004bf51c
        ;   XREF to: 004bf4ff (CONDITIONAL_JUMP)  ; LAB_004bf4ff
    PUSH 0x5e0675                       ; 004bf51e | DAT_005e0675
        ;   Label: LAB_004bf51e
    PUSH EBP                            ; 004bf523
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf524
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf529
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bf52c
    INC ESI                             ; 004bf530
    MOV EDX,dword ptr [EDI + 0x98]      ; 004bf531 | SNotesMap_ARRAY_01cc55d0[1].reveal_mask.height
    MOV dword ptr [ESP + 0x28],ESI      ; 004bf537
    CMP ESI,EDX                         ; 004bf53b
    JL 0x004bf4d0                       ; 004bf53d
        ;   XREF to: 004bf4d0 (CONDITIONAL_JUMP)  ; LAB_004bf4d0
    MOV ECX,dword ptr [EDI + 0x2c0]     ; 004bf53f | SNotesMap_ARRAY_01cc55d0[1].annotation_count
        ;   Label: LAB_004bf53f
    XOR ESI,ESI                         ; 004bf545
    XOR EBX,EBX                         ; 004bf547
    TEST ECX,ECX                        ; 004bf549
    JLE 0x004bf569                      ; 004bf54b
        ;   XREF to: 004bf569 (CONDITIONAL_JUMP)  ; LAB_004bf569
    MOV EAX,EDI                         ; 004bf54d
    CMP dword ptr [EAX + 0x394],0x0     ; 004bf54f | SNotesMap_ARRAY_01cc55d0[1].annotations[0].visible | SNotesMap_ARRAY_01cc55d0[1].annotations[1].visible
        ;   Label: LAB_004bf54f
    JZ 0x004bf559                       ; 004bf556
        ;   XREF to: 004bf559 (CONDITIONAL_JUMP)  ; LAB_004bf559
    INC EBX                             ; 004bf558
    INC ESI                             ; 004bf559
        ;   Label: LAB_004bf559
    MOV EDX,dword ptr [EDI + 0x2c0]     ; 004bf55a | SNotesMap_ARRAY_01cc55d0[1].annotation_count
    ADD EAX,0xd4                        ; 004bf560
    CMP ESI,EDX                         ; 004bf565
    JL 0x004bf54f                       ; 004bf567
        ;   XREF to: 004bf54f (CONDITIONAL_JUMP)  ; LAB_004bf54f
    PUSH 0x5e0677                       ; 004bf569 | = "\t// map annotation count, list\n"
        ;   Label: LAB_004bf569
    PUSH EBP                            ; 004bf56e
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf56f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004bf574
    PUSH EBX                            ; 004bf577
    PUSH 0x5e0697                       ; 004bf578 | DAT_005e0697
    PUSH EBP                            ; 004bf57d
    XOR ESI,ESI                         ; 004bf57e
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf580
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EDI + 0x2c0]     ; 004bf585 | SNotesMap_ARRAY_01cc55d0[1].annotation_count
    ADD ESP,0xc                         ; 004bf58b
    TEST ECX,ECX                        ; 004bf58e
    JLE 0x004bf5e0                      ; 004bf590
        ;   XREF to: 004bf5e0 (CONDITIONAL_JUMP)  ; LAB_004bf5e0
    LEA EAX,[EDI + 0x2c4]               ; 004bf592
    MOV dword ptr [ESP + 0x24],EDI      ; 004bf598 | SNotesMap_ARRAY_01cc55d0[1].entry
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bf59c
    IMUL EAX,ESI,0xd4                   ; 004bf5a0
        ;   Label: LAB_004bf5a0
    MOV EDX,dword ptr [ESP + 0x24]      ; 004bf5a6
    CMP dword ptr [EDX + 0x394],0x0     ; 004bf5aa | SNotesMap_ARRAY_01cc55d0[1].annotations[0].visible | SNotesMap_ARRAY_01cc55d0[1].annotations[1].visible
    JZ 0x004bf5c7                       ; 004bf5b1
        ;   XREF to: 004bf5c7 (CONDITIONAL_JUMP)  ; LAB_004bf5c7
    ADD EAX,dword ptr [ESP + 0x1c]      ; 004bf5b3
    PUSH EAX                            ; 004bf5b7
    PUSH 0x5e069c                       ; 004bf5b8 | = "\t\t%s\n"
    PUSH EBP                            ; 004bf5bd
    DEC EBX                             ; 004bf5be
    CALL crt_unknown.c_FUN_005c03c0     ; 004bf5bf
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004bf5c4
    MOV ECX,dword ptr [ESP + 0x24]      ; 004bf5c7
        ;   Label: LAB_004bf5c7
    INC ESI                             ; 004bf5cb
    ADD ECX,0xd4                        ; 004bf5cc
    MOV EAX,dword ptr [EDI + 0x2c0]     ; 004bf5d2 | SNotesMap_ARRAY_01cc55d0[1].annotation_count
    MOV dword ptr [ESP + 0x24],ECX      ; 004bf5d8
    CMP ESI,EAX                         ; 004bf5dc
    JL 0x004bf5a0                       ; 004bf5de
        ;   XREF to: 004bf5a0 (CONDITIONAL_JUMP)  ; LAB_004bf5a0
    TEST EBX,EBX                        ; 004bf5e0
        ;   Label: LAB_004bf5e0
    JZ 0x004bf3bb                       ; 004bf5e2
        ;   XREF to: 004bf3bb (CONDITIONAL_JUMP)  ; LAB_004bf3bb
    MOV EDX,0x5e06a2                    ; 004bf5e8 | = "..\\core\\fldnotes.cpp"
    MOV ECX,0xc6d                       ; 004bf5ed
    PUSH 0x5e06b7                       ; 004bf5f2 | = "Hell froze."
    MOV dword ptr [0x01d1d400],EDX      ; 004bf5f7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004bf5fd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bf603
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bf608
    JMP 0x004bf3bb                      ; 004bf60b
        ;   XREF to: 004bf3bb (UNCONDITIONAL_JUMP)  ; LAB_004bf3bb
    MOV EDX,0x5e0609                    ; 004bf610 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004bf610
    MOV ECX,0xc4f                       ; 004bf615
    PUSH 0x5e061e                       ; 004bf61a | = "Hell froze"
    MOV dword ptr [0x01d1d400],EDX      ; 004bf61f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004bf625 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bf62b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bf630
    JMP 0x004bf47e                      ; 004bf633
        ;   XREF to: 004bf47e (UNCONDITIONAL_JUMP)  ; LAB_004bf47e
    MOV EAX,0x5e06c3                    ; 004bf638 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004bf638
    MOV EDX,0xc71                       ; 004bf63d
    PUSH 0x5e06d8                       ; 004bf642 | = "Hell froze"
    MOV [0x01d1d400],EAX                ; 004bf647 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004bf64c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bf652
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bf657
    JMP 0x004bf3e7                      ; 004bf65a
        ;   XREF to: 004bf3e7 (UNCONDITIONAL_JUMP)  ; LAB_004bf3e7

