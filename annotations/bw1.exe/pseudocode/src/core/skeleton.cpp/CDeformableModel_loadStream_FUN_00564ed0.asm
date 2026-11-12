; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00564ed0(CDeformableModel *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined2       Stack[-0x70]:2  local_70
; undefined        Stack[-0x6c]:1  local_6c
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
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_load_FUN_00564e40 at 00564e66
;
; Referenced Globals:
;   undefined4 DAT_005f2057
;   TerminatedCString s_core_skeleton_cpp_005f205b
;   TerminatedCString s_Deformable_model_file_is_005f2070
;   TerminatedCString s_core_skeleton_cpp_005f2091
;   TerminatedCString s_Can_t_load_model_of_vers_005f20a6
;   TerminatedCString s_d_d_d_d_d_005f20f1
;   TerminatedCString s_d_d_d_d_005f2101
;   TerminatedCString s_d_d_d_d_d_005f210e
;   TerminatedCString s_d_d_d_d_d_d_005f211e
;   TerminatedCString s_anon_005f2131
;   TerminatedCString s_d_005f2138
;   TerminatedCString s_d_d_005f2145
;   undefined4 DAT_005f2156
;   TerminatedCString s_d_d_005f215a
;   TerminatedCString s_d_d_d_005f2161
;   ... and 15 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20
;   core_skeleton.cpp_FUN_005639e0
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564ed0
        ;   Label: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0
    PUSH ESI                            ; 00564ed1
    PUSH EDI                            ; 00564ed2
    PUSH EBP                            ; 00564ed3
    SUB ESP,0x7c                        ; 00564ed4
    MOV EBX,dword ptr [ESP + 0x90]      ; 00564ed7
    MOV ESI,dword ptr [ESP + 0x94]      ; 00564ede
    MOV EDI,ESI                         ; 00564ee5
    PUSH EDI                            ; 00564ee7
        ;   Label: LAB_00564ee7
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00564ee8
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00564eed
    TEST EAX,EAX                        ; 00564ef0
    JL 0x00564ef9                       ; 00564ef2
        ;   XREF to: 00564ef9 (CONDITIONAL_JUMP)  ; LAB_00564ef9
    CMP EAX,0xa                         ; 00564ef4
    JNZ 0x00564ee7                      ; 00564ef7
        ;   XREF to: 00564ee7 (CONDITIONAL_JUMP)  ; LAB_00564ee7
    LEA EAX,[ESP + 0x28]                ; 00564ef9
        ;   Label: LAB_00564ef9
    PUSH EAX                            ; 00564efd
    PUSH 0x5f2057                       ; 00564efe | DAT_005f2057
    PUSH ESI                            ; 00564f03
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00564f04
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00564f09
    CMP EAX,0x1                         ; 00564f0c
    JZ 0x00564f34                       ; 00564f0f
        ;   XREF to: 00564f34 (CONDITIONAL_JUMP)  ; LAB_00564f34
    MOV EDX,0x5f205b                    ; 00564f11 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00564f11
    MOV ECX,0x4e0                       ; 00564f16
    PUSH 0x5f2070                       ; 00564f1b | = "Deformable model file is corrupt"
    MOV dword ptr [0x01d1d400],EDX      ; 00564f20 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00564f26 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00564f2c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00564f31
    MOV EAX,dword ptr [ESP + 0x28]      ; 00564f34
        ;   Label: LAB_00564f34
    MOV EDI,dword ptr [0x00623228]      ; 00564f38 | DAT_00623228
    CMP EAX,EDI                         ; 00564f3e
    JLE 0x00564f6a                      ; 00564f40
        ;   XREF to: 00564f6a (CONDITIONAL_JUMP)  ; LAB_00564f6a
    PUSH EDI                            ; 00564f42
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00564f43
    PUSH ECX                            ; 00564f47
    MOV EBP,0x5f2091                    ; 00564f48 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x4e3                       ; 00564f4d
    PUSH 0x5f20a6                       ; 00564f52 | = "Can't load model of version %d, this ..."
    MOV dword ptr [0x01d1d400],EBP      ; 00564f57 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00564f5d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00564f62
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00564f67
    MOV EDI,dword ptr [ESP + 0x28]      ; 00564f6a
        ;   Label: LAB_00564f6a
    CMP EDI,0x3                         ; 00564f6e
    JL 0x0056509e                       ; 00564f71
        ;   XREF to: 0056509e (CONDITIONAL_JUMP)  ; LAB_0056509e
    CMP EDI,0x5                         ; 00564f77
    JL 0x00565052                       ; 00564f7a
        ;   XREF to: 00565052 (CONDITIONAL_JUMP)  ; LAB_00565052
    MOV EDI,ESI                         ; 00564f80
    PUSH EDI                            ; 00564f82
        ;   Label: LAB_00564f82
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00564f83
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00564f88
    TEST EAX,EAX                        ; 00564f8b
    JL 0x00564f94                       ; 00564f8d
        ;   XREF to: 00564f94 (CONDITIONAL_JUMP)  ; LAB_00564f94
    CMP EAX,0xa                         ; 00564f8f
    JNZ 0x00564f82                      ; 00564f92
        ;   XREF to: 00564f82 (CONDITIONAL_JUMP)  ; LAB_00564f82
    LEA EAX,[ESP + 0x24]                ; 00564f94
        ;   Label: LAB_00564f94
    PUSH EAX                            ; 00564f98
    LEA EAX,[ESP + 0x30]                ; 00564f99
    PUSH EAX                            ; 00564f9d
    LEA EAX,[ESP + 0x40]                ; 00564f9e
    PUSH EAX                            ; 00564fa2
    LEA EAX,[ESP + 0x40]                ; 00564fa3
    PUSH EAX                            ; 00564fa7
    LEA EAX,[ESP + 0x40]                ; 00564fa8
    PUSH EAX                            ; 00564fac
    PUSH 0x5f20f1                       ; 00564fad | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00564fb2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00564fb3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 00564fb8
    CMP EAX,0x5                         ; 00564fbb
    JNZ 0x00564f11                      ; 00564fbe
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    MOV EDX,dword ptr [ESP + 0x24]      ; 00564fc4
        ;   Label: LAB_00564fc4
    PUSH EDX                            ; 00564fc8
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00564fc9
    PUSH ECX                            ; 00564fcd
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00564fce
    PUSH EDI                            ; 00564fd2
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00564fd3
    PUSH EBP                            ; 00564fd7
    PUSH EBX                            ; 00564fd8
    MOV EDI,ESI                         ; 00564fd9
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0 ; 00564fdb
        ;   XREF to: 005638c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 00564fe0
    PUSH EDI                            ; 00564fe3
        ;   Label: LAB_00564fe3
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00564fe4
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00564fe9
    TEST EAX,EAX                        ; 00564fec
    JL 0x00564ff5                       ; 00564fee
        ;   XREF to: 00564ff5 (CONDITIONAL_JUMP)  ; LAB_00564ff5
    CMP EAX,0xa                         ; 00564ff0
    JNZ 0x00564fe3                      ; 00564ff3
        ;   XREF to: 00564fe3 (CONDITIONAL_JUMP)  ; LAB_00564fe3
    XOR EDI,EDI                         ; 00564ff5
        ;   Label: LAB_00564ff5
    CMP EDI,dword ptr [EBX]             ; 00564ff7
        ;   Label: LAB_00564ff7
    JGE 0x00565118                      ; 00564ff9
        ;   XREF to: 00565118 (CONDITIONAL_JUMP)  ; LAB_00565118
    LEA EDX,[EDI*0x8 + 0x0]             ; 00564fff
    LEA EAX,[EBX + 0x4]                 ; 00565006
    ADD EAX,EDX                         ; 00565009
    LEA EDX,[EAX + 0x4]                 ; 0056500b
    PUSH EDX                            ; 0056500e
    PUSH EAX                            ; 0056500f
    LEA EAX,[ESP + 0x60]                ; 00565010
    PUSH EAX                            ; 00565014
    LEA EAX,[ESP + 0x60]                ; 00565015
    PUSH EAX                            ; 00565019
    LEA EAX,[ESP + 0x60]                ; 0056501a
    PUSH EAX                            ; 0056501e
    PUSH 0x5f210e                       ; 0056501f | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00565024
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565025
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0056502a
    CMP EAX,0x5                         ; 0056502d
    JNZ 0x00564f11                      ; 00565030
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    MOV EBP,dword ptr [ESP + 0x58]      ; 00565036
    PUSH EBP                            ; 0056503a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056503b
    PUSH EAX                            ; 0056503f
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565040
    PUSH EDX                            ; 00565044
    PUSH EDI                            ; 00565045
    PUSH EBX                            ; 00565046
    CALL core_skeleton.cpp_FUN_005639e0 ; 00565047
        ;   XREF to: 005639e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005639e0()
    INC EDI                             ; 0056504c
    ADD ESP,0x14                        ; 0056504d
    JMP 0x00564ff7                      ; 00565050
        ;   XREF to: 00564ff7 (UNCONDITIONAL_JUMP)  ; LAB_00564ff7
    MOV EDI,ESI                         ; 00565052
        ;   Label: LAB_00565052
    PUSH EDI                            ; 00565054
        ;   Label: LAB_00565054
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00565055
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0056505a
    TEST EAX,EAX                        ; 0056505d
    JL 0x00565066                       ; 0056505f
        ;   XREF to: 00565066 (CONDITIONAL_JUMP)  ; LAB_00565066
    CMP EAX,0xa                         ; 00565061
    JNZ 0x00565054                      ; 00565064
        ;   XREF to: 00565054 (CONDITIONAL_JUMP)  ; LAB_00565054
    LEA EAX,[ESP + 0x24]                ; 00565066
        ;   Label: LAB_00565066
    PUSH EAX                            ; 0056506a
    LEA EAX,[ESP + 0x30]                ; 0056506b
    PUSH EAX                            ; 0056506f
    LEA EAX,[ESP + 0x40]                ; 00565070
    PUSH EAX                            ; 00565074
    LEA EAX,[ESP + 0x3c]                ; 00565075
    PUSH EAX                            ; 00565079
    PUSH 0x5f2101                       ; 0056507a | = "%d,%d,%d,%d\n"
    PUSH ESI                            ; 0056507f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565080
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00565085
    CMP EAX,0x4                         ; 00565088
    JNZ 0x00564f11                      ; 0056508b
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    MOV dword ptr [ESP + 0x34],0x1      ; 00565091
    JMP 0x00564fc4                      ; 00565099
        ;   XREF to: 00564fc4 (UNCONDITIONAL_JUMP)  ; LAB_00564fc4
    MOV EDI,ESI                         ; 0056509e
        ;   Label: LAB_0056509e
    PUSH EDI                            ; 005650a0
        ;   Label: LAB_005650a0
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005650a1
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005650a6
    TEST EAX,EAX                        ; 005650a9
    JL 0x005650b2                       ; 005650ab
        ;   XREF to: 005650b2 (CONDITIONAL_JUMP)  ; LAB_005650b2
    CMP EAX,0xa                         ; 005650ad
    JNZ 0x005650a0                      ; 005650b0
        ;   XREF to: 005650a0 (CONDITIONAL_JUMP)  ; LAB_005650a0
    LEA EAX,[ESP + 0x4c]                ; 005650b2
        ;   Label: LAB_005650b2
    PUSH EAX                            ; 005650b6
    LEA EAX,[ESP + 0x30]                ; 005650b7
    PUSH EAX                            ; 005650bb
    LEA EAX,[ESP + 0x50]                ; 005650bc
    PUSH EAX                            ; 005650c0
    LEA EAX,[ESP + 0x50]                ; 005650c1
    PUSH EAX                            ; 005650c5
    LEA EAX,[ESP + 0x50]                ; 005650c6
    PUSH EAX                            ; 005650ca
    LEA EAX,[ESP + 0x50]                ; 005650cb
    PUSH EAX                            ; 005650cf
    PUSH 0x5f211e                       ; 005650d0 | = "%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005650d5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005650d6
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 005650db
    CMP EAX,0x6                         ; 005650de
    JNZ 0x00564f11                      ; 005650e1
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005650e7
    PUSH EBP                            ; 005650eb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005650ec
    PUSH EAX                            ; 005650f0
    PUSH 0x1                            ; 005650f1
    PUSH 0x1                            ; 005650f3
    PUSH EBX                            ; 005650f5
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0 ; 005650f6
        ;   XREF to: 005638c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 005650fb
    MOV EDX,dword ptr [ESP + 0x44]      ; 005650fe
    PUSH EDX                            ; 00565102
    MOV ECX,dword ptr [ESP + 0x44]      ; 00565103
    PUSH ECX                            ; 00565107
    MOV EDI,dword ptr [ESP + 0x44]      ; 00565108
    PUSH EDI                            ; 0056510c
    PUSH 0x0                            ; 0056510d
    PUSH EBX                            ; 0056510f
    CALL core_skeleton.cpp_FUN_005639e0 ; 00565110
        ;   XREF to: 005639e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005639e0()
    ADD ESP,0x14                        ; 00565115
    MOV EDI,ESI                         ; 00565118
        ;   Label: LAB_00565118
    PUSH EDI                            ; 0056511a
        ;   Label: LAB_0056511a
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056511b
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00565120
    TEST EAX,EAX                        ; 00565123
    JL 0x0056512c                       ; 00565125
        ;   XREF to: 0056512c (CONDITIONAL_JUMP)  ; LAB_0056512c
    CMP EAX,0xa                         ; 00565127
    JNZ 0x0056511a                      ; 0056512a
        ;   XREF to: 0056511a (CONDITIONAL_JUMP)  ; LAB_0056511a
    LEA EAX,[EBX + 0x355c]              ; 0056512c
        ;   Label: LAB_0056512c
    PUSH EAX                            ; 00565132
    PUSH 0x5f2131                       ; 00565133 | = "%[^\n]\n"
    PUSH ESI                            ; 00565138
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565139
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056513e
    CMP EAX,0x1                         ; 00565141
    JNZ 0x00564f11                      ; 00565144
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    MOV EDI,ESI                         ; 0056514a
    PUSH EDI                            ; 0056514c
        ;   Label: LAB_0056514c
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056514d
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00565152
    TEST EAX,EAX                        ; 00565155
    JL 0x0056515e                       ; 00565157
        ;   XREF to: 0056515e (CONDITIONAL_JUMP)  ; LAB_0056515e
    CMP EAX,0xa                         ; 00565159
    JNZ 0x0056514c                      ; 0056515c
        ;   XREF to: 0056514c (CONDITIONAL_JUMP)  ; LAB_0056514c
    CMP dword ptr [ESP + 0x28],0x3      ; 0056515e
        ;   Label: LAB_0056515e
    JL 0x0056523d                       ; 00565163
        ;   XREF to: 0056523d (CONDITIONAL_JUMP)  ; LAB_0056523d
    XOR EDI,EDI                         ; 00565169
    CMP EDI,dword ptr [EBX + 0xc00]     ; 0056516b
        ;   Label: LAB_0056516b
    JGE 0x005652d2                      ; 00565171
        ;   XREF to: 005652d2 (CONDITIONAL_JUMP)  ; LAB_005652d2
    LEA EAX,[EDI*0x4 + 0x0]             ; 00565177
    SUB EAX,EDI                         ; 0056517e
    LEA EBP,[EBX + 0xc04]               ; 00565180
    SHL EAX,0x5                         ; 00565186
    ADD EAX,EBP                         ; 00565189
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056518b
    LEA EDX,[EAX + 0x48]                ; 0056518f
    CMP ECX,0x6                         ; 00565192
    JGE 0x005651e9                      ; 00565195
        ;   XREF to: 005651e9 (CONDITIONAL_JUMP)  ; LAB_005651e9
    PUSH EDX                            ; 00565197
    PUSH EAX                            ; 00565198
    PUSH 0x5f2138                       ; 00565199 | = "\"%[^\"]\", %d\n"
    PUSH ESI                            ; 0056519e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0056519f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005651a4
    XOR EBP,EBP                         ; 005651a7
        ;   Label: LAB_005651a7
    LEA EAX,[EDI*0x4 + 0x0]             ; 005651a9
        ;   Label: LAB_005651a9
    SUB EAX,EDI                         ; 005651b0
    SHL EAX,0x5                         ; 005651b2
    LEA EDX,[EBX + EAX*0x1]             ; 005651b5
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 005651b8
    JGE 0x005651ff                      ; 005651be
        ;   XREF to: 005651ff (CONDITIONAL_JUMP)  ; LAB_005651ff
    LEA EDX,[EBX + 0xc04]               ; 005651c0
    ADD EAX,EDX                         ; 005651c6
    LEA EDX,[EBP*0x4 + 0x0]             ; 005651c8
    ADD EAX,0x4c                        ; 005651cf
    ADD EAX,EDX                         ; 005651d2
    PUSH EAX                            ; 005651d4
    PUSH 0x5f2156                       ; 005651d5 | DAT_005f2156
    PUSH ESI                            ; 005651da
    INC EBP                             ; 005651db
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005651dc
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005651e1
    JMP 0x005651a9                      ; 005651e4
        ;   XREF to: 005651a9 (UNCONDITIONAL_JUMP)  ; LAB_005651a9
    INC EDI                             ; 005651e6
        ;   Label: LAB_005651e6
    JMP 0x0056516b                      ; 005651e7
        ;   XREF to: 0056516b (UNCONDITIONAL_JUMP)  ; LAB_0056516b
    PUSH EDX                            ; 005651e9
        ;   Label: LAB_005651e9
    LEA EDX,[EAX + 0x5c]                ; 005651ea
    PUSH EDX                            ; 005651ed
    PUSH EAX                            ; 005651ee
    PUSH 0x5f2145                       ; 005651ef | = "\"%[^\"]\", %d, %d\n"
    PUSH ESI                            ; 005651f4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005651f5
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 005651fa
    JMP 0x005651a7                      ; 005651fd
        ;   XREF to: 005651a7 (UNCONDITIONAL_JUMP)  ; LAB_005651a7
    XOR EBP,EBP                         ; 005651ff
        ;   Label: LAB_005651ff
    CMP EBP,dword ptr [EBX]             ; 00565201
        ;   Label: LAB_00565201
    JGE 0x005651e6                      ; 00565203
        ;   XREF to: 005651e6 (CONDITIONAL_JUMP)  ; LAB_005651e6
    LEA EDX,[EDI*0x4 + 0x0]             ; 00565205
    SUB EDX,EDI                         ; 0056520c
    LEA EAX,[EBX + 0xc04]               ; 0056520e
    SHL EDX,0x5                         ; 00565214
    ADD EAX,EDX                         ; 00565217
    LEA ECX,[EAX + 0x34]                ; 00565219
    LEA EDX,[EBP*0x4 + 0x0]             ; 0056521c
    ADD ECX,EDX                         ; 00565223
    ADD EAX,0x20                        ; 00565225
    PUSH ECX                            ; 00565228
    ADD EAX,EDX                         ; 00565229
    PUSH EAX                            ; 0056522b
    PUSH 0x5f215a                       ; 0056522c | = "%d,%d\n"
    PUSH ESI                            ; 00565231
    INC EBP                             ; 00565232
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565233
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00565238
    JMP 0x00565201                      ; 0056523b
        ;   XREF to: 00565201 (UNCONDITIONAL_JUMP)  ; LAB_00565201
    XOR EDI,EDI                         ; 0056523d
        ;   Label: LAB_0056523d
    CMP EDI,dword ptr [EBX + 0xc00]     ; 0056523f
        ;   Label: LAB_0056523f
    JGE 0x005652d2                      ; 00565245
        ;   XREF to: 005652d2 (CONDITIONAL_JUMP)  ; LAB_005652d2
    LEA EAX,[EDI*0x4 + 0x0]             ; 0056524b
    SUB EAX,EDI                         ; 00565252
    LEA EDX,[EBX + 0xc04]               ; 00565254
    SHL EAX,0x5                         ; 0056525a
    ADD EAX,EDX                         ; 0056525d
    LEA EDX,[EAX + 0x48]                ; 0056525f
    PUSH EDX                            ; 00565262
    LEA EDX,[EAX + 0x34]                ; 00565263
    PUSH EDX                            ; 00565266
    LEA EDX,[EAX + 0x20]                ; 00565267
    PUSH EDX                            ; 0056526a
    PUSH EAX                            ; 0056526b
    PUSH 0x5f2161                       ; 0056526c | = "\"%[^\"]\",%d,%d,%d\n"
    PUSH ESI                            ; 00565271
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565272
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00565277
    CMP EAX,0x4                         ; 0056527a
    JNZ 0x00564f11                      ; 0056527d
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    XOR EBP,EBP                         ; 00565283
    LEA EAX,[EDI*0x4 + 0x0]             ; 00565285
        ;   Label: LAB_00565285
    SUB EAX,EDI                         ; 0056528c
    SHL EAX,0x5                         ; 0056528e
    LEA EDX,[EBX + EAX*0x1]             ; 00565291
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00565294
    JGE 0x005652cc                      ; 0056529a
        ;   XREF to: 005652cc (CONDITIONAL_JUMP)  ; LAB_005652cc
    LEA EDX,[EBX + 0xc04]               ; 0056529c
    ADD EDX,EAX                         ; 005652a2
    LEA EAX,[EBP*0x4 + 0x0]             ; 005652a4
    ADD EDX,0x4c                        ; 005652ab
    ADD EAX,EDX                         ; 005652ae
    PUSH EAX                            ; 005652b0
    PUSH 0x5f2173                       ; 005652b1 | DAT_005f2173
    PUSH ESI                            ; 005652b6
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005652b7
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005652bc
    CMP EAX,0x1                         ; 005652bf
    JNZ 0x00564f11                      ; 005652c2
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    ADD EBP,EAX                         ; 005652c8
    JMP 0x00565285                      ; 005652ca
        ;   XREF to: 00565285 (UNCONDITIONAL_JUMP)  ; LAB_00565285
    INC EDI                             ; 005652cc
        ;   Label: LAB_005652cc
    JMP 0x0056523f                      ; 005652cd
        ;   XREF to: 0056523f (UNCONDITIONAL_JUMP)  ; LAB_0056523f
    MOV EDI,ESI                         ; 005652d2
        ;   Label: LAB_005652d2
    PUSH EDI                            ; 005652d4
        ;   Label: LAB_005652d4
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005652d5
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005652da
    TEST EAX,EAX                        ; 005652dd
    JL 0x005652e6                       ; 005652df
        ;   XREF to: 005652e6 (CONDITIONAL_JUMP)  ; LAB_005652e6
    CMP EAX,0xa                         ; 005652e1
    JNZ 0x005652d4                      ; 005652e4
        ;   XREF to: 005652d4 (CONDITIONAL_JUMP)  ; LAB_005652d4
    XOR EAX,EAX                         ; 005652e6
        ;   Label: LAB_005652e6
    MOV dword ptr [ESP + 0x6c],EAX      ; 005652e8
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005652ec
        ;   Label: LAB_005652ec
    CMP EAX,dword ptr [EBX]             ; 005652f0
    JGE 0x005653b8                      ; 005652f2
        ;   XREF to: 005653b8 (CONDITIONAL_JUMP)  ; LAB_005653b8
    XOR ECX,ECX                         ; 005652f8
    MOV dword ptr [ESP + 0x74],ECX      ; 005652fa
    MOV EDI,dword ptr [ESP + 0x6c]      ; 005652fe
        ;   Label: LAB_005652fe
    SHL EDI,0x2                         ; 00565302
    ADD EDI,EBX                         ; 00565305
    MOV EAX,dword ptr [ESP + 0x74]      ; 00565307
    CMP EAX,dword ptr [EDI + 0x2c]      ; 0056530b
    JGE 0x005653a6                      ; 0056530e
        ;   XREF to: 005653a6 (CONDITIONAL_JUMP)  ; LAB_005653a6
    MOV EDX,EAX                         ; 00565314
    SHL EAX,0x2                         ; 00565316
    SUB EAX,EDX                         ; 00565319
    SHL EAX,0x2                         ; 0056531b
    ADD EAX,EDX                         ; 0056531e
    MOV EBP,dword ptr [EDI + 0x40]      ; 00565320
    SHL EAX,0x2                         ; 00565323
    ADD EBP,EAX                         ; 00565326
    LEA EAX,[ESP + 0x5c]                ; 00565328
    PUSH EAX                            ; 0056532c
    PUSH 0x5f2177                       ; 0056532d | DAT_005f2177
    PUSH ESI                            ; 00565332
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565333
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00565338
    CMP EAX,0x1                         ; 0056533b
    JNZ 0x00564f11                      ; 0056533e
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    MOV AL,byte ptr [ESP + 0x5c]        ; 00565344
    XOR EDI,EDI                         ; 00565348
    MOV byte ptr [EBP],AL               ; 0056534a
    XOR EAX,EAX                         ; 0056534d
        ;   Label: LAB_0056534d
    MOV AL,byte ptr [EBP]               ; 0056534f
    CMP EDI,EAX                         ; 00565352
    JGE 0x005653af                      ; 00565354
        ;   XREF to: 005653af (CONDITIONAL_JUMP)  ; LAB_005653af
    LEA EAX,[EDI*0x4 + 0x0]             ; 00565356
    SUB EAX,EDI                         ; 0056535d
    LEA EDX,[EBP + 0x10]                ; 0056535f
    SHL EAX,0x2                         ; 00565362
    ADD EAX,EDX                         ; 00565365
    LEA EDX,[EAX + 0x8]                 ; 00565367
    PUSH EDX                            ; 0056536a
    LEA EDX,[EAX + 0x4]                 ; 0056536b
    PUSH EDX                            ; 0056536e
    PUSH EAX                            ; 0056536f
    LEA EDX,[EBP + 0x4]                 ; 00565370
    LEA EAX,[EDI*0x4 + 0x0]             ; 00565373
    ADD EAX,EDX                         ; 0056537a
    PUSH EAX                            ; 0056537c
    LEA EAX,[ESP + 0x70]                ; 0056537d
    PUSH EAX                            ; 00565381
    PUSH 0x5f217b                       ; 00565382 | = "%d,%f,%f,%f,%f\n"
    PUSH ESI                            ; 00565387
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565388
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0056538d
    CMP EAX,0x5                         ; 00565390
    JNZ 0x00564f11                      ; 00565393
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    LEA EDX,[EDI + EBP*0x1]             ; 00565399
    MOV AL,byte ptr [ESP + 0x60]        ; 0056539c
    INC EDI                             ; 005653a0
    MOV byte ptr [EDX + 0x1],AL         ; 005653a1
    JMP 0x0056534d                      ; 005653a4
        ;   XREF to: 0056534d (UNCONDITIONAL_JUMP)  ; LAB_0056534d
    INC dword ptr [ESP + 0x6c]          ; 005653a6
        ;   Label: LAB_005653a6
    JMP 0x005652ec                      ; 005653aa
        ;   XREF to: 005652ec (UNCONDITIONAL_JUMP)  ; LAB_005652ec
    INC dword ptr [ESP + 0x74]          ; 005653af
        ;   Label: LAB_005653af
    JMP 0x005652fe                      ; 005653b3
        ;   XREF to: 005652fe (UNCONDITIONAL_JUMP)  ; LAB_005652fe
    MOV EDI,ESI                         ; 005653b8
        ;   Label: LAB_005653b8
    PUSH EDI                            ; 005653ba
        ;   Label: LAB_005653ba
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005653bb
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005653c0
    TEST EAX,EAX                        ; 005653c3
    JL 0x005653cc                       ; 005653c5
        ;   XREF to: 005653cc (CONDITIONAL_JUMP)  ; LAB_005653cc
    CMP EAX,0xa                         ; 005653c7
    JNZ 0x005653ba                      ; 005653ca
        ;   XREF to: 005653ba (CONDITIONAL_JUMP)  ; LAB_005653ba
    XOR ECX,ECX                         ; 005653cc
        ;   Label: LAB_005653cc
    MOV dword ptr [ESP + 0x78],ECX      ; 005653ce
    MOV EAX,dword ptr [ESP + 0x78]      ; 005653d2
        ;   Label: LAB_005653d2
    CMP EAX,dword ptr [EBX]             ; 005653d6
    JGE 0x005654b3                      ; 005653d8
        ;   XREF to: 005654b3 (CONDITIONAL_JUMP)  ; LAB_005654b3
    XOR EDI,EDI                         ; 005653de
    MOV EBP,dword ptr [ESP + 0x78]      ; 005653e0
        ;   Label: LAB_005653e0
    SHL EBP,0x2                         ; 005653e4
    ADD EBP,EBX                         ; 005653e7
    MOV EAX,dword ptr [EBP + 0x54]      ; 005653e9
    ADD EAX,dword ptr [EBP + 0x68]      ; 005653ec
    CMP EDI,EAX                         ; 005653ef
    JGE 0x005654aa                      ; 005653f1
        ;   XREF to: 005654aa (CONDITIONAL_JUMP)  ; LAB_005654aa
    LEA EAX,[EDI*0x8 + 0x0]             ; 005653f7
    LEA EDX,[EDI + EAX*0x1]             ; 005653fe
    MOV EAX,dword ptr [EBP + 0x7c]      ; 00565401
    ADD EDX,EDX                         ; 00565404
    ADD EAX,EDX                         ; 00565406
    MOV dword ptr [ESP + 0x70],EAX      ; 00565408
    LEA EAX,[ESP + 0x8]                 ; 0056540c
    PUSH EAX                            ; 00565410
    LEA EAX,[ESP + 0x18]                ; 00565411
    PUSH EAX                            ; 00565415
    LEA EAX,[ESP + 0x28]                ; 00565416
    PUSH EAX                            ; 0056541a
    LEA EAX,[ESP + 0x10]                ; 0056541b
    PUSH EAX                            ; 0056541f
    LEA EAX,[ESP + 0x20]                ; 00565420
    PUSH EAX                            ; 00565424
    LEA EAX,[ESP + 0x30]                ; 00565425
    PUSH EAX                            ; 00565429
    LEA EAX,[ESP + 0x18]                ; 0056542a
    PUSH EAX                            ; 0056542e
    LEA EAX,[ESP + 0x28]                ; 0056542f
    PUSH EAX                            ; 00565433
    LEA EAX,[ESP + 0x38]                ; 00565434
    PUSH EAX                            ; 00565438
    LEA EAX,[ESP + 0x88]                ; 00565439
    PUSH EAX                            ; 00565440
    PUSH 0x5f218b                       ; 00565441 | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00565446
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565447
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0056544c
    CMP EAX,0xa                         ; 0056544f
    JNZ 0x00564f11                      ; 00565452
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    LEA EAX,[EDI*0x4 + 0x0]             ; 00565458
    MOV EDX,dword ptr [EBP + 0x90]      ; 0056545f
    ADD EDX,EAX                         ; 00565465
    MOV EAX,dword ptr [ESP + 0x64]      ; 00565467
    MOV dword ptr [EDX],EAX             ; 0056546b
    XOR EAX,EAX                         ; 0056546d
    MOV EDX,dword ptr [ESP + 0x70]      ; 0056546f
        ;   Label: LAB_0056546f
    LEA EBP,[EAX + EAX*0x1]             ; 00565473
    ADD EBP,EDX                         ; 00565476
    MOV CX,word ptr [ESP + EAX*0x4 + 0x18] ; 00565478
    MOV word ptr [EBP],CX               ; 0056547d
    MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc] ; 00565481
    SAR ECX,0x8                         ; 00565485
    MOV dword ptr [ESP + 0x68],ECX      ; 00565488
    MOV ECX,dword ptr [ESP + 0x68]      ; 0056548c
    MOV word ptr [EBP + 0x6],CX         ; 00565490
    MOV EDX,dword ptr [ESP + EAX*0x4]   ; 00565494
    SAR EDX,0x8                         ; 00565497
    INC EAX                             ; 0056549a
    MOV word ptr [EBP + 0xc],DX         ; 0056549b
    CMP EAX,0x3                         ; 0056549f
    JL 0x0056546f                       ; 005654a2
        ;   XREF to: 0056546f (CONDITIONAL_JUMP)  ; LAB_0056546f
    INC EDI                             ; 005654a4
    JMP 0x005653e0                      ; 005654a5
        ;   XREF to: 005653e0 (UNCONDITIONAL_JUMP)  ; LAB_005653e0
    INC dword ptr [ESP + 0x78]          ; 005654aa
        ;   Label: LAB_005654aa
    JMP 0x005653d2                      ; 005654ae
        ;   XREF to: 005653d2 (UNCONDITIONAL_JUMP)  ; LAB_005653d2
    MOV EDI,ESI                         ; 005654b3
        ;   Label: LAB_005654b3
    PUSH EDI                            ; 005654b5
        ;   Label: LAB_005654b5
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005654b6
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005654bb
    TEST EAX,EAX                        ; 005654be
    JL 0x005654c7                       ; 005654c0
        ;   XREF to: 005654c7 (CONDITIONAL_JUMP)  ; LAB_005654c7
    CMP EAX,0xa                         ; 005654c2
    JNZ 0x005654b5                      ; 005654c5
        ;   XREF to: 005654b5 (CONDITIONAL_JUMP)  ; LAB_005654b5
    XOR EBP,EBP                         ; 005654c7
        ;   Label: LAB_005654c7
    CMP EBP,dword ptr [EBX]             ; 005654c9
        ;   Label: LAB_005654c9
    JGE 0x0056550b                      ; 005654cb
        ;   XREF to: 0056550b (CONDITIONAL_JUMP)  ; LAB_0056550b
    XOR EDI,EDI                         ; 005654cd
    LEA EAX,[EBP*0x4 + 0x0]             ; 005654cf
        ;   Label: LAB_005654cf
    ADD EAX,EBX                         ; 005654d6
    CMP EDI,dword ptr [EAX + 0x68]      ; 005654d8
    JGE 0x00565508                      ; 005654db
        ;   XREF to: 00565508 (CONDITIONAL_JUMP)  ; LAB_00565508
    LEA EDX,[EDI*0x4 + 0x0]             ; 005654dd
    MOV EAX,dword ptr [EAX + 0xa4]      ; 005654e4
    ADD EAX,EDX                         ; 005654ea
    PUSH EAX                            ; 005654ec
    PUSH 0x5f21aa                       ; 005654ed | DAT_005f21aa
    PUSH ESI                            ; 005654f2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005654f3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005654f8
    CMP EAX,0x1                         ; 005654fb
    JNZ 0x00564f11                      ; 005654fe
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    ADD EDI,EAX                         ; 00565504
    JMP 0x005654cf                      ; 00565506
        ;   XREF to: 005654cf (UNCONDITIONAL_JUMP)  ; LAB_005654cf
    INC EBP                             ; 00565508
        ;   Label: LAB_00565508
    JMP 0x005654c9                      ; 00565509
        ;   XREF to: 005654c9 (UNCONDITIONAL_JUMP)  ; LAB_005654c9
    MOV EDI,ESI                         ; 0056550b
        ;   Label: LAB_0056550b
    PUSH EDI                            ; 0056550d
        ;   Label: LAB_0056550d
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056550e
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00565513
    TEST EAX,EAX                        ; 00565516
    JL 0x0056551f                       ; 00565518
        ;   XREF to: 0056551f (CONDITIONAL_JUMP)  ; LAB_0056551f
    CMP EAX,0xa                         ; 0056551a
    JNZ 0x0056550d                      ; 0056551d
        ;   XREF to: 0056550d (CONDITIONAL_JUMP)  ; LAB_0056550d
    XOR EDI,EDI                         ; 0056551f
        ;   Label: LAB_0056551f
    CMP EDI,dword ptr [EBX + 0xb8]      ; 00565521
        ;   Label: LAB_00565521
    JGE 0x00565577                      ; 00565527
        ;   XREF to: 00565577 (CONDITIONAL_JUMP)  ; LAB_00565577
    XOR EBP,EBP                         ; 00565529
    CMP EBP,dword ptr [EBX + 0xbc]      ; 0056552b
        ;   Label: LAB_0056552b
    JGE 0x00565574                      ; 00565531
        ;   XREF to: 00565574 (CONDITIONAL_JUMP)  ; LAB_00565574
    LEA EAX,[EDI*0x8 + 0x0]             ; 00565533
    ADD EAX,EDI                         ; 0056553a
    LEA EDX,[EBX + 0xc0]                ; 0056553c
    SHL EAX,0x6                         ; 00565542
    ADD EDX,EAX                         ; 00565545
    LEA EAX,[EBP*0x8 + 0x0]             ; 00565547
    ADD EAX,EBP                         ; 0056554e
    SHL EAX,0x3                         ; 00565550
    ADD EAX,EDX                         ; 00565553
    ADD EAX,0x8                         ; 00565555
    PUSH EAX                            ; 00565558
    PUSH 0x5f21ae                       ; 00565559 | = "%[^\n]\n"
    PUSH ESI                            ; 0056555e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0056555f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00565564
    CMP EAX,0x1                         ; 00565567
    JNZ 0x00564f11                      ; 0056556a
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    ADD EBP,EAX                         ; 00565570
    JMP 0x0056552b                      ; 00565572
        ;   XREF to: 0056552b (UNCONDITIONAL_JUMP)  ; LAB_0056552b
    INC EDI                             ; 00565574
        ;   Label: LAB_00565574
    JMP 0x00565521                      ; 00565575
        ;   XREF to: 00565521 (UNCONDITIONAL_JUMP)  ; LAB_00565521
    MOV EDI,ESI                         ; 00565577
        ;   Label: LAB_00565577
    PUSH EDI                            ; 00565579
        ;   Label: LAB_00565579
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0056557a
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0056557f
    TEST EAX,EAX                        ; 00565582
    JL 0x0056558b                       ; 00565584
        ;   XREF to: 0056558b (CONDITIONAL_JUMP)  ; LAB_0056558b
    CMP EAX,0xa                         ; 00565586
    JNZ 0x00565579                      ; 00565589
        ;   XREF to: 00565579 (CONDITIONAL_JUMP)  ; LAB_00565579
    XOR EDI,EDI                         ; 0056558b
        ;   Label: LAB_0056558b
    CMP EDI,dword ptr [ESP + 0x2c]      ; 0056558d
        ;   Label: LAB_0056558d
    JGE 0x005655ca                      ; 00565591
        ;   XREF to: 005655ca (CONDITIONAL_JUMP)  ; LAB_005655ca
    LEA EAX,[EDI*0x4 + 0x0]             ; 00565593
    SUB EAX,EDI                         ; 0056559a
    LEA EDX,[EBX + 0x2290]              ; 0056559c
    SHL EAX,0x2                         ; 005655a2
    ADD EAX,EDX                         ; 005655a5
    LEA EDX,[EAX + 0x8]                 ; 005655a7
    PUSH EDX                            ; 005655aa
    LEA EDX,[EAX + 0x4]                 ; 005655ab
    PUSH EDX                            ; 005655ae
    PUSH EAX                            ; 005655af
    PUSH 0x5f21b5                       ; 005655b0 | = "%f,%f,%f\n"
    PUSH ESI                            ; 005655b5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005655b6
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 005655bb
    CMP EAX,0x3                         ; 005655be
    JNZ 0x00564f11                      ; 005655c1
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    INC EDI                             ; 005655c7
    JMP 0x0056558d                      ; 005655c8
        ;   XREF to: 0056558d (UNCONDITIONAL_JUMP)  ; LAB_0056558d
    CMP dword ptr [ESP + 0x28],0x2      ; 005655ca
        ;   Label: LAB_005655ca
    JL 0x0056569f                       ; 005655cf
        ;   XREF to: 0056569f (CONDITIONAL_JUMP)  ; LAB_0056569f
    MOV EDI,ESI                         ; 005655d5
    PUSH EDI                            ; 005655d7
        ;   Label: LAB_005655d7
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005655d8
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 005655dd
    TEST EAX,EAX                        ; 005655e0
    JL 0x005655e9                       ; 005655e2
        ;   XREF to: 005655e9 (CONDITIONAL_JUMP)  ; LAB_005655e9
    CMP EAX,0xa                         ; 005655e4
    JNZ 0x005655d7                      ; 005655e7
        ;   XREF to: 005655d7 (CONDITIONAL_JUMP)  ; LAB_005655d7
    LEA EAX,[EBX + 0x228c]              ; 005655e9
        ;   Label: LAB_005655e9
    PUSH EAX                            ; 005655ef
    LEA EAX,[EBX + 0x2288]              ; 005655f0
    PUSH EAX                            ; 005655f6
    LEA EAX,[EBX + 0x2284]              ; 005655f7
    PUSH EAX                            ; 005655fd
    PUSH 0x5f21bf                       ; 005655fe | = "%f,%f,%f\n"
    PUSH ESI                            ; 00565603
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565604
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00565609
    CMP EAX,0x3                         ; 0056560c
    JNZ 0x00564f11                      ; 0056560f
        ;   XREF to: 00564f11 (CONDITIONAL_JUMP)  ; LAB_00564f11
    CMP dword ptr [ESP + 0x28],0x4      ; 00565615
        ;   Label: LAB_00565615
    JL 0x005656c6                       ; 0056561a
        ;   XREF to: 005656c6 (CONDITIONAL_JUMP)  ; LAB_005656c6
    MOV EDI,ESI                         ; 00565620
    PUSH EDI                            ; 00565622
        ;   Label: LAB_00565622
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00565623
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00565628
    TEST EAX,EAX                        ; 0056562b
    JL 0x00565634                       ; 0056562d
        ;   XREF to: 00565634 (CONDITIONAL_JUMP)  ; LAB_00565634
    CMP EAX,0xa                         ; 0056562f
    JNZ 0x00565622                      ; 00565632
        ;   XREF to: 00565622 (CONDITIONAL_JUMP)  ; LAB_00565622
    LEA EAX,[EBX + 0x2748]              ; 00565634
        ;   Label: LAB_00565634
    PUSH EAX                            ; 0056563a
    LEA EAX,[EBX + 0x2744]              ; 0056563b
    PUSH EAX                            ; 00565641
    LEA EAX,[EBX + 0x2740]              ; 00565642
    PUSH EAX                            ; 00565648
    PUSH 0x5f21c9                       ; 00565649 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0056564e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0056564f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00565654
    CMP dword ptr [ESP + 0x28],0x7      ; 00565657
        ;   Label: LAB_00565657
    JL 0x005656e3                       ; 0056565c
        ;   XREF to: 005656e3 (CONDITIONAL_JUMP)  ; LAB_005656e3
    MOV EDI,ESI                         ; 00565662
    PUSH EDI                            ; 00565664
        ;   Label: LAB_00565664
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00565665
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0056566a
    TEST EAX,EAX                        ; 0056566d
    JL 0x00565676                       ; 0056566f
        ;   XREF to: 00565676 (CONDITIONAL_JUMP)  ; LAB_00565676
    CMP EAX,0xa                         ; 00565671
    JNZ 0x00565664                      ; 00565674
        ;   XREF to: 00565664 (CONDITIONAL_JUMP)  ; LAB_00565664
    XOR EDI,EDI                         ; 00565676
        ;   Label: LAB_00565676
    CMP EDI,dword ptr [ESP + 0x2c]      ; 00565678
        ;   Label: LAB_00565678
    JGE 0x005656e3                      ; 0056567c
        ;   XREF to: 005656e3 (CONDITIONAL_JUMP)  ; LAB_005656e3
    LEA EAX,[EDI*0x4 + 0x0]             ; 0056567e
    LEA EDX,[EBX + 0x323c]              ; 00565685
    ADD EAX,EDX                         ; 0056568b
    PUSH EAX                            ; 0056568d
    PUSH 0x5f21d3                       ; 0056568e | DAT_005f21d3
    PUSH ESI                            ; 00565693
    INC EDI                             ; 00565694
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00565695
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056569a
    JMP 0x00565678                      ; 0056569d
        ;   XREF to: 00565678 (UNCONDITIONAL_JUMP)  ; LAB_00565678
    MOV dword ptr [EBX + 0x228c],0x3f800000 ; 0056569f
        ;   Label: LAB_0056569f
    MOV EAX,dword ptr [EBX + 0x228c]    ; 005656a9
    MOV dword ptr [EBX + 0x2288],EAX    ; 005656af
    MOV EAX,dword ptr [EBX + 0x2288]    ; 005656b5
    MOV dword ptr [EBX + 0x2284],EAX    ; 005656bb
    JMP 0x00565615                      ; 005656c1
        ;   XREF to: 00565615 (UNCONDITIONAL_JUMP)  ; LAB_00565615
    LEA EAX,[EBX + 0x2740]              ; 005656c6
        ;   Label: LAB_005656c6
    MOV dword ptr [EAX + 0x8],0x0       ; 005656cc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005656d3
    MOV dword ptr [EAX + 0x4],EDX       ; 005656d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005656d9
    MOV dword ptr [EAX],EDX             ; 005656dc
    JMP 0x00565657                      ; 005656de
        ;   XREF to: 00565657 (UNCONDITIONAL_JUMP)  ; LAB_00565657
    CMP dword ptr [ESP + 0x28],0x7      ; 005656e3
        ;   Label: LAB_005656e3
    JGE 0x005656f3                      ; 005656e8
        ;   XREF to: 005656f3 (CONDITIONAL_JUMP)  ; LAB_005656f3
    PUSH EBX                            ; 005656ea
    CALL core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 ; 005656eb
        ;   XREF to: 00566a20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005656f0
    TEST byte ptr [ESI + 0xc],0x20      ; 005656f3
        ;   Label: LAB_005656f3
    JNZ 0x00565701                      ; 005656f7
        ;   XREF to: 00565701 (CONDITIONAL_JUMP)  ; LAB_00565701
    ADD ESP,0x7c                        ; 005656f9
    POP EBP                             ; 005656fc
    POP EDI                             ; 005656fd
    POP ESI                             ; 005656fe
    POP EBX                             ; 005656ff
    RET                                 ; 00565700
    MOV EBX,0x5f21d7                    ; 00565701 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00565701
    MOV ESI,0x5af                       ; 00565706
    PUSH 0x5f21ec                       ; 0056570b | = "CDeformableModel::loadStream - error ..."
    MOV dword ptr [0x01d1d400],EBX      ; 00565710 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00565716 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056571c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00565721
    ADD ESP,0x7c                        ; 00565724
    POP EBP                             ; 00565727
    POP EDI                             ; 00565728
    POP ESI                             ; 00565729
    POP EBX                             ; 0056572a
    RET                                 ; 0056572b

