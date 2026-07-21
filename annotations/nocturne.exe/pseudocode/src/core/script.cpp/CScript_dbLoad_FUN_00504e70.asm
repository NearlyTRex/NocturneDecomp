; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_dbLoad_FUN_00504e70(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x334]:1  local_334
; undefined1       Stack[-0x333]:1  local_333
; undefined        Stack[-0x2f8]:1  local_2f8
; undefined1       Stack[-0x2f7]:1  local_2f7
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined1       Stack[-0x2bb]:1  local_2bb
; undefined        Stack[-0x29e]:1  local_29e
; undefined        Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004febd0 at 004fec82
;
; Referenced Globals:
;   string s_world_0058fb9c
;   undefined4 DAT_0058fba2
;   string s_world_0058fba5
;   string s_..\\core\\script.cpp_0058fbab
;   string s_Can't_open_world\\%s_0058fbbe
;   undefined4 DAT_0058fbd2
;   string s_%[^,],_%[^,],_%[^_]_0058fbd4
;   string s_..\\core\\script.cpp_0058fbe9
;   string s_SCScipt::dbLoad_-_error_parsing_%_0058fbfc
;   string s_stranger_0058fc29
;   undefined1 DAT_0058fc32
;   undefined1 DAT_0058fc33
;   string s_Warning!_Duplicate_wav_string_%s_0058fc34
;   undefined4 s_arning!_Duplicate_wav_string_%s_d_0058fc34+1
;   string s_%s.wav_0058fc64
;   ... and 8 more
;
; Called Functions:
;   core_script.cpp_CScript_findDialogEntry_FUN_00505180
;   core_script.cpp_trimString_FUN_004fe000
;   crt_memory.c_realloc_FUN_00564a70
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   FUN_0046fcd0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504e70
        ;   Label: core_script.cpp_CScript_dbLoad_FUN_00504e70
    PUSH EBP                            ; 00504e71
    SUB ESP,0x32c                       ; 00504e72
    MOV EBX,dword ptr [ESP + 0x338]     ; 00504e78
    MOV EDX,dword ptr [ESP + 0x33c]     ; 00504e7f
    PUSH EDX                            ; 00504e86
    PUSH 0x58fb9c                       ; 00504e87 | = "world"
    MOV dword ptr [EBX + 0x1c],0x0      ; 00504e8c
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00504e93
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 00504e98
    MOV dword ptr [ESP + 0x328],EAX     ; 00504e9b
    TEST EAX,EAX                        ; 00504ea2
    JG 0x00504eaf                       ; 00504ea4
        ;   XREF to: 00504eaf (CONDITIONAL_JUMP)  ; LAB_00504eaf
    ADD ESP,0x32c                       ; 00504ea6
    POP EBP                             ; 00504eac
    POP EBX                             ; 00504ead
    RET                                 ; 00504eae
    PUSH EDI                            ; 00504eaf
        ;   Label: LAB_00504eaf
    PUSH ESI                            ; 00504eb0
    PUSH 0x58fba2                       ; 00504eb1 | DAT_0058fba2
    MOV ECX,dword ptr [ESP + 0x348]     ; 00504eb6
    PUSH ECX                            ; 00504ebd
    PUSH 0x58fba5                       ; 00504ebe | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00504ec3
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00504ec8
    MOV EBP,EAX                         ; 00504ecb
    TEST EAX,EAX                        ; 00504ecd
    JZ 0x005050b2                       ; 00504ecf
        ;   XREF to: 005050b2 (CONDITIONAL_JUMP)  ; LAB_005050b2
    PUSH EBP                            ; 00504ed5
        ;   Label: LAB_00504ed5
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00504ed6
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_00566e70()
    ADD ESP,0x4                         ; 00504edb
    ADD dword ptr [ESP + 0x330],EAX     ; 00504ede
    PUSH 0x58fbd2                       ; 00504ee5 | DAT_0058fbd2
        ;   Label: LAB_00504ee5
    PUSH EBP                            ; 00504eea
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00504eeb
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x8                         ; 00504ef0
    PUSH EBP                            ; 00504ef3
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00504ef4
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_00566e70()
    ADD ESP,0x4                         ; 00504ef9
    CMP EAX,dword ptr [ESP + 0x330]     ; 00504efc
    JGE 0x00505161                      ; 00504f03
        ;   XREF to: 00505161 (CONDITIONAL_JUMP)  ; LAB_00505161
    LEA EAX,[ESP + 0x9e]                ; 00504f09
    PUSH EAX                            ; 00504f10
    LEA EAX,[ESP + 0x84]                ; 00504f11
    PUSH EAX                            ; 00504f18
    LEA EAX,[ESP + 0x10]                ; 00504f19
    PUSH EAX                            ; 00504f1d
    PUSH 0x58fbd4                       ; 00504f1e | = "%[^,], %[^,], %[^\n]\n"
    PUSH EBP                            ; 00504f23
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00504f24
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00504f29
    CMP EAX,0x3                         ; 00504f2c
    JZ 0x00504f60                       ; 00504f2f
        ;   XREF to: 00504f60 (CONDITIONAL_JUMP)  ; LAB_00504f60
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00504f31
    PUSH EAX                            ; 00504f34
    MOV EDX,dword ptr [ESP + 0x348]     ; 00504f35
    PUSH EDX                            ; 00504f3c
    MOV ESI,0x58fbe9                    ; 00504f3d | = "..\\core\\script.cpp"
    MOV EDI,0xed6                       ; 00504f42
    PUSH 0x58fbfc                       ; 00504f47 | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x01cc4800],ESI      ; 00504f4c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00504f52 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00504f58
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00504f5d
    LEA EAX,[ESP + 0x8]                 ; 00504f60
        ;   Label: LAB_00504f60
    PUSH EAX                            ; 00504f64
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504f65
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_trimString_FUN_004fe000()
    ADD ESP,0x4                         ; 00504f6a
    LEA EAX,[ESP + 0x80]                ; 00504f6d
    PUSH EAX                            ; 00504f74
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504f75
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_trimString_FUN_004fe000()
    ADD ESP,0x4                         ; 00504f7a
    LEA EAX,[ESP + 0x9e]                ; 00504f7d
    PUSH EAX                            ; 00504f84
    CALL core_script.cpp_trimString_FUN_004fe000 ; 00504f85
        ;   XREF to: 004fe000 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_trimString_FUN_004fe000()
    ADD ESP,0x4                         ; 00504f8a
    PUSH 0x58fc29                       ; 00504f8d | = "stranger"
    LEA EAX,[ESP + 0x84]                ; 00504f92
    PUSH EAX                            ; 00504f99
    CALL crt_string.c__stricmp_FUN_00564520 ; 00504f9a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00504f9f
    TEST EAX,EAX                        ; 00504fa2
    JNZ 0x00504fcc                      ; 00504fa4
        ;   XREF to: 00504fcc (CONDITIONAL_JUMP)  ; LAB_00504fcc
    MOV ESI,0x58fc32                    ; 00504fa6 | DAT_0058fc32
    LEA EDI,[ESP + 0x80]                ; 00504fab
    PUSH EDI                            ; 00504fb2
    MOV AL,byte ptr [ESI]               ; 00504fb3 | DAT_0058fc32 | = "Warning! Duplicate wav string %s dete..."
        ;   Label: LAB_00504fb3
    MOV byte ptr [EDI],AL               ; 00504fb5
    CMP AL,0x0                          ; 00504fb7
    JZ 0x00504fcb                       ; 00504fb9
        ;   XREF to: 00504fcb (CONDITIONAL_JUMP)  ; LAB_00504fcb
    MOV AL,byte ptr [ESI + 0x1]         ; 00504fbb | DAT_0058fc33 | s_arning!_Duplicate_wav_string_%s_d_0058fc34+1
    ADD ESI,0x2                         ; 00504fbe
    MOV byte ptr [EDI + 0x1],AL         ; 00504fc1
    ADD EDI,0x2                         ; 00504fc4
    CMP AL,0x0                          ; 00504fc7
    JNZ 0x00504fb3                      ; 00504fc9
        ;   XREF to: 00504fb3 (CONDITIONAL_JUMP)  ; LAB_00504fb3
    POP EDI                             ; 00504fcb
        ;   Label: LAB_00504fcb
    PUSH 0x0                            ; 00504fcc
        ;   Label: LAB_00504fcc
    LEA EAX,[ESP + 0x234]               ; 00504fce
    PUSH EAX                            ; 00504fd5
    PUSH 0x0                            ; 00504fd6
    PUSH 0x0                            ; 00504fd8
    LEA EAX,[ESP + 0x18]                ; 00504fda
    PUSH EAX                            ; 00504fde
    CALL crt_string.c_splitpath_FUN_00566498 ; 00504fdf
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00504fe4
    LEA ESI,[ESP + 0x230]               ; 00504fe7
    LEA EDI,[ESP + 0x8]                 ; 00504fee
    PUSH EDI                            ; 00504ff2
    MOV AL,byte ptr [ESI]               ; 00504ff3
        ;   Label: LAB_00504ff3
    MOV byte ptr [EDI],AL               ; 00504ff5
    CMP AL,0x0                          ; 00504ff7
    JZ 0x0050500b                       ; 00504ff9
        ;   XREF to: 0050500b (CONDITIONAL_JUMP)  ; LAB_0050500b
    MOV AL,byte ptr [ESI + 0x1]         ; 00504ffb
    ADD ESI,0x2                         ; 00504ffe
    MOV byte ptr [EDI + 0x1],AL         ; 00505001
    ADD EDI,0x2                         ; 00505004
    CMP AL,0x0                          ; 00505007
    JNZ 0x00504ff3                      ; 00505009
        ;   XREF to: 00504ff3 (CONDITIONAL_JUMP)  ; LAB_00504ff3
    POP EDI                             ; 0050500b
        ;   Label: LAB_0050500b
    LEA EAX,[ESP + 0x8]                 ; 0050500c
    PUSH EAX                            ; 00505010
    PUSH EBX                            ; 00505011
    CALL core_script.cpp_CScript_findDialogEntry_FUN_00505180 ; 00505012
        ;   XREF to: 00505180 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_findDialogEntry_FUN_00505180()
    ADD ESP,0x8                         ; 00505017
    TEST EAX,EAX                        ; 0050501a
    JL 0x0050503f                       ; 0050501c
        ;   XREF to: 0050503f (CONDITIONAL_JUMP)  ; LAB_0050503f
    MOV ECX,dword ptr [ESP + 0x344]     ; 0050501e
    PUSH ECX                            ; 00505025
    LEA EAX,[ESP + 0xc]                 ; 00505026
    PUSH EAX                            ; 0050502a
    PUSH 0x58fc34                       ; 0050502b | = "Warning! Duplicate wav string %s dete..."
    MOV ESI,dword ptr [0x005b6d50]      ; 00505030 | DAT_005b6d50
    PUSH ESI                            ; 00505036
    CALL FUN_0046fcd0                   ; 00505037
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x10                        ; 0050503c
    LEA EAX,[ESP + 0x8]                 ; 0050503f
        ;   Label: LAB_0050503f
    PUSH EAX                            ; 00505043
    PUSH 0x58fc64                       ; 00505044 | = "%s.wav"
    LEA EAX,[ESP + 0x4c]                ; 00505049
    PUSH EAX                            ; 0050504d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050504e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00505053
    LEA EAX,[ESP + 0x44]                ; 00505056
    PUSH EAX                            ; 0050505a
    PUSH 0x58fc6b                       ; 0050505b | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00505060
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 00505065
    TEST EAX,EAX                        ; 00505068
    JLE 0x005050e2                      ; 0050506a
        ;   XREF to: 005050e2 (CONDITIONAL_JUMP)  ; LAB_005050e2
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0050506c
        ;   Label: LAB_0050506c
    INC EDI                             ; 0050506f
    MOV dword ptr [EBX + 0x1c],EDI      ; 00505070
    IMUL EAX,EDI,0x226                  ; 00505073
    PUSH EAX                            ; 00505079
    MOV ECX,dword ptr [EBX + 0x20]      ; 0050507a
    PUSH ECX                            ; 0050507d
    CALL crt_memory.c_realloc_FUN_00564a70 ; 0050507e
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 00505083
    MOV dword ptr [EBX + 0x20],EAX      ; 00505086
    TEST EAX,EAX                        ; 00505089
    JZ 0x0050513a                       ; 0050508b
        ;   XREF to: 0050513a (CONDITIONAL_JUMP)  ; LAB_0050513a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00505091
        ;   Label: LAB_00505091
    DEC EAX                             ; 00505094
    IMUL EAX,EAX,0x226                  ; 00505095
    MOV ECX,0x89                        ; 0050509b
    MOV EDI,dword ptr [EBX + 0x20]      ; 005050a0
    LEA ESI,[ESP + 0x8]                 ; 005050a3
    ADD EDI,EAX                         ; 005050a7
    MOVSD.REP ES:EDI,ESI                ; 005050a9
    MOVSW ES:EDI,ESI                    ; 005050ab
    JMP 0x00504ee5                      ; 005050ad
        ;   XREF to: 00504ee5 (UNCONDITIONAL_JUMP)  ; LAB_00504ee5
    MOV EAX,dword ptr [ESP + 0x344]     ; 005050b2
        ;   Label: LAB_005050b2
    PUSH EAX                            ; 005050b9
    MOV ESI,0x58fbab                    ; 005050ba | = "..\\core\\script.cpp"
    MOV EDI,0xec2                       ; 005050bf
    PUSH 0x58fbbe                       ; 005050c4 | = "Can't open world\\%s"
    MOV dword ptr [0x01cc4800],ESI      ; 005050c9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005050cf | DAT_01cc4804
    CALL FUN_004c8440                   ; 005050d5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005050da
    JMP 0x00504ed5                      ; 005050dd
        ;   XREF to: 00504ed5 (UNCONDITIONAL_JUMP)  ; LAB_00504ed5
    LEA EAX,[ESP + 0x8]                 ; 005050e2
        ;   Label: LAB_005050e2
    PUSH EAX                            ; 005050e6
    PUSH 0x58fc71                       ; 005050e7 | = "%s.mp3"
    LEA EAX,[ESP + 0x4c]                ; 005050ec
    PUSH EAX                            ; 005050f0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005050f1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 005050f6
    LEA EAX,[ESP + 0x44]                ; 005050f9
    PUSH EAX                            ; 005050fd
    PUSH 0x58fc78                       ; 005050fe | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00505103
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 00505108
    TEST EAX,EAX                        ; 0050510b
    JG 0x0050506c                       ; 0050510d
        ;   XREF to: 0050506c (CONDITIONAL_JUMP)  ; LAB_0050506c
    LEA ESI,[ESP + 0x8]                 ; 00505113
    LEA EDI,[ESP + 0x44]                ; 00505117
    PUSH EDI                            ; 0050511b
    MOV AL,byte ptr [ESI]               ; 0050511c
        ;   Label: LAB_0050511c
    MOV byte ptr [EDI],AL               ; 0050511e
    CMP AL,0x0                          ; 00505120
    JZ 0x00505134                       ; 00505122
        ;   XREF to: 00505134 (CONDITIONAL_JUMP)  ; LAB_00505134
    MOV AL,byte ptr [ESI + 0x1]         ; 00505124
    ADD ESI,0x2                         ; 00505127
    MOV byte ptr [EDI + 0x1],AL         ; 0050512a
    ADD EDI,0x2                         ; 0050512d
    CMP AL,0x0                          ; 00505130
    JNZ 0x0050511c                      ; 00505132
        ;   XREF to: 0050511c (CONDITIONAL_JUMP)  ; LAB_0050511c
    POP EDI                             ; 00505134
        ;   Label: LAB_00505134
    JMP 0x0050506c                      ; 00505135
        ;   XREF to: 0050506c (UNCONDITIONAL_JUMP)  ; LAB_0050506c
    MOV EDI,0x58fc7e                    ; 0050513a | = "..\\core\\script.cpp"
        ;   Label: LAB_0050513a
    MOV EAX,0xefb                       ; 0050513f
    PUSH 0x58fc91                       ; 00505144 | = "SCScipt::dbLoad - out of memory"
    MOV dword ptr [0x01cc4800],EDI      ; 00505149 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0050514f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00505154
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00505159
    JMP 0x00505091                      ; 0050515c
        ;   XREF to: 00505091 (UNCONDITIONAL_JUMP)  ; LAB_00505091
    PUSH EBP                            ; 00505161
        ;   Label: LAB_00505161
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00505162
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00505167
    POP ESI                             ; 0050516a
    POP EDI                             ; 0050516b
    ADD ESP,0x32c                       ; 0050516c
    POP EBP                             ; 00505172
    POP EBX                             ; 00505173
    RET                                 ; 00505174

