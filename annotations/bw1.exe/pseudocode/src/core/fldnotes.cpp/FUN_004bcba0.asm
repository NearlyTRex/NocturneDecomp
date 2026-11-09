; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004bcba0(char *param_1,char *param_2,char *param_3)
;
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
;   core_fldnotes.cpp_FUN_004bebc0 at 004becd3
;   core_script.cpp_CScript_step_FUN_00544460 at 00547f2b
;
; Referenced Globals:
;   undefined4 DAT_005df822
;   TerminatedCString s_world_005dfce8
;   TerminatedCString s_Can_t_open_field_notes_f_005dfcee
;   undefined4 DAT_005dfd0d
;   TerminatedCString s_world_005dfd10
;   TerminatedCString s_core_fldnotes_cpp_005dfd16
;   TerminatedCString s_Can_t_open_field_notes_f_005dfd2b
;   TerminatedCString s_section_005dfd4a
;   undefined4 s_ection_005dfd4a+1
;   TerminatedCString s_Too_many_field_notes_sec_005dfd52
;   TerminatedCString s_title_005dfd7f
;   undefined4 s_itle_005dfd7f+1
;   TerminatedCString s_Didn_t_expect_title_in_s_005dfd85
;   TerminatedCString s_entry_005dfdab
;   undefined4 s_ntry_005dfdab+1
;   ... and 52 more
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bb1c0
;   core_fldnotes.cpp_FUN_004bb270
;   core_fldnotes.cpp_FUN_004bbfd0
;   core_fldnotes.cpp_FUN_004bc020
;   core_fldnotes.cpp_FUN_004bc130
;   core_fldnotes.cpp_FUN_004bc2d0
;   core_fldnotes.cpp_FUN_004bdaa0
;   core_main.c_FUN_005030e0
;   crt_ctype.c_toupper_FUN_005c12b0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_ftell_FUN_005c2e90
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_string.c_strstr_FUN_005c2dc0
;   crt_unknown.c_FUN_005bfb40
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcba0
        ;   Label: core_fldnotes.cpp_FUN_004bcba0
    PUSH ESI                            ; 004bcba1
    PUSH EDI                            ; 004bcba2
    PUSH EBP                            ; 004bcba3
    SUB ESP,0x5a4                       ; 004bcba4
    MOV ESI,dword ptr [ESP + 0x5bc]     ; 004bcbaa
    MOV ECX,dword ptr [ESP + 0x5b8]     ; 004bcbb1
    XOR EDX,EDX                         ; 004bcbb8
    PUSH ECX                            ; 004bcbba
    MOV dword ptr [ESP + 0x568],EDX     ; 004bcbbb
    CALL core_fldnotes.cpp_FUN_004bdaa0 ; 004bcbc2
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bdaa0()
    ADD ESP,0x4                         ; 004bcbc7
    MOV EDI,dword ptr [ESP + 0x5b8]     ; 004bcbca
    XOR EBX,EBX                         ; 004bcbd1
    PUSH EDI                            ; 004bcbd3
    MOV AL,byte ptr [ESI]               ; 004bcbd4
        ;   Label: LAB_004bcbd4
    MOV byte ptr [EDI],AL               ; 004bcbd6
    CMP AL,0x0                          ; 004bcbd8
    JZ 0x004bcbec                       ; 004bcbda
        ;   XREF to: 004bcbec (CONDITIONAL_JUMP)  ; LAB_004bcbec
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcbdc
    ADD ESI,0x2                         ; 004bcbdf
    MOV byte ptr [EDI + 0x1],AL         ; 004bcbe2
    ADD EDI,0x2                         ; 004bcbe5
    CMP AL,0x0                          ; 004bcbe8
    JNZ 0x004bcbd4                      ; 004bcbea
        ;   XREF to: 004bcbd4 (CONDITIONAL_JUMP)  ; LAB_004bcbd4
    POP EDI                             ; 004bcbec
        ;   Label: LAB_004bcbec
    MOV ESI,dword ptr [ESP + 0x5c0]     ; 004bcbed
    MOV dword ptr [0x01cc4268],EBX      ; 004bcbf4 | DAT_01cc4268
    TEST ESI,ESI                        ; 004bcbfa
    JZ 0x004bcc08                       ; 004bcbfc
        ;   XREF to: 004bcc08 (CONDITIONAL_JUMP)  ; LAB_004bcc08
    MOV dword ptr [0x01cc4268],0x1      ; 004bcbfe | DAT_01cc4268
    MOV EBP,dword ptr [ESP + 0x5b8]     ; 004bcc08
        ;   Label: LAB_004bcc08
    PUSH EBP                            ; 004bcc0f
    PUSH 0x5dfce8                       ; 004bcc10 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 004bcc15
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004bcc1a
    MOV dword ptr [ESP + 0x568],EAX     ; 004bcc1d
    TEST EAX,EAX                        ; 004bcc24
    JL 0x004bcda8                       ; 004bcc26
        ;   XREF to: 004bcda8 (CONDITIONAL_JUMP)  ; LAB_004bcda8
    PUSH 0x5dfd0d                       ; 004bcc2c | DAT_005dfd0d
    PUSH EBP                            ; 004bcc31
    PUSH 0x5dfd10                       ; 004bcc32 | = "world"
    CALL engine_dosio.cpp_FUN_00479180  ; 004bcc37
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004bcc3c
    MOV dword ptr [ESP + 0x564],EAX     ; 004bcc3f
    TEST EAX,EAX                        ; 004bcc46
    JZ 0x004bce2e                       ; 004bcc48
        ;   XREF to: 004bce2e (CONDITIONAL_JUMP)  ; LAB_004bce2e
    MOV ESI,dword ptr [ESP + 0x564]     ; 004bcc4e
        ;   Label: LAB_004bcc4e
    PUSH ESI                            ; 004bcc55
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 004bcc56
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 004bcc5b
    XOR EBP,EBP                         ; 004bcc5e
    MOV EDI,dword ptr [ESP + 0x568]     ; 004bcc60
    MOV dword ptr [ESP + 0x56c],EBP     ; 004bcc67
    ADD EDI,EAX                         ; 004bcc6e
    MOV dword ptr [ESP + 0x570],EBP     ; 004bcc70
    MOV dword ptr [ESP + 0x568],EDI     ; 004bcc77
    MOV ECX,dword ptr [ESP + 0x564]     ; 004bcc7e
        ;   Label: LAB_004bcc7e
    PUSH ECX                            ; 004bcc85
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 004bcc86
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 004bcc8b
    CMP EAX,dword ptr [ESP + 0x568]     ; 004bcc8e
    JGE 0x004bccbd                      ; 004bcc95
        ;   XREF to: 004bccbd (CONDITIONAL_JUMP)  ; LAB_004bccbd
    MOV ESI,dword ptr [ESP + 0x564]     ; 004bcc97
    PUSH ESI                            ; 004bcc9e
    PUSH 0x400                          ; 004bcc9f
    LEA EAX,[ESP + 0x8]                 ; 004bcca4
    PUSH EAX                            ; 004bcca8
    LEA EBX,[ESP + 0xc]                 ; 004bcca9
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004bccad
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004bccb2
    CMP EAX,EBX                         ; 004bccb5
    JZ 0x004bce57                       ; 004bccb7
        ;   XREF to: 004bce57 (CONDITIONAL_JUMP)  ; LAB_004bce57
    MOV EAX,dword ptr [ESP + 0x564]     ; 004bccbd
        ;   Label: LAB_004bccbd
    PUSH EAX                            ; 004bccc4
    XOR ESI,ESI                         ; 004bccc5
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004bccc7
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004bcccc
    XOR EDX,EDX                         ; 004bcccf
    MOV ECX,dword ptr [0x01cc55cc]      ; 004bccd1 | DAT_01cc55cc
    MOV dword ptr [ESP + 0x564],EDX     ; 004bccd7
    TEST ECX,ECX                        ; 004bccde
    JLE 0x004bcd10                      ; 004bcce0
        ;   XREF to: 004bcd10 (CONDITIONAL_JUMP)  ; LAB_004bcd10
    MOV EBX,0x1cc55d0                   ; 004bcce2
    PUSH EBX                            ; 004bcce7
        ;   Label: LAB_004bcce7
    CALL core_fldnotes.cpp_FUN_004bc2d0 ; 004bcce8
        ;   XREF to: 004bc2d0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc2d0()
    INC ESI                             ; 004bcced
    MOV EDI,dword ptr [0x01cc55cc]      ; 004bccee | DAT_01cc55cc
    ADD ESP,0x4                         ; 004bccf4
    ADD EBX,0x970                       ; 004bccf7
    CMP ESI,EDI                         ; 004bccfd
    JL 0x004bcce7                       ; 004bccff
        ;   XREF to: 004bcce7 (CONDITIONAL_JUMP)  ; LAB_004bcce7
    LEA EAX,[EAX]                       ; 004bcd01
    LEA EDX,[EDX]                       ; 004bcd07
    LEA EAX,[EAX]                       ; 004bcd0d
    MOV EBP,0x1                         ; 004bcd10
        ;   Label: LAB_004bcd10
    MOV EDX,dword ptr [ESP + 0x5c0]     ; 004bcd15
    MOV dword ptr [0x0061d2e4],EBP      ; 004bcd1c | DAT_0061d2e4
    MOV dword ptr [0x0061d2e0],EBP      ; 004bcd22 | DAT_0061d2e0
    TEST EDX,EDX                        ; 004bcd28
    JZ 0x004bcd98                       ; 004bcd2a
        ;   XREF to: 004bcd98 (CONDITIONAL_JUMP)  ; LAB_004bcd98
    PUSH 0x1b8                          ; 004bcd2c
    PUSH 0x1eb                          ; 004bcd31
    PUSH 0x40                           ; 004bcd36
    PUSH 0x60                           ; 004bcd38
    PUSH 0x1cc7cd4                      ; 004bcd3a
    CALL core_fldnotes.cpp_FUN_004bb270 ; 004bcd3f
        ;   XREF to: 004bb270 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb270()
    ADD ESP,0x14                        ; 004bcd44
    PUSH 0x1cc7cd4                      ; 004bcd47
    XOR BL,BL                           ; 004bcd4c
    XOR ESI,ESI                         ; 004bcd4e
    CALL core_fldnotes.cpp_FUN_004bb1c0 ; 004bcd50
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb1c0()
    ADD ESP,0x4                         ; 004bcd55
    MOV byte ptr [0x01cc4270],BL        ; 004bcd58 | DAT_01cc4270
    XOR ECX,ECX                         ; 004bcd5e
    MOV EBX,dword ptr [0x01cc4470]      ; 004bcd60 | DAT_01cc4470
    MOV dword ptr [0x0061d2e4],ECX      ; 004bcd66 | DAT_0061d2e4
    TEST EBX,EBX                        ; 004bcd6c
    JLE 0x004bcd98                      ; 004bcd6e
        ;   XREF to: 004bcd98 (CONDITIONAL_JUMP)  ; LAB_004bcd98
    MOV EBX,0x1cc4474                   ; 004bcd70
    PUSH 0x1cc7cd4                      ; 004bcd75
        ;   Label: LAB_004bcd75
    PUSH EBX                            ; 004bcd7a
    CALL core_fldnotes.cpp_FUN_004bc130 ; 004bcd7b
        ;   XREF to: 004bc130 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc130()
    ADD ESP,0x8                         ; 004bcd80
    TEST EAX,EAX                        ; 004bcd83
    JZ 0x004bcdbb                       ; 004bcd85
        ;   XREF to: 004bcdbb (CONDITIONAL_JUMP)  ; LAB_004bcdbb
    MOV EDI,dword ptr [0x01cc4470]      ; 004bcd87 | DAT_01cc4470
    INC ESI                             ; 004bcd8d
    ADD EBX,0x2e4                       ; 004bcd8e
    CMP ESI,EDI                         ; 004bcd94
    JL 0x004bcd75                       ; 004bcd96
        ;   XREF to: 004bcd75 (CONDITIONAL_JUMP)  ; LAB_004bcd75
    MOV EAX,0x1                         ; 004bcd98
        ;   Label: LAB_004bcd98
    ADD ESP,0x5a4                       ; 004bcd9d
    POP EBP                             ; 004bcda3
    POP EDI                             ; 004bcda4
    POP ESI                             ; 004bcda5
    POP EBX                             ; 004bcda6
    RET                                 ; 004bcda7
    PUSH EBP                            ; 004bcda8
        ;   Label: LAB_004bcda8
    PUSH 0x5dfcee                       ; 004bcda9 | = "Can't open field notes file %s"
    PUSH 0x1cc4270                      ; 004bcdae | DAT_01cc4270
        ;   Label: LAB_004bcdae
    CALL crt_unknown.c_FUN_005bfb40     ; 004bcdb3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004bcdb8
    MOV EBP,dword ptr [ESP + 0x564]     ; 004bcdbb
        ;   Label: LAB_004bcdbb
    TEST EBP,EBP                        ; 004bcdc2
    JZ 0x004bcdcf                       ; 004bcdc4
        ;   XREF to: 004bcdcf (CONDITIONAL_JUMP)  ; LAB_004bcdcf
    PUSH EBP                            ; 004bcdc6
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004bcdc7
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004bcdcc
    MOV EDX,dword ptr [ESP + 0x5c0]     ; 004bcdcf
        ;   Label: LAB_004bcdcf
    TEST EDX,EDX                        ; 004bcdd6
    JNZ 0x004bce0b                      ; 004bcdd8
        ;   XREF to: 004bce0b (CONDITIONAL_JUMP)  ; LAB_004bce0b
    PUSH 0x1cc4270                      ; 004bcdda | DAT_01cc4270
    MOV ECX,dword ptr [0x0061abc0]      ; 004bcddf | g_CEditorToolsPtr
    PUSH ECX                            ; 004bcde5
    CALL shape_edittool.cpp_FUN_004943a0 ; 004bcde6
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 004bcdeb
    MOV EBX,dword ptr [ESP + 0x5b8]     ; 004bcdee
        ;   Label: LAB_004bcdee
    PUSH EBX                            ; 004bcdf5
    CALL core_fldnotes.cpp_FUN_004bdaa0 ; 004bcdf6
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bdaa0()
    ADD ESP,0x4                         ; 004bcdfb
    XOR EAX,EAX                         ; 004bcdfe
    ADD ESP,0x5a4                       ; 004bce00
    POP EBP                             ; 004bce06
    POP EDI                             ; 004bce07
    POP ESI                             ; 004bce08
    POP EBX                             ; 004bce09
    RET                                 ; 004bce0a
    MOV ESI,0x1cc4270                   ; 004bce0b
        ;   Label: LAB_004bce0b
    MOV EDI,EDX                         ; 004bce10
    PUSH EDI                            ; 004bce12
    MOV AL,byte ptr [ESI]               ; 004bce13 | DAT_01cc4270 | DAT_01cc4272
        ;   Label: LAB_004bce13
    MOV byte ptr [EDI],AL               ; 004bce15
    CMP AL,0x0                          ; 004bce17
    JZ 0x004bce2b                       ; 004bce19
        ;   XREF to: 004bce2b (CONDITIONAL_JUMP)  ; LAB_004bce2b
    MOV AL,byte ptr [ESI + 0x1]         ; 004bce1b | DAT_01cc4271 | DAT_01cc4273
    ADD ESI,0x2                         ; 004bce1e
    MOV byte ptr [EDI + 0x1],AL         ; 004bce21
    ADD EDI,0x2                         ; 004bce24
    CMP AL,0x0                          ; 004bce27
    JNZ 0x004bce13                      ; 004bce29
        ;   XREF to: 004bce13 (CONDITIONAL_JUMP)  ; LAB_004bce13
    POP EDI                             ; 004bce2b
        ;   Label: LAB_004bce2b
    JMP 0x004bcdee                      ; 004bce2c
        ;   XREF to: 004bcdee (UNCONDITIONAL_JUMP)  ; LAB_004bcdee
    PUSH EBP                            ; 004bce2e
        ;   Label: LAB_004bce2e
    MOV EDX,0x5dfd16                    ; 004bce2f | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x8ee                       ; 004bce34
    PUSH 0x5dfd2b                       ; 004bce39 | = "Can't open field notes file %s"
    MOV dword ptr [0x01d1d400],EDX      ; 004bce3e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004bce44 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bce4a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004bce4f
    JMP 0x004bcc4e                      ; 004bce52
        ;   XREF to: 004bcc4e (UNCONDITIONAL_JUMP)  ; LAB_004bcc4e
    PUSH 0x5df822                       ; 004bce57 | DAT_005df822
        ;   Label: LAB_004bce57
    PUSH EBX                            ; 004bce5c
    CALL crt_string.c_strstr_FUN_005c2dc0 ; 004bce5d
        ;   XREF to: 005c2dc0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005c2dc0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004bce62
    TEST EAX,EAX                        ; 004bce65
    JZ 0x004bce6c                       ; 004bce67
        ;   XREF to: 004bce6c (CONDITIONAL_JUMP)  ; LAB_004bce6c
    MOV byte ptr [EAX],0x0              ; 004bce69
    PUSH EBX                            ; 004bce6c
        ;   Label: LAB_004bce6c
    CALL unkaddr_004b9ab0.cpp_FUN_004b9c50 ; 004bce6d
        ;   XREF to: 004b9c50 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004b9c50()
    ADD ESP,0x4                         ; 004bce72
    MOV AH,byte ptr [ESP]               ; 004bce75
    INC EBP                             ; 004bce78
    TEST AH,AH                          ; 004bce79
    JZ 0x004bcc7e                       ; 004bce7b
        ;   XREF to: 004bcc7e (CONDITIONAL_JUMP)  ; LAB_004bcc7e
    MOV EBX,0x5dfd4a                    ; 004bce81 | = "section"
    LEA EAX,[ESP + 0x400]               ; 004bce86
    MOV ESI,ESP                         ; 004bce8d
    MOV dword ptr [ESP + 0x574],EAX     ; 004bce8f
    MOV AL,byte ptr [ESI]               ; 004bce96
        ;   Label: LAB_004bce96
    INC AL                              ; 004bce98
    MOVZX EDI,AL                        ; 004bce9a
    MOV DL,byte ptr [EDI + 0x626114]    ; 004bce9d | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bcea3
    TEST DL,0x2                         ; 004bcea6
    JZ 0x004bceaf                       ; 004bcea9
        ;   XREF to: 004bceaf (CONDITIONAL_JUMP)  ; LAB_004bceaf
    MOV ESI,EAX                         ; 004bceab
    JMP 0x004bce96                      ; 004bcead
        ;   XREF to: 004bce96 (UNCONDITIONAL_JUMP)  ; LAB_004bce96
    CMP byte ptr [ESI],0x5c             ; 004bceaf
        ;   Label: LAB_004bceaf
    JZ 0x004bcee6                       ; 004bceb2
        ;   XREF to: 004bcee6 (CONDITIONAL_JUMP)  ; LAB_004bcee6
    MOV EBX,0x5dfd7f                    ; 004bceb4 | = "title"
        ;   Label: LAB_004bceb4
    LEA EAX,[ESP + 0x400]               ; 004bceb9
    MOV ESI,ESP                         ; 004bcec0
    MOV dword ptr [ESP + 0x578],EAX     ; 004bcec2
    MOV AL,byte ptr [ESI]               ; 004bcec9
        ;   Label: LAB_004bcec9
    INC AL                              ; 004bcecb
    MOVZX EDI,AL                        ; 004bcecd
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bced0 | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bced6
    TEST DH,0x2                         ; 004bced9
    JZ 0x004bcfca                       ; 004bcedc
        ;   XREF to: 004bcfca (CONDITIONAL_JUMP)  ; LAB_004bcfca
    MOV ESI,EAX                         ; 004bcee2
    JMP 0x004bcec9                      ; 004bcee4
        ;   XREF to: 004bcec9 (UNCONDITIONAL_JUMP)  ; LAB_004bcec9
    MOV CL,byte ptr [EBX]               ; 004bcee6 | = "section"
        ;   Label: LAB_004bcee6
    MOV ESI,EAX                         ; 004bcee8
    TEST CL,CL                          ; 004bceea
    JZ 0x004bcf17                       ; 004bceec
        ;   XREF to: 004bcf17 (CONDITIONAL_JUMP)  ; LAB_004bcf17
    XOR EAX,EAX                         ; 004bceee
        ;   Label: LAB_004bceee
    MOV AL,byte ptr [ESI]               ; 004bcef0
    PUSH EAX                            ; 004bcef2
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bcef3
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bcef8
    XOR EAX,EAX                         ; 004bcefa
    ADD ESP,0x4                         ; 004bcefc
    MOV AL,byte ptr [EBX]               ; 004bceff | = "section"
    PUSH EAX                            ; 004bcf01
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bcf02
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bcf07
    CMP EDI,EAX                         ; 004bcf0a
    JNZ 0x004bceb4                      ; 004bcf0c
        ;   XREF to: 004bceb4 (CONDITIONAL_JUMP)  ; LAB_004bceb4
    MOV CH,byte ptr [EBX + 0x1]         ; 004bcf0e | s_ection_005dfd4a+1
    INC EBX                             ; 004bcf11
    INC ESI                             ; 004bcf12
    TEST CH,CH                          ; 004bcf13
    JNZ 0x004bceee                      ; 004bcf15
        ;   XREF to: 004bceee (CONDITIONAL_JUMP)  ; LAB_004bceee
    MOV AL,byte ptr [ESI]               ; 004bcf17
        ;   Label: LAB_004bcf17
    INC AL                              ; 004bcf19
    AND EAX,0xff                        ; 004bcf1b
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bcf20 | DAT_00626114
    JZ 0x004bcf2c                       ; 004bcf27
        ;   XREF to: 004bcf2c (CONDITIONAL_JUMP)  ; LAB_004bcf2c
    INC ESI                             ; 004bcf29
    JMP 0x004bcf17                      ; 004bcf2a
        ;   XREF to: 004bcf17 (UNCONDITIONAL_JUMP)  ; LAB_004bcf17
    MOV EDI,dword ptr [ESP + 0x574]     ; 004bcf2c
        ;   Label: LAB_004bcf2c
    PUSH EDI                            ; 004bcf33
    MOV AL,byte ptr [ESI]               ; 004bcf34
        ;   Label: LAB_004bcf34
    MOV byte ptr [EDI],AL               ; 004bcf36
    CMP AL,0x0                          ; 004bcf38
    JZ 0x004bcf4c                       ; 004bcf3a
        ;   XREF to: 004bcf4c (CONDITIONAL_JUMP)  ; LAB_004bcf4c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcf3c
    ADD ESI,0x2                         ; 004bcf3f
    MOV byte ptr [EDI + 0x1],AL         ; 004bcf42
    ADD EDI,0x2                         ; 004bcf45
    CMP AL,0x0                          ; 004bcf48
    JNZ 0x004bcf34                      ; 004bcf4a
        ;   XREF to: 004bcf34 (CONDITIONAL_JUMP)  ; LAB_004bcf34
    POP EDI                             ; 004bcf4c
        ;   Label: LAB_004bcf4c
    MOV EDI,dword ptr [0x01cc4470]      ; 004bcf4d | DAT_01cc4470
    CMP EDI,0x6                         ; 004bcf53
    JGE 0x004bcfaa                      ; 004bcf56
        ;   XREF to: 004bcfaa (CONDITIONAL_JUMP)  ; LAB_004bcfaa
    IMUL EAX,EDI,0x2e4                  ; 004bcf58
    MOV EDX,0x1cc4474                   ; 004bcf5e
    ADD EDX,EAX                         ; 004bcf63
    LEA ESI,[ESP + 0x400]               ; 004bcf65
    MOV EDI,EDX                         ; 004bcf6c
    XOR ECX,ECX                         ; 004bcf6e
    PUSH EDI                            ; 004bcf70
    MOV AL,byte ptr [ESI]               ; 004bcf71
        ;   Label: LAB_004bcf71
    MOV byte ptr [EDI],AL               ; 004bcf73
    CMP AL,0x0                          ; 004bcf75
    JZ 0x004bcf89                       ; 004bcf77
        ;   XREF to: 004bcf89 (CONDITIONAL_JUMP)  ; LAB_004bcf89
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcf79
    ADD ESI,0x2                         ; 004bcf7c
    MOV byte ptr [EDI + 0x1],AL         ; 004bcf7f
    ADD EDI,0x2                         ; 004bcf82
    CMP AL,0x0                          ; 004bcf85
    JNZ 0x004bcf71                      ; 004bcf87
        ;   XREF to: 004bcf71 (CONDITIONAL_JUMP)  ; LAB_004bcf71
    POP EDI                             ; 004bcf89
        ;   Label: LAB_004bcf89
    MOV EBX,dword ptr [0x01cc4470]      ; 004bcf8a | DAT_01cc4470
    MOV dword ptr [ESP + 0x570],ECX     ; 004bcf90
    INC EBX                             ; 004bcf97
    MOV dword ptr [ESP + 0x56c],EDX     ; 004bcf98
    MOV dword ptr [0x01cc4470],EBX      ; 004bcf9f | DAT_01cc4470
    JMP 0x004bcc7e                      ; 004bcfa5
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bcfaa
        ;   Label: LAB_004bcfaa
    MOV ESI,dword ptr [ESP + 0x5bc]     ; 004bcfab
    PUSH ESI                            ; 004bcfb2
    PUSH 0x5dfd52                       ; 004bcfb3 | = "Too many field notes sections in %s, ..."
    PUSH 0x1cc4270                      ; 004bcfb8 | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bcfbd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bcfc2
    JMP 0x004bcdbb                      ; 004bcfc5
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    CMP byte ptr [ESI],0x5c             ; 004bcfca
        ;   Label: LAB_004bcfca
    JZ 0x004bd001                       ; 004bcfcd
        ;   XREF to: 004bd001 (CONDITIONAL_JUMP)  ; LAB_004bd001
    MOV EBX,0x5dfdab                    ; 004bcfcf | = "entry"
        ;   Label: LAB_004bcfcf
    LEA EAX,[ESP + 0x400]               ; 004bcfd4
    MOV ESI,ESP                         ; 004bcfdb
    MOV dword ptr [ESP + 0x57c],EAX     ; 004bcfdd
    MOV AL,byte ptr [ESI]               ; 004bcfe4
        ;   Label: LAB_004bcfe4
    INC AL                              ; 004bcfe6
    MOVZX EDI,AL                        ; 004bcfe8
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bcfeb | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bcff1
    TEST DH,0x2                         ; 004bcff4
    JZ 0x004bd0f0                       ; 004bcff7
        ;   XREF to: 004bd0f0 (CONDITIONAL_JUMP)  ; LAB_004bd0f0
    MOV ESI,EAX                         ; 004bcffd
    JMP 0x004bcfe4                      ; 004bcfff
        ;   XREF to: 004bcfe4 (UNCONDITIONAL_JUMP)  ; LAB_004bcfe4
    MOV CH,byte ptr [EBX]               ; 004bd001 | = "title"
        ;   Label: LAB_004bd001
    MOV ESI,EAX                         ; 004bd003
    TEST CH,CH                          ; 004bd005
    JZ 0x004bd032                       ; 004bd007
        ;   XREF to: 004bd032 (CONDITIONAL_JUMP)  ; LAB_004bd032
    XOR EAX,EAX                         ; 004bd009
        ;   Label: LAB_004bd009
    MOV AL,byte ptr [ESI]               ; 004bd00b
    PUSH EAX                            ; 004bd00d
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd00e
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd013
    XOR EAX,EAX                         ; 004bd015
    ADD ESP,0x4                         ; 004bd017
    MOV AL,byte ptr [EBX]               ; 004bd01a | = "title"
    PUSH EAX                            ; 004bd01c
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd01d
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd022
    CMP EDI,EAX                         ; 004bd025
    JNZ 0x004bcfcf                      ; 004bd027
        ;   XREF to: 004bcfcf (CONDITIONAL_JUMP)  ; LAB_004bcfcf
    MOV AL,byte ptr [EBX + 0x1]         ; 004bd029 | s_itle_005dfd7f+1
    INC EBX                             ; 004bd02c
    INC ESI                             ; 004bd02d
    TEST AL,AL                          ; 004bd02e
    JNZ 0x004bd009                      ; 004bd030
        ;   XREF to: 004bd009 (CONDITIONAL_JUMP)  ; LAB_004bd009
    MOV AL,byte ptr [ESI]               ; 004bd032
        ;   Label: LAB_004bd032
    INC AL                              ; 004bd034
    AND EAX,0xff                        ; 004bd036
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd03b | DAT_00626114
    JZ 0x004bd047                       ; 004bd042
        ;   XREF to: 004bd047 (CONDITIONAL_JUMP)  ; LAB_004bd047
    INC ESI                             ; 004bd044
    JMP 0x004bd032                      ; 004bd045
        ;   XREF to: 004bd032 (UNCONDITIONAL_JUMP)  ; LAB_004bd032
    MOV EDI,dword ptr [ESP + 0x578]     ; 004bd047
        ;   Label: LAB_004bd047
    PUSH EDI                            ; 004bd04e
    MOV AL,byte ptr [ESI]               ; 004bd04f
        ;   Label: LAB_004bd04f
    MOV byte ptr [EDI],AL               ; 004bd051
    CMP AL,0x0                          ; 004bd053
    JZ 0x004bd067                       ; 004bd055
        ;   XREF to: 004bd067 (CONDITIONAL_JUMP)  ; LAB_004bd067
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd057
    ADD ESI,0x2                         ; 004bd05a
    MOV byte ptr [EDI + 0x1],AL         ; 004bd05d
    ADD EDI,0x2                         ; 004bd060
    CMP AL,0x0                          ; 004bd063
    JNZ 0x004bd04f                      ; 004bd065
        ;   XREF to: 004bd04f (CONDITIONAL_JUMP)  ; LAB_004bd04f
    POP EDI                             ; 004bd067
        ;   Label: LAB_004bd067
    MOV EDI,dword ptr [ESP + 0x570]     ; 004bd068
    TEST EDI,EDI                        ; 004bd06f
    JNZ 0x004bd0a7                      ; 004bd071
        ;   XREF to: 004bd0a7 (CONDITIONAL_JUMP)  ; LAB_004bd0a7
    MOV EAX,dword ptr [ESP + 0x56c]     ; 004bd073
    TEST EAX,EAX                        ; 004bd07a
    JZ 0x004bd0d0                       ; 004bd07c
        ;   XREF to: 004bd0d0 (CONDITIONAL_JUMP)  ; LAB_004bd0d0
    LEA ESI,[ESP + 0x400]               ; 004bd07e
    LEA EDI,[EAX + 0x40]                ; 004bd085
    PUSH EDI                            ; 004bd088
    MOV AL,byte ptr [ESI]               ; 004bd089
        ;   Label: LAB_004bd089
    MOV byte ptr [EDI],AL               ; 004bd08b
    CMP AL,0x0                          ; 004bd08d
    JZ 0x004bd0a1                       ; 004bd08f
        ;   XREF to: 004bd0a1 (CONDITIONAL_JUMP)  ; LAB_004bd0a1
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd091
    ADD ESI,0x2                         ; 004bd094
    MOV byte ptr [EDI + 0x1],AL         ; 004bd097
    ADD EDI,0x2                         ; 004bd09a
    CMP AL,0x0                          ; 004bd09d
    JNZ 0x004bd089                      ; 004bd09f
        ;   XREF to: 004bd089 (CONDITIONAL_JUMP)  ; LAB_004bd089
    POP EDI                             ; 004bd0a1
        ;   Label: LAB_004bd0a1
    JMP 0x004bcc7e                      ; 004bd0a2
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    LEA ESI,[ESP + 0x400]               ; 004bd0a7
        ;   Label: LAB_004bd0a7
    ADD EDI,0x40                        ; 004bd0ae
    PUSH EDI                            ; 004bd0b1
    MOV AL,byte ptr [ESI]               ; 004bd0b2
        ;   Label: LAB_004bd0b2
    MOV byte ptr [EDI],AL               ; 004bd0b4
    CMP AL,0x0                          ; 004bd0b6
    JZ 0x004bd0ca                       ; 004bd0b8
        ;   XREF to: 004bd0ca (CONDITIONAL_JUMP)  ; LAB_004bd0ca
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd0ba
    ADD ESI,0x2                         ; 004bd0bd
    MOV byte ptr [EDI + 0x1],AL         ; 004bd0c0
    ADD EDI,0x2                         ; 004bd0c3
    CMP AL,0x0                          ; 004bd0c6
    JNZ 0x004bd0b2                      ; 004bd0c8
        ;   XREF to: 004bd0b2 (CONDITIONAL_JUMP)  ; LAB_004bd0b2
    POP EDI                             ; 004bd0ca
        ;   Label: LAB_004bd0ca
    JMP 0x004bcc7e                      ; 004bd0cb
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd0d0
        ;   Label: LAB_004bd0d0
    MOV EDX,dword ptr [ESP + 0x5bc]     ; 004bd0d1
    PUSH EDX                            ; 004bd0d8
    PUSH 0x5dfd85                       ; 004bd0d9 | = "Didn't expect '\\title' in %s, line %d"
    PUSH 0x1cc4270                      ; 004bd0de | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd0e3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd0e8
    JMP 0x004bcdbb                      ; 004bd0eb
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    CMP byte ptr [ESI],0x5c             ; 004bd0f0
        ;   Label: LAB_004bd0f0
    JZ 0x004bd127                       ; 004bd0f3
        ;   XREF to: 004bd127 (CONDITIONAL_JUMP)  ; LAB_004bd127
    MOV EBX,0x5dfdf2                    ; 004bd0f5 | DAT_005dfdf2
        ;   Label: LAB_004bd0f5
    LEA EAX,[ESP + 0x400]               ; 004bd0fa
    MOV ESI,ESP                         ; 004bd101
    MOV dword ptr [ESP + 0x584],EAX     ; 004bd103
    MOV AL,byte ptr [ESI]               ; 004bd10a
        ;   Label: LAB_004bd10a
    INC AL                              ; 004bd10c
    MOVZX EDI,AL                        ; 004bd10e
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bd111 | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bd117
    TEST DH,0x2                         ; 004bd11a
    JZ 0x004bd258                       ; 004bd11d
        ;   XREF to: 004bd258 (CONDITIONAL_JUMP)  ; LAB_004bd258
    MOV ESI,EAX                         ; 004bd123
    JMP 0x004bd10a                      ; 004bd125
        ;   XREF to: 004bd10a (UNCONDITIONAL_JUMP)  ; LAB_004bd10a
    MOV CH,byte ptr [EBX]               ; 004bd127 | = "entry"
        ;   Label: LAB_004bd127
    MOV ESI,EAX                         ; 004bd129
    TEST CH,CH                          ; 004bd12b
    JZ 0x004bd158                       ; 004bd12d
        ;   XREF to: 004bd158 (CONDITIONAL_JUMP)  ; LAB_004bd158
    XOR EAX,EAX                         ; 004bd12f
        ;   Label: LAB_004bd12f
    MOV AL,byte ptr [ESI]               ; 004bd131
    PUSH EAX                            ; 004bd133
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd134
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd139
    XOR EAX,EAX                         ; 004bd13b
    ADD ESP,0x4                         ; 004bd13d
    MOV AL,byte ptr [EBX]               ; 004bd140 | = "entry"
    PUSH EAX                            ; 004bd142
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd143
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd148
    CMP EDI,EAX                         ; 004bd14b
    JNZ 0x004bd0f5                      ; 004bd14d
        ;   XREF to: 004bd0f5 (CONDITIONAL_JUMP)  ; LAB_004bd0f5
    MOV AL,byte ptr [EBX + 0x1]         ; 004bd14f | s_ntry_005dfdab+1
    INC EBX                             ; 004bd152
    INC ESI                             ; 004bd153
    TEST AL,AL                          ; 004bd154
    JNZ 0x004bd12f                      ; 004bd156
        ;   XREF to: 004bd12f (CONDITIONAL_JUMP)  ; LAB_004bd12f
    MOV AL,byte ptr [ESI]               ; 004bd158
        ;   Label: LAB_004bd158
    INC AL                              ; 004bd15a
    AND EAX,0xff                        ; 004bd15c
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd161 | DAT_00626114
    JZ 0x004bd16d                       ; 004bd168
        ;   XREF to: 004bd16d (CONDITIONAL_JUMP)  ; LAB_004bd16d
    INC ESI                             ; 004bd16a
    JMP 0x004bd158                      ; 004bd16b
        ;   XREF to: 004bd158 (UNCONDITIONAL_JUMP)  ; LAB_004bd158
    MOV EDI,dword ptr [ESP + 0x57c]     ; 004bd16d
        ;   Label: LAB_004bd16d
    MOV ECX,dword ptr [ESP + 0x56c]     ; 004bd174
    PUSH EDI                            ; 004bd17b
    MOV AL,byte ptr [ESI]               ; 004bd17c
        ;   Label: LAB_004bd17c
    MOV byte ptr [EDI],AL               ; 004bd17e
    CMP AL,0x0                          ; 004bd180
    JZ 0x004bd194                       ; 004bd182
        ;   XREF to: 004bd194 (CONDITIONAL_JUMP)  ; LAB_004bd194
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd184
    ADD ESI,0x2                         ; 004bd187
    MOV byte ptr [EDI + 0x1],AL         ; 004bd18a
    ADD EDI,0x2                         ; 004bd18d
    CMP AL,0x0                          ; 004bd190
    JNZ 0x004bd17c                      ; 004bd192
        ;   XREF to: 004bd17c (CONDITIONAL_JUMP)  ; LAB_004bd17c
    POP EDI                             ; 004bd194
        ;   Label: LAB_004bd194
    TEST ECX,ECX                        ; 004bd195
    JZ 0x004bd1ff                       ; 004bd197
        ;   XREF to: 004bd1ff (CONDITIONAL_JUMP)  ; LAB_004bd1ff
    LEA EDI,[ESP + 0x400]               ; 004bd199
    XOR EBX,EBX                         ; 004bd1a0
    MOV ESI,dword ptr [0x01cc4470]      ; 004bd1a2 | DAT_01cc4470
    MOV dword ptr [ESP + 0x580],EBX     ; 004bd1a8
    TEST ESI,ESI                        ; 004bd1af
    JLE 0x004bd1d9                      ; 004bd1b1
        ;   XREF to: 004bd1d9 (CONDITIONAL_JUMP)  ; LAB_004bd1d9
    MOV ESI,0x1cc4474                   ; 004bd1b3
    PUSH EDI                            ; 004bd1b8
        ;   Label: LAB_004bd1b8
    PUSH ESI                            ; 004bd1b9
    CALL core_fldnotes.cpp_FUN_004bbfd0 ; 004bd1ba
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbfd0()
    ADD ESP,0x8                         ; 004bd1bf
    MOV EDX,EAX                         ; 004bd1c2
    TEST EAX,EAX                        ; 004bd1c4
    JZ 0x004bd21f                       ; 004bd1c6
        ;   XREF to: 004bd21f (CONDITIONAL_JUMP)  ; LAB_004bd21f
    MOV ECX,dword ptr [ESP + 0x580]     ; 004bd1c8
    TEST ECX,ECX                        ; 004bd1cf
    JZ 0x004bd1d5                       ; 004bd1d1
        ;   XREF to: 004bd1d5 (CONDITIONAL_JUMP)  ; LAB_004bd1d5
    MOV dword ptr [ECX],EBX             ; 004bd1d3
    TEST EDX,EDX                        ; 004bd1d5
        ;   Label: LAB_004bd1d5
    JNZ 0x004bd231                      ; 004bd1d7
        ;   XREF to: 004bd231 (CONDITIONAL_JUMP)  ; LAB_004bd231
    PUSH 0x0                            ; 004bd1d9
        ;   Label: LAB_004bd1d9
    LEA EAX,[ESP + 0x404]               ; 004bd1db
    PUSH EAX                            ; 004bd1e2
    MOV EBX,dword ptr [ESP + 0x574]     ; 004bd1e3
    PUSH EBX                            ; 004bd1ea
    CALL core_fldnotes.cpp_FUN_004bc020 ; 004bd1eb
        ;   XREF to: 004bc020 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc020()
    ADD ESP,0xc                         ; 004bd1f0
    MOV dword ptr [ESP + 0x570],EAX     ; 004bd1f3
    JMP 0x004bcc7e                      ; 004bd1fa
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd1ff
        ;   Label: LAB_004bd1ff
    MOV EDI,dword ptr [ESP + 0x5bc]     ; 004bd200
    PUSH EDI                            ; 004bd207
    PUSH 0x5dfdb1                       ; 004bd208 | = "Didn't expect '\\entry' in %s, line %d"
    PUSH 0x1cc4270                      ; 004bd20d | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd212
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd217
    JMP 0x004bcdbb                      ; 004bd21a
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    MOV EAX,[0x01cc4470]                ; 004bd21f | DAT_01cc4470
        ;   Label: LAB_004bd21f
    INC EBX                             ; 004bd224
    ADD ESI,0x2e4                       ; 004bd225
    CMP EBX,EAX                         ; 004bd22b
    JL 0x004bd1b8                       ; 004bd22d
        ;   XREF to: 004bd1b8 (CONDITIONAL_JUMP)  ; LAB_004bd1b8
    JMP 0x004bd1d9                      ; 004bd22f
        ;   XREF to: 004bd1d9 (UNCONDITIONAL_JUMP)  ; LAB_004bd1d9
    MOV ESI,dword ptr [ESP + 0x5b8]     ; 004bd231
        ;   Label: LAB_004bd231
    PUSH ESI                            ; 004bd238
    LEA EAX,[ESP + 0x404]               ; 004bd239
    PUSH EAX                            ; 004bd240
    PUSH 0x5dfdd7                       ; 004bd241 | = "Duplicate entry '%s' in %s"
    PUSH 0x1cc4270                      ; 004bd246 | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd24b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd250
    JMP 0x004bcdbb                      ; 004bd253
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    CMP byte ptr [ESI],0x5c             ; 004bd258
        ;   Label: LAB_004bd258
    JZ 0x004bd28f                       ; 004bd25b
        ;   XREF to: 004bd28f (CONDITIONAL_JUMP)  ; LAB_004bd28f
    MOV EBX,0x5dfe37                    ; 004bd25d | DAT_005dfe37
        ;   Label: LAB_004bd25d
    LEA EAX,[ESP + 0x400]               ; 004bd262
    MOV ESI,ESP                         ; 004bd269
    MOV dword ptr [ESP + 0x590],EAX     ; 004bd26b
    MOV AL,byte ptr [ESI]               ; 004bd272
        ;   Label: LAB_004bd272
    INC AL                              ; 004bd274
    MOVZX EDI,AL                        ; 004bd276
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bd279 | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bd27f
    TEST DH,0x2                         ; 004bd282
    JZ 0x004bd3d4                       ; 004bd285
        ;   XREF to: 004bd3d4 (CONDITIONAL_JUMP)  ; LAB_004bd3d4
    MOV ESI,EAX                         ; 004bd28b
    JMP 0x004bd272                      ; 004bd28d
        ;   XREF to: 004bd272 (UNCONDITIONAL_JUMP)  ; LAB_004bd272
    MOV CH,byte ptr [EBX]               ; 004bd28f | DAT_005dfdf2
        ;   Label: LAB_004bd28f
    MOV ESI,EAX                         ; 004bd291
    TEST CH,CH                          ; 004bd293
    JZ 0x004bd2c0                       ; 004bd295
        ;   XREF to: 004bd2c0 (CONDITIONAL_JUMP)  ; LAB_004bd2c0
    XOR EAX,EAX                         ; 004bd297
        ;   Label: LAB_004bd297
    MOV AL,byte ptr [ESI]               ; 004bd299
    PUSH EAX                            ; 004bd29b
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd29c
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd2a1
    XOR EAX,EAX                         ; 004bd2a3
    ADD ESP,0x4                         ; 004bd2a5
    MOV AL,byte ptr [EBX]               ; 004bd2a8 | DAT_005dfdf2
    PUSH EAX                            ; 004bd2aa
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd2ab
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd2b0
    CMP EDI,EAX                         ; 004bd2b3
    JNZ 0x004bd25d                      ; 004bd2b5
        ;   XREF to: 004bd25d (CONDITIONAL_JUMP)  ; LAB_004bd25d
    MOV AL,byte ptr [EBX + 0x1]         ; 004bd2b7 | DAT_005dfdf3
    INC EBX                             ; 004bd2ba
    INC ESI                             ; 004bd2bb
    TEST AL,AL                          ; 004bd2bc
    JNZ 0x004bd297                      ; 004bd2be
        ;   XREF to: 004bd297 (CONDITIONAL_JUMP)  ; LAB_004bd297
    MOV AL,byte ptr [ESI]               ; 004bd2c0
        ;   Label: LAB_004bd2c0
    INC AL                              ; 004bd2c2
    AND EAX,0xff                        ; 004bd2c4
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd2c9 | DAT_00626114
    JZ 0x004bd2d5                       ; 004bd2d0
        ;   XREF to: 004bd2d5 (CONDITIONAL_JUMP)  ; LAB_004bd2d5
    INC ESI                             ; 004bd2d2
    JMP 0x004bd2c0                      ; 004bd2d3
        ;   XREF to: 004bd2c0 (UNCONDITIONAL_JUMP)  ; LAB_004bd2c0
    MOV EDI,dword ptr [ESP + 0x584]     ; 004bd2d5
        ;   Label: LAB_004bd2d5
    PUSH EDI                            ; 004bd2dc
    MOV AL,byte ptr [ESI]               ; 004bd2dd
        ;   Label: LAB_004bd2dd
    MOV byte ptr [EDI],AL               ; 004bd2df
    CMP AL,0x0                          ; 004bd2e1
    JZ 0x004bd2f5                       ; 004bd2e3
        ;   XREF to: 004bd2f5 (CONDITIONAL_JUMP)  ; LAB_004bd2f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd2e5
    ADD ESI,0x2                         ; 004bd2e8
    MOV byte ptr [EDI + 0x1],AL         ; 004bd2eb
    ADD EDI,0x2                         ; 004bd2ee
    CMP AL,0x0                          ; 004bd2f1
    JNZ 0x004bd2dd                      ; 004bd2f3
        ;   XREF to: 004bd2dd (CONDITIONAL_JUMP)  ; LAB_004bd2dd
    POP EDI                             ; 004bd2f5
        ;   Label: LAB_004bd2f5
    CMP dword ptr [ESP + 0x56c],0x0     ; 004bd2f6
    JZ 0x004bd37a                       ; 004bd2fe
        ;   XREF to: 004bd37a (CONDITIONAL_JUMP)  ; LAB_004bd37a
    LEA EAX,[ESP + 0x400]               ; 004bd304
    MOV EDX,dword ptr [0x01cc4470]      ; 004bd30b | DAT_01cc4470
    MOV dword ptr [ESP + 0x588],EAX     ; 004bd311
    XOR EAX,EAX                         ; 004bd318
    XOR EBX,EBX                         ; 004bd31a
    MOV dword ptr [ESP + 0x58c],EAX     ; 004bd31c
    TEST EDX,EDX                        ; 004bd323
    JLE 0x004bd354                      ; 004bd325
        ;   XREF to: 004bd354 (CONDITIONAL_JUMP)  ; LAB_004bd354
    MOV ESI,0x1cc4474                   ; 004bd327
    MOV EAX,dword ptr [ESP + 0x588]     ; 004bd32c
        ;   Label: LAB_004bd32c
    PUSH EAX                            ; 004bd333
    PUSH ESI                            ; 004bd334
    CALL core_fldnotes.cpp_FUN_004bbfd0 ; 004bd335
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbfd0()
    ADD ESP,0x8                         ; 004bd33a
    MOV EDI,EAX                         ; 004bd33d
    TEST EAX,EAX                        ; 004bd33f
    JZ 0x004bd39a                       ; 004bd341
        ;   XREF to: 004bd39a (CONDITIONAL_JUMP)  ; LAB_004bd39a
    MOV EDX,dword ptr [ESP + 0x58c]     ; 004bd343
    TEST EDX,EDX                        ; 004bd34a
    JZ 0x004bd350                       ; 004bd34c
        ;   XREF to: 004bd350 (CONDITIONAL_JUMP)  ; LAB_004bd350
    MOV dword ptr [EDX],EBX             ; 004bd34e
    TEST EDI,EDI                        ; 004bd350
        ;   Label: LAB_004bd350
    JNZ 0x004bd3ad                      ; 004bd352
        ;   XREF to: 004bd3ad (CONDITIONAL_JUMP)  ; LAB_004bd3ad
    PUSH 0x2                            ; 004bd354
        ;   Label: LAB_004bd354
    LEA EAX,[ESP + 0x404]               ; 004bd356
    PUSH EAX                            ; 004bd35d
    MOV ECX,dword ptr [ESP + 0x574]     ; 004bd35e
    PUSH ECX                            ; 004bd365
    CALL core_fldnotes.cpp_FUN_004bc020 ; 004bd366
        ;   XREF to: 004bc020 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc020()
    ADD ESP,0xc                         ; 004bd36b
    MOV dword ptr [ESP + 0x570],EAX     ; 004bd36e
    JMP 0x004bcc7e                      ; 004bd375
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd37a
        ;   Label: LAB_004bd37a
    MOV ECX,dword ptr [ESP + 0x5bc]     ; 004bd37b
    PUSH ECX                            ; 004bd382
    PUSH 0x5dfdf7                       ; 004bd383 | = "Didn't expect '\\task' in %s, line %d"
    PUSH 0x1cc4270                      ; 004bd388 | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd38d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd392
    JMP 0x004bcdbb                      ; 004bd395
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    MOV EDI,dword ptr [0x01cc4470]      ; 004bd39a | DAT_01cc4470
        ;   Label: LAB_004bd39a
    INC EBX                             ; 004bd3a0
    ADD ESI,0x2e4                       ; 004bd3a1
    CMP EBX,EDI                         ; 004bd3a7
    JL 0x004bd32c                       ; 004bd3a9
        ;   XREF to: 004bd32c (CONDITIONAL_JUMP)  ; LAB_004bd32c
    JMP 0x004bd354                      ; 004bd3ab
        ;   XREF to: 004bd354 (UNCONDITIONAL_JUMP)  ; LAB_004bd354
    MOV EBX,dword ptr [ESP + 0x5b8]     ; 004bd3ad
        ;   Label: LAB_004bd3ad
    PUSH EBX                            ; 004bd3b4
    LEA EAX,[ESP + 0x404]               ; 004bd3b5
    PUSH EAX                            ; 004bd3bc
    PUSH 0x5dfe1c                       ; 004bd3bd | = "Duplicate entry '%s' in %s"
    PUSH 0x1cc4270                      ; 004bd3c2 | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd3c7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd3cc
    JMP 0x004bcdbb                      ; 004bd3cf
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    CMP byte ptr [ESI],0x5c             ; 004bd3d4
        ;   Label: LAB_004bd3d4
    JZ 0x004bd40b                       ; 004bd3d7
        ;   XREF to: 004bd40b (CONDITIONAL_JUMP)  ; LAB_004bd40b
    MOV EBX,0x5dfe7b                    ; 004bd3d9 | = "image"
        ;   Label: LAB_004bd3d9
    LEA EAX,[ESP + 0x400]               ; 004bd3de
    MOV ESI,ESP                         ; 004bd3e5
    MOV dword ptr [ESP + 0x594],EAX     ; 004bd3e7
    MOV AL,byte ptr [ESI]               ; 004bd3ee
        ;   Label: LAB_004bd3ee
    INC AL                              ; 004bd3f0
    MOVZX EDI,AL                        ; 004bd3f2
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bd3f5 | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bd3fb
    TEST DH,0x2                         ; 004bd3fe
    JZ 0x004bd4fe                       ; 004bd401
        ;   XREF to: 004bd4fe (CONDITIONAL_JUMP)  ; LAB_004bd4fe
    MOV ESI,EAX                         ; 004bd407
    JMP 0x004bd3ee                      ; 004bd409
        ;   XREF to: 004bd3ee (UNCONDITIONAL_JUMP)  ; LAB_004bd3ee
    MOV CH,byte ptr [EBX]               ; 004bd40b | DAT_005dfe37
        ;   Label: LAB_004bd40b
    MOV ESI,EAX                         ; 004bd40d
    TEST CH,CH                          ; 004bd40f
    JZ 0x004bd43c                       ; 004bd411
        ;   XREF to: 004bd43c (CONDITIONAL_JUMP)  ; LAB_004bd43c
    XOR EAX,EAX                         ; 004bd413
        ;   Label: LAB_004bd413
    MOV AL,byte ptr [ESI]               ; 004bd415
    PUSH EAX                            ; 004bd417
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd418
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd41d
    XOR EAX,EAX                         ; 004bd41f
    ADD ESP,0x4                         ; 004bd421
    MOV AL,byte ptr [EBX]               ; 004bd424 | DAT_005dfe37
    PUSH EAX                            ; 004bd426
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd427
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd42c
    CMP EDI,EAX                         ; 004bd42f
    JNZ 0x004bd3d9                      ; 004bd431
        ;   XREF to: 004bd3d9 (CONDITIONAL_JUMP)  ; LAB_004bd3d9
    MOV AL,byte ptr [EBX + 0x1]         ; 004bd433 | DAT_005dfe38
    INC EBX                             ; 004bd436
    INC ESI                             ; 004bd437
    TEST AL,AL                          ; 004bd438
    JNZ 0x004bd413                      ; 004bd43a
        ;   XREF to: 004bd413 (CONDITIONAL_JUMP)  ; LAB_004bd413
    MOV AL,byte ptr [ESI]               ; 004bd43c
        ;   Label: LAB_004bd43c
    INC AL                              ; 004bd43e
    AND EAX,0xff                        ; 004bd440
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd445 | DAT_00626114
    JZ 0x004bd451                       ; 004bd44c
        ;   XREF to: 004bd451 (CONDITIONAL_JUMP)  ; LAB_004bd451
    INC ESI                             ; 004bd44e
    JMP 0x004bd43c                      ; 004bd44f
        ;   XREF to: 004bd43c (UNCONDITIONAL_JUMP)  ; LAB_004bd43c
    MOV EDI,dword ptr [ESP + 0x590]     ; 004bd451
        ;   Label: LAB_004bd451
    PUSH EDI                            ; 004bd458
    MOV AL,byte ptr [ESI]               ; 004bd459
        ;   Label: LAB_004bd459
    MOV byte ptr [EDI],AL               ; 004bd45b
    CMP AL,0x0                          ; 004bd45d
    JZ 0x004bd471                       ; 004bd45f
        ;   XREF to: 004bd471 (CONDITIONAL_JUMP)  ; LAB_004bd471
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd461
    ADD ESI,0x2                         ; 004bd464
    MOV byte ptr [EDI + 0x1],AL         ; 004bd467
    ADD EDI,0x2                         ; 004bd46a
    CMP AL,0x0                          ; 004bd46d
    JNZ 0x004bd459                      ; 004bd46f
        ;   XREF to: 004bd459 (CONDITIONAL_JUMP)  ; LAB_004bd459
    POP EDI                             ; 004bd471
        ;   Label: LAB_004bd471
    MOV ESI,dword ptr [ESP + 0x56c]     ; 004bd472
    TEST ESI,ESI                        ; 004bd479
    JZ 0x004bd4d2                       ; 004bd47b
        ;   XREF to: 004bd4d2 (CONDITIONAL_JUMP)  ; LAB_004bd4d2
    CMP dword ptr [0x01cc55cc],0x4      ; 004bd47d | DAT_01cc55cc
    JGE 0x004bd4f2                      ; 004bd484
        ;   XREF to: 004bd4f2 (CONDITIONAL_JUMP)  ; LAB_004bd4f2
    PUSH 0x5                            ; 004bd486
    LEA EAX,[ESP + 0x404]               ; 004bd488
    PUSH EAX                            ; 004bd48f
    PUSH ESI                            ; 004bd490
    CALL core_fldnotes.cpp_FUN_004bc020 ; 004bd491
        ;   XREF to: 004bc020 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc020()
    MOV EDX,dword ptr [0x01cc55cc]      ; 004bd496 | DAT_01cc55cc
    MOV EBX,EDX                         ; 004bd49c
    MOV dword ptr [EAX + 0x158],EDX     ; 004bd49e
    IMUL EDX,EDX,0x970                  ; 004bd4a4
    ADD ESP,0xc                         ; 004bd4aa
    ADD EDX,0x1cc55d0                   ; 004bd4ad
    MOV dword ptr [ESP + 0x570],EAX     ; 004bd4b3
    INC EBX                             ; 004bd4ba
    MOV dword ptr [EDX + 0x2c0],0x0     ; 004bd4bb
    MOV dword ptr [0x01cc55cc],EBX      ; 004bd4c5 | DAT_01cc55cc
    MOV dword ptr [EDX],EAX             ; 004bd4cb
    JMP 0x004bcc7e                      ; 004bd4cd
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd4d2
        ;   Label: LAB_004bd4d2
    MOV ESI,dword ptr [ESP + 0x5bc]     ; 004bd4d3
    PUSH ESI                            ; 004bd4da
    PUSH 0x5dfe3b                       ; 004bd4db | = "Didn't expect '\\map' in %s, line %d"
    PUSH 0x1cc4270                      ; 004bd4e0 | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd4e5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd4ea
    JMP 0x004bcdbb                      ; 004bd4ed
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    PUSH 0x4                            ; 004bd4f2
        ;   Label: LAB_004bd4f2
    PUSH 0x5dfe5f                       ; 004bd4f4 | = "Too many maps!  (max is %d)"
    JMP 0x004bcdae                      ; 004bd4f9
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    CMP byte ptr [ESI],0x5c             ; 004bd4fe
        ;   Label: LAB_004bd4fe
    JZ 0x004bd535                       ; 004bd501
        ;   XREF to: 004bd535 (CONDITIONAL_JUMP)  ; LAB_004bd535
    MOV EBX,0x5dff53                    ; 004bd503 | DAT_005dff53
        ;   Label: LAB_004bd503
    LEA EAX,[ESP + 0x400]               ; 004bd508
    MOV ESI,ESP                         ; 004bd50f
    MOV dword ptr [ESP + 0x598],EAX     ; 004bd511
    MOV AL,byte ptr [ESI]               ; 004bd518
        ;   Label: LAB_004bd518
    INC AL                              ; 004bd51a
    MOVZX EDI,AL                        ; 004bd51c
    MOV CL,byte ptr [EDI + 0x626114]    ; 004bd51f | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bd525
    TEST CL,0x2                         ; 004bd528
    JZ 0x004bd67c                       ; 004bd52b
        ;   XREF to: 004bd67c (CONDITIONAL_JUMP)  ; LAB_004bd67c
    MOV ESI,EAX                         ; 004bd531
    JMP 0x004bd518                      ; 004bd533
        ;   XREF to: 004bd518 (UNCONDITIONAL_JUMP)  ; LAB_004bd518
    MOV CH,byte ptr [EBX]               ; 004bd535 | = "image"
        ;   Label: LAB_004bd535
    MOV ESI,EAX                         ; 004bd537
    TEST CH,CH                          ; 004bd539
    JZ 0x004bd566                       ; 004bd53b
        ;   XREF to: 004bd566 (CONDITIONAL_JUMP)  ; LAB_004bd566
    XOR EAX,EAX                         ; 004bd53d
        ;   Label: LAB_004bd53d
    MOV AL,byte ptr [ESI]               ; 004bd53f
    PUSH EAX                            ; 004bd541
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd542
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd547
    XOR EAX,EAX                         ; 004bd549
    ADD ESP,0x4                         ; 004bd54b
    MOV AL,byte ptr [EBX]               ; 004bd54e | = "image"
    PUSH EAX                            ; 004bd550
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd551
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd556
    CMP EDI,EAX                         ; 004bd559
    JNZ 0x004bd503                      ; 004bd55b
        ;   XREF to: 004bd503 (CONDITIONAL_JUMP)  ; LAB_004bd503
    MOV AL,byte ptr [EBX + 0x1]         ; 004bd55d | s_mage_005dfe7b+1
    INC EBX                             ; 004bd560
    INC ESI                             ; 004bd561
    TEST AL,AL                          ; 004bd562
    JNZ 0x004bd53d                      ; 004bd564
        ;   XREF to: 004bd53d (CONDITIONAL_JUMP)  ; LAB_004bd53d
    MOV AL,byte ptr [ESI]               ; 004bd566
        ;   Label: LAB_004bd566
    INC AL                              ; 004bd568
    AND EAX,0xff                        ; 004bd56a
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd56f | DAT_00626114
    JZ 0x004bd57b                       ; 004bd576
        ;   XREF to: 004bd57b (CONDITIONAL_JUMP)  ; LAB_004bd57b
    INC ESI                             ; 004bd578
    JMP 0x004bd566                      ; 004bd579
        ;   XREF to: 004bd566 (UNCONDITIONAL_JUMP)  ; LAB_004bd566
    MOV EDI,dword ptr [ESP + 0x594]     ; 004bd57b
        ;   Label: LAB_004bd57b
    PUSH EDI                            ; 004bd582
    MOV AL,byte ptr [ESI]               ; 004bd583
        ;   Label: LAB_004bd583
    MOV byte ptr [EDI],AL               ; 004bd585
    CMP AL,0x0                          ; 004bd587
    JZ 0x004bd59b                       ; 004bd589
        ;   XREF to: 004bd59b (CONDITIONAL_JUMP)  ; LAB_004bd59b
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd58b
    ADD ESI,0x2                         ; 004bd58e
    MOV byte ptr [EDI + 0x1],AL         ; 004bd591
    ADD EDI,0x2                         ; 004bd594
    CMP AL,0x0                          ; 004bd597
    JNZ 0x004bd583                      ; 004bd599
        ;   XREF to: 004bd583 (CONDITIONAL_JUMP)  ; LAB_004bd583
    POP EDI                             ; 004bd59b
        ;   Label: LAB_004bd59b
    MOV EDI,dword ptr [ESP + 0x570]     ; 004bd59c
    TEST EDI,EDI                        ; 004bd5a3
    JZ 0x004bd646                       ; 004bd5a5
        ;   XREF to: 004bd646 (CONDITIONAL_JUMP)  ; LAB_004bd646
    CMP dword ptr [EDI + 0x140],0x5     ; 004bd5ab
    JNZ 0x004bd646                      ; 004bd5b2
        ;   XREF to: 004bd646 (CONDITIONAL_JUMP)  ; LAB_004bd646
    CMP dword ptr [0x01cc55cc],0x1      ; 004bd5b8 | DAT_01cc55cc
    JGE 0x004bd5e4                      ; 004bd5bf
        ;   XREF to: 004bd5e4 (CONDITIONAL_JUMP)  ; LAB_004bd5e4
    MOV EBX,0x5dfed1                    ; 004bd5c1 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x969                       ; 004bd5c6
    PUSH 0x5dfee6                       ; 004bd5cb | = "Hell froze!"
    MOV dword ptr [0x01d1d400],EBX      ; 004bd5d0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004bd5d6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bd5dc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bd5e1
    MOV EAX,[0x01cc55cc]                ; 004bd5e4 | DAT_01cc55cc
        ;   Label: LAB_004bd5e4
    DEC EAX                             ; 004bd5e9
    IMUL EAX,EAX,0x970                  ; 004bd5ea
    MOV EBX,0x1cc55d0                   ; 004bd5f0
    ADD EBX,EAX                         ; 004bd5f5
    LEA EAX,[EBX + 0x6c]                ; 004bd5f7
    PUSH EAX                            ; 004bd5fa
    LEA EAX,[EBX + 0x68]                ; 004bd5fb
    PUSH EAX                            ; 004bd5fe
    LEA EAX,[ESP + 0x508]               ; 004bd5ff
    PUSH EAX                            ; 004bd606
    PUSH 0x5dfef2                       ; 004bd607 | = "%s %d %d"
    LEA EAX,[ESP + 0x410]               ; 004bd60c
    PUSH EAX                            ; 004bd613
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004bd614
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x14                        ; 004bd619
    CMP EAX,0x3                         ; 004bd61c
    JNZ 0x004bd651                      ; 004bd61f
        ;   XREF to: 004bd651 (CONDITIONAL_JUMP)  ; LAB_004bd651
    CMP byte ptr [EBX + 0x4],0x0        ; 004bd621
    JNZ 0x004bd65c                      ; 004bd625
        ;   XREF to: 004bd65c (CONDITIONAL_JUMP)  ; LAB_004bd65c
    PUSH 0x0                            ; 004bd627
    ADD EBX,0x4                         ; 004bd629
    PUSH EBX                            ; 004bd62c
    PUSH 0x0                            ; 004bd62d
    PUSH 0x0                            ; 004bd62f
    LEA EAX,[ESP + 0x510]               ; 004bd631
    PUSH EAX                            ; 004bd638
    CALL engine_dosio.cpp_FUN_00479580  ; 004bd639
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bd63e
    JMP 0x004bcc7e                      ; 004bd641
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd646
        ;   Label: LAB_004bd646
    PUSH 0x5dfe81                       ; 004bd647 | = "Can only use \\image in a \\map entry..."
    JMP 0x004bcdae                      ; 004bd64c
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    PUSH EBP                            ; 004bd651
        ;   Label: LAB_004bd651
    PUSH 0x5dfefb                       ; 004bd652 | = "Syntax error in \\image parms on line %d"
    JMP 0x004bcdae                      ; 004bd657
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    PUSH EBP                            ; 004bd65c
        ;   Label: LAB_004bd65c
    MOV EDI,dword ptr [ESP + 0x574]     ; 004bd65d
    PUSH EDI                            ; 004bd664
    PUSH 0x5dff23                       ; 004bd665 | = "Multiple \\image tags found in map %s..."
    PUSH 0x1cc4270                      ; 004bd66a | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd66f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd674
    JMP 0x004bcdbb                      ; 004bd677
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    CMP byte ptr [ESI],0x5c             ; 004bd67c
        ;   Label: LAB_004bd67c
    JZ 0x004bd6b3                       ; 004bd67f
        ;   XREF to: 004bd6b3 (CONDITIONAL_JUMP)  ; LAB_004bd6b3
    MOV EBX,0x5e0021                    ; 004bd681 | = "annotation"
        ;   Label: LAB_004bd681
    LEA EAX,[ESP + 0x400]               ; 004bd686
    MOV ESI,ESP                         ; 004bd68d
    MOV dword ptr [ESP + 0x59c],EAX     ; 004bd68f
    MOV AL,byte ptr [ESI]               ; 004bd696
        ;   Label: LAB_004bd696
    INC AL                              ; 004bd698
    MOVZX EDI,AL                        ; 004bd69a
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bd69d | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bd6a3
    TEST DH,0x2                         ; 004bd6a6
    JZ 0x004bd81b                       ; 004bd6a9
        ;   XREF to: 004bd81b (CONDITIONAL_JUMP)  ; LAB_004bd81b
    MOV ESI,EAX                         ; 004bd6af
    JMP 0x004bd696                      ; 004bd6b1
        ;   XREF to: 004bd696 (UNCONDITIONAL_JUMP)  ; LAB_004bd696
    MOV ESI,EAX                         ; 004bd6b3
        ;   Label: LAB_004bd6b3
    CMP byte ptr [EBX],0x0              ; 004bd6b5 | DAT_005dff53
    JZ 0x004bd6e3                       ; 004bd6b8
        ;   XREF to: 004bd6e3 (CONDITIONAL_JUMP)  ; LAB_004bd6e3
    XOR EAX,EAX                         ; 004bd6ba
        ;   Label: LAB_004bd6ba
    MOV AL,byte ptr [ESI]               ; 004bd6bc
    PUSH EAX                            ; 004bd6be
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd6bf
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd6c4
    XOR EAX,EAX                         ; 004bd6c6
    ADD ESP,0x4                         ; 004bd6c8
    MOV AL,byte ptr [EBX]               ; 004bd6cb | DAT_005dff53
    PUSH EAX                            ; 004bd6cd
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd6ce
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd6d3
    CMP EDI,EAX                         ; 004bd6d6
    JNZ 0x004bd681                      ; 004bd6d8
        ;   XREF to: 004bd681 (CONDITIONAL_JUMP)  ; LAB_004bd681
    MOV AH,byte ptr [EBX + 0x1]         ; 004bd6da | DAT_005dff54
    INC EBX                             ; 004bd6dd
    INC ESI                             ; 004bd6de
    TEST AH,AH                          ; 004bd6df
    JNZ 0x004bd6ba                      ; 004bd6e1
        ;   XREF to: 004bd6ba (CONDITIONAL_JUMP)  ; LAB_004bd6ba
    MOV AL,byte ptr [ESI]               ; 004bd6e3
        ;   Label: LAB_004bd6e3
    INC AL                              ; 004bd6e5
    AND EAX,0xff                        ; 004bd6e7
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd6ec | DAT_00626114
    JZ 0x004bd6f8                       ; 004bd6f3
        ;   XREF to: 004bd6f8 (CONDITIONAL_JUMP)  ; LAB_004bd6f8
    INC ESI                             ; 004bd6f5
    JMP 0x004bd6e3                      ; 004bd6f6
        ;   XREF to: 004bd6e3 (UNCONDITIONAL_JUMP)  ; LAB_004bd6e3
    MOV EDI,dword ptr [ESP + 0x598]     ; 004bd6f8
        ;   Label: LAB_004bd6f8
    PUSH EDI                            ; 004bd6ff
    MOV AL,byte ptr [ESI]               ; 004bd700
        ;   Label: LAB_004bd700
    MOV byte ptr [EDI],AL               ; 004bd702
    CMP AL,0x0                          ; 004bd704
    JZ 0x004bd718                       ; 004bd706
        ;   XREF to: 004bd718 (CONDITIONAL_JUMP)  ; LAB_004bd718
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd708
    ADD ESI,0x2                         ; 004bd70b
    MOV byte ptr [EDI + 0x1],AL         ; 004bd70e
    ADD EDI,0x2                         ; 004bd711
    CMP AL,0x0                          ; 004bd714
    JNZ 0x004bd700                      ; 004bd716
        ;   XREF to: 004bd700 (CONDITIONAL_JUMP)  ; LAB_004bd700
    POP EDI                             ; 004bd718
        ;   Label: LAB_004bd718
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bd719
    TEST EAX,EAX                        ; 004bd720
    JZ 0x004bd7e5                       ; 004bd722
        ;   XREF to: 004bd7e5 (CONDITIONAL_JUMP)  ; LAB_004bd7e5
    CMP dword ptr [EAX + 0x140],0x5     ; 004bd728
    JNZ 0x004bd7e5                      ; 004bd72f
        ;   XREF to: 004bd7e5 (CONDITIONAL_JUMP)  ; LAB_004bd7e5
    CMP dword ptr [0x01cc55cc],0x1      ; 004bd735 | DAT_01cc55cc
    JGE 0x004bd761                      ; 004bd73c
        ;   XREF to: 004bd761 (CONDITIONAL_JUMP)  ; LAB_004bd761
    MOV EBX,0x5dff85                    ; 004bd73e | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x98d                       ; 004bd743
    PUSH 0x5dff9a                       ; 004bd748 | = "Hell froze!"
    MOV dword ptr [0x01d1d400],EBX      ; 004bd74d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004bd753 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bd759
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bd75e
    MOV EAX,[0x01cc55cc]                ; 004bd761 | DAT_01cc55cc
        ;   Label: LAB_004bd761
    DEC EAX                             ; 004bd766
    IMUL EAX,EAX,0x970                  ; 004bd767
    ADD EAX,0x1cc55d0                   ; 004bd76d
    MOV EDI,dword ptr [EAX + 0x9c]      ; 004bd772
    CMP EDI,0x4                         ; 004bd778
    JGE 0x004bd7f0                      ; 004bd77b
        ;   XREF to: 004bd7f0 (CONDITIONAL_JUMP)  ; LAB_004bd7f0
    IMUL EDX,EDI,0x88                   ; 004bd77d
    LEA EBX,[EAX + 0xa0]                ; 004bd783
    LEA ESI,[EDI + 0x1]                 ; 004bd789
    ADD EBX,EDX                         ; 004bd78c
    MOV dword ptr [EAX + 0x9c],ESI      ; 004bd78e
    LEA EAX,[EBX + 0x80]                ; 004bd794
    PUSH EAX                            ; 004bd79a
    LEA EAX,[EBX + 0x7c]                ; 004bd79b
    PUSH EAX                            ; 004bd79e
    LEA EAX,[EBX + 0x78]                ; 004bd79f
    PUSH EAX                            ; 004bd7a2
    LEA EAX,[EBX + 0x74]                ; 004bd7a3
    PUSH EAX                            ; 004bd7a6
    LEA EAX,[EBX + 0x70]                ; 004bd7a7
    PUSH EAX                            ; 004bd7aa
    LEA EAX,[EBX + 0x6c]                ; 004bd7ab
    PUSH EAX                            ; 004bd7ae
    LEA EAX,[EBX + 0x68]                ; 004bd7af
    PUSH EAX                            ; 004bd7b2
    LEA EAX,[EBX + 0x64]                ; 004bd7b3
    PUSH EAX                            ; 004bd7b6
    PUSH EBX                            ; 004bd7b7
    PUSH 0x5dffcb                       ; 004bd7b8 | = "%s %d , %d , %d , %d , %f , %f , %f , %f"
    LEA EAX,[ESP + 0x428]               ; 004bd7bd
    PUSH EAX                            ; 004bd7c4
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004bd7c5
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x2c                        ; 004bd7ca
    CMP EAX,0x9                         ; 004bd7cd
    JNZ 0x004bd810                      ; 004bd7d0
        ;   XREF to: 004bd810 (CONDITIONAL_JUMP)  ; LAB_004bd810
    PUSH 0x5e001c                       ; 004bd7d2 | DAT_005e001c
    PUSH EBX                            ; 004bd7d7
    CALL engine_dosio.cpp_changeFileExtension_FUN_004796b0 ; 004bd7d8
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_004796b0(char * path, char * new_extension)
    ADD ESP,0x8                         ; 004bd7dd
    JMP 0x004bcc7e                      ; 004bd7e0
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd7e5
        ;   Label: LAB_004bd7e5
    PUSH 0x5dff57                       ; 004bd7e6 | = "Can only use \\set in a \\map entry o..."
    JMP 0x004bcdae                      ; 004bd7eb
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    PUSH EBP                            ; 004bd7f0
        ;   Label: LAB_004bd7f0
    MOV EDI,dword ptr [ESP + 0x574]     ; 004bd7f1
    PUSH EDI                            ; 004bd7f8
    PUSH 0x5dffa6                       ; 004bd7f9 | = "Too many \\sets in map %s at line %d."
    PUSH 0x1cc4270                      ; 004bd7fe | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd803
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd808
    JMP 0x004bcdbb                      ; 004bd80b
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    PUSH EBP                            ; 004bd810
        ;   Label: LAB_004bd810
    PUSH 0x5dfff4                       ; 004bd811 | = "Syntax error in \\image parms on line %d"
    JMP 0x004bcdae                      ; 004bd816
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    CMP byte ptr [ESI],0x5c             ; 004bd81b
        ;   Label: LAB_004bd81b
    JZ 0x004bd852                       ; 004bd81e
        ;   XREF to: 004bd852 (CONDITIONAL_JUMP)  ; LAB_004bd852
    MOV EBX,0x5e00f4                    ; 004bd820 | DAT_005e00f4
        ;   Label: LAB_004bd820
    LEA EAX,[ESP + 0x400]               ; 004bd825
    MOV ESI,ESP                         ; 004bd82c
    MOV dword ptr [ESP + 0x5a0],EAX     ; 004bd82e
    MOV AL,byte ptr [ESI]               ; 004bd835
        ;   Label: LAB_004bd835
    INC AL                              ; 004bd837
    MOVZX EDI,AL                        ; 004bd839
    MOV DH,byte ptr [EDI + 0x626114]    ; 004bd83c | DAT_00626114
    LEA EAX,[ESI + 0x1]                 ; 004bd842
    TEST DH,0x2                         ; 004bd845
    JZ 0x004bd9b8                       ; 004bd848
        ;   XREF to: 004bd9b8 (CONDITIONAL_JUMP)  ; LAB_004bd9b8
    MOV ESI,EAX                         ; 004bd84e
    JMP 0x004bd835                      ; 004bd850
        ;   XREF to: 004bd835 (UNCONDITIONAL_JUMP)  ; LAB_004bd835
    MOV CH,byte ptr [EBX]               ; 004bd852 | = "annotation"
        ;   Label: LAB_004bd852
    MOV ESI,EAX                         ; 004bd854
    TEST CH,CH                          ; 004bd856
    JZ 0x004bd883                       ; 004bd858
        ;   XREF to: 004bd883 (CONDITIONAL_JUMP)  ; LAB_004bd883
    XOR EAX,EAX                         ; 004bd85a
        ;   Label: LAB_004bd85a
    MOV AL,byte ptr [ESI]               ; 004bd85c
    PUSH EAX                            ; 004bd85e
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd85f
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd864
    XOR EAX,EAX                         ; 004bd866
    ADD ESP,0x4                         ; 004bd868
    MOV AL,byte ptr [EBX]               ; 004bd86b | = "annotation"
    PUSH EAX                            ; 004bd86d
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd86e
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bd873
    CMP EDI,EAX                         ; 004bd876
    JNZ 0x004bd820                      ; 004bd878
        ;   XREF to: 004bd820 (CONDITIONAL_JUMP)  ; LAB_004bd820
    MOV AL,byte ptr [EBX + 0x1]         ; 004bd87a | s_nnotation_005e0021+1
    INC EBX                             ; 004bd87d
    INC ESI                             ; 004bd87e
    TEST AL,AL                          ; 004bd87f
    JNZ 0x004bd85a                      ; 004bd881
        ;   XREF to: 004bd85a (CONDITIONAL_JUMP)  ; LAB_004bd85a
    MOV AL,byte ptr [ESI]               ; 004bd883
        ;   Label: LAB_004bd883
    INC AL                              ; 004bd885
    AND EAX,0xff                        ; 004bd887
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bd88c | DAT_00626114
    JZ 0x004bd898                       ; 004bd893
        ;   XREF to: 004bd898 (CONDITIONAL_JUMP)  ; LAB_004bd898
    INC ESI                             ; 004bd895
    JMP 0x004bd883                      ; 004bd896
        ;   XREF to: 004bd883 (UNCONDITIONAL_JUMP)  ; LAB_004bd883
    MOV EDI,dword ptr [ESP + 0x59c]     ; 004bd898
        ;   Label: LAB_004bd898
    PUSH EDI                            ; 004bd89f
    MOV AL,byte ptr [ESI]               ; 004bd8a0
        ;   Label: LAB_004bd8a0
    MOV byte ptr [EDI],AL               ; 004bd8a2
    CMP AL,0x0                          ; 004bd8a4
    JZ 0x004bd8b8                       ; 004bd8a6
        ;   XREF to: 004bd8b8 (CONDITIONAL_JUMP)  ; LAB_004bd8b8
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd8a8
    ADD ESI,0x2                         ; 004bd8ab
    MOV byte ptr [EDI + 0x1],AL         ; 004bd8ae
    ADD EDI,0x2                         ; 004bd8b1
    CMP AL,0x0                          ; 004bd8b4
    JNZ 0x004bd8a0                      ; 004bd8b6
        ;   XREF to: 004bd8a0 (CONDITIONAL_JUMP)  ; LAB_004bd8a0
    POP EDI                             ; 004bd8b8
        ;   Label: LAB_004bd8b8
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bd8b9
    TEST EAX,EAX                        ; 004bd8c0
    JZ 0x004bd982                       ; 004bd8c2
        ;   XREF to: 004bd982 (CONDITIONAL_JUMP)  ; LAB_004bd982
    CMP dword ptr [EAX + 0x140],0x5     ; 004bd8c8
    JNZ 0x004bd982                      ; 004bd8cf
        ;   XREF to: 004bd982 (CONDITIONAL_JUMP)  ; LAB_004bd982
    CMP dword ptr [0x01cc55cc],0x1      ; 004bd8d5 | DAT_01cc55cc
    JGE 0x004bd901                      ; 004bd8dc
        ;   XREF to: 004bd901 (CONDITIONAL_JUMP)  ; LAB_004bd901
    MOV EBX,0x5e0061                    ; 004bd8de | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x9b9                       ; 004bd8e3
    PUSH 0x5e0076                       ; 004bd8e8 | = "Hell froze!"
    MOV dword ptr [0x01d1d400],EBX      ; 004bd8ed | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004bd8f3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bd8f9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bd8fe
    MOV EAX,[0x01cc55cc]                ; 004bd901 | DAT_01cc55cc
        ;   Label: LAB_004bd901
    DEC EAX                             ; 004bd906
    IMUL EAX,EAX,0x970                  ; 004bd907
    ADD EAX,0x1cc55d0                   ; 004bd90d
    MOV EDI,dword ptr [EAX + 0x2c0]     ; 004bd912
    CMP EDI,0x8                         ; 004bd918
    JGE 0x004bd98d                      ; 004bd91b
        ;   XREF to: 004bd98d (CONDITIONAL_JUMP)  ; LAB_004bd98d
    IMUL EBX,EDI,0xd4                   ; 004bd91d
    LEA EDX,[EAX + 0x2c4]               ; 004bd923
    ADD EBX,EDX                         ; 004bd929
    LEA ESI,[EBX + 0x64]                ; 004bd92b
    LEA ECX,[EDI + 0x1]                 ; 004bd92e
    PUSH ESI                            ; 004bd931
    MOV dword ptr [EAX + 0x2c0],ECX     ; 004bd932
    LEA EAX,[EBX + 0xcc]                ; 004bd938
    PUSH EAX                            ; 004bd93e
    LEA EAX,[EBX + 0xc8]                ; 004bd93f
    PUSH EAX                            ; 004bd945
    PUSH EBX                            ; 004bd946
    PUSH 0x5e00ae                       ; 004bd947 | = "%[^,], %d , %d , \"%[^\"]\""
    LEA EAX,[ESP + 0x414]               ; 004bd94c
    PUSH EAX                            ; 004bd953
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004bd954
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 004bd959
    CMP EAX,0x4                         ; 004bd95c
    JNZ 0x004bd9ad                      ; 004bd95f
        ;   XREF to: 004bd9ad (CONDITIONAL_JUMP)  ; LAB_004bd9ad
    PUSH EBX                            ; 004bd961
    CALL unkaddr_004b9ab0.cpp_FUN_004b9c50 ; 004bd962
        ;   XREF to: 004b9c50 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004b9c50()
    ADD ESP,0x4                         ; 004bd967
    PUSH ESI                            ; 004bd96a
    CALL unkaddr_004b9ab0.cpp_FUN_004b9c50 ; 004bd96b
        ;   XREF to: 004b9c50 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004b9c50()
    ADD ESP,0x4                         ; 004bd970
    MOV dword ptr [EBX + 0xd0],0x0      ; 004bd973
    JMP 0x004bcc7e                      ; 004bd97d
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    PUSH EBP                            ; 004bd982
        ;   Label: LAB_004bd982
    PUSH 0x5e002c                       ; 004bd983 | = "Can only use \\annotation in a \\map ..."
    JMP 0x004bcdae                      ; 004bd988
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    PUSH EBP                            ; 004bd98d
        ;   Label: LAB_004bd98d
    MOV EBX,dword ptr [ESP + 0x574]     ; 004bd98e
    PUSH EBX                            ; 004bd995
    PUSH 0x5e0082                       ; 004bd996 | = "Too many \\annotations in map %s at l..."
    PUSH 0x1cc4270                      ; 004bd99b | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bd9a0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bd9a5
    JMP 0x004bcdbb                      ; 004bd9a8
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    PUSH EBP                            ; 004bd9ad
        ;   Label: LAB_004bd9ad
    PUSH 0x5e00c7                       ; 004bd9ae | = "Syntax error in \\annotation parms on..."
    JMP 0x004bcdae                      ; 004bd9b3
        ;   XREF to: 004bcdae (UNCONDITIONAL_JUMP)  ; LAB_004bcdae
    CMP byte ptr [ESI],0x5c             ; 004bd9b8
        ;   Label: LAB_004bd9b8
    JZ 0x004bd9ed                       ; 004bd9bb
        ;   XREF to: 004bd9ed (CONDITIONAL_JUMP)  ; LAB_004bd9ed
    CMP byte ptr [ESP],0x5c             ; 004bd9bd
        ;   Label: LAB_004bd9bd
    JZ 0x004bda59                       ; 004bd9c1
        ;   XREF to: 004bda59 (CONDITIONAL_JUMP)  ; LAB_004bda59
    MOV ESI,dword ptr [ESP + 0x570]     ; 004bd9c7
    TEST ESI,ESI                        ; 004bd9ce
    JZ 0x004bda7e                       ; 004bd9d0
        ;   XREF to: 004bda7e (CONDITIONAL_JUMP)  ; LAB_004bda7e
    MOV EAX,ESP                         ; 004bd9d6
    PUSH EAX                            ; 004bd9d8
    LEA EAX,[ESI + 0x148]               ; 004bd9d9
    PUSH EAX                            ; 004bd9df
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004bd9e0
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bd9e5
    JMP 0x004bcc7e                      ; 004bd9e8
        ;   XREF to: 004bcc7e (UNCONDITIONAL_JUMP)  ; LAB_004bcc7e
    MOV CH,byte ptr [EBX]               ; 004bd9ed | DAT_005e00f4
        ;   Label: LAB_004bd9ed
    MOV ESI,EAX                         ; 004bd9ef
    TEST CH,CH                          ; 004bd9f1
    JZ 0x004bda1e                       ; 004bd9f3
        ;   XREF to: 004bda1e (CONDITIONAL_JUMP)  ; LAB_004bda1e
    XOR EAX,EAX                         ; 004bd9f5
        ;   Label: LAB_004bd9f5
    MOV AL,byte ptr [ESI]               ; 004bd9f7
    PUSH EAX                            ; 004bd9f9
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bd9fa
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004bd9ff
    XOR EAX,EAX                         ; 004bda01
    ADD ESP,0x4                         ; 004bda03
    MOV AL,byte ptr [EBX]               ; 004bda06 | DAT_005e00f4
    PUSH EAX                            ; 004bda08
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004bda09
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004bda0e
    CMP EDI,EAX                         ; 004bda11
    JNZ 0x004bd9bd                      ; 004bda13
        ;   XREF to: 004bd9bd (CONDITIONAL_JUMP)  ; LAB_004bd9bd
    MOV AL,byte ptr [EBX + 0x1]         ; 004bda15 | DAT_005e00f5
    INC EBX                             ; 004bda18
    INC ESI                             ; 004bda19
    TEST AL,AL                          ; 004bda1a
    JNZ 0x004bd9f5                      ; 004bda1c
        ;   XREF to: 004bd9f5 (CONDITIONAL_JUMP)  ; LAB_004bd9f5
    MOV AL,byte ptr [ESI]               ; 004bda1e
        ;   Label: LAB_004bda1e
    INC AL                              ; 004bda20
    AND EAX,0xff                        ; 004bda22
    TEST byte ptr [EAX + 0x626114],0x2  ; 004bda27 | DAT_00626114
    JZ 0x004bda33                       ; 004bda2e
        ;   XREF to: 004bda33 (CONDITIONAL_JUMP)  ; LAB_004bda33
    INC ESI                             ; 004bda30
    JMP 0x004bda1e                      ; 004bda31
        ;   XREF to: 004bda1e (UNCONDITIONAL_JUMP)  ; LAB_004bda1e
    MOV EDI,dword ptr [ESP + 0x5a0]     ; 004bda33
        ;   Label: LAB_004bda33
    PUSH EDI                            ; 004bda3a
    MOV AL,byte ptr [ESI]               ; 004bda3b
        ;   Label: LAB_004bda3b
    MOV byte ptr [EDI],AL               ; 004bda3d
    CMP AL,0x0                          ; 004bda3f
    JZ 0x004bda53                       ; 004bda41
        ;   XREF to: 004bda53 (CONDITIONAL_JUMP)  ; LAB_004bda53
    MOV AL,byte ptr [ESI + 0x1]         ; 004bda43
    ADD ESI,0x2                         ; 004bda46
    MOV byte ptr [EDI + 0x1],AL         ; 004bda49
    ADD EDI,0x2                         ; 004bda4c
    CMP AL,0x0                          ; 004bda4f
    JNZ 0x004bda3b                      ; 004bda51
        ;   XREF to: 004bda3b (CONDITIONAL_JUMP)  ; LAB_004bda3b
    POP EDI                             ; 004bda53
        ;   Label: LAB_004bda53
    JMP 0x004bccbd                      ; 004bda54
        ;   XREF to: 004bccbd (UNCONDITIONAL_JUMP)  ; LAB_004bccbd
    PUSH EBP                            ; 004bda59
        ;   Label: LAB_004bda59
    MOV EBP,dword ptr [ESP + 0x5bc]     ; 004bda5a
    PUSH EBP                            ; 004bda61
    LEA EAX,[ESP + 0x8]                 ; 004bda62
    PUSH EAX                            ; 004bda66
    PUSH 0x5e00f8                       ; 004bda67 | = "Unknown tag: '%s' in %s, line %d"
    PUSH 0x1cc4270                      ; 004bda6c | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bda71
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x14                        ; 004bda76
    JMP 0x004bcdbb                      ; 004bda79
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb
    PUSH EBP                            ; 004bda7e
        ;   Label: LAB_004bda7e
    MOV EDI,dword ptr [ESP + 0x5bc]     ; 004bda7f
    PUSH EDI                            ; 004bda86
    PUSH 0x5e0119                       ; 004bda87 | = "No entry started in %s, line %d"
    PUSH 0x1cc4270                      ; 004bda8c | DAT_01cc4270
    CALL crt_unknown.c_FUN_005bfb40     ; 004bda91
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bda96
    JMP 0x004bcdbb                      ; 004bda99
        ;   XREF to: 004bcdbb (UNCONDITIONAL_JUMP)  ; LAB_004bcdbb

