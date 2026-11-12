; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005967a0(CTextureCache *this_ptr,char *texture_name)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   texture_name
; Local Variables:
; undefined1       Stack[-0x1dc]:1  local_1dc
; undefined1       Stack[-0x1db]:1  local_1db
; undefined        Stack[-0x15c]:1  local_15c
; undefined1       Stack[-0x15b]:1  local_15b
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_texture.cpp_FUN_00597a20 at 00597a6f
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   TerminatedCString s_engine_texture_cpp_005f7932
;   TerminatedCString s_Texture_name_is_too_big_005f7948
;   undefined4 DAT_005f7965
;   TerminatedCString s_engine_texture_cpp_005f7969
;   TerminatedCString s_CTextureCache_load_Can_t_005f797f
;   undefined4 DAT_005f79af
;   undefined4 DAT_005f79b4
;   undefined4 DAT_005f79b8
;   undefined4 DAT_005f79bd
;   TerminatedCString s_engine_texture_cpp_005f79c1
;   TerminatedCString s_CTextureCache_load_Out_o_005f79d7
;   TerminatedCString s_CTextureCache_load_Bad_t_005f79fb
;   TerminatedCString s_engine_texture_cpp_005f7a2c
;   TerminatedCString s_engine_texture_cpp_005f7a42
;   ... and 18 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_changeFileExtension_FUN_004796b0
;   engine_dosio.cpp_findFile_FUN_00478e90
;   engine_dosio.cpp_FUN_00478e20
;   engine_texture.cpp_FUN_00596680
;   support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_CInStreamFile_read_FUN_005a0c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005967a0
        ;   Label: engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0
    PUSH ESI                            ; 005967a1
    PUSH EDI                            ; 005967a2
    PUSH EBP                            ; 005967a3
    SUB ESP,0x1cc                       ; 005967a4
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 005967aa
    LEA EAX,[ESP + 0x180]               ; 005967b1
    PUSH EAX                            ; 005967b8
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 005967b9
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005967be
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 005967c1
    SUB ECX,ECX                         ; 005967c8
    DEC ECX                             ; 005967ca
    XOR EAX,EAX                         ; 005967cb
    SCASB.REPNE ES:EDI                  ; 005967cd
    NOT ECX                             ; 005967cf
    DEC ECX                             ; 005967d1
    CMP ECX,0x40                        ; 005967d2
    JNC 0x00596c2d                      ; 005967d5
        ;   XREF to: 00596c2d (CONDITIONAL_JUMP)  ; LAB_00596c2d
    PUSH 0x214                          ; 005967db
        ;   Label: LAB_005967db
    PUSH 0x0                            ; 005967e0
    PUSH 0x2c8a688                      ; 005967e2
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005967e7
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005967ec
    PUSH 0x214                          ; 005967ef
    PUSH 0x0                            ; 005967f4
    PUSH 0x2c8a89c                      ; 005967f6
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005967fb
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00596800
    PUSH 0x214                          ; 00596803
    PUSH 0x0                            ; 00596808
    PUSH 0x2c8aab0                      ; 0059680a
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059680f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00596814
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 00596817
    PUSH EDI                            ; 0059681e
    PUSH 0x5f7965                       ; 0059681f | DAT_005f7965
    PUSH 0x2c8a688                      ; 00596824
    CALL engine_dosio.cpp_FUN_00478e20  ; 00596829
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    ADD ESP,0xc                         ; 0059682e
    PUSH 0x2c8a688                      ; 00596831
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 00596836
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00478e90()
    ADD ESP,0x4                         ; 0059683b
    TEST EAX,EAX                        ; 0059683e
    JNZ 0x00596865                      ; 00596840
        ;   XREF to: 00596865 (CONDITIONAL_JUMP)  ; LAB_00596865
    PUSH EDI                            ; 00596842
    MOV EBP,0x5f7969                    ; 00596843 | = "..\\engine\\texture.cpp"
    MOV EAX,0x107                       ; 00596848
    PUSH 0x5f797f                       ; 0059684d | = "CTextureCache::load - Can't get file ..."
    MOV dword ptr [0x01d1d400],EBP      ; 00596852 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00596858 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059685d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00596862
    PUSH EBX                            ; 00596865
        ;   Label: LAB_00596865
    MOV EBP,dword ptr [0x02c8a88c]      ; 00596866 | DAT_02c8a88c
    CALL engine_texture.cpp_FUN_00596680 ; 0059686c
        ;   XREF to: 00596680 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00596680()
    ADD ESP,0x4                         ; 00596871
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00596874
    LEA EDX,[EAX*0x4 + 0x0]             ; 0059687b
    SUB EDX,EAX                         ; 00596882
    ADD EBX,0x4                         ; 00596884
    SHL EDX,0x5                         ; 00596887
    ADD EBX,EDX                         ; 0059688a
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0059688c
    LEA EDI,[EBX + 0x4]                 ; 00596893
    PUSH EDI                            ; 00596896
    MOV AL,byte ptr [ESI]               ; 00596897
        ;   Label: LAB_00596897
    MOV byte ptr [EDI],AL               ; 00596899
    CMP AL,0x0                          ; 0059689b
    JZ 0x005968af                       ; 0059689d
        ;   XREF to: 005968af (CONDITIONAL_JUMP)  ; LAB_005968af
    MOV AL,byte ptr [ESI + 0x1]         ; 0059689f
    ADD ESI,0x2                         ; 005968a2
    MOV byte ptr [EDI + 0x1],AL         ; 005968a5
    ADD EDI,0x2                         ; 005968a8
    CMP AL,0x0                          ; 005968ab
    JNZ 0x00596897                      ; 005968ad
        ;   XREF to: 00596897 (CONDITIONAL_JUMP)  ; LAB_00596897
    POP EDI                             ; 005968af
        ;   Label: LAB_005968af
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 005968b0
    MOV EDI,ESP                         ; 005968b7
    PUSH EDI                            ; 005968b9
    MOV AL,byte ptr [ESI]               ; 005968ba
        ;   Label: LAB_005968ba
    MOV byte ptr [EDI],AL               ; 005968bc
    CMP AL,0x0                          ; 005968be
    JZ 0x005968d2                       ; 005968c0
        ;   XREF to: 005968d2 (CONDITIONAL_JUMP)  ; LAB_005968d2
    MOV AL,byte ptr [ESI + 0x1]         ; 005968c2
    ADD ESI,0x2                         ; 005968c5
    MOV byte ptr [EDI + 0x1],AL         ; 005968c8
    ADD EDI,0x2                         ; 005968cb
    CMP AL,0x0                          ; 005968ce
    JNZ 0x005968ba                      ; 005968d0
        ;   XREF to: 005968ba (CONDITIONAL_JUMP)  ; LAB_005968ba
    POP EDI                             ; 005968d2
        ;   Label: LAB_005968d2
    PUSH 0x5f79af                       ; 005968d3 | DAT_005f79af
    LEA EAX,[ESP + 0x4]                 ; 005968d8
    PUSH EAX                            ; 005968dc
    CALL engine_dosio.cpp_changeFileExtension_FUN_004796b0 ; 005968dd
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_004796b0(char * path, char * new_extension)
    ADD ESP,0x8                         ; 005968e2
    MOV EAX,ESP                         ; 005968e5
    PUSH EAX                            ; 005968e7
    PUSH 0x5f79b4                       ; 005968e8 | DAT_005f79b4
    PUSH 0x2c8a89c                      ; 005968ed
    CALL engine_dosio.cpp_FUN_00478e20  ; 005968f2
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    ADD ESP,0xc                         ; 005968f7
    PUSH 0x2c8a89c                      ; 005968fa
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 005968ff
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00478e90()
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00596904
    ADD ESP,0x4                         ; 0059690b
    LEA EDI,[ESP + 0x80]                ; 0059690e
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00596915
    PUSH EDI                            ; 0059691c
    MOV AL,byte ptr [ESI]               ; 0059691d
        ;   Label: LAB_0059691d
    MOV byte ptr [EDI],AL               ; 0059691f
    CMP AL,0x0                          ; 00596921
    JZ 0x00596935                       ; 00596923
        ;   XREF to: 00596935 (CONDITIONAL_JUMP)  ; LAB_00596935
    MOV AL,byte ptr [ESI + 0x1]         ; 00596925
    ADD ESI,0x2                         ; 00596928
    MOV byte ptr [EDI + 0x1],AL         ; 0059692b
    ADD EDI,0x2                         ; 0059692e
    CMP AL,0x0                          ; 00596931
    JNZ 0x0059691d                      ; 00596933
        ;   XREF to: 0059691d (CONDITIONAL_JUMP)  ; LAB_0059691d
    POP EDI                             ; 00596935
        ;   Label: LAB_00596935
    PUSH 0x5f79b8                       ; 00596936 | DAT_005f79b8
    LEA EAX,[ESP + 0x84]                ; 0059693b
    PUSH EAX                            ; 00596942
    CALL engine_dosio.cpp_changeFileExtension_FUN_004796b0 ; 00596943
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_004796b0(char * path, char * new_extension)
    ADD ESP,0x8                         ; 00596948
    LEA EAX,[ESP + 0x80]                ; 0059694b
    PUSH EAX                            ; 00596952
    PUSH 0x5f79bd                       ; 00596953 | DAT_005f79bd
    PUSH 0x2c8aab0                      ; 00596958
    CALL engine_dosio.cpp_FUN_00478e20  ; 0059695d
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    ADD ESP,0xc                         ; 00596962
    PUSH 0x2c8aab0                      ; 00596965
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 0059696a
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00478e90()
    ADD ESP,0x4                         ; 0059696f
    MOV ECX,dword ptr [ESP + 0x1ac]     ; 00596972
    MOV ESI,EAX                         ; 00596979
    TEST ECX,ECX                        ; 0059697b
    JZ 0x00596dda                       ; 0059697d
        ;   XREF to: 00596dda (CONDITIONAL_JUMP)  ; LAB_00596dda
    PUSH 0x300                          ; 00596983
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00596988
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0059698d
    MOV dword ptr [EBX + 0x4c],EAX      ; 00596990
    TEST EAX,EAX                        ; 00596993
    JNZ 0x005969b9                      ; 00596995
        ;   XREF to: 005969b9 (CONDITIONAL_JUMP)  ; LAB_005969b9
    MOV EDI,0x5f79c1                    ; 00596997 | = "..\\engine\\texture.cpp"
    MOV EAX,0x131                       ; 0059699c
    PUSH 0x5f79d7                       ; 005969a1 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 005969a6 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005969ac | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005969b1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005969b6
    CMP EBP,0x4000                      ; 005969b9
        ;   Label: LAB_005969b9
    JNC 0x00596cbd                      ; 005969bf
        ;   XREF to: 00596cbd (CONDITIONAL_JUMP)  ; LAB_00596cbd
    CMP EBP,0x400                       ; 005969c5
    JNC 0x00596ce3                      ; 005969cb
        ;   XREF to: 00596ce3 (CONDITIONAL_JUMP)  ; LAB_00596ce3
    PUSH EBP                            ; 005969d1
        ;   Label: LAB_005969d1
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 005969d2
    PUSH EDI                            ; 005969d9
    PUSH 0x5f79fb                       ; 005969da | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0x10c]               ; 005969df
    PUSH EAX                            ; 005969e6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005969e7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5f7a2c                    ; 005969ec | = "..\\engine\\texture.cpp"
    ADD ESP,0x10                        ; 005969f1
    MOV [0x01d1d400],EAX                ; 005969f4 | DAT_01d1d400
    LEA EAX,[ESP + 0x100]               ; 005969f9
    MOV EDX,0x14a                       ; 00596a00
    PUSH EAX                            ; 00596a05
    MOV dword ptr [0x01d1d404],EDX      ; 00596a06 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596a0c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00596a11
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00596a14
        ;   Label: LAB_00596a14
    PUSH EBP                            ; 00596a1b
    MOV dword ptr [EBX],EAX             ; 00596a1c
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00596a1e
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00596a23
    MOV dword ptr [EBX + 0x44],EAX      ; 00596a26
    TEST EAX,EAX                        ; 00596a29
    JNZ 0x00596a4f                      ; 00596a2b
        ;   XREF to: 00596a4f (CONDITIONAL_JUMP)  ; LAB_00596a4f
    MOV EDI,0x5f7a42                    ; 00596a2d | = "..\\engine\\texture.cpp"
    MOV EAX,0x154                       ; 00596a32
    PUSH 0x5f7a58                       ; 00596a37 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 00596a3c | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00596a42 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596a47
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00596a4c
    TEST ESI,ESI                        ; 00596a4f
        ;   Label: LAB_00596a4f
    JZ 0x00596a86                       ; 00596a51
        ;   XREF to: 00596a86 (CONDITIONAL_JUMP)  ; LAB_00596a86
    PUSH EBP                            ; 00596a53
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00596a54
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00596a59
    MOV dword ptr [EBX + 0x48],EAX      ; 00596a5c
    TEST EAX,EAX                        ; 00596a5f
    JNZ 0x00596a86                      ; 00596a61
        ;   XREF to: 00596a86 (CONDITIONAL_JUMP)  ; LAB_00596a86
    MOV ECX,0x5f7a7c                    ; 00596a63 | = "..\\engine\\texture.cpp"
    MOV EDI,0x15a                       ; 00596a68
    PUSH 0x5f7a92                       ; 00596a6d | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 00596a72 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00596a78 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596a7e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00596a83
    PUSH 0x1                            ; 00596a86
        ;   Label: LAB_00596a86
    LEA EAX,[ESP + 0x4]                 ; 00596a88
    PUSH EAX                            ; 00596a8c
    PUSH 0x5f7ab6                       ; 00596a8d | DAT_005f7ab6
    LEA EAX,[ESP + 0x18c]               ; 00596a92
    PUSH EAX                            ; 00596a99
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00596a9a
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00596a9f
    PUSH 0x300                          ; 00596aa2
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00596aa7
    PUSH EBP                            ; 00596aaa
    LEA EAX,[ESP + 0x188]               ; 00596aab
    PUSH EAX                            ; 00596ab2
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00596ab3
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00596ab8
    LEA EAX,[ESP + 0x180]               ; 00596abb
    PUSH EAX                            ; 00596ac2
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00596ac3
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00596ac8
    TEST ESI,ESI                        ; 00596acb
    JZ 0x00596b1d                       ; 00596acd
        ;   XREF to: 00596b1d (CONDITIONAL_JUMP)  ; LAB_00596b1d
    PUSH 0x1                            ; 00596acf
    LEA EAX,[ESP + 0x84]                ; 00596ad1
    PUSH EAX                            ; 00596ad8
    PUSH 0x5f7aba                       ; 00596ad9 | DAT_005f7aba
    LEA EAX,[ESP + 0x18c]               ; 00596ade
    PUSH EAX                            ; 00596ae5
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00596ae6
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00596aeb
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00596aee
    IMUL EAX,EAX                        ; 00596af5
    PUSH EAX                            ; 00596af8
    MOV ECX,dword ptr [EBX + 0x48]      ; 00596af9
    PUSH ECX                            ; 00596afc
    LEA EAX,[ESP + 0x188]               ; 00596afd
    PUSH EAX                            ; 00596b04
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00596b05
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00596b0a
    LEA EAX,[ESP + 0x180]               ; 00596b0d
    PUSH EAX                            ; 00596b14
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00596b15
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00596b1a
    PUSH 0x1                            ; 00596b1d
        ;   Label: LAB_00596b1d
    MOV ESI,dword ptr [ESP + 0x1e8]     ; 00596b1f
    PUSH ESI                            ; 00596b26
    PUSH 0x5f7abe                       ; 00596b27 | DAT_005f7abe
    LEA EAX,[ESP + 0x18c]               ; 00596b2c
    PUSH EAX                            ; 00596b33
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00596b34
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00596b39
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00596b3c
    IMUL EAX,EAX                        ; 00596b43
    PUSH EAX                            ; 00596b46
    MOV EBP,dword ptr [EBX + 0x44]      ; 00596b47
    PUSH EBP                            ; 00596b4a
    LEA EAX,[ESP + 0x188]               ; 00596b4b
    PUSH EAX                            ; 00596b52
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00596b53
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00596b58
    LEA EAX,[ESP + 0x180]               ; 00596b5b
    PUSH EAX                            ; 00596b62
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00596b63
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    MOV EAX,[0x02c8a678]                ; 00596b68 | DAT_02c8a678
    ADD ESP,0x4                         ; 00596b6d
    TEST EAX,EAX                        ; 00596b70
    JZ 0x00596c09                       ; 00596b72
        ;   XREF to: 00596c09 (CONDITIONAL_JUMP)  ; LAB_00596c09
    XOR EDX,EDX                         ; 00596b78
    FLD float ptr [0x005f7b52]          ; 00596b7a | DAT_005f7b52
    FLD float ptr [0x005f7b4e]          ; 00596b80 | DAT_005f7b4e
    FLD float ptr [0x005f7b4a]          ; 00596b86 | DAT_005f7b4a
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00596b8c
        ;   Label: LAB_00596b8c
    XOR EAX,EAX                         ; 00596b8f
    MOV AL,byte ptr [ECX + EDX*0x1]     ; 00596b91
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00596b94
    XOR EAX,EAX                         ; 00596b9b
    FILD word ptr [ESP + 0x1c8]         ; 00596b9d
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x1] ; 00596ba4
    FMUL ST1                            ; 00596ba8
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00596baa
    XOR EAX,EAX                         ; 00596bb1
    FILD word ptr [ESP + 0x1c8]         ; 00596bb3
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x2] ; 00596bba
    FMUL ST3                            ; 00596bbe
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00596bc0
    FADDP                               ; 00596bc7
    FILD word ptr [ESP + 0x1c8]         ; 00596bc9
    FMUL ST4                            ; 00596bd0
    FADDP                               ; 00596bd2
    CALL crt_math.c_round_FUN_005c03a0  ; 00596bd4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1bc]       ; 00596bd9
    MOV AL,byte ptr [ESP + 0x1bc]       ; 00596be0
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00596be7
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00596bea
    MOV byte ptr [ECX + EDX*0x1 + 0x1],AL ; 00596bed
    ADD EDX,0x3                         ; 00596bf1
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00596bf4
    MOV byte ptr [ECX + EDX*0x1 + -0x1],AL ; 00596bf7
    CMP EDX,0x300                       ; 00596bfb
    JNZ 0x00596b8c                      ; 00596c01
        ;   XREF to: 00596b8c (CONDITIONAL_JUMP)  ; LAB_00596b8c
    FSTP ST0                            ; 00596c03
    FSTP ST0                            ; 00596c05
    FSTP ST0                            ; 00596c07
    PUSH 0x0                            ; 00596c09
        ;   Label: LAB_00596c09
    LEA EAX,[ESP + 0x184]               ; 00596c0b
    PUSH EAX                            ; 00596c12
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 00596c13
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00596c18
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00596c1b
    ADD ESP,0x1cc                       ; 00596c22
    POP EBP                             ; 00596c28
    POP EDI                             ; 00596c29
    POP ESI                             ; 00596c2a
    POP EBX                             ; 00596c2b
    RET                                 ; 00596c2c
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00596c2d
        ;   Label: LAB_00596c2d
    PUSH ESI                            ; 00596c34
    MOV EDX,0x5f7932                    ; 00596c35 | = "..\\engine\\texture.cpp"
    MOV ECX,0xfb                        ; 00596c3a
    PUSH 0x5f7948                       ; 00596c3f | = "Texture name is too big : %s"
    MOV dword ptr [0x01d1d400],EDX      ; 00596c44 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00596c4a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596c50
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00596c55
    JMP 0x005967db                      ; 00596c58
        ;   XREF to: 005967db (UNCONDITIONAL_JUMP)  ; LAB_005967db
    MOV dword ptr [ESP + 0x1c4],0x20    ; 00596c5d
        ;   Label: LAB_00596c5d
    JMP 0x00596a14                      ; 00596c68
        ;   XREF to: 00596a14 (UNCONDITIONAL_JUMP)  ; LAB_00596a14
    MOV dword ptr [ESP + 0x1c4],0x40    ; 00596c6d
        ;   Label: LAB_00596c6d
    JMP 0x00596a14                      ; 00596c78
        ;   XREF to: 00596a14 (UNCONDITIONAL_JUMP)  ; LAB_00596a14
    MOV dword ptr [ESP + 0x1c4],0x80    ; 00596c7d
        ;   Label: LAB_00596c7d
    JMP 0x00596a14                      ; 00596c88
        ;   XREF to: 00596a14 (UNCONDITIONAL_JUMP)  ; LAB_00596a14
    MOV dword ptr [ESP + 0x1c4],0x100   ; 00596c8d
        ;   Label: LAB_00596c8d
    JMP 0x00596a14                      ; 00596c98
        ;   XREF to: 00596a14 (UNCONDITIONAL_JUMP)  ; LAB_00596a14
    MOV dword ptr [ESP + 0x1c4],0x200   ; 00596c9d
        ;   Label: LAB_00596c9d
    JMP 0x00596a14                      ; 00596ca8
        ;   XREF to: 00596a14 (UNCONDITIONAL_JUMP)  ; LAB_00596a14
    MOV dword ptr [ESP + 0x1c4],0x400   ; 00596cad
        ;   Label: LAB_00596cad
    JMP 0x00596a14                      ; 00596cb8
        ;   XREF to: 00596a14 (UNCONDITIONAL_JUMP)  ; LAB_00596a14
    JBE 0x00596c7d                      ; 00596cbd
        ;   XREF to: 00596c7d (CONDITIONAL_JUMP)  ; LAB_00596c7d
        ;   Label: LAB_00596cbd
    CMP EBP,0x40000                     ; 00596cbf
    JNC 0x00596cd4                      ; 00596cc5
        ;   XREF to: 00596cd4 (CONDITIONAL_JUMP)  ; LAB_00596cd4
    CMP EBP,0x10000                     ; 00596cc7
    JZ 0x00596c8d                       ; 00596ccd
        ;   XREF to: 00596c8d (CONDITIONAL_JUMP)  ; LAB_00596c8d
    JMP 0x005969d1                      ; 00596ccf
        ;   XREF to: 005969d1 (UNCONDITIONAL_JUMP)  ; LAB_005969d1
    JBE 0x00596c9d                      ; 00596cd4
        ;   XREF to: 00596c9d (CONDITIONAL_JUMP)  ; LAB_00596c9d
        ;   Label: LAB_00596cd4
    CMP EBP,0x100000                    ; 00596cd6
    JZ 0x00596cad                       ; 00596cdc
        ;   XREF to: 00596cad (CONDITIONAL_JUMP)  ; LAB_00596cad
    JMP 0x005969d1                      ; 00596cde
        ;   XREF to: 005969d1 (UNCONDITIONAL_JUMP)  ; LAB_005969d1
    JBE 0x00596c5d                      ; 00596ce3
        ;   XREF to: 00596c5d (CONDITIONAL_JUMP)  ; LAB_00596c5d
        ;   Label: LAB_00596ce3
    CMP EBP,0x1000                      ; 00596ce9
    JZ 0x00596c6d                       ; 00596cef
        ;   XREF to: 00596c6d (CONDITIONAL_JUMP)  ; LAB_00596c6d
    JMP 0x005969d1                      ; 00596cf5
        ;   XREF to: 005969d1 (UNCONDITIONAL_JUMP)  ; LAB_005969d1
    MOV dword ptr [ESP + 0x1c4],0x20    ; 00596cfa
        ;   Label: LAB_00596cfa
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00596d05
        ;   Label: LAB_00596d05
    PUSH EBP                            ; 00596d0c
    MOV dword ptr [EBX],EAX             ; 00596d0d
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00596d0f
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00596d14
    MOV dword ptr [EBX + 0x50],EAX      ; 00596d17
    TEST EAX,EAX                        ; 00596d1a
    JNZ 0x00596d41                      ; 00596d1c
        ;   XREF to: 00596d41 (CONDITIONAL_JUMP)  ; LAB_00596d41
    MOV ESI,0x5f7b09                    ; 00596d1e | = "..\\engine\\texture.cpp"
    MOV EDI,0x19e                       ; 00596d23
    PUSH 0x5f7b1f                       ; 00596d28 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d1d400],ESI      ; 00596d2d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00596d33 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596d39
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00596d3e
    PUSH 0x1                            ; 00596d41
        ;   Label: LAB_00596d41
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00596d43
    PUSH EAX                            ; 00596d4a
    PUSH 0x5f7b43                       ; 00596d4b | DAT_005f7b43
    LEA EAX,[ESP + 0x18c]               ; 00596d50
    PUSH EAX                            ; 00596d57
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00596d58
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00596d5d
    PUSH EBP                            ; 00596d60
    MOV EDX,dword ptr [EBX + 0x50]      ; 00596d61
    PUSH EDX                            ; 00596d64
    LEA EAX,[ESP + 0x188]               ; 00596d65
    PUSH EAX                            ; 00596d6c
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00596d6d
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00596d72
    LEA EAX,[ESP + 0x180]               ; 00596d75
    PUSH EAX                            ; 00596d7c
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00596d7d
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00596d82
    JMP 0x00596c09                      ; 00596d85
        ;   XREF to: 00596c09 (UNCONDITIONAL_JUMP)  ; LAB_00596c09
    MOV dword ptr [ESP + 0x1c4],0x40    ; 00596d8a
        ;   Label: LAB_00596d8a
    JMP 0x00596d05                      ; 00596d95
        ;   XREF to: 00596d05 (UNCONDITIONAL_JUMP)  ; LAB_00596d05
    MOV dword ptr [ESP + 0x1c4],0x80    ; 00596d9a
        ;   Label: LAB_00596d9a
    JMP 0x00596d05                      ; 00596da5
        ;   XREF to: 00596d05 (UNCONDITIONAL_JUMP)  ; LAB_00596d05
    MOV dword ptr [ESP + 0x1c4],0x100   ; 00596daa
        ;   Label: LAB_00596daa
    JMP 0x00596d05                      ; 00596db5
        ;   XREF to: 00596d05 (UNCONDITIONAL_JUMP)  ; LAB_00596d05
    MOV dword ptr [ESP + 0x1c4],0x200   ; 00596dba
        ;   Label: LAB_00596dba
    JMP 0x00596d05                      ; 00596dc5
        ;   XREF to: 00596d05 (UNCONDITIONAL_JUMP)  ; LAB_00596d05
    MOV dword ptr [ESP + 0x1c4],0x400   ; 00596dca
        ;   Label: LAB_00596dca
    JMP 0x00596d05                      ; 00596dd5
        ;   XREF to: 00596d05 (UNCONDITIONAL_JUMP)  ; LAB_00596d05
    CMP EBP,0x10000                     ; 00596dda
        ;   Label: LAB_00596dda
    JNC 0x00596dfa                      ; 00596de0
        ;   XREF to: 00596dfa (CONDITIONAL_JUMP)  ; LAB_00596dfa
    CMP EBP,0x1000                      ; 00596de2
    JC 0x00596e18                       ; 00596de8
        ;   XREF to: 00596e18 (CONDITIONAL_JUMP)  ; LAB_00596e18
    JBE 0x00596cfa                      ; 00596dea
        ;   XREF to: 00596cfa (CONDITIONAL_JUMP)  ; LAB_00596cfa
    CMP EBP,0x4000                      ; 00596df0
    JZ 0x00596d8a                       ; 00596df6
        ;   XREF to: 00596d8a (CONDITIONAL_JUMP)  ; LAB_00596d8a
    JMP 0x00596e18                      ; 00596df8
        ;   XREF to: 00596e18 (UNCONDITIONAL_JUMP)  ; LAB_00596e18
    JBE 0x00596d9a                      ; 00596dfa
        ;   XREF to: 00596d9a (CONDITIONAL_JUMP)  ; LAB_00596d9a
        ;   Label: LAB_00596dfa
    CMP EBP,0x100000                    ; 00596dfc
    JNC 0x00596e0e                      ; 00596e02
        ;   XREF to: 00596e0e (CONDITIONAL_JUMP)  ; LAB_00596e0e
    CMP EBP,0x40000                     ; 00596e04
    JZ 0x00596daa                       ; 00596e0a
        ;   XREF to: 00596daa (CONDITIONAL_JUMP)  ; LAB_00596daa
    JMP 0x00596e18                      ; 00596e0c
        ;   XREF to: 00596e18 (UNCONDITIONAL_JUMP)  ; LAB_00596e18
    JBE 0x00596dba                      ; 00596e0e
        ;   XREF to: 00596dba (CONDITIONAL_JUMP)  ; LAB_00596dba
        ;   Label: LAB_00596e0e
    CMP EBP,0x400000                    ; 00596e10 | IMAGE_DOS_HEADER_00400000
    JZ 0x00596dca                       ; 00596e16
        ;   XREF to: 00596dca (CONDITIONAL_JUMP)  ; LAB_00596dca
    PUSH EBP                            ; 00596e18
        ;   Label: LAB_00596e18
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 00596e19
    PUSH EDI                            ; 00596e20
    PUSH 0x5f7ac2                       ; 00596e21 | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0x10c]               ; 00596e26
    PUSH EAX                            ; 00596e2d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00596e2e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5f7af3                    ; 00596e33 | = "..\\engine\\texture.cpp"
    ADD ESP,0x10                        ; 00596e38
    MOV [0x01d1d400],EAX                ; 00596e3b | DAT_01d1d400
    LEA EAX,[ESP + 0x100]               ; 00596e40
    MOV EDX,0x194                       ; 00596e47
    PUSH EAX                            ; 00596e4c
    MOV dword ptr [0x01d1d404],EDX      ; 00596e4d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596e53
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00596e58
    JMP 0x00596d05                      ; 00596e5b
        ;   XREF to: 00596d05 (UNCONDITIONAL_JUMP)  ; LAB_00596d05

