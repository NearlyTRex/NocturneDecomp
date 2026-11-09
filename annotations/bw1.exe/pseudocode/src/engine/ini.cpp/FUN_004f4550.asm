; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_ini_cpp_FUN_004f4550(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,char *param_5 )
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x211]:1  local_211
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004f4720 at 004f475b
;
; Referenced Globals:
;   TerminatedCString s_rt_005e56eb
;   TerminatedCString s_engine_ini_cpp_005e56ee
;   TerminatedCString s_cIni_FindLineNumberOfVar_005e5700
;   TerminatedCString s_s_005e5735
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4550
        ;   Label: engine_ini.cpp_FUN_004f4550
    PUSH ESI                            ; 004f4551
    PUSH EDI                            ; 004f4552
    PUSH EBP                            ; 004f4553
    SUB ESP,0x204                       ; 004f4554
    MOV EAX,dword ptr [ESP + 0x218]     ; 004f455a
    PUSH 0x5e56eb                       ; 004f4561 | = "rt"
    MOV EDX,dword ptr [ESP + 0x228]     ; 004f4566
    XOR EBX,EBX                         ; 004f456d
    PUSH EDX                            ; 004f456f
    XOR EBP,EBP                         ; 004f4570
    MOV dword ptr [EAX],0x1             ; 004f4572
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004f4578
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 004f457d
    MOV EDI,EAX                         ; 004f4580
    TEST EAX,EAX                        ; 004f4582
    JZ 0x004f469e                       ; 004f4584
        ;   XREF to: 004f469e (CONDITIONAL_JUMP)  ; LAB_004f469e
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004f458a
        ;   Label: LAB_004f458a
    PUSH EAX                            ; 004f4591
    PUSH 0x5e5735                       ; 004f4592 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004f4597
    PUSH EAX                            ; 004f459e
    CALL crt_unknown.c_FUN_005bfb40     ; 004f459f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004f45a4
    TEST EBP,EBP                        ; 004f45a7
        ;   Label: LAB_004f45a7
    JNZ 0x004f45b5                      ; 004f45a9
        ;   XREF to: 004f45b5 (CONDITIONAL_JUMP)  ; LAB_004f45b5
    TEST byte ptr [EDI + 0xc],0x10      ; 004f45ab
    JZ 0x004f46c6                       ; 004f45af
        ;   XREF to: 004f46c6 (CONDITIONAL_JUMP)  ; LAB_004f46c6
    TEST EBP,EBP                        ; 004f45b5
        ;   Label: LAB_004f45b5
    JZ 0x004f4680                       ; 004f45b7
        ;   XREF to: 004f4680 (CONDITIONAL_JUMP)  ; LAB_004f4680
    MOV DL,byte ptr [EDI + 0xc]         ; 004f45bd
        ;   Label: LAB_004f45bd
    XOR EBP,EBP                         ; 004f45c0
    TEST DL,0x10                        ; 004f45c2
    JNZ 0x004f4680                      ; 004f45c5
        ;   XREF to: 004f4680 (CONDITIONAL_JUMP)  ; LAB_004f4680
        ;   Label: LAB_004f45c5
    PUSH EDI                            ; 004f45cb
    PUSH 0xff                           ; 004f45cc
    LEA EAX,[ESP + 0x8]                 ; 004f45d1
    PUSH EAX                            ; 004f45d5
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004f45d6
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004f45db
    TEST EAX,EAX                        ; 004f45de
    JZ 0x004f4680                       ; 004f45e0
        ;   XREF to: 004f4680 (CONDITIONAL_JUMP)  ; LAB_004f4680
    MOV DL,0xa                          ; 004f45e6
    MOV ESI,ESP                         ; 004f45e8
    MOV AL,byte ptr [ESI]               ; 004f45ea
        ;   Label: LAB_004f45ea
    CMP AL,DL                           ; 004f45ec
    JZ 0x004f4602                       ; 004f45ee
        ;   XREF to: 004f4602 (CONDITIONAL_JUMP)  ; LAB_004f4602
    CMP AL,0x0                          ; 004f45f0
    JZ 0x004f4600                       ; 004f45f2
        ;   XREF to: 004f4600 (CONDITIONAL_JUMP)  ; LAB_004f4600
    INC ESI                             ; 004f45f4
    MOV AL,byte ptr [ESI]               ; 004f45f5
    CMP AL,DL                           ; 004f45f7
    JZ 0x004f4602                       ; 004f45f9
        ;   XREF to: 004f4602 (CONDITIONAL_JUMP)  ; LAB_004f4602
    INC ESI                             ; 004f45fb
    CMP AL,0x0                          ; 004f45fc
    JNZ 0x004f45ea                      ; 004f45fe
        ;   XREF to: 004f45ea (CONDITIONAL_JUMP)  ; LAB_004f45ea
    SUB ESI,ESI                         ; 004f4600
        ;   Label: LAB_004f4600
    TEST ESI,ESI                        ; 004f4602
        ;   Label: LAB_004f4602
    JZ 0x004f4609                       ; 004f4604
        ;   XREF to: 004f4609 (CONDITIONAL_JUMP)  ; LAB_004f4609
    MOV byte ptr [ESI],0x0              ; 004f4606
    MOV DL,0x3d                         ; 004f4609
        ;   Label: LAB_004f4609
    MOV ESI,ESP                         ; 004f460b
    MOV AL,byte ptr [ESI]               ; 004f460d
        ;   Label: LAB_004f460d
    CMP AL,DL                           ; 004f460f
    JZ 0x004f4625                       ; 004f4611
        ;   XREF to: 004f4625 (CONDITIONAL_JUMP)  ; LAB_004f4625
    CMP AL,0x0                          ; 004f4613
    JZ 0x004f4623                       ; 004f4615
        ;   XREF to: 004f4623 (CONDITIONAL_JUMP)  ; LAB_004f4623
    INC ESI                             ; 004f4617
    MOV AL,byte ptr [ESI]               ; 004f4618
    CMP AL,DL                           ; 004f461a
    JZ 0x004f4625                       ; 004f461c
        ;   XREF to: 004f4625 (CONDITIONAL_JUMP)  ; LAB_004f4625
    INC ESI                             ; 004f461e
    CMP AL,0x0                          ; 004f461f
    JNZ 0x004f460d                      ; 004f4621
        ;   XREF to: 004f460d (CONDITIONAL_JUMP)  ; LAB_004f460d
    SUB ESI,ESI                         ; 004f4623
        ;   Label: LAB_004f4623
    MOV dword ptr [ESP + 0x200],ESI     ; 004f4625
        ;   Label: LAB_004f4625
    TEST ESI,ESI                        ; 004f462c
    JZ 0x004f4633                       ; 004f462e
        ;   XREF to: 004f4633 (CONDITIONAL_JUMP)  ; LAB_004f4633
    MOV byte ptr [ESI],0x0              ; 004f4630
    MOV EDX,dword ptr [ESP + 0x220]     ; 004f4633
        ;   Label: LAB_004f4633
    PUSH EDX                            ; 004f463a
    LEA EAX,[ESP + 0x4]                 ; 004f463b
    PUSH EAX                            ; 004f463f
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f4640
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f4645
    TEST EAX,EAX                        ; 004f4648
    JNZ 0x004f4704                      ; 004f464a
        ;   XREF to: 004f4704 (CONDITIONAL_JUMP)  ; LAB_004f4704
    MOV EBP,0x1                         ; 004f4650
    MOV ECX,dword ptr [ESP + 0x228]     ; 004f4655
    MOV EAX,dword ptr [ESP + 0x200]     ; 004f465c
    PUSH ECX                            ; 004f4663
    ADD EAX,EBP                         ; 004f4664
    PUSH EAX                            ; 004f4666
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f4667
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f466c
    TEST EAX,EAX                        ; 004f466f
    JNZ 0x004f4680                      ; 004f4671
        ;   XREF to: 004f4680 (CONDITIONAL_JUMP)  ; LAB_004f4680
    MOV EAX,dword ptr [ESP + 0x218]     ; 004f4673
    MOV dword ptr [EAX],0x0             ; 004f467a
    PUSH EDI                            ; 004f4680
        ;   Label: LAB_004f4680
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004f4681
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004f4686
    TEST EBP,EBP                        ; 004f4689
    JZ 0x004f4710                       ; 004f468b
        ;   XREF to: 004f4710 (CONDITIONAL_JUMP)  ; LAB_004f4710
    MOV EAX,EBX                         ; 004f4691
    ADD ESP,0x204                       ; 004f4693
    POP EBP                             ; 004f4699
    POP EDI                             ; 004f469a
    POP ESI                             ; 004f469b
    POP EBX                             ; 004f469c
    RET                                 ; 004f469d
    MOV ECX,0x5e56ee                    ; 004f469e | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004f469e
    MOV ESI,0xfd                        ; 004f46a3
    PUSH 0x5e5700                       ; 004f46a8 | = "cIni::FindLineNumberOfVariable: Unabl..."
    MOV dword ptr [0x01d1d400],ECX      ; 004f46ad | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004f46b3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f46b9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f46be
    JMP 0x004f458a                      ; 004f46c1
        ;   XREF to: 004f458a (UNCONDITIONAL_JUMP)  ; LAB_004f458a
    PUSH EDI                            ; 004f46c6
        ;   Label: LAB_004f46c6
    PUSH 0xff                           ; 004f46c7
    LEA EAX,[ESP + 0x8]                 ; 004f46cc
    PUSH EAX                            ; 004f46d0
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004f46d1
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004f46d6
    TEST EAX,EAX                        ; 004f46d9
    JZ 0x004f45b5                       ; 004f46db
        ;   XREF to: 004f45b5 (CONDITIONAL_JUMP)  ; LAB_004f45b5
    LEA EAX,[ESP + 0x100]               ; 004f46e1
    PUSH EAX                            ; 004f46e8
    LEA EAX,[ESP + 0x4]                 ; 004f46e9
    PUSH EAX                            ; 004f46ed
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f46ee
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f46f3
    TEST EAX,EAX                        ; 004f46f6
    JZ 0x004f45bd                       ; 004f46f8
        ;   XREF to: 004f45bd (CONDITIONAL_JUMP)  ; LAB_004f45bd
    INC EBX                             ; 004f46fe
    JMP 0x004f45a7                      ; 004f46ff
        ;   XREF to: 004f45a7 (UNCONDITIONAL_JUMP)  ; LAB_004f45a7
    MOV DH,byte ptr [EDI + 0xc]         ; 004f4704
        ;   Label: LAB_004f4704
    INC EBX                             ; 004f4707
    TEST DH,0x10                        ; 004f4708
    JMP 0x004f45c5                      ; 004f470b
        ;   XREF to: 004f45c5 (UNCONDITIONAL_JUMP)  ; LAB_004f45c5
    XOR EBX,EBX                         ; 004f4710
        ;   Label: LAB_004f4710
    MOV EAX,EBX                         ; 004f4712
    ADD ESP,0x204                       ; 004f4714
    POP EBP                             ; 004f471a
    POP EDI                             ; 004f471b
    POP ESI                             ; 004f471c
    POP EBX                             ; 004f471d
    RET                                 ; 004f471e

