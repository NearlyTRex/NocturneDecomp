; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_ImportingGroundTextures_FUN_00578420()
;
; Local Variables:
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0x19b]:1  local_19b
; undefined1       Stack[-0x199]:1  local_199
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005796ed
;   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 at 00578648
;
; Referenced Globals:
;   TerminatedCString s_Importing_texture_ground_0064688c
;   TerminatedCString s_core_setedit_cpp_006468ba
;   TerminatedCString s_rt_006468ce
;   TerminatedCString s_s_006468d1
;   TerminatedCString s_d_006468db
;   TerminatedCString s_core_setedit_cpp_006468de
;   TerminatedCString s_Error_parsing_s_line_d_s_006468f2
;   TerminatedCString s_core_setedit_cpp_00646911
;   TerminatedCString s_Imported_texture_ground__00646925
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char[256] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_ground.cpp_getGroundTypeCode_FUN_004eece0
;   core_ground.cpp_getGroundTypeName_FUN_004eed80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578420
        ;   Label: core_setedit.cpp_ImportingGroundTextures_FUN_00578420
    PUSH EBP                            ; 00578421
    SUB ESP,0x194                       ; 00578422
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 00578428
    PUSH EDX                            ; 0057842f
    PUSH 0x64688c                       ; 00578430 | = "Importing texture ground type list fr..." | s_Importing_texture_ground_0064688c = Importing texture ground type list from %s...
    MOV ECX,dword ptr [0x00678a60]      ; 00578435 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 0057843b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0057843c | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00578441
    PUSH 0x2c3                          ; 00578444
    PUSH 0x6468ba                       ; 00578449 | = "..\\core\\setedit.cpp" | s_core_setedit_cpp_006468ba = ..\core\setedit.cpp
    PUSH 0x6468ce                       ; 0057844e | = "rt" | s_rt_006468ce = rt
    PUSH 0x0                            ; 00578453
    MOV EBX,dword ptr [ESP + 0x1b0]     ; 00578455
    PUSH EBX                            ; 0057845c
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0057845d | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00578462
    MOV EBP,EAX                         ; 00578465
    TEST EAX,EAX                        ; 00578467
    JZ 0x0057861c                       ; 00578469 | LAB_0057861c
        ;   XREF to: 0057861c (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0057846f
    PUSH ESI                            ; 00578470
    XOR EDI,EDI                         ; 00578471
    PUSH EBP                            ; 00578473
        ;   Label: LAB_00578473
    PUSH 0xc8                           ; 00578474
    LEA EAX,[ESP + 0x10]                ; 00578479
    PUSH EAX                            ; 0057847d
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057847e | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00578483
    TEST EAX,EAX                        ; 00578486
    JZ 0x005785eb                       ; 00578488 | LAB_005785eb
        ;   XREF to: 005785eb (CONDITIONAL_JUMP)
    MOV DL,0xa                          ; 0057848e
    LEA ESI,[ESP + 0x8]                 ; 00578490
    MOV AL,byte ptr [ESI]               ; 00578494
        ;   Label: LAB_00578494
    CMP AL,DL                           ; 00578496
    JZ 0x005784ac                       ; 00578498 | LAB_005784ac
        ;   XREF to: 005784ac (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 0057849a
    JZ 0x005784aa                       ; 0057849c | LAB_005784aa
        ;   XREF to: 005784aa (CONDITIONAL_JUMP)
    INC ESI                             ; 0057849e
    MOV AL,byte ptr [ESI]               ; 0057849f
    CMP AL,DL                           ; 005784a1
    JZ 0x005784ac                       ; 005784a3 | LAB_005784ac
        ;   XREF to: 005784ac (CONDITIONAL_JUMP)
    INC ESI                             ; 005784a5
    CMP AL,0x0                          ; 005784a6
    JNZ 0x00578494                      ; 005784a8 | LAB_00578494
        ;   XREF to: 00578494 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005784aa
        ;   Label: LAB_005784aa
    INC EDI                             ; 005784ac
        ;   Label: LAB_005784ac
    TEST ESI,ESI                        ; 005784ad
    JNZ 0x005784cb                      ; 005784af | LAB_005784cb
        ;   XREF to: 005784cb (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x8]                 ; 005784b1
        ;   Label: LAB_005784b1
    MOV BL,byte ptr [EAX]               ; 005784b5
        ;   Label: LAB_005784b5
    INC BL                              ; 005784b7
    AND EBX,0xff                        ; 005784b9
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 005784bf | char[256] g_CharacterClassificationTable
    JZ 0x005784ec                       ; 005784c6 | LAB_005784ec
        ;   XREF to: 005784ec (CONDITIONAL_JUMP)
    INC EAX                             ; 005784c8
    JMP 0x005784b5                      ; 005784c9 | LAB_005784b5
        ;   XREF to: 005784b5 (UNCONDITIONAL_JUMP)
    LEA ESI,[ESP + 0x8]                 ; 005784cb
        ;   Label: LAB_005784cb
    MOV AL,byte ptr [ESI]               ; 005784cf
        ;   Label: LAB_005784cf
    CMP AL,DL                           ; 005784d1
    JZ 0x005784e7                       ; 005784d3 | LAB_005784e7
        ;   XREF to: 005784e7 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005784d5
    JZ 0x005784e5                       ; 005784d7 | LAB_005784e5
        ;   XREF to: 005784e5 (CONDITIONAL_JUMP)
    INC ESI                             ; 005784d9
    MOV AL,byte ptr [ESI]               ; 005784da
    CMP AL,DL                           ; 005784dc
    JZ 0x005784e7                       ; 005784de | LAB_005784e7
        ;   XREF to: 005784e7 (CONDITIONAL_JUMP)
    INC ESI                             ; 005784e0
    CMP AL,0x0                          ; 005784e1
    JNZ 0x005784cf                      ; 005784e3 | LAB_005784cf
        ;   XREF to: 005784cf (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005784e5
        ;   Label: LAB_005784e5
    MOV byte ptr [ESI],0x0              ; 005784e7
        ;   Label: LAB_005784e7
    JMP 0x005784b1                      ; 005784ea | LAB_005784b1
        ;   XREF to: 005784b1 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x0              ; 005784ec
        ;   Label: LAB_005784ec
    JZ 0x00578473                       ; 005784ef | LAB_00578473
        ;   XREF to: 00578473 (CONDITIONAL_JUMP)
    LEA EBX,[ESP + 0xd0]                ; 005784f1
    PUSH EBX                            ; 005784f8
    LEA EBX,[ESP + 0x138]               ; 005784f9
    PUSH EBX                            ; 00578500
    PUSH 0x6468d1                       ; 00578501 | = "%[^,], %s" | s_s_006468d1 = %[^,], %s
    MOV EDX,0xffffffff                  ; 00578506
    PUSH EAX                            ; 0057850b
    MOV dword ptr [ESP + 0x1a8],EDX     ; 0057850c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00578513 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00578518
    CMP EAX,0x2                         ; 0057851b
    JNZ 0x00578569                      ; 0057851e | LAB_00578569
        ;   XREF to: 00578569 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x198]               ; 00578520
    PUSH EAX                            ; 00578527
    PUSH 0x6468db                       ; 00578528 | = "%d" | s_d_006468db = %d
    LEA EAX,[ESP + 0xd8]                ; 0057852d
    PUSH EAX                            ; 00578534
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00578535 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057853a
    CMP EAX,0x1                         ; 0057853d
    JZ 0x00578569                       ; 00578540 | LAB_00578569
        ;   XREF to: 00578569 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00578542
    LEA EAX,[ESP + 0xd0]                ; 00578544
        ;   Label: LAB_00578544
    PUSH EAX                            ; 0057854b
    PUSH EBX                            ; 0057854c
    CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0 ; 0057854d | char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00578552
    PUSH EAX                            ; 00578555
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00578556 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057855b
    TEST EAX,EAX                        ; 0057855e
    JNZ 0x00578598                      ; 00578560 | LAB_00578598
        ;   XREF to: 00578598 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x198],EBX     ; 00578562
        ;   Label: LAB_00578562
    CMP dword ptr [ESP + 0x198],0x0     ; 00578569
        ;   Label: LAB_00578569
    JL 0x005785b8                       ; 00578571 | LAB_005785b8
        ;   XREF to: 005785b8 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x198]     ; 00578573
        ;   Label: LAB_00578573
    PUSH EDX                            ; 0057857a
    LEA EAX,[ESP + 0x138]               ; 0057857b
    PUSH EAX                            ; 00578582
    CALL core_setedit.cpp_DefineTexturesMaybe_FUN_00578290 ; 00578583 | undefined core_setedit.cpp_DefineTexturesMaybe_FUN_00578290()
        ;   XREF to: 00578290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00578588
    JMP 0x00578473                      ; 0057858b | LAB_00578473
        ;   XREF to: 00578473 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 00578590
        ;   Label: LAB_00578590
    CMP EBX,0xd                         ; 00578591
    JLE 0x00578544                      ; 00578594 | LAB_00578544
        ;   XREF to: 00578544 (CONDITIONAL_JUMP)
    JMP 0x00578569                      ; 00578596 | LAB_00578569
        ;   XREF to: 00578569 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xd0]                ; 00578598
        ;   Label: LAB_00578598
    PUSH EAX                            ; 0057859f
    PUSH EBX                            ; 005785a0
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 005785a1 | char * core_ground.cpp_getGroundTypeName_FUN_004eed80(int type)
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005785a6
    PUSH EAX                            ; 005785a9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005785aa | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005785af
    TEST EAX,EAX                        ; 005785b2
    JNZ 0x00578590                      ; 005785b4 | LAB_00578590
        ;   XREF to: 00578590 (CONDITIONAL_JUMP)
    JMP 0x00578562                      ; 005785b6 | LAB_00578562
        ;   XREF to: 00578562 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x8]                 ; 005785b8
        ;   Label: LAB_005785b8
    PUSH EAX                            ; 005785bc
    PUSH EDI                            ; 005785bd
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 005785be
    PUSH EAX                            ; 005785c5
    MOV EBX,0x6468de                    ; 005785c6 | = "..\\core\\setedit.cpp" | s_core_setedit_cpp_006468de = ..\core\setedit.cpp
    MOV ESI,0x2f0                       ; 005785cb
    PUSH 0x6468f2                       ; 005785d0 | = "Error parsing %s line %d:\n\"%s\"" | s_Error_parsing_s_line_d_s_006468f2 = Error parsing %s line %d:
        ; "%s"
    MOV dword ptr [0x02f0ca48],EBX      ; 005785d5 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005785db | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005785e1 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005785e6
    JMP 0x00578573                      ; 005785e9 | LAB_00578573
        ;   XREF to: 00578573 (UNCONDITIONAL_JUMP)
    PUSH 0x2f4                          ; 005785eb
        ;   Label: LAB_005785eb
    PUSH 0x646911                       ; 005785f0 | = "..\\core\\setedit.cpp" | s_core_setedit_cpp_00646911 = ..\core\setedit.cpp
    PUSH EBP                            ; 005785f5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005785f6 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005785fb
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 005785fe
    PUSH ESI                            ; 00578605
    PUSH 0x646925                       ; 00578606 | = "Imported texture ground type list fro..." | s_Imported_texture_ground__00646925 = Imported texture ground type list from %s OK.
    MOV EDI,dword ptr [0x00678a60]      ; 0057860b | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00578611 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00578612 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00578617
    POP ESI                             ; 0057861a
    POP EDI                             ; 0057861b
    ADD ESP,0x194                       ; 0057861c
        ;   Label: LAB_0057861c
    POP EBP                             ; 00578622
    POP EBX                             ; 00578623
    RET                                 ; 00578624

