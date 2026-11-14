; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveRules_FUN_0040be80(CRuleList *rules,char *property_name)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   rules
; char *           Stack[0x8]:4   property_name
;
; XREF[2]:
;   core_door.cpp_CDoor_archive_FUN_00478490 at 00478657
;   core_lever.cpp_CLever_archive_FUN_004ff770 at 004ff8d5
;
; Referenced Globals:
;   TerminatedCString s_Rule_list_opening_brace_005d2c98
;   undefined4 DAT_005d2cb0
;   TerminatedCString s_rule_count_005d2cb3
;   TerminatedCString s_ruleCount_005d2cbe
;   TerminatedCString s_anon_005d2cc8
;   undefined4 DAT_005d2cdd
;   TerminatedCString s_Rule_list_closing_brace_005d2ce2
;   TerminatedCString s_s_s_005d2cfa
;   TerminatedCString s_s_d_ruleCount_005d2d05
;   TerminatedCString s_s_s_s_005d2d18
;   undefined4 DAT_005d2d28
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040ad60
;   core_actor.cpp_archiveDescription_FUN_0040b110
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040be80
        ;   Label: core_actor.cpp_archiveRules_FUN_0040be80
    PUSH ESI                            ; 0040be81
    PUSH EDI                            ; 0040be82
    PUSH EBP                            ; 0040be83
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040be84
    CMP dword ptr [0x007c3038],0x1      ; 0040be88 | DAT_007c3038
    JNZ 0x0040bf85                      ; 0040be8f
        ;   XREF to: 0040bf85 (CONDITIONAL_JUMP)  ; LAB_0040bf85
    MOV ESI,dword ptr [0x007c3034]      ; 0040be95 | DAT_007c3034
        ;   Label: LAB_0040be95
    PUSH ESI                            ; 0040be9b
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040be9c
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0040bea1
    MOV ESI,EAX                         ; 0040bea4
    TEST EAX,EAX                        ; 0040bea6
    JL 0x0040bf5a                       ; 0040bea8
        ;   XREF to: 0040bf5a (CONDITIONAL_JUMP)  ; LAB_0040bf5a
    CMP ESI,0xa                         ; 0040beae
        ;   Label: LAB_0040beae
    JNZ 0x0040be95                      ; 0040beb1
        ;   XREF to: 0040be95 (CONDITIONAL_JUMP)  ; LAB_0040be95
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040beb3
    PUSH EDI                            ; 0040beb7
    PUSH 0x5d2cb0                       ; 0040beb8 | DAT_005d2cb0
    MOV EBP,dword ptr [0x007c3034]      ; 0040bebd | DAT_007c3034
    PUSH EBP                            ; 0040bec3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040bec4
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bec9
    CMP EAX,0x1                         ; 0040becc
    JZ 0x0040bedf                       ; 0040becf
        ;   XREF to: 0040bedf (CONDITIONAL_JUMP)  ; LAB_0040bedf
    PUSH EBX                            ; 0040bed1
    PUSH 0x5d2cb3                       ; 0040bed2 | = "rule count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bed7
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bedc
    PUSH EBX                            ; 0040bedf
        ;   Label: LAB_0040bedf
    PUSH 0x5d2cbe                       ; 0040bee0 | = "ruleCount"
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040bee5
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    ADD ESP,0x8                         ; 0040beea
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040beed
    MOV EDX,dword ptr [EAX]             ; 0040bef1
    XOR EDI,EDI                         ; 0040bef3
    TEST EDX,EDX                        ; 0040bef5
    JLE 0x0040bf3b                      ; 0040bef7
        ;   XREF to: 0040bf3b (CONDITIONAL_JUMP)  ; LAB_0040bf3b
    LEA EBP,[EAX + 0x1f8]               ; 0040bef9
    LEA ESI,[EAX + 0x4]                 ; 0040beff
    PUSH EBP                            ; 0040bf02
        ;   Label: LAB_0040bf02
    PUSH ESI                            ; 0040bf03
    PUSH 0x5d2cc8                       ; 0040bf04 | = " \"%[^\"]\" => \"%[^\"]\"\n"
    MOV EAX,[0x007c3034]                ; 0040bf09 | DAT_007c3034
    PUSH EAX                            ; 0040bf0e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040bf0f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040bf14
    CMP EAX,0x2                         ; 0040bf17
    JZ 0x0040bf2a                       ; 0040bf1a
        ;   XREF to: 0040bf2a (CONDITIONAL_JUMP)  ; LAB_0040bf2a
    PUSH EBX                            ; 0040bf1c
    PUSH 0x5d2cdd                       ; 0040bf1d | DAT_005d2cdd
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bf22
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf27
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040bf2a
        ;   Label: LAB_0040bf2a
    ADD ESI,0x64                        ; 0040bf2e
    INC EDI                             ; 0040bf31
    MOV ECX,dword ptr [EAX]             ; 0040bf32
    ADD EBP,0x64                        ; 0040bf34
    CMP EDI,ECX                         ; 0040bf37
    JL 0x0040bf02                       ; 0040bf39
        ;   XREF to: 0040bf02 (CONDITIONAL_JUMP)  ; LAB_0040bf02
    MOV EDX,dword ptr [0x007c3034]      ; 0040bf3b | DAT_007c3034
        ;   Label: LAB_0040bf3b
    PUSH EDX                            ; 0040bf41
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040bf42
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0040bf47
    MOV ESI,EAX                         ; 0040bf4a
    TEST EAX,EAX                        ; 0040bf4c
    JL 0x0040bf6d                       ; 0040bf4e
        ;   XREF to: 0040bf6d (CONDITIONAL_JUMP)  ; LAB_0040bf6d
    CMP ESI,0xa                         ; 0040bf50
    JNZ 0x0040bf3b                      ; 0040bf53
        ;   XREF to: 0040bf3b (CONDITIONAL_JUMP)  ; LAB_0040bf3b
    POP EBP                             ; 0040bf55
    POP EDI                             ; 0040bf56
    POP ESI                             ; 0040bf57
    POP EBX                             ; 0040bf58
    RET                                 ; 0040bf59
    PUSH EBX                            ; 0040bf5a
        ;   Label: LAB_0040bf5a
    PUSH 0x5d2c98                       ; 0040bf5b | = "Rule list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bf60
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf65
    JMP 0x0040beae                      ; 0040bf68
        ;   XREF to: 0040beae (UNCONDITIONAL_JUMP)  ; LAB_0040beae
    PUSH EBX                            ; 0040bf6d
        ;   Label: LAB_0040bf6d
    PUSH 0x5d2ce2                       ; 0040bf6e | = "Rule list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bf73
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf78
    CMP ESI,0xa                         ; 0040bf7b
    JNZ 0x0040bf3b                      ; 0040bf7e
        ;   XREF to: 0040bf3b (CONDITIONAL_JUMP)  ; LAB_0040bf3b
    POP EBP                             ; 0040bf80
    POP EDI                             ; 0040bf81
    POP ESI                             ; 0040bf82
    POP EBX                             ; 0040bf83
    RET                                 ; 0040bf84
    PUSH EBX                            ; 0040bf85
        ;   Label: LAB_0040bf85
    PUSH 0x6106c0                       ; 0040bf86 | DAT_006106c0
    PUSH 0x5d2cfa                       ; 0040bf8b | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007c3034]      ; 0040bf90 | DAT_007c3034
    PUSH ECX                            ; 0040bf96
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bf97
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040bf9c
    PUSH 0x1                            ; 0040bf9f
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040bfa1
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040bfa6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040bfa9
    MOV EBX,dword ptr [EAX]             ; 0040bfad
    PUSH EBX                            ; 0040bfaf
    PUSH 0x6106c0                       ; 0040bfb0 | DAT_006106c0
    PUSH 0x5d2d05                       ; 0040bfb5 | = "%s%d // ruleCount\n"
    MOV ESI,dword ptr [0x007c3034]      ; 0040bfba | DAT_007c3034
    PUSH ESI                            ; 0040bfc0
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bfc1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040bfc6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040bfc9
    MOV EBP,dword ptr [EAX]             ; 0040bfcd
    XOR EDI,EDI                         ; 0040bfcf
    TEST EBP,EBP                        ; 0040bfd1
    JLE 0x0040c010                      ; 0040bfd3
        ;   XREF to: 0040c010 (CONDITIONAL_JUMP)  ; LAB_0040c010
    LEA EBX,[EAX + 0x1f8]               ; 0040bfd5
    LEA ESI,[EAX + 0x4]                 ; 0040bfdb
    PUSH EBX                            ; 0040bfde
        ;   Label: LAB_0040bfde
    PUSH ESI                            ; 0040bfdf
    PUSH 0x6106c0                       ; 0040bfe0 | DAT_006106c0
    PUSH 0x5d2d18                       ; 0040bfe5 | = "%s\"%s\" => \"%s\"\n"
    MOV EAX,[0x007c3034]                ; 0040bfea | DAT_007c3034
    PUSH EAX                            ; 0040bfef
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bff0
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 0040bff5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040bff8
    INC EDI                             ; 0040bffc
    ADD EBX,0x64                        ; 0040bffd
    MOV EDX,dword ptr [EAX]             ; 0040c000
    ADD ESI,0x64                        ; 0040c002
    CMP EDI,EDX                         ; 0040c005
    JL 0x0040bfde                       ; 0040c007
        ;   XREF to: 0040bfde (CONDITIONAL_JUMP)  ; LAB_0040bfde
    LEA EAX,[EAX]                       ; 0040c009
    NOP                                 ; 0040c00f
    PUSH -0x1                           ; 0040c010
        ;   Label: LAB_0040c010
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040c012
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040c017
    PUSH 0x6106c0                       ; 0040c01a | DAT_006106c0
    PUSH 0x5d2d28                       ; 0040c01f | DAT_005d2d28
    MOV ECX,dword ptr [0x007c3034]      ; 0040c024 | DAT_007c3034
    PUSH ECX                            ; 0040c02a
    CALL crt_unknown.c_FUN_005c03c0     ; 0040c02b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040c030
    POP EBP                             ; 0040c033
    POP EDI                             ; 0040c034
    POP ESI                             ; 0040c035
    POP EBX                             ; 0040c036
    RET                                 ; 0040c037

