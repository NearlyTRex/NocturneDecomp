; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_pod_cpp_FUN_004f7ae0(CPodFile *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
; undefined1       Stack[-0x10e]:1  local_10e
; undefined1       Stack[-0x10d]:1  local_10d
; undefined        Stack[-0x108]:1  local_108
; undefined1       Stack[-0x107]:1  local_107
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xab]:1  local_ab
; undefined        Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x5b]:1  local_5b
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_pod.cpp_CPod_mount_FUN_004f88a0 at 004f8903
;   engine_pod.cpp_CPod_remount_FUN_004f8970 at 004f89b4
;   engine_pod.cpp_FUN_004f8eb0 at 004f8eee
;   engine_pod.cpp_FUN_004f9100 at 004f911f
;
; Referenced Globals:
;   TerminatedCString s_rb_0058d9ac
;   TerminatedCString s_engine_pod_cpp_0058d9af
;   TerminatedCString s_Out_of_memory_0058d9c1
;   TerminatedCString s_engine_pod_cpp_0058d9d0
;   TerminatedCString s_Out_of_memory_0058d9e2
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_realloc_FUN_00564a70
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdlib.c__fullpath_FUN_00565d00
;   crt_string.c__stricmp_FUN_00564520
;   engine_dosio.cpp_getFileTimestamp_FUN_00456910
;   engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7ae0
        ;   Label: engine_pod.cpp_FUN_004f7ae0
    PUSH ESI                            ; 004f7ae1
    PUSH EDI                            ; 004f7ae2
    PUSH EBP                            ; 004f7ae3
    SUB ESP,0x100                       ; 004f7ae4
    MOV ESI,dword ptr [ESP + 0x118]     ; 004f7aea
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7af1
    PUSH EDX                            ; 004f7af8
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0 ; 004f7af9
        ;   XREF to: 004f80e0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f7afe
    PUSH 0x100                          ; 004f7b01
    MOV EDI,dword ptr [ESP + 0x118]     ; 004f7b06
    PUSH ESI                            ; 004f7b0d
    ADD EDI,0x4                         ; 004f7b0e
    PUSH EDI                            ; 004f7b11
    CALL crt_stdlib.c__fullpath_FUN_00565d00 ; 004f7b12
        ;   XREF to: 00565d00 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_00565d00(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 004f7b17
    TEST EAX,EAX                        ; 004f7b1a
    JNZ 0x004f7b38                      ; 004f7b1c
        ;   XREF to: 004f7b38 (CONDITIONAL_JUMP)  ; LAB_004f7b38
    PUSH EDI                            ; 004f7b1e
    MOV AL,byte ptr [ESI]               ; 004f7b1f
        ;   Label: LAB_004f7b1f
    MOV byte ptr [EDI],AL               ; 004f7b21
    CMP AL,0x0                          ; 004f7b23
    JZ 0x004f7b37                       ; 004f7b25
        ;   XREF to: 004f7b37 (CONDITIONAL_JUMP)  ; LAB_004f7b37
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7b27
    ADD ESI,0x2                         ; 004f7b2a
    MOV byte ptr [EDI + 0x1],AL         ; 004f7b2d
    ADD EDI,0x2                         ; 004f7b30
    CMP AL,0x0                          ; 004f7b33
    JNZ 0x004f7b1f                      ; 004f7b35
        ;   XREF to: 004f7b1f (CONDITIONAL_JUMP)  ; LAB_004f7b1f
    POP EDI                             ; 004f7b37
        ;   Label: LAB_004f7b37
    MOV EBX,dword ptr [ESP + 0x114]     ; 004f7b38
        ;   Label: LAB_004f7b38
    ADD EBX,0x4                         ; 004f7b3f
    PUSH EBX                            ; 004f7b42
    PUSH 0x0                            ; 004f7b43
    CALL engine_dosio.cpp_getFileTimestamp_FUN_00456910 ; 004f7b45
        ;   XREF to: 00456910 (UNCONDITIONAL_CALL)  ; uint engine_dosio.cpp_getFileTimestamp_FUN_00456910(char * directory_path, char * filename)
    ADD ESP,0x8                         ; 004f7b4a
    PUSH 0x58d9ac                       ; 004f7b4d | = "rb"
    MOV EDX,dword ptr [ESP + 0x118]     ; 004f7b52
    PUSH EBX                            ; 004f7b59
    MOV dword ptr [EDX + 0x104],EAX     ; 004f7b5a
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f7b60
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f7b65
    MOV EBP,EAX                         ; 004f7b68
    MOV dword ptr [ESP + 0xf4],EAX      ; 004f7b6a
    TEST EAX,EAX                        ; 004f7b71
    JNZ 0x004f7ba6                      ; 004f7b73
        ;   XREF to: 004f7ba6 (CONDITIONAL_JUMP)  ; LAB_004f7ba6
    MOV EDI,dword ptr [ESP + 0xf4]      ; 004f7b75
        ;   Label: LAB_004f7b75
    TEST EDI,EDI                        ; 004f7b7c
    JZ 0x004f7b89                       ; 004f7b7e
        ;   XREF to: 004f7b89 (CONDITIONAL_JUMP)  ; LAB_004f7b89
    PUSH EDI                            ; 004f7b80
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f7b81
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f7b86
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7b89
        ;   Label: LAB_004f7b89
    PUSH EAX                            ; 004f7b90
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0 ; 004f7b91
        ;   XREF to: 004f80e0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f7b96
    XOR EAX,EAX                         ; 004f7b99
    ADD ESP,0x100                       ; 004f7b9b
    POP EBP                             ; 004f7ba1
    POP EDI                             ; 004f7ba2
    POP ESI                             ; 004f7ba3
    POP EBX                             ; 004f7ba4
    RET                                 ; 004f7ba5
    PUSH EAX                            ; 004f7ba6
        ;   Label: LAB_004f7ba6
    PUSH 0x60                           ; 004f7ba7
    PUSH 0x1                            ; 004f7ba9
    LEA EAX,[ESP + 0xc]                 ; 004f7bab
    PUSH EAX                            ; 004f7baf
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7bb0
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f7bb5
    CMP byte ptr [ESP],0x50             ; 004f7bb8
    JNZ 0x004f7ead                      ; 004f7bbc
        ;   XREF to: 004f7ead (CONDITIONAL_JUMP)  ; LAB_004f7ead
    CMP byte ptr [ESP + 0x1],0x4f       ; 004f7bc2
    JNZ 0x004f7ead                      ; 004f7bc7
        ;   XREF to: 004f7ead (CONDITIONAL_JUMP)  ; LAB_004f7ead
    CMP byte ptr [ESP + 0x2],0x44       ; 004f7bcd
    JNZ 0x004f7ead                      ; 004f7bd2
        ;   XREF to: 004f7ead (CONDITIONAL_JUMP)  ; LAB_004f7ead
    CMP byte ptr [ESP + 0x3],0x32       ; 004f7bd8
    JNZ 0x004f7ead                      ; 004f7bdd
        ;   XREF to: 004f7ead (CONDITIONAL_JUMP)  ; LAB_004f7ead
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7be3
    LEA ESI,[ESP + 0x8]                 ; 004f7bea
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7bee
    LEA EDI,[EAX + 0x108]               ; 004f7bf5
    MOV dword ptr [EAX],0x2             ; 004f7bfb
    PUSH EDI                            ; 004f7c01
    MOV AL,byte ptr [ESI]               ; 004f7c02
        ;   Label: LAB_004f7c02
    MOV byte ptr [EDI],AL               ; 004f7c04
    CMP AL,0x0                          ; 004f7c06
    JZ 0x004f7c1a                       ; 004f7c08
        ;   XREF to: 004f7c1a (CONDITIONAL_JUMP)  ; LAB_004f7c1a
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7c0a
    ADD ESI,0x2                         ; 004f7c0d
    MOV byte ptr [EDI + 0x1],AL         ; 004f7c10
    ADD EDI,0x2                         ; 004f7c13
    CMP AL,0x0                          ; 004f7c16
    JNZ 0x004f7c02                      ; 004f7c18
        ;   XREF to: 004f7c02 (CONDITIONAL_JUMP)  ; LAB_004f7c02
    POP EDI                             ; 004f7c1a
        ;   Label: LAB_004f7c1a
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f7c1b
    MOV dword ptr [EDX + 0x208],EAX     ; 004f7c1f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f7c25
    MOV dword ptr [EDX + 0x214],EAX     ; 004f7c29
    MOV EDX,dword ptr [EDX + 0x208]     ; 004f7c2f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f7c35
    ADD EAX,EDX                         ; 004f7c3c
    SHL EAX,0x2                         ; 004f7c3e
    PUSH EAX                            ; 004f7c41
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004f7c42
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004f7c47
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7c4a
    MOV dword ptr [EDX + 0x20c],EAX     ; 004f7c51
    TEST EAX,EAX                        ; 004f7c57
    JZ 0x004f7b75                       ; 004f7c59
        ;   XREF to: 004f7b75 (CONDITIONAL_JUMP)  ; LAB_004f7b75
    PUSH EBP                            ; 004f7c5f
    PUSH 0x14                           ; 004f7c60
    MOV EBX,dword ptr [EDX + 0x208]     ; 004f7c62
    PUSH EBX                            ; 004f7c68
    PUSH EAX                            ; 004f7c69
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7c6a
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f7c6f
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7c72
    MOV EBP,dword ptr [ESP + 0x114]     ; 004f7c79
    MOV EDX,dword ptr [EDX + 0x208]     ; 004f7c80
    MOV EBP,dword ptr [EBP + 0x20c]     ; 004f7c86
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f7c8c
    MOV EBP,dword ptr [EBP + 0x8]       ; 004f7c93
    ADD EAX,EDX                         ; 004f7c96
    SUB EBP,0x60                        ; 004f7c98
    SHL EAX,0x2                         ; 004f7c9b
    SUB EBP,EAX                         ; 004f7c9e
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7ca0
    MOV EDI,dword ptr [EAX + 0x208]     ; 004f7ca7
    CMP EBP,EDI                         ; 004f7cad
    JL 0x004f7b75                       ; 004f7caf
        ;   XREF to: 004f7b75 (CONDITIONAL_JUMP)  ; LAB_004f7b75
    MOV EAX,EDI                         ; 004f7cb5
    SHL EAX,0x8                         ; 004f7cb7
    CMP EBP,EAX                         ; 004f7cba
    JG 0x004f7b75                       ; 004f7cbc
        ;   XREF to: 004f7b75 (CONDITIONAL_JUMP)  ; LAB_004f7b75
    PUSH EBP                            ; 004f7cc2
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004f7cc3
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004f7cc8
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7ccb
    MOV dword ptr [EDX + 0x210],EAX     ; 004f7cd2
    TEST EAX,EAX                        ; 004f7cd8
    JNZ 0x004f7cff                      ; 004f7cda
        ;   XREF to: 004f7cff (CONDITIONAL_JUMP)  ; LAB_004f7cff
    MOV ECX,0x58d9af                    ; 004f7cdc | = "..\\engine\\pod.cpp"
    MOV EBX,0xfe                        ; 004f7ce1
    PUSH 0x58d9c1                       ; 004f7ce6 | = "Out of memory!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f7ceb | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004f7cf1 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f7cf7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f7cfc
    MOV ESI,dword ptr [ESP + 0xf4]      ; 004f7cff
        ;   Label: LAB_004f7cff
    PUSH ESI                            ; 004f7d06
    PUSH 0x1                            ; 004f7d07
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004f7d09
    PUSH EBP                            ; 004f7d10
    MOV EDI,dword ptr [EAX + 0x210]     ; 004f7d11
    PUSH EDI                            ; 004f7d17
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7d18
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f7d1d
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7d20
    MOV EAX,dword ptr [EAX + 0x208]     ; 004f7d27
    LEA EDX,[EAX + -0x1]                ; 004f7d2d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f7d30
    ADD EAX,EDX                         ; 004f7d37
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7d39
    SHL EAX,0x2                         ; 004f7d40
    MOV EDX,dword ptr [EDX + 0x20c]     ; 004f7d43
    ADD EDX,EAX                         ; 004f7d49
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f7d4b
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f7d4e
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7d51
    ADD EAX,ECX                         ; 004f7d58
    MOV dword ptr [EDX + 0x218],EAX     ; 004f7d5a
    MOV EDI,dword ptr [ESP + 0xf4]      ; 004f7d60
        ;   Label: LAB_004f7d60
    PUSH EDI                            ; 004f7d67
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f7d68
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f7d6d
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7d70
    MOV ECX,dword ptr [EAX + 0x208]     ; 004f7d77
    XOR EDX,EDX                         ; 004f7d7d
    TEST ECX,ECX                        ; 004f7d7f
    JLE 0x004f7dce                      ; 004f7d81
        ;   XREF to: 004f7dce (CONDITIONAL_JUMP)  ; LAB_004f7dce
    XOR EBX,EBX                         ; 004f7d83
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7d85
        ;   Label: LAB_004f7d85
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f7d8c
    ADD EAX,EBX                         ; 004f7d92
    MOV ECX,dword ptr [EAX]             ; 004f7d94
    TEST ECX,ECX                        ; 004f7d96
    JL 0x004f7b75                       ; 004f7d98
        ;   XREF to: 004f7b75 (CONDITIONAL_JUMP)  ; LAB_004f7b75
    CMP EBP,ECX                         ; 004f7d9e
    JLE 0x004f7b75                      ; 004f7da0
        ;   XREF to: 004f7b75 (CONDITIONAL_JUMP)  ; LAB_004f7b75
    MOV ECX,dword ptr [ESP + 0x114]     ; 004f7da6
    MOV ESI,dword ptr [EAX]             ; 004f7dad
    MOV ECX,dword ptr [ECX + 0x210]     ; 004f7daf
    ADD ECX,ESI                         ; 004f7db5
    MOV dword ptr [EAX],ECX             ; 004f7db7
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7db9
    INC EDX                             ; 004f7dc0
    MOV EDI,dword ptr [EAX + 0x208]     ; 004f7dc1
    ADD EBX,0x14                        ; 004f7dc7
    CMP EDX,EDI                         ; 004f7dca
    JL 0x004f7d85                       ; 004f7dcc
        ;   XREF to: 004f7d85 (CONDITIONAL_JUMP)  ; LAB_004f7d85
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7dce
        ;   Label: LAB_004f7dce
    MOV EAX,dword ptr [EAX + 0x208]     ; 004f7dd5
    DEC EAX                             ; 004f7ddb
    MOV dword ptr [ESP + 0xf0],EAX      ; 004f7ddc
    TEST EAX,EAX                        ; 004f7de3
    JLE 0x004f7e9d                      ; 004f7de5
        ;   XREF to: 004f7e9d (CONDITIONAL_JUMP)  ; LAB_004f7e9d
    CMP dword ptr [ESP + 0xf0],0x0      ; 004f7deb
        ;   Label: LAB_004f7deb
    JLE 0x004f7e86                      ; 004f7df3
        ;   XREF to: 004f7e86 (CONDITIONAL_JUMP)  ; LAB_004f7e86
    IMUL EAX,dword ptr [ESP + 0xf0],0x14 ; 004f7df9
    MOV EBP,0x14                        ; 004f7e01
    XOR EBX,EBX                         ; 004f7e06
    MOV dword ptr [ESP + 0xfc],EAX      ; 004f7e08
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7e0f
        ;   Label: LAB_004f7e0f
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f7e16
    LEA EDX,[EAX + EBP*0x1]             ; 004f7e1c
    MOV ECX,dword ptr [EDX]             ; 004f7e1f
    PUSH ECX                            ; 004f7e21
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 004f7e22
    PUSH ESI                            ; 004f7e25
    CALL crt_string.c__stricmp_FUN_00564520 ; 004f7e26
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f7e2b
    TEST EAX,EAX                        ; 004f7e2e
    JLE 0x004f7e75                      ; 004f7e30
        ;   XREF to: 004f7e75 (CONDITIONAL_JUMP)  ; LAB_004f7e75
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7e32
    MOV EDX,dword ptr [EDX + 0x20c]     ; 004f7e39
    LEA EAX,[EDX + EBX*0x1]             ; 004f7e3f
    LEA EDI,[ESP + 0xdc]                ; 004f7e42
    MOV ESI,EAX                         ; 004f7e49
    MOVSD ES:EDI,ESI                    ; 004f7e4b
    MOVSD ES:EDI,ESI                    ; 004f7e4c
    MOVSD ES:EDI,ESI                    ; 004f7e4d
    MOVSD ES:EDI,ESI                    ; 004f7e4e
    MOVSD ES:EDI,ESI                    ; 004f7e4f
    MOV EDI,EAX                         ; 004f7e50
    LEA ESI,[EDX + EBP*0x1]             ; 004f7e52
    MOVSD ES:EDI,ESI                    ; 004f7e55
    MOVSD ES:EDI,ESI                    ; 004f7e56
    MOVSD ES:EDI,ESI                    ; 004f7e57
    MOVSD ES:EDI,ESI                    ; 004f7e58
    MOVSD ES:EDI,ESI                    ; 004f7e59
    MOV EDI,dword ptr [ESP + 0x114]     ; 004f7e5a
    MOV EDI,dword ptr [EDI + 0x20c]     ; 004f7e61
    LEA ESI,[ESP + 0xdc]                ; 004f7e67
    ADD EDI,EBP                         ; 004f7e6e
    MOVSD ES:EDI,ESI                    ; 004f7e70
    MOVSD ES:EDI,ESI                    ; 004f7e71
    MOVSD ES:EDI,ESI                    ; 004f7e72
    MOVSD ES:EDI,ESI                    ; 004f7e73
    MOVSD ES:EDI,ESI                    ; 004f7e74
    MOV ESI,dword ptr [ESP + 0xfc]      ; 004f7e75
        ;   Label: LAB_004f7e75
    ADD EBX,0x14                        ; 004f7e7c
    ADD EBP,0x14                        ; 004f7e7f
    CMP EBX,ESI                         ; 004f7e82
    JL 0x004f7e0f                       ; 004f7e84
        ;   XREF to: 004f7e0f (CONDITIONAL_JUMP)  ; LAB_004f7e0f
    MOV EDX,dword ptr [ESP + 0xf0]      ; 004f7e86
        ;   Label: LAB_004f7e86
    DEC EDX                             ; 004f7e8d
    MOV dword ptr [ESP + 0xf0],EDX      ; 004f7e8e
    TEST EDX,EDX                        ; 004f7e95
    JG 0x004f7deb                       ; 004f7e97
        ;   XREF to: 004f7deb (CONDITIONAL_JUMP)  ; LAB_004f7deb
    MOV EAX,0x1                         ; 004f7e9d
        ;   Label: LAB_004f7e9d
    ADD ESP,0x100                       ; 004f7ea2
    POP EBP                             ; 004f7ea8
    POP EDI                             ; 004f7ea9
    POP ESI                             ; 004f7eaa
    POP EBX                             ; 004f7eab
    RET                                 ; 004f7eac
    PUSH 0x0                            ; 004f7ead
        ;   Label: LAB_004f7ead
    PUSH 0x0                            ; 004f7eaf
    MOV ECX,dword ptr [ESP + 0xfc]      ; 004f7eb1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004f7eb8
    PUSH ECX                            ; 004f7ebf
    MOV dword ptr [EAX],0x1             ; 004f7ec0
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f7ec6
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f7ecb
    MOV EBX,dword ptr [ESP + 0xf4]      ; 004f7ece
    PUSH EBX                            ; 004f7ed5
    PUSH 0x54                           ; 004f7ed6
    PUSH 0x1                            ; 004f7ed8
    LEA EAX,[ESP + 0x6c]                ; 004f7eda
    PUSH EAX                            ; 004f7ede
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7edf
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f7ee4
    LEA ESI,[ESP + 0x64]                ; 004f7ee7
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7eeb
    MOV EAX,dword ptr [ESP + 0x60]      ; 004f7ef2
    LEA EDI,[EDX + 0x108]               ; 004f7ef6
    MOV dword ptr [EDX + 0x208],EAX     ; 004f7efc
    PUSH EDI                            ; 004f7f02
    MOV AL,byte ptr [ESI]               ; 004f7f03
        ;   Label: LAB_004f7f03
    MOV byte ptr [EDI],AL               ; 004f7f05
    CMP AL,0x0                          ; 004f7f07
    JZ 0x004f7f1b                       ; 004f7f09
        ;   XREF to: 004f7f1b (CONDITIONAL_JUMP)  ; LAB_004f7f1b
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7f0b
    ADD ESI,0x2                         ; 004f7f0e
    MOV byte ptr [EDI + 0x1],AL         ; 004f7f11
    ADD EDI,0x2                         ; 004f7f14
    CMP AL,0x0                          ; 004f7f17
    JNZ 0x004f7f03                      ; 004f7f19
        ;   XREF to: 004f7f03 (CONDITIONAL_JUMP)  ; LAB_004f7f03
    POP EDI                             ; 004f7f1b
        ;   Label: LAB_004f7f1b
    MOV EDX,dword ptr [EDX + 0x208]     ; 004f7f1c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f7f22
    ADD EAX,EDX                         ; 004f7f29
    SHL EAX,0x2                         ; 004f7f2b
    PUSH EAX                            ; 004f7f2e
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004f7f2f
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004f7f34
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7f37
    MOV dword ptr [EDX + 0x20c],EAX     ; 004f7f3e
    TEST EAX,EAX                        ; 004f7f44
    JZ 0x004f7b75                       ; 004f7f46
        ;   XREF to: 004f7b75 (CONDITIONAL_JUMP)  ; LAB_004f7b75
    XOR EBP,EBP                         ; 004f7f4c
    MOV EDX,dword ptr [EDX + 0x208]     ; 004f7f4e
    MOV dword ptr [ESP + 0xf8],EBP      ; 004f7f54
    TEST EDX,EDX                        ; 004f7f5b
    JLE 0x004f80bc                      ; 004f7f5d
        ;   XREF to: 004f80bc (CONDITIONAL_JUMP)  ; LAB_004f80bc
    XOR EBX,EBX                         ; 004f7f63
    MOV ESI,dword ptr [ESP + 0xf4]      ; 004f7f65
        ;   Label: LAB_004f7f65
    PUSH ESI                            ; 004f7f6c
    PUSH 0x28                           ; 004f7f6d
    PUSH 0x1                            ; 004f7f6f
    LEA EAX,[ESP + 0xc0]                ; 004f7f71
    PUSH EAX                            ; 004f7f78
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7f79
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f7f7e
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7f81
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f7f88
    LEA EDI,[ESP + 0xb4]                ; 004f7f8e
    MOV dword ptr [EBX + EAX*0x1],EBP   ; 004f7f95
    SUB ECX,ECX                         ; 004f7f98
    DEC ECX                             ; 004f7f9a
    XOR EAX,EAX                         ; 004f7f9b
    SCASB.REPNE ES:EDI                  ; 004f7f9d
    NOT ECX                             ; 004f7f9f
    DEC ECX                             ; 004f7fa1
    INC ECX                             ; 004f7fa2
    ADD EBP,ECX                         ; 004f7fa3
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7fa5
    PUSH EBP                            ; 004f7fac
    MOV EDI,dword ptr [EAX + 0x210]     ; 004f7fad
    PUSH EDI                            ; 004f7fb3
    CALL crt_memory.c_realloc_FUN_00564a70 ; 004f7fb4
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004f7fb9
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f7fbc
    MOV dword ptr [EDX + 0x210],EAX     ; 004f7fc3
    TEST EAX,EAX                        ; 004f7fc9
    JNZ 0x004f7ff0                      ; 004f7fcb
        ;   XREF to: 004f7ff0 (CONDITIONAL_JUMP)  ; LAB_004f7ff0
    MOV ECX,0x58d9d0                    ; 004f7fcd | = "..\\engine\\pod.cpp"
    MOV ESI,0x128                       ; 004f7fd2
    PUSH 0x58d9e2                       ; 004f7fd7 | = "Out of memory!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f7fdc | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f7fe2 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f7fe8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f7fed
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f7ff0
        ;   Label: LAB_004f7ff0
    MOV EDI,dword ptr [ESP + 0x114]     ; 004f7ff7
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f7ffe
    MOV EDI,dword ptr [EDI + 0x210]     ; 004f8004
    ADD EDI,dword ptr [EBX + EAX*0x1]   ; 004f800a
    LEA ESI,[ESP + 0xb4]                ; 004f800d
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f8014
    PUSH EDI                            ; 004f801b
    MOV AL,byte ptr [ESI]               ; 004f801c
        ;   Label: LAB_004f801c
    MOV byte ptr [EDI],AL               ; 004f801e
    CMP AL,0x0                          ; 004f8020
    JZ 0x004f8034                       ; 004f8022
        ;   XREF to: 004f8034 (CONDITIONAL_JUMP)  ; LAB_004f8034
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8024
    ADD ESI,0x2                         ; 004f8027
    MOV byte ptr [EDI + 0x1],AL         ; 004f802a
    ADD EDI,0x2                         ; 004f802d
    CMP AL,0x0                          ; 004f8030
    JNZ 0x004f801c                      ; 004f8032
        ;   XREF to: 004f801c (CONDITIONAL_JUMP)  ; LAB_004f801c
    POP EDI                             ; 004f8034
        ;   Label: LAB_004f8034
    MOV EDX,dword ptr [EDX + 0x20c]     ; 004f8035
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004f803b
    MOV dword ptr [EDX + EBX*0x1 + 0x4],EAX ; 004f8042
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f8046
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f804d
    LEA EDX,[EAX + EBX*0x1]             ; 004f8053
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004f8056
    MOV dword ptr [EDX + 0x8],EAX       ; 004f805d
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f8060
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f8067
    MOV dword ptr [EBX + EAX*0x1 + 0x10],0x0 ; 004f806d
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f8075
    MOV EAX,dword ptr [EAX + 0x20c]     ; 004f807c
    LEA EDX,[EAX + EBX*0x1]             ; 004f8082
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f8085
    MOV EDI,dword ptr [ESP + 0xf8]      ; 004f808c
    MOV EAX,dword ptr [EAX + 0x104]     ; 004f8093
    INC EDI                             ; 004f8099
    MOV dword ptr [EDX + 0xc],EAX       ; 004f809a
    MOV EDX,dword ptr [ESP + 0x114]     ; 004f809d
    MOV dword ptr [ESP + 0xf8],EDI      ; 004f80a4
    MOV ECX,dword ptr [EDX + 0x208]     ; 004f80ab
    ADD EBX,0x14                        ; 004f80b1
    CMP EDI,ECX                         ; 004f80b4
    JL 0x004f7f65                       ; 004f80b6
        ;   XREF to: 004f7f65 (CONDITIONAL_JUMP)  ; LAB_004f7f65
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f80bc
        ;   Label: LAB_004f80bc
    MOV dword ptr [EAX + 0x214],0x0     ; 004f80c3
    JMP 0x004f7d60                      ; 004f80cd
        ;   XREF to: 004f7d60 (UNCONDITIONAL_JUMP)  ; LAB_004f7d60

