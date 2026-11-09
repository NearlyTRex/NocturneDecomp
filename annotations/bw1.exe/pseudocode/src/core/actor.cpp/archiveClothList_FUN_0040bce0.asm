; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveClothList_FUN_0040bce0(int *param_1,char *param_2)
;
;
; XREF[5]:
;   core_charactr.cpp_FUN_0042c7f0 at 0042c8fc
;   core_hostage.cpp_CHostage_archive_FUN_004ef020 at 004ef0d2
;   core_mobster.cpp_CMobster_archive_FUN_0051eb30 at 0051eba0
;   core_zombie.cpp_FUN_005be1e0 at 005be2e1
;   unkafter_demnfolk.cpp_FUN_0045c1e0 at 0045c2e1
;
; Referenced Globals:
;   TerminatedCString s_Cloth_list_opening_brace_005d2c01
;   undefined4 DAT_005d2c1a
;   TerminatedCString s_cloth_count_005d2c1d
;   TerminatedCString s_clothCount_005d2c29
;   TerminatedCString s_anon_005d2c34
;   TerminatedCString s_cloth_filename_entry_005d2c3e
;   TerminatedCString s_Cloth_list_closing_brace_005d2c53
;   TerminatedCString s_s_s_005d2c6c
;   TerminatedCString s_s_d_clothCount_005d2c77
;   TerminatedCString s_s_s_005d2c8b
;   undefined4 DAT_005d2c93
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

    PUSH EBX                            ; 0040bce0
        ;   Label: core_actor.cpp_archiveClothList_FUN_0040bce0
    PUSH ESI                            ; 0040bce1
    PUSH EDI                            ; 0040bce2
    PUSH EBP                            ; 0040bce3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040bce4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040bce8
    CMP dword ptr [0x007c3038],0x1      ; 0040bcec | DAT_007c3038
    JNZ 0x0040bdd6                      ; 0040bcf3
        ;   XREF to: 0040bdd6 (CONDITIONAL_JUMP)  ; LAB_0040bdd6
    MOV ESI,dword ptr [0x007c3034]      ; 0040bcf9 | DAT_007c3034
        ;   Label: LAB_0040bcf9
    PUSH ESI                            ; 0040bcff
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040bd00
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040bd05
    MOV ESI,EAX                         ; 0040bd08
    TEST EAX,EAX                        ; 0040bd0a
    JL 0x0040bdab                       ; 0040bd0c
        ;   XREF to: 0040bdab (CONDITIONAL_JUMP)  ; LAB_0040bdab
    CMP ESI,0xa                         ; 0040bd12
        ;   Label: LAB_0040bd12
    JNZ 0x0040bcf9                      ; 0040bd15
        ;   XREF to: 0040bcf9 (CONDITIONAL_JUMP)  ; LAB_0040bcf9
    PUSH EBP                            ; 0040bd17
    PUSH 0x5d2c1a                       ; 0040bd18 | DAT_005d2c1a
    MOV EDI,dword ptr [0x007c3034]      ; 0040bd1d | DAT_007c3034
    PUSH EDI                            ; 0040bd23
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040bd24
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040bd29
    CMP EAX,0x1                         ; 0040bd2c
    JZ 0x0040bd3f                       ; 0040bd2f
        ;   XREF to: 0040bd3f (CONDITIONAL_JUMP)  ; LAB_0040bd3f
    PUSH EBX                            ; 0040bd31
    PUSH 0x5d2c1d                       ; 0040bd32 | = "cloth count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bd37
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bd3c
    PUSH EBX                            ; 0040bd3f
        ;   Label: LAB_0040bd3f
    PUSH 0x5d2c29                       ; 0040bd40 | = "clothCount"
    XOR EDI,EDI                         ; 0040bd45
    CALL core_actor.cpp_archiveDescription_FUN_0040b110 ; 0040bd47
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b110(char * property_description, char * property_name)
    MOV EAX,dword ptr [EBP]             ; 0040bd4c
    ADD ESP,0x8                         ; 0040bd4f
    TEST EAX,EAX                        ; 0040bd52
    JLE 0x0040bd8c                      ; 0040bd54
        ;   XREF to: 0040bd8c (CONDITIONAL_JUMP)  ; LAB_0040bd8c
    LEA ESI,[EBP + 0x4]                 ; 0040bd56
    PUSH ESI                            ; 0040bd59
        ;   Label: LAB_0040bd59
    PUSH 0x5d2c34                       ; 0040bd5a | = " \"%[^\"]\"\n"
    MOV ECX,dword ptr [0x007c3034]      ; 0040bd5f | DAT_007c3034
    PUSH ECX                            ; 0040bd65
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040bd66
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040bd6b
    CMP EAX,0x1                         ; 0040bd6e
    JZ 0x0040bd81                       ; 0040bd71
        ;   XREF to: 0040bd81 (CONDITIONAL_JUMP)  ; LAB_0040bd81
    PUSH EBX                            ; 0040bd73
    PUSH 0x5d2c3e                       ; 0040bd74 | = "cloth filename entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bd79
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bd7e
    INC EDI                             ; 0040bd81
        ;   Label: LAB_0040bd81
    MOV EDX,dword ptr [EBP]             ; 0040bd82
    ADD ESI,0x28                        ; 0040bd85
    CMP EDI,EDX                         ; 0040bd88
    JL 0x0040bd59                       ; 0040bd8a
        ;   XREF to: 0040bd59 (CONDITIONAL_JUMP)  ; LAB_0040bd59
    MOV ESI,dword ptr [0x007c3034]      ; 0040bd8c | DAT_007c3034
        ;   Label: LAB_0040bd8c
    PUSH ESI                            ; 0040bd92
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040bd93
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040bd98
    MOV ESI,EAX                         ; 0040bd9b
    TEST EAX,EAX                        ; 0040bd9d
    JL 0x0040bdbe                       ; 0040bd9f
        ;   XREF to: 0040bdbe (CONDITIONAL_JUMP)  ; LAB_0040bdbe
    CMP ESI,0xa                         ; 0040bda1
    JNZ 0x0040bd8c                      ; 0040bda4
        ;   XREF to: 0040bd8c (CONDITIONAL_JUMP)  ; LAB_0040bd8c
    POP EBP                             ; 0040bda6
    POP EDI                             ; 0040bda7
    POP ESI                             ; 0040bda8
    POP EBX                             ; 0040bda9
    RET                                 ; 0040bdaa
    PUSH EBX                            ; 0040bdab
        ;   Label: LAB_0040bdab
    PUSH 0x5d2c01                       ; 0040bdac | = "Cloth list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bdb1
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bdb6
    JMP 0x0040bd12                      ; 0040bdb9
        ;   XREF to: 0040bd12 (UNCONDITIONAL_JUMP)  ; LAB_0040bd12
    PUSH EBX                            ; 0040bdbe
        ;   Label: LAB_0040bdbe
    PUSH 0x5d2c53                       ; 0040bdbf | = "Cloth list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bdc4
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bdc9
    CMP ESI,0xa                         ; 0040bdcc
    JNZ 0x0040bd8c                      ; 0040bdcf
        ;   XREF to: 0040bd8c (CONDITIONAL_JUMP)  ; LAB_0040bd8c
    POP EBP                             ; 0040bdd1
    POP EDI                             ; 0040bdd2
    POP ESI                             ; 0040bdd3
    POP EBX                             ; 0040bdd4
    RET                                 ; 0040bdd5
    PUSH EBX                            ; 0040bdd6
        ;   Label: LAB_0040bdd6
    PUSH 0x6106c0                       ; 0040bdd7 | DAT_006106c0
    PUSH 0x5d2c6c                       ; 0040bddc | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007c3034]      ; 0040bde1 | DAT_007c3034
    PUSH ECX                            ; 0040bde7
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bde8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040bded
    PUSH 0x1                            ; 0040bdf0
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040bdf2
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040bdf7
    MOV EBX,dword ptr [EBP]             ; 0040bdfa
    PUSH EBX                            ; 0040bdfd
    PUSH 0x6106c0                       ; 0040bdfe | DAT_006106c0
    PUSH 0x5d2c77                       ; 0040be03 | = "%s%d // clothCount\n"
    MOV ESI,dword ptr [0x007c3034]      ; 0040be08 | DAT_007c3034
    PUSH ESI                            ; 0040be0e
    XOR EBX,EBX                         ; 0040be0f
    CALL crt_unknown.c_FUN_005c03c0     ; 0040be11
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDI,dword ptr [EBP]             ; 0040be16
    ADD ESP,0x10                        ; 0040be19
    TEST EDI,EDI                        ; 0040be1c
    JLE 0x0040be50                      ; 0040be1e
        ;   XREF to: 0040be50 (CONDITIONAL_JUMP)  ; LAB_0040be50
    LEA ESI,[EBP + 0x4]                 ; 0040be20
    PUSH ESI                            ; 0040be23
        ;   Label: LAB_0040be23
    PUSH 0x6106c0                       ; 0040be24 | DAT_006106c0
    PUSH 0x5d2c8b                       ; 0040be29 | = "%s\"%s\"\n"
    MOV EAX,[0x007c3034]                ; 0040be2e | DAT_007c3034
    PUSH EAX                            ; 0040be33
    INC EBX                             ; 0040be34
    ADD ESI,0x28                        ; 0040be35
    CALL crt_unknown.c_FUN_005c03c0     ; 0040be38
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [EBP]             ; 0040be3d
    ADD ESP,0x10                        ; 0040be40
    CMP EBX,EDX                         ; 0040be43
    JL 0x0040be23                       ; 0040be45
        ;   XREF to: 0040be23 (CONDITIONAL_JUMP)  ; LAB_0040be23
    LEA EAX,[EAX]                       ; 0040be47
    LEA EDX,[EDX]                       ; 0040be4d
    PUSH -0x1                           ; 0040be50
        ;   Label: LAB_0040be50
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040be52
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040be57
    PUSH 0x6106c0                       ; 0040be5a | DAT_006106c0
    PUSH 0x5d2c93                       ; 0040be5f | DAT_005d2c93
    MOV ECX,dword ptr [0x007c3034]      ; 0040be64 | DAT_007c3034
    PUSH ECX                            ; 0040be6a
    CALL crt_unknown.c_FUN_005c03c0     ; 0040be6b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040be70
    POP EBP                             ; 0040be73
    POP EDI                             ; 0040be74
    POP ESI                             ; 0040be75
    POP EBX                             ; 0040be76
    RET                                 ; 0040be77

