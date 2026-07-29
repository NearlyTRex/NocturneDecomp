; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004bd480(CIni *this_ptr,char *section,char *key,char *value,char *filename)
;
; Parameters:
; CIni *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
; char *           Stack[0xc]:4   key
; char *           Stack[0x10]:4   value
; char *           Stack[0x14]:4   filename
; Local Variables:
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_ini.cpp_writeProfileString_FUN_004bd830 at 004bd84b
;
; Referenced Globals:
;   TerminatedCString s_rt_0058657d
;   TerminatedCString s_engine_ini_cpp_00586580
;   TerminatedCString s_cIni_writeProfileString_00586592
;   TerminatedCString s_wt_005865c1
;   TerminatedCString s_engine_ini_cpp_005865c4
;   TerminatedCString s_cIni_writeProfileString_005865d6
;   TerminatedCString s_s_00586606
;   TerminatedCString s_s_s_0058660c
;   TerminatedCString s_s_s_00586613
;   TerminatedCString s_s_s_0058661a
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_remove_FUN_005657c0
;   crt_stdio.c_rename_FUN_00566f00
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strcmp_FUN_005649c0
;   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd480
        ;   Label: engine_ini.cpp_CIni_writeProfileString_FUN_004bd480
    PUSH ESI                            ; 004bd481
    PUSH EDI                            ; 004bd482
    PUSH EBP                            ; 004bd483
    SUB ESP,0x304                       ; 004bd484
    MOV EBX,dword ptr [ESP + 0x318]     ; 004bd48a
    MOV ECX,dword ptr [ESP + 0x324]     ; 004bd491
    PUSH ECX                            ; 004bd498
    MOV ESI,dword ptr [ESP + 0x32c]     ; 004bd499
    PUSH ESI                            ; 004bd4a0
    MOV EDI,dword ptr [ESP + 0x328]     ; 004bd4a1
    PUSH EDI                            ; 004bd4a8
    MOV EBP,dword ptr [ESP + 0x328]     ; 004bd4a9
    PUSH EBP                            ; 004bd4b0
    XOR EDX,EDX                         ; 004bd4b1
    PUSH EBX                            ; 004bd4b3
    MOV dword ptr [ESP + 0x314],EDX     ; 004bd4b4
    CALL engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0 ; 004bd4bb
        ;   XREF to: 004bd2b0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0()
    MOV EBP,EAX                         ; 004bd4c0
    MOV EAX,dword ptr [EBX]             ; 004bd4c2
    ADD ESP,0x14                        ; 004bd4c4
    TEST EAX,EAX                        ; 004bd4c7
    JNZ 0x004bd4db                      ; 004bd4c9
        ;   XREF to: 004bd4db (CONDITIONAL_JUMP)  ; LAB_004bd4db
    MOV EAX,0x1                         ; 004bd4cb
    ADD ESP,0x304                       ; 004bd4d0
    POP EBP                             ; 004bd4d6
    POP EDI                             ; 004bd4d7
    POP ESI                             ; 004bd4d8
    POP EBX                             ; 004bd4d9
    RET                                 ; 004bd4da
    PUSH 0x58657d                       ; 004bd4db | = "rt"
        ;   Label: LAB_004bd4db
    PUSH ESI                            ; 004bd4e0
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004bd4e1
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004bd4e6
    MOV EBX,EAX                         ; 004bd4e9
    TEST EAX,EAX                        ; 004bd4eb
    JNZ 0x004bd512                      ; 004bd4ed
        ;   XREF to: 004bd512 (CONDITIONAL_JUMP)  ; LAB_004bd512
    MOV ECX,0x586580                    ; 004bd4ef | = "..\\engine\\ini.cpp"
    MOV ESI,0x182                       ; 004bd4f4
    PUSH 0x586592                       ; 004bd4f9 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01cc4800],ECX      ; 004bd4fe | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004bd504 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd50a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd50f
    MOV ESI,dword ptr [ESP + 0x328]     ; 004bd512
        ;   Label: LAB_004bd512
    LEA EDI,[ESP + 0x100]               ; 004bd519
    PUSH EDI                            ; 004bd520
    MOV AL,byte ptr [ESI]               ; 004bd521
        ;   Label: LAB_004bd521
    MOV byte ptr [EDI],AL               ; 004bd523
    CMP AL,0x0                          ; 004bd525
    JZ 0x004bd539                       ; 004bd527
        ;   XREF to: 004bd539 (CONDITIONAL_JUMP)  ; LAB_004bd539
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd529
    ADD ESI,0x2                         ; 004bd52c
    MOV byte ptr [EDI + 0x1],AL         ; 004bd52f
    ADD EDI,0x2                         ; 004bd532
    CMP AL,0x0                          ; 004bd535
    JNZ 0x004bd521                      ; 004bd537
        ;   XREF to: 004bd521 (CONDITIONAL_JUMP)  ; LAB_004bd521
    POP EDI                             ; 004bd539
        ;   Label: LAB_004bd539
    MOV EDI,dword ptr [ESP + 0x328]     ; 004bd53a
    SUB ECX,ECX                         ; 004bd541
    DEC ECX                             ; 004bd543
    XOR EAX,EAX                         ; 004bd544
    SCASB.REPNE ES:EDI                  ; 004bd546
    NOT ECX                             ; 004bd548
    DEC ECX                             ; 004bd54a
    MOV AH,0x78                         ; 004bd54b
    PUSH 0x5865c1                       ; 004bd54d | = "wt"
    MOV byte ptr [ESP + ECX*0x1 + 0x103],AH ; 004bd552
    LEA EAX,[ESP + 0x104]               ; 004bd559
    PUSH EAX                            ; 004bd560
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004bd561
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004bd566
    MOV ESI,EAX                         ; 004bd569
    TEST EAX,EAX                        ; 004bd56b
    JNZ 0x004bd591                      ; 004bd56d
        ;   XREF to: 004bd591 (CONDITIONAL_JUMP)  ; LAB_004bd591
    MOV EDI,0x5865c4                    ; 004bd56f | = "..\\engine\\ini.cpp"
    MOV EAX,0x186                       ; 004bd574
    PUSH 0x5865d6                       ; 004bd579 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01cc4800],EDI      ; 004bd57e | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004bd584 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd589
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd58e
    TEST EBP,EBP                        ; 004bd591
        ;   Label: LAB_004bd591
    JZ 0x004bd5bf                       ; 004bd593
        ;   XREF to: 004bd5bf (CONDITIONAL_JUMP)  ; LAB_004bd5bf
    TEST EBP,EBP                        ; 004bd595
        ;   Label: LAB_004bd595
    JL 0x004bd6de                       ; 004bd597
        ;   XREF to: 004bd6de (CONDITIONAL_JUMP)  ; LAB_004bd6de
    PUSH EBX                            ; 004bd59d
    PUSH 0xff                           ; 004bd59e
    LEA EAX,[ESP + 0x8]                 ; 004bd5a3
    PUSH EAX                            ; 004bd5a7
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd5a8
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bd5ad
    MOV EAX,ESP                         ; 004bd5b0
    PUSH EAX                            ; 004bd5b2
    PUSH ESI                            ; 004bd5b3
    DEC EBP                             ; 004bd5b4
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd5b5
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004bd5ba
    JMP 0x004bd595                      ; 004bd5bd
        ;   XREF to: 004bd595 (UNCONDITIONAL_JUMP)  ; LAB_004bd595
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004bd5bf
        ;   Label: LAB_004bd5bf
    PUSH EDX                            ; 004bd5c6
    PUSH 0x586606                       ; 004bd5c7 | = "[%s]\n"
    LEA EAX,[ESP + 0x208]               ; 004bd5cc
    PUSH EAX                            ; 004bd5d3
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bd5d4
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV DL,byte ptr [EBX + 0xc]         ; 004bd5d9
    ADD ESP,0xc                         ; 004bd5dc
    TEST DL,0x10                        ; 004bd5df
    JNZ 0x004bd606                      ; 004bd5e2
        ;   XREF to: 004bd606 (CONDITIONAL_JUMP)  ; LAB_004bd606
    MOV EBP,dword ptr [ESP + 0x324]     ; 004bd5e4
    PUSH EBX                            ; 004bd5eb
        ;   Label: LAB_004bd5eb
    PUSH 0xff                           ; 004bd5ec
    LEA EAX,[ESP + 0x8]                 ; 004bd5f1
    PUSH EAX                            ; 004bd5f5
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd5f6
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bd5fb
    TEST EAX,EAX                        ; 004bd5fe
    JNZ 0x004bd689                      ; 004bd600
        ;   XREF to: 004bd689 (CONDITIONAL_JUMP)  ; LAB_004bd689
    CMP dword ptr [ESP + 0x300],0x0     ; 004bd606
        ;   Label: LAB_004bd606
    JNZ 0x004bd63f                      ; 004bd60e
        ;   XREF to: 004bd63f (CONDITIONAL_JUMP)  ; LAB_004bd63f
    LEA EAX,[ESP + 0x200]               ; 004bd610
    PUSH EAX                            ; 004bd617
    PUSH ESI                            ; 004bd618
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd619
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004bd61e
    MOV EDI,dword ptr [ESP + 0x324]     ; 004bd621
    PUSH EDI                            ; 004bd628
    MOV EBP,dword ptr [ESP + 0x324]     ; 004bd629
    PUSH EBP                            ; 004bd630
    PUSH 0x586613                       ; 004bd631 | = "%s=%s\n"
    PUSH ESI                            ; 004bd636
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd637
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004bd63c
    PUSH EBX                            ; 004bd63f
        ;   Label: LAB_004bd63f
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004bd640
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004bd645
    PUSH ESI                            ; 004bd648
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004bd649
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004bd64e
    MOV EAX,dword ptr [ESP + 0x328]     ; 004bd651
    PUSH EAX                            ; 004bd658
    CALL crt_stdio.c_remove_FUN_005657c0 ; 004bd659
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005657c0(char * filename)
    ADD ESP,0x4                         ; 004bd65e
    MOV EDX,dword ptr [ESP + 0x328]     ; 004bd661
    PUSH EDX                            ; 004bd668
    LEA EAX,[ESP + 0x104]               ; 004bd669
    PUSH EAX                            ; 004bd670
    CALL crt_stdio.c_rename_FUN_00566f00 ; 004bd671
        ;   XREF to: 00566f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_rename_FUN_00566f00(char * old_filename, char * new_filename)
    MOV EAX,0x1                         ; 004bd676
    ADD ESP,0x8                         ; 004bd67b
    ADD ESP,0x304                       ; 004bd67e
    POP EBP                             ; 004bd684
    POP EDI                             ; 004bd685
    POP ESI                             ; 004bd686
    POP EBX                             ; 004bd687
    RET                                 ; 004bd688
    MOV EAX,ESP                         ; 004bd689
        ;   Label: LAB_004bd689
    PUSH EAX                            ; 004bd68b
    PUSH ESI                            ; 004bd68c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd68d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004bd692
    MOV EAX,ESP                         ; 004bd695
    PUSH EAX                            ; 004bd697
    LEA EAX,[ESP + 0x204]               ; 004bd698
    PUSH EAX                            ; 004bd69f
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004bd6a0
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bd6a5
    TEST EAX,EAX                        ; 004bd6a8
    JNZ 0x004bd6cf                      ; 004bd6aa
        ;   XREF to: 004bd6cf (CONDITIONAL_JUMP)  ; LAB_004bd6cf
    PUSH EBP                            ; 004bd6ac
    MOV EAX,dword ptr [ESP + 0x324]     ; 004bd6ad
    PUSH EAX                            ; 004bd6b4
    PUSH 0x58660c                       ; 004bd6b5 | = "%s=%s\n"
    PUSH ESI                            ; 004bd6ba
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd6bb
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,0x1                         ; 004bd6c0
    ADD ESP,0x10                        ; 004bd6c5
    MOV dword ptr [ESP + 0x300],EDX     ; 004bd6c8
    TEST byte ptr [EBX + 0xc],0x10      ; 004bd6cf
        ;   Label: LAB_004bd6cf
    JNZ 0x004bd606                      ; 004bd6d3
        ;   XREF to: 004bd606 (CONDITIONAL_JUMP)  ; LAB_004bd606
    JMP 0x004bd5eb                      ; 004bd6d9
        ;   XREF to: 004bd5eb (UNCONDITIONAL_JUMP)  ; LAB_004bd5eb
    MOV ECX,dword ptr [ESP + 0x324]     ; 004bd6de
        ;   Label: LAB_004bd6de
    PUSH ECX                            ; 004bd6e5
    MOV EDI,dword ptr [ESP + 0x324]     ; 004bd6e6
    PUSH EDI                            ; 004bd6ed
    PUSH 0x58661a                       ; 004bd6ee | = "%s=%s\n"
    PUSH ESI                            ; 004bd6f3
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd6f4
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004bd6f9
    PUSH EBX                            ; 004bd6fc
    PUSH 0xff                           ; 004bd6fd
    LEA EAX,[ESP + 0x8]                 ; 004bd702
    PUSH EAX                            ; 004bd706
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd707
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV DH,byte ptr [EBX + 0xc]         ; 004bd70c
    ADD ESP,0xc                         ; 004bd70f
    TEST DH,0x10                        ; 004bd712
    JNZ 0x004bd63f                      ; 004bd715
        ;   XREF to: 004bd63f (CONDITIONAL_JUMP)  ; LAB_004bd63f
        ;   Label: LAB_004bd715
    PUSH EBX                            ; 004bd71b
    PUSH 0xff                           ; 004bd71c
    LEA EAX,[ESP + 0x8]                 ; 004bd721
    PUSH EAX                            ; 004bd725
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd726
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bd72b
    TEST EAX,EAX                        ; 004bd72e
    JZ 0x004bd63f                       ; 004bd730
        ;   XREF to: 004bd63f (CONDITIONAL_JUMP)  ; LAB_004bd63f
    MOV EAX,ESP                         ; 004bd736
    PUSH EAX                            ; 004bd738
    PUSH ESI                            ; 004bd739
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004bd73a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV CL,byte ptr [EBX + 0xc]         ; 004bd73f
    ADD ESP,0x8                         ; 004bd742
    TEST CL,0x10                        ; 004bd745
    JMP 0x004bd715                      ; 004bd748
        ;   XREF to: 004bd715 (UNCONDITIONAL_JUMP)  ; LAB_004bd715

