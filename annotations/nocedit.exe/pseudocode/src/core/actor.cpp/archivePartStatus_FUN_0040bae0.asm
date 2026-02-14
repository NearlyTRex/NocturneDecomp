; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bae0(CDeformableModelInstance *model_ptr,char *property_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270 at 0041d361
;   core_ghoul.cpp_CGhoul_archive_FUN_004e81c0 at 004e827f
;   core_hero.cpp_CHero_archive_FUN_004f2610 at 004f2670
;   core_hostage.cpp_CHostage_archive_FUN_004f6170 at 004f61d6
;   core_tentacle.cpp_CTentacle_archive_FUN_005db880 at 005db8c8
;   core_zombie.cpp_CZombie_archive_FUN_005fbfd0 at 005fc054
;
; Referenced Globals:
;   TerminatedCString s_part_status_opening_brac_00613f83
;   TerminatedCString s_d_00613f9d
;   TerminatedCString s_d_00613fa0
;   TerminatedCString s_description_00613fa3
;   TerminatedCString s_part_status_entry_00613faf
;   TerminatedCString s_anon_00613fc1
;   TerminatedCString s_d_00613fc3
;   TerminatedCString s_description_00613fc6
;   TerminatedCString s_part_texture_entry_00613fd2
;   TerminatedCString s_anon_00613fe5
;   TerminatedCString s_part_status_info_closing_00613fe7
;   TerminatedCString s_s_s_00614006
;   TerminatedCString s_s_d_00614011
;   TerminatedCString s_s_00614017
;   TerminatedCString s_d_0061401a
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
;   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bae0
        ;   Label: core_actor.cpp_archivePartStatus_FUN_0040bae0
    PUSH ESI                            ; 0040bae1
    PUSH EDI                            ; 0040bae2
    PUSH EBP                            ; 0040bae3
    SUB ESP,0x4                         ; 0040bae4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0040bae7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0040baeb
    CMP dword ptr [0x00822038],0x1      ; 0040baef | g_ActorReadingMode
    JNZ 0x0040bc47                      ; 0040baf6
        ;   XREF to: 0040bc47 (CONDITIONAL_JUMP)  ; LAB_0040bc47
    MOV EBX,dword ptr [0x00822034]      ; 0040bafc | g_ActorDataFile
        ;   Label: LAB_0040bafc
    PUSH EBX                            ; 0040bb02
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040bb03
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040bb08
    MOV EBX,EAX                         ; 0040bb0b
    TEST EAX,EAX                        ; 0040bb0d
    JL 0x0040bc19                       ; 0040bb0f
        ;   XREF to: 0040bc19 (CONDITIONAL_JUMP)  ; LAB_0040bc19
    CMP EBX,0xa                         ; 0040bb15
        ;   Label: LAB_0040bb15
    JNZ 0x0040bafc                      ; 0040bb18
        ;   XREF to: 0040bafc (CONDITIONAL_JUMP)  ; LAB_0040bafc
    MOV EAX,ESP                         ; 0040bb1a
    PUSH EAX                            ; 0040bb1c
    PUSH 0x613f9d                       ; 0040bb1d | = "%d"
    MOV ESI,dword ptr [0x00822034]      ; 0040bb22 | g_ActorDataFile
    PUSH ESI                            ; 0040bb28
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bb29
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bb2e
    PUSH EBP                            ; 0040bb31
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410 ; 0040bb32
        ;   XREF to: 005a0410 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040bb37
    MOV EAX,dword ptr [ESP]             ; 0040bb3a
    XOR EBX,EBX                         ; 0040bb3d
    TEST EAX,EAX                        ; 0040bb3f
    JLE 0x0040bb80                      ; 0040bb41
        ;   XREF to: 0040bb80 (CONDITIONAL_JUMP)  ; LAB_0040bb80
    LEA ESI,[EBP + 0x2140]              ; 0040bb43
    PUSH ESI                            ; 0040bb49
        ;   Label: LAB_0040bb49
    PUSH 0x613fa0                       ; 0040bb4a | = "%d"
    MOV EDX,dword ptr [0x00822034]      ; 0040bb4f | g_ActorDataFile
    PUSH EDX                            ; 0040bb55
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bb56
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bb5b
    CMP EAX,0x1                         ; 0040bb5e
    JZ 0x0040bb75                       ; 0040bb61
        ;   XREF to: 0040bb75 (CONDITIONAL_JUMP)  ; LAB_0040bb75
    PUSH 0x613fa3                       ; 0040bb63 | = "description"
    PUSH 0x613faf                       ; 0040bb68 | = "part status entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bb6d
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bb72
    MOV ECX,dword ptr [ESP]             ; 0040bb75
        ;   Label: LAB_0040bb75
    INC EBX                             ; 0040bb78
    ADD ESI,0x4                         ; 0040bb79
    CMP EBX,ECX                         ; 0040bb7c
    JL 0x0040bb49                       ; 0040bb7e
        ;   XREF to: 0040bb49 (CONDITIONAL_JUMP)  ; LAB_0040bb49
    PUSH 0x613fc1                       ; 0040bb80 | = " "
        ;   Label: LAB_0040bb80
    MOV EBX,dword ptr [0x00822034]      ; 0040bb85 | g_ActorDataFile
    PUSH EBX                            ; 0040bb8b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bb8c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0040bb91
    PUSH EBP                            ; 0040bb94
    CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430 ; 0040bb95
        ;   XREF to: 005a0430 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040bb9a
    MOV ESI,dword ptr [ESP]             ; 0040bb9d
    XOR EBX,EBX                         ; 0040bba0
    TEST ESI,ESI                        ; 0040bba2
    JLE 0x0040bbe3                      ; 0040bba4
        ;   XREF to: 0040bbe3 (CONDITIONAL_JUMP)  ; LAB_0040bbe3
    LEA ESI,[EBP + 0x21b8]              ; 0040bba6
    PUSH ESI                            ; 0040bbac
        ;   Label: LAB_0040bbac
    PUSH 0x613fc3                       ; 0040bbad | = "%d"
    MOV EBP,dword ptr [0x00822034]      ; 0040bbb2 | g_ActorDataFile
    PUSH EBP                            ; 0040bbb8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bbb9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bbbe
    CMP EAX,0x1                         ; 0040bbc1
    JZ 0x0040bbd8                       ; 0040bbc4
        ;   XREF to: 0040bbd8 (CONDITIONAL_JUMP)  ; LAB_0040bbd8
    PUSH 0x613fc6                       ; 0040bbc6 | = "description"
    PUSH 0x613fd2                       ; 0040bbcb | = "part texture entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bbd0
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bbd5
    MOV EAX,dword ptr [ESP]             ; 0040bbd8
        ;   Label: LAB_0040bbd8
    INC EBX                             ; 0040bbdb
    ADD ESI,0x4                         ; 0040bbdc
    CMP EBX,EAX                         ; 0040bbdf
    JL 0x0040bbac                       ; 0040bbe1
        ;   XREF to: 0040bbac (CONDITIONAL_JUMP)  ; LAB_0040bbac
    PUSH 0x613fe5                       ; 0040bbe3 | = " "
        ;   Label: LAB_0040bbe3
    MOV EDX,dword ptr [0x00822034]      ; 0040bbe8 | g_ActorDataFile
    PUSH EDX                            ; 0040bbee
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040bbef
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0040bbf4
    MOV ECX,dword ptr [0x00822034]      ; 0040bbf7 | g_ActorDataFile
        ;   Label: LAB_0040bbf7
    PUSH ECX                            ; 0040bbfd
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040bbfe
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040bc03
    MOV EBX,EAX                         ; 0040bc06
    TEST EAX,EAX                        ; 0040bc08
    JL 0x0040bc2c                       ; 0040bc0a
        ;   XREF to: 0040bc2c (CONDITIONAL_JUMP)  ; LAB_0040bc2c
    CMP EBX,0xa                         ; 0040bc0c
    JNZ 0x0040bbf7                      ; 0040bc0f
        ;   XREF to: 0040bbf7 (CONDITIONAL_JUMP)  ; LAB_0040bbf7
    ADD ESP,0x4                         ; 0040bc11
    POP EBP                             ; 0040bc14
    POP EDI                             ; 0040bc15
    POP ESI                             ; 0040bc16
    POP EBX                             ; 0040bc17
    RET                                 ; 0040bc18
    PUSH EDI                            ; 0040bc19
        ;   Label: LAB_0040bc19
    PUSH 0x613f83                       ; 0040bc1a | = "part status opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bc1f
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bc24
    JMP 0x0040bb15                      ; 0040bc27
        ;   XREF to: 0040bb15 (UNCONDITIONAL_JUMP)  ; LAB_0040bb15
    PUSH EDI                            ; 0040bc2c
        ;   Label: LAB_0040bc2c
    PUSH 0x613fe7                       ; 0040bc2d | = "part status info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040bc32
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bc37
    CMP EBX,0xa                         ; 0040bc3a
    JNZ 0x0040bbf7                      ; 0040bc3d
        ;   XREF to: 0040bbf7 (CONDITIONAL_JUMP)  ; LAB_0040bbf7
    ADD ESP,0x4                         ; 0040bc3f
    POP EBP                             ; 0040bc42
    POP EDI                             ; 0040bc43
    POP ESI                             ; 0040bc44
    POP EBX                             ; 0040bc45
    RET                                 ; 0040bc46
    PUSH EDI                            ; 0040bc47
        ;   Label: LAB_0040bc47
    PUSH 0x66e178                       ; 0040bc48 | g_PropertyNamePrefix
    PUSH 0x614006                       ; 0040bc4d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040bc52 | g_ActorDataFile
    PUSH ECX                            ; 0040bc58
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bc59
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040bc5e
    PUSH 0x1                            ; 0040bc61
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040bc63
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040bc68
    MOV EDI,0x1e                        ; 0040bc6b
    PUSH EDI                            ; 0040bc70
    PUSH 0x66e178                       ; 0040bc71 | g_PropertyNamePrefix
    PUSH 0x614011                       ; 0040bc76 | = "%s%d\n"
    MOV EBX,dword ptr [0x00822034]      ; 0040bc7b | g_ActorDataFile
    PUSH EBX                            ; 0040bc81
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bc82
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040bc87
    PUSH 0x66e178                       ; 0040bc8a | g_PropertyNamePrefix
    PUSH 0x614017                       ; 0040bc8f | = "%s"
    MOV ESI,dword ptr [0x00822034]      ; 0040bc94 | g_ActorDataFile
    PUSH ESI                            ; 0040bc9a
    MOV EBX,EBP                         ; 0040bc9b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bc9d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bca2
    LEA ESI,[EBP + 0x78]                ; 0040bca5
    MOV EAX,dword ptr [EBX + 0x2140]    ; 0040bca8
        ;   Label: LAB_0040bca8
    PUSH EAX                            ; 0040bcae
    PUSH 0x61401a                       ; 0040bcaf | = "%d "
    MOV EDX,dword ptr [0x00822034]      ; 0040bcb4 | g_ActorDataFile
    PUSH EDX                            ; 0040bcba
    ADD EBX,0x4                         ; 0040bcbb
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bcbe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bcc3
    CMP EBX,ESI                         ; 0040bcc6
    JNZ 0x0040bca8                      ; 0040bcc8
        ;   XREF to: 0040bca8 (CONDITIONAL_JUMP)  ; LAB_0040bca8
    PUSH 0x61401e                       ; 0040bcca | = "\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040bccf | g_ActorDataFile
    PUSH ECX                            ; 0040bcd5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bcd6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0040bcdb
    PUSH 0x66e178                       ; 0040bcde | g_PropertyNamePrefix
    PUSH 0x614020                       ; 0040bce3 | = "%s"
    MOV EBX,dword ptr [0x00822034]      ; 0040bce8 | g_ActorDataFile
    PUSH EBX                            ; 0040bcee
    XOR ESI,ESI                         ; 0040bcef
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bcf1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bcf6
    TEST EDI,EDI                        ; 0040bcf9
    JLE 0x0040bd30                      ; 0040bcfb
        ;   XREF to: 0040bd30 (CONDITIONAL_JUMP)  ; LAB_0040bd30
    MOV EBX,EBP                         ; 0040bcfd
    MOV EBP,dword ptr [EBX + 0x21b8]    ; 0040bcff
        ;   Label: LAB_0040bcff
    PUSH EBP                            ; 0040bd05
    PUSH 0x614023                       ; 0040bd06 | = "%d "
    MOV EAX,[0x00822034]                ; 0040bd0b | g_ActorDataFile
    PUSH EAX                            ; 0040bd10
    ADD EBX,0x4                         ; 0040bd11
    INC ESI                             ; 0040bd14
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bd15
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bd1a
    CMP ESI,EDI                         ; 0040bd1d
    JL 0x0040bcff                       ; 0040bd1f
        ;   XREF to: 0040bcff (CONDITIONAL_JUMP)  ; LAB_0040bcff
    LEA EAX,[EAX]                       ; 0040bd21
    LEA EDX,[EDX]                       ; 0040bd27
    LEA EAX,[EAX]                       ; 0040bd2d
    PUSH 0x614027                       ; 0040bd30 | = "\n"
        ;   Label: LAB_0040bd30
    MOV EDX,dword ptr [0x00822034]      ; 0040bd35 | g_ActorDataFile
    PUSH EDX                            ; 0040bd3b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bd3c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0040bd41
    PUSH -0x1                           ; 0040bd44
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040bd46
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040bd4b
    PUSH 0x66e178                       ; 0040bd4e | g_PropertyNamePrefix
    PUSH 0x614029                       ; 0040bd53 | = "%s}\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040bd58 | g_ActorDataFile
    PUSH ECX                            ; 0040bd5e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bd5f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bd64
    ADD ESP,0x4                         ; 0040bd67
    POP EBP                             ; 0040bd6a
    POP EDI                             ; 0040bd6b
    POP ESI                             ; 0040bd6c
    POP EBX                             ; 0040bd6d
    RET                                 ; 0040bd6e

