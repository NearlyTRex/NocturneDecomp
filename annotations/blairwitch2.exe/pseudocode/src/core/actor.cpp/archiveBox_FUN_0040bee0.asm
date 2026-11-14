; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveBox_FUN_0040bee0(CBox *box_ptr,char *property_name)
;
; Parameters:
; CBox *           Stack[0x4]:4   box_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_00415f50 at 004160d5
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0 at 0041c920
;
; Referenced Globals:
;   TerminatedCString s_sim_box_state_info_openi_005cac4c
;   TerminatedCString s_sim_box_state_info_closi_005cac6d
;   TerminatedCString s_s_s_005cac8e
;   undefined4 DAT_005cac99
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040b050
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
;   core_box.cpp_CBox_loadFromFile_FUN_005b4300
;   core_box.cpp_CBox_saveToFile_FUN_005b44b0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bee0
        ;   Label: core_actor.cpp_archiveBox_FUN_0040bee0
    PUSH ESI                            ; 0040bee1
    PUSH EBP                            ; 0040bee2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040bee3
    CMP dword ptr [0x007bc038],0x1      ; 0040bee7 | DAT_007bc038
    JNZ 0x0040bf66                      ; 0040beee
        ;   XREF to: 0040bf66 (CONDITIONAL_JUMP)  ; LAB_0040bf66
    MOV EBP,dword ptr [0x007bc034]      ; 0040bef4 | DAT_007bc034
        ;   Label: LAB_0040bef4
    PUSH EBP                            ; 0040befa
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040befb
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0040bf00
    MOV ESI,EAX                         ; 0040bf03
    TEST EAX,EAX                        ; 0040bf05
    JL 0x0040bf3f                       ; 0040bf07
        ;   XREF to: 0040bf3f (CONDITIONAL_JUMP)  ; LAB_0040bf3f
    CMP ESI,0xa                         ; 0040bf09
        ;   Label: LAB_0040bf09
    JNZ 0x0040bef4                      ; 0040bf0c
        ;   XREF to: 0040bef4 (CONDITIONAL_JUMP)  ; LAB_0040bef4
    MOV EAX,[0x007bc034]                ; 0040bf0e | DAT_007bc034
    PUSH EAX                            ; 0040bf13
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040bf14
    PUSH EDX                            ; 0040bf18
    CALL core_box.cpp_CBox_loadFromFile_FUN_005b4300 ; 0040bf19
        ;   XREF to: 005b4300 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_loadFromFile_FUN_005b4300(CBox * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0040bf1e
    MOV ECX,dword ptr [0x007bc034]      ; 0040bf21 | DAT_007bc034
        ;   Label: LAB_0040bf21
    PUSH ECX                            ; 0040bf27
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040bf28
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0040bf2d
    MOV ESI,EAX                         ; 0040bf30
    TEST EAX,EAX                        ; 0040bf32
    JL 0x0040bf4f                       ; 0040bf34
        ;   XREF to: 0040bf4f (CONDITIONAL_JUMP)  ; LAB_0040bf4f
    CMP ESI,0xa                         ; 0040bf36
    JNZ 0x0040bf21                      ; 0040bf39
        ;   XREF to: 0040bf21 (CONDITIONAL_JUMP)  ; LAB_0040bf21
    POP EBP                             ; 0040bf3b
    POP ESI                             ; 0040bf3c
    POP EBX                             ; 0040bf3d
    RET                                 ; 0040bf3e
    PUSH EBX                            ; 0040bf3f
        ;   Label: LAB_0040bf3f
    PUSH 0x5cac4c                       ; 0040bf40 | = "sim box state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bf45
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf4a
    JMP 0x0040bf09                      ; 0040bf4d
        ;   XREF to: 0040bf09 (UNCONDITIONAL_JUMP)  ; LAB_0040bf09
    PUSH EBX                            ; 0040bf4f
        ;   Label: LAB_0040bf4f
    PUSH 0x5cac6d                       ; 0040bf50 | = "sim box state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bf55
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf5a
    CMP ESI,0xa                         ; 0040bf5d
    JNZ 0x0040bf21                      ; 0040bf60
        ;   XREF to: 0040bf21 (CONDITIONAL_JUMP)  ; LAB_0040bf21
    POP EBP                             ; 0040bf62
    POP ESI                             ; 0040bf63
    POP EBX                             ; 0040bf64
    RET                                 ; 0040bf65
    PUSH EDI                            ; 0040bf66
        ;   Label: LAB_0040bf66
    PUSH EBX                            ; 0040bf67
    PUSH 0x609590                       ; 0040bf68 | DAT_00609590
    PUSH 0x5cac8e                       ; 0040bf6d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007bc034]      ; 0040bf72 | DAT_007bc034
    PUSH ECX                            ; 0040bf78
    CALL crt_unknown.c_FUN_005b8010     ; 0040bf79
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040bf7e
    PUSH 0x1                            ; 0040bf81
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040bf83
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040bf88
    PUSH 0x609590                       ; 0040bf8b | DAT_00609590
    MOV EBX,dword ptr [0x007bc034]      ; 0040bf90 | DAT_007bc034
    PUSH EBX                            ; 0040bf96
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040bf97
    PUSH ESI                            ; 0040bf9b
    CALL core_box.cpp_CBox_saveToFile_FUN_005b44b0 ; 0040bf9c
        ;   XREF to: 005b44b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_saveToFile_FUN_005b44b0(CBox * this_ptr, _FILE * file_handle, char * indent_prefix)
    ADD ESP,0xc                         ; 0040bfa1
    PUSH -0x1                           ; 0040bfa4
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040bfa6
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040bfab
    PUSH 0x609590                       ; 0040bfae | DAT_00609590
    PUSH 0x5cac99                       ; 0040bfb3 | DAT_005cac99
    MOV EDI,dword ptr [0x007bc034]      ; 0040bfb8 | DAT_007bc034
    PUSH EDI                            ; 0040bfbe
    CALL crt_unknown.c_FUN_005b8010     ; 0040bfbf
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040bfc4
    POP EDI                             ; 0040bfc7
    POP EBP                             ; 0040bfc8
    POP ESI                             ; 0040bfc9
    POP EBX                             ; 0040bfca
    RET                                 ; 0040bfcb

