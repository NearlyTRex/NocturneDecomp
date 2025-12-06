; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210(void)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_test_raw_0063b0e2
;   TerminatedCString s_Write_file_0063b0eb
;   TerminatedCString s_sound_mp3_cpp_0063b0f7
;   TerminatedCString s_sound_mp3_cpp_0063b108
;   TerminatedCString s_pixies_mp3_0063b119
;   TerminatedCString s_pixies_mp3_0063b124
;   TerminatedCString s_sound_mp3_cpp_0063b12f
;   TerminatedCString s_wb_0063b140
;   TerminatedCString s_pixies_raw_0063b143
;   TerminatedCString s_sound_mp3_cpp_0063b14e
;   TerminatedCString s_Hose_0063b15f
;   TerminatedCString s_sound_mp3_cpp_0063b165
;   TerminatedCString s_wb_0063b176
;   TerminatedCString s_pixies2_raw_0063b179
;   TerminatedCString s_sound_mp3_cpp_0063b185
;   ... and 16 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_time.c_time_with_rounding_FUN_006001f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534210
        ;   Label: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
    PUSH ESI                            ; 00534211
    PUSH EDI                            ; 00534212
    PUSH EBP                            ; 00534213
    MOV EBP,ESP                         ; 00534214
    SUB ESP,0x28                        ; 00534216
    AND ESP,0xfffffff8                  ; 00534219
    PUSH 0x63b0e2                       ; 0053421c | = "test.raw" | s_test_raw_0063b0e2 = test.raw
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 00534221 | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00534226
    PUSH 0x63b0eb                       ; 00534229 | = "Write file?" | s_Write_file_0063b0eb = Write file?
    MOV EDX,dword ptr [0x00678a60]      ; 0053422e | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00534234 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 00534235 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053423a
    PUSH 0xdc8                          ; 0053423d
    PUSH 0x63b0f7                       ; 00534242 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b0f7 = ..\sound\mp3.cpp
    PUSH 0x8630                         ; 00534247
    MOV dword ptr [ESP + 0x24],EAX      ; 0053424c
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00534250 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00534255
    TEST EAX,EAX                        ; 00534258
    JNZ 0x0053449c                      ; 0053425a | LAB_0053449c
        ;   XREF to: 0053449c (CONDITIONAL_JUMP)
    PUSH 0xdc8                          ; 00534260
        ;   Label: LAB_00534260
    PUSH 0x63b108                       ; 00534265 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b108 = ..\sound\mp3.cpp
    PUSH 0x8630                         ; 0053426a
    MOV dword ptr [ESP + 0x20],EAX      ; 0053426f
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00534273 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00534278
    TEST EAX,EAX                        ; 0053427b
    JZ 0x00534288                       ; 0053427d | LAB_00534288
        ;   XREF to: 00534288 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0053427f
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 00534280 | CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00534285
    MOV EBX,EAX                         ; 00534288
        ;   Label: LAB_00534288
    PUSH 0x63b119                       ; 0053428a | = "pixies.mp3" | s_pixies_mp3_0063b119 = pixies.mp3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053428f
    PUSH ECX                            ; 00534293
    MOV dword ptr [ESP + 0x14],EBX      ; 00534294
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 ; 00534298 | void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
        ;   XREF to: 00534550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053429d
    PUSH 0x63b124                       ; 005342a0 | = "pixies.mp3" | s_pixies_mp3_0063b124 = pixies.mp3
    PUSH EBX                            ; 005342a5
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 ; 005342a6 | void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
        ;   XREF to: 00534550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005342ab
    MOV EAX,dword ptr [ESP + 0x14]      ; 005342ae
    MOV EAX,dword ptr [EAX + 0x104]     ; 005342b2
    ADD EAX,EAX                         ; 005342b8
    MOV dword ptr [ESP + 0x1c],EAX      ; 005342ba
    MOV EAX,0x20000                     ; 005342be
    MOV EDX,EAX                         ; 005342c3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005342c5
    SAR EDX,0x1f                        ; 005342c9
    IDIV EBX                            ; 005342cc
    PUSH 0xdd2                          ; 005342ce
    PUSH 0x63b12f                       ; 005342d3 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b12f = ..\sound\mp3.cpp
    PUSH 0x63b140                       ; 005342d8 | = "wb" | s_wb_0063b140 = wb
    PUSH 0x0                            ; 005342dd
    PUSH 0x63b143                       ; 005342df | = "pixies.raw" | s_pixies_raw_0063b143 = pixies.raw
    MOV EDI,EAX                         ; 005342e4
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005342e6 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005342eb
    MOV dword ptr [ESP + 0x10],EAX      ; 005342ee
    TEST EAX,EAX                        ; 005342f2
    JNZ 0x00534318                      ; 005342f4 | LAB_00534318
        ;   XREF to: 00534318 (CONDITIONAL_JUMP)
    MOV ESI,0x63b14e                    ; 005342f6 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b14e = ..\sound\mp3.cpp
    MOV EAX,0xdd3                       ; 005342fb
    PUSH 0x63b15f                       ; 00534300 | = "Hose!" | s_Hose_0063b15f = Hose!
    MOV dword ptr [0x02f0ca48],ESI      ; 00534305 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053430b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00534310 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00534315
    PUSH 0xdd4                          ; 00534318
        ;   Label: LAB_00534318
    PUSH 0x63b165                       ; 0053431d | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b165 = ..\sound\mp3.cpp
    PUSH 0x63b176                       ; 00534322 | = "wb" | s_wb_0063b176 = wb
    PUSH 0x0                            ; 00534327
    PUSH 0x63b179                       ; 00534329 | = "pixies2.raw" | s_pixies2_raw_0063b179 = pixies2.raw
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0053432e | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00534333
    MOV dword ptr [ESP + 0x8],EAX       ; 00534336
    TEST EAX,EAX                        ; 0053433a
    JZ 0x005344aa                       ; 0053433c | LAB_005344aa
        ;   XREF to: 005344aa (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00534342
        ;   Label: LAB_00534342
    PUSH EAX                            ; 00534344
    XOR EBX,EBX                         ; 00534345
    CALL crt_time.c_time_with_rounding_FUN_006001f0 ; 00534347 | time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053434c
    PUSH EDI                            ; 0053434f
        ;   Label: LAB_0053434f
    PUSH 0x2f48188                      ; 00534350 | char[131072] g_MpegPCMDecodeTestBuffer
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00534355
    PUSH ESI                            ; 00534359
    CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60 ; 0053435a | int sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested)
        ;   XREF to: 00534a60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053435f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00534362
    MOV ESI,EAX                         ; 00534366
    TEST EDX,EDX                        ; 00534368
    JZ 0x00534384                       ; 0053436a | LAB_00534384
        ;   XREF to: 00534384 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053436c
    PUSH ECX                            ; 00534370
    MOV EDX,dword ptr [ESP + 0x20]      ; 00534371
    PUSH EDX                            ; 00534375
    PUSH EAX                            ; 00534376
    PUSH 0x2f48188                      ; 00534377 | char[131072] g_MpegPCMDecodeTestBuffer
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0053437c | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00534381
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00534384
        ;   Label: LAB_00534384
    IMUL EAX,ESI                        ; 00534388
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053438b
    ADD EBX,EAX                         ; 0053438f
    TEST ECX,ECX                        ; 00534391
    JZ 0x005343bc                       ; 00534393 | LAB_005343bc
        ;   XREF to: 005343bc (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x20],EBX      ; 00534395
    FILD dword ptr [ESP + 0x20]         ; 00534399
    FMUL double ptr [0x0063b222]        ; 0053439d | double DOUBLE_0063b222
    SUB ESP,0x8                         ; 005343a3
    FSTP double ptr [ESP]               ; 005343a6
    PUSH 0x63b19c                       ; 005343a9 | = "%.1fk" | s_s_1fk_0063b19c = %.1fk
    MOV EAX,[0x00678a60]                ; 005343ae | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 005343b3 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005343b4 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005343b9
    CMP ESI,EDI                         ; 005343bc
        ;   Label: LAB_005343bc
    JZ 0x0053434f                       ; 005343be | LAB_0053434f
        ;   XREF to: 0053434f (CONDITIONAL_JUMP)
    PUSH 0xde8                          ; 005343c0
    PUSH 0x63b1a2                       ; 005343c5 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b1a2 = ..\sound\mp3.cpp
    MOV EDX,dword ptr [ESP + 0x18]      ; 005343ca
    PUSH EDX                            ; 005343ce
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005343cf | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005343d4
    PUSH 0xde9                          ; 005343d7
    PUSH 0x63b1b3                       ; 005343dc | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b1b3 = ..\sound\mp3.cpp
    MOV ECX,dword ptr [ESP + 0x10]      ; 005343e1
    PUSH ECX                            ; 005343e5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005343e6 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005343eb
    MOV ESI,0x63b1c4                    ; 005343ee | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b1c4 = ..\sound\mp3.cpp
    PUSH 0x0                            ; 005343f3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005343f5
    MOV EDI,0xdeb                       ; 005343f9
    PUSH EAX                            ; 005343fe
    MOV dword ptr [0x0067d20c],ESI      ; 005343ff | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 00534405 | int g_CurrentDebugLine
    CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530 ; 0053440b | CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr)
        ;   XREF to: 00534530 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00534410
    PUSH EAX                            ; 00534413
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00534414 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    MOV EDX,0x63b1d5                    ; 00534419 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b1d5 = ..\sound\mp3.cpp
    ADD ESP,0x4                         ; 0053441e
    MOV ECX,0xdec                       ; 00534421
    MOV ESI,dword ptr [ESP + 0xc]       ; 00534426
    MOV dword ptr [0x0067d20c],EDX      ; 0053442a | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00534430 | int g_CurrentDebugLine
    TEST ESI,ESI                        ; 00534436
    JNZ 0x005344d2                      ; 00534438 | LAB_005344d2
        ;   XREF to: 005344d2 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4]                 ; 0053443e
        ;   Label: LAB_0053443e
    PUSH EAX                            ; 00534442
    CALL crt_time.c_time_with_rounding_FUN_006001f0 ; 00534443 | time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00534448
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053444b
    SUB EAX,dword ptr [ESP]             ; 0053444f
    MOV dword ptr [ESP + 0x20],EBX      ; 00534452
    MOV dword ptr [ESP + 0x24],EAX      ; 00534456
    FILD dword ptr [ESP + 0x20]         ; 0053445a
    FILD dword ptr [ESP + 0x24]         ; 0053445e
    FDIVP                               ; 00534462
    FMUL double ptr [0x0063b222]        ; 00534464 | double DOUBLE_0063b222
    SUB ESP,0x8                         ; 0053446a
    FSTP double ptr [ESP]               ; 0053446d
    PUSH EAX                            ; 00534470
    PUSH EBX                            ; 00534471
    MOV ESI,0xdf1                       ; 00534472
    MOV ECX,0x63b1e6                    ; 00534477 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b1e6 = ..\sound\mp3.cpp
    PUSH 0x63b1f7                       ; 0053447c | = "%d bytes / %d seconds = %.1f kbytes/sec" | s_d_bytes_d_seconds_1f_kby_0063b1f7 = %d bytes / %d seconds = %.1f kbytes/sec
    MOV dword ptr [0x02f0ca4c],ESI      ; 00534481 | int g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00534487 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053448d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00534492
    MOV ESP,EBP                         ; 00534495
    POP EBP                             ; 00534497
    POP EDI                             ; 00534498
    POP ESI                             ; 00534499
    POP EBX                             ; 0053449a
    RET                                 ; 0053449b
    PUSH EAX                            ; 0053449c
        ;   Label: LAB_0053449c
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 0053449d | CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005344a2
    JMP 0x00534260                      ; 005344a5 | LAB_00534260
        ;   XREF to: 00534260 (UNCONDITIONAL_JUMP)
    MOV EDX,0x63b185                    ; 005344aa | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b185 = ..\sound\mp3.cpp
        ;   Label: LAB_005344aa
    MOV ECX,0xdd5                       ; 005344af
    PUSH 0x63b196                       ; 005344b4 | = "Hose!" | s_Hose_0063b196 = Hose!
    MOV dword ptr [0x02f0ca48],EDX      ; 005344b9 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005344bf | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005344c5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005344ca
    JMP 0x00534342                      ; 005344cd | LAB_00534342
        ;   XREF to: 00534342 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 005344d2
        ;   Label: LAB_005344d2
    PUSH ESI                            ; 005344d4
    CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530 ; 005344d5 | CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr)
        ;   XREF to: 00534530 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005344da
    PUSH EAX                            ; 005344dd
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005344de | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005344e3
    JMP 0x0053443e                      ; 005344e6 | LAB_0053443e
        ;   XREF to: 0053443e (UNCONDITIONAL_JUMP)

