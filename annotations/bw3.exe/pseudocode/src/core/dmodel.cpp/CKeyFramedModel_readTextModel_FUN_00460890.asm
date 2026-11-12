; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00460890(CKeyFramedModel *this_ptr,_FILE *file)
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
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 at 0046060f
;
; Referenced Globals:
;   undefined4 DAT_005bb6a2
;   TerminatedCString s_core_dmodel_cpp_005bb6a6
;   TerminatedCString s_KFM_file_is_invalid_vers_005bb6b9
;   TerminatedCString s_core_dmodel_cpp_005bb6d8
;   TerminatedCString s_KFM_file_is_version_d_th_005bb6eb
;   TerminatedCString s_d_d_d_d_d_005bb72e
;   undefined4 DAT_005bb73e
;   undefined4 DAT_005bb742
;   undefined4 DAT_005bb746
;   undefined4 DAT_005bb74a
;   TerminatedCString s_d_d_d_005bb74e
;   TerminatedCString s_d_d_005bb758
;   TerminatedCString s_d_d_d_005bb75e
;   undefined4 DAT_005bb769
;   TerminatedCString s_core_dmodel_cpp_005bb76b
;   ... and 8 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0
;   core_dmodel.cpp_FUN_00461300
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460890
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00460890
    PUSH ESI                            ; 00460891
    PUSH EDI                            ; 00460892
    PUSH EBP                            ; 00460893
    SUB ESP,0x38                        ; 00460894
    MOV EBP,dword ptr [ESP + 0x50]      ; 00460897
    MOV EDX,0xffffffff                  ; 0046089b
    MOV EBX,0x1                         ; 004608a0
    MOV ESI,EBP                         ; 004608a5
    MOV dword ptr [ESP + 0x4],EDX       ; 004608a7
    PUSH ESI                            ; 004608ab
        ;   Label: LAB_004608ab
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004608ac
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 004608b1
    TEST EAX,EAX                        ; 004608b4
    JL 0x004608c2                       ; 004608b6
        ;   XREF to: 004608c2 (CONDITIONAL_JUMP)  ; LAB_004608c2
    CMP EAX,0xa                         ; 004608b8
    JNZ 0x004608ab                      ; 004608bb
        ;   XREF to: 004608ab (CONDITIONAL_JUMP)  ; LAB_004608ab
    DEC EBX                             ; 004608bd
    TEST EBX,EBX                        ; 004608be
    JG 0x004608ab                       ; 004608c0
        ;   XREF to: 004608ab (CONDITIONAL_JUMP)  ; LAB_004608ab
    LEA EAX,[ESP + 0x4]                 ; 004608c2
        ;   Label: LAB_004608c2
    PUSH EAX                            ; 004608c6
    PUSH 0x5bb6a2                       ; 004608c7 | DAT_005bb6a2
    PUSH EBP                            ; 004608cc
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004608cd
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004608d2
    MOV ECX,dword ptr [ESP + 0x4]       ; 004608d5
    CMP ECX,0x5                         ; 004608d9
    JGE 0x00460902                      ; 004608dc
        ;   XREF to: 00460902 (CONDITIONAL_JUMP)  ; LAB_00460902
    PUSH ECX                            ; 004608de
    MOV EBX,0x5bb6a6                    ; 004608df | = "..\\core\\dmodel.cpp"
    MOV ESI,0x128                       ; 004608e4
    PUSH 0x5bb6b9                       ; 004608e9 | = "KFM file is invalid version %d"
    MOV dword ptr [0x01d71de0],EBX      ; 004608ee | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004608f4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004608fa
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004608ff
    MOV EAX,dword ptr [ESP + 0x4]       ; 00460902
        ;   Label: LAB_00460902
    CMP EAX,0x8                         ; 00460906
    JG 0x00460acd                       ; 00460909
        ;   XREF to: 00460acd (CONDITIONAL_JUMP)  ; LAB_00460acd
    MOV EBX,0x1                         ; 0046090f
        ;   Label: LAB_0046090f
    MOV ESI,EBP                         ; 00460914
    PUSH ESI                            ; 00460916
        ;   Label: LAB_00460916
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460917
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 0046091c
    TEST EAX,EAX                        ; 0046091f
    JL 0x0046092d                       ; 00460921
        ;   XREF to: 0046092d (CONDITIONAL_JUMP)  ; LAB_0046092d
    CMP EAX,0xa                         ; 00460923
    JNZ 0x00460916                      ; 00460926
        ;   XREF to: 00460916 (CONDITIONAL_JUMP)  ; LAB_00460916
    DEC EBX                             ; 00460928
    TEST EBX,EBX                        ; 00460929
    JG 0x00460916                       ; 0046092b
        ;   XREF to: 00460916 (CONDITIONAL_JUMP)  ; LAB_00460916
    LEA EAX,[ESP + 0x18]                ; 0046092d
        ;   Label: LAB_0046092d
    PUSH EAX                            ; 00460931
    LEA EAX,[ESP + 0x18]                ; 00460932
    PUSH EAX                            ; 00460936
    LEA EAX,[ESP + 0x18]                ; 00460937
    PUSH EAX                            ; 0046093b
    LEA EAX,[ESP + 0x18]                ; 0046093c
    PUSH EAX                            ; 00460940
    LEA EAX,[ESP + 0x18]                ; 00460941
    PUSH EAX                            ; 00460945
    PUSH 0x5bb72e                       ; 00460946 | = "%d,%d,%d,%d,%d\n"
    PUSH EBP                            ; 0046094b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0046094c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 00460951
    MOV ESI,dword ptr [ESP + 0x18]      ; 00460954
    PUSH ESI                            ; 00460958
    MOV EDI,dword ptr [ESP + 0x18]      ; 00460959
    PUSH EDI                            ; 0046095d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046095e
    PUSH EAX                            ; 00460962
    MOV EDX,dword ptr [ESP + 0x18]      ; 00460963
    PUSH EDX                            ; 00460967
    MOV ECX,dword ptr [ESP + 0x18]      ; 00460968
    PUSH ECX                            ; 0046096c
    MOV EBX,dword ptr [ESP + 0x60]      ; 0046096d
    PUSH EBX                            ; 00460971
    MOV ESI,EBP                         ; 00460972
    CALL core_dmodel.cpp_FUN_00461300   ; 00460974
        ;   XREF to: 00461300 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00461300()
    MOV EBX,0x1                         ; 00460979
    ADD ESP,0x18                        ; 0046097e
    PUSH ESI                            ; 00460981
        ;   Label: LAB_00460981
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460982
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460987
    TEST EAX,EAX                        ; 0046098a
    JL 0x00460998                       ; 0046098c
        ;   XREF to: 00460998 (CONDITIONAL_JUMP)  ; LAB_00460998
    CMP EAX,0xa                         ; 0046098e
    JNZ 0x00460981                      ; 00460991
        ;   XREF to: 00460981 (CONDITIONAL_JUMP)  ; LAB_00460981
    DEC EBX                             ; 00460993
    TEST EBX,EBX                        ; 00460994
    JG 0x00460981                       ; 00460996
        ;   XREF to: 00460981 (CONDITIONAL_JUMP)  ; LAB_00460981
    MOV EAX,ESP                         ; 00460998
        ;   Label: LAB_00460998
    PUSH EAX                            ; 0046099a
    PUSH 0x5bb73e                       ; 0046099b | DAT_005bb73e
    PUSH EBP                            ; 004609a0
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004609a1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004609a6
    CMP dword ptr [ESP + 0x4],0x6       ; 004609a9
    JL 0x00460af8                       ; 004609ae
        ;   XREF to: 00460af8 (CONDITIONAL_JUMP)  ; LAB_00460af8
    MOV EBX,0x1                         ; 004609b4
    MOV ESI,EBP                         ; 004609b9
    PUSH ESI                            ; 004609bb
        ;   Label: LAB_004609bb
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004609bc
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 004609c1
    TEST EAX,EAX                        ; 004609c4
    JL 0x004609d2                       ; 004609c6
        ;   XREF to: 004609d2 (CONDITIONAL_JUMP)  ; LAB_004609d2
    CMP EAX,0xa                         ; 004609c8
    JNZ 0x004609bb                      ; 004609cb
        ;   XREF to: 004609bb (CONDITIONAL_JUMP)  ; LAB_004609bb
    DEC EBX                             ; 004609cd
    TEST EBX,EBX                        ; 004609ce
    JG 0x004609bb                       ; 004609d0
        ;   XREF to: 004609bb (CONDITIONAL_JUMP)  ; LAB_004609bb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004609d2
        ;   Label: LAB_004609d2
    ADD EAX,0x35c                       ; 004609d6
    PUSH EAX                            ; 004609db
    PUSH 0x5bb742                       ; 004609dc | DAT_005bb742
    PUSH EBP                            ; 004609e1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004609e2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004609e7
    CMP dword ptr [ESP + 0x4],0x8       ; 004609ea
        ;   Label: LAB_004609ea
    JL 0x00460b0b                       ; 004609ef
        ;   XREF to: 00460b0b (CONDITIONAL_JUMP)  ; LAB_00460b0b
    MOV EBX,0x1                         ; 004609f5
    MOV ESI,EBP                         ; 004609fa
    PUSH ESI                            ; 004609fc
        ;   Label: LAB_004609fc
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004609fd
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460a02
    TEST EAX,EAX                        ; 00460a05
    JL 0x00460a13                       ; 00460a07
        ;   XREF to: 00460a13 (CONDITIONAL_JUMP)  ; LAB_00460a13
    CMP EAX,0xa                         ; 00460a09
    JNZ 0x004609fc                      ; 00460a0c
        ;   XREF to: 004609fc (CONDITIONAL_JUMP)  ; LAB_004609fc
    DEC EBX                             ; 00460a0e
    TEST EBX,EBX                        ; 00460a0f
    JG 0x004609fc                       ; 00460a11
        ;   XREF to: 004609fc (CONDITIONAL_JUMP)  ; LAB_004609fc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460a13
        ;   Label: LAB_00460a13
    ADD EAX,0x360                       ; 00460a17
    PUSH EAX                            ; 00460a1c
    PUSH 0x5bb746                       ; 00460a1d | DAT_005bb746
    PUSH EBP                            ; 00460a22
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460a23
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00460a28
    XOR EAX,EAX                         ; 00460a2b
        ;   Label: LAB_00460a2b
    MOV EDX,dword ptr [ESP + 0x4]       ; 00460a2d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00460a31
    CMP EDX,0x7                         ; 00460a35
    JL 0x00460a6b                       ; 00460a38
        ;   XREF to: 00460a6b (CONDITIONAL_JUMP)  ; LAB_00460a6b
    MOV EBX,0x1                         ; 00460a3a
    MOV ESI,EBP                         ; 00460a3f
    PUSH ESI                            ; 00460a41
        ;   Label: LAB_00460a41
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460a42
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460a47
    TEST EAX,EAX                        ; 00460a4a
    JL 0x00460a58                       ; 00460a4c
        ;   XREF to: 00460a58 (CONDITIONAL_JUMP)  ; LAB_00460a58
    CMP EAX,0xa                         ; 00460a4e
    JNZ 0x00460a41                      ; 00460a51
        ;   XREF to: 00460a41 (CONDITIONAL_JUMP)  ; LAB_00460a41
    DEC EBX                             ; 00460a53
    TEST EBX,EBX                        ; 00460a54
    JG 0x00460a41                       ; 00460a56
        ;   XREF to: 00460a41 (CONDITIONAL_JUMP)  ; LAB_00460a41
    LEA EAX,[ESP + 0x1c]                ; 00460a58
        ;   Label: LAB_00460a58
    PUSH EAX                            ; 00460a5c
    PUSH 0x5bb74a                       ; 00460a5d | DAT_005bb74a
    PUSH EBP                            ; 00460a62
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460a63
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00460a68
    MOV EBX,0x1                         ; 00460a6b
        ;   Label: LAB_00460a6b
    MOV ESI,EBP                         ; 00460a70
    PUSH ESI                            ; 00460a72
        ;   Label: LAB_00460a72
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460a73
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460a78
    TEST EAX,EAX                        ; 00460a7b
    JL 0x00460a89                       ; 00460a7d
        ;   XREF to: 00460a89 (CONDITIONAL_JUMP)  ; LAB_00460a89
    CMP EAX,0xa                         ; 00460a7f
    JNZ 0x00460a72                      ; 00460a82
        ;   XREF to: 00460a72 (CONDITIONAL_JUMP)  ; LAB_00460a72
    DEC EBX                             ; 00460a84
    TEST EBX,EBX                        ; 00460a85
    JG 0x00460a72                       ; 00460a87
        ;   XREF to: 00460a72 (CONDITIONAL_JUMP)  ; LAB_00460a72
    XOR ESI,ESI                         ; 00460a89
        ;   Label: LAB_00460a89
    XOR EBX,EBX                         ; 00460a8b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00460a8d
        ;   Label: LAB_00460a8d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460a91
    MOV ECX,dword ptr [EDI + 0x100]     ; 00460a95
    MOV EAX,dword ptr [EAX + 0x104]     ; 00460a9b
    IMUL EAX,ECX                        ; 00460aa1
    CMP EBX,EAX                         ; 00460aa4
    JGE 0x00460b1e                      ; 00460aa6
        ;   XREF to: 00460b1e (CONDITIONAL_JUMP)  ; LAB_00460b1e
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00460aa8
    ADD EAX,ESI                         ; 00460aae
    LEA EDI,[EAX + 0x8]                 ; 00460ab0
    PUSH EDI                            ; 00460ab3
    LEA EDI,[EAX + 0x4]                 ; 00460ab4
    PUSH EDI                            ; 00460ab7
    PUSH EAX                            ; 00460ab8
    PUSH 0x5bb74e                       ; 00460ab9 | = "%d,%d,%d\n"
    PUSH EBP                            ; 00460abe
    INC EBX                             ; 00460abf
    ADD ESI,0xc                         ; 00460ac0
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460ac3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00460ac8
    JMP 0x00460a8d                      ; 00460acb
        ;   XREF to: 00460a8d (UNCONDITIONAL_JUMP)  ; LAB_00460a8d
    PUSH 0x8                            ; 00460acd
        ;   Label: LAB_00460acd
    PUSH EAX                            ; 00460acf
    MOV EDX,0x5bb6d8                    ; 00460ad0 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x12b                       ; 00460ad5
    PUSH 0x5bb6eb                       ; 00460ada | = "KFM file is version %d, this .exe can..."
    MOV dword ptr [0x01d71de0],EDX      ; 00460adf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00460ae5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00460aeb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00460af0
    JMP 0x0046090f                      ; 00460af3
        ;   XREF to: 0046090f (UNCONDITIONAL_JUMP)  ; LAB_0046090f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460af8
        ;   Label: LAB_00460af8
    MOV dword ptr [EAX + 0x35c],0x0     ; 00460afc
    JMP 0x004609ea                      ; 00460b06
        ;   XREF to: 004609ea (UNCONDITIONAL_JUMP)  ; LAB_004609ea
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460b0b
        ;   Label: LAB_00460b0b
    MOV dword ptr [EAX + 0x360],0x0     ; 00460b0f
    JMP 0x00460a2b                      ; 00460b19
        ;   XREF to: 00460a2b (UNCONDITIONAL_JUMP)  ; LAB_00460a2b
    MOV EBX,0x1                         ; 00460b1e
        ;   Label: LAB_00460b1e
    MOV EDI,EBP                         ; 00460b23
    PUSH EDI                            ; 00460b25
        ;   Label: LAB_00460b25
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460b26
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460b2b
    TEST EAX,EAX                        ; 00460b2e
    JL 0x00460b3c                       ; 00460b30
        ;   XREF to: 00460b3c (CONDITIONAL_JUMP)  ; LAB_00460b3c
    CMP EAX,0xa                         ; 00460b32
    JNZ 0x00460b25                      ; 00460b35
        ;   XREF to: 00460b25 (CONDITIONAL_JUMP)  ; LAB_00460b25
    DEC EBX                             ; 00460b37
    TEST EBX,EBX                        ; 00460b38
    JG 0x00460b25                       ; 00460b3a
        ;   XREF to: 00460b25 (CONDITIONAL_JUMP)  ; LAB_00460b25
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460b3c
        ;   Label: LAB_00460b3c
    XOR EBX,EBX                         ; 00460b40
    MOV ESI,dword ptr [EAX + 0x110]     ; 00460b42
    MOV dword ptr [ESP + 0x2c],EBX      ; 00460b48
    TEST ESI,ESI                        ; 00460b4c
    JLE 0x00460c20                      ; 00460b4e
        ;   XREF to: 00460c20 (CONDITIONAL_JUMP)  ; LAB_00460c20
    MOV dword ptr [ESP + 0x28],EBX      ; 00460b54
    MOV dword ptr [ESP + 0x24],EBX      ; 00460b58
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460b5c
        ;   Label: LAB_00460b5c
    MOV EBX,dword ptr [ESP + 0x28]      ; 00460b60
    MOV EAX,dword ptr [EAX + 0x114]     ; 00460b64
    ADD EBX,EAX                         ; 00460b6a
    MOV dword ptr [ESP + 0x34],EBX      ; 00460b6c
    LEA EAX,[EBX + 0x4]                 ; 00460b70
    PUSH EAX                            ; 00460b73
    MOV EAX,dword ptr [ESP + 0x50]      ; 00460b74
    MOV ESI,dword ptr [ESP + 0x28]      ; 00460b78
    MOV EAX,dword ptr [EAX + 0x118]     ; 00460b7c
    ADD EAX,ESI                         ; 00460b82
    PUSH EAX                            ; 00460b84
    PUSH 0x5bb758                       ; 00460b85 | = "%d,%d"
    PUSH EBP                            ; 00460b8a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460b8b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00460b90
    MOV EAX,dword ptr [ESP + 0x34]      ; 00460b93
    MOV EDI,dword ptr [EAX + 0x4]       ; 00460b97
    XOR EBX,EBX                         ; 00460b9a
    TEST EDI,EDI                        ; 00460b9c
    JLE 0x00460be1                      ; 00460b9e
        ;   XREF to: 00460be1 (CONDITIONAL_JUMP)  ; LAB_00460be1
    MOV ESI,dword ptr [ESP + 0x34]      ; 00460ba0
    MOV EDI,dword ptr [ESP + 0x34]      ; 00460ba4
    ADD EAX,0x18                        ; 00460ba8
    ADD ESI,0x1c                        ; 00460bab
    ADD EDI,0x20                        ; 00460bae
    MOV dword ptr [ESP + 0x30],EAX      ; 00460bb1
    IMUL EAX,EBX,0xc                    ; 00460bb5
        ;   Label: LAB_00460bb5
    PUSH EDI                            ; 00460bb8
    MOV EDX,dword ptr [ESP + 0x34]      ; 00460bb9
    PUSH ESI                            ; 00460bbd
    ADD EAX,EDX                         ; 00460bbe
    PUSH EAX                            ; 00460bc0
    PUSH 0x5bb75e                       ; 00460bc1 | = ", %d,%d,%d"
    PUSH EBP                            ; 00460bc6
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460bc7
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00460bcc
    MOV EAX,dword ptr [ESP + 0x34]      ; 00460bcf
    ADD EDI,0xc                         ; 00460bd3
    INC EBX                             ; 00460bd6
    MOV ECX,dword ptr [EAX + 0x4]       ; 00460bd7
    ADD ESI,0xc                         ; 00460bda
    CMP EBX,ECX                         ; 00460bdd
    JL 0x00460bb5                       ; 00460bdf
        ;   XREF to: 00460bb5 (CONDITIONAL_JUMP)  ; LAB_00460bb5
    PUSH 0x5bb769                       ; 00460be1 | DAT_005bb769
        ;   Label: LAB_00460be1
    PUSH EBP                            ; 00460be6
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460be7
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00460bec
    MOV EDI,dword ptr [ESP + 0x24]      ; 00460bef
    MOV EAX,dword ptr [ESP + 0x28]      ; 00460bf3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00460bf7
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00460bfb
    ADD EDI,0x4                         ; 00460bff
    ADD EAX,0x48                        ; 00460c02
    INC EDX                             ; 00460c05
    MOV ECX,dword ptr [EBX + 0x110]     ; 00460c06
    MOV dword ptr [ESP + 0x24],EDI      ; 00460c0c
    MOV dword ptr [ESP + 0x28],EAX      ; 00460c10
    MOV dword ptr [ESP + 0x2c],EDX      ; 00460c14
    CMP EDX,ECX                         ; 00460c18
    JL 0x00460b5c                       ; 00460c1a
        ;   XREF to: 00460b5c (CONDITIONAL_JUMP)  ; LAB_00460b5c
    CMP dword ptr [ESP + 0x1c],0x0      ; 00460c20
        ;   Label: LAB_00460c20
    JNZ 0x00460d3b                      ; 00460c25
        ;   XREF to: 00460d3b (CONDITIONAL_JUMP)  ; LAB_00460d3b
    LEA EAX,[EAX]                       ; 00460c2b
    MOV ECX,ECX                         ; 00460c2e
    MOV EBX,0x1                         ; 00460c30
        ;   Label: LAB_00460c30
    MOV ESI,EBP                         ; 00460c35
    PUSH ESI                            ; 00460c37
        ;   Label: LAB_00460c37
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460c38
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460c3d
    TEST EAX,EAX                        ; 00460c40
    JL 0x00460c4e                       ; 00460c42
        ;   XREF to: 00460c4e (CONDITIONAL_JUMP)  ; LAB_00460c4e
    CMP EAX,0xa                         ; 00460c44
    JNZ 0x00460c37                      ; 00460c47
        ;   XREF to: 00460c37 (CONDITIONAL_JUMP)  ; LAB_00460c37
    DEC EBX                             ; 00460c49
    TEST EBX,EBX                        ; 00460c4a
    JG 0x00460c37                       ; 00460c4c
        ;   XREF to: 00460c37 (CONDITIONAL_JUMP)  ; LAB_00460c37
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460c4e
        ;   Label: LAB_00460c4e
    MOV EBX,dword ptr [EAX + 0x120]     ; 00460c52
    XOR ESI,ESI                         ; 00460c58
    TEST EBX,EBX                        ; 00460c5a
    JLE 0x00460c90                      ; 00460c5c
        ;   XREF to: 00460c90 (CONDITIONAL_JUMP)  ; LAB_00460c90
    LEA EBX,[EAX + 0x12c]               ; 00460c5e
    PUSH EBX                            ; 00460c64
        ;   Label: LAB_00460c64
    PUSH 0x5bb7a3                       ; 00460c65 | = "%[^\n]\n"
    PUSH EBP                            ; 00460c6a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460c6b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00460c70
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460c73
    INC ESI                             ; 00460c77
    MOV EDI,dword ptr [EAX + 0x120]     ; 00460c78
    ADD EBX,0x48                        ; 00460c7e
    CMP ESI,EDI                         ; 00460c81
    JL 0x00460c64                       ; 00460c83
        ;   XREF to: 00460c64 (CONDITIONAL_JUMP)  ; LAB_00460c64
    LEA EAX,[EAX]                       ; 00460c85
    LEA EDX,[EDX]                       ; 00460c8b
    MOV EBX,EBX                         ; 00460c8e
    MOV EBX,0x1                         ; 00460c90
        ;   Label: LAB_00460c90
    MOV ESI,EBP                         ; 00460c95
    PUSH ESI                            ; 00460c97
        ;   Label: LAB_00460c97
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460c98
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460c9d
    TEST EAX,EAX                        ; 00460ca0
    JL 0x00460cae                       ; 00460ca2
        ;   XREF to: 00460cae (CONDITIONAL_JUMP)  ; LAB_00460cae
    CMP EAX,0xa                         ; 00460ca4
    JNZ 0x00460c97                      ; 00460ca7
        ;   XREF to: 00460c97 (CONDITIONAL_JUMP)  ; LAB_00460c97
    DEC EBX                             ; 00460ca9
    TEST EBX,EBX                        ; 00460caa
    JG 0x00460c97                       ; 00460cac
        ;   XREF to: 00460c97 (CONDITIONAL_JUMP)  ; LAB_00460c97
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460cae
        ;   Label: LAB_00460cae
    MOV EDX,dword ptr [EAX + 0x244]     ; 00460cb2
    XOR EBX,EBX                         ; 00460cb8
    TEST EDX,EDX                        ; 00460cba
    JLE 0x00460d00                      ; 00460cbc
        ;   XREF to: 00460d00 (CONDITIONAL_JUMP)  ; LAB_00460d00
    LEA EDI,[EAX + 0x248]               ; 00460cbe
    LEA ESI,[EAX + 0x24c]               ; 00460cc4
    LEA EAX,[EBX*0x8 + 0x0]             ; 00460cca
        ;   Label: LAB_00460cca
    PUSH ESI                            ; 00460cd1
    ADD EAX,EDI                         ; 00460cd2
    PUSH EAX                            ; 00460cd4
    PUSH 0x5bb7aa                       ; 00460cd5 | = "%d,%d\n"
    PUSH EBP                            ; 00460cda
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460cdb
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00460ce0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460ce3
    INC EBX                             ; 00460ce7
    MOV ECX,dword ptr [EAX + 0x244]     ; 00460ce8
    ADD ESI,0x8                         ; 00460cee
    CMP EBX,ECX                         ; 00460cf1
    JL 0x00460cca                       ; 00460cf3
        ;   XREF to: 00460cca (CONDITIONAL_JUMP)  ; LAB_00460cca
    LEA EAX,[EAX]                       ; 00460cf5
    LEA EDX,[EDX]                       ; 00460cfb
    MOV EBX,EBX                         ; 00460cfe
    TEST byte ptr [EBP + 0xc],0x20      ; 00460d00
        ;   Label: LAB_00460d00
    JZ 0x00460d29                       ; 00460d04
        ;   XREF to: 00460d29 (CONDITIONAL_JUMP)  ; LAB_00460d29
    MOV EBX,0x5bb7b1                    ; 00460d06 | = "..\\core\\dmodel.cpp"
    MOV ESI,0x197                       ; 00460d0b
    PUSH 0x5bb7c4                       ; 00460d10 | = "Error reading KFM model"
    MOV dword ptr [0x01d71de0],EBX      ; 00460d15 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00460d1b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00460d21
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00460d26
    CMP dword ptr [ESP],0x0             ; 00460d29
        ;   Label: LAB_00460d29
    JNZ 0x00460ded                      ; 00460d2d
        ;   XREF to: 00460ded (CONDITIONAL_JUMP)  ; LAB_00460ded
    ADD ESP,0x38                        ; 00460d33
    POP EBP                             ; 00460d36
    POP EDI                             ; 00460d37
    POP ESI                             ; 00460d38
    POP EBX                             ; 00460d39
    RET                                 ; 00460d3a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460d3b
        ;   Label: LAB_00460d3b
    MOV ESI,dword ptr [EAX + 0x110]     ; 00460d3f
    PUSH ESI                            ; 00460d45
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00460d46
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00460d4b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00460d4e
    MOV dword ptr [EBX + 0x11c],EAX     ; 00460d52
    TEST EAX,EAX                        ; 00460d58
    JZ 0x00460dc6                       ; 00460d5a
        ;   XREF to: 00460dc6 (CONDITIONAL_JUMP)  ; LAB_00460dc6
    MOV EBX,0x1                         ; 00460d5c
        ;   Label: LAB_00460d5c
    MOV ESI,EBP                         ; 00460d61
    PUSH ESI                            ; 00460d63
        ;   Label: LAB_00460d63
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00460d64
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00460d69
    TEST EAX,EAX                        ; 00460d6c
    JL 0x00460d7a                       ; 00460d6e
        ;   XREF to: 00460d7a (CONDITIONAL_JUMP)  ; LAB_00460d7a
    CMP EAX,0xa                         ; 00460d70
    JNZ 0x00460d63                      ; 00460d73
        ;   XREF to: 00460d63 (CONDITIONAL_JUMP)  ; LAB_00460d63
    DEC EBX                             ; 00460d75
    TEST EBX,EBX                        ; 00460d76
    JG 0x00460d63                       ; 00460d78
        ;   XREF to: 00460d63 (CONDITIONAL_JUMP)  ; LAB_00460d63
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460d7a
        ;   Label: LAB_00460d7a
    MOV EDX,dword ptr [EAX + 0x110]     ; 00460d7e
    XOR EBX,EBX                         ; 00460d84
    TEST EDX,EDX                        ; 00460d86
    JLE 0x00460c30                      ; 00460d88
        ;   XREF to: 00460c30 (CONDITIONAL_JUMP)  ; LAB_00460c30
    LEA EAX,[ESP + 0x20]                ; 00460d8e
        ;   Label: LAB_00460d8e
    PUSH EAX                            ; 00460d92
    PUSH 0x5bb79f                       ; 00460d93 | DAT_005bb79f
    PUSH EBP                            ; 00460d98
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00460d99
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00460d9e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460da1
    MOV EAX,dword ptr [EAX + 0x11c]     ; 00460da5
    LEA ESI,[EAX + EBX*0x1]             ; 00460dab
    MOV AL,byte ptr [ESP + 0x20]        ; 00460dae
    MOV byte ptr [ESI],AL               ; 00460db2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460db4
    INC EBX                             ; 00460db8
    CMP EBX,dword ptr [EAX + 0x110]     ; 00460db9
    JL 0x00460d8e                       ; 00460dbf
        ;   XREF to: 00460d8e (CONDITIONAL_JUMP)  ; LAB_00460d8e
    JMP 0x00460c30                      ; 00460dc1
        ;   XREF to: 00460c30 (UNCONDITIONAL_JUMP)  ; LAB_00460c30
    MOV EAX,0x5bb76b                    ; 00460dc6 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00460dc6
    MOV EDX,0x178                       ; 00460dcb
    PUSH 0x5bb77e                       ; 00460dd0 | = "Out of memory for envMapOpacList"
    MOV [0x01d71de0],EAX                ; 00460dd5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00460dda | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00460de0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00460de5
    JMP 0x00460d5c                      ; 00460de8
        ;   XREF to: 00460d5c (UNCONDITIONAL_JUMP)  ; LAB_00460d5c
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00460ded
        ;   Label: LAB_00460ded
    PUSH EBP                            ; 00460df1
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0 ; 00460df2
        ;   XREF to: 00461fe0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00460df7
    ADD ESP,0x38                        ; 00460dfa
    POP EBP                             ; 00460dfd
    POP EDI                             ; 00460dfe
    POP ESI                             ; 00460dff
    POP EBX                             ; 00460e00
    RET                                 ; 00460e01

