; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_getFileStat_FUN_0056c864(char *filename,_stat *file_info)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _stat *          Stack[0x8]:4   file_info
; Local Variables:
; undefined4       Stack[-0x368]:4  local_368
; undefined        Stack[-0x364]:1  local_364
; undefined        Stack[-0x35c]:1  local_35c
; undefined        Stack[-0x354]:1  local_354
; undefined4       Stack[-0x348]:4  local_348
; undefined        Stack[-0x33c]:1  local_33c
; undefined        Stack[-0x228]:1  local_228
; undefined1       Stack[-0x227]:1  local_227
; undefined1       Stack[-0x226]:1  local_226
; undefined1       Stack[-0x225]:1  local_225
; undefined        Stack[-0x124]:1  local_124
; undefined2       Stack[-0x20]:2  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   FUN_00570ad0 at 00570b44
;   crt_io.c_getFileStat_FUN_00565dc0 at 00565dc0
;
; Referenced Globals:
;   void* PTR_FindClose_005754c8 = 00175bf0
;   void* PTR_FindFirstFileA_005754cc = 00175bfc
;   TerminatedCString s_anon_00598be4
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_00564860
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_io.c_analyze_file_type_FUN_0056c750
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdlib.c__fullpath_FUN_00565d00
;   crt_string.c__strncpy_FUN_00565f70
;   crt_string.c_mbtowc_next_FUN_0056da80
;   crt_string.c_strpbrk_FUN_00570870
;   crt_time.c_dos_datetime_to_time_t_FUN_005709b0
;   crt_unknown.c_FUN_00566570
;   crt_watcom.c_getcwd_FUN_0056c5f0
;   FindClose
;   FindFirstFileA
;   FUN_005708c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c864
        ;   Label: crt_io.c_getFileStat_FUN_0056c864
    PUSH ESI                            ; 0056c865
    PUSH EDI                            ; 0056c866
    PUSH EBP                            ; 0056c867
    SUB ESP,0x358                       ; 0056c868
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0056c86e
    MOV EBX,dword ptr [ESP + 0x370]     ; 0056c875
    MOV AH,byte ptr [ESI]               ; 0056c87c
    XOR EBP,EBP                         ; 0056c87e
    TEST AH,AH                          ; 0056c880
    JZ 0x0056c896                       ; 0056c882
        ;   XREF to: 0056c896 (CONDITIONAL_JUMP)  ; LAB_0056c896
    PUSH 0x598be4                       ; 0056c884 | = "*?"
    PUSH ESI                            ; 0056c889
    CALL crt_string.c_strpbrk_FUN_00570870 ; 0056c88a
        ;   XREF to: 00570870 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strpbrk_FUN_00570870(char * str, char * char_set)
    ADD ESP,0x8                         ; 0056c88f
    TEST EAX,EAX                        ; 0056c892
    JZ 0x0056c8aa                       ; 0056c894
        ;   XREF to: 0056c8aa (CONDITIONAL_JUMP)  ; LAB_0056c8aa
    PUSH 0x1                            ; 0056c896
        ;   Label: LAB_0056c896
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056c898
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    MOV EAX,0xffffffff                  ; 0056c89d
    ADD ESP,0x4                         ; 0056c8a2
    JMP 0x0056cb55                      ; 0056c8a5
        ;   XREF to: 0056cb55 (UNCONDITIONAL_JUMP)  ; LAB_0056cb55
    PUSH 0x104                          ; 0056c8aa
        ;   Label: LAB_0056c8aa
    LEA EAX,[ESP + 0x248]               ; 0056c8af
    PUSH EAX                            ; 0056c8b6
    CALL crt_watcom.c_getcwd_FUN_0056c5f0 ; 0056c8b7
        ;   XREF to: 0056c5f0 (UNCONDITIONAL_CALL)  ; char * crt_watcom.c_getcwd_FUN_0056c5f0(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 0056c8bc
    PUSH 0x104                          ; 0056c8bf
    PUSH ESI                            ; 0056c8c4
    LEA EAX,[ESP + 0x148]               ; 0056c8c5
    PUSH EAX                            ; 0056c8cc
    CALL crt_stdlib.c__fullpath_FUN_00565d00 ; 0056c8cd
        ;   XREF to: 00565d00 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_00565d00(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 0056c8d2
    TEST EAX,EAX                        ; 0056c8d5
    JZ 0x0056c913                       ; 0056c8d7
        ;   XREF to: 0056c913 (CONDITIONAL_JUMP)  ; LAB_0056c913
    MOV AL,byte ptr [ESP + 0x140]       ; 0056c8d9
    INC AL                              ; 0056c8e0
    AND EAX,0xff                        ; 0056c8e2
    TEST byte ptr [EAX + 0x5c168c],0xc0 ; 0056c8e7 | DAT_005c168c
    JZ 0x0056c913                       ; 0056c8ee
        ;   XREF to: 0056c913 (CONDITIONAL_JUMP)  ; LAB_0056c913
    CMP byte ptr [ESP + 0x141],0x3a     ; 0056c8f0
    JNZ 0x0056c913                      ; 0056c8f8
        ;   XREF to: 0056c913 (CONDITIONAL_JUMP)  ; LAB_0056c913
    CMP byte ptr [ESP + 0x142],0x5c     ; 0056c8fa
    JNZ 0x0056c913                      ; 0056c902
        ;   XREF to: 0056c913 (CONDITIONAL_JUMP)  ; LAB_0056c913
    CMP byte ptr [ESP + 0x143],0x0      ; 0056c904
    JNZ 0x0056c913                      ; 0056c90c
        ;   XREF to: 0056c913 (CONDITIONAL_JUMP)  ; LAB_0056c913
    MOV EBP,0x1                         ; 0056c90e
    PUSH ESI                            ; 0056c913
        ;   Label: LAB_0056c913
    MOV EDI,ESI                         ; 0056c914
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 0056c916
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    MOV DL,byte ptr [EAX]               ; 0056c91b
    ADD ESP,0x4                         ; 0056c91d
    CMP DL,0x3a                         ; 0056c920
    JNZ 0x0056c928                      ; 0056c923
        ;   XREF to: 0056c928 (CONDITIONAL_JUMP)  ; LAB_0056c928
    LEA EDI,[ESI + 0x2]                 ; 0056c925
    MOV DH,byte ptr [EDI]               ; 0056c928
        ;   Label: LAB_0056c928
    CMP DH,0x5c                         ; 0056c92a
    JZ 0x0056c934                       ; 0056c92d
        ;   XREF to: 0056c934 (CONDITIONAL_JUMP)  ; LAB_0056c934
    CMP DH,0x2f                         ; 0056c92f
    JNZ 0x0056c93a                      ; 0056c932
        ;   XREF to: 0056c93a (CONDITIONAL_JUMP)  ; LAB_0056c93a
    CMP byte ptr [EDI + 0x1],0x0        ; 0056c934
        ;   Label: LAB_0056c934
    JZ 0x0056c93e                       ; 0056c938
        ;   XREF to: 0056c93e (CONDITIONAL_JUMP)  ; LAB_0056c93e
    TEST EBP,EBP                        ; 0056c93a
        ;   Label: LAB_0056c93a
    JZ 0x0056c989                       ; 0056c93c
        ;   XREF to: 0056c989 (CONDITIONAL_JUMP)  ; LAB_0056c989
    PUSH ESI                            ; 0056c93e
        ;   Label: LAB_0056c93e
    CALL crt_unknown.c_FUN_00566570     ; 0056c93f
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_00566570(char * path)
    ADD ESP,0x4                         ; 0056c944
    TEST EAX,EAX                        ; 0056c947
    JZ 0x0056c95b                       ; 0056c949
        ;   XREF to: 0056c95b (CONDITIONAL_JUMP)  ; LAB_0056c95b
    MOV EAX,0xffffffff                  ; 0056c94b
    ADD ESP,0x358                       ; 0056c950
    POP EBP                             ; 0056c956
    POP EDI                             ; 0056c957
    POP ESI                             ; 0056c958
    POP EBX                             ; 0056c959
    RET                                 ; 0056c95a
    LEA EAX,[ESP + 0x244]               ; 0056c95b
        ;   Label: LAB_0056c95b
    PUSH EAX                            ; 0056c962
    CALL crt_unknown.c_FUN_00566570     ; 0056c963
        ;   XREF to: 00566570 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_00566570(char * path)
    ADD ESP,0x4                         ; 0056c968
    PUSH 0x13e                          ; 0056c96b
    PUSH 0x0                            ; 0056c970
    LEA EAX,[ESP + 0x8]                 ; 0056c972
    PUSH EAX                            ; 0056c976
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0056c977
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDX,0x10                        ; 0056c97c
    ADD ESP,0xc                         ; 0056c981
    MOV dword ptr [ESP],EDX             ; 0056c984
    JMP 0x0056c9b1                      ; 0056c987
        ;   XREF to: 0056c9b1 (UNCONDITIONAL_JUMP)  ; LAB_0056c9b1
    MOV EAX,ESP                         ; 0056c989
        ;   Label: LAB_0056c989
    PUSH EAX                            ; 0056c98b
    PUSH ESI                            ; 0056c98c
    CALL dword ptr CS:[0x5754cc]        ; 0056c98d | PTR_FindFirstFileA_005754cc
    CMP EAX,-0x1                        ; 0056c994
    JNZ 0x0056c9a9                      ; 0056c997
        ;   XREF to: 0056c9a9 (CONDITIONAL_JUMP)  ; LAB_0056c9a9
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056c999
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    ADD ESP,0x358                       ; 0056c99e
    POP EBP                             ; 0056c9a4
    POP EDI                             ; 0056c9a5
    POP ESI                             ; 0056c9a6
    POP EBX                             ; 0056c9a7
    RET                                 ; 0056c9a8
    PUSH EAX                            ; 0056c9a9
        ;   Label: LAB_0056c9a9
    CALL dword ptr CS:[0x5754c8]        ; 0056c9aa | PTR_FindClose_005754c8
    PUSH ESI                            ; 0056c9b1
        ;   Label: LAB_0056c9b1
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 0056c9b2
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    MOV DL,byte ptr [EAX]               ; 0056c9b7
    ADD ESP,0x4                         ; 0056c9b9
    CMP DL,0x3a                         ; 0056c9bc
    JNZ 0x0056c9c7                      ; 0056c9bf
        ;   XREF to: 0056c9c7 (CONDITIONAL_JUMP)  ; LAB_0056c9c7
    XOR EAX,EAX                         ; 0056c9c1
    MOV AL,byte ptr [ESI]               ; 0056c9c3
    JMP 0x0056c9d0                      ; 0056c9c5
        ;   XREF to: 0056c9d0 (UNCONDITIONAL_JUMP)  ; LAB_0056c9d0
    XOR EAX,EAX                         ; 0056c9c7
        ;   Label: LAB_0056c9c7
    MOV AL,byte ptr [ESP + 0x244]       ; 0056c9c9
    PUSH EAX                            ; 0056c9d0
        ;   Label: LAB_0056c9d0
    CALL crt_ctype.c_tolower_FUN_00564860 ; 0056c9d1
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_00564860(int character)
    SUB EAX,0x61                        ; 0056c9d6
    ADD ESP,0x4                         ; 0056c9d9
    MOV dword ptr [EBX],EAX             ; 0056c9dc
    MOV ECX,dword ptr [EBX]             ; 0056c9de
    DEC ECX                             ; 0056c9e0
    MOV dword ptr [EBX],ECX             ; 0056c9e1
    MOV dword ptr [EBX + 0x12],ECX      ; 0056c9e3
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056c9e6
    MOV dword ptr [EBX + 0x16],EAX      ; 0056c9ea
    LEA EAX,[ESP + 0x2c]                ; 0056c9ed
    PUSH EAX                            ; 0056c9f1
    MOV ESI,dword ptr [ESP + 0x4]       ; 0056c9f2
    PUSH ESI                            ; 0056c9f6
    CALL crt_io.c_analyze_file_type_FUN_0056c750 ; 0056c9f7
        ;   XREF to: 0056c750 (UNCONDITIONAL_CALL)  ; uint crt_io.c_analyze_file_type_FUN_0056c750(uint open_flags, char * filename)
    ADD ESP,0x8                         ; 0056c9fc
    MOV word ptr [EBX + 0x8],AX         ; 0056c9ff
    LEA EAX,[ESP + 0x354]               ; 0056ca03
    PUSH EAX                            ; 0056ca0a
    LEA EAX,[ESP + 0x34c]               ; 0056ca0b
    PUSH EAX                            ; 0056ca12
    LEA EAX,[ESP + 0x1c]                ; 0056ca13
    PUSH EAX                            ; 0056ca17
    CALL FUN_005708c0                   ; 0056ca18
        ;   XREF to: 005708c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005708c0()
    ADD ESP,0xc                         ; 0056ca1d
    XOR EAX,EAX                         ; 0056ca20
    MOV AX,word ptr [ESP + 0x354]       ; 0056ca22
    PUSH EAX                            ; 0056ca2a
    XOR EAX,EAX                         ; 0056ca2b
    MOV AX,word ptr [ESP + 0x34c]       ; 0056ca2d
    PUSH EAX                            ; 0056ca35
    CALL crt_time.c_dos_datetime_to_time_t_FUN_005709b0 ; 0056ca36
        ;   XREF to: 005709b0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_dos_datetime_to_time_t_FUN_005709b0(WORD dos_date, WORD dos_time)
    ADD ESP,0x8                         ; 0056ca3b
    MOV dword ptr [EBX + 0x1e],EAX      ; 0056ca3e
    LEA EAX,[ESP + 0x34c]               ; 0056ca41
    PUSH EAX                            ; 0056ca48
    LEA EAX,[ESP + 0x354]               ; 0056ca49
    PUSH EAX                            ; 0056ca50
    LEA EAX,[ESP + 0xc]                 ; 0056ca51
    PUSH EAX                            ; 0056ca55
    CALL FUN_005708c0                   ; 0056ca56
        ;   XREF to: 005708c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005708c0()
    ADD ESP,0xc                         ; 0056ca5b
    MOV EAX,dword ptr [ESP + 0x350]     ; 0056ca5e
    CMP AX,word ptr [ESP + 0x348]       ; 0056ca65
    JNZ 0x0056ca85                      ; 0056ca6d
        ;   XREF to: 0056ca85 (CONDITIONAL_JUMP)  ; LAB_0056ca85
    MOV EAX,dword ptr [ESP + 0x34c]     ; 0056ca6f
    CMP AX,word ptr [ESP + 0x354]       ; 0056ca76
    JNZ 0x0056ca85                      ; 0056ca7e
        ;   XREF to: 0056ca85 (CONDITIONAL_JUMP)  ; LAB_0056ca85
    MOV EAX,dword ptr [EBX + 0x1e]      ; 0056ca80
    JMP 0x0056caa3                      ; 0056ca83
        ;   XREF to: 0056caa3 (UNCONDITIONAL_JUMP)  ; LAB_0056caa3
    XOR EAX,EAX                         ; 0056ca85
        ;   Label: LAB_0056ca85
    MOV AX,word ptr [ESP + 0x34c]       ; 0056ca87
    PUSH EAX                            ; 0056ca8f
    XOR EAX,EAX                         ; 0056ca90
    MOV AX,word ptr [ESP + 0x354]       ; 0056ca92
    PUSH EAX                            ; 0056ca9a
    CALL crt_time.c_dos_datetime_to_time_t_FUN_005709b0 ; 0056ca9b
        ;   XREF to: 005709b0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_dos_datetime_to_time_t_FUN_005709b0(WORD dos_date, WORD dos_time)
    ADD ESP,0x8                         ; 0056caa0
    MOV dword ptr [EBX + 0x22],EAX      ; 0056caa3
        ;   Label: LAB_0056caa3
    LEA EAX,[ESP + 0x34c]               ; 0056caa6
    PUSH EAX                            ; 0056caad
    LEA EAX,[ESP + 0x354]               ; 0056caae
    PUSH EAX                            ; 0056cab5
    LEA EAX,[ESP + 0x14]                ; 0056cab6
    PUSH EAX                            ; 0056caba
    CALL FUN_005708c0                   ; 0056cabb
        ;   XREF to: 005708c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005708c0()
    ADD ESP,0xc                         ; 0056cac0
    MOV EAX,dword ptr [ESP + 0x350]     ; 0056cac3
    CMP AX,word ptr [ESP + 0x348]       ; 0056caca
    JNZ 0x0056caea                      ; 0056cad2
        ;   XREF to: 0056caea (CONDITIONAL_JUMP)  ; LAB_0056caea
    MOV EAX,dword ptr [ESP + 0x34c]     ; 0056cad4
    CMP AX,word ptr [ESP + 0x354]       ; 0056cadb
    JNZ 0x0056caea                      ; 0056cae3
        ;   XREF to: 0056caea (CONDITIONAL_JUMP)  ; LAB_0056caea
    MOV EAX,dword ptr [EBX + 0x1e]      ; 0056cae5
    JMP 0x0056cb08                      ; 0056cae8
        ;   XREF to: 0056cb08 (UNCONDITIONAL_JUMP)  ; LAB_0056cb08
    XOR EAX,EAX                         ; 0056caea
        ;   Label: LAB_0056caea
    MOV AX,word ptr [ESP + 0x34c]       ; 0056caec
    PUSH EAX                            ; 0056caf4
    XOR EAX,EAX                         ; 0056caf5
    MOV AX,word ptr [ESP + 0x354]       ; 0056caf7
    PUSH EAX                            ; 0056caff
    CALL crt_time.c_dos_datetime_to_time_t_FUN_005709b0 ; 0056cb00
        ;   XREF to: 005709b0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_dos_datetime_to_time_t_FUN_005709b0(WORD dos_date, WORD dos_time)
    ADD ESP,0x8                         ; 0056cb05
    MOV dword ptr [EBX + 0x1a],EAX      ; 0056cb08
        ;   Label: LAB_0056cb08
    MOV word ptr [EBX + 0x10],0x0       ; 0056cb0b
    MOV AX,word ptr [EBX + 0x10]        ; 0056cb11
    MOV word ptr [EBX + 0xa],0x1        ; 0056cb15
    CWDE                                ; 0056cb1b
    MOV dword ptr [EBX + 0xc],EAX       ; 0056cb1c
    MOV dword ptr [EBX + 0x4],EAX       ; 0056cb1f
    ADD EBX,0x39                        ; 0056cb22
    MOV EAX,dword ptr [ESP]             ; 0056cb25
    MOV dword ptr [EBX + -0xb],0x0      ; 0056cb28
    PUSH 0xd                            ; 0056cb2f
    MOV dword ptr [EBX + -0xf],EAX      ; 0056cb31
    LEA EAX,[ESP + 0x30]                ; 0056cb34
    MOV dword ptr [EBX + -0x7],0x0      ; 0056cb38
    PUSH EAX                            ; 0056cb3f
    MOV word ptr [EBX + -0x3],0x0       ; 0056cb40
    PUSH EBX                            ; 0056cb46
    MOV byte ptr [EBX + -0x1],0x0       ; 0056cb47
    CALL crt_string.c__strncpy_FUN_00565f70 ; 0056cb4b
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00565f70(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0056cb50
    XOR EAX,EAX                         ; 0056cb53
    ADD ESP,0x358                       ; 0056cb55
        ;   Label: LAB_0056cb55
    POP EBP                             ; 0056cb5b
    POP EDI                             ; 0056cb5c
    POP ESI                             ; 0056cb5d
    POP EBX                             ; 0056cb5e
    RET                                 ; 0056cb5f

