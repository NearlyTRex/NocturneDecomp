; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c__expand_locale_picture_FUN_1000f3c0(char *picture,uint flags,char **buf,size_t *count)
;
; Parameters:
; char *           Stack[0x4]:4   picture
; uint             Stack[0x8]:4   flags
; char * *         Stack[0xc]:4   buf
; size_t *         Stack[0x10]:4   count
; Local Variables:
; undefined5       Stack[-0x9]:5  local_9
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_time.c__expandtime_FUN_1000ed30 at 1000eefb
;
; Referenced Globals:
;   void* switchdataD_1000f634 = 1000f43d
;   undefined4 PTR_caseD_41_1000f638+1
;   void* switchdataD_1000f6b4 = 1000f50e
;   void* switchdataD_1000f6c4 = 1000f547
;   TerminatedCString s_a_p_10012e54
;   TerminatedCString s_am_pm_10012e58
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748b
;   undefined4 DAT_10018214
;
; Called Functions:
;   crt_string.c__stricmp_FUN_1000ff20
;   crt_time.c__expandtime_FUN_1000ed30
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 1000f3c0
        ;   Label: crt_time.c__expand_locale_picture_FUN_1000f3c0
    PUSH EBX                            ; 1000f3c3
    PUSH ESI                            ; 1000f3c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000f3c5
    PUSH EDI                            ; 1000f3c9
    PUSH EBP                            ; 1000f3ca
    CMP byte ptr [ESI],0x0              ; 1000f3cb
    JZ 0x1000f629                       ; 1000f3ce
        ;   XREF to: 1000f629 (CONDITIONAL_JUMP)  ; LAB_1000f629
    MOV EDI,dword ptr [ESP + 0x28]      ; 1000f3d4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 1000f3d8
    CMP dword ptr [EBP],0x0             ; 1000f3dc
        ;   Label: LAB_1000f3dc
    JZ 0x1000f629                       ; 1000f3e0
        ;   XREF to: 1000f629 (CONDITIONAL_JUMP)  ; LAB_1000f629
    XOR ECX,ECX                         ; 1000f3e6
    LEA EAX,[ESI + 0x1]                 ; 1000f3e8
    MOV EBX,EAX                         ; 1000f3eb
    MOV dword ptr [ESP + 0x18],EAX      ; 1000f3ed
    MOV byte ptr [ESP + 0x13],0x0       ; 1000f3f1
    MOV dword ptr [0x10018214],0x0      ; 1000f3f6 | DAT_10018214
    MOV dword ptr [ESP + 0x14],EBX      ; 1000f400
        ;   Label: LAB_1000f400
    INC EBX                             ; 1000f404
    MOV EDX,dword ptr [ESP + 0x14]      ; 1000f405
    INC ECX                             ; 1000f409
    MOV AL,byte ptr [ESI]               ; 1000f40a
    CMP byte ptr [EDX],AL               ; 1000f40c
    JZ 0x1000f400                       ; 1000f40e
        ;   XREF to: 1000f400 (CONDITIONAL_JUMP)  ; LAB_1000f400
    MOVSX EAX,AL                        ; 1000f410
    DEC EBX                             ; 1000f413
    SUB EAX,0x27                        ; 1000f414
    CMP EAX,0x52                        ; 1000f417
    JA 0x1000f5d5                       ; 1000f41a
        ;   XREF to: 1000f5d5 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x14],0x0      ; 1000f420
    MOV AL,byte ptr [EAX + 0x1000f660]  ; 1000f428 | PTR_caseD_41_1000f638+1
    MOV byte ptr [ESP + 0x14],AL        ; 1000f42e
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000f432
    JMP dword ptr [EAX*0x4 + 0x1000f634] ; 1000f436 | caseD_27 | default | caseD_61
        ;   Label: switchD
    TEST CL,0x1                         ; 1000f43d
        ;   Label: caseD_27
    JZ 0x1000f495                       ; 1000f440
        ;   XREF to: 1000f495 (CONDITIONAL_JUMP)  ; LAB_1000f495
    ADD ESI,ECX                         ; 1000f442
    CMP byte ptr [ESI],0x0              ; 1000f444
    JZ 0x1000f629                       ; 1000f447
        ;   XREF to: 1000f629 (CONDITIONAL_JUMP)  ; LAB_1000f629
    CMP dword ptr [EBP],0x0             ; 1000f44d
        ;   Label: LAB_1000f44d
    JZ 0x1000f620                       ; 1000f451
        ;   XREF to: 1000f620 (CONDITIONAL_JUMP)  ; LAB_1000f620
    MOV CL,byte ptr [ESI]               ; 1000f457
    CMP CL,0x27                         ; 1000f459
    JZ 0x1000f48f                       ; 1000f45c
        ;   XREF to: 1000f48f (CONDITIONAL_JUMP)  ; LAB_1000f48f
    XOR EAX,EAX                         ; 1000f45e
    MOV EDX,dword ptr [0x10017480]      ; 1000f460 | PTR_DAT_10017480
    MOV AL,CL                           ; 1000f466
    TEST byte ptr [EDX + EAX*0x2 + 0x1],0x80 ; 1000f468 | DAT_1001748b
    JZ 0x1000f479                       ; 1000f46d
        ;   XREF to: 1000f479 (CONDITIONAL_JUMP)  ; LAB_1000f479
    MOV EAX,dword ptr [EDI]             ; 1000f46f
    INC ESI                             ; 1000f471
    MOV byte ptr [EAX],CL               ; 1000f472
    INC dword ptr [EDI]                 ; 1000f474
    DEC dword ptr [EBP]                 ; 1000f476
    MOV AL,byte ptr [ESI]               ; 1000f479
        ;   Label: LAB_1000f479
    MOV ECX,dword ptr [EDI]             ; 1000f47b
    INC ESI                             ; 1000f47d
    MOV byte ptr [ECX],AL               ; 1000f47e
    INC dword ptr [EDI]                 ; 1000f480
    DEC dword ptr [EBP]                 ; 1000f482
    CMP byte ptr [ESI],0x0              ; 1000f485
    JNZ 0x1000f44d                      ; 1000f488
        ;   XREF to: 1000f44d (CONDITIONAL_JUMP)  ; LAB_1000f44d
    JMP 0x1000f620                      ; 1000f48a
        ;   XREF to: 1000f620 (UNCONDITIONAL_JUMP)  ; LAB_1000f620
    INC ESI                             ; 1000f48f
        ;   Label: LAB_1000f48f
    JMP 0x1000f620                      ; 1000f490
        ;   XREF to: 1000f620 (UNCONDITIONAL_JUMP)  ; LAB_1000f620
    ADD ESI,ECX                         ; 1000f495
        ;   Label: LAB_1000f495
    JMP 0x1000f620                      ; 1000f497
        ;   XREF to: 1000f620 (UNCONDITIONAL_JUMP)  ; LAB_1000f620
    PUSH 0x10012e58                     ; 1000f49c | = "am/pm"
        ;   Label: caseD_41
    PUSH ESI                            ; 1000f4a1
    CALL crt_string.c__stricmp_FUN_1000ff20 ; 1000f4a2
        ;   XREF to: 1000ff20 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_1000ff20(char * str1, char * str2)
    ADD ESP,0x8                         ; 1000f4a7
    TEST EAX,EAX                        ; 1000f4aa
    JNZ 0x1000f4bb                      ; 1000f4ac
        ;   XREF to: 1000f4bb (CONDITIONAL_JUMP)  ; LAB_1000f4bb
    MOV byte ptr [ESP + 0x13],0x70      ; 1000f4ae
    LEA EBX,[ESI + 0x5]                 ; 1000f4b3
    JMP 0x1000f5d5                      ; 1000f4b6
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x10012e54                     ; 1000f4bb | = "a/p"
        ;   Label: LAB_1000f4bb
    PUSH ESI                            ; 1000f4c0
    CALL crt_string.c__stricmp_FUN_1000ff20 ; 1000f4c1
        ;   XREF to: 1000ff20 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_1000ff20(char * str1, char * str2)
    ADD ESP,0x8                         ; 1000f4c6
    TEST EAX,EAX                        ; 1000f4c9
    JNZ 0x1000f4d0                      ; 1000f4cb
        ;   XREF to: 1000f4d0 (CONDITIONAL_JUMP)  ; LAB_1000f4d0
    LEA EBX,[ESI + 0x3]                 ; 1000f4cd
    MOV byte ptr [ESP + 0x13],0x70      ; 1000f4d0
        ;   Label: LAB_1000f4d0
    JMP 0x1000f5d5                      ; 1000f4d5
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 1000f4da
        ;   Label: caseD_48
    JZ 0x1000f4e9                       ; 1000f4dd
        ;   XREF to: 1000f4e9 (CONDITIONAL_JUMP)  ; LAB_1000f4e9
    CMP ECX,0x2                         ; 1000f4df
    JZ 0x1000f4f3                       ; 1000f4e2
        ;   XREF to: 1000f4f3 (CONDITIONAL_JUMP)  ; LAB_1000f4f3
    JMP 0x1000f5d5                      ; 1000f4e4
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [0x10018214],0x1      ; 1000f4e9 | DAT_10018214
        ;   Label: LAB_1000f4e9
    MOV byte ptr [ESP + 0x13],0x48      ; 1000f4f3
        ;   Label: LAB_1000f4f3
    JMP 0x1000f5d5                      ; 1000f4f8
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    DEC ECX                             ; 1000f4fd
        ;   Label: caseD_4d
    CMP ECX,0x3                         ; 1000f4fe
    JA 0x1000f5d5                       ; 1000f501
        ;   XREF to: 1000f5d5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ECX*0x4 + 0x1000f6b4] ; 1000f507 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [0x10018214],0x1      ; 1000f50e | DAT_10018214
        ;   Label: caseD_0
    MOV byte ptr [ESP + 0x13],0x6d      ; 1000f518
        ;   Label: caseD_1
    JMP 0x1000f5d5                      ; 1000f51d
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV byte ptr [ESP + 0x13],0x62      ; 1000f522
        ;   Label: caseD_2
    JMP 0x1000f5d5                      ; 1000f527
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV byte ptr [ESP + 0x13],0x42      ; 1000f52c
        ;   Label: caseD_3
    JMP 0x1000f5d5                      ; 1000f531
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    DEC ECX                             ; 1000f536
        ;   Label: caseD_64
    CMP ECX,0x3                         ; 1000f537
    JA 0x1000f5d5                       ; 1000f53a
        ;   XREF to: 1000f5d5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ECX*0x4 + 0x1000f6c4] ; 1000f540 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [0x10018214],0x1      ; 1000f547 | DAT_10018214
        ;   Label: caseD_0
    MOV byte ptr [ESP + 0x13],0x64      ; 1000f551
        ;   Label: caseD_1
    JMP 0x1000f5d5                      ; 1000f556
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV byte ptr [ESP + 0x13],0x61      ; 1000f558
        ;   Label: caseD_2
    JMP 0x1000f5d5                      ; 1000f55d
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV byte ptr [ESP + 0x13],0x41      ; 1000f55f
        ;   Label: caseD_3
    JMP 0x1000f5d5                      ; 1000f564
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 1000f566
        ;   Label: caseD_68
    JZ 0x1000f572                       ; 1000f569
        ;   XREF to: 1000f572 (CONDITIONAL_JUMP)  ; LAB_1000f572
    CMP ECX,0x2                         ; 1000f56b
    JZ 0x1000f57c                       ; 1000f56e
        ;   XREF to: 1000f57c (CONDITIONAL_JUMP)  ; LAB_1000f57c
    JMP 0x1000f5d5                      ; 1000f570
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [0x10018214],0x1      ; 1000f572 | DAT_10018214
        ;   Label: LAB_1000f572
    MOV byte ptr [ESP + 0x13],0x49      ; 1000f57c
        ;   Label: LAB_1000f57c
    JMP 0x1000f5d5                      ; 1000f581
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 1000f583
        ;   Label: caseD_6d
    JZ 0x1000f58f                       ; 1000f586
        ;   XREF to: 1000f58f (CONDITIONAL_JUMP)  ; LAB_1000f58f
    CMP ECX,0x2                         ; 1000f588
    JZ 0x1000f599                       ; 1000f58b
        ;   XREF to: 1000f599 (CONDITIONAL_JUMP)  ; LAB_1000f599
    JMP 0x1000f5d5                      ; 1000f58d
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [0x10018214],0x1      ; 1000f58f | DAT_10018214
        ;   Label: LAB_1000f58f
    MOV byte ptr [ESP + 0x13],0x4d      ; 1000f599
        ;   Label: LAB_1000f599
    JMP 0x1000f5d5                      ; 1000f59e
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 1000f5a0
        ;   Label: caseD_73
    JZ 0x1000f5ac                       ; 1000f5a3
        ;   XREF to: 1000f5ac (CONDITIONAL_JUMP)  ; LAB_1000f5ac
    CMP ECX,0x2                         ; 1000f5a5
    JZ 0x1000f5b6                       ; 1000f5a8
        ;   XREF to: 1000f5b6 (CONDITIONAL_JUMP)  ; LAB_1000f5b6
    JMP 0x1000f5d5                      ; 1000f5aa
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [0x10018214],0x1      ; 1000f5ac | DAT_10018214
        ;   Label: LAB_1000f5ac
    MOV byte ptr [ESP + 0x13],0x53      ; 1000f5b6
        ;   Label: LAB_1000f5b6
    JMP 0x1000f5d5                      ; 1000f5bb
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x2                         ; 1000f5bd
        ;   Label: caseD_79
    JZ 0x1000f5c9                       ; 1000f5c0
        ;   XREF to: 1000f5c9 (CONDITIONAL_JUMP)  ; LAB_1000f5c9
    CMP ECX,0x4                         ; 1000f5c2
    JZ 0x1000f5d0                       ; 1000f5c5
        ;   XREF to: 1000f5d0 (CONDITIONAL_JUMP)  ; LAB_1000f5d0
    JMP 0x1000f5d5                      ; 1000f5c7
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV byte ptr [ESP + 0x13],0x79      ; 1000f5c9
        ;   Label: LAB_1000f5c9
    JMP 0x1000f5d5                      ; 1000f5ce
        ;   XREF to: 1000f5d5 (UNCONDITIONAL_JUMP)  ; default
    MOV byte ptr [ESP + 0x13],0x59      ; 1000f5d0
        ;   Label: LAB_1000f5d0
    CMP byte ptr [ESP + 0x13],0x0       ; 1000f5d5
        ;   Label: caseD_28
    JZ 0x1000f5f4                       ; 1000f5da
        ;   XREF to: 1000f5f4 (CONDITIONAL_JUMP)  ; LAB_1000f5f4
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000f5dc
    PUSH EBP                            ; 1000f5e0
    MOV ECX,dword ptr [ESP + 0x17]      ; 1000f5e1
    PUSH EDI                            ; 1000f5e5
    PUSH EAX                            ; 1000f5e6
    MOV ESI,EBX                         ; 1000f5e7
    PUSH ECX                            ; 1000f5e9
    CALL crt_time.c__expandtime_FUN_1000ed30 ; 1000f5ea
        ;   XREF to: 1000ed30 (UNCONDITIONAL_CALL)  ; void crt_time.c__expandtime_FUN_1000ed30(uchar code, tm * tb, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f5ef
    JMP 0x1000f620                      ; 1000f5f2
        ;   XREF to: 1000f620 (UNCONDITIONAL_JUMP)  ; LAB_1000f620
    MOV CL,byte ptr [ESI]               ; 1000f5f4
        ;   Label: LAB_1000f5f4
    XOR EAX,EAX                         ; 1000f5f6
    MOV AL,CL                           ; 1000f5f8
    MOV EDX,dword ptr [0x10017480]      ; 1000f5fa | PTR_DAT_10017480
    TEST byte ptr [EDX + EAX*0x2 + 0x1],0x80 ; 1000f600 | DAT_1001748b
    JZ 0x1000f614                       ; 1000f605
        ;   XREF to: 1000f614 (CONDITIONAL_JUMP)  ; LAB_1000f614
    MOV EAX,dword ptr [EDI]             ; 1000f607
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000f609
    MOV byte ptr [EAX],CL               ; 1000f60d
    INC dword ptr [EDI]                 ; 1000f60f
    DEC dword ptr [EBP]                 ; 1000f611
    MOV AL,byte ptr [ESI]               ; 1000f614
        ;   Label: LAB_1000f614
    MOV ECX,dword ptr [EDI]             ; 1000f616
    INC ESI                             ; 1000f618
    MOV byte ptr [ECX],AL               ; 1000f619
    INC dword ptr [EDI]                 ; 1000f61b
    DEC dword ptr [EBP]                 ; 1000f61d
    CMP byte ptr [ESI],0x0              ; 1000f620
        ;   Label: LAB_1000f620
    JNZ 0x1000f3dc                      ; 1000f623
        ;   XREF to: 1000f3dc (CONDITIONAL_JUMP)  ; LAB_1000f3dc
    POP EBP                             ; 1000f629
        ;   Label: LAB_1000f629
    POP EDI                             ; 1000f62a
    POP ESI                             ; 1000f62b
    POP EBX                             ; 1000f62c
    ADD ESP,0xc                         ; 1000f62d
    RET                                 ; 1000f630

