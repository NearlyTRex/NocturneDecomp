; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveClothList_FUN_0040bf20(int *param_1,char *param_2)
;
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b55c
;   core_demnfolk.cpp_CDemnfolk_archive_FUN_004583c0 at 004584c1
;   core_zombie.cpp_CZombie_archive_FUN_0058c060 at 0058c161
;   core_zombiepriest.cpp_CZombiePriest_archive_FUN_0058f510 at 0058f57c
;
; Referenced Globals:
;   TerminatedCString s_Cloth_list_opening_brace_005b5c4d
;   undefined4 DAT_005b5c66
;   TerminatedCString s_cloth_count_005b5c69
;   TerminatedCString s_clothCount_005b5c75
;   TerminatedCString s_anon_005b5c80
;   TerminatedCString s_cloth_filename_entry_005b5c8a
;   TerminatedCString s_Cloth_list_closing_brace_005b5c9f
;   TerminatedCString s_s_s_005b5cb8
;   TerminatedCString s_s_d_clothCount_005b5cc3
;   TerminatedCString s_s_s_005b5cd7
;   undefined4 DAT_005b5cdf
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040afa0
;   core_actor.cpp_archiveDescription_FUN_0040b350
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bf20
        ;   Label: core_actor.cpp_archiveClothList_FUN_0040bf20
    PUSH ESI                            ; 0040bf21
    PUSH EDI                            ; 0040bf22
    PUSH EBP                            ; 0040bf23
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040bf24
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040bf28
    CMP dword ptr [0x007df9b8],0x1      ; 0040bf2c | DAT_007df9b8
    JNZ 0x0040c016                      ; 0040bf33
        ;   XREF to: 0040c016 (CONDITIONAL_JUMP)  ; LAB_0040c016
    MOV ESI,dword ptr [0x007df9b4]      ; 0040bf39 | DAT_007df9b4
        ;   Label: LAB_0040bf39
    PUSH ESI                            ; 0040bf3f
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040bf40
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040bf45
    MOV ESI,EAX                         ; 0040bf48
    TEST EAX,EAX                        ; 0040bf4a
    JL 0x0040bfeb                       ; 0040bf4c
        ;   XREF to: 0040bfeb (CONDITIONAL_JUMP)  ; LAB_0040bfeb
    CMP ESI,0xa                         ; 0040bf52
        ;   Label: LAB_0040bf52
    JNZ 0x0040bf39                      ; 0040bf55
        ;   XREF to: 0040bf39 (CONDITIONAL_JUMP)  ; LAB_0040bf39
    PUSH EBP                            ; 0040bf57
    PUSH 0x5b5c66                       ; 0040bf58 | DAT_005b5c66
    MOV EDI,dword ptr [0x007df9b4]      ; 0040bf5d | DAT_007df9b4
    PUSH EDI                            ; 0040bf63
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bf64
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040bf69
    CMP EAX,0x1                         ; 0040bf6c
    JZ 0x0040bf7f                       ; 0040bf6f
        ;   XREF to: 0040bf7f (CONDITIONAL_JUMP)  ; LAB_0040bf7f
    PUSH EBX                            ; 0040bf71
    PUSH 0x5b5c69                       ; 0040bf72 | = "cloth count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bf77
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bf7c
    PUSH EBX                            ; 0040bf7f
        ;   Label: LAB_0040bf7f
    PUSH 0x5b5c75                       ; 0040bf80 | = "clothCount"
    XOR EDI,EDI                         ; 0040bf85
    CALL core_actor.cpp_archiveDescription_FUN_0040b350 ; 0040bf87
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDescription_FUN_0040b350(char * property_description, char * property_name)
    MOV EAX,dword ptr [EBP]             ; 0040bf8c
    ADD ESP,0x8                         ; 0040bf8f
    TEST EAX,EAX                        ; 0040bf92
    JLE 0x0040bfcc                      ; 0040bf94
        ;   XREF to: 0040bfcc (CONDITIONAL_JUMP)  ; LAB_0040bfcc
    LEA ESI,[EBP + 0x4]                 ; 0040bf96
    PUSH ESI                            ; 0040bf99
        ;   Label: LAB_0040bf99
    PUSH 0x5b5c80                       ; 0040bf9a | = " \"%[^\"]\"\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040bf9f | DAT_007df9b4
    PUSH ECX                            ; 0040bfa5
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040bfa6
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0040bfab
    CMP EAX,0x1                         ; 0040bfae
    JZ 0x0040bfc1                       ; 0040bfb1
        ;   XREF to: 0040bfc1 (CONDITIONAL_JUMP)  ; LAB_0040bfc1
    PUSH EBX                            ; 0040bfb3
    PUSH 0x5b5c8a                       ; 0040bfb4 | = "cloth filename entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bfb9
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bfbe
    INC EDI                             ; 0040bfc1
        ;   Label: LAB_0040bfc1
    MOV EDX,dword ptr [EBP]             ; 0040bfc2
    ADD ESI,0x28                        ; 0040bfc5
    CMP EDI,EDX                         ; 0040bfc8
    JL 0x0040bf99                       ; 0040bfca
        ;   XREF to: 0040bf99 (CONDITIONAL_JUMP)  ; LAB_0040bf99
    MOV ESI,dword ptr [0x007df9b4]      ; 0040bfcc | DAT_007df9b4
        ;   Label: LAB_0040bfcc
    PUSH ESI                            ; 0040bfd2
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040bfd3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040bfd8
    MOV ESI,EAX                         ; 0040bfdb
    TEST EAX,EAX                        ; 0040bfdd
    JL 0x0040bffe                       ; 0040bfdf
        ;   XREF to: 0040bffe (CONDITIONAL_JUMP)  ; LAB_0040bffe
    CMP ESI,0xa                         ; 0040bfe1
    JNZ 0x0040bfcc                      ; 0040bfe4
        ;   XREF to: 0040bfcc (CONDITIONAL_JUMP)  ; LAB_0040bfcc
    POP EBP                             ; 0040bfe6
    POP EDI                             ; 0040bfe7
    POP ESI                             ; 0040bfe8
    POP EBX                             ; 0040bfe9
    RET                                 ; 0040bfea
    PUSH EBX                            ; 0040bfeb
        ;   Label: LAB_0040bfeb
    PUSH 0x5b5c4d                       ; 0040bfec | = "Cloth list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040bff1
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bff6
    JMP 0x0040bf52                      ; 0040bff9
        ;   XREF to: 0040bf52 (UNCONDITIONAL_JUMP)  ; LAB_0040bf52
    PUSH EBX                            ; 0040bffe
        ;   Label: LAB_0040bffe
    PUSH 0x5b5c9f                       ; 0040bfff | = "Cloth list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040c004
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040c009
    CMP ESI,0xa                         ; 0040c00c
    JNZ 0x0040bfcc                      ; 0040c00f
        ;   XREF to: 0040bfcc (CONDITIONAL_JUMP)  ; LAB_0040bfcc
    POP EBP                             ; 0040c011
    POP EDI                             ; 0040c012
    POP ESI                             ; 0040c013
    POP EBX                             ; 0040c014
    RET                                 ; 0040c015
    PUSH EBX                            ; 0040c016
        ;   Label: LAB_0040c016
    PUSH 0x5f0990                       ; 0040c017 | DAT_005f0990
    PUSH 0x5b5cb8                       ; 0040c01c | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040c021 | DAT_007df9b4
    PUSH ECX                            ; 0040c027
    CALL crt_unknown.c_FUN_005a3140     ; 0040c028
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0040c02d
    PUSH 0x1                            ; 0040c030
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040afa0 ; 0040c032
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
    ADD ESP,0x4                         ; 0040c037
    MOV EBX,dword ptr [EBP]             ; 0040c03a
    PUSH EBX                            ; 0040c03d
    PUSH 0x5f0990                       ; 0040c03e | DAT_005f0990
    PUSH 0x5b5cc3                       ; 0040c043 | = "%s%d // clothCount\n"
    MOV ESI,dword ptr [0x007df9b4]      ; 0040c048 | DAT_007df9b4
    PUSH ESI                            ; 0040c04e
    XOR EBX,EBX                         ; 0040c04f
    CALL crt_unknown.c_FUN_005a3140     ; 0040c051
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDI,dword ptr [EBP]             ; 0040c056
    ADD ESP,0x10                        ; 0040c059
    TEST EDI,EDI                        ; 0040c05c
    JLE 0x0040c090                      ; 0040c05e
        ;   XREF to: 0040c090 (CONDITIONAL_JUMP)  ; LAB_0040c090
    LEA ESI,[EBP + 0x4]                 ; 0040c060
    PUSH ESI                            ; 0040c063
        ;   Label: LAB_0040c063
    PUSH 0x5f0990                       ; 0040c064 | DAT_005f0990
    PUSH 0x5b5cd7                       ; 0040c069 | = "%s\"%s\"\n"
    MOV EAX,[0x007df9b4]                ; 0040c06e | DAT_007df9b4
    PUSH EAX                            ; 0040c073
    INC EBX                             ; 0040c074
    ADD ESI,0x28                        ; 0040c075
    CALL crt_unknown.c_FUN_005a3140     ; 0040c078
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBP]             ; 0040c07d
    ADD ESP,0x10                        ; 0040c080
    CMP EBX,EDX                         ; 0040c083
    JL 0x0040c063                       ; 0040c085
        ;   XREF to: 0040c063 (CONDITIONAL_JUMP)  ; LAB_0040c063
    LEA EAX,[EAX]                       ; 0040c087
    LEA EDX,[EDX]                       ; 0040c08d
    PUSH -0x1                           ; 0040c090
        ;   Label: LAB_0040c090
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040afa0 ; 0040c092
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
    ADD ESP,0x4                         ; 0040c097
    PUSH 0x5f0990                       ; 0040c09a | DAT_005f0990
    PUSH 0x5b5cdf                       ; 0040c09f | DAT_005b5cdf
    MOV ECX,dword ptr [0x007df9b4]      ; 0040c0a4 | DAT_007df9b4
    PUSH ECX                            ; 0040c0aa
    CALL crt_unknown.c_FUN_005a3140     ; 0040c0ab
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040c0b0
    POP EBP                             ; 0040c0b3
    POP EDI                             ; 0040c0b4
    POP ESI                             ; 0040c0b5
    POP EBX                             ; 0040c0b6
    RET                                 ; 0040c0b7

