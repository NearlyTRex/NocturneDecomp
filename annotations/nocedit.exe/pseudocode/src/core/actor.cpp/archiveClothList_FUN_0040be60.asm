; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveClothList_FUN_0040be60(CClothList *cloth_list,char *property_name)
;
; Parameters:
; CClothList *     Stack[0x4]:4   cloth_list
; char *           Stack[0x8]:4   property_name
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_archive_FUN_004283a0 at 004284aa
;   core_hostage.cpp_CHostage_archive_FUN_004f6170 at 004f6222
;   core_mobster.cpp_CMobster_archive_FUN_00527230 at 005272a0
;   core_zombie.cpp_CZombie_archive_FUN_005fbfd0 at 005fc0d1
;
; Referenced Globals:
;   TerminatedCString s_Cloth_list_opening_brace_00614080
;   TerminatedCString s_d_00614099
;   TerminatedCString s_cloth_count_0061409c
;   TerminatedCString s_clothCount_006140a8
;   TerminatedCString s_anon_006140b3
;   TerminatedCString s_cloth_filename_entry_006140bd
;   TerminatedCString s_Cloth_list_closing_brace_006140d2
;   TerminatedCString s_s_s_006140eb
;   TerminatedCString s_s_d_clothCount_006140f6
;   TerminatedCString s_s_s_0061410a
;   TerminatedCString s_s_00614112
;   char[104] g_PropertyNamePrefix
;   _FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_archiveDescription_FUN_0040b290
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040be60
        ;   Label: core_actor.cpp_archiveClothList_FUN_0040be60
    PUSH ESI                            ; 0040be61
    PUSH EDI                            ; 0040be62
    PUSH EBP                            ; 0040be63
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040be64
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040be68
    CMP dword ptr [0x00822038],0x1      ; 0040be6c | g_ActorReadingMode
    JNZ 0x0040bf56                      ; 0040be73
        ;   XREF to: 0040bf56 (CONDITIONAL_JUMP)  ; LAB_0040bf56
    MOV ESI,dword ptr [0x00822034]      ; 0040be79 | g_ActorDataFile
        ;   Label: LAB_0040be79
    PUSH ESI                            ; 0040be7f
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040be80
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040be85
    MOV ESI,EAX                         ; 0040be88
    TEST EAX,EAX                        ; 0040be8a
    JL 0x0040bf2b                       ; 0040be8c
        ;   XREF to: 0040bf2b (CONDITIONAL_JUMP)  ; LAB_0040bf2b
    CMP ESI,0xa                         ; 0040be92
        ;   Label: LAB_0040be92
    JNZ 0x0040be79                      ; 0040be95
        ;   XREF to: 0040be79 (CONDITIONAL_JUMP)  ; LAB_0040be79
    PUSH EBP                            ; 0040be97
    PUSH 0x614099                       ; 0040be98 | = "%d"
    MOV EDI,dword ptr [0x00822034]      ; 0040be9d | g_ActorDataFile
    PUSH EDI                            ; 0040bea3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bea4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bea9
    CMP EAX,0x1                         ; 0040beac
    JZ 0x0040bebf                       ; 0040beaf
        ;   XREF to: 0040bebf (CONDITIONAL_JUMP)  ; LAB_0040bebf
    PUSH EBX                            ; 0040beb1
    PUSH 0x61409c                       ; 0040beb2 | = "cloth count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040beb7
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bebc
    PUSH EBX                            ; 0040bebf
        ;   Label: LAB_0040bebf
    PUSH 0x6140a8                       ; 0040bec0 | = "clothCount"
    XOR EDI,EDI                         ; 0040bec5
    CALL core_actor.cpp_archiveDescription_FUN_0040b290 ; 0040bec7
        ;   XREF to: 0040b290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b290(char * property_description, char * property_name)
    MOV EAX,dword ptr [EBP]             ; 0040becc
    ADD ESP,0x8                         ; 0040becf
    TEST EAX,EAX                        ; 0040bed2
    JLE 0x0040bf0c                      ; 0040bed4
        ;   XREF to: 0040bf0c (CONDITIONAL_JUMP)  ; LAB_0040bf0c
    LEA ESI,[EBP + 0x4]                 ; 0040bed6
    PUSH ESI                            ; 0040bed9
        ;   Label: LAB_0040bed9
    PUSH 0x6140b3                       ; 0040beda | = " \"%[^\"]\"\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040bedf | g_ActorDataFile
    PUSH ECX                            ; 0040bee5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bee6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040beeb
    CMP EAX,0x1                         ; 0040beee
    JZ 0x0040bf01                       ; 0040bef1
        ;   XREF to: 0040bf01 (CONDITIONAL_JUMP)  ; LAB_0040bf01
    PUSH EBX                            ; 0040bef3
    PUSH 0x6140bd                       ; 0040bef4 | = "cloth filename entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bef9
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040befe
    INC EDI                             ; 0040bf01
        ;   Label: LAB_0040bf01
    MOV EDX,dword ptr [EBP]             ; 0040bf02
    ADD ESI,0x28                        ; 0040bf05
    CMP EDI,EDX                         ; 0040bf08
    JL 0x0040bed9                       ; 0040bf0a
        ;   XREF to: 0040bed9 (CONDITIONAL_JUMP)  ; LAB_0040bed9
    MOV ESI,dword ptr [0x00822034]      ; 0040bf0c | g_ActorDataFile
        ;   Label: LAB_0040bf0c
    PUSH ESI                            ; 0040bf12
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040bf13
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040bf18
    MOV ESI,EAX                         ; 0040bf1b
    TEST EAX,EAX                        ; 0040bf1d
    JL 0x0040bf3e                       ; 0040bf1f
        ;   XREF to: 0040bf3e (CONDITIONAL_JUMP)  ; LAB_0040bf3e
    CMP ESI,0xa                         ; 0040bf21
    JNZ 0x0040bf0c                      ; 0040bf24
        ;   XREF to: 0040bf0c (CONDITIONAL_JUMP)  ; LAB_0040bf0c
    POP EBP                             ; 0040bf26
    POP EDI                             ; 0040bf27
    POP ESI                             ; 0040bf28
    POP EBX                             ; 0040bf29
    RET                                 ; 0040bf2a
    PUSH EBX                            ; 0040bf2b
        ;   Label: LAB_0040bf2b
    PUSH 0x614080                       ; 0040bf2c | = "Cloth list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bf31
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf36
    JMP 0x0040be92                      ; 0040bf39
        ;   XREF to: 0040be92 (UNCONDITIONAL_JUMP)  ; LAB_0040be92
    PUSH EBX                            ; 0040bf3e
        ;   Label: LAB_0040bf3e
    PUSH 0x6140d2                       ; 0040bf3f | = "Cloth list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bf44
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf49
    CMP ESI,0xa                         ; 0040bf4c
    JNZ 0x0040bf0c                      ; 0040bf4f
        ;   XREF to: 0040bf0c (CONDITIONAL_JUMP)  ; LAB_0040bf0c
    POP EBP                             ; 0040bf51
    POP EDI                             ; 0040bf52
    POP ESI                             ; 0040bf53
    POP EBX                             ; 0040bf54
    RET                                 ; 0040bf55
    PUSH EBX                            ; 0040bf56
        ;   Label: LAB_0040bf56
    PUSH 0x66e178                       ; 0040bf57 | g_PropertyNamePrefix
    PUSH 0x6140eb                       ; 0040bf5c | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040bf61 | g_ActorDataFile
    PUSH ECX                            ; 0040bf67
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bf68
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040bf6d
    PUSH 0x1                            ; 0040bf70
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040bf72
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040bf77
    MOV EBX,dword ptr [EBP]             ; 0040bf7a
    PUSH EBX                            ; 0040bf7d
    PUSH 0x66e178                       ; 0040bf7e | g_PropertyNamePrefix
    PUSH 0x6140f6                       ; 0040bf83 | = "%s%d // clothCount\n"
    MOV ESI,dword ptr [0x00822034]      ; 0040bf88 | g_ActorDataFile
    PUSH ESI                            ; 0040bf8e
    XOR EBX,EBX                         ; 0040bf8f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bf91
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDI,dword ptr [EBP]             ; 0040bf96
    ADD ESP,0x10                        ; 0040bf99
    TEST EDI,EDI                        ; 0040bf9c
    JLE 0x0040bfd0                      ; 0040bf9e
        ;   XREF to: 0040bfd0 (CONDITIONAL_JUMP)  ; LAB_0040bfd0
    LEA ESI,[EBP + 0x4]                 ; 0040bfa0
    PUSH ESI                            ; 0040bfa3
        ;   Label: LAB_0040bfa3
    PUSH 0x66e178                       ; 0040bfa4 | g_PropertyNamePrefix
    PUSH 0x61410a                       ; 0040bfa9 | = "%s\"%s\"\n"
    MOV EAX,[0x00822034]                ; 0040bfae | g_ActorDataFile
    PUSH EAX                            ; 0040bfb3
    INC EBX                             ; 0040bfb4
    ADD ESI,0x28                        ; 0040bfb5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bfb8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBP]             ; 0040bfbd
    ADD ESP,0x10                        ; 0040bfc0
    CMP EBX,EDX                         ; 0040bfc3
    JL 0x0040bfa3                       ; 0040bfc5
        ;   XREF to: 0040bfa3 (CONDITIONAL_JUMP)  ; LAB_0040bfa3
    LEA EAX,[EAX]                       ; 0040bfc7
    LEA EDX,[EDX]                       ; 0040bfcd
    PUSH -0x1                           ; 0040bfd0
        ;   Label: LAB_0040bfd0
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040bfd2
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040bfd7
    PUSH 0x66e178                       ; 0040bfda | g_PropertyNamePrefix
    PUSH 0x614112                       ; 0040bfdf | = "%s}\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040bfe4 | g_ActorDataFile
    PUSH ECX                            ; 0040bfea
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bfeb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bff0
    POP EBP                             ; 0040bff3
    POP EDI                             ; 0040bff4
    POP ESI                             ; 0040bff5
    POP EBX                             ; 0040bff6
    RET                                 ; 0040bff7

