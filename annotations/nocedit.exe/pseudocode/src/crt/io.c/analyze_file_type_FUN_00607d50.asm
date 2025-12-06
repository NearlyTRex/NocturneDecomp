; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack uint crt_io.c_analyze_file_type_FUN_00607d50(uint open_flags, char * filename)
;
; Parameters:
; uint             Stack[0x4]:4   open_flags
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   crt_io.c_stat_FUN_00607e64 at 00607ff7
;
; Referenced Globals:
;   CloseHandle* CloseHandle = 00211c38
;   GetFileType* PTR_GetFileType_0061159c = 00211f00
;   GetLastError* GetLastError = 00211f22
;   TerminatedCString s_con_0065905c
;   TerminatedCString s_conin_00659060
;   TerminatedCString s_EXE_00659068
;   WORD g_WindowsPlatformVersion = 0x0
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   crt_string.c_strcmp_FUN_005fef20
;   crt_string.c_stricmp_FUN_005fe7f0
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607d50
        ;   Label: crt_io.c_analyze_file_type_FUN_00607d50
    PUSH ESI                            ; 00607d51
    PUSH EDI                            ; 00607d52
    MOV ESI,dword ptr [ESP + 0x14]      ; 00607d53
    MOV DX,word ptr [0x00685019]        ; 00607d57 | WORD g_WindowsPlatformVersion
    XOR EBX,EBX                         ; 00607d5e
    CMP DX,0x8000                       ; 00607d60
    JNC 0x00607d6e                      ; 00607d65 | LAB_00607d6e
        ;   XREF to: 00607d6e (CONDITIONAL_JUMP)
    MOV EAX,0x20                        ; 00607d67
    JMP 0x00607d73                      ; 00607d6c | LAB_00607d73
        ;   XREF to: 00607d73 (UNCONDITIONAL_JUMP)
    MOV EAX,0x40                        ; 00607d6e
        ;   Label: LAB_00607d6e
    TEST dword ptr [ESP + 0x10],EAX     ; 00607d73
        ;   Label: LAB_00607d73
    JZ 0x00607df7                       ; 00607d77 | LAB_00607df7
        ;   XREF to: 00607df7 (CONDITIONAL_JUMP)
    PUSH 0x65905c                       ; 00607d7d | = "con" | s_con_0065905c = con
    PUSH ESI                            ; 00607d82
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00607d83 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00607d88
    TEST EAX,EAX                        ; 00607d8b
    JNZ 0x00607d96                      ; 00607d8d | LAB_00607d96
        ;   XREF to: 00607d96 (CONDITIONAL_JUMP)
    MOV EAX,0x659060                    ; 00607d8f | = "conin$" | s_conin_00659060 = conin$
    JMP 0x00607d98                      ; 00607d94 | LAB_00607d98
        ;   XREF to: 00607d98 (UNCONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 00607d96
        ;   Label: LAB_00607d96
    PUSH 0x0                            ; 00607d98
        ;   Label: LAB_00607d98
    PUSH 0x0                            ; 00607d9a
    PUSH 0x3                            ; 00607d9c
    PUSH 0x0                            ; 00607d9e
    PUSH 0x0                            ; 00607da0
    PUSH 0x0                            ; 00607da2
    PUSH EAX                            ; 00607da4 | = "conin$" | s_conin_00659060 = conin$
    CALL dword ptr CS:[0x611510]        ; 00607da5 | CreateFileA * PTR_CreateFileA_00611510
    MOV EDI,EAX                         ; 00607dac
    CMP EAX,-0x1                        ; 00607dae
    JZ 0x00607ddb                       ; 00607db1 | LAB_00607ddb
        ;   XREF to: 00607ddb (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00607db3
    CALL dword ptr CS:[0x61159c]        ; 00607db4 | GetFileType * PTR_GetFileType_0061159c
    CMP EAX,0x2                         ; 00607dbb
    JNZ 0x00607dc7                      ; 00607dbe | LAB_00607dc7
        ;   XREF to: 00607dc7 (CONDITIONAL_JUMP)
    MOV EBX,0x2000                      ; 00607dc0
    JMP 0x00607dd1                      ; 00607dc5 | LAB_00607dd1
        ;   XREF to: 00607dd1 (UNCONDITIONAL_JUMP)
    CMP EAX,0x3                         ; 00607dc7
        ;   Label: LAB_00607dc7
    JNZ 0x00607dd1                      ; 00607dca | LAB_00607dd1
        ;   XREF to: 00607dd1 (CONDITIONAL_JUMP)
    MOV EBX,0x1000                      ; 00607dcc
    PUSH EDI                            ; 00607dd1
        ;   Label: LAB_00607dd1
    CALL dword ptr CS:[0x611504]        ; 00607dd2 | CloseHandle * CloseHandle
    JMP 0x00607df7                      ; 00607dd9 | LAB_00607df7
        ;   XREF to: 00607df7 (UNCONDITIONAL_JUMP)
    CMP word ptr [0x00685019],0x8000    ; 00607ddb | WORD g_WindowsPlatformVersion
        ;   Label: LAB_00607ddb
    JNC 0x00607df2                      ; 00607de4 | LAB_00607df2
        ;   XREF to: 00607df2 (CONDITIONAL_JUMP)
    CALL dword ptr CS:[0x6115a4]        ; 00607de6 | GetLastError * GetLastError
    CMP EAX,0x5                         ; 00607ded
    JNZ 0x00607df7                      ; 00607df0 | LAB_00607df7
        ;   XREF to: 00607df7 (CONDITIONAL_JUMP)
    MOV EBX,0x2000                      ; 00607df2
        ;   Label: LAB_00607df2
    TEST byte ptr [ESP + 0x10],0x10     ; 00607df7
        ;   Label: LAB_00607df7
    JZ 0x00607e0a                       ; 00607dfc | LAB_00607e0a
        ;   XREF to: 00607e0a (CONDITIONAL_JUMP)
    AND BX,0xfb6                        ; 00607dfe
    OR BX,0x4049                        ; 00607e03
    JMP 0x00607e4b                      ; 00607e08 | LAB_00607e4b
        ;   XREF to: 00607e4b (UNCONDITIONAL_JUMP)
    TEST BH,0x20                        ; 00607e0a
        ;   Label: LAB_00607e0a
    JNZ 0x00607e4b                      ; 00607e0d | LAB_00607e4b
        ;   XREF to: 00607e4b (CONDITIONAL_JUMP)
    TEST BH,0x10                        ; 00607e0f
    JNZ 0x00607e4b                      ; 00607e12 | LAB_00607e4b
        ;   XREF to: 00607e4b (CONDITIONAL_JUMP)
    MOV DL,0x2e                         ; 00607e14
    OR BH,0x80                          ; 00607e16
    MOV AL,byte ptr [ESI]               ; 00607e19
        ;   Label: LAB_00607e19
    CMP AL,DL                           ; 00607e1b
    JZ 0x00607e31                       ; 00607e1d | LAB_00607e31
        ;   XREF to: 00607e31 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00607e1f
    JZ 0x00607e2f                       ; 00607e21 | LAB_00607e2f
        ;   XREF to: 00607e2f (CONDITIONAL_JUMP)
    INC ESI                             ; 00607e23
    MOV AL,byte ptr [ESI]               ; 00607e24
    CMP AL,DL                           ; 00607e26
    JZ 0x00607e31                       ; 00607e28 | LAB_00607e31
        ;   XREF to: 00607e31 (CONDITIONAL_JUMP)
    INC ESI                             ; 00607e2a
    CMP AL,0x0                          ; 00607e2b
    JNZ 0x00607e19                      ; 00607e2d | LAB_00607e19
        ;   XREF to: 00607e19 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00607e2f
        ;   Label: LAB_00607e2f
    TEST ESI,ESI                        ; 00607e31
        ;   Label: LAB_00607e31
    JZ 0x00607e4b                       ; 00607e33 | LAB_00607e4b
        ;   XREF to: 00607e4b (CONDITIONAL_JUMP)
    PUSH 0x659068                       ; 00607e35 | = "EXE" | s_EXE_00659068 = EXE
    INC ESI                             ; 00607e3a
    PUSH ESI                            ; 00607e3b
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00607e3c | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00607e41
    TEST EAX,EAX                        ; 00607e44
    JNZ 0x00607e4b                      ; 00607e46 | LAB_00607e4b
        ;   XREF to: 00607e4b (CONDITIONAL_JUMP)
    OR BL,0x49                          ; 00607e48
    MOV DL,byte ptr [ESP + 0x10]        ; 00607e4b
        ;   Label: LAB_00607e4b
    OR BX,0x124                         ; 00607e4f
    TEST DL,0x1                         ; 00607e54
    JNZ 0x00607e5c                      ; 00607e57 | LAB_00607e5c
        ;   XREF to: 00607e5c (CONDITIONAL_JUMP)
    OR BL,0x92                          ; 00607e59
    MOV EAX,EBX                         ; 00607e5c
        ;   Label: LAB_00607e5c
    POP EDI                             ; 00607e5e
    POP ESI                             ; 00607e5f
    POP EBX                             ; 00607e60
    RET                                 ; 00607e61

