; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   base_directory
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x53c]:1  local_53c
; undefined1       Stack[-0x53b]:1  local_53b
; undefined4       Stack[-0x338]:4  local_338
; undefined4       Stack[-0x330]:4  local_330
; undefined        Stack[-0x328]:1  local_328
; undefined1       Stack[-0x327]:1  local_327
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0x14]:1  local_14
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3eae
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4583
;   engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0 at 004b420e
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb465
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bad65
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc34c
;
; Referenced Globals:
;   Sleep* Sleep = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_WARNING_Error_setting_da_00626577
;   TerminatedCString s_rb_0062660e
;   TerminatedCString s_Can_t_access_s_Perhaps_s_00626611
;   TerminatedCString s_engine_fileio_cpp_006266a4
;   TerminatedCString s_wb_006266b9
;   TerminatedCString s_Can_t_create_s_006266bc
;   TerminatedCString s_Error_turning_on_read_on_006266cd
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   crt_errno.c_errno_FUN_00601450
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_stdio.c_setvbuf_FUN_00601490
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_getFileTimestamp_FUN_00481960
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_setFileAttributes_FUN_004819f0
;   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3220
        ;   Label: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
    PUSH ESI                            ; 004b3221
    PUSH EDI                            ; 004b3222
    PUSH EBP                            ; 004b3223
    SUB ESP,0x52c                       ; 004b3224
    MOV EBP,dword ptr [ESP + 0x544]     ; 004b322a
    LEA EAX,[ESP + 0x428]               ; 004b3231
    PUSH EAX                            ; 004b3238
    LEA EAX,[ESP + 0x52c]               ; 004b3239
    PUSH EAX                            ; 004b3240
    MOV EDX,dword ptr [ESP + 0x548]     ; 004b3241
    PUSH EDX                            ; 004b3248
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b3249
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b324e
    PUSH 0x0                            ; 004b3251
    PUSH 0x0                            ; 004b3253
    LEA EAX,[ESP + 0x430]               ; 004b3255
    PUSH EAX                            ; 004b325c
    LEA EAX,[ESP + 0x534]               ; 004b325d
    PUSH EAX                            ; 004b3264
    LEA EAX,[ESP + 0x10]                ; 004b3265
    PUSH EAX                            ; 004b3269
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b326a
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b326f
    MOV EDI,ESP                         ; 004b3272
    MOV ESI,EBP                         ; 004b3274
    PUSH EDI                            ; 004b3276
    SUB ECX,ECX                         ; 004b3277
    DEC ECX                             ; 004b3279
    MOV AL,0x0                          ; 004b327a
    SCASB.REPNE ES:EDI                  ; 004b327c
    DEC EDI                             ; 004b327e
    MOV AL,byte ptr [ESI]               ; 004b327f
        ;   Label: LAB_004b327f
    MOV byte ptr [EDI],AL               ; 004b3281
    CMP AL,0x0                          ; 004b3283
    JZ 0x004b3297                       ; 004b3285
        ;   XREF to: 004b3297 (CONDITIONAL_JUMP)  ; LAB_004b3297
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3287
    ADD ESI,0x2                         ; 004b328a
    MOV byte ptr [EDI + 0x1],AL         ; 004b328d
    ADD EDI,0x2                         ; 004b3290
    CMP AL,0x0                          ; 004b3293
    JNZ 0x004b327f                      ; 004b3295
        ;   XREF to: 004b327f (CONDITIONAL_JUMP)  ; LAB_004b327f
    POP EDI                             ; 004b3297
        ;   Label: LAB_004b3297
    MOV EDI,ESP                         ; 004b3298
    XOR ESI,ESI                         ; 004b329a
    PUSH 0x153                          ; 004b329c
        ;   Label: LAB_004b329c
    PUSH 0x626129                       ; 004b32a1 | = "..\\engine\\fileio.cpp"
    PUSH 0x62660e                       ; 004b32a6 | = "rb"
    PUSH 0x0                            ; 004b32ab
    PUSH EDI                            ; 004b32ad
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b32ae
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b32b3
    ADD ESP,0x14                        ; 004b32b5
    TEST EAX,EAX                        ; 004b32b8
    JNZ 0x004b3342                      ; 004b32ba
        ;   XREF to: 004b3342 (CONDITIONAL_JUMP)  ; LAB_004b3342
    CALL crt_errno.c_errno_FUN_00601450 ; 004b32c0
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c_errno_FUN_00601450()
    CMP dword ptr [EAX],0x6             ; 004b32c5
    JZ 0x004b332a                       ; 004b32c8
        ;   XREF to: 004b332a (CONDITIONAL_JUMP)  ; LAB_004b332a
    XOR EAX,EAX                         ; 004b32ca
        ;   Label: LAB_004b32ca
    MOV EBX,EAX                         ; 004b32cc
        ;   Label: LAB_004b32cc
    TEST EAX,EAX                        ; 004b32ce
    JNZ 0x004b335b                      ; 004b32d0
        ;   XREF to: 004b335b (CONDITIONAL_JUMP)  ; LAB_004b335b
    TEST EBX,EBX                        ; 004b32d6
        ;   Label: LAB_004b32d6
    JZ 0x004b32ef                       ; 004b32d8
        ;   XREF to: 004b32ef (CONDITIONAL_JUMP)  ; LAB_004b32ef
    PUSH 0xc4                           ; 004b32da
    PUSH 0x62604b                       ; 004b32df | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b32e4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b32e5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b32ea
    XOR EBX,EBX                         ; 004b32ed
    MOV EAX,ESP                         ; 004b32ef
        ;   Label: LAB_004b32ef
    PUSH EAX                            ; 004b32f1
    PUSH 0x626611                       ; 004b32f2 | = "Can't access %s.\nPerhaps someone els..."
    MOV ECX,dword ptr [0x00678a60]      ; 004b32f7 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b32fd | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b32fe
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004b32fe
    ADD ESP,0xc                         ; 004b3303
    TEST EBX,EBX                        ; 004b3306
        ;   Label: LAB_004b3306
    JZ 0x004b331d                       ; 004b3308
        ;   XREF to: 004b331d (CONDITIONAL_JUMP)  ; LAB_004b331d
    PUSH 0xc4                           ; 004b330a
    PUSH 0x62604b                       ; 004b330f | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b3314
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3315
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b331a
    XOR EAX,EAX                         ; 004b331d
        ;   Label: LAB_004b331d
    ADD ESP,0x52c                       ; 004b331f
    POP EBP                             ; 004b3325
    POP EDI                             ; 004b3326
    POP ESI                             ; 004b3327
    POP EBX                             ; 004b3328
    RET                                 ; 004b3329
    PUSH 0x1f4                          ; 004b332a
        ;   Label: LAB_004b332a
    INC ESI                             ; 004b332f
    CALL dword ptr CS:[0x611644]        ; 004b3330 | Sleep
    CMP ESI,0xa                         ; 004b3337
    JL 0x004b329c                       ; 004b333a
        ;   XREF to: 004b329c (CONDITIONAL_JUMP)  ; LAB_004b329c
    JMP 0x004b32ca                      ; 004b3340
        ;   XREF to: 004b32ca (UNCONDITIONAL_JUMP)  ; LAB_004b32ca
    PUSH 0x400                          ; 004b3342
        ;   Label: LAB_004b3342
    PUSH 0x0                            ; 004b3347
    PUSH 0x0                            ; 004b3349
    PUSH EAX                            ; 004b334b
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b334c
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b3351
    MOV EAX,EBX                         ; 004b3354
    JMP 0x004b32cc                      ; 004b3356
        ;   XREF to: 004b32cc (UNCONDITIONAL_JUMP)  ; LAB_004b32cc
    MOV EAX,ESP                         ; 004b335b
        ;   Label: LAB_004b335b
    PUSH EAX                            ; 004b335d
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b335e
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b3363
    TEST EAX,EAX                        ; 004b3366
    JZ 0x004b32d6                       ; 004b3368
        ;   XREF to: 004b32d6 (CONDITIONAL_JUMP)  ; LAB_004b32d6
    LEA EDI,[ESP + 0x214]               ; 004b336e
    MOV ESI,EBP                         ; 004b3375
    PUSH EDI                            ; 004b3377
    MOV AL,byte ptr [ESI]               ; 004b3378
        ;   Label: LAB_004b3378
    MOV byte ptr [EDI],AL               ; 004b337a
    CMP AL,0x0                          ; 004b337c
    JZ 0x004b3390                       ; 004b337e
        ;   XREF to: 004b3390 (CONDITIONAL_JUMP)  ; LAB_004b3390
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3380
    ADD ESI,0x2                         ; 004b3383
    MOV byte ptr [EDI + 0x1],AL         ; 004b3386
    ADD EDI,0x2                         ; 004b3389
    CMP AL,0x0                          ; 004b338c
    JNZ 0x004b3378                      ; 004b338e
        ;   XREF to: 004b3378 (CONDITIONAL_JUMP)  ; LAB_004b3378
    POP EDI                             ; 004b3390
        ;   Label: LAB_004b3390
    LEA EAX,[ESP + 0x214]               ; 004b3391
    PUSH EAX                            ; 004b3398
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b3399
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b339e
    TEST EAX,EAX                        ; 004b33a1
    JZ 0x004b345b                       ; 004b33a3
        ;   XREF to: 004b345b (CONDITIONAL_JUMP)  ; LAB_004b345b
    MOV EAX,dword ptr [ESP + 0x418]     ; 004b33a9
        ;   Label: LAB_004b33a9
    CMP EAX,dword ptr [ESP + 0x204]     ; 004b33b0
    JNZ 0x004b33e0                      ; 004b33b7
        ;   XREF to: 004b33e0 (CONDITIONAL_JUMP)  ; LAB_004b33e0
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004b33b9
    MOV EBP,dword ptr [ESP + 0x420]     ; 004b33c0
    ADD EAX,0x2                         ; 004b33c7
    CMP EAX,EBP                         ; 004b33ca
    JC 0x004b33e0                       ; 004b33cc
        ;   XREF to: 004b33e0 (CONDITIONAL_JUMP)  ; LAB_004b33e0
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004b33ce
    LEA EAX,[EBP + 0x2]                 ; 004b33d5
    CMP EAX,EDX                         ; 004b33d8
    JNC 0x004b34dc                      ; 004b33da
        ;   XREF to: 004b34dc (CONDITIONAL_JUMP)  ; LAB_004b34dc
    PUSH 0x0                            ; 004b33e0
        ;   Label: LAB_004b33e0
    LEA EAX,[ESP + 0x218]               ; 004b33e2
    PUSH EAX                            ; 004b33e9
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b33ea
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b33ef
    LEA EAX,[ESP + 0x214]               ; 004b33f2
    PUSH EAX                            ; 004b33f9
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 004b33fa
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004b33ff
    PUSH 0x3c5                          ; 004b3402
    PUSH 0x6266a4                       ; 004b3407 | = "..\\engine\\fileio.cpp"
    PUSH 0x6266b9                       ; 004b340c | = "wb"
    PUSH 0x0                            ; 004b3411
    LEA EAX,[ESP + 0x224]               ; 004b3413
    PUSH EAX                            ; 004b341a
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b341b
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b3420
    MOV EDI,EAX                         ; 004b3423
    TEST EAX,EAX                        ; 004b3425
    JNZ 0x004b346b                      ; 004b3427
        ;   XREF to: 004b346b (CONDITIONAL_JUMP)  ; LAB_004b346b
    TEST EBX,EBX                        ; 004b3429
    JZ 0x004b3442                       ; 004b342b
        ;   XREF to: 004b3442 (CONDITIONAL_JUMP)  ; LAB_004b3442
    PUSH 0xc4                           ; 004b342d
    PUSH 0x62604b                       ; 004b3432 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b3437
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3438
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b343d
    XOR EBX,EBX                         ; 004b3440
    LEA EAX,[ESP + 0x214]               ; 004b3442
        ;   Label: LAB_004b3442
    PUSH EAX                            ; 004b3449
    PUSH 0x6266bc                       ; 004b344a | = "Can't create %s."
    MOV EDX,dword ptr [0x00678a60]      ; 004b344f | g_CEditorToolsPtr
    PUSH EDX                            ; 004b3455 | g_CEditorToolsPtr
    JMP 0x004b32fe                      ; 004b3456
        ;   XREF to: 004b32fe (UNCONDITIONAL_JUMP)  ; LAB_004b32fe
    MOV dword ptr [ESP + 0x418],0xffffffff ; 004b345b
        ;   Label: LAB_004b345b
    JMP 0x004b33a9                      ; 004b3466
        ;   XREF to: 004b33a9 (UNCONDITIONAL_JUMP)  ; LAB_004b33a9
    MOV ECX,dword ptr [ESP + 0x204]     ; 004b346b
        ;   Label: LAB_004b346b
    PUSH ECX                            ; 004b3472
    LEA ESI,[ESP + 0x218]               ; 004b3473
    PUSH ESI                            ; 004b347a
    LEA ESI,[ESP + 0x8]                 ; 004b347b
    PUSH ESI                            ; 004b347f
    PUSH EAX                            ; 004b3480
    PUSH EBX                            ; 004b3481
    CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 ; 004b3482
        ;   XREF to: 004b2030 (UNCONDITIONAL_CALL)  ; char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, ...)
    ADD ESP,0x14                        ; 004b3487
    MOV ESI,EAX                         ; 004b348a
    TEST EBX,EBX                        ; 004b348c
    JZ 0x004b34a5                       ; 004b348e
        ;   XREF to: 004b34a5 (CONDITIONAL_JUMP)  ; LAB_004b34a5
    PUSH 0xc4                           ; 004b3490
    PUSH 0x62604b                       ; 004b3495 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b349a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b349b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b34a0
    XOR EBX,EBX                         ; 004b34a3
    TEST EDI,EDI                        ; 004b34a5
        ;   Label: LAB_004b34a5
    JZ 0x004b34bc                       ; 004b34a7
        ;   XREF to: 004b34bc (CONDITIONAL_JUMP)  ; LAB_004b34bc
    PUSH 0xc4                           ; 004b34a9
    PUSH 0x62604b                       ; 004b34ae | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b34b3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b34b4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b34b9
    TEST ESI,ESI                        ; 004b34bc
        ;   Label: LAB_004b34bc
    JNZ 0x004b3525                      ; 004b34be
        ;   XREF to: 004b3525 (CONDITIONAL_JUMP)  ; LAB_004b3525
    MOV ESI,dword ptr [ESP + 0x20c]     ; 004b34c0
    PUSH ESI                            ; 004b34c7
    LEA EAX,[ESP + 0x218]               ; 004b34c8
    PUSH EAX                            ; 004b34cf
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004b34d0
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
    ADD ESP,0x8                         ; 004b34d5
    TEST EAX,EAX                        ; 004b34d8
    JZ 0x004b3539                       ; 004b34da
        ;   XREF to: 004b3539 (CONDITIONAL_JUMP)  ; LAB_004b3539
    TEST EBX,EBX                        ; 004b34dc
        ;   Label: LAB_004b34dc
    JZ 0x004b34f5                       ; 004b34de
        ;   XREF to: 004b34f5 (CONDITIONAL_JUMP)  ; LAB_004b34f5
    PUSH 0xc4                           ; 004b34e0
    PUSH 0x62604b                       ; 004b34e5 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b34ea
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b34eb
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b34f0
    XOR EBX,EBX                         ; 004b34f3
    LEA EAX,[ESP + 0x214]               ; 004b34f5
        ;   Label: LAB_004b34f5
    PUSH EAX                            ; 004b34fc
    PUSH 0x0                            ; 004b34fd
    CALL engine_dosio.c_getFileTimestamp_FUN_00481960 ; 004b34ff
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b3504
    MOV ESI,EAX                         ; 004b3507
    TEST EAX,EAX                        ; 004b3509
    JL 0x004b3511                       ; 004b350b
        ;   XREF to: 004b3511 (CONDITIONAL_JUMP)  ; LAB_004b3511
    TEST AL,0x8                         ; 004b350d
    JZ 0x004b3562                       ; 004b350f
        ;   XREF to: 004b3562 (CONDITIONAL_JUMP)  ; LAB_004b3562
    TEST ESI,ESI                        ; 004b3511
        ;   Label: LAB_004b3511
    JL 0x004b3579                       ; 004b3513
        ;   XREF to: 004b3579 (CONDITIONAL_JUMP)  ; LAB_004b3579
    MOV EAX,0x1                         ; 004b3515
    ADD ESP,0x52c                       ; 004b351a
    POP EBP                             ; 004b3520
    POP EDI                             ; 004b3521
    POP ESI                             ; 004b3522
    POP EBX                             ; 004b3523
    RET                                 ; 004b3524
    PUSH ESI                            ; 004b3525
        ;   Label: LAB_004b3525
    MOV EAX,[0x00678a60]                ; 004b3526 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b352b | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b352c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b3531
    JMP 0x004b3306                      ; 004b3534
        ;   XREF to: 004b3306 (UNCONDITIONAL_JUMP)  ; LAB_004b3306
    LEA EAX,[ESP + 0x214]               ; 004b3539
        ;   Label: LAB_004b3539
    PUSH EAX                            ; 004b3540
    PUSH 0x626577                       ; 004b3541 | = "WARNING: Error setting date/time on %..."
    MOV EDI,dword ptr [0x00678a60]      ; 004b3546 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b354c | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b354d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b3552
    XOR EAX,EAX                         ; 004b3555
    ADD ESP,0x52c                       ; 004b3557
    POP EBP                             ; 004b355d
    POP EDI                             ; 004b355e
    POP ESI                             ; 004b355f
    POP EBX                             ; 004b3560
    RET                                 ; 004b3561
    OR AL,0x8                           ; 004b3562
        ;   Label: LAB_004b3562
    PUSH EAX                            ; 004b3564
    LEA EAX,[ESP + 0x218]               ; 004b3565
    PUSH EAX                            ; 004b356c
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b356d
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; bool engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b3572
    TEST EAX,EAX                        ; 004b3575
    JNZ 0x004b3511                      ; 004b3577
        ;   XREF to: 004b3511 (CONDITIONAL_JUMP)  ; LAB_004b3511
    LEA EAX,[ESP + 0x214]               ; 004b3579
        ;   Label: LAB_004b3579
    PUSH EAX                            ; 004b3580
    PUSH 0x6266cd                       ; 004b3581 | = "Error turning on read-only bit for %s."
    MOV EBP,dword ptr [0x00678a60]      ; 004b3586 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b358c | g_CEditorToolsPtr
    JMP 0x004b32fe                      ; 004b358d
        ;   XREF to: 004b32fe (UNCONDITIONAL_JUMP)  ; LAB_004b32fe

