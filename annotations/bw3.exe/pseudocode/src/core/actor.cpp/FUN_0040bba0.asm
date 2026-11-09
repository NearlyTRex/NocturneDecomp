; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_FUN_0040bba0(CDeformableModelInstance *model_ptr,char *property_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419070 at 00419161
;   core_carved.cpp_FUN_00428650 at 0042869b
;   core_constrct.cpp_FUN_00443ca0 at 00443dfd
;   core_ghoul.cpp_FUN_004c8cc0 at 004c8d7f
;   core_hero.cpp_FUN_004d27b0 at 004d2810
;   core_thehand.cpp_FUN_0056c8c0 at 0056c8f6
;   core_zombie.cpp_FUN_0058c060 at 0058c0e4
;   unkafter_demnfolk.cpp_FUN_004583c0 at 00458444
;
; Referenced Globals:
;   TerminatedCString s_part_status_opening_brac_005b5b50
;   undefined4 DAT_005b5b6a
;   undefined4 DAT_005b5b6d
;   TerminatedCString s_description_005b5b70
;   TerminatedCString s_part_status_entry_005b5b7c
;   undefined4 DAT_005b5b8e
;   undefined4 DAT_005b5b90
;   TerminatedCString s_description_005b5b93
;   TerminatedCString s_part_texture_entry_005b5b9f
;   undefined4 DAT_005b5bb2
;   TerminatedCString s_part_status_info_closing_005b5bb4
;   TerminatedCString s_s_s_005b5bd3
;   TerminatedCString s_s_d_005b5bde
;   undefined4 DAT_005b5be4
;   undefined4 DAT_005b5be7
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040afa0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   core_skeleton.cpp_FUN_0054e670
;   core_skeleton.cpp_FUN_0054e690
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bba0
        ;   Label: core_actor.cpp_FUN_0040bba0
    PUSH ESI                            ; 0040bba1
    PUSH EDI                            ; 0040bba2
    PUSH EBP                            ; 0040bba3
    SUB ESP,0x4                         ; 0040bba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0040bba7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0040bbab
    CMP dword ptr [0x007df9b8],0x1      ; 0040bbaf | DAT_007df9b8
    JNZ 0x0040bd07                      ; 0040bbb6
        ;   XREF to: 0040bd07 (CONDITIONAL_JUMP)  ; LAB_0040bd07
    MOV EBX,dword ptr [0x007df9b4]      ; 0040bbbc | DAT_007df9b4
        ;   Label: LAB_0040bbbc
    PUSH EBX                            ; 0040bbc2
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040bbc3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040bbc8
    MOV EBX,EAX                         ; 0040bbcb
    TEST EAX,EAX                        ; 0040bbcd
    JL 0x0040bcd9                       ; 0040bbcf
        ;   XREF to: 0040bcd9 (CONDITIONAL_JUMP)  ; LAB_0040bcd9
    CMP EBX,0xa                         ; 0040bbd5
        ;   Label: LAB_0040bbd5
    JNZ 0x0040bbbc                      ; 0040bbd8
        ;   XREF to: 0040bbbc (CONDITIONAL_JUMP)  ; LAB_0040bbbc
    MOV EAX,ESP                         ; 0040bbda
    PUSH EAX                            ; 0040bbdc
    PUSH 0x5b5b6a                       ; 0040bbdd | DAT_005b5b6a
    MOV ESI,dword ptr [0x007df9b4]      ; 0040bbe2 | DAT_007df9b4
    PUSH ESI                            ; 0040bbe8
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bbe9
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040bbee
    PUSH EBP                            ; 0040bbf1
    CALL core_skeleton.cpp_FUN_0054e670 ; 0040bbf2
        ;   XREF to: 0054e670 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054e670()
    ADD ESP,0x4                         ; 0040bbf7
    MOV EAX,dword ptr [ESP]             ; 0040bbfa
    XOR EBX,EBX                         ; 0040bbfd
    TEST EAX,EAX                        ; 0040bbff
    JLE 0x0040bc40                      ; 0040bc01
        ;   XREF to: 0040bc40 (CONDITIONAL_JUMP)  ; LAB_0040bc40
    LEA ESI,[EBP + 0x2140]              ; 0040bc03
    PUSH ESI                            ; 0040bc09
        ;   Label: LAB_0040bc09
    PUSH 0x5b5b6d                       ; 0040bc0a | DAT_005b5b6d
    MOV EDX,dword ptr [0x007df9b4]      ; 0040bc0f | DAT_007df9b4
    PUSH EDX                            ; 0040bc15
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bc16
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040bc1b
    CMP EAX,0x1                         ; 0040bc1e
    JZ 0x0040bc35                       ; 0040bc21
        ;   XREF to: 0040bc35 (CONDITIONAL_JUMP)  ; LAB_0040bc35
    PUSH 0x5b5b70                       ; 0040bc23 | = "description"
    PUSH 0x5b5b7c                       ; 0040bc28 | = "part status entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bc2d
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bc32
    MOV ECX,dword ptr [ESP]             ; 0040bc35
        ;   Label: LAB_0040bc35
    INC EBX                             ; 0040bc38
    ADD ESI,0x4                         ; 0040bc39
    CMP EBX,ECX                         ; 0040bc3c
    JL 0x0040bc09                       ; 0040bc3e
        ;   XREF to: 0040bc09 (CONDITIONAL_JUMP)  ; LAB_0040bc09
    PUSH 0x5b5b8e                       ; 0040bc40 | DAT_005b5b8e
        ;   Label: LAB_0040bc40
    MOV EBX,dword ptr [0x007df9b4]      ; 0040bc45 | DAT_007df9b4
    PUSH EBX                            ; 0040bc4b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bc4c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 0040bc51
    PUSH EBP                            ; 0040bc54
    CALL core_skeleton.cpp_FUN_0054e690 ; 0040bc55
        ;   XREF to: 0054e690 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e690(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040bc5a
    MOV ESI,dword ptr [ESP]             ; 0040bc5d
    XOR EBX,EBX                         ; 0040bc60
    TEST ESI,ESI                        ; 0040bc62
    JLE 0x0040bca3                      ; 0040bc64
        ;   XREF to: 0040bca3 (CONDITIONAL_JUMP)  ; LAB_0040bca3
    LEA ESI,[EBP + 0x2230]              ; 0040bc66
    PUSH ESI                            ; 0040bc6c
        ;   Label: LAB_0040bc6c
    PUSH 0x5b5b90                       ; 0040bc6d | DAT_005b5b90
    MOV EBP,dword ptr [0x007df9b4]      ; 0040bc72 | DAT_007df9b4
    PUSH EBP                            ; 0040bc78
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bc79
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040bc7e
    CMP EAX,0x1                         ; 0040bc81
    JZ 0x0040bc98                       ; 0040bc84
        ;   XREF to: 0040bc98 (CONDITIONAL_JUMP)  ; LAB_0040bc98
    PUSH 0x5b5b93                       ; 0040bc86 | = "description"
    PUSH 0x5b5b9f                       ; 0040bc8b | = "part texture entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bc90
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bc95
    MOV EAX,dword ptr [ESP]             ; 0040bc98
        ;   Label: LAB_0040bc98
    INC EBX                             ; 0040bc9b
    ADD ESI,0x4                         ; 0040bc9c
    CMP EBX,EAX                         ; 0040bc9f
    JL 0x0040bc6c                       ; 0040bca1
        ;   XREF to: 0040bc6c (CONDITIONAL_JUMP)  ; LAB_0040bc6c
    PUSH 0x5b5bb2                       ; 0040bca3 | DAT_005b5bb2
        ;   Label: LAB_0040bca3
    MOV EDX,dword ptr [0x007df9b4]      ; 0040bca8 | DAT_007df9b4
    PUSH EDX                            ; 0040bcae
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bcaf
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 0040bcb4
    MOV ECX,dword ptr [0x007df9b4]      ; 0040bcb7 | DAT_007df9b4
        ;   Label: LAB_0040bcb7
    PUSH ECX                            ; 0040bcbd
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040bcbe
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040bcc3
    MOV EBX,EAX                         ; 0040bcc6
    TEST EAX,EAX                        ; 0040bcc8
    JL 0x0040bcec                       ; 0040bcca
        ;   XREF to: 0040bcec (CONDITIONAL_JUMP)  ; LAB_0040bcec
    CMP EBX,0xa                         ; 0040bccc
    JNZ 0x0040bcb7                      ; 0040bccf
        ;   XREF to: 0040bcb7 (CONDITIONAL_JUMP)  ; LAB_0040bcb7
    ADD ESP,0x4                         ; 0040bcd1
    POP EBP                             ; 0040bcd4
    POP EDI                             ; 0040bcd5
    POP ESI                             ; 0040bcd6
    POP EBX                             ; 0040bcd7
    RET                                 ; 0040bcd8
    PUSH EDI                            ; 0040bcd9
        ;   Label: LAB_0040bcd9
    PUSH 0x5b5b50                       ; 0040bcda | = "part status opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bcdf
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bce4
    JMP 0x0040bbd5                      ; 0040bce7
        ;   XREF to: 0040bbd5 (UNCONDITIONAL_JUMP)  ; LAB_0040bbd5
    PUSH EDI                            ; 0040bcec
        ;   Label: LAB_0040bcec
    PUSH 0x5b5bb4                       ; 0040bced | = "part status info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bcf2
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bcf7
    CMP EBX,0xa                         ; 0040bcfa
    JNZ 0x0040bcb7                      ; 0040bcfd
        ;   XREF to: 0040bcb7 (CONDITIONAL_JUMP)  ; LAB_0040bcb7
    ADD ESP,0x4                         ; 0040bcff
    POP EBP                             ; 0040bd02
    POP EDI                             ; 0040bd03
    POP ESI                             ; 0040bd04
    POP EBX                             ; 0040bd05
    RET                                 ; 0040bd06
    PUSH EDI                            ; 0040bd07
        ;   Label: LAB_0040bd07
    PUSH 0x5f0990                       ; 0040bd08 | DAT_005f0990
    PUSH 0x5b5bd3                       ; 0040bd0d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040bd12 | DAT_007df9b4
    PUSH ECX                            ; 0040bd18
    CALL crt_unknown.c_FUN_005a3140     ; 0040bd19
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0040bd1e
    PUSH 0x1                            ; 0040bd21
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040afa0 ; 0040bd23
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
    ADD ESP,0x4                         ; 0040bd28
    MOV EDI,0x3c                        ; 0040bd2b
    PUSH EDI                            ; 0040bd30
    PUSH 0x5f0990                       ; 0040bd31 | DAT_005f0990
    PUSH 0x5b5bde                       ; 0040bd36 | = "%s%d\n"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040bd3b | DAT_007df9b4
    PUSH EBX                            ; 0040bd41
    CALL crt_unknown.c_FUN_005a3140     ; 0040bd42
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0040bd47
    PUSH 0x5f0990                       ; 0040bd4a | DAT_005f0990
    PUSH 0x5b5be4                       ; 0040bd4f | DAT_005b5be4
    MOV ESI,dword ptr [0x007df9b4]      ; 0040bd54 | DAT_007df9b4
    PUSH ESI                            ; 0040bd5a
    MOV EBX,EBP                         ; 0040bd5b
    CALL crt_unknown.c_FUN_005a3140     ; 0040bd5d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040bd62
    LEA ESI,[EBP + 0xf0]                ; 0040bd65
    MOV EAX,dword ptr [EBX + 0x2140]    ; 0040bd6b
        ;   Label: LAB_0040bd6b
    PUSH EAX                            ; 0040bd71
    PUSH 0x5b5be7                       ; 0040bd72 | DAT_005b5be7
    MOV EDX,dword ptr [0x007df9b4]      ; 0040bd77 | DAT_007df9b4
    PUSH EDX                            ; 0040bd7d
    ADD EBX,0x4                         ; 0040bd7e
    CALL crt_unknown.c_FUN_005a3140     ; 0040bd81
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040bd86
    CMP EBX,ESI                         ; 0040bd89
    JNZ 0x0040bd6b                      ; 0040bd8b
        ;   XREF to: 0040bd6b (CONDITIONAL_JUMP)  ; LAB_0040bd6b
    PUSH 0x5b5beb                       ; 0040bd8d | DAT_005b5beb
    MOV ECX,dword ptr [0x007df9b4]      ; 0040bd92 | DAT_007df9b4
    PUSH ECX                            ; 0040bd98
    CALL crt_unknown.c_FUN_005a3140     ; 0040bd99
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0040bd9e
    PUSH 0x5f0990                       ; 0040bda1 | DAT_005f0990
    PUSH 0x5b5bed                       ; 0040bda6 | DAT_005b5bed
    MOV EBX,dword ptr [0x007df9b4]      ; 0040bdab | DAT_007df9b4
    PUSH EBX                            ; 0040bdb1
    XOR ESI,ESI                         ; 0040bdb2
    CALL crt_unknown.c_FUN_005a3140     ; 0040bdb4
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040bdb9
    TEST EDI,EDI                        ; 0040bdbc
    JLE 0x0040bdf0                      ; 0040bdbe
        ;   XREF to: 0040bdf0 (CONDITIONAL_JUMP)  ; LAB_0040bdf0
    MOV EBX,EBP                         ; 0040bdc0
    MOV EBP,dword ptr [EBX + 0x2230]    ; 0040bdc2
        ;   Label: LAB_0040bdc2
    PUSH EBP                            ; 0040bdc8
    PUSH 0x5b5bf0                       ; 0040bdc9 | DAT_005b5bf0
    MOV EAX,[0x007df9b4]                ; 0040bdce | DAT_007df9b4
    PUSH EAX                            ; 0040bdd3
    ADD EBX,0x4                         ; 0040bdd4
    INC ESI                             ; 0040bdd7
    CALL crt_unknown.c_FUN_005a3140     ; 0040bdd8
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040bddd
    CMP ESI,EDI                         ; 0040bde0
    JL 0x0040bdc2                       ; 0040bde2
        ;   XREF to: 0040bdc2 (CONDITIONAL_JUMP)  ; LAB_0040bdc2
    LEA EAX,[EAX]                       ; 0040bde4
    LEA EDX,[EDX]                       ; 0040bdea
    PUSH 0x5b5bf4                       ; 0040bdf0 | DAT_005b5bf4
        ;   Label: LAB_0040bdf0
    MOV EDX,dword ptr [0x007df9b4]      ; 0040bdf5 | DAT_007df9b4
    PUSH EDX                            ; 0040bdfb
    CALL crt_unknown.c_FUN_005a3140     ; 0040bdfc
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0040be01
    PUSH -0x1                           ; 0040be04
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040afa0 ; 0040be06
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
    ADD ESP,0x4                         ; 0040be0b
    PUSH 0x5f0990                       ; 0040be0e | DAT_005f0990
    PUSH 0x5b5bf6                       ; 0040be13 | DAT_005b5bf6
    MOV ECX,dword ptr [0x007df9b4]      ; 0040be18 | DAT_007df9b4
    PUSH ECX                            ; 0040be1e
    CALL crt_unknown.c_FUN_005a3140     ; 0040be1f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040be24
    ADD ESP,0x4                         ; 0040be27
    POP EBP                             ; 0040be2a
    POP EDI                             ; 0040be2b
    POP ESI                             ; 0040be2c
    POP EBX                             ; 0040be2d
    RET                                 ; 0040be2e

