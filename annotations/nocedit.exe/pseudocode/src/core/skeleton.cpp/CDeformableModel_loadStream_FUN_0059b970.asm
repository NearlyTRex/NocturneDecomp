; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel * this_ptr, FILE * file_handle)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x88]:1  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x78]:1  local_78
; undefined2       Stack[-0x74]:2  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 at 0059b91c
;
; Referenced Globals:
;   TerminatedCString s_d_0064e8bb
;   TerminatedCString s_core_skeleton_cpp_0064e8bf
;   TerminatedCString s_Deformable_model_file_is_0064e8d4
;   TerminatedCString s_core_skeleton_cpp_0064e8f5
;   TerminatedCString s_Can_t_load_model_of_vers_0064e90a
;   TerminatedCString s_d_d_d_d_d_0064e955
;   TerminatedCString s_d_d_d_d_0064e965
;   TerminatedCString s_d_d_d_d_d_0064e972
;   TerminatedCString s_d_d_d_d_d_d_0064e982
;   TerminatedCString s_anon_0064e995
;   TerminatedCString s_d_0064e99c
;   TerminatedCString s_d_d_0064e9a9
;   TerminatedCString s_d_0064e9ba
;   TerminatedCString s_d_d_0064e9be
;   TerminatedCString s_d_d_d_0064e9c5
;   ... and 15 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b970
        ;   Label: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
    PUSH ESI                            ; 0059b971
    PUSH EDI                            ; 0059b972
    PUSH EBP                            ; 0059b973
    SUB ESP,0x80                        ; 0059b974
    MOV EBX,dword ptr [ESP + 0x94]      ; 0059b97a
    MOV ESI,dword ptr [ESP + 0x98]      ; 0059b981
    MOV EDI,ESI                         ; 0059b988
    PUSH EDI                            ; 0059b98a
        ;   Label: LAB_0059b98a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059b98b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059b990
    TEST EAX,EAX                        ; 0059b993
    JL 0x0059b99c                       ; 0059b995
        ;   XREF to: 0059b99c (CONDITIONAL_JUMP)  ; LAB_0059b99c
    CMP EAX,0xa                         ; 0059b997
    JNZ 0x0059b98a                      ; 0059b99a
        ;   XREF to: 0059b98a (CONDITIONAL_JUMP)  ; LAB_0059b98a
    LEA EAX,[ESP + 0x28]                ; 0059b99c
        ;   Label: LAB_0059b99c
    PUSH EAX                            ; 0059b9a0
    PUSH 0x64e8bb                       ; 0059b9a1 | = "%d\n"
    PUSH ESI                            ; 0059b9a6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059b9a7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059b9ac
    CMP EAX,0x1                         ; 0059b9af
    JZ 0x0059b9d7                       ; 0059b9b2
        ;   XREF to: 0059b9d7 (CONDITIONAL_JUMP)  ; LAB_0059b9d7
    MOV EDX,0x64e8bf                    ; 0059b9b4 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059b9b4
    MOV ECX,0x4c7                       ; 0059b9b9
    PUSH 0x64e8d4                       ; 0059b9be | = "Deformable model file is corrupt"
    MOV dword ptr [0x02f0ca48],EDX      ; 0059b9c3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0059b9c9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059b9cf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059b9d4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059b9d7
        ;   Label: LAB_0059b9d7
    MOV EDI,dword ptr [0x00681864]      ; 0059b9db | INT_00681864
    CMP EAX,EDI                         ; 0059b9e1
    JLE 0x0059ba0d                      ; 0059b9e3
        ;   XREF to: 0059ba0d (CONDITIONAL_JUMP)  ; LAB_0059ba0d
    PUSH EDI                            ; 0059b9e5
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0059b9e6
    PUSH ECX                            ; 0059b9ea
    MOV EBP,0x64e8f5                    ; 0059b9eb | = "..\\core\\skeleton.cpp"
    MOV EAX,0x4ca                       ; 0059b9f0
    PUSH 0x64e90a                       ; 0059b9f5 | = "Can't load model of version %d, this ..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0059b9fa | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0059ba00 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059ba05
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059ba0a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0059ba0d
        ;   Label: LAB_0059ba0d
    CMP EDI,0x3                         ; 0059ba11
    JL 0x0059bb41                       ; 0059ba14
        ;   XREF to: 0059bb41 (CONDITIONAL_JUMP)  ; LAB_0059bb41
    CMP EDI,0x5                         ; 0059ba1a
    JL 0x0059baf5                       ; 0059ba1d
        ;   XREF to: 0059baf5 (CONDITIONAL_JUMP)  ; LAB_0059baf5
    MOV EDI,ESI                         ; 0059ba23
    PUSH EDI                            ; 0059ba25
        ;   Label: LAB_0059ba25
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059ba26
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059ba2b
    TEST EAX,EAX                        ; 0059ba2e
    JL 0x0059ba37                       ; 0059ba30
        ;   XREF to: 0059ba37 (CONDITIONAL_JUMP)  ; LAB_0059ba37
    CMP EAX,0xa                         ; 0059ba32
    JNZ 0x0059ba25                      ; 0059ba35
        ;   XREF to: 0059ba25 (CONDITIONAL_JUMP)  ; LAB_0059ba25
    LEA EAX,[ESP + 0x24]                ; 0059ba37
        ;   Label: LAB_0059ba37
    PUSH EAX                            ; 0059ba3b
    LEA EAX,[ESP + 0x30]                ; 0059ba3c
    PUSH EAX                            ; 0059ba40
    LEA EAX,[ESP + 0x40]                ; 0059ba41
    PUSH EAX                            ; 0059ba45
    LEA EAX,[ESP + 0x40]                ; 0059ba46
    PUSH EAX                            ; 0059ba4a
    LEA EAX,[ESP + 0x40]                ; 0059ba4b
    PUSH EAX                            ; 0059ba4f
    PUSH 0x64e955                       ; 0059ba50 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0059ba55
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059ba56
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 0059ba5b
    CMP EAX,0x5                         ; 0059ba5e
    JNZ 0x0059b9b4                      ; 0059ba61
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059ba67
        ;   Label: LAB_0059ba67
    PUSH EDX                            ; 0059ba6b
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0059ba6c
    PUSH ECX                            ; 0059ba70
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0059ba71
    PUSH EDI                            ; 0059ba75
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0059ba76
    PUSH EBP                            ; 0059ba7a
    PUSH EBX                            ; 0059ba7b
    MOV EDI,ESI                         ; 0059ba7c
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 ; 0059ba7e
        ;   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 0059ba83
    PUSH EDI                            ; 0059ba86
        ;   Label: LAB_0059ba86
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059ba87
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059ba8c
    TEST EAX,EAX                        ; 0059ba8f
    JL 0x0059ba98                       ; 0059ba91
        ;   XREF to: 0059ba98 (CONDITIONAL_JUMP)  ; LAB_0059ba98
    CMP EAX,0xa                         ; 0059ba93
    JNZ 0x0059ba86                      ; 0059ba96
        ;   XREF to: 0059ba86 (CONDITIONAL_JUMP)  ; LAB_0059ba86
    XOR EDI,EDI                         ; 0059ba98
        ;   Label: LAB_0059ba98
    CMP EDI,dword ptr [EBX]             ; 0059ba9a
        ;   Label: LAB_0059ba9a
    JGE 0x0059bbbb                      ; 0059ba9c
        ;   XREF to: 0059bbbb (CONDITIONAL_JUMP)  ; LAB_0059bbbb
    LEA EDX,[EDI*0x8 + 0x0]             ; 0059baa2
    LEA EAX,[EBX + 0x4]                 ; 0059baa9
    ADD EAX,EDX                         ; 0059baac
    LEA EDX,[EAX + 0x4]                 ; 0059baae
    PUSH EDX                            ; 0059bab1
    PUSH EAX                            ; 0059bab2
    LEA EAX,[ESP + 0x60]                ; 0059bab3
    PUSH EAX                            ; 0059bab7
    LEA EAX,[ESP + 0x60]                ; 0059bab8
    PUSH EAX                            ; 0059babc
    LEA EAX,[ESP + 0x60]                ; 0059babd
    PUSH EAX                            ; 0059bac1
    PUSH 0x64e972                       ; 0059bac2 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0059bac7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bac8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 0059bacd
    CMP EAX,0x5                         ; 0059bad0
    JNZ 0x0059b9b4                      ; 0059bad3
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    MOV EBP,dword ptr [ESP + 0x58]      ; 0059bad9
    PUSH EBP                            ; 0059badd
    MOV EAX,dword ptr [ESP + 0x58]      ; 0059bade
    PUSH EAX                            ; 0059bae2
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059bae3
    PUSH EDX                            ; 0059bae7
    PUSH EDI                            ; 0059bae8
    PUSH EBX                            ; 0059bae9
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 ; 0059baea
        ;   XREF to: 0059a510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, ...)
    INC EDI                             ; 0059baef
    ADD ESP,0x14                        ; 0059baf0
    JMP 0x0059ba9a                      ; 0059baf3
        ;   XREF to: 0059ba9a (UNCONDITIONAL_JUMP)  ; LAB_0059ba9a
    MOV EDI,ESI                         ; 0059baf5
        ;   Label: LAB_0059baf5
    PUSH EDI                            ; 0059baf7
        ;   Label: LAB_0059baf7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059baf8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bafd
    TEST EAX,EAX                        ; 0059bb00
    JL 0x0059bb09                       ; 0059bb02
        ;   XREF to: 0059bb09 (CONDITIONAL_JUMP)  ; LAB_0059bb09
    CMP EAX,0xa                         ; 0059bb04
    JNZ 0x0059baf7                      ; 0059bb07
        ;   XREF to: 0059baf7 (CONDITIONAL_JUMP)  ; LAB_0059baf7
    LEA EAX,[ESP + 0x24]                ; 0059bb09
        ;   Label: LAB_0059bb09
    PUSH EAX                            ; 0059bb0d
    LEA EAX,[ESP + 0x30]                ; 0059bb0e
    PUSH EAX                            ; 0059bb12
    LEA EAX,[ESP + 0x40]                ; 0059bb13
    PUSH EAX                            ; 0059bb17
    LEA EAX,[ESP + 0x3c]                ; 0059bb18
    PUSH EAX                            ; 0059bb1c
    PUSH 0x64e965                       ; 0059bb1d | = "%d,%d,%d,%d\n"
    PUSH ESI                            ; 0059bb22
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bb23
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x18                        ; 0059bb28
    CMP EAX,0x4                         ; 0059bb2b
    JNZ 0x0059b9b4                      ; 0059bb2e
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    MOV dword ptr [ESP + 0x34],0x1      ; 0059bb34
    JMP 0x0059ba67                      ; 0059bb3c
        ;   XREF to: 0059ba67 (UNCONDITIONAL_JUMP)  ; LAB_0059ba67
    MOV EDI,ESI                         ; 0059bb41
        ;   Label: LAB_0059bb41
    PUSH EDI                            ; 0059bb43
        ;   Label: LAB_0059bb43
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059bb44
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bb49
    TEST EAX,EAX                        ; 0059bb4c
    JL 0x0059bb55                       ; 0059bb4e
        ;   XREF to: 0059bb55 (CONDITIONAL_JUMP)  ; LAB_0059bb55
    CMP EAX,0xa                         ; 0059bb50
    JNZ 0x0059bb43                      ; 0059bb53
        ;   XREF to: 0059bb43 (CONDITIONAL_JUMP)  ; LAB_0059bb43
    LEA EAX,[ESP + 0x4c]                ; 0059bb55
        ;   Label: LAB_0059bb55
    PUSH EAX                            ; 0059bb59
    LEA EAX,[ESP + 0x30]                ; 0059bb5a
    PUSH EAX                            ; 0059bb5e
    LEA EAX,[ESP + 0x50]                ; 0059bb5f
    PUSH EAX                            ; 0059bb63
    LEA EAX,[ESP + 0x50]                ; 0059bb64
    PUSH EAX                            ; 0059bb68
    LEA EAX,[ESP + 0x50]                ; 0059bb69
    PUSH EAX                            ; 0059bb6d
    LEA EAX,[ESP + 0x50]                ; 0059bb6e
    PUSH EAX                            ; 0059bb72
    PUSH 0x64e982                       ; 0059bb73 | = "%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0059bb78
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bb79
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x20                        ; 0059bb7e
    CMP EAX,0x6                         ; 0059bb81
    JNZ 0x0059b9b4                      ; 0059bb84
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0059bb8a
    PUSH EBP                            ; 0059bb8e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0059bb8f
    PUSH EAX                            ; 0059bb93
    PUSH 0x1                            ; 0059bb94
    PUSH 0x1                            ; 0059bb96
    PUSH EBX                            ; 0059bb98
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 ; 0059bb99
        ;   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 0059bb9e
    MOV EDX,dword ptr [ESP + 0x44]      ; 0059bba1
    PUSH EDX                            ; 0059bba5
    MOV ECX,dword ptr [ESP + 0x44]      ; 0059bba6
    PUSH ECX                            ; 0059bbaa
    MOV EDI,dword ptr [ESP + 0x44]      ; 0059bbab
    PUSH EDI                            ; 0059bbaf
    PUSH 0x0                            ; 0059bbb0
    PUSH EBX                            ; 0059bbb2
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 ; 0059bbb3
        ;   XREF to: 0059a510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, ...)
    ADD ESP,0x14                        ; 0059bbb8
    MOV EDI,ESI                         ; 0059bbbb
        ;   Label: LAB_0059bbbb
    PUSH EDI                            ; 0059bbbd
        ;   Label: LAB_0059bbbd
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059bbbe
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bbc3
    TEST EAX,EAX                        ; 0059bbc6
    JL 0x0059bbcf                       ; 0059bbc8
        ;   XREF to: 0059bbcf (CONDITIONAL_JUMP)  ; LAB_0059bbcf
    CMP EAX,0xa                         ; 0059bbca
    JNZ 0x0059bbbd                      ; 0059bbcd
        ;   XREF to: 0059bbbd (CONDITIONAL_JUMP)  ; LAB_0059bbbd
    LEA EAX,[EBX + 0x8f5c]              ; 0059bbcf
        ;   Label: LAB_0059bbcf
    PUSH EAX                            ; 0059bbd5
    PUSH 0x64e995                       ; 0059bbd6 | = "%[^\n]\n"
    PUSH ESI                            ; 0059bbdb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bbdc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059bbe1
    CMP EAX,0x1                         ; 0059bbe4
    JNZ 0x0059b9b4                      ; 0059bbe7
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    MOV EDI,ESI                         ; 0059bbed
    PUSH EDI                            ; 0059bbef
        ;   Label: LAB_0059bbef
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059bbf0
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bbf5
    TEST EAX,EAX                        ; 0059bbf8
    JL 0x0059bc01                       ; 0059bbfa
        ;   XREF to: 0059bc01 (CONDITIONAL_JUMP)  ; LAB_0059bc01
    CMP EAX,0xa                         ; 0059bbfc
    JNZ 0x0059bbef                      ; 0059bbff
        ;   XREF to: 0059bbef (CONDITIONAL_JUMP)  ; LAB_0059bbef
    CMP dword ptr [ESP + 0x28],0x3      ; 0059bc01
        ;   Label: LAB_0059bc01
    JL 0x0059bce0                       ; 0059bc06
        ;   XREF to: 0059bce0 (CONDITIONAL_JUMP)  ; LAB_0059bce0
    XOR EDI,EDI                         ; 0059bc0c
    CMP EDI,dword ptr [EBX + 0x7140]    ; 0059bc0e
        ;   Label: LAB_0059bc0e
    JGE 0x0059bd75                      ; 0059bc14
        ;   XREF to: 0059bd75 (CONDITIONAL_JUMP)  ; LAB_0059bd75
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059bc1a
    SUB EAX,EDI                         ; 0059bc21
    LEA EBP,[EBX + 0x7144]              ; 0059bc23
    SHL EAX,0x5                         ; 0059bc29
    ADD EAX,EBP                         ; 0059bc2c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0059bc2e
    LEA EDX,[EAX + 0x48]                ; 0059bc32
    CMP ECX,0x6                         ; 0059bc35
    JGE 0x0059bc8c                      ; 0059bc38
        ;   XREF to: 0059bc8c (CONDITIONAL_JUMP)  ; LAB_0059bc8c
    PUSH EDX                            ; 0059bc3a
    PUSH EAX                            ; 0059bc3b
    PUSH 0x64e99c                       ; 0059bc3c | = "\"%[^\"]\", %d\n"
    PUSH ESI                            ; 0059bc41
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bc42
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0059bc47
    XOR EBP,EBP                         ; 0059bc4a
        ;   Label: LAB_0059bc4a
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059bc4c
        ;   Label: LAB_0059bc4c
    SUB EAX,EDI                         ; 0059bc53
    SHL EAX,0x5                         ; 0059bc55
    LEA EDX,[EBX + EAX*0x1]             ; 0059bc58
    CMP EBP,dword ptr [EDX + 0x718c]    ; 0059bc5b
    JGE 0x0059bca2                      ; 0059bc61
        ;   XREF to: 0059bca2 (CONDITIONAL_JUMP)  ; LAB_0059bca2
    LEA EDX,[EBX + 0x7144]              ; 0059bc63
    ADD EAX,EDX                         ; 0059bc69
    LEA EDX,[EBP*0x4 + 0x0]             ; 0059bc6b
    ADD EAX,0x4c                        ; 0059bc72
    ADD EAX,EDX                         ; 0059bc75
    PUSH EAX                            ; 0059bc77
    PUSH 0x64e9ba                       ; 0059bc78 | = "%d\n"
    PUSH ESI                            ; 0059bc7d
    INC EBP                             ; 0059bc7e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bc7f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059bc84
    JMP 0x0059bc4c                      ; 0059bc87
        ;   XREF to: 0059bc4c (UNCONDITIONAL_JUMP)  ; LAB_0059bc4c
    INC EDI                             ; 0059bc89
        ;   Label: LAB_0059bc89
    JMP 0x0059bc0e                      ; 0059bc8a
        ;   XREF to: 0059bc0e (UNCONDITIONAL_JUMP)  ; LAB_0059bc0e
    PUSH EDX                            ; 0059bc8c
        ;   Label: LAB_0059bc8c
    LEA EDX,[EAX + 0x5c]                ; 0059bc8d
    PUSH EDX                            ; 0059bc90
    PUSH EAX                            ; 0059bc91
    PUSH 0x64e9a9                       ; 0059bc92 | = "\"%[^\"]\", %d, %d\n"
    PUSH ESI                            ; 0059bc97
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bc98
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0059bc9d
    JMP 0x0059bc4a                      ; 0059bca0
        ;   XREF to: 0059bc4a (UNCONDITIONAL_JUMP)  ; LAB_0059bc4a
    XOR EBP,EBP                         ; 0059bca2
        ;   Label: LAB_0059bca2
    CMP EBP,dword ptr [EBX]             ; 0059bca4
        ;   Label: LAB_0059bca4
    JGE 0x0059bc89                      ; 0059bca6
        ;   XREF to: 0059bc89 (CONDITIONAL_JUMP)  ; LAB_0059bc89
    LEA EDX,[EDI*0x4 + 0x0]             ; 0059bca8
    SUB EDX,EDI                         ; 0059bcaf
    LEA EAX,[EBX + 0x7144]              ; 0059bcb1
    SHL EDX,0x5                         ; 0059bcb7
    ADD EAX,EDX                         ; 0059bcba
    LEA ECX,[EAX + 0x34]                ; 0059bcbc
    LEA EDX,[EBP*0x4 + 0x0]             ; 0059bcbf
    ADD ECX,EDX                         ; 0059bcc6
    ADD EAX,0x20                        ; 0059bcc8
    PUSH ECX                            ; 0059bccb
    ADD EAX,EDX                         ; 0059bccc
    PUSH EAX                            ; 0059bcce
    PUSH 0x64e9be                       ; 0059bccf | = "%d,%d\n"
    PUSH ESI                            ; 0059bcd4
    INC EBP                             ; 0059bcd5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bcd6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0059bcdb
    JMP 0x0059bca4                      ; 0059bcde
        ;   XREF to: 0059bca4 (UNCONDITIONAL_JUMP)  ; LAB_0059bca4
    XOR EDI,EDI                         ; 0059bce0
        ;   Label: LAB_0059bce0
    CMP EDI,dword ptr [EBX + 0x7140]    ; 0059bce2
        ;   Label: LAB_0059bce2
    JGE 0x0059bd75                      ; 0059bce8
        ;   XREF to: 0059bd75 (CONDITIONAL_JUMP)  ; LAB_0059bd75
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059bcee
    SUB EAX,EDI                         ; 0059bcf5
    LEA EDX,[EBX + 0x7144]              ; 0059bcf7
    SHL EAX,0x5                         ; 0059bcfd
    ADD EAX,EDX                         ; 0059bd00
    LEA EDX,[EAX + 0x48]                ; 0059bd02
    PUSH EDX                            ; 0059bd05
    LEA EDX,[EAX + 0x34]                ; 0059bd06
    PUSH EDX                            ; 0059bd09
    LEA EDX,[EAX + 0x20]                ; 0059bd0a
    PUSH EDX                            ; 0059bd0d
    PUSH EAX                            ; 0059bd0e
    PUSH 0x64e9c5                       ; 0059bd0f | = "\"%[^\"]\",%d,%d,%d\n"
    PUSH ESI                            ; 0059bd14
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bd15
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x18                        ; 0059bd1a
    CMP EAX,0x4                         ; 0059bd1d
    JNZ 0x0059b9b4                      ; 0059bd20
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    XOR EBP,EBP                         ; 0059bd26
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059bd28
        ;   Label: LAB_0059bd28
    SUB EAX,EDI                         ; 0059bd2f
    SHL EAX,0x5                         ; 0059bd31
    LEA EDX,[EBX + EAX*0x1]             ; 0059bd34
    CMP EBP,dword ptr [EDX + 0x718c]    ; 0059bd37
    JGE 0x0059bd6f                      ; 0059bd3d
        ;   XREF to: 0059bd6f (CONDITIONAL_JUMP)  ; LAB_0059bd6f
    LEA EDX,[EBX + 0x7144]              ; 0059bd3f
    ADD EDX,EAX                         ; 0059bd45
    LEA EAX,[EBP*0x4 + 0x0]             ; 0059bd47
    ADD EDX,0x4c                        ; 0059bd4e
    ADD EAX,EDX                         ; 0059bd51
    PUSH EAX                            ; 0059bd53
    PUSH 0x64e9d7                       ; 0059bd54 | = "%d\n"
    PUSH ESI                            ; 0059bd59
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bd5a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059bd5f
    CMP EAX,0x1                         ; 0059bd62
    JNZ 0x0059b9b4                      ; 0059bd65
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    ADD EBP,EAX                         ; 0059bd6b
    JMP 0x0059bd28                      ; 0059bd6d
        ;   XREF to: 0059bd28 (UNCONDITIONAL_JUMP)  ; LAB_0059bd28
    INC EDI                             ; 0059bd6f
        ;   Label: LAB_0059bd6f
    JMP 0x0059bce2                      ; 0059bd70
        ;   XREF to: 0059bce2 (UNCONDITIONAL_JUMP)  ; LAB_0059bce2
    MOV EDI,ESI                         ; 0059bd75
        ;   Label: LAB_0059bd75
    PUSH EDI                            ; 0059bd77
        ;   Label: LAB_0059bd77
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059bd78
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bd7d
    TEST EAX,EAX                        ; 0059bd80
    JL 0x0059bd89                       ; 0059bd82
        ;   XREF to: 0059bd89 (CONDITIONAL_JUMP)  ; LAB_0059bd89
    CMP EAX,0xa                         ; 0059bd84
    JNZ 0x0059bd77                      ; 0059bd87
        ;   XREF to: 0059bd77 (CONDITIONAL_JUMP)  ; LAB_0059bd77
    XOR EAX,EAX                         ; 0059bd89
        ;   Label: LAB_0059bd89
    MOV dword ptr [ESP + 0x6c],EAX      ; 0059bd8b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0059bd8f
        ;   Label: LAB_0059bd8f
    CMP EAX,dword ptr [EBX]             ; 0059bd93
    JGE 0x0059be5b                      ; 0059bd95
        ;   XREF to: 0059be5b (CONDITIONAL_JUMP)  ; LAB_0059be5b
    XOR ECX,ECX                         ; 0059bd9b
    MOV dword ptr [ESP + 0x74],ECX      ; 0059bd9d
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0059bda1
        ;   Label: LAB_0059bda1
    SHL EDI,0x2                         ; 0059bda5
    ADD EDI,EBX                         ; 0059bda8
    MOV EAX,dword ptr [ESP + 0x74]      ; 0059bdaa
    CMP EAX,dword ptr [EDI + 0x2c]      ; 0059bdae
    JGE 0x0059be49                      ; 0059bdb1
        ;   XREF to: 0059be49 (CONDITIONAL_JUMP)  ; LAB_0059be49
    MOV EDX,EAX                         ; 0059bdb7
    SHL EAX,0x2                         ; 0059bdb9
    SUB EAX,EDX                         ; 0059bdbc
    SHL EAX,0x2                         ; 0059bdbe
    ADD EAX,EDX                         ; 0059bdc1
    MOV EBP,dword ptr [EDI + 0x40]      ; 0059bdc3
    SHL EAX,0x2                         ; 0059bdc6
    ADD EBP,EAX                         ; 0059bdc9
    LEA EAX,[ESP + 0x5c]                ; 0059bdcb
    PUSH EAX                            ; 0059bdcf
    PUSH 0x64e9db                       ; 0059bdd0 | = "%d\n"
    PUSH ESI                            ; 0059bdd5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bdd6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059bddb
    CMP EAX,0x1                         ; 0059bdde
    JNZ 0x0059b9b4                      ; 0059bde1
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    MOV AL,byte ptr [ESP + 0x5c]        ; 0059bde7
    XOR EDI,EDI                         ; 0059bdeb
    MOV byte ptr [EBP],AL               ; 0059bded
    XOR EAX,EAX                         ; 0059bdf0
        ;   Label: LAB_0059bdf0
    MOV AL,byte ptr [EBP]               ; 0059bdf2
    CMP EDI,EAX                         ; 0059bdf5
    JGE 0x0059be52                      ; 0059bdf7
        ;   XREF to: 0059be52 (CONDITIONAL_JUMP)  ; LAB_0059be52
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059bdf9
    SUB EAX,EDI                         ; 0059be00
    LEA EDX,[EBP + 0x10]                ; 0059be02
    SHL EAX,0x2                         ; 0059be05
    ADD EAX,EDX                         ; 0059be08
    LEA EDX,[EAX + 0x8]                 ; 0059be0a
    PUSH EDX                            ; 0059be0d
    LEA EDX,[EAX + 0x4]                 ; 0059be0e
    PUSH EDX                            ; 0059be11
    PUSH EAX                            ; 0059be12
    LEA EDX,[EBP + 0x4]                 ; 0059be13
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059be16
    ADD EAX,EDX                         ; 0059be1d
    PUSH EAX                            ; 0059be1f
    LEA EAX,[ESP + 0x70]                ; 0059be20
    PUSH EAX                            ; 0059be24
    PUSH 0x64e9df                       ; 0059be25 | = "%d,%f,%f,%f,%f\n"
    PUSH ESI                            ; 0059be2a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059be2b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 0059be30
    CMP EAX,0x5                         ; 0059be33
    JNZ 0x0059b9b4                      ; 0059be36
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    LEA EDX,[EDI + EBP*0x1]             ; 0059be3c
    MOV AL,byte ptr [ESP + 0x60]        ; 0059be3f
    INC EDI                             ; 0059be43
    MOV byte ptr [EDX + 0x1],AL         ; 0059be44
    JMP 0x0059bdf0                      ; 0059be47
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_JUMP)  ; LAB_0059bdf0
    INC dword ptr [ESP + 0x6c]          ; 0059be49
        ;   Label: LAB_0059be49
    JMP 0x0059bd8f                      ; 0059be4d
        ;   XREF to: 0059bd8f (UNCONDITIONAL_JUMP)  ; LAB_0059bd8f
    INC dword ptr [ESP + 0x74]          ; 0059be52
        ;   Label: LAB_0059be52
    JMP 0x0059bda1                      ; 0059be56
        ;   XREF to: 0059bda1 (UNCONDITIONAL_JUMP)  ; LAB_0059bda1
    MOV EDI,ESI                         ; 0059be5b
        ;   Label: LAB_0059be5b
    PUSH EDI                            ; 0059be5d
        ;   Label: LAB_0059be5d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059be5e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059be63
    TEST EAX,EAX                        ; 0059be66
    JL 0x0059be6f                       ; 0059be68
        ;   XREF to: 0059be6f (CONDITIONAL_JUMP)  ; LAB_0059be6f
    CMP EAX,0xa                         ; 0059be6a
    JNZ 0x0059be5d                      ; 0059be6d
        ;   XREF to: 0059be5d (CONDITIONAL_JUMP)  ; LAB_0059be5d
    XOR ECX,ECX                         ; 0059be6f
        ;   Label: LAB_0059be6f
    MOV dword ptr [ESP + 0x7c],ECX      ; 0059be71
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059be75
        ;   Label: LAB_0059be75
    CMP EAX,dword ptr [EBX]             ; 0059be79
    JGE 0x0059bf56                      ; 0059be7b
        ;   XREF to: 0059bf56 (CONDITIONAL_JUMP)  ; LAB_0059bf56
    XOR EDI,EDI                         ; 0059be81
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0059be83
        ;   Label: LAB_0059be83
    SHL EBP,0x2                         ; 0059be87
    ADD EBP,EBX                         ; 0059be8a
    MOV EAX,dword ptr [EBP + 0x54]      ; 0059be8c
    ADD EAX,dword ptr [EBP + 0x68]      ; 0059be8f
    CMP EDI,EAX                         ; 0059be92
    JGE 0x0059bf4d                      ; 0059be94
        ;   XREF to: 0059bf4d (CONDITIONAL_JUMP)  ; LAB_0059bf4d
    LEA EAX,[EDI*0x8 + 0x0]             ; 0059be9a
    LEA EDX,[EDI + EAX*0x1]             ; 0059bea1
    MOV EAX,dword ptr [EBP + 0x7c]      ; 0059bea4
    ADD EDX,EDX                         ; 0059bea7
    ADD EAX,EDX                         ; 0059bea9
    MOV dword ptr [ESP + 0x70],EAX      ; 0059beab
    LEA EAX,[ESP + 0x8]                 ; 0059beaf
    PUSH EAX                            ; 0059beb3
    LEA EAX,[ESP + 0x18]                ; 0059beb4
    PUSH EAX                            ; 0059beb8
    LEA EAX,[ESP + 0x28]                ; 0059beb9
    PUSH EAX                            ; 0059bebd
    LEA EAX,[ESP + 0x10]                ; 0059bebe
    PUSH EAX                            ; 0059bec2
    LEA EAX,[ESP + 0x20]                ; 0059bec3
    PUSH EAX                            ; 0059bec7
    LEA EAX,[ESP + 0x30]                ; 0059bec8
    PUSH EAX                            ; 0059becc
    LEA EAX,[ESP + 0x18]                ; 0059becd
    PUSH EAX                            ; 0059bed1
    LEA EAX,[ESP + 0x28]                ; 0059bed2
    PUSH EAX                            ; 0059bed6
    LEA EAX,[ESP + 0x38]                ; 0059bed7
    PUSH EAX                            ; 0059bedb
    LEA EAX,[ESP + 0x88]                ; 0059bedc
    PUSH EAX                            ; 0059bee3
    PUSH 0x64e9ef                       ; 0059bee4 | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0059bee9
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059beea
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x30                        ; 0059beef
    CMP EAX,0xa                         ; 0059bef2
    JNZ 0x0059b9b4                      ; 0059bef5
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059befb
    MOV EDX,dword ptr [EBP + 0x90]      ; 0059bf02
    ADD EDX,EAX                         ; 0059bf08
    MOV EAX,dword ptr [ESP + 0x64]      ; 0059bf0a
    MOV dword ptr [EDX],EAX             ; 0059bf0e
    XOR EAX,EAX                         ; 0059bf10
    MOV EDX,dword ptr [ESP + 0x70]      ; 0059bf12
        ;   Label: LAB_0059bf12
    LEA EBP,[EAX + EAX*0x1]             ; 0059bf16
    ADD EBP,EDX                         ; 0059bf19
    MOV CX,word ptr [ESP + EAX*0x4 + 0x18] ; 0059bf1b
    MOV word ptr [EBP],CX               ; 0059bf20
    MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0059bf24
    SAR ECX,0x8                         ; 0059bf28
    MOV dword ptr [ESP + 0x68],ECX      ; 0059bf2b
    MOV ECX,dword ptr [ESP + 0x68]      ; 0059bf2f
    MOV word ptr [EBP + 0x6],CX         ; 0059bf33
    MOV EDX,dword ptr [ESP + EAX*0x4]   ; 0059bf37
    SAR EDX,0x8                         ; 0059bf3a
    INC EAX                             ; 0059bf3d
    MOV word ptr [EBP + 0xc],DX         ; 0059bf3e
    CMP EAX,0x3                         ; 0059bf42
    JL 0x0059bf12                       ; 0059bf45
        ;   XREF to: 0059bf12 (CONDITIONAL_JUMP)  ; LAB_0059bf12
    INC EDI                             ; 0059bf47
    JMP 0x0059be83                      ; 0059bf48
        ;   XREF to: 0059be83 (UNCONDITIONAL_JUMP)  ; LAB_0059be83
    INC dword ptr [ESP + 0x7c]          ; 0059bf4d
        ;   Label: LAB_0059bf4d
    JMP 0x0059be75                      ; 0059bf51
        ;   XREF to: 0059be75 (UNCONDITIONAL_JUMP)  ; LAB_0059be75
    MOV EDI,ESI                         ; 0059bf56
        ;   Label: LAB_0059bf56
    PUSH EDI                            ; 0059bf58
        ;   Label: LAB_0059bf58
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059bf59
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bf5e
    TEST EAX,EAX                        ; 0059bf61
    JL 0x0059bf6a                       ; 0059bf63
        ;   XREF to: 0059bf6a (CONDITIONAL_JUMP)  ; LAB_0059bf6a
    CMP EAX,0xa                         ; 0059bf65
    JNZ 0x0059bf58                      ; 0059bf68
        ;   XREF to: 0059bf58 (CONDITIONAL_JUMP)  ; LAB_0059bf58
    XOR EBP,EBP                         ; 0059bf6a
        ;   Label: LAB_0059bf6a
    CMP EBP,dword ptr [EBX]             ; 0059bf6c
        ;   Label: LAB_0059bf6c
    JGE 0x0059bfae                      ; 0059bf6e
        ;   XREF to: 0059bfae (CONDITIONAL_JUMP)  ; LAB_0059bfae
    XOR EDI,EDI                         ; 0059bf70
    LEA EAX,[EBP*0x4 + 0x0]             ; 0059bf72
        ;   Label: LAB_0059bf72
    ADD EAX,EBX                         ; 0059bf79
    CMP EDI,dword ptr [EAX + 0x68]      ; 0059bf7b
    JGE 0x0059bfab                      ; 0059bf7e
        ;   XREF to: 0059bfab (CONDITIONAL_JUMP)  ; LAB_0059bfab
    LEA EDX,[EDI*0x4 + 0x0]             ; 0059bf80
    MOV EAX,dword ptr [EAX + 0xa4]      ; 0059bf87
    ADD EAX,EDX                         ; 0059bf8d
    PUSH EAX                            ; 0059bf8f
    PUSH 0x64ea0e                       ; 0059bf90 | = "%d\n"
    PUSH ESI                            ; 0059bf95
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059bf96
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059bf9b
    CMP EAX,0x1                         ; 0059bf9e
    JNZ 0x0059b9b4                      ; 0059bfa1
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    ADD EDI,EAX                         ; 0059bfa7
    JMP 0x0059bf72                      ; 0059bfa9
        ;   XREF to: 0059bf72 (UNCONDITIONAL_JUMP)  ; LAB_0059bf72
    INC EBP                             ; 0059bfab
        ;   Label: LAB_0059bfab
    JMP 0x0059bf6c                      ; 0059bfac
        ;   XREF to: 0059bf6c (UNCONDITIONAL_JUMP)  ; LAB_0059bf6c
    MOV EDI,ESI                         ; 0059bfae
        ;   Label: LAB_0059bfae
    PUSH EDI                            ; 0059bfb0
        ;   Label: LAB_0059bfb0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059bfb1
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059bfb6
    TEST EAX,EAX                        ; 0059bfb9
    JL 0x0059bfc2                       ; 0059bfbb
        ;   XREF to: 0059bfc2 (CONDITIONAL_JUMP)  ; LAB_0059bfc2
    CMP EAX,0xa                         ; 0059bfbd
    JNZ 0x0059bfb0                      ; 0059bfc0
        ;   XREF to: 0059bfb0 (CONDITIONAL_JUMP)  ; LAB_0059bfb0
    XOR EBP,EBP                         ; 0059bfc2
        ;   Label: LAB_0059bfc2
    CMP EBP,dword ptr [EBX + 0xb8]      ; 0059bfc4
        ;   Label: LAB_0059bfc4
    JGE 0x0059c030                      ; 0059bfca
        ;   XREF to: 0059c030 (CONDITIONAL_JUMP)  ; LAB_0059c030
    XOR EDI,EDI                         ; 0059bfcc
    MOV dword ptr [ESP + 0x78],EDI      ; 0059bfce
    MOV EAX,dword ptr [ESP + 0x78]      ; 0059bfd2
        ;   Label: LAB_0059bfd2
    CMP EAX,dword ptr [EBX + 0xbc]      ; 0059bfd6
    JGE 0x0059c02d                      ; 0059bfdc
        ;   XREF to: 0059c02d (CONDITIONAL_JUMP)  ; LAB_0059c02d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0059bfde
    SUB EAX,EBP                         ; 0059bfe5
    SHL EAX,0x7                         ; 0059bfe7
    MOV EDI,EAX                         ; 0059bfea
    SHL EAX,0x4                         ; 0059bfec
    LEA EDX,[EBX + 0xc0]                ; 0059bfef
    SUB EAX,EDI                         ; 0059bff5
    LEA EDI,[EDX + EAX*0x1]             ; 0059bff7
    MOV EDX,dword ptr [ESP + 0x78]      ; 0059bffa
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059bffe
    ADD EAX,EDX                         ; 0059c005
    SHL EAX,0x3                         ; 0059c007
    ADD EAX,EDI                         ; 0059c00a
    ADD EAX,0x8                         ; 0059c00c
    PUSH EAX                            ; 0059c00f
    PUSH 0x64ea12                       ; 0059c010 | = "%[^\n]\n"
    PUSH ESI                            ; 0059c015
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059c016
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059c01b
    CMP EAX,0x1                         ; 0059c01e
    JNZ 0x0059b9b4                      ; 0059c021
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    ADD dword ptr [ESP + 0x78],EAX      ; 0059c027
    JMP 0x0059bfd2                      ; 0059c02b
        ;   XREF to: 0059bfd2 (UNCONDITIONAL_JUMP)  ; LAB_0059bfd2
    INC EBP                             ; 0059c02d
        ;   Label: LAB_0059c02d
    JMP 0x0059bfc4                      ; 0059c02e
        ;   XREF to: 0059bfc4 (UNCONDITIONAL_JUMP)  ; LAB_0059bfc4
    MOV EDI,ESI                         ; 0059c030
        ;   Label: LAB_0059c030
    PUSH EDI                            ; 0059c032
        ;   Label: LAB_0059c032
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059c033
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059c038
    TEST EAX,EAX                        ; 0059c03b
    JL 0x0059c044                       ; 0059c03d
        ;   XREF to: 0059c044 (CONDITIONAL_JUMP)  ; LAB_0059c044
    CMP EAX,0xa                         ; 0059c03f
    JNZ 0x0059c032                      ; 0059c042
        ;   XREF to: 0059c032 (CONDITIONAL_JUMP)  ; LAB_0059c032
    XOR EDI,EDI                         ; 0059c044
        ;   Label: LAB_0059c044
    CMP EDI,dword ptr [ESP + 0x2c]      ; 0059c046
        ;   Label: LAB_0059c046
    JGE 0x0059c083                      ; 0059c04a
        ;   XREF to: 0059c083 (CONDITIONAL_JUMP)  ; LAB_0059c083
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059c04c
    SUB EAX,EDI                         ; 0059c053
    LEA EDX,[EBX + 0x7c90]              ; 0059c055
    SHL EAX,0x2                         ; 0059c05b
    ADD EAX,EDX                         ; 0059c05e
    LEA EDX,[EAX + 0x8]                 ; 0059c060
    PUSH EDX                            ; 0059c063
    LEA EDX,[EAX + 0x4]                 ; 0059c064
    PUSH EDX                            ; 0059c067
    PUSH EAX                            ; 0059c068
    PUSH 0x64ea19                       ; 0059c069 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0059c06e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059c06f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0059c074
    CMP EAX,0x3                         ; 0059c077
    JNZ 0x0059b9b4                      ; 0059c07a
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    INC EDI                             ; 0059c080
    JMP 0x0059c046                      ; 0059c081
        ;   XREF to: 0059c046 (UNCONDITIONAL_JUMP)  ; LAB_0059c046
    CMP dword ptr [ESP + 0x28],0x2      ; 0059c083
        ;   Label: LAB_0059c083
    JL 0x0059c158                       ; 0059c088
        ;   XREF to: 0059c158 (CONDITIONAL_JUMP)  ; LAB_0059c158
    MOV EDI,ESI                         ; 0059c08e
    PUSH EDI                            ; 0059c090
        ;   Label: LAB_0059c090
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059c091
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059c096
    TEST EAX,EAX                        ; 0059c099
    JL 0x0059c0a2                       ; 0059c09b
        ;   XREF to: 0059c0a2 (CONDITIONAL_JUMP)  ; LAB_0059c0a2
    CMP EAX,0xa                         ; 0059c09d
    JNZ 0x0059c090                      ; 0059c0a0
        ;   XREF to: 0059c090 (CONDITIONAL_JUMP)  ; LAB_0059c090
    LEA EAX,[EBX + 0x7c8c]              ; 0059c0a2
        ;   Label: LAB_0059c0a2
    PUSH EAX                            ; 0059c0a8
    LEA EAX,[EBX + 0x7c88]              ; 0059c0a9
    PUSH EAX                            ; 0059c0af
    LEA EAX,[EBX + 0x7c84]              ; 0059c0b0
    PUSH EAX                            ; 0059c0b6
    PUSH 0x64ea23                       ; 0059c0b7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0059c0bc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059c0bd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0059c0c2
    CMP EAX,0x3                         ; 0059c0c5
    JNZ 0x0059b9b4                      ; 0059c0c8
        ;   XREF to: 0059b9b4 (CONDITIONAL_JUMP)  ; LAB_0059b9b4
    CMP dword ptr [ESP + 0x28],0x4      ; 0059c0ce
        ;   Label: LAB_0059c0ce
    JL 0x0059c17f                       ; 0059c0d3
        ;   XREF to: 0059c17f (CONDITIONAL_JUMP)  ; LAB_0059c17f
    MOV EDI,ESI                         ; 0059c0d9
    PUSH EDI                            ; 0059c0db
        ;   Label: LAB_0059c0db
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059c0dc
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059c0e1
    TEST EAX,EAX                        ; 0059c0e4
    JL 0x0059c0ed                       ; 0059c0e6
        ;   XREF to: 0059c0ed (CONDITIONAL_JUMP)  ; LAB_0059c0ed
    CMP EAX,0xa                         ; 0059c0e8
    JNZ 0x0059c0db                      ; 0059c0eb
        ;   XREF to: 0059c0db (CONDITIONAL_JUMP)  ; LAB_0059c0db
    LEA EAX,[EBX + 0x8148]              ; 0059c0ed
        ;   Label: LAB_0059c0ed
    PUSH EAX                            ; 0059c0f3
    LEA EAX,[EBX + 0x8144]              ; 0059c0f4
    PUSH EAX                            ; 0059c0fa
    LEA EAX,[EBX + 0x8140]              ; 0059c0fb
    PUSH EAX                            ; 0059c101
    PUSH 0x64ea2d                       ; 0059c102 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0059c107
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059c108
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0059c10d
    CMP dword ptr [ESP + 0x28],0x7      ; 0059c110
        ;   Label: LAB_0059c110
    JL 0x0059c19c                       ; 0059c115
        ;   XREF to: 0059c19c (CONDITIONAL_JUMP)  ; LAB_0059c19c
    MOV EDI,ESI                         ; 0059c11b
    PUSH EDI                            ; 0059c11d
        ;   Label: LAB_0059c11d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059c11e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0059c123
    TEST EAX,EAX                        ; 0059c126
    JL 0x0059c12f                       ; 0059c128
        ;   XREF to: 0059c12f (CONDITIONAL_JUMP)  ; LAB_0059c12f
    CMP EAX,0xa                         ; 0059c12a
    JNZ 0x0059c11d                      ; 0059c12d
        ;   XREF to: 0059c11d (CONDITIONAL_JUMP)  ; LAB_0059c11d
    XOR EDI,EDI                         ; 0059c12f
        ;   Label: LAB_0059c12f
    CMP EDI,dword ptr [ESP + 0x2c]      ; 0059c131
        ;   Label: LAB_0059c131
    JGE 0x0059c19c                      ; 0059c135
        ;   XREF to: 0059c19c (CONDITIONAL_JUMP)  ; LAB_0059c19c
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059c137
    LEA EDX,[EBX + 0x8c3c]              ; 0059c13e
    ADD EAX,EDX                         ; 0059c144
    PUSH EAX                            ; 0059c146
    PUSH 0x64ea37                       ; 0059c147 | = "%d\n"
    PUSH ESI                            ; 0059c14c
    INC EDI                             ; 0059c14d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059c14e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0059c153
    JMP 0x0059c131                      ; 0059c156
        ;   XREF to: 0059c131 (UNCONDITIONAL_JUMP)  ; LAB_0059c131
    MOV dword ptr [EBX + 0x7c8c],0x3f800000 ; 0059c158
        ;   Label: LAB_0059c158
    MOV EAX,dword ptr [EBX + 0x7c8c]    ; 0059c162
    MOV dword ptr [EBX + 0x7c88],EAX    ; 0059c168
    MOV EAX,dword ptr [EBX + 0x7c88]    ; 0059c16e
    MOV dword ptr [EBX + 0x7c84],EAX    ; 0059c174
    JMP 0x0059c0ce                      ; 0059c17a
        ;   XREF to: 0059c0ce (UNCONDITIONAL_JUMP)  ; LAB_0059c0ce
    LEA EAX,[EBX + 0x8140]              ; 0059c17f
        ;   Label: LAB_0059c17f
    MOV dword ptr [EAX + 0x8],0x0       ; 0059c185
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059c18c
    MOV dword ptr [EAX + 0x4],EDX       ; 0059c18f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059c192
    MOV dword ptr [EAX],EDX             ; 0059c195
    JMP 0x0059c110                      ; 0059c197
        ;   XREF to: 0059c110 (UNCONDITIONAL_JUMP)  ; LAB_0059c110
    CMP dword ptr [ESP + 0x28],0x7      ; 0059c19c
        ;   Label: LAB_0059c19c
    JGE 0x0059c1ac                      ; 0059c1a1
        ;   XREF to: 0059c1ac (CONDITIONAL_JUMP)  ; LAB_0059c1ac
    PUSH EBX                            ; 0059c1a3
    CALL core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 ; 0059c1a4
        ;   XREF to: 0059d460 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059c1a9
    TEST byte ptr [ESI + 0xc],0x20      ; 0059c1ac
        ;   Label: LAB_0059c1ac
    JNZ 0x0059c1bd                      ; 0059c1b0
        ;   XREF to: 0059c1bd (CONDITIONAL_JUMP)  ; LAB_0059c1bd
    ADD ESP,0x80                        ; 0059c1b2
    POP EBP                             ; 0059c1b8
    POP EDI                             ; 0059c1b9
    POP ESI                             ; 0059c1ba
    POP EBX                             ; 0059c1bb
    RET                                 ; 0059c1bc
    MOV EBX,0x64ea3b                    ; 0059c1bd | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059c1bd
    MOV ESI,0x596                       ; 0059c1c2
    PUSH 0x64ea50                       ; 0059c1c7 | = "CDeformableModel::loadStream - error ..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0059c1cc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0059c1d2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059c1d8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059c1dd
    ADD ESP,0x80                        ; 0059c1e0
    POP EBP                             ; 0059c1e6
    POP EDI                             ; 0059c1e7
    POP ESI                             ; 0059c1e8
    POP EBX                             ; 0059c1e9
    RET                                 ; 0059c1ea

