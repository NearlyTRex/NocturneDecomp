; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
;
; Parameters:
; CIni *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
; char *           Stack[0xc]:4   key
; char *           Stack[0x10]:4   default_value
; char *           Stack[0x14]:4   output_buffer
; int              Stack[0x18]:4   buffer_size
; char *           Stack[0x1c]:4   filename
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined1       Stack[-0x20d]:1  local_20d
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[2]:
;   engine_ini.cpp_getProfileInteger_FUN_004fb9a0 at 004fb9f5
;   engine_ini.cpp_getProfileString_FUN_004fb960 at 004fb987
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_0062faa2
;   TerminatedCString s_rt_0062fab4
;   TerminatedCString s_engine_ini_cpp_0062fab7
;   TerminatedCString s_cIni_getProfileString_Un_0062fac9
;   TerminatedCString s_s_0062faf6
;   TerminatedCString s_engine_ini_cpp_0062fafc
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_string.c__strcmp_FUN_005fef20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb250
        ;   Label: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
    PUSH ESI                            ; 004fb251
    PUSH EDI                            ; 004fb252
    PUSH EBP                            ; 004fb253
    SUB ESP,0x200                       ; 004fb254
    PUSH 0x56                           ; 004fb25a
    PUSH 0x62faa2                       ; 004fb25c | = "..\\engine\\ini.cpp"
    PUSH 0x62fab4                       ; 004fb261 | = "rt"
    XOR EDI,EDI                         ; 004fb266
    PUSH EDI                            ; 004fb268
    MOV EDX,dword ptr [ESP + 0x23c]     ; 004fb269
    PUSH EDX                            ; 004fb270
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004fb271
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004fb276
    MOV EBX,EAX                         ; 004fb279
    TEST EAX,EAX                        ; 004fb27b
    JZ 0x004fb326                       ; 004fb27d
        ;   XREF to: 004fb326 (CONDITIONAL_JUMP)  ; LAB_004fb326
    MOV EAX,dword ptr [ESP + 0x218]     ; 004fb283
        ;   Label: LAB_004fb283
    PUSH EAX                            ; 004fb28a
    PUSH 0x62faf6                       ; 004fb28b | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004fb290
    PUSH EAX                            ; 004fb297
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fb298
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fb29d
    TEST EDI,EDI                        ; 004fb2a0
        ;   Label: LAB_004fb2a0
    JNZ 0x004fb2ae                      ; 004fb2a2
        ;   XREF to: 004fb2ae (CONDITIONAL_JUMP)  ; LAB_004fb2ae
    TEST byte ptr [EBX + 0xc],0x10      ; 004fb2a4
    JZ 0x004fb34e                       ; 004fb2a8
        ;   XREF to: 004fb34e (CONDITIONAL_JUMP)  ; LAB_004fb34e
    TEST EDI,EDI                        ; 004fb2ae
        ;   Label: LAB_004fb2ae
    JZ 0x004fb2d7                       ; 004fb2b0
        ;   XREF to: 004fb2d7 (CONDITIONAL_JUMP)  ; LAB_004fb2d7
    MOV DL,byte ptr [EBX + 0xc]         ; 004fb2b2
        ;   Label: LAB_004fb2b2
    XOR EDI,EDI                         ; 004fb2b5
    TEST DL,0x10                        ; 004fb2b7
    JNZ 0x004fb2d7                      ; 004fb2ba
        ;   XREF to: 004fb2d7 (CONDITIONAL_JUMP)  ; LAB_004fb2d7
        ;   Label: LAB_004fb2ba
    PUSH EBX                            ; 004fb2bc
    PUSH 0xff                           ; 004fb2bd
    LEA EAX,[ESP + 0x8]                 ; 004fb2c2
    PUSH EAX                            ; 004fb2c6
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb2c7
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004fb2cc
    TEST EAX,EAX                        ; 004fb2cf
    JNZ 0x004fb394                      ; 004fb2d1
        ;   XREF to: 004fb394 (CONDITIONAL_JUMP)  ; LAB_004fb394
    PUSH 0x99                           ; 004fb2d7
        ;   Label: LAB_004fb2d7
    PUSH 0x62fafc                       ; 004fb2dc | = "..\\engine\\ini.cpp"
    PUSH EBX                            ; 004fb2e1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fb2e2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004fb2e7
    TEST EDI,EDI                        ; 004fb2ea
    JZ 0x004fb3dc                       ; 004fb2ec
        ;   XREF to: 004fb3dc (CONDITIONAL_JUMP)  ; LAB_004fb3dc
    INC EBP                             ; 004fb2f2
    MOV EDI,EBP                         ; 004fb2f3
    SUB ECX,ECX                         ; 004fb2f5
    DEC ECX                             ; 004fb2f7
    XOR EAX,EAX                         ; 004fb2f8
    SCASB.REPNE ES:EDI                  ; 004fb2fa
    NOT ECX                             ; 004fb2fc
    DEC ECX                             ; 004fb2fe
    LEA EAX,[ECX + -0x1]                ; 004fb2ff
    LEA ECX,[EAX + EBP*0x1]             ; 004fb302
    MOV ESI,dword ptr [ESP + 0x228]     ; 004fb305
    MOV byte ptr [ECX],0x0              ; 004fb30c
    CMP EAX,ESI                         ; 004fb30f
    JL 0x004fb436                       ; 004fb311
        ;   XREF to: 004fb436 (CONDITIONAL_JUMP)  ; LAB_004fb436
    XOR EDI,EDI                         ; 004fb317
        ;   Label: LAB_004fb317
    MOV EAX,EDI                         ; 004fb319
    ADD ESP,0x200                       ; 004fb31b
    POP EBP                             ; 004fb321
    POP EDI                             ; 004fb322
    POP ESI                             ; 004fb323
    POP EBX                             ; 004fb324
    RET                                 ; 004fb325
    MOV ECX,0x62fab7                    ; 004fb326 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004fb326
    MOV ESI,0x57                        ; 004fb32b
    PUSH 0x62fac9                       ; 004fb330 | = "cIni::getProfileString: Unable to ope..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004fb335 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004fb33b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fb341
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fb346
    JMP 0x004fb283                      ; 004fb349
        ;   XREF to: 004fb283 (UNCONDITIONAL_JUMP)  ; LAB_004fb283
    PUSH EBX                            ; 004fb34e
        ;   Label: LAB_004fb34e
    PUSH 0xff                           ; 004fb34f
    LEA EAX,[ESP + 0x8]                 ; 004fb354
    PUSH EAX                            ; 004fb358
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb359
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004fb35e
    TEST EAX,EAX                        ; 004fb361
    JZ 0x004fb2ae                       ; 004fb363
        ;   XREF to: 004fb2ae (CONDITIONAL_JUMP)  ; LAB_004fb2ae
    LEA EAX,[ESP + 0x100]               ; 004fb369
    PUSH EAX                            ; 004fb370
    LEA EAX,[ESP + 0x4]                 ; 004fb371
    PUSH EAX                            ; 004fb375
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004fb376
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb37b
    TEST EAX,EAX                        ; 004fb37e
    JZ 0x004fb2b2                       ; 004fb380
        ;   XREF to: 004fb2b2 (CONDITIONAL_JUMP)  ; LAB_004fb2b2
    JMP 0x004fb2a0                      ; 004fb386
        ;   XREF to: 004fb2a0 (UNCONDITIONAL_JUMP)  ; LAB_004fb2a0
    TEST byte ptr [EBX + 0xc],0x10      ; 004fb38b
        ;   Label: LAB_004fb38b
    JMP 0x004fb2ba                      ; 004fb38f
        ;   XREF to: 004fb2ba (UNCONDITIONAL_JUMP)  ; LAB_004fb2ba
    MOV DL,0x3d                         ; 004fb394
        ;   Label: LAB_004fb394
    MOV ESI,ESP                         ; 004fb396
    MOV AL,byte ptr [ESI]               ; 004fb398
        ;   Label: LAB_004fb398
    CMP AL,DL                           ; 004fb39a
    JZ 0x004fb3b0                       ; 004fb39c
        ;   XREF to: 004fb3b0 (CONDITIONAL_JUMP)  ; LAB_004fb3b0
    CMP AL,0x0                          ; 004fb39e
    JZ 0x004fb3ae                       ; 004fb3a0
        ;   XREF to: 004fb3ae (CONDITIONAL_JUMP)  ; LAB_004fb3ae
    INC ESI                             ; 004fb3a2
    MOV AL,byte ptr [ESI]               ; 004fb3a3
    CMP AL,DL                           ; 004fb3a5
    JZ 0x004fb3b0                       ; 004fb3a7
        ;   XREF to: 004fb3b0 (CONDITIONAL_JUMP)  ; LAB_004fb3b0
    INC ESI                             ; 004fb3a9
    CMP AL,0x0                          ; 004fb3aa
    JNZ 0x004fb398                      ; 004fb3ac
        ;   XREF to: 004fb398 (CONDITIONAL_JUMP)  ; LAB_004fb398
    SUB ESI,ESI                         ; 004fb3ae
        ;   Label: LAB_004fb3ae
    MOV EBP,ESI                         ; 004fb3b0
        ;   Label: LAB_004fb3b0
    TEST ESI,ESI                        ; 004fb3b2
    JZ 0x004fb3b9                       ; 004fb3b4
        ;   XREF to: 004fb3b9 (CONDITIONAL_JUMP)  ; LAB_004fb3b9
    MOV byte ptr [ESI],0x0              ; 004fb3b6
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004fb3b9
        ;   Label: LAB_004fb3b9
    PUSH EDX                            ; 004fb3c0
    LEA EAX,[ESP + 0x4]                 ; 004fb3c1
    PUSH EAX                            ; 004fb3c5
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004fb3c6
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb3cb
    TEST EAX,EAX                        ; 004fb3ce
    JNZ 0x004fb38b                      ; 004fb3d0
        ;   XREF to: 004fb38b (CONDITIONAL_JUMP)  ; LAB_004fb38b
    MOV EDI,0x1                         ; 004fb3d2
    JMP 0x004fb2d7                      ; 004fb3d7
        ;   XREF to: 004fb2d7 (UNCONDITIONAL_JUMP)  ; LAB_004fb2d7
    MOV EDI,dword ptr [ESP + 0x220]     ; 004fb3dc
        ;   Label: LAB_004fb3dc
    MOV EBX,dword ptr [ESP + 0x228]     ; 004fb3e3
    SUB ECX,ECX                         ; 004fb3ea
    DEC ECX                             ; 004fb3ec
    XOR EAX,EAX                         ; 004fb3ed
    SCASB.REPNE ES:EDI                  ; 004fb3ef
    NOT ECX                             ; 004fb3f1
    DEC ECX                             ; 004fb3f3
    CMP ECX,EBX                         ; 004fb3f4
    JGE 0x004fb317                      ; 004fb3f6
        ;   XREF to: 004fb317 (CONDITIONAL_JUMP)  ; LAB_004fb317
    MOV ESI,dword ptr [ESP + 0x220]     ; 004fb3fc
    MOV EDI,dword ptr [ESP + 0x224]     ; 004fb403
    PUSH EDI                            ; 004fb40a
    MOV AL,byte ptr [ESI]               ; 004fb40b
        ;   Label: LAB_004fb40b
    MOV byte ptr [EDI],AL               ; 004fb40d
    CMP AL,0x0                          ; 004fb40f
    JZ 0x004fb423                       ; 004fb411
        ;   XREF to: 004fb423 (CONDITIONAL_JUMP)  ; LAB_004fb423
    MOV AL,byte ptr [ESI + 0x1]         ; 004fb413
    ADD ESI,0x2                         ; 004fb416
    MOV byte ptr [EDI + 0x1],AL         ; 004fb419
    ADD EDI,0x2                         ; 004fb41c
    CMP AL,0x0                          ; 004fb41f
    JNZ 0x004fb40b                      ; 004fb421
        ;   XREF to: 004fb40b (CONDITIONAL_JUMP)  ; LAB_004fb40b
    POP EDI                             ; 004fb423
        ;   Label: LAB_004fb423
    MOV EDI,0x1                         ; 004fb424
    MOV EAX,EDI                         ; 004fb429
    ADD ESP,0x200                       ; 004fb42b
    POP EBP                             ; 004fb431
    POP EDI                             ; 004fb432
    POP ESI                             ; 004fb433
    POP EBX                             ; 004fb434
    RET                                 ; 004fb435
    MOV EDI,dword ptr [ESP + 0x224]     ; 004fb436
        ;   Label: LAB_004fb436
    MOV ESI,EBP                         ; 004fb43d
    PUSH EDI                            ; 004fb43f
    MOV AL,byte ptr [ESI]               ; 004fb440
        ;   Label: LAB_004fb440
    MOV byte ptr [EDI],AL               ; 004fb442
    CMP AL,0x0                          ; 004fb444
    JZ 0x004fb458                       ; 004fb446
        ;   XREF to: 004fb458 (CONDITIONAL_JUMP)  ; LAB_004fb458
    MOV AL,byte ptr [ESI + 0x1]         ; 004fb448
    ADD ESI,0x2                         ; 004fb44b
    MOV byte ptr [EDI + 0x1],AL         ; 004fb44e
    ADD EDI,0x2                         ; 004fb451
    CMP AL,0x0                          ; 004fb454
    JNZ 0x004fb440                      ; 004fb456
        ;   XREF to: 004fb440 (CONDITIONAL_JUMP)  ; LAB_004fb440
    POP EDI                             ; 004fb458
        ;   Label: LAB_004fb458
    MOV EDI,0x1                         ; 004fb459
    MOV EAX,EDI                         ; 004fb45e
    ADD ESP,0x200                       ; 004fb460
    POP EBP                             ; 004fb466
    POP EDI                             ; 004fb467
    POP ESI                             ; 004fb468
    POP EBX                             ; 004fb469
    RET                                 ; 004fb46a

