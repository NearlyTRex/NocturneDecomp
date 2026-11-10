; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00514880(char *filename)
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
;   engine_pcx.c_saveScreenshotGeneral_FUN_00514a30 at 00514be5
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_005e195e
;   TerminatedCString s_saveScreenRaw32_No_ext_f_005e196e
;   undefined1 DAT_005e198d
;   undefined1 DAT_005e198e
;   undefined1 DAT_005e198f
;   undefined1 DAT_005e1990
;   undefined4 DAT_005e1992
;   TerminatedCString s_engine_pcx_c_005e1995
;   TerminatedCString s_saveScreenRaw32_Unable_t_005e19a5
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fputc_FUN_005bab40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514880
        ;   Label: engine_pcx.c_saveScreenRaw32_FUN_00514880
    PUSH ESI                            ; 00514881
    PUSH EDI                            ; 00514882
    PUSH EBP                            ; 00514883
    SUB ESP,0x5c                        ; 00514884
    MOV ESI,dword ptr [ESP + 0x70]      ; 00514887
    MOV EDI,ESP                         ; 0051488b
    MOV DL,0x2e                         ; 0051488d
    PUSH EDI                            ; 0051488f
    MOV AL,byte ptr [ESI]               ; 00514890
        ;   Label: LAB_00514890
    MOV byte ptr [EDI],AL               ; 00514892
    CMP AL,0x0                          ; 00514894
    JZ 0x005148a8                       ; 00514896
        ;   XREF to: 005148a8 (CONDITIONAL_JUMP)  ; LAB_005148a8
    MOV AL,byte ptr [ESI + 0x1]         ; 00514898
    ADD ESI,0x2                         ; 0051489b
    MOV byte ptr [EDI + 0x1],AL         ; 0051489e
    ADD EDI,0x2                         ; 005148a1
    CMP AL,0x0                          ; 005148a4
    JNZ 0x00514890                      ; 005148a6
        ;   XREF to: 00514890 (CONDITIONAL_JUMP)  ; LAB_00514890
    POP EDI                             ; 005148a8
        ;   Label: LAB_005148a8
    MOV ESI,ESP                         ; 005148a9
    MOV AL,byte ptr [ESI]               ; 005148ab
        ;   Label: LAB_005148ab
    CMP AL,DL                           ; 005148ad
    JZ 0x005148c3                       ; 005148af
        ;   XREF to: 005148c3 (CONDITIONAL_JUMP)  ; LAB_005148c3
    CMP AL,0x0                          ; 005148b1
    JZ 0x005148c1                       ; 005148b3
        ;   XREF to: 005148c1 (CONDITIONAL_JUMP)  ; LAB_005148c1
    INC ESI                             ; 005148b5
    MOV AL,byte ptr [ESI]               ; 005148b6
    CMP AL,DL                           ; 005148b8
    JZ 0x005148c3                       ; 005148ba
        ;   XREF to: 005148c3 (CONDITIONAL_JUMP)  ; LAB_005148c3
    INC ESI                             ; 005148bc
    CMP AL,0x0                          ; 005148bd
    JNZ 0x005148ab                      ; 005148bf
        ;   XREF to: 005148ab (CONDITIONAL_JUMP)  ; LAB_005148ab
    SUB ESI,ESI                         ; 005148c1
        ;   Label: LAB_005148c1
    MOV EDI,ESI                         ; 005148c3
        ;   Label: LAB_005148c3
    TEST ESI,ESI                        ; 005148c5
    JZ 0x00514a00                       ; 005148c7
        ;   XREF to: 00514a00 (CONDITIONAL_JUMP)  ; LAB_00514a00
    MOV ESI,0x5e198d                    ; 005148cd | DAT_005e198d
        ;   Label: LAB_005148cd
    PUSH EDI                            ; 005148d2
    MOV AL,byte ptr [ESI]               ; 005148d3 | DAT_005e198d | DAT_005e198f
        ;   Label: LAB_005148d3
    MOV byte ptr [EDI],AL               ; 005148d5
    CMP AL,0x0                          ; 005148d7
    JZ 0x005148eb                       ; 005148d9
        ;   XREF to: 005148eb (CONDITIONAL_JUMP)  ; LAB_005148eb
    MOV AL,byte ptr [ESI + 0x1]         ; 005148db | DAT_005e198e | DAT_005e1990
    ADD ESI,0x2                         ; 005148de
    MOV byte ptr [EDI + 0x1],AL         ; 005148e1
    ADD EDI,0x2                         ; 005148e4
    CMP AL,0x0                          ; 005148e7
    JNZ 0x005148d3                      ; 005148e9
        ;   XREF to: 005148d3 (CONDITIONAL_JUMP)  ; LAB_005148d3
    POP EDI                             ; 005148eb
        ;   Label: LAB_005148eb
    PUSH 0x5e1992                       ; 005148ec | DAT_005e1992
    LEA EAX,[ESP + 0x4]                 ; 005148f1
    PUSH EAX                            ; 005148f5
    CALL crt_stdio.c_fopen_FUN_005b910c ; 005148f6
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 005148fb
    MOV EDI,EAX                         ; 005148fe
    TEST EAX,EAX                        ; 00514900
    JNZ 0x00514927                      ; 00514902
        ;   XREF to: 00514927 (CONDITIONAL_JUMP)  ; LAB_00514927
    MOV EBX,0x5e1995                    ; 00514904 | = "..\\engine\\pcx.c"
    MOV ESI,0x9e                        ; 00514909
    PUSH 0x5e19a5                       ; 0051490e | = "saveScreenRaw32 - Unable to open output"
    MOV dword ptr [0x01d046a0],EBX      ; 00514913 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00514919 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051491f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00514924
    XOR EBP,EBP                         ; 00514927
        ;   Label: LAB_00514927
    MOV EAX,[0x006141bc]                ; 00514929 | DAT_006141bc
    MOV dword ptr [ESP + 0x58],EBP      ; 0051492e
    TEST EAX,EAX                        ; 00514932
    JLE 0x005149ef                      ; 00514934
        ;   XREF to: 005149ef (CONDITIONAL_JUMP)  ; LAB_005149ef
    MOV dword ptr [ESP + 0x54],EBP      ; 0051493a
    MOV EBX,dword ptr [ESP + 0x54]      ; 0051493e
        ;   Label: LAB_0051493e
    MOV EBP,dword ptr [0x006141b8]      ; 00514942 | DAT_006141b8
    XOR ESI,ESI                         ; 00514948
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 0051494a | DAT_01c2a38c
    TEST EBP,EBP                        ; 00514950
    JLE 0x005149cd                      ; 00514952
        ;   XREF to: 005149cd (CONDITIONAL_JUMP)  ; LAB_005149cd
    MOV CL,byte ptr [0x01c35814]        ; 00514954 | DAT_01c35814
        ;   Label: LAB_00514954
    MOV EAX,dword ptr [EBX]             ; 0051495a
    MOV EDX,dword ptr [0x01c35818]      ; 0051495c | DAT_01c35818
    SHR EAX,CL                          ; 00514962
    IMUL EDX,EAX                        ; 00514964
    MOV EBP,dword ptr [EBX]             ; 00514967
    MOV CL,byte ptr [0x01c35820]        ; 00514969 | DAT_01c35820
    SHR EBP,CL                          ; 0051496f
    IMUL EBP,dword ptr [0x01c35824]     ; 00514971 | DAT_01c35824
    MOV EAX,dword ptr [EBX]             ; 00514978
    MOV CL,byte ptr [0x01c3582c]        ; 0051497a | DAT_01c3582c
    SHR EAX,CL                          ; 00514980
    IMUL EAX,dword ptr [0x01c35830]     ; 00514982 | DAT_01c35830
    PUSH EDI                            ; 00514989
    AND EDX,0xff                        ; 0051498a
    AND EAX,0xff                        ; 00514990
    PUSH EDX                            ; 00514995
    MOV dword ptr [ESP + 0x58],EAX      ; 00514996
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 0051499a
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    ADD ESP,0x8                         ; 0051499f
    PUSH EDI                            ; 005149a2
    AND EBP,0xff                        ; 005149a3
    PUSH EBP                            ; 005149a9
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 005149aa
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    ADD ESP,0x8                         ; 005149af
    PUSH EDI                            ; 005149b2
    MOV EBP,dword ptr [ESP + 0x54]      ; 005149b3
    PUSH EBP                            ; 005149b7
    ADD EBX,0x4                         ; 005149b8
    INC ESI                             ; 005149bb
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 005149bc
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    MOV EAX,[0x006141b8]                ; 005149c1 | DAT_006141b8
    ADD ESP,0x8                         ; 005149c6
    CMP ESI,EAX                         ; 005149c9
    JL 0x00514954                       ; 005149cb
        ;   XREF to: 00514954 (CONDITIONAL_JUMP)  ; LAB_00514954
    MOV EDX,dword ptr [ESP + 0x54]      ; 005149cd
        ;   Label: LAB_005149cd
    MOV ECX,dword ptr [ESP + 0x58]      ; 005149d1
    MOV EBX,dword ptr [0x006141bc]      ; 005149d5 | DAT_006141bc
    ADD EDX,0x4                         ; 005149db
    INC ECX                             ; 005149de
    MOV dword ptr [ESP + 0x54],EDX      ; 005149df
    MOV dword ptr [ESP + 0x58],ECX      ; 005149e3
    CMP ECX,EBX                         ; 005149e7
    JL 0x0051493e                       ; 005149e9
        ;   XREF to: 0051493e (CONDITIONAL_JUMP)  ; LAB_0051493e
    PUSH EDI                            ; 005149ef
        ;   Label: LAB_005149ef
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 005149f0
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 005149f5
    ADD ESP,0x5c                        ; 005149f8
    POP EBP                             ; 005149fb
    POP EDI                             ; 005149fc
    POP ESI                             ; 005149fd
    POP EBX                             ; 005149fe
    RET                                 ; 005149ff
    MOV EDX,0x5e195e                    ; 00514a00 | = "..\\engine\\pcx.c"
        ;   Label: LAB_00514a00
    MOV ECX,0x98                        ; 00514a05
    PUSH 0x5e196e                       ; 00514a0a | = "saveScreenRaw32 - No ext found"
    MOV dword ptr [0x01d046a0],EDX      ; 00514a0f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00514a15 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00514a1b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00514a20
    JMP 0x005148cd                      ; 00514a23
        ;   XREF to: 005148cd (UNCONDITIONAL_JUMP)  ; LAB_005148cd

