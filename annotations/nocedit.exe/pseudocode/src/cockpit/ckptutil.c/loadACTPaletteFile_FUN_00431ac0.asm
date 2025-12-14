; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0(char * base_filename, char * output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   base_filename
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xab]:1  local_ab
; undefined1       Stack[-0xa9]:1  local_a9
; undefined1       Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x5c]:1  local_5c
;
; XREF[1]:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30 at 00431a44
;
; Referenced Globals:
;   TerminatedCString s_ACT_00617a80
;   undefined4 s_ACT_00617a81
;   undefined4 s_CT_00617a82
;   undefined4 s_T_00617a83
;   TerminatedCString s_rb_00617a85
;   TerminatedCString s_art_00617a88
;   TerminatedCString s_Error_reading_s_00617a8c
;   TerminatedCString s_cockpit_ckptutil_c_00617a9e
;   TerminatedCString s_cockpit_ckptutil_c_00617ab4
;   uchar[768] g_DefaultPalette
;   undefined4 UCHAR_ARRAY_02d0224c
;   undefined4 UCHAR_ARRAY_02d0224d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431ac0
        ;   Label: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
    PUSH ESI                            ; 00431ac1
    PUSH EDI                            ; 00431ac2
    SUB ESP,0xa0                        ; 00431ac3
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00431ac9
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00431ad0
    MOV EDI,ESP                         ; 00431ad7
    MOV DL,0x2e                         ; 00431ad9
    PUSH EDI                            ; 00431adb
    MOV AL,byte ptr [ESI]               ; 00431adc
        ;   Label: LAB_00431adc
    MOV byte ptr [EDI],AL               ; 00431ade
    CMP AL,0x0                          ; 00431ae0
    JZ 0x00431af4                       ; 00431ae2
        ;   XREF to: 00431af4 (CONDITIONAL_JUMP)  ; LAB_00431af4
    MOV AL,byte ptr [ESI + 0x1]         ; 00431ae4
    ADD ESI,0x2                         ; 00431ae7
    MOV byte ptr [EDI + 0x1],AL         ; 00431aea
    ADD EDI,0x2                         ; 00431aed
    CMP AL,0x0                          ; 00431af0
    JNZ 0x00431adc                      ; 00431af2
        ;   XREF to: 00431adc (CONDITIONAL_JUMP)  ; LAB_00431adc
    POP EDI                             ; 00431af4
        ;   Label: LAB_00431af4
    MOV ESI,ESP                         ; 00431af5
    MOV AL,byte ptr [ESI]               ; 00431af7
        ;   Label: LAB_00431af7
    CMP AL,DL                           ; 00431af9
    JZ 0x00431b0f                       ; 00431afb
        ;   XREF to: 00431b0f (CONDITIONAL_JUMP)  ; LAB_00431b0f
    CMP AL,0x0                          ; 00431afd
    JZ 0x00431b0d                       ; 00431aff
        ;   XREF to: 00431b0d (CONDITIONAL_JUMP)  ; LAB_00431b0d
    INC ESI                             ; 00431b01
    MOV AL,byte ptr [ESI]               ; 00431b02
    CMP AL,DL                           ; 00431b04
    JZ 0x00431b0f                       ; 00431b06
        ;   XREF to: 00431b0f (CONDITIONAL_JUMP)  ; LAB_00431b0f
    INC ESI                             ; 00431b08
    CMP AL,0x0                          ; 00431b09
    JNZ 0x00431af7                      ; 00431b0b
        ;   XREF to: 00431af7 (CONDITIONAL_JUMP)  ; LAB_00431af7
    SUB ESI,ESI                         ; 00431b0d
        ;   Label: LAB_00431b0d
    MOV EDI,ESI                         ; 00431b0f
        ;   Label: LAB_00431b0f
    TEST ESI,ESI                        ; 00431b11
    JNZ 0x00431b33                      ; 00431b13
        ;   XREF to: 00431b33 (CONDITIONAL_JUMP)  ; LAB_00431b33
    MOV ESI,ESP                         ; 00431b15
    XOR DL,DL                           ; 00431b17
    MOV AL,byte ptr [ESI]               ; 00431b19
        ;   Label: LAB_00431b19
    CMP AL,DL                           ; 00431b1b
    JZ 0x00431b31                       ; 00431b1d
        ;   XREF to: 00431b31 (CONDITIONAL_JUMP)  ; LAB_00431b31
    CMP AL,0x0                          ; 00431b1f
    JZ 0x00431b2f                       ; 00431b21
        ;   XREF to: 00431b2f (CONDITIONAL_JUMP)  ; LAB_00431b2f
    INC ESI                             ; 00431b23
    MOV AL,byte ptr [ESI]               ; 00431b24
    CMP AL,DL                           ; 00431b26
    JZ 0x00431b31                       ; 00431b28
        ;   XREF to: 00431b31 (CONDITIONAL_JUMP)  ; LAB_00431b31
    INC ESI                             ; 00431b2a
    CMP AL,0x0                          ; 00431b2b
    JNZ 0x00431b19                      ; 00431b2d
        ;   XREF to: 00431b19 (CONDITIONAL_JUMP)  ; LAB_00431b19
    SUB ESI,ESI                         ; 00431b2f
        ;   Label: LAB_00431b2f
    MOV EDI,ESI                         ; 00431b31
        ;   Label: LAB_00431b31
    MOV ESI,0x617a80                    ; 00431b33 | = ".ACT"
        ;   Label: LAB_00431b33
    PUSH EDI                            ; 00431b38
    MOV AL,byte ptr [ESI]               ; 00431b39 | = ".ACT" | s_CT_00617a82
        ;   Label: LAB_00431b39
    MOV byte ptr [EDI],AL               ; 00431b3b
    CMP AL,0x0                          ; 00431b3d
    JZ 0x00431b51                       ; 00431b3f
        ;   XREF to: 00431b51 (CONDITIONAL_JUMP)  ; LAB_00431b51
    MOV AL,byte ptr [ESI + 0x1]         ; 00431b41 | s_ACT_00617a81 | s_T_00617a83
    ADD ESI,0x2                         ; 00431b44
    MOV byte ptr [EDI + 0x1],AL         ; 00431b47
    ADD EDI,0x2                         ; 00431b4a
    CMP AL,0x0                          ; 00431b4d
    JNZ 0x00431b39                      ; 00431b4f
        ;   XREF to: 00431b39 (CONDITIONAL_JUMP)  ; LAB_00431b39
    POP EDI                             ; 00431b51
        ;   Label: LAB_00431b51
    PUSH 0x617a85                       ; 00431b52 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00431b57
    PUSH EAX                            ; 00431b5b
    PUSH 0x617a88                       ; 00431b5c | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00431b61
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00431b66
    MOV ESI,EAX                         ; 00431b69
    TEST EAX,EAX                        ; 00431b6b
    JZ 0x00431bda                       ; 00431b6d
        ;   XREF to: 00431bda (CONDITIONAL_JUMP)  ; LAB_00431bda
    PUSH EAX                            ; 00431b6f
    PUSH 0x3                            ; 00431b70
    PUSH 0x100                          ; 00431b72
    PUSH EBX                            ; 00431b77
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00431b78
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00431b7d
    CMP EAX,0x3                         ; 00431b80
    JZ 0x00431bbd                       ; 00431b83
        ;   XREF to: 00431bbd (CONDITIONAL_JUMP)  ; LAB_00431bbd
    MOV EAX,ESP                         ; 00431b85
    PUSH EAX                            ; 00431b87
    PUSH 0x617a8c                       ; 00431b88 | = "Error reading %s."
    LEA EAX,[ESP + 0x58]                ; 00431b8d
    PUSH EAX                            ; 00431b91
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00431b92
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x617a9e                    ; 00431b97 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 00431b9c
    LEA EAX,[ESP + 0x50]                ; 00431b9f
    MOV ECX,0x13d                       ; 00431ba3
    PUSH EAX                            ; 00431ba8
    MOV dword ptr [0x02f0ca48],EDX      ; 00431ba9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00431baf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00431bb5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00431bba
    PUSH 0x140                          ; 00431bbd
        ;   Label: LAB_00431bbd
    PUSH 0x617ab4                       ; 00431bc2 | = "..\\cockpit\\ckptutil.c"
    PUSH ESI                            ; 00431bc7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00431bc8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00431bcd
    ADD ESP,0xa0                        ; 00431bd0
    POP EDI                             ; 00431bd6
    POP ESI                             ; 00431bd7
    POP EBX                             ; 00431bd8
    RET                                 ; 00431bd9
    MOV ECX,0x300                       ; 00431bda
        ;   Label: LAB_00431bda
    MOV ESI,0x2d02248                   ; 00431bdf | g_DefaultPalette
    MOV EDI,EBX                         ; 00431be4
    PUSH EDI                            ; 00431be6
    MOV EAX,ECX                         ; 00431be7
    SHR ECX,0x2                         ; 00431be9
    MOVSD.REP ES:EDI,ESI                ; 00431bec | g_DefaultPalette | UCHAR_ARRAY_02d0224c
    MOV CL,AL                           ; 00431bee
    AND CL,0x3                          ; 00431bf0
    MOVSB.REP ES:EDI,ESI                ; 00431bf3 | UCHAR_ARRAY_02d0224c | UCHAR_ARRAY_02d0224d
    POP EDI                             ; 00431bf5
    ADD ESP,0xa0                        ; 00431bf6
    POP EDI                             ; 00431bfc
    POP ESI                             ; 00431bfd
    POP EBX                             ; 00431bfe
    RET                                 ; 00431bff

