; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0057514e(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bbac
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_unknown.c_FUN_005b86a0
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_dosio.cpp_makePath_FUN_004610a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   engine_texture.cpp_FUN_00574e00
;   engine_texture.cpp_FUN_00574ea0
;   support_trstream.cpp_CInStreamFile_close_FUN_0057d180
;   support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0057514e
        ;   Label: engine_texture.cpp_FUN_0057514e
    PUSH ESI                            ; 00575150
    PUSH EDI                            ; 00575151
    PUSH EBP                            ; 00575152
    SUB ESP,0x354                       ; 00575153
    MOV ESI,dword ptr [ESP + 0x368]     ; 00575159
    TEST ESI,ESI                        ; 00575160
    JZ 0x005755e7                       ; 00575162
        ;   XREF to: 005755e7 (CONDITIONAL_JUMP)  ; LAB_005755e7
    MOV EDX,dword ptr [0x0264bbac]      ; 00575168 | DAT_0264bbac
    TEST EDX,EDX                        ; 0057516e
    JNZ 0x00575601                      ; 00575170
        ;   XREF to: 00575601 (CONDITIONAL_JUMP)  ; LAB_00575601
    PUSH ESI                            ; 00575176
    MOV dword ptr [ESP + 0x34c],EDX     ; 00575177
    PUSH 0x5eca14                       ; 0057517e
    MOV dword ptr [ESP + 0x340],EDX     ; 00575183
    MOV dword ptr [ESP + 0x354],EDX     ; 0057518a
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00575191
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00575196
    CMP EAX,0x1000                      ; 00575199
    JNZ 0x0057563f                      ; 0057519e
        ;   XREF to: 0057563f (CONDITIONAL_JUMP)  ; LAB_0057563f
    MOV dword ptr [ESP + 0x34c],0x40    ; 005751a4
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005751af
        ;   Label: LAB_005751af
    IMUL EAX,EAX                        ; 005751b6
    PUSH EAX                            ; 005751b9
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005751ba
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005751bf
    MOV dword ptr [ESP + 0x334],EAX     ; 005751c2
    TEST EAX,EAX                        ; 005751c9
    JNZ 0x005751ef                      ; 005751cb
        ;   XREF to: 005751ef (CONDITIONAL_JUMP)  ; LAB_005751ef
    MOV EBP,0x5eca6b                    ; 005751cd
    MOV EAX,0x577                       ; 005751d2
    PUSH 0x5eca81                       ; 005751d7
    MOV dword ptr [0x01d046a0],EBP      ; 005751dc | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005751e2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005751e7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005751ec
    PUSH 0x300                          ; 005751ef
        ;   Label: LAB_005751ef
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005751f4
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005751f9
    MOV dword ptr [ESP + 0x328],EAX     ; 005751fc
    TEST EAX,EAX                        ; 00575203
    JNZ 0x0057522a                      ; 00575205
        ;   XREF to: 0057522a (CONDITIONAL_JUMP)  ; LAB_0057522a
    MOV EDX,0x5ecaa8                    ; 00575207
    MOV ECX,0x57b                       ; 0057520c
    PUSH 0x5ecabe                       ; 00575211
    MOV dword ptr [0x01d046a0],EDX      ; 00575216 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057521c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00575222
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00575227
    PUSH EBX                            ; 0057522a
        ;   Label: LAB_0057522a
    LEA EAX,[ESP + 0x304]               ; 0057522b
    PUSH EAX                            ; 00575232
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 00575233
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00575238
    PUSH ESI                            ; 0057523b
    PUSH 0x5ecae5                       ; 0057523c
    LEA EAX,[ESP + 0x30c]               ; 00575241
    PUSH EAX                            ; 00575248
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 00575249
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0057524e
    TEST EAX,EAX                        ; 00575251
    JZ 0x00575695                       ; 00575253
        ;   XREF to: 00575695 (CONDITIONAL_JUMP)  ; LAB_00575695
    MOV EAX,dword ptr [ESP + 0x350]     ; 00575259
        ;   Label: LAB_00575259
    IMUL EAX,EAX                        ; 00575260
    PUSH EAX                            ; 00575263
    MOV EAX,dword ptr [ESP + 0x33c]     ; 00575264
    PUSH EAX                            ; 0057526b
    LEA EAX,[ESP + 0x30c]               ; 0057526c
    PUSH EAX                            ; 00575273
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00575274
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00575279
    LEA EAX,[ESP + 0x304]               ; 0057527c
    PUSH EAX                            ; 00575283
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00575284
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00575289
    PUSH 0x0                            ; 0057528c
    LEA EAX,[ESP + 0x8]                 ; 0057528e
    PUSH EAX                            ; 00575292
    PUSH 0x0                            ; 00575293
    PUSH 0x0                            ; 00575295
    PUSH ESI                            ; 00575297
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 00575298
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0057529d
    PUSH 0x5ecb56                       ; 005752a0
    LEA EAX,[ESP + 0x8]                 ; 005752a5
    PUSH EAX                            ; 005752a9
    PUSH 0x0                            ; 005752aa
    PUSH 0x0                            ; 005752ac
    LEA EAX,[ESP + 0x114]               ; 005752ae
    PUSH EAX                            ; 005752b5
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 005752b6
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005752bb
    PUSH 0x5ecb5b                       ; 005752be
    LEA EAX,[ESP + 0x8]                 ; 005752c3
    PUSH EAX                            ; 005752c7
    PUSH 0x0                            ; 005752c8
    PUSH 0x0                            ; 005752ca
    LEA EAX,[ESP + 0x214]               ; 005752cc
    PUSH EAX                            ; 005752d3
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 005752d4
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005752d9
    LEA EAX,[ESP + 0x104]               ; 005752dc
    PUSH EAX                            ; 005752e3
    PUSH 0x5ecb60                       ; 005752e4
    LEA EAX,[ESP + 0x30c]               ; 005752e9
    PUSH EAX                            ; 005752f0
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 005752f1
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 005752f6
    TEST EAX,EAX                        ; 005752f9
    JZ 0x005756c8                       ; 005752fb
        ;   XREF to: 005756c8 (CONDITIONAL_JUMP)  ; LAB_005756c8
    PUSH 0x300                          ; 00575301
        ;   Label: LAB_00575301
    MOV EBX,dword ptr [ESP + 0x330]     ; 00575306
    PUSH EBX                            ; 0057530d
    LEA EAX,[ESP + 0x30c]               ; 0057530e
    PUSH EAX                            ; 00575315
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00575316
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 0057531b
    LEA EAX,[ESP + 0x304]               ; 0057531e
    PUSH EAX                            ; 00575325
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00575326
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0057532b
    LEA EAX,[ESP + 0x204]               ; 0057532e
    PUSH EAX                            ; 00575335
    PUSH 0x5ecba1                       ; 00575336
    LEA EAX,[ESP + 0x30c]               ; 0057533b
    PUSH EAX                            ; 00575342
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 00575343
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00575348
    TEST EAX,EAX                        ; 0057534b
    JZ 0x005753c3                       ; 0057534d
        ;   XREF to: 005753c3 (CONDITIONAL_JUMP)  ; LAB_005753c3
    MOV EAX,dword ptr [ESP + 0x350]     ; 0057534f
    IMUL EAX,EAX                        ; 00575356
    PUSH EAX                            ; 00575359
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0057535a
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0057535f
    MOV dword ptr [ESP + 0x34c],EAX     ; 00575362
    TEST EAX,EAX                        ; 00575369
    JNZ 0x00575390                      ; 0057536b
        ;   XREF to: 00575390 (CONDITIONAL_JUMP)  ; LAB_00575390
    MOV EDI,0x5ecba5                    ; 0057536d
    MOV EBP,0x595                       ; 00575372
    PUSH 0x5ecbbb                       ; 00575377
    MOV dword ptr [0x01d046a0],EDI      ; 0057537c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00575382 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00575388
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057538d
    MOV EAX,dword ptr [ESP + 0x350]     ; 00575390
        ;   Label: LAB_00575390
    IMUL EAX,EAX                        ; 00575397
    PUSH EAX                            ; 0057539a
    MOV ECX,dword ptr [ESP + 0x350]     ; 0057539b
    PUSH ECX                            ; 005753a2
    LEA EAX,[ESP + 0x30c]               ; 005753a3
    PUSH EAX                            ; 005753aa
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 005753ab
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 005753b0
    LEA EAX,[ESP + 0x304]               ; 005753b3
    PUSH EAX                            ; 005753ba
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 005753bb
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005753c0
    MOV EAX,dword ptr [ESP + 0x350]     ; 005753c3
        ;   Label: LAB_005753c3
    IMUL EAX,EAX                        ; 005753ca
    SHL EAX,0x2                         ; 005753cd
    PUSH EAX                            ; 005753d0
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005753d1
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005753d6
    MOV dword ptr [ESP + 0x334],EAX     ; 005753d9
    TEST EAX,EAX                        ; 005753e0
    JNZ 0x00575407                      ; 005753e2
        ;   XREF to: 00575407 (CONDITIONAL_JUMP)  ; LAB_00575407
    MOV ESI,0x5ecbe2                    ; 005753e4
    MOV EDI,0x5d4                       ; 005753e9
    PUSH 0x5ecbf8                       ; 005753ee
    MOV dword ptr [0x01d046a0],ESI      ; 005753f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005753f9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005753ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00575404
    CMP dword ptr [ESP + 0x34c],0x0     ; 00575407
        ;   Label: LAB_00575407
    JZ 0x00575455                       ; 0057540f
        ;   XREF to: 00575455 (CONDITIONAL_JUMP)  ; LAB_00575455
    MOV EAX,dword ptr [ESP + 0x350]     ; 00575411
    IMUL EAX,EAX                        ; 00575418
    SHL EAX,0x2                         ; 0057541b
    PUSH EAX                            ; 0057541e
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0057541f
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00575424
    MOV dword ptr [ESP + 0x33c],EAX     ; 00575427
    TEST EAX,EAX                        ; 0057542e
    JNZ 0x00575455                      ; 00575430
        ;   XREF to: 00575455 (CONDITIONAL_JUMP)  ; LAB_00575455
    MOV ECX,0x5ecc1f                    ; 00575432
    MOV EBX,0x5da                       ; 00575437
    PUSH 0x5ecc35                       ; 0057543c
    MOV dword ptr [0x01d046a0],ECX      ; 00575441 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00575447 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0057544d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00575452
    XOR ESI,ESI                         ; 00575455
        ;   Label: LAB_00575455
    MOV EDI,dword ptr [ESP + 0x350]     ; 00575457
    MOV dword ptr [ESP + 0x344],ESI     ; 0057545e
    TEST EDI,EDI                        ; 00575465
    JLE 0x00575574                      ; 00575467
        ;   XREF to: 00575574 (CONDITIONAL_JUMP)  ; LAB_00575574
    LEA EAX,[EDI + EDI*0x1]             ; 0057546d
    MOV dword ptr [ESP + 0x340],EAX     ; 00575470
    LEA EAX,[EDI*0x4 + 0x0]             ; 00575477
    MOV dword ptr [ESP + 0x330],EAX     ; 0057547e
    IMUL EAX,EDI,0x0                    ; 00575485
    MOV dword ptr [ESP + 0x348],EAX     ; 00575488
    MOV EAX,dword ptr [ESP + 0x344]     ; 0057548f
        ;   Label: LAB_0057548f
    IMUL EAX,dword ptr [ESP + 0x350]    ; 00575496
    MOV EDX,dword ptr [ESP + 0x338]     ; 0057549e
    MOV ESI,dword ptr [ESP + 0x334]     ; 005754a5
    MOV ECX,dword ptr [ESP + 0x348]     ; 005754ac
    MOV EBX,dword ptr [ESP + 0x348]     ; 005754b3
    ADD ESI,ECX                         ; 005754ba
    MOV ECX,dword ptr [ESP + 0x33c]     ; 005754bc
    MOV EBP,dword ptr [ESP + 0x34c]     ; 005754c3
    ADD ECX,EBX                         ; 005754ca
    ADD EDX,EAX                         ; 005754cc
    XOR EDI,EDI                         ; 005754ce
    ADD EAX,EBP                         ; 005754d0
    MOV EBP,dword ptr [ESP + 0x350]     ; 005754d2
    MOV dword ptr [ESP + 0x354],EDI     ; 005754d9
    TEST EBP,EBP                        ; 005754e0
    JLE 0x0057553f                      ; 005754e2
        ;   XREF to: 0057553f (CONDITIONAL_JUMP)  ; LAB_0057553f
    MOV EBP,dword ptr [ESP + 0x340]     ; 005754e4
    MOV EDI,dword ptr [ESP + 0x340]     ; 005754eb
    ADD EBP,ECX                         ; 005754f2
    ADD EDI,ESI                         ; 005754f4
    MOV BL,byte ptr [EDX]               ; 005754f6
        ;   Label: LAB_005754f6
    MOV byte ptr [ESI],BL               ; 005754f8
    MOV byte ptr [ESI + 0x1],BL         ; 005754fa
    MOV byte ptr [EDI],BL               ; 005754fd
    MOV byte ptr [EDI + 0x1],BL         ; 005754ff
    CMP dword ptr [ESP + 0x34c],0x0     ; 00575502
    JZ 0x00575519                       ; 0057550a
        ;   XREF to: 00575519 (CONDITIONAL_JUMP)  ; LAB_00575519
    MOV BL,byte ptr [EAX]               ; 0057550c
    MOV byte ptr [ECX],BL               ; 0057550e
    MOV byte ptr [ECX + 0x1],BL         ; 00575510
    MOV byte ptr [EBP],BL               ; 00575513
    MOV byte ptr [EBP + 0x1],BL         ; 00575516
    MOV EBX,dword ptr [ESP + 0x354]     ; 00575519
        ;   Label: LAB_00575519
    INC EDX                             ; 00575520
    INC EAX                             ; 00575521
    ADD EDI,0x2                         ; 00575522
    ADD ESI,0x2                         ; 00575525
    ADD EBP,0x2                         ; 00575528
    INC EBX                             ; 0057552b
    ADD ECX,0x2                         ; 0057552c
    MOV dword ptr [ESP + 0x354],EBX     ; 0057552f
    CMP EBX,dword ptr [ESP + 0x350]     ; 00575536
    JL 0x005754f6                       ; 0057553d
        ;   XREF to: 005754f6 (CONDITIONAL_JUMP)  ; LAB_005754f6
    MOV EAX,dword ptr [ESP + 0x330]     ; 0057553f
        ;   Label: LAB_0057553f
    MOV EDX,dword ptr [ESP + 0x348]     ; 00575546
    MOV ECX,dword ptr [ESP + 0x344]     ; 0057554d
    MOV EBX,dword ptr [ESP + 0x350]     ; 00575554
    ADD EDX,EAX                         ; 0057555b
    INC ECX                             ; 0057555d
    MOV dword ptr [ESP + 0x348],EDX     ; 0057555e
    MOV dword ptr [ESP + 0x344],ECX     ; 00575565
    CMP ECX,EBX                         ; 0057556c
    JL 0x0057548f                       ; 0057556e
        ;   XREF to: 0057548f (CONDITIONAL_JUMP)  ; LAB_0057548f
    MOV ESI,dword ptr [ESP + 0x338]     ; 00575574
        ;   Label: LAB_00575574
    PUSH ESI                            ; 0057557b
    CALL crt_unknown.c_FUN_005b86a0     ; 0057557c
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00575581
    MOV EDI,dword ptr [ESP + 0x34c]     ; 00575584
    TEST EDI,EDI                        ; 0057558b
    JZ 0x00575598                       ; 0057558d
        ;   XREF to: 00575598 (CONDITIONAL_JUMP)  ; LAB_00575598
    PUSH EDI                            ; 0057558f
    CALL crt_unknown.c_FUN_005b86a0     ; 00575590
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00575595
    MOV EAX,dword ptr [ESP + 0x33c]     ; 00575598
        ;   Label: LAB_00575598
    PUSH EAX                            ; 0057559f
    MOV EDX,dword ptr [ESP + 0x330]     ; 005755a0
    PUSH EDX                            ; 005755a7
    MOV ECX,dword ptr [ESP + 0x33c]     ; 005755a8
    MOV EAX,dword ptr [ESP + 0x358]     ; 005755af
    PUSH ECX                            ; 005755b6
    ADD EAX,EAX                         ; 005755b7
    PUSH EAX                            ; 005755b9
    MOV EBX,dword ptr [ESP + 0x378]     ; 005755ba
    PUSH EBX                            ; 005755c1
    CALL engine_texture.cpp_FUN_00574ea0 ; 005755c2
        ;   XREF to: 00574ea0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574ea0()
    ADD ESP,0x14                        ; 005755c7
    PUSH 0x0                            ; 005755ca
    LEA EAX,[ESP + 0x308]               ; 005755cc
    PUSH EAX                            ; 005755d3
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 005755d4
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005755d9
    POP EBX                             ; 005755dc
    ADD ESP,0x354                       ; 005755dd
    POP EBP                             ; 005755e3
    POP EDI                             ; 005755e4
    POP ESI                             ; 005755e5
    RET                                 ; 005755e6
    MOV EAX,dword ptr [ESP + 0x364]     ; 005755e7
        ;   Label: LAB_005755e7
    PUSH EAX                            ; 005755ee
    CALL engine_texture.cpp_FUN_00574e00 ; 005755ef
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 005755f4
    ADD ESP,0x354                       ; 005755f7
    POP EBP                             ; 005755fd
    POP EDI                             ; 005755fe
    POP ESI                             ; 005755ff
    RET                                 ; 00575600
    MOV EDI,dword ptr [ESP + 0x364]     ; 00575601
        ;   Label: LAB_00575601
    ADD EDI,0x8                         ; 00575608
    MOV EBP,dword ptr [ESP + 0x364]     ; 0057560b
    PUSH EDI                            ; 00575612
    MOV AL,byte ptr [ESI]               ; 00575613
        ;   Label: LAB_00575613
    MOV byte ptr [EDI],AL               ; 00575615
    CMP AL,0x0                          ; 00575617
    JZ 0x0057562b                       ; 00575619
        ;   XREF to: 0057562b (CONDITIONAL_JUMP)  ; LAB_0057562b
    MOV AL,byte ptr [ESI + 0x1]         ; 0057561b
    ADD ESI,0x2                         ; 0057561e
    MOV byte ptr [EDI + 0x1],AL         ; 00575621
    ADD EDI,0x2                         ; 00575624
    CMP AL,0x0                          ; 00575627
    JNZ 0x00575613                      ; 00575629
        ;   XREF to: 00575613 (CONDITIONAL_JUMP)  ; LAB_00575613
    POP EDI                             ; 0057562b
        ;   Label: LAB_0057562b
    PUSH EBP                            ; 0057562c
    CALL engine_texture.cpp_FUN_00574e00 ; 0057562d
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 00575632
    ADD ESP,0x354                       ; 00575635
    POP EBP                             ; 0057563b
    POP EDI                             ; 0057563c
    POP ESI                             ; 0057563d
    RET                                 ; 0057563e
    CMP EAX,0x4000                      ; 0057563f
        ;   Label: LAB_0057563f
    JNZ 0x00575656                      ; 00575644
        ;   XREF to: 00575656 (CONDITIONAL_JUMP)  ; LAB_00575656
    MOV dword ptr [ESP + 0x34c],0x80    ; 00575646
    JMP 0x005751af                      ; 00575651
        ;   XREF to: 005751af (UNCONDITIONAL_JUMP)  ; LAB_005751af
    CMP EAX,0x10000                     ; 00575656
        ;   Label: LAB_00575656
    JNZ 0x0057566d                      ; 0057565b
        ;   XREF to: 0057566d (CONDITIONAL_JUMP)  ; LAB_0057566d
    MOV dword ptr [ESP + 0x34c],0x100   ; 0057565d
    JMP 0x005751af                      ; 00575668
        ;   XREF to: 005751af (UNCONDITIONAL_JUMP)  ; LAB_005751af
    PUSH ESI                            ; 0057566d
        ;   Label: LAB_0057566d
    MOV EBP,0x5eca18                    ; 0057566e
    MOV EAX,0x572                       ; 00575673
    PUSH 0x5eca2e                       ; 00575678
    MOV dword ptr [0x01d046a0],EBP      ; 0057567d | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00575683 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00575688
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0057568d
    JMP 0x005751af                      ; 00575690
        ;   XREF to: 005751af (UNCONDITIONAL_JUMP)  ; LAB_005751af
    MOV EAX,dword ptr [ESP + 0x368]     ; 00575695
        ;   Label: LAB_00575695
    ADD EAX,0x8                         ; 0057569c
    PUSH EAX                            ; 0057569f
    MOV EBX,0x5ecae9                    ; 005756a0
    MOV EDI,0x580                       ; 005756a5
    PUSH 0x5ecaff                       ; 005756aa
    MOV dword ptr [0x01d046a0],EBX      ; 005756af | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005756b5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005756bb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005756c0
    JMP 0x00575259                      ; 005756c3
        ;   XREF to: 00575259 (UNCONDITIONAL_JUMP)  ; LAB_00575259
    LEA EAX,[ESP + 0x104]               ; 005756c8
        ;   Label: LAB_005756c8
    PUSH EAX                            ; 005756cf
    MOV EDX,0x5ecb64                    ; 005756d0
    MOV ECX,0x58d                       ; 005756d5
    PUSH 0x5ecb7a                       ; 005756da
    MOV dword ptr [0x01d046a0],EDX      ; 005756df | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005756e5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005756eb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005756f0
    JMP 0x00575301                      ; 005756f3
        ;   XREF to: 00575301 (UNCONDITIONAL_JUMP)  ; LAB_00575301

