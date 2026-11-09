; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_FUN_0040b960(CDeformableModelInstance *model_ptr,char *property_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   property_name
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0 at 0041d1c1
;   core_carved.cpp_FUN_0042b3c0 at 0042b40b
;   core_constrct.cpp_FUN_00446e30 at 00446f8d
;   core_ghoul.cpp_FUN_004e0130 at 004e01ef
;   core_hero.cpp_FUN_004eab00 at 004eab60
;   core_hostage.cpp_CHostage_archive_FUN_004ef020 at 004ef086
;   core_tentacle.cpp_FUN_00595bc0 at 00595c08
;   core_thehand.cpp_FUN_005998d0 at 00599906
;   core_zombie.cpp_FUN_005be1e0 at 005be264
;   unkafter_demnfolk.cpp_FUN_0045c1e0 at 0045c264
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_part_status_opening_brac_005d2b04
;   undefined4 DAT_005d2b1e
;   undefined4 DAT_005d2b21
;   TerminatedCString s_description_005d2b24
;   TerminatedCString s_part_status_entry_005d2b30
;   undefined4 DAT_005d2b42
;   undefined4 DAT_005d2b44
;   TerminatedCString s_description_005d2b47
;   TerminatedCString s_part_texture_entry_005d2b53
;   undefined4 DAT_005d2b66
;   TerminatedCString s_part_status_info_closing_005d2b68
;   TerminatedCString s_s_s_005d2b87
;   TerminatedCString s_s_d_005d2b92
;   undefined4 DAT_005d2b98
;   undefined4 DAT_005d2b9b
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040ad60
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
;   core_skeleton.cpp_FUN_00569ae0
;   core_skeleton.cpp_FUN_00569b00
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b960
        ;   Label: core_actor.cpp_FUN_0040b960
    PUSH ESI                            ; 0040b961
    PUSH EDI                            ; 0040b962
    PUSH EBP                            ; 0040b963
    SUB ESP,0x4                         ; 0040b964
    MOV EBP,dword ptr [ESP + 0x18]      ; 0040b967
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0040b96b
    CMP dword ptr [0x007c3038],0x1      ; 0040b96f | DAT_007c3038
    JNZ 0x0040bac7                      ; 0040b976
        ;   XREF to: 0040bac7 (CONDITIONAL_JUMP)  ; LAB_0040bac7
    MOV EBX,dword ptr [0x007c3034]      ; 0040b97c | DAT_007c3034
        ;   Label: LAB_0040b97c
    PUSH EBX                            ; 0040b982
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040b983
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040b988
    MOV EBX,EAX                         ; 0040b98b
    TEST EAX,EAX                        ; 0040b98d
    JL 0x0040ba99                       ; 0040b98f
        ;   XREF to: 0040ba99 (CONDITIONAL_JUMP)  ; LAB_0040ba99
    CMP EBX,0xa                         ; 0040b995
        ;   Label: LAB_0040b995
    JNZ 0x0040b97c                      ; 0040b998
        ;   XREF to: 0040b97c (CONDITIONAL_JUMP)  ; LAB_0040b97c
    MOV EAX,ESP                         ; 0040b99a
    PUSH EAX                            ; 0040b99c
    PUSH 0x5d2b1e                       ; 0040b99d | DAT_005d2b1e
    MOV ESI,dword ptr [0x007c3034]      ; 0040b9a2 | DAT_007c3034
    PUSH ESI                            ; 0040b9a8
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b9a9
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040b9ae
    PUSH EBP                            ; 0040b9b1
    CALL core_skeleton.cpp_FUN_00569ae0 ; 0040b9b2
        ;   XREF to: 00569ae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569ae0()
    ADD ESP,0x4                         ; 0040b9b7
    MOV EAX,dword ptr [ESP]             ; 0040b9ba
    XOR EBX,EBX                         ; 0040b9bd
    TEST EAX,EAX                        ; 0040b9bf
    JLE 0x0040ba00                      ; 0040b9c1
        ;   XREF to: 0040ba00 (CONDITIONAL_JUMP)  ; LAB_0040ba00
    LEA ESI,[EBP + 0x2140]              ; 0040b9c3
    PUSH ESI                            ; 0040b9c9
        ;   Label: LAB_0040b9c9
    PUSH 0x5d2b21                       ; 0040b9ca | DAT_005d2b21
    MOV EDX,dword ptr [0x007c3034]      ; 0040b9cf | DAT_007c3034
    PUSH EDX                            ; 0040b9d5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040b9d6
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040b9db
    CMP EAX,0x1                         ; 0040b9de
    JZ 0x0040b9f5                       ; 0040b9e1
        ;   XREF to: 0040b9f5 (CONDITIONAL_JUMP)  ; LAB_0040b9f5
    PUSH 0x5d2b24                       ; 0040b9e3 | = "description"
    PUSH 0x5d2b30                       ; 0040b9e8 | = "part status entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b9ed
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b9f2
    MOV ECX,dword ptr [ESP]             ; 0040b9f5
        ;   Label: LAB_0040b9f5
    INC EBX                             ; 0040b9f8
    ADD ESI,0x4                         ; 0040b9f9
    CMP EBX,ECX                         ; 0040b9fc
    JL 0x0040b9c9                       ; 0040b9fe
        ;   XREF to: 0040b9c9 (CONDITIONAL_JUMP)  ; LAB_0040b9c9
    PUSH 0x5d2b42                       ; 0040ba00 | DAT_005d2b42
        ;   Label: LAB_0040ba00
    MOV EBX,dword ptr [0x007c3034]      ; 0040ba05 | DAT_007c3034
    PUSH EBX                            ; 0040ba0b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040ba0c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 0040ba11
    PUSH EBP                            ; 0040ba14
    CALL core_skeleton.cpp_FUN_00569b00 ; 0040ba15
        ;   XREF to: 00569b00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040ba1a
    MOV ESI,dword ptr [ESP]             ; 0040ba1d
    XOR EBX,EBX                         ; 0040ba20
    TEST ESI,ESI                        ; 0040ba22
    JLE 0x0040ba63                      ; 0040ba24
        ;   XREF to: 0040ba63 (CONDITIONAL_JUMP)  ; LAB_0040ba63
    LEA ESI,[EBP + 0x2230]              ; 0040ba26
    PUSH ESI                            ; 0040ba2c
        ;   Label: LAB_0040ba2c
    PUSH 0x5d2b44                       ; 0040ba2d | DAT_005d2b44
    MOV EBP,dword ptr [0x007c3034]      ; 0040ba32 | DAT_007c3034
    PUSH EBP                            ; 0040ba38
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040ba39
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0040ba3e
    CMP EAX,0x1                         ; 0040ba41
    JZ 0x0040ba58                       ; 0040ba44
        ;   XREF to: 0040ba58 (CONDITIONAL_JUMP)  ; LAB_0040ba58
    PUSH 0x5d2b47                       ; 0040ba46 | = "description"
    PUSH 0x5d2b53                       ; 0040ba4b | = "part texture entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040ba50
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040ba55
    MOV EAX,dword ptr [ESP]             ; 0040ba58
        ;   Label: LAB_0040ba58
    INC EBX                             ; 0040ba5b
    ADD ESI,0x4                         ; 0040ba5c
    CMP EBX,EAX                         ; 0040ba5f
    JL 0x0040ba2c                       ; 0040ba61
        ;   XREF to: 0040ba2c (CONDITIONAL_JUMP)  ; LAB_0040ba2c
    PUSH 0x5d2b66                       ; 0040ba63 | DAT_005d2b66
        ;   Label: LAB_0040ba63
    MOV EDX,dword ptr [0x007c3034]      ; 0040ba68 | DAT_007c3034
    PUSH EDX                            ; 0040ba6e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0040ba6f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 0040ba74
    MOV ECX,dword ptr [0x007c3034]      ; 0040ba77 | DAT_007c3034
        ;   Label: LAB_0040ba77
    PUSH ECX                            ; 0040ba7d
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040ba7e
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040ba83
    MOV EBX,EAX                         ; 0040ba86
    TEST EAX,EAX                        ; 0040ba88
    JL 0x0040baac                       ; 0040ba8a
        ;   XREF to: 0040baac (CONDITIONAL_JUMP)  ; LAB_0040baac
    CMP EBX,0xa                         ; 0040ba8c
    JNZ 0x0040ba77                      ; 0040ba8f
        ;   XREF to: 0040ba77 (CONDITIONAL_JUMP)  ; LAB_0040ba77
    ADD ESP,0x4                         ; 0040ba91
    POP EBP                             ; 0040ba94
    POP EDI                             ; 0040ba95
    POP ESI                             ; 0040ba96
    POP EBX                             ; 0040ba97
    RET                                 ; 0040ba98
    PUSH EDI                            ; 0040ba99
        ;   Label: LAB_0040ba99
    PUSH 0x5d2b04                       ; 0040ba9a | = "part status opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040ba9f
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040baa4
    JMP 0x0040b995                      ; 0040baa7
        ;   XREF to: 0040b995 (UNCONDITIONAL_JUMP)  ; LAB_0040b995
    PUSH EDI                            ; 0040baac
        ;   Label: LAB_0040baac
    PUSH 0x5d2b68                       ; 0040baad | = "part status info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040bab2
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bab7
    CMP EBX,0xa                         ; 0040baba
    JNZ 0x0040ba77                      ; 0040babd
        ;   XREF to: 0040ba77 (CONDITIONAL_JUMP)  ; LAB_0040ba77
    ADD ESP,0x4                         ; 0040babf
    POP EBP                             ; 0040bac2
    POP EDI                             ; 0040bac3
    POP ESI                             ; 0040bac4
    POP EBX                             ; 0040bac5
    RET                                 ; 0040bac6
    PUSH EDI                            ; 0040bac7
        ;   Label: LAB_0040bac7
    PUSH 0x6106c0                       ; 0040bac8 | DAT_006106c0
    PUSH 0x5d2b87                       ; 0040bacd | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007c3034]      ; 0040bad2 | DAT_007c3034
    PUSH ECX                            ; 0040bad8
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bad9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040bade
    PUSH 0x1                            ; 0040bae1
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040bae3
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040bae8
    MOV EDI,0x3c                        ; 0040baeb
    PUSH EDI                            ; 0040baf0
    PUSH 0x6106c0                       ; 0040baf1 | DAT_006106c0
    PUSH 0x5d2b92                       ; 0040baf6 | = "%s%d\n"
    MOV EBX,dword ptr [0x007c3034]      ; 0040bafb | DAT_007c3034
    PUSH EBX                            ; 0040bb01
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bb02
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040bb07
    PUSH 0x6106c0                       ; 0040bb0a | DAT_006106c0
    PUSH 0x5d2b98                       ; 0040bb0f | DAT_005d2b98
    MOV ESI,dword ptr [0x007c3034]      ; 0040bb14 | DAT_007c3034
    PUSH ESI                            ; 0040bb1a
    MOV EBX,EBP                         ; 0040bb1b
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bb1d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040bb22
    LEA ESI,[EBP + 0xf0]                ; 0040bb25
    MOV EAX,dword ptr [EBX + 0x2140]    ; 0040bb2b
        ;   Label: LAB_0040bb2b
    PUSH EAX                            ; 0040bb31
    PUSH 0x5d2b9b                       ; 0040bb32 | DAT_005d2b9b
    MOV EDX,dword ptr [0x007c3034]      ; 0040bb37 | DAT_007c3034
    PUSH EDX                            ; 0040bb3d
    ADD EBX,0x4                         ; 0040bb3e
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bb41
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040bb46
    CMP EBX,ESI                         ; 0040bb49
    JNZ 0x0040bb2b                      ; 0040bb4b
        ;   XREF to: 0040bb2b (CONDITIONAL_JUMP)  ; LAB_0040bb2b
    PUSH 0x5d2b9f                       ; 0040bb4d | DAT_005d2b9f
    MOV ECX,dword ptr [0x007c3034]      ; 0040bb52 | DAT_007c3034
    PUSH ECX                            ; 0040bb58
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bb59
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0040bb5e
    PUSH 0x6106c0                       ; 0040bb61 | DAT_006106c0
    PUSH 0x5d2ba1                       ; 0040bb66 | DAT_005d2ba1
    MOV EBX,dword ptr [0x007c3034]      ; 0040bb6b | DAT_007c3034
    PUSH EBX                            ; 0040bb71
    XOR ESI,ESI                         ; 0040bb72
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bb74
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040bb79
    TEST EDI,EDI                        ; 0040bb7c
    JLE 0x0040bbb0                      ; 0040bb7e
        ;   XREF to: 0040bbb0 (CONDITIONAL_JUMP)  ; LAB_0040bbb0
    MOV EBX,EBP                         ; 0040bb80
    MOV EBP,dword ptr [EBX + 0x2230]    ; 0040bb82
        ;   Label: LAB_0040bb82
    PUSH EBP                            ; 0040bb88
    PUSH 0x5d2ba4                       ; 0040bb89 | DAT_005d2ba4
    MOV EAX,[0x007c3034]                ; 0040bb8e | DAT_007c3034
    PUSH EAX                            ; 0040bb93
    ADD EBX,0x4                         ; 0040bb94
    INC ESI                             ; 0040bb97
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bb98
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040bb9d
    CMP ESI,EDI                         ; 0040bba0
    JL 0x0040bb82                       ; 0040bba2
        ;   XREF to: 0040bb82 (CONDITIONAL_JUMP)  ; LAB_0040bb82
    LEA EAX,[EAX]                       ; 0040bba4
    LEA EDX,[EDX]                       ; 0040bbaa
    PUSH 0x5d2ba8                       ; 0040bbb0 | DAT_005d2ba8
        ;   Label: LAB_0040bbb0
    MOV EDX,dword ptr [0x007c3034]      ; 0040bbb5 | DAT_007c3034
    PUSH EDX                            ; 0040bbbb
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bbbc
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0040bbc1
    PUSH -0x1                           ; 0040bbc4
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040bbc6
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040bbcb
    PUSH 0x6106c0                       ; 0040bbce | DAT_006106c0
    PUSH 0x5d2baa                       ; 0040bbd3 | DAT_005d2baa
    MOV ECX,dword ptr [0x007c3034]      ; 0040bbd8 | DAT_007c3034
    PUSH ECX                            ; 0040bbde
    CALL crt_unknown.c_FUN_005c03c0     ; 0040bbdf
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040bbe4
    ADD ESP,0x4                         ; 0040bbe7
    POP EBP                             ; 0040bbea
    POP EDI                             ; 0040bbeb
    POP ESI                             ; 0040bbec
    POP EBX                             ; 0040bbed
    RET                                 ; 0040bbee

