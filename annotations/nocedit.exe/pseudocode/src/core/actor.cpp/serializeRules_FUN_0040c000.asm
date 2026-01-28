; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_serializeRules_FUN_0040c000(void *rules,char *property_name)
;
; Parameters:
; void *           Stack[0x4]:4   rules
; char *           Stack[0x8]:4   property_name
;
; XREF[2]:
;   core_door.cpp_CDoor_serialize_FUN_00480aa0 at 00480c67
;   core_lever.cpp_CLever_load_FUN_00504e80 at 00504fe5
;
; Referenced Globals:
;   TerminatedCString s_Rule_list_opening_brace_00614117
;   TerminatedCString s_d_0061412f
;   TerminatedCString s_rule_count_00614132
;   TerminatedCString s_ruleCount_0061413d
;   TerminatedCString s_anon_00614147
;   TerminatedCString s_rule_0061415c
;   TerminatedCString s_Rule_list_closing_brace_00614161
;   TerminatedCString s_s_s_00614179
;   TerminatedCString s_s_d_ruleCount_00614184
;   TerminatedCString s_s_s_s_00614197
;   TerminatedCString s_s_006141a7
;   char[104] g_PropertyNamePrefix
;   FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   core_actor.cpp_serializeDescription_FUN_0040b290
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c000
        ;   Label: core_actor.cpp_serializeRules_FUN_0040c000
    PUSH ESI                            ; 0040c001
    PUSH EDI                            ; 0040c002
    PUSH EBP                            ; 0040c003
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c004
    CMP dword ptr [0x00822038],0x1      ; 0040c008 | g_ActorReadingMode
    JNZ 0x0040c105                      ; 0040c00f
        ;   XREF to: 0040c105 (CONDITIONAL_JUMP)  ; LAB_0040c105
    MOV ESI,dword ptr [0x00822034]      ; 0040c015 | g_ActorDataFile
        ;   Label: LAB_0040c015
    PUSH ESI                            ; 0040c01b
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040c01c
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0040c021
    MOV ESI,EAX                         ; 0040c024
    TEST EAX,EAX                        ; 0040c026
    JL 0x0040c0da                       ; 0040c028
        ;   XREF to: 0040c0da (CONDITIONAL_JUMP)  ; LAB_0040c0da
    CMP ESI,0xa                         ; 0040c02e
        ;   Label: LAB_0040c02e
    JNZ 0x0040c015                      ; 0040c031
        ;   XREF to: 0040c015 (CONDITIONAL_JUMP)  ; LAB_0040c015
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040c033
    PUSH EDI                            ; 0040c037
    PUSH 0x61412f                       ; 0040c038 | = "%d"
    MOV EBP,dword ptr [0x00822034]      ; 0040c03d | g_ActorDataFile
    PUSH EBP                            ; 0040c043
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040c044
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0040c049
    CMP EAX,0x1                         ; 0040c04c
    JZ 0x0040c05f                       ; 0040c04f
        ;   XREF to: 0040c05f (CONDITIONAL_JUMP)  ; LAB_0040c05f
    PUSH EBX                            ; 0040c051
    PUSH 0x614132                       ; 0040c052 | = "rule count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040c057
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c05c
    PUSH EBX                            ; 0040c05f
        ;   Label: LAB_0040c05f
    PUSH 0x61413d                       ; 0040c060 | = "ruleCount"
    CALL core_actor.cpp_serializeDescription_FUN_0040b290 ; 0040c065
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeDescription_FUN_0040b290(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040c06a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c06d
    MOV EDX,dword ptr [EAX]             ; 0040c071
    XOR EDI,EDI                         ; 0040c073
    TEST EDX,EDX                        ; 0040c075
    JLE 0x0040c0bb                      ; 0040c077
        ;   XREF to: 0040c0bb (CONDITIONAL_JUMP)  ; LAB_0040c0bb
    LEA EBP,[EAX + 0x1f8]               ; 0040c079
    LEA ESI,[EAX + 0x4]                 ; 0040c07f
    PUSH EBP                            ; 0040c082
        ;   Label: LAB_0040c082
    PUSH ESI                            ; 0040c083
    PUSH 0x614147                       ; 0040c084 | = " \"%[^\"]\" => \"%[^\"]\"\n"
    MOV EAX,[0x00822034]                ; 0040c089 | g_ActorDataFile
    PUSH EAX                            ; 0040c08e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040c08f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040c094
    CMP EAX,0x2                         ; 0040c097
    JZ 0x0040c0aa                       ; 0040c09a
        ;   XREF to: 0040c0aa (CONDITIONAL_JUMP)  ; LAB_0040c0aa
    PUSH EBX                            ; 0040c09c
    PUSH 0x61415c                       ; 0040c09d | = "rule"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040c0a2
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c0a7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c0aa
        ;   Label: LAB_0040c0aa
    ADD ESI,0x64                        ; 0040c0ae
    INC EDI                             ; 0040c0b1
    MOV ECX,dword ptr [EAX]             ; 0040c0b2
    ADD EBP,0x64                        ; 0040c0b4
    CMP EDI,ECX                         ; 0040c0b7
    JL 0x0040c082                       ; 0040c0b9
        ;   XREF to: 0040c082 (CONDITIONAL_JUMP)  ; LAB_0040c082
    MOV EDX,dword ptr [0x00822034]      ; 0040c0bb | g_ActorDataFile
        ;   Label: LAB_0040c0bb
    PUSH EDX                            ; 0040c0c1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040c0c2
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0040c0c7
    MOV ESI,EAX                         ; 0040c0ca
    TEST EAX,EAX                        ; 0040c0cc
    JL 0x0040c0ed                       ; 0040c0ce
        ;   XREF to: 0040c0ed (CONDITIONAL_JUMP)  ; LAB_0040c0ed
    CMP ESI,0xa                         ; 0040c0d0
    JNZ 0x0040c0bb                      ; 0040c0d3
        ;   XREF to: 0040c0bb (CONDITIONAL_JUMP)  ; LAB_0040c0bb
    POP EBP                             ; 0040c0d5
    POP EDI                             ; 0040c0d6
    POP ESI                             ; 0040c0d7
    POP EBX                             ; 0040c0d8
    RET                                 ; 0040c0d9
    PUSH EBX                            ; 0040c0da
        ;   Label: LAB_0040c0da
    PUSH 0x614117                       ; 0040c0db | = "Rule list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040c0e0
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c0e5
    JMP 0x0040c02e                      ; 0040c0e8
        ;   XREF to: 0040c02e (UNCONDITIONAL_JUMP)  ; LAB_0040c02e
    PUSH EBX                            ; 0040c0ed
        ;   Label: LAB_0040c0ed
    PUSH 0x614161                       ; 0040c0ee | = "Rule list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040c0f3
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c0f8
    CMP ESI,0xa                         ; 0040c0fb
    JNZ 0x0040c0bb                      ; 0040c0fe
        ;   XREF to: 0040c0bb (CONDITIONAL_JUMP)  ; LAB_0040c0bb
    POP EBP                             ; 0040c100
    POP EDI                             ; 0040c101
    POP ESI                             ; 0040c102
    POP EBX                             ; 0040c103
    RET                                 ; 0040c104
    PUSH EBX                            ; 0040c105
        ;   Label: LAB_0040c105
    PUSH 0x66e178                       ; 0040c106 | g_PropertyNamePrefix
    PUSH 0x614179                       ; 0040c10b | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040c110 | g_ActorDataFile
    PUSH ECX                            ; 0040c116
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040c117
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040c11c
    PUSH 0x1                            ; 0040c11f
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040c121
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040c126
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c129
    MOV EBX,dword ptr [EAX]             ; 0040c12d
    PUSH EBX                            ; 0040c12f
    PUSH 0x66e178                       ; 0040c130 | g_PropertyNamePrefix
    PUSH 0x614184                       ; 0040c135 | = "%s%d // ruleCount\n"
    MOV ESI,dword ptr [0x00822034]      ; 0040c13a | g_ActorDataFile
    PUSH ESI                            ; 0040c140
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040c141
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040c146
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c149
    MOV EBP,dword ptr [EAX]             ; 0040c14d
    XOR EDI,EDI                         ; 0040c14f
    TEST EBP,EBP                        ; 0040c151
    JLE 0x0040c190                      ; 0040c153
        ;   XREF to: 0040c190 (CONDITIONAL_JUMP)  ; LAB_0040c190
    LEA EBX,[EAX + 0x1f8]               ; 0040c155
    LEA ESI,[EAX + 0x4]                 ; 0040c15b
    PUSH EBX                            ; 0040c15e
        ;   Label: LAB_0040c15e
    PUSH ESI                            ; 0040c15f
    PUSH 0x66e178                       ; 0040c160 | g_PropertyNamePrefix
    PUSH 0x614197                       ; 0040c165 | = "%s\"%s\" => \"%s\"\n"
    MOV EAX,[0x00822034]                ; 0040c16a | g_ActorDataFile
    PUSH EAX                            ; 0040c16f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040c170
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0040c175
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040c178
    INC EDI                             ; 0040c17c
    ADD EBX,0x64                        ; 0040c17d
    MOV EDX,dword ptr [EAX]             ; 0040c180
    ADD ESI,0x64                        ; 0040c182
    CMP EDI,EDX                         ; 0040c185
    JL 0x0040c15e                       ; 0040c187
        ;   XREF to: 0040c15e (CONDITIONAL_JUMP)  ; LAB_0040c15e
    LEA EAX,[EAX]                       ; 0040c189
    NOP                                 ; 0040c18f
    PUSH -0x1                           ; 0040c190
        ;   Label: LAB_0040c190
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040c192
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040c197
    PUSH 0x66e178                       ; 0040c19a | g_PropertyNamePrefix
    PUSH 0x6141a7                       ; 0040c19f | = "%s}\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040c1a4 | g_ActorDataFile
    PUSH ECX                            ; 0040c1aa
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040c1ab
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0040c1b0
    POP EBP                             ; 0040c1b3
    POP EDI                             ; 0040c1b4
    POP ESI                             ; 0040c1b5
    POP EBX                             ; 0040c1b6
    RET                                 ; 0040c1b7

