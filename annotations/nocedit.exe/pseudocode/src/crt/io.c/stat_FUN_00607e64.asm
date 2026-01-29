; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_io_c_stat_FUN_00607e64(char *filename,_stat *file_info)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _stat *          Stack[0x8]:4   file_info
; Local Variables:
; undefined4       Stack[-0x368]:4  local_368
; undefined1       Stack[-0x364]:1  local_364
; undefined1       Stack[-0x35c]:1  local_35c
; undefined1       Stack[-0x354]:1  local_354
; undefined4       Stack[-0x348]:4  local_348
; undefined1       Stack[-0x33c]:1  local_33c
; undefined1       Stack[-0x228]:1  local_228
; undefined1       Stack[-0x227]:1  local_227
; undefined1       Stack[-0x226]:1  local_226
; undefined1       Stack[-0x225]:1  local_225
; undefined1       Stack[-0x124]:1  local_124
; undefined2       Stack[-0x20]:2  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340 at 0060c3b4
;   crt_io.c_stat_thunk_00600c18 at 00600c18
;
; Referenced Globals:
;   FindClose* g_FindCloseFunc = 00211d78
;   FindFirstFileA* g_FindFirstFileAFunc = 00211d84
;   TerminatedCString s_anon_0065906c
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_analyze_file_type_FUN_00607d50
;   crt_io.c_chdir_FUN_006012a0
;   crt_io.c_getcwd_FUN_00608d20
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdlib.c__fullpath_FUN_00601140
;   crt_string.c_mbtowc_next_FUN_00605a70
;   crt_string.c_strncpy_FUN_00600f40
;   crt_string.c_strpbrk_FUN_0060c190
;   crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
;   crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
;   FindClose
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607e64
        ;   Label: crt_io.c_stat_FUN_00607e64
    PUSH ESI                            ; 00607e65
    PUSH EDI                            ; 00607e66
    PUSH EBP                            ; 00607e67
    SUB ESP,0x358                       ; 00607e68
    MOV ESI,dword ptr [ESP + 0x36c]     ; 00607e6e
    MOV EBX,dword ptr [ESP + 0x370]     ; 00607e75
    MOV AH,byte ptr [ESI]               ; 00607e7c
    XOR EBP,EBP                         ; 00607e7e
    TEST AH,AH                          ; 00607e80
    JZ 0x00607e96                       ; 00607e82
        ;   XREF to: 00607e96 (CONDITIONAL_JUMP)  ; LAB_00607e96
    PUSH 0x65906c                       ; 00607e84 | = "*?"
    PUSH ESI                            ; 00607e89
    CALL crt_string.c_strpbrk_FUN_0060c190 ; 00607e8a
        ;   XREF to: 0060c190 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strpbrk_FUN_0060c190(char * str, char * char_set)
    ADD ESP,0x8                         ; 00607e8f
    TEST EAX,EAX                        ; 00607e92
    JZ 0x00607eaa                       ; 00607e94
        ;   XREF to: 00607eaa (CONDITIONAL_JUMP)  ; LAB_00607eaa
    PUSH 0x1                            ; 00607e96
        ;   Label: LAB_00607e96
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00607e98
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 00607e9d
    ADD ESP,0x4                         ; 00607ea2
    JMP 0x00608155                      ; 00607ea5
        ;   XREF to: 00608155 (UNCONDITIONAL_JUMP)  ; LAB_00608155
    PUSH 0x104                          ; 00607eaa
        ;   Label: LAB_00607eaa
    LEA EAX,[ESP + 0x248]               ; 00607eaf
    PUSH EAX                            ; 00607eb6
    CALL crt_io.c_getcwd_FUN_00608d20   ; 00607eb7
        ;   XREF to: 00608d20 (UNCONDITIONAL_CALL)  ; char * crt_io.c_getcwd_FUN_00608d20(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 00607ebc
    PUSH 0x104                          ; 00607ebf
    PUSH ESI                            ; 00607ec4
    LEA EAX,[ESP + 0x148]               ; 00607ec5
    PUSH EAX                            ; 00607ecc
    CALL crt_stdlib.c__fullpath_FUN_00601140 ; 00607ecd
        ;   XREF to: 00601140 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_00601140(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 00607ed2
    TEST EAX,EAX                        ; 00607ed5
    JZ 0x00607f13                       ; 00607ed7
        ;   XREF to: 00607f13 (CONDITIONAL_JUMP)  ; LAB_00607f13
    MOV AL,byte ptr [ESP + 0x140]       ; 00607ed9
    INC AL                              ; 00607ee0
    AND EAX,0xff                        ; 00607ee2
    TEST byte ptr [EAX + 0x6849c4],0xc0 ; 00607ee7 | g_CharacterClassificationTable
    JZ 0x00607f13                       ; 00607eee
        ;   XREF to: 00607f13 (CONDITIONAL_JUMP)  ; LAB_00607f13
    CMP byte ptr [ESP + 0x141],0x3a     ; 00607ef0
    JNZ 0x00607f13                      ; 00607ef8
        ;   XREF to: 00607f13 (CONDITIONAL_JUMP)  ; LAB_00607f13
    CMP byte ptr [ESP + 0x142],0x5c     ; 00607efa
    JNZ 0x00607f13                      ; 00607f02
        ;   XREF to: 00607f13 (CONDITIONAL_JUMP)  ; LAB_00607f13
    CMP byte ptr [ESP + 0x143],0x0      ; 00607f04
    JNZ 0x00607f13                      ; 00607f0c
        ;   XREF to: 00607f13 (CONDITIONAL_JUMP)  ; LAB_00607f13
    MOV EBP,0x1                         ; 00607f0e
    PUSH ESI                            ; 00607f13
        ;   Label: LAB_00607f13
    MOV EDI,ESI                         ; 00607f14
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 00607f16
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    MOV DL,byte ptr [EAX]               ; 00607f1b
    ADD ESP,0x4                         ; 00607f1d
    CMP DL,0x3a                         ; 00607f20
    JNZ 0x00607f28                      ; 00607f23
        ;   XREF to: 00607f28 (CONDITIONAL_JUMP)  ; LAB_00607f28
    LEA EDI,[ESI + 0x2]                 ; 00607f25
    MOV DH,byte ptr [EDI]               ; 00607f28
        ;   Label: LAB_00607f28
    CMP DH,0x5c                         ; 00607f2a
    JZ 0x00607f34                       ; 00607f2d
        ;   XREF to: 00607f34 (CONDITIONAL_JUMP)  ; LAB_00607f34
    CMP DH,0x2f                         ; 00607f2f
    JNZ 0x00607f3a                      ; 00607f32
        ;   XREF to: 00607f3a (CONDITIONAL_JUMP)  ; LAB_00607f3a
    CMP byte ptr [EDI + 0x1],0x0        ; 00607f34
        ;   Label: LAB_00607f34
    JZ 0x00607f3e                       ; 00607f38
        ;   XREF to: 00607f3e (CONDITIONAL_JUMP)  ; LAB_00607f3e
    TEST EBP,EBP                        ; 00607f3a
        ;   Label: LAB_00607f3a
    JZ 0x00607f89                       ; 00607f3c
        ;   XREF to: 00607f89 (CONDITIONAL_JUMP)  ; LAB_00607f89
    PUSH ESI                            ; 00607f3e
        ;   Label: LAB_00607f3e
    CALL crt_io.c_chdir_FUN_006012a0    ; 00607f3f
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 00607f44
    TEST EAX,EAX                        ; 00607f47
    JZ 0x00607f5b                       ; 00607f49
        ;   XREF to: 00607f5b (CONDITIONAL_JUMP)  ; LAB_00607f5b
    MOV EAX,0xffffffff                  ; 00607f4b
    ADD ESP,0x358                       ; 00607f50
    POP EBP                             ; 00607f56
    POP EDI                             ; 00607f57
    POP ESI                             ; 00607f58
    POP EBX                             ; 00607f59
    RET                                 ; 00607f5a
    LEA EAX,[ESP + 0x244]               ; 00607f5b
        ;   Label: LAB_00607f5b
    PUSH EAX                            ; 00607f62
    CALL crt_io.c_chdir_FUN_006012a0    ; 00607f63
        ;   XREF to: 006012a0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chdir_FUN_006012a0(char * path)
    ADD ESP,0x4                         ; 00607f68
    PUSH 0x13e                          ; 00607f6b
    PUSH 0x0                            ; 00607f70
    LEA EAX,[ESP + 0x8]                 ; 00607f72
    PUSH EAX                            ; 00607f76
    CALL crt_memory.c_memset_FUN_005fde40 ; 00607f77
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,0x10                        ; 00607f7c
    ADD ESP,0xc                         ; 00607f81
    MOV dword ptr [ESP],EDX             ; 00607f84
    JMP 0x00607fb1                      ; 00607f87
        ;   XREF to: 00607fb1 (UNCONDITIONAL_JUMP)  ; LAB_00607fb1
    MOV EAX,ESP                         ; 00607f89
        ;   Label: LAB_00607f89
    PUSH EAX                            ; 00607f8b
    PUSH ESI                            ; 00607f8c
    CALL dword ptr CS:[0x61154c]        ; 00607f8d | g_FindFirstFileAFunc
    CMP EAX,-0x1                        ; 00607f94
    JNZ 0x00607fa9                      ; 00607f97
        ;   XREF to: 00607fa9 (CONDITIONAL_JUMP)  ; LAB_00607fa9
    CALL crt_errno.c___set_errno_FUN_006083fc ; 00607f99
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    ADD ESP,0x358                       ; 00607f9e
    POP EBP                             ; 00607fa4
    POP EDI                             ; 00607fa5
    POP ESI                             ; 00607fa6
    POP EBX                             ; 00607fa7
    RET                                 ; 00607fa8
    PUSH EAX                            ; 00607fa9
        ;   Label: LAB_00607fa9
    CALL dword ptr CS:[0x611548]        ; 00607faa | g_FindCloseFunc
    PUSH ESI                            ; 00607fb1
        ;   Label: LAB_00607fb1
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 00607fb2
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    MOV DL,byte ptr [EAX]               ; 00607fb7
    ADD ESP,0x4                         ; 00607fb9
    CMP DL,0x3a                         ; 00607fbc
    JNZ 0x00607fc7                      ; 00607fbf
        ;   XREF to: 00607fc7 (CONDITIONAL_JUMP)  ; LAB_00607fc7
    XOR EAX,EAX                         ; 00607fc1
    MOV AL,byte ptr [ESI]               ; 00607fc3
    JMP 0x00607fd0                      ; 00607fc5
        ;   XREF to: 00607fd0 (UNCONDITIONAL_JUMP)  ; LAB_00607fd0
    XOR EAX,EAX                         ; 00607fc7
        ;   Label: LAB_00607fc7
    MOV AL,byte ptr [ESP + 0x244]       ; 00607fc9
    PUSH EAX                            ; 00607fd0
        ;   Label: LAB_00607fd0
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 00607fd1
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    SUB EAX,0x61                        ; 00607fd6
    ADD ESP,0x4                         ; 00607fd9
    MOV dword ptr [EBX],EAX             ; 00607fdc
    MOV ECX,dword ptr [EBX]             ; 00607fde
    DEC ECX                             ; 00607fe0
    MOV dword ptr [EBX],ECX             ; 00607fe1
    MOV dword ptr [EBX + 0x12],ECX      ; 00607fe3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00607fe6
    MOV dword ptr [EBX + 0x16],EAX      ; 00607fea
    LEA EAX,[ESP + 0x2c]                ; 00607fed
    PUSH EAX                            ; 00607ff1
    MOV ESI,dword ptr [ESP + 0x4]       ; 00607ff2
    PUSH ESI                            ; 00607ff6
    CALL crt_io.c_analyze_file_type_FUN_00607d50 ; 00607ff7
        ;   XREF to: 00607d50 (UNCONDITIONAL_CALL)  ; uint crt_io.c_analyze_file_type_FUN_00607d50(uint open_flags, char * filename)
    ADD ESP,0x8                         ; 00607ffc
    MOV word ptr [EBX + 0x8],AX         ; 00607fff
    LEA EAX,[ESP + 0x354]               ; 00608003
    PUSH EAX                            ; 0060800a
    LEA EAX,[ESP + 0x34c]               ; 0060800b
    PUSH EAX                            ; 00608012
    LEA EAX,[ESP + 0x1c]                ; 00608013
    PUSH EAX                            ; 00608017
    CALL crt_time.c_filetime_to_dos_datetime_FUN_00609cb0 ; 00608018
        ;   XREF to: 00609cb0 (UNCONDITIONAL_CALL)  ; void crt_time.c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME * filetime, WORD * dos_date, WORD * dos_time)
    ADD ESP,0xc                         ; 0060801d
    XOR EAX,EAX                         ; 00608020
    MOV AX,word ptr [ESP + 0x354]       ; 00608022
    PUSH EAX                            ; 0060802a
    XOR EAX,EAX                         ; 0060802b
    MOV AX,word ptr [ESP + 0x34c]       ; 0060802d
    PUSH EAX                            ; 00608035
    CALL crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0 ; 00608036
        ;   XREF to: 0060c1e0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date, WORD dos_time)
    ADD ESP,0x8                         ; 0060803b
    MOV dword ptr [EBX + 0x1e],EAX      ; 0060803e
    LEA EAX,[ESP + 0x34c]               ; 00608041
    PUSH EAX                            ; 00608048
    LEA EAX,[ESP + 0x354]               ; 00608049
    PUSH EAX                            ; 00608050
    LEA EAX,[ESP + 0xc]                 ; 00608051
    PUSH EAX                            ; 00608055
    CALL crt_time.c_filetime_to_dos_datetime_FUN_00609cb0 ; 00608056
        ;   XREF to: 00609cb0 (UNCONDITIONAL_CALL)  ; void crt_time.c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME * filetime, WORD * dos_date, WORD * dos_time)
    ADD ESP,0xc                         ; 0060805b
    MOV EAX,dword ptr [ESP + 0x350]     ; 0060805e
    CMP AX,word ptr [ESP + 0x348]       ; 00608065
    JNZ 0x00608085                      ; 0060806d
        ;   XREF to: 00608085 (CONDITIONAL_JUMP)  ; LAB_00608085
    MOV EAX,dword ptr [ESP + 0x34c]     ; 0060806f
    CMP AX,word ptr [ESP + 0x354]       ; 00608076
    JNZ 0x00608085                      ; 0060807e
        ;   XREF to: 00608085 (CONDITIONAL_JUMP)  ; LAB_00608085
    MOV EAX,dword ptr [EBX + 0x1e]      ; 00608080
    JMP 0x006080a3                      ; 00608083
        ;   XREF to: 006080a3 (UNCONDITIONAL_JUMP)  ; LAB_006080a3
    XOR EAX,EAX                         ; 00608085
        ;   Label: LAB_00608085
    MOV AX,word ptr [ESP + 0x34c]       ; 00608087
    PUSH EAX                            ; 0060808f
    XOR EAX,EAX                         ; 00608090
    MOV AX,word ptr [ESP + 0x354]       ; 00608092
    PUSH EAX                            ; 0060809a
    CALL crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0 ; 0060809b
        ;   XREF to: 0060c1e0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date, WORD dos_time)
    ADD ESP,0x8                         ; 006080a0
    MOV dword ptr [EBX + 0x22],EAX      ; 006080a3
        ;   Label: LAB_006080a3
    LEA EAX,[ESP + 0x34c]               ; 006080a6
    PUSH EAX                            ; 006080ad
    LEA EAX,[ESP + 0x354]               ; 006080ae
    PUSH EAX                            ; 006080b5
    LEA EAX,[ESP + 0x14]                ; 006080b6
    PUSH EAX                            ; 006080ba
    CALL crt_time.c_filetime_to_dos_datetime_FUN_00609cb0 ; 006080bb
        ;   XREF to: 00609cb0 (UNCONDITIONAL_CALL)  ; void crt_time.c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME * filetime, WORD * dos_date, WORD * dos_time)
    ADD ESP,0xc                         ; 006080c0
    MOV EAX,dword ptr [ESP + 0x350]     ; 006080c3
    CMP AX,word ptr [ESP + 0x348]       ; 006080ca
    JNZ 0x006080ea                      ; 006080d2
        ;   XREF to: 006080ea (CONDITIONAL_JUMP)  ; LAB_006080ea
    MOV EAX,dword ptr [ESP + 0x34c]     ; 006080d4
    CMP AX,word ptr [ESP + 0x354]       ; 006080db
    JNZ 0x006080ea                      ; 006080e3
        ;   XREF to: 006080ea (CONDITIONAL_JUMP)  ; LAB_006080ea
    MOV EAX,dword ptr [EBX + 0x1e]      ; 006080e5
    JMP 0x00608108                      ; 006080e8
        ;   XREF to: 00608108 (UNCONDITIONAL_JUMP)  ; LAB_00608108
    XOR EAX,EAX                         ; 006080ea
        ;   Label: LAB_006080ea
    MOV AX,word ptr [ESP + 0x34c]       ; 006080ec
    PUSH EAX                            ; 006080f4
    XOR EAX,EAX                         ; 006080f5
    MOV AX,word ptr [ESP + 0x354]       ; 006080f7
    PUSH EAX                            ; 006080ff
    CALL crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0 ; 00608100
        ;   XREF to: 0060c1e0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date, WORD dos_time)
    ADD ESP,0x8                         ; 00608105
    MOV dword ptr [EBX + 0x1a],EAX      ; 00608108
        ;   Label: LAB_00608108
    MOV word ptr [EBX + 0x10],0x0       ; 0060810b
    MOV AX,word ptr [EBX + 0x10]        ; 00608111
    MOV word ptr [EBX + 0xa],0x1        ; 00608115
    CWDE                                ; 0060811b
    MOV dword ptr [EBX + 0xc],EAX       ; 0060811c
    MOV dword ptr [EBX + 0x4],EAX       ; 0060811f
    ADD EBX,0x39                        ; 00608122
    MOV EAX,dword ptr [ESP]             ; 00608125
    MOV dword ptr [EBX + -0xb],0x0      ; 00608128
    PUSH 0xd                            ; 0060812f
    MOV dword ptr [EBX + -0xf],EAX      ; 00608131
    LEA EAX,[ESP + 0x30]                ; 00608134
    MOV dword ptr [EBX + -0x7],0x0      ; 00608138
    PUSH EAX                            ; 0060813f
    MOV word ptr [EBX + -0x3],0x0       ; 00608140
    PUSH EBX                            ; 00608146
    MOV byte ptr [EBX + -0x1],0x0       ; 00608147
    CALL crt_string.c_strncpy_FUN_00600f40 ; 0060814b
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00608150
    XOR EAX,EAX                         ; 00608153
    ADD ESP,0x358                       ; 00608155
        ;   Label: LAB_00608155
    POP EBP                             ; 0060815b
    POP EDI                             ; 0060815c
    POP ESI                             ; 0060815d
    POP EBX                             ; 0060815e
    RET                                 ; 0060815f

