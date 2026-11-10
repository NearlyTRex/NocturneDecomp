; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveRules_FUN_0040c170(int *param_1,char *param_2)
;
;
; XREF[2]:
;   core_door.cpp_CDoor_archive_FUN_0045ff80 at 00460147
;   core_lever.cpp_CLever_archive_FUN_004e22e0 at 004e2445
;
; Referenced Globals:
;   TerminatedCString s_Rule_list_opening_brace_005cad35
;   undefined4 DAT_005cad4d
;   TerminatedCString s_rule_count_005cad50
;   TerminatedCString s_ruleCount_005cad5b
;   TerminatedCString s_anon_005cad65
;   undefined4 DAT_005cad7a
;   TerminatedCString s_Rule_list_closing_brace_005cad7f
;   TerminatedCString s_s_s_005cad97
;   TerminatedCString s_s_d_ruleCount_005cada2
;   TerminatedCString s_s_s_s_005cadb5
;   undefined4 DAT_005cadc5
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040b050
;   core_actor.cpp_archiveDescription_FUN_0040b400
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c170
        ;   Label: core_actor.cpp_archiveRules_FUN_0040c170
    PUSH ESI                            ; 0040c171
    PUSH EDI                            ; 0040c172
    PUSH EBP                            ; 0040c173
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c174
    CMP dword ptr [0x007bc038],0x1      ; 0040c178 | DAT_007bc038
    JNZ 0x0040c275                      ; 0040c17f
        ;   XREF to: 0040c275 (CONDITIONAL_JUMP)  ; LAB_0040c275
    MOV ESI,dword ptr [0x007bc034]      ; 0040c185 | DAT_007bc034
        ;   Label: LAB_0040c185
    PUSH ESI                            ; 0040c18b
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040c18c
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040c191
    MOV ESI,EAX                         ; 0040c194
    TEST EAX,EAX                        ; 0040c196
    JL 0x0040c24a                       ; 0040c198
        ;   XREF to: 0040c24a (CONDITIONAL_JUMP)  ; LAB_0040c24a
    CMP ESI,0xa                         ; 0040c19e
        ;   Label: LAB_0040c19e
    JNZ 0x0040c185                      ; 0040c1a1
        ;   XREF to: 0040c185 (CONDITIONAL_JUMP)  ; LAB_0040c185
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c1a3
    PUSH EDI                            ; 0040c1a7
    PUSH 0x5cad4d                       ; 0040c1a8 | DAT_005cad4d
    MOV EBP,dword ptr [0x007bc034]      ; 0040c1ad | DAT_007bc034
    PUSH EBP                            ; 0040c1b3
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040c1b4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0040c1b9
    CMP EAX,0x1                         ; 0040c1bc
    JZ 0x0040c1cf                       ; 0040c1bf
        ;   XREF to: 0040c1cf (CONDITIONAL_JUMP)  ; LAB_0040c1cf
    PUSH EBX                            ; 0040c1c1
    PUSH 0x5cad50                       ; 0040c1c2 | = "rule count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c1c7
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c1cc
    PUSH EBX                            ; 0040c1cf
        ;   Label: LAB_0040c1cf
    PUSH 0x5cad5b                       ; 0040c1d0 | = "ruleCount"
    CALL core_actor.cpp_archiveDescription_FUN_0040b400 ; 0040c1d5
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b400(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c1da
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c1dd
    MOV EDX,dword ptr [EAX]             ; 0040c1e1
    XOR EDI,EDI                         ; 0040c1e3
    TEST EDX,EDX                        ; 0040c1e5
    JLE 0x0040c22b                      ; 0040c1e7
        ;   XREF to: 0040c22b (CONDITIONAL_JUMP)  ; LAB_0040c22b
    LEA EBP,[EAX + 0x1f8]               ; 0040c1e9
    LEA ESI,[EAX + 0x4]                 ; 0040c1ef
    PUSH EBP                            ; 0040c1f2
        ;   Label: LAB_0040c1f2
    PUSH ESI                            ; 0040c1f3
    PUSH 0x5cad65                       ; 0040c1f4 | = " \"%[^\"]\" => \"%[^\"]\"\n"
    MOV EAX,[0x007bc034]                ; 0040c1f9 | DAT_007bc034
    PUSH EAX                            ; 0040c1fe
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040c1ff
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x10                        ; 0040c204
    CMP EAX,0x2                         ; 0040c207
    JZ 0x0040c21a                       ; 0040c20a
        ;   XREF to: 0040c21a (CONDITIONAL_JUMP)  ; LAB_0040c21a
    PUSH EBX                            ; 0040c20c
    PUSH 0x5cad7a                       ; 0040c20d | DAT_005cad7a
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c212
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c217
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c21a
        ;   Label: LAB_0040c21a
    ADD ESI,0x64                        ; 0040c21e
    INC EDI                             ; 0040c221
    MOV ECX,dword ptr [EAX]             ; 0040c222
    ADD EBP,0x64                        ; 0040c224
    CMP EDI,ECX                         ; 0040c227
    JL 0x0040c1f2                       ; 0040c229
        ;   XREF to: 0040c1f2 (CONDITIONAL_JUMP)  ; LAB_0040c1f2
    MOV EDX,dword ptr [0x007bc034]      ; 0040c22b | DAT_007bc034
        ;   Label: LAB_0040c22b
    PUSH EDX                            ; 0040c231
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040c232
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040c237
    MOV ESI,EAX                         ; 0040c23a
    TEST EAX,EAX                        ; 0040c23c
    JL 0x0040c25d                       ; 0040c23e
        ;   XREF to: 0040c25d (CONDITIONAL_JUMP)  ; LAB_0040c25d
    CMP ESI,0xa                         ; 0040c240
    JNZ 0x0040c22b                      ; 0040c243
        ;   XREF to: 0040c22b (CONDITIONAL_JUMP)  ; LAB_0040c22b
    POP EBP                             ; 0040c245
    POP EDI                             ; 0040c246
    POP ESI                             ; 0040c247
    POP EBX                             ; 0040c248
    RET                                 ; 0040c249
    PUSH EBX                            ; 0040c24a
        ;   Label: LAB_0040c24a
    PUSH 0x5cad35                       ; 0040c24b | = "Rule list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c250
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c255
    JMP 0x0040c19e                      ; 0040c258
        ;   XREF to: 0040c19e (UNCONDITIONAL_JUMP)  ; LAB_0040c19e
    PUSH EBX                            ; 0040c25d
        ;   Label: LAB_0040c25d
    PUSH 0x5cad7f                       ; 0040c25e | = "Rule list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c263
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c268
    CMP ESI,0xa                         ; 0040c26b
    JNZ 0x0040c22b                      ; 0040c26e
        ;   XREF to: 0040c22b (CONDITIONAL_JUMP)  ; LAB_0040c22b
    POP EBP                             ; 0040c270
    POP EDI                             ; 0040c271
    POP ESI                             ; 0040c272
    POP EBX                             ; 0040c273
    RET                                 ; 0040c274
    PUSH EBX                            ; 0040c275
        ;   Label: LAB_0040c275
    PUSH 0x609590                       ; 0040c276 | DAT_00609590
    PUSH 0x5cad97                       ; 0040c27b | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007bc034]      ; 0040c280 | DAT_007bc034
    PUSH ECX                            ; 0040c286
    CALL crt_unknown.c_FUN_005b8010     ; 0040c287
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040c28c
    PUSH 0x1                            ; 0040c28f
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040c291
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040c296
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c299
    MOV EBX,dword ptr [EAX]             ; 0040c29d
    PUSH EBX                            ; 0040c29f
    PUSH 0x609590                       ; 0040c2a0 | DAT_00609590
    PUSH 0x5cada2                       ; 0040c2a5 | = "%s%d // ruleCount\n"
    MOV ESI,dword ptr [0x007bc034]      ; 0040c2aa | DAT_007bc034
    PUSH ESI                            ; 0040c2b0
    CALL crt_unknown.c_FUN_005b8010     ; 0040c2b1
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040c2b6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c2b9
    MOV EBP,dword ptr [EAX]             ; 0040c2bd
    XOR EDI,EDI                         ; 0040c2bf
    TEST EBP,EBP                        ; 0040c2c1
    JLE 0x0040c300                      ; 0040c2c3
        ;   XREF to: 0040c300 (CONDITIONAL_JUMP)  ; LAB_0040c300
    LEA EBX,[EAX + 0x1f8]               ; 0040c2c5
    LEA ESI,[EAX + 0x4]                 ; 0040c2cb
    PUSH EBX                            ; 0040c2ce
        ;   Label: LAB_0040c2ce
    PUSH ESI                            ; 0040c2cf
    PUSH 0x609590                       ; 0040c2d0 | DAT_00609590
    PUSH 0x5cadb5                       ; 0040c2d5 | = "%s\"%s\" => \"%s\"\n"
    MOV EAX,[0x007bc034]                ; 0040c2da | DAT_007bc034
    PUSH EAX                            ; 0040c2df
    CALL crt_unknown.c_FUN_005b8010     ; 0040c2e0
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 0040c2e5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c2e8
    INC EDI                             ; 0040c2ec
    ADD EBX,0x64                        ; 0040c2ed
    MOV EDX,dword ptr [EAX]             ; 0040c2f0
    ADD ESI,0x64                        ; 0040c2f2
    CMP EDI,EDX                         ; 0040c2f5
    JL 0x0040c2ce                       ; 0040c2f7
        ;   XREF to: 0040c2ce (CONDITIONAL_JUMP)  ; LAB_0040c2ce
    LEA EAX,[EAX]                       ; 0040c2f9
    NOP                                 ; 0040c2ff
    PUSH -0x1                           ; 0040c300
        ;   Label: LAB_0040c300
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040c302
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040c307
    PUSH 0x609590                       ; 0040c30a | DAT_00609590
    PUSH 0x5cadc5                       ; 0040c30f | DAT_005cadc5
    MOV ECX,dword ptr [0x007bc034]      ; 0040c314 | DAT_007bc034
    PUSH ECX                            ; 0040c31a
    CALL crt_unknown.c_FUN_005b8010     ; 0040c31b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040c320
    POP EBP                             ; 0040c323
    POP EDI                             ; 0040c324
    POP ESI                             ; 0040c325
    POP EBX                             ; 0040c326
    RET                                 ; 0040c327

