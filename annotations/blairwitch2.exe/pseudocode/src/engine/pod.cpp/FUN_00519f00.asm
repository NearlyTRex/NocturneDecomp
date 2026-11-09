; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_FUN_00519f00(CPodFile *this_ptr,char *pod_filename)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined        Stack[-0x6a4]:1  local_6a4
; undefined        Stack[-0x5a4]:1  local_5a4
; undefined1       Stack[-0x5a3]:1  local_5a3
; undefined4       Stack[-0x498]:4  local_498
; undefined        Stack[-0x490]:1  local_490
; undefined        Stack[-0x488]:1  local_488
; undefined1       Stack[-0x487]:1  local_487
; undefined4       Stack[-0x438]:4  local_438
; undefined4       Stack[-0x434]:4  local_434
; undefined4       Stack[-0x42c]:4  local_42c
; undefined        Stack[-0x428]:1  local_428
; undefined1       Stack[-0x427]:1  local_427
; undefined        Stack[-0x3d8]:1  local_3d8
; undefined1       Stack[-0x3d7]:1  local_3d7
; undefined4       Stack[-0x388]:4  local_388
; undefined4       Stack[-0x380]:4  local_380
; undefined4       Stack[-0x37c]:4  local_37c
; undefined        Stack[-0x370]:1  local_370
; undefined        Stack[-0x36c]:1  local_36c
; undefined1       Stack[-0x36b]:1  local_36b
; undefined4       Stack[-0x26c]:4  local_26c
; undefined        Stack[-0x260]:1  local_260
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x158]:1  local_158
; undefined1       Stack[-0x157]:1  local_157
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined        Stack[-0xfc]:1  local_fc
; undefined1       Stack[-0xfb]:1  local_fb
; undefined        Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xab]:1  local_ab
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x5b]:1  local_5b
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined1       Stack[-0x33]:1  local_33
; undefined1       Stack[-0x32]:1  local_32
; undefined1       Stack[-0x31]:1  local_31
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_pod.cpp_FUN_0051b110 at 0051b173
;   engine_pod.cpp_FUN_0051b1e0 at 0051b224
;   engine_pod.cpp_FUN_0051b6dc at 0051b71e
;
; Referenced Globals:
;   undefined4 DAT_005e2407
;   undefined4 DAT_005e240a
;   undefined4 DAT_005e240e
;   TerminatedCString s_engine_pod_cpp_005e2413
;   TerminatedCString s_Out_of_memory_005e2425
;   TerminatedCString s_engine_pod_cpp_005e2434
;   TerminatedCString s_Out_of_memory_005e2446
;   TerminatedCString s_engine_pod_cpp_005e2455
;   TerminatedCString s_Out_of_memory_005e2467
;   TerminatedCString s_engine_pod_cpp_005e2476
;   TerminatedCString s_Out_of_memory_005e2488
;   TerminatedCString s_engine_pod_cpp_005e2497
;   TerminatedCString s_realloc_returns_NULL_shr_005e24a9
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_stdio.c_fseek_FUN_005b929c
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_stdlib.c__qsort_FUN_005b78b8
;   crt_string.c__stricmp_FUN_005b8130
;   crt_unknown.c_FUN_005b8580
;   engine_dosio.cpp_findFileNormally_FUN_004609e0
;   engine_dosio.cpp_FUN_00460910
;   engine_dosio.cpp_FUN_00461070
;   engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519f00
        ;   Label: engine_pod.cpp_FUN_00519f00
    PUSH ESI                            ; 00519f01
    PUSH EDI                            ; 00519f02
    PUSH EBP                            ; 00519f03
    SUB ESP,0x694                       ; 00519f04
    MOV EBX,dword ptr [ESP + 0x6a8]     ; 00519f0a
    XOR EDX,EDX                         ; 00519f11
    PUSH EBX                            ; 00519f13
    MOV dword ptr [ESP + 0x690],EDX     ; 00519f14
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0 ; 00519f1b
        ;   XREF to: 0051a8f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00519f20
    MOV ECX,dword ptr [ESP + 0x6ac]     ; 00519f23
    PUSH ECX                            ; 00519f2a
    PUSH 0x0                            ; 00519f2b
    LEA EAX,[ESP + 0x8]                 ; 00519f2d
    PUSH EAX                            ; 00519f31
    CALL engine_dosio.cpp_FUN_00460910  ; 00519f32
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 00519f37
    MOV EAX,ESP                         ; 00519f3a
    PUSH EAX                            ; 00519f3c
    CALL engine_dosio.cpp_findFileNormally_FUN_004609e0 ; 00519f3d
        ;   XREF to: 004609e0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFileNormally_FUN_004609e0()
    ADD ESP,0x4                         ; 00519f42
    TEST EAX,EAX                        ; 00519f45
    JNZ 0x00519f54                      ; 00519f47
        ;   XREF to: 00519f54 (CONDITIONAL_JUMP)  ; LAB_00519f54
    ADD ESP,0x694                       ; 00519f49
    POP EBP                             ; 00519f4f
    POP EDI                             ; 00519f50
    POP ESI                             ; 00519f51
    POP EBX                             ; 00519f52
    RET                                 ; 00519f53
    LEA EDX,[EBX + 0x4]                 ; 00519f54
        ;   Label: LAB_00519f54
    LEA ESI,[ESP + 0x100]               ; 00519f57
    MOV EDI,EDX                         ; 00519f5e
    PUSH EDI                            ; 00519f60
    MOV AL,byte ptr [ESI]               ; 00519f61
        ;   Label: LAB_00519f61
    MOV byte ptr [EDI],AL               ; 00519f63
    CMP AL,0x0                          ; 00519f65
    JZ 0x00519f79                       ; 00519f67
        ;   XREF to: 00519f79 (CONDITIONAL_JUMP)  ; LAB_00519f79
    MOV AL,byte ptr [ESI + 0x1]         ; 00519f69
    ADD ESI,0x2                         ; 00519f6c
    MOV byte ptr [EDI + 0x1],AL         ; 00519f6f
    ADD EDI,0x2                         ; 00519f72
    CMP AL,0x0                          ; 00519f75
    JNZ 0x00519f61                      ; 00519f77
        ;   XREF to: 00519f61 (CONDITIONAL_JUMP)  ; LAB_00519f61
    POP EDI                             ; 00519f79
        ;   Label: LAB_00519f79
    PUSH 0x5e2407                       ; 00519f7a | DAT_005e2407
    MOV EAX,dword ptr [ESP + 0x210]     ; 00519f7f
    PUSH EDX                            ; 00519f86
    MOV dword ptr [EBX + 0x104],EAX     ; 00519f87
    CALL crt_stdio.c_fopen_FUN_005b910c ; 00519f8d
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 00519f92
    MOV EBP,EAX                         ; 00519f95
    MOV dword ptr [ESP + 0x674],EAX     ; 00519f97
    TEST EAX,EAX                        ; 00519f9e
    JNZ 0x00519fcc                      ; 00519fa0
        ;   XREF to: 00519fcc (CONDITIONAL_JUMP)  ; LAB_00519fcc
    MOV EBP,dword ptr [ESP + 0x674]     ; 00519fa2
        ;   Label: LAB_00519fa2
    TEST EBP,EBP                        ; 00519fa9
    JZ 0x00519fb6                       ; 00519fab
        ;   XREF to: 00519fb6 (CONDITIONAL_JUMP)  ; LAB_00519fb6
    PUSH EBP                            ; 00519fad
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00519fae
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00519fb3
    PUSH EBX                            ; 00519fb6
        ;   Label: LAB_00519fb6
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0 ; 00519fb7
        ;   XREF to: 0051a8f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00519fbc
    XOR EAX,EAX                         ; 00519fbf
    ADD ESP,0x694                       ; 00519fc1
    POP EBP                             ; 00519fc7
    POP EDI                             ; 00519fc8
    POP ESI                             ; 00519fc9
    POP EBX                             ; 00519fca
    RET                                 ; 00519fcb
    LEA EAX,[ESP + 0x444]               ; 00519fcc
        ;   Label: LAB_00519fcc
    PUSH EAX                            ; 00519fd3
    PUSH 0x0                            ; 00519fd4
    PUSH 0x0                            ; 00519fd6
    PUSH 0x0                            ; 00519fd8
    MOV ESI,dword ptr [ESP + 0x6bc]     ; 00519fda
    PUSH ESI                            ; 00519fe1
    CALL engine_dosio.cpp_FUN_00461070  ; 00519fe2
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00519fe7
    PUSH 0x5e240a                       ; 00519fea | DAT_005e240a
    LEA EAX,[ESP + 0x448]               ; 00519fef
    PUSH EAX                            ; 00519ff6
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00519ff7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00519ffc
    TEST EAX,EAX                        ; 00519fff
    JZ 0x0051a020                       ; 0051a001
        ;   XREF to: 0051a020 (CONDITIONAL_JUMP)  ; LAB_0051a020
    PUSH 0x5e240e                       ; 0051a003 | DAT_005e240e
    LEA EAX,[ESP + 0x448]               ; 0051a008
    PUSH EAX                            ; 0051a00f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0051a010
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051a015
    TEST EAX,EAX                        ; 0051a018
    JNZ 0x0051a2f4                      ; 0051a01a
        ;   XREF to: 0051a2f4 (CONDITIONAL_JUMP)  ; LAB_0051a2f4
    MOV EBP,dword ptr [ESP + 0x674]     ; 0051a020
        ;   Label: LAB_0051a020
    PUSH EBP                            ; 0051a027
    PUSH 0x110                          ; 0051a028
    PUSH 0x1                            ; 0051a02d
    LEA EAX,[ESP + 0x340]               ; 0051a02f
    PUSH EAX                            ; 0051a036
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a037
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a03c
    LEA ESI,[ESP + 0x338]               ; 0051a03f
    MOV EAX,dword ptr [ESP + 0x438]     ; 0051a046
    LEA EDI,[EBX + 0x108]               ; 0051a04d
    MOV dword ptr [EBX + 0x410],EAX     ; 0051a053
    PUSH EDI                            ; 0051a059
    MOV AL,byte ptr [ESI]               ; 0051a05a
        ;   Label: LAB_0051a05a
    MOV byte ptr [EDI],AL               ; 0051a05c
    CMP AL,0x0                          ; 0051a05e
    JZ 0x0051a072                       ; 0051a060
        ;   XREF to: 0051a072 (CONDITIONAL_JUMP)  ; LAB_0051a072
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a062
    ADD ESI,0x2                         ; 0051a065
    MOV byte ptr [EDI + 0x1],AL         ; 0051a068
    ADD EDI,0x2                         ; 0051a06b
    CMP AL,0x0                          ; 0051a06e
    JNZ 0x0051a05a                      ; 0051a070
        ;   XREF to: 0051a05a (CONDITIONAL_JUMP)  ; LAB_0051a05a
    POP EDI                             ; 0051a072
        ;   Label: LAB_0051a072
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a073
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a079
    ADD EAX,EDX                         ; 0051a080
    SHL EAX,0x2                         ; 0051a082
    PUSH EAX                            ; 0051a085
    CALL crt_unknown.c_FUN_005b8580     ; 0051a086
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0051a08b
    MOV dword ptr [EBX + 0x414],EAX     ; 0051a08e
    TEST EAX,EAX                        ; 0051a094
    JZ 0x00519fa2                       ; 0051a096
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    XOR EBP,EBP                         ; 0051a09c
    MOV ESI,dword ptr [EBX + 0x410]     ; 0051a09e
    MOV dword ptr [ESP + 0x678],EBP     ; 0051a0a4
    MOV dword ptr [ESP + 0x67c],EBP     ; 0051a0ab
    TEST ESI,ESI                        ; 0051a0b2
    JLE 0x0051a21a                      ; 0051a0b4
        ;   XREF to: 0051a21a (CONDITIONAL_JUMP)  ; LAB_0051a21a
    MOV dword ptr [ESP + 0x688],EBP     ; 0051a0ba
    MOV EAX,dword ptr [ESP + 0x674]     ; 0051a0c1
        ;   Label: LAB_0051a0c1
    PUSH EAX                            ; 0051a0c8
    PUSH 0x50                           ; 0051a0c9
    PUSH 0x1                            ; 0051a0cb
    LEA EAX,[ESP + 0x604]               ; 0051a0cd
    PUSH EAX                            ; 0051a0d4
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a0d5
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a0da
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a0dd
    ADD EAX,dword ptr [ESP + 0x688]     ; 0051a0e3
    LEA EDI,[ESP + 0x5f8]               ; 0051a0ea
    MOV dword ptr [EAX],EBP             ; 0051a0f1
    SUB ECX,ECX                         ; 0051a0f3
    DEC ECX                             ; 0051a0f5
    XOR EAX,EAX                         ; 0051a0f6
    SCASB.REPNE ES:EDI                  ; 0051a0f8
    NOT ECX                             ; 0051a0fa
    DEC ECX                             ; 0051a0fc
    INC ECX                             ; 0051a0fd
    ADD EBP,ECX                         ; 0051a0fe
    CMP EBP,dword ptr [ESP + 0x678]     ; 0051a100
    JLE 0x0051a162                      ; 0051a107
        ;   XREF to: 0051a162 (CONDITIONAL_JUMP)  ; LAB_0051a162
    MOV ESI,dword ptr [ESP + 0x67c]     ; 0051a109
    MOV EAX,dword ptr [EBX + 0x410]     ; 0051a110
    SUB EAX,ESI                         ; 0051a116
    IMUL EAX,EAX,0x30                   ; 0051a118
    LEA EDX,[EAX + EBP*0x1]             ; 0051a11b
    PUSH EDX                            ; 0051a11e
    MOV EAX,dword ptr [EBX + 0x418]     ; 0051a11f
    PUSH EAX                            ; 0051a125
    MOV dword ptr [ESP + 0x680],EDX     ; 0051a126
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0051a12d
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0051a132
    MOV dword ptr [EBX + 0x418],EAX     ; 0051a135
    TEST EAX,EAX                        ; 0051a13b
    JNZ 0x0051a162                      ; 0051a13d
        ;   XREF to: 0051a162 (CONDITIONAL_JUMP)  ; LAB_0051a162
    MOV ECX,0x5e2413                    ; 0051a13f | = "..\\engine\\pod.cpp"
    MOV ESI,0x198                       ; 0051a144
    PUSH 0x5e2425                       ; 0051a149 | = "Out of memory!"
    MOV dword ptr [0x01d046a0],ECX      ; 0051a14e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0051a154 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051a15a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051a15f
    MOV EDI,dword ptr [ESP + 0x688]     ; 0051a162
        ;   Label: LAB_0051a162
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a169
    ADD EAX,EDI                         ; 0051a16f
    MOV EDI,dword ptr [EBX + 0x418]     ; 0051a171
    MOV EDX,dword ptr [EAX]             ; 0051a177
    LEA ESI,[ESP + 0x5f8]               ; 0051a179
    ADD EDI,EDX                         ; 0051a180
    PUSH EDI                            ; 0051a182
    MOV AL,byte ptr [ESI]               ; 0051a183
        ;   Label: LAB_0051a183
    MOV byte ptr [EDI],AL               ; 0051a185
    CMP AL,0x0                          ; 0051a187
    JZ 0x0051a19b                       ; 0051a189
        ;   XREF to: 0051a19b (CONDITIONAL_JUMP)  ; LAB_0051a19b
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a18b
    ADD ESI,0x2                         ; 0051a18e
    MOV byte ptr [EDI + 0x1],AL         ; 0051a191
    ADD EDI,0x2                         ; 0051a194
    CMP AL,0x0                          ; 0051a197
    JNZ 0x0051a183                      ; 0051a199
        ;   XREF to: 0051a183 (CONDITIONAL_JUMP)  ; LAB_0051a183
    POP EDI                             ; 0051a19b
        ;   Label: LAB_0051a19b
    MOV EDX,dword ptr [ESP + 0x688]     ; 0051a19c
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a1a3
    ADD EDX,EAX                         ; 0051a1a9
    MOV EAX,dword ptr [ESP + 0x638]     ; 0051a1ab
    MOV dword ptr [EDX + 0x4],EAX       ; 0051a1b2
    MOV ECX,dword ptr [ESP + 0x688]     ; 0051a1b5
    MOV EDX,dword ptr [EBX + 0x414]     ; 0051a1bc
    ADD EDX,ECX                         ; 0051a1c2
    MOV EAX,dword ptr [ESP + 0x63c]     ; 0051a1c4
    MOV dword ptr [EDX + 0x8],EAX       ; 0051a1cb
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a1ce
    LEA EDX,[ECX + EAX*0x1]             ; 0051a1d4
    MOV EAX,dword ptr [ESP + 0x644]     ; 0051a1d7
    MOV dword ptr [EDX + 0x10],EAX      ; 0051a1de
    MOV EDI,dword ptr [ESP + 0x67c]     ; 0051a1e1
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a1e8
    INC EDI                             ; 0051a1ee
    LEA EDX,[ECX + EAX*0x1]             ; 0051a1ef
    MOV EAX,dword ptr [EBX + 0x104]     ; 0051a1f2
    MOV dword ptr [ESP + 0x67c],EDI     ; 0051a1f8
    MOV dword ptr [EDX + 0xc],EAX       ; 0051a1ff
    LEA ESI,[ECX + 0x14]                ; 0051a202
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a205
    MOV dword ptr [ESP + 0x688],ESI     ; 0051a20b
    CMP EDI,EDX                         ; 0051a212
    JL 0x0051a0c1                       ; 0051a214
        ;   XREF to: 0051a0c1 (CONDITIONAL_JUMP)  ; LAB_0051a0c1
    CMP EBP,dword ptr [ESP + 0x678]     ; 0051a21a
        ;   Label: LAB_0051a21a
    JGE 0x0051a22e                      ; 0051a221
        ;   XREF to: 0051a22e (CONDITIONAL_JUMP)  ; LAB_0051a22e
        ;   Label: LAB_0051a221
    MOV dword ptr [ESP + 0x68c],0x1     ; 0051a223
    MOV EDI,dword ptr [ESP + 0x674]     ; 0051a22e
        ;   Label: LAB_0051a22e
    PUSH EDI                            ; 0051a235
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051a236
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0051a23b
    CMP dword ptr [ESP + 0x68c],0x0     ; 0051a23e
    JZ 0x0051a285                       ; 0051a246
        ;   XREF to: 0051a285 (CONDITIONAL_JUMP)  ; LAB_0051a285
    PUSH EBP                            ; 0051a248
    MOV EDX,dword ptr [EBX + 0x418]     ; 0051a249
    PUSH EDX                            ; 0051a24f
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0051a250
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0051a255
    MOV dword ptr [EBX + 0x418],EAX     ; 0051a258
    TEST EAX,EAX                        ; 0051a25e
    JNZ 0x0051a285                      ; 0051a260
        ;   XREF to: 0051a285 (CONDITIONAL_JUMP)  ; LAB_0051a285
    MOV ESI,0x5e2497                    ; 0051a262 | = "..\\engine\\pod.cpp"
    MOV EDI,0x27b                       ; 0051a267
    PUSH 0x5e24a9                       ; 0051a26c | = "realloc returns NULL shrinking filena..."
    MOV dword ptr [0x01d046a0],ESI      ; 0051a271 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051a277 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051a27d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051a282
    MOV EAX,dword ptr [EBX + 0x410]     ; 0051a285
        ;   Label: LAB_0051a285
    XOR ECX,ECX                         ; 0051a28b
    TEST EAX,EAX                        ; 0051a28d
    JLE 0x0051a2c7                      ; 0051a28f
        ;   XREF to: 0051a2c7 (CONDITIONAL_JUMP)  ; LAB_0051a2c7
    XOR EDX,EDX                         ; 0051a291
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a293
        ;   Label: LAB_0051a293
    ADD EAX,EDX                         ; 0051a299
    MOV ESI,dword ptr [EAX]             ; 0051a29b
    TEST ESI,ESI                        ; 0051a29d
    JL 0x00519fa2                       ; 0051a29f
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    CMP EBP,ESI                         ; 0051a2a5
    JLE 0x00519fa2                      ; 0051a2a7
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    MOV ESI,dword ptr [EBX + 0x418]     ; 0051a2ad
    MOV EDI,dword ptr [EAX]             ; 0051a2b3
    ADD ESI,EDI                         ; 0051a2b5
    MOV dword ptr [EAX],ESI             ; 0051a2b7
    INC ECX                             ; 0051a2b9
    MOV EAX,dword ptr [EBX + 0x410]     ; 0051a2ba
    ADD EDX,0x14                        ; 0051a2c0
    CMP ECX,EAX                         ; 0051a2c3
    JL 0x0051a293                       ; 0051a2c5
        ;   XREF to: 0051a293 (CONDITIONAL_JUMP)  ; LAB_0051a293
    PUSH 0x519ee0                       ; 0051a2c7
        ;   Label: LAB_0051a2c7
    PUSH 0x14                           ; 0051a2cc
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a2ce
    PUSH EDX                            ; 0051a2d4
    MOV ECX,dword ptr [EBX + 0x414]     ; 0051a2d5
    PUSH ECX                            ; 0051a2db
    CALL crt_stdlib.c__qsort_FUN_005b78b8 ; 0051a2dc
        ;   XREF to: 005b78b8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005b78b8()
    MOV EAX,0x1                         ; 0051a2e1
    ADD ESP,0x10                        ; 0051a2e6
    ADD ESP,0x694                       ; 0051a2e9
    POP EBP                             ; 0051a2ef
    POP EDI                             ; 0051a2f0
    POP ESI                             ; 0051a2f1
    POP EBX                             ; 0051a2f2
    RET                                 ; 0051a2f3
    PUSH EBP                            ; 0051a2f4
        ;   Label: LAB_0051a2f4
    PUSH 0x4                            ; 0051a2f5
    PUSH 0x1                            ; 0051a2f7
    LEA EAX,[ESP + 0x67c]               ; 0051a2f9
    PUSH EAX                            ; 0051a300
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a301
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a306
    PUSH 0x0                            ; 0051a309
    PUSH 0x0                            ; 0051a30b
    PUSH EBP                            ; 0051a30d
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051a30e
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051a313
    CMP byte ptr [ESP + 0x670],0x50     ; 0051a316
    JNZ 0x0051a342                      ; 0051a31e
        ;   XREF to: 0051a342 (CONDITIONAL_JUMP)  ; LAB_0051a342
    CMP byte ptr [ESP + 0x671],0x4f     ; 0051a320
    JNZ 0x0051a342                      ; 0051a328
        ;   XREF to: 0051a342 (CONDITIONAL_JUMP)  ; LAB_0051a342
    CMP byte ptr [ESP + 0x672],0x44     ; 0051a32a
    JNZ 0x0051a342                      ; 0051a332
        ;   XREF to: 0051a342 (CONDITIONAL_JUMP)  ; LAB_0051a342
    CMP byte ptr [ESP + 0x673],0x33     ; 0051a334
    JZ 0x0051a4e1                       ; 0051a33c
        ;   XREF to: 0051a4e1 (CONDITIONAL_JUMP)  ; LAB_0051a4e1
    CMP byte ptr [ESP + 0x670],0x50     ; 0051a342
        ;   Label: LAB_0051a342
    JNZ 0x0051a6d4                      ; 0051a34a
        ;   XREF to: 0051a6d4 (CONDITIONAL_JUMP)  ; LAB_0051a6d4
    CMP byte ptr [ESP + 0x671],0x4f     ; 0051a350
    JNZ 0x0051a6d4                      ; 0051a358
        ;   XREF to: 0051a6d4 (CONDITIONAL_JUMP)  ; LAB_0051a6d4
    CMP byte ptr [ESP + 0x672],0x44     ; 0051a35e
    JNZ 0x0051a6d4                      ; 0051a366
        ;   XREF to: 0051a6d4 (CONDITIONAL_JUMP)  ; LAB_0051a6d4
    CMP byte ptr [ESP + 0x673],0x32     ; 0051a36c
    JNZ 0x0051a6d4                      ; 0051a374
        ;   XREF to: 0051a6d4 (CONDITIONAL_JUMP)  ; LAB_0051a6d4
    MOV EBP,dword ptr [ESP + 0x674]     ; 0051a37a
    PUSH EBP                            ; 0051a381
    PUSH 0x60                           ; 0051a382
    PUSH 0x1                            ; 0051a384
    LEA EAX,[ESP + 0x550]               ; 0051a386
    PUSH EAX                            ; 0051a38d
    LEA ESI,[ESP + 0x55c]               ; 0051a38e
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a395
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a39a
    LEA EDI,[EBX + 0x108]               ; 0051a39d
    MOV dword ptr [EBX],0xc8            ; 0051a3a3
    PUSH EDI                            ; 0051a3a9
    MOV AL,byte ptr [ESI]               ; 0051a3aa
        ;   Label: LAB_0051a3aa
    MOV byte ptr [EDI],AL               ; 0051a3ac
    CMP AL,0x0                          ; 0051a3ae
    JZ 0x0051a3c2                       ; 0051a3b0
        ;   XREF to: 0051a3c2 (CONDITIONAL_JUMP)  ; LAB_0051a3c2
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a3b2
    ADD ESI,0x2                         ; 0051a3b5
    MOV byte ptr [EDI + 0x1],AL         ; 0051a3b8
    ADD EDI,0x2                         ; 0051a3bb
    CMP AL,0x0                          ; 0051a3be
    JNZ 0x0051a3aa                      ; 0051a3c0
        ;   XREF to: 0051a3aa (CONDITIONAL_JUMP)  ; LAB_0051a3aa
    POP EDI                             ; 0051a3c2
        ;   Label: LAB_0051a3c2
    MOV EAX,dword ptr [ESP + 0x59c]     ; 0051a3c3
    MOV dword ptr [EBX + 0x410],EAX     ; 0051a3ca
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 0051a3d0
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a3d7
    MOV dword ptr [EBX + 0x41c],EAX     ; 0051a3dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a3e3
    ADD EAX,EDX                         ; 0051a3ea
    SHL EAX,0x2                         ; 0051a3ec
    PUSH EAX                            ; 0051a3ef
    CALL crt_unknown.c_FUN_005b8580     ; 0051a3f0
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0051a3f5
    MOV dword ptr [EBX + 0x414],EAX     ; 0051a3f8
    TEST EAX,EAX                        ; 0051a3fe
    JZ 0x00519fa2                       ; 0051a400
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    PUSH EBP                            ; 0051a406
    PUSH 0x14                           ; 0051a407
    MOV ECX,dword ptr [EBX + 0x410]     ; 0051a409
    PUSH ECX                            ; 0051a40f
    PUSH EAX                            ; 0051a410
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a411
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a416
    MOV EDI,dword ptr [EBX + 0x410]     ; 0051a419
    XOR EAX,EAX                         ; 0051a41f
    TEST EDI,EDI                        ; 0051a421
    JLE 0x0051a430                      ; 0051a423
        ;   XREF to: 0051a430 (CONDITIONAL_JUMP)  ; LAB_0051a430
    INC EAX                             ; 0051a425
        ;   Label: LAB_0051a425
    CMP EAX,dword ptr [EBX + 0x410]     ; 0051a426
    JL 0x0051a425                       ; 0051a42c
        ;   XREF to: 0051a425 (CONDITIONAL_JUMP)  ; LAB_0051a425
    MOV EAX,EAX                         ; 0051a42e
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a430
        ;   Label: LAB_0051a430
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a436
    MOV EBP,dword ptr [EAX + 0x8]       ; 0051a43c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a43f
    ADD EAX,EDX                         ; 0051a446
    SUB EBP,0x60                        ; 0051a448
    SHL EAX,0x2                         ; 0051a44b
    SUB EBP,EAX                         ; 0051a44e
    CMP EBP,EDX                         ; 0051a450
    JL 0x00519fa2                       ; 0051a452
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    MOV EAX,EDX                         ; 0051a458
    SHL EAX,0x8                         ; 0051a45a
    CMP EBP,EAX                         ; 0051a45d
    JG 0x00519fa2                       ; 0051a45f
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    PUSH EBP                            ; 0051a465
    CALL crt_unknown.c_FUN_005b8580     ; 0051a466
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0051a46b
    MOV dword ptr [EBX + 0x418],EAX     ; 0051a46e
    TEST EAX,EAX                        ; 0051a474
    JNZ 0x0051a49b                      ; 0051a476
        ;   XREF to: 0051a49b (CONDITIONAL_JUMP)  ; LAB_0051a49b
    MOV ECX,0x5e2455                    ; 0051a478 | = "..\\engine\\pod.cpp"
    MOV ESI,0x228                       ; 0051a47d
    PUSH 0x5e2467                       ; 0051a482 | = "Out of memory!"
    MOV dword ptr [0x01d046a0],ECX      ; 0051a487 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0051a48d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051a493
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051a498
    MOV EDI,dword ptr [ESP + 0x674]     ; 0051a49b
        ;   Label: LAB_0051a49b
    PUSH EDI                            ; 0051a4a2
    PUSH 0x1                            ; 0051a4a3
    PUSH EBP                            ; 0051a4a5
    MOV EAX,dword ptr [EBX + 0x418]     ; 0051a4a6
    PUSH EAX                            ; 0051a4ac
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a4ad
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a4b2
    DEC EDX                             ; 0051a4b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a4b9
    ADD EAX,EDX                         ; 0051a4c0
    SHL EAX,0x2                         ; 0051a4c2
    MOV EDX,dword ptr [EBX + 0x414]     ; 0051a4c5
    ADD EDX,EAX                         ; 0051a4cb
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051a4cd
    ADD EAX,dword ptr [EDX + 0x4]       ; 0051a4d0
    ADD ESP,0x10                        ; 0051a4d3
    MOV dword ptr [EBX + 0x420],EAX     ; 0051a4d6
    JMP 0x0051a22e                      ; 0051a4dc
        ;   XREF to: 0051a22e (UNCONDITIONAL_JUMP)  ; LAB_0051a22e
    PUSH EBP                            ; 0051a4e1
        ;   Label: LAB_0051a4e1
    PUSH 0x120                          ; 0051a4e2
    PUSH 0x1                            ; 0051a4e7
    LEA EAX,[ESP + 0x220]               ; 0051a4e9
    PUSH EAX                            ; 0051a4f0
    LEA ESI,[ESP + 0x22c]               ; 0051a4f1
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a4f8
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a4fd
    LEA EDI,[EBX + 0x108]               ; 0051a500
    MOV dword ptr [EBX],0x12c           ; 0051a506
    PUSH EDI                            ; 0051a50c
    MOV AL,byte ptr [ESI]               ; 0051a50d
        ;   Label: LAB_0051a50d
    MOV byte ptr [EDI],AL               ; 0051a50f
    CMP AL,0x0                          ; 0051a511
    JZ 0x0051a525                       ; 0051a513
        ;   XREF to: 0051a525 (CONDITIONAL_JUMP)  ; LAB_0051a525
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a515
    ADD ESI,0x2                         ; 0051a518
    MOV byte ptr [EDI + 0x1],AL         ; 0051a51b
    ADD EDI,0x2                         ; 0051a51e
    CMP AL,0x0                          ; 0051a521
    JNZ 0x0051a50d                      ; 0051a523
        ;   XREF to: 0051a50d (CONDITIONAL_JUMP)  ; LAB_0051a50d
    POP EDI                             ; 0051a525
        ;   Label: LAB_0051a525
    LEA ESI,[ESP + 0x27c]               ; 0051a526
    LEA EDI,[EBX + 0x208]               ; 0051a52d
    PUSH EDI                            ; 0051a533
    MOV AL,byte ptr [ESI]               ; 0051a534
        ;   Label: LAB_0051a534
    MOV byte ptr [EDI],AL               ; 0051a536
    CMP AL,0x0                          ; 0051a538
    JZ 0x0051a54c                       ; 0051a53a
        ;   XREF to: 0051a54c (CONDITIONAL_JUMP)  ; LAB_0051a54c
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a53c
    ADD ESI,0x2                         ; 0051a53f
    MOV byte ptr [EDI + 0x1],AL         ; 0051a542
    ADD EDI,0x2                         ; 0051a545
    CMP AL,0x0                          ; 0051a548
    JNZ 0x0051a534                      ; 0051a54a
        ;   XREF to: 0051a534 (CONDITIONAL_JUMP)  ; LAB_0051a534
    POP EDI                             ; 0051a54c
        ;   Label: LAB_0051a54c
    LEA ESI,[ESP + 0x2cc]               ; 0051a54d
    LEA EDI,[EBX + 0x308]               ; 0051a554
    PUSH EDI                            ; 0051a55a
    MOV AL,byte ptr [ESI]               ; 0051a55b
        ;   Label: LAB_0051a55b
    MOV byte ptr [EDI],AL               ; 0051a55d
    CMP AL,0x0                          ; 0051a55f
    JZ 0x0051a573                       ; 0051a561
        ;   XREF to: 0051a573 (CONDITIONAL_JUMP)  ; LAB_0051a573
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a563
    ADD ESI,0x2                         ; 0051a566
    MOV byte ptr [EDI + 0x1],AL         ; 0051a569
    ADD EDI,0x2                         ; 0051a56c
    CMP AL,0x0                          ; 0051a56f
    JNZ 0x0051a55b                      ; 0051a571
        ;   XREF to: 0051a55b (CONDITIONAL_JUMP)  ; LAB_0051a55b
    POP EDI                             ; 0051a573
        ;   Label: LAB_0051a573
    MOV EAX,dword ptr [ESP + 0x26c]     ; 0051a574
    MOV dword ptr [EBX + 0x410],EAX     ; 0051a57b
    MOV EAX,dword ptr [ESP + 0x270]     ; 0051a581
    MOV dword ptr [EBX + 0x41c],EAX     ; 0051a588
    MOV EAX,dword ptr [ESP + 0x328]     ; 0051a58e
    MOV dword ptr [EBX + 0x424],EAX     ; 0051a595
    MOV EAX,dword ptr [ESP + 0x278]     ; 0051a59b
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a5a2
    MOV dword ptr [EBX + 0x408],EAX     ; 0051a5a8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a5ae
    ADD EAX,EDX                         ; 0051a5b5
    SHL EAX,0x2                         ; 0051a5b7
    PUSH EAX                            ; 0051a5ba
    CALL crt_unknown.c_FUN_005b8580     ; 0051a5bb
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0051a5c0
    MOV dword ptr [EBX + 0x414],EAX     ; 0051a5c3
    TEST EAX,EAX                        ; 0051a5c9
    JZ 0x00519fa2                       ; 0051a5cb
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    PUSH 0x0                            ; 0051a5d1
    MOV EDX,dword ptr [ESP + 0x320]     ; 0051a5d3
    PUSH EDX                            ; 0051a5da
    PUSH EBP                            ; 0051a5db
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051a5dc
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051a5e1
    PUSH EBP                            ; 0051a5e4
    PUSH 0x14                           ; 0051a5e5
    MOV ECX,dword ptr [EBX + 0x410]     ; 0051a5e7
    PUSH ECX                            ; 0051a5ed
    MOV ESI,dword ptr [EBX + 0x414]     ; 0051a5ee
    PUSH ESI                            ; 0051a5f4
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a5f5
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    MOV DH,byte ptr [EBP + 0xc]         ; 0051a5fa
    ADD ESP,0x10                        ; 0051a5fd
    TEST DH,0x20                        ; 0051a600
    JNZ 0x00519fa2                      ; 0051a603
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    MOV EDI,dword ptr [EBX + 0x410]     ; 0051a609
    XOR EAX,EAX                         ; 0051a60f
    TEST EDI,EDI                        ; 0051a611
    JLE 0x0051a620                      ; 0051a613
        ;   XREF to: 0051a620 (CONDITIONAL_JUMP)  ; LAB_0051a620
    INC EAX                             ; 0051a615
        ;   Label: LAB_0051a615
    CMP EAX,dword ptr [EBX + 0x410]     ; 0051a616
    JL 0x0051a615                       ; 0051a61c
        ;   XREF to: 0051a615 (CONDITIONAL_JUMP)  ; LAB_0051a615
    MOV EAX,EAX                         ; 0051a61e
    MOV EBP,dword ptr [ESP + 0x324]     ; 0051a620
        ;   Label: LAB_0051a620
    MOV EDI,dword ptr [EBX + 0x410]     ; 0051a627
    CMP EBP,EDI                         ; 0051a62d
    JL 0x00519fa2                       ; 0051a62f
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    MOV EAX,EDI                         ; 0051a635
    SHL EAX,0x8                         ; 0051a637
    CMP EAX,EBP                         ; 0051a63a
    JL 0x00519fa2                       ; 0051a63c
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    PUSH EBP                            ; 0051a642
    CALL crt_unknown.c_FUN_005b8580     ; 0051a643
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0051a648
    MOV dword ptr [EBX + 0x418],EAX     ; 0051a64b
    TEST EAX,EAX                        ; 0051a651
    JNZ 0x0051a677                      ; 0051a653
        ;   XREF to: 0051a677 (CONDITIONAL_JUMP)  ; LAB_0051a677
    MOV EDI,0x5e2434                    ; 0051a655 | = "..\\engine\\pod.cpp"
    MOV EAX,0x1ed                       ; 0051a65a
    PUSH 0x5e2446                       ; 0051a65f | = "Out of memory!"
    MOV dword ptr [0x01d046a0],EDI      ; 0051a664 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051a66a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051a66f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051a674
    MOV EDX,dword ptr [ESP + 0x674]     ; 0051a677
        ;   Label: LAB_0051a677
    PUSH EDX                            ; 0051a67e
    PUSH 0x1                            ; 0051a67f
    PUSH EBP                            ; 0051a681
    MOV ECX,dword ptr [EBX + 0x418]     ; 0051a682
    PUSH ECX                            ; 0051a688
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a689
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a68e
    MOV EAX,dword ptr [ESP + 0x674]     ; 0051a691
    TEST byte ptr [EAX + 0xc],0x20      ; 0051a698
    JNZ 0x00519fa2                      ; 0051a69c
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    PUSH EAX                            ; 0051a6a2
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 0051a6a3
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    MOV EDX,dword ptr [EBX + 0x424]     ; 0051a6a8
    MOV dword ptr [EBX + 0x428],EAX     ; 0051a6ae
    MOV EAX,EDX                         ; 0051a6b4
    SHL EAX,0x5                         ; 0051a6b6
    ADD EDX,EAX                         ; 0051a6b9
    SHL EDX,0x3                         ; 0051a6bb
    MOV EAX,dword ptr [EBX + 0x428]     ; 0051a6be
    ADD EAX,EDX                         ; 0051a6c4
    ADD ESP,0x4                         ; 0051a6c6
    MOV dword ptr [EBX + 0x420],EAX     ; 0051a6c9
    JMP 0x0051a22e                      ; 0051a6cf
        ;   XREF to: 0051a22e (UNCONDITIONAL_JUMP)  ; LAB_0051a22e
    MOV EDI,dword ptr [ESP + 0x674]     ; 0051a6d4
        ;   Label: LAB_0051a6d4
    PUSH EDI                            ; 0051a6db
    PUSH 0x54                           ; 0051a6dc
    PUSH 0x1                            ; 0051a6de
    LEA EAX,[ESP + 0x5b0]               ; 0051a6e0
    PUSH EAX                            ; 0051a6e7
    MOV dword ptr [EBX],0x1             ; 0051a6e8
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a6ee
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a6f3
    MOV EBP,dword ptr [ESP + 0x5a4]     ; 0051a6f6
    CMP EBP,0x1                         ; 0051a6fd
    JL 0x00519fa2                       ; 0051a700
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    CMP EBP,0x1869f                     ; 0051a706
    JG 0x00519fa2                       ; 0051a70c
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    LEA ESI,[ESP + 0x5a8]               ; 0051a712
    LEA EDI,[EBX + 0x108]               ; 0051a719
    MOV dword ptr [EBX + 0x410],EBP     ; 0051a71f
    PUSH EDI                            ; 0051a725
    MOV AL,byte ptr [ESI]               ; 0051a726
        ;   Label: LAB_0051a726
    MOV byte ptr [EDI],AL               ; 0051a728
    CMP AL,0x0                          ; 0051a72a
    JZ 0x0051a73e                       ; 0051a72c
        ;   XREF to: 0051a73e (CONDITIONAL_JUMP)  ; LAB_0051a73e
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a72e
    ADD ESI,0x2                         ; 0051a731
    MOV byte ptr [EDI + 0x1],AL         ; 0051a734
    ADD EDI,0x2                         ; 0051a737
    CMP AL,0x0                          ; 0051a73a
    JNZ 0x0051a726                      ; 0051a73c
        ;   XREF to: 0051a726 (CONDITIONAL_JUMP)  ; LAB_0051a726
    POP EDI                             ; 0051a73e
        ;   Label: LAB_0051a73e
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051a73f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a745
    ADD EAX,EDX                         ; 0051a74c
    SHL EAX,0x2                         ; 0051a74e
    PUSH EAX                            ; 0051a751
    CALL crt_unknown.c_FUN_005b8580     ; 0051a752
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0051a757
    MOV dword ptr [EBX + 0x414],EAX     ; 0051a75a
    TEST EAX,EAX                        ; 0051a760
    JZ 0x00519fa2                       ; 0051a762
        ;   XREF to: 00519fa2 (CONDITIONAL_JUMP)  ; LAB_00519fa2
    XOR EBP,EBP                         ; 0051a768
    MOV EDI,dword ptr [EBX + 0x410]     ; 0051a76a
    MOV dword ptr [ESP + 0x690],EBP     ; 0051a770
    MOV dword ptr [ESP + 0x684],EBP     ; 0051a777
    TEST EDI,EDI                        ; 0051a77e
    JLE 0x0051a8dd                      ; 0051a780
        ;   XREF to: 0051a8dd (CONDITIONAL_JUMP)  ; LAB_0051a8dd
    MOV dword ptr [ESP + 0x680],EBP     ; 0051a786
    MOV EDX,dword ptr [ESP + 0x674]     ; 0051a78d
        ;   Label: LAB_0051a78d
    PUSH EDX                            ; 0051a794
    PUSH 0x28                           ; 0051a795
    PUSH 0x1                            ; 0051a797
    LEA EAX,[ESP + 0x654]               ; 0051a799
    PUSH EAX                            ; 0051a7a0
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051a7a1
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051a7a6
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a7a9
    ADD EAX,dword ptr [ESP + 0x680]     ; 0051a7af
    LEA EDI,[ESP + 0x648]               ; 0051a7b6
    MOV dword ptr [EAX],EBP             ; 0051a7bd
    SUB ECX,ECX                         ; 0051a7bf
    DEC ECX                             ; 0051a7c1
    XOR EAX,EAX                         ; 0051a7c2
    SCASB.REPNE ES:EDI                  ; 0051a7c4
    NOT ECX                             ; 0051a7c6
    DEC ECX                             ; 0051a7c8
    INC ECX                             ; 0051a7c9
    MOV ESI,dword ptr [ESP + 0x690]     ; 0051a7ca
    ADD EBP,ECX                         ; 0051a7d1
    CMP EBP,ESI                         ; 0051a7d3
    JLE 0x0051a830                      ; 0051a7d5
        ;   XREF to: 0051a830 (CONDITIONAL_JUMP)  ; LAB_0051a830
    MOV EDI,dword ptr [ESP + 0x684]     ; 0051a7d7
    MOV EAX,dword ptr [EBX + 0x410]     ; 0051a7de
    SUB EAX,EDI                         ; 0051a7e4
    IMUL EAX,EAX,0x30                   ; 0051a7e6
    LEA EDX,[EAX + EBP*0x1]             ; 0051a7e9
    PUSH EDX                            ; 0051a7ec
    MOV dword ptr [ESP + 0x694],EDX     ; 0051a7ed
    MOV EDX,dword ptr [EBX + 0x418]     ; 0051a7f4
    PUSH EDX                            ; 0051a7fa
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0051a7fb
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0051a800
    MOV dword ptr [EBX + 0x418],EAX     ; 0051a803
    TEST EAX,EAX                        ; 0051a809
    JNZ 0x0051a830                      ; 0051a80b
        ;   XREF to: 0051a830 (CONDITIONAL_JUMP)  ; LAB_0051a830
    MOV ESI,0x5e2476                    ; 0051a80d | = "..\\engine\\pod.cpp"
    MOV EDI,0x260                       ; 0051a812
    PUSH 0x5e2488                       ; 0051a817 | = "Out of memory!"
    MOV dword ptr [0x01d046a0],ESI      ; 0051a81c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051a822 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051a828
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051a82d
    MOV EDI,dword ptr [ESP + 0x680]     ; 0051a830
        ;   Label: LAB_0051a830
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a837
    ADD EAX,EDI                         ; 0051a83d
    MOV EDI,dword ptr [EBX + 0x418]     ; 0051a83f
    MOV EDX,dword ptr [EAX]             ; 0051a845
    LEA ESI,[ESP + 0x648]               ; 0051a847
    ADD EDI,EDX                         ; 0051a84e
    MOV ECX,dword ptr [ESP + 0x680]     ; 0051a850
    PUSH EDI                            ; 0051a857
    MOV AL,byte ptr [ESI]               ; 0051a858
        ;   Label: LAB_0051a858
    MOV byte ptr [EDI],AL               ; 0051a85a
    CMP AL,0x0                          ; 0051a85c
    JZ 0x0051a870                       ; 0051a85e
        ;   XREF to: 0051a870 (CONDITIONAL_JUMP)  ; LAB_0051a870
    MOV AL,byte ptr [ESI + 0x1]         ; 0051a860
    ADD ESI,0x2                         ; 0051a863
    MOV byte ptr [EDI + 0x1],AL         ; 0051a866
    ADD EDI,0x2                         ; 0051a869
    CMP AL,0x0                          ; 0051a86c
    JNZ 0x0051a858                      ; 0051a86e
        ;   XREF to: 0051a858 (CONDITIONAL_JUMP)  ; LAB_0051a858
    POP EDI                             ; 0051a870
        ;   Label: LAB_0051a870
    MOV EDX,dword ptr [EBX + 0x414]     ; 0051a871
    ADD EDX,ECX                         ; 0051a877
    MOV EAX,dword ptr [ESP + 0x668]     ; 0051a879
    MOV dword ptr [EDX + 0x4],EAX       ; 0051a880
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a883
    LEA EDX,[ECX + EAX*0x1]             ; 0051a889
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0051a88c
    MOV dword ptr [EDX + 0x8],EAX       ; 0051a893
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051a896
    ADD EAX,ECX                         ; 0051a89c
    MOV dword ptr [EAX + 0x10],0x0      ; 0051a89e
    MOV EDX,dword ptr [EBX + 0x414]     ; 0051a8a5
    ADD EDX,ECX                         ; 0051a8ab
    MOV EAX,dword ptr [EBX + 0x104]     ; 0051a8ad
    MOV dword ptr [EDX + 0xc],EAX       ; 0051a8b3
    LEA EAX,[ECX + 0x14]                ; 0051a8b6
    MOV EDX,dword ptr [ESP + 0x684]     ; 0051a8b9
    MOV dword ptr [ESP + 0x680],EAX     ; 0051a8c0
    INC EDX                             ; 0051a8c7
    MOV ECX,dword ptr [EBX + 0x410]     ; 0051a8c8
    MOV dword ptr [ESP + 0x684],EDX     ; 0051a8ce
    CMP EDX,ECX                         ; 0051a8d5
    JL 0x0051a78d                       ; 0051a8d7
        ;   XREF to: 0051a78d (CONDITIONAL_JUMP)  ; LAB_0051a78d
    CMP EBP,dword ptr [ESP + 0x690]     ; 0051a8dd
        ;   Label: LAB_0051a8dd
    JMP 0x0051a221                      ; 0051a8e4
        ;   XREF to: 0051a221 (UNCONDITIONAL_JUMP)  ; LAB_0051a221

