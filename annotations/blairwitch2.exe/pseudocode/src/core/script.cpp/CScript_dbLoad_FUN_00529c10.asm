; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_dbLoad_FUN_00529c10(CScript *this_ptr,char *filename)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x334]:1  local_334
; undefined1       Stack[-0x333]:1  local_333
; undefined        Stack[-0x2f8]:1  local_2f8
; undefined1       Stack[-0x2f7]:1  local_2f7
; undefined1       Stack[-0x2bc]:1  local_2bc
; undefined        Stack[-0x29e]:1  local_29e
; undefined        Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_script.cpp_FUN_00521cf0 at 00521d91
;
; Referenced Globals:
;   TerminatedCString s_world_005e4e9d
;   undefined4 DAT_005e4ea3
;   TerminatedCString s_world_005e4ea6
;   TerminatedCString s_core_script_cpp_005e4eac
;   TerminatedCString s_Can_t_open_world_s_005e4ebf
;   undefined4 DAT_005e4ed3
;   TerminatedCString s_anon_005e4ed5
;   TerminatedCString s_core_script_cpp_005e4edd
;   TerminatedCString s_SCScipt_dbLoad_error_par_005e4ef0
;   TerminatedCString s_anon_005e4f1d
;   TerminatedCString s_core_script_cpp_005e4f24
;   TerminatedCString s_SCScipt_dbLoad_error_par_005e4f37
;   TerminatedCString s_anon_005e4f64
;   TerminatedCString s_core_script_cpp_005e4f6c
;   TerminatedCString s_SCScipt_dbLoad_error_par_005e4f7f
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_script.cpp_FUN_00529f90
;   core_script.cpp_trimString_FUN_00521110
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_stdio.c_ungetc_FUN_005b8350
;   crt_string.c_splitpath_FUN_005b9e58
;   crt_unknown.c_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   shape_edittool.cpp_FUN_0047be40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529c10
        ;   Label: core_script.cpp_CScript_dbLoad_FUN_00529c10
    PUSH EBP                            ; 00529c11
    SUB ESP,0x32c                       ; 00529c12
    MOV EBX,dword ptr [ESP + 0x338]     ; 00529c18
    MOV EDX,dword ptr [ESP + 0x33c]     ; 00529c1f
    PUSH EDX                            ; 00529c26
    PUSH 0x5e4e9d                       ; 00529c27 | = "world"
    MOV dword ptr [EBX + 0x20],0x0      ; 00529c2c
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00529c33
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00529c38
    MOV dword ptr [ESP + 0x328],EAX     ; 00529c3b
    TEST EAX,EAX                        ; 00529c42
    JG 0x00529c4f                       ; 00529c44
        ;   XREF to: 00529c4f (CONDITIONAL_JUMP)  ; LAB_00529c4f
    ADD ESP,0x32c                       ; 00529c46
    POP EBP                             ; 00529c4c
    POP EBX                             ; 00529c4d
    RET                                 ; 00529c4e
    PUSH EDI                            ; 00529c4f
        ;   Label: LAB_00529c4f
    PUSH ESI                            ; 00529c50
    PUSH 0x5e4ea3                       ; 00529c51 | DAT_005e4ea3
    MOV ECX,dword ptr [ESP + 0x348]     ; 00529c56
    PUSH ECX                            ; 00529c5d
    PUSH 0x5e4ea6                       ; 00529c5e | = "world"
    CALL engine_dosio.cpp_FUN_00460c70  ; 00529c63
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00529c68
    MOV EBP,EAX                         ; 00529c6b
    TEST EAX,EAX                        ; 00529c6d
    JZ 0x00529e6c                       ; 00529c6f
        ;   XREF to: 00529e6c (CONDITIONAL_JUMP)  ; LAB_00529e6c
    PUSH EBP                            ; 00529c75
        ;   Label: LAB_00529c75
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 00529c76
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    ADD ESP,0x4                         ; 00529c7b
    ADD dword ptr [ESP + 0x330],EAX     ; 00529c7e
    PUSH 0x5e4ed3                       ; 00529c85 | DAT_005e4ed3
        ;   Label: LAB_00529c85
    PUSH EBP                            ; 00529c8a
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00529c8b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x8                         ; 00529c90
    PUSH EBP                            ; 00529c93
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 00529c94
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    ADD ESP,0x4                         ; 00529c99
    CMP EAX,dword ptr [ESP + 0x330]     ; 00529c9c
    JGE 0x00529f79                      ; 00529ca3
        ;   XREF to: 00529f79 (CONDITIONAL_JUMP)  ; LAB_00529f79
    LEA EAX,[ESP + 0x8]                 ; 00529ca9
    PUSH EAX                            ; 00529cad
    PUSH 0x5e4ed5                       ; 00529cae | = "%[^,], "
    PUSH EBP                            ; 00529cb3
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00529cb4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 00529cb9
    CMP EAX,0x1                         ; 00529cbc
    JZ 0x00529cf0                       ; 00529cbf
        ;   XREF to: 00529cf0 (CONDITIONAL_JUMP)  ; LAB_00529cf0
    MOV EAX,dword ptr [EBX + 0x20]      ; 00529cc1
    PUSH EAX                            ; 00529cc4
    MOV EDX,dword ptr [ESP + 0x348]     ; 00529cc5
    PUSH EDX                            ; 00529ccc
    MOV ESI,0x5e4edd                    ; 00529ccd | = "..\\core\\script.cpp"
    MOV EDI,0x11c4                      ; 00529cd2
    PUSH 0x5e4ef0                       ; 00529cd7 | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d046a0],ESI      ; 00529cdc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00529ce2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00529ce8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00529ced
    PUSH EBP                            ; 00529cf0
        ;   Label: LAB_00529cf0
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00529cf1
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 00529cf6
    CMP EAX,0x2c                        ; 00529cf9
    JNZ 0x00529e9c                      ; 00529cfc
        ;   XREF to: 00529e9c (CONDITIONAL_JUMP)  ; LAB_00529e9c
    XOR AH,AH                           ; 00529d02
    MOV byte ptr [ESP + 0x80],AH        ; 00529d04
    LEA EAX,[ESP + 0x9e]                ; 00529d0b
        ;   Label: LAB_00529d0b
    PUSH EAX                            ; 00529d12
    PUSH 0x5e4f64                       ; 00529d13 | = " %[^\n]\n"
    PUSH EBP                            ; 00529d18
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00529d19
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 00529d1e
    CMP EAX,0x1                         ; 00529d21
    JZ 0x00529d55                       ; 00529d24
        ;   XREF to: 00529d55 (CONDITIONAL_JUMP)  ; LAB_00529d55
    MOV ESI,dword ptr [EBX + 0x20]      ; 00529d26
    PUSH ESI                            ; 00529d29
    MOV EDI,dword ptr [ESP + 0x348]     ; 00529d2a
    PUSH EDI                            ; 00529d31
    MOV EDX,0x5e4f6c                    ; 00529d32 | = "..\\core\\script.cpp"
    MOV ECX,0x11d2                      ; 00529d37
    PUSH 0x5e4f7f                       ; 00529d3c | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d046a0],EDX      ; 00529d41 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00529d47 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00529d4d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00529d52
    LEA EAX,[ESP + 0x8]                 ; 00529d55
        ;   Label: LAB_00529d55
    PUSH EAX                            ; 00529d59
    CALL core_script.cpp_trimString_FUN_00521110 ; 00529d5a
        ;   XREF to: 00521110 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00521110(char * str)
    ADD ESP,0x4                         ; 00529d5f
    LEA EAX,[ESP + 0x80]                ; 00529d62
    PUSH EAX                            ; 00529d69
    CALL core_script.cpp_trimString_FUN_00521110 ; 00529d6a
        ;   XREF to: 00521110 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00521110(char * str)
    ADD ESP,0x4                         ; 00529d6f
    LEA EAX,[ESP + 0x9e]                ; 00529d72
    PUSH EAX                            ; 00529d79
    CALL core_script.cpp_trimString_FUN_00521110 ; 00529d7a
        ;   XREF to: 00521110 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00521110(char * str)
    ADD ESP,0x4                         ; 00529d7f
    PUSH 0x0                            ; 00529d82
    LEA EAX,[ESP + 0x234]               ; 00529d84
    PUSH EAX                            ; 00529d8b
    PUSH 0x0                            ; 00529d8c
    PUSH 0x0                            ; 00529d8e
    LEA EAX,[ESP + 0x18]                ; 00529d90
    PUSH EAX                            ; 00529d94
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 00529d95
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00529d9a
    LEA ESI,[ESP + 0x230]               ; 00529d9d
    LEA EDI,[ESP + 0x8]                 ; 00529da4
    PUSH EDI                            ; 00529da8
    MOV AL,byte ptr [ESI]               ; 00529da9
        ;   Label: LAB_00529da9
    MOV byte ptr [EDI],AL               ; 00529dab
    CMP AL,0x0                          ; 00529dad
    JZ 0x00529dc1                       ; 00529daf
        ;   XREF to: 00529dc1 (CONDITIONAL_JUMP)  ; LAB_00529dc1
    MOV AL,byte ptr [ESI + 0x1]         ; 00529db1
    ADD ESI,0x2                         ; 00529db4
    MOV byte ptr [EDI + 0x1],AL         ; 00529db7
    ADD EDI,0x2                         ; 00529dba
    CMP AL,0x0                          ; 00529dbd
    JNZ 0x00529da9                      ; 00529dbf
        ;   XREF to: 00529da9 (CONDITIONAL_JUMP)  ; LAB_00529da9
    POP EDI                             ; 00529dc1
        ;   Label: LAB_00529dc1
    LEA EAX,[ESP + 0x8]                 ; 00529dc2
    PUSH EAX                            ; 00529dc6
    PUSH EBX                            ; 00529dc7
    CALL core_script.cpp_FUN_00529f90   ; 00529dc8
        ;   XREF to: 00529f90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_00529f90(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 00529dcd
    TEST EAX,EAX                        ; 00529dd0
    JL 0x00529df5                       ; 00529dd2
        ;   XREF to: 00529df5 (CONDITIONAL_JUMP)  ; LAB_00529df5
    MOV EAX,dword ptr [ESP + 0x344]     ; 00529dd4
    PUSH EAX                            ; 00529ddb
    LEA EAX,[ESP + 0xc]                 ; 00529ddc
    PUSH EAX                            ; 00529de0
    PUSH 0x5e4fac                       ; 00529de1 | = "Warning! Duplicate wav string %s dete..."
    MOV EDX,dword ptr [0x006138e0]      ; 00529de6 | g_CEditorToolsPtr
    PUSH EDX                            ; 00529dec
    CALL shape_edittool.cpp_FUN_0047be40 ; 00529ded
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x10                        ; 00529df2
    LEA EAX,[ESP + 0x8]                 ; 00529df5
        ;   Label: LAB_00529df5
    PUSH EAX                            ; 00529df9
    PUSH 0x5e4fdc                       ; 00529dfa | = "%s.wav"
    LEA EAX,[ESP + 0x4c]                ; 00529dff
    PUSH EAX                            ; 00529e03
    CALL crt_unknown.c_FUN_005b7790     ; 00529e04
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00529e09
    LEA EAX,[ESP + 0x44]                ; 00529e0c
    PUSH EAX                            ; 00529e10
    PUSH 0x5e4fe3                       ; 00529e11 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00529e16
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00529e1b
    TEST EAX,EAX                        ; 00529e1e
    JLE 0x00529ef9                      ; 00529e20
        ;   XREF to: 00529ef9 (CONDITIONAL_JUMP)  ; LAB_00529ef9
    MOV ECX,dword ptr [EBX + 0x20]      ; 00529e26
        ;   Label: LAB_00529e26
    INC ECX                             ; 00529e29
    MOV dword ptr [EBX + 0x20],ECX      ; 00529e2a
    IMUL EAX,ECX,0x226                  ; 00529e2d
    PUSH EAX                            ; 00529e33
    MOV EDI,dword ptr [EBX + 0x24]      ; 00529e34
    PUSH EDI                            ; 00529e37
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 00529e38
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00529e3d
    MOV dword ptr [EBX + 0x24],EAX      ; 00529e40
    TEST EAX,EAX                        ; 00529e43
    JZ 0x00529f51                       ; 00529e45
        ;   XREF to: 00529f51 (CONDITIONAL_JUMP)  ; LAB_00529f51
    MOV EAX,dword ptr [EBX + 0x20]      ; 00529e4b
        ;   Label: LAB_00529e4b
    DEC EAX                             ; 00529e4e
    IMUL EAX,EAX,0x226                  ; 00529e4f
    MOV ECX,0x89                        ; 00529e55
    MOV EDI,dword ptr [EBX + 0x24]      ; 00529e5a
    LEA ESI,[ESP + 0x8]                 ; 00529e5d
    ADD EDI,EAX                         ; 00529e61
    MOVSD.REP ES:EDI,ESI                ; 00529e63
    MOVSW ES:EDI,ESI                    ; 00529e65
    JMP 0x00529c85                      ; 00529e67
        ;   XREF to: 00529c85 (UNCONDITIONAL_JUMP)  ; LAB_00529c85
    MOV EAX,dword ptr [ESP + 0x344]     ; 00529e6c
        ;   Label: LAB_00529e6c
    PUSH EAX                            ; 00529e73
    MOV ESI,0x5e4eac                    ; 00529e74 | = "..\\core\\script.cpp"
    MOV EDI,0x11af                      ; 00529e79
    PUSH 0x5e4ebf                       ; 00529e7e | = "Can't open world\\%s"
    MOV dword ptr [0x01d046a0],ESI      ; 00529e83 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00529e89 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00529e8f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00529e94
    JMP 0x00529c75                      ; 00529e97
        ;   XREF to: 00529c75 (UNCONDITIONAL_JUMP)  ; LAB_00529c75
    PUSH EBP                            ; 00529e9c
        ;   Label: LAB_00529e9c
    PUSH EAX                            ; 00529e9d
    CALL crt_stdio.c_ungetc_FUN_005b8350 ; 00529e9e
        ;   XREF to: 005b8350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005b8350()
    ADD ESP,0x8                         ; 00529ea3
    LEA EAX,[ESP + 0x80]                ; 00529ea6
    PUSH EAX                            ; 00529ead
    PUSH 0x5e4f1d                       ; 00529eae | = "%[^,],"
    PUSH EBP                            ; 00529eb3
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00529eb4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 00529eb9
    CMP EAX,0x1                         ; 00529ebc
    JZ 0x00529d0b                       ; 00529ebf
        ;   XREF to: 00529d0b (CONDITIONAL_JUMP)  ; LAB_00529d0b
    MOV EDI,dword ptr [EBX + 0x20]      ; 00529ec5
    PUSH EDI                            ; 00529ec8
    MOV EAX,dword ptr [ESP + 0x348]     ; 00529ec9
    PUSH EAX                            ; 00529ed0
    MOV ECX,0x5e4f24                    ; 00529ed1 | = "..\\core\\script.cpp"
    MOV ESI,0x11cd                      ; 00529ed6
    PUSH 0x5e4f37                       ; 00529edb | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d046a0],ECX      ; 00529ee0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00529ee6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00529eec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00529ef1
    JMP 0x00529d0b                      ; 00529ef4
        ;   XREF to: 00529d0b (UNCONDITIONAL_JUMP)  ; LAB_00529d0b
    LEA EAX,[ESP + 0x8]                 ; 00529ef9
        ;   Label: LAB_00529ef9
    PUSH EAX                            ; 00529efd
    PUSH 0x5e4fe9                       ; 00529efe | = "%s.mp3"
    LEA EAX,[ESP + 0x4c]                ; 00529f03
    PUSH EAX                            ; 00529f07
    CALL crt_unknown.c_FUN_005b7790     ; 00529f08
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00529f0d
    LEA EAX,[ESP + 0x44]                ; 00529f10
    PUSH EAX                            ; 00529f14
    PUSH 0x5e4ff0                       ; 00529f15 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00529f1a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00529f1f
    TEST EAX,EAX                        ; 00529f22
    JG 0x00529e26                       ; 00529f24
        ;   XREF to: 00529e26 (CONDITIONAL_JUMP)  ; LAB_00529e26
    LEA ESI,[ESP + 0x8]                 ; 00529f2a
    LEA EDI,[ESP + 0x44]                ; 00529f2e
    PUSH EDI                            ; 00529f32
    MOV AL,byte ptr [ESI]               ; 00529f33
        ;   Label: LAB_00529f33
    MOV byte ptr [EDI],AL               ; 00529f35
    CMP AL,0x0                          ; 00529f37
    JZ 0x00529f4b                       ; 00529f39
        ;   XREF to: 00529f4b (CONDITIONAL_JUMP)  ; LAB_00529f4b
    MOV AL,byte ptr [ESI + 0x1]         ; 00529f3b
    ADD ESI,0x2                         ; 00529f3e
    MOV byte ptr [EDI + 0x1],AL         ; 00529f41
    ADD EDI,0x2                         ; 00529f44
    CMP AL,0x0                          ; 00529f47
    JNZ 0x00529f33                      ; 00529f49
        ;   XREF to: 00529f33 (CONDITIONAL_JUMP)  ; LAB_00529f33
    POP EDI                             ; 00529f4b
        ;   Label: LAB_00529f4b
    JMP 0x00529e26                      ; 00529f4c
        ;   XREF to: 00529e26 (UNCONDITIONAL_JUMP)  ; LAB_00529e26
    MOV EDX,0x5e4ff6                    ; 00529f51 | = "..\\core\\script.cpp"
        ;   Label: LAB_00529f51
    MOV ECX,0x11f3                      ; 00529f56
    PUSH 0x5e5009                       ; 00529f5b | = "SCScipt::dbLoad - out of memory"
    MOV dword ptr [0x01d046a0],EDX      ; 00529f60 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00529f66 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00529f6c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00529f71
    JMP 0x00529e4b                      ; 00529f74
        ;   XREF to: 00529e4b (UNCONDITIONAL_JUMP)  ; LAB_00529e4b
    PUSH EBP                            ; 00529f79
        ;   Label: LAB_00529f79
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00529f7a
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00529f7f
    POP ESI                             ; 00529f82
    POP EDI                             ; 00529f83
    ADD ESP,0x32c                       ; 00529f84
    POP EBP                             ; 00529f8a
    POP EBX                             ; 00529f8b
    RET                                 ; 00529f8c

