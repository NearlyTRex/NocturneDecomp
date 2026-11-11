; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004afbf0(int param_1,int param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00481efc at 00481f16
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf5fd8
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3770
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   engine_font.cpp_FUN_004b0170
;   engine_mini3d.cpp_FUN_004ed9d0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
;   unkafter_turret.cpp_CInStreamFile_read_FUN_00573c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afbf0
        ;   Label: engine_font.cpp_FUN_004afbf0
    PUSH EBP                            ; 004afbf1
    SUB ESP,0x450                       ; 004afbf2
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004afbf8
    MOV dword ptr [EAX + 0x1ddc],0x0    ; 004afbff
    MOV EDX,dword ptr [EAX + 0x1dcc]    ; 004afc09
    MOV dword ptr [EAX + 0x1dd8],0x0    ; 004afc0f
    TEST EDX,EDX                        ; 004afc19
    JNZ 0x004aff77                      ; 004afc1b
        ;   XREF to: 004aff77 (CONDITIONAL_JUMP)  ; LAB_004aff77
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004afc21
        ;   Label: LAB_004afc21
    MOV EBX,dword ptr [EAX + 0x1dd4]    ; 004afc28
    MOV dword ptr [EAX + 0x1dd0],0x0    ; 004afc2e
    TEST EBX,EBX                        ; 004afc38
    JZ 0x004afc56                       ; 004afc3a
        ;   XREF to: 004afc56 (CONDITIONAL_JUMP)  ; LAB_004afc56
    PUSH EBX                            ; 004afc3c
    CALL crt_unknown.c_FUN_005a3770     ; 004afc3d
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004afc42
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004afc45
    MOV dword ptr [EAX + 0x1dd4],0x0    ; 004afc4c
    CMP dword ptr [0x01c6cee8],0x0      ; 004afc56 | DAT_01c6cee8
        ;   Label: LAB_004afc56
    JZ 0x004aff6e                       ; 004afc5d
        ;   XREF to: 004aff6e (CONDITIONAL_JUMP)  ; LAB_004aff6e
    CMP dword ptr [ESP + 0x460],0x0     ; 004afc63
    JZ 0x004aff4c                       ; 004afc6b
        ;   XREF to: 004aff4c (CONDITIONAL_JUMP)  ; LAB_004aff4c
    MOV EBP,dword ptr [ESP + 0x45c]     ; 004afc71
    MOV EAX,[0x02cf5fd8]                ; 004afc78 | DAT_02cf5fd8
    MOV EBP,dword ptr [EBP + 0x1a4]     ; 004afc7d
    TEST EAX,EAX                        ; 004afc83
    JNZ 0x004afc89                      ; 004afc85
        ;   XREF to: 004afc89 (CONDITIONAL_JUMP)  ; LAB_004afc89
    ADD EBP,EBP                         ; 004afc87
    PUSH EDI                            ; 004afc89
        ;   Label: LAB_004afc89
    PUSH ESI                            ; 004afc8a
    MOV EAX,EBP                         ; 004afc8b
    IMUL EAX,EBP                        ; 004afc8d
    PUSH 0x300                          ; 004afc90
    MOV dword ptr [ESP + 0x448],EAX     ; 004afc95
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004afc9c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004afca1
    MOV EDX,dword ptr [ESP + 0x444]     ; 004afca4
    PUSH EDX                            ; 004afcab
    MOV EBX,EAX                         ; 004afcac
    MOV dword ptr [ESP + 0x440],EAX     ; 004afcae
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004afcb5
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004afcba
    MOV ECX,dword ptr [ESP + 0x444]     ; 004afcbd
    PUSH ECX                            ; 004afcc4
    MOV ESI,EAX                         ; 004afcc5
    MOV dword ptr [ESP + 0x43c],EAX     ; 004afcc7
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004afcce
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004afcd3
    MOV dword ptr [ESP + 0x440],EAX     ; 004afcd6
    TEST EBX,EBX                        ; 004afcdd
    JNZ 0x004aff96                      ; 004afcdf
        ;   XREF to: 004aff96 (CONDITIONAL_JUMP)  ; LAB_004aff96
    MOV EBX,0x5c1ea4                    ; 004afce5
        ;   Label: LAB_004afce5
    MOV ESI,0x184                       ; 004afcea
    PUSH 0x5c1eb7                       ; 004afcef
    MOV dword ptr [0x01d71de0],EBX      ; 004afcf4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004afcfa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004afd00
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004afd05
    PUSH 0x0                            ; 004afd08
        ;   Label: LAB_004afd08
    LEA EAX,[ESP + 0x30c]               ; 004afd0a
    PUSH EAX                            ; 004afd11
    PUSH 0x0                            ; 004afd12
    MOV EAX,dword ptr [ESP + 0x470]     ; 004afd14
    PUSH 0x0                            ; 004afd1b
    ADD EAX,0x4                         ; 004afd1d
    PUSH EAX                            ; 004afd20
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004afd21
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004afd26
    PUSH 0x5c1ee1                       ; 004afd29
    LEA EAX,[ESP + 0x30c]               ; 004afd2e
    PUSH EAX                            ; 004afd35
    PUSH 0x0                            ; 004afd36
    PUSH 0x0                            ; 004afd38
    LEA EAX,[ESP + 0x218]               ; 004afd3a
    PUSH EAX                            ; 004afd41
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 004afd42
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004afd47
    LEA EAX,[ESP + 0x408]               ; 004afd4a
    PUSH EAX                            ; 004afd51
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004afd52
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004afd57
    PUSH 0x1                            ; 004afd5a
    LEA EAX,[ESP + 0x20c]               ; 004afd5c
    PUSH EAX                            ; 004afd63
    PUSH 0x5c1ee5                       ; 004afd64
    LEA EAX,[ESP + 0x414]               ; 004afd69
    PUSH EAX                            ; 004afd70
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 004afd71
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004afd76
    TEST EAX,EAX                        ; 004afd79
    JZ 0x004b0041                       ; 004afd7b
        ;   XREF to: 004b0041 (CONDITIONAL_JUMP)  ; LAB_004b0041
    CMP dword ptr [0x02cf5fd8],0x0      ; 004afd81 | DAT_02cf5fd8
    JZ 0x004affab                       ; 004afd88
        ;   XREF to: 004affab (CONDITIONAL_JUMP)  ; LAB_004affab
    MOV EAX,EBP                         ; 004afd8e
    IMUL EAX,EBP                        ; 004afd90
    PUSH EAX                            ; 004afd93
    MOV EBX,dword ptr [ESP + 0x444]     ; 004afd94
    PUSH EBX                            ; 004afd9b
    LEA EAX,[ESP + 0x410]               ; 004afd9c
    PUSH EAX                            ; 004afda3
    CALL unkafter_turret.cpp_CInStreamFile_read_FUN_00573c00 ; 004afda4
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int unkafter_turret.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004afda9
    LEA EAX,[ESP + 0x408]               ; 004afdac
        ;   Label: LAB_004afdac
    PUSH EAX                            ; 004afdb3
    CALL unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0 ; 004afdb4
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004afdb9
    MOV ECX,dword ptr [ESP + 0x444]     ; 004afdbc
        ;   Label: LAB_004afdbc
    PUSH ECX                            ; 004afdc3
    PUSH 0xff                           ; 004afdc4
    MOV EBX,dword ptr [ESP + 0x440]     ; 004afdc9
    PUSH EBX                            ; 004afdd0
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004afdd1
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004afdd6
    MOV ECX,0x300                       ; 004afdd9
    MOV ESI,dword ptr [ESP + 0x464]     ; 004afdde
    MOV EDI,dword ptr [ESP + 0x43c]     ; 004afde5
    ADD ESI,0x1b4                       ; 004afdec
    PUSH EDI                            ; 004afdf2
    MOV EAX,ECX                         ; 004afdf3
    SHR ECX,0x2                         ; 004afdf5
    MOVSD.REP ES:EDI,ESI                ; 004afdf8
    MOV CL,AL                           ; 004afdfa
    AND CL,0x3                          ; 004afdfc
    MOVSB.REP ES:EDI,ESI                ; 004afdff
    POP EDI                             ; 004afe01
    MOV EAX,dword ptr [ESP + 0x464]     ; 004afe02
    LEA ESI,[EAX + 0x4]                 ; 004afe09
    LEA EDI,[EAX + 0x1dbc]              ; 004afe0c
    MOV dword ptr [EAX + 0x1db8],0x0    ; 004afe12
    PUSH EDI                            ; 004afe1c
    MOV AL,byte ptr [ESI]               ; 004afe1d
        ;   Label: LAB_004afe1d
    MOV byte ptr [EDI],AL               ; 004afe1f
    CMP AL,0x0                          ; 004afe21
    JZ 0x004afe35                       ; 004afe23
        ;   XREF to: 004afe35 (CONDITIONAL_JUMP)  ; LAB_004afe35
    MOV AL,byte ptr [ESI + 0x1]         ; 004afe25
    ADD ESI,0x2                         ; 004afe28
    MOV byte ptr [EDI + 0x1],AL         ; 004afe2b
    ADD EDI,0x2                         ; 004afe2e
    CMP AL,0x0                          ; 004afe31
    JNZ 0x004afe1d                      ; 004afe33
        ;   XREF to: 004afe1d (CONDITIONAL_JUMP)  ; LAB_004afe1d
    POP EDI                             ; 004afe35
        ;   Label: LAB_004afe35
    MOV ESI,dword ptr [ESP + 0x440]     ; 004afe36
    PUSH ESI                            ; 004afe3d
    MOV EDI,dword ptr [ESP + 0x440]     ; 004afe3e
    PUSH EDI                            ; 004afe45
    PUSH EBX                            ; 004afe46
    MOV EAX,dword ptr [ESP + 0x470]     ; 004afe47
    PUSH EBP                            ; 004afe4e
    ADD EAX,0x1db4                      ; 004afe4f
    PUSH EAX                            ; 004afe54
    CALL engine_mini3d.cpp_FUN_004ed9d0 ; 004afe55
        ;   XREF to: 004ed9d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed9d0()
    ADD ESP,0x14                        ; 004afe5a
    PUSH 0x7d20                         ; 004afe5d
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004afe62
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004afe67
    MOV ECX,dword ptr [ESP + 0x464]     ; 004afe6a
    MOV dword ptr [ECX + 0x1dcc],EAX    ; 004afe71
    TEST EAX,EAX                        ; 004afe77
    JNZ 0x004afea6                      ; 004afe79
        ;   XREF to: 004afea6 (CONDITIONAL_JUMP)  ; LAB_004afea6
    LEA EAX,[ESP + 0x208]               ; 004afe7b
    PUSH EAX                            ; 004afe82
    MOV ECX,0x5c1f32                    ; 004afe83
    MOV EBX,0x1e5                       ; 004afe88
    PUSH 0x5c1f45                       ; 004afe8d
    MOV dword ptr [0x01d71de0],ECX      ; 004afe92 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004afe98 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004afe9e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004afea3
    MOV EAX,dword ptr [ESP + 0x464]     ; 004afea6
        ;   Label: LAB_004afea6
    MOV EAX,dword ptr [EAX + 0x1dcc]    ; 004afead
    ADD EAX,0x1f                        ; 004afeb3
    MOV ECX,dword ptr [ESP + 0x464]     ; 004afeb6
    AND AL,0xe0                         ; 004afebd
    PUSH 0x7d0                          ; 004afebf
    MOV dword ptr [ECX + 0x1dd0],EAX    ; 004afec4
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004afeca
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004afecf
    MOV ECX,dword ptr [ESP + 0x464]     ; 004afed2
    MOV dword ptr [ECX + 0x1dd4],EAX    ; 004afed9
    TEST EAX,EAX                        ; 004afedf
    JZ 0x004b0070                       ; 004afee1
        ;   XREF to: 004b0070 (CONDITIONAL_JUMP)  ; LAB_004b0070
    MOV EAX,dword ptr [ESP + 0x464]     ; 004afee7
        ;   Label: LAB_004afee7
    LEA EBX,[EAX + 0x80]                ; 004afeee
    LEA EBP,[EAX + 0x200]               ; 004afef4
    ADD EAX,0x400                       ; 004afefa
    MOV dword ptr [EAX + 0x19d8],0x0    ; 004afeff
    MOV dword ptr [EAX + 0x19dc],0x0    ; 004aff09
    MOV dword ptr [ESP + 0x448],EAX     ; 004aff13
    CMP dword ptr [EBX + 0x35e8],0x0    ; 004aff1a
        ;   Label: LAB_004aff1a
    JNZ 0x004b009c                      ; 004aff21
        ;   XREF to: 004b009c (CONDITIONAL_JUMP)  ; LAB_004b009c
    MOV EAX,dword ptr [ESP + 0x448]     ; 004aff27
        ;   Label: LAB_004aff27
    ADD EBX,0x4                         ; 004aff2e
    ADD EBP,0x10                        ; 004aff31
    CMP EBX,EAX                         ; 004aff34
    JNZ 0x004aff1a                      ; 004aff36
        ;   XREF to: 004aff1a (CONDITIONAL_JUMP)  ; LAB_004aff1a
    PUSH 0x0                            ; 004aff38
    LEA EAX,[ESP + 0x40c]               ; 004aff3a
    PUSH EAX                            ; 004aff41
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004aff42
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004aff47
    POP ESI                             ; 004aff4a
    POP EDI                             ; 004aff4b
    PUSH 0x3f8ccccd                     ; 004aff4c
        ;   Label: LAB_004aff4c
    MOV ECX,dword ptr [ESP + 0x460]     ; 004aff51
    MOV EAX,dword ptr [ESP + 0x464]     ; 004aff58
    PUSH ECX                            ; 004aff5f
    MOV dword ptr [ECX + 0x420c],EAX    ; 004aff60
    CALL engine_font.cpp_FUN_004b0170   ; 004aff66
        ;   XREF to: 004b0170 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0170()
    ADD ESP,0x8                         ; 004aff6b
    ADD ESP,0x450                       ; 004aff6e
        ;   Label: LAB_004aff6e
    POP EBP                             ; 004aff74
    POP EBX                             ; 004aff75
    RET                                 ; 004aff76
    PUSH EDX                            ; 004aff77
        ;   Label: LAB_004aff77
    CALL crt_unknown.c_FUN_005a3770     ; 004aff78
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004aff7d
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004aff80
    MOV dword ptr [EAX + 0x1dcc],0x0    ; 004aff87
    JMP 0x004afc21                      ; 004aff91
        ;   XREF to: 004afc21 (UNCONDITIONAL_JUMP)  ; LAB_004afc21
    TEST ESI,ESI                        ; 004aff96
        ;   Label: LAB_004aff96
    JZ 0x004afce5                       ; 004aff98
        ;   XREF to: 004afce5 (CONDITIONAL_JUMP)  ; LAB_004afce5
    TEST EAX,EAX                        ; 004aff9e
    JZ 0x004afce5                       ; 004affa0
        ;   XREF to: 004afce5 (CONDITIONAL_JUMP)  ; LAB_004afce5
    JMP 0x004afd08                      ; 004affa6
        ;   XREF to: 004afd08 (UNCONDITIONAL_JUMP)  ; LAB_004afd08
    MOV EDX,EBP                         ; 004affab
        ;   Label: LAB_004affab
    MOV EAX,EBP                         ; 004affad
    SAR EDX,0x1f                        ; 004affaf
    SUB EAX,EDX                         ; 004affb2
    SAR EAX,0x1                         ; 004affb4
    MOV ESI,dword ptr [ESP + 0x440]     ; 004affb6
    XOR EDI,EDI                         ; 004affbd
    MOV dword ptr [ESP + 0x44c],EAX     ; 004affbf
    TEST EAX,EAX                        ; 004affc6
    JLE 0x004afdac                      ; 004affc8
        ;   XREF to: 004afdac (CONDITIONAL_JUMP)  ; LAB_004afdac
    MOV EDX,dword ptr [ESP + 0x44c]     ; 004affce
        ;   Label: LAB_004affce
    PUSH EDX                            ; 004affd5
    LEA EAX,[ESP + 0xc]                 ; 004affd6
    PUSH EAX                            ; 004affda
    LEA EAX,[ESP + 0x410]               ; 004affdb
    PUSH EAX                            ; 004affe2
    CALL unkafter_turret.cpp_CInStreamFile_read_FUN_00573c00 ; 004affe3
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int unkafter_turret.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004affe8
    XOR ECX,ECX                         ; 004affeb
    TEST EBP,EBP                        ; 004affed
    JLE 0x004b000b                      ; 004affef
        ;   XREF to: 004b000b (CONDITIONAL_JUMP)  ; LAB_004b000b
    MOV EBX,ESI                         ; 004afff1
    MOV EDX,ECX                         ; 004afff3
        ;   Label: LAB_004afff3
    MOV EAX,ECX                         ; 004afff5
    SAR EDX,0x1f                        ; 004afff7
    SUB EAX,EDX                         ; 004afffa
    SAR EAX,0x1                         ; 004afffc
    INC EBX                             ; 004afffe
    MOV AL,byte ptr [ESP + EAX*0x1 + 0x8] ; 004affff
    INC ECX                             ; 004b0003
    MOV byte ptr [EBX + -0x1],AL        ; 004b0004
    CMP ECX,EBP                         ; 004b0007
    JL 0x004afff3                       ; 004b0009
        ;   XREF to: 004afff3 (CONDITIONAL_JUMP)  ; LAB_004afff3
    XOR ECX,ECX                         ; 004b000b
        ;   Label: LAB_004b000b
    ADD ESI,EBP                         ; 004b000d
    TEST EBP,EBP                        ; 004b000f
    JLE 0x004b002d                      ; 004b0011
        ;   XREF to: 004b002d (CONDITIONAL_JUMP)  ; LAB_004b002d
    MOV EBX,ESI                         ; 004b0013
    MOV EDX,ECX                         ; 004b0015
        ;   Label: LAB_004b0015
    MOV EAX,ECX                         ; 004b0017
    SAR EDX,0x1f                        ; 004b0019
    SUB EAX,EDX                         ; 004b001c
    SAR EAX,0x1                         ; 004b001e
    INC EBX                             ; 004b0020
    MOV AL,byte ptr [ESP + EAX*0x1 + 0x8] ; 004b0021
    INC ECX                             ; 004b0025
    MOV byte ptr [EBX + -0x1],AL        ; 004b0026
    CMP ECX,EBP                         ; 004b0029
    JL 0x004b0015                       ; 004b002b
        ;   XREF to: 004b0015 (CONDITIONAL_JUMP)  ; LAB_004b0015
    MOV EAX,dword ptr [ESP + 0x44c]     ; 004b002d
        ;   Label: LAB_004b002d
    INC EDI                             ; 004b0034
    ADD ESI,EBP                         ; 004b0035
    CMP EDI,EAX                         ; 004b0037
    JGE 0x004afdac                      ; 004b0039
        ;   XREF to: 004afdac (CONDITIONAL_JUMP)  ; LAB_004afdac
    JMP 0x004affce                      ; 004b003f
        ;   XREF to: 004affce (UNCONDITIONAL_JUMP)  ; LAB_004affce
    MOV dword ptr [0x01d71de4],0x1a3    ; 004b0041 | DAT_01d71de4
        ;   Label: LAB_004b0041
    LEA EAX,[ESP + 0x208]               ; 004b004b
    PUSH EAX                            ; 004b0052
    MOV EDI,0x5c1ee9                    ; 004b0053
    PUSH 0x5c1efc                       ; 004b0058
    MOV dword ptr [0x01d71de0],EDI      ; 004b005d | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004b0063
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004b0068
    JMP 0x004afdbc                      ; 004b006b
        ;   XREF to: 004afdbc (UNCONDITIONAL_JUMP)  ; LAB_004afdbc
    LEA EAX,[ECX + 0x4]                 ; 004b0070
        ;   Label: LAB_004b0070
    PUSH EAX                            ; 004b0073
    MOV EDI,0x5c1f72                    ; 004b0074
    MOV EBP,0x1ed                       ; 004b0079
    PUSH 0x5c1f85                       ; 004b007e
    MOV dword ptr [0x01d71de0],EDI      ; 004b0083 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004b0089 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004b008f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004b0094
    JMP 0x004afee7                      ; 004b0097
        ;   XREF to: 004afee7 (UNCONDITIONAL_JUMP)  ; LAB_004afee7
    MOV ESI,dword ptr [EBX + 0x21e8]    ; 004b009c
        ;   Label: LAB_004b009c
    MOV EDX,dword ptr [ESP + 0x464]     ; 004b00a2
    SHL ESI,0x2                         ; 004b00a9
    ADD ESI,EDX                         ; 004b00ac
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004b00ae
    SUB ECX,dword ptr [ESI + 0x194]     ; 004b00b4
    MOV ESI,dword ptr [ESI + 0x1a4]     ; 004b00ba
    MOV EDX,ECX                         ; 004b00c0
    MOV EAX,ECX                         ; 004b00c2
    SAR EDX,0x1f                        ; 004b00c4
    IDIV ESI                            ; 004b00c7
    MOV EDI,EDX                         ; 004b00c9
    MOV dword ptr [ESP + 0x454],EDI     ; 004b00cb
    MOV dword ptr [ESP + 0x450],ESI     ; 004b00d2
    FILD dword ptr [ESP + 0x454]        ; 004b00d9
    FILD dword ptr [ESP + 0x450]        ; 004b00e0
    FLD1                                ; 004b00e7
    FDIVRP                              ; 004b00e9
    MOV EDX,ECX                         ; 004b00eb
    MOV EAX,ECX                         ; 004b00ed
    SAR EDX,0x1f                        ; 004b00ef
    IDIV ESI                            ; 004b00f2
    MOV ECX,dword ptr [EBX + 0x35e8]    ; 004b00f4
    ADD ECX,EDI                         ; 004b00fa
    INC ECX                             ; 004b00fc
    FXCH                                ; 004b00fd
    FMUL ST1                            ; 004b00ff
    MOV dword ptr [ESP + 0x434],ECX     ; 004b0101
    MOV dword ptr [ESP + 0x450],EAX     ; 004b0108
    MOV ECX,dword ptr [EBX + 0x39e8]    ; 004b010f
    FILD dword ptr [ESP + 0x450]        ; 004b0115
    FMUL ST2                            ; 004b011c
    ADD ECX,EAX                         ; 004b011e
    MOV EAX,dword ptr [ESP + 0x434]     ; 004b0120
    INC ECX                             ; 004b0127
    MOV dword ptr [ESP + 0x450],EAX     ; 004b0128
    MOV dword ptr [ESP + 0x454],ECX     ; 004b012f
    FILD dword ptr [ESP + 0x450]        ; 004b0136
    FMUL ST3                            ; 004b013d
    FILD dword ptr [ESP + 0x454]        ; 004b013f
    FMULP ST4                           ; 004b0146
    FXCH ST2                            ; 004b0148
    FSTP float ptr [EBP + 0x25e8]       ; 004b014a
    FSTP float ptr [EBP + 0x25ec]       ; 004b0150
    FSTP float ptr [EBP + 0x25f0]       ; 004b0156
    FSTP float ptr [EBP + 0x25f4]       ; 004b015c
    JMP 0x004aff27                      ; 004b0162
        ;   XREF to: 004aff27 (UNCONDITIONAL_JUMP)  ; LAB_004aff27

