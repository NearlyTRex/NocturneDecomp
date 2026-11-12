; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00569790(CTextureCache *this_ptr,char *texture_name)
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
;   engine_texture.cpp_FUN_0056aa10 at 0056aa5f
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   TerminatedCString s_engine_texture_cpp_005d5ea1
;   TerminatedCString s_Texture_name_is_too_big_005d5eb7
;   undefined4 DAT_005d5ed4
;   TerminatedCString s_engine_texture_cpp_005d5ed8
;   TerminatedCString s_CTextureCache_load_Can_t_005d5eee
;   undefined4 DAT_005d5f1e
;   undefined4 DAT_005d5f23
;   undefined4 DAT_005d5f27
;   undefined4 DAT_005d5f2c
;   TerminatedCString s_engine_texture_cpp_005d5f30
;   TerminatedCString s_CTextureCache_load_Out_o_005d5f46
;   TerminatedCString s_CTextureCache_load_Bad_t_005d5f6a
;   TerminatedCString s_engine_texture_cpp_005d5f9b
;   TerminatedCString s_engine_texture_cpp_005d5fb1
;   ... and 18 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_malloc_FUN_005a3650
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_changeFileExtension_FUN_00465f80
;   engine_dosio.cpp_findFile_FUN_004656d0
;   engine_dosio.cpp_FUN_00465660
;   engine_texture.cpp_FUN_00569670
;   support_trstream.cpp_CInStreamFile_close_FUN_00573db0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   support_trstream.cpp_CInStreamFile_read_FUN_00573c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569790
        ;   Label: engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790
    PUSH ESI                            ; 00569791
    PUSH EDI                            ; 00569792
    PUSH EBP                            ; 00569793
    SUB ESP,0x1cc                       ; 00569794
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 0056979a
    LEA EAX,[ESP + 0x180]               ; 005697a1
    PUSH EAX                            ; 005697a8
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 005697a9
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005697ae
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 005697b1
    SUB ECX,ECX                         ; 005697b8
    DEC ECX                             ; 005697ba
    XOR EAX,EAX                         ; 005697bb
    SCASB.REPNE ES:EDI                  ; 005697bd
    NOT ECX                             ; 005697bf
    DEC ECX                             ; 005697c1
    CMP ECX,0x40                        ; 005697c2
    JNC 0x00569c1d                      ; 005697c5
        ;   XREF to: 00569c1d (CONDITIONAL_JUMP)  ; LAB_00569c1d
    PUSH 0x214                          ; 005697cb
        ;   Label: LAB_005697cb
    PUSH 0x0                            ; 005697d0
    PUSH 0x2cfd0d8                      ; 005697d2
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005697d7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005697dc
    PUSH 0x214                          ; 005697df
    PUSH 0x0                            ; 005697e4
    PUSH 0x2cfd2ec                      ; 005697e6
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005697eb
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005697f0
    PUSH 0x214                          ; 005697f3
    PUSH 0x0                            ; 005697f8
    PUSH 0x2cfd500                      ; 005697fa
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005697ff
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00569804
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 00569807
    PUSH EDI                            ; 0056980e
    PUSH 0x5d5ed4                       ; 0056980f | DAT_005d5ed4
    PUSH 0x2cfd0d8                      ; 00569814
    CALL engine_dosio.cpp_FUN_00465660  ; 00569819
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    ADD ESP,0xc                         ; 0056981e
    PUSH 0x2cfd0d8                      ; 00569821
    CALL engine_dosio.cpp_findFile_FUN_004656d0 ; 00569826
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004656d0()
    ADD ESP,0x4                         ; 0056982b
    TEST EAX,EAX                        ; 0056982e
    JNZ 0x00569855                      ; 00569830
        ;   XREF to: 00569855 (CONDITIONAL_JUMP)  ; LAB_00569855
    PUSH EDI                            ; 00569832
    MOV EBP,0x5d5ed8                    ; 00569833 | = "..\\engine\\texture.cpp"
    MOV EAX,0x107                       ; 00569838
    PUSH 0x5d5eee                       ; 0056983d | = "CTextureCache::load - Can't get file ..."
    MOV dword ptr [0x01d71de0],EBP      ; 00569842 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00569848 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056984d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00569852
    PUSH EBX                            ; 00569855
        ;   Label: LAB_00569855
    MOV EBP,dword ptr [0x02cfd2dc]      ; 00569856 | DAT_02cfd2dc
    CALL engine_texture.cpp_FUN_00569670 ; 0056985c
        ;   XREF to: 00569670 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00569670()
    ADD ESP,0x4                         ; 00569861
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00569864
    LEA EDX,[EAX*0x4 + 0x0]             ; 0056986b
    SUB EDX,EAX                         ; 00569872
    ADD EBX,0x4                         ; 00569874
    SHL EDX,0x5                         ; 00569877
    ADD EBX,EDX                         ; 0056987a
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0056987c
    LEA EDI,[EBX + 0x4]                 ; 00569883
    PUSH EDI                            ; 00569886
    MOV AL,byte ptr [ESI]               ; 00569887
        ;   Label: LAB_00569887
    MOV byte ptr [EDI],AL               ; 00569889
    CMP AL,0x0                          ; 0056988b
    JZ 0x0056989f                       ; 0056988d
        ;   XREF to: 0056989f (CONDITIONAL_JUMP)  ; LAB_0056989f
    MOV AL,byte ptr [ESI + 0x1]         ; 0056988f
    ADD ESI,0x2                         ; 00569892
    MOV byte ptr [EDI + 0x1],AL         ; 00569895
    ADD EDI,0x2                         ; 00569898
    CMP AL,0x0                          ; 0056989b
    JNZ 0x00569887                      ; 0056989d
        ;   XREF to: 00569887 (CONDITIONAL_JUMP)  ; LAB_00569887
    POP EDI                             ; 0056989f
        ;   Label: LAB_0056989f
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 005698a0
    MOV EDI,ESP                         ; 005698a7
    PUSH EDI                            ; 005698a9
    MOV AL,byte ptr [ESI]               ; 005698aa
        ;   Label: LAB_005698aa
    MOV byte ptr [EDI],AL               ; 005698ac
    CMP AL,0x0                          ; 005698ae
    JZ 0x005698c2                       ; 005698b0
        ;   XREF to: 005698c2 (CONDITIONAL_JUMP)  ; LAB_005698c2
    MOV AL,byte ptr [ESI + 0x1]         ; 005698b2
    ADD ESI,0x2                         ; 005698b5
    MOV byte ptr [EDI + 0x1],AL         ; 005698b8
    ADD EDI,0x2                         ; 005698bb
    CMP AL,0x0                          ; 005698be
    JNZ 0x005698aa                      ; 005698c0
        ;   XREF to: 005698aa (CONDITIONAL_JUMP)  ; LAB_005698aa
    POP EDI                             ; 005698c2
        ;   Label: LAB_005698c2
    PUSH 0x5d5f1e                       ; 005698c3 | DAT_005d5f1e
    LEA EAX,[ESP + 0x4]                 ; 005698c8
    PUSH EAX                            ; 005698cc
    CALL engine_dosio.cpp_changeFileExtension_FUN_00465f80 ; 005698cd
        ;   XREF to: 00465f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_00465f80(char * path, char * new_extension)
    ADD ESP,0x8                         ; 005698d2
    MOV EAX,ESP                         ; 005698d5
    PUSH EAX                            ; 005698d7
    PUSH 0x5d5f23                       ; 005698d8 | DAT_005d5f23
    PUSH 0x2cfd2ec                      ; 005698dd
    CALL engine_dosio.cpp_FUN_00465660  ; 005698e2
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    ADD ESP,0xc                         ; 005698e7
    PUSH 0x2cfd2ec                      ; 005698ea
    CALL engine_dosio.cpp_findFile_FUN_004656d0 ; 005698ef
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004656d0()
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005698f4
    ADD ESP,0x4                         ; 005698fb
    LEA EDI,[ESP + 0x80]                ; 005698fe
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00569905
    PUSH EDI                            ; 0056990c
    MOV AL,byte ptr [ESI]               ; 0056990d
        ;   Label: LAB_0056990d
    MOV byte ptr [EDI],AL               ; 0056990f
    CMP AL,0x0                          ; 00569911
    JZ 0x00569925                       ; 00569913
        ;   XREF to: 00569925 (CONDITIONAL_JUMP)  ; LAB_00569925
    MOV AL,byte ptr [ESI + 0x1]         ; 00569915
    ADD ESI,0x2                         ; 00569918
    MOV byte ptr [EDI + 0x1],AL         ; 0056991b
    ADD EDI,0x2                         ; 0056991e
    CMP AL,0x0                          ; 00569921
    JNZ 0x0056990d                      ; 00569923
        ;   XREF to: 0056990d (CONDITIONAL_JUMP)  ; LAB_0056990d
    POP EDI                             ; 00569925
        ;   Label: LAB_00569925
    PUSH 0x5d5f27                       ; 00569926 | DAT_005d5f27
    LEA EAX,[ESP + 0x84]                ; 0056992b
    PUSH EAX                            ; 00569932
    CALL engine_dosio.cpp_changeFileExtension_FUN_00465f80 ; 00569933
        ;   XREF to: 00465f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_00465f80(char * path, char * new_extension)
    ADD ESP,0x8                         ; 00569938
    LEA EAX,[ESP + 0x80]                ; 0056993b
    PUSH EAX                            ; 00569942
    PUSH 0x5d5f2c                       ; 00569943 | DAT_005d5f2c
    PUSH 0x2cfd500                      ; 00569948
    CALL engine_dosio.cpp_FUN_00465660  ; 0056994d
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    ADD ESP,0xc                         ; 00569952
    PUSH 0x2cfd500                      ; 00569955
    CALL engine_dosio.cpp_findFile_FUN_004656d0 ; 0056995a
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004656d0()
    ADD ESP,0x4                         ; 0056995f
    MOV ECX,dword ptr [ESP + 0x1ac]     ; 00569962
    MOV ESI,EAX                         ; 00569969
    TEST ECX,ECX                        ; 0056996b
    JZ 0x00569dca                       ; 0056996d
        ;   XREF to: 00569dca (CONDITIONAL_JUMP)  ; LAB_00569dca
    PUSH 0x300                          ; 00569973
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00569978
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0056997d
    MOV dword ptr [EBX + 0x4c],EAX      ; 00569980
    TEST EAX,EAX                        ; 00569983
    JNZ 0x005699a9                      ; 00569985
        ;   XREF to: 005699a9 (CONDITIONAL_JUMP)  ; LAB_005699a9
    MOV EDI,0x5d5f30                    ; 00569987 | = "..\\engine\\texture.cpp"
    MOV EAX,0x131                       ; 0056998c
    PUSH 0x5d5f46                       ; 00569991 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 00569996 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0056999c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005699a1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005699a6
    CMP EBP,0x4000                      ; 005699a9
        ;   Label: LAB_005699a9
    JNC 0x00569cad                      ; 005699af
        ;   XREF to: 00569cad (CONDITIONAL_JUMP)  ; LAB_00569cad
    CMP EBP,0x400                       ; 005699b5
    JNC 0x00569cd3                      ; 005699bb
        ;   XREF to: 00569cd3 (CONDITIONAL_JUMP)  ; LAB_00569cd3
    PUSH EBP                            ; 005699c1
        ;   Label: LAB_005699c1
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 005699c2
    PUSH EDI                            ; 005699c9
    PUSH 0x5d5f6a                       ; 005699ca | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0x10c]               ; 005699cf
    PUSH EAX                            ; 005699d6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005699d7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5d5f9b                    ; 005699dc | = "..\\engine\\texture.cpp"
    ADD ESP,0x10                        ; 005699e1
    MOV [0x01d71de0],EAX                ; 005699e4 | DAT_01d71de0
    LEA EAX,[ESP + 0x100]               ; 005699e9
    MOV EDX,0x14a                       ; 005699f0
    PUSH EAX                            ; 005699f5
    MOV dword ptr [0x01d71de4],EDX      ; 005699f6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005699fc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00569a01
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00569a04
        ;   Label: LAB_00569a04
    PUSH EBP                            ; 00569a0b
    MOV dword ptr [EBX],EAX             ; 00569a0c
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00569a0e
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00569a13
    MOV dword ptr [EBX + 0x44],EAX      ; 00569a16
    TEST EAX,EAX                        ; 00569a19
    JNZ 0x00569a3f                      ; 00569a1b
        ;   XREF to: 00569a3f (CONDITIONAL_JUMP)  ; LAB_00569a3f
    MOV EDI,0x5d5fb1                    ; 00569a1d | = "..\\engine\\texture.cpp"
    MOV EAX,0x154                       ; 00569a22
    PUSH 0x5d5fc7                       ; 00569a27 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 00569a2c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00569a32 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569a37
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00569a3c
    TEST ESI,ESI                        ; 00569a3f
        ;   Label: LAB_00569a3f
    JZ 0x00569a76                       ; 00569a41
        ;   XREF to: 00569a76 (CONDITIONAL_JUMP)  ; LAB_00569a76
    PUSH EBP                            ; 00569a43
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00569a44
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00569a49
    MOV dword ptr [EBX + 0x48],EAX      ; 00569a4c
    TEST EAX,EAX                        ; 00569a4f
    JNZ 0x00569a76                      ; 00569a51
        ;   XREF to: 00569a76 (CONDITIONAL_JUMP)  ; LAB_00569a76
    MOV ECX,0x5d5feb                    ; 00569a53 | = "..\\engine\\texture.cpp"
    MOV EDI,0x15a                       ; 00569a58
    PUSH 0x5d6001                       ; 00569a5d | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 00569a62 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00569a68 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569a6e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00569a73
    PUSH 0x1                            ; 00569a76
        ;   Label: LAB_00569a76
    LEA EAX,[ESP + 0x4]                 ; 00569a78
    PUSH EAX                            ; 00569a7c
    PUSH 0x5d6025                       ; 00569a7d | DAT_005d6025
    LEA EAX,[ESP + 0x18c]               ; 00569a82
    PUSH EAX                            ; 00569a89
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00569a8a
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00569a8f
    PUSH 0x300                          ; 00569a92
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00569a97
    PUSH EBP                            ; 00569a9a
    LEA EAX,[ESP + 0x188]               ; 00569a9b
    PUSH EAX                            ; 00569aa2
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00569aa3
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00569aa8
    LEA EAX,[ESP + 0x180]               ; 00569aab
    PUSH EAX                            ; 00569ab2
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 00569ab3
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00569ab8
    TEST ESI,ESI                        ; 00569abb
    JZ 0x00569b0d                       ; 00569abd
        ;   XREF to: 00569b0d (CONDITIONAL_JUMP)  ; LAB_00569b0d
    PUSH 0x1                            ; 00569abf
    LEA EAX,[ESP + 0x84]                ; 00569ac1
    PUSH EAX                            ; 00569ac8
    PUSH 0x5d6029                       ; 00569ac9 | DAT_005d6029
    LEA EAX,[ESP + 0x18c]               ; 00569ace
    PUSH EAX                            ; 00569ad5
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00569ad6
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00569adb
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00569ade
    IMUL EAX,EAX                        ; 00569ae5
    PUSH EAX                            ; 00569ae8
    MOV ECX,dword ptr [EBX + 0x48]      ; 00569ae9
    PUSH ECX                            ; 00569aec
    LEA EAX,[ESP + 0x188]               ; 00569aed
    PUSH EAX                            ; 00569af4
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00569af5
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00569afa
    LEA EAX,[ESP + 0x180]               ; 00569afd
    PUSH EAX                            ; 00569b04
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 00569b05
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00569b0a
    PUSH 0x1                            ; 00569b0d
        ;   Label: LAB_00569b0d
    MOV ESI,dword ptr [ESP + 0x1e8]     ; 00569b0f
    PUSH ESI                            ; 00569b16
    PUSH 0x5d602d                       ; 00569b17 | DAT_005d602d
    LEA EAX,[ESP + 0x18c]               ; 00569b1c
    PUSH EAX                            ; 00569b23
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00569b24
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00569b29
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00569b2c
    IMUL EAX,EAX                        ; 00569b33
    PUSH EAX                            ; 00569b36
    MOV EBP,dword ptr [EBX + 0x44]      ; 00569b37
    PUSH EBP                            ; 00569b3a
    LEA EAX,[ESP + 0x188]               ; 00569b3b
    PUSH EAX                            ; 00569b42
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00569b43
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00569b48
    LEA EAX,[ESP + 0x180]               ; 00569b4b
    PUSH EAX                            ; 00569b52
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 00569b53
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    MOV EAX,[0x02cfd0c8]                ; 00569b58 | DAT_02cfd0c8
    ADD ESP,0x4                         ; 00569b5d
    TEST EAX,EAX                        ; 00569b60
    JZ 0x00569bf9                       ; 00569b62
        ;   XREF to: 00569bf9 (CONDITIONAL_JUMP)  ; LAB_00569bf9
    XOR EDX,EDX                         ; 00569b68
    FLD float ptr [0x005d60c1]          ; 00569b6a | DAT_005d60c1
    FLD float ptr [0x005d60bd]          ; 00569b70 | DAT_005d60bd
    FLD float ptr [0x005d60b9]          ; 00569b76 | DAT_005d60b9
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00569b7c
        ;   Label: LAB_00569b7c
    XOR EAX,EAX                         ; 00569b7f
    MOV AL,byte ptr [ECX + EDX*0x1]     ; 00569b81
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00569b84
    XOR EAX,EAX                         ; 00569b8b
    FILD word ptr [ESP + 0x1c8]         ; 00569b8d
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x1] ; 00569b94
    FMUL ST1                            ; 00569b98
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00569b9a
    XOR EAX,EAX                         ; 00569ba1
    FILD word ptr [ESP + 0x1c8]         ; 00569ba3
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x2] ; 00569baa
    FMUL ST3                            ; 00569bae
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00569bb0
    FADDP                               ; 00569bb7
    FILD word ptr [ESP + 0x1c8]         ; 00569bb9
    FMUL ST4                            ; 00569bc0
    FADDP                               ; 00569bc2
    CALL crt_math.c_round_FUN_005a3120  ; 00569bc4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1bc]       ; 00569bc9
    MOV AL,byte ptr [ESP + 0x1bc]       ; 00569bd0
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00569bd7
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00569bda
    MOV byte ptr [ECX + EDX*0x1 + 0x1],AL ; 00569bdd
    ADD EDX,0x3                         ; 00569be1
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00569be4
    MOV byte ptr [ECX + EDX*0x1 + -0x1],AL ; 00569be7
    CMP EDX,0x300                       ; 00569beb
    JNZ 0x00569b7c                      ; 00569bf1
        ;   XREF to: 00569b7c (CONDITIONAL_JUMP)  ; LAB_00569b7c
    FSTP ST0                            ; 00569bf3
    FSTP ST0                            ; 00569bf5
    FSTP ST0                            ; 00569bf7
    PUSH 0x0                            ; 00569bf9
        ;   Label: LAB_00569bf9
    LEA EAX,[ESP + 0x184]               ; 00569bfb
    PUSH EAX                            ; 00569c02
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00569c03
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00569c08
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00569c0b
    ADD ESP,0x1cc                       ; 00569c12
    POP EBP                             ; 00569c18
    POP EDI                             ; 00569c19
    POP ESI                             ; 00569c1a
    POP EBX                             ; 00569c1b
    RET                                 ; 00569c1c
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00569c1d
        ;   Label: LAB_00569c1d
    PUSH ESI                            ; 00569c24
    MOV EDX,0x5d5ea1                    ; 00569c25 | = "..\\engine\\texture.cpp"
    MOV ECX,0xfb                        ; 00569c2a
    PUSH 0x5d5eb7                       ; 00569c2f | = "Texture name is too big : %s"
    MOV dword ptr [0x01d71de0],EDX      ; 00569c34 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00569c3a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569c40
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00569c45
    JMP 0x005697cb                      ; 00569c48
        ;   XREF to: 005697cb (UNCONDITIONAL_JUMP)  ; LAB_005697cb
    MOV dword ptr [ESP + 0x1c4],0x20    ; 00569c4d
        ;   Label: LAB_00569c4d
    JMP 0x00569a04                      ; 00569c58
        ;   XREF to: 00569a04 (UNCONDITIONAL_JUMP)  ; LAB_00569a04
    MOV dword ptr [ESP + 0x1c4],0x40    ; 00569c5d
        ;   Label: LAB_00569c5d
    JMP 0x00569a04                      ; 00569c68
        ;   XREF to: 00569a04 (UNCONDITIONAL_JUMP)  ; LAB_00569a04
    MOV dword ptr [ESP + 0x1c4],0x80    ; 00569c6d
        ;   Label: LAB_00569c6d
    JMP 0x00569a04                      ; 00569c78
        ;   XREF to: 00569a04 (UNCONDITIONAL_JUMP)  ; LAB_00569a04
    MOV dword ptr [ESP + 0x1c4],0x100   ; 00569c7d
        ;   Label: LAB_00569c7d
    JMP 0x00569a04                      ; 00569c88
        ;   XREF to: 00569a04 (UNCONDITIONAL_JUMP)  ; LAB_00569a04
    MOV dword ptr [ESP + 0x1c4],0x200   ; 00569c8d
        ;   Label: LAB_00569c8d
    JMP 0x00569a04                      ; 00569c98
        ;   XREF to: 00569a04 (UNCONDITIONAL_JUMP)  ; LAB_00569a04
    MOV dword ptr [ESP + 0x1c4],0x400   ; 00569c9d
        ;   Label: LAB_00569c9d
    JMP 0x00569a04                      ; 00569ca8
        ;   XREF to: 00569a04 (UNCONDITIONAL_JUMP)  ; LAB_00569a04
    JBE 0x00569c6d                      ; 00569cad
        ;   XREF to: 00569c6d (CONDITIONAL_JUMP)  ; LAB_00569c6d
        ;   Label: LAB_00569cad
    CMP EBP,0x40000                     ; 00569caf
    JNC 0x00569cc4                      ; 00569cb5
        ;   XREF to: 00569cc4 (CONDITIONAL_JUMP)  ; LAB_00569cc4
    CMP EBP,0x10000                     ; 00569cb7
    JZ 0x00569c7d                       ; 00569cbd
        ;   XREF to: 00569c7d (CONDITIONAL_JUMP)  ; LAB_00569c7d
    JMP 0x005699c1                      ; 00569cbf
        ;   XREF to: 005699c1 (UNCONDITIONAL_JUMP)  ; LAB_005699c1
    JBE 0x00569c8d                      ; 00569cc4
        ;   XREF to: 00569c8d (CONDITIONAL_JUMP)  ; LAB_00569c8d
        ;   Label: LAB_00569cc4
    CMP EBP,0x100000                    ; 00569cc6
    JZ 0x00569c9d                       ; 00569ccc
        ;   XREF to: 00569c9d (CONDITIONAL_JUMP)  ; LAB_00569c9d
    JMP 0x005699c1                      ; 00569cce
        ;   XREF to: 005699c1 (UNCONDITIONAL_JUMP)  ; LAB_005699c1
    JBE 0x00569c4d                      ; 00569cd3
        ;   XREF to: 00569c4d (CONDITIONAL_JUMP)  ; LAB_00569c4d
        ;   Label: LAB_00569cd3
    CMP EBP,0x1000                      ; 00569cd9
    JZ 0x00569c5d                       ; 00569cdf
        ;   XREF to: 00569c5d (CONDITIONAL_JUMP)  ; LAB_00569c5d
    JMP 0x005699c1                      ; 00569ce5
        ;   XREF to: 005699c1 (UNCONDITIONAL_JUMP)  ; LAB_005699c1
    MOV dword ptr [ESP + 0x1c4],0x20    ; 00569cea
        ;   Label: LAB_00569cea
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00569cf5
        ;   Label: LAB_00569cf5
    PUSH EBP                            ; 00569cfc
    MOV dword ptr [EBX],EAX             ; 00569cfd
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00569cff
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00569d04
    MOV dword ptr [EBX + 0x50],EAX      ; 00569d07
    TEST EAX,EAX                        ; 00569d0a
    JNZ 0x00569d31                      ; 00569d0c
        ;   XREF to: 00569d31 (CONDITIONAL_JUMP)  ; LAB_00569d31
    MOV ESI,0x5d6078                    ; 00569d0e | = "..\\engine\\texture.cpp"
    MOV EDI,0x19e                       ; 00569d13
    PUSH 0x5d608e                       ; 00569d18 | = "CTextureCache::load - Out of memory"
    MOV dword ptr [0x01d71de0],ESI      ; 00569d1d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00569d23 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569d29
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00569d2e
    PUSH 0x1                            ; 00569d31
        ;   Label: LAB_00569d31
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00569d33
    PUSH EAX                            ; 00569d3a
    PUSH 0x5d60b2                       ; 00569d3b | DAT_005d60b2
    LEA EAX,[ESP + 0x18c]               ; 00569d40
    PUSH EAX                            ; 00569d47
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00569d48
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00569d4d
    PUSH EBP                            ; 00569d50
    MOV EDX,dword ptr [EBX + 0x50]      ; 00569d51
    PUSH EDX                            ; 00569d54
    LEA EAX,[ESP + 0x188]               ; 00569d55
    PUSH EAX                            ; 00569d5c
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00569d5d
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00569d62
    LEA EAX,[ESP + 0x180]               ; 00569d65
    PUSH EAX                            ; 00569d6c
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 00569d6d
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00569d72
    JMP 0x00569bf9                      ; 00569d75
        ;   XREF to: 00569bf9 (UNCONDITIONAL_JUMP)  ; LAB_00569bf9
    MOV dword ptr [ESP + 0x1c4],0x40    ; 00569d7a
        ;   Label: LAB_00569d7a
    JMP 0x00569cf5                      ; 00569d85
        ;   XREF to: 00569cf5 (UNCONDITIONAL_JUMP)  ; LAB_00569cf5
    MOV dword ptr [ESP + 0x1c4],0x80    ; 00569d8a
        ;   Label: LAB_00569d8a
    JMP 0x00569cf5                      ; 00569d95
        ;   XREF to: 00569cf5 (UNCONDITIONAL_JUMP)  ; LAB_00569cf5
    MOV dword ptr [ESP + 0x1c4],0x100   ; 00569d9a
        ;   Label: LAB_00569d9a
    JMP 0x00569cf5                      ; 00569da5
        ;   XREF to: 00569cf5 (UNCONDITIONAL_JUMP)  ; LAB_00569cf5
    MOV dword ptr [ESP + 0x1c4],0x200   ; 00569daa
        ;   Label: LAB_00569daa
    JMP 0x00569cf5                      ; 00569db5
        ;   XREF to: 00569cf5 (UNCONDITIONAL_JUMP)  ; LAB_00569cf5
    MOV dword ptr [ESP + 0x1c4],0x400   ; 00569dba
        ;   Label: LAB_00569dba
    JMP 0x00569cf5                      ; 00569dc5
        ;   XREF to: 00569cf5 (UNCONDITIONAL_JUMP)  ; LAB_00569cf5
    CMP EBP,0x10000                     ; 00569dca
        ;   Label: LAB_00569dca
    JNC 0x00569dea                      ; 00569dd0
        ;   XREF to: 00569dea (CONDITIONAL_JUMP)  ; LAB_00569dea
    CMP EBP,0x1000                      ; 00569dd2
    JC 0x00569e08                       ; 00569dd8
        ;   XREF to: 00569e08 (CONDITIONAL_JUMP)  ; LAB_00569e08
    JBE 0x00569cea                      ; 00569dda
        ;   XREF to: 00569cea (CONDITIONAL_JUMP)  ; LAB_00569cea
    CMP EBP,0x4000                      ; 00569de0
    JZ 0x00569d7a                       ; 00569de6
        ;   XREF to: 00569d7a (CONDITIONAL_JUMP)  ; LAB_00569d7a
    JMP 0x00569e08                      ; 00569de8
        ;   XREF to: 00569e08 (UNCONDITIONAL_JUMP)  ; LAB_00569e08
    JBE 0x00569d8a                      ; 00569dea
        ;   XREF to: 00569d8a (CONDITIONAL_JUMP)  ; LAB_00569d8a
        ;   Label: LAB_00569dea
    CMP EBP,0x100000                    ; 00569dec
    JNC 0x00569dfe                      ; 00569df2
        ;   XREF to: 00569dfe (CONDITIONAL_JUMP)  ; LAB_00569dfe
    CMP EBP,0x40000                     ; 00569df4
    JZ 0x00569d9a                       ; 00569dfa
        ;   XREF to: 00569d9a (CONDITIONAL_JUMP)  ; LAB_00569d9a
    JMP 0x00569e08                      ; 00569dfc
        ;   XREF to: 00569e08 (UNCONDITIONAL_JUMP)  ; LAB_00569e08
    JBE 0x00569daa                      ; 00569dfe
        ;   XREF to: 00569daa (CONDITIONAL_JUMP)  ; LAB_00569daa
        ;   Label: LAB_00569dfe
    CMP EBP,0x400000                    ; 00569e00 | IMAGE_DOS_HEADER_00400000
    JZ 0x00569dba                       ; 00569e06
        ;   XREF to: 00569dba (CONDITIONAL_JUMP)  ; LAB_00569dba
    PUSH EBP                            ; 00569e08
        ;   Label: LAB_00569e08
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 00569e09
    PUSH EDI                            ; 00569e10
    PUSH 0x5d6031                       ; 00569e11 | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0x10c]               ; 00569e16
    PUSH EAX                            ; 00569e1d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00569e1e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5d6062                    ; 00569e23 | = "..\\engine\\texture.cpp"
    ADD ESP,0x10                        ; 00569e28
    MOV [0x01d71de0],EAX                ; 00569e2b | DAT_01d71de0
    LEA EAX,[ESP + 0x100]               ; 00569e30
    MOV EDX,0x194                       ; 00569e37
    PUSH EAX                            ; 00569e3c
    MOV dword ptr [0x01d71de4],EDX      ; 00569e3d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569e43
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00569e48
    JMP 0x00569cf5                      ; 00569e4b
        ;   XREF to: 00569cf5 (UNCONDITIONAL_JUMP)  ; LAB_00569cf5

