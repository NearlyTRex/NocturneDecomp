; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004d8530(CIni *this_ptr,char *section,char *key,char *value,char *filename)
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
;   engine_ini.cpp_writeProfileString_FUN_004d88e0 at 004d88fb
;
; Referenced Globals:
;   undefined4 DAT_005dabda
;   TerminatedCString s_engine_ini_cpp_005dabdd
;   TerminatedCString s_cIni_writeProfileString_005dabef
;   undefined4 DAT_005dac1e
;   TerminatedCString s_engine_ini_cpp_005dac21
;   TerminatedCString s_cIni_writeProfileString_005dac33
;   TerminatedCString s_s_005dac63
;   TerminatedCString s_s_s_005dac69
;   TerminatedCString s_s_s_005dac70
;   TerminatedCString s_s_s_005dac77
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_rename_FUN_005bacf0
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_unknown.c_FUN_005b8010
;   crt_unknown.c_FUN_005ba1e0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_ini.cpp_FUN_004d8360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8530
        ;   Label: engine_ini.cpp_CIni_writeProfileString_FUN_004d8530
    PUSH ESI                            ; 004d8531
    PUSH EDI                            ; 004d8532
    PUSH EBP                            ; 004d8533
    SUB ESP,0x304                       ; 004d8534
    MOV EBX,dword ptr [ESP + 0x318]     ; 004d853a
    MOV ECX,dword ptr [ESP + 0x324]     ; 004d8541
    PUSH ECX                            ; 004d8548
    MOV ESI,dword ptr [ESP + 0x32c]     ; 004d8549
    PUSH ESI                            ; 004d8550
    MOV EDI,dword ptr [ESP + 0x328]     ; 004d8551
    PUSH EDI                            ; 004d8558
    MOV EBP,dword ptr [ESP + 0x328]     ; 004d8559
    PUSH EBP                            ; 004d8560
    XOR EDX,EDX                         ; 004d8561
    PUSH EBX                            ; 004d8563
    MOV dword ptr [ESP + 0x314],EDX     ; 004d8564
    CALL engine_ini.cpp_FUN_004d8360    ; 004d856b
        ;   XREF to: 004d8360 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8360()
    MOV EBP,EAX                         ; 004d8570
    MOV EAX,dword ptr [EBX]             ; 004d8572
    ADD ESP,0x14                        ; 004d8574
    TEST EAX,EAX                        ; 004d8577
    JNZ 0x004d858b                      ; 004d8579
        ;   XREF to: 004d858b (CONDITIONAL_JUMP)  ; LAB_004d858b
    MOV EAX,0x1                         ; 004d857b
    ADD ESP,0x304                       ; 004d8580
    POP EBP                             ; 004d8586
    POP EDI                             ; 004d8587
    POP ESI                             ; 004d8588
    POP EBX                             ; 004d8589
    RET                                 ; 004d858a
    PUSH 0x5dabda                       ; 004d858b | DAT_005dabda
        ;   Label: LAB_004d858b
    PUSH ESI                            ; 004d8590
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004d8591
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004d8596
    MOV EBX,EAX                         ; 004d8599
    TEST EAX,EAX                        ; 004d859b
    JNZ 0x004d85c2                      ; 004d859d
        ;   XREF to: 004d85c2 (CONDITIONAL_JUMP)  ; LAB_004d85c2
    MOV ECX,0x5dabdd                    ; 004d859f | = "..\\engine\\ini.cpp"
    MOV ESI,0x18b                       ; 004d85a4
    PUSH 0x5dabef                       ; 004d85a9 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01d046a0],ECX      ; 004d85ae | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004d85b4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d85ba
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d85bf
    MOV ESI,dword ptr [ESP + 0x328]     ; 004d85c2
        ;   Label: LAB_004d85c2
    LEA EDI,[ESP + 0x100]               ; 004d85c9
    PUSH EDI                            ; 004d85d0
    MOV AL,byte ptr [ESI]               ; 004d85d1
        ;   Label: LAB_004d85d1
    MOV byte ptr [EDI],AL               ; 004d85d3
    CMP AL,0x0                          ; 004d85d5
    JZ 0x004d85e9                       ; 004d85d7
        ;   XREF to: 004d85e9 (CONDITIONAL_JUMP)  ; LAB_004d85e9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d85d9
    ADD ESI,0x2                         ; 004d85dc
    MOV byte ptr [EDI + 0x1],AL         ; 004d85df
    ADD EDI,0x2                         ; 004d85e2
    CMP AL,0x0                          ; 004d85e5
    JNZ 0x004d85d1                      ; 004d85e7
        ;   XREF to: 004d85d1 (CONDITIONAL_JUMP)  ; LAB_004d85d1
    POP EDI                             ; 004d85e9
        ;   Label: LAB_004d85e9
    MOV EDI,dword ptr [ESP + 0x328]     ; 004d85ea
    SUB ECX,ECX                         ; 004d85f1
    DEC ECX                             ; 004d85f3
    XOR EAX,EAX                         ; 004d85f4
    SCASB.REPNE ES:EDI                  ; 004d85f6
    NOT ECX                             ; 004d85f8
    DEC ECX                             ; 004d85fa
    MOV AH,0x78                         ; 004d85fb
    PUSH 0x5dac1e                       ; 004d85fd | DAT_005dac1e
    MOV byte ptr [ESP + ECX*0x1 + 0x103],AH ; 004d8602
    LEA EAX,[ESP + 0x104]               ; 004d8609
    PUSH EAX                            ; 004d8610
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004d8611
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004d8616
    MOV ESI,EAX                         ; 004d8619
    TEST EAX,EAX                        ; 004d861b
    JNZ 0x004d8641                      ; 004d861d
        ;   XREF to: 004d8641 (CONDITIONAL_JUMP)  ; LAB_004d8641
    MOV EDI,0x5dac21                    ; 004d861f | = "..\\engine\\ini.cpp"
    MOV EAX,0x18f                       ; 004d8624
    PUSH 0x5dac33                       ; 004d8629 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01d046a0],EDI      ; 004d862e | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004d8634 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d8639
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d863e
    TEST EBP,EBP                        ; 004d8641
        ;   Label: LAB_004d8641
    JZ 0x004d866f                       ; 004d8643
        ;   XREF to: 004d866f (CONDITIONAL_JUMP)  ; LAB_004d866f
    TEST EBP,EBP                        ; 004d8645
        ;   Label: LAB_004d8645
    JL 0x004d878e                       ; 004d8647
        ;   XREF to: 004d878e (CONDITIONAL_JUMP)  ; LAB_004d878e
    PUSH EBX                            ; 004d864d
    PUSH 0xff                           ; 004d864e
    LEA EAX,[ESP + 0x8]                 ; 004d8653
    PUSH EAX                            ; 004d8657
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d8658
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d865d
    MOV EAX,ESP                         ; 004d8660
    PUSH EAX                            ; 004d8662
    PUSH ESI                            ; 004d8663
    DEC EBP                             ; 004d8664
    CALL crt_unknown.c_FUN_005b8010     ; 004d8665
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004d866a
    JMP 0x004d8645                      ; 004d866d
        ;   XREF to: 004d8645 (UNCONDITIONAL_JUMP)  ; LAB_004d8645
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004d866f
        ;   Label: LAB_004d866f
    PUSH EDX                            ; 004d8676
    PUSH 0x5dac63                       ; 004d8677 | = "[%s]\n"
    LEA EAX,[ESP + 0x208]               ; 004d867c
    PUSH EAX                            ; 004d8683
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004d8684
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV DL,byte ptr [EBX + 0xc]         ; 004d8689
    ADD ESP,0xc                         ; 004d868c
    TEST DL,0x10                        ; 004d868f
    JNZ 0x004d86b6                      ; 004d8692
        ;   XREF to: 004d86b6 (CONDITIONAL_JUMP)  ; LAB_004d86b6
    MOV EBP,dword ptr [ESP + 0x324]     ; 004d8694
    PUSH EBX                            ; 004d869b
        ;   Label: LAB_004d869b
    PUSH 0xff                           ; 004d869c
    LEA EAX,[ESP + 0x8]                 ; 004d86a1
    PUSH EAX                            ; 004d86a5
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d86a6
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d86ab
    TEST EAX,EAX                        ; 004d86ae
    JNZ 0x004d8739                      ; 004d86b0
        ;   XREF to: 004d8739 (CONDITIONAL_JUMP)  ; LAB_004d8739
    CMP dword ptr [ESP + 0x300],0x0     ; 004d86b6
        ;   Label: LAB_004d86b6
    JNZ 0x004d86ef                      ; 004d86be
        ;   XREF to: 004d86ef (CONDITIONAL_JUMP)  ; LAB_004d86ef
    LEA EAX,[ESP + 0x200]               ; 004d86c0
    PUSH EAX                            ; 004d86c7
    PUSH ESI                            ; 004d86c8
    CALL crt_unknown.c_FUN_005b8010     ; 004d86c9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004d86ce
    MOV EDI,dword ptr [ESP + 0x324]     ; 004d86d1
    PUSH EDI                            ; 004d86d8
    MOV EBP,dword ptr [ESP + 0x324]     ; 004d86d9
    PUSH EBP                            ; 004d86e0
    PUSH 0x5dac70                       ; 004d86e1 | = "%s=%s\n"
    PUSH ESI                            ; 004d86e6
    CALL crt_unknown.c_FUN_005b8010     ; 004d86e7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004d86ec
    PUSH EBX                            ; 004d86ef
        ;   Label: LAB_004d86ef
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004d86f0
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004d86f5
    PUSH ESI                            ; 004d86f8
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004d86f9
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004d86fe
    MOV EAX,dword ptr [ESP + 0x328]     ; 004d8701
    PUSH EAX                            ; 004d8708
    CALL crt_unknown.c_FUN_005ba1e0     ; 004d8709
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005ba1e0(char * filename)
    ADD ESP,0x4                         ; 004d870e
    MOV EDX,dword ptr [ESP + 0x328]     ; 004d8711
    PUSH EDX                            ; 004d8718
    LEA EAX,[ESP + 0x104]               ; 004d8719
    PUSH EAX                            ; 004d8720
    CALL crt_stdio.c_rename_FUN_005bacf0 ; 004d8721
        ;   XREF to: 005bacf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_rename_FUN_005bacf0(char * old_filename, char * new_filename)
    MOV EAX,0x1                         ; 004d8726
    ADD ESP,0x8                         ; 004d872b
    ADD ESP,0x304                       ; 004d872e
    POP EBP                             ; 004d8734
    POP EDI                             ; 004d8735
    POP ESI                             ; 004d8736
    POP EBX                             ; 004d8737
    RET                                 ; 004d8738
    MOV EAX,ESP                         ; 004d8739
        ;   Label: LAB_004d8739
    PUSH EAX                            ; 004d873b
    PUSH ESI                            ; 004d873c
    CALL crt_unknown.c_FUN_005b8010     ; 004d873d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004d8742
    MOV EAX,ESP                         ; 004d8745
    PUSH EAX                            ; 004d8747
    LEA EAX,[ESP + 0x204]               ; 004d8748
    PUSH EAX                            ; 004d874f
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004d8750
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8755
    TEST EAX,EAX                        ; 004d8758
    JNZ 0x004d877f                      ; 004d875a
        ;   XREF to: 004d877f (CONDITIONAL_JUMP)  ; LAB_004d877f
    PUSH EBP                            ; 004d875c
    MOV EAX,dword ptr [ESP + 0x324]     ; 004d875d
    PUSH EAX                            ; 004d8764
    PUSH 0x5dac69                       ; 004d8765 | = "%s=%s\n"
    PUSH ESI                            ; 004d876a
    CALL crt_unknown.c_FUN_005b8010     ; 004d876b
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,0x1                         ; 004d8770
    ADD ESP,0x10                        ; 004d8775
    MOV dword ptr [ESP + 0x300],EDX     ; 004d8778
    TEST byte ptr [EBX + 0xc],0x10      ; 004d877f
        ;   Label: LAB_004d877f
    JNZ 0x004d86b6                      ; 004d8783
        ;   XREF to: 004d86b6 (CONDITIONAL_JUMP)  ; LAB_004d86b6
    JMP 0x004d869b                      ; 004d8789
        ;   XREF to: 004d869b (UNCONDITIONAL_JUMP)  ; LAB_004d869b
    MOV ECX,dword ptr [ESP + 0x324]     ; 004d878e
        ;   Label: LAB_004d878e
    PUSH ECX                            ; 004d8795
    MOV EDI,dword ptr [ESP + 0x324]     ; 004d8796
    PUSH EDI                            ; 004d879d
    PUSH 0x5dac77                       ; 004d879e | = "%s=%s\n"
    PUSH ESI                            ; 004d87a3
    CALL crt_unknown.c_FUN_005b8010     ; 004d87a4
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004d87a9
    PUSH EBX                            ; 004d87ac
    PUSH 0xff                           ; 004d87ad
    LEA EAX,[ESP + 0x8]                 ; 004d87b2
    PUSH EAX                            ; 004d87b6
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d87b7
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    MOV DH,byte ptr [EBX + 0xc]         ; 004d87bc
    ADD ESP,0xc                         ; 004d87bf
    TEST DH,0x10                        ; 004d87c2
    JNZ 0x004d86ef                      ; 004d87c5
        ;   XREF to: 004d86ef (CONDITIONAL_JUMP)  ; LAB_004d86ef
        ;   Label: LAB_004d87c5
    PUSH EBX                            ; 004d87cb
    PUSH 0xff                           ; 004d87cc
    LEA EAX,[ESP + 0x8]                 ; 004d87d1
    PUSH EAX                            ; 004d87d5
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d87d6
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d87db
    TEST EAX,EAX                        ; 004d87de
    JZ 0x004d86ef                       ; 004d87e0
        ;   XREF to: 004d86ef (CONDITIONAL_JUMP)  ; LAB_004d86ef
    MOV EAX,ESP                         ; 004d87e6
    PUSH EAX                            ; 004d87e8
    PUSH ESI                            ; 004d87e9
    CALL crt_unknown.c_FUN_005b8010     ; 004d87ea
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV CL,byte ptr [EBX + 0xc]         ; 004d87ef
    ADD ESP,0x8                         ; 004d87f2
    TEST CL,0x10                        ; 004d87f5
    JMP 0x004d87c5                      ; 004d87f8
        ;   XREF to: 004d87c5 (UNCONDITIONAL_JUMP)  ; LAB_004d87c5

