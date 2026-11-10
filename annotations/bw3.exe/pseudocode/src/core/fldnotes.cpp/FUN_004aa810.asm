; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004aa810(char *param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x5f4]:1  local_5f4
; undefined        Stack[-0x5f3]:1  local_5f3
; undefined1       Stack[-0x5f2]:1  local_5f2
; undefined1       Stack[-0x5f1]:1  local_5f1
; undefined1       Stack[-0x5f0]:1  local_5f0
; undefined1       Stack[-0x5ef]:1  local_5ef
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined1       Stack[-0x1f3]:1  local_1f3
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0x90]:1  local_90
; undefined1       Stack[-0x8f]:1  local_8f
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
;   core_fldnotes.cpp_FUN_004ac900 at 004aca13
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052d61b
;
; Referenced Globals:
;   undefined4 DAT_005c0d0f
;   TerminatedCString s_world_005c11d5
;   TerminatedCString s_Can_t_open_field_notes_f_005c11db
;   undefined4 DAT_005c11fa
;   TerminatedCString s_world_005c11fd
;   TerminatedCString s_core_fldnotes_cpp_005c1203
;   TerminatedCString s_Can_t_open_field_notes_f_005c1218
;   TerminatedCString s_section_005c1237
;   undefined4 s_ection_005c1237+1
;   TerminatedCString s_Too_many_field_notes_sec_005c123f
;   TerminatedCString s_title_005c126c
;   undefined4 s_itle_005c126c+1
;   TerminatedCString s_Didn_t_expect_title_in_s_005c1272
;   undefined1 DAT_005c1298
;   undefined1 DAT_005c1299
;   ... and 54 more
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a8e00
;   core_fldnotes.cpp_FUN_004a8eb0
;   core_fldnotes.cpp_FUN_004a9c30
;   core_fldnotes.cpp_FUN_004a9c80
;   core_fldnotes.cpp_FUN_004a9d90
;   core_fldnotes.cpp_FUN_004a9f30
;   core_fldnotes.cpp_FUN_004ab7a0
;   core_main.c_FUN_004e4330
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_ftell_FUN_005a5d00
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_string.c__strncpy_FUN_005a4ee0
;   crt_string.c_strstr_FUN_005a4010
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa810
        ;   Label: core_fldnotes.cpp_FUN_004aa810
    PUSH ESI                            ; 004aa811
    PUSH EDI                            ; 004aa812
    PUSH EBP                            ; 004aa813
    SUB ESP,0x5e4                       ; 004aa814
    MOV ESI,dword ptr [ESP + 0x5fc]     ; 004aa81a
    MOV EBX,dword ptr [ESP + 0x5f8]     ; 004aa821
    XOR EDX,EDX                         ; 004aa828
    PUSH EBX                            ; 004aa82a
    MOV dword ptr [ESP + 0x5a8],EDX     ; 004aa82b
    MOV dword ptr [ESP + 0x5ac],EDX     ; 004aa832
    CALL core_fldnotes.cpp_FUN_004ab7a0 ; 004aa839
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ab7a0()
    ADD ESP,0x4                         ; 004aa83e
    MOV EDI,EBX                         ; 004aa841
    PUSH EDI                            ; 004aa843
    MOV AL,byte ptr [ESI]               ; 004aa844
        ;   Label: LAB_004aa844
    MOV byte ptr [EDI],AL               ; 004aa846
    CMP AL,0x0                          ; 004aa848
    JZ 0x004aa85c                       ; 004aa84a
        ;   XREF to: 004aa85c (CONDITIONAL_JUMP)  ; LAB_004aa85c
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa84c
    ADD ESI,0x2                         ; 004aa84f
    MOV byte ptr [EDI + 0x1],AL         ; 004aa852
    ADD EDI,0x2                         ; 004aa855
    CMP AL,0x0                          ; 004aa858
    JNZ 0x004aa844                      ; 004aa85a
        ;   XREF to: 004aa844 (CONDITIONAL_JUMP)  ; LAB_004aa844
    POP EDI                             ; 004aa85c
        ;   Label: LAB_004aa85c
    XOR ESI,ESI                         ; 004aa85d
    MOV EDI,dword ptr [ESP + 0x600]     ; 004aa85f
    MOV dword ptr [0x01d0d008],ESI      ; 004aa866 | DAT_01d0d008
    TEST EDI,EDI                        ; 004aa86c
    JZ 0x004aa87a                       ; 004aa86e
        ;   XREF to: 004aa87a (CONDITIONAL_JUMP)  ; LAB_004aa87a
    MOV dword ptr [0x01d0d008],0x1      ; 004aa870 | DAT_01d0d008
    MOV EAX,dword ptr [ESP + 0x5f8]     ; 004aa87a
        ;   Label: LAB_004aa87a
    PUSH EAX                            ; 004aa881
    PUSH 0x5c11d5                       ; 004aa882 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 004aa887
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004aa88c
    MOV dword ptr [ESP + 0x5ac],EAX     ; 004aa88f
    TEST EAX,EAX                        ; 004aa896
    JL 0x004aaa18                       ; 004aa898
        ;   XREF to: 004aaa18 (CONDITIONAL_JUMP)  ; LAB_004aaa18
    PUSH 0x5c11fa                       ; 004aa89e | DAT_005c11fa
    MOV EDX,dword ptr [ESP + 0x5fc]     ; 004aa8a3
    PUSH EDX                            ; 004aa8aa
    PUSH 0x5c11fd                       ; 004aa8ab | = "world"
    CALL engine_dosio.cpp_FUN_004659c0  ; 004aa8b0
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004aa8b5
    MOV dword ptr [ESP + 0x5a8],EAX     ; 004aa8b8
    TEST EAX,EAX                        ; 004aa8bf
    JZ 0x004aaaa5                       ; 004aa8c1
        ;   XREF to: 004aaaa5 (CONDITIONAL_JUMP)  ; LAB_004aaaa5
    MOV EDI,dword ptr [ESP + 0x5a8]     ; 004aa8c7
        ;   Label: LAB_004aa8c7
    PUSH EDI                            ; 004aa8ce
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 004aa8cf
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 004aa8d4
    MOV EBP,dword ptr [ESP + 0x5ac]     ; 004aa8d7
    ADD EBP,EAX                         ; 004aa8de
    XOR EAX,EAX                         ; 004aa8e0
    MOV dword ptr [ESP + 0x5ac],EBP     ; 004aa8e2
    MOV dword ptr [ESP + 0x5b0],EAX     ; 004aa8e9
    MOV dword ptr [ESP + 0x5b4],EAX     ; 004aa8f0
    XOR EBP,EBP                         ; 004aa8f7
    MOV EBX,dword ptr [ESP + 0x5a8]     ; 004aa8f9
        ;   Label: LAB_004aa8f9
    PUSH EBX                            ; 004aa900
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 004aa901
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 004aa906
    CMP EAX,dword ptr [ESP + 0x5ac]     ; 004aa909
    JGE 0x004aa931                      ; 004aa910
        ;   XREF to: 004aa931 (CONDITIONAL_JUMP)  ; LAB_004aa931
    PUSH EBX                            ; 004aa912
    PUSH 0x400                          ; 004aa913
    LEA EAX,[ESP + 0x8]                 ; 004aa918
    PUSH EAX                            ; 004aa91c
    LEA EBX,[ESP + 0xc]                 ; 004aa91d
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004aa921
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004aa926
    CMP EAX,EBX                         ; 004aa929
    JZ 0x004aaad5                       ; 004aa92b
        ;   XREF to: 004aaad5 (CONDITIONAL_JUMP)  ; LAB_004aaad5
    MOV EAX,dword ptr [ESP + 0x5a8]     ; 004aa931
        ;   Label: LAB_004aa931
    PUSH EAX                            ; 004aa938
    XOR ESI,ESI                         ; 004aa939
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004aa93b
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004aa940
    XOR EDX,EDX                         ; 004aa943
    MOV ECX,dword ptr [0x01d0e36c]      ; 004aa945 | DAT_01d0e36c
    MOV dword ptr [ESP + 0x5a8],EDX     ; 004aa94b
    TEST ECX,ECX                        ; 004aa952
    JLE 0x004aa980                      ; 004aa954
        ;   XREF to: 004aa980 (CONDITIONAL_JUMP)  ; LAB_004aa980
    MOV EBX,0x1d0e370                   ; 004aa956
    PUSH EBX                            ; 004aa95b
        ;   Label: LAB_004aa95b
    CALL core_fldnotes.cpp_FUN_004a9f30 ; 004aa95c
        ;   XREF to: 004a9f30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9f30()
    INC ESI                             ; 004aa961
    MOV EDI,dword ptr [0x01d0e36c]      ; 004aa962 | DAT_01d0e36c
    ADD ESP,0x4                         ; 004aa968
    ADD EBX,0x126c                      ; 004aa96b
    CMP ESI,EDI                         ; 004aa971
    JL 0x004aa95b                       ; 004aa973
        ;   XREF to: 004aa95b (CONDITIONAL_JUMP)  ; LAB_004aa95b
    LEA EAX,[EAX]                       ; 004aa975
    LEA EDX,[EDX]                       ; 004aa97b
    MOV EBX,EBX                         ; 004aa97e
    MOV EBP,0x1                         ; 004aa980
        ;   Label: LAB_004aa980
    MOV EDX,dword ptr [ESP + 0x600]     ; 004aa985
    MOV dword ptr [0x005fe374],EBP      ; 004aa98c | DAT_005fe374
    MOV dword ptr [0x005fe370],EBP      ; 004aa992 | DAT_005fe370
    TEST EDX,EDX                        ; 004aa998
    JZ 0x004aaa08                       ; 004aa99a
        ;   XREF to: 004aaa08 (CONDITIONAL_JUMP)  ; LAB_004aaa08
    PUSH 0x1b8                          ; 004aa99c
    PUSH 0x1eb                          ; 004aa9a1
    PUSH 0x40                           ; 004aa9a6
    PUSH 0x60                           ; 004aa9a8
    PUSH 0x1d19d30                      ; 004aa9aa
    CALL core_fldnotes.cpp_FUN_004a8eb0 ; 004aa9af
        ;   XREF to: 004a8eb0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8eb0()
    ADD ESP,0x14                        ; 004aa9b4
    PUSH 0x1d19d30                      ; 004aa9b7
    XOR BL,BL                           ; 004aa9bc
    CALL core_fldnotes.cpp_FUN_004a8e00 ; 004aa9be
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8e00()
    MOV ESI,dword ptr [0x01d0d210]      ; 004aa9c3 | DAT_01d0d210
    ADD ESP,0x4                         ; 004aa9c9
    XOR ECX,ECX                         ; 004aa9cc
    MOV byte ptr [0x01d0d010],BL        ; 004aa9ce | DAT_01d0d010
    MOV dword ptr [0x005fe374],ECX      ; 004aa9d4 | DAT_005fe374
    XOR EBX,EBX                         ; 004aa9da
    TEST ESI,ESI                        ; 004aa9dc
    JLE 0x004aaa08                      ; 004aa9de
        ;   XREF to: 004aaa08 (CONDITIONAL_JUMP)  ; LAB_004aaa08
    MOV ESI,0x1d0d214                   ; 004aa9e0
    PUSH 0x1d19d30                      ; 004aa9e5
        ;   Label: LAB_004aa9e5
    PUSH ESI                            ; 004aa9ea
    CALL core_fldnotes.cpp_FUN_004a9d90 ; 004aa9eb
        ;   XREF to: 004a9d90 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9d90()
    ADD ESP,0x8                         ; 004aa9f0
    TEST EAX,EAX                        ; 004aa9f3
    JZ 0x004aaa32                       ; 004aa9f5
        ;   XREF to: 004aaa32 (CONDITIONAL_JUMP)  ; LAB_004aaa32
    MOV EDI,dword ptr [0x01d0d210]      ; 004aa9f7 | DAT_01d0d210
    INC EBX                             ; 004aa9fd
    ADD ESI,0x2e4                       ; 004aa9fe
    CMP EBX,EDI                         ; 004aaa04
    JL 0x004aa9e5                       ; 004aaa06
        ;   XREF to: 004aa9e5 (CONDITIONAL_JUMP)  ; LAB_004aa9e5
    MOV EAX,0x1                         ; 004aaa08
        ;   Label: LAB_004aaa08
    ADD ESP,0x5e4                       ; 004aaa0d
    POP EBP                             ; 004aaa13
    POP EDI                             ; 004aaa14
    POP ESI                             ; 004aaa15
    POP EBX                             ; 004aaa16
    RET                                 ; 004aaa17
    MOV ECX,dword ptr [ESP + 0x5f8]     ; 004aaa18
        ;   Label: LAB_004aaa18
    PUSH ECX                            ; 004aaa1f
    PUSH 0x5c11db                       ; 004aaa20 | = "Can't open field notes file %s"
    PUSH 0x1d0d010                      ; 004aaa25 | DAT_01d0d010
        ;   Label: LAB_004aaa25
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004aaa2a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004aaa2f
    MOV EBP,dword ptr [ESP + 0x5a8]     ; 004aaa32
        ;   Label: LAB_004aaa32
    TEST EBP,EBP                        ; 004aaa39
    JZ 0x004aaa46                       ; 004aaa3b
        ;   XREF to: 004aaa46 (CONDITIONAL_JUMP)  ; LAB_004aaa46
    PUSH EBP                            ; 004aaa3d
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004aaa3e
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004aaa43
    MOV EDX,dword ptr [ESP + 0x600]     ; 004aaa46
        ;   Label: LAB_004aaa46
    TEST EDX,EDX                        ; 004aaa4d
    JNZ 0x004aaa82                      ; 004aaa4f
        ;   XREF to: 004aaa82 (CONDITIONAL_JUMP)  ; LAB_004aaa82
    PUSH 0x1d0d010                      ; 004aaa51 | DAT_01d0d010
    MOV ECX,dword ptr [0x005fb140]      ; 004aaa56 | g_CEditorToolsPtr
    PUSH ECX                            ; 004aaa5c
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004aaa5d
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004aaa62
    MOV EBX,dword ptr [ESP + 0x5f8]     ; 004aaa65
        ;   Label: LAB_004aaa65
    PUSH EBX                            ; 004aaa6c
    CALL core_fldnotes.cpp_FUN_004ab7a0 ; 004aaa6d
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ab7a0()
    ADD ESP,0x4                         ; 004aaa72
    XOR EAX,EAX                         ; 004aaa75
    ADD ESP,0x5e4                       ; 004aaa77
    POP EBP                             ; 004aaa7d
    POP EDI                             ; 004aaa7e
    POP ESI                             ; 004aaa7f
    POP EBX                             ; 004aaa80
    RET                                 ; 004aaa81
    MOV ESI,0x1d0d010                   ; 004aaa82
        ;   Label: LAB_004aaa82
    MOV EDI,EDX                         ; 004aaa87
    PUSH EDI                            ; 004aaa89
    MOV AL,byte ptr [ESI]               ; 004aaa8a | DAT_01d0d010 | DAT_01d0d012
        ;   Label: LAB_004aaa8a
    MOV byte ptr [EDI],AL               ; 004aaa8c
    CMP AL,0x0                          ; 004aaa8e
    JZ 0x004aaaa2                       ; 004aaa90
        ;   XREF to: 004aaaa2 (CONDITIONAL_JUMP)  ; LAB_004aaaa2
    MOV AL,byte ptr [ESI + 0x1]         ; 004aaa92 | DAT_01d0d011 | DAT_01d0d013
    ADD ESI,0x2                         ; 004aaa95
    MOV byte ptr [EDI + 0x1],AL         ; 004aaa98
    ADD EDI,0x2                         ; 004aaa9b
    CMP AL,0x0                          ; 004aaa9e
    JNZ 0x004aaa8a                      ; 004aaaa0
        ;   XREF to: 004aaa8a (CONDITIONAL_JUMP)  ; LAB_004aaa8a
    POP EDI                             ; 004aaaa2
        ;   Label: LAB_004aaaa2
    JMP 0x004aaa65                      ; 004aaaa3
        ;   XREF to: 004aaa65 (UNCONDITIONAL_JUMP)  ; LAB_004aaa65
    MOV ESI,dword ptr [ESP + 0x5f8]     ; 004aaaa5
        ;   Label: LAB_004aaaa5
    PUSH ESI                            ; 004aaaac
    MOV ECX,0x5c1203                    ; 004aaaad | = "..\\core\\fldnotes.cpp"
    MOV EBX,0x8ed                       ; 004aaab2
    PUSH 0x5c1218                       ; 004aaab7 | = "Can't open field notes file %s"
    MOV dword ptr [0x01d71de0],ECX      ; 004aaabc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004aaac2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004aaac8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004aaacd
    JMP 0x004aa8c7                      ; 004aaad0
        ;   XREF to: 004aa8c7 (UNCONDITIONAL_JUMP)  ; LAB_004aa8c7
    PUSH 0x5c0d0f                       ; 004aaad5 | DAT_005c0d0f
        ;   Label: LAB_004aaad5
    PUSH EBX                            ; 004aaada
    CALL crt_string.c_strstr_FUN_005a4010 ; 004aaadb
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005a4010(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004aaae0
    TEST EAX,EAX                        ; 004aaae3
    JZ 0x004aaaea                       ; 004aaae5
        ;   XREF to: 004aaaea (CONDITIONAL_JUMP)  ; LAB_004aaaea
    MOV byte ptr [EAX],0x0              ; 004aaae7
    PUSH EBX                            ; 004aaaea
        ;   Label: LAB_004aaaea
    CALL unkaddr_004a76f0.cpp_FUN_004a7890 ; 004aaaeb
        ;   XREF to: 004a7890 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7890()
    ADD ESP,0x4                         ; 004aaaf0
    MOV AH,byte ptr [ESP]               ; 004aaaf3
    INC EBP                             ; 004aaaf6
    TEST AH,AH                          ; 004aaaf7
    JZ 0x004aa8f9                       ; 004aaaf9
        ;   XREF to: 004aa8f9 (CONDITIONAL_JUMP)  ; LAB_004aa8f9
    MOV EBX,0x5c1237                    ; 004aaaff | = "section"
    LEA EAX,[ESP + 0x400]               ; 004aab04
    MOV ESI,ESP                         ; 004aab0b
    MOV dword ptr [ESP + 0x5b8],EAX     ; 004aab0d
    MOV AL,byte ptr [ESI]               ; 004aab14
        ;   Label: LAB_004aab14
    INC AL                              ; 004aab16
    MOVZX EDI,AL                        ; 004aab18
    MOV DL,byte ptr [EDI + 0x6074b8]    ; 004aab1b | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004aab21
    TEST DL,0x2                         ; 004aab24
    JZ 0x004aab2d                       ; 004aab27
        ;   XREF to: 004aab2d (CONDITIONAL_JUMP)  ; LAB_004aab2d
    MOV ESI,EAX                         ; 004aab29
    JMP 0x004aab14                      ; 004aab2b
        ;   XREF to: 004aab14 (UNCONDITIONAL_JUMP)  ; LAB_004aab14
    CMP byte ptr [ESI],0x5c             ; 004aab2d
        ;   Label: LAB_004aab2d
    JZ 0x004aab64                       ; 004aab30
        ;   XREF to: 004aab64 (CONDITIONAL_JUMP)  ; LAB_004aab64
    MOV EBX,0x5c126c                    ; 004aab32 | = "title"
        ;   Label: LAB_004aab32
    LEA EAX,[ESP + 0x400]               ; 004aab37
    MOV ESI,ESP                         ; 004aab3e
    MOV dword ptr [ESP + 0x5bc],EAX     ; 004aab40
    MOV AL,byte ptr [ESI]               ; 004aab47
        ;   Label: LAB_004aab47
    INC AL                              ; 004aab49
    MOVZX EDI,AL                        ; 004aab4b
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004aab4e | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004aab54
    TEST DH,0x2                         ; 004aab57
    JZ 0x004aac47                       ; 004aab5a
        ;   XREF to: 004aac47 (CONDITIONAL_JUMP)  ; LAB_004aac47
    MOV ESI,EAX                         ; 004aab60
    JMP 0x004aab47                      ; 004aab62
        ;   XREF to: 004aab47 (UNCONDITIONAL_JUMP)  ; LAB_004aab47
    MOV CL,byte ptr [EBX]               ; 004aab64 | = "section"
        ;   Label: LAB_004aab64
    MOV ESI,EAX                         ; 004aab66
    TEST CL,CL                          ; 004aab68
    JZ 0x004aab95                       ; 004aab6a
        ;   XREF to: 004aab95 (CONDITIONAL_JUMP)  ; LAB_004aab95
    XOR EAX,EAX                         ; 004aab6c
        ;   Label: LAB_004aab6c
    MOV AL,byte ptr [ESI]               ; 004aab6e
    PUSH EAX                            ; 004aab70
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aab71
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004aab76
    XOR EAX,EAX                         ; 004aab78
    ADD ESP,0x4                         ; 004aab7a
    MOV AL,byte ptr [EBX]               ; 004aab7d | = "section"
    PUSH EAX                            ; 004aab7f
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aab80
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004aab85
    CMP EDI,EAX                         ; 004aab88
    JNZ 0x004aab32                      ; 004aab8a
        ;   XREF to: 004aab32 (CONDITIONAL_JUMP)  ; LAB_004aab32
    MOV CH,byte ptr [EBX + 0x1]         ; 004aab8c | s_ection_005c1237+1
    INC EBX                             ; 004aab8f
    INC ESI                             ; 004aab90
    TEST CH,CH                          ; 004aab91
    JNZ 0x004aab6c                      ; 004aab93
        ;   XREF to: 004aab6c (CONDITIONAL_JUMP)  ; LAB_004aab6c
    MOV AL,byte ptr [ESI]               ; 004aab95
        ;   Label: LAB_004aab95
    INC AL                              ; 004aab97
    AND EAX,0xff                        ; 004aab99
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004aab9e | DAT_006074b8
    JZ 0x004aabaa                       ; 004aaba5
        ;   XREF to: 004aabaa (CONDITIONAL_JUMP)  ; LAB_004aabaa
    INC ESI                             ; 004aaba7
    JMP 0x004aab95                      ; 004aaba8
        ;   XREF to: 004aab95 (UNCONDITIONAL_JUMP)  ; LAB_004aab95
    MOV EDI,dword ptr [ESP + 0x5b8]     ; 004aabaa
        ;   Label: LAB_004aabaa
    PUSH EDI                            ; 004aabb1
    MOV AL,byte ptr [ESI]               ; 004aabb2
        ;   Label: LAB_004aabb2
    MOV byte ptr [EDI],AL               ; 004aabb4
    CMP AL,0x0                          ; 004aabb6
    JZ 0x004aabca                       ; 004aabb8
        ;   XREF to: 004aabca (CONDITIONAL_JUMP)  ; LAB_004aabca
    MOV AL,byte ptr [ESI + 0x1]         ; 004aabba
    ADD ESI,0x2                         ; 004aabbd
    MOV byte ptr [EDI + 0x1],AL         ; 004aabc0
    ADD EDI,0x2                         ; 004aabc3
    CMP AL,0x0                          ; 004aabc6
    JNZ 0x004aabb2                      ; 004aabc8
        ;   XREF to: 004aabb2 (CONDITIONAL_JUMP)  ; LAB_004aabb2
    POP EDI                             ; 004aabca
        ;   Label: LAB_004aabca
    MOV EAX,[0x01d0d210]                ; 004aabcb | DAT_01d0d210
    CMP EAX,0x6                         ; 004aabd0
    JGE 0x004aac27                      ; 004aabd3
        ;   XREF to: 004aac27 (CONDITIONAL_JUMP)  ; LAB_004aac27
    IMUL EAX,EAX,0x2e4                  ; 004aabd5
    MOV EDX,0x1d0d214                   ; 004aabdb
    ADD EDX,EAX                         ; 004aabe0
    LEA ESI,[ESP + 0x400]               ; 004aabe2
    MOV EDI,EDX                         ; 004aabe9
    XOR ECX,ECX                         ; 004aabeb
    PUSH EDI                            ; 004aabed
    MOV AL,byte ptr [ESI]               ; 004aabee
        ;   Label: LAB_004aabee
    MOV byte ptr [EDI],AL               ; 004aabf0
    CMP AL,0x0                          ; 004aabf2
    JZ 0x004aac06                       ; 004aabf4
        ;   XREF to: 004aac06 (CONDITIONAL_JUMP)  ; LAB_004aac06
    MOV AL,byte ptr [ESI + 0x1]         ; 004aabf6
    ADD ESI,0x2                         ; 004aabf9
    MOV byte ptr [EDI + 0x1],AL         ; 004aabfc
    ADD EDI,0x2                         ; 004aabff
    CMP AL,0x0                          ; 004aac02
    JNZ 0x004aabee                      ; 004aac04
        ;   XREF to: 004aabee (CONDITIONAL_JUMP)  ; LAB_004aabee
    POP EDI                             ; 004aac06
        ;   Label: LAB_004aac06
    MOV EBX,dword ptr [0x01d0d210]      ; 004aac07 | DAT_01d0d210
    MOV dword ptr [ESP + 0x5b4],ECX     ; 004aac0d
    INC EBX                             ; 004aac14
    MOV dword ptr [ESP + 0x5b0],EDX     ; 004aac15
    MOV dword ptr [0x01d0d210],EBX      ; 004aac1c | DAT_01d0d210
    JMP 0x004aa8f9                      ; 004aac22
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004aac27
        ;   Label: LAB_004aac27
    MOV ESI,dword ptr [ESP + 0x5fc]     ; 004aac28
    PUSH ESI                            ; 004aac2f
    PUSH 0x5c123f                       ; 004aac30 | = "Too many field notes sections in %s, ..."
    PUSH 0x1d0d010                      ; 004aac35 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004aac3a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004aac3f
    JMP 0x004aaa32                      ; 004aac42
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    CMP byte ptr [ESI],0x5c             ; 004aac47
        ;   Label: LAB_004aac47
    JZ 0x004aac7e                       ; 004aac4a
        ;   XREF to: 004aac7e (CONDITIONAL_JUMP)  ; LAB_004aac7e
    MOV EBX,0x5c129a                    ; 004aac4c | = "entry"
        ;   Label: LAB_004aac4c
    LEA EAX,[ESP + 0x400]               ; 004aac51
    MOV ESI,ESP                         ; 004aac58
    MOV dword ptr [ESP + 0x5c0],EAX     ; 004aac5a
    MOV AL,byte ptr [ESI]               ; 004aac61
        ;   Label: LAB_004aac61
    INC AL                              ; 004aac63
    MOVZX EDI,AL                        ; 004aac65
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004aac68 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004aac6e
    TEST DH,0x2                         ; 004aac71
    JZ 0x004aadd4                       ; 004aac74
        ;   XREF to: 004aadd4 (CONDITIONAL_JUMP)  ; LAB_004aadd4
    MOV ESI,EAX                         ; 004aac7a
    JMP 0x004aac61                      ; 004aac7c
        ;   XREF to: 004aac61 (UNCONDITIONAL_JUMP)  ; LAB_004aac61
    MOV CH,byte ptr [EBX]               ; 004aac7e | = "title"
        ;   Label: LAB_004aac7e
    MOV ESI,EAX                         ; 004aac80
    TEST CH,CH                          ; 004aac82
    JZ 0x004aacaf                       ; 004aac84
        ;   XREF to: 004aacaf (CONDITIONAL_JUMP)  ; LAB_004aacaf
    XOR EAX,EAX                         ; 004aac86
        ;   Label: LAB_004aac86
    MOV AL,byte ptr [ESI]               ; 004aac88
    PUSH EAX                            ; 004aac8a
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aac8b
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004aac90
    XOR EAX,EAX                         ; 004aac92
    ADD ESP,0x4                         ; 004aac94
    MOV AL,byte ptr [EBX]               ; 004aac97 | = "title"
    PUSH EAX                            ; 004aac99
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aac9a
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004aac9f
    CMP EDI,EAX                         ; 004aaca2
    JNZ 0x004aac4c                      ; 004aaca4
        ;   XREF to: 004aac4c (CONDITIONAL_JUMP)  ; LAB_004aac4c
    MOV AL,byte ptr [EBX + 0x1]         ; 004aaca6 | s_itle_005c126c+1
    INC EBX                             ; 004aaca9
    INC ESI                             ; 004aacaa
    TEST AL,AL                          ; 004aacab
    JNZ 0x004aac86                      ; 004aacad
        ;   XREF to: 004aac86 (CONDITIONAL_JUMP)  ; LAB_004aac86
    MOV AL,byte ptr [ESI]               ; 004aacaf
        ;   Label: LAB_004aacaf
    INC AL                              ; 004aacb1
    AND EAX,0xff                        ; 004aacb3
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004aacb8 | DAT_006074b8
    JZ 0x004aacc4                       ; 004aacbf
        ;   XREF to: 004aacc4 (CONDITIONAL_JUMP)  ; LAB_004aacc4
    INC ESI                             ; 004aacc1
    JMP 0x004aacaf                      ; 004aacc2
        ;   XREF to: 004aacaf (UNCONDITIONAL_JUMP)  ; LAB_004aacaf
    MOV EDI,dword ptr [ESP + 0x5bc]     ; 004aacc4
        ;   Label: LAB_004aacc4
    PUSH EDI                            ; 004aaccb
    MOV AL,byte ptr [ESI]               ; 004aaccc
        ;   Label: LAB_004aaccc
    MOV byte ptr [EDI],AL               ; 004aacce
    CMP AL,0x0                          ; 004aacd0
    JZ 0x004aace4                       ; 004aacd2
        ;   XREF to: 004aace4 (CONDITIONAL_JUMP)  ; LAB_004aace4
    MOV AL,byte ptr [ESI + 0x1]         ; 004aacd4
    ADD ESI,0x2                         ; 004aacd7
    MOV byte ptr [EDI + 0x1],AL         ; 004aacda
    ADD EDI,0x2                         ; 004aacdd
    CMP AL,0x0                          ; 004aace0
    JNZ 0x004aaccc                      ; 004aace2
        ;   XREF to: 004aaccc (CONDITIONAL_JUMP)  ; LAB_004aaccc
    POP EDI                             ; 004aace4
        ;   Label: LAB_004aace4
    MOV EDI,dword ptr [ESP + 0x5b4]     ; 004aace5
    TEST EDI,EDI                        ; 004aacec
    JZ 0x004aad9a                       ; 004aacee
        ;   XREF to: 004aad9a (CONDITIONAL_JUMP)  ; LAB_004aad9a
    LEA ESI,[ESP + 0x400]               ; 004aacf4
    ADD EDI,0x40                        ; 004aacfb
    PUSH EDI                            ; 004aacfe
        ;   Label: LAB_004aacfe
    MOV AL,byte ptr [ESI]               ; 004aacff
        ;   Label: LAB_004aacff
    MOV byte ptr [EDI],AL               ; 004aad01
    CMP AL,0x0                          ; 004aad03
    JZ 0x004aad17                       ; 004aad05
        ;   XREF to: 004aad17 (CONDITIONAL_JUMP)  ; LAB_004aad17
    MOV AL,byte ptr [ESI + 0x1]         ; 004aad07
    ADD ESI,0x2                         ; 004aad0a
    MOV byte ptr [EDI + 0x1],AL         ; 004aad0d
    ADD EDI,0x2                         ; 004aad10
    CMP AL,0x0                          ; 004aad13
    JNZ 0x004aacff                      ; 004aad15
        ;   XREF to: 004aacff (CONDITIONAL_JUMP)  ; LAB_004aacff
    POP EDI                             ; 004aad17
        ;   Label: LAB_004aad17
    MOV ECX,dword ptr [ESP + 0x5b4]     ; 004aad18
    TEST ECX,ECX                        ; 004aad1f
    JZ 0x004aa8f9                       ; 004aad21
        ;   XREF to: 004aa8f9 (CONDITIONAL_JUMP)  ; LAB_004aa8f9
    CMP dword ptr [ESP + 0x5a4],0x0     ; 004aad27
    JZ 0x004aa8f9                       ; 004aad2f
        ;   XREF to: 004aa8f9 (CONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH 0x3f                           ; 004aad35
    LEA EBX,[ECX + 0x40]                ; 004aad37
    PUSH EBX                            ; 004aad3a
    LEA EAX,[ESP + 0x56c]               ; 004aad3b
    PUSH EAX                            ; 004aad42
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 004aad43
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 004aad48
    MOV ESI,0x5c1298                    ; 004aad4b | DAT_005c1298
    MOV EDI,EBX                         ; 004aad50
    PUSH EDI                            ; 004aad52
    MOV AL,byte ptr [ESI]               ; 004aad53 | DAT_005c1298 | = "entry"
        ;   Label: LAB_004aad53
    MOV byte ptr [EDI],AL               ; 004aad55
    CMP AL,0x0                          ; 004aad57
    JZ 0x004aad6b                       ; 004aad59
        ;   XREF to: 004aad6b (CONDITIONAL_JUMP)  ; LAB_004aad6b
    MOV AL,byte ptr [ESI + 0x1]         ; 004aad5b | DAT_005c1299 | s_ntry_005c129a+1
    ADD ESI,0x2                         ; 004aad5e
    MOV byte ptr [EDI + 0x1],AL         ; 004aad61
    ADD EDI,0x2                         ; 004aad64
    CMP AL,0x0                          ; 004aad67
    JNZ 0x004aad53                      ; 004aad69
        ;   XREF to: 004aad53 (CONDITIONAL_JUMP)  ; LAB_004aad53
    POP EDI                             ; 004aad6b
        ;   Label: LAB_004aad6b
    LEA ESI,[ESP + 0x564]               ; 004aad6c
    PUSH EDI                            ; 004aad73
    SUB ECX,ECX                         ; 004aad74
    DEC ECX                             ; 004aad76
    MOV AL,0x0                          ; 004aad77
    SCASB.REPNE ES:EDI                  ; 004aad79
    DEC EDI                             ; 004aad7b
    MOV AL,byte ptr [ESI]               ; 004aad7c
        ;   Label: LAB_004aad7c
    MOV byte ptr [EDI],AL               ; 004aad7e
    CMP AL,0x0                          ; 004aad80
    JZ 0x004aad94                       ; 004aad82
        ;   XREF to: 004aad94 (CONDITIONAL_JUMP)  ; LAB_004aad94
    MOV AL,byte ptr [ESI + 0x1]         ; 004aad84
    ADD ESI,0x2                         ; 004aad87
    MOV byte ptr [EDI + 0x1],AL         ; 004aad8a
    ADD EDI,0x2                         ; 004aad8d
    CMP AL,0x0                          ; 004aad90
    JNZ 0x004aad7c                      ; 004aad92
        ;   XREF to: 004aad7c (CONDITIONAL_JUMP)  ; LAB_004aad7c
    POP EDI                             ; 004aad94
        ;   Label: LAB_004aad94
    JMP 0x004aa8f9                      ; 004aad95
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    MOV EAX,dword ptr [ESP + 0x5b0]     ; 004aad9a
        ;   Label: LAB_004aad9a
    TEST EAX,EAX                        ; 004aada1
    JZ 0x004aadb4                       ; 004aada3
        ;   XREF to: 004aadb4 (CONDITIONAL_JUMP)  ; LAB_004aadb4
    LEA ESI,[ESP + 0x400]               ; 004aada5
    LEA EDI,[EAX + 0x40]                ; 004aadac
    JMP 0x004aacfe                      ; 004aadaf
        ;   XREF to: 004aacfe (UNCONDITIONAL_JUMP)  ; LAB_004aacfe
    PUSH EBP                            ; 004aadb4
        ;   Label: LAB_004aadb4
    MOV EDX,dword ptr [ESP + 0x5fc]     ; 004aadb5
    PUSH EDX                            ; 004aadbc
    PUSH 0x5c1272                       ; 004aadbd | = "Didn't expect '\\title' in %s, line %d"
    PUSH 0x1d0d010                      ; 004aadc2 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004aadc7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004aadcc
    JMP 0x004aaa32                      ; 004aadcf
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    CMP byte ptr [ESI],0x5c             ; 004aadd4
        ;   Label: LAB_004aadd4
    JZ 0x004aae0b                       ; 004aadd7
        ;   XREF to: 004aae0b (CONDITIONAL_JUMP)  ; LAB_004aae0b
    MOV EBX,0x5c12e1                    ; 004aadd9 | DAT_005c12e1
        ;   Label: LAB_004aadd9
    LEA EAX,[ESP + 0x400]               ; 004aadde
    MOV ESI,ESP                         ; 004aade5
    MOV dword ptr [ESP + 0x5c8],EAX     ; 004aade7
    MOV AL,byte ptr [ESI]               ; 004aadee
        ;   Label: LAB_004aadee
    INC AL                              ; 004aadf0
    MOVZX EDI,AL                        ; 004aadf2
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004aadf5 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004aadfb
    TEST DH,0x2                         ; 004aadfe
    JZ 0x004aaf45                       ; 004aae01
        ;   XREF to: 004aaf45 (CONDITIONAL_JUMP)  ; LAB_004aaf45
    MOV ESI,EAX                         ; 004aae07
    JMP 0x004aadee                      ; 004aae09
        ;   XREF to: 004aadee (UNCONDITIONAL_JUMP)  ; LAB_004aadee
    MOV CH,byte ptr [EBX]               ; 004aae0b | = "entry"
        ;   Label: LAB_004aae0b
    MOV ESI,EAX                         ; 004aae0d
    TEST CH,CH                          ; 004aae0f
    JZ 0x004aae3c                       ; 004aae11
        ;   XREF to: 004aae3c (CONDITIONAL_JUMP)  ; LAB_004aae3c
    XOR EAX,EAX                         ; 004aae13
        ;   Label: LAB_004aae13
    MOV AL,byte ptr [ESI]               ; 004aae15
    PUSH EAX                            ; 004aae17
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aae18
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004aae1d
    XOR EAX,EAX                         ; 004aae1f
    ADD ESP,0x4                         ; 004aae21
    MOV AL,byte ptr [EBX]               ; 004aae24 | = "entry"
    PUSH EAX                            ; 004aae26
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aae27
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004aae2c
    CMP EDI,EAX                         ; 004aae2f
    JNZ 0x004aadd9                      ; 004aae31
        ;   XREF to: 004aadd9 (CONDITIONAL_JUMP)  ; LAB_004aadd9
    MOV AL,byte ptr [EBX + 0x1]         ; 004aae33 | s_ntry_005c129a+1
    INC EBX                             ; 004aae36
    INC ESI                             ; 004aae37
    TEST AL,AL                          ; 004aae38
    JNZ 0x004aae13                      ; 004aae3a
        ;   XREF to: 004aae13 (CONDITIONAL_JUMP)  ; LAB_004aae13
    MOV AL,byte ptr [ESI]               ; 004aae3c
        ;   Label: LAB_004aae3c
    INC AL                              ; 004aae3e
    AND EAX,0xff                        ; 004aae40
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004aae45 | DAT_006074b8
    JZ 0x004aae51                       ; 004aae4c
        ;   XREF to: 004aae51 (CONDITIONAL_JUMP)  ; LAB_004aae51
    INC ESI                             ; 004aae4e
    JMP 0x004aae3c                      ; 004aae4f
        ;   XREF to: 004aae3c (UNCONDITIONAL_JUMP)  ; LAB_004aae3c
    MOV EDI,dword ptr [ESP + 0x5c0]     ; 004aae51
        ;   Label: LAB_004aae51
    PUSH EDI                            ; 004aae58
    MOV AL,byte ptr [ESI]               ; 004aae59
        ;   Label: LAB_004aae59
    MOV byte ptr [EDI],AL               ; 004aae5b
    CMP AL,0x0                          ; 004aae5d
    JZ 0x004aae71                       ; 004aae5f
        ;   XREF to: 004aae71 (CONDITIONAL_JUMP)  ; LAB_004aae71
    MOV AL,byte ptr [ESI + 0x1]         ; 004aae61
    ADD ESI,0x2                         ; 004aae64
    MOV byte ptr [EDI + 0x1],AL         ; 004aae67
    ADD EDI,0x2                         ; 004aae6a
    CMP AL,0x0                          ; 004aae6d
    JNZ 0x004aae59                      ; 004aae6f
        ;   XREF to: 004aae59 (CONDITIONAL_JUMP)  ; LAB_004aae59
    POP EDI                             ; 004aae71
        ;   Label: LAB_004aae71
    XOR ESI,ESI                         ; 004aae72
    MOV EDI,dword ptr [ESP + 0x5b0]     ; 004aae74
    MOV dword ptr [ESP + 0x5a4],ESI     ; 004aae7b
    TEST EDI,EDI                        ; 004aae82
    JZ 0x004aaeec                       ; 004aae84
        ;   XREF to: 004aaeec (CONDITIONAL_JUMP)  ; LAB_004aaeec
    LEA EDI,[ESP + 0x400]               ; 004aae86
    MOV EDX,dword ptr [0x01d0d210]      ; 004aae8d | DAT_01d0d210
    MOV dword ptr [ESP + 0x5c4],ESI     ; 004aae93
    XOR EBX,EBX                         ; 004aae9a
    TEST EDX,EDX                        ; 004aae9c
    JLE 0x004aaec6                      ; 004aae9e
        ;   XREF to: 004aaec6 (CONDITIONAL_JUMP)  ; LAB_004aaec6
    MOV ESI,0x1d0d214                   ; 004aaea0
    PUSH EDI                            ; 004aaea5
        ;   Label: LAB_004aaea5
    PUSH ESI                            ; 004aaea6
    CALL core_fldnotes.cpp_FUN_004a9c30 ; 004aaea7
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9c30()
    ADD ESP,0x8                         ; 004aaeac
    MOV EDX,EAX                         ; 004aaeaf
    TEST EAX,EAX                        ; 004aaeb1
    JZ 0x004aaf0c                       ; 004aaeb3
        ;   XREF to: 004aaf0c (CONDITIONAL_JUMP)  ; LAB_004aaf0c
    MOV ECX,dword ptr [ESP + 0x5c4]     ; 004aaeb5
    TEST ECX,ECX                        ; 004aaebc
    JZ 0x004aaec2                       ; 004aaebe
        ;   XREF to: 004aaec2 (CONDITIONAL_JUMP)  ; LAB_004aaec2
    MOV dword ptr [ECX],EBX             ; 004aaec0
    TEST EDX,EDX                        ; 004aaec2
        ;   Label: LAB_004aaec2
    JNZ 0x004aaf1e                      ; 004aaec4
        ;   XREF to: 004aaf1e (CONDITIONAL_JUMP)  ; LAB_004aaf1e
    PUSH 0x0                            ; 004aaec6
        ;   Label: LAB_004aaec6
    LEA EAX,[ESP + 0x404]               ; 004aaec8
    PUSH EAX                            ; 004aaecf
    MOV EBX,dword ptr [ESP + 0x5b8]     ; 004aaed0
    PUSH EBX                            ; 004aaed7
    CALL core_fldnotes.cpp_FUN_004a9c80 ; 004aaed8
        ;   XREF to: 004a9c80 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9c80()
    ADD ESP,0xc                         ; 004aaedd
    MOV dword ptr [ESP + 0x5b4],EAX     ; 004aaee0
    JMP 0x004aa8f9                      ; 004aaee7
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004aaeec
        ;   Label: LAB_004aaeec
    MOV ECX,dword ptr [ESP + 0x5fc]     ; 004aaeed
    PUSH ECX                            ; 004aaef4
    PUSH 0x5c12a0                       ; 004aaef5 | = "Didn't expect '\\entry' in %s, line %d"
    PUSH 0x1d0d010                      ; 004aaefa | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004aaeff
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004aaf04
    JMP 0x004aaa32                      ; 004aaf07
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    MOV EAX,[0x01d0d210]                ; 004aaf0c | DAT_01d0d210
        ;   Label: LAB_004aaf0c
    INC EBX                             ; 004aaf11
    ADD ESI,0x2e4                       ; 004aaf12
    CMP EBX,EAX                         ; 004aaf18
    JL 0x004aaea5                       ; 004aaf1a
        ;   XREF to: 004aaea5 (CONDITIONAL_JUMP)  ; LAB_004aaea5
    JMP 0x004aaec6                      ; 004aaf1c
        ;   XREF to: 004aaec6 (UNCONDITIONAL_JUMP)  ; LAB_004aaec6
    MOV ESI,dword ptr [ESP + 0x5f8]     ; 004aaf1e
        ;   Label: LAB_004aaf1e
    PUSH ESI                            ; 004aaf25
    LEA EAX,[ESP + 0x404]               ; 004aaf26
    PUSH EAX                            ; 004aaf2d
    PUSH 0x5c12c6                       ; 004aaf2e | = "Duplicate entry '%s' in %s"
    PUSH 0x1d0d010                      ; 004aaf33 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004aaf38
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004aaf3d
    JMP 0x004aaa32                      ; 004aaf40
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    CMP byte ptr [ESI],0x5c             ; 004aaf45
        ;   Label: LAB_004aaf45
    JZ 0x004aaf7c                       ; 004aaf48
        ;   XREF to: 004aaf7c (CONDITIONAL_JUMP)  ; LAB_004aaf7c
    MOV EBX,0x5c1326                    ; 004aaf4a | DAT_005c1326
        ;   Label: LAB_004aaf4a
    LEA EAX,[ESP + 0x400]               ; 004aaf4f
    MOV ESI,ESP                         ; 004aaf56
    MOV dword ptr [ESP + 0x5d0],EAX     ; 004aaf58
    MOV AL,byte ptr [ESI]               ; 004aaf5f
        ;   Label: LAB_004aaf5f
    INC AL                              ; 004aaf61
    MOVZX EDI,AL                        ; 004aaf63
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004aaf66 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004aaf6c
    TEST DH,0x2                         ; 004aaf6f
    JZ 0x004ab0b8                       ; 004aaf72
        ;   XREF to: 004ab0b8 (CONDITIONAL_JUMP)  ; LAB_004ab0b8
    MOV ESI,EAX                         ; 004aaf78
    JMP 0x004aaf5f                      ; 004aaf7a
        ;   XREF to: 004aaf5f (UNCONDITIONAL_JUMP)  ; LAB_004aaf5f
    MOV CH,byte ptr [EBX]               ; 004aaf7c | DAT_005c12e1
        ;   Label: LAB_004aaf7c
    MOV ESI,EAX                         ; 004aaf7e
    TEST CH,CH                          ; 004aaf80
    JZ 0x004aafad                       ; 004aaf82
        ;   XREF to: 004aafad (CONDITIONAL_JUMP)  ; LAB_004aafad
    XOR EAX,EAX                         ; 004aaf84
        ;   Label: LAB_004aaf84
    MOV AL,byte ptr [ESI]               ; 004aaf86
    PUSH EAX                            ; 004aaf88
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aaf89
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004aaf8e
    XOR EAX,EAX                         ; 004aaf90
    ADD ESP,0x4                         ; 004aaf92
    MOV AL,byte ptr [EBX]               ; 004aaf95 | DAT_005c12e1
    PUSH EAX                            ; 004aaf97
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004aaf98
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004aaf9d
    CMP EDI,EAX                         ; 004aafa0
    JNZ 0x004aaf4a                      ; 004aafa2
        ;   XREF to: 004aaf4a (CONDITIONAL_JUMP)  ; LAB_004aaf4a
    MOV AL,byte ptr [EBX + 0x1]         ; 004aafa4 | DAT_005c12e2
    INC EBX                             ; 004aafa7
    INC ESI                             ; 004aafa8
    TEST AL,AL                          ; 004aafa9
    JNZ 0x004aaf84                      ; 004aafab
        ;   XREF to: 004aaf84 (CONDITIONAL_JUMP)  ; LAB_004aaf84
    MOV AL,byte ptr [ESI]               ; 004aafad
        ;   Label: LAB_004aafad
    INC AL                              ; 004aafaf
    AND EAX,0xff                        ; 004aafb1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004aafb6 | DAT_006074b8
    JZ 0x004aafc2                       ; 004aafbd
        ;   XREF to: 004aafc2 (CONDITIONAL_JUMP)  ; LAB_004aafc2
    INC ESI                             ; 004aafbf
    JMP 0x004aafad                      ; 004aafc0
        ;   XREF to: 004aafad (UNCONDITIONAL_JUMP)  ; LAB_004aafad
    MOV EDI,dword ptr [ESP + 0x5c8]     ; 004aafc2
        ;   Label: LAB_004aafc2
    PUSH EDI                            ; 004aafc9
    MOV AL,byte ptr [ESI]               ; 004aafca
        ;   Label: LAB_004aafca
    MOV byte ptr [EDI],AL               ; 004aafcc
    CMP AL,0x0                          ; 004aafce
    JZ 0x004aafe2                       ; 004aafd0
        ;   XREF to: 004aafe2 (CONDITIONAL_JUMP)  ; LAB_004aafe2
    MOV AL,byte ptr [ESI + 0x1]         ; 004aafd2
    ADD ESI,0x2                         ; 004aafd5
    MOV byte ptr [EDI + 0x1],AL         ; 004aafd8
    ADD EDI,0x2                         ; 004aafdb
    CMP AL,0x0                          ; 004aafde
    JNZ 0x004aafca                      ; 004aafe0
        ;   XREF to: 004aafca (CONDITIONAL_JUMP)  ; LAB_004aafca
    POP EDI                             ; 004aafe2
        ;   Label: LAB_004aafe2
    XOR EDI,EDI                         ; 004aafe3
    MOV EAX,dword ptr [ESP + 0x5b0]     ; 004aafe5
    MOV dword ptr [ESP + 0x5a4],EDI     ; 004aafec
    TEST EAX,EAX                        ; 004aaff3
    JZ 0x004ab05f                       ; 004aaff5
        ;   XREF to: 004ab05f (CONDITIONAL_JUMP)  ; LAB_004ab05f
    LEA EDI,[ESP + 0x400]               ; 004aaff7
    MOV ECX,dword ptr [0x01d0d210]      ; 004aaffe | DAT_01d0d210
    XOR EDX,EDX                         ; 004ab004
    XOR EBX,EBX                         ; 004ab006
    MOV dword ptr [ESP + 0x5cc],EDX     ; 004ab008
    TEST ECX,ECX                        ; 004ab00f
    JLE 0x004ab039                      ; 004ab011
        ;   XREF to: 004ab039 (CONDITIONAL_JUMP)  ; LAB_004ab039
    MOV ESI,0x1d0d214                   ; 004ab013
    PUSH EDI                            ; 004ab018
        ;   Label: LAB_004ab018
    PUSH ESI                            ; 004ab019
    CALL core_fldnotes.cpp_FUN_004a9c30 ; 004ab01a
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9c30()
    ADD ESP,0x8                         ; 004ab01f
    MOV EDX,EAX                         ; 004ab022
    TEST EAX,EAX                        ; 004ab024
    JZ 0x004ab07f                       ; 004ab026
        ;   XREF to: 004ab07f (CONDITIONAL_JUMP)  ; LAB_004ab07f
    MOV ECX,dword ptr [ESP + 0x5cc]     ; 004ab028
    TEST ECX,ECX                        ; 004ab02f
    JZ 0x004ab035                       ; 004ab031
        ;   XREF to: 004ab035 (CONDITIONAL_JUMP)  ; LAB_004ab035
    MOV dword ptr [ECX],EBX             ; 004ab033
    TEST EDX,EDX                        ; 004ab035
        ;   Label: LAB_004ab035
    JNZ 0x004ab091                      ; 004ab037
        ;   XREF to: 004ab091 (CONDITIONAL_JUMP)  ; LAB_004ab091
    PUSH 0x2                            ; 004ab039
        ;   Label: LAB_004ab039
    LEA EAX,[ESP + 0x404]               ; 004ab03b
    PUSH EAX                            ; 004ab042
    MOV EBX,dword ptr [ESP + 0x5b8]     ; 004ab043
    PUSH EBX                            ; 004ab04a
    CALL core_fldnotes.cpp_FUN_004a9c80 ; 004ab04b
        ;   XREF to: 004a9c80 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9c80()
    ADD ESP,0xc                         ; 004ab050
    MOV dword ptr [ESP + 0x5b4],EAX     ; 004ab053
    JMP 0x004aa8f9                      ; 004ab05a
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004ab05f
        ;   Label: LAB_004ab05f
    MOV EBX,dword ptr [ESP + 0x5fc]     ; 004ab060
    PUSH EBX                            ; 004ab067
    PUSH 0x5c12e6                       ; 004ab068 | = "Didn't expect '\\task' in %s, line %d"
    PUSH 0x1d0d010                      ; 004ab06d | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab072
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab077
    JMP 0x004aaa32                      ; 004ab07a
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    MOV EAX,[0x01d0d210]                ; 004ab07f | DAT_01d0d210
        ;   Label: LAB_004ab07f
    INC EBX                             ; 004ab084
    ADD ESI,0x2e4                       ; 004ab085
    CMP EBX,EAX                         ; 004ab08b
    JL 0x004ab018                       ; 004ab08d
        ;   XREF to: 004ab018 (CONDITIONAL_JUMP)  ; LAB_004ab018
    JMP 0x004ab039                      ; 004ab08f
        ;   XREF to: 004ab039 (UNCONDITIONAL_JUMP)  ; LAB_004ab039
    MOV ESI,dword ptr [ESP + 0x5f8]     ; 004ab091
        ;   Label: LAB_004ab091
    PUSH ESI                            ; 004ab098
    LEA EAX,[ESP + 0x404]               ; 004ab099
    PUSH EAX                            ; 004ab0a0
    PUSH 0x5c130b                       ; 004ab0a1 | = "Duplicate entry '%s' in %s"
    PUSH 0x1d0d010                      ; 004ab0a6 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab0ab
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab0b0
    JMP 0x004aaa32                      ; 004ab0b3
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    CMP byte ptr [ESI],0x5c             ; 004ab0b8
        ;   Label: LAB_004ab0b8
    JZ 0x004ab0ef                       ; 004ab0bb
        ;   XREF to: 004ab0ef (CONDITIONAL_JUMP)  ; LAB_004ab0ef
    MOV EBX,0x5c136a                    ; 004ab0bd | = "image"
        ;   Label: LAB_004ab0bd
    LEA EAX,[ESP + 0x400]               ; 004ab0c2
    MOV ESI,ESP                         ; 004ab0c9
    MOV dword ptr [ESP + 0x5d4],EAX     ; 004ab0cb
    MOV AL,byte ptr [ESI]               ; 004ab0d2
        ;   Label: LAB_004ab0d2
    INC AL                              ; 004ab0d4
    MOVZX EDI,AL                        ; 004ab0d6
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004ab0d9 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004ab0df
    TEST DH,0x2                         ; 004ab0e2
    JZ 0x004ab1f6                       ; 004ab0e5
        ;   XREF to: 004ab1f6 (CONDITIONAL_JUMP)  ; LAB_004ab1f6
    MOV ESI,EAX                         ; 004ab0eb
    JMP 0x004ab0d2                      ; 004ab0ed
        ;   XREF to: 004ab0d2 (UNCONDITIONAL_JUMP)  ; LAB_004ab0d2
    MOV CH,byte ptr [EBX]               ; 004ab0ef | DAT_005c1326
        ;   Label: LAB_004ab0ef
    MOV ESI,EAX                         ; 004ab0f1
    TEST CH,CH                          ; 004ab0f3
    JZ 0x004ab120                       ; 004ab0f5
        ;   XREF to: 004ab120 (CONDITIONAL_JUMP)  ; LAB_004ab120
    XOR EAX,EAX                         ; 004ab0f7
        ;   Label: LAB_004ab0f7
    MOV AL,byte ptr [ESI]               ; 004ab0f9
    PUSH EAX                            ; 004ab0fb
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab0fc
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004ab101
    XOR EAX,EAX                         ; 004ab103
    ADD ESP,0x4                         ; 004ab105
    MOV AL,byte ptr [EBX]               ; 004ab108 | DAT_005c1326
    PUSH EAX                            ; 004ab10a
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab10b
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004ab110
    CMP EDI,EAX                         ; 004ab113
    JNZ 0x004ab0bd                      ; 004ab115
        ;   XREF to: 004ab0bd (CONDITIONAL_JUMP)  ; LAB_004ab0bd
    MOV AL,byte ptr [EBX + 0x1]         ; 004ab117 | DAT_005c1327
    INC EBX                             ; 004ab11a
    INC ESI                             ; 004ab11b
    TEST AL,AL                          ; 004ab11c
    JNZ 0x004ab0f7                      ; 004ab11e
        ;   XREF to: 004ab0f7 (CONDITIONAL_JUMP)  ; LAB_004ab0f7
    MOV AL,byte ptr [ESI]               ; 004ab120
        ;   Label: LAB_004ab120
    INC AL                              ; 004ab122
    AND EAX,0xff                        ; 004ab124
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004ab129 | DAT_006074b8
    JZ 0x004ab135                       ; 004ab130
        ;   XREF to: 004ab135 (CONDITIONAL_JUMP)  ; LAB_004ab135
    INC ESI                             ; 004ab132
    JMP 0x004ab120                      ; 004ab133
        ;   XREF to: 004ab120 (UNCONDITIONAL_JUMP)  ; LAB_004ab120
    MOV EDI,dword ptr [ESP + 0x5d0]     ; 004ab135
        ;   Label: LAB_004ab135
    PUSH EDI                            ; 004ab13c
    MOV AL,byte ptr [ESI]               ; 004ab13d
        ;   Label: LAB_004ab13d
    MOV byte ptr [EDI],AL               ; 004ab13f
    CMP AL,0x0                          ; 004ab141
    JZ 0x004ab155                       ; 004ab143
        ;   XREF to: 004ab155 (CONDITIONAL_JUMP)  ; LAB_004ab155
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab145
    ADD ESI,0x2                         ; 004ab148
    MOV byte ptr [EDI + 0x1],AL         ; 004ab14b
    ADD EDI,0x2                         ; 004ab14e
    CMP AL,0x0                          ; 004ab151
    JNZ 0x004ab13d                      ; 004ab153
        ;   XREF to: 004ab13d (CONDITIONAL_JUMP)  ; LAB_004ab13d
    POP EDI                             ; 004ab155
        ;   Label: LAB_004ab155
    MOV EDI,0x1                         ; 004ab156
    MOV EAX,dword ptr [ESP + 0x5b0]     ; 004ab15b
    MOV dword ptr [ESP + 0x5a4],EDI     ; 004ab162
    TEST EAX,EAX                        ; 004ab169
    JZ 0x004ab1ca                       ; 004ab16b
        ;   XREF to: 004ab1ca (CONDITIONAL_JUMP)  ; LAB_004ab1ca
    CMP dword ptr [0x01d0e36c],0xa      ; 004ab16d | DAT_01d0e36c
    JGE 0x004ab1ea                      ; 004ab174
        ;   XREF to: 004ab1ea (CONDITIONAL_JUMP)  ; LAB_004ab1ea
    PUSH 0x5                            ; 004ab176
    LEA EAX,[ESP + 0x404]               ; 004ab178
    PUSH EAX                            ; 004ab17f
    MOV ECX,dword ptr [ESP + 0x5b8]     ; 004ab180
    PUSH ECX                            ; 004ab187
    CALL core_fldnotes.cpp_FUN_004a9c80 ; 004ab188
        ;   XREF to: 004a9c80 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9c80()
    MOV EDX,dword ptr [0x01d0e36c]      ; 004ab18d | DAT_01d0e36c
    MOV ESI,EDX                         ; 004ab193
    MOV dword ptr [EAX + 0x158],EDX     ; 004ab195
    IMUL EDX,EDX,0x126c                 ; 004ab19b
    ADD ESP,0xc                         ; 004ab1a1
    ADD EDX,0x1d0e370                   ; 004ab1a4
    MOV dword ptr [ESP + 0x5b4],EAX     ; 004ab1aa
    ADD ESI,EDI                         ; 004ab1b1
    MOV dword ptr [EDX + 0x5f0],0x0     ; 004ab1b3
    MOV dword ptr [0x01d0e36c],ESI      ; 004ab1bd | DAT_01d0e36c
    MOV dword ptr [EDX],EAX             ; 004ab1c3
    JMP 0x004aa8f9                      ; 004ab1c5
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004ab1ca
        ;   Label: LAB_004ab1ca
    MOV EDI,dword ptr [ESP + 0x5fc]     ; 004ab1cb
    PUSH EDI                            ; 004ab1d2
    PUSH 0x5c132a                       ; 004ab1d3 | = "Didn't expect '\\map' in %s, line %d"
    PUSH 0x1d0d010                      ; 004ab1d8 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab1dd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab1e2
    JMP 0x004aaa32                      ; 004ab1e5
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    PUSH 0xa                            ; 004ab1ea
        ;   Label: LAB_004ab1ea
    PUSH 0x5c134e                       ; 004ab1ec | = "Too many maps!  (max is %d)"
    JMP 0x004aaa25                      ; 004ab1f1
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    CMP byte ptr [ESI],0x5c             ; 004ab1f6
        ;   Label: LAB_004ab1f6
    JZ 0x004ab22d                       ; 004ab1f9
        ;   XREF to: 004ab22d (CONDITIONAL_JUMP)  ; LAB_004ab22d
    MOV EBX,0x5c1442                    ; 004ab1fb | DAT_005c1442
        ;   Label: LAB_004ab1fb
    LEA EAX,[ESP + 0x400]               ; 004ab200
    MOV ESI,ESP                         ; 004ab207
    MOV dword ptr [ESP + 0x5d8],EAX     ; 004ab209
    MOV AL,byte ptr [ESI]               ; 004ab210
        ;   Label: LAB_004ab210
    INC AL                              ; 004ab212
    MOVZX EDI,AL                        ; 004ab214
    MOV CL,byte ptr [EDI + 0x6074b8]    ; 004ab217 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004ab21d
    TEST CL,0x2                         ; 004ab220
    JZ 0x004ab374                       ; 004ab223
        ;   XREF to: 004ab374 (CONDITIONAL_JUMP)  ; LAB_004ab374
    MOV ESI,EAX                         ; 004ab229
    JMP 0x004ab210                      ; 004ab22b
        ;   XREF to: 004ab210 (UNCONDITIONAL_JUMP)  ; LAB_004ab210
    MOV CH,byte ptr [EBX]               ; 004ab22d | = "image"
        ;   Label: LAB_004ab22d
    MOV ESI,EAX                         ; 004ab22f
    TEST CH,CH                          ; 004ab231
    JZ 0x004ab25e                       ; 004ab233
        ;   XREF to: 004ab25e (CONDITIONAL_JUMP)  ; LAB_004ab25e
    XOR EAX,EAX                         ; 004ab235
        ;   Label: LAB_004ab235
    MOV AL,byte ptr [ESI]               ; 004ab237
    PUSH EAX                            ; 004ab239
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab23a
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004ab23f
    XOR EAX,EAX                         ; 004ab241
    ADD ESP,0x4                         ; 004ab243
    MOV AL,byte ptr [EBX]               ; 004ab246 | = "image"
    PUSH EAX                            ; 004ab248
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab249
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004ab24e
    CMP EDI,EAX                         ; 004ab251
    JNZ 0x004ab1fb                      ; 004ab253
        ;   XREF to: 004ab1fb (CONDITIONAL_JUMP)  ; LAB_004ab1fb
    MOV AL,byte ptr [EBX + 0x1]         ; 004ab255 | s_mage_005c136a+1
    INC EBX                             ; 004ab258
    INC ESI                             ; 004ab259
    TEST AL,AL                          ; 004ab25a
    JNZ 0x004ab235                      ; 004ab25c
        ;   XREF to: 004ab235 (CONDITIONAL_JUMP)  ; LAB_004ab235
    MOV AL,byte ptr [ESI]               ; 004ab25e
        ;   Label: LAB_004ab25e
    INC AL                              ; 004ab260
    AND EAX,0xff                        ; 004ab262
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004ab267 | DAT_006074b8
    JZ 0x004ab273                       ; 004ab26e
        ;   XREF to: 004ab273 (CONDITIONAL_JUMP)  ; LAB_004ab273
    INC ESI                             ; 004ab270
    JMP 0x004ab25e                      ; 004ab271
        ;   XREF to: 004ab25e (UNCONDITIONAL_JUMP)  ; LAB_004ab25e
    MOV EDI,dword ptr [ESP + 0x5d4]     ; 004ab273
        ;   Label: LAB_004ab273
    PUSH EDI                            ; 004ab27a
    MOV AL,byte ptr [ESI]               ; 004ab27b
        ;   Label: LAB_004ab27b
    MOV byte ptr [EDI],AL               ; 004ab27d
    CMP AL,0x0                          ; 004ab27f
    JZ 0x004ab293                       ; 004ab281
        ;   XREF to: 004ab293 (CONDITIONAL_JUMP)  ; LAB_004ab293
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab283
    ADD ESI,0x2                         ; 004ab286
    MOV byte ptr [EDI + 0x1],AL         ; 004ab289
    ADD EDI,0x2                         ; 004ab28c
    CMP AL,0x0                          ; 004ab28f
    JNZ 0x004ab27b                      ; 004ab291
        ;   XREF to: 004ab27b (CONDITIONAL_JUMP)  ; LAB_004ab27b
    POP EDI                             ; 004ab293
        ;   Label: LAB_004ab293
    MOV EAX,dword ptr [ESP + 0x5b4]     ; 004ab294
    TEST EAX,EAX                        ; 004ab29b
    JZ 0x004ab33e                       ; 004ab29d
        ;   XREF to: 004ab33e (CONDITIONAL_JUMP)  ; LAB_004ab33e
    CMP dword ptr [EAX + 0x140],0x5     ; 004ab2a3
    JNZ 0x004ab33e                      ; 004ab2aa
        ;   XREF to: 004ab33e (CONDITIONAL_JUMP)  ; LAB_004ab33e
    CMP dword ptr [0x01d0e36c],0x1      ; 004ab2b0 | DAT_01d0e36c
    JGE 0x004ab2dc                      ; 004ab2b7
        ;   XREF to: 004ab2dc (CONDITIONAL_JUMP)  ; LAB_004ab2dc
    MOV EBX,0x5c13c0                    ; 004ab2b9 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x976                       ; 004ab2be
    PUSH 0x5c13d5                       ; 004ab2c3 | = "Hell froze!"
    MOV dword ptr [0x01d71de0],EBX      ; 004ab2c8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ab2ce | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ab2d4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ab2d9
    MOV EBX,dword ptr [0x01d0e36c]      ; 004ab2dc | DAT_01d0e36c
        ;   Label: LAB_004ab2dc
    DEC EBX                             ; 004ab2e2
    IMUL EBX,EBX,0x126c                 ; 004ab2e3
    ADD EBX,0x1d0e370                   ; 004ab2e9
    LEA EAX,[EBX + 0x6c]                ; 004ab2ef
    PUSH EAX                            ; 004ab2f2
    LEA EAX,[EBX + 0x68]                ; 004ab2f3
    PUSH EAX                            ; 004ab2f6
    LEA EAX,[ESP + 0x508]               ; 004ab2f7
    PUSH EAX                            ; 004ab2fe
    PUSH 0x5c13e1                       ; 004ab2ff | = "%s %d %d"
    LEA EAX,[ESP + 0x410]               ; 004ab304
    PUSH EAX                            ; 004ab30b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004ab30c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 004ab311
    CMP EAX,0x3                         ; 004ab314
    JNZ 0x004ab349                      ; 004ab317
        ;   XREF to: 004ab349 (CONDITIONAL_JUMP)  ; LAB_004ab349
    CMP byte ptr [EBX + 0x4],0x0        ; 004ab319
    JNZ 0x004ab354                      ; 004ab31d
        ;   XREF to: 004ab354 (CONDITIONAL_JUMP)  ; LAB_004ab354
    PUSH 0x0                            ; 004ab31f
    ADD EBX,0x4                         ; 004ab321
    PUSH EBX                            ; 004ab324
    PUSH 0x0                            ; 004ab325
    PUSH 0x0                            ; 004ab327
    LEA EAX,[ESP + 0x510]               ; 004ab329
    PUSH EAX                            ; 004ab330
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004ab331
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ab336
    JMP 0x004aa8f9                      ; 004ab339
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004ab33e
        ;   Label: LAB_004ab33e
    PUSH 0x5c1370                       ; 004ab33f | = "Can only use \\image in a \\map entry..."
    JMP 0x004aaa25                      ; 004ab344
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    PUSH EBP                            ; 004ab349
        ;   Label: LAB_004ab349
    PUSH 0x5c13ea                       ; 004ab34a | = "Syntax error in \\image parms on line %d"
    JMP 0x004aaa25                      ; 004ab34f
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    PUSH EBP                            ; 004ab354
        ;   Label: LAB_004ab354
    MOV EDI,dword ptr [ESP + 0x5b8]     ; 004ab355
    PUSH EDI                            ; 004ab35c
    PUSH 0x5c1412                       ; 004ab35d | = "Multiple \\image tags found in map %s..."
    PUSH 0x1d0d010                      ; 004ab362 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab367
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab36c
    JMP 0x004aaa32                      ; 004ab36f
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    CMP byte ptr [ESI],0x5c             ; 004ab374
        ;   Label: LAB_004ab374
    JZ 0x004ab3ab                       ; 004ab377
        ;   XREF to: 004ab3ab (CONDITIONAL_JUMP)  ; LAB_004ab3ab
    MOV EBX,0x5c1510                    ; 004ab379 | = "annotation"
        ;   Label: LAB_004ab379
    LEA EAX,[ESP + 0x400]               ; 004ab37e
    MOV ESI,ESP                         ; 004ab385
    MOV dword ptr [ESP + 0x5dc],EAX     ; 004ab387
    MOV AL,byte ptr [ESI]               ; 004ab38e
        ;   Label: LAB_004ab38e
    INC AL                              ; 004ab390
    MOVZX EDI,AL                        ; 004ab392
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004ab395 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004ab39b
    TEST DH,0x2                         ; 004ab39e
    JZ 0x004ab513                       ; 004ab3a1
        ;   XREF to: 004ab513 (CONDITIONAL_JUMP)  ; LAB_004ab513
    MOV ESI,EAX                         ; 004ab3a7
    JMP 0x004ab38e                      ; 004ab3a9
        ;   XREF to: 004ab38e (UNCONDITIONAL_JUMP)  ; LAB_004ab38e
    MOV ESI,EAX                         ; 004ab3ab
        ;   Label: LAB_004ab3ab
    CMP byte ptr [EBX],0x0              ; 004ab3ad | DAT_005c1442
    JZ 0x004ab3db                       ; 004ab3b0
        ;   XREF to: 004ab3db (CONDITIONAL_JUMP)  ; LAB_004ab3db
    XOR EAX,EAX                         ; 004ab3b2
        ;   Label: LAB_004ab3b2
    MOV AL,byte ptr [ESI]               ; 004ab3b4
    PUSH EAX                            ; 004ab3b6
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab3b7
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004ab3bc
    XOR EAX,EAX                         ; 004ab3be
    ADD ESP,0x4                         ; 004ab3c0
    MOV AL,byte ptr [EBX]               ; 004ab3c3 | DAT_005c1442
    PUSH EAX                            ; 004ab3c5
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab3c6
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004ab3cb
    CMP EDI,EAX                         ; 004ab3ce
    JNZ 0x004ab379                      ; 004ab3d0
        ;   XREF to: 004ab379 (CONDITIONAL_JUMP)  ; LAB_004ab379
    MOV AH,byte ptr [EBX + 0x1]         ; 004ab3d2 | DAT_005c1443
    INC EBX                             ; 004ab3d5
    INC ESI                             ; 004ab3d6
    TEST AH,AH                          ; 004ab3d7
    JNZ 0x004ab3b2                      ; 004ab3d9
        ;   XREF to: 004ab3b2 (CONDITIONAL_JUMP)  ; LAB_004ab3b2
    MOV AL,byte ptr [ESI]               ; 004ab3db
        ;   Label: LAB_004ab3db
    INC AL                              ; 004ab3dd
    AND EAX,0xff                        ; 004ab3df
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004ab3e4 | DAT_006074b8
    JZ 0x004ab3f0                       ; 004ab3eb
        ;   XREF to: 004ab3f0 (CONDITIONAL_JUMP)  ; LAB_004ab3f0
    INC ESI                             ; 004ab3ed
    JMP 0x004ab3db                      ; 004ab3ee
        ;   XREF to: 004ab3db (UNCONDITIONAL_JUMP)  ; LAB_004ab3db
    MOV EDI,dword ptr [ESP + 0x5d8]     ; 004ab3f0
        ;   Label: LAB_004ab3f0
    PUSH EDI                            ; 004ab3f7
    MOV AL,byte ptr [ESI]               ; 004ab3f8
        ;   Label: LAB_004ab3f8
    MOV byte ptr [EDI],AL               ; 004ab3fa
    CMP AL,0x0                          ; 004ab3fc
    JZ 0x004ab410                       ; 004ab3fe
        ;   XREF to: 004ab410 (CONDITIONAL_JUMP)  ; LAB_004ab410
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab400
    ADD ESI,0x2                         ; 004ab403
    MOV byte ptr [EDI + 0x1],AL         ; 004ab406
    ADD EDI,0x2                         ; 004ab409
    CMP AL,0x0                          ; 004ab40c
    JNZ 0x004ab3f8                      ; 004ab40e
        ;   XREF to: 004ab3f8 (CONDITIONAL_JUMP)  ; LAB_004ab3f8
    POP EDI                             ; 004ab410
        ;   Label: LAB_004ab410
    MOV EAX,dword ptr [ESP + 0x5b4]     ; 004ab411
    TEST EAX,EAX                        ; 004ab418
    JZ 0x004ab4dd                       ; 004ab41a
        ;   XREF to: 004ab4dd (CONDITIONAL_JUMP)  ; LAB_004ab4dd
    CMP dword ptr [EAX + 0x140],0x5     ; 004ab420
    JNZ 0x004ab4dd                      ; 004ab427
        ;   XREF to: 004ab4dd (CONDITIONAL_JUMP)  ; LAB_004ab4dd
    CMP dword ptr [0x01d0e36c],0x1      ; 004ab42d | DAT_01d0e36c
    JGE 0x004ab459                      ; 004ab434
        ;   XREF to: 004ab459 (CONDITIONAL_JUMP)  ; LAB_004ab459
    MOV EBX,0x5c1474                    ; 004ab436 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x99a                       ; 004ab43b
    PUSH 0x5c1489                       ; 004ab440 | = "Hell froze!"
    MOV dword ptr [0x01d71de0],EBX      ; 004ab445 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ab44b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ab451
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ab456
    MOV EAX,[0x01d0e36c]                ; 004ab459 | DAT_01d0e36c
        ;   Label: LAB_004ab459
    DEC EAX                             ; 004ab45e
    IMUL EAX,EAX,0x126c                 ; 004ab45f
    ADD EAX,0x1d0e370                   ; 004ab465
    MOV EDI,dword ptr [EAX + 0x9c]      ; 004ab46a
    CMP EDI,0xa                         ; 004ab470
    JGE 0x004ab4e8                      ; 004ab473
        ;   XREF to: 004ab4e8 (CONDITIONAL_JUMP)  ; LAB_004ab4e8
    IMUL EDX,EDI,0x88                   ; 004ab475
    LEA EBX,[EAX + 0xa0]                ; 004ab47b
    LEA ESI,[EDI + 0x1]                 ; 004ab481
    ADD EBX,EDX                         ; 004ab484
    MOV dword ptr [EAX + 0x9c],ESI      ; 004ab486
    LEA EAX,[EBX + 0x80]                ; 004ab48c
    PUSH EAX                            ; 004ab492
    LEA EAX,[EBX + 0x7c]                ; 004ab493
    PUSH EAX                            ; 004ab496
    LEA EAX,[EBX + 0x78]                ; 004ab497
    PUSH EAX                            ; 004ab49a
    LEA EAX,[EBX + 0x74]                ; 004ab49b
    PUSH EAX                            ; 004ab49e
    LEA EAX,[EBX + 0x70]                ; 004ab49f
    PUSH EAX                            ; 004ab4a2
    LEA EAX,[EBX + 0x6c]                ; 004ab4a3
    PUSH EAX                            ; 004ab4a6
    LEA EAX,[EBX + 0x68]                ; 004ab4a7
    PUSH EAX                            ; 004ab4aa
    LEA EAX,[EBX + 0x64]                ; 004ab4ab
    PUSH EAX                            ; 004ab4ae
    PUSH EBX                            ; 004ab4af
    PUSH 0x5c14ba                       ; 004ab4b0 | = "%s %d , %d , %d , %d , %f , %f , %f , %f"
    LEA EAX,[ESP + 0x428]               ; 004ab4b5
    PUSH EAX                            ; 004ab4bc
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004ab4bd
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x2c                        ; 004ab4c2
    CMP EAX,0x9                         ; 004ab4c5
    JNZ 0x004ab508                      ; 004ab4c8
        ;   XREF to: 004ab508 (CONDITIONAL_JUMP)  ; LAB_004ab508
    PUSH 0x5c150b                       ; 004ab4ca | DAT_005c150b
    PUSH EBX                            ; 004ab4cf
    CALL engine_dosio.cpp_changeFileExtension_FUN_00465f80 ; 004ab4d0
        ;   XREF to: 00465f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_00465f80(char * path, char * new_extension)
    ADD ESP,0x8                         ; 004ab4d5
    JMP 0x004aa8f9                      ; 004ab4d8
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004ab4dd
        ;   Label: LAB_004ab4dd
    PUSH 0x5c1446                       ; 004ab4de | = "Can only use \\set in a \\map entry o..."
    JMP 0x004aaa25                      ; 004ab4e3
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    PUSH EBP                            ; 004ab4e8
        ;   Label: LAB_004ab4e8
    MOV EDI,dword ptr [ESP + 0x5b8]     ; 004ab4e9
    PUSH EDI                            ; 004ab4f0
    PUSH 0x5c1495                       ; 004ab4f1 | = "Too many \\sets in map %s at line %d."
    PUSH 0x1d0d010                      ; 004ab4f6 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab4fb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab500
    JMP 0x004aaa32                      ; 004ab503
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    PUSH EBP                            ; 004ab508
        ;   Label: LAB_004ab508
    PUSH 0x5c14e3                       ; 004ab509 | = "Syntax error in \\image parms on line %d"
    JMP 0x004aaa25                      ; 004ab50e
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    CMP byte ptr [ESI],0x5c             ; 004ab513
        ;   Label: LAB_004ab513
    JZ 0x004ab54a                       ; 004ab516
        ;   XREF to: 004ab54a (CONDITIONAL_JUMP)  ; LAB_004ab54a
    MOV EBX,0x5c15e3                    ; 004ab518 | DAT_005c15e3
        ;   Label: LAB_004ab518
    LEA EAX,[ESP + 0x400]               ; 004ab51d
    MOV ESI,ESP                         ; 004ab524
    MOV dword ptr [ESP + 0x5e0],EAX     ; 004ab526
    MOV AL,byte ptr [ESI]               ; 004ab52d
        ;   Label: LAB_004ab52d
    INC AL                              ; 004ab52f
    MOVZX EDI,AL                        ; 004ab531
    MOV DH,byte ptr [EDI + 0x6074b8]    ; 004ab534 | DAT_006074b8
    LEA EAX,[ESI + 0x1]                 ; 004ab53a
    TEST DH,0x2                         ; 004ab53d
    JZ 0x004ab6b0                       ; 004ab540
        ;   XREF to: 004ab6b0 (CONDITIONAL_JUMP)  ; LAB_004ab6b0
    MOV ESI,EAX                         ; 004ab546
    JMP 0x004ab52d                      ; 004ab548
        ;   XREF to: 004ab52d (UNCONDITIONAL_JUMP)  ; LAB_004ab52d
    MOV CH,byte ptr [EBX]               ; 004ab54a | = "annotation"
        ;   Label: LAB_004ab54a
    MOV ESI,EAX                         ; 004ab54c
    TEST CH,CH                          ; 004ab54e
    JZ 0x004ab57b                       ; 004ab550
        ;   XREF to: 004ab57b (CONDITIONAL_JUMP)  ; LAB_004ab57b
    XOR EAX,EAX                         ; 004ab552
        ;   Label: LAB_004ab552
    MOV AL,byte ptr [ESI]               ; 004ab554
    PUSH EAX                            ; 004ab556
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab557
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004ab55c
    XOR EAX,EAX                         ; 004ab55e
    ADD ESP,0x4                         ; 004ab560
    MOV AL,byte ptr [EBX]               ; 004ab563 | = "annotation"
    PUSH EAX                            ; 004ab565
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab566
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004ab56b
    CMP EDI,EAX                         ; 004ab56e
    JNZ 0x004ab518                      ; 004ab570
        ;   XREF to: 004ab518 (CONDITIONAL_JUMP)  ; LAB_004ab518
    MOV AL,byte ptr [EBX + 0x1]         ; 004ab572 | s_nnotation_005c1510+1
    INC EBX                             ; 004ab575
    INC ESI                             ; 004ab576
    TEST AL,AL                          ; 004ab577
    JNZ 0x004ab552                      ; 004ab579
        ;   XREF to: 004ab552 (CONDITIONAL_JUMP)  ; LAB_004ab552
    MOV AL,byte ptr [ESI]               ; 004ab57b
        ;   Label: LAB_004ab57b
    INC AL                              ; 004ab57d
    AND EAX,0xff                        ; 004ab57f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004ab584 | DAT_006074b8
    JZ 0x004ab590                       ; 004ab58b
        ;   XREF to: 004ab590 (CONDITIONAL_JUMP)  ; LAB_004ab590
    INC ESI                             ; 004ab58d
    JMP 0x004ab57b                      ; 004ab58e
        ;   XREF to: 004ab57b (UNCONDITIONAL_JUMP)  ; LAB_004ab57b
    MOV EDI,dword ptr [ESP + 0x5dc]     ; 004ab590
        ;   Label: LAB_004ab590
    PUSH EDI                            ; 004ab597
    MOV AL,byte ptr [ESI]               ; 004ab598
        ;   Label: LAB_004ab598
    MOV byte ptr [EDI],AL               ; 004ab59a
    CMP AL,0x0                          ; 004ab59c
    JZ 0x004ab5b0                       ; 004ab59e
        ;   XREF to: 004ab5b0 (CONDITIONAL_JUMP)  ; LAB_004ab5b0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab5a0
    ADD ESI,0x2                         ; 004ab5a3
    MOV byte ptr [EDI + 0x1],AL         ; 004ab5a6
    ADD EDI,0x2                         ; 004ab5a9
    CMP AL,0x0                          ; 004ab5ac
    JNZ 0x004ab598                      ; 004ab5ae
        ;   XREF to: 004ab598 (CONDITIONAL_JUMP)  ; LAB_004ab598
    POP EDI                             ; 004ab5b0
        ;   Label: LAB_004ab5b0
    MOV EAX,dword ptr [ESP + 0x5b4]     ; 004ab5b1
    TEST EAX,EAX                        ; 004ab5b8
    JZ 0x004ab67a                       ; 004ab5ba
        ;   XREF to: 004ab67a (CONDITIONAL_JUMP)  ; LAB_004ab67a
    CMP dword ptr [EAX + 0x140],0x5     ; 004ab5c0
    JNZ 0x004ab67a                      ; 004ab5c7
        ;   XREF to: 004ab67a (CONDITIONAL_JUMP)  ; LAB_004ab67a
    CMP dword ptr [0x01d0e36c],0x1      ; 004ab5cd | DAT_01d0e36c
    JGE 0x004ab5f9                      ; 004ab5d4
        ;   XREF to: 004ab5f9 (CONDITIONAL_JUMP)  ; LAB_004ab5f9
    MOV EBX,0x5c1550                    ; 004ab5d6 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x9c6                       ; 004ab5db
    PUSH 0x5c1565                       ; 004ab5e0 | = "Hell froze!"
    MOV dword ptr [0x01d71de0],EBX      ; 004ab5e5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ab5eb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ab5f1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ab5f6
    MOV EAX,[0x01d0e36c]                ; 004ab5f9 | DAT_01d0e36c
        ;   Label: LAB_004ab5f9
    DEC EAX                             ; 004ab5fe
    IMUL EAX,EAX,0x126c                 ; 004ab5ff
    ADD EAX,0x1d0e370                   ; 004ab605
    MOV EDI,dword ptr [EAX + 0x5f0]     ; 004ab60a
    CMP EDI,0xf                         ; 004ab610
    JGE 0x004ab685                      ; 004ab613
        ;   XREF to: 004ab685 (CONDITIONAL_JUMP)  ; LAB_004ab685
    IMUL EBX,EDI,0xd4                   ; 004ab615
    LEA EDX,[EAX + 0x5f4]               ; 004ab61b
    ADD EBX,EDX                         ; 004ab621
    LEA ESI,[EBX + 0x64]                ; 004ab623
    LEA ECX,[EDI + 0x1]                 ; 004ab626
    PUSH ESI                            ; 004ab629
    MOV dword ptr [EAX + 0x5f0],ECX     ; 004ab62a
    LEA EAX,[EBX + 0xcc]                ; 004ab630
    PUSH EAX                            ; 004ab636
    LEA EAX,[EBX + 0xc8]                ; 004ab637
    PUSH EAX                            ; 004ab63d
    PUSH EBX                            ; 004ab63e
    PUSH 0x5c159d                       ; 004ab63f | = "%[^,], %d , %d , \"%[^\"]\""
    LEA EAX,[ESP + 0x414]               ; 004ab644
    PUSH EAX                            ; 004ab64b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004ab64c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 004ab651
    CMP EAX,0x4                         ; 004ab654
    JNZ 0x004ab6a5                      ; 004ab657
        ;   XREF to: 004ab6a5 (CONDITIONAL_JUMP)  ; LAB_004ab6a5
    PUSH EBX                            ; 004ab659
    CALL unkaddr_004a76f0.cpp_FUN_004a7890 ; 004ab65a
        ;   XREF to: 004a7890 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7890()
    ADD ESP,0x4                         ; 004ab65f
    PUSH ESI                            ; 004ab662
    CALL unkaddr_004a76f0.cpp_FUN_004a7890 ; 004ab663
        ;   XREF to: 004a7890 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7890()
    ADD ESP,0x4                         ; 004ab668
    MOV dword ptr [EBX + 0xd0],0x0      ; 004ab66b
    JMP 0x004aa8f9                      ; 004ab675
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    PUSH EBP                            ; 004ab67a
        ;   Label: LAB_004ab67a
    PUSH 0x5c151b                       ; 004ab67b | = "Can only use \\annotation in a \\map ..."
    JMP 0x004aaa25                      ; 004ab680
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    PUSH EBP                            ; 004ab685
        ;   Label: LAB_004ab685
    MOV EBX,dword ptr [ESP + 0x5b8]     ; 004ab686
    PUSH EBX                            ; 004ab68d
    PUSH 0x5c1571                       ; 004ab68e | = "Too many \\annotations in map %s at l..."
    PUSH 0x1d0d010                      ; 004ab693 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab698
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab69d
    JMP 0x004aaa32                      ; 004ab6a0
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    PUSH EBP                            ; 004ab6a5
        ;   Label: LAB_004ab6a5
    PUSH 0x5c15b6                       ; 004ab6a6 | = "Syntax error in \\annotation parms on..."
    JMP 0x004aaa25                      ; 004ab6ab
        ;   XREF to: 004aaa25 (UNCONDITIONAL_JUMP)  ; LAB_004aaa25
    CMP byte ptr [ESI],0x5c             ; 004ab6b0
        ;   Label: LAB_004ab6b0
    JZ 0x004ab6e5                       ; 004ab6b3
        ;   XREF to: 004ab6e5 (CONDITIONAL_JUMP)  ; LAB_004ab6e5
    CMP byte ptr [ESP],0x5c             ; 004ab6b5
        ;   Label: LAB_004ab6b5
    JZ 0x004ab751                       ; 004ab6b9
        ;   XREF to: 004ab751 (CONDITIONAL_JUMP)  ; LAB_004ab751
    MOV ESI,dword ptr [ESP + 0x5b4]     ; 004ab6bf
    TEST ESI,ESI                        ; 004ab6c6
    JZ 0x004ab776                       ; 004ab6c8
        ;   XREF to: 004ab776 (CONDITIONAL_JUMP)  ; LAB_004ab776
    MOV EAX,ESP                         ; 004ab6ce
    PUSH EAX                            ; 004ab6d0
    LEA EAX,[ESI + 0x148]               ; 004ab6d1
    PUSH EAX                            ; 004ab6d7
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004ab6d8
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004ab6dd
    JMP 0x004aa8f9                      ; 004ab6e0
        ;   XREF to: 004aa8f9 (UNCONDITIONAL_JUMP)  ; LAB_004aa8f9
    MOV CH,byte ptr [EBX]               ; 004ab6e5 | DAT_005c15e3
        ;   Label: LAB_004ab6e5
    MOV ESI,EAX                         ; 004ab6e7
    TEST CH,CH                          ; 004ab6e9
    JZ 0x004ab716                       ; 004ab6eb
        ;   XREF to: 004ab716 (CONDITIONAL_JUMP)  ; LAB_004ab716
    XOR EAX,EAX                         ; 004ab6ed
        ;   Label: LAB_004ab6ed
    MOV AL,byte ptr [ESI]               ; 004ab6ef
    PUSH EAX                            ; 004ab6f1
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab6f2
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004ab6f7
    XOR EAX,EAX                         ; 004ab6f9
    ADD ESP,0x4                         ; 004ab6fb
    MOV AL,byte ptr [EBX]               ; 004ab6fe | DAT_005c15e3
    PUSH EAX                            ; 004ab700
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004ab701
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004ab706
    CMP EDI,EAX                         ; 004ab709
    JNZ 0x004ab6b5                      ; 004ab70b
        ;   XREF to: 004ab6b5 (CONDITIONAL_JUMP)  ; LAB_004ab6b5
    MOV AL,byte ptr [EBX + 0x1]         ; 004ab70d | DAT_005c15e4
    INC EBX                             ; 004ab710
    INC ESI                             ; 004ab711
    TEST AL,AL                          ; 004ab712
    JNZ 0x004ab6ed                      ; 004ab714
        ;   XREF to: 004ab6ed (CONDITIONAL_JUMP)  ; LAB_004ab6ed
    MOV AL,byte ptr [ESI]               ; 004ab716
        ;   Label: LAB_004ab716
    INC AL                              ; 004ab718
    AND EAX,0xff                        ; 004ab71a
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004ab71f | DAT_006074b8
    JZ 0x004ab72b                       ; 004ab726
        ;   XREF to: 004ab72b (CONDITIONAL_JUMP)  ; LAB_004ab72b
    INC ESI                             ; 004ab728
    JMP 0x004ab716                      ; 004ab729
        ;   XREF to: 004ab716 (UNCONDITIONAL_JUMP)  ; LAB_004ab716
    MOV EDI,dword ptr [ESP + 0x5e0]     ; 004ab72b
        ;   Label: LAB_004ab72b
    PUSH EDI                            ; 004ab732
    MOV AL,byte ptr [ESI]               ; 004ab733
        ;   Label: LAB_004ab733
    MOV byte ptr [EDI],AL               ; 004ab735
    CMP AL,0x0                          ; 004ab737
    JZ 0x004ab74b                       ; 004ab739
        ;   XREF to: 004ab74b (CONDITIONAL_JUMP)  ; LAB_004ab74b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab73b
    ADD ESI,0x2                         ; 004ab73e
    MOV byte ptr [EDI + 0x1],AL         ; 004ab741
    ADD EDI,0x2                         ; 004ab744
    CMP AL,0x0                          ; 004ab747
    JNZ 0x004ab733                      ; 004ab749
        ;   XREF to: 004ab733 (CONDITIONAL_JUMP)  ; LAB_004ab733
    POP EDI                             ; 004ab74b
        ;   Label: LAB_004ab74b
    JMP 0x004aa931                      ; 004ab74c
        ;   XREF to: 004aa931 (UNCONDITIONAL_JUMP)  ; LAB_004aa931
    PUSH EBP                            ; 004ab751
        ;   Label: LAB_004ab751
    MOV EBP,dword ptr [ESP + 0x5fc]     ; 004ab752
    PUSH EBP                            ; 004ab759
    LEA EAX,[ESP + 0x8]                 ; 004ab75a
    PUSH EAX                            ; 004ab75e
    PUSH 0x5c15e7                       ; 004ab75f | = "Unknown tag: '%s' in %s, line %d"
    PUSH 0x1d0d010                      ; 004ab764 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab769
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x14                        ; 004ab76e
    JMP 0x004aaa32                      ; 004ab771
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32
    PUSH EBP                            ; 004ab776
        ;   Label: LAB_004ab776
    MOV EDI,dword ptr [ESP + 0x5fc]     ; 004ab777
    PUSH EDI                            ; 004ab77e
    PUSH 0x5c1608                       ; 004ab77f | = "No entry started in %s, line %d"
    PUSH 0x1d0d010                      ; 004ab784 | DAT_01d0d010
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab789
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab78e
    JMP 0x004aaa32                      ; 004ab791
        ;   XREF to: 004aaa32 (UNCONDITIONAL_JUMP)  ; LAB_004aaa32

