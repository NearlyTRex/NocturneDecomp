; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00573b80(CTextureCache *this_ptr,char *texture_name)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   texture_name
; Local Variables:
; undefined1       Stack[-0x1d8]:1  local_1d8
; undefined1       Stack[-0x1d7]:1  local_1d7
; undefined        Stack[-0x158]:1  local_158
; undefined1       Stack[-0x157]:1  local_157
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574e00 at 00574e4f
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   TerminatedCString s_engine_texture_cpp_005ec6be
;   TerminatedCString s_Texture_name_is_too_big_005ec6d4
;   undefined4 DAT_005ec6f1
;   TerminatedCString s_engine_texture_cpp_005ec6f5
;   TerminatedCString s_CTextureCache_load_Can_t_005ec70b
;   undefined4 DAT_005ec73b
;   undefined4 DAT_005ec740
;   undefined4 DAT_005ec744
;   undefined4 DAT_005ec749
;   TerminatedCString s_engine_texture_cpp_005ec74d
;   TerminatedCString s_CTextureCache_load_Out_o_005ec763
;   TerminatedCString s_CTextureCache_load_Bad_t_005ec787
;   TerminatedCString s_engine_texture_cpp_005ec7b8
;   TerminatedCString s_engine_texture_cpp_005ec7ce
;   ... and 18 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_changeFileExtension_FUN_004611a0
;   engine_dosio.cpp_findFile_FUN_00460980
;   engine_dosio.cpp_FUN_00460910
;   engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00573a60
;   support_trstream.cpp_CInStreamFile_close_FUN_0057d180
;   support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573b80
        ;   Label: engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80
    PUSH ESI                            ; 00573b81
    PUSH EDI                            ; 00573b82
    PUSH EBP                            ; 00573b83
    SUB ESP,0x1c8                       ; 00573b84
    MOV EBX,dword ptr [ESP + 0x1dc]     ; 00573b8a
    LEA EAX,[ESP + 0x180]               ; 00573b91
    PUSH EAX                            ; 00573b98
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 00573b99
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00573b9e
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 00573ba1
    SUB ECX,ECX                         ; 00573ba8
    DEC ECX                             ; 00573baa
    XOR EAX,EAX                         ; 00573bab
    SCASB.REPNE ES:EDI                  ; 00573bad
    NOT ECX                             ; 00573baf
    DEC ECX                             ; 00573bb1
    CMP ECX,0x40                        ; 00573bb2
    JNC 0x00574005                      ; 00573bb5
        ;   XREF to: 00574005 (CONDITIONAL_JUMP)  ; LAB_00574005
    PUSH 0x214                          ; 00573bbb
        ;   Label: LAB_00573bbb
    PUSH 0x0                            ; 00573bc0
    PUSH 0x2652eb8                      ; 00573bc2
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00573bc7
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00573bcc
    PUSH 0x214                          ; 00573bcf
    PUSH 0x0                            ; 00573bd4
    PUSH 0x26530cc                      ; 00573bd6
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00573bdb
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00573be0
    PUSH 0x214                          ; 00573be3
    PUSH 0x0                            ; 00573be8
    PUSH 0x26532e0                      ; 00573bea
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00573bef
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00573bf4
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 00573bf7
    PUSH EDI                            ; 00573bfe
    PUSH 0x5ec6f1                       ; 00573bff | DAT_005ec6f1
    PUSH 0x2652eb8                      ; 00573c04
    CALL engine_dosio.cpp_FUN_00460910  ; 00573c09
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 00573c0e
    PUSH 0x2652eb8                      ; 00573c11
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 00573c16
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00460980(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 00573c1b
    TEST EAX,EAX                        ; 00573c1e
    JNZ 0x00573c45                      ; 00573c20
        ;   XREF to: 00573c45 (CONDITIONAL_JUMP)  ; LAB_00573c45
    PUSH EDI                            ; 00573c22
    MOV EBP,0x5ec6f5                    ; 00573c23 | = "..\\engine\\texture.cpp"
    MOV EAX,0x107                       ; 00573c28
    PUSH 0x5ec70b                       ; 00573c2d | = "CTextureCache::load - Can't get file ..."
    MOV dword ptr [0x01d046a0],EBP      ; 00573c32 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00573c38 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00573c3d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00573c42
    PUSH EBX                            ; 00573c45
        ;   Label: LAB_00573c45
    MOV EBP,dword ptr [0x026530bc]      ; 00573c46 | DAT_026530bc
    CALL engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00573a60 ; 00573c4c
        ;   XREF to: 00573a60 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00573a60(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 00573c51
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00573c54
    LEA EDX,[EAX*0x4 + 0x0]             ; 00573c5b
    SUB EDX,EAX                         ; 00573c62
    ADD EBX,0x4                         ; 00573c64
    SHL EDX,0x5                         ; 00573c67
    ADD EBX,EDX                         ; 00573c6a
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 00573c6c
    LEA EDI,[EBX + 0x4]                 ; 00573c73
    PUSH EDI                            ; 00573c76
    MOV AL,byte ptr [ESI]               ; 00573c77
        ;   Label: LAB_00573c77
    MOV byte ptr [EDI],AL               ; 00573c79
    CMP AL,0x0                          ; 00573c7b
    JZ 0x00573c8f                       ; 00573c7d
        ;   XREF to: 00573c8f (CONDITIONAL_JUMP)  ; LAB_00573c8f
    MOV AL,byte ptr [ESI + 0x1]         ; 00573c7f
    ADD ESI,0x2                         ; 00573c82
    MOV byte ptr [EDI + 0x1],AL         ; 00573c85
    ADD EDI,0x2                         ; 00573c88
    CMP AL,0x0                          ; 00573c8b
    JNZ 0x00573c77                      ; 00573c8d
        ;   XREF to: 00573c77 (CONDITIONAL_JUMP)  ; LAB_00573c77
    POP EDI                             ; 00573c8f
        ;   Label: LAB_00573c8f
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 00573c90
    MOV EDI,ESP                         ; 00573c97
    PUSH EDI                            ; 00573c99
    MOV AL,byte ptr [ESI]               ; 00573c9a
        ;   Label: LAB_00573c9a
    MOV byte ptr [EDI],AL               ; 00573c9c
    CMP AL,0x0                          ; 00573c9e
    JZ 0x00573cb2                       ; 00573ca0
        ;   XREF to: 00573cb2 (CONDITIONAL_JUMP)  ; LAB_00573cb2
    MOV AL,byte ptr [ESI + 0x1]         ; 00573ca2
    ADD ESI,0x2                         ; 00573ca5
    MOV byte ptr [EDI + 0x1],AL         ; 00573ca8
    ADD EDI,0x2                         ; 00573cab
    CMP AL,0x0                          ; 00573cae
    JNZ 0x00573c9a                      ; 00573cb0
        ;   XREF to: 00573c9a (CONDITIONAL_JUMP)  ; LAB_00573c9a
    POP EDI                             ; 00573cb2
        ;   Label: LAB_00573cb2
    PUSH 0x5ec73b                       ; 00573cb3 | DAT_005ec73b
    LEA EAX,[ESP + 0x4]                 ; 00573cb8
    PUSH EAX                            ; 00573cbc
    CALL engine_dosio.cpp_changeFileExtension_FUN_004611a0 ; 00573cbd
        ;   XREF to: 004611a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_004611a0(char * path, char * new_extension)
    ADD ESP,0x8                         ; 00573cc2
    MOV EAX,ESP                         ; 00573cc5
    PUSH EAX                            ; 00573cc7
    PUSH 0x5ec740                       ; 00573cc8 | DAT_005ec740
    PUSH 0x26530cc                      ; 00573ccd
    CALL engine_dosio.cpp_FUN_00460910  ; 00573cd2
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 00573cd7
    PUSH 0x26530cc                      ; 00573cda
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 00573cdf
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00460980(SFoundFileInfo * context)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00573ce4
    ADD ESP,0x4                         ; 00573ceb
    LEA EDI,[ESP + 0x80]                ; 00573cee
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 00573cf5
    PUSH EDI                            ; 00573cfc
    MOV AL,byte ptr [ESI]               ; 00573cfd
        ;   Label: LAB_00573cfd
    MOV byte ptr [EDI],AL               ; 00573cff
    CMP AL,0x0                          ; 00573d01
    JZ 0x00573d15                       ; 00573d03
        ;   XREF to: 00573d15 (CONDITIONAL_JUMP)  ; LAB_00573d15
    MOV AL,byte ptr [ESI + 0x1]         ; 00573d05
    ADD ESI,0x2                         ; 00573d08
    MOV byte ptr [EDI + 0x1],AL         ; 00573d0b
    ADD EDI,0x2                         ; 00573d0e
    CMP AL,0x0                          ; 00573d11
    JNZ 0x00573cfd                      ; 00573d13
        ;   XREF to: 00573cfd (CONDITIONAL_JUMP)  ; LAB_00573cfd
    POP EDI                             ; 00573d15
        ;   Label: LAB_00573d15
    PUSH 0x5ec744                       ; 00573d16 | DAT_005ec744
    LEA EAX,[ESP + 0x84]                ; 00573d1b
    PUSH EAX                            ; 00573d22
    CALL engine_dosio.cpp_changeFileExtension_FUN_004611a0 ; 00573d23
        ;   XREF to: 004611a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_004611a0(char * path, char * new_extension)
    ADD ESP,0x8                         ; 00573d28
    LEA EAX,[ESP + 0x80]                ; 00573d2b
    PUSH EAX                            ; 00573d32
    PUSH 0x5ec749                       ; 00573d33 | DAT_005ec749
    PUSH 0x26532e0                      ; 00573d38
    CALL engine_dosio.cpp_FUN_00460910  ; 00573d3d
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 00573d42
    PUSH 0x26532e0                      ; 00573d45
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 00573d4a
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00460980(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 00573d4f
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 00573d52
    MOV ESI,EAX                         ; 00573d59
    TEST ECX,ECX                        ; 00573d5b
    JZ 0x005741b0                       ; 00573d5d
        ;   XREF to: 005741b0 (CONDITIONAL_JUMP)  ; LAB_005741b0
    PUSH 0x300                          ; 00573d63
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00573d68
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00573d6d
    MOV dword ptr [EBX + 0x4c],EAX      ; 00573d70
    TEST EAX,EAX                        ; 00573d73
    JNZ 0x00573d99                      ; 00573d75
        ;   XREF to: 00573d99 (CONDITIONAL_JUMP)  ; LAB_00573d99
    MOV EDI,0x5ec74d                    ; 00573d77 | = "..\\engine\\texture.cpp"
    MOV EAX,0x131                       ; 00573d7c
    PUSH 0x5ec763                       ; 00573d81 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d046a0],EDI      ; 00573d86 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00573d8c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00573d91
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00573d96
    CMP EBP,0x4000                      ; 00573d99
        ;   Label: LAB_00573d99
    JNC 0x00574095                      ; 00573d9f
        ;   XREF to: 00574095 (CONDITIONAL_JUMP)  ; LAB_00574095
    CMP EBP,0x400                       ; 00573da5
    JNC 0x005740bb                      ; 00573dab
        ;   XREF to: 005740bb (CONDITIONAL_JUMP)  ; LAB_005740bb
    PUSH EBP                            ; 00573db1
        ;   Label: LAB_00573db1
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 00573db2
    PUSH EDI                            ; 00573db9
    PUSH 0x5ec787                       ; 00573dba | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0x10c]               ; 00573dbf
    PUSH EAX                            ; 00573dc6
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00573dc7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5ec7b8                    ; 00573dcc | = "..\\engine\\texture.cpp"
    ADD ESP,0x10                        ; 00573dd1
    MOV [0x01d046a0],EAX                ; 00573dd4 | DAT_01d046a0
    LEA EAX,[ESP + 0x100]               ; 00573dd9
    MOV EDX,0x14a                       ; 00573de0
    PUSH EAX                            ; 00573de5
    MOV dword ptr [0x01d046a4],EDX      ; 00573de6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00573dec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00573df1
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00573df4
        ;   Label: LAB_00573df4
    PUSH EBP                            ; 00573dfb
    MOV dword ptr [EBX],EAX             ; 00573dfc
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00573dfe
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00573e03
    MOV dword ptr [EBX + 0x44],EAX      ; 00573e06
    TEST EAX,EAX                        ; 00573e09
    JNZ 0x00573e2f                      ; 00573e0b
        ;   XREF to: 00573e2f (CONDITIONAL_JUMP)  ; LAB_00573e2f
    MOV EDI,0x5ec7ce                    ; 00573e0d | = "..\\engine\\texture.cpp"
    MOV EAX,0x154                       ; 00573e12
    PUSH 0x5ec7e4                       ; 00573e17 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d046a0],EDI      ; 00573e1c | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00573e22 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00573e27
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00573e2c
    TEST ESI,ESI                        ; 00573e2f
        ;   Label: LAB_00573e2f
    JZ 0x00573e66                       ; 00573e31
        ;   XREF to: 00573e66 (CONDITIONAL_JUMP)  ; LAB_00573e66
    PUSH EBP                            ; 00573e33
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00573e34
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00573e39
    MOV dword ptr [EBX + 0x48],EAX      ; 00573e3c
    TEST EAX,EAX                        ; 00573e3f
    JNZ 0x00573e66                      ; 00573e41
        ;   XREF to: 00573e66 (CONDITIONAL_JUMP)  ; LAB_00573e66
    MOV ECX,0x5ec808                    ; 00573e43 | = "..\\engine\\texture.cpp"
    MOV EDI,0x15a                       ; 00573e48
    PUSH 0x5ec81e                       ; 00573e4d | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 00573e52 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00573e58 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00573e5e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00573e63
    MOV EAX,ESP                         ; 00573e66
        ;   Label: LAB_00573e66
    PUSH EAX                            ; 00573e68
    PUSH 0x5ec842                       ; 00573e69 | DAT_005ec842
    LEA EAX,[ESP + 0x188]               ; 00573e6e
    PUSH EAX                            ; 00573e75
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 00573e76
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, char * directory, char * filename)
    ADD ESP,0xc                         ; 00573e7b
    PUSH 0x300                          ; 00573e7e
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00573e83
    PUSH EBP                            ; 00573e86
    LEA EAX,[ESP + 0x188]               ; 00573e87
    PUSH EAX                            ; 00573e8e
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00573e8f
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 00573e94
    LEA EAX,[ESP + 0x180]               ; 00573e97
    PUSH EAX                            ; 00573e9e
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00573e9f
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00573ea4
    TEST ESI,ESI                        ; 00573ea7
    JZ 0x00573ef7                       ; 00573ea9
        ;   XREF to: 00573ef7 (CONDITIONAL_JUMP)  ; LAB_00573ef7
    LEA EAX,[ESP + 0x80]                ; 00573eab
    PUSH EAX                            ; 00573eb2
    PUSH 0x5ec846                       ; 00573eb3 | DAT_005ec846
    LEA EAX,[ESP + 0x188]               ; 00573eb8
    PUSH EAX                            ; 00573ebf
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 00573ec0
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, char * directory, char * filename)
    ADD ESP,0xc                         ; 00573ec5
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00573ec8
    IMUL EAX,EAX                        ; 00573ecf
    PUSH EAX                            ; 00573ed2
    MOV ECX,dword ptr [EBX + 0x48]      ; 00573ed3
    PUSH ECX                            ; 00573ed6
    LEA EAX,[ESP + 0x188]               ; 00573ed7
    PUSH EAX                            ; 00573ede
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00573edf
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 00573ee4
    LEA EAX,[ESP + 0x180]               ; 00573ee7
    PUSH EAX                            ; 00573eee
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00573eef
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00573ef4
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 00573ef7
        ;   Label: LAB_00573ef7
    PUSH ESI                            ; 00573efe
    PUSH 0x5ec84a                       ; 00573eff | DAT_005ec84a
    LEA EAX,[ESP + 0x188]               ; 00573f04
    PUSH EAX                            ; 00573f0b
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 00573f0c
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, char * directory, char * filename)
    ADD ESP,0xc                         ; 00573f11
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00573f14
    IMUL EAX,EAX                        ; 00573f1b
    PUSH EAX                            ; 00573f1e
    MOV EBP,dword ptr [EBX + 0x44]      ; 00573f1f
    PUSH EBP                            ; 00573f22
    LEA EAX,[ESP + 0x188]               ; 00573f23
    PUSH EAX                            ; 00573f2a
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00573f2b
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 00573f30
    LEA EAX,[ESP + 0x180]               ; 00573f33
    PUSH EAX                            ; 00573f3a
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00573f3b
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    MOV EAX,[0x02652ea8]                ; 00573f40 | DAT_02652ea8
    ADD ESP,0x4                         ; 00573f45
    TEST EAX,EAX                        ; 00573f48
    JZ 0x00573fe1                       ; 00573f4a
        ;   XREF to: 00573fe1 (CONDITIONAL_JUMP)  ; LAB_00573fe1
    XOR EDX,EDX                         ; 00573f50
    FLD float ptr [0x005ec8de]          ; 00573f52 | DAT_005ec8de
    FLD float ptr [0x005ec8da]          ; 00573f58 | DAT_005ec8da
    FLD float ptr [0x005ec8d6]          ; 00573f5e | DAT_005ec8d6
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00573f64
        ;   Label: LAB_00573f64
    XOR EAX,EAX                         ; 00573f67
    MOV AL,byte ptr [ECX + EDX*0x1]     ; 00573f69
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00573f6c
    XOR EAX,EAX                         ; 00573f73
    FILD word ptr [ESP + 0x1c4]         ; 00573f75
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x1] ; 00573f7c
    FMUL ST1                            ; 00573f80
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00573f82
    XOR EAX,EAX                         ; 00573f89
    FILD word ptr [ESP + 0x1c4]         ; 00573f8b
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x2] ; 00573f92
    FMUL ST3                            ; 00573f96
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00573f98
    FADDP                               ; 00573f9f
    FILD word ptr [ESP + 0x1c4]         ; 00573fa1
    FMUL ST4                            ; 00573fa8
    FADDP                               ; 00573faa
    CALL crt_math.c_round_FUN_005b7ff0  ; 00573fac
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1b8]       ; 00573fb1
    MOV AL,byte ptr [ESP + 0x1b8]       ; 00573fb8
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00573fbf
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00573fc2
    MOV byte ptr [ECX + EDX*0x1 + 0x1],AL ; 00573fc5
    ADD EDX,0x3                         ; 00573fc9
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00573fcc
    MOV byte ptr [ECX + EDX*0x1 + -0x1],AL ; 00573fcf
    CMP EDX,0x300                       ; 00573fd3
    JNZ 0x00573f64                      ; 00573fd9
        ;   XREF to: 00573f64 (CONDITIONAL_JUMP)  ; LAB_00573f64
    FSTP ST0                            ; 00573fdb
    FSTP ST0                            ; 00573fdd
    FSTP ST0                            ; 00573fdf
    PUSH 0x0                            ; 00573fe1
        ;   Label: LAB_00573fe1
    LEA EAX,[ESP + 0x184]               ; 00573fe3
    PUSH EAX                            ; 00573fea
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 00573feb
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00573ff0
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00573ff3
    ADD ESP,0x1c8                       ; 00573ffa
    POP EBP                             ; 00574000
    POP EDI                             ; 00574001
    POP ESI                             ; 00574002
    POP EBX                             ; 00574003
    RET                                 ; 00574004
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 00574005
        ;   Label: LAB_00574005
    PUSH ESI                            ; 0057400c
    MOV EDX,0x5ec6be                    ; 0057400d | = "..\\engine\\texture.cpp"
    MOV ECX,0xfb                        ; 00574012
    PUSH 0x5ec6d4                       ; 00574017 | = "Texture name is too big : %s"
    MOV dword ptr [0x01d046a0],EDX      ; 0057401c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00574022 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00574028
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0057402d
    JMP 0x00573bbb                      ; 00574030
        ;   XREF to: 00573bbb (UNCONDITIONAL_JUMP)  ; LAB_00573bbb
    MOV dword ptr [ESP + 0x1c0],0x20    ; 00574035
        ;   Label: LAB_00574035
    JMP 0x00573df4                      ; 00574040
        ;   XREF to: 00573df4 (UNCONDITIONAL_JUMP)  ; LAB_00573df4
    MOV dword ptr [ESP + 0x1c0],0x40    ; 00574045
        ;   Label: LAB_00574045
    JMP 0x00573df4                      ; 00574050
        ;   XREF to: 00573df4 (UNCONDITIONAL_JUMP)  ; LAB_00573df4
    MOV dword ptr [ESP + 0x1c0],0x80    ; 00574055
        ;   Label: LAB_00574055
    JMP 0x00573df4                      ; 00574060
        ;   XREF to: 00573df4 (UNCONDITIONAL_JUMP)  ; LAB_00573df4
    MOV dword ptr [ESP + 0x1c0],0x100   ; 00574065
        ;   Label: LAB_00574065
    JMP 0x00573df4                      ; 00574070
        ;   XREF to: 00573df4 (UNCONDITIONAL_JUMP)  ; LAB_00573df4
    MOV dword ptr [ESP + 0x1c0],0x200   ; 00574075
        ;   Label: LAB_00574075
    JMP 0x00573df4                      ; 00574080
        ;   XREF to: 00573df4 (UNCONDITIONAL_JUMP)  ; LAB_00573df4
    MOV dword ptr [ESP + 0x1c0],0x400   ; 00574085
        ;   Label: LAB_00574085
    JMP 0x00573df4                      ; 00574090
        ;   XREF to: 00573df4 (UNCONDITIONAL_JUMP)  ; LAB_00573df4
    JBE 0x00574055                      ; 00574095
        ;   XREF to: 00574055 (CONDITIONAL_JUMP)  ; LAB_00574055
        ;   Label: LAB_00574095
    CMP EBP,0x40000                     ; 00574097
    JNC 0x005740ac                      ; 0057409d
        ;   XREF to: 005740ac (CONDITIONAL_JUMP)  ; LAB_005740ac
    CMP EBP,0x10000                     ; 0057409f
    JZ 0x00574065                       ; 005740a5
        ;   XREF to: 00574065 (CONDITIONAL_JUMP)  ; LAB_00574065
    JMP 0x00573db1                      ; 005740a7
        ;   XREF to: 00573db1 (UNCONDITIONAL_JUMP)  ; LAB_00573db1
    JBE 0x00574075                      ; 005740ac
        ;   XREF to: 00574075 (CONDITIONAL_JUMP)  ; LAB_00574075
        ;   Label: LAB_005740ac
    CMP EBP,0x100000                    ; 005740ae
    JZ 0x00574085                       ; 005740b4
        ;   XREF to: 00574085 (CONDITIONAL_JUMP)  ; LAB_00574085
    JMP 0x00573db1                      ; 005740b6
        ;   XREF to: 00573db1 (UNCONDITIONAL_JUMP)  ; LAB_00573db1
    JBE 0x00574035                      ; 005740bb
        ;   XREF to: 00574035 (CONDITIONAL_JUMP)  ; LAB_00574035
        ;   Label: LAB_005740bb
    CMP EBP,0x1000                      ; 005740c1
    JZ 0x00574045                       ; 005740c7
        ;   XREF to: 00574045 (CONDITIONAL_JUMP)  ; LAB_00574045
    JMP 0x00573db1                      ; 005740cd
        ;   XREF to: 00573db1 (UNCONDITIONAL_JUMP)  ; LAB_00573db1
    MOV dword ptr [ESP + 0x1c0],0x20    ; 005740d2
        ;   Label: LAB_005740d2
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005740dd
        ;   Label: LAB_005740dd
    PUSH EBP                            ; 005740e4
    MOV dword ptr [EBX],EAX             ; 005740e5
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005740e7
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005740ec
    MOV dword ptr [EBX + 0x50],EAX      ; 005740ef
    TEST EAX,EAX                        ; 005740f2
    JNZ 0x00574119                      ; 005740f4
        ;   XREF to: 00574119 (CONDITIONAL_JUMP)  ; LAB_00574119
    MOV ESI,0x5ec895                    ; 005740f6 | = "..\\engine\\texture.cpp"
    MOV EDI,0x19e                       ; 005740fb
    PUSH 0x5ec8ab                       ; 00574100 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d046a0],ESI      ; 00574105 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0057410b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00574111
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00574116
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00574119
        ;   Label: LAB_00574119
    PUSH EAX                            ; 00574120
    PUSH 0x5ec8cf                       ; 00574121 | DAT_005ec8cf
    LEA EAX,[ESP + 0x188]               ; 00574126
    PUSH EAX                            ; 0057412d
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 0057412e
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, char * directory, char * filename)
    ADD ESP,0xc                         ; 00574133
    PUSH EBP                            ; 00574136
    MOV EDX,dword ptr [EBX + 0x50]      ; 00574137
    PUSH EDX                            ; 0057413a
    LEA EAX,[ESP + 0x188]               ; 0057413b
    PUSH EAX                            ; 00574142
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00574143
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 00574148
    LEA EAX,[ESP + 0x180]               ; 0057414b
    PUSH EAX                            ; 00574152
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00574153
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00574158
    JMP 0x00573fe1                      ; 0057415b
        ;   XREF to: 00573fe1 (UNCONDITIONAL_JUMP)  ; LAB_00573fe1
    MOV dword ptr [ESP + 0x1c0],0x40    ; 00574160
        ;   Label: LAB_00574160
    JMP 0x005740dd                      ; 0057416b
        ;   XREF to: 005740dd (UNCONDITIONAL_JUMP)  ; LAB_005740dd
    MOV dword ptr [ESP + 0x1c0],0x80    ; 00574170
        ;   Label: LAB_00574170
    JMP 0x005740dd                      ; 0057417b
        ;   XREF to: 005740dd (UNCONDITIONAL_JUMP)  ; LAB_005740dd
    MOV dword ptr [ESP + 0x1c0],0x100   ; 00574180
        ;   Label: LAB_00574180
    JMP 0x005740dd                      ; 0057418b
        ;   XREF to: 005740dd (UNCONDITIONAL_JUMP)  ; LAB_005740dd
    MOV dword ptr [ESP + 0x1c0],0x200   ; 00574190
        ;   Label: LAB_00574190
    JMP 0x005740dd                      ; 0057419b
        ;   XREF to: 005740dd (UNCONDITIONAL_JUMP)  ; LAB_005740dd
    MOV dword ptr [ESP + 0x1c0],0x400   ; 005741a0
        ;   Label: LAB_005741a0
    JMP 0x005740dd                      ; 005741ab
        ;   XREF to: 005740dd (UNCONDITIONAL_JUMP)  ; LAB_005740dd
    CMP EBP,0x10000                     ; 005741b0
        ;   Label: LAB_005741b0
    JNC 0x005741d0                      ; 005741b6
        ;   XREF to: 005741d0 (CONDITIONAL_JUMP)  ; LAB_005741d0
    CMP EBP,0x1000                      ; 005741b8
    JC 0x005741ee                       ; 005741be
        ;   XREF to: 005741ee (CONDITIONAL_JUMP)  ; LAB_005741ee
    JBE 0x005740d2                      ; 005741c0
        ;   XREF to: 005740d2 (CONDITIONAL_JUMP)  ; LAB_005740d2
    CMP EBP,0x4000                      ; 005741c6
    JZ 0x00574160                       ; 005741cc
        ;   XREF to: 00574160 (CONDITIONAL_JUMP)  ; LAB_00574160
    JMP 0x005741ee                      ; 005741ce
        ;   XREF to: 005741ee (UNCONDITIONAL_JUMP)  ; LAB_005741ee
    JBE 0x00574170                      ; 005741d0
        ;   XREF to: 00574170 (CONDITIONAL_JUMP)  ; LAB_00574170
        ;   Label: LAB_005741d0
    CMP EBP,0x100000                    ; 005741d2
    JNC 0x005741e4                      ; 005741d8
        ;   XREF to: 005741e4 (CONDITIONAL_JUMP)  ; LAB_005741e4
    CMP EBP,0x40000                     ; 005741da
    JZ 0x00574180                       ; 005741e0
        ;   XREF to: 00574180 (CONDITIONAL_JUMP)  ; LAB_00574180
    JMP 0x005741ee                      ; 005741e2
        ;   XREF to: 005741ee (UNCONDITIONAL_JUMP)  ; LAB_005741ee
    JBE 0x00574190                      ; 005741e4
        ;   XREF to: 00574190 (CONDITIONAL_JUMP)  ; LAB_00574190
        ;   Label: LAB_005741e4
    CMP EBP,0x400000                    ; 005741e6 | IMAGE_DOS_HEADER_00400000
    JZ 0x005741a0                       ; 005741ec
        ;   XREF to: 005741a0 (CONDITIONAL_JUMP)  ; LAB_005741a0
    PUSH EBP                            ; 005741ee
        ;   Label: LAB_005741ee
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 005741ef
    PUSH EDI                            ; 005741f6
    PUSH 0x5ec84e                       ; 005741f7 | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0x10c]               ; 005741fc
    PUSH EAX                            ; 00574203
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00574204
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5ec87f                    ; 00574209 | = "..\\engine\\texture.cpp"
    ADD ESP,0x10                        ; 0057420e
    MOV [0x01d046a0],EAX                ; 00574211 | DAT_01d046a0
    LEA EAX,[ESP + 0x100]               ; 00574216
    MOV EDX,0x194                       ; 0057421d
    PUSH EAX                            ; 00574222
    MOV dword ptr [0x01d046a4],EDX      ; 00574223 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00574229
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057422e
    JMP 0x005740dd                      ; 00574231
        ;   XREF to: 005740dd (UNCONDITIONAL_JUMP)  ; LAB_005740dd

