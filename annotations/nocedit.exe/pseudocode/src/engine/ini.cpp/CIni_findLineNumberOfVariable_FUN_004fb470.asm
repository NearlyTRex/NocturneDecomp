; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni * this_ptr, char * section, char * key, char * value, char * filename)
;
; Parameters:
; CIni *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
; char *           Stack[0xc]:4   key
; char *           Stack[0x10]:4   value
; char *           Stack[0x14]:4   filename
; Local Variables:
; undefined1       Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x211]:1  local_211
; undefined1       Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 at 004fb69b
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_0062fb0e
;   TerminatedCString s_rt_0062fb20
;   TerminatedCString s_engine_ini_cpp_0062fb23
;   TerminatedCString s_cIni_FindLineNumberOfVar_0062fb35
;   TerminatedCString s_s_0062fb6a
;   TerminatedCString s_engine_ini_cpp_0062fb70
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strcmp_FUN_005fef20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb470
        ;   Label: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
    PUSH ESI                            ; 004fb471
    PUSH EDI                            ; 004fb472
    PUSH EBP                            ; 004fb473
    SUB ESP,0x204                       ; 004fb474
    PUSH 0xf4                           ; 004fb47a
    PUSH 0x62fb0e                       ; 004fb47f | = "..\\engine\\ini.cpp"
    PUSH 0x62fb20                       ; 004fb484 | = "rt"
    XOR EBX,EBX                         ; 004fb489
    PUSH EBX                            ; 004fb48b
    MOV EDX,dword ptr [ESP + 0x234]     ; 004fb48c
    MOV EAX,dword ptr [ESP + 0x228]     ; 004fb493
    PUSH EDX                            ; 004fb49a
    XOR EBP,EBP                         ; 004fb49b
    MOV dword ptr [EAX],0x1             ; 004fb49d
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004fb4a3
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004fb4a8
    MOV EDI,EAX                         ; 004fb4ab
    TEST EAX,EAX                        ; 004fb4ad
    JZ 0x004fb5d3                       ; 004fb4af
        ;   XREF to: 004fb5d3 (CONDITIONAL_JUMP)  ; LAB_004fb5d3
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004fb4b5
        ;   Label: LAB_004fb4b5
    PUSH EAX                            ; 004fb4bc
    PUSH 0x62fb6a                       ; 004fb4bd | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004fb4c2
    PUSH EAX                            ; 004fb4c9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004fb4ca
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fb4cf
    TEST EBP,EBP                        ; 004fb4d2
        ;   Label: LAB_004fb4d2
    JNZ 0x004fb4e0                      ; 004fb4d4
        ;   XREF to: 004fb4e0 (CONDITIONAL_JUMP)  ; LAB_004fb4e0
    TEST byte ptr [EDI + 0xc],0x10      ; 004fb4d6
    JZ 0x004fb5fb                       ; 004fb4da
        ;   XREF to: 004fb5fb (CONDITIONAL_JUMP)  ; LAB_004fb5fb
    TEST EBP,EBP                        ; 004fb4e0
        ;   Label: LAB_004fb4e0
    JZ 0x004fb5ab                       ; 004fb4e2
        ;   XREF to: 004fb5ab (CONDITIONAL_JUMP)  ; LAB_004fb5ab
    MOV DL,byte ptr [EDI + 0xc]         ; 004fb4e8
        ;   Label: LAB_004fb4e8
    XOR EBP,EBP                         ; 004fb4eb
    TEST DL,0x10                        ; 004fb4ed
    JNZ 0x004fb5ab                      ; 004fb4f0
        ;   XREF to: 004fb5ab (CONDITIONAL_JUMP)  ; LAB_004fb5ab
        ;   Label: LAB_004fb4f0
    PUSH EDI                            ; 004fb4f6
    PUSH 0xff                           ; 004fb4f7
    LEA EAX,[ESP + 0x8]                 ; 004fb4fc
    PUSH EAX                            ; 004fb500
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb501
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 004fb506
    TEST EAX,EAX                        ; 004fb509
    JZ 0x004fb5ab                       ; 004fb50b
        ;   XREF to: 004fb5ab (CONDITIONAL_JUMP)  ; LAB_004fb5ab
    MOV DL,0xa                          ; 004fb511
    MOV ESI,ESP                         ; 004fb513
    MOV AL,byte ptr [ESI]               ; 004fb515
        ;   Label: LAB_004fb515
    CMP AL,DL                           ; 004fb517
    JZ 0x004fb52d                       ; 004fb519
        ;   XREF to: 004fb52d (CONDITIONAL_JUMP)  ; LAB_004fb52d
    CMP AL,0x0                          ; 004fb51b
    JZ 0x004fb52b                       ; 004fb51d
        ;   XREF to: 004fb52b (CONDITIONAL_JUMP)  ; LAB_004fb52b
    INC ESI                             ; 004fb51f
    MOV AL,byte ptr [ESI]               ; 004fb520
    CMP AL,DL                           ; 004fb522
    JZ 0x004fb52d                       ; 004fb524
        ;   XREF to: 004fb52d (CONDITIONAL_JUMP)  ; LAB_004fb52d
    INC ESI                             ; 004fb526
    CMP AL,0x0                          ; 004fb527
    JNZ 0x004fb515                      ; 004fb529
        ;   XREF to: 004fb515 (CONDITIONAL_JUMP)  ; LAB_004fb515
    SUB ESI,ESI                         ; 004fb52b
        ;   Label: LAB_004fb52b
    TEST ESI,ESI                        ; 004fb52d
        ;   Label: LAB_004fb52d
    JZ 0x004fb534                       ; 004fb52f
        ;   XREF to: 004fb534 (CONDITIONAL_JUMP)  ; LAB_004fb534
    MOV byte ptr [ESI],0x0              ; 004fb531
    MOV DL,0x3d                         ; 004fb534
        ;   Label: LAB_004fb534
    MOV ESI,ESP                         ; 004fb536
    MOV AL,byte ptr [ESI]               ; 004fb538
        ;   Label: LAB_004fb538
    CMP AL,DL                           ; 004fb53a
    JZ 0x004fb550                       ; 004fb53c
        ;   XREF to: 004fb550 (CONDITIONAL_JUMP)  ; LAB_004fb550
    CMP AL,0x0                          ; 004fb53e
    JZ 0x004fb54e                       ; 004fb540
        ;   XREF to: 004fb54e (CONDITIONAL_JUMP)  ; LAB_004fb54e
    INC ESI                             ; 004fb542
    MOV AL,byte ptr [ESI]               ; 004fb543
    CMP AL,DL                           ; 004fb545
    JZ 0x004fb550                       ; 004fb547
        ;   XREF to: 004fb550 (CONDITIONAL_JUMP)  ; LAB_004fb550
    INC ESI                             ; 004fb549
    CMP AL,0x0                          ; 004fb54a
    JNZ 0x004fb538                      ; 004fb54c
        ;   XREF to: 004fb538 (CONDITIONAL_JUMP)  ; LAB_004fb538
    SUB ESI,ESI                         ; 004fb54e
        ;   Label: LAB_004fb54e
    MOV dword ptr [ESP + 0x200],ESI     ; 004fb550
        ;   Label: LAB_004fb550
    TEST ESI,ESI                        ; 004fb557
    JZ 0x004fb55e                       ; 004fb559
        ;   XREF to: 004fb55e (CONDITIONAL_JUMP)  ; LAB_004fb55e
    MOV byte ptr [ESI],0x0              ; 004fb55b
    MOV EDX,dword ptr [ESP + 0x220]     ; 004fb55e
        ;   Label: LAB_004fb55e
    PUSH EDX                            ; 004fb565
    LEA EAX,[ESP + 0x4]                 ; 004fb566
    PUSH EAX                            ; 004fb56a
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fb56b
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb570
    TEST EAX,EAX                        ; 004fb573
    JNZ 0x004fb639                      ; 004fb575
        ;   XREF to: 004fb639 (CONDITIONAL_JUMP)  ; LAB_004fb639
    MOV EBP,0x1                         ; 004fb57b
    MOV ECX,dword ptr [ESP + 0x228]     ; 004fb580
    MOV EAX,dword ptr [ESP + 0x200]     ; 004fb587
    PUSH ECX                            ; 004fb58e
    ADD EAX,EBP                         ; 004fb58f
    PUSH EAX                            ; 004fb591
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fb592
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb597
    TEST EAX,EAX                        ; 004fb59a
    JNZ 0x004fb5ab                      ; 004fb59c
        ;   XREF to: 004fb5ab (CONDITIONAL_JUMP)  ; LAB_004fb5ab
    MOV EAX,dword ptr [ESP + 0x218]     ; 004fb59e
    MOV dword ptr [EAX],0x0             ; 004fb5a5
    PUSH 0x154                          ; 004fb5ab
        ;   Label: LAB_004fb5ab
    PUSH 0x62fb70                       ; 004fb5b0 | = "..\\engine\\ini.cpp"
    PUSH EDI                            ; 004fb5b5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fb5b6
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004fb5bb
    TEST EBP,EBP                        ; 004fb5be
    JZ 0x004fb645                       ; 004fb5c0
        ;   XREF to: 004fb645 (CONDITIONAL_JUMP)  ; LAB_004fb645
    MOV EAX,EBX                         ; 004fb5c6
    ADD ESP,0x204                       ; 004fb5c8
    POP EBP                             ; 004fb5ce
    POP EDI                             ; 004fb5cf
    POP ESI                             ; 004fb5d0
    POP EBX                             ; 004fb5d1
    RET                                 ; 004fb5d2
    MOV ECX,0x62fb23                    ; 004fb5d3 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004fb5d3
    MOV ESI,0xf5                        ; 004fb5d8
    PUSH 0x62fb35                       ; 004fb5dd | = "cIni::FindLineNumberOfVariable: Unabl..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004fb5e2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004fb5e8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fb5ee
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fb5f3
    JMP 0x004fb4b5                      ; 004fb5f6
        ;   XREF to: 004fb4b5 (UNCONDITIONAL_JUMP)  ; LAB_004fb4b5
    PUSH EDI                            ; 004fb5fb
        ;   Label: LAB_004fb5fb
    PUSH 0xff                           ; 004fb5fc
    LEA EAX,[ESP + 0x8]                 ; 004fb601
    PUSH EAX                            ; 004fb605
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb606
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 004fb60b
    TEST EAX,EAX                        ; 004fb60e
    JZ 0x004fb4e0                       ; 004fb610
        ;   XREF to: 004fb4e0 (CONDITIONAL_JUMP)  ; LAB_004fb4e0
    LEA EAX,[ESP + 0x100]               ; 004fb616
    PUSH EAX                            ; 004fb61d
    LEA EAX,[ESP + 0x4]                 ; 004fb61e
    PUSH EAX                            ; 004fb622
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fb623
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb628
    TEST EAX,EAX                        ; 004fb62b
    JZ 0x004fb4e8                       ; 004fb62d
        ;   XREF to: 004fb4e8 (CONDITIONAL_JUMP)  ; LAB_004fb4e8
    INC EBX                             ; 004fb633
    JMP 0x004fb4d2                      ; 004fb634
        ;   XREF to: 004fb4d2 (UNCONDITIONAL_JUMP)  ; LAB_004fb4d2
    MOV DH,byte ptr [EDI + 0xc]         ; 004fb639
        ;   Label: LAB_004fb639
    INC EBX                             ; 004fb63c
    TEST DH,0x10                        ; 004fb63d
    JMP 0x004fb4f0                      ; 004fb640
        ;   XREF to: 004fb4f0 (UNCONDITIONAL_JUMP)  ; LAB_004fb4f0
    XOR EBX,EBX                         ; 004fb645
        ;   Label: LAB_004fb645
    MOV EAX,EBX                         ; 004fb647
    ADD ESP,0x204                       ; 004fb649
    POP EBP                             ; 004fb64f
    POP EDI                             ; 004fb650
    POP ESI                             ; 004fb651
    POP EBX                             ; 004fb652
    RET                                 ; 004fb653

