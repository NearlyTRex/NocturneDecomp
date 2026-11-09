; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a6470(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bb9b0 at 004bbc30
;
; Referenced Globals:
;   void* switchdataD_004a6438 = 004a6515
;   void* switchdataD_004a6454 = 004a65a5
;   TerminatedCString s_BEGIN_FIELD_NOTES_005d6553
;   TerminatedCString s_field_notes_file_version_005d658a
;   undefined4 DAT_005d65a7
;   TerminatedCString s_filename_005d65ab
;   TerminatedCString s_s_005d65b8
;   TerminatedCString s_core_fldnotes_cpp_005d65be
;   TerminatedCString s_Invalid_entry_item_type_005d65d3
;   TerminatedCString s_entry_count_list_name_ty_005d65eb
;   undefined4 DAT_005d660f
;   TerminatedCString s_s_d_005d6613
;   TerminatedCString s_core_fldnotes_cpp_005d661d
;   TerminatedCString s_Invalid_entry_item_type_005d6632
;   TerminatedCString s_core_fldnotes_cpp_005d664a
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6470
        ;   Label: core_fldnotes.cpp_FUN_004a6470
    PUSH ESI                            ; 004a6471
    PUSH EDI                            ; 004a6472
    PUSH EBP                            ; 004a6473
    SUB ESP,0xc                         ; 004a6474
    PUSH 0x5d6553                       ; 004a6477 | = "//-- BEGIN FIELD NOTES --------------..."
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a647c
    PUSH EDX                            ; 004a6480
    CALL crt_unknown.c_FUN_005b8010     ; 004a6481
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004a6486
    PUSH 0x5d658a                       ; 004a6489 | = "// field notes file version\n"
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a648e
    PUSH ECX                            ; 004a6492
    CALL crt_unknown.c_FUN_005b8010     ; 004a6493
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004a6498
    PUSH 0x1                            ; 004a649b
    PUSH 0x5d65a7                       ; 004a649d | DAT_005d65a7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004a64a2
    PUSH EBX                            ; 004a64a6
    CALL crt_unknown.c_FUN_005b8010     ; 004a64a7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004a64ac
    PUSH 0x5d65ab                       ; 004a64af | = "// filename\n"
    PUSH EBX                            ; 004a64b4
    CALL crt_unknown.c_FUN_005b8010     ; 004a64b5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004a64ba
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a64bd
    PUSH EDI                            ; 004a64c1
    PUSH 0x5d65b8                       ; 004a64c2 | = "\"%s\"\n"
    MOV ESI,EBX                         ; 004a64c7
    PUSH EBX                            ; 004a64c9
    XOR ESI,EBX                         ; 004a64ca
    CALL crt_unknown.c_FUN_005b8010     ; 004a64cc
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004a64d1
    XOR EAX,EAX                         ; 004a64d4
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a64d6 | DAT_01cab9f0
    MOV dword ptr [ESP],EAX             ; 004a64dc
    TEST EDX,EDX                        ; 004a64df
    JLE 0x004a6542                      ; 004a64e1
        ;   XREF to: 004a6542 (CONDITIONAL_JUMP)  ; LAB_004a6542
    MOV dword ptr [ESP + 0x8],EAX       ; 004a64e3
    MOV EBP,dword ptr [ESP + 0x8]       ; 004a64e7
        ;   Label: LAB_004a64e7
    XOR EBX,EBX                         ; 004a64eb
    MOV EDX,dword ptr [EBP + 0x1cabb44] ; 004a64ed
    MOV EDI,EBP                         ; 004a64f3
    TEST EDX,EDX                        ; 004a64f5
    JLE 0x004a6523                      ; 004a64f7
        ;   XREF to: 004a6523 (CONDITIONAL_JUMP)  ; LAB_004a6523
    MOV EAX,dword ptr [EDI + 0x1cabb48] ; 004a64f9
        ;   Label: LAB_004a64f9
    MOV EAX,dword ptr [EAX + 0x140]     ; 004a64ff
    CMP EAX,0x6                         ; 004a6505
    JA 0x004a65ee                       ; 004a6508
        ;   XREF to: 004a65ee (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4a6438]  ; 004a650e | caseD_5 | caseD_6 | switchdataD_004a6438
        ;   Label: switchD
    INC EBX                             ; 004a6515
        ;   Label: caseD_0
    MOV ECX,dword ptr [EBP + 0x1cabb44] ; 004a6516
    ADD EDI,0x4                         ; 004a651c
    CMP EBX,ECX                         ; 004a651f
    JL 0x004a64f9                       ; 004a6521
        ;   XREF to: 004a64f9 (CONDITIONAL_JUMP)  ; LAB_004a64f9
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a6523
        ;   Label: LAB_004a6523
    MOV EBX,dword ptr [ESP]             ; 004a6527
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a652a | DAT_01cab9f0
    ADD ECX,0x2e4                       ; 004a6530
    INC EBX                             ; 004a6536
    MOV dword ptr [ESP + 0x8],ECX       ; 004a6537
    MOV dword ptr [ESP],EBX             ; 004a653b
    CMP EBX,EDI                         ; 004a653e
    JL 0x004a64e7                       ; 004a6540
        ;   XREF to: 004a64e7 (CONDITIONAL_JUMP)  ; LAB_004a64e7
    PUSH 0x5d65eb                       ; 004a6542 | = "// entry count, list(\"name\", type)\n"
        ;   Label: LAB_004a6542
    MOV EBP,dword ptr [ESP + 0x28]      ; 004a6547
    PUSH EBP                            ; 004a654b
    CALL crt_unknown.c_FUN_005b8010     ; 004a654c
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004a6551
    PUSH ESI                            ; 004a6554
    PUSH 0x5d660f                       ; 004a6555 | DAT_005d660f
    PUSH EBP                            ; 004a655a
    CALL crt_unknown.c_FUN_005b8010     ; 004a655b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004a6560
    XOR EDX,EDX                         ; 004a6563
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a6565 | DAT_01cab9f0
    MOV dword ptr [ESP + 0x4],EDX       ; 004a656b
    TEST ECX,ECX                        ; 004a656f
    JLE 0x004a65c6                      ; 004a6571
        ;   XREF to: 004a65c6 (CONDITIONAL_JUMP)  ; LAB_004a65c6
    IMUL EBP,dword ptr [ESP + 0x4],0x2e4 ; 004a6573
        ;   Label: LAB_004a6573
    XOR EDI,EDI                         ; 004a657b
    MOV EDX,dword ptr [EBP + 0x1cabb44] ; 004a657d
    MOV EBX,EBP                         ; 004a6583
    TEST EDX,EDX                        ; 004a6585
    JLE 0x004a65b3                      ; 004a6587
        ;   XREF to: 004a65b3 (CONDITIONAL_JUMP)  ; LAB_004a65b3
    MOV EAX,dword ptr [EBX + 0x1cabb48] ; 004a6589
        ;   Label: LAB_004a6589
    MOV EAX,dword ptr [EAX + 0x140]     ; 004a658f
    CMP EAX,0x6                         ; 004a6595
    JA 0x004a663b                       ; 004a6598
        ;   XREF to: 004a663b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4a6454]  ; 004a659e | caseD_5 | caseD_6 | switchdataD_004a6454
        ;   Label: switchD
    INC EDI                             ; 004a65a5
        ;   Label: caseD_0
    MOV ECX,dword ptr [EBP + 0x1cabb44] ; 004a65a6
    ADD EBX,0x4                         ; 004a65ac
    CMP EDI,ECX                         ; 004a65af
    JL 0x004a6589                       ; 004a65b1
        ;   XREF to: 004a6589 (CONDITIONAL_JUMP)  ; LAB_004a6589
    MOV ECX,dword ptr [ESP + 0x4]       ; 004a65b3
        ;   Label: LAB_004a65b3
    INC ECX                             ; 004a65b7
    MOV EBX,dword ptr [0x01cab9f0]      ; 004a65b8 | DAT_01cab9f0
    MOV dword ptr [ESP + 0x4],ECX       ; 004a65be
    CMP ECX,EBX                         ; 004a65c2
    JL 0x004a6573                       ; 004a65c4
        ;   XREF to: 004a6573 (CONDITIONAL_JUMP)  ; LAB_004a6573
    TEST ESI,ESI                        ; 004a65c6
        ;   Label: LAB_004a65c6
    JNZ 0x004a6662                      ; 004a65c8
        ;   XREF to: 004a6662 (CONDITIONAL_JUMP)  ; LAB_004a6662
    PUSH 0x5d666a                       ; 004a65ce | = "//-- END FIELD NOTES ----------------..."
        ;   Label: LAB_004a65ce
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a65d3
    PUSH EDX                            ; 004a65d7
    CALL crt_unknown.c_FUN_005b8010     ; 004a65d8
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004a65dd
    ADD ESP,0xc                         ; 004a65e0
    POP EBP                             ; 004a65e3
    POP EDI                             ; 004a65e4
    POP ESI                             ; 004a65e5
    POP EBX                             ; 004a65e6
    RET                                 ; 004a65e7
    INC ESI                             ; 004a65e8
        ;   Label: caseD_1
    JMP 0x004a6515                      ; 004a65e9
        ;   XREF to: 004a6515 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,0x5d65be                    ; 004a65ee | = "..\\core\\fldnotes.cpp"
        ;   Label: default
    MOV EDX,0xb83                       ; 004a65f3
    PUSH 0x5d65d3                       ; 004a65f8 | = "Invalid entry item type"
    MOV [0x01d046a0],EAX                ; 004a65fd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004a6602 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a6608
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a660d
    JMP 0x004a6515                      ; 004a6610
        ;   XREF to: 004a6515 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [EBX + 0x1cabb48] ; 004a6615
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x140]     ; 004a661b
    PUSH ECX                            ; 004a6621
    PUSH EAX                            ; 004a6622
    PUSH 0x5d6613                       ; 004a6623 | = "\"%s\", %d\n"
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a6628
    PUSH EAX                            ; 004a662c
    DEC ESI                             ; 004a662d
    CALL crt_unknown.c_FUN_005b8010     ; 004a662e
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004a6633
    JMP 0x004a65a5                      ; 004a6636
        ;   XREF to: 004a65a5 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,0x5d661d                    ; 004a663b | = "..\\core\\fldnotes.cpp"
        ;   Label: default
    MOV EDX,0xb9b                       ; 004a6640
    PUSH 0x5d6632                       ; 004a6645 | = "Invalid entry item type"
    MOV [0x01d046a0],EAX                ; 004a664a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004a664f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a6655
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a665a
    JMP 0x004a65a5                      ; 004a665d
        ;   XREF to: 004a65a5 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV ESI,0x5d664a                    ; 004a6662 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004a6662
    MOV EDI,0xb9f                       ; 004a6667
    PUSH 0x5d665f                       ; 004a666c | = "Hell froze"
    MOV dword ptr [0x01d046a0],ESI      ; 004a6671 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004a6677 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a667d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a6682
    JMP 0x004a65ce                      ; 004a6685
        ;   XREF to: 004a65ce (UNCONDITIONAL_JUMP)  ; LAB_004a65ce

