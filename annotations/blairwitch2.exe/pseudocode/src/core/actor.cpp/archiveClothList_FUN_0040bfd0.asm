; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveClothList_FUN_0040bfd0(int *param_1,char *param_2)
;
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_archive_FUN_00422c30 at 00422d3a
;   core_hostage.cpp_CHostage_archive_FUN_004d2df0 at 004d2ea2
;   core_mobster.cpp_FUN_004ffb70 at 004ffbe0
;   core_zombie.cpp_FUN_00599160 at 00599261
;
; Referenced Globals:
;   TerminatedCString s_Cloth_list_opening_brace_005cac9e
;   undefined4 DAT_005cacb7
;   TerminatedCString s_cloth_count_005cacba
;   TerminatedCString s_clothCount_005cacc6
;   TerminatedCString s_anon_005cacd1
;   TerminatedCString s_cloth_filename_entry_005cacdb
;   TerminatedCString s_Cloth_list_closing_brace_005cacf0
;   TerminatedCString s_s_s_005cad09
;   TerminatedCString s_s_d_clothCount_005cad14
;   TerminatedCString s_s_s_005cad28
;   undefined4 DAT_005cad30
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

    PUSH EBX                            ; 0040bfd0
        ;   Label: core_actor.cpp_archiveClothList_FUN_0040bfd0
    PUSH ESI                            ; 0040bfd1
    PUSH EDI                            ; 0040bfd2
    PUSH EBP                            ; 0040bfd3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040bfd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040bfd8
    CMP dword ptr [0x007bc038],0x1      ; 0040bfdc | DAT_007bc038
    JNZ 0x0040c0c6                      ; 0040bfe3
        ;   XREF to: 0040c0c6 (CONDITIONAL_JUMP)  ; LAB_0040c0c6
    MOV ESI,dword ptr [0x007bc034]      ; 0040bfe9 | DAT_007bc034
        ;   Label: LAB_0040bfe9
    PUSH ESI                            ; 0040bfef
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040bff0
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040bff5
    MOV ESI,EAX                         ; 0040bff8
    TEST EAX,EAX                        ; 0040bffa
    JL 0x0040c09b                       ; 0040bffc
        ;   XREF to: 0040c09b (CONDITIONAL_JUMP)  ; LAB_0040c09b
    CMP ESI,0xa                         ; 0040c002
        ;   Label: LAB_0040c002
    JNZ 0x0040bfe9                      ; 0040c005
        ;   XREF to: 0040bfe9 (CONDITIONAL_JUMP)  ; LAB_0040bfe9
    PUSH EBP                            ; 0040c007
    PUSH 0x5cacb7                       ; 0040c008 | DAT_005cacb7
    MOV EDI,dword ptr [0x007bc034]      ; 0040c00d | DAT_007bc034
    PUSH EDI                            ; 0040c013
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040c014
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0040c019
    CMP EAX,0x1                         ; 0040c01c
    JZ 0x0040c02f                       ; 0040c01f
        ;   XREF to: 0040c02f (CONDITIONAL_JUMP)  ; LAB_0040c02f
    PUSH EBX                            ; 0040c021
    PUSH 0x5cacba                       ; 0040c022 | = "cloth count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c027
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c02c
    PUSH EBX                            ; 0040c02f
        ;   Label: LAB_0040c02f
    PUSH 0x5cacc6                       ; 0040c030 | = "clothCount"
    XOR EDI,EDI                         ; 0040c035
    CALL core_actor.cpp_archiveDescription_FUN_0040b400 ; 0040c037
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b400(char * property_description, char * property_name)
    MOV EAX,dword ptr [EBP]             ; 0040c03c
    ADD ESP,0x8                         ; 0040c03f
    TEST EAX,EAX                        ; 0040c042
    JLE 0x0040c07c                      ; 0040c044
        ;   XREF to: 0040c07c (CONDITIONAL_JUMP)  ; LAB_0040c07c
    LEA ESI,[EBP + 0x4]                 ; 0040c046
    PUSH ESI                            ; 0040c049
        ;   Label: LAB_0040c049
    PUSH 0x5cacd1                       ; 0040c04a | = " \"%[^\"]\"\n"
    MOV ECX,dword ptr [0x007bc034]      ; 0040c04f | DAT_007bc034
    PUSH ECX                            ; 0040c055
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040c056
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0040c05b
    CMP EAX,0x1                         ; 0040c05e
    JZ 0x0040c071                       ; 0040c061
        ;   XREF to: 0040c071 (CONDITIONAL_JUMP)  ; LAB_0040c071
    PUSH EBX                            ; 0040c063
    PUSH 0x5cacdb                       ; 0040c064 | = "cloth filename entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c069
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c06e
    INC EDI                             ; 0040c071
        ;   Label: LAB_0040c071
    MOV EDX,dword ptr [EBP]             ; 0040c072
    ADD ESI,0x28                        ; 0040c075
    CMP EDI,EDX                         ; 0040c078
    JL 0x0040c049                       ; 0040c07a
        ;   XREF to: 0040c049 (CONDITIONAL_JUMP)  ; LAB_0040c049
    MOV ESI,dword ptr [0x007bc034]      ; 0040c07c | DAT_007bc034
        ;   Label: LAB_0040c07c
    PUSH ESI                            ; 0040c082
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040c083
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040c088
    MOV ESI,EAX                         ; 0040c08b
    TEST EAX,EAX                        ; 0040c08d
    JL 0x0040c0ae                       ; 0040c08f
        ;   XREF to: 0040c0ae (CONDITIONAL_JUMP)  ; LAB_0040c0ae
    CMP ESI,0xa                         ; 0040c091
    JNZ 0x0040c07c                      ; 0040c094
        ;   XREF to: 0040c07c (CONDITIONAL_JUMP)  ; LAB_0040c07c
    POP EBP                             ; 0040c096
    POP EDI                             ; 0040c097
    POP ESI                             ; 0040c098
    POP EBX                             ; 0040c099
    RET                                 ; 0040c09a
    PUSH EBX                            ; 0040c09b
        ;   Label: LAB_0040c09b
    PUSH 0x5cac9e                       ; 0040c09c | = "Cloth list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c0a1
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c0a6
    JMP 0x0040c002                      ; 0040c0a9
        ;   XREF to: 0040c002 (UNCONDITIONAL_JUMP)  ; LAB_0040c002
    PUSH EBX                            ; 0040c0ae
        ;   Label: LAB_0040c0ae
    PUSH 0x5cacf0                       ; 0040c0af | = "Cloth list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040c0b4
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c0b9
    CMP ESI,0xa                         ; 0040c0bc
    JNZ 0x0040c07c                      ; 0040c0bf
        ;   XREF to: 0040c07c (CONDITIONAL_JUMP)  ; LAB_0040c07c
    POP EBP                             ; 0040c0c1
    POP EDI                             ; 0040c0c2
    POP ESI                             ; 0040c0c3
    POP EBX                             ; 0040c0c4
    RET                                 ; 0040c0c5
    PUSH EBX                            ; 0040c0c6
        ;   Label: LAB_0040c0c6
    PUSH 0x609590                       ; 0040c0c7 | DAT_00609590
    PUSH 0x5cad09                       ; 0040c0cc | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007bc034]      ; 0040c0d1 | DAT_007bc034
    PUSH ECX                            ; 0040c0d7
    CALL crt_unknown.c_FUN_005b8010     ; 0040c0d8
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040c0dd
    PUSH 0x1                            ; 0040c0e0
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040c0e2
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040c0e7
    MOV EBX,dword ptr [EBP]             ; 0040c0ea
    PUSH EBX                            ; 0040c0ed
    PUSH 0x609590                       ; 0040c0ee | DAT_00609590
    PUSH 0x5cad14                       ; 0040c0f3 | = "%s%d // clothCount\n"
    MOV ESI,dword ptr [0x007bc034]      ; 0040c0f8 | DAT_007bc034
    PUSH ESI                            ; 0040c0fe
    XOR EBX,EBX                         ; 0040c0ff
    CALL crt_unknown.c_FUN_005b8010     ; 0040c101
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDI,dword ptr [EBP]             ; 0040c106
    ADD ESP,0x10                        ; 0040c109
    TEST EDI,EDI                        ; 0040c10c
    JLE 0x0040c140                      ; 0040c10e
        ;   XREF to: 0040c140 (CONDITIONAL_JUMP)  ; LAB_0040c140
    LEA ESI,[EBP + 0x4]                 ; 0040c110
    PUSH ESI                            ; 0040c113
        ;   Label: LAB_0040c113
    PUSH 0x609590                       ; 0040c114 | DAT_00609590
    PUSH 0x5cad28                       ; 0040c119 | = "%s\"%s\"\n"
    MOV EAX,[0x007bc034]                ; 0040c11e | DAT_007bc034
    PUSH EAX                            ; 0040c123
    INC EBX                             ; 0040c124
    ADD ESI,0x28                        ; 0040c125
    CALL crt_unknown.c_FUN_005b8010     ; 0040c128
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBP]             ; 0040c12d
    ADD ESP,0x10                        ; 0040c130
    CMP EBX,EDX                         ; 0040c133
    JL 0x0040c113                       ; 0040c135
        ;   XREF to: 0040c113 (CONDITIONAL_JUMP)  ; LAB_0040c113
    LEA EAX,[EAX]                       ; 0040c137
    LEA EDX,[EDX]                       ; 0040c13d
    PUSH -0x1                           ; 0040c140
        ;   Label: LAB_0040c140
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040c142
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040c147
    PUSH 0x609590                       ; 0040c14a | DAT_00609590
    PUSH 0x5cad30                       ; 0040c14f | DAT_005cad30
    MOV ECX,dword ptr [0x007bc034]      ; 0040c154 | DAT_007bc034
    PUSH ECX                            ; 0040c15a
    CALL crt_unknown.c_FUN_005b8010     ; 0040c15b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040c160
    POP EBP                             ; 0040c163
    POP EDI                             ; 0040c164
    POP ESI                             ; 0040c165
    POP EBX                             ; 0040c166
    RET                                 ; 0040c167

