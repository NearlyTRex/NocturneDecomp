; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597d6e(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8337c
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_dosio.cpp_makePath_FUN_004795b0
;   engine_dosio.cpp_splitPath_FUN_00479580
;   engine_texture.cpp_FUN_00597a20
;   engine_texture.cpp_FUN_00597ac0
;   support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_CInStreamFile_read_FUN_005a0c10
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00597d6e
        ;   Label: engine_texture.cpp_FUN_00597d6e
    PUSH ESI                            ; 00597d70
    PUSH EDI                            ; 00597d71
    PUSH EBP                            ; 00597d72
    SUB ESP,0x358                       ; 00597d73
    MOV ESI,dword ptr [ESP + 0x36c]     ; 00597d79
    TEST ESI,ESI                        ; 00597d80
    JZ 0x0059820d                       ; 00597d82
        ;   XREF to: 0059820d (CONDITIONAL_JUMP)  ; LAB_0059820d
    MOV EDX,dword ptr [0x02c8337c]      ; 00597d88 | DAT_02c8337c
    TEST EDX,EDX                        ; 00597d8e
    JNZ 0x00598227                      ; 00597d90
        ;   XREF to: 00598227 (CONDITIONAL_JUMP)  ; LAB_00598227
    PUSH ESI                            ; 00597d96
    MOV dword ptr [ESP + 0x350],EDX     ; 00597d97
    PUSH 0x5f7c88                       ; 00597d9e
    MOV dword ptr [ESP + 0x344],EDX     ; 00597da3
    MOV dword ptr [ESP + 0x358],EDX     ; 00597daa
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 00597db1
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00597db6
    CMP EAX,0x1000                      ; 00597db9
    JNZ 0x00598265                      ; 00597dbe
        ;   XREF to: 00598265 (CONDITIONAL_JUMP)  ; LAB_00598265
    MOV dword ptr [ESP + 0x350],0x40    ; 00597dc4
    MOV EAX,dword ptr [ESP + 0x350]     ; 00597dcf
        ;   Label: LAB_00597dcf
    IMUL EAX,EAX                        ; 00597dd6
    PUSH EAX                            ; 00597dd9
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00597dda
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00597ddf
    MOV dword ptr [ESP + 0x338],EAX     ; 00597de2
    TEST EAX,EAX                        ; 00597de9
    JNZ 0x00597e0f                      ; 00597deb
        ;   XREF to: 00597e0f (CONDITIONAL_JUMP)  ; LAB_00597e0f
    MOV EBP,0x5f7cdf                    ; 00597ded
    MOV EAX,0x577                       ; 00597df2
    PUSH 0x5f7cf5                       ; 00597df7
    MOV dword ptr [0x01d1d400],EBP      ; 00597dfc | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00597e02 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00597e07
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00597e0c
    PUSH 0x300                          ; 00597e0f
        ;   Label: LAB_00597e0f
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00597e14
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00597e19
    MOV dword ptr [ESP + 0x32c],EAX     ; 00597e1c
    TEST EAX,EAX                        ; 00597e23
    JNZ 0x00597e4a                      ; 00597e25
        ;   XREF to: 00597e4a (CONDITIONAL_JUMP)  ; LAB_00597e4a
    MOV EDX,0x5f7d1c                    ; 00597e27
    MOV ECX,0x57b                       ; 00597e2c
    PUSH 0x5f7d32                       ; 00597e31
    MOV dword ptr [0x01d1d400],EDX      ; 00597e36 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00597e3c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00597e42
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00597e47
    PUSH EBX                            ; 00597e4a
        ;   Label: LAB_00597e4a
    LEA EAX,[ESP + 0x304]               ; 00597e4b
    PUSH EAX                            ; 00597e52
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 00597e53
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00597e58
    PUSH 0x1                            ; 00597e5b
    PUSH ESI                            ; 00597e5d
    PUSH 0x5f7d59                       ; 00597e5e
    LEA EAX,[ESP + 0x310]               ; 00597e63
    PUSH EAX                            ; 00597e6a
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00597e6b
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00597e70
    TEST EAX,EAX                        ; 00597e73
    JZ 0x005982bb                       ; 00597e75
        ;   XREF to: 005982bb (CONDITIONAL_JUMP)  ; LAB_005982bb
    MOV EAX,dword ptr [ESP + 0x354]     ; 00597e7b
        ;   Label: LAB_00597e7b
    IMUL EAX,EAX                        ; 00597e82
    PUSH EAX                            ; 00597e85
    MOV EAX,dword ptr [ESP + 0x340]     ; 00597e86
    PUSH EAX                            ; 00597e8d
    LEA EAX,[ESP + 0x30c]               ; 00597e8e
    PUSH EAX                            ; 00597e95
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00597e96
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00597e9b
    LEA EAX,[ESP + 0x304]               ; 00597e9e
    PUSH EAX                            ; 00597ea5
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00597ea6
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00597eab
    PUSH 0x0                            ; 00597eae
    LEA EAX,[ESP + 0x8]                 ; 00597eb0
    PUSH EAX                            ; 00597eb4
    PUSH 0x0                            ; 00597eb5
    PUSH 0x0                            ; 00597eb7
    PUSH ESI                            ; 00597eb9
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 00597eba
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00597ebf
    PUSH 0x5f7dca                       ; 00597ec2
    LEA EAX,[ESP + 0x8]                 ; 00597ec7
    PUSH EAX                            ; 00597ecb
    PUSH 0x0                            ; 00597ecc
    PUSH 0x0                            ; 00597ece
    LEA EAX,[ESP + 0x114]               ; 00597ed0
    PUSH EAX                            ; 00597ed7
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 00597ed8
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00597edd
    PUSH 0x5f7dcf                       ; 00597ee0
    LEA EAX,[ESP + 0x8]                 ; 00597ee5
    PUSH EAX                            ; 00597ee9
    PUSH 0x0                            ; 00597eea
    PUSH 0x0                            ; 00597eec
    LEA EAX,[ESP + 0x214]               ; 00597eee
    PUSH EAX                            ; 00597ef5
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 00597ef6
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00597efb
    PUSH 0x1                            ; 00597efe
    LEA EAX,[ESP + 0x108]               ; 00597f00
    PUSH EAX                            ; 00597f07
    PUSH 0x5f7dd4                       ; 00597f08
    LEA EAX,[ESP + 0x310]               ; 00597f0d
    PUSH EAX                            ; 00597f14
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00597f15
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00597f1a
    TEST EAX,EAX                        ; 00597f1d
    JZ 0x005982ee                       ; 00597f1f
        ;   XREF to: 005982ee (CONDITIONAL_JUMP)  ; LAB_005982ee
    PUSH 0x300                          ; 00597f25
        ;   Label: LAB_00597f25
    MOV EBX,dword ptr [ESP + 0x334]     ; 00597f2a
    PUSH EBX                            ; 00597f31
    LEA EAX,[ESP + 0x30c]               ; 00597f32
    PUSH EAX                            ; 00597f39
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00597f3a
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00597f3f
    LEA EAX,[ESP + 0x304]               ; 00597f42
    PUSH EAX                            ; 00597f49
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00597f4a
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00597f4f
    PUSH 0x1                            ; 00597f52
    LEA EAX,[ESP + 0x208]               ; 00597f54
    PUSH EAX                            ; 00597f5b
    PUSH 0x5f7e15                       ; 00597f5c
    LEA EAX,[ESP + 0x310]               ; 00597f61
    PUSH EAX                            ; 00597f68
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 00597f69
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 00597f6e
    TEST EAX,EAX                        ; 00597f71
    JZ 0x00597fe9                       ; 00597f73
        ;   XREF to: 00597fe9 (CONDITIONAL_JUMP)  ; LAB_00597fe9
    MOV EAX,dword ptr [ESP + 0x354]     ; 00597f75
    IMUL EAX,EAX                        ; 00597f7c
    PUSH EAX                            ; 00597f7f
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00597f80
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00597f85
    MOV dword ptr [ESP + 0x350],EAX     ; 00597f88
    TEST EAX,EAX                        ; 00597f8f
    JNZ 0x00597fb6                      ; 00597f91
        ;   XREF to: 00597fb6 (CONDITIONAL_JUMP)  ; LAB_00597fb6
    MOV EDI,0x5f7e19                    ; 00597f93
    MOV EBP,0x595                       ; 00597f98
    PUSH 0x5f7e2f                       ; 00597f9d
    MOV dword ptr [0x01d1d400],EDI      ; 00597fa2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00597fa8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00597fae
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00597fb3
    MOV EAX,dword ptr [ESP + 0x354]     ; 00597fb6
        ;   Label: LAB_00597fb6
    IMUL EAX,EAX                        ; 00597fbd
    PUSH EAX                            ; 00597fc0
    MOV ECX,dword ptr [ESP + 0x354]     ; 00597fc1
    PUSH ECX                            ; 00597fc8
    LEA EAX,[ESP + 0x30c]               ; 00597fc9
    PUSH EAX                            ; 00597fd0
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 00597fd1
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00597fd6
    LEA EAX,[ESP + 0x304]               ; 00597fd9
    PUSH EAX                            ; 00597fe0
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00597fe1
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00597fe6
    MOV EAX,dword ptr [ESP + 0x354]     ; 00597fe9
        ;   Label: LAB_00597fe9
    IMUL EAX,EAX                        ; 00597ff0
    SHL EAX,0x2                         ; 00597ff3
    PUSH EAX                            ; 00597ff6
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00597ff7
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00597ffc
    MOV dword ptr [ESP + 0x338],EAX     ; 00597fff
    TEST EAX,EAX                        ; 00598006
    JNZ 0x0059802d                      ; 00598008
        ;   XREF to: 0059802d (CONDITIONAL_JUMP)  ; LAB_0059802d
    MOV ESI,0x5f7e56                    ; 0059800a
    MOV EDI,0x5d4                       ; 0059800f
    PUSH 0x5f7e6c                       ; 00598014
    MOV dword ptr [0x01d1d400],ESI      ; 00598019 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0059801f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00598025
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059802a
    CMP dword ptr [ESP + 0x350],0x0     ; 0059802d
        ;   Label: LAB_0059802d
    JZ 0x0059807b                       ; 00598035
        ;   XREF to: 0059807b (CONDITIONAL_JUMP)  ; LAB_0059807b
    MOV EAX,dword ptr [ESP + 0x354]     ; 00598037
    IMUL EAX,EAX                        ; 0059803e
    SHL EAX,0x2                         ; 00598041
    PUSH EAX                            ; 00598044
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00598045
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0059804a
    MOV dword ptr [ESP + 0x340],EAX     ; 0059804d
    TEST EAX,EAX                        ; 00598054
    JNZ 0x0059807b                      ; 00598056
        ;   XREF to: 0059807b (CONDITIONAL_JUMP)  ; LAB_0059807b
    MOV ECX,0x5f7e93                    ; 00598058
    MOV EBX,0x5da                       ; 0059805d
    PUSH 0x5f7ea9                       ; 00598062
    MOV dword ptr [0x01d1d400],ECX      ; 00598067 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0059806d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00598073
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00598078
    XOR ESI,ESI                         ; 0059807b
        ;   Label: LAB_0059807b
    MOV EDI,dword ptr [ESP + 0x354]     ; 0059807d
    MOV dword ptr [ESP + 0x348],ESI     ; 00598084
    TEST EDI,EDI                        ; 0059808b
    JLE 0x0059819a                      ; 0059808d
        ;   XREF to: 0059819a (CONDITIONAL_JUMP)  ; LAB_0059819a
    LEA EAX,[EDI + EDI*0x1]             ; 00598093
    MOV dword ptr [ESP + 0x344],EAX     ; 00598096
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059809d
    MOV dword ptr [ESP + 0x334],EAX     ; 005980a4
    IMUL EAX,EDI,0x0                    ; 005980ab
    MOV dword ptr [ESP + 0x34c],EAX     ; 005980ae
    MOV EAX,dword ptr [ESP + 0x348]     ; 005980b5
        ;   Label: LAB_005980b5
    IMUL EAX,dword ptr [ESP + 0x354]    ; 005980bc
    MOV EDX,dword ptr [ESP + 0x33c]     ; 005980c4
    MOV ESI,dword ptr [ESP + 0x338]     ; 005980cb
    MOV ECX,dword ptr [ESP + 0x34c]     ; 005980d2
    MOV EBX,dword ptr [ESP + 0x34c]     ; 005980d9
    ADD ESI,ECX                         ; 005980e0
    MOV ECX,dword ptr [ESP + 0x340]     ; 005980e2
    MOV EBP,dword ptr [ESP + 0x350]     ; 005980e9
    ADD ECX,EBX                         ; 005980f0
    ADD EDX,EAX                         ; 005980f2
    XOR EDI,EDI                         ; 005980f4
    ADD EAX,EBP                         ; 005980f6
    MOV EBP,dword ptr [ESP + 0x354]     ; 005980f8
    MOV dword ptr [ESP + 0x358],EDI     ; 005980ff
    TEST EBP,EBP                        ; 00598106
    JLE 0x00598165                      ; 00598108
        ;   XREF to: 00598165 (CONDITIONAL_JUMP)  ; LAB_00598165
    MOV EBP,dword ptr [ESP + 0x344]     ; 0059810a
    MOV EDI,dword ptr [ESP + 0x344]     ; 00598111
    ADD EBP,ECX                         ; 00598118
    ADD EDI,ESI                         ; 0059811a
    MOV BL,byte ptr [EDX]               ; 0059811c
        ;   Label: LAB_0059811c
    MOV byte ptr [ESI],BL               ; 0059811e
    MOV byte ptr [ESI + 0x1],BL         ; 00598120
    MOV byte ptr [EDI],BL               ; 00598123
    MOV byte ptr [EDI + 0x1],BL         ; 00598125
    CMP dword ptr [ESP + 0x350],0x0     ; 00598128
    JZ 0x0059813f                       ; 00598130
        ;   XREF to: 0059813f (CONDITIONAL_JUMP)  ; LAB_0059813f
    MOV BL,byte ptr [EAX]               ; 00598132
    MOV byte ptr [ECX],BL               ; 00598134
    MOV byte ptr [ECX + 0x1],BL         ; 00598136
    MOV byte ptr [EBP],BL               ; 00598139
    MOV byte ptr [EBP + 0x1],BL         ; 0059813c
    MOV EBX,dword ptr [ESP + 0x358]     ; 0059813f
        ;   Label: LAB_0059813f
    INC EDX                             ; 00598146
    INC EAX                             ; 00598147
    ADD EDI,0x2                         ; 00598148
    ADD ESI,0x2                         ; 0059814b
    ADD EBP,0x2                         ; 0059814e
    INC EBX                             ; 00598151
    ADD ECX,0x2                         ; 00598152
    MOV dword ptr [ESP + 0x358],EBX     ; 00598155
    CMP EBX,dword ptr [ESP + 0x354]     ; 0059815c
    JL 0x0059811c                       ; 00598163
        ;   XREF to: 0059811c (CONDITIONAL_JUMP)  ; LAB_0059811c
    MOV EAX,dword ptr [ESP + 0x334]     ; 00598165
        ;   Label: LAB_00598165
    MOV EDX,dword ptr [ESP + 0x34c]     ; 0059816c
    MOV ECX,dword ptr [ESP + 0x348]     ; 00598173
    MOV EBX,dword ptr [ESP + 0x354]     ; 0059817a
    ADD EDX,EAX                         ; 00598181
    INC ECX                             ; 00598183
    MOV dword ptr [ESP + 0x34c],EDX     ; 00598184
    MOV dword ptr [ESP + 0x348],ECX     ; 0059818b
    CMP ECX,EBX                         ; 00598192
    JL 0x005980b5                       ; 00598194
        ;   XREF to: 005980b5 (CONDITIONAL_JUMP)  ; LAB_005980b5
    MOV ESI,dword ptr [ESP + 0x33c]     ; 0059819a
        ;   Label: LAB_0059819a
    PUSH ESI                            ; 005981a1
    CALL crt_unknown.c_FUN_005c09f0     ; 005981a2
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005981a7
    MOV EDI,dword ptr [ESP + 0x350]     ; 005981aa
    TEST EDI,EDI                        ; 005981b1
    JZ 0x005981be                       ; 005981b3
        ;   XREF to: 005981be (CONDITIONAL_JUMP)  ; LAB_005981be
    PUSH EDI                            ; 005981b5
    CALL crt_unknown.c_FUN_005c09f0     ; 005981b6
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005981bb
    MOV EAX,dword ptr [ESP + 0x340]     ; 005981be
        ;   Label: LAB_005981be
    PUSH EAX                            ; 005981c5
    MOV EDX,dword ptr [ESP + 0x334]     ; 005981c6
    PUSH EDX                            ; 005981cd
    MOV ECX,dword ptr [ESP + 0x340]     ; 005981ce
    MOV EAX,dword ptr [ESP + 0x35c]     ; 005981d5
    PUSH ECX                            ; 005981dc
    ADD EAX,EAX                         ; 005981dd
    PUSH EAX                            ; 005981df
    MOV EBX,dword ptr [ESP + 0x37c]     ; 005981e0
    PUSH EBX                            ; 005981e7
    CALL engine_texture.cpp_FUN_00597ac0 ; 005981e8
        ;   XREF to: 00597ac0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597ac0()
    ADD ESP,0x14                        ; 005981ed
    PUSH 0x0                            ; 005981f0
    LEA EAX,[ESP + 0x308]               ; 005981f2
    PUSH EAX                            ; 005981f9
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 005981fa
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005981ff
    POP EBX                             ; 00598202
    ADD ESP,0x358                       ; 00598203
    POP EBP                             ; 00598209
    POP EDI                             ; 0059820a
    POP ESI                             ; 0059820b
    RET                                 ; 0059820c
    MOV EAX,dword ptr [ESP + 0x368]     ; 0059820d
        ;   Label: LAB_0059820d
    PUSH EAX                            ; 00598214
    CALL engine_texture.cpp_FUN_00597a20 ; 00598215
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 0059821a
    ADD ESP,0x358                       ; 0059821d
    POP EBP                             ; 00598223
    POP EDI                             ; 00598224
    POP ESI                             ; 00598225
    RET                                 ; 00598226
    MOV EDI,dword ptr [ESP + 0x368]     ; 00598227
        ;   Label: LAB_00598227
    ADD EDI,0x8                         ; 0059822e
    MOV EBP,dword ptr [ESP + 0x368]     ; 00598231
    PUSH EDI                            ; 00598238
    MOV AL,byte ptr [ESI]               ; 00598239
        ;   Label: LAB_00598239
    MOV byte ptr [EDI],AL               ; 0059823b
    CMP AL,0x0                          ; 0059823d
    JZ 0x00598251                       ; 0059823f
        ;   XREF to: 00598251 (CONDITIONAL_JUMP)  ; LAB_00598251
    MOV AL,byte ptr [ESI + 0x1]         ; 00598241
    ADD ESI,0x2                         ; 00598244
    MOV byte ptr [EDI + 0x1],AL         ; 00598247
    ADD EDI,0x2                         ; 0059824a
    CMP AL,0x0                          ; 0059824d
    JNZ 0x00598239                      ; 0059824f
        ;   XREF to: 00598239 (CONDITIONAL_JUMP)  ; LAB_00598239
    POP EDI                             ; 00598251
        ;   Label: LAB_00598251
    PUSH EBP                            ; 00598252
    CALL engine_texture.cpp_FUN_00597a20 ; 00598253
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 00598258
    ADD ESP,0x358                       ; 0059825b
    POP EBP                             ; 00598261
    POP EDI                             ; 00598262
    POP ESI                             ; 00598263
    RET                                 ; 00598264
    CMP EAX,0x4000                      ; 00598265
        ;   Label: LAB_00598265
    JNZ 0x0059827c                      ; 0059826a
        ;   XREF to: 0059827c (CONDITIONAL_JUMP)  ; LAB_0059827c
    MOV dword ptr [ESP + 0x350],0x80    ; 0059826c
    JMP 0x00597dcf                      ; 00598277
        ;   XREF to: 00597dcf (UNCONDITIONAL_JUMP)  ; LAB_00597dcf
    CMP EAX,0x10000                     ; 0059827c
        ;   Label: LAB_0059827c
    JNZ 0x00598293                      ; 00598281
        ;   XREF to: 00598293 (CONDITIONAL_JUMP)  ; LAB_00598293
    MOV dword ptr [ESP + 0x350],0x100   ; 00598283
    JMP 0x00597dcf                      ; 0059828e
        ;   XREF to: 00597dcf (UNCONDITIONAL_JUMP)  ; LAB_00597dcf
    PUSH ESI                            ; 00598293
        ;   Label: LAB_00598293
    MOV EBP,0x5f7c8c                    ; 00598294
    MOV EAX,0x572                       ; 00598299
    PUSH 0x5f7ca2                       ; 0059829e
    MOV dword ptr [0x01d1d400],EBP      ; 005982a3 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005982a9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005982ae
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005982b3
    JMP 0x00597dcf                      ; 005982b6
        ;   XREF to: 00597dcf (UNCONDITIONAL_JUMP)  ; LAB_00597dcf
    MOV EAX,dword ptr [ESP + 0x36c]     ; 005982bb
        ;   Label: LAB_005982bb
    ADD EAX,0x8                         ; 005982c2
    PUSH EAX                            ; 005982c5
    MOV EBX,0x5f7d5d                    ; 005982c6
    MOV EDI,0x580                       ; 005982cb
    PUSH 0x5f7d73                       ; 005982d0
    MOV dword ptr [0x01d1d400],EBX      ; 005982d5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005982db | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005982e1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005982e6
    JMP 0x00597e7b                      ; 005982e9
        ;   XREF to: 00597e7b (UNCONDITIONAL_JUMP)  ; LAB_00597e7b
    LEA EAX,[ESP + 0x104]               ; 005982ee
        ;   Label: LAB_005982ee
    PUSH EAX                            ; 005982f5
    MOV EDX,0x5f7dd8                    ; 005982f6
    MOV ECX,0x58d                       ; 005982fb
    PUSH 0x5f7dee                       ; 00598300
    MOV dword ptr [0x01d1d400],EDX      ; 00598305 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059830b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00598311
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00598316
    JMP 0x00597f25                      ; 00598319
        ;   XREF to: 00597f25 (UNCONDITIONAL_JUMP)  ; LAB_00597f25

