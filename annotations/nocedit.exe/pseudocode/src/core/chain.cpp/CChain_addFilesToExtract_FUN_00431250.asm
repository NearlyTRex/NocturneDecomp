; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_chain_cpp_CChain_addFilesToExtract_FUN_00431250(CChain *this_ptr,_FILE *file_handle)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x104]:1  local_104
; undefined1       Stack[-0x103]:1  local_103
;
; Referenced Globals:
;   TerminatedCString s_CHAINLINK_RAW_00617906
;   TerminatedCString s_ART_s_00617914
;   TerminatedCString s_core_chain_cpp_0061791c
;   TerminatedCString s_CChain_addFilesToExtract_0061792e
;   TerminatedCString s_ACT_0061795e
;   TerminatedCString s_ART_s_00617963
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00431250
        ;   Label: core_chain.cpp_CChain_addFilesToExtract_FUN_00431250
    SUB ESP,0x100                       ; 00431251
    MOV ESI,dword ptr [ESP + 0x108]     ; 00431257
    PUSH 0x617906                       ; 0043125e | = "CHAINLINK.RAW"
    ADD ESI,0x174                       ; 00431263
    PUSH ESI                            ; 00431269
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0043126a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0043126f
    TEST EAX,EAX                        ; 00431272
    JNZ 0x0043127e                      ; 00431274
        ;   XREF to: 0043127e (CONDITIONAL_JUMP)  ; LAB_0043127e
    ADD ESP,0x100                       ; 00431276
    POP ESI                             ; 0043127c
    RET                                 ; 0043127d
    PUSH EDI                            ; 0043127e
        ;   Label: LAB_0043127e
    PUSH ESI                            ; 0043127f
    PUSH 0x617914                       ; 00431280 | = "ART\\%s\n"
    MOV EDX,dword ptr [ESP + 0x118]     ; 00431285
    PUSH EDX                            ; 0043128c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043128d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00431292
    LEA EDI,[ESP + 0x4]                 ; 00431295
    MOV DL,0x2e                         ; 00431299
    PUSH EDI                            ; 0043129b
    MOV AL,byte ptr [ESI]               ; 0043129c
        ;   Label: LAB_0043129c
    MOV byte ptr [EDI],AL               ; 0043129e
    CMP AL,0x0                          ; 004312a0
    JZ 0x004312b4                       ; 004312a2
        ;   XREF to: 004312b4 (CONDITIONAL_JUMP)  ; LAB_004312b4
    MOV AL,byte ptr [ESI + 0x1]         ; 004312a4
    ADD ESI,0x2                         ; 004312a7
    MOV byte ptr [EDI + 0x1],AL         ; 004312aa
    ADD EDI,0x2                         ; 004312ad
    CMP AL,0x0                          ; 004312b0
    JNZ 0x0043129c                      ; 004312b2
        ;   XREF to: 0043129c (CONDITIONAL_JUMP)  ; LAB_0043129c
    POP EDI                             ; 004312b4
        ;   Label: LAB_004312b4
    LEA ESI,[ESP + 0x4]                 ; 004312b5
    MOV AL,byte ptr [ESI]               ; 004312b9
        ;   Label: LAB_004312b9
    CMP AL,DL                           ; 004312bb
    JZ 0x004312d1                       ; 004312bd
        ;   XREF to: 004312d1 (CONDITIONAL_JUMP)  ; LAB_004312d1
    CMP AL,0x0                          ; 004312bf
    JZ 0x004312cf                       ; 004312c1
        ;   XREF to: 004312cf (CONDITIONAL_JUMP)  ; LAB_004312cf
    INC ESI                             ; 004312c3
    MOV AL,byte ptr [ESI]               ; 004312c4
    CMP AL,DL                           ; 004312c6
    JZ 0x004312d1                       ; 004312c8
        ;   XREF to: 004312d1 (CONDITIONAL_JUMP)  ; LAB_004312d1
    INC ESI                             ; 004312ca
    CMP AL,0x0                          ; 004312cb
    JNZ 0x004312b9                      ; 004312cd
        ;   XREF to: 004312b9 (CONDITIONAL_JUMP)  ; LAB_004312b9
    SUB ESI,ESI                         ; 004312cf
        ;   Label: LAB_004312cf
    MOV EDI,ESI                         ; 004312d1
        ;   Label: LAB_004312d1
    TEST ESI,ESI                        ; 004312d3
    JNZ 0x004312fc                      ; 004312d5
        ;   XREF to: 004312fc (CONDITIONAL_JUMP)  ; LAB_004312fc
    PUSH EBX                            ; 004312d7
    MOV ECX,0x61791c                    ; 004312d8 | = "..\\core\\chain.cpp"
    MOV EBX,0x258                       ; 004312dd
    PUSH 0x61792e                       ; 004312e2 | = "CChain::addFilesToExtractList - inval..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004312e7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004312ed | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004312f3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004312f8
    POP EBX                             ; 004312fb
    PUSH 0x61795e                       ; 004312fc | = ".ACT"
        ;   Label: LAB_004312fc
    PUSH EDI                            ; 00431301
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00431302
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00431307
    LEA EAX,[ESP + 0x4]                 ; 0043130a
    PUSH EAX                            ; 0043130e
    PUSH 0x617963                       ; 0043130f | = "ART\\%s\n"
    MOV ESI,dword ptr [ESP + 0x118]     ; 00431314
    PUSH ESI                            ; 0043131b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043131c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00431321
    POP EDI                             ; 00431324
    ADD ESP,0x100                       ; 00431325
    POP ESI                             ; 0043132b
    RET                                 ; 0043132c

