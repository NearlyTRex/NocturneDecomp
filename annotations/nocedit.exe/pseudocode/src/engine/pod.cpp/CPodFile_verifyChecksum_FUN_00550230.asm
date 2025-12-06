; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile * this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3d0]:4  local_3d0
; undefined4       Stack[-0x3cc]:4  local_3cc
; undefined4       Stack[-0x3c8]:4  local_3c8
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6ea2
;   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 at 005512ae
;
; Referenced Globals:
;   char s_EmptyString_0064015e = \x00
;   TerminatedCString s_engine_pod_cpp_0064015f
;   TerminatedCString s_rb_00640171
;   TerminatedCString s_engine_pod_cpp_00640174
;   TerminatedCString s_Checking_individual_file_0064035d
;   TerminatedCString s_CRC_CHECK_FAILED_on_thes_0064037b
;   TerminatedCString s_engine_pod_cpp_006403a1
;   TerminatedCString s_Invalid_pod_version_for__006403b3
;   TerminatedCString s_Verifying_CRC_for_s_006403d2
;   TerminatedCString s_engine_pod_cpp_006403ea
;   TerminatedCString s_rb_006403fc
;   TerminatedCString s_engine_pod_cpp_006403ff
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
;   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550230
        ;   Label: engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
    PUSH ESI                            ; 00550231
    PUSH EDI                            ; 00550232
    PUSH EBP                            ; 00550233
    SUB ESP,0x3b8                       ; 00550234
    MOV EBX,dword ptr [ESP + 0x3cc]     ; 0055023a
    MOV EDX,dword ptr [EBX]             ; 00550241
    TEST EDX,EDX                        ; 00550243
    JZ 0x00550404                       ; 00550245 | LAB_00550404
        ;   XREF to: 00550404 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x4],0x0        ; 0055024b
    JZ 0x00550404                       ; 0055024f | LAB_00550404
        ;   XREF to: 00550404 (CONDITIONAL_JUMP)
    CMP EDX,0xc8                        ; 00550255
    JZ 0x00550413                       ; 0055025b | LAB_00550413
        ;   XREF to: 00550413 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX]             ; 00550261
        ;   Label: LAB_00550261
    MOV ESI,0xffffffff                  ; 00550263
    CMP ECX,0x1                         ; 00550268
    JNZ 0x0055053d                      ; 0055026b | LAB_0055053d
        ;   XREF to: 0055053d (CONDITIONAL_JUMP)
    MOV ESI,0x54                        ; 00550271
    LEA EDI,[EBX + 0x4]                 ; 00550276
        ;   Label: LAB_00550276
    PUSH EDI                            ; 00550279
    PUSH 0x6403d2                       ; 0055027a | = "Verifying CRC for %s..." | s_Verifying_CRC_for_s_006403d2 = Verifying CRC for %s...
    MOV EBX,dword ptr [0x00678a60]      ; 0055027f | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00550285 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00550286 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0055028b
    PUSH 0x2ef                          ; 0055028e
    PUSH 0x6403ea                       ; 00550293 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006403ea = ..\engine\pod.cpp
    PUSH 0x6403fc                       ; 00550298 | = "rb" | s_rb_006403fc = rb
    PUSH 0x0                            ; 0055029d
    PUSH EDI                            ; 0055029f
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005502a0 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 005502a5
    ADD ESP,0x14                        ; 005502a7
    TEST EAX,EAX                        ; 005502aa
    JZ 0x00550554                       ; 005502ac | LAB_00550554
        ;   XREF to: 00550554 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005502b2
    LEA EAX,[ESI + -0x4]                ; 005502b4
    PUSH EAX                            ; 005502b7
    PUSH EBX                            ; 005502b8
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005502b9 | int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005502be
    PUSH EBX                            ; 005502c1
    PUSH 0x1                            ; 005502c2
    PUSH 0x4                            ; 005502c4
    LEA EAX,[ESP + 0x3b4]               ; 005502c6
    PUSH EAX                            ; 005502cd
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005502ce | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005502d3
    PUSH 0x2f3                          ; 005502d6
    PUSH 0x6403ff                       ; 005502db | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006403ff = ..\engine\pod.cpp
    PUSH EBX                            ; 005502e0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005502e1 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005502e6
    PUSH EDI                            ; 005502e9
    PUSH 0x64015e                       ; 005502ea | char s_EmptyString_0064015e
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005502ef | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005502f4
    PUSH 0xf2                           ; 005502f7
    PUSH 0x64015f                       ; 005502fc | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_0064015f = ..\engine\pod.cpp
    PUSH 0x640171                       ; 00550301 | = "rb" | s_rb_00640171 = rb
    PUSH 0x0                            ; 00550306
    PUSH EDI                            ; 00550308
    MOV EBX,EAX                         ; 00550309
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0055030b | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00550310
    PUSH 0x0                            ; 00550313
    SUB EBX,ESI                         ; 00550315
    PUSH ESI                            ; 00550317
    MOV EBP,EAX                         ; 00550318
    MOV EDI,EBX                         ; 0055031a
    PUSH EAX                            ; 0055031c
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0055031d
    MOV ESI,0xffffffff                  ; 00550324
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00550329 | int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0055032e
    CMP EBX,0x10000                     ; 00550331
    JL 0x0055037f                       ; 00550337 | LAB_0055037f
        ;   XREF to: 0055037f (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00550339
        ;   Label: LAB_00550339
    PUSH 0x1                            ; 0055033a
    PUSH 0x10000                        ; 0055033c
    PUSH 0x30d5090                      ; 00550341 | char[65536] g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 00550346 | char[65536] g_FileIOBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0055034b | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00550350
    MOV EAX,ESI                         ; 00550353
    XOR ESI,ESI                         ; 00550355
    XOR EDX,EDX                         ; 00550357
        ;   Label: LAB_00550357
    MOV DL,byte ptr [EBX]               ; 00550359 | char[65536] g_FileIOBuffer
    PUSH EDX                            ; 0055035b
    PUSH EAX                            ; 0055035c
    INC EBX                             ; 0055035d | DAT_030d5091
    INC ESI                             ; 0055035e
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0055035f | uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00550364
    CMP ESI,0x10000                     ; 00550367
    JC 0x00550357                       ; 0055036d | LAB_00550357
        ;   XREF to: 00550357 (CONDITIONAL_JUMP)
    SUB EDI,0x10000                     ; 0055036f
    MOV ESI,EAX                         ; 00550375
    CMP EDI,0x10000                     ; 00550377
    JGE 0x00550339                      ; 0055037d | LAB_00550339
        ;   XREF to: 00550339 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 0055037f
        ;   Label: LAB_0055037f
    PUSH 0x1                            ; 00550380
    PUSH EDI                            ; 00550382
    PUSH 0x30d5090                      ; 00550383 | char[65536] g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 00550388 | char[65536] g_FileIOBuffer
    MOV EBP,ESI                         ; 0055038d
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0055038f | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00550394
    XOR ESI,ESI                         ; 00550397
    MOV dword ptr [ESP + 0x3b0],EDI     ; 00550399
    TEST EDI,EDI                        ; 005503a0
    JBE 0x005503d0                      ; 005503a2 | LAB_005503d0
        ;   XREF to: 005503d0 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x3b0]     ; 005503a4
    XOR EAX,EAX                         ; 005503ab
        ;   Label: LAB_005503ab
    MOV AL,byte ptr [EBX]               ; 005503ad | char[65536] g_FileIOBuffer
    PUSH EAX                            ; 005503af
    PUSH EBP                            ; 005503b0
    INC EBX                             ; 005503b1 | DAT_030d5091
    INC ESI                             ; 005503b2
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 005503b3 | uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005503b8
    MOV EBP,EAX                         ; 005503bb
    CMP ESI,EDI                         ; 005503bd
    JC 0x005503ab                       ; 005503bf | LAB_005503ab
        ;   XREF to: 005503ab (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005503c1
    LEA EDX,[EDX]                       ; 005503c7
    LEA EAX,[EAX]                       ; 005503cd
    PUSH 0xfb                           ; 005503d0
        ;   Label: LAB_005503d0
    PUSH 0x640174                       ; 005503d5 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640174 = ..\engine\pod.cpp
    MOV EAX,dword ptr [ESP + 0x3b4]     ; 005503da
    PUSH EAX                            ; 005503e1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005503e2 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005503e7
    CMP EBP,dword ptr [ESP + 0x3a8]     ; 005503ea
    SETZ AL                             ; 005503f1
    MOVZX ESI,AL                        ; 005503f4
    MOV EAX,ESI                         ; 005503f7
    ADD ESP,0x3b8                       ; 005503f9
    POP EBP                             ; 005503ff
    POP EDI                             ; 00550400
    POP ESI                             ; 00550401
    POP EBX                             ; 00550402
    RET                                 ; 00550403
    XOR ESI,ESI                         ; 00550404
        ;   Label: LAB_00550404
    MOV EAX,ESI                         ; 00550406
    ADD ESP,0x3b8                       ; 00550408
    POP EBP                             ; 0055040e
    POP EDI                             ; 0055040f
    POP ESI                             ; 00550410
    POP EBX                             ; 00550411
    RET                                 ; 00550412
    PUSH 0x64035d                       ; 00550413 | = "Checking individual file CRCs" | s_Checking_individual_file_0064035d = Checking individual file CRCs
        ;   Label: LAB_00550413
    MOV ESI,dword ptr [0x00678a60]      ; 00550418 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 0055041e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0055041f | void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00550424
    MOV EAX,ESP                         ; 00550427
    PUSH EAX                            ; 00550429
    XOR EDI,EDI                         ; 0055042a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0055042c | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x410]     ; 00550431
    ADD ESP,0x4                         ; 00550437
    TEST EBP,EBP                        ; 0055043a
    JLE 0x005504e2                      ; 0055043c | LAB_005504e2
        ;   XREF to: 005504e2 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00550442
    MOV EAX,dword ptr [EBX + 0x410]     ; 00550444
        ;   Label: LAB_00550444
    DEC EAX                             ; 0055044a
    IMUL ECX,EAX,0x14                   ; 0055044b
    MOV EAX,dword ptr [EBX + 0x414]     ; 0055044e
    MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8] ; 00550454
    MOV EBP,dword ptr [ECX + EAX*0x1 + 0x4] ; 00550458
    MOV ECX,dword ptr [EAX + 0x8]       ; 0055045c
    ADD EDX,EBP                         ; 0055045f
    SUB EDX,ECX                         ; 00550461
    MOV dword ptr [ESP + 0x3b4],EDX     ; 00550463
    FILD dword ptr [ESP + 0x3b4]        ; 0055046a
    SUB ESP,0x4                         ; 00550471
    LEA EDX,[EAX + ESI*0x1]             ; 00550474
    FSTP float ptr [ESP]                ; 00550477
    MOV EDX,dword ptr [EDX + 0x8]       ; 0055047a
    SUB EDX,ECX                         ; 0055047d
    MOV dword ptr [ESP + 0x3b8],EDX     ; 0055047f
    FILD dword ptr [ESP + 0x3b8]        ; 00550486
    SUB ESP,0x4                         ; 0055048d
    MOV EAX,[0x00678a60]                ; 00550490 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00550495
    PUSH EAX                            ; 00550498 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00550499 | void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0055049e
    PUSH EDI                            ; 005504a1
    PUSH EBX                            ; 005504a2
    MOV EBP,dword ptr [EBX + 0x414]     ; 005504a3
    CALL engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 ; 005504a9 | uint engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile * this_ptr, int file_index)
        ;   XREF to: 005507f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESI + EBP*0x1 + 0x10] ; 005504ae
    ADD ESP,0x8                         ; 005504b2
    CMP EAX,EDX                         ; 005504b5
    JZ 0x005504d0                       ; 005504b7 | LAB_005504d0
        ;   XREF to: 005504d0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x414]     ; 005504b9
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 005504bf
    PUSH ECX                            ; 005504c2
    LEA EAX,[ESP + 0x4]                 ; 005504c3
    PUSH EAX                            ; 005504c7
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005504c8 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005504cd
    INC EDI                             ; 005504d0
        ;   Label: LAB_005504d0
    MOV EBP,dword ptr [EBX + 0x410]     ; 005504d1
    ADD ESI,0x14                        ; 005504d7
    CMP EDI,EBP                         ; 005504da
    JL 0x00550444                       ; 005504dc | LAB_00550444
        ;   XREF to: 00550444 (CONDITIONAL_JUMP)
    MOV EAX,[0x00678a60]                ; 005504e2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_005504e2
    PUSH EAX                            ; 005504e7 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005504e8 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005504ed
    MOV EDX,dword ptr [ESP]             ; 005504f0
    TEST EDX,EDX                        ; 005504f3
    JNZ 0x0055050a                      ; 005504f5 | LAB_0055050a
        ;   XREF to: 0055050a (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005504f7
    LEA EAX,[ESP + 0x4]                 ; 005504f8
    PUSH EAX                            ; 005504fc
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005504fd | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00550502
    JMP 0x00550261                      ; 00550505 | LAB_00550261
        ;   XREF to: 00550261 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0055050a
        ;   Label: LAB_0055050a
    PUSH -0x1                           ; 0055050c
    PUSH 0x64037b                       ; 0055050e | = "!!!CRC CHECK FAILED!! on these files:" | s_CRC_CHECK_FAILED_on_thes_0064037b = !!!CRC CHECK FAILED!! on these files:
    LEA EAX,[ESP + 0xc]                 ; 00550513
    PUSH EAX                            ; 00550517
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00550518 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0055051d
    XOR ESI,ESI                         ; 00550520
    PUSH ESI                            ; 00550522
    LEA EAX,[ESP + 0x4]                 ; 00550523
    PUSH EAX                            ; 00550527
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00550528 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055052d
    MOV EAX,ESI                         ; 00550530
    ADD ESP,0x3b8                       ; 00550532
    POP EBP                             ; 00550538
    POP EDI                             ; 00550539
    POP ESI                             ; 0055053a
    POP EBX                             ; 0055053b
    RET                                 ; 0055053c
    CMP ECX,0xc8                        ; 0055053d
        ;   Label: LAB_0055053d
    JNZ 0x0055054f                      ; 00550543 | LAB_0055054f
        ;   XREF to: 0055054f (CONDITIONAL_JUMP)
    MOV ESI,0x8                         ; 00550545
    JMP 0x00550276                      ; 0055054a | LAB_00550276
        ;   XREF to: 00550276 (UNCONDITIONAL_JUMP)
    CMP ECX,0x64                        ; 0055054f
        ;   Label: LAB_0055054f
    JNZ 0x00550563                      ; 00550552 | LAB_00550563
        ;   XREF to: 00550563 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00550554
        ;   Label: LAB_00550554
    MOV EAX,ESI                         ; 00550556
    ADD ESP,0x3b8                       ; 00550558
    POP EBP                             ; 0055055e
    POP EDI                             ; 0055055f
    POP ESI                             ; 00550560
    POP EBX                             ; 00550561
    RET                                 ; 00550562
    MOV EAX,0x6403a1                    ; 00550563 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_006403a1 = ..\engine\pod.cpp
        ;   Label: LAB_00550563
    PUSH ECX                            ; 00550568
    MOV [0x02f0ca48],EAX                ; 00550569 | char * g_CurrentFilename
    LEA EAX,[EBX + 0x4]                 ; 0055056e
    PUSH EAX                            ; 00550571
    MOV EDX,0x2e6                       ; 00550572
    PUSH 0x6403b3                       ; 00550577 | = "Invalid pod version for %s: %d" | s_Invalid_pod_version_for__006403b3 = Invalid pod version for %s: %d
    MOV dword ptr [0x02f0ca4c],EDX      ; 0055057c | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550582 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00550587
    JMP 0x00550276                      ; 0055058a | LAB_00550276
        ;   XREF to: 00550276 (UNCONDITIONAL_JUMP)

