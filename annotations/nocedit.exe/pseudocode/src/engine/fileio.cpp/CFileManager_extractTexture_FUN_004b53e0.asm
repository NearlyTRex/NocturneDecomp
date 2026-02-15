; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager *this_ptr,char *texture_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   texture_filename
; Local Variables:
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x57]:1  local_57
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 at 004b5531
;
; Referenced Globals:
;   TerminatedCString s_ART_s_006275b1
;   TerminatedCString s_engine_fileio_cpp_006275b9
;   TerminatedCString s_fileManger_extractTextur_006275ce
;   TerminatedCString s_ACT_006275ff
;   undefined4 s_ACT_00627600
;   undefined4 s_CT_00627601
;   undefined4 s_T_00627602
;   TerminatedCString s_rb_00627604
;   TerminatedCString s_art_00627607
;   TerminatedCString s_engine_fileio_cpp_0062760b
;   TerminatedCString s_ART_s_00627620
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b53e0
        ;   Label: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
    PUSH EDI                            ; 004b53e1
    SUB ESP,0x50                        ; 004b53e2
    MOV ESI,dword ptr [ESP + 0x60]      ; 004b53e5
    PUSH ESI                            ; 004b53e9
    MOV EAX,dword ptr [ESP + 0x60]      ; 004b53ea
    PUSH 0x6275b1                       ; 004b53ee | = "ART\\%s\n"
    MOV EDX,dword ptr [EAX]             ; 004b53f3
    PUSH EDX                            ; 004b53f5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b53f6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b53fb
    MOV EDI,ESP                         ; 004b53fe
    MOV DL,0x2e                         ; 004b5400
    PUSH EDI                            ; 004b5402
    MOV AL,byte ptr [ESI]               ; 004b5403
        ;   Label: LAB_004b5403
    MOV byte ptr [EDI],AL               ; 004b5405
    CMP AL,0x0                          ; 004b5407
    JZ 0x004b541b                       ; 004b5409
        ;   XREF to: 004b541b (CONDITIONAL_JUMP)  ; LAB_004b541b
    MOV AL,byte ptr [ESI + 0x1]         ; 004b540b
    ADD ESI,0x2                         ; 004b540e
    MOV byte ptr [EDI + 0x1],AL         ; 004b5411
    ADD EDI,0x2                         ; 004b5414
    CMP AL,0x0                          ; 004b5417
    JNZ 0x004b5403                      ; 004b5419
        ;   XREF to: 004b5403 (CONDITIONAL_JUMP)  ; LAB_004b5403
    POP EDI                             ; 004b541b
        ;   Label: LAB_004b541b
    MOV ESI,ESP                         ; 004b541c
    MOV AL,byte ptr [ESI]               ; 004b541e
        ;   Label: LAB_004b541e
    CMP AL,DL                           ; 004b5420
    JZ 0x004b5436                       ; 004b5422
        ;   XREF to: 004b5436 (CONDITIONAL_JUMP)  ; LAB_004b5436
    CMP AL,0x0                          ; 004b5424
    JZ 0x004b5434                       ; 004b5426
        ;   XREF to: 004b5434 (CONDITIONAL_JUMP)  ; LAB_004b5434
    INC ESI                             ; 004b5428
    MOV AL,byte ptr [ESI]               ; 004b5429
    CMP AL,DL                           ; 004b542b
    JZ 0x004b5436                       ; 004b542d
        ;   XREF to: 004b5436 (CONDITIONAL_JUMP)  ; LAB_004b5436
    INC ESI                             ; 004b542f
    CMP AL,0x0                          ; 004b5430
    JNZ 0x004b541e                      ; 004b5432
        ;   XREF to: 004b541e (CONDITIONAL_JUMP)  ; LAB_004b541e
    SUB ESI,ESI                         ; 004b5434
        ;   Label: LAB_004b5434
    MOV EDI,ESI                         ; 004b5436
        ;   Label: LAB_004b5436
    TEST ESI,ESI                        ; 004b5438
    JNZ 0x004b5461                      ; 004b543a
        ;   XREF to: 004b5461 (CONDITIONAL_JUMP)  ; LAB_004b5461
    PUSH EBX                            ; 004b543c
    MOV ECX,0x6275b9                    ; 004b543d | = "..\\engine\\fileio.cpp"
    MOV EBX,0x6e0                       ; 004b5442
    PUSH 0x6275ce                       ; 004b5447 | = "fileManger::extractTexture - Extensio..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004b544c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b5452 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b5458
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b545d
    POP EBX                             ; 004b5460
    MOV ESI,0x6275ff                    ; 004b5461 | = ".ACT"
        ;   Label: LAB_004b5461
    PUSH EDI                            ; 004b5466
    MOV AL,byte ptr [ESI]               ; 004b5467 | = ".ACT" | s_CT_00627601
        ;   Label: LAB_004b5467
    MOV byte ptr [EDI],AL               ; 004b5469
    CMP AL,0x0                          ; 004b546b
    JZ 0x004b547f                       ; 004b546d
        ;   XREF to: 004b547f (CONDITIONAL_JUMP)  ; LAB_004b547f
    MOV AL,byte ptr [ESI + 0x1]         ; 004b546f | s_ACT_00627600 | s_T_00627602
    ADD ESI,0x2                         ; 004b5472
    MOV byte ptr [EDI + 0x1],AL         ; 004b5475
    ADD EDI,0x2                         ; 004b5478
    CMP AL,0x0                          ; 004b547b
    JNZ 0x004b5467                      ; 004b547d
        ;   XREF to: 004b5467 (CONDITIONAL_JUMP)  ; LAB_004b5467
    POP EDI                             ; 004b547f
        ;   Label: LAB_004b547f
    PUSH 0x627604                       ; 004b5480 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004b5485
    PUSH EAX                            ; 004b5489
    PUSH 0x627607                       ; 004b548a | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004b548f
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004b5494
    TEST EAX,EAX                        ; 004b5497
    JNZ 0x004b54a1                      ; 004b5499
        ;   XREF to: 004b54a1 (CONDITIONAL_JUMP)  ; LAB_004b54a1
    ADD ESP,0x50                        ; 004b549b
    POP EDI                             ; 004b549e
    POP ESI                             ; 004b549f
    RET                                 ; 004b54a0
    PUSH 0x6e7                          ; 004b54a1
        ;   Label: LAB_004b54a1
    PUSH 0x62760b                       ; 004b54a6 | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004b54ab
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b54ac
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b54b1
    MOV EAX,ESP                         ; 004b54b4
    PUSH EAX                            ; 004b54b6
    MOV EAX,dword ptr [ESP + 0x60]      ; 004b54b7
    PUSH 0x627620                       ; 004b54bb | = "ART\\%s\n"
    MOV ESI,dword ptr [EAX]             ; 004b54c0
    PUSH ESI                            ; 004b54c2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b54c3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b54c8
    ADD ESP,0x50                        ; 004b54cb
    POP EDI                             ; 004b54ce
    POP ESI                             ; 004b54cf
    RET                                 ; 004b54d0

