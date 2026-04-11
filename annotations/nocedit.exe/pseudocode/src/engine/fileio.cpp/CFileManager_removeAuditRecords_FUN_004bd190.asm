; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager *this_ptr,char *pod_file_path,time_t cutoff_timestamp)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_file_path
; time_t           Stack[0xc]:4   cutoff_timestamp
; Local Variables:
; CPodFile         Stack[-0x9d8]:1068  local_9d8
; undefined4[8]    Stack[-0x5ac]:32  local_5ac
; uint             Stack[-0x58c]:4  local_58c
; undefined4[10]   Stack[-0x474]:40  local_474
; char[272]        Stack[-0x44c]:272  local_44c
; undefined4[78]   Stack[-0x33c]:312  local_33c
; char[256]        Stack[-0x204]:256  local_204
; char[100]        Stack[-0x104]:100  local_104
; undefined1[92]   Stack[-0xa0]:92  local_a0
; int              Stack[-0x44]:4  local_44
; _tm              Stack[-0x40]:36  local_40
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_006276ab
;   TerminatedCString s_engine_fileio_cpp_006276c0
;   TerminatedCString s_engine_fileio_cpp_006276d5
;   TerminatedCString s_Out_of_memory_for_pod_au_006276ea
;   TerminatedCString s_pod_006293c5
;   TerminatedCString s_Select_POD_file_to_remov_006293cb
;   TerminatedCString s_Can_t_mount_s_006293f3
;   TerminatedCString s_Can_t_remove_audit_recor_00629403
;   TerminatedCString s_Remove_audit_records_ear_00629436
;   TerminatedCString s_d_c_d_c_d_0062946f
;   TerminatedCString s_Please_enter_a_valid_dat_00629480
;   TerminatedCString s_No_audit_records_removed_0062949a
;   TerminatedCString s_engine_fileio_cpp_006294b3
;   TerminatedCString s_engine_fileio_cpp_006294c8
;   TerminatedCString s_r_b_006294dd
;   ... and 13 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fflush_FUN_00601540
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_time.c__mktime_FUN_00600f80
;   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd190
        ;   Label: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
    PUSH ESI                            ; 004bd191
    PUSH EDI                            ; 004bd192
    PUSH EBP                            ; 004bd193
    SUB ESP,0x9c8                       ; 004bd194
    MOV ESI,dword ptr [ESP + 0x9e0]     ; 004bd19a
    TEST ESI,ESI                        ; 004bd1a1
    JNZ 0x004bd1d6                      ; 004bd1a3
        ;   XREF to: 004bd1d6 (CONDITIONAL_JUMP)  ; LAB_004bd1d6
    PUSH ESI                            ; 004bd1a5
    LEA EAX,[ESP + 0x7d8]               ; 004bd1a6
    PUSH EAX                            ; 004bd1ad
    PUSH 0x6293c5                       ; 004bd1ae | = "*.pod"
    PUSH 0x6293cb                       ; 004bd1b3 | = "Select POD file to remove audit records"
    MOV EDX,dword ptr [0x00678a60]      ; 004bd1b8 | g_CEditorToolsPtr
    PUSH EDX                            ; 004bd1be | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004bd1bf
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 004bd1c4
    TEST EAX,EAX                        ; 004bd1c7
    JNZ 0x004bd1f7                      ; 004bd1c9
        ;   XREF to: 004bd1f7 (CONDITIONAL_JUMP)  ; LAB_004bd1f7
    ADD ESP,0x9c8                       ; 004bd1cb
    POP EBP                             ; 004bd1d1
    POP EDI                             ; 004bd1d2
    POP ESI                             ; 004bd1d3
    POP EBX                             ; 004bd1d4
    RET                                 ; 004bd1d5
    LEA EDI,[ESP + 0x7d4]               ; 004bd1d6
        ;   Label: LAB_004bd1d6
    PUSH EDI                            ; 004bd1dd
    MOV AL,byte ptr [ESI]               ; 004bd1de
        ;   Label: LAB_004bd1de
    MOV byte ptr [EDI],AL               ; 004bd1e0
    CMP AL,0x0                          ; 004bd1e2
    JZ 0x004bd1f6                       ; 004bd1e4
        ;   XREF to: 004bd1f6 (CONDITIONAL_JUMP)  ; LAB_004bd1f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd1e6
    ADD ESI,0x2                         ; 004bd1e9
    MOV byte ptr [EDI + 0x1],AL         ; 004bd1ec
    ADD EDI,0x2                         ; 004bd1ef
    CMP AL,0x0                          ; 004bd1f2
    JNZ 0x004bd1de                      ; 004bd1f4
        ;   XREF to: 004bd1de (CONDITIONAL_JUMP)  ; LAB_004bd1de
    POP EDI                             ; 004bd1f6
        ;   Label: LAB_004bd1f6
    MOV EAX,ESP                         ; 004bd1f7
        ;   Label: LAB_004bd1f7
    PUSH EAX                            ; 004bd1f9
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004bd1fa
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004bd1ff
    LEA EAX,[ESP + 0x7d4]               ; 004bd202
    PUSH EAX                            ; 004bd209
    LEA EAX,[ESP + 0x4]                 ; 004bd20a
    PUSH EAX                            ; 004bd20e
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004bd20f
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bd214
    TEST EAX,EAX                        ; 004bd217
    JZ 0x004bd2d7                       ; 004bd219
        ;   XREF to: 004bd2d7 (CONDITIONAL_JUMP)  ; LAB_004bd2d7
    CMP dword ptr [ESP],0xc8            ; 004bd21f
    JZ 0x004bd23c                       ; 004bd226
        ;   XREF to: 004bd23c (CONDITIONAL_JUMP)  ; LAB_004bd23c
    PUSH 0x629403                       ; 004bd228 | = "Can't remove audit records on POD of ..."
    MOV ESI,dword ptr [0x00678a60]      ; 004bd22d | g_CEditorToolsPtr
    PUSH ESI                            ; 004bd233 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bd234
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bd239
    CMP dword ptr [ESP + 0x9e4],0x0     ; 004bd23c
        ;   Label: LAB_004bd23c
    JNZ 0x004bd3c3                      ; 004bd244
        ;   XREF to: 004bd3c3 (CONDITIONAL_JUMP)  ; LAB_004bd3c3
    MOV ECX,0x19                        ; 004bd24a
    LEA EDI,[ESP + 0x8d4]               ; 004bd24f
    MOV ESI,0x67a260                    ; 004bd256 | g_DefaultAuditRecordPath
    MOVSD.REP ES:EDI,ESI                ; 004bd25b | g_DefaultAuditRecordPath | g_DefaultAuditRecordPath+4
    MOV EDI,0xffffffff                  ; 004bd25d
    MOV ESI,0x64                        ; 004bd262
    XOR EBX,EBX                         ; 004bd267
    PUSH 0x1                            ; 004bd269
        ;   Label: LAB_004bd269
    PUSH ESI                            ; 004bd26b
    LEA EAX,[ESP + 0x8dc]               ; 004bd26c
    PUSH EAX                            ; 004bd273
    PUSH 0x629436                       ; 004bd274 | = "Remove audit records earlier than thi..."
    MOV EBP,dword ptr [0x00678a60]      ; 004bd279 | g_CEditorToolsPtr
    PUSH EBP                            ; 004bd27f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004bd280
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004bd285
    TEST EAX,EAX                        ; 004bd288
    JZ 0x004bd30d                       ; 004bd28a
        ;   XREF to: 004bd30d (CONDITIONAL_JUMP)  ; LAB_004bd30d
    LEA EAX,[ESP + 0x9c4]               ; 004bd290
    PUSH EAX                            ; 004bd297
    LEA EAX,[ESP + 0x9c4]               ; 004bd298
    PUSH EAX                            ; 004bd29f
    LEA EAX,[ESP + 0x9c4]               ; 004bd2a0
    PUSH EAX                            ; 004bd2a7
    PUSH 0x62946f                       ; 004bd2a8 | = "%d %*c %d %*c %d"
    LEA EAX,[ESP + 0x8e4]               ; 004bd2ad
    PUSH EAX                            ; 004bd2b4
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004bd2b5
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 004bd2ba
    CMP EAX,0x3                         ; 004bd2bd
    JZ 0x004bd326                       ; 004bd2c0
        ;   XREF to: 004bd326 (CONDITIONAL_JUMP)  ; LAB_004bd326
    PUSH 0x629480                       ; 004bd2c2 | = "Please enter a valid date"
        ;   Label: LAB_004bd2c2
    MOV EAX,[0x00678a60]                ; 004bd2c7 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bd2cc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bd2cd
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bd2d2
    JMP 0x004bd269                      ; 004bd2d5
        ;   XREF to: 004bd269 (UNCONDITIONAL_JUMP)  ; LAB_004bd269
    LEA EAX,[ESP + 0x7d4]               ; 004bd2d7
        ;   Label: LAB_004bd2d7
    PUSH EAX                            ; 004bd2de
    PUSH 0x6293f3                       ; 004bd2df | = "Can't mount %s!"
    MOV ECX,dword ptr [0x00678a60]      ; 004bd2e4 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bd2ea | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bd2eb
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bd2f0
    PUSH 0x0                            ; 004bd2f3
    LEA EAX,[ESP + 0x4]                 ; 004bd2f5
    PUSH EAX                            ; 004bd2f9
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bd2fa
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd2ff
    ADD ESP,0x9c8                       ; 004bd302
    POP EBP                             ; 004bd308
    POP EDI                             ; 004bd309
    POP ESI                             ; 004bd30a
    POP EBX                             ; 004bd30b
    RET                                 ; 004bd30c
    PUSH EAX                            ; 004bd30d
        ;   Label: LAB_004bd30d
    LEA EAX,[ESP + 0x4]                 ; 004bd30e
    PUSH EAX                            ; 004bd312
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bd313
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd318
    ADD ESP,0x9c8                       ; 004bd31b
    POP EBP                             ; 004bd321
    POP EDI                             ; 004bd322
    POP ESI                             ; 004bd323
    POP EBX                             ; 004bd324
    RET                                 ; 004bd325
    MOV EAX,dword ptr [ESP + 0x9c4]     ; 004bd326
        ;   Label: LAB_004bd326
    CMP EAX,0x32                        ; 004bd32d
    JGE 0x004bd4ea                      ; 004bd330
        ;   XREF to: 004bd4ea (CONDITIONAL_JUMP)  ; LAB_004bd4ea
    LEA EBP,[EAX + 0x7d0]               ; 004bd336
    MOV dword ptr [ESP + 0x9c4],EBP     ; 004bd33c
    PUSH 0x24                           ; 004bd343
        ;   Label: LAB_004bd343
    PUSH EBX                            ; 004bd345
    LEA EAX,[ESP + 0x9a0]               ; 004bd346
    PUSH EAX                            ; 004bd34d
    CALL crt_memory.c_memset_FUN_005fde40 ; 004bd34e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004bd353
    MOV EAX,dword ptr [ESP + 0x9c0]     ; 004bd356
    MOV dword ptr [ESP + 0x9a4],EAX     ; 004bd35d
    MOV EAX,dword ptr [ESP + 0x9bc]     ; 004bd364
    ADD EAX,EDI                         ; 004bd36b
    MOV dword ptr [ESP + 0x9a8],EAX     ; 004bd36d
    MOV EAX,dword ptr [ESP + 0x9c4]     ; 004bd374
    SUB EAX,0x76c                       ; 004bd37b
    MOV dword ptr [ESP + 0x9a0],EBX     ; 004bd380
    MOV dword ptr [ESP + 0x9ac],EAX     ; 004bd387
    LEA EAX,[ESP + 0x998]               ; 004bd38e
    MOV dword ptr [ESP + 0x9b8],EDI     ; 004bd395
    PUSH EAX                            ; 004bd39c
    MOV dword ptr [ESP + 0x9a0],EBX     ; 004bd39d
    MOV dword ptr [ESP + 0x99c],EBX     ; 004bd3a4
    CALL crt_time.c__mktime_FUN_00600f80 ; 004bd3ab
        ;   XREF to: 00600f80 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_00600f80(_tm * timeptr)
    ADD ESP,0x4                         ; 004bd3b0
    MOV dword ptr [ESP + 0x9e4],EAX     ; 004bd3b3
    CMP EAX,-0x1                        ; 004bd3ba
    JZ 0x004bd2c2                       ; 004bd3bd
        ;   XREF to: 004bd2c2 (CONDITIONAL_JUMP)  ; LAB_004bd2c2
    XOR EBP,EBP                         ; 004bd3c3
        ;   Label: LAB_004bd3c3
    MOV ECX,dword ptr [0x02d12d34]      ; 004bd3c5 | g_AuditRecordsArray
    MOV dword ptr [0x02d12d30],EBP      ; 004bd3cb | g_AuditRecordCount
    TEST ECX,ECX                        ; 004bd3d1
    JZ 0x004bd3ee                       ; 004bd3d3
        ;   XREF to: 004bd3ee (CONDITIONAL_JUMP)  ; LAB_004bd3ee
    PUSH 0x79a                          ; 004bd3d5
    PUSH 0x6276ab                       ; 004bd3da | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004bd3df
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004bd3e0
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004bd3e5
    MOV dword ptr [0x02d12d34],EBP      ; 004bd3e8 | g_AuditRecordsArray
    MOV EDI,dword ptr [ESP + 0x41c]     ; 004bd3ee
        ;   Label: LAB_004bd3ee
    XOR EBX,EBX                         ; 004bd3f5
    TEST EDI,EDI                        ; 004bd3f7
    JLE 0x004bd446                      ; 004bd3f9
        ;   XREF to: 004bd446 (CONDITIONAL_JUMP)  ; LAB_004bd446
    PUSH EBX                            ; 004bd3fb
        ;   Label: LAB_004bd3fb
    LEA EAX,[ESP + 0x4]                 ; 004bd3fc
    PUSH EAX                            ; 004bd400
    LEA ESI,[ESP + 0x6a4]               ; 004bd401
    LEA EDI,[ESP + 0x434]               ; 004bd408
    CALL engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 ; 004bd40f
        ;   XREF to: 00550590 (UNCONDITIONAL_CALL)  ; CPodAuditRecord * engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile * this_ptr, int record_index, CPodAuditRecord * out_record)
    MOV ECX,0x4e                        ; 004bd414
    LEA ESI,[ESP + 0x6a4]               ; 004bd419
    ADD ESP,0x8                         ; 004bd420
    MOVSD.REP ES:EDI,ESI                ; 004bd423
    MOV EAX,dword ptr [ESP + 0x44c]     ; 004bd425
    CMP EAX,dword ptr [ESP + 0x9e4]     ; 004bd42c
    JNC 0x004bd504                      ; 004bd433
        ;   XREF to: 004bd504 (CONDITIONAL_JUMP)  ; LAB_004bd504
    INC EBP                             ; 004bd439
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004bd43a
        ;   Label: LAB_004bd43a
    INC EBX                             ; 004bd441
    CMP EBX,EAX                         ; 004bd442
    JL 0x004bd3fb                       ; 004bd444
        ;   XREF to: 004bd3fb (CONDITIONAL_JUMP)  ; LAB_004bd3fb
    XOR ESI,ESI                         ; 004bd446
        ;   Label: LAB_004bd446
    TEST EBP,EBP                        ; 004bd448
    JZ 0x004bd5e6                       ; 004bd44a
        ;   XREF to: 004bd5e6 (CONDITIONAL_JUMP)  ; LAB_004bd5e6
    PUSH 0x1170                         ; 004bd450
    PUSH 0x6294c8                       ; 004bd455 | = "..\\engine\\fileio.cpp"
    PUSH 0x6294dd                       ; 004bd45a | = "r+b"
    PUSH ESI                            ; 004bd45f
    LEA EAX,[ESP + 0x14]                ; 004bd460
    PUSH EAX                            ; 004bd464
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bd465
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004bd46a
    ADD ESP,0x14                        ; 004bd46c
    MOV ESI,EAX                         ; 004bd46f
    TEST EAX,EAX                        ; 004bd471
    JNZ 0x004bd5fc                      ; 004bd473
        ;   XREF to: 004bd5fc (CONDITIONAL_JUMP)  ; LAB_004bd5fc
    PUSH 0x6294e1                       ; 004bd479 | = "Can't open %s to remove audit records"
    MOV EDI,dword ptr [0x00678a60]      ; 004bd47e | g_CEditorToolsPtr
    PUSH EDI                            ; 004bd484 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bd485
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bd48a
        ;   Label: LAB_004bd48a
    TEST ESI,ESI                        ; 004bd48d
        ;   Label: LAB_004bd48d
    JZ 0x004bd4a4                       ; 004bd48f
        ;   XREF to: 004bd4a4 (CONDITIONAL_JUMP)  ; LAB_004bd4a4
    PUSH 0x1169                         ; 004bd491
    PUSH 0x6294b3                       ; 004bd496 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004bd49b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bd49c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bd4a1
    XOR EAX,EAX                         ; 004bd4a4
        ;   Label: LAB_004bd4a4
    MOV EDX,dword ptr [0x02d12d34]      ; 004bd4a6 | g_AuditRecordsArray
    MOV [0x02d12d30],EAX                ; 004bd4ac | g_AuditRecordCount
    TEST EDX,EDX                        ; 004bd4b1
    JZ 0x004bd4d0                       ; 004bd4b3
        ;   XREF to: 004bd4d0 (CONDITIONAL_JUMP)  ; LAB_004bd4d0
    PUSH 0x79a                          ; 004bd4b5
    PUSH 0x6276ab                       ; 004bd4ba | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004bd4bf
    XOR EBX,EBX                         ; 004bd4c0
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004bd4c2
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004bd4c7
    MOV dword ptr [0x02d12d34],EBX      ; 004bd4ca | g_AuditRecordsArray
    PUSH 0x0                            ; 004bd4d0
        ;   Label: LAB_004bd4d0
    LEA EAX,[ESP + 0x4]                 ; 004bd4d2
    PUSH EAX                            ; 004bd4d6
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bd4d7
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd4dc
    ADD ESP,0x9c8                       ; 004bd4df
    POP EBP                             ; 004bd4e5
    POP EDI                             ; 004bd4e6
    POP ESI                             ; 004bd4e7
    POP EBX                             ; 004bd4e8
    RET                                 ; 004bd4e9
    CMP ESI,EAX                         ; 004bd4ea
        ;   Label: LAB_004bd4ea
    JLE 0x004bd343                      ; 004bd4ec
        ;   XREF to: 004bd343 (CONDITIONAL_JUMP)  ; LAB_004bd343
    LEA ECX,[EAX + 0x76c]               ; 004bd4f2
    MOV dword ptr [ESP + 0x9c4],ECX     ; 004bd4f8
    JMP 0x004bd343                      ; 004bd4ff
        ;   XREF to: 004bd343 (UNCONDITIONAL_JUMP)  ; LAB_004bd343
    MOV ECX,0x4e                        ; 004bd504
        ;   Label: LAB_004bd504
    LEA EDI,[ESP + 0x564]               ; 004bd509
    LEA ESI,[ESP + 0x69c]               ; 004bd510
    MOVSD.REP ES:EDI,ESI                ; 004bd517
    MOV EDI,dword ptr [0x02d12d30]      ; 004bd519 | g_AuditRecordCount
    INC EDI                             ; 004bd51f
    MOV dword ptr [0x02d12d30],EDI      ; 004bd520 | g_AuditRecordCount
    IMUL EAX,EDI,0x138                  ; 004bd526
    PUSH 0x7a1                          ; 004bd52c
    PUSH 0x6276c0                       ; 004bd531 | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004bd536
    MOV ECX,dword ptr [0x02d12d34]      ; 004bd537 | g_AuditRecordsArray
    PUSH ECX                            ; 004bd53d
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004bd53e
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004bd543
    MOV [0x02d12d34],EAX                ; 004bd546 | g_AuditRecordsArray
    TEST EAX,EAX                        ; 004bd54b
    JNZ 0x004bd572                      ; 004bd54d
        ;   XREF to: 004bd572 (CONDITIONAL_JUMP)  ; LAB_004bd572
    MOV ESI,0x6276d5                    ; 004bd54f | = "..\\engine\\fileio.cpp"
    MOV EDI,0x7a2                       ; 004bd554
    PUSH 0x6276ea                       ; 004bd559 | = "Out of memory for pod audit list."
    MOV dword ptr [0x02f0ca48],ESI      ; 004bd55e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004bd564 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bd56a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004bd56f
    MOV EAX,[0x02d12d30]                ; 004bd572 | g_AuditRecordCount
        ;   Label: LAB_004bd572
    DEC EAX                             ; 004bd577
    IMUL EAX,EAX,0x138                  ; 004bd578
    PUSH 0x100                          ; 004bd57e
    MOV ESI,dword ptr [0x02d12d34]      ; 004bd583 | g_AuditRecordsArray
    MOV ECX,0x4e                        ; 004bd589
    ADD EAX,ESI                         ; 004bd58e
    PUSH 0x0                            ; 004bd590
    MOV EDI,EAX                         ; 004bd592
    ADD EAX,0x28                        ; 004bd594
    LEA ESI,[ESP + 0x56c]               ; 004bd597
    PUSH EAX                            ; 004bd59e
    MOVSD.REP ES:EDI,ESI                ; 004bd59f
    CALL crt_memory.c_memset_FUN_005fde40 ; 004bd5a1
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x02d12d30]                ; 004bd5a6 | g_AuditRecordCount
    DEC EAX                             ; 004bd5ab
    IMUL EAX,EAX,0x138                  ; 004bd5ac
    MOV ESI,dword ptr [0x02d12d34]      ; 004bd5b2 | g_AuditRecordsArray
    ADD ESP,0xc                         ; 004bd5b8
    ADD EAX,ESI                         ; 004bd5bb
    LEA ESI,[ESP + 0x58c]               ; 004bd5bd
    LEA EDI,[EAX + 0x28]                ; 004bd5c4
    PUSH EDI                            ; 004bd5c7
    MOV AL,byte ptr [ESI]               ; 004bd5c8
        ;   Label: LAB_004bd5c8
    MOV byte ptr [EDI],AL               ; 004bd5ca
    CMP AL,0x0                          ; 004bd5cc
    JZ 0x004bd5e0                       ; 004bd5ce
        ;   XREF to: 004bd5e0 (CONDITIONAL_JUMP)  ; LAB_004bd5e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd5d0
    ADD ESI,0x2                         ; 004bd5d3
    MOV byte ptr [EDI + 0x1],AL         ; 004bd5d6
    ADD EDI,0x2                         ; 004bd5d9
    CMP AL,0x0                          ; 004bd5dc
    JNZ 0x004bd5c8                      ; 004bd5de
        ;   XREF to: 004bd5c8 (CONDITIONAL_JUMP)  ; LAB_004bd5c8
    POP EDI                             ; 004bd5e0
        ;   Label: LAB_004bd5e0
    JMP 0x004bd43a                      ; 004bd5e1
        ;   XREF to: 004bd43a (UNCONDITIONAL_JUMP)  ; LAB_004bd43a
    PUSH 0x62949a                       ; 004bd5e6 | = "No audit records removed"
        ;   Label: LAB_004bd5e6
    MOV EBP,dword ptr [0x00678a60]      ; 004bd5eb | g_CEditorToolsPtr
    PUSH EBP                            ; 004bd5f1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004bd5f2
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    JMP 0x004bd48a                      ; 004bd5f7
        ;   XREF to: 004bd48a (UNCONDITIONAL_JUMP)  ; LAB_004bd48a
    PUSH EAX                            ; 004bd5fc
        ;   Label: LAB_004bd5fc
    PUSH 0x1                            ; 004bd5fd
    PUSH 0x60                           ; 004bd5ff
    LEA EAX,[ESP + 0x944]               ; 004bd601
    PUSH EAX                            ; 004bd608
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004bd609
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004bd60e
    PUSH 0x0                            ; 004bd611
    PUSH 0x0                            ; 004bd613
    MOV EAX,[0x02d12d30]                ; 004bd615 | g_AuditRecordCount
    PUSH EBX                            ; 004bd61a
    MOV dword ptr [ESP + 0x9a0],EAX     ; 004bd61b
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004bd622
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004bd627
    PUSH EBX                            ; 004bd62a
    PUSH 0x1                            ; 004bd62b
    PUSH 0x60                           ; 004bd62d
    LEA EAX,[ESP + 0x944]               ; 004bd62f
    PUSH EAX                            ; 004bd636
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004bd637
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004bd63c
    PUSH 0x0                            ; 004bd63f
    MOV EDX,dword ptr [ESP + 0x424]     ; 004bd641
    PUSH EDX                            ; 004bd648
    PUSH EBX                            ; 004bd649
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004bd64a
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004bd64f
    PUSH EBX                            ; 004bd652
    MOV ECX,dword ptr [0x02d12d30]      ; 004bd653 | g_AuditRecordCount
    PUSH ECX                            ; 004bd659
    PUSH 0x138                          ; 004bd65a
    MOV EBX,dword ptr [0x02d12d34]      ; 004bd65f | g_AuditRecordsArray
    PUSH EBX                            ; 004bd665
    XOR EDI,EDI                         ; 004bd666
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004bd668
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EBP,dword ptr [0x02d12d34]      ; 004bd66d | g_AuditRecordsArray
    ADD ESP,0x10                        ; 004bd673
    MOV dword ptr [0x02d12d30],EDI      ; 004bd676 | g_AuditRecordCount
    TEST EBP,EBP                        ; 004bd67c
    JZ 0x004bd699                       ; 004bd67e
        ;   XREF to: 004bd699 (CONDITIONAL_JUMP)  ; LAB_004bd699
    PUSH 0x79a                          ; 004bd680
    PUSH 0x6276ab                       ; 004bd685 | = "..\\engine\\fileio.cpp"
    PUSH EBP                            ; 004bd68a
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004bd68b
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004bd690
    MOV dword ptr [0x02d12d34],EDI      ; 004bd693 | g_AuditRecordsArray
    PUSH ESI                            ; 004bd699
        ;   Label: LAB_004bd699
    CALL crt_stdio.c_fflush_FUN_00601540 ; 004bd69a
        ;   XREF to: 00601540 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00601540(_FILE * stream)
    MOV AH,byte ptr [ESI + 0xc]         ; 004bd69f
    ADD ESP,0x4                         ; 004bd6a2
    TEST AH,0x20                        ; 004bd6a5
    JZ 0x004bd6c8                       ; 004bd6a8
        ;   XREF to: 004bd6c8 (CONDITIONAL_JUMP)  ; LAB_004bd6c8
    LEA EAX,[ESP + 0x4]                 ; 004bd6aa
    PUSH EAX                            ; 004bd6ae
    PUSH 0x629507                       ; 004bd6af | = "Error accessing %s.  The POD may have..."
    MOV EBX,dword ptr [0x00678a60]      ; 004bd6b4 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bd6ba | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bd6bb
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bd6c0
    JMP 0x004bd48d                      ; 004bd6c3
        ;   XREF to: 004bd48d (UNCONDITIONAL_JUMP)  ; LAB_004bd48d
    PUSH 0x118b                         ; 004bd6c8
        ;   Label: LAB_004bd6c8
    PUSH 0x62953d                       ; 004bd6cd | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004bd6d2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bd6d3
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bd6d8
    LEA EAX,[ESP + 0x7d4]               ; 004bd6db
    PUSH EAX                            ; 004bd6e2
    MOV ECX,dword ptr [0x00680cdc]      ; 004bd6e3 | g_CDemonPodPtr
    PUSH ECX                            ; 004bd6e9 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 ; 004bd6ea
        ;   XREF to: 00551000 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bd6ef
    PUSH 0x0                            ; 004bd6f2
    LEA EAX,[ESP + 0x4]                 ; 004bd6f4
    PUSH EAX                            ; 004bd6f8
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bd6f9
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd6fe
    ADD ESP,0x9c8                       ; 004bd701
    POP EBP                             ; 004bd707
    POP EDI                             ; 004bd708
    POP ESI                             ; 004bd709
    POP EBX                             ; 004bd70a
    RET                                 ; 004bd70b

