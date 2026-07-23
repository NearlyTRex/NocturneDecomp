; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveClothList_FUN_0040cf70(int *param_1,undefined4 param_2)
;
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_archive_FUN_004244b0 at 004245ba
;   core_hostage.cpp_CHostage_archive_FUN_004b8320 at 004b83d2
;   core_mobster.cpp_CMobster_archive_FUN_004dc180 at 004dc1f0
;   core_zombie.cpp_CZombie_archive_FUN_00561aa0 at 00561ba1
;
; Referenced Globals:
;   TerminatedCString s_Cloth_list_opening_brace_00577dd9
;   TerminatedCString s_d_00577df2
;   TerminatedCString s_cloth_count_00577df5
;   TerminatedCString s_clothCount_00577e01
;   TerminatedCString s_anon_00577e0c
;   TerminatedCString s_cloth_filename_entry_00577e16
;   TerminatedCString s_Cloth_list_closing_brace_00577e2b
;   TerminatedCString s_s_s_00577e44
;   TerminatedCString s_s_d_clothCount_00577e4f
;   TerminatedCString s_s_s_00577e63
;   TerminatedCString s_s_00577e6b
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040bff0
;   core_actor.cpp_archiveDescription_FUN_0040c3a0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cf70
        ;   Label: core_actor.cpp_archiveClothList_FUN_0040cf70
    PUSH ESI                            ; 0040cf71
    PUSH EDI                            ; 0040cf72
    PUSH EBP                            ; 0040cf73
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040cf74
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040cf78
    CMP dword ptr [0x00763e88],0x1      ; 0040cf7c | DAT_00763e88
    JNZ 0x0040d066                      ; 0040cf83
        ;   XREF to: 0040d066 (CONDITIONAL_JUMP)  ; LAB_0040d066
    MOV ESI,dword ptr [0x00763e84]      ; 0040cf89 | DAT_00763e84
        ;   Label: LAB_0040cf89
    PUSH ESI                            ; 0040cf8f
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040cf90
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040cf95
    MOV ESI,EAX                         ; 0040cf98
    TEST EAX,EAX                        ; 0040cf9a
    JL 0x0040d03b                       ; 0040cf9c
        ;   XREF to: 0040d03b (CONDITIONAL_JUMP)  ; LAB_0040d03b
    CMP ESI,0xa                         ; 0040cfa2
        ;   Label: LAB_0040cfa2
    JNZ 0x0040cf89                      ; 0040cfa5
        ;   XREF to: 0040cf89 (CONDITIONAL_JUMP)  ; LAB_0040cf89
    PUSH EBP                            ; 0040cfa7
    PUSH 0x577df2                       ; 0040cfa8 | = "%d"
    MOV EDI,dword ptr [0x00763e84]      ; 0040cfad | DAT_00763e84
    PUSH EDI                            ; 0040cfb3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040cfb4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0040cfb9
    CMP EAX,0x1                         ; 0040cfbc
    JZ 0x0040cfcf                       ; 0040cfbf
        ;   XREF to: 0040cfcf (CONDITIONAL_JUMP)  ; LAB_0040cfcf
    PUSH EBX                            ; 0040cfc1
    PUSH 0x577df5                       ; 0040cfc2 | = "cloth count"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040cfc7
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040cfcc
    PUSH EBX                            ; 0040cfcf
        ;   Label: LAB_0040cfcf
    PUSH 0x577e01                       ; 0040cfd0 | = "clothCount"
    XOR EDI,EDI                         ; 0040cfd5
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040cfd7
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDescription_FUN_0040c3a0()
    MOV EAX,dword ptr [EBP]             ; 0040cfdc
    ADD ESP,0x8                         ; 0040cfdf
    TEST EAX,EAX                        ; 0040cfe2
    JLE 0x0040d01c                      ; 0040cfe4
        ;   XREF to: 0040d01c (CONDITIONAL_JUMP)  ; LAB_0040d01c
    LEA ESI,[EBP + 0x4]                 ; 0040cfe6
    PUSH ESI                            ; 0040cfe9
        ;   Label: LAB_0040cfe9
    PUSH 0x577e0c                       ; 0040cfea | = " \"%[^\"]\"\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040cfef | DAT_00763e84
    PUSH ECX                            ; 0040cff5
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040cff6
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0040cffb
    CMP EAX,0x1                         ; 0040cffe
    JZ 0x0040d011                       ; 0040d001
        ;   XREF to: 0040d011 (CONDITIONAL_JUMP)  ; LAB_0040d011
    PUSH EBX                            ; 0040d003
    PUSH 0x577e16                       ; 0040d004 | = "cloth filename entry"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d009
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d00e
    INC EDI                             ; 0040d011
        ;   Label: LAB_0040d011
    MOV EDX,dword ptr [EBP]             ; 0040d012
    ADD ESI,0x28                        ; 0040d015
    CMP EDI,EDX                         ; 0040d018
    JL 0x0040cfe9                       ; 0040d01a
        ;   XREF to: 0040cfe9 (CONDITIONAL_JUMP)  ; LAB_0040cfe9
    MOV ESI,dword ptr [0x00763e84]      ; 0040d01c | DAT_00763e84
        ;   Label: LAB_0040d01c
    PUSH ESI                            ; 0040d022
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040d023
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040d028
    MOV ESI,EAX                         ; 0040d02b
    TEST EAX,EAX                        ; 0040d02d
    JL 0x0040d04e                       ; 0040d02f
        ;   XREF to: 0040d04e (CONDITIONAL_JUMP)  ; LAB_0040d04e
    CMP ESI,0xa                         ; 0040d031
    JNZ 0x0040d01c                      ; 0040d034
        ;   XREF to: 0040d01c (CONDITIONAL_JUMP)  ; LAB_0040d01c
    POP EBP                             ; 0040d036
    POP EDI                             ; 0040d037
    POP ESI                             ; 0040d038
    POP EBX                             ; 0040d039
    RET                                 ; 0040d03a
    PUSH EBX                            ; 0040d03b
        ;   Label: LAB_0040d03b
    PUSH 0x577dd9                       ; 0040d03c | = "Cloth list opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d041
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d046
    JMP 0x0040cfa2                      ; 0040d049
        ;   XREF to: 0040cfa2 (UNCONDITIONAL_JUMP)  ; LAB_0040cfa2
    PUSH EBX                            ; 0040d04e
        ;   Label: LAB_0040d04e
    PUSH 0x577e2b                       ; 0040d04f | = "Cloth list closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040d054
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040d059
    CMP ESI,0xa                         ; 0040d05c
    JNZ 0x0040d01c                      ; 0040d05f
        ;   XREF to: 0040d01c (CONDITIONAL_JUMP)  ; LAB_0040d01c
    POP EBP                             ; 0040d061
    POP EDI                             ; 0040d062
    POP ESI                             ; 0040d063
    POP EBX                             ; 0040d064
    RET                                 ; 0040d065
    PUSH EBX                            ; 0040d066
        ;   Label: LAB_0040d066
    PUSH 0x5acc90                       ; 0040d067 | DAT_005acc90
    PUSH 0x577e44                       ; 0040d06c | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040d071 | DAT_00763e84
    PUSH ECX                            ; 0040d077
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d078
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0040d07d
    PUSH 0x1                            ; 0040d080
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040d082
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 0040d087
    MOV EBX,dword ptr [EBP]             ; 0040d08a
    PUSH EBX                            ; 0040d08d
    PUSH 0x5acc90                       ; 0040d08e | DAT_005acc90
    PUSH 0x577e4f                       ; 0040d093 | = "%s%d // clothCount\n"
    MOV ESI,dword ptr [0x00763e84]      ; 0040d098 | DAT_00763e84
    PUSH ESI                            ; 0040d09e
    XOR EBX,EBX                         ; 0040d09f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d0a1
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDI,dword ptr [EBP]             ; 0040d0a6
    ADD ESP,0x10                        ; 0040d0a9
    TEST EDI,EDI                        ; 0040d0ac
    JLE 0x0040d0e0                      ; 0040d0ae
        ;   XREF to: 0040d0e0 (CONDITIONAL_JUMP)  ; LAB_0040d0e0
    LEA ESI,[EBP + 0x4]                 ; 0040d0b0
    PUSH ESI                            ; 0040d0b3
        ;   Label: LAB_0040d0b3
    PUSH 0x5acc90                       ; 0040d0b4 | DAT_005acc90
    PUSH 0x577e63                       ; 0040d0b9 | = "%s\"%s\"\n"
    MOV EAX,[0x00763e84]                ; 0040d0be | DAT_00763e84
    PUSH EAX                            ; 0040d0c3
    INC EBX                             ; 0040d0c4
    ADD ESI,0x28                        ; 0040d0c5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d0c8
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EBP]             ; 0040d0cd
    ADD ESP,0x10                        ; 0040d0d0
    CMP EBX,EDX                         ; 0040d0d3
    JL 0x0040d0b3                       ; 0040d0d5
        ;   XREF to: 0040d0b3 (CONDITIONAL_JUMP)  ; LAB_0040d0b3
    LEA EAX,[EAX]                       ; 0040d0d7
    LEA EDX,[EDX]                       ; 0040d0dd
    PUSH -0x1                           ; 0040d0e0
        ;   Label: LAB_0040d0e0
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040d0e2
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 0040d0e7
    PUSH 0x5acc90                       ; 0040d0ea | DAT_005acc90
    PUSH 0x577e6b                       ; 0040d0ef | = "%s}\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040d0f4 | DAT_00763e84
    PUSH ECX                            ; 0040d0fa
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040d0fb
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0040d100
    POP EBP                             ; 0040d103
    POP EDI                             ; 0040d104
    POP ESI                             ; 0040d105
    POP EBX                             ; 0040d106
    RET                                 ; 0040d107

