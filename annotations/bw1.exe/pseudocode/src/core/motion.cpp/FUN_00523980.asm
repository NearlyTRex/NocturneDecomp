; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00523980(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00563090 at 00563366
;
; Referenced Globals:
;   undefined4 DAT_005ea93b
;   TerminatedCString s_core_motion_cpp_005ea93f
;   TerminatedCString s_Error_reading_motion_lis_005ea952
;   TerminatedCString s_core_motion_cpp_005ea96d
;   TerminatedCString s_Can_t_read_motion_list_i_005ea980
;   undefined4 DAT_005ea9f3
;   undefined4 DAT_005ea9f7
;   undefined4 DAT_005ea9fb
;   TerminatedCString s_f_d_d_d_005ea9ff
;   TerminatedCString s_d_d_f_005eaa14
;   TerminatedCString s_d_f_d_005eaa1e
;   TerminatedCString s_d_f_005eaa28
;   TerminatedCString s_d_d_005eaa2f
;   undefined4 DAT_005eaa36
;   TerminatedCString s_core_motion_cpp_005eaa3a
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005c08d0
;   unkafter_box.cpp_FUN_00523910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523980
        ;   Label: core_motion.cpp_FUN_00523980
    PUSH ESI                            ; 00523981
    PUSH EDI                            ; 00523982
    PUSH EBP                            ; 00523983
    SUB ESP,0x18                        ; 00523984
    MOV EDI,dword ptr [ESP + 0x30]      ; 00523987
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052398b
    PUSH EDX                            ; 0052398f
    CALL unkafter_box.cpp_FUN_00523910  ; 00523990
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; undefined unkafter_box.cpp_FUN_00523910()
    MOV ECX,0xffffffff                  ; 00523995
    ADD ESP,0x4                         ; 0052399a
    MOV EBX,EDI                         ; 0052399d
    MOV dword ptr [ESP + 0x4],ECX       ; 0052399f
    PUSH EBX                            ; 005239a3
        ;   Label: LAB_005239a3
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005239a4
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 005239a9
    TEST EAX,EAX                        ; 005239ac
    JL 0x005239b5                       ; 005239ae
        ;   XREF to: 005239b5 (CONDITIONAL_JUMP)  ; LAB_005239b5
    CMP EAX,0xa                         ; 005239b0
    JNZ 0x005239a3                      ; 005239b3
        ;   XREF to: 005239a3 (CONDITIONAL_JUMP)  ; LAB_005239a3
    LEA EAX,[ESP + 0x4]                 ; 005239b5
        ;   Label: LAB_005239b5
    PUSH EAX                            ; 005239b9
    PUSH 0x5ea93b                       ; 005239ba | DAT_005ea93b
    PUSH EDI                            ; 005239bf
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005239c0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 005239c5
    CMP dword ptr [ESP + 0x4],0x0       ; 005239c8
    JL 0x00523d3a                       ; 005239cd
        ;   XREF to: 00523d3a (CONDITIONAL_JUMP)  ; LAB_00523d3a
    MOV EAX,dword ptr [ESP + 0x4]       ; 005239d3
        ;   Label: LAB_005239d3
    CMP EAX,0x3                         ; 005239d7
    JG 0x00523d62                       ; 005239da
        ;   XREF to: 00523d62 (CONDITIONAL_JUMP)  ; LAB_00523d62
    MOV EBX,EDI                         ; 005239e0
        ;   Label: LAB_005239e0
    PUSH EBX                            ; 005239e2
        ;   Label: LAB_005239e2
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005239e3
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 005239e8
    TEST EAX,EAX                        ; 005239eb
    JL 0x005239f4                       ; 005239ed
        ;   XREF to: 005239f4 (CONDITIONAL_JUMP)  ; LAB_005239f4
    CMP EAX,0xa                         ; 005239ef
    JNZ 0x005239e2                      ; 005239f2
        ;   XREF to: 005239e2 (CONDITIONAL_JUMP)  ; LAB_005239e2
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005239f4
        ;   Label: LAB_005239f4
    PUSH ESI                            ; 005239f8
    PUSH 0x5ea9f3                       ; 005239f9 | DAT_005ea9f3
    PUSH EDI                            ; 005239fe
    XOR EBX,EBX                         ; 005239ff
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523a01
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EBP,dword ptr [ESI]             ; 00523a06
    ADD ESP,0xc                         ; 00523a08
    TEST EBP,EBP                        ; 00523a0b
    JLE 0x00523a30                      ; 00523a0d
        ;   XREF to: 00523a30 (CONDITIONAL_JUMP)  ; LAB_00523a30
    ADD ESI,0x4                         ; 00523a0f
    PUSH ESI                            ; 00523a12
        ;   Label: LAB_00523a12
    PUSH 0x5ea9f7                       ; 00523a13 | DAT_005ea9f7
    PUSH EDI                            ; 00523a18
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523a19
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00523a1e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00523a21
    INC EBX                             ; 00523a25
    MOV EDX,dword ptr [EAX]             ; 00523a26
    ADD ESI,0x1e                        ; 00523a28
    CMP EBX,EDX                         ; 00523a2b
    JL 0x00523a12                       ; 00523a2d
        ;   XREF to: 00523a12 (CONDITIONAL_JUMP)  ; LAB_00523a12
    NOP                                 ; 00523a2f
    MOV ESI,EDI                         ; 00523a30
        ;   Label: LAB_00523a30
    PUSH ESI                            ; 00523a32
        ;   Label: LAB_00523a32
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523a33
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523a38
    TEST EAX,EAX                        ; 00523a3b
    JL 0x00523a44                       ; 00523a3d
        ;   XREF to: 00523a44 (CONDITIONAL_JUMP)  ; LAB_00523a44
    CMP EAX,0xa                         ; 00523a3f
    JNZ 0x00523a32                      ; 00523a42
        ;   XREF to: 00523a32 (CONDITIONAL_JUMP)  ; LAB_00523a32
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00523a44
        ;   Label: LAB_00523a44
    ADD EAX,0x1c24                      ; 00523a48
    PUSH EAX                            ; 00523a4d
    PUSH 0x5ea9fb                       ; 00523a4e | DAT_005ea9fb
    PUSH EDI                            ; 00523a53
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523a54
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00523a59
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00523a5c
    XOR ECX,ECX                         ; 00523a60
    MOV EBX,dword ptr [EAX + 0x1c24]    ; 00523a62
    MOV dword ptr [ESP + 0xc],ECX       ; 00523a68
    TEST EBX,EBX                        ; 00523a6c
    JLE 0x00523d32                      ; 00523a6e
        ;   XREF to: 00523d32 (CONDITIONAL_JUMP)  ; LAB_00523d32
    ADD EAX,0x1c28                      ; 00523a74
    MOV dword ptr [ESP + 0x8],EAX       ; 00523a79
    MOV ESI,dword ptr [ESP + 0x8]       ; 00523a7d
        ;   Label: LAB_00523a7d
    MOV EBX,EDI                         ; 00523a81
    PUSH EBX                            ; 00523a83
        ;   Label: LAB_00523a83
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523a84
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523a89
    TEST EAX,EAX                        ; 00523a8c
    JL 0x00523a95                       ; 00523a8e
        ;   XREF to: 00523a95 (CONDITIONAL_JUMP)  ; LAB_00523a95
    CMP EAX,0xa                         ; 00523a90
    JNZ 0x00523a83                      ; 00523a93
        ;   XREF to: 00523a83 (CONDITIONAL_JUMP)  ; LAB_00523a83
    LEA EAX,[ESI + 0x64]                ; 00523a95
        ;   Label: LAB_00523a95
    PUSH EAX                            ; 00523a98
    LEA EAX,[ESI + 0x60]                ; 00523a99
    PUSH EAX                            ; 00523a9c
    LEA EAX,[ESI + 0x24]                ; 00523a9d
    PUSH EAX                            ; 00523aa0
    LEA EAX,[ESI + 0x20]                ; 00523aa1
    PUSH EAX                            ; 00523aa4
    PUSH ESI                            ; 00523aa5
    PUSH 0x5ea9ff                       ; 00523aa6 | = "\"%[^\"]\",%f,%d,%d,%d\n"
    PUSH EDI                            ; 00523aab
    MOV EBX,EDI                         ; 00523aac
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523aae
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x1c                        ; 00523ab3
    PUSH EBX                            ; 00523ab6
        ;   Label: LAB_00523ab6
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523ab7
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523abc
    TEST EAX,EAX                        ; 00523abf
    JL 0x00523ac8                       ; 00523ac1
        ;   XREF to: 00523ac8 (CONDITIONAL_JUMP)  ; LAB_00523ac8
    CMP EAX,0xa                         ; 00523ac3
    JNZ 0x00523ab6                      ; 00523ac6
        ;   XREF to: 00523ab6 (CONDITIONAL_JUMP)  ; LAB_00523ab6
    LEA EAX,[ESI + 0x38]                ; 00523ac8
        ;   Label: LAB_00523ac8
    PUSH EAX                            ; 00523acb
    LEA EAX,[ESI + 0x34]                ; 00523acc
    PUSH EAX                            ; 00523acf
    LEA EAX,[ESI + 0x28]                ; 00523ad0
    PUSH EAX                            ; 00523ad3
    PUSH 0x5eaa14                       ; 00523ad4 | = "%d,%d,%f\n"
    PUSH EDI                            ; 00523ad9
    MOV EBX,EDI                         ; 00523ada
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523adc
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 00523ae1
    PUSH EBX                            ; 00523ae4
        ;   Label: LAB_00523ae4
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523ae5
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523aea
    TEST EAX,EAX                        ; 00523aed
    JL 0x00523af6                       ; 00523aef
        ;   XREF to: 00523af6 (CONDITIONAL_JUMP)  ; LAB_00523af6
    CMP EAX,0xa                         ; 00523af1
    JNZ 0x00523ae4                      ; 00523af4
        ;   XREF to: 00523ae4 (CONDITIONAL_JUMP)  ; LAB_00523ae4
    LEA EAX,[ESI + 0x40]                ; 00523af6
        ;   Label: LAB_00523af6
    PUSH EAX                            ; 00523af9
    LEA EAX,[ESI + 0x3c]                ; 00523afa
    PUSH EAX                            ; 00523afd
    LEA EAX,[ESP + 0x8]                 ; 00523afe
    PUSH EAX                            ; 00523b02
    PUSH 0x5eaa1e                       ; 00523b03 | = "%d,%f,%d\n"
    PUSH EDI                            ; 00523b08
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523b09
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 00523b0e
    MOV EAX,dword ptr [ESP]             ; 00523b11
    MOV EBX,EDI                         ; 00523b14
    MOV dword ptr [ESI + 0x30],EAX      ; 00523b16
    PUSH EBX                            ; 00523b19
        ;   Label: LAB_00523b19
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523b1a
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523b1f
    TEST EAX,EAX                        ; 00523b22
    JL 0x00523b2b                       ; 00523b24
        ;   XREF to: 00523b2b (CONDITIONAL_JUMP)  ; LAB_00523b2b
    CMP EAX,0xa                         ; 00523b26
    JNZ 0x00523b19                      ; 00523b29
        ;   XREF to: 00523b19 (CONDITIONAL_JUMP)  ; LAB_00523b19
    LEA EAX,[ESI + 0x54]                ; 00523b2b
        ;   Label: LAB_00523b2b
    PUSH EAX                            ; 00523b2e
    LEA EAX,[ESI + 0x50]                ; 00523b2f
    PUSH EAX                            ; 00523b32
    PUSH 0x5eaa28                       ; 00523b33 | = "%d,%f\n"
    PUSH EDI                            ; 00523b38
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523b39
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 00523b3e
    CMP dword ptr [ESP + 0x4],0x3       ; 00523b41
    JL 0x00523d8d                       ; 00523b46
        ;   XREF to: 00523d8d (CONDITIONAL_JUMP)  ; LAB_00523d8d
    MOV EBX,EDI                         ; 00523b4c
    PUSH EBX                            ; 00523b4e
        ;   Label: LAB_00523b4e
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523b4f
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523b54
    TEST EAX,EAX                        ; 00523b57
    JL 0x00523b60                       ; 00523b59
        ;   XREF to: 00523b60 (CONDITIONAL_JUMP)  ; LAB_00523b60
    CMP EAX,0xa                         ; 00523b5b
    JNZ 0x00523b4e                      ; 00523b5e
        ;   XREF to: 00523b4e (CONDITIONAL_JUMP)  ; LAB_00523b4e
    LEA EAX,[ESI + 0x6c]                ; 00523b60
        ;   Label: LAB_00523b60
    PUSH EAX                            ; 00523b63
    LEA EAX,[ESI + 0x68]                ; 00523b64
    PUSH EAX                            ; 00523b67
    PUSH 0x5eaa2f                       ; 00523b68 | = "%d,%d\n"
    PUSH EDI                            ; 00523b6d
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523b6e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 00523b73
    MOV EBX,EDI                         ; 00523b76
        ;   Label: LAB_00523b76
    PUSH EBX                            ; 00523b78
        ;   Label: LAB_00523b78
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523b79
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523b7e
    TEST EAX,EAX                        ; 00523b81
    JL 0x00523b8a                       ; 00523b83
        ;   XREF to: 00523b8a (CONDITIONAL_JUMP)  ; LAB_00523b8a
    CMP EAX,0xa                         ; 00523b85
    JNZ 0x00523b78                      ; 00523b88
        ;   XREF to: 00523b78 (CONDITIONAL_JUMP)  ; LAB_00523b78
    LEA EAX,[ESI + 0x70]                ; 00523b8a
        ;   Label: LAB_00523b8a
    PUSH EAX                            ; 00523b8d
    PUSH 0x5eaa36                       ; 00523b8e | DAT_005eaa36
    PUSH EDI                            ; 00523b93
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523b94
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EBX,dword ptr [ESI + 0x70]      ; 00523b99
    ADD ESP,0xc                         ; 00523b9c
    TEST EBX,EBX                        ; 00523b9f
    JLE 0x00523c2e                      ; 00523ba1
        ;   XREF to: 00523c2e (CONDITIONAL_JUMP)  ; LAB_00523c2e
    IMUL EAX,EBX,0x18                   ; 00523ba7
    PUSH EAX                            ; 00523baa
    CALL crt_unknown.c_FUN_005c08d0     ; 00523bab
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00523bb0
    MOV dword ptr [ESI + 0x74],EAX      ; 00523bb3
    TEST EAX,EAX                        ; 00523bb6
    JNZ 0x00523bdd                      ; 00523bb8
        ;   XREF to: 00523bdd (CONDITIONAL_JUMP)  ; LAB_00523bdd
    MOV EDX,0x5eaa3a                    ; 00523bba | = "..\\core\\motion.cpp"
    MOV ECX,0xc0                        ; 00523bbf
    PUSH 0x5eaa4d                       ; 00523bc4 | = "Out of memory"
    MOV dword ptr [0x01d1d400],EDX      ; 00523bc9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00523bcf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00523bd5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00523bda
    XOR EBX,EBX                         ; 00523bdd
        ;   Label: LAB_00523bdd
    MOV EBP,dword ptr [ESI + 0x70]      ; 00523bdf
    MOV dword ptr [ESP + 0x14],EBX      ; 00523be2
    TEST EBP,EBP                        ; 00523be6
    JLE 0x00523c2e                      ; 00523be8
        ;   XREF to: 00523c2e (CONDITIONAL_JUMP)  ; LAB_00523c2e
    XOR EBP,EBP                         ; 00523bea
    MOV EBX,dword ptr [ESI + 0x74]      ; 00523bec
        ;   Label: LAB_00523bec
    ADD EBX,EBP                         ; 00523bef
    LEA EAX,[EBX + 0x14]                ; 00523bf1
    PUSH EAX                            ; 00523bf4
    LEA EAX,[EBX + 0x10]                ; 00523bf5
    PUSH EAX                            ; 00523bf8
    LEA EAX,[EBX + 0xc]                 ; 00523bf9
    PUSH EAX                            ; 00523bfc
    LEA EAX,[EBX + 0x8]                 ; 00523bfd
    PUSH EAX                            ; 00523c00
    LEA EAX,[ESP + 0x10]                ; 00523c01
    PUSH EAX                            ; 00523c05
    PUSH EBX                            ; 00523c06
    PUSH 0x5eaa5b                       ; 00523c07 | = "%d,%d,%d,%f,%f,%d\n"
    PUSH EDI                            ; 00523c0c
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523c0d
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x20                        ; 00523c12
    MOV EAX,dword ptr [ESP]             ; 00523c15
    MOV dword ptr [EBX + 0x4],EAX       ; 00523c18
    MOV EAX,dword ptr [ESP + 0x14]      ; 00523c1b
    ADD EBP,0x18                        ; 00523c1f
    INC EAX                             ; 00523c22
    MOV EDX,dword ptr [ESI + 0x70]      ; 00523c23
    MOV dword ptr [ESP + 0x14],EAX      ; 00523c26
    CMP EAX,EDX                         ; 00523c2a
    JL 0x00523bec                       ; 00523c2c
        ;   XREF to: 00523bec (CONDITIONAL_JUMP)  ; LAB_00523bec
    MOV EBX,EDI                         ; 00523c2e
        ;   Label: LAB_00523c2e
    PUSH EBX                            ; 00523c30
        ;   Label: LAB_00523c30
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523c31
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523c36
    TEST EAX,EAX                        ; 00523c39
    JL 0x00523c42                       ; 00523c3b
        ;   XREF to: 00523c42 (CONDITIONAL_JUMP)  ; LAB_00523c42
    CMP EAX,0xa                         ; 00523c3d
    JNZ 0x00523c30                      ; 00523c40
        ;   XREF to: 00523c30 (CONDITIONAL_JUMP)  ; LAB_00523c30
    LEA EAX,[ESI + 0x78]                ; 00523c42
        ;   Label: LAB_00523c42
    PUSH EAX                            ; 00523c45
    PUSH 0x5eaa6e                       ; 00523c46 | DAT_005eaa6e
    PUSH EDI                            ; 00523c4b
    XOR EBX,EBX                         ; 00523c4c
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523c4e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [ESI + 0x78]      ; 00523c53
    ADD ESP,0xc                         ; 00523c56
    TEST ECX,ECX                        ; 00523c59
    JLE 0x00523c92                      ; 00523c5b
        ;   XREF to: 00523c92 (CONDITIONAL_JUMP)  ; LAB_00523c92
    LEA EAX,[ESI + 0x7c]                ; 00523c5d
    LEA EBP,[ESI + 0x80]                ; 00523c60
    MOV dword ptr [ESP + 0x10],EAX      ; 00523c66
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523c6a
        ;   Label: LAB_00523c6a
    LEA EAX,[EBX*0x8 + 0x0]             ; 00523c6e
    PUSH EBP                            ; 00523c75
    ADD EAX,EDX                         ; 00523c76
    PUSH EAX                            ; 00523c78
    PUSH 0x5eaa72                       ; 00523c79 | = "%d,%d\n"
    PUSH EDI                            ; 00523c7e
    ADD EBP,0x8                         ; 00523c7f
    INC EBX                             ; 00523c82
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523c83
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [ESI + 0x78]      ; 00523c88
    ADD ESP,0x10                        ; 00523c8b
    CMP EBX,ECX                         ; 00523c8e
    JL 0x00523c6a                       ; 00523c90
        ;   XREF to: 00523c6a (CONDITIONAL_JUMP)  ; LAB_00523c6a
    CMP dword ptr [ESP + 0x4],0x2       ; 00523c92
        ;   Label: LAB_00523c92
    JL 0x00523d9f                       ; 00523c97
        ;   XREF to: 00523d9f (CONDITIONAL_JUMP)  ; LAB_00523d9f
    MOV EBP,EDI                         ; 00523c9d
    PUSH EBP                            ; 00523c9f
        ;   Label: LAB_00523c9f
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523ca0
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523ca5
    TEST EAX,EAX                        ; 00523ca8
    JL 0x00523cb1                       ; 00523caa
        ;   XREF to: 00523cb1 (CONDITIONAL_JUMP)  ; LAB_00523cb1
    CMP EAX,0xa                         ; 00523cac
    JNZ 0x00523c9f                      ; 00523caf
        ;   XREF to: 00523c9f (CONDITIONAL_JUMP)  ; LAB_00523c9f
    LEA EAX,[ESI + 0xf4]                ; 00523cb1
        ;   Label: LAB_00523cb1
    PUSH EAX                            ; 00523cb7
    PUSH 0x5eaa79                       ; 00523cb8 | DAT_005eaa79
    PUSH EDI                            ; 00523cbd
    XOR EBX,EBX                         ; 00523cbe
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523cc0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EBP,dword ptr [ESI + 0xf4]      ; 00523cc5
    ADD ESP,0xc                         ; 00523ccb
    TEST EBP,EBP                        ; 00523cce
    JLE 0x00523cf5                      ; 00523cd0
        ;   XREF to: 00523cf5 (CONDITIONAL_JUMP)  ; LAB_00523cf5
    LEA EBP,[ESI + 0xf8]                ; 00523cd2
    PUSH EBP                            ; 00523cd8
        ;   Label: LAB_00523cd8
    PUSH 0x5eaa7c                       ; 00523cd9 | DAT_005eaa7c
    PUSH EDI                            ; 00523cde
    INC EBX                             ; 00523cdf
    ADD EBP,0x4                         ; 00523ce0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00523ce3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [ESI + 0xf4]      ; 00523ce8
    ADD ESP,0xc                         ; 00523cee
    CMP EBX,EAX                         ; 00523cf1
    JL 0x00523cd8                       ; 00523cf3
        ;   XREF to: 00523cd8 (CONDITIONAL_JUMP)  ; LAB_00523cd8
    MOV EBP,EDI                         ; 00523cf5
        ;   Label: LAB_00523cf5
    PUSH EBP                            ; 00523cf7
        ;   Label: LAB_00523cf7
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00523cf8
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00523cfd
    TEST EAX,EAX                        ; 00523d00
    JL 0x00523d09                       ; 00523d02
        ;   XREF to: 00523d09 (CONDITIONAL_JUMP)  ; LAB_00523d09
    CMP EAX,0xa                         ; 00523d04
    JNZ 0x00523cf7                      ; 00523d07
        ;   XREF to: 00523cf7 (CONDITIONAL_JUMP)  ; LAB_00523cf7
    MOV ESI,dword ptr [ESP + 0x8]       ; 00523d09
        ;   Label: LAB_00523d09
    MOV EBP,dword ptr [ESP + 0xc]       ; 00523d0d
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00523d11
    ADD ESI,0x120                       ; 00523d15
    INC EBP                             ; 00523d1b
    MOV EDX,dword ptr [EBX + 0x1c24]    ; 00523d1c
    MOV dword ptr [ESP + 0x8],ESI       ; 00523d22
    MOV dword ptr [ESP + 0xc],EBP       ; 00523d26
    CMP EBP,EDX                         ; 00523d2a
    JL 0x00523a7d                       ; 00523d2c
        ;   XREF to: 00523a7d (CONDITIONAL_JUMP)  ; LAB_00523a7d
    ADD ESP,0x18                        ; 00523d32
        ;   Label: LAB_00523d32
    POP EBP                             ; 00523d35
    POP EDI                             ; 00523d36
    POP ESI                             ; 00523d37
    POP EBX                             ; 00523d38
    RET                                 ; 00523d39
    MOV ESI,0x5ea93f                    ; 00523d3a | = "..\\core\\motion.cpp"
        ;   Label: LAB_00523d3a
    MOV EBP,0x81                        ; 00523d3f
    PUSH 0x5ea952                       ; 00523d44 | = "Error reading motion list."
    MOV dword ptr [0x01d1d400],ESI      ; 00523d49 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00523d4f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00523d55
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00523d5a
    JMP 0x005239d3                      ; 00523d5d
        ;   XREF to: 005239d3 (UNCONDITIONAL_JUMP)  ; LAB_005239d3
    PUSH 0x3                            ; 00523d62
        ;   Label: LAB_00523d62
    PUSH EAX                            ; 00523d64
    MOV EDX,0x5ea96d                    ; 00523d65 | = "..\\core\\motion.cpp"
    MOV ECX,0x83                        ; 00523d6a
    PUSH 0x5ea980                       ; 00523d6f | = "Can't read motion list - it's version..."
    MOV dword ptr [0x01d1d400],EDX      ; 00523d74 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00523d7a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00523d80
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00523d85
    JMP 0x005239e0                      ; 00523d88
        ;   XREF to: 005239e0 (UNCONDITIONAL_JUMP)  ; LAB_005239e0
    MOV EAX,dword ptr [ESI + 0x64]      ; 00523d8d
        ;   Label: LAB_00523d8d
    MOV dword ptr [ESI + 0x68],0x1      ; 00523d90
    MOV dword ptr [ESI + 0x6c],EAX      ; 00523d97
    JMP 0x00523b76                      ; 00523d9a
        ;   XREF to: 00523b76 (UNCONDITIONAL_JUMP)  ; LAB_00523b76
    MOV dword ptr [ESI + 0xf4],0x0      ; 00523d9f
        ;   Label: LAB_00523d9f
    JMP 0x00523d09                      ; 00523da9
        ;   XREF to: 00523d09 (UNCONDITIONAL_JUMP)  ; LAB_00523d09

