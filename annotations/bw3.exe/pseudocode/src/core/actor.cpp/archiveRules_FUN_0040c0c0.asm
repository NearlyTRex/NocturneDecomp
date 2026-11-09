; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveRules_FUN_0040c0c0(int *param_1,char *param_2)
;
;
; XREF[2]:
;   core_door.cpp_FUN_00464cd0 at 00464e97
;   core_lever.cpp_CLever_archive_FUN_004e0830 at 004e0995
;
; Referenced Globals:
;   TerminatedCString s_Rule_list_opening_brace_005b5ce4
;   undefined4 DAT_005b5cfc
;   TerminatedCString s_rule_count_005b5cff
;   TerminatedCString s_ruleCount_005b5d0a
;   TerminatedCString s_anon_005b5d14
;   undefined4 DAT_005b5d29
;   TerminatedCString s_Rule_list_closing_brace_005b5d2e
;   TerminatedCString s_s_s_005b5d46
;   TerminatedCString s_s_d_ruleCount_005b5d51
;   TerminatedCString s_s_s_s_005b5d64
;   undefined4 DAT_005b5d74
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040afa0
;   core_actor.cpp_archiveDescription_FUN_0040b350
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c0c0
        ;   Label: core_actor.cpp_archiveRules_FUN_0040c0c0
    PUSH ESI                            ; 0040c0c1
    PUSH EDI                            ; 0040c0c2
    PUSH EBP                            ; 0040c0c3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c0c4
    CMP dword ptr [0x007df9b8],0x1      ; 0040c0c8 | DAT_007df9b8
    JNZ 0x0040c1c5                      ; 0040c0cf
        ;   XREF to: 0040c1c5 (CONDITIONAL_JUMP)  ; LAB_0040c1c5
    MOV ESI,dword ptr [0x007df9b4]      ; 0040c0d5 | DAT_007df9b4
        ;   Label: LAB_0040c0d5
    PUSH ESI                            ; 0040c0db
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040c0dc
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040c0e1
    MOV ESI,EAX                         ; 0040c0e4
    TEST EAX,EAX                        ; 0040c0e6
    JL 0x0040c19a                       ; 0040c0e8
        ;   XREF to: 0040c19a (CONDITIONAL_JUMP)  ; LAB_0040c19a
    CMP ESI,0xa                         ; 0040c0ee
        ;   Label: LAB_0040c0ee
    JNZ 0x0040c0d5                      ; 0040c0f1
        ;   XREF to: 0040c0d5 (CONDITIONAL_JUMP)  ; LAB_0040c0d5
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c0f3
    PUSH EDI                            ; 0040c0f7
    PUSH 0x5b5cfc                       ; 0040c0f8 | DAT_005b5cfc
    MOV EBP,dword ptr [0x007df9b4]      ; 0040c0fd | DAT_007df9b4
    PUSH EBP                            ; 0040c103
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040c104
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040c109
    CMP EAX,0x1                         ; 0040c10c
    JZ 0x0040c11f                       ; 0040c10f
        ;   XREF to: 0040c11f (CONDITIONAL_JUMP)  ; LAB_0040c11f
    PUSH EBX                            ; 0040c111
    PUSH 0x5b5cff                       ; 0040c112 | = "rule count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040c117
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c11c
    PUSH EBX                            ; 0040c11f
        ;   Label: LAB_0040c11f
    PUSH 0x5b5d0a                       ; 0040c120 | = "ruleCount"
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040c125
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c12a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c12d
    MOV EDX,dword ptr [EAX]             ; 0040c131
    XOR EDI,EDI                         ; 0040c133
    TEST EDX,EDX                        ; 0040c135
    JLE 0x0040c17b                      ; 0040c137
        ;   XREF to: 0040c17b (CONDITIONAL_JUMP)  ; LAB_0040c17b
    LEA EBP,[EAX + 0x1f8]               ; 0040c139
    LEA ESI,[EAX + 0x4]                 ; 0040c13f
    PUSH EBP                            ; 0040c142
        ;   Label: LAB_0040c142
    PUSH ESI                            ; 0040c143
    PUSH 0x5b5d14                       ; 0040c144 | = " \"%[^\"]\" => \"%[^\"]\"\n"
    MOV EAX,[0x007df9b4]                ; 0040c149 | DAT_007df9b4
    PUSH EAX                            ; 0040c14e
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040c14f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 0040c154
    CMP EAX,0x2                         ; 0040c157
    JZ 0x0040c16a                       ; 0040c15a
        ;   XREF to: 0040c16a (CONDITIONAL_JUMP)  ; LAB_0040c16a
    PUSH EBX                            ; 0040c15c
    PUSH 0x5b5d29                       ; 0040c15d | DAT_005b5d29
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040c162
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c167
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c16a
        ;   Label: LAB_0040c16a
    ADD ESI,0x64                        ; 0040c16e
    INC EDI                             ; 0040c171
    MOV ECX,dword ptr [EAX]             ; 0040c172
    ADD EBP,0x64                        ; 0040c174
    CMP EDI,ECX                         ; 0040c177
    JL 0x0040c142                       ; 0040c179
        ;   XREF to: 0040c142 (CONDITIONAL_JUMP)  ; LAB_0040c142
    MOV EDX,dword ptr [0x007df9b4]      ; 0040c17b | DAT_007df9b4
        ;   Label: LAB_0040c17b
    PUSH EDX                            ; 0040c181
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040c182
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040c187
    MOV ESI,EAX                         ; 0040c18a
    TEST EAX,EAX                        ; 0040c18c
    JL 0x0040c1ad                       ; 0040c18e
        ;   XREF to: 0040c1ad (CONDITIONAL_JUMP)  ; LAB_0040c1ad
    CMP ESI,0xa                         ; 0040c190
    JNZ 0x0040c17b                      ; 0040c193
        ;   XREF to: 0040c17b (CONDITIONAL_JUMP)  ; LAB_0040c17b
    POP EBP                             ; 0040c195
    POP EDI                             ; 0040c196
    POP ESI                             ; 0040c197
    POP EBX                             ; 0040c198
    RET                                 ; 0040c199
    PUSH EBX                            ; 0040c19a
        ;   Label: LAB_0040c19a
    PUSH 0x5b5ce4                       ; 0040c19b | = "Rule list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040c1a0
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c1a5
    JMP 0x0040c0ee                      ; 0040c1a8
        ;   XREF to: 0040c0ee (UNCONDITIONAL_JUMP)  ; LAB_0040c0ee
    PUSH EBX                            ; 0040c1ad
        ;   Label: LAB_0040c1ad
    PUSH 0x5b5d2e                       ; 0040c1ae | = "Rule list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040c1b3
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c1b8
    CMP ESI,0xa                         ; 0040c1bb
    JNZ 0x0040c17b                      ; 0040c1be
        ;   XREF to: 0040c17b (CONDITIONAL_JUMP)  ; LAB_0040c17b
    POP EBP                             ; 0040c1c0
    POP EDI                             ; 0040c1c1
    POP ESI                             ; 0040c1c2
    POP EBX                             ; 0040c1c3
    RET                                 ; 0040c1c4
    PUSH EBX                            ; 0040c1c5
        ;   Label: LAB_0040c1c5
    PUSH 0x5f0990                       ; 0040c1c6 | DAT_005f0990
    PUSH 0x5b5d46                       ; 0040c1cb | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040c1d0 | DAT_007df9b4
    PUSH ECX                            ; 0040c1d6
    CALL crt_unknown.c_FUN_005a3140     ; 0040c1d7
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0040c1dc
    PUSH 0x1                            ; 0040c1df
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040afa0 ; 0040c1e1
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
    ADD ESP,0x4                         ; 0040c1e6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c1e9
    MOV EBX,dword ptr [EAX]             ; 0040c1ed
    PUSH EBX                            ; 0040c1ef
    PUSH 0x5f0990                       ; 0040c1f0 | DAT_005f0990
    PUSH 0x5b5d51                       ; 0040c1f5 | = "%s%d // ruleCount\n"
    MOV ESI,dword ptr [0x007df9b4]      ; 0040c1fa | DAT_007df9b4
    PUSH ESI                            ; 0040c200
    CALL crt_unknown.c_FUN_005a3140     ; 0040c201
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0040c206
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c209
    MOV EBP,dword ptr [EAX]             ; 0040c20d
    XOR EDI,EDI                         ; 0040c20f
    TEST EBP,EBP                        ; 0040c211
    JLE 0x0040c250                      ; 0040c213
        ;   XREF to: 0040c250 (CONDITIONAL_JUMP)  ; LAB_0040c250
    LEA EBX,[EAX + 0x1f8]               ; 0040c215
    LEA ESI,[EAX + 0x4]                 ; 0040c21b
    PUSH EBX                            ; 0040c21e
        ;   Label: LAB_0040c21e
    PUSH ESI                            ; 0040c21f
    PUSH 0x5f0990                       ; 0040c220 | DAT_005f0990
    PUSH 0x5b5d64                       ; 0040c225 | = "%s\"%s\" => \"%s\"\n"
    MOV EAX,[0x007df9b4]                ; 0040c22a | DAT_007df9b4
    PUSH EAX                            ; 0040c22f
    CALL crt_unknown.c_FUN_005a3140     ; 0040c230
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 0040c235
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c238
    INC EDI                             ; 0040c23c
    ADD EBX,0x64                        ; 0040c23d
    MOV EDX,dword ptr [EAX]             ; 0040c240
    ADD ESI,0x64                        ; 0040c242
    CMP EDI,EDX                         ; 0040c245
    JL 0x0040c21e                       ; 0040c247
        ;   XREF to: 0040c21e (CONDITIONAL_JUMP)  ; LAB_0040c21e
    LEA EAX,[EAX]                       ; 0040c249
    NOP                                 ; 0040c24f
    PUSH -0x1                           ; 0040c250
        ;   Label: LAB_0040c250
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040afa0 ; 0040c252
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
    ADD ESP,0x4                         ; 0040c257
    PUSH 0x5f0990                       ; 0040c25a | DAT_005f0990
    PUSH 0x5b5d74                       ; 0040c25f | DAT_005b5d74
    MOV ECX,dword ptr [0x007df9b4]      ; 0040c264 | DAT_007df9b4
    PUSH ECX                            ; 0040c26a
    CALL crt_unknown.c_FUN_005a3140     ; 0040c26b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040c270
    POP EBP                             ; 0040c273
    POP EDI                             ; 0040c274
    POP ESI                             ; 0040c275
    POP EBX                             ; 0040c276
    RET                                 ; 0040c277

