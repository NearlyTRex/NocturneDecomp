; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_dbLoad_FUN_0054af20(CScript *this_ptr,char *filename)
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
;   core_script.cpp_FUN_00543e00 at 00543ea1
;
; Referenced Globals:
;   TerminatedCString s_world_005efec1
;   undefined4 DAT_005efec7
;   TerminatedCString s_world_005efeca
;   TerminatedCString s_core_script_cpp_005efed0
;   TerminatedCString s_Can_t_open_world_s_005efee3
;   undefined4 DAT_005efef7
;   TerminatedCString s_anon_005efef9
;   TerminatedCString s_core_script_cpp_005eff01
;   TerminatedCString s_SCScipt_dbLoad_error_par_005eff14
;   TerminatedCString s_anon_005eff41
;   TerminatedCString s_core_script_cpp_005eff48
;   TerminatedCString s_SCScipt_dbLoad_error_par_005eff5b
;   TerminatedCString s_anon_005eff88
;   TerminatedCString s_core_script_cpp_005eff90
;   TerminatedCString s_SCScipt_dbLoad_error_par_005effa3
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_script.cpp_FUN_0054b2a0
;   core_script.cpp_trimString_FUN_00543240
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_stdio.c_ftell_FUN_005c2e90
;   crt_stdio.c_ungetc_FUN_005c0700
;   crt_string.c_splitpath_FUN_005c2238
;   crt_unknown.c_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054af20
        ;   Label: core_script.cpp_CScript_dbLoad_FUN_0054af20
    PUSH EBP                            ; 0054af21
    SUB ESP,0x32c                       ; 0054af22
    MOV EBX,dword ptr [ESP + 0x338]     ; 0054af28
    MOV EDX,dword ptr [ESP + 0x33c]     ; 0054af2f
    PUSH EDX                            ; 0054af36
    PUSH 0x5efec1                       ; 0054af37 | = "world"
    MOV dword ptr [EBX + 0x20],0x0      ; 0054af3c
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0054af43
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054af48
    MOV dword ptr [ESP + 0x328],EAX     ; 0054af4b
    TEST EAX,EAX                        ; 0054af52
    JG 0x0054af5f                       ; 0054af54
        ;   XREF to: 0054af5f (CONDITIONAL_JUMP)  ; LAB_0054af5f
    ADD ESP,0x32c                       ; 0054af56
    POP EBP                             ; 0054af5c
    POP EBX                             ; 0054af5d
    RET                                 ; 0054af5e
    PUSH EDI                            ; 0054af5f
        ;   Label: LAB_0054af5f
    PUSH ESI                            ; 0054af60
    PUSH 0x5efec7                       ; 0054af61 | DAT_005efec7
    MOV ECX,dword ptr [ESP + 0x348]     ; 0054af66
    PUSH ECX                            ; 0054af6d
    PUSH 0x5efeca                       ; 0054af6e | = "world"
    CALL engine_dosio.cpp_FUN_00479180  ; 0054af73
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0054af78
    MOV EBP,EAX                         ; 0054af7b
    TEST EAX,EAX                        ; 0054af7d
    JZ 0x0054b17c                       ; 0054af7f
        ;   XREF to: 0054b17c (CONDITIONAL_JUMP)  ; LAB_0054b17c
    PUSH EBP                            ; 0054af85
        ;   Label: LAB_0054af85
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 0054af86
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 0054af8b
    ADD dword ptr [ESP + 0x330],EAX     ; 0054af8e
    PUSH 0x5efef7                       ; 0054af95 | DAT_005efef7
        ;   Label: LAB_0054af95
    PUSH EBP                            ; 0054af9a
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054af9b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 0054afa0
    PUSH EBP                            ; 0054afa3
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 0054afa4
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 0054afa9
    CMP EAX,dword ptr [ESP + 0x330]     ; 0054afac
    JGE 0x0054b289                      ; 0054afb3
        ;   XREF to: 0054b289 (CONDITIONAL_JUMP)  ; LAB_0054b289
    LEA EAX,[ESP + 0x8]                 ; 0054afb9
    PUSH EAX                            ; 0054afbd
    PUSH 0x5efef9                       ; 0054afbe | = "%[^,], "
    PUSH EBP                            ; 0054afc3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054afc4
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054afc9
    CMP EAX,0x1                         ; 0054afcc
    JZ 0x0054b000                       ; 0054afcf
        ;   XREF to: 0054b000 (CONDITIONAL_JUMP)  ; LAB_0054b000
    MOV EAX,dword ptr [EBX + 0x20]      ; 0054afd1
    PUSH EAX                            ; 0054afd4
    MOV EDX,dword ptr [ESP + 0x348]     ; 0054afd5
    PUSH EDX                            ; 0054afdc
    MOV ESI,0x5eff01                    ; 0054afdd | = "..\\core\\script.cpp"
    MOV EDI,0x105c                      ; 0054afe2
    PUSH 0x5eff14                       ; 0054afe7 | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d1d400],ESI      ; 0054afec | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0054aff2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054aff8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0054affd
    PUSH EBP                            ; 0054b000
        ;   Label: LAB_0054b000
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0054b001
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0054b006
    CMP EAX,0x2c                        ; 0054b009
    JNZ 0x0054b1ac                      ; 0054b00c
        ;   XREF to: 0054b1ac (CONDITIONAL_JUMP)  ; LAB_0054b1ac
    XOR AH,AH                           ; 0054b012
    MOV byte ptr [ESP + 0x80],AH        ; 0054b014
    LEA EAX,[ESP + 0x9e]                ; 0054b01b
        ;   Label: LAB_0054b01b
    PUSH EAX                            ; 0054b022
    PUSH 0x5eff88                       ; 0054b023 | = " %[^\n]\n"
    PUSH EBP                            ; 0054b028
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b029
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b02e
    CMP EAX,0x1                         ; 0054b031
    JZ 0x0054b065                       ; 0054b034
        ;   XREF to: 0054b065 (CONDITIONAL_JUMP)  ; LAB_0054b065
    MOV ESI,dword ptr [EBX + 0x20]      ; 0054b036
    PUSH ESI                            ; 0054b039
    MOV EDI,dword ptr [ESP + 0x348]     ; 0054b03a
    PUSH EDI                            ; 0054b041
    MOV EDX,0x5eff90                    ; 0054b042 | = "..\\core\\script.cpp"
    MOV ECX,0x106a                      ; 0054b047
    PUSH 0x5effa3                       ; 0054b04c | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d1d400],EDX      ; 0054b051 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0054b057 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054b05d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0054b062
    LEA EAX,[ESP + 0x8]                 ; 0054b065
        ;   Label: LAB_0054b065
    PUSH EAX                            ; 0054b069
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054b06a
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054b06f
    LEA EAX,[ESP + 0x80]                ; 0054b072
    PUSH EAX                            ; 0054b079
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054b07a
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054b07f
    LEA EAX,[ESP + 0x9e]                ; 0054b082
    PUSH EAX                            ; 0054b089
    CALL core_script.cpp_trimString_FUN_00543240 ; 0054b08a
        ;   XREF to: 00543240 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimString_FUN_00543240(char * str)
    ADD ESP,0x4                         ; 0054b08f
    PUSH 0x0                            ; 0054b092
    LEA EAX,[ESP + 0x234]               ; 0054b094
    PUSH EAX                            ; 0054b09b
    PUSH 0x0                            ; 0054b09c
    PUSH 0x0                            ; 0054b09e
    LEA EAX,[ESP + 0x18]                ; 0054b0a0
    PUSH EAX                            ; 0054b0a4
    CALL crt_string.c_splitpath_FUN_005c2238 ; 0054b0a5
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0054b0aa
    LEA ESI,[ESP + 0x230]               ; 0054b0ad
    LEA EDI,[ESP + 0x8]                 ; 0054b0b4
    PUSH EDI                            ; 0054b0b8
    MOV AL,byte ptr [ESI]               ; 0054b0b9
        ;   Label: LAB_0054b0b9
    MOV byte ptr [EDI],AL               ; 0054b0bb
    CMP AL,0x0                          ; 0054b0bd
    JZ 0x0054b0d1                       ; 0054b0bf
        ;   XREF to: 0054b0d1 (CONDITIONAL_JUMP)  ; LAB_0054b0d1
    MOV AL,byte ptr [ESI + 0x1]         ; 0054b0c1
    ADD ESI,0x2                         ; 0054b0c4
    MOV byte ptr [EDI + 0x1],AL         ; 0054b0c7
    ADD EDI,0x2                         ; 0054b0ca
    CMP AL,0x0                          ; 0054b0cd
    JNZ 0x0054b0b9                      ; 0054b0cf
        ;   XREF to: 0054b0b9 (CONDITIONAL_JUMP)  ; LAB_0054b0b9
    POP EDI                             ; 0054b0d1
        ;   Label: LAB_0054b0d1
    LEA EAX,[ESP + 0x8]                 ; 0054b0d2
    PUSH EAX                            ; 0054b0d6
    PUSH EBX                            ; 0054b0d7
    CALL core_script.cpp_FUN_0054b2a0   ; 0054b0d8
        ;   XREF to: 0054b2a0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_0054b2a0(CScript * this_ptr, char * path)
    ADD ESP,0x8                         ; 0054b0dd
    TEST EAX,EAX                        ; 0054b0e0
    JL 0x0054b105                       ; 0054b0e2
        ;   XREF to: 0054b105 (CONDITIONAL_JUMP)  ; LAB_0054b105
    MOV EAX,dword ptr [ESP + 0x344]     ; 0054b0e4
    PUSH EAX                            ; 0054b0eb
    LEA EAX,[ESP + 0xc]                 ; 0054b0ec
    PUSH EAX                            ; 0054b0f0
    PUSH 0x5effd0                       ; 0054b0f1 | = "Warning! Duplicate wav string %s dete..."
    MOV EDX,dword ptr [0x0061abc0]      ; 0054b0f6 | g_CEditorToolsPtr
    PUSH EDX                            ; 0054b0fc
    CALL shape_edittool.cpp_FUN_004943a0 ; 0054b0fd
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x10                        ; 0054b102
    LEA EAX,[ESP + 0x8]                 ; 0054b105
        ;   Label: LAB_0054b105
    PUSH EAX                            ; 0054b109
    PUSH 0x5f0000                       ; 0054b10a | = "%s.wav"
    LEA EAX,[ESP + 0x4c]                ; 0054b10f
    PUSH EAX                            ; 0054b113
    CALL crt_unknown.c_FUN_005bfb40     ; 0054b114
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0054b119
    LEA EAX,[ESP + 0x44]                ; 0054b11c
    PUSH EAX                            ; 0054b120
    PUSH 0x5f0007                       ; 0054b121 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0054b126
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054b12b
    TEST EAX,EAX                        ; 0054b12e
    JLE 0x0054b209                      ; 0054b130
        ;   XREF to: 0054b209 (CONDITIONAL_JUMP)  ; LAB_0054b209
    MOV ECX,dword ptr [EBX + 0x20]      ; 0054b136
        ;   Label: LAB_0054b136
    INC ECX                             ; 0054b139
    MOV dword ptr [EBX + 0x20],ECX      ; 0054b13a
    IMUL EAX,ECX,0x226                  ; 0054b13d
    PUSH EAX                            ; 0054b143
    MOV EDI,dword ptr [EBX + 0x24]      ; 0054b144
    PUSH EDI                            ; 0054b147
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 0054b148
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0054b14d
    MOV dword ptr [EBX + 0x24],EAX      ; 0054b150
    TEST EAX,EAX                        ; 0054b153
    JZ 0x0054b261                       ; 0054b155
        ;   XREF to: 0054b261 (CONDITIONAL_JUMP)  ; LAB_0054b261
    MOV EAX,dword ptr [EBX + 0x20]      ; 0054b15b
        ;   Label: LAB_0054b15b
    DEC EAX                             ; 0054b15e
    IMUL EAX,EAX,0x226                  ; 0054b15f
    MOV ECX,0x89                        ; 0054b165
    MOV EDI,dword ptr [EBX + 0x24]      ; 0054b16a
    LEA ESI,[ESP + 0x8]                 ; 0054b16d
    ADD EDI,EAX                         ; 0054b171
    MOVSD.REP ES:EDI,ESI                ; 0054b173
    MOVSW ES:EDI,ESI                    ; 0054b175
    JMP 0x0054af95                      ; 0054b177
        ;   XREF to: 0054af95 (UNCONDITIONAL_JUMP)  ; LAB_0054af95
    MOV EAX,dword ptr [ESP + 0x344]     ; 0054b17c
        ;   Label: LAB_0054b17c
    PUSH EAX                            ; 0054b183
    MOV ESI,0x5efed0                    ; 0054b184 | = "..\\core\\script.cpp"
    MOV EDI,0x1047                      ; 0054b189
    PUSH 0x5efee3                       ; 0054b18e | = "Can't open world\\%s"
    MOV dword ptr [0x01d1d400],ESI      ; 0054b193 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0054b199 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054b19f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0054b1a4
    JMP 0x0054af85                      ; 0054b1a7
        ;   XREF to: 0054af85 (UNCONDITIONAL_JUMP)  ; LAB_0054af85
    PUSH EBP                            ; 0054b1ac
        ;   Label: LAB_0054b1ac
    PUSH EAX                            ; 0054b1ad
    CALL crt_stdio.c_ungetc_FUN_005c0700 ; 0054b1ae
        ;   XREF to: 005c0700 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005c0700()
    ADD ESP,0x8                         ; 0054b1b3
    LEA EAX,[ESP + 0x80]                ; 0054b1b6
    PUSH EAX                            ; 0054b1bd
    PUSH 0x5eff41                       ; 0054b1be | = "%[^,],"
    PUSH EBP                            ; 0054b1c3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b1c4
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b1c9
    CMP EAX,0x1                         ; 0054b1cc
    JZ 0x0054b01b                       ; 0054b1cf
        ;   XREF to: 0054b01b (CONDITIONAL_JUMP)  ; LAB_0054b01b
    MOV EDI,dword ptr [EBX + 0x20]      ; 0054b1d5
    PUSH EDI                            ; 0054b1d8
    MOV EAX,dword ptr [ESP + 0x348]     ; 0054b1d9
    PUSH EAX                            ; 0054b1e0
    MOV ECX,0x5eff48                    ; 0054b1e1 | = "..\\core\\script.cpp"
    MOV ESI,0x1065                      ; 0054b1e6
    PUSH 0x5eff5b                       ; 0054b1eb | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01d1d400],ECX      ; 0054b1f0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0054b1f6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054b1fc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0054b201
    JMP 0x0054b01b                      ; 0054b204
        ;   XREF to: 0054b01b (UNCONDITIONAL_JUMP)  ; LAB_0054b01b
    LEA EAX,[ESP + 0x8]                 ; 0054b209
        ;   Label: LAB_0054b209
    PUSH EAX                            ; 0054b20d
    PUSH 0x5f000d                       ; 0054b20e | = "%s.mp3"
    LEA EAX,[ESP + 0x4c]                ; 0054b213
    PUSH EAX                            ; 0054b217
    CALL crt_unknown.c_FUN_005bfb40     ; 0054b218
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0054b21d
    LEA EAX,[ESP + 0x44]                ; 0054b220
    PUSH EAX                            ; 0054b224
    PUSH 0x5f0014                       ; 0054b225 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0054b22a
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054b22f
    TEST EAX,EAX                        ; 0054b232
    JG 0x0054b136                       ; 0054b234
        ;   XREF to: 0054b136 (CONDITIONAL_JUMP)  ; LAB_0054b136
    LEA ESI,[ESP + 0x8]                 ; 0054b23a
    LEA EDI,[ESP + 0x44]                ; 0054b23e
    PUSH EDI                            ; 0054b242
    MOV AL,byte ptr [ESI]               ; 0054b243
        ;   Label: LAB_0054b243
    MOV byte ptr [EDI],AL               ; 0054b245
    CMP AL,0x0                          ; 0054b247
    JZ 0x0054b25b                       ; 0054b249
        ;   XREF to: 0054b25b (CONDITIONAL_JUMP)  ; LAB_0054b25b
    MOV AL,byte ptr [ESI + 0x1]         ; 0054b24b
    ADD ESI,0x2                         ; 0054b24e
    MOV byte ptr [EDI + 0x1],AL         ; 0054b251
    ADD EDI,0x2                         ; 0054b254
    CMP AL,0x0                          ; 0054b257
    JNZ 0x0054b243                      ; 0054b259
        ;   XREF to: 0054b243 (CONDITIONAL_JUMP)  ; LAB_0054b243
    POP EDI                             ; 0054b25b
        ;   Label: LAB_0054b25b
    JMP 0x0054b136                      ; 0054b25c
        ;   XREF to: 0054b136 (UNCONDITIONAL_JUMP)  ; LAB_0054b136
    MOV EDX,0x5f001a                    ; 0054b261 | = "..\\core\\script.cpp"
        ;   Label: LAB_0054b261
    MOV ECX,0x108b                      ; 0054b266
    PUSH 0x5f002d                       ; 0054b26b | = "SCScipt::dbLoad - out of memory"
    MOV dword ptr [0x01d1d400],EDX      ; 0054b270 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0054b276 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054b27c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054b281
    JMP 0x0054b15b                      ; 0054b284
        ;   XREF to: 0054b15b (UNCONDITIONAL_JUMP)  ; LAB_0054b15b
    PUSH EBP                            ; 0054b289
        ;   Label: LAB_0054b289
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0054b28a
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0054b28f
    POP ESI                             ; 0054b292
    POP EDI                             ; 0054b293
    ADD ESP,0x32c                       ; 0054b294
    POP EBP                             ; 0054b29a
    POP EBX                             ; 0054b29b
    RET                                 ; 0054b29c

