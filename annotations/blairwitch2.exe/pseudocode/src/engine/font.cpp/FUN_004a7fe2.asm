; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004a7fe2(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bbac
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b86a0
;   engine_dosio.cpp_makePath_FUN_004610a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   engine_font.cpp_FUN_004a8540
;   engine_mini3d.cpp_FUN_004f33d0
;   support_trstream.cpp_CInStreamFile_close_FUN_0057d180
;   support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0
;
; *****************************************************************************

section .text

    SBB EAX,0xd2850000                  ; 004a7fe2
        ;   Label: engine_font.cpp_FUN_004a7fe2
    JNZ 0x004a8341                      ; 004a7fe7
        ;   XREF to: 004a8341 (CONDITIONAL_JUMP)  ; LAB_004a8341
    MOV EAX,dword ptr [ESP + 0x458]     ; 004a7fed
        ;   Label: LAB_004a7fed
    MOV EBX,dword ptr [EAX + 0x1dd4]    ; 004a7ff4
    MOV dword ptr [EAX + 0x1dd0],0x0    ; 004a7ffa
    TEST EBX,EBX                        ; 004a8004
    JZ 0x004a8022                       ; 004a8006
        ;   XREF to: 004a8022 (CONDITIONAL_JUMP)  ; LAB_004a8022
    PUSH EBX                            ; 004a8008
    CALL crt_unknown.c_FUN_005b86a0     ; 004a8009
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004a800e
    MOV EAX,dword ptr [ESP + 0x458]     ; 004a8011
    MOV dword ptr [EAX + 0x1dd4],0x0    ; 004a8018
    CMP dword ptr [0x01c37788],0x0      ; 004a8022 | DAT_01c37788
        ;   Label: LAB_004a8022
    JZ 0x004a8338                       ; 004a8029
        ;   XREF to: 004a8338 (CONDITIONAL_JUMP)  ; LAB_004a8338
    CMP dword ptr [ESP + 0x45c],0x0     ; 004a802f
    JZ 0x004a8316                       ; 004a8037
        ;   XREF to: 004a8316 (CONDITIONAL_JUMP)  ; LAB_004a8316
    MOV EBP,dword ptr [ESP + 0x458]     ; 004a803d
    MOV EAX,[0x0264bbac]                ; 004a8044 | DAT_0264bbac
    MOV EBP,dword ptr [EBP + 0x1a4]     ; 004a8049
    TEST EAX,EAX                        ; 004a804f
    JNZ 0x004a8055                      ; 004a8051
        ;   XREF to: 004a8055 (CONDITIONAL_JUMP)  ; LAB_004a8055
    ADD EBP,EBP                         ; 004a8053
    PUSH EDI                            ; 004a8055
        ;   Label: LAB_004a8055
    PUSH ESI                            ; 004a8056
    MOV EAX,EBP                         ; 004a8057
    IMUL EAX,EBP                        ; 004a8059
    PUSH 0x300                          ; 004a805c
    MOV dword ptr [ESP + 0x444],EAX     ; 004a8061
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004a8068
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004a806d
    MOV EDX,dword ptr [ESP + 0x440]     ; 004a8070
    PUSH EDX                            ; 004a8077
    MOV EBX,EAX                         ; 004a8078
    MOV dword ptr [ESP + 0x43c],EAX     ; 004a807a
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004a8081
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004a8086
    MOV ECX,dword ptr [ESP + 0x440]     ; 004a8089
    PUSH ECX                            ; 004a8090
    MOV ESI,EAX                         ; 004a8091
    MOV dword ptr [ESP + 0x438],EAX     ; 004a8093
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004a809a
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004a809f
    MOV dword ptr [ESP + 0x43c],EAX     ; 004a80a2
    TEST EBX,EBX                        ; 004a80a9
    JNZ 0x004a8360                      ; 004a80ab
        ;   XREF to: 004a8360 (CONDITIONAL_JUMP)  ; LAB_004a8360
    MOV EBX,0x5d680d                    ; 004a80b1
        ;   Label: LAB_004a80b1
    MOV ESI,0x17f                       ; 004a80b6
    PUSH 0x5d6820                       ; 004a80bb
    MOV dword ptr [0x01d046a0],EBX      ; 004a80c0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a80c6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a80cc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a80d1
    PUSH 0x0                            ; 004a80d4
        ;   Label: LAB_004a80d4
    LEA EAX,[ESP + 0x30c]               ; 004a80d6
    PUSH EAX                            ; 004a80dd
    PUSH 0x0                            ; 004a80de
    MOV EAX,dword ptr [ESP + 0x46c]     ; 004a80e0
    PUSH 0x0                            ; 004a80e7
    ADD EAX,0x4                         ; 004a80e9
    PUSH EAX                            ; 004a80ec
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a80ed
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a80f2
    PUSH 0x5d684a                       ; 004a80f5
    LEA EAX,[ESP + 0x30c]               ; 004a80fa
    PUSH EAX                            ; 004a8101
    PUSH 0x0                            ; 004a8102
    PUSH 0x0                            ; 004a8104
    LEA EAX,[ESP + 0x218]               ; 004a8106
    PUSH EAX                            ; 004a810d
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 004a810e
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a8113
    LEA EAX,[ESP + 0x408]               ; 004a8116
    PUSH EAX                            ; 004a811d
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 004a811e
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004a8123
    LEA EAX,[ESP + 0x208]               ; 004a8126
    PUSH EAX                            ; 004a812d
    PUSH 0x5d684e                       ; 004a812e
    LEA EAX,[ESP + 0x410]               ; 004a8133
    PUSH EAX                            ; 004a813a
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 004a813b
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004a8140
    TEST EAX,EAX                        ; 004a8143
    JZ 0x004a840b                       ; 004a8145
        ;   XREF to: 004a840b (CONDITIONAL_JUMP)  ; LAB_004a840b
    CMP dword ptr [0x0264bbac],0x0      ; 004a814b | DAT_0264bbac
    JZ 0x004a8375                       ; 004a8152
        ;   XREF to: 004a8375 (CONDITIONAL_JUMP)  ; LAB_004a8375
    MOV EAX,EBP                         ; 004a8158
    IMUL EAX,EBP                        ; 004a815a
    PUSH EAX                            ; 004a815d
    MOV EBX,dword ptr [ESP + 0x440]     ; 004a815e
    PUSH EBX                            ; 004a8165
    LEA EAX,[ESP + 0x410]               ; 004a8166
    PUSH EAX                            ; 004a816d
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 004a816e
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004a8173
    LEA EAX,[ESP + 0x408]               ; 004a8176
        ;   Label: LAB_004a8176
    PUSH EAX                            ; 004a817d
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 004a817e
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004a8183
    MOV ECX,dword ptr [ESP + 0x440]     ; 004a8186
        ;   Label: LAB_004a8186
    PUSH ECX                            ; 004a818d
    PUSH 0xff                           ; 004a818e
    MOV EBX,dword ptr [ESP + 0x43c]     ; 004a8193
    PUSH EBX                            ; 004a819a
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004a819b
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a81a0
    MOV ECX,0x300                       ; 004a81a3
    MOV ESI,dword ptr [ESP + 0x460]     ; 004a81a8
    MOV EDI,dword ptr [ESP + 0x438]     ; 004a81af
    ADD ESI,0x1b4                       ; 004a81b6
    PUSH EDI                            ; 004a81bc
    MOV EAX,ECX                         ; 004a81bd
    SHR ECX,0x2                         ; 004a81bf
    MOVSD.REP ES:EDI,ESI                ; 004a81c2
    MOV CL,AL                           ; 004a81c4
    AND CL,0x3                          ; 004a81c6
    MOVSB.REP ES:EDI,ESI                ; 004a81c9
    POP EDI                             ; 004a81cb
    MOV EAX,dword ptr [ESP + 0x460]     ; 004a81cc
    LEA ESI,[EAX + 0x4]                 ; 004a81d3
    LEA EDI,[EAX + 0x1dbc]              ; 004a81d6
    MOV dword ptr [EAX + 0x1db8],0x0    ; 004a81dc
    PUSH EDI                            ; 004a81e6
    MOV AL,byte ptr [ESI]               ; 004a81e7
        ;   Label: LAB_004a81e7
    MOV byte ptr [EDI],AL               ; 004a81e9
    CMP AL,0x0                          ; 004a81eb
    JZ 0x004a81ff                       ; 004a81ed
        ;   XREF to: 004a81ff (CONDITIONAL_JUMP)  ; LAB_004a81ff
    MOV AL,byte ptr [ESI + 0x1]         ; 004a81ef
    ADD ESI,0x2                         ; 004a81f2
    MOV byte ptr [EDI + 0x1],AL         ; 004a81f5
    ADD EDI,0x2                         ; 004a81f8
    CMP AL,0x0                          ; 004a81fb
    JNZ 0x004a81e7                      ; 004a81fd
        ;   XREF to: 004a81e7 (CONDITIONAL_JUMP)  ; LAB_004a81e7
    POP EDI                             ; 004a81ff
        ;   Label: LAB_004a81ff
    MOV ESI,dword ptr [ESP + 0x43c]     ; 004a8200
    PUSH ESI                            ; 004a8207
    MOV EDI,dword ptr [ESP + 0x43c]     ; 004a8208
    PUSH EDI                            ; 004a820f
    PUSH EBX                            ; 004a8210
    MOV EAX,dword ptr [ESP + 0x46c]     ; 004a8211
    PUSH EBP                            ; 004a8218
    ADD EAX,0x1db4                      ; 004a8219
    PUSH EAX                            ; 004a821e
    CALL engine_mini3d.cpp_FUN_004f33d0 ; 004a821f
        ;   XREF to: 004f33d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f33d0()
    ADD ESP,0x14                        ; 004a8224
    PUSH 0x7d20                         ; 004a8227
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004a822c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004a8231
    MOV ECX,dword ptr [ESP + 0x460]     ; 004a8234
    MOV dword ptr [ECX + 0x1dcc],EAX    ; 004a823b
    TEST EAX,EAX                        ; 004a8241
    JNZ 0x004a8270                      ; 004a8243
        ;   XREF to: 004a8270 (CONDITIONAL_JUMP)  ; LAB_004a8270
    LEA EAX,[ESP + 0x208]               ; 004a8245
    PUSH EAX                            ; 004a824c
    MOV ECX,0x5d689b                    ; 004a824d
    MOV EBX,0x1e0                       ; 004a8252
    PUSH 0x5d68ae                       ; 004a8257
    MOV dword ptr [0x01d046a0],ECX      ; 004a825c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004a8262 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a8268
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004a826d
    MOV EAX,dword ptr [ESP + 0x460]     ; 004a8270
        ;   Label: LAB_004a8270
    MOV EAX,dword ptr [EAX + 0x1dcc]    ; 004a8277
    ADD EAX,0x1f                        ; 004a827d
    MOV ECX,dword ptr [ESP + 0x460]     ; 004a8280
    AND AL,0xe0                         ; 004a8287
    PUSH 0x7d0                          ; 004a8289
    MOV dword ptr [ECX + 0x1dd0],EAX    ; 004a828e
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004a8294
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004a8299
    MOV ECX,dword ptr [ESP + 0x460]     ; 004a829c
    MOV dword ptr [ECX + 0x1dd4],EAX    ; 004a82a3
    TEST EAX,EAX                        ; 004a82a9
    JZ 0x004a843a                       ; 004a82ab
        ;   XREF to: 004a843a (CONDITIONAL_JUMP)  ; LAB_004a843a
    MOV EAX,dword ptr [ESP + 0x460]     ; 004a82b1
        ;   Label: LAB_004a82b1
    LEA EBX,[EAX + 0x80]                ; 004a82b8
    LEA EBP,[EAX + 0x200]               ; 004a82be
    ADD EAX,0x400                       ; 004a82c4
    MOV dword ptr [EAX + 0x19d8],0x0    ; 004a82c9
    MOV dword ptr [EAX + 0x19dc],0x0    ; 004a82d3
    MOV dword ptr [ESP + 0x444],EAX     ; 004a82dd
    CMP dword ptr [EBX + 0x35e8],0x0    ; 004a82e4
        ;   Label: LAB_004a82e4
    JNZ 0x004a8466                      ; 004a82eb
        ;   XREF to: 004a8466 (CONDITIONAL_JUMP)  ; LAB_004a8466
    MOV EAX,dword ptr [ESP + 0x444]     ; 004a82f1
        ;   Label: LAB_004a82f1
    ADD EBX,0x4                         ; 004a82f8
    ADD EBP,0x10                        ; 004a82fb
    CMP EBX,EAX                         ; 004a82fe
    JNZ 0x004a82e4                      ; 004a8300
        ;   XREF to: 004a82e4 (CONDITIONAL_JUMP)  ; LAB_004a82e4
    PUSH 0x0                            ; 004a8302
    LEA EAX,[ESP + 0x40c]               ; 004a8304
    PUSH EAX                            ; 004a830b
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004a830c
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a8311
    POP ESI                             ; 004a8314
    POP EDI                             ; 004a8315
    PUSH 0x3f8ccccd                     ; 004a8316
        ;   Label: LAB_004a8316
    MOV ECX,dword ptr [ESP + 0x45c]     ; 004a831b
    MOV EAX,dword ptr [ESP + 0x460]     ; 004a8322
    PUSH ECX                            ; 004a8329
    MOV dword ptr [ECX + 0x420c],EAX    ; 004a832a
    CALL engine_font.cpp_FUN_004a8540   ; 004a8330
        ;   XREF to: 004a8540 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8540()
    ADD ESP,0x8                         ; 004a8335
    ADD ESP,0x44c                       ; 004a8338
        ;   Label: LAB_004a8338
    POP EBP                             ; 004a833e
    POP EBX                             ; 004a833f
    RET                                 ; 004a8340
    PUSH EDX                            ; 004a8341
        ;   Label: LAB_004a8341
    CALL crt_unknown.c_FUN_005b86a0     ; 004a8342
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004a8347
    MOV EAX,dword ptr [ESP + 0x458]     ; 004a834a
    MOV dword ptr [EAX + 0x1dcc],0x0    ; 004a8351
    JMP 0x004a7fed                      ; 004a835b
        ;   XREF to: 004a7fed (UNCONDITIONAL_JUMP)  ; LAB_004a7fed
    TEST ESI,ESI                        ; 004a8360
        ;   Label: LAB_004a8360
    JZ 0x004a80b1                       ; 004a8362
        ;   XREF to: 004a80b1 (CONDITIONAL_JUMP)  ; LAB_004a80b1
    TEST EAX,EAX                        ; 004a8368
    JZ 0x004a80b1                       ; 004a836a
        ;   XREF to: 004a80b1 (CONDITIONAL_JUMP)  ; LAB_004a80b1
    JMP 0x004a80d4                      ; 004a8370
        ;   XREF to: 004a80d4 (UNCONDITIONAL_JUMP)  ; LAB_004a80d4
    MOV EDX,EBP                         ; 004a8375
        ;   Label: LAB_004a8375
    MOV EAX,EBP                         ; 004a8377
    SAR EDX,0x1f                        ; 004a8379
    SUB EAX,EDX                         ; 004a837c
    SAR EAX,0x1                         ; 004a837e
    MOV ESI,dword ptr [ESP + 0x43c]     ; 004a8380
    XOR EDI,EDI                         ; 004a8387
    MOV dword ptr [ESP + 0x448],EAX     ; 004a8389
    TEST EAX,EAX                        ; 004a8390
    JLE 0x004a8176                      ; 004a8392
        ;   XREF to: 004a8176 (CONDITIONAL_JUMP)  ; LAB_004a8176
    MOV EDX,dword ptr [ESP + 0x448]     ; 004a8398
        ;   Label: LAB_004a8398
    PUSH EDX                            ; 004a839f
    LEA EAX,[ESP + 0xc]                 ; 004a83a0
    PUSH EAX                            ; 004a83a4
    LEA EAX,[ESP + 0x410]               ; 004a83a5
    PUSH EAX                            ; 004a83ac
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 004a83ad
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004a83b2
    XOR ECX,ECX                         ; 004a83b5
    TEST EBP,EBP                        ; 004a83b7
    JLE 0x004a83d5                      ; 004a83b9
        ;   XREF to: 004a83d5 (CONDITIONAL_JUMP)  ; LAB_004a83d5
    MOV EBX,ESI                         ; 004a83bb
    MOV EDX,ECX                         ; 004a83bd
        ;   Label: LAB_004a83bd
    MOV EAX,ECX                         ; 004a83bf
    SAR EDX,0x1f                        ; 004a83c1
    SUB EAX,EDX                         ; 004a83c4
    SAR EAX,0x1                         ; 004a83c6
    INC EBX                             ; 004a83c8
    MOV AL,byte ptr [ESP + EAX*0x1 + 0x8] ; 004a83c9
    INC ECX                             ; 004a83cd
    MOV byte ptr [EBX + -0x1],AL        ; 004a83ce
    CMP ECX,EBP                         ; 004a83d1
    JL 0x004a83bd                       ; 004a83d3
        ;   XREF to: 004a83bd (CONDITIONAL_JUMP)  ; LAB_004a83bd
    XOR ECX,ECX                         ; 004a83d5
        ;   Label: LAB_004a83d5
    ADD ESI,EBP                         ; 004a83d7
    TEST EBP,EBP                        ; 004a83d9
    JLE 0x004a83f7                      ; 004a83db
        ;   XREF to: 004a83f7 (CONDITIONAL_JUMP)  ; LAB_004a83f7
    MOV EBX,ESI                         ; 004a83dd
    MOV EDX,ECX                         ; 004a83df
        ;   Label: LAB_004a83df
    MOV EAX,ECX                         ; 004a83e1
    SAR EDX,0x1f                        ; 004a83e3
    SUB EAX,EDX                         ; 004a83e6
    SAR EAX,0x1                         ; 004a83e8
    INC EBX                             ; 004a83ea
    MOV AL,byte ptr [ESP + EAX*0x1 + 0x8] ; 004a83eb
    INC ECX                             ; 004a83ef
    MOV byte ptr [EBX + -0x1],AL        ; 004a83f0
    CMP ECX,EBP                         ; 004a83f3
    JL 0x004a83df                       ; 004a83f5
        ;   XREF to: 004a83df (CONDITIONAL_JUMP)  ; LAB_004a83df
    MOV EAX,dword ptr [ESP + 0x448]     ; 004a83f7
        ;   Label: LAB_004a83f7
    INC EDI                             ; 004a83fe
    ADD ESI,EBP                         ; 004a83ff
    CMP EDI,EAX                         ; 004a8401
    JGE 0x004a8176                      ; 004a8403
        ;   XREF to: 004a8176 (CONDITIONAL_JUMP)  ; LAB_004a8176
    JMP 0x004a8398                      ; 004a8409
        ;   XREF to: 004a8398 (UNCONDITIONAL_JUMP)  ; LAB_004a8398
    MOV dword ptr [0x01d046a4],0x19e    ; 004a840b | DAT_01d046a4
        ;   Label: LAB_004a840b
    LEA EAX,[ESP + 0x208]               ; 004a8415
    PUSH EAX                            ; 004a841c
    MOV EDI,0x5d6852                    ; 004a841d
    PUSH 0x5d6865                       ; 004a8422
    MOV dword ptr [0x01d046a0],EDI      ; 004a8427 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 004a842d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004a8432
    JMP 0x004a8186                      ; 004a8435
        ;   XREF to: 004a8186 (UNCONDITIONAL_JUMP)  ; LAB_004a8186
    LEA EAX,[ECX + 0x4]                 ; 004a843a
        ;   Label: LAB_004a843a
    PUSH EAX                            ; 004a843d
    MOV EDI,0x5d68db                    ; 004a843e
    MOV EBP,0x1e8                       ; 004a8443
    PUSH 0x5d68ee                       ; 004a8448
    MOV dword ptr [0x01d046a0],EDI      ; 004a844d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004a8453 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a8459
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004a845e
    JMP 0x004a82b1                      ; 004a8461
        ;   XREF to: 004a82b1 (UNCONDITIONAL_JUMP)  ; LAB_004a82b1
    MOV ESI,dword ptr [EBX + 0x21e8]    ; 004a8466
        ;   Label: LAB_004a8466
    MOV EDX,dword ptr [ESP + 0x460]     ; 004a846c
    SHL ESI,0x2                         ; 004a8473
    ADD ESI,EDX                         ; 004a8476
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004a8478
    SUB ECX,dword ptr [ESI + 0x194]     ; 004a847e
    MOV ESI,dword ptr [ESI + 0x1a4]     ; 004a8484
    MOV EDX,ECX                         ; 004a848a
    MOV EAX,ECX                         ; 004a848c
    SAR EDX,0x1f                        ; 004a848e
    IDIV ESI                            ; 004a8491
    MOV EDI,EDX                         ; 004a8493
    MOV dword ptr [ESP + 0x450],EDI     ; 004a8495
    MOV dword ptr [ESP + 0x44c],ESI     ; 004a849c
    FILD dword ptr [ESP + 0x450]        ; 004a84a3
    FILD dword ptr [ESP + 0x44c]        ; 004a84aa
    FLD1                                ; 004a84b1
    FDIVRP                              ; 004a84b3
    MOV EDX,ECX                         ; 004a84b5
    MOV EAX,ECX                         ; 004a84b7
    SAR EDX,0x1f                        ; 004a84b9
    IDIV ESI                            ; 004a84bc
    MOV ECX,dword ptr [EBX + 0x35e8]    ; 004a84be
    ADD ECX,EDI                         ; 004a84c4
    INC ECX                             ; 004a84c6
    FXCH                                ; 004a84c7
    FMUL ST1                            ; 004a84c9
    MOV dword ptr [ESP + 0x430],ECX     ; 004a84cb
    MOV dword ptr [ESP + 0x44c],EAX     ; 004a84d2
    MOV ECX,dword ptr [EBX + 0x39e8]    ; 004a84d9
    FILD dword ptr [ESP + 0x44c]        ; 004a84df
    FMUL ST2                            ; 004a84e6
    ADD ECX,EAX                         ; 004a84e8
    MOV EAX,dword ptr [ESP + 0x430]     ; 004a84ea
    INC ECX                             ; 004a84f1
    MOV dword ptr [ESP + 0x44c],EAX     ; 004a84f2
    MOV dword ptr [ESP + 0x450],ECX     ; 004a84f9
    FILD dword ptr [ESP + 0x44c]        ; 004a8500
    FMUL ST3                            ; 004a8507
    FILD dword ptr [ESP + 0x450]        ; 004a8509
    FMULP ST4                           ; 004a8510
    FXCH ST2                            ; 004a8512
    FSTP float ptr [EBP + 0x25e8]       ; 004a8514
    FSTP float ptr [EBP + 0x25ec]       ; 004a851a
    FSTP float ptr [EBP + 0x25f0]       ; 004a8520
    FSTP float ptr [EBP + 0x25f4]       ; 004a8526
    JMP 0x004a82f1                      ; 004a852c
        ;   XREF to: 004a82f1 (UNCONDITIONAL_JUMP)  ; LAB_004a82f1

