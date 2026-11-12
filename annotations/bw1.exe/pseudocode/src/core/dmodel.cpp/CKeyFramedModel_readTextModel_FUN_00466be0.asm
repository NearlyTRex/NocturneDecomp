; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00466be0(CKeyFramedModel *this_ptr,_FILE *file)
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
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 at 0046695f
;
; Referenced Globals:
;   undefined4 DAT_005d938a
;   TerminatedCString s_core_dmodel_cpp_005d938e
;   TerminatedCString s_KFM_file_is_invalid_vers_005d93a1
;   TerminatedCString s_core_dmodel_cpp_005d93c0
;   TerminatedCString s_KFM_file_is_version_d_th_005d93d3
;   TerminatedCString s_d_d_d_d_d_005d9416
;   undefined4 DAT_005d9426
;   undefined4 DAT_005d942a
;   undefined4 DAT_005d942e
;   undefined4 DAT_005d9432
;   TerminatedCString s_d_d_d_005d9436
;   TerminatedCString s_d_d_005d9440
;   TerminatedCString s_d_d_d_005d9446
;   undefined4 DAT_005d9451
;   TerminatedCString s_core_dmodel_cpp_005d9453
;   ... and 8 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340
;   core_dmodel.cpp_FUN_00467650
;   core_main.c_FUN_005030e0
;   crt_memory.c_operator_new_array_FUN_005c1268
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466be0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0
    PUSH ESI                            ; 00466be1
    PUSH EDI                            ; 00466be2
    PUSH EBP                            ; 00466be3
    SUB ESP,0x38                        ; 00466be4
    MOV EBP,dword ptr [ESP + 0x50]      ; 00466be7
    MOV EDX,0xffffffff                  ; 00466beb
    MOV EBX,0x1                         ; 00466bf0
    MOV ESI,EBP                         ; 00466bf5
    MOV dword ptr [ESP + 0x4],EDX       ; 00466bf7
    PUSH ESI                            ; 00466bfb
        ;   Label: LAB_00466bfb
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466bfc
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466c01
    TEST EAX,EAX                        ; 00466c04
    JL 0x00466c12                       ; 00466c06
        ;   XREF to: 00466c12 (CONDITIONAL_JUMP)  ; LAB_00466c12
    CMP EAX,0xa                         ; 00466c08
    JNZ 0x00466bfb                      ; 00466c0b
        ;   XREF to: 00466bfb (CONDITIONAL_JUMP)  ; LAB_00466bfb
    DEC EBX                             ; 00466c0d
    TEST EBX,EBX                        ; 00466c0e
    JG 0x00466bfb                       ; 00466c10
        ;   XREF to: 00466bfb (CONDITIONAL_JUMP)  ; LAB_00466bfb
    LEA EAX,[ESP + 0x4]                 ; 00466c12
        ;   Label: LAB_00466c12
    PUSH EAX                            ; 00466c16
    PUSH 0x5d938a                       ; 00466c17 | DAT_005d938a
    PUSH EBP                            ; 00466c1c
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466c1d
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00466c22
    MOV ECX,dword ptr [ESP + 0x4]       ; 00466c25
    CMP ECX,0x5                         ; 00466c29
    JGE 0x00466c52                      ; 00466c2c
        ;   XREF to: 00466c52 (CONDITIONAL_JUMP)  ; LAB_00466c52
    PUSH ECX                            ; 00466c2e
    MOV EBX,0x5d938e                    ; 00466c2f | = "..\\core\\dmodel.cpp"
    MOV ESI,0x128                       ; 00466c34
    PUSH 0x5d93a1                       ; 00466c39 | = "KFM file is invalid version %d"
    MOV dword ptr [0x01d1d400],EBX      ; 00466c3e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00466c44 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00466c4a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00466c4f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00466c52
        ;   Label: LAB_00466c52
    CMP EAX,0x8                         ; 00466c56
    JG 0x00466e1d                       ; 00466c59
        ;   XREF to: 00466e1d (CONDITIONAL_JUMP)  ; LAB_00466e1d
    MOV EBX,0x1                         ; 00466c5f
        ;   Label: LAB_00466c5f
    MOV ESI,EBP                         ; 00466c64
    PUSH ESI                            ; 00466c66
        ;   Label: LAB_00466c66
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466c67
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466c6c
    TEST EAX,EAX                        ; 00466c6f
    JL 0x00466c7d                       ; 00466c71
        ;   XREF to: 00466c7d (CONDITIONAL_JUMP)  ; LAB_00466c7d
    CMP EAX,0xa                         ; 00466c73
    JNZ 0x00466c66                      ; 00466c76
        ;   XREF to: 00466c66 (CONDITIONAL_JUMP)  ; LAB_00466c66
    DEC EBX                             ; 00466c78
    TEST EBX,EBX                        ; 00466c79
    JG 0x00466c66                       ; 00466c7b
        ;   XREF to: 00466c66 (CONDITIONAL_JUMP)  ; LAB_00466c66
    LEA EAX,[ESP + 0x18]                ; 00466c7d
        ;   Label: LAB_00466c7d
    PUSH EAX                            ; 00466c81
    LEA EAX,[ESP + 0x18]                ; 00466c82
    PUSH EAX                            ; 00466c86
    LEA EAX,[ESP + 0x18]                ; 00466c87
    PUSH EAX                            ; 00466c8b
    LEA EAX,[ESP + 0x18]                ; 00466c8c
    PUSH EAX                            ; 00466c90
    LEA EAX,[ESP + 0x18]                ; 00466c91
    PUSH EAX                            ; 00466c95
    PUSH 0x5d9416                       ; 00466c96 | = "%d,%d,%d,%d,%d\n"
    PUSH EBP                            ; 00466c9b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466c9c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 00466ca1
    MOV ESI,dword ptr [ESP + 0x18]      ; 00466ca4
    PUSH ESI                            ; 00466ca8
    MOV EDI,dword ptr [ESP + 0x18]      ; 00466ca9
    PUSH EDI                            ; 00466cad
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466cae
    PUSH EAX                            ; 00466cb2
    MOV EDX,dword ptr [ESP + 0x18]      ; 00466cb3
    PUSH EDX                            ; 00466cb7
    MOV ECX,dword ptr [ESP + 0x18]      ; 00466cb8
    PUSH ECX                            ; 00466cbc
    MOV EBX,dword ptr [ESP + 0x60]      ; 00466cbd
    PUSH EBX                            ; 00466cc1
    MOV ESI,EBP                         ; 00466cc2
    CALL core_dmodel.cpp_FUN_00467650   ; 00466cc4
        ;   XREF to: 00467650 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467650()
    MOV EBX,0x1                         ; 00466cc9
    ADD ESP,0x18                        ; 00466cce
    PUSH ESI                            ; 00466cd1
        ;   Label: LAB_00466cd1
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466cd2
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466cd7
    TEST EAX,EAX                        ; 00466cda
    JL 0x00466ce8                       ; 00466cdc
        ;   XREF to: 00466ce8 (CONDITIONAL_JUMP)  ; LAB_00466ce8
    CMP EAX,0xa                         ; 00466cde
    JNZ 0x00466cd1                      ; 00466ce1
        ;   XREF to: 00466cd1 (CONDITIONAL_JUMP)  ; LAB_00466cd1
    DEC EBX                             ; 00466ce3
    TEST EBX,EBX                        ; 00466ce4
    JG 0x00466cd1                       ; 00466ce6
        ;   XREF to: 00466cd1 (CONDITIONAL_JUMP)  ; LAB_00466cd1
    MOV EAX,ESP                         ; 00466ce8
        ;   Label: LAB_00466ce8
    PUSH EAX                            ; 00466cea
    PUSH 0x5d9426                       ; 00466ceb | DAT_005d9426
    PUSH EBP                            ; 00466cf0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466cf1
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00466cf6
    CMP dword ptr [ESP + 0x4],0x6       ; 00466cf9
    JL 0x00466e48                       ; 00466cfe
        ;   XREF to: 00466e48 (CONDITIONAL_JUMP)  ; LAB_00466e48
    MOV EBX,0x1                         ; 00466d04
    MOV ESI,EBP                         ; 00466d09
    PUSH ESI                            ; 00466d0b
        ;   Label: LAB_00466d0b
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466d0c
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466d11
    TEST EAX,EAX                        ; 00466d14
    JL 0x00466d22                       ; 00466d16
        ;   XREF to: 00466d22 (CONDITIONAL_JUMP)  ; LAB_00466d22
    CMP EAX,0xa                         ; 00466d18
    JNZ 0x00466d0b                      ; 00466d1b
        ;   XREF to: 00466d0b (CONDITIONAL_JUMP)  ; LAB_00466d0b
    DEC EBX                             ; 00466d1d
    TEST EBX,EBX                        ; 00466d1e
    JG 0x00466d0b                       ; 00466d20
        ;   XREF to: 00466d0b (CONDITIONAL_JUMP)  ; LAB_00466d0b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466d22
        ;   Label: LAB_00466d22
    ADD EAX,0x35c                       ; 00466d26
    PUSH EAX                            ; 00466d2b
    PUSH 0x5d942a                       ; 00466d2c | DAT_005d942a
    PUSH EBP                            ; 00466d31
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466d32
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00466d37
    CMP dword ptr [ESP + 0x4],0x8       ; 00466d3a
        ;   Label: LAB_00466d3a
    JL 0x00466e5b                       ; 00466d3f
        ;   XREF to: 00466e5b (CONDITIONAL_JUMP)  ; LAB_00466e5b
    MOV EBX,0x1                         ; 00466d45
    MOV ESI,EBP                         ; 00466d4a
    PUSH ESI                            ; 00466d4c
        ;   Label: LAB_00466d4c
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466d4d
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466d52
    TEST EAX,EAX                        ; 00466d55
    JL 0x00466d63                       ; 00466d57
        ;   XREF to: 00466d63 (CONDITIONAL_JUMP)  ; LAB_00466d63
    CMP EAX,0xa                         ; 00466d59
    JNZ 0x00466d4c                      ; 00466d5c
        ;   XREF to: 00466d4c (CONDITIONAL_JUMP)  ; LAB_00466d4c
    DEC EBX                             ; 00466d5e
    TEST EBX,EBX                        ; 00466d5f
    JG 0x00466d4c                       ; 00466d61
        ;   XREF to: 00466d4c (CONDITIONAL_JUMP)  ; LAB_00466d4c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466d63
        ;   Label: LAB_00466d63
    ADD EAX,0x360                       ; 00466d67
    PUSH EAX                            ; 00466d6c
    PUSH 0x5d942e                       ; 00466d6d | DAT_005d942e
    PUSH EBP                            ; 00466d72
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466d73
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00466d78
    XOR EAX,EAX                         ; 00466d7b
        ;   Label: LAB_00466d7b
    MOV EDX,dword ptr [ESP + 0x4]       ; 00466d7d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00466d81
    CMP EDX,0x7                         ; 00466d85
    JL 0x00466dbb                       ; 00466d88
        ;   XREF to: 00466dbb (CONDITIONAL_JUMP)  ; LAB_00466dbb
    MOV EBX,0x1                         ; 00466d8a
    MOV ESI,EBP                         ; 00466d8f
    PUSH ESI                            ; 00466d91
        ;   Label: LAB_00466d91
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466d92
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466d97
    TEST EAX,EAX                        ; 00466d9a
    JL 0x00466da8                       ; 00466d9c
        ;   XREF to: 00466da8 (CONDITIONAL_JUMP)  ; LAB_00466da8
    CMP EAX,0xa                         ; 00466d9e
    JNZ 0x00466d91                      ; 00466da1
        ;   XREF to: 00466d91 (CONDITIONAL_JUMP)  ; LAB_00466d91
    DEC EBX                             ; 00466da3
    TEST EBX,EBX                        ; 00466da4
    JG 0x00466d91                       ; 00466da6
        ;   XREF to: 00466d91 (CONDITIONAL_JUMP)  ; LAB_00466d91
    LEA EAX,[ESP + 0x1c]                ; 00466da8
        ;   Label: LAB_00466da8
    PUSH EAX                            ; 00466dac
    PUSH 0x5d9432                       ; 00466dad | DAT_005d9432
    PUSH EBP                            ; 00466db2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466db3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00466db8
    MOV EBX,0x1                         ; 00466dbb
        ;   Label: LAB_00466dbb
    MOV ESI,EBP                         ; 00466dc0
    PUSH ESI                            ; 00466dc2
        ;   Label: LAB_00466dc2
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466dc3
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466dc8
    TEST EAX,EAX                        ; 00466dcb
    JL 0x00466dd9                       ; 00466dcd
        ;   XREF to: 00466dd9 (CONDITIONAL_JUMP)  ; LAB_00466dd9
    CMP EAX,0xa                         ; 00466dcf
    JNZ 0x00466dc2                      ; 00466dd2
        ;   XREF to: 00466dc2 (CONDITIONAL_JUMP)  ; LAB_00466dc2
    DEC EBX                             ; 00466dd4
    TEST EBX,EBX                        ; 00466dd5
    JG 0x00466dc2                       ; 00466dd7
        ;   XREF to: 00466dc2 (CONDITIONAL_JUMP)  ; LAB_00466dc2
    XOR ESI,ESI                         ; 00466dd9
        ;   Label: LAB_00466dd9
    XOR EBX,EBX                         ; 00466ddb
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00466ddd
        ;   Label: LAB_00466ddd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466de1
    MOV ECX,dword ptr [EDI + 0x100]     ; 00466de5
    MOV EAX,dword ptr [EAX + 0x104]     ; 00466deb
    IMUL EAX,ECX                        ; 00466df1
    CMP EBX,EAX                         ; 00466df4
    JGE 0x00466e6e                      ; 00466df6
        ;   XREF to: 00466e6e (CONDITIONAL_JUMP)  ; LAB_00466e6e
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00466df8
    ADD EAX,ESI                         ; 00466dfe
    LEA EDI,[EAX + 0x8]                 ; 00466e00
    PUSH EDI                            ; 00466e03
    LEA EDI,[EAX + 0x4]                 ; 00466e04
    PUSH EDI                            ; 00466e07
    PUSH EAX                            ; 00466e08
    PUSH 0x5d9436                       ; 00466e09 | = "%d,%d,%d\n"
    PUSH EBP                            ; 00466e0e
    INC EBX                             ; 00466e0f
    ADD ESI,0xc                         ; 00466e10
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466e13
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00466e18
    JMP 0x00466ddd                      ; 00466e1b
        ;   XREF to: 00466ddd (UNCONDITIONAL_JUMP)  ; LAB_00466ddd
    PUSH 0x8                            ; 00466e1d
        ;   Label: LAB_00466e1d
    PUSH EAX                            ; 00466e1f
    MOV EDX,0x5d93c0                    ; 00466e20 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x12b                       ; 00466e25
    PUSH 0x5d93d3                       ; 00466e2a | = "KFM file is version %d, this .exe can..."
    MOV dword ptr [0x01d1d400],EDX      ; 00466e2f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00466e35 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00466e3b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00466e40
    JMP 0x00466c5f                      ; 00466e43
        ;   XREF to: 00466c5f (UNCONDITIONAL_JUMP)  ; LAB_00466c5f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466e48
        ;   Label: LAB_00466e48
    MOV dword ptr [EAX + 0x35c],0x0     ; 00466e4c
    JMP 0x00466d3a                      ; 00466e56
        ;   XREF to: 00466d3a (UNCONDITIONAL_JUMP)  ; LAB_00466d3a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466e5b
        ;   Label: LAB_00466e5b
    MOV dword ptr [EAX + 0x360],0x0     ; 00466e5f
    JMP 0x00466d7b                      ; 00466e69
        ;   XREF to: 00466d7b (UNCONDITIONAL_JUMP)  ; LAB_00466d7b
    MOV EBX,0x1                         ; 00466e6e
        ;   Label: LAB_00466e6e
    MOV EDI,EBP                         ; 00466e73
    PUSH EDI                            ; 00466e75
        ;   Label: LAB_00466e75
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466e76
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466e7b
    TEST EAX,EAX                        ; 00466e7e
    JL 0x00466e8c                       ; 00466e80
        ;   XREF to: 00466e8c (CONDITIONAL_JUMP)  ; LAB_00466e8c
    CMP EAX,0xa                         ; 00466e82
    JNZ 0x00466e75                      ; 00466e85
        ;   XREF to: 00466e75 (CONDITIONAL_JUMP)  ; LAB_00466e75
    DEC EBX                             ; 00466e87
    TEST EBX,EBX                        ; 00466e88
    JG 0x00466e75                       ; 00466e8a
        ;   XREF to: 00466e75 (CONDITIONAL_JUMP)  ; LAB_00466e75
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466e8c
        ;   Label: LAB_00466e8c
    XOR EBX,EBX                         ; 00466e90
    MOV ESI,dword ptr [EAX + 0x110]     ; 00466e92
    MOV dword ptr [ESP + 0x2c],EBX      ; 00466e98
    TEST ESI,ESI                        ; 00466e9c
    JLE 0x00466f70                      ; 00466e9e
        ;   XREF to: 00466f70 (CONDITIONAL_JUMP)  ; LAB_00466f70
    MOV dword ptr [ESP + 0x28],EBX      ; 00466ea4
    MOV dword ptr [ESP + 0x24],EBX      ; 00466ea8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466eac
        ;   Label: LAB_00466eac
    MOV EBX,dword ptr [ESP + 0x28]      ; 00466eb0
    MOV EAX,dword ptr [EAX + 0x114]     ; 00466eb4
    ADD EBX,EAX                         ; 00466eba
    MOV dword ptr [ESP + 0x34],EBX      ; 00466ebc
    LEA EAX,[EBX + 0x4]                 ; 00466ec0
    PUSH EAX                            ; 00466ec3
    MOV EAX,dword ptr [ESP + 0x50]      ; 00466ec4
    MOV ESI,dword ptr [ESP + 0x28]      ; 00466ec8
    MOV EAX,dword ptr [EAX + 0x118]     ; 00466ecc
    ADD EAX,ESI                         ; 00466ed2
    PUSH EAX                            ; 00466ed4
    PUSH 0x5d9440                       ; 00466ed5 | = "%d,%d"
    PUSH EBP                            ; 00466eda
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466edb
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00466ee0
    MOV EAX,dword ptr [ESP + 0x34]      ; 00466ee3
    MOV EDI,dword ptr [EAX + 0x4]       ; 00466ee7
    XOR EBX,EBX                         ; 00466eea
    TEST EDI,EDI                        ; 00466eec
    JLE 0x00466f31                      ; 00466eee
        ;   XREF to: 00466f31 (CONDITIONAL_JUMP)  ; LAB_00466f31
    MOV ESI,dword ptr [ESP + 0x34]      ; 00466ef0
    MOV EDI,dword ptr [ESP + 0x34]      ; 00466ef4
    ADD EAX,0x18                        ; 00466ef8
    ADD ESI,0x1c                        ; 00466efb
    ADD EDI,0x20                        ; 00466efe
    MOV dword ptr [ESP + 0x30],EAX      ; 00466f01
    IMUL EAX,EBX,0xc                    ; 00466f05
        ;   Label: LAB_00466f05
    PUSH EDI                            ; 00466f08
    MOV EDX,dword ptr [ESP + 0x34]      ; 00466f09
    PUSH ESI                            ; 00466f0d
    ADD EAX,EDX                         ; 00466f0e
    PUSH EAX                            ; 00466f10
    PUSH 0x5d9446                       ; 00466f11 | = ", %d,%d,%d"
    PUSH EBP                            ; 00466f16
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466f17
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00466f1c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00466f1f
    ADD EDI,0xc                         ; 00466f23
    INC EBX                             ; 00466f26
    MOV ECX,dword ptr [EAX + 0x4]       ; 00466f27
    ADD ESI,0xc                         ; 00466f2a
    CMP EBX,ECX                         ; 00466f2d
    JL 0x00466f05                       ; 00466f2f
        ;   XREF to: 00466f05 (CONDITIONAL_JUMP)  ; LAB_00466f05
    PUSH 0x5d9451                       ; 00466f31 | DAT_005d9451
        ;   Label: LAB_00466f31
    PUSH EBP                            ; 00466f36
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466f37
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00466f3c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00466f3f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00466f43
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00466f47
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00466f4b
    ADD EDI,0x4                         ; 00466f4f
    ADD EAX,0x48                        ; 00466f52
    INC EDX                             ; 00466f55
    MOV ECX,dword ptr [EBX + 0x110]     ; 00466f56
    MOV dword ptr [ESP + 0x24],EDI      ; 00466f5c
    MOV dword ptr [ESP + 0x28],EAX      ; 00466f60
    MOV dword ptr [ESP + 0x2c],EDX      ; 00466f64
    CMP EDX,ECX                         ; 00466f68
    JL 0x00466eac                       ; 00466f6a
        ;   XREF to: 00466eac (CONDITIONAL_JUMP)  ; LAB_00466eac
    CMP dword ptr [ESP + 0x1c],0x0      ; 00466f70
        ;   Label: LAB_00466f70
    JNZ 0x0046708b                      ; 00466f75
        ;   XREF to: 0046708b (CONDITIONAL_JUMP)  ; LAB_0046708b
    LEA EAX,[EAX]                       ; 00466f7b
    MOV ECX,ECX                         ; 00466f7e
    MOV EBX,0x1                         ; 00466f80
        ;   Label: LAB_00466f80
    MOV ESI,EBP                         ; 00466f85
    PUSH ESI                            ; 00466f87
        ;   Label: LAB_00466f87
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466f88
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466f8d
    TEST EAX,EAX                        ; 00466f90
    JL 0x00466f9e                       ; 00466f92
        ;   XREF to: 00466f9e (CONDITIONAL_JUMP)  ; LAB_00466f9e
    CMP EAX,0xa                         ; 00466f94
    JNZ 0x00466f87                      ; 00466f97
        ;   XREF to: 00466f87 (CONDITIONAL_JUMP)  ; LAB_00466f87
    DEC EBX                             ; 00466f99
    TEST EBX,EBX                        ; 00466f9a
    JG 0x00466f87                       ; 00466f9c
        ;   XREF to: 00466f87 (CONDITIONAL_JUMP)  ; LAB_00466f87
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466f9e
        ;   Label: LAB_00466f9e
    MOV EBX,dword ptr [EAX + 0x120]     ; 00466fa2
    XOR ESI,ESI                         ; 00466fa8
    TEST EBX,EBX                        ; 00466faa
    JLE 0x00466fe0                      ; 00466fac
        ;   XREF to: 00466fe0 (CONDITIONAL_JUMP)  ; LAB_00466fe0
    LEA EBX,[EAX + 0x12c]               ; 00466fae
    PUSH EBX                            ; 00466fb4
        ;   Label: LAB_00466fb4
    PUSH 0x5d948b                       ; 00466fb5 | = "%[^\n]\n"
    PUSH EBP                            ; 00466fba
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00466fbb
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00466fc0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466fc3
    INC ESI                             ; 00466fc7
    MOV EDI,dword ptr [EAX + 0x120]     ; 00466fc8
    ADD EBX,0x48                        ; 00466fce
    CMP ESI,EDI                         ; 00466fd1
    JL 0x00466fb4                       ; 00466fd3
        ;   XREF to: 00466fb4 (CONDITIONAL_JUMP)  ; LAB_00466fb4
    LEA EAX,[EAX]                       ; 00466fd5
    LEA EDX,[EDX]                       ; 00466fdb
    MOV EBX,EBX                         ; 00466fde
    MOV EBX,0x1                         ; 00466fe0
        ;   Label: LAB_00466fe0
    MOV ESI,EBP                         ; 00466fe5
    PUSH ESI                            ; 00466fe7
        ;   Label: LAB_00466fe7
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00466fe8
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 00466fed
    TEST EAX,EAX                        ; 00466ff0
    JL 0x00466ffe                       ; 00466ff2
        ;   XREF to: 00466ffe (CONDITIONAL_JUMP)  ; LAB_00466ffe
    CMP EAX,0xa                         ; 00466ff4
    JNZ 0x00466fe7                      ; 00466ff7
        ;   XREF to: 00466fe7 (CONDITIONAL_JUMP)  ; LAB_00466fe7
    DEC EBX                             ; 00466ff9
    TEST EBX,EBX                        ; 00466ffa
    JG 0x00466fe7                       ; 00466ffc
        ;   XREF to: 00466fe7 (CONDITIONAL_JUMP)  ; LAB_00466fe7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466ffe
        ;   Label: LAB_00466ffe
    MOV EDX,dword ptr [EAX + 0x244]     ; 00467002
    XOR EBX,EBX                         ; 00467008
    TEST EDX,EDX                        ; 0046700a
    JLE 0x00467050                      ; 0046700c
        ;   XREF to: 00467050 (CONDITIONAL_JUMP)  ; LAB_00467050
    LEA EDI,[EAX + 0x248]               ; 0046700e
    LEA ESI,[EAX + 0x24c]               ; 00467014
    LEA EAX,[EBX*0x8 + 0x0]             ; 0046701a
        ;   Label: LAB_0046701a
    PUSH ESI                            ; 00467021
    ADD EAX,EDI                         ; 00467022
    PUSH EAX                            ; 00467024
    PUSH 0x5d9492                       ; 00467025 | = "%d,%d\n"
    PUSH EBP                            ; 0046702a
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0046702b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00467030
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00467033
    INC EBX                             ; 00467037
    MOV ECX,dword ptr [EAX + 0x244]     ; 00467038
    ADD ESI,0x8                         ; 0046703e
    CMP EBX,ECX                         ; 00467041
    JL 0x0046701a                       ; 00467043
        ;   XREF to: 0046701a (CONDITIONAL_JUMP)  ; LAB_0046701a
    LEA EAX,[EAX]                       ; 00467045
    LEA EDX,[EDX]                       ; 0046704b
    MOV EBX,EBX                         ; 0046704e
    TEST byte ptr [EBP + 0xc],0x20      ; 00467050
        ;   Label: LAB_00467050
    JZ 0x00467079                       ; 00467054
        ;   XREF to: 00467079 (CONDITIONAL_JUMP)  ; LAB_00467079
    MOV EBX,0x5d9499                    ; 00467056 | = "..\\core\\dmodel.cpp"
    MOV ESI,0x197                       ; 0046705b
    PUSH 0x5d94ac                       ; 00467060 | = "Error reading KFM model"
    MOV dword ptr [0x01d1d400],EBX      ; 00467065 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0046706b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00467071
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00467076
    CMP dword ptr [ESP],0x0             ; 00467079
        ;   Label: LAB_00467079
    JNZ 0x0046713d                      ; 0046707d
        ;   XREF to: 0046713d (CONDITIONAL_JUMP)  ; LAB_0046713d
    ADD ESP,0x38                        ; 00467083
    POP EBP                             ; 00467086
    POP EDI                             ; 00467087
    POP ESI                             ; 00467088
    POP EBX                             ; 00467089
    RET                                 ; 0046708a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046708b
        ;   Label: LAB_0046708b
    MOV ESI,dword ptr [EAX + 0x110]     ; 0046708f
    PUSH ESI                            ; 00467095
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 00467096
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 0046709b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0046709e
    MOV dword ptr [EBX + 0x11c],EAX     ; 004670a2
    TEST EAX,EAX                        ; 004670a8
    JZ 0x00467116                       ; 004670aa
        ;   XREF to: 00467116 (CONDITIONAL_JUMP)  ; LAB_00467116
    MOV EBX,0x1                         ; 004670ac
        ;   Label: LAB_004670ac
    MOV ESI,EBP                         ; 004670b1
    PUSH ESI                            ; 004670b3
        ;   Label: LAB_004670b3
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 004670b4
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 004670b9
    TEST EAX,EAX                        ; 004670bc
    JL 0x004670ca                       ; 004670be
        ;   XREF to: 004670ca (CONDITIONAL_JUMP)  ; LAB_004670ca
    CMP EAX,0xa                         ; 004670c0
    JNZ 0x004670b3                      ; 004670c3
        ;   XREF to: 004670b3 (CONDITIONAL_JUMP)  ; LAB_004670b3
    DEC EBX                             ; 004670c5
    TEST EBX,EBX                        ; 004670c6
    JG 0x004670b3                       ; 004670c8
        ;   XREF to: 004670b3 (CONDITIONAL_JUMP)  ; LAB_004670b3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004670ca
        ;   Label: LAB_004670ca
    MOV EDX,dword ptr [EAX + 0x110]     ; 004670ce
    XOR EBX,EBX                         ; 004670d4
    TEST EDX,EDX                        ; 004670d6
    JLE 0x00466f80                      ; 004670d8
        ;   XREF to: 00466f80 (CONDITIONAL_JUMP)  ; LAB_00466f80
    LEA EAX,[ESP + 0x20]                ; 004670de
        ;   Label: LAB_004670de
    PUSH EAX                            ; 004670e2
    PUSH 0x5d9487                       ; 004670e3 | DAT_005d9487
    PUSH EBP                            ; 004670e8
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004670e9
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004670ee
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004670f1
    MOV EAX,dword ptr [EAX + 0x11c]     ; 004670f5
    LEA ESI,[EAX + EBX*0x1]             ; 004670fb
    MOV AL,byte ptr [ESP + 0x20]        ; 004670fe
    MOV byte ptr [ESI],AL               ; 00467102
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00467104
    INC EBX                             ; 00467108
    CMP EBX,dword ptr [EAX + 0x110]     ; 00467109
    JL 0x004670de                       ; 0046710f
        ;   XREF to: 004670de (CONDITIONAL_JUMP)  ; LAB_004670de
    JMP 0x00466f80                      ; 00467111
        ;   XREF to: 00466f80 (UNCONDITIONAL_JUMP)  ; LAB_00466f80
    MOV EAX,0x5d9453                    ; 00467116 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00467116
    MOV EDX,0x178                       ; 0046711b
    PUSH 0x5d9466                       ; 00467120 | = "Out of memory for envMapOpacList"
    MOV [0x01d1d400],EAX                ; 00467125 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0046712a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00467130
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00467135
    JMP 0x004670ac                      ; 00467138
        ;   XREF to: 004670ac (UNCONDITIONAL_JUMP)  ; LAB_004670ac
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0046713d
        ;   Label: LAB_0046713d
    PUSH EBP                            ; 00467141
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340 ; 00467142
        ;   XREF to: 00468340 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00467147
    ADD ESP,0x38                        ; 0046714a
    POP EBP                             ; 0046714d
    POP EDI                             ; 0046714e
    POP ESI                             ; 0046714f
    POP EBX                             ; 00467150
    RET                                 ; 00467151

