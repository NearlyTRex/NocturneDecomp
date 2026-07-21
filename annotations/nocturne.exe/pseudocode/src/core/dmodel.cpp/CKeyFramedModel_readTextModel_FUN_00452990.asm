; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00452990(int param_1,int param_2)
;
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
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 at 0045270f
;
; Referenced Globals:
;   undefined4 DAT_0057ca34
;   string s_..\\core\\dmodel.cpp_0057ca38
;   string s_KFM_file_is_invalid_version_%d_0057ca4b
;   string s_..\\core\\dmodel.cpp_0057ca6a
;   string s_KFM_file_is_version_%d,_this_.ex_0057ca7d
;   string s_%d,%d,%d,%d,%d_0057cac0
;   undefined4 DAT_0057cad0
;   undefined4 DAT_0057cad4
;   undefined4 DAT_0057cad8
;   undefined4 DAT_0057cadc
;   string s_%d,%d,%d_0057cae0
;   string s_%d,%d_0057caea
;   string s_,_%d,%d,%d_0057caf0
;   undefined4 DAT_0057cafb
;   string s_..\\core\\dmodel.cpp_0057cafd
;   ... and 8 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;   FUN_004c8440
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452990
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
    PUSH ESI                            ; 00452991
    PUSH EDI                            ; 00452992
    PUSH EBP                            ; 00452993
    SUB ESP,0x38                        ; 00452994
    MOV EBP,dword ptr [ESP + 0x50]      ; 00452997
    MOV EDX,0xffffffff                  ; 0045299b
    MOV EBX,0x1                         ; 004529a0
    MOV ESI,EBP                         ; 004529a5
    MOV dword ptr [ESP + 0x4],EDX       ; 004529a7
    PUSH ESI                            ; 004529ab
        ;   Label: LAB_004529ab
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004529ac
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004529b1
    TEST EAX,EAX                        ; 004529b4
    JL 0x004529c2                       ; 004529b6
        ;   XREF to: 004529c2 (CONDITIONAL_JUMP)  ; LAB_004529c2
    CMP EAX,0xa                         ; 004529b8
    JNZ 0x004529ab                      ; 004529bb
        ;   XREF to: 004529ab (CONDITIONAL_JUMP)  ; LAB_004529ab
    DEC EBX                             ; 004529bd
    TEST EBX,EBX                        ; 004529be
    JG 0x004529ab                       ; 004529c0
        ;   XREF to: 004529ab (CONDITIONAL_JUMP)  ; LAB_004529ab
    LEA EAX,[ESP + 0x4]                 ; 004529c2
        ;   Label: LAB_004529c2
    PUSH EAX                            ; 004529c6
    PUSH 0x57ca34                       ; 004529c7 | DAT_0057ca34
    PUSH EBP                            ; 004529cc
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004529cd
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004529d2
    MOV ECX,dword ptr [ESP + 0x4]       ; 004529d5
    CMP ECX,0x5                         ; 004529d9
    JGE 0x00452a02                      ; 004529dc
        ;   XREF to: 00452a02 (CONDITIONAL_JUMP)  ; LAB_00452a02
    PUSH ECX                            ; 004529de
    MOV EBX,0x57ca38                    ; 004529df | = "..\\core\\dmodel.cpp"
    MOV ESI,0x128                       ; 004529e4
    PUSH 0x57ca4b                       ; 004529e9 | = "KFM file is invalid version %d"
    MOV dword ptr [0x01cc4800],EBX      ; 004529ee | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004529f4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004529fa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004529ff
    MOV EAX,dword ptr [ESP + 0x4]       ; 00452a02
        ;   Label: LAB_00452a02
    CMP EAX,0x8                         ; 00452a06
    JG 0x00452bcd                       ; 00452a09
        ;   XREF to: 00452bcd (CONDITIONAL_JUMP)  ; LAB_00452bcd
    MOV EBX,0x1                         ; 00452a0f
        ;   Label: LAB_00452a0f
    MOV ESI,EBP                         ; 00452a14
    PUSH ESI                            ; 00452a16
        ;   Label: LAB_00452a16
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452a17
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452a1c
    TEST EAX,EAX                        ; 00452a1f
    JL 0x00452a2d                       ; 00452a21
        ;   XREF to: 00452a2d (CONDITIONAL_JUMP)  ; LAB_00452a2d
    CMP EAX,0xa                         ; 00452a23
    JNZ 0x00452a16                      ; 00452a26
        ;   XREF to: 00452a16 (CONDITIONAL_JUMP)  ; LAB_00452a16
    DEC EBX                             ; 00452a28
    TEST EBX,EBX                        ; 00452a29
    JG 0x00452a16                       ; 00452a2b
        ;   XREF to: 00452a16 (CONDITIONAL_JUMP)  ; LAB_00452a16
    LEA EAX,[ESP + 0x18]                ; 00452a2d
        ;   Label: LAB_00452a2d
    PUSH EAX                            ; 00452a31
    LEA EAX,[ESP + 0x18]                ; 00452a32
    PUSH EAX                            ; 00452a36
    LEA EAX,[ESP + 0x18]                ; 00452a37
    PUSH EAX                            ; 00452a3b
    LEA EAX,[ESP + 0x18]                ; 00452a3c
    PUSH EAX                            ; 00452a40
    LEA EAX,[ESP + 0x18]                ; 00452a41
    PUSH EAX                            ; 00452a45
    PUSH 0x57cac0                       ; 00452a46 | = "%d,%d,%d,%d,%d\n"
    PUSH EBP                            ; 00452a4b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452a4c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 00452a51
    MOV ESI,dword ptr [ESP + 0x18]      ; 00452a54
    PUSH ESI                            ; 00452a58
    MOV EDI,dword ptr [ESP + 0x18]      ; 00452a59
    PUSH EDI                            ; 00452a5d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00452a5e
    PUSH EAX                            ; 00452a62
    MOV EDX,dword ptr [ESP + 0x18]      ; 00452a63
    PUSH EDX                            ; 00452a67
    MOV ECX,dword ptr [ESP + 0x18]      ; 00452a68
    PUSH ECX                            ; 00452a6c
    MOV EBX,dword ptr [ESP + 0x60]      ; 00452a6d
    PUSH EBX                            ; 00452a71
    MOV ESI,EBP                         ; 00452a72
    CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0 ; 00452a74
        ;   XREF to: 004533e0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0()
    MOV EBX,0x1                         ; 00452a79
    ADD ESP,0x18                        ; 00452a7e
    PUSH ESI                            ; 00452a81
        ;   Label: LAB_00452a81
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452a82
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452a87
    TEST EAX,EAX                        ; 00452a8a
    JL 0x00452a98                       ; 00452a8c
        ;   XREF to: 00452a98 (CONDITIONAL_JUMP)  ; LAB_00452a98
    CMP EAX,0xa                         ; 00452a8e
    JNZ 0x00452a81                      ; 00452a91
        ;   XREF to: 00452a81 (CONDITIONAL_JUMP)  ; LAB_00452a81
    DEC EBX                             ; 00452a93
    TEST EBX,EBX                        ; 00452a94
    JG 0x00452a81                       ; 00452a96
        ;   XREF to: 00452a81 (CONDITIONAL_JUMP)  ; LAB_00452a81
    MOV EAX,ESP                         ; 00452a98
        ;   Label: LAB_00452a98
    PUSH EAX                            ; 00452a9a
    PUSH 0x57cad0                       ; 00452a9b | DAT_0057cad0
    PUSH EBP                            ; 00452aa0
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452aa1
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00452aa6
    CMP dword ptr [ESP + 0x4],0x6       ; 00452aa9
    JL 0x00452bf8                       ; 00452aae
        ;   XREF to: 00452bf8 (CONDITIONAL_JUMP)  ; LAB_00452bf8
    MOV EBX,0x1                         ; 00452ab4
    MOV ESI,EBP                         ; 00452ab9
    PUSH ESI                            ; 00452abb
        ;   Label: LAB_00452abb
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452abc
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452ac1
    TEST EAX,EAX                        ; 00452ac4
    JL 0x00452ad2                       ; 00452ac6
        ;   XREF to: 00452ad2 (CONDITIONAL_JUMP)  ; LAB_00452ad2
    CMP EAX,0xa                         ; 00452ac8
    JNZ 0x00452abb                      ; 00452acb
        ;   XREF to: 00452abb (CONDITIONAL_JUMP)  ; LAB_00452abb
    DEC EBX                             ; 00452acd
    TEST EBX,EBX                        ; 00452ace
    JG 0x00452abb                       ; 00452ad0
        ;   XREF to: 00452abb (CONDITIONAL_JUMP)  ; LAB_00452abb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452ad2
        ;   Label: LAB_00452ad2
    ADD EAX,0x35c                       ; 00452ad6
    PUSH EAX                            ; 00452adb
    PUSH 0x57cad4                       ; 00452adc | DAT_0057cad4
    PUSH EBP                            ; 00452ae1
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452ae2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00452ae7
    CMP dword ptr [ESP + 0x4],0x8       ; 00452aea
        ;   Label: LAB_00452aea
    JL 0x00452c0b                       ; 00452aef
        ;   XREF to: 00452c0b (CONDITIONAL_JUMP)  ; LAB_00452c0b
    MOV EBX,0x1                         ; 00452af5
    MOV ESI,EBP                         ; 00452afa
    PUSH ESI                            ; 00452afc
        ;   Label: LAB_00452afc
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452afd
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452b02
    TEST EAX,EAX                        ; 00452b05
    JL 0x00452b13                       ; 00452b07
        ;   XREF to: 00452b13 (CONDITIONAL_JUMP)  ; LAB_00452b13
    CMP EAX,0xa                         ; 00452b09
    JNZ 0x00452afc                      ; 00452b0c
        ;   XREF to: 00452afc (CONDITIONAL_JUMP)  ; LAB_00452afc
    DEC EBX                             ; 00452b0e
    TEST EBX,EBX                        ; 00452b0f
    JG 0x00452afc                       ; 00452b11
        ;   XREF to: 00452afc (CONDITIONAL_JUMP)  ; LAB_00452afc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452b13
        ;   Label: LAB_00452b13
    ADD EAX,0x360                       ; 00452b17
    PUSH EAX                            ; 00452b1c
    PUSH 0x57cad8                       ; 00452b1d | DAT_0057cad8
    PUSH EBP                            ; 00452b22
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452b23
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00452b28
    XOR EAX,EAX                         ; 00452b2b
        ;   Label: LAB_00452b2b
    MOV EDX,dword ptr [ESP + 0x4]       ; 00452b2d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00452b31
    CMP EDX,0x7                         ; 00452b35
    JL 0x00452b6b                       ; 00452b38
        ;   XREF to: 00452b6b (CONDITIONAL_JUMP)  ; LAB_00452b6b
    MOV EBX,0x1                         ; 00452b3a
    MOV ESI,EBP                         ; 00452b3f
    PUSH ESI                            ; 00452b41
        ;   Label: LAB_00452b41
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452b42
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452b47
    TEST EAX,EAX                        ; 00452b4a
    JL 0x00452b58                       ; 00452b4c
        ;   XREF to: 00452b58 (CONDITIONAL_JUMP)  ; LAB_00452b58
    CMP EAX,0xa                         ; 00452b4e
    JNZ 0x00452b41                      ; 00452b51
        ;   XREF to: 00452b41 (CONDITIONAL_JUMP)  ; LAB_00452b41
    DEC EBX                             ; 00452b53
    TEST EBX,EBX                        ; 00452b54
    JG 0x00452b41                       ; 00452b56
        ;   XREF to: 00452b41 (CONDITIONAL_JUMP)  ; LAB_00452b41
    LEA EAX,[ESP + 0x1c]                ; 00452b58
        ;   Label: LAB_00452b58
    PUSH EAX                            ; 00452b5c
    PUSH 0x57cadc                       ; 00452b5d | DAT_0057cadc
    PUSH EBP                            ; 00452b62
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452b63
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00452b68
    MOV EBX,0x1                         ; 00452b6b
        ;   Label: LAB_00452b6b
    MOV ESI,EBP                         ; 00452b70
    PUSH ESI                            ; 00452b72
        ;   Label: LAB_00452b72
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452b73
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452b78
    TEST EAX,EAX                        ; 00452b7b
    JL 0x00452b89                       ; 00452b7d
        ;   XREF to: 00452b89 (CONDITIONAL_JUMP)  ; LAB_00452b89
    CMP EAX,0xa                         ; 00452b7f
    JNZ 0x00452b72                      ; 00452b82
        ;   XREF to: 00452b72 (CONDITIONAL_JUMP)  ; LAB_00452b72
    DEC EBX                             ; 00452b84
    TEST EBX,EBX                        ; 00452b85
    JG 0x00452b72                       ; 00452b87
        ;   XREF to: 00452b72 (CONDITIONAL_JUMP)  ; LAB_00452b72
    XOR ESI,ESI                         ; 00452b89
        ;   Label: LAB_00452b89
    XOR EBX,EBX                         ; 00452b8b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00452b8d
        ;   Label: LAB_00452b8d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452b91
    MOV ECX,dword ptr [EDI + 0x100]     ; 00452b95
    MOV EAX,dword ptr [EAX + 0x104]     ; 00452b9b
    IMUL EAX,ECX                        ; 00452ba1
    CMP EBX,EAX                         ; 00452ba4
    JGE 0x00452c1e                      ; 00452ba6
        ;   XREF to: 00452c1e (CONDITIONAL_JUMP)  ; LAB_00452c1e
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00452ba8
    ADD EAX,ESI                         ; 00452bae
    LEA EDI,[EAX + 0x8]                 ; 00452bb0
    PUSH EDI                            ; 00452bb3
    LEA EDI,[EAX + 0x4]                 ; 00452bb4
    PUSH EDI                            ; 00452bb7
    PUSH EAX                            ; 00452bb8
    PUSH 0x57cae0                       ; 00452bb9 | = "%d,%d,%d\n"
    PUSH EBP                            ; 00452bbe
    INC EBX                             ; 00452bbf
    ADD ESI,0xc                         ; 00452bc0
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452bc3
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00452bc8
    JMP 0x00452b8d                      ; 00452bcb
        ;   XREF to: 00452b8d (UNCONDITIONAL_JUMP)  ; LAB_00452b8d
    PUSH 0x8                            ; 00452bcd
        ;   Label: LAB_00452bcd
    PUSH EAX                            ; 00452bcf
    MOV EDX,0x57ca6a                    ; 00452bd0 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x12b                       ; 00452bd5
    PUSH 0x57ca7d                       ; 00452bda | = "KFM file is version %d, this .exe can..."
    MOV dword ptr [0x01cc4800],EDX      ; 00452bdf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00452be5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00452beb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00452bf0
    JMP 0x00452a0f                      ; 00452bf3
        ;   XREF to: 00452a0f (UNCONDITIONAL_JUMP)  ; LAB_00452a0f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452bf8
        ;   Label: LAB_00452bf8
    MOV dword ptr [EAX + 0x35c],0x0     ; 00452bfc
    JMP 0x00452aea                      ; 00452c06
        ;   XREF to: 00452aea (UNCONDITIONAL_JUMP)  ; LAB_00452aea
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452c0b
        ;   Label: LAB_00452c0b
    MOV dword ptr [EAX + 0x360],0x0     ; 00452c0f
    JMP 0x00452b2b                      ; 00452c19
        ;   XREF to: 00452b2b (UNCONDITIONAL_JUMP)  ; LAB_00452b2b
    MOV EBX,0x1                         ; 00452c1e
        ;   Label: LAB_00452c1e
    MOV EDI,EBP                         ; 00452c23
    PUSH EDI                            ; 00452c25
        ;   Label: LAB_00452c25
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452c26
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452c2b
    TEST EAX,EAX                        ; 00452c2e
    JL 0x00452c3c                       ; 00452c30
        ;   XREF to: 00452c3c (CONDITIONAL_JUMP)  ; LAB_00452c3c
    CMP EAX,0xa                         ; 00452c32
    JNZ 0x00452c25                      ; 00452c35
        ;   XREF to: 00452c25 (CONDITIONAL_JUMP)  ; LAB_00452c25
    DEC EBX                             ; 00452c37
    TEST EBX,EBX                        ; 00452c38
    JG 0x00452c25                       ; 00452c3a
        ;   XREF to: 00452c25 (CONDITIONAL_JUMP)  ; LAB_00452c25
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452c3c
        ;   Label: LAB_00452c3c
    XOR EBX,EBX                         ; 00452c40
    MOV ESI,dword ptr [EAX + 0x110]     ; 00452c42
    MOV dword ptr [ESP + 0x2c],EBX      ; 00452c48
    TEST ESI,ESI                        ; 00452c4c
    JLE 0x00452d20                      ; 00452c4e
        ;   XREF to: 00452d20 (CONDITIONAL_JUMP)  ; LAB_00452d20
    MOV dword ptr [ESP + 0x28],EBX      ; 00452c54
    MOV dword ptr [ESP + 0x24],EBX      ; 00452c58
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452c5c
        ;   Label: LAB_00452c5c
    MOV EBX,dword ptr [ESP + 0x28]      ; 00452c60
    MOV EAX,dword ptr [EAX + 0x114]     ; 00452c64
    ADD EBX,EAX                         ; 00452c6a
    MOV dword ptr [ESP + 0x34],EBX      ; 00452c6c
    LEA EAX,[EBX + 0x4]                 ; 00452c70
    PUSH EAX                            ; 00452c73
    MOV EAX,dword ptr [ESP + 0x50]      ; 00452c74
    MOV ESI,dword ptr [ESP + 0x28]      ; 00452c78
    MOV EAX,dword ptr [EAX + 0x118]     ; 00452c7c
    ADD EAX,ESI                         ; 00452c82
    PUSH EAX                            ; 00452c84
    PUSH 0x57caea                       ; 00452c85 | = "%d,%d"
    PUSH EBP                            ; 00452c8a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452c8b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00452c90
    MOV EAX,dword ptr [ESP + 0x34]      ; 00452c93
    MOV EDI,dword ptr [EAX + 0x4]       ; 00452c97
    XOR EBX,EBX                         ; 00452c9a
    TEST EDI,EDI                        ; 00452c9c
    JLE 0x00452ce1                      ; 00452c9e
        ;   XREF to: 00452ce1 (CONDITIONAL_JUMP)  ; LAB_00452ce1
    MOV ESI,dword ptr [ESP + 0x34]      ; 00452ca0
    MOV EDI,dword ptr [ESP + 0x34]      ; 00452ca4
    ADD EAX,0x18                        ; 00452ca8
    ADD ESI,0x1c                        ; 00452cab
    ADD EDI,0x20                        ; 00452cae
    MOV dword ptr [ESP + 0x30],EAX      ; 00452cb1
    IMUL EAX,EBX,0xc                    ; 00452cb5
        ;   Label: LAB_00452cb5
    PUSH EDI                            ; 00452cb8
    MOV EDX,dword ptr [ESP + 0x34]      ; 00452cb9
    PUSH ESI                            ; 00452cbd
    ADD EAX,EDX                         ; 00452cbe
    PUSH EAX                            ; 00452cc0
    PUSH 0x57caf0                       ; 00452cc1 | = ", %d,%d,%d"
    PUSH EBP                            ; 00452cc6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452cc7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00452ccc
    MOV EAX,dword ptr [ESP + 0x34]      ; 00452ccf
    ADD EDI,0xc                         ; 00452cd3
    INC EBX                             ; 00452cd6
    MOV ECX,dword ptr [EAX + 0x4]       ; 00452cd7
    ADD ESI,0xc                         ; 00452cda
    CMP EBX,ECX                         ; 00452cdd
    JL 0x00452cb5                       ; 00452cdf
        ;   XREF to: 00452cb5 (CONDITIONAL_JUMP)  ; LAB_00452cb5
    PUSH 0x57cafb                       ; 00452ce1 | DAT_0057cafb
        ;   Label: LAB_00452ce1
    PUSH EBP                            ; 00452ce6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452ce7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x8                         ; 00452cec
    MOV EDI,dword ptr [ESP + 0x24]      ; 00452cef
    MOV EAX,dword ptr [ESP + 0x28]      ; 00452cf3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00452cf7
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00452cfb
    ADD EDI,0x4                         ; 00452cff
    ADD EAX,0x48                        ; 00452d02
    INC EDX                             ; 00452d05
    MOV ECX,dword ptr [EBX + 0x110]     ; 00452d06
    MOV dword ptr [ESP + 0x24],EDI      ; 00452d0c
    MOV dword ptr [ESP + 0x28],EAX      ; 00452d10
    MOV dword ptr [ESP + 0x2c],EDX      ; 00452d14
    CMP EDX,ECX                         ; 00452d18
    JL 0x00452c5c                       ; 00452d1a
        ;   XREF to: 00452c5c (CONDITIONAL_JUMP)  ; LAB_00452c5c
    CMP dword ptr [ESP + 0x1c],0x0      ; 00452d20
        ;   Label: LAB_00452d20
    JNZ 0x00452e3b                      ; 00452d25
        ;   XREF to: 00452e3b (CONDITIONAL_JUMP)  ; LAB_00452e3b
    LEA EAX,[EAX]                       ; 00452d2b
    MOV ECX,ECX                         ; 00452d2e
    MOV EBX,0x1                         ; 00452d30
        ;   Label: LAB_00452d30
    MOV ESI,EBP                         ; 00452d35
    PUSH ESI                            ; 00452d37
        ;   Label: LAB_00452d37
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452d38
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452d3d
    TEST EAX,EAX                        ; 00452d40
    JL 0x00452d4e                       ; 00452d42
        ;   XREF to: 00452d4e (CONDITIONAL_JUMP)  ; LAB_00452d4e
    CMP EAX,0xa                         ; 00452d44
    JNZ 0x00452d37                      ; 00452d47
        ;   XREF to: 00452d37 (CONDITIONAL_JUMP)  ; LAB_00452d37
    DEC EBX                             ; 00452d49
    TEST EBX,EBX                        ; 00452d4a
    JG 0x00452d37                       ; 00452d4c
        ;   XREF to: 00452d37 (CONDITIONAL_JUMP)  ; LAB_00452d37
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452d4e
        ;   Label: LAB_00452d4e
    MOV EBX,dword ptr [EAX + 0x120]     ; 00452d52
    XOR ESI,ESI                         ; 00452d58
    TEST EBX,EBX                        ; 00452d5a
    JLE 0x00452d90                      ; 00452d5c
        ;   XREF to: 00452d90 (CONDITIONAL_JUMP)  ; LAB_00452d90
    LEA EBX,[EAX + 0x12c]               ; 00452d5e
    PUSH EBX                            ; 00452d64
        ;   Label: LAB_00452d64
    PUSH 0x57cb35                       ; 00452d65 | = "%[^\n]\n"
    PUSH EBP                            ; 00452d6a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452d6b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00452d70
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452d73
    INC ESI                             ; 00452d77
    MOV EDI,dword ptr [EAX + 0x120]     ; 00452d78
    ADD EBX,0x48                        ; 00452d7e
    CMP ESI,EDI                         ; 00452d81
    JL 0x00452d64                       ; 00452d83
        ;   XREF to: 00452d64 (CONDITIONAL_JUMP)  ; LAB_00452d64
    LEA EAX,[EAX]                       ; 00452d85
    LEA EDX,[EDX]                       ; 00452d8b
    MOV EBX,EBX                         ; 00452d8e
    MOV EBX,0x1                         ; 00452d90
        ;   Label: LAB_00452d90
    MOV ESI,EBP                         ; 00452d95
    PUSH ESI                            ; 00452d97
        ;   Label: LAB_00452d97
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452d98
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452d9d
    TEST EAX,EAX                        ; 00452da0
    JL 0x00452dae                       ; 00452da2
        ;   XREF to: 00452dae (CONDITIONAL_JUMP)  ; LAB_00452dae
    CMP EAX,0xa                         ; 00452da4
    JNZ 0x00452d97                      ; 00452da7
        ;   XREF to: 00452d97 (CONDITIONAL_JUMP)  ; LAB_00452d97
    DEC EBX                             ; 00452da9
    TEST EBX,EBX                        ; 00452daa
    JG 0x00452d97                       ; 00452dac
        ;   XREF to: 00452d97 (CONDITIONAL_JUMP)  ; LAB_00452d97
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452dae
        ;   Label: LAB_00452dae
    MOV EDX,dword ptr [EAX + 0x244]     ; 00452db2
    XOR EBX,EBX                         ; 00452db8
    TEST EDX,EDX                        ; 00452dba
    JLE 0x00452e00                      ; 00452dbc
        ;   XREF to: 00452e00 (CONDITIONAL_JUMP)  ; LAB_00452e00
    LEA EDI,[EAX + 0x248]               ; 00452dbe
    LEA ESI,[EAX + 0x24c]               ; 00452dc4
    LEA EAX,[EBX*0x8 + 0x0]             ; 00452dca
        ;   Label: LAB_00452dca
    PUSH ESI                            ; 00452dd1
    ADD EAX,EDI                         ; 00452dd2
    PUSH EAX                            ; 00452dd4
    PUSH 0x57cb3c                       ; 00452dd5 | = "%d,%d\n"
    PUSH EBP                            ; 00452dda
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452ddb
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00452de0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452de3
    INC EBX                             ; 00452de7
    MOV ECX,dword ptr [EAX + 0x244]     ; 00452de8
    ADD ESI,0x8                         ; 00452dee
    CMP EBX,ECX                         ; 00452df1
    JL 0x00452dca                       ; 00452df3
        ;   XREF to: 00452dca (CONDITIONAL_JUMP)  ; LAB_00452dca
    LEA EAX,[EAX]                       ; 00452df5
    LEA EDX,[EDX]                       ; 00452dfb
    MOV EBX,EBX                         ; 00452dfe
    TEST byte ptr [EBP + 0xc],0x20      ; 00452e00
        ;   Label: LAB_00452e00
    JZ 0x00452e29                       ; 00452e04
        ;   XREF to: 00452e29 (CONDITIONAL_JUMP)  ; LAB_00452e29
    MOV EBX,0x57cb43                    ; 00452e06 | = "..\\core\\dmodel.cpp"
    MOV ESI,0x197                       ; 00452e0b
    PUSH 0x57cb56                       ; 00452e10 | = "Error reading KFM model"
    MOV dword ptr [0x01cc4800],EBX      ; 00452e15 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00452e1b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00452e21
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00452e26
    CMP dword ptr [ESP],0x0             ; 00452e29
        ;   Label: LAB_00452e29
    JNZ 0x00452eed                      ; 00452e2d
        ;   XREF to: 00452eed (CONDITIONAL_JUMP)  ; LAB_00452eed
    ADD ESP,0x38                        ; 00452e33
    POP EBP                             ; 00452e36
    POP EDI                             ; 00452e37
    POP ESI                             ; 00452e38
    POP EBX                             ; 00452e39
    RET                                 ; 00452e3a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452e3b
        ;   Label: LAB_00452e3b
    MOV ESI,dword ptr [EAX + 0x110]     ; 00452e3f
    PUSH ESI                            ; 00452e45
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 00452e46
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 00452e4b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00452e4e
    MOV dword ptr [EBX + 0x11c],EAX     ; 00452e52
    TEST EAX,EAX                        ; 00452e58
    JZ 0x00452ec6                       ; 00452e5a
        ;   XREF to: 00452ec6 (CONDITIONAL_JUMP)  ; LAB_00452ec6
    MOV EBX,0x1                         ; 00452e5c
        ;   Label: LAB_00452e5c
    MOV ESI,EBP                         ; 00452e61
    PUSH ESI                            ; 00452e63
        ;   Label: LAB_00452e63
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00452e64
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00452e69
    TEST EAX,EAX                        ; 00452e6c
    JL 0x00452e7a                       ; 00452e6e
        ;   XREF to: 00452e7a (CONDITIONAL_JUMP)  ; LAB_00452e7a
    CMP EAX,0xa                         ; 00452e70
    JNZ 0x00452e63                      ; 00452e73
        ;   XREF to: 00452e63 (CONDITIONAL_JUMP)  ; LAB_00452e63
    DEC EBX                             ; 00452e75
    TEST EBX,EBX                        ; 00452e76
    JG 0x00452e63                       ; 00452e78
        ;   XREF to: 00452e63 (CONDITIONAL_JUMP)  ; LAB_00452e63
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452e7a
        ;   Label: LAB_00452e7a
    MOV EDX,dword ptr [EAX + 0x110]     ; 00452e7e
    XOR EBX,EBX                         ; 00452e84
    TEST EDX,EDX                        ; 00452e86
    JLE 0x00452d30                      ; 00452e88
        ;   XREF to: 00452d30 (CONDITIONAL_JUMP)  ; LAB_00452d30
    LEA EAX,[ESP + 0x20]                ; 00452e8e
        ;   Label: LAB_00452e8e
    PUSH EAX                            ; 00452e92
    PUSH 0x57cb31                       ; 00452e93 | DAT_0057cb31
    PUSH EBP                            ; 00452e98
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00452e99
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00452e9e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452ea1
    MOV EAX,dword ptr [EAX + 0x11c]     ; 00452ea5
    LEA ESI,[EAX + EBX*0x1]             ; 00452eab
    MOV AL,byte ptr [ESP + 0x20]        ; 00452eae
    MOV byte ptr [ESI],AL               ; 00452eb2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00452eb4
    INC EBX                             ; 00452eb8
    CMP EBX,dword ptr [EAX + 0x110]     ; 00452eb9
    JL 0x00452e8e                       ; 00452ebf
        ;   XREF to: 00452e8e (CONDITIONAL_JUMP)  ; LAB_00452e8e
    JMP 0x00452d30                      ; 00452ec1
        ;   XREF to: 00452d30 (UNCONDITIONAL_JUMP)  ; LAB_00452d30
    MOV EAX,0x57cafd                    ; 00452ec6 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00452ec6
    MOV EDX,0x178                       ; 00452ecb
    PUSH 0x57cb10                       ; 00452ed0 | = "Out of memory for envMapOpacList"
    MOV [0x01cc4800],EAX                ; 00452ed5 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00452eda | DAT_01cc4804
    CALL FUN_004c8440                   ; 00452ee0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00452ee5
    JMP 0x00452e5c                      ; 00452ee8
        ;   XREF to: 00452e5c (UNCONDITIONAL_JUMP)  ; LAB_00452e5c
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00452eed
        ;   Label: LAB_00452eed
    PUSH EBP                            ; 00452ef1
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0 ; 00452ef2
        ;   XREF to: 00453ff0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0()
    ADD ESP,0x4                         ; 00452ef7
    ADD ESP,0x38                        ; 00452efa
    POP EBP                             ; 00452efd
    POP EDI                             ; 00452efe
    POP ESI                             ; 00452eff
    POP EBX                             ; 00452f00
    RET                                 ; 00452f01

