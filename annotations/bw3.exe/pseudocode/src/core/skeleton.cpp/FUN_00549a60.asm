; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00549a60(int *param_1,int param_2)
;
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
;   FUN_005499d0 at 005499f6
;
; Referenced Globals:
;   undefined4 DAT_005d1b5a
;   TerminatedCString s_core_skeleton_cpp_005d1b5e
;   TerminatedCString s_Deformable_model_file_is_005d1b73
;   TerminatedCString s_core_skeleton_cpp_005d1b94
;   TerminatedCString s_Can_t_load_model_of_vers_005d1ba9
;   TerminatedCString s_d_d_d_d_d_005d1bf4
;   TerminatedCString s_d_d_d_d_005d1c04
;   TerminatedCString s_d_d_d_d_d_005d1c11
;   TerminatedCString s_d_d_d_d_d_d_005d1c21
;   TerminatedCString s_anon_005d1c34
;   TerminatedCString s_d_005d1c3b
;   TerminatedCString s_d_d_005d1c48
;   undefined4 DAT_005d1c59
;   TerminatedCString s_d_d_005d1c5d
;   TerminatedCString s_d_d_d_005d1c64
;   ... and 15 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_00548460
;   FUN_00548580
;   FUN_0054b5b0
;   FUN_005a3230
;   FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549a60
        ;   Label: FUN_00549a60
    PUSH ESI                            ; 00549a61
    PUSH EDI                            ; 00549a62
    PUSH EBP                            ; 00549a63
    SUB ESP,0x7c                        ; 00549a64
    MOV EBX,dword ptr [ESP + 0x90]      ; 00549a67
    MOV ESI,dword ptr [ESP + 0x94]      ; 00549a6e
    MOV EDI,ESI                         ; 00549a75
    PUSH EDI                            ; 00549a77
        ;   Label: LAB_00549a77
    CALL FUN_005a32b0                   ; 00549a78
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549a7d
    TEST EAX,EAX                        ; 00549a80
    JL 0x00549a89                       ; 00549a82
        ;   XREF to: 00549a89 (CONDITIONAL_JUMP)  ; LAB_00549a89
    CMP EAX,0xa                         ; 00549a84
    JNZ 0x00549a77                      ; 00549a87
        ;   XREF to: 00549a77 (CONDITIONAL_JUMP)  ; LAB_00549a77
    LEA EAX,[ESP + 0x28]                ; 00549a89
        ;   Label: LAB_00549a89
    PUSH EAX                            ; 00549a8d
    PUSH 0x5d1b5a                       ; 00549a8e | DAT_005d1b5a
    PUSH ESI                            ; 00549a93
    CALL FUN_005a3230                   ; 00549a94
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00549a99
    CMP EAX,0x1                         ; 00549a9c
    JZ 0x00549ac4                       ; 00549a9f
        ;   XREF to: 00549ac4 (CONDITIONAL_JUMP)  ; LAB_00549ac4
    MOV EDX,0x5d1b5e                    ; 00549aa1 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00549aa1
    MOV ECX,0x4d7                       ; 00549aa6
    PUSH 0x5d1b73                       ; 00549aab | = "Deformable model file is corrupt"
    MOV dword ptr [0x01d71de0],EDX      ; 00549ab0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00549ab6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00549abc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00549ac1
    MOV EAX,dword ptr [ESP + 0x28]      ; 00549ac4
        ;   Label: LAB_00549ac4
    MOV EDI,dword ptr [0x00604174]      ; 00549ac8 | DAT_00604174
    CMP EAX,EDI                         ; 00549ace
    JLE 0x00549afa                      ; 00549ad0
        ;   XREF to: 00549afa (CONDITIONAL_JUMP)  ; LAB_00549afa
    PUSH EDI                            ; 00549ad2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00549ad3
    PUSH ECX                            ; 00549ad7
    MOV EBP,0x5d1b94                    ; 00549ad8 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x4da                       ; 00549add
    PUSH 0x5d1ba9                       ; 00549ae2 | = "Can't load model of version %d, this ..."
    MOV dword ptr [0x01d71de0],EBP      ; 00549ae7 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00549aed | DAT_01d71de4
    CALL FUN_004e4330                   ; 00549af2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00549af7
    MOV EDI,dword ptr [ESP + 0x28]      ; 00549afa
        ;   Label: LAB_00549afa
    CMP EDI,0x3                         ; 00549afe
    JL 0x00549c2e                       ; 00549b01
        ;   XREF to: 00549c2e (CONDITIONAL_JUMP)  ; LAB_00549c2e
    CMP EDI,0x5                         ; 00549b07
    JL 0x00549be2                       ; 00549b0a
        ;   XREF to: 00549be2 (CONDITIONAL_JUMP)  ; LAB_00549be2
    MOV EDI,ESI                         ; 00549b10
    PUSH EDI                            ; 00549b12
        ;   Label: LAB_00549b12
    CALL FUN_005a32b0                   ; 00549b13
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549b18
    TEST EAX,EAX                        ; 00549b1b
    JL 0x00549b24                       ; 00549b1d
        ;   XREF to: 00549b24 (CONDITIONAL_JUMP)  ; LAB_00549b24
    CMP EAX,0xa                         ; 00549b1f
    JNZ 0x00549b12                      ; 00549b22
        ;   XREF to: 00549b12 (CONDITIONAL_JUMP)  ; LAB_00549b12
    LEA EAX,[ESP + 0x24]                ; 00549b24
        ;   Label: LAB_00549b24
    PUSH EAX                            ; 00549b28
    LEA EAX,[ESP + 0x30]                ; 00549b29
    PUSH EAX                            ; 00549b2d
    LEA EAX,[ESP + 0x40]                ; 00549b2e
    PUSH EAX                            ; 00549b32
    LEA EAX,[ESP + 0x40]                ; 00549b33
    PUSH EAX                            ; 00549b37
    LEA EAX,[ESP + 0x40]                ; 00549b38
    PUSH EAX                            ; 00549b3c
    PUSH 0x5d1bf4                       ; 00549b3d | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00549b42
    CALL FUN_005a3230                   ; 00549b43
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 00549b48
    CMP EAX,0x5                         ; 00549b4b
    JNZ 0x00549aa1                      ; 00549b4e
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    MOV EDX,dword ptr [ESP + 0x24]      ; 00549b54
        ;   Label: LAB_00549b54
    PUSH EDX                            ; 00549b58
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00549b59
    PUSH ECX                            ; 00549b5d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00549b5e
    PUSH EDI                            ; 00549b62
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00549b63
    PUSH EBP                            ; 00549b67
    PUSH EBX                            ; 00549b68
    MOV EDI,ESI                         ; 00549b69
    CALL FUN_00548460                   ; 00549b6b
        ;   XREF to: 00548460 (UNCONDITIONAL_CALL)  ; undefined FUN_00548460()
    ADD ESP,0x14                        ; 00549b70
    PUSH EDI                            ; 00549b73
        ;   Label: LAB_00549b73
    CALL FUN_005a32b0                   ; 00549b74
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549b79
    TEST EAX,EAX                        ; 00549b7c
    JL 0x00549b85                       ; 00549b7e
        ;   XREF to: 00549b85 (CONDITIONAL_JUMP)  ; LAB_00549b85
    CMP EAX,0xa                         ; 00549b80
    JNZ 0x00549b73                      ; 00549b83
        ;   XREF to: 00549b73 (CONDITIONAL_JUMP)  ; LAB_00549b73
    XOR EDI,EDI                         ; 00549b85
        ;   Label: LAB_00549b85
    CMP EDI,dword ptr [EBX]             ; 00549b87
        ;   Label: LAB_00549b87
    JGE 0x00549ca8                      ; 00549b89
        ;   XREF to: 00549ca8 (CONDITIONAL_JUMP)  ; LAB_00549ca8
    LEA EDX,[EDI*0x8 + 0x0]             ; 00549b8f
    LEA EAX,[EBX + 0x4]                 ; 00549b96
    ADD EAX,EDX                         ; 00549b99
    LEA EDX,[EAX + 0x4]                 ; 00549b9b
    PUSH EDX                            ; 00549b9e
    PUSH EAX                            ; 00549b9f
    LEA EAX,[ESP + 0x60]                ; 00549ba0
    PUSH EAX                            ; 00549ba4
    LEA EAX,[ESP + 0x60]                ; 00549ba5
    PUSH EAX                            ; 00549ba9
    LEA EAX,[ESP + 0x60]                ; 00549baa
    PUSH EAX                            ; 00549bae
    PUSH 0x5d1c11                       ; 00549baf | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00549bb4
    CALL FUN_005a3230                   ; 00549bb5
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 00549bba
    CMP EAX,0x5                         ; 00549bbd
    JNZ 0x00549aa1                      ; 00549bc0
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    MOV EBP,dword ptr [ESP + 0x58]      ; 00549bc6
    PUSH EBP                            ; 00549bca
    MOV EAX,dword ptr [ESP + 0x58]      ; 00549bcb
    PUSH EAX                            ; 00549bcf
    MOV EDX,dword ptr [ESP + 0x58]      ; 00549bd0
    PUSH EDX                            ; 00549bd4
    PUSH EDI                            ; 00549bd5
    PUSH EBX                            ; 00549bd6
    CALL FUN_00548580                   ; 00549bd7
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; undefined FUN_00548580()
    INC EDI                             ; 00549bdc
    ADD ESP,0x14                        ; 00549bdd
    JMP 0x00549b87                      ; 00549be0
        ;   XREF to: 00549b87 (UNCONDITIONAL_JUMP)  ; LAB_00549b87
    MOV EDI,ESI                         ; 00549be2
        ;   Label: LAB_00549be2
    PUSH EDI                            ; 00549be4
        ;   Label: LAB_00549be4
    CALL FUN_005a32b0                   ; 00549be5
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549bea
    TEST EAX,EAX                        ; 00549bed
    JL 0x00549bf6                       ; 00549bef
        ;   XREF to: 00549bf6 (CONDITIONAL_JUMP)  ; LAB_00549bf6
    CMP EAX,0xa                         ; 00549bf1
    JNZ 0x00549be4                      ; 00549bf4
        ;   XREF to: 00549be4 (CONDITIONAL_JUMP)  ; LAB_00549be4
    LEA EAX,[ESP + 0x24]                ; 00549bf6
        ;   Label: LAB_00549bf6
    PUSH EAX                            ; 00549bfa
    LEA EAX,[ESP + 0x30]                ; 00549bfb
    PUSH EAX                            ; 00549bff
    LEA EAX,[ESP + 0x40]                ; 00549c00
    PUSH EAX                            ; 00549c04
    LEA EAX,[ESP + 0x3c]                ; 00549c05
    PUSH EAX                            ; 00549c09
    PUSH 0x5d1c04                       ; 00549c0a | = "%d,%d,%d,%d\n"
    PUSH ESI                            ; 00549c0f
    CALL FUN_005a3230                   ; 00549c10
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x18                        ; 00549c15
    CMP EAX,0x4                         ; 00549c18
    JNZ 0x00549aa1                      ; 00549c1b
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    MOV dword ptr [ESP + 0x34],0x1      ; 00549c21
    JMP 0x00549b54                      ; 00549c29
        ;   XREF to: 00549b54 (UNCONDITIONAL_JUMP)  ; LAB_00549b54
    MOV EDI,ESI                         ; 00549c2e
        ;   Label: LAB_00549c2e
    PUSH EDI                            ; 00549c30
        ;   Label: LAB_00549c30
    CALL FUN_005a32b0                   ; 00549c31
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549c36
    TEST EAX,EAX                        ; 00549c39
    JL 0x00549c42                       ; 00549c3b
        ;   XREF to: 00549c42 (CONDITIONAL_JUMP)  ; LAB_00549c42
    CMP EAX,0xa                         ; 00549c3d
    JNZ 0x00549c30                      ; 00549c40
        ;   XREF to: 00549c30 (CONDITIONAL_JUMP)  ; LAB_00549c30
    LEA EAX,[ESP + 0x4c]                ; 00549c42
        ;   Label: LAB_00549c42
    PUSH EAX                            ; 00549c46
    LEA EAX,[ESP + 0x30]                ; 00549c47
    PUSH EAX                            ; 00549c4b
    LEA EAX,[ESP + 0x50]                ; 00549c4c
    PUSH EAX                            ; 00549c50
    LEA EAX,[ESP + 0x50]                ; 00549c51
    PUSH EAX                            ; 00549c55
    LEA EAX,[ESP + 0x50]                ; 00549c56
    PUSH EAX                            ; 00549c5a
    LEA EAX,[ESP + 0x50]                ; 00549c5b
    PUSH EAX                            ; 00549c5f
    PUSH 0x5d1c21                       ; 00549c60 | = "%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00549c65
    CALL FUN_005a3230                   ; 00549c66
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x20                        ; 00549c6b
    CMP EAX,0x6                         ; 00549c6e
    JNZ 0x00549aa1                      ; 00549c71
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00549c77
    PUSH EBP                            ; 00549c7b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00549c7c
    PUSH EAX                            ; 00549c80
    PUSH 0x1                            ; 00549c81
    PUSH 0x1                            ; 00549c83
    PUSH EBX                            ; 00549c85
    CALL FUN_00548460                   ; 00549c86
        ;   XREF to: 00548460 (UNCONDITIONAL_CALL)  ; undefined FUN_00548460()
    ADD ESP,0x14                        ; 00549c8b
    MOV EDX,dword ptr [ESP + 0x44]      ; 00549c8e
    PUSH EDX                            ; 00549c92
    MOV ECX,dword ptr [ESP + 0x44]      ; 00549c93
    PUSH ECX                            ; 00549c97
    MOV EDI,dword ptr [ESP + 0x44]      ; 00549c98
    PUSH EDI                            ; 00549c9c
    PUSH 0x0                            ; 00549c9d
    PUSH EBX                            ; 00549c9f
    CALL FUN_00548580                   ; 00549ca0
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; undefined FUN_00548580()
    ADD ESP,0x14                        ; 00549ca5
    MOV EDI,ESI                         ; 00549ca8
        ;   Label: LAB_00549ca8
    PUSH EDI                            ; 00549caa
        ;   Label: LAB_00549caa
    CALL FUN_005a32b0                   ; 00549cab
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549cb0
    TEST EAX,EAX                        ; 00549cb3
    JL 0x00549cbc                       ; 00549cb5
        ;   XREF to: 00549cbc (CONDITIONAL_JUMP)  ; LAB_00549cbc
    CMP EAX,0xa                         ; 00549cb7
    JNZ 0x00549caa                      ; 00549cba
        ;   XREF to: 00549caa (CONDITIONAL_JUMP)  ; LAB_00549caa
    LEA EAX,[EBX + 0x355c]              ; 00549cbc
        ;   Label: LAB_00549cbc
    PUSH EAX                            ; 00549cc2
    PUSH 0x5d1c34                       ; 00549cc3 | = "%[^\n]\n"
    PUSH ESI                            ; 00549cc8
    CALL FUN_005a3230                   ; 00549cc9
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00549cce
    CMP EAX,0x1                         ; 00549cd1
    JNZ 0x00549aa1                      ; 00549cd4
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    MOV EDI,ESI                         ; 00549cda
    PUSH EDI                            ; 00549cdc
        ;   Label: LAB_00549cdc
    CALL FUN_005a32b0                   ; 00549cdd
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549ce2
    TEST EAX,EAX                        ; 00549ce5
    JL 0x00549cee                       ; 00549ce7
        ;   XREF to: 00549cee (CONDITIONAL_JUMP)  ; LAB_00549cee
    CMP EAX,0xa                         ; 00549ce9
    JNZ 0x00549cdc                      ; 00549cec
        ;   XREF to: 00549cdc (CONDITIONAL_JUMP)  ; LAB_00549cdc
    CMP dword ptr [ESP + 0x28],0x3      ; 00549cee
        ;   Label: LAB_00549cee
    JL 0x00549dcd                       ; 00549cf3
        ;   XREF to: 00549dcd (CONDITIONAL_JUMP)  ; LAB_00549dcd
    XOR EDI,EDI                         ; 00549cf9
    CMP EDI,dword ptr [EBX + 0xc00]     ; 00549cfb
        ;   Label: LAB_00549cfb
    JGE 0x00549e62                      ; 00549d01
        ;   XREF to: 00549e62 (CONDITIONAL_JUMP)  ; LAB_00549e62
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549d07
    SUB EAX,EDI                         ; 00549d0e
    LEA EBP,[EBX + 0xc04]               ; 00549d10
    SHL EAX,0x5                         ; 00549d16
    ADD EAX,EBP                         ; 00549d19
    MOV ECX,dword ptr [ESP + 0x28]      ; 00549d1b
    LEA EDX,[EAX + 0x48]                ; 00549d1f
    CMP ECX,0x6                         ; 00549d22
    JGE 0x00549d79                      ; 00549d25
        ;   XREF to: 00549d79 (CONDITIONAL_JUMP)  ; LAB_00549d79
    PUSH EDX                            ; 00549d27
    PUSH EAX                            ; 00549d28
    PUSH 0x5d1c3b                       ; 00549d29 | = "\"%[^\"]\", %d\n"
    PUSH ESI                            ; 00549d2e
    CALL FUN_005a3230                   ; 00549d2f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 00549d34
    XOR EBP,EBP                         ; 00549d37
        ;   Label: LAB_00549d37
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549d39
        ;   Label: LAB_00549d39
    SUB EAX,EDI                         ; 00549d40
    SHL EAX,0x5                         ; 00549d42
    LEA EDX,[EBX + EAX*0x1]             ; 00549d45
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00549d48
    JGE 0x00549d8f                      ; 00549d4e
        ;   XREF to: 00549d8f (CONDITIONAL_JUMP)  ; LAB_00549d8f
    LEA EDX,[EBX + 0xc04]               ; 00549d50
    ADD EAX,EDX                         ; 00549d56
    LEA EDX,[EBP*0x4 + 0x0]             ; 00549d58
    ADD EAX,0x4c                        ; 00549d5f
    ADD EAX,EDX                         ; 00549d62
    PUSH EAX                            ; 00549d64
    PUSH 0x5d1c59                       ; 00549d65 | DAT_005d1c59
    PUSH ESI                            ; 00549d6a
    INC EBP                             ; 00549d6b
    CALL FUN_005a3230                   ; 00549d6c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00549d71
    JMP 0x00549d39                      ; 00549d74
        ;   XREF to: 00549d39 (UNCONDITIONAL_JUMP)  ; LAB_00549d39
    INC EDI                             ; 00549d76
        ;   Label: LAB_00549d76
    JMP 0x00549cfb                      ; 00549d77
        ;   XREF to: 00549cfb (UNCONDITIONAL_JUMP)  ; LAB_00549cfb
    PUSH EDX                            ; 00549d79
        ;   Label: LAB_00549d79
    LEA EDX,[EAX + 0x5c]                ; 00549d7a
    PUSH EDX                            ; 00549d7d
    PUSH EAX                            ; 00549d7e
    PUSH 0x5d1c48                       ; 00549d7f | = "\"%[^\"]\", %d, %d\n"
    PUSH ESI                            ; 00549d84
    CALL FUN_005a3230                   ; 00549d85
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00549d8a
    JMP 0x00549d37                      ; 00549d8d
        ;   XREF to: 00549d37 (UNCONDITIONAL_JUMP)  ; LAB_00549d37
    XOR EBP,EBP                         ; 00549d8f
        ;   Label: LAB_00549d8f
    CMP EBP,dword ptr [EBX]             ; 00549d91
        ;   Label: LAB_00549d91
    JGE 0x00549d76                      ; 00549d93
        ;   XREF to: 00549d76 (CONDITIONAL_JUMP)  ; LAB_00549d76
    LEA EDX,[EDI*0x4 + 0x0]             ; 00549d95
    SUB EDX,EDI                         ; 00549d9c
    LEA EAX,[EBX + 0xc04]               ; 00549d9e
    SHL EDX,0x5                         ; 00549da4
    ADD EAX,EDX                         ; 00549da7
    LEA ECX,[EAX + 0x34]                ; 00549da9
    LEA EDX,[EBP*0x4 + 0x0]             ; 00549dac
    ADD ECX,EDX                         ; 00549db3
    ADD EAX,0x20                        ; 00549db5
    PUSH ECX                            ; 00549db8
    ADD EAX,EDX                         ; 00549db9
    PUSH EAX                            ; 00549dbb
    PUSH 0x5d1c5d                       ; 00549dbc | = "%d,%d\n"
    PUSH ESI                            ; 00549dc1
    INC EBP                             ; 00549dc2
    CALL FUN_005a3230                   ; 00549dc3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 00549dc8
    JMP 0x00549d91                      ; 00549dcb
        ;   XREF to: 00549d91 (UNCONDITIONAL_JUMP)  ; LAB_00549d91
    XOR EDI,EDI                         ; 00549dcd
        ;   Label: LAB_00549dcd
    CMP EDI,dword ptr [EBX + 0xc00]     ; 00549dcf
        ;   Label: LAB_00549dcf
    JGE 0x00549e62                      ; 00549dd5
        ;   XREF to: 00549e62 (CONDITIONAL_JUMP)  ; LAB_00549e62
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549ddb
    SUB EAX,EDI                         ; 00549de2
    LEA EDX,[EBX + 0xc04]               ; 00549de4
    SHL EAX,0x5                         ; 00549dea
    ADD EAX,EDX                         ; 00549ded
    LEA EDX,[EAX + 0x48]                ; 00549def
    PUSH EDX                            ; 00549df2
    LEA EDX,[EAX + 0x34]                ; 00549df3
    PUSH EDX                            ; 00549df6
    LEA EDX,[EAX + 0x20]                ; 00549df7
    PUSH EDX                            ; 00549dfa
    PUSH EAX                            ; 00549dfb
    PUSH 0x5d1c64                       ; 00549dfc | = "\"%[^\"]\",%d,%d,%d\n"
    PUSH ESI                            ; 00549e01
    CALL FUN_005a3230                   ; 00549e02
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x18                        ; 00549e07
    CMP EAX,0x4                         ; 00549e0a
    JNZ 0x00549aa1                      ; 00549e0d
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    XOR EBP,EBP                         ; 00549e13
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549e15
        ;   Label: LAB_00549e15
    SUB EAX,EDI                         ; 00549e1c
    SHL EAX,0x5                         ; 00549e1e
    LEA EDX,[EBX + EAX*0x1]             ; 00549e21
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00549e24
    JGE 0x00549e5c                      ; 00549e2a
        ;   XREF to: 00549e5c (CONDITIONAL_JUMP)  ; LAB_00549e5c
    LEA EDX,[EBX + 0xc04]               ; 00549e2c
    ADD EDX,EAX                         ; 00549e32
    LEA EAX,[EBP*0x4 + 0x0]             ; 00549e34
    ADD EDX,0x4c                        ; 00549e3b
    ADD EAX,EDX                         ; 00549e3e
    PUSH EAX                            ; 00549e40
    PUSH 0x5d1c76                       ; 00549e41 | DAT_005d1c76
    PUSH ESI                            ; 00549e46
    CALL FUN_005a3230                   ; 00549e47
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00549e4c
    CMP EAX,0x1                         ; 00549e4f
    JNZ 0x00549aa1                      ; 00549e52
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    ADD EBP,EAX                         ; 00549e58
    JMP 0x00549e15                      ; 00549e5a
        ;   XREF to: 00549e15 (UNCONDITIONAL_JUMP)  ; LAB_00549e15
    INC EDI                             ; 00549e5c
        ;   Label: LAB_00549e5c
    JMP 0x00549dcf                      ; 00549e5d
        ;   XREF to: 00549dcf (UNCONDITIONAL_JUMP)  ; LAB_00549dcf
    MOV EDI,ESI                         ; 00549e62
        ;   Label: LAB_00549e62
    PUSH EDI                            ; 00549e64
        ;   Label: LAB_00549e64
    CALL FUN_005a32b0                   ; 00549e65
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549e6a
    TEST EAX,EAX                        ; 00549e6d
    JL 0x00549e76                       ; 00549e6f
        ;   XREF to: 00549e76 (CONDITIONAL_JUMP)  ; LAB_00549e76
    CMP EAX,0xa                         ; 00549e71
    JNZ 0x00549e64                      ; 00549e74
        ;   XREF to: 00549e64 (CONDITIONAL_JUMP)  ; LAB_00549e64
    XOR EAX,EAX                         ; 00549e76
        ;   Label: LAB_00549e76
    MOV dword ptr [ESP + 0x6c],EAX      ; 00549e78
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00549e7c
        ;   Label: LAB_00549e7c
    CMP EAX,dword ptr [EBX]             ; 00549e80
    JGE 0x00549f48                      ; 00549e82
        ;   XREF to: 00549f48 (CONDITIONAL_JUMP)  ; LAB_00549f48
    XOR ECX,ECX                         ; 00549e88
    MOV dword ptr [ESP + 0x74],ECX      ; 00549e8a
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00549e8e
        ;   Label: LAB_00549e8e
    SHL EDI,0x2                         ; 00549e92
    ADD EDI,EBX                         ; 00549e95
    MOV EAX,dword ptr [ESP + 0x74]      ; 00549e97
    CMP EAX,dword ptr [EDI + 0x2c]      ; 00549e9b
    JGE 0x00549f36                      ; 00549e9e
        ;   XREF to: 00549f36 (CONDITIONAL_JUMP)  ; LAB_00549f36
    MOV EDX,EAX                         ; 00549ea4
    SHL EAX,0x2                         ; 00549ea6
    SUB EAX,EDX                         ; 00549ea9
    SHL EAX,0x2                         ; 00549eab
    ADD EAX,EDX                         ; 00549eae
    MOV EBP,dword ptr [EDI + 0x40]      ; 00549eb0
    SHL EAX,0x2                         ; 00549eb3
    ADD EBP,EAX                         ; 00549eb6
    LEA EAX,[ESP + 0x5c]                ; 00549eb8
    PUSH EAX                            ; 00549ebc
    PUSH 0x5d1c7a                       ; 00549ebd | DAT_005d1c7a
    PUSH ESI                            ; 00549ec2
    CALL FUN_005a3230                   ; 00549ec3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00549ec8
    CMP EAX,0x1                         ; 00549ecb
    JNZ 0x00549aa1                      ; 00549ece
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    MOV AL,byte ptr [ESP + 0x5c]        ; 00549ed4
    XOR EDI,EDI                         ; 00549ed8
    MOV byte ptr [EBP],AL               ; 00549eda
    XOR EAX,EAX                         ; 00549edd
        ;   Label: LAB_00549edd
    MOV AL,byte ptr [EBP]               ; 00549edf
    CMP EDI,EAX                         ; 00549ee2
    JGE 0x00549f3f                      ; 00549ee4
        ;   XREF to: 00549f3f (CONDITIONAL_JUMP)  ; LAB_00549f3f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549ee6
    SUB EAX,EDI                         ; 00549eed
    LEA EDX,[EBP + 0x10]                ; 00549eef
    SHL EAX,0x2                         ; 00549ef2
    ADD EAX,EDX                         ; 00549ef5
    LEA EDX,[EAX + 0x8]                 ; 00549ef7
    PUSH EDX                            ; 00549efa
    LEA EDX,[EAX + 0x4]                 ; 00549efb
    PUSH EDX                            ; 00549efe
    PUSH EAX                            ; 00549eff
    LEA EDX,[EBP + 0x4]                 ; 00549f00
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549f03
    ADD EAX,EDX                         ; 00549f0a
    PUSH EAX                            ; 00549f0c
    LEA EAX,[ESP + 0x70]                ; 00549f0d
    PUSH EAX                            ; 00549f11
    PUSH 0x5d1c7e                       ; 00549f12 | = "%d,%f,%f,%f,%f\n"
    PUSH ESI                            ; 00549f17
    CALL FUN_005a3230                   ; 00549f18
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 00549f1d
    CMP EAX,0x5                         ; 00549f20
    JNZ 0x00549aa1                      ; 00549f23
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    LEA EDX,[EDI + EBP*0x1]             ; 00549f29
    MOV AL,byte ptr [ESP + 0x60]        ; 00549f2c
    INC EDI                             ; 00549f30
    MOV byte ptr [EDX + 0x1],AL         ; 00549f31
    JMP 0x00549edd                      ; 00549f34
        ;   XREF to: 00549edd (UNCONDITIONAL_JUMP)  ; LAB_00549edd
    INC dword ptr [ESP + 0x6c]          ; 00549f36
        ;   Label: LAB_00549f36
    JMP 0x00549e7c                      ; 00549f3a
        ;   XREF to: 00549e7c (UNCONDITIONAL_JUMP)  ; LAB_00549e7c
    INC dword ptr [ESP + 0x74]          ; 00549f3f
        ;   Label: LAB_00549f3f
    JMP 0x00549e8e                      ; 00549f43
        ;   XREF to: 00549e8e (UNCONDITIONAL_JUMP)  ; LAB_00549e8e
    MOV EDI,ESI                         ; 00549f48
        ;   Label: LAB_00549f48
    PUSH EDI                            ; 00549f4a
        ;   Label: LAB_00549f4a
    CALL FUN_005a32b0                   ; 00549f4b
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 00549f50
    TEST EAX,EAX                        ; 00549f53
    JL 0x00549f5c                       ; 00549f55
        ;   XREF to: 00549f5c (CONDITIONAL_JUMP)  ; LAB_00549f5c
    CMP EAX,0xa                         ; 00549f57
    JNZ 0x00549f4a                      ; 00549f5a
        ;   XREF to: 00549f4a (CONDITIONAL_JUMP)  ; LAB_00549f4a
    XOR ECX,ECX                         ; 00549f5c
        ;   Label: LAB_00549f5c
    MOV dword ptr [ESP + 0x78],ECX      ; 00549f5e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00549f62
        ;   Label: LAB_00549f62
    CMP EAX,dword ptr [EBX]             ; 00549f66
    JGE 0x0054a043                      ; 00549f68
        ;   XREF to: 0054a043 (CONDITIONAL_JUMP)  ; LAB_0054a043
    XOR EDI,EDI                         ; 00549f6e
    MOV EBP,dword ptr [ESP + 0x78]      ; 00549f70
        ;   Label: LAB_00549f70
    SHL EBP,0x2                         ; 00549f74
    ADD EBP,EBX                         ; 00549f77
    MOV EAX,dword ptr [EBP + 0x54]      ; 00549f79
    ADD EAX,dword ptr [EBP + 0x68]      ; 00549f7c
    CMP EDI,EAX                         ; 00549f7f
    JGE 0x0054a03a                      ; 00549f81
        ;   XREF to: 0054a03a (CONDITIONAL_JUMP)  ; LAB_0054a03a
    LEA EAX,[EDI*0x8 + 0x0]             ; 00549f87
    LEA EDX,[EDI + EAX*0x1]             ; 00549f8e
    MOV EAX,dword ptr [EBP + 0x7c]      ; 00549f91
    ADD EDX,EDX                         ; 00549f94
    ADD EAX,EDX                         ; 00549f96
    MOV dword ptr [ESP + 0x70],EAX      ; 00549f98
    LEA EAX,[ESP + 0x8]                 ; 00549f9c
    PUSH EAX                            ; 00549fa0
    LEA EAX,[ESP + 0x18]                ; 00549fa1
    PUSH EAX                            ; 00549fa5
    LEA EAX,[ESP + 0x28]                ; 00549fa6
    PUSH EAX                            ; 00549faa
    LEA EAX,[ESP + 0x10]                ; 00549fab
    PUSH EAX                            ; 00549faf
    LEA EAX,[ESP + 0x20]                ; 00549fb0
    PUSH EAX                            ; 00549fb4
    LEA EAX,[ESP + 0x30]                ; 00549fb5
    PUSH EAX                            ; 00549fb9
    LEA EAX,[ESP + 0x18]                ; 00549fba
    PUSH EAX                            ; 00549fbe
    LEA EAX,[ESP + 0x28]                ; 00549fbf
    PUSH EAX                            ; 00549fc3
    LEA EAX,[ESP + 0x38]                ; 00549fc4
    PUSH EAX                            ; 00549fc8
    LEA EAX,[ESP + 0x88]                ; 00549fc9
    PUSH EAX                            ; 00549fd0
    PUSH 0x5d1c8e                       ; 00549fd1 | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00549fd6
    CALL FUN_005a3230                   ; 00549fd7
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x30                        ; 00549fdc
    CMP EAX,0xa                         ; 00549fdf
    JNZ 0x00549aa1                      ; 00549fe2
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    LEA EAX,[EDI*0x4 + 0x0]             ; 00549fe8
    MOV EDX,dword ptr [EBP + 0x90]      ; 00549fef
    ADD EDX,EAX                         ; 00549ff5
    MOV EAX,dword ptr [ESP + 0x64]      ; 00549ff7
    MOV dword ptr [EDX],EAX             ; 00549ffb
    XOR EAX,EAX                         ; 00549ffd
    MOV EDX,dword ptr [ESP + 0x70]      ; 00549fff
        ;   Label: LAB_00549fff
    LEA EBP,[EAX + EAX*0x1]             ; 0054a003
    ADD EBP,EDX                         ; 0054a006
    MOV CX,word ptr [ESP + EAX*0x4 + 0x18] ; 0054a008
    MOV word ptr [EBP],CX               ; 0054a00d
    MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0054a011
    SAR ECX,0x8                         ; 0054a015
    MOV dword ptr [ESP + 0x68],ECX      ; 0054a018
    MOV ECX,dword ptr [ESP + 0x68]      ; 0054a01c
    MOV word ptr [EBP + 0x6],CX         ; 0054a020
    MOV EDX,dword ptr [ESP + EAX*0x4]   ; 0054a024
    SAR EDX,0x8                         ; 0054a027
    INC EAX                             ; 0054a02a
    MOV word ptr [EBP + 0xc],DX         ; 0054a02b
    CMP EAX,0x3                         ; 0054a02f
    JL 0x00549fff                       ; 0054a032
        ;   XREF to: 00549fff (CONDITIONAL_JUMP)  ; LAB_00549fff
    INC EDI                             ; 0054a034
    JMP 0x00549f70                      ; 0054a035
        ;   XREF to: 00549f70 (UNCONDITIONAL_JUMP)  ; LAB_00549f70
    INC dword ptr [ESP + 0x78]          ; 0054a03a
        ;   Label: LAB_0054a03a
    JMP 0x00549f62                      ; 0054a03e
        ;   XREF to: 00549f62 (UNCONDITIONAL_JUMP)  ; LAB_00549f62
    MOV EDI,ESI                         ; 0054a043
        ;   Label: LAB_0054a043
    PUSH EDI                            ; 0054a045
        ;   Label: LAB_0054a045
    CALL FUN_005a32b0                   ; 0054a046
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0054a04b
    TEST EAX,EAX                        ; 0054a04e
    JL 0x0054a057                       ; 0054a050
        ;   XREF to: 0054a057 (CONDITIONAL_JUMP)  ; LAB_0054a057
    CMP EAX,0xa                         ; 0054a052
    JNZ 0x0054a045                      ; 0054a055
        ;   XREF to: 0054a045 (CONDITIONAL_JUMP)  ; LAB_0054a045
    XOR EBP,EBP                         ; 0054a057
        ;   Label: LAB_0054a057
    CMP EBP,dword ptr [EBX]             ; 0054a059
        ;   Label: LAB_0054a059
    JGE 0x0054a09b                      ; 0054a05b
        ;   XREF to: 0054a09b (CONDITIONAL_JUMP)  ; LAB_0054a09b
    XOR EDI,EDI                         ; 0054a05d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0054a05f
        ;   Label: LAB_0054a05f
    ADD EAX,EBX                         ; 0054a066
    CMP EDI,dword ptr [EAX + 0x68]      ; 0054a068
    JGE 0x0054a098                      ; 0054a06b
        ;   XREF to: 0054a098 (CONDITIONAL_JUMP)  ; LAB_0054a098
    LEA EDX,[EDI*0x4 + 0x0]             ; 0054a06d
    MOV EAX,dword ptr [EAX + 0xa4]      ; 0054a074
    ADD EAX,EDX                         ; 0054a07a
    PUSH EAX                            ; 0054a07c
    PUSH 0x5d1cad                       ; 0054a07d | DAT_005d1cad
    PUSH ESI                            ; 0054a082
    CALL FUN_005a3230                   ; 0054a083
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 0054a088
    CMP EAX,0x1                         ; 0054a08b
    JNZ 0x00549aa1                      ; 0054a08e
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    ADD EDI,EAX                         ; 0054a094
    JMP 0x0054a05f                      ; 0054a096
        ;   XREF to: 0054a05f (UNCONDITIONAL_JUMP)  ; LAB_0054a05f
    INC EBP                             ; 0054a098
        ;   Label: LAB_0054a098
    JMP 0x0054a059                      ; 0054a099
        ;   XREF to: 0054a059 (UNCONDITIONAL_JUMP)  ; LAB_0054a059
    MOV EDI,ESI                         ; 0054a09b
        ;   Label: LAB_0054a09b
    PUSH EDI                            ; 0054a09d
        ;   Label: LAB_0054a09d
    CALL FUN_005a32b0                   ; 0054a09e
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0054a0a3
    TEST EAX,EAX                        ; 0054a0a6
    JL 0x0054a0af                       ; 0054a0a8
        ;   XREF to: 0054a0af (CONDITIONAL_JUMP)  ; LAB_0054a0af
    CMP EAX,0xa                         ; 0054a0aa
    JNZ 0x0054a09d                      ; 0054a0ad
        ;   XREF to: 0054a09d (CONDITIONAL_JUMP)  ; LAB_0054a09d
    XOR EDI,EDI                         ; 0054a0af
        ;   Label: LAB_0054a0af
    CMP EDI,dword ptr [EBX + 0xb8]      ; 0054a0b1
        ;   Label: LAB_0054a0b1
    JGE 0x0054a107                      ; 0054a0b7
        ;   XREF to: 0054a107 (CONDITIONAL_JUMP)  ; LAB_0054a107
    XOR EBP,EBP                         ; 0054a0b9
    CMP EBP,dword ptr [EBX + 0xbc]      ; 0054a0bb
        ;   Label: LAB_0054a0bb
    JGE 0x0054a104                      ; 0054a0c1
        ;   XREF to: 0054a104 (CONDITIONAL_JUMP)  ; LAB_0054a104
    LEA EAX,[EDI*0x8 + 0x0]             ; 0054a0c3
    ADD EAX,EDI                         ; 0054a0ca
    LEA EDX,[EBX + 0xc0]                ; 0054a0cc
    SHL EAX,0x6                         ; 0054a0d2
    ADD EDX,EAX                         ; 0054a0d5
    LEA EAX,[EBP*0x8 + 0x0]             ; 0054a0d7
    ADD EAX,EBP                         ; 0054a0de
    SHL EAX,0x3                         ; 0054a0e0
    ADD EAX,EDX                         ; 0054a0e3
    ADD EAX,0x8                         ; 0054a0e5
    PUSH EAX                            ; 0054a0e8
    PUSH 0x5d1cb1                       ; 0054a0e9 | = "%[^\n]\n"
    PUSH ESI                            ; 0054a0ee
    CALL FUN_005a3230                   ; 0054a0ef
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 0054a0f4
    CMP EAX,0x1                         ; 0054a0f7
    JNZ 0x00549aa1                      ; 0054a0fa
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    ADD EBP,EAX                         ; 0054a100
    JMP 0x0054a0bb                      ; 0054a102
        ;   XREF to: 0054a0bb (UNCONDITIONAL_JUMP)  ; LAB_0054a0bb
    INC EDI                             ; 0054a104
        ;   Label: LAB_0054a104
    JMP 0x0054a0b1                      ; 0054a105
        ;   XREF to: 0054a0b1 (UNCONDITIONAL_JUMP)  ; LAB_0054a0b1
    MOV EDI,ESI                         ; 0054a107
        ;   Label: LAB_0054a107
    PUSH EDI                            ; 0054a109
        ;   Label: LAB_0054a109
    CALL FUN_005a32b0                   ; 0054a10a
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0054a10f
    TEST EAX,EAX                        ; 0054a112
    JL 0x0054a11b                       ; 0054a114
        ;   XREF to: 0054a11b (CONDITIONAL_JUMP)  ; LAB_0054a11b
    CMP EAX,0xa                         ; 0054a116
    JNZ 0x0054a109                      ; 0054a119
        ;   XREF to: 0054a109 (CONDITIONAL_JUMP)  ; LAB_0054a109
    XOR EDI,EDI                         ; 0054a11b
        ;   Label: LAB_0054a11b
    CMP EDI,dword ptr [ESP + 0x2c]      ; 0054a11d
        ;   Label: LAB_0054a11d
    JGE 0x0054a15a                      ; 0054a121
        ;   XREF to: 0054a15a (CONDITIONAL_JUMP)  ; LAB_0054a15a
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054a123
    SUB EAX,EDI                         ; 0054a12a
    LEA EDX,[EBX + 0x2290]              ; 0054a12c
    SHL EAX,0x2                         ; 0054a132
    ADD EAX,EDX                         ; 0054a135
    LEA EDX,[EAX + 0x8]                 ; 0054a137
    PUSH EDX                            ; 0054a13a
    LEA EDX,[EAX + 0x4]                 ; 0054a13b
    PUSH EDX                            ; 0054a13e
    PUSH EAX                            ; 0054a13f
    PUSH 0x5d1cb8                       ; 0054a140 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0054a145
    CALL FUN_005a3230                   ; 0054a146
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0054a14b
    CMP EAX,0x3                         ; 0054a14e
    JNZ 0x00549aa1                      ; 0054a151
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    INC EDI                             ; 0054a157
    JMP 0x0054a11d                      ; 0054a158
        ;   XREF to: 0054a11d (UNCONDITIONAL_JUMP)  ; LAB_0054a11d
    CMP dword ptr [ESP + 0x28],0x2      ; 0054a15a
        ;   Label: LAB_0054a15a
    JL 0x0054a22f                       ; 0054a15f
        ;   XREF to: 0054a22f (CONDITIONAL_JUMP)  ; LAB_0054a22f
    MOV EDI,ESI                         ; 0054a165
    PUSH EDI                            ; 0054a167
        ;   Label: LAB_0054a167
    CALL FUN_005a32b0                   ; 0054a168
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0054a16d
    TEST EAX,EAX                        ; 0054a170
    JL 0x0054a179                       ; 0054a172
        ;   XREF to: 0054a179 (CONDITIONAL_JUMP)  ; LAB_0054a179
    CMP EAX,0xa                         ; 0054a174
    JNZ 0x0054a167                      ; 0054a177
        ;   XREF to: 0054a167 (CONDITIONAL_JUMP)  ; LAB_0054a167
    LEA EAX,[EBX + 0x228c]              ; 0054a179
        ;   Label: LAB_0054a179
    PUSH EAX                            ; 0054a17f
    LEA EAX,[EBX + 0x2288]              ; 0054a180
    PUSH EAX                            ; 0054a186
    LEA EAX,[EBX + 0x2284]              ; 0054a187
    PUSH EAX                            ; 0054a18d
    PUSH 0x5d1cc2                       ; 0054a18e | = "%f,%f,%f\n"
    PUSH ESI                            ; 0054a193
    CALL FUN_005a3230                   ; 0054a194
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0054a199
    CMP EAX,0x3                         ; 0054a19c
    JNZ 0x00549aa1                      ; 0054a19f
        ;   XREF to: 00549aa1 (CONDITIONAL_JUMP)  ; LAB_00549aa1
    CMP dword ptr [ESP + 0x28],0x4      ; 0054a1a5
        ;   Label: LAB_0054a1a5
    JL 0x0054a256                       ; 0054a1aa
        ;   XREF to: 0054a256 (CONDITIONAL_JUMP)  ; LAB_0054a256
    MOV EDI,ESI                         ; 0054a1b0
    PUSH EDI                            ; 0054a1b2
        ;   Label: LAB_0054a1b2
    CALL FUN_005a32b0                   ; 0054a1b3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0054a1b8
    TEST EAX,EAX                        ; 0054a1bb
    JL 0x0054a1c4                       ; 0054a1bd
        ;   XREF to: 0054a1c4 (CONDITIONAL_JUMP)  ; LAB_0054a1c4
    CMP EAX,0xa                         ; 0054a1bf
    JNZ 0x0054a1b2                      ; 0054a1c2
        ;   XREF to: 0054a1b2 (CONDITIONAL_JUMP)  ; LAB_0054a1b2
    LEA EAX,[EBX + 0x2748]              ; 0054a1c4
        ;   Label: LAB_0054a1c4
    PUSH EAX                            ; 0054a1ca
    LEA EAX,[EBX + 0x2744]              ; 0054a1cb
    PUSH EAX                            ; 0054a1d1
    LEA EAX,[EBX + 0x2740]              ; 0054a1d2
    PUSH EAX                            ; 0054a1d8
    PUSH 0x5d1ccc                       ; 0054a1d9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0054a1de
    CALL FUN_005a3230                   ; 0054a1df
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0054a1e4
    CMP dword ptr [ESP + 0x28],0x7      ; 0054a1e7
        ;   Label: LAB_0054a1e7
    JL 0x0054a273                       ; 0054a1ec
        ;   XREF to: 0054a273 (CONDITIONAL_JUMP)  ; LAB_0054a273
    MOV EDI,ESI                         ; 0054a1f2
    PUSH EDI                            ; 0054a1f4
        ;   Label: LAB_0054a1f4
    CALL FUN_005a32b0                   ; 0054a1f5
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0054a1fa
    TEST EAX,EAX                        ; 0054a1fd
    JL 0x0054a206                       ; 0054a1ff
        ;   XREF to: 0054a206 (CONDITIONAL_JUMP)  ; LAB_0054a206
    CMP EAX,0xa                         ; 0054a201
    JNZ 0x0054a1f4                      ; 0054a204
        ;   XREF to: 0054a1f4 (CONDITIONAL_JUMP)  ; LAB_0054a1f4
    XOR EDI,EDI                         ; 0054a206
        ;   Label: LAB_0054a206
    CMP EDI,dword ptr [ESP + 0x2c]      ; 0054a208
        ;   Label: LAB_0054a208
    JGE 0x0054a273                      ; 0054a20c
        ;   XREF to: 0054a273 (CONDITIONAL_JUMP)  ; LAB_0054a273
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054a20e
    LEA EDX,[EBX + 0x323c]              ; 0054a215
    ADD EAX,EDX                         ; 0054a21b
    PUSH EAX                            ; 0054a21d
    PUSH 0x5d1cd6                       ; 0054a21e | DAT_005d1cd6
    PUSH ESI                            ; 0054a223
    INC EDI                             ; 0054a224
    CALL FUN_005a3230                   ; 0054a225
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 0054a22a
    JMP 0x0054a208                      ; 0054a22d
        ;   XREF to: 0054a208 (UNCONDITIONAL_JUMP)  ; LAB_0054a208
    MOV dword ptr [EBX + 0x228c],0x3f800000 ; 0054a22f
        ;   Label: LAB_0054a22f
    MOV EAX,dword ptr [EBX + 0x228c]    ; 0054a239
    MOV dword ptr [EBX + 0x2288],EAX    ; 0054a23f
    MOV EAX,dword ptr [EBX + 0x2288]    ; 0054a245
    MOV dword ptr [EBX + 0x2284],EAX    ; 0054a24b
    JMP 0x0054a1a5                      ; 0054a251
        ;   XREF to: 0054a1a5 (UNCONDITIONAL_JUMP)  ; LAB_0054a1a5
    LEA EAX,[EBX + 0x2740]              ; 0054a256
        ;   Label: LAB_0054a256
    MOV dword ptr [EAX + 0x8],0x0       ; 0054a25c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054a263
    MOV dword ptr [EAX + 0x4],EDX       ; 0054a266
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054a269
    MOV dword ptr [EAX],EDX             ; 0054a26c
    JMP 0x0054a1e7                      ; 0054a26e
        ;   XREF to: 0054a1e7 (UNCONDITIONAL_JUMP)  ; LAB_0054a1e7
    CMP dword ptr [ESP + 0x28],0x7      ; 0054a273
        ;   Label: LAB_0054a273
    JGE 0x0054a283                      ; 0054a278
        ;   XREF to: 0054a283 (CONDITIONAL_JUMP)  ; LAB_0054a283
    PUSH EBX                            ; 0054a27a
    CALL FUN_0054b5b0                   ; 0054a27b
        ;   XREF to: 0054b5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054b5b0()
    ADD ESP,0x4                         ; 0054a280
    TEST byte ptr [ESI + 0xc],0x20      ; 0054a283
        ;   Label: LAB_0054a283
    JNZ 0x0054a291                      ; 0054a287
        ;   XREF to: 0054a291 (CONDITIONAL_JUMP)  ; LAB_0054a291
    ADD ESP,0x7c                        ; 0054a289
    POP EBP                             ; 0054a28c
    POP EDI                             ; 0054a28d
    POP ESI                             ; 0054a28e
    POP EBX                             ; 0054a28f
    RET                                 ; 0054a290
    MOV EBX,0x5d1cda                    ; 0054a291 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054a291
    MOV ESI,0x5a6                       ; 0054a296
    PUSH 0x5d1cef                       ; 0054a29b | = "CDeformableModel::loadStream - error ..."
    MOV dword ptr [0x01d71de0],EBX      ; 0054a2a0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054a2a6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0054a2ac
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0054a2b1
    ADD ESP,0x7c                        ; 0054a2b4
    POP EBP                             ; 0054a2b7
    POP EDI                             ; 0054a2b8
    POP ESI                             ; 0054a2b9
    POP EBX                             ; 0054a2ba
    RET                                 ; 0054a2bb

