; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_saveScreenRaw32_FUN_0050d8b0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined1       Stack[-0x69]:1  local_69
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_0050da60 at 0050dc15
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_005cba21
;   TerminatedCString s_saveScreenRaw32_No_ext_f_005cba31
;   undefined1 DAT_005cba50
;   undefined1 DAT_005cba51
;   undefined1 DAT_005cba52
;   undefined1 DAT_005cba53
;   undefined4 DAT_005cba55
;   TerminatedCString s_engine_pcx_c_005cba58
;   TerminatedCString s_saveScreenRaw32_Unable_t_005cba68
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fputc_FUN_005a5d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d8b0
        ;   Label: engine_pcx.c_saveScreenRaw32_FUN_0050d8b0
    PUSH ESI                            ; 0050d8b1
    PUSH EDI                            ; 0050d8b2
    PUSH EBP                            ; 0050d8b3
    SUB ESP,0x5c                        ; 0050d8b4
    MOV ESI,dword ptr [ESP + 0x70]      ; 0050d8b7
    MOV EDI,ESP                         ; 0050d8bb
    MOV DL,0x2e                         ; 0050d8bd
    PUSH EDI                            ; 0050d8bf
    MOV AL,byte ptr [ESI]               ; 0050d8c0
        ;   Label: LAB_0050d8c0
    MOV byte ptr [EDI],AL               ; 0050d8c2
    CMP AL,0x0                          ; 0050d8c4
    JZ 0x0050d8d8                       ; 0050d8c6
        ;   XREF to: 0050d8d8 (CONDITIONAL_JUMP)  ; LAB_0050d8d8
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d8c8
    ADD ESI,0x2                         ; 0050d8cb
    MOV byte ptr [EDI + 0x1],AL         ; 0050d8ce
    ADD EDI,0x2                         ; 0050d8d1
    CMP AL,0x0                          ; 0050d8d4
    JNZ 0x0050d8c0                      ; 0050d8d6
        ;   XREF to: 0050d8c0 (CONDITIONAL_JUMP)  ; LAB_0050d8c0
    POP EDI                             ; 0050d8d8
        ;   Label: LAB_0050d8d8
    MOV ESI,ESP                         ; 0050d8d9
    MOV AL,byte ptr [ESI]               ; 0050d8db
        ;   Label: LAB_0050d8db
    CMP AL,DL                           ; 0050d8dd
    JZ 0x0050d8f3                       ; 0050d8df
        ;   XREF to: 0050d8f3 (CONDITIONAL_JUMP)  ; LAB_0050d8f3
    CMP AL,0x0                          ; 0050d8e1
    JZ 0x0050d8f1                       ; 0050d8e3
        ;   XREF to: 0050d8f1 (CONDITIONAL_JUMP)  ; LAB_0050d8f1
    INC ESI                             ; 0050d8e5
    MOV AL,byte ptr [ESI]               ; 0050d8e6
    CMP AL,DL                           ; 0050d8e8
    JZ 0x0050d8f3                       ; 0050d8ea
        ;   XREF to: 0050d8f3 (CONDITIONAL_JUMP)  ; LAB_0050d8f3
    INC ESI                             ; 0050d8ec
    CMP AL,0x0                          ; 0050d8ed
    JNZ 0x0050d8db                      ; 0050d8ef
        ;   XREF to: 0050d8db (CONDITIONAL_JUMP)  ; LAB_0050d8db
    SUB ESI,ESI                         ; 0050d8f1
        ;   Label: LAB_0050d8f1
    MOV EDI,ESI                         ; 0050d8f3
        ;   Label: LAB_0050d8f3
    TEST ESI,ESI                        ; 0050d8f5
    JZ 0x0050da30                       ; 0050d8f7
        ;   XREF to: 0050da30 (CONDITIONAL_JUMP)  ; LAB_0050da30
    MOV ESI,0x5cba50                    ; 0050d8fd | DAT_005cba50
        ;   Label: LAB_0050d8fd
    PUSH EDI                            ; 0050d902
    MOV AL,byte ptr [ESI]               ; 0050d903 | DAT_005cba50 | DAT_005cba52
        ;   Label: LAB_0050d903
    MOV byte ptr [EDI],AL               ; 0050d905
    CMP AL,0x0                          ; 0050d907
    JZ 0x0050d91b                       ; 0050d909
        ;   XREF to: 0050d91b (CONDITIONAL_JUMP)  ; LAB_0050d91b
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d90b | DAT_005cba51 | DAT_005cba53
    ADD ESI,0x2                         ; 0050d90e
    MOV byte ptr [EDI + 0x1],AL         ; 0050d911
    ADD EDI,0x2                         ; 0050d914
    CMP AL,0x0                          ; 0050d917
    JNZ 0x0050d903                      ; 0050d919
        ;   XREF to: 0050d903 (CONDITIONAL_JUMP)  ; LAB_0050d903
    POP EDI                             ; 0050d91b
        ;   Label: LAB_0050d91b
    PUSH 0x5cba55                       ; 0050d91c | DAT_005cba55
    LEA EAX,[ESP + 0x4]                 ; 0050d921
    PUSH EAX                            ; 0050d925
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 0050d926
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 0050d92b
    MOV EDI,EAX                         ; 0050d92e
    TEST EAX,EAX                        ; 0050d930
    JNZ 0x0050d957                      ; 0050d932
        ;   XREF to: 0050d957 (CONDITIONAL_JUMP)  ; LAB_0050d957
    MOV EBX,0x5cba58                    ; 0050d934 | = "..\\engine\\pcx.c"
    MOV ESI,0x9e                        ; 0050d939
    PUSH 0x5cba68                       ; 0050d93e | = "saveScreenRaw32 - Unable to open output"
    MOV dword ptr [0x01d71de0],EBX      ; 0050d943 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050d949 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050d94f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050d954
    XOR EBP,EBP                         ; 0050d957
        ;   Label: LAB_0050d957
    MOV EAX,[0x005fba1c]                ; 0050d959 | DAT_005fba1c
    MOV dword ptr [ESP + 0x58],EBP      ; 0050d95e
    TEST EAX,EAX                        ; 0050d962
    JLE 0x0050da1f                      ; 0050d964
        ;   XREF to: 0050da1f (CONDITIONAL_JUMP)  ; LAB_0050da1f
    MOV dword ptr [ESP + 0x54],EBP      ; 0050d96a
    MOV EBX,dword ptr [ESP + 0x54]      ; 0050d96e
        ;   Label: LAB_0050d96e
    MOV EBP,dword ptr [0x005fba18]      ; 0050d972 | DAT_005fba18
    XOR ESI,ESI                         ; 0050d978
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 0050d97a | DAT_01c5faec | DAT_01c5faf0
    TEST EBP,EBP                        ; 0050d980
    JLE 0x0050d9fd                      ; 0050d982
        ;   XREF to: 0050d9fd (CONDITIONAL_JUMP)  ; LAB_0050d9fd
    MOV CL,byte ptr [0x01c6af74]        ; 0050d984 | DAT_01c6af74
        ;   Label: LAB_0050d984
    MOV EAX,dword ptr [EBX]             ; 0050d98a
    MOV EDX,dword ptr [0x01c6af78]      ; 0050d98c | DAT_01c6af78
    SHR EAX,CL                          ; 0050d992
    IMUL EDX,EAX                        ; 0050d994
    MOV EBP,dword ptr [EBX]             ; 0050d997
    MOV CL,byte ptr [0x01c6af80]        ; 0050d999 | DAT_01c6af80
    SHR EBP,CL                          ; 0050d99f
    IMUL EBP,dword ptr [0x01c6af84]     ; 0050d9a1 | DAT_01c6af84
    MOV EAX,dword ptr [EBX]             ; 0050d9a8
    MOV CL,byte ptr [0x01c6af8c]        ; 0050d9aa | DAT_01c6af8c
    SHR EAX,CL                          ; 0050d9b0
    IMUL EAX,dword ptr [0x01c6af90]     ; 0050d9b2 | DAT_01c6af90
    PUSH EDI                            ; 0050d9b9
    AND EDX,0xff                        ; 0050d9ba
    AND EAX,0xff                        ; 0050d9c0
    PUSH EDX                            ; 0050d9c5
    MOV dword ptr [ESP + 0x58],EAX      ; 0050d9c6
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d9ca
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 0050d9cf
    PUSH EDI                            ; 0050d9d2
    AND EBP,0xff                        ; 0050d9d3
    PUSH EBP                            ; 0050d9d9
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d9da
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    ADD ESP,0x8                         ; 0050d9df
    PUSH EDI                            ; 0050d9e2
    MOV EBP,dword ptr [ESP + 0x54]      ; 0050d9e3
    PUSH EBP                            ; 0050d9e7
    ADD EBX,0x4                         ; 0050d9e8
    INC ESI                             ; 0050d9eb
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 0050d9ec
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    MOV EAX,[0x005fba18]                ; 0050d9f1 | DAT_005fba18
    ADD ESP,0x8                         ; 0050d9f6
    CMP ESI,EAX                         ; 0050d9f9
    JL 0x0050d984                       ; 0050d9fb
        ;   XREF to: 0050d984 (CONDITIONAL_JUMP)  ; LAB_0050d984
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050d9fd
        ;   Label: LAB_0050d9fd
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050da01
    MOV EBX,dword ptr [0x005fba1c]      ; 0050da05 | DAT_005fba1c
    ADD EDX,0x4                         ; 0050da0b
    INC ECX                             ; 0050da0e
    MOV dword ptr [ESP + 0x54],EDX      ; 0050da0f
    MOV dword ptr [ESP + 0x58],ECX      ; 0050da13
    CMP ECX,EBX                         ; 0050da17
    JL 0x0050d96e                       ; 0050da19
        ;   XREF to: 0050d96e (CONDITIONAL_JUMP)  ; LAB_0050d96e
    PUSH EDI                            ; 0050da1f
        ;   Label: LAB_0050da1f
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0050da20
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0050da25
    ADD ESP,0x5c                        ; 0050da28
    POP EBP                             ; 0050da2b
    POP EDI                             ; 0050da2c
    POP ESI                             ; 0050da2d
    POP EBX                             ; 0050da2e
    RET                                 ; 0050da2f
    MOV EDX,0x5cba21                    ; 0050da30 | = "..\\engine\\pcx.c"
        ;   Label: LAB_0050da30
    MOV ECX,0x98                        ; 0050da35
    PUSH 0x5cba31                       ; 0050da3a | = "saveScreenRaw32 - No ext found"
    MOV dword ptr [0x01d71de0],EDX      ; 0050da3f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050da45 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050da4b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050da50
    JMP 0x0050d8fd                      ; 0050da53
        ;   XREF to: 0050d8fd (UNCONDITIONAL_JUMP)  ; LAB_0050d8fd

