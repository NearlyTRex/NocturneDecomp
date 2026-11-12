; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_0044e010(CKeyFramedModel *this_ptr,_FILE *file)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0 at 0044dd8f
;
; Referenced Globals:
;   undefined4 DAT_005cf66d
;   TerminatedCString s_core_dmodel_cpp_005cf671
;   TerminatedCString s_KFM_file_is_invalid_vers_005cf684
;   TerminatedCString s_core_dmodel_cpp_005cf6a3
;   TerminatedCString s_KFM_file_is_version_d_th_005cf6b6
;   TerminatedCString s_d_d_d_d_d_005cf6f9
;   undefined4 DAT_005cf709
;   undefined4 DAT_005cf70d
;   undefined4 DAT_005cf711
;   undefined4 DAT_005cf715
;   TerminatedCString s_d_d_d_005cf719
;   TerminatedCString s_d_d_005cf723
;   TerminatedCString s_d_d_d_005cf729
;   undefined4 DAT_005cf734
;   TerminatedCString s_core_dmodel_cpp_005cf736
;   ... and 8 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760
;   core_dmodel.cpp_FUN_0044ea80
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e010
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_0044e010
    PUSH ESI                            ; 0044e011
    PUSH EDI                            ; 0044e012
    PUSH EBP                            ; 0044e013
    SUB ESP,0x38                        ; 0044e014
    MOV EBP,dword ptr [ESP + 0x50]      ; 0044e017
    MOV EDX,0xffffffff                  ; 0044e01b
    MOV EBX,0x1                         ; 0044e020
    MOV ESI,EBP                         ; 0044e025
    MOV dword ptr [ESP + 0x4],EDX       ; 0044e027
    PUSH ESI                            ; 0044e02b
        ;   Label: LAB_0044e02b
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e02c
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e031
    TEST EAX,EAX                        ; 0044e034
    JL 0x0044e042                       ; 0044e036
        ;   XREF to: 0044e042 (CONDITIONAL_JUMP)  ; LAB_0044e042
    CMP EAX,0xa                         ; 0044e038
    JNZ 0x0044e02b                      ; 0044e03b
        ;   XREF to: 0044e02b (CONDITIONAL_JUMP)  ; LAB_0044e02b
    DEC EBX                             ; 0044e03d
    TEST EBX,EBX                        ; 0044e03e
    JG 0x0044e02b                       ; 0044e040
        ;   XREF to: 0044e02b (CONDITIONAL_JUMP)  ; LAB_0044e02b
    LEA EAX,[ESP + 0x4]                 ; 0044e042
        ;   Label: LAB_0044e042
    PUSH EAX                            ; 0044e046
    PUSH 0x5cf66d                       ; 0044e047 | DAT_005cf66d
    PUSH EBP                            ; 0044e04c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e04d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e052
    MOV ECX,dword ptr [ESP + 0x4]       ; 0044e055
    CMP ECX,0x5                         ; 0044e059
    JGE 0x0044e082                      ; 0044e05c
        ;   XREF to: 0044e082 (CONDITIONAL_JUMP)  ; LAB_0044e082
    PUSH ECX                            ; 0044e05e
    MOV EBX,0x5cf671                    ; 0044e05f | = "..\\core\\dmodel.cpp"
    MOV ESI,0x128                       ; 0044e064
    PUSH 0x5cf684                       ; 0044e069 | = "KFM file is invalid version %d"
    MOV dword ptr [0x01d046a0],EBX      ; 0044e06e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044e074 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044e07a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0044e07f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044e082
        ;   Label: LAB_0044e082
    CMP EAX,0x8                         ; 0044e086
    JG 0x0044e24d                       ; 0044e089
        ;   XREF to: 0044e24d (CONDITIONAL_JUMP)  ; LAB_0044e24d
    MOV EBX,0x1                         ; 0044e08f
        ;   Label: LAB_0044e08f
    MOV ESI,EBP                         ; 0044e094
    PUSH ESI                            ; 0044e096
        ;   Label: LAB_0044e096
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e097
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e09c
    TEST EAX,EAX                        ; 0044e09f
    JL 0x0044e0ad                       ; 0044e0a1
        ;   XREF to: 0044e0ad (CONDITIONAL_JUMP)  ; LAB_0044e0ad
    CMP EAX,0xa                         ; 0044e0a3
    JNZ 0x0044e096                      ; 0044e0a6
        ;   XREF to: 0044e096 (CONDITIONAL_JUMP)  ; LAB_0044e096
    DEC EBX                             ; 0044e0a8
    TEST EBX,EBX                        ; 0044e0a9
    JG 0x0044e096                       ; 0044e0ab
        ;   XREF to: 0044e096 (CONDITIONAL_JUMP)  ; LAB_0044e096
    LEA EAX,[ESP + 0x18]                ; 0044e0ad
        ;   Label: LAB_0044e0ad
    PUSH EAX                            ; 0044e0b1
    LEA EAX,[ESP + 0x18]                ; 0044e0b2
    PUSH EAX                            ; 0044e0b6
    LEA EAX,[ESP + 0x18]                ; 0044e0b7
    PUSH EAX                            ; 0044e0bb
    LEA EAX,[ESP + 0x18]                ; 0044e0bc
    PUSH EAX                            ; 0044e0c0
    LEA EAX,[ESP + 0x18]                ; 0044e0c1
    PUSH EAX                            ; 0044e0c5
    PUSH 0x5cf6f9                       ; 0044e0c6 | = "%d,%d,%d,%d,%d\n"
    PUSH EBP                            ; 0044e0cb
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e0cc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0044e0d1
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044e0d4
    PUSH ESI                            ; 0044e0d8
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044e0d9
    PUSH EDI                            ; 0044e0dd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044e0de
    PUSH EAX                            ; 0044e0e2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044e0e3
    PUSH EDX                            ; 0044e0e7
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044e0e8
    PUSH ECX                            ; 0044e0ec
    MOV EBX,dword ptr [ESP + 0x60]      ; 0044e0ed
    PUSH EBX                            ; 0044e0f1
    MOV ESI,EBP                         ; 0044e0f2
    CALL core_dmodel.cpp_FUN_0044ea80   ; 0044e0f4
        ;   XREF to: 0044ea80 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044ea80()
    MOV EBX,0x1                         ; 0044e0f9
    ADD ESP,0x18                        ; 0044e0fe
    PUSH ESI                            ; 0044e101
        ;   Label: LAB_0044e101
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e102
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e107
    TEST EAX,EAX                        ; 0044e10a
    JL 0x0044e118                       ; 0044e10c
        ;   XREF to: 0044e118 (CONDITIONAL_JUMP)  ; LAB_0044e118
    CMP EAX,0xa                         ; 0044e10e
    JNZ 0x0044e101                      ; 0044e111
        ;   XREF to: 0044e101 (CONDITIONAL_JUMP)  ; LAB_0044e101
    DEC EBX                             ; 0044e113
    TEST EBX,EBX                        ; 0044e114
    JG 0x0044e101                       ; 0044e116
        ;   XREF to: 0044e101 (CONDITIONAL_JUMP)  ; LAB_0044e101
    MOV EAX,ESP                         ; 0044e118
        ;   Label: LAB_0044e118
    PUSH EAX                            ; 0044e11a
    PUSH 0x5cf709                       ; 0044e11b | DAT_005cf709
    PUSH EBP                            ; 0044e120
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e121
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e126
    CMP dword ptr [ESP + 0x4],0x6       ; 0044e129
    JL 0x0044e278                       ; 0044e12e
        ;   XREF to: 0044e278 (CONDITIONAL_JUMP)  ; LAB_0044e278
    MOV EBX,0x1                         ; 0044e134
    MOV ESI,EBP                         ; 0044e139
    PUSH ESI                            ; 0044e13b
        ;   Label: LAB_0044e13b
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e13c
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e141
    TEST EAX,EAX                        ; 0044e144
    JL 0x0044e152                       ; 0044e146
        ;   XREF to: 0044e152 (CONDITIONAL_JUMP)  ; LAB_0044e152
    CMP EAX,0xa                         ; 0044e148
    JNZ 0x0044e13b                      ; 0044e14b
        ;   XREF to: 0044e13b (CONDITIONAL_JUMP)  ; LAB_0044e13b
    DEC EBX                             ; 0044e14d
    TEST EBX,EBX                        ; 0044e14e
    JG 0x0044e13b                       ; 0044e150
        ;   XREF to: 0044e13b (CONDITIONAL_JUMP)  ; LAB_0044e13b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e152
        ;   Label: LAB_0044e152
    ADD EAX,0x35c                       ; 0044e156
    PUSH EAX                            ; 0044e15b
    PUSH 0x5cf70d                       ; 0044e15c | DAT_005cf70d
    PUSH EBP                            ; 0044e161
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e162
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e167
    CMP dword ptr [ESP + 0x4],0x8       ; 0044e16a
        ;   Label: LAB_0044e16a
    JL 0x0044e28b                       ; 0044e16f
        ;   XREF to: 0044e28b (CONDITIONAL_JUMP)  ; LAB_0044e28b
    MOV EBX,0x1                         ; 0044e175
    MOV ESI,EBP                         ; 0044e17a
    PUSH ESI                            ; 0044e17c
        ;   Label: LAB_0044e17c
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e17d
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e182
    TEST EAX,EAX                        ; 0044e185
    JL 0x0044e193                       ; 0044e187
        ;   XREF to: 0044e193 (CONDITIONAL_JUMP)  ; LAB_0044e193
    CMP EAX,0xa                         ; 0044e189
    JNZ 0x0044e17c                      ; 0044e18c
        ;   XREF to: 0044e17c (CONDITIONAL_JUMP)  ; LAB_0044e17c
    DEC EBX                             ; 0044e18e
    TEST EBX,EBX                        ; 0044e18f
    JG 0x0044e17c                       ; 0044e191
        ;   XREF to: 0044e17c (CONDITIONAL_JUMP)  ; LAB_0044e17c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e193
        ;   Label: LAB_0044e193
    ADD EAX,0x360                       ; 0044e197
    PUSH EAX                            ; 0044e19c
    PUSH 0x5cf711                       ; 0044e19d | DAT_005cf711
    PUSH EBP                            ; 0044e1a2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e1a3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e1a8
    XOR EAX,EAX                         ; 0044e1ab
        ;   Label: LAB_0044e1ab
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e1ad
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044e1b1
    CMP EDX,0x7                         ; 0044e1b5
    JL 0x0044e1eb                       ; 0044e1b8
        ;   XREF to: 0044e1eb (CONDITIONAL_JUMP)  ; LAB_0044e1eb
    MOV EBX,0x1                         ; 0044e1ba
    MOV ESI,EBP                         ; 0044e1bf
    PUSH ESI                            ; 0044e1c1
        ;   Label: LAB_0044e1c1
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e1c2
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e1c7
    TEST EAX,EAX                        ; 0044e1ca
    JL 0x0044e1d8                       ; 0044e1cc
        ;   XREF to: 0044e1d8 (CONDITIONAL_JUMP)  ; LAB_0044e1d8
    CMP EAX,0xa                         ; 0044e1ce
    JNZ 0x0044e1c1                      ; 0044e1d1
        ;   XREF to: 0044e1c1 (CONDITIONAL_JUMP)  ; LAB_0044e1c1
    DEC EBX                             ; 0044e1d3
    TEST EBX,EBX                        ; 0044e1d4
    JG 0x0044e1c1                       ; 0044e1d6
        ;   XREF to: 0044e1c1 (CONDITIONAL_JUMP)  ; LAB_0044e1c1
    LEA EAX,[ESP + 0x1c]                ; 0044e1d8
        ;   Label: LAB_0044e1d8
    PUSH EAX                            ; 0044e1dc
    PUSH 0x5cf715                       ; 0044e1dd | DAT_005cf715
    PUSH EBP                            ; 0044e1e2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e1e3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e1e8
    MOV EBX,0x1                         ; 0044e1eb
        ;   Label: LAB_0044e1eb
    MOV ESI,EBP                         ; 0044e1f0
    PUSH ESI                            ; 0044e1f2
        ;   Label: LAB_0044e1f2
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e1f3
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e1f8
    TEST EAX,EAX                        ; 0044e1fb
    JL 0x0044e209                       ; 0044e1fd
        ;   XREF to: 0044e209 (CONDITIONAL_JUMP)  ; LAB_0044e209
    CMP EAX,0xa                         ; 0044e1ff
    JNZ 0x0044e1f2                      ; 0044e202
        ;   XREF to: 0044e1f2 (CONDITIONAL_JUMP)  ; LAB_0044e1f2
    DEC EBX                             ; 0044e204
    TEST EBX,EBX                        ; 0044e205
    JG 0x0044e1f2                       ; 0044e207
        ;   XREF to: 0044e1f2 (CONDITIONAL_JUMP)  ; LAB_0044e1f2
    XOR ESI,ESI                         ; 0044e209
        ;   Label: LAB_0044e209
    XOR EBX,EBX                         ; 0044e20b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0044e20d
        ;   Label: LAB_0044e20d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e211
    MOV ECX,dword ptr [EDI + 0x100]     ; 0044e215
    MOV EAX,dword ptr [EAX + 0x104]     ; 0044e21b
    IMUL EAX,ECX                        ; 0044e221
    CMP EBX,EAX                         ; 0044e224
    JGE 0x0044e29e                      ; 0044e226
        ;   XREF to: 0044e29e (CONDITIONAL_JUMP)  ; LAB_0044e29e
    MOV EAX,dword ptr [EDI + 0x10c]     ; 0044e228
    ADD EAX,ESI                         ; 0044e22e
    LEA EDI,[EAX + 0x8]                 ; 0044e230
    PUSH EDI                            ; 0044e233
    LEA EDI,[EAX + 0x4]                 ; 0044e234
    PUSH EDI                            ; 0044e237
    PUSH EAX                            ; 0044e238
    PUSH 0x5cf719                       ; 0044e239 | = "%d,%d,%d\n"
    PUSH EBP                            ; 0044e23e
    INC EBX                             ; 0044e23f
    ADD ESI,0xc                         ; 0044e240
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e243
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0044e248
    JMP 0x0044e20d                      ; 0044e24b
        ;   XREF to: 0044e20d (UNCONDITIONAL_JUMP)  ; LAB_0044e20d
    PUSH 0x8                            ; 0044e24d
        ;   Label: LAB_0044e24d
    PUSH EAX                            ; 0044e24f
    MOV EDX,0x5cf6a3                    ; 0044e250 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x12b                       ; 0044e255
    PUSH 0x5cf6b6                       ; 0044e25a | = "KFM file is version %d, this .exe can..."
    MOV dword ptr [0x01d046a0],EDX      ; 0044e25f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0044e265 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044e26b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0044e270
    JMP 0x0044e08f                      ; 0044e273
        ;   XREF to: 0044e08f (UNCONDITIONAL_JUMP)  ; LAB_0044e08f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e278
        ;   Label: LAB_0044e278
    MOV dword ptr [EAX + 0x35c],0x0     ; 0044e27c
    JMP 0x0044e16a                      ; 0044e286
        ;   XREF to: 0044e16a (UNCONDITIONAL_JUMP)  ; LAB_0044e16a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e28b
        ;   Label: LAB_0044e28b
    MOV dword ptr [EAX + 0x360],0x0     ; 0044e28f
    JMP 0x0044e1ab                      ; 0044e299
        ;   XREF to: 0044e1ab (UNCONDITIONAL_JUMP)  ; LAB_0044e1ab
    MOV EBX,0x1                         ; 0044e29e
        ;   Label: LAB_0044e29e
    MOV EDI,EBP                         ; 0044e2a3
    PUSH EDI                            ; 0044e2a5
        ;   Label: LAB_0044e2a5
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e2a6
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e2ab
    TEST EAX,EAX                        ; 0044e2ae
    JL 0x0044e2bc                       ; 0044e2b0
        ;   XREF to: 0044e2bc (CONDITIONAL_JUMP)  ; LAB_0044e2bc
    CMP EAX,0xa                         ; 0044e2b2
    JNZ 0x0044e2a5                      ; 0044e2b5
        ;   XREF to: 0044e2a5 (CONDITIONAL_JUMP)  ; LAB_0044e2a5
    DEC EBX                             ; 0044e2b7
    TEST EBX,EBX                        ; 0044e2b8
    JG 0x0044e2a5                       ; 0044e2ba
        ;   XREF to: 0044e2a5 (CONDITIONAL_JUMP)  ; LAB_0044e2a5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e2bc
        ;   Label: LAB_0044e2bc
    XOR EBX,EBX                         ; 0044e2c0
    MOV ESI,dword ptr [EAX + 0x110]     ; 0044e2c2
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044e2c8
    TEST ESI,ESI                        ; 0044e2cc
    JLE 0x0044e3a0                      ; 0044e2ce
        ;   XREF to: 0044e3a0 (CONDITIONAL_JUMP)  ; LAB_0044e3a0
    MOV dword ptr [ESP + 0x28],EBX      ; 0044e2d4
    MOV dword ptr [ESP + 0x24],EBX      ; 0044e2d8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e2dc
        ;   Label: LAB_0044e2dc
    MOV EBX,dword ptr [ESP + 0x28]      ; 0044e2e0
    MOV EAX,dword ptr [EAX + 0x114]     ; 0044e2e4
    ADD EBX,EAX                         ; 0044e2ea
    MOV dword ptr [ESP + 0x34],EBX      ; 0044e2ec
    LEA EAX,[EBX + 0x4]                 ; 0044e2f0
    PUSH EAX                            ; 0044e2f3
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044e2f4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0044e2f8
    MOV EAX,dword ptr [EAX + 0x118]     ; 0044e2fc
    ADD EAX,ESI                         ; 0044e302
    PUSH EAX                            ; 0044e304
    PUSH 0x5cf723                       ; 0044e305 | = "%d,%d"
    PUSH EBP                            ; 0044e30a
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e30b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0044e310
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044e313
    MOV EDI,dword ptr [EAX + 0x4]       ; 0044e317
    XOR EBX,EBX                         ; 0044e31a
    TEST EDI,EDI                        ; 0044e31c
    JLE 0x0044e361                      ; 0044e31e
        ;   XREF to: 0044e361 (CONDITIONAL_JUMP)  ; LAB_0044e361
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044e320
    MOV EDI,dword ptr [ESP + 0x34]      ; 0044e324
    ADD EAX,0x18                        ; 0044e328
    ADD ESI,0x1c                        ; 0044e32b
    ADD EDI,0x20                        ; 0044e32e
    MOV dword ptr [ESP + 0x30],EAX      ; 0044e331
    IMUL EAX,EBX,0xc                    ; 0044e335
        ;   Label: LAB_0044e335
    PUSH EDI                            ; 0044e338
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044e339
    PUSH ESI                            ; 0044e33d
    ADD EAX,EDX                         ; 0044e33e
    PUSH EAX                            ; 0044e340
    PUSH 0x5cf729                       ; 0044e341 | = ", %d,%d,%d"
    PUSH EBP                            ; 0044e346
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e347
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0044e34c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044e34f
    ADD EDI,0xc                         ; 0044e353
    INC EBX                             ; 0044e356
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044e357
    ADD ESI,0xc                         ; 0044e35a
    CMP EBX,ECX                         ; 0044e35d
    JL 0x0044e335                       ; 0044e35f
        ;   XREF to: 0044e335 (CONDITIONAL_JUMP)  ; LAB_0044e335
    PUSH 0x5cf734                       ; 0044e361 | DAT_005cf734
        ;   Label: LAB_0044e361
    PUSH EBP                            ; 0044e366
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e367
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0044e36c
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044e36f
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044e373
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044e377
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0044e37b
    ADD EDI,0x4                         ; 0044e37f
    ADD EAX,0x48                        ; 0044e382
    INC EDX                             ; 0044e385
    MOV ECX,dword ptr [EBX + 0x110]     ; 0044e386
    MOV dword ptr [ESP + 0x24],EDI      ; 0044e38c
    MOV dword ptr [ESP + 0x28],EAX      ; 0044e390
    MOV dword ptr [ESP + 0x2c],EDX      ; 0044e394
    CMP EDX,ECX                         ; 0044e398
    JL 0x0044e2dc                       ; 0044e39a
        ;   XREF to: 0044e2dc (CONDITIONAL_JUMP)  ; LAB_0044e2dc
    CMP dword ptr [ESP + 0x1c],0x0      ; 0044e3a0
        ;   Label: LAB_0044e3a0
    JNZ 0x0044e4bb                      ; 0044e3a5
        ;   XREF to: 0044e4bb (CONDITIONAL_JUMP)  ; LAB_0044e4bb
    LEA EAX,[EAX]                       ; 0044e3ab
    MOV ECX,ECX                         ; 0044e3ae
    MOV EBX,0x1                         ; 0044e3b0
        ;   Label: LAB_0044e3b0
    MOV ESI,EBP                         ; 0044e3b5
    PUSH ESI                            ; 0044e3b7
        ;   Label: LAB_0044e3b7
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e3b8
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e3bd
    TEST EAX,EAX                        ; 0044e3c0
    JL 0x0044e3ce                       ; 0044e3c2
        ;   XREF to: 0044e3ce (CONDITIONAL_JUMP)  ; LAB_0044e3ce
    CMP EAX,0xa                         ; 0044e3c4
    JNZ 0x0044e3b7                      ; 0044e3c7
        ;   XREF to: 0044e3b7 (CONDITIONAL_JUMP)  ; LAB_0044e3b7
    DEC EBX                             ; 0044e3c9
    TEST EBX,EBX                        ; 0044e3ca
    JG 0x0044e3b7                       ; 0044e3cc
        ;   XREF to: 0044e3b7 (CONDITIONAL_JUMP)  ; LAB_0044e3b7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e3ce
        ;   Label: LAB_0044e3ce
    MOV EBX,dword ptr [EAX + 0x120]     ; 0044e3d2
    XOR ESI,ESI                         ; 0044e3d8
    TEST EBX,EBX                        ; 0044e3da
    JLE 0x0044e410                      ; 0044e3dc
        ;   XREF to: 0044e410 (CONDITIONAL_JUMP)  ; LAB_0044e410
    LEA EBX,[EAX + 0x12c]               ; 0044e3de
    PUSH EBX                            ; 0044e3e4
        ;   Label: LAB_0044e3e4
    PUSH 0x5cf76e                       ; 0044e3e5 | = "%[^\n]\n"
    PUSH EBP                            ; 0044e3ea
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e3eb
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e3f0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e3f3
    INC ESI                             ; 0044e3f7
    MOV EDI,dword ptr [EAX + 0x120]     ; 0044e3f8
    ADD EBX,0x48                        ; 0044e3fe
    CMP ESI,EDI                         ; 0044e401
    JL 0x0044e3e4                       ; 0044e403
        ;   XREF to: 0044e3e4 (CONDITIONAL_JUMP)  ; LAB_0044e3e4
    LEA EAX,[EAX]                       ; 0044e405
    LEA EDX,[EDX]                       ; 0044e40b
    MOV EBX,EBX                         ; 0044e40e
    MOV EBX,0x1                         ; 0044e410
        ;   Label: LAB_0044e410
    MOV ESI,EBP                         ; 0044e415
    PUSH ESI                            ; 0044e417
        ;   Label: LAB_0044e417
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e418
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e41d
    TEST EAX,EAX                        ; 0044e420
    JL 0x0044e42e                       ; 0044e422
        ;   XREF to: 0044e42e (CONDITIONAL_JUMP)  ; LAB_0044e42e
    CMP EAX,0xa                         ; 0044e424
    JNZ 0x0044e417                      ; 0044e427
        ;   XREF to: 0044e417 (CONDITIONAL_JUMP)  ; LAB_0044e417
    DEC EBX                             ; 0044e429
    TEST EBX,EBX                        ; 0044e42a
    JG 0x0044e417                       ; 0044e42c
        ;   XREF to: 0044e417 (CONDITIONAL_JUMP)  ; LAB_0044e417
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e42e
        ;   Label: LAB_0044e42e
    MOV EDX,dword ptr [EAX + 0x244]     ; 0044e432
    XOR EBX,EBX                         ; 0044e438
    TEST EDX,EDX                        ; 0044e43a
    JLE 0x0044e480                      ; 0044e43c
        ;   XREF to: 0044e480 (CONDITIONAL_JUMP)  ; LAB_0044e480
    LEA EDI,[EAX + 0x248]               ; 0044e43e
    LEA ESI,[EAX + 0x24c]               ; 0044e444
    LEA EAX,[EBX*0x8 + 0x0]             ; 0044e44a
        ;   Label: LAB_0044e44a
    PUSH ESI                            ; 0044e451
    ADD EAX,EDI                         ; 0044e452
    PUSH EAX                            ; 0044e454
    PUSH 0x5cf775                       ; 0044e455 | = "%d,%d\n"
    PUSH EBP                            ; 0044e45a
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e45b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0044e460
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e463
    INC EBX                             ; 0044e467
    MOV ECX,dword ptr [EAX + 0x244]     ; 0044e468
    ADD ESI,0x8                         ; 0044e46e
    CMP EBX,ECX                         ; 0044e471
    JL 0x0044e44a                       ; 0044e473
        ;   XREF to: 0044e44a (CONDITIONAL_JUMP)  ; LAB_0044e44a
    LEA EAX,[EAX]                       ; 0044e475
    LEA EDX,[EDX]                       ; 0044e47b
    MOV EBX,EBX                         ; 0044e47e
    TEST byte ptr [EBP + 0xc],0x20      ; 0044e480
        ;   Label: LAB_0044e480
    JZ 0x0044e4a9                       ; 0044e484
        ;   XREF to: 0044e4a9 (CONDITIONAL_JUMP)  ; LAB_0044e4a9
    MOV EBX,0x5cf77c                    ; 0044e486 | = "..\\core\\dmodel.cpp"
    MOV ESI,0x197                       ; 0044e48b
    PUSH 0x5cf78f                       ; 0044e490 | = "Error reading KFM model"
    MOV dword ptr [0x01d046a0],EBX      ; 0044e495 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044e49b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044e4a1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044e4a6
    CMP dword ptr [ESP],0x0             ; 0044e4a9
        ;   Label: LAB_0044e4a9
    JNZ 0x0044e56d                      ; 0044e4ad
        ;   XREF to: 0044e56d (CONDITIONAL_JUMP)  ; LAB_0044e56d
    ADD ESP,0x38                        ; 0044e4b3
    POP EBP                             ; 0044e4b6
    POP EDI                             ; 0044e4b7
    POP ESI                             ; 0044e4b8
    POP EBX                             ; 0044e4b9
    RET                                 ; 0044e4ba
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e4bb
        ;   Label: LAB_0044e4bb
    MOV ESI,dword ptr [EAX + 0x110]     ; 0044e4bf
    PUSH ESI                            ; 0044e4c5
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 0044e4c6
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 0044e4cb
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0044e4ce
    MOV dword ptr [EBX + 0x11c],EAX     ; 0044e4d2
    TEST EAX,EAX                        ; 0044e4d8
    JZ 0x0044e546                       ; 0044e4da
        ;   XREF to: 0044e546 (CONDITIONAL_JUMP)  ; LAB_0044e546
    MOV EBX,0x1                         ; 0044e4dc
        ;   Label: LAB_0044e4dc
    MOV ESI,EBP                         ; 0044e4e1
    PUSH ESI                            ; 0044e4e3
        ;   Label: LAB_0044e4e3
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0044e4e4
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0044e4e9
    TEST EAX,EAX                        ; 0044e4ec
    JL 0x0044e4fa                       ; 0044e4ee
        ;   XREF to: 0044e4fa (CONDITIONAL_JUMP)  ; LAB_0044e4fa
    CMP EAX,0xa                         ; 0044e4f0
    JNZ 0x0044e4e3                      ; 0044e4f3
        ;   XREF to: 0044e4e3 (CONDITIONAL_JUMP)  ; LAB_0044e4e3
    DEC EBX                             ; 0044e4f5
    TEST EBX,EBX                        ; 0044e4f6
    JG 0x0044e4e3                       ; 0044e4f8
        ;   XREF to: 0044e4e3 (CONDITIONAL_JUMP)  ; LAB_0044e4e3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e4fa
        ;   Label: LAB_0044e4fa
    MOV EDX,dword ptr [EAX + 0x110]     ; 0044e4fe
    XOR EBX,EBX                         ; 0044e504
    TEST EDX,EDX                        ; 0044e506
    JLE 0x0044e3b0                      ; 0044e508
        ;   XREF to: 0044e3b0 (CONDITIONAL_JUMP)  ; LAB_0044e3b0
    LEA EAX,[ESP + 0x20]                ; 0044e50e
        ;   Label: LAB_0044e50e
    PUSH EAX                            ; 0044e512
    PUSH 0x5cf76a                       ; 0044e513 | DAT_005cf76a
    PUSH EBP                            ; 0044e518
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044e519
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044e51e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e521
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0044e525
    LEA ESI,[EAX + EBX*0x1]             ; 0044e52b
    MOV AL,byte ptr [ESP + 0x20]        ; 0044e52e
    MOV byte ptr [ESI],AL               ; 0044e532
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e534
    INC EBX                             ; 0044e538
    CMP EBX,dword ptr [EAX + 0x110]     ; 0044e539
    JL 0x0044e50e                       ; 0044e53f
        ;   XREF to: 0044e50e (CONDITIONAL_JUMP)  ; LAB_0044e50e
    JMP 0x0044e3b0                      ; 0044e541
        ;   XREF to: 0044e3b0 (UNCONDITIONAL_JUMP)  ; LAB_0044e3b0
    MOV EAX,0x5cf736                    ; 0044e546 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0044e546
    MOV EDX,0x178                       ; 0044e54b
    PUSH 0x5cf749                       ; 0044e550 | = "Out of memory for envMapOpacList"
    MOV [0x01d046a0],EAX                ; 0044e555 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0044e55a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044e560
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044e565
    JMP 0x0044e4dc                      ; 0044e568
        ;   XREF to: 0044e4dc (UNCONDITIONAL_JUMP)  ; LAB_0044e4dc
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0044e56d
        ;   Label: LAB_0044e56d
    PUSH EBP                            ; 0044e571
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760 ; 0044e572
        ;   XREF to: 0044f760 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0044e577
    ADD ESP,0x38                        ; 0044e57a
    POP EBP                             ; 0044e57d
    POP EDI                             ; 0044e57e
    POP ESI                             ; 0044e57f
    POP EBX                             ; 0044e580
    RET                                 ; 0044e581

