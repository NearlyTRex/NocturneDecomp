; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_time_c__strftime_FUN_006002d4(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   dest_buffer
; uint             Stack[0x8]:4   buffer_size
; char *           Stack[0xc]:4   format_string
; _tm *            Stack[0x10]:4   time_ptr
; Local Variables:
; char[132]        Stack[-0xa0]:132  local_a0
; uint             Stack[-0x1c]:4  local_1c
; uint             Stack[-0x18]:4  local_18
; char *           Stack[-0x14]:4  local_14
;
; XREF[7]:
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b7548
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b78ec
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6ed1
;   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 at 004b809e
;   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 at 0046bb1f
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f849
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 at 004a346d
;
; Referenced Globals:
;   TerminatedCString s_a_b_d_H_M_S_Y_00658bd0
;   TerminatedCString s_m_d_y_00658be8
;   undefined1 DAT_00658bf4
;   TerminatedCString s_I_M_S_p_00658bf8
;   undefined1 DAT_00658c04
;   undefined1 DAT_00658c08
;   undefined1 DAT_00658c0c
;   TerminatedCString s_a_b_d_Y_00658c10
;   TerminatedCString s_H_M_S_00658c20
;   char[7][4] g_WeekdayNamesShort
;   char*[7] g_WeekdayNamesLong
;   char[12][4] g_MonthNamesShort
;   char*[12] g_MonthNamesLong
;   void* PTR_s_EST_006851c0 = 006850bc
;
; Called Functions:
;   crt_stdio.c_formatTwoDigits_FUN_006002a0
;   crt_stdio.c_IntegerToString_FUN_00607d18
;   crt_time.c_tzset_FUN_006072f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006002d4
        ;   Label: crt_time.c__strftime_FUN_006002d4
    PUSH ESI                            ; 006002d5
    PUSH EDI                            ; 006002d6
    PUSH EBP                            ; 006002d7
    SUB ESP,0x90                        ; 006002d8
    MOV EBP,dword ptr [ESP + 0xac]      ; 006002de
    MOV EBX,dword ptr [ESP + 0xb0]      ; 006002e5
    XOR EDX,EDX                         ; 006002ec
    MOV EAX,dword ptr [ESP + 0xa8]      ; 006002ee
    MOV dword ptr [ESP + 0x84],EDX      ; 006002f5
    MOV dword ptr [ESP + 0x88],EAX      ; 006002fc
    MOV dword ptr [ESP + 0x8c],EDX      ; 00600303
    MOV AH,byte ptr [EBP]               ; 0060030a | = "%a %b %d %H:%M:%S %Y" | s_m_d_y_00658be8 | s_I_M_S_p_00658bf8
        ;   Label: LAB_0060030a
    MOV ESI,ESP                         ; 0060030d
    TEST AH,AH                          ; 0060030f
    JNZ 0x00600330                      ; 00600311
        ;   XREF to: 00600330 (CONDITIONAL_JUMP)  ; LAB_00600330
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00600313
    TEST EDI,EDI                        ; 0060031a
    JZ 0x0060072f                       ; 0060031c
        ;   XREF to: 0060072f (CONDITIONAL_JUMP)  ; LAB_0060072f
    XOR EAX,EAX                         ; 00600322
    LEA EBP,[EDI + 0x1]                 ; 00600324
    MOV dword ptr [ESP + 0x8c],EAX      ; 00600327
    JMP 0x0060030a                      ; 0060032e
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    CMP AH,0x25                         ; 00600330
        ;   Label: LAB_00600330
    JZ 0x00600345                       ; 00600333
        ;   XREF to: 00600345 (CONDITIONAL_JUMP)  ; LAB_00600345
    MOV AL,AH                           ; 00600335
    MOV byte ptr [ESP],AH               ; 00600337
    XOR AL,AH                           ; 0060033a
    MOV byte ptr [ESP + 0x1],AL         ; 0060033c
    JMP 0x006006c0                      ; 00600340
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV AL,byte ptr [EBP + 0x1]         ; 00600345
        ;   Label: LAB_00600345
    INC EBP                             ; 00600348
    CMP AL,0x61                         ; 00600349
    JC 0x006003f1                       ; 0060034b
        ;   XREF to: 006003f1 (CONDITIONAL_JUMP)  ; LAB_006003f1
    JBE 0x00600481                      ; 00600351
        ;   XREF to: 00600481 (CONDITIONAL_JUMP)  ; LAB_00600481
    CMP AL,0x6e                         ; 00600357
    JC 0x006003aa                       ; 00600359
        ;   XREF to: 006003aa (CONDITIONAL_JUMP)  ; LAB_006003aa
    JBE 0x00600571                      ; 0060035b
        ;   XREF to: 00600571 (CONDITIONAL_JUMP)  ; LAB_00600571
    CMP AL,0x77                         ; 00600361
    JC 0x00600386                       ; 00600363
        ;   XREF to: 00600386 (CONDITIONAL_JUMP)  ; LAB_00600386
    JBE 0x006005ef                      ; 00600365
        ;   XREF to: 006005ef (CONDITIONAL_JUMP)  ; LAB_006005ef
    CMP AL,0x79                         ; 0060036b
    JC 0x00600648                       ; 0060036d
        ;   XREF to: 00600648 (CONDITIONAL_JUMP)  ; LAB_00600648
    JBE 0x0060066a                      ; 00600373
        ;   XREF to: 0060066a (CONDITIONAL_JUMP)  ; LAB_0060066a
    CMP AL,0x7a                         ; 00600379
    JZ 0x006006a3                       ; 0060037b
        ;   XREF to: 006006a3 (CONDITIONAL_JUMP)  ; LAB_006006a3
    JMP 0x006006b4                      ; 00600381
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x72                         ; 00600386
        ;   Label: LAB_00600386
    JC 0x0060039d                       ; 00600388
        ;   XREF to: 0060039d (CONDITIONAL_JUMP)  ; LAB_0060039d
    JBE 0x0060057b                      ; 0060038a
        ;   XREF to: 0060057b (CONDITIONAL_JUMP)  ; LAB_0060057b
    CMP AL,0x74                         ; 00600390
    JZ 0x006005bb                       ; 00600392
        ;   XREF to: 006005bb (CONDITIONAL_JUMP)  ; LAB_006005bb
    JMP 0x006006b4                      ; 00600398
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x70                         ; 0060039d
        ;   Label: LAB_0060039d
    JZ 0x0060058c                       ; 0060039f
        ;   XREF to: 0060058c (CONDITIONAL_JUMP)  ; LAB_0060058c
    JMP 0x006006b4                      ; 006003a5
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x64                         ; 006003aa
        ;   Label: LAB_006003aa
    JC 0x006003d8                       ; 006003ac
        ;   XREF to: 006003d8 (CONDITIONAL_JUMP)  ; LAB_006003d8
    JBE 0x006004c2                      ; 006003ae
        ;   XREF to: 006004c2 (CONDITIONAL_JUMP)  ; LAB_006004c2
    CMP AL,0x6a                         ; 006003b4
    JC 0x006003cb                       ; 006003b6
        ;   XREF to: 006003cb (CONDITIONAL_JUMP)  ; LAB_006003cb
    JBE 0x00600526                      ; 006003b8
        ;   XREF to: 00600526 (CONDITIONAL_JUMP)  ; LAB_00600526
    CMP AL,0x6d                         ; 006003be
    JZ 0x00600544                       ; 006003c0
        ;   XREF to: 00600544 (CONDITIONAL_JUMP)  ; LAB_00600544
    JMP 0x006006b4                      ; 006003c6
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x68                         ; 006003cb
        ;   Label: LAB_006003cb
    JZ 0x006004a2                       ; 006003cd
        ;   XREF to: 006004a2 (CONDITIONAL_JUMP)  ; LAB_006004a2
    JMP 0x006006b4                      ; 006003d3
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x62                         ; 006003d8
        ;   Label: LAB_006003d8
    JBE 0x006004a2                      ; 006003da
        ;   XREF to: 006004a2 (CONDITIONAL_JUMP)  ; LAB_006004a2
    MOV dword ptr [ESP + 0x8c],EBP      ; 006003e0
    MOV EBP,0x658bd0                    ; 006003e7 | = "%a %b %d %H:%M:%S %Y"
    JMP 0x0060030a                      ; 006003ec
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    CMP AL,0x4d                         ; 006003f1
        ;   Label: LAB_006003f1
    JC 0x00600444                       ; 006003f3
        ;   XREF to: 00600444 (CONDITIONAL_JUMP)  ; LAB_00600444
    JBE 0x0060055b                      ; 006003f5
        ;   XREF to: 0060055b (CONDITIONAL_JUMP)  ; LAB_0060055b
    CMP AL,0x57                         ; 006003fb
    JC 0x00600420                       ; 006003fd
        ;   XREF to: 00600420 (CONDITIONAL_JUMP)  ; LAB_00600420
    JBE 0x00600602                      ; 006003ff
        ;   XREF to: 00600602 (CONDITIONAL_JUMP)  ; LAB_00600602
    CMP AL,0x59                         ; 00600405
    JC 0x00600659                       ; 00600407
        ;   XREF to: 00600659 (CONDITIONAL_JUMP)  ; LAB_00600659
    JBE 0x00600689                      ; 0060040d
        ;   XREF to: 00600689 (CONDITIONAL_JUMP)  ; LAB_00600689
    CMP AL,0x5a                         ; 00600413
    JZ 0x006006a3                       ; 00600415
        ;   XREF to: 006006a3 (CONDITIONAL_JUMP)  ; LAB_006006a3
    JMP 0x006006b4                      ; 0060041b
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x54                         ; 00600420
        ;   Label: LAB_00600420
    JC 0x00600437                       ; 00600422
        ;   XREF to: 00600437 (CONDITIONAL_JUMP)  ; LAB_00600437
    JBE 0x00600659                      ; 00600424
        ;   XREF to: 00600659 (CONDITIONAL_JUMP)  ; LAB_00600659
    CMP AL,0x55                         ; 0060042a
    JZ 0x006005c5                       ; 0060042c
        ;   XREF to: 006005c5 (CONDITIONAL_JUMP)  ; LAB_006005c5
    JMP 0x006006b4                      ; 00600432
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x53                         ; 00600437
        ;   Label: LAB_00600437
    JZ 0x006005a6                       ; 00600439
        ;   XREF to: 006005a6 (CONDITIONAL_JUMP)  ; LAB_006005a6
    JMP 0x006006b4                      ; 0060043f
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x42                         ; 00600444
        ;   Label: LAB_00600444
    JC 0x0060046a                       ; 00600446
        ;   XREF to: 0060046a (CONDITIONAL_JUMP)  ; LAB_0060046a
    JBE 0x006004b3                      ; 00600448
        ;   XREF to: 006004b3 (CONDITIONAL_JUMP)  ; LAB_006004b3
    CMP AL,0x48                         ; 0060044a
    JC 0x00600461                       ; 0060044c
        ;   XREF to: 00600461 (CONDITIONAL_JUMP)  ; LAB_00600461
    JBE 0x006004e9                      ; 0060044e
        ;   XREF to: 006004e9 (CONDITIONAL_JUMP)  ; LAB_006004e9
    CMP AL,0x49                         ; 00600454
    JZ 0x006004ff                       ; 00600456
        ;   XREF to: 006004ff (CONDITIONAL_JUMP)  ; LAB_006004ff
    JMP 0x006006b4                      ; 0060045c
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x44                         ; 00600461
        ;   Label: LAB_00600461
    JZ 0x006004d8                       ; 00600463
        ;   XREF to: 006004d8 (CONDITIONAL_JUMP)  ; LAB_006004d8
    JMP 0x006006b4                      ; 00600465
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,AH                           ; 0060046a
        ;   Label: LAB_0060046a
    JC 0x006006b4                       ; 0060046c
        ;   XREF to: 006006b4 (CONDITIONAL_JUMP)  ; LAB_006006b4
    JBE 0x006006b4                      ; 00600472
        ;   XREF to: 006006b4 (CONDITIONAL_JUMP)  ; LAB_006006b4
    CMP AL,0x41                         ; 00600478
    JZ 0x00600493                       ; 0060047a
        ;   XREF to: 00600493 (CONDITIONAL_JUMP)  ; LAB_00600493
    JMP 0x006006b4                      ; 0060047c
        ;   XREF to: 006006b4 (UNCONDITIONAL_JUMP)  ; LAB_006006b4
    MOV EAX,dword ptr [EBX + 0x18]      ; 00600481
        ;   Label: LAB_00600481
    MOV ESI,0x684b44                    ; 00600484 | g_WeekdayNamesShort
    SHL EAX,0x2                         ; 00600489
    ADD ESI,EAX                         ; 0060048c
    JMP 0x006006c0                      ; 0060048e
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV ESI,dword ptr [EBX + 0x18]      ; 00600493
        ;   Label: LAB_00600493
    MOV ESI,dword ptr [ESI*0x4 + 0x684b60] ; 00600496 | g_WeekdayNamesLong
    JMP 0x006006c0                      ; 0060049d
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV ESI,dword ptr [EBX + 0x10]      ; 006004a2
        ;   Label: LAB_006004a2
    SHL ESI,0x2                         ; 006004a5
    ADD ESI,0x684b7c                    ; 006004a8 | g_MonthNamesShort
    JMP 0x006006c0                      ; 006004ae
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV ESI,dword ptr [EBX + 0x10]      ; 006004b3
        ;   Label: LAB_006004b3
    MOV ESI,dword ptr [ESI*0x4 + 0x684bac] ; 006004b6 | g_MonthNamesLong
    JMP 0x006006c0                      ; 006004bd
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EDI,dword ptr [EBX + 0xc]       ; 006004c2
        ;   Label: LAB_006004c2
    PUSH EDI                            ; 006004c5
    LEA EAX,[ESP + 0x4]                 ; 006004c6
    PUSH EAX                            ; 006004ca
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 006004cb
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 006004d0
    JMP 0x006006c0                      ; 006004d3
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV dword ptr [ESP + 0x8c],EBP      ; 006004d8
        ;   Label: LAB_006004d8
    MOV EBP,0x658be8                    ; 006004df | = "%m/%d/%y"
    JMP 0x0060030a                      ; 006004e4
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    MOV ECX,dword ptr [EBX + 0x8]       ; 006004e9
        ;   Label: LAB_006004e9
    PUSH ECX                            ; 006004ec
    LEA EAX,[ESP + 0x4]                 ; 006004ed
    PUSH EAX                            ; 006004f1
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 006004f2
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 006004f7
    JMP 0x006006c0                      ; 006004fa
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EAX,dword ptr [EBX + 0x8]       ; 006004ff
        ;   Label: LAB_006004ff
    CMP EAX,0xc                         ; 00600502
    JLE 0x0060050a                      ; 00600505
        ;   XREF to: 0060050a (CONDITIONAL_JUMP)  ; LAB_0060050a
    SUB EAX,0xc                         ; 00600507
    TEST EAX,EAX                        ; 0060050a
        ;   Label: LAB_0060050a
    JNZ 0x00600513                      ; 0060050c
        ;   XREF to: 00600513 (CONDITIONAL_JUMP)  ; LAB_00600513
    MOV EAX,0xc                         ; 0060050e
    PUSH EAX                            ; 00600513
        ;   Label: LAB_00600513
    LEA EAX,[ESP + 0x4]                 ; 00600514
    PUSH EAX                            ; 00600518
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 00600519
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 0060051e
    JMP 0x006006c0                      ; 00600521
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    PUSH 0xa                            ; 00600526
        ;   Label: LAB_00600526
    LEA EAX,[ESP + 0x4]                 ; 00600528
    PUSH EAX                            ; 0060052c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0060052d
    ADD EAX,0x65                        ; 00600530
    PUSH EAX                            ; 00600533
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 00600534
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 00600539
    DEC byte ptr [ESP]                  ; 0060053c
    JMP 0x006006c0                      ; 0060053f
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EAX,dword ptr [EBX + 0x10]      ; 00600544
        ;   Label: LAB_00600544
    INC EAX                             ; 00600547
    PUSH EAX                            ; 00600548
    LEA EAX,[ESP + 0x4]                 ; 00600549
    PUSH EAX                            ; 0060054d
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 0060054e
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 00600553
    JMP 0x006006c0                      ; 00600556
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EDX,dword ptr [EBX + 0x4]       ; 0060055b
        ;   Label: LAB_0060055b
    PUSH EDX                            ; 0060055e
    LEA EAX,[ESP + 0x4]                 ; 0060055f
    PUSH EAX                            ; 00600563
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 00600564
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 00600569
    JMP 0x006006c0                      ; 0060056c
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV ESI,0x658bf4                    ; 00600571 | DAT_00658bf4
        ;   Label: LAB_00600571
    JMP 0x006006c0                      ; 00600576
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV dword ptr [ESP + 0x8c],EBP      ; 0060057b
        ;   Label: LAB_0060057b
    MOV EBP,0x658bf8                    ; 00600582 | = "%I:%M:%S %p"
    JMP 0x0060030a                      ; 00600587
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    CMP dword ptr [EBX + 0x8],0xc       ; 0060058c
        ;   Label: LAB_0060058c
    JGE 0x0060059c                      ; 00600590
        ;   XREF to: 0060059c (CONDITIONAL_JUMP)  ; LAB_0060059c
    MOV ESI,0x658c04                    ; 00600592 | DAT_00658c04
    JMP 0x006006c0                      ; 00600597
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV ESI,0x658c08                    ; 0060059c | DAT_00658c08
        ;   Label: LAB_0060059c
    JMP 0x006006c0                      ; 006005a1
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EAX,dword ptr [EBX]             ; 006005a6
        ;   Label: LAB_006005a6
    PUSH EAX                            ; 006005a8
    LEA EAX,[ESP + 0x4]                 ; 006005a9
    PUSH EAX                            ; 006005ad
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 006005ae
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 006005b3
    JMP 0x006006c0                      ; 006005b6
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV ESI,0x658c0c                    ; 006005bb | DAT_00658c0c
        ;   Label: LAB_006005bb
    JMP 0x006006c0                      ; 006005c0
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EDX,dword ptr [EBX + 0x1c]      ; 006005c5
        ;   Label: LAB_006005c5
    MOV EDI,dword ptr [EBX + 0x18]      ; 006005c8
    ADD EDX,0x7                         ; 006005cb
    SUB EDX,EDI                         ; 006005ce
    MOV ECX,0x7                         ; 006005d0
    MOV EAX,EDX                         ; 006005d5
    SAR EDX,0x1f                        ; 006005d7
    IDIV ECX                            ; 006005da
    PUSH EAX                            ; 006005dc
    LEA EAX,[ESP + 0x4]                 ; 006005dd
    PUSH EAX                            ; 006005e1
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 006005e2
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 006005e7
    JMP 0x006006c0                      ; 006005ea
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV AL,byte ptr [EBX + 0x18]        ; 006005ef
        ;   Label: LAB_006005ef
    XOR DH,DH                           ; 006005f2
    ADD AL,0x30                         ; 006005f4
    MOV byte ptr [ESP + 0x1],DH         ; 006005f6
    MOV byte ptr [ESP],AL               ; 006005fa
    JMP 0x006006c0                      ; 006005fd
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00600602
        ;   Label: LAB_00600602
    MOV EDX,EAX                         ; 00600605
    MOV ECX,0x7                         ; 00600607
    SAR EDX,0x1f                        ; 0060060c
    IDIV ECX                            ; 0060060f
    SUB EDX,dword ptr [EBX + 0x18]      ; 00600611
    ADD EDX,ECX                         ; 00600614
    MOV EAX,EDX                         ; 00600616
    SAR EDX,0x1f                        ; 00600618
    IDIV ECX                            ; 0060061b
    MOV EAX,0x6                         ; 0060061d
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00600622
    SUB EAX,EDX                         ; 00600625
    ADD EAX,ECX                         ; 00600627
    MOV EDX,EAX                         ; 00600629
    MOV ECX,0x7                         ; 0060062b
    SAR EDX,0x1f                        ; 00600630
    IDIV ECX                            ; 00600633
    PUSH EAX                            ; 00600635
    LEA EAX,[ESP + 0x4]                 ; 00600636
    PUSH EAX                            ; 0060063a
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 0060063b
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 00600640
    JMP 0x006006c0                      ; 00600643
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV dword ptr [ESP + 0x8c],EBP      ; 00600648
        ;   Label: LAB_00600648
    MOV EBP,0x658c10                    ; 0060064f | = "%a %b %d, %Y"
    JMP 0x0060030a                      ; 00600654
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    MOV dword ptr [ESP + 0x8c],EBP      ; 00600659
        ;   Label: LAB_00600659
    MOV EBP,0x658c20                    ; 00600660 | = "%H:%M:%S"
    JMP 0x0060030a                      ; 00600665
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060066a
        ;   Label: LAB_0060066a
    MOV EDX,EAX                         ; 0060066d
    MOV ECX,0x64                        ; 0060066f
    SAR EDX,0x1f                        ; 00600674
    IDIV ECX                            ; 00600677
    PUSH EDX                            ; 00600679
    LEA EAX,[ESP + 0x4]                 ; 0060067a
    PUSH EAX                            ; 0060067e
    CALL crt_stdio.c_formatTwoDigits_FUN_006002a0 ; 0060067f
        ;   XREF to: 006002a0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
    ADD ESP,0x8                         ; 00600684
    JMP 0x006006c0                      ; 00600687
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    PUSH 0xa                            ; 00600689
        ;   Label: LAB_00600689
    LEA EAX,[ESP + 0x4]                 ; 0060068b
    PUSH EAX                            ; 0060068f
    MOV EAX,dword ptr [EBX + 0x14]      ; 00600690
    ADD EAX,0x76c                       ; 00600693
    PUSH EAX                            ; 00600698
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 00600699
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 0060069e
    JMP 0x006006c0                      ; 006006a1
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    CALL crt_time.c_tzset_FUN_006072f8  ; 006006a3
        ;   XREF to: 006072f8 (UNCONDITIONAL_CALL)  ; void crt_time.c_tzset_FUN_006072f8()
        ;   Label: LAB_006006a3
    MOV ESI,dword ptr [EBX + 0x20]      ; 006006a8
    MOV ESI,dword ptr [ESI*0x4 + 0x6851c0] ; 006006ab | PTR_s_EST_006851c0
    JMP 0x006006c0                      ; 006006b2
        ;   XREF to: 006006c0 (UNCONDITIONAL_JUMP)  ; LAB_006006c0
    MOV AL,byte ptr [EBP]               ; 006006b4
        ;   Label: LAB_006006b4
    XOR CH,CH                           ; 006006b7
    MOV byte ptr [ESP],AL               ; 006006b9
    MOV byte ptr [ESP + 0x1],CH         ; 006006bc
    MOV EDI,ESI                         ; 006006c0
        ;   Label: LAB_006006c0
    INC EBP                             ; 006006c2
    PUSH ES                             ; 006006c3
    MOV AX,DS                           ; 006006c4
    MOV ES,AX                           ; 006006c6
    SUB ECX,ECX                         ; 006006c8
    DEC ECX                             ; 006006ca
    XOR EAX,EAX                         ; 006006cb
    SCASB.REPNE ES:EDI                  ; 006006cd | DAT_00658bf4 | DAT_00658c04 | DAT_00658c08
    NOT ECX                             ; 006006cf
    DEC ECX                             ; 006006d1
    POP ES                              ; 006006d2
    MOV EDI,dword ptr [ESP + 0x88]      ; 006006d3
    MOV EDX,ECX                         ; 006006da
    CMP ECX,EDI                         ; 006006dc
    JBE 0x006006e2                      ; 006006de
        ;   XREF to: 006006e2 (CONDITIONAL_JUMP)  ; LAB_006006e2
    MOV EDX,EDI                         ; 006006e0
    MOV EDI,dword ptr [ESP + 0xa4]      ; 006006e2
        ;   Label: LAB_006006e2
    MOV EAX,dword ptr [ESP + 0x84]      ; 006006e9
    MOV ECX,EDX                         ; 006006f0
    ADD EDI,EAX                         ; 006006f2
    PUSH ES                             ; 006006f4
    MOV AX,DS                           ; 006006f5
    MOV ES,AX                           ; 006006f7
    PUSH EDI                            ; 006006f9
    MOV EAX,ECX                         ; 006006fa
    SHR ECX,0x2                         ; 006006fc
    MOVSD.REP ES:EDI,ESI                ; 006006ff
    MOV CL,AL                           ; 00600701
    AND CL,0x3                          ; 00600703
    MOVSB.REP ES:EDI,ESI                ; 00600706
    POP EDI                             ; 00600708
    POP ES                              ; 00600709
    MOV ECX,dword ptr [ESP + 0x88]      ; 0060070a
    MOV ESI,dword ptr [ESP + 0x84]      ; 00600711
    SUB ECX,EDX                         ; 00600718
    ADD ESI,EDX                         ; 0060071a
    MOV dword ptr [ESP + 0x88],ECX      ; 0060071c
    MOV dword ptr [ESP + 0x84],ESI      ; 00600723
    JMP 0x0060030a                      ; 0060072a
        ;   XREF to: 0060030a (UNCONDITIONAL_JUMP)  ; LAB_0060030a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0060072f
        ;   Label: LAB_0060072f
    CMP EAX,dword ptr [ESP + 0xa8]      ; 00600736
    JNC 0x00600756                      ; 0060073d
        ;   XREF to: 00600756 (CONDITIONAL_JUMP)  ; LAB_00600756
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0060073f
    MOV EBX,dword ptr [ESP + 0x84]      ; 00600746
    ADD EAX,EBX                         ; 0060074d
    MOV byte ptr [EAX],0x0              ; 0060074f
    MOV EAX,EBX                         ; 00600752
    JMP 0x00600758                      ; 00600754
        ;   XREF to: 00600758 (UNCONDITIONAL_JUMP)  ; LAB_00600758
    XOR EAX,EAX                         ; 00600756
        ;   Label: LAB_00600756
    ADD ESP,0x90                        ; 00600758
        ;   Label: LAB_00600758
    POP EBP                             ; 0060075e
    POP EDI                             ; 0060075f
    POP ESI                             ; 00600760
    POP EBX                             ; 00600761
    RET                                 ; 00600762

