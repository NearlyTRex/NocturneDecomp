; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance *param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419c50 at 00419d41
;   core_conveyor.cpp_CConstruct_archive_FUN_00437b80 at 00437cdd
;   core_ghoul.cpp_CGhoul_archive_FUN_004c39b0 at 004c3a6f
;   core_hero.cpp_FUN_004ce590 at 004ce5f8
;   core_hostage.cpp_CHostage_archive_FUN_004d2df0 at 004d2e56
;   core_tentacle.cpp_CTentacle_archive_FUN_00572f90 at 00572fd8
;   core_zombie.cpp_CZombie_archive_FUN_00599160 at 005991e4
;
; Referenced Globals:
;   TerminatedCString s_part_status_opening_brac_005caba1
;   undefined4 DAT_005cabbb
;   undefined4 DAT_005cabbe
;   TerminatedCString s_description_005cabc1
;   TerminatedCString s_part_status_entry_005cabcd
;   undefined4 DAT_005cabdf
;   undefined4 DAT_005cabe1
;   TerminatedCString s_description_005cabe4
;   TerminatedCString s_part_texture_entry_005cabf0
;   undefined4 DAT_005cac03
;   TerminatedCString s_part_status_info_closing_005cac05
;   TerminatedCString s_s_s_005cac24
;   TerminatedCString s_s_d_005cac2f
;   undefined4 DAT_005cac35
;   undefined4 DAT_005cac38
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040b050
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
;   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460
;   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00547440
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bc50
        ;   Label: core_actor.cpp_archivePartStatus_FUN_0040bc50
    PUSH ESI                            ; 0040bc51
    PUSH EDI                            ; 0040bc52
    PUSH EBP                            ; 0040bc53
    SUB ESP,0x4                         ; 0040bc54
    MOV EBP,dword ptr [ESP + 0x18]      ; 0040bc57
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0040bc5b
    CMP dword ptr [0x007bc038],0x1      ; 0040bc5f | DAT_007bc038
    JNZ 0x0040bdb7                      ; 0040bc66
        ;   XREF to: 0040bdb7 (CONDITIONAL_JUMP)  ; LAB_0040bdb7
    MOV EBX,dword ptr [0x007bc034]      ; 0040bc6c | DAT_007bc034
        ;   Label: LAB_0040bc6c
    PUSH EBX                            ; 0040bc72
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040bc73
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040bc78
    MOV EBX,EAX                         ; 0040bc7b
    TEST EAX,EAX                        ; 0040bc7d
    JL 0x0040bd89                       ; 0040bc7f
        ;   XREF to: 0040bd89 (CONDITIONAL_JUMP)  ; LAB_0040bd89
    CMP EBX,0xa                         ; 0040bc85
        ;   Label: LAB_0040bc85
    JNZ 0x0040bc6c                      ; 0040bc88
        ;   XREF to: 0040bc6c (CONDITIONAL_JUMP)  ; LAB_0040bc6c
    MOV EAX,ESP                         ; 0040bc8a
    PUSH EAX                            ; 0040bc8c
    PUSH 0x5cabbb                       ; 0040bc8d | DAT_005cabbb
    MOV ESI,dword ptr [0x007bc034]      ; 0040bc92 | DAT_007bc034
    PUSH ESI                            ; 0040bc98
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040bc99
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0040bc9e
    PUSH EBP                            ; 0040bca1
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00547440 ; 0040bca2
        ;   XREF to: 00547440 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00547440(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040bca7
    MOV EAX,dword ptr [ESP]             ; 0040bcaa
    XOR EBX,EBX                         ; 0040bcad
    TEST EAX,EAX                        ; 0040bcaf
    JLE 0x0040bcf0                      ; 0040bcb1
        ;   XREF to: 0040bcf0 (CONDITIONAL_JUMP)  ; LAB_0040bcf0
    LEA ESI,[EBP + 0x2140]              ; 0040bcb3
    PUSH ESI                            ; 0040bcb9
        ;   Label: LAB_0040bcb9
    PUSH 0x5cabbe                       ; 0040bcba | DAT_005cabbe
    MOV EDX,dword ptr [0x007bc034]      ; 0040bcbf | DAT_007bc034
    PUSH EDX                            ; 0040bcc5
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040bcc6
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0040bccb
    CMP EAX,0x1                         ; 0040bcce
    JZ 0x0040bce5                       ; 0040bcd1
        ;   XREF to: 0040bce5 (CONDITIONAL_JUMP)  ; LAB_0040bce5
    PUSH 0x5cabc1                       ; 0040bcd3 | = "description"
    PUSH 0x5cabcd                       ; 0040bcd8 | = "part status entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bcdd
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bce2
    MOV ECX,dword ptr [ESP]             ; 0040bce5
        ;   Label: LAB_0040bce5
    INC EBX                             ; 0040bce8
    ADD ESI,0x4                         ; 0040bce9
    CMP EBX,ECX                         ; 0040bcec
    JL 0x0040bcb9                       ; 0040bcee
        ;   XREF to: 0040bcb9 (CONDITIONAL_JUMP)  ; LAB_0040bcb9
    PUSH 0x5cabdf                       ; 0040bcf0 | DAT_005cabdf
        ;   Label: LAB_0040bcf0
    MOV EBX,dword ptr [0x007bc034]      ; 0040bcf5 | DAT_007bc034
    PUSH EBX                            ; 0040bcfb
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040bcfc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x8                         ; 0040bd01
    PUSH EBP                            ; 0040bd04
    CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460 ; 0040bd05
        ;   XREF to: 00547460 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040bd0a
    MOV ESI,dword ptr [ESP]             ; 0040bd0d
    XOR EBX,EBX                         ; 0040bd10
    TEST ESI,ESI                        ; 0040bd12
    JLE 0x0040bd53                      ; 0040bd14
        ;   XREF to: 0040bd53 (CONDITIONAL_JUMP)  ; LAB_0040bd53
    LEA ESI,[EBP + 0x21b8]              ; 0040bd16
    PUSH ESI                            ; 0040bd1c
        ;   Label: LAB_0040bd1c
    PUSH 0x5cabe1                       ; 0040bd1d | DAT_005cabe1
    MOV EBP,dword ptr [0x007bc034]      ; 0040bd22 | DAT_007bc034
    PUSH EBP                            ; 0040bd28
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040bd29
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0040bd2e
    CMP EAX,0x1                         ; 0040bd31
    JZ 0x0040bd48                       ; 0040bd34
        ;   XREF to: 0040bd48 (CONDITIONAL_JUMP)  ; LAB_0040bd48
    PUSH 0x5cabe4                       ; 0040bd36 | = "description"
    PUSH 0x5cabf0                       ; 0040bd3b | = "part texture entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bd40
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bd45
    MOV EAX,dword ptr [ESP]             ; 0040bd48
        ;   Label: LAB_0040bd48
    INC EBX                             ; 0040bd4b
    ADD ESI,0x4                         ; 0040bd4c
    CMP EBX,EAX                         ; 0040bd4f
    JL 0x0040bd1c                       ; 0040bd51
        ;   XREF to: 0040bd1c (CONDITIONAL_JUMP)  ; LAB_0040bd1c
    PUSH 0x5cac03                       ; 0040bd53 | DAT_005cac03
        ;   Label: LAB_0040bd53
    MOV EDX,dword ptr [0x007bc034]      ; 0040bd58 | DAT_007bc034
    PUSH EDX                            ; 0040bd5e
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040bd5f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x8                         ; 0040bd64
    MOV ECX,dword ptr [0x007bc034]      ; 0040bd67 | DAT_007bc034
        ;   Label: LAB_0040bd67
    PUSH ECX                            ; 0040bd6d
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040bd6e
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040bd73
    MOV EBX,EAX                         ; 0040bd76
    TEST EAX,EAX                        ; 0040bd78
    JL 0x0040bd9c                       ; 0040bd7a
        ;   XREF to: 0040bd9c (CONDITIONAL_JUMP)  ; LAB_0040bd9c
    CMP EBX,0xa                         ; 0040bd7c
    JNZ 0x0040bd67                      ; 0040bd7f
        ;   XREF to: 0040bd67 (CONDITIONAL_JUMP)  ; LAB_0040bd67
    ADD ESP,0x4                         ; 0040bd81
    POP EBP                             ; 0040bd84
    POP EDI                             ; 0040bd85
    POP ESI                             ; 0040bd86
    POP EBX                             ; 0040bd87
    RET                                 ; 0040bd88
    PUSH EDI                            ; 0040bd89
        ;   Label: LAB_0040bd89
    PUSH 0x5caba1                       ; 0040bd8a | = "part status opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bd8f
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bd94
    JMP 0x0040bc85                      ; 0040bd97
        ;   XREF to: 0040bc85 (UNCONDITIONAL_JUMP)  ; LAB_0040bc85
    PUSH EDI                            ; 0040bd9c
        ;   Label: LAB_0040bd9c
    PUSH 0x5cac05                       ; 0040bd9d | = "part status info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bda2
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bda7
    CMP EBX,0xa                         ; 0040bdaa
    JNZ 0x0040bd67                      ; 0040bdad
        ;   XREF to: 0040bd67 (CONDITIONAL_JUMP)  ; LAB_0040bd67
    ADD ESP,0x4                         ; 0040bdaf
    POP EBP                             ; 0040bdb2
    POP EDI                             ; 0040bdb3
    POP ESI                             ; 0040bdb4
    POP EBX                             ; 0040bdb5
    RET                                 ; 0040bdb6
    PUSH EDI                            ; 0040bdb7
        ;   Label: LAB_0040bdb7
    PUSH 0x609590                       ; 0040bdb8 | DAT_00609590
    PUSH 0x5cac24                       ; 0040bdbd | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007bc034]      ; 0040bdc2 | DAT_007bc034
    PUSH ECX                            ; 0040bdc8
    CALL crt_unknown.c_FUN_005b8010     ; 0040bdc9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040bdce
    PUSH 0x1                            ; 0040bdd1
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040bdd3
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040bdd8
    MOV EDI,0x1e                        ; 0040bddb
    PUSH EDI                            ; 0040bde0
    PUSH 0x609590                       ; 0040bde1 | DAT_00609590
    PUSH 0x5cac2f                       ; 0040bde6 | = "%s%d\n"
    MOV EBX,dword ptr [0x007bc034]      ; 0040bdeb | DAT_007bc034
    PUSH EBX                            ; 0040bdf1
    CALL crt_unknown.c_FUN_005b8010     ; 0040bdf2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040bdf7
    PUSH 0x609590                       ; 0040bdfa | DAT_00609590
    PUSH 0x5cac35                       ; 0040bdff | DAT_005cac35
    MOV ESI,dword ptr [0x007bc034]      ; 0040be04 | DAT_007bc034
    PUSH ESI                            ; 0040be0a
    MOV EBX,EBP                         ; 0040be0b
    CALL crt_unknown.c_FUN_005b8010     ; 0040be0d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040be12
    LEA ESI,[EBP + 0x78]                ; 0040be15
    MOV EAX,dword ptr [EBX + 0x2140]    ; 0040be18
        ;   Label: LAB_0040be18
    PUSH EAX                            ; 0040be1e
    PUSH 0x5cac38                       ; 0040be1f | DAT_005cac38
    MOV EDX,dword ptr [0x007bc034]      ; 0040be24 | DAT_007bc034
    PUSH EDX                            ; 0040be2a
    ADD EBX,0x4                         ; 0040be2b
    CALL crt_unknown.c_FUN_005b8010     ; 0040be2e
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040be33
    CMP EBX,ESI                         ; 0040be36
    JNZ 0x0040be18                      ; 0040be38
        ;   XREF to: 0040be18 (CONDITIONAL_JUMP)  ; LAB_0040be18
    PUSH 0x5cac3c                       ; 0040be3a | DAT_005cac3c
    MOV ECX,dword ptr [0x007bc034]      ; 0040be3f | DAT_007bc034
    PUSH ECX                            ; 0040be45
    CALL crt_unknown.c_FUN_005b8010     ; 0040be46
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0040be4b
    PUSH 0x609590                       ; 0040be4e | DAT_00609590
    PUSH 0x5cac3e                       ; 0040be53 | DAT_005cac3e
    MOV EBX,dword ptr [0x007bc034]      ; 0040be58 | DAT_007bc034
    PUSH EBX                            ; 0040be5e
    XOR ESI,ESI                         ; 0040be5f
    CALL crt_unknown.c_FUN_005b8010     ; 0040be61
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040be66
    TEST EDI,EDI                        ; 0040be69
    JLE 0x0040bea0                      ; 0040be6b
        ;   XREF to: 0040bea0 (CONDITIONAL_JUMP)  ; LAB_0040bea0
    MOV EBX,EBP                         ; 0040be6d
    MOV EBP,dword ptr [EBX + 0x21b8]    ; 0040be6f
        ;   Label: LAB_0040be6f
    PUSH EBP                            ; 0040be75
    PUSH 0x5cac41                       ; 0040be76 | DAT_005cac41
    MOV EAX,[0x007bc034]                ; 0040be7b | DAT_007bc034
    PUSH EAX                            ; 0040be80
    ADD EBX,0x4                         ; 0040be81
    INC ESI                             ; 0040be84
    CALL crt_unknown.c_FUN_005b8010     ; 0040be85
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040be8a
    CMP ESI,EDI                         ; 0040be8d
    JL 0x0040be6f                       ; 0040be8f
        ;   XREF to: 0040be6f (CONDITIONAL_JUMP)  ; LAB_0040be6f
    LEA EAX,[EAX]                       ; 0040be91
    LEA EDX,[EDX]                       ; 0040be97
    LEA EAX,[EAX]                       ; 0040be9d
    PUSH 0x5cac45                       ; 0040bea0 | DAT_005cac45
        ;   Label: LAB_0040bea0
    MOV EDX,dword ptr [0x007bc034]      ; 0040bea5 | DAT_007bc034
    PUSH EDX                            ; 0040beab
    CALL crt_unknown.c_FUN_005b8010     ; 0040beac
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0040beb1
    PUSH -0x1                           ; 0040beb4
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040beb6
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040bebb
    PUSH 0x609590                       ; 0040bebe | DAT_00609590
    PUSH 0x5cac47                       ; 0040bec3 | DAT_005cac47
    MOV ECX,dword ptr [0x007bc034]      ; 0040bec8 | DAT_007bc034
    PUSH ECX                            ; 0040bece
    CALL crt_unknown.c_FUN_005b8010     ; 0040becf
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040bed4
    ADD ESP,0x4                         ; 0040bed7
    POP EBP                             ; 0040beda
    POP EDI                             ; 0040bedb
    POP ESI                             ; 0040bedc
    POP EBX                             ; 0040bedd
    RET                                 ; 0040bede

