; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_newmsg_cpp_readMessageFile_FUN_00543e40(char *message_file)
;
; Parameters:
; char *           Stack[0x4]:4   message_file
; Local Variables:
; undefined1       Stack[-0x31c]:1  local_31c
; undefined1       Stack[-0x21c]:1  local_21c
; undefined1       Stack[-0x21b]:1  local_21b
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b7f
;
; Referenced Globals:
;   char s_empty_0063e145 = \x00
;   TerminatedCString s_rt_0063e146
;   char s_empty_0063e149 = \x00
;   TerminatedCString s_d_0063e14a
;   TerminatedCString s_d_0063e14e
;   TerminatedCString s_support_newmsg_cpp_0063e152
;   TerminatedCString s_Unknown_message_file_ver_0063e168
;   TerminatedCString s_anon_0063e185
;   TerminatedCString s_anon_0063e18e
;   TerminatedCString s_anon_0063e190
;   TerminatedCString s_support_newmsg_cpp_0063e1a2
;   TerminatedCString s_Error_reading_s_0063e1b8
;   TerminatedCString s_support_newmsg_cpp_0063e1c9
;   TerminatedCString s_Too_many_messages_in_s_0063e1df
;   TerminatedCString s_support_newmsg_cpp_0063e1f7
;   ... and 21 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_string.c_strcmp_FUN_005fef20
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543e40
        ;   Label: support_newmsg.cpp_readMessageFile_FUN_00543e40
    PUSH ESI                            ; 00543e41
    PUSH EDI                            ; 00543e42
    PUSH EBP                            ; 00543e43
    SUB ESP,0x30c                       ; 00543e44
    MOV EBP,dword ptr [ESP + 0x320]     ; 00543e4a
    PUSH EBP                            ; 00543e51
    XOR EDX,EDX                         ; 00543e52
    PUSH 0x63e145                       ; 00543e54 | s_empty_0063e145
    MOV dword ptr [ESP + 0x308],EDX     ; 00543e59
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00543e60
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    MOV EDI,EAX                         ; 00543e65
    ADD ESP,0x8                         ; 00543e67
    TEST EAX,EAX                        ; 00543e6a
    JG 0x00543e81                       ; 00543e6c
        ;   XREF to: 00543e81 (CONDITIONAL_JUMP)  ; LAB_00543e81
    ADD ESP,0x30c                       ; 00543e6e
        ;   Label: LAB_00543e6e
    POP EBP                             ; 00543e74
    POP EDI                             ; 00543e75
    POP ESI                             ; 00543e76
    POP EBX                             ; 00543e77
    LEA EAX,[EAX]                       ; 00543e78
    MOV EDX,EDX                         ; 00543e7e
    RET                                 ; 00543e80
    PUSH 0x63e146                       ; 00543e81 | = "rt"
        ;   Label: LAB_00543e81
    PUSH EBP                            ; 00543e86
    PUSH 0x63e149                       ; 00543e87 | s_empty_0063e149
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00543e8c
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 00543e91
    ADD ESP,0xc                         ; 00543e93
    MOV EBX,EAX                         ; 00543e96
    TEST EAX,EAX                        ; 00543e98
    JZ 0x00543e6e                       ; 00543e9a
        ;   XREF to: 00543e6e (CONDITIONAL_JUMP)  ; LAB_00543e6e
    PUSH EAX                            ; 00543e9c
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00543e9d
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 00543ea2
    PUSH ESI                            ; 00543ea5
    PUSH 0xff                           ; 00543ea6
    ADD EDI,EAX                         ; 00543eab
    LEA EAX,[ESP + 0x8]                 ; 00543ead
    PUSH EAX                            ; 00543eb1
    MOV dword ptr [ESP + 0x310],EDI     ; 00543eb2
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00543eb9
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00543ebe
    LEA EAX,[ESP + 0x300]               ; 00543ec1
    PUSH EAX                            ; 00543ec8
    PUSH 0x63e14a                       ; 00543ec9 | = "%d\n"
    PUSH ESI                            ; 00543ece
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00543ecf
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00543ed4
    PUSH ESI                            ; 00543ed7
    PUSH 0xff                           ; 00543ed8
    LEA EAX,[ESP + 0x8]                 ; 00543edd
    PUSH EAX                            ; 00543ee1
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00543ee2
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00543ee7
    PUSH 0x2fa8cd0                      ; 00543eea | g_MessageCount
    PUSH 0x63e14e                       ; 00543eef | = "%d\n"
    PUSH ESI                            ; 00543ef4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00543ef5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00543efa
    CMP dword ptr [ESP + 0x300],0x0     ; 00543efd
    JNZ 0x00544040                      ; 00543f05
        ;   XREF to: 00544040 (CONDITIONAL_JUMP)  ; LAB_00544040
    PUSH EBX                            ; 00543f0b
        ;   Label: LAB_00543f0b
    PUSH 0xff                           ; 00543f0c
    LEA EAX,[ESP + 0x8]                 ; 00543f11
    PUSH EAX                            ; 00543f15
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00543f16
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00543f1b
    PUSH 0x680a70                       ; 00543f1e | g_OSFontName
    PUSH 0x63e185                       ; 00543f23 | = "\"%[^\"]\"\n"
    PUSH EBX                            ; 00543f28
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00543f29
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00543f2e
    PUSH 0x63e18e                       ; 00543f31 | = " "
        ;   Label: LAB_00543f31
    PUSH EBX                            ; 00543f36
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00543f37
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00543f3c
    PUSH EBX                            ; 00543f3f
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00543f40
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 00543f45
    CMP EAX,dword ptr [ESP + 0x304]     ; 00543f48
    JL 0x00544068                       ; 00543f4f
        ;   XREF to: 00544068 (CONDITIONAL_JUMP)  ; LAB_00544068
    PUSH 0x72                           ; 00543f55
    PUSH 0x63e1f7                       ; 00543f57 | = "..\\support\\newmsg.cpp"
    PUSH EBX                            ; 00543f5c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00543f5d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV EBX,dword ptr [0x02fa8cd8]      ; 00543f62 | g_LocalizedStringCount
    ADD ESP,0xc                         ; 00543f68
    TEST EBX,EBX                        ; 00543f6b
    JLE 0x00543fa0                      ; 00543f6d
        ;   XREF to: 00543fa0 (CONDITIONAL_JUMP)  ; LAB_00543fa0
    MOV EBP,0x2fa9c80                   ; 00543f6f | g_MessageKeyStorage
    MOV EDX,0x2fb9680                   ; 00543f74 | g_MessageTextStorage
    SHL EBX,0x2                         ; 00543f79
    XOR EAX,EAX                         ; 00543f7c
    MOV dword ptr [EAX + 0x2fa8cdc],EBP ; 00543f7e | g_MessageKeys | DAT_02fa8ce0 | g_MessageKeyStorage
        ;   Label: LAB_00543f7e
    MOV dword ptr [EAX + 0x2fa94ac],EDX ; 00543f84 | g_MessageTexts | DAT_02fa94b0 | g_MessageTextStorage
    ADD EAX,0x4                         ; 00543f8a
    ADD EDX,0x100                       ; 00543f8d
    ADD EBP,0x80                        ; 00543f93
    CMP EAX,EBX                         ; 00543f99
    JL 0x00543f7e                       ; 00543f9b
        ;   XREF to: 00543f7e (CONDITIONAL_JUMP)  ; LAB_00543f7e
    LEA EAX,[EAX]                       ; 00543f9d
    XOR EBP,EBP                         ; 00543fa0
        ;   Label: LAB_00543fa0
    MOV dword ptr [ESP + 0x308],EBP     ; 00543fa2
    MOV EAX,[0x02fa8cd8]                ; 00543fa9 | g_LocalizedStringCount
        ;   Label: LAB_00543fa9
    DEC EAX                             ; 00543fae
    CMP EBP,EAX                         ; 00543faf
    JGE 0x0054414e                      ; 00543fb1
        ;   XREF to: 0054414e (CONDITIONAL_JUMP)  ; LAB_0054414e
    MOV EAX,[0x02fa8cd8]                ; 00543fb7 | g_LocalizedStringCount
    LEA EDI,[EBP + 0x1]                 ; 00543fbc
    CMP EDI,EAX                         ; 00543fbf
    JGE 0x00544029                      ; 00543fc1
        ;   XREF to: 00544029 (CONDITIONAL_JUMP)  ; LAB_00544029
    MOV ESI,dword ptr [ESP + 0x308]     ; 00543fc3
    LEA EBX,[EDI*0x4 + 0x0]             ; 00543fca
    MOV EAX,dword ptr [EBX + 0x2fa8cdc] ; 00543fd1 | DAT_02fa8ce0 | DAT_02fa8ce4
        ;   Label: LAB_00543fd1
    PUSH EAX                            ; 00543fd7
    MOV EDX,dword ptr [ESI + 0x2fa8cdc] ; 00543fd8 | g_MessageKeys | DAT_02fa8ce0
    PUSH EDX                            ; 00543fde
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00543fdf
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00543fe4
    TEST EAX,EAX                        ; 00543fe7
    JLE 0x0054401b                      ; 00543fe9
        ;   XREF to: 0054401b (CONDITIONAL_JUMP)  ; LAB_0054401b
    MOV EDX,dword ptr [EBX + 0x2fa8cdc] ; 00543feb | DAT_02fa8ce0
    MOV EAX,dword ptr [ESI + 0x2fa8cdc] ; 00543ff1 | g_MessageKeys
    MOV dword ptr [ESI + 0x2fa8cdc],EDX ; 00543ff7 | g_MessageKeys
    MOV EDX,dword ptr [EBX + 0x2fa94ac] ; 00543ffd | DAT_02fa94b0
    MOV dword ptr [EBX + 0x2fa8cdc],EAX ; 00544003 | DAT_02fa8ce0
    MOV EAX,dword ptr [ESI + 0x2fa94ac] ; 00544009 | g_MessageTexts
    MOV dword ptr [ESI + 0x2fa94ac],EDX ; 0054400f | g_MessageTexts
    MOV dword ptr [EBX + 0x2fa94ac],EAX ; 00544015 | DAT_02fa94b0
    MOV EDX,dword ptr [0x02fa8cd8]      ; 0054401b | g_LocalizedStringCount
        ;   Label: LAB_0054401b
    INC EDI                             ; 00544021
    ADD EBX,0x4                         ; 00544022
    CMP EDI,EDX                         ; 00544025
    JL 0x00543fd1                       ; 00544027
        ;   XREF to: 00543fd1 (CONDITIONAL_JUMP)  ; LAB_00543fd1
    MOV ECX,dword ptr [ESP + 0x308]     ; 00544029
        ;   Label: LAB_00544029
    ADD ECX,0x4                         ; 00544030
    INC EBP                             ; 00544033
    MOV dword ptr [ESP + 0x308],ECX     ; 00544034
    JMP 0x00543fa9                      ; 0054403b
        ;   XREF to: 00543fa9 (UNCONDITIONAL_JUMP)  ; LAB_00543fa9
    MOV ESI,0x63e152                    ; 00544040 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_00544040
    MOV EDI,0x54                        ; 00544045
    PUSH 0x63e168                       ; 0054404a | = "Unknown message file version"
    MOV dword ptr [0x02f0ca48],ESI      ; 0054404f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00544055 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054405b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00544060
    JMP 0x00543f0b                      ; 00544063
        ;   XREF to: 00543f0b (UNCONDITIONAL_JUMP)  ; LAB_00543f0b
    LEA EAX,[ESP + 0x200]               ; 00544068
        ;   Label: LAB_00544068
    PUSH EAX                            ; 0054406f
    LEA EAX,[ESP + 0x104]               ; 00544070
    PUSH EAX                            ; 00544077
    PUSH 0x63e190                       ; 00544078 | = "\"%[^\"]\", \"%[^\"]\"\n"
    PUSH EBX                            ; 0054407d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0054407e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00544083
    CMP EAX,0x2                         ; 00544086
    JZ 0x005440af                       ; 00544089
        ;   XREF to: 005440af (CONDITIONAL_JUMP)  ; LAB_005440af
    PUSH EBP                            ; 0054408b
    MOV ECX,0x63e1a2                    ; 0054408c | = "..\\support\\newmsg.cpp"
    MOV ESI,0x65                        ; 00544091
    PUSH 0x63e1b8                       ; 00544096 | = "Error reading %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0054409b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005440a1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005440a7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005440ac
    CMP dword ptr [0x02fa8cd8],0x1f4    ; 005440af | g_LocalizedStringCount
        ;   Label: LAB_005440af
    JGE 0x00544126                      ; 005440b9
        ;   XREF to: 00544126 (CONDITIONAL_JUMP)  ; LAB_00544126
    MOV EDI,dword ptr [0x02fa8cd8]      ; 005440bb | g_LocalizedStringCount
        ;   Label: LAB_005440bb
    SHL EDI,0x7                         ; 005440c1
    LEA ESI,[ESP + 0x100]               ; 005440c4
    ADD EDI,0x2fa9c80                   ; 005440cb | g_MessageKeyStorage
    PUSH EDI                            ; 005440d1
    MOV AL,byte ptr [ESI]               ; 005440d2
        ;   Label: LAB_005440d2
    MOV byte ptr [EDI],AL               ; 005440d4 | g_MessageKeyStorage | g_MessageKeyStorage[0][2]
    CMP AL,0x0                          ; 005440d6
    JZ 0x005440ea                       ; 005440d8
        ;   XREF to: 005440ea (CONDITIONAL_JUMP)  ; LAB_005440ea
    MOV AL,byte ptr [ESI + 0x1]         ; 005440da
    ADD ESI,0x2                         ; 005440dd
    MOV byte ptr [EDI + 0x1],AL         ; 005440e0 | g_MessageKeyStorage[0][1] | g_MessageKeyStorage[0][3]
    ADD EDI,0x2                         ; 005440e3
    CMP AL,0x0                          ; 005440e6
    JNZ 0x005440d2                      ; 005440e8
        ;   XREF to: 005440d2 (CONDITIONAL_JUMP)  ; LAB_005440d2
    POP EDI                             ; 005440ea
        ;   Label: LAB_005440ea
    MOV EDI,dword ptr [0x02fa8cd8]      ; 005440eb | g_LocalizedStringCount
    SHL EDI,0x8                         ; 005440f1
    LEA ESI,[ESP + 0x200]               ; 005440f4
    ADD EDI,0x2fb9680                   ; 005440fb | g_MessageTextStorage
    PUSH EDI                            ; 00544101
    MOV AL,byte ptr [ESI]               ; 00544102
        ;   Label: LAB_00544102
    MOV byte ptr [EDI],AL               ; 00544104 | g_MessageTextStorage | g_MessageTextStorage[0][2]
    CMP AL,0x0                          ; 00544106
    JZ 0x0054411a                       ; 00544108
        ;   XREF to: 0054411a (CONDITIONAL_JUMP)  ; LAB_0054411a
    MOV AL,byte ptr [ESI + 0x1]         ; 0054410a
    ADD ESI,0x2                         ; 0054410d
    MOV byte ptr [EDI + 0x1],AL         ; 00544110 | g_MessageTextStorage[0][1] | g_MessageTextStorage[0][3]
    ADD EDI,0x2                         ; 00544113
    CMP AL,0x0                          ; 00544116
    JNZ 0x00544102                      ; 00544118
        ;   XREF to: 00544102 (CONDITIONAL_JUMP)  ; LAB_00544102
    POP EDI                             ; 0054411a
        ;   Label: LAB_0054411a
    INC dword ptr [0x02fa8cd8]          ; 0054411b | g_LocalizedStringCount
    JMP 0x00543f31                      ; 00544121
        ;   XREF to: 00543f31 (UNCONDITIONAL_JUMP)  ; LAB_00543f31
    PUSH EBP                            ; 00544126
        ;   Label: LAB_00544126
    MOV EAX,0x63e1c9                    ; 00544127 | = "..\\support\\newmsg.cpp"
    MOV EDX,0x6a                        ; 0054412c
    PUSH 0x63e1df                       ; 00544131 | = "Too many messages in %s"
    MOV [0x02f0ca48],EAX                ; 00544136 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0054413b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00544141
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00544146
    JMP 0x005440bb                      ; 00544149
        ;   XREF to: 005440bb (UNCONDITIONAL_JUMP)  ; LAB_005440bb
    MOV dword ptr [0x02fa8cd4],0x1      ; 0054414e | g_LocalizationLoaded
        ;   Label: LAB_0054414e
    ADD ESP,0x30c                       ; 00544158
    POP EBP                             ; 0054415e
    POP EDI                             ; 0054415f
    POP ESI                             ; 00544160
    POP EBX                             ; 00544161
    RET                                 ; 00544162

