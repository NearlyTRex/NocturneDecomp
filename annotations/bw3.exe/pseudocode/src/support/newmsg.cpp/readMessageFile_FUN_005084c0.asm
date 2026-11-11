; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_newmsg_cpp_readMessageFile_FUN_005084c0(char *message_file)
;
; Parameters:
; char *           Stack[0x4]:4   message_file
; Local Variables:
; undefined1       Stack[-0x31c]:1  local_31c
; undefined1       Stack[-0x31b]:1  local_31b
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4580
;
; Referenced Globals:
;   undefined4 DAT_005cb309
;   undefined4 DAT_005cb30a
;   undefined4 DAT_005cb30d
;   undefined4 DAT_005cb30e
;   undefined4 DAT_005cb312
;   TerminatedCString s_support_newmsg_cpp_005cb316
;   TerminatedCString s_Unknown_message_file_ver_005cb32c
;   TerminatedCString s_anon_005cb349
;   undefined4 DAT_005cb352
;   TerminatedCString s_anon_005cb354
;   TerminatedCString s_support_newmsg_cpp_005cb366
;   TerminatedCString s_Error_reading_s_005cb37c
;   TerminatedCString s_support_newmsg_cpp_005cb38d
;   TerminatedCString s_Too_many_messages_in_s_005cb3a3
;   TerminatedCString s_support_newmsg_cpp_005cb3bb
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_stdio.c_ftell_FUN_005a5d00
;   crt_string.c__strcmp_FUN_005a3d00
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005084c0
        ;   Label: support_newmsg.cpp_readMessageFile_FUN_005084c0
    PUSH ESI                            ; 005084c1
    PUSH EDI                            ; 005084c2
    PUSH EBP                            ; 005084c3
    SUB ESP,0x30c                       ; 005084c4
    MOV EBP,dword ptr [ESP + 0x320]     ; 005084ca
    PUSH EBP                            ; 005084d1
    XOR EDX,EDX                         ; 005084d2
    PUSH 0x5cb309                       ; 005084d4 | DAT_005cb309
    MOV dword ptr [ESP + 0x308],EDX     ; 005084d9
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 005084e0
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    MOV EDI,EAX                         ; 005084e5
    ADD ESP,0x8                         ; 005084e7
    TEST EAX,EAX                        ; 005084ea
    JG 0x005084f9                       ; 005084ec
        ;   XREF to: 005084f9 (CONDITIONAL_JUMP)  ; LAB_005084f9
    ADD ESP,0x30c                       ; 005084ee
        ;   Label: LAB_005084ee
    POP EBP                             ; 005084f4
    POP EDI                             ; 005084f5
    POP ESI                             ; 005084f6
    POP EBX                             ; 005084f7
    RET                                 ; 005084f8
    PUSH 0x5cb30a                       ; 005084f9 | DAT_005cb30a
        ;   Label: LAB_005084f9
    PUSH EBP                            ; 005084fe
    PUSH 0x5cb30d                       ; 005084ff | DAT_005cb30d
    CALL engine_dosio.cpp_FUN_004659c0  ; 00508504
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 00508509
    ADD ESP,0xc                         ; 0050850b
    MOV EBX,EAX                         ; 0050850e
    TEST EAX,EAX                        ; 00508510
    JZ 0x005084ee                       ; 00508512
        ;   XREF to: 005084ee (CONDITIONAL_JUMP)  ; LAB_005084ee
    PUSH EAX                            ; 00508514
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 00508515
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 0050851a
    PUSH ESI                            ; 0050851d
    PUSH 0xff                           ; 0050851e
    ADD EDI,EAX                         ; 00508523
    LEA EAX,[ESP + 0x108]               ; 00508525
    PUSH EAX                            ; 0050852c
    MOV dword ptr [ESP + 0x310],EDI     ; 0050852d
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00508534
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00508539
    LEA EAX,[ESP + 0x300]               ; 0050853c
    PUSH EAX                            ; 00508543
    PUSH 0x5cb30e                       ; 00508544 | DAT_005cb30e
    PUSH ESI                            ; 00508549
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0050854a
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0050854f
    PUSH ESI                            ; 00508552
    PUSH 0xff                           ; 00508553
    LEA EAX,[ESP + 0x108]               ; 00508558
    PUSH EAX                            ; 0050855f
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00508560
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00508565
    PUSH 0x1dd4890                      ; 00508568 | DAT_01dd4890
    PUSH 0x5cb312                       ; 0050856d | DAT_005cb312
    PUSH ESI                            ; 00508572
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00508573
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00508578
    CMP dword ptr [ESP + 0x300],0x0     ; 0050857b
    JNZ 0x005086c0                      ; 00508583
        ;   XREF to: 005086c0 (CONDITIONAL_JUMP)  ; LAB_005086c0
    PUSH EBX                            ; 00508589
        ;   Label: LAB_00508589
    PUSH 0xff                           ; 0050858a
    LEA EAX,[ESP + 0x108]               ; 0050858f
    PUSH EAX                            ; 00508596
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00508597
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0050859c
    PUSH 0x6034c0                       ; 0050859f | DAT_006034c0
    PUSH 0x5cb349                       ; 005085a4 | = "\"%[^\"]\"\n"
    PUSH EBX                            ; 005085a9
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005085aa
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005085af
    PUSH 0x5cb352                       ; 005085b2 | DAT_005cb352
        ;   Label: LAB_005085b2
    PUSH EBX                            ; 005085b7
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005085b8
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 005085bd
    PUSH EBX                            ; 005085c0
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 005085c1
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 005085c6
    CMP EAX,dword ptr [ESP + 0x304]     ; 005085c9
    JL 0x005086e8                       ; 005085d0
        ;   XREF to: 005086e8 (CONDITIONAL_JUMP)  ; LAB_005086e8
    PUSH EBX                            ; 005085d6
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 005085d7
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EDI,dword ptr [0x01dd4898]      ; 005085dc | DAT_01dd4898
    ADD ESP,0x4                         ; 005085e2
    TEST EDI,EDI                        ; 005085e5
    JLE 0x00508620                      ; 005085e7
        ;   XREF to: 00508620 (CONDITIONAL_JUMP)  ; LAB_00508620
    LEA EBP,[EDI*0x4 + 0x0]             ; 005085e9
    XOR EAX,EAX                         ; 005085f0
    ADD EAX,0x4                         ; 005085f2
        ;   Label: LAB_005085f2
    MOV EDX,dword ptr [EAX + 0x1dd5838] ; 005085f5
    MOV dword ptr [EAX + 0x1dd4898],EDX ; 005085fb | DAT_01dd48a0
    MOV EDX,dword ptr [EAX + 0x1dd6008] ; 00508601
    MOV dword ptr [EAX + 0x1dd5068],EDX ; 00508607 | DAT_01dd5070
    CMP EAX,EBP                         ; 0050860d
    JL 0x005085f2                       ; 0050860f
        ;   XREF to: 005085f2 (CONDITIONAL_JUMP)  ; LAB_005085f2
    LEA EAX,[EAX]                       ; 00508611
    LEA EDX,[EDX]                       ; 00508617
    LEA EAX,[EAX]                       ; 0050861d
    XOR EBP,EBP                         ; 00508620
        ;   Label: LAB_00508620
    MOV dword ptr [ESP + 0x308],EBP     ; 00508622
    MOV EAX,[0x01dd4898]                ; 00508629 | DAT_01dd4898
        ;   Label: LAB_00508629
    DEC EAX                             ; 0050862e
    CMP EBP,EAX                         ; 0050862f
    JGE 0x00508867                      ; 00508631
        ;   XREF to: 00508867 (CONDITIONAL_JUMP)  ; LAB_00508867
    MOV ECX,dword ptr [0x01dd4898]      ; 00508637 | DAT_01dd4898
    LEA EDI,[EBP + 0x1]                 ; 0050863d
    CMP EDI,ECX                         ; 00508640
    JGE 0x005086a9                      ; 00508642
        ;   XREF to: 005086a9 (CONDITIONAL_JUMP)  ; LAB_005086a9
    MOV ESI,dword ptr [ESP + 0x308]     ; 00508644
    LEA EBX,[EDI*0x4 + 0x0]             ; 0050864b
    MOV ECX,dword ptr [EBX + 0x1dd489c] ; 00508652 | DAT_01dd48a0 | DAT_01dd48a4
        ;   Label: LAB_00508652
    PUSH ECX                            ; 00508658
    MOV EAX,dword ptr [ESI + 0x1dd489c] ; 00508659 | DAT_01dd48a0
    PUSH EAX                            ; 0050865f
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00508660
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00508665
    TEST EAX,EAX                        ; 00508668
    JLE 0x0050869c                      ; 0050866a
        ;   XREF to: 0050869c (CONDITIONAL_JUMP)  ; LAB_0050869c
    MOV EDX,dword ptr [EBX + 0x1dd489c] ; 0050866c | DAT_01dd48a0
    MOV EAX,dword ptr [ESI + 0x1dd489c] ; 00508672
    MOV dword ptr [ESI + 0x1dd489c],EDX ; 00508678
    MOV EDX,dword ptr [EBX + 0x1dd506c] ; 0050867e | DAT_01dd5070
    MOV dword ptr [EBX + 0x1dd489c],EAX ; 00508684 | DAT_01dd48a0
    MOV EAX,dword ptr [ESI + 0x1dd506c] ; 0050868a
    MOV dword ptr [ESI + 0x1dd506c],EDX ; 00508690
    MOV dword ptr [EBX + 0x1dd506c],EAX ; 00508696 | DAT_01dd5070
    MOV EAX,[0x01dd4898]                ; 0050869c | DAT_01dd4898
        ;   Label: LAB_0050869c
    INC EDI                             ; 005086a1
    ADD EBX,0x4                         ; 005086a2
    CMP EDI,EAX                         ; 005086a5
    JL 0x00508652                       ; 005086a7
        ;   XREF to: 00508652 (CONDITIONAL_JUMP)  ; LAB_00508652
    MOV EDX,dword ptr [ESP + 0x308]     ; 005086a9
        ;   Label: LAB_005086a9
    ADD EDX,0x4                         ; 005086b0
    INC EBP                             ; 005086b3
    MOV dword ptr [ESP + 0x308],EDX     ; 005086b4
    JMP 0x00508629                      ; 005086bb
        ;   XREF to: 00508629 (UNCONDITIONAL_JUMP)  ; LAB_00508629
    MOV ESI,0x5cb316                    ; 005086c0 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_005086c0
    MOV EDI,0x5b                        ; 005086c5
    PUSH 0x5cb32c                       ; 005086ca | = "Unknown message file version"
    MOV dword ptr [0x01d71de0],ESI      ; 005086cf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005086d5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005086db
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005086e0
    JMP 0x00508589                      ; 005086e3
        ;   XREF to: 00508589 (UNCONDITIONAL_JUMP)  ; LAB_00508589
    MOV EAX,ESP                         ; 005086e8
        ;   Label: LAB_005086e8
    PUSH EAX                            ; 005086ea
    LEA EAX,[ESP + 0x204]               ; 005086eb
    PUSH EAX                            ; 005086f2
    PUSH 0x5cb354                       ; 005086f3 | = "\"%[^\"]\", \"%[^\"]\"\n"
    PUSH EBX                            ; 005086f8
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005086f9
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 005086fe
    CMP EAX,0x2                         ; 00508701
    JZ 0x0050872a                       ; 00508704
        ;   XREF to: 0050872a (CONDITIONAL_JUMP)  ; LAB_0050872a
    PUSH EBP                            ; 00508706
    MOV ECX,0x5cb366                    ; 00508707 | = "..\\support\\newmsg.cpp"
    MOV ESI,0x6f                        ; 0050870c
    PUSH 0x5cb37c                       ; 00508711 | = "Error reading %s"
    MOV dword ptr [0x01d71de0],ECX      ; 00508716 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050871c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00508722
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00508727
    CMP dword ptr [0x01dd4898],0x1f4    ; 0050872a | DAT_01dd4898
        ;   Label: LAB_0050872a
    JL 0x00508759                       ; 00508734
        ;   XREF to: 00508759 (CONDITIONAL_JUMP)  ; LAB_00508759
    PUSH EBP                            ; 00508736
    MOV EAX,0x5cb38d                    ; 00508737 | = "..\\support\\newmsg.cpp"
    MOV EDX,0x74                        ; 0050873c
    PUSH 0x5cb3a3                       ; 00508741 | = "Too many messages in %s"
    MOV [0x01d71de0],EAX                ; 00508746 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0050874b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00508751
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00508756
    LEA EDI,[ESP + 0x200]               ; 00508759
        ;   Label: LAB_00508759
    SUB ECX,ECX                         ; 00508760
    DEC ECX                             ; 00508762
    XOR EAX,EAX                         ; 00508763
    SCASB.REPNE ES:EDI                  ; 00508765
    NOT ECX                             ; 00508767
    DEC ECX                             ; 00508769
    INC ECX                             ; 0050876a
    PUSH ECX                            ; 0050876b
    CALL crt_memory.c_malloc_FUN_005a3650 ; 0050876c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    MOV EDX,EAX                         ; 00508771
    MOV EAX,[0x01dd4898]                ; 00508773 | DAT_01dd4898
    ADD ESP,0x4                         ; 00508778
    MOV ECX,EDX                         ; 0050877b
    MOV dword ptr [EAX*0x4 + 0x1dd583c],EDX ; 0050877d
    TEST ECX,ECX                        ; 00508784
    JNZ 0x005087b3                      ; 00508786
        ;   XREF to: 005087b3 (CONDITIONAL_JUMP)  ; LAB_005087b3
    LEA EAX,[ESP + 0x200]               ; 00508788
    PUSH EAX                            ; 0050878f
    MOV ESI,0x5cb3bb                    ; 00508790 | = "..\\support\\newmsg.cpp"
    MOV EDI,0x77                        ; 00508795
    PUSH 0x5cb3d1                       ; 0050879a | = "Out of memory mallocing message tag : %s"
    MOV dword ptr [0x01d71de0],ESI      ; 0050879f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005087a5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005087ab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005087b0
    MOV EDI,ESP                         ; 005087b3
        ;   Label: LAB_005087b3
    SUB ECX,ECX                         ; 005087b5
    DEC ECX                             ; 005087b7
    XOR EAX,EAX                         ; 005087b8
    SCASB.REPNE ES:EDI                  ; 005087ba
    NOT ECX                             ; 005087bc
    DEC ECX                             ; 005087be
    INC ECX                             ; 005087bf
    PUSH ECX                            ; 005087c0
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005087c1
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    MOV EDX,dword ptr [0x01dd4898]      ; 005087c6 | DAT_01dd4898
    ADD ESP,0x4                         ; 005087cc
    MOV dword ptr [EDX*0x4 + 0x1dd600c],EAX ; 005087cf
    TEST EAX,EAX                        ; 005087d6
    JZ 0x0050883c                       ; 005087d8
        ;   XREF to: 0050883c (CONDITIONAL_JUMP)  ; LAB_0050883c
    MOV EDI,dword ptr [0x01dd4898]      ; 005087da | DAT_01dd4898
        ;   Label: LAB_005087da
    LEA ESI,[ESP + 0x200]               ; 005087e0
    MOV EDI,dword ptr [EDI*0x4 + 0x1dd583c] ; 005087e7
    PUSH EDI                            ; 005087ee
    MOV AL,byte ptr [ESI]               ; 005087ef
        ;   Label: LAB_005087ef
    MOV byte ptr [EDI],AL               ; 005087f1
    CMP AL,0x0                          ; 005087f3
    JZ 0x00508807                       ; 005087f5
        ;   XREF to: 00508807 (CONDITIONAL_JUMP)  ; LAB_00508807
    MOV AL,byte ptr [ESI + 0x1]         ; 005087f7
    ADD ESI,0x2                         ; 005087fa
    MOV byte ptr [EDI + 0x1],AL         ; 005087fd
    ADD EDI,0x2                         ; 00508800
    CMP AL,0x0                          ; 00508803
    JNZ 0x005087ef                      ; 00508805
        ;   XREF to: 005087ef (CONDITIONAL_JUMP)  ; LAB_005087ef
    POP EDI                             ; 00508807
        ;   Label: LAB_00508807
    MOV EDI,dword ptr [0x01dd4898]      ; 00508808 | DAT_01dd4898
    MOV ESI,ESP                         ; 0050880e
    MOV EDI,dword ptr [EDI*0x4 + 0x1dd600c] ; 00508810
    PUSH EDI                            ; 00508817
    MOV AL,byte ptr [ESI]               ; 00508818
        ;   Label: LAB_00508818
    MOV byte ptr [EDI],AL               ; 0050881a
    CMP AL,0x0                          ; 0050881c
    JZ 0x00508830                       ; 0050881e
        ;   XREF to: 00508830 (CONDITIONAL_JUMP)  ; LAB_00508830
    MOV AL,byte ptr [ESI + 0x1]         ; 00508820
    ADD ESI,0x2                         ; 00508823
    MOV byte ptr [EDI + 0x1],AL         ; 00508826
    ADD EDI,0x2                         ; 00508829
    CMP AL,0x0                          ; 0050882c
    JNZ 0x00508818                      ; 0050882e
        ;   XREF to: 00508818 (CONDITIONAL_JUMP)  ; LAB_00508818
    POP EDI                             ; 00508830
        ;   Label: LAB_00508830
    INC dword ptr [0x01dd4898]          ; 00508831 | DAT_01dd4898
    JMP 0x005085b2                      ; 00508837
        ;   XREF to: 005085b2 (UNCONDITIONAL_JUMP)  ; LAB_005085b2
    MOV EAX,ESP                         ; 0050883c
        ;   Label: LAB_0050883c
    PUSH EAX                            ; 0050883e
    MOV EDX,0x5cb3fa                    ; 0050883f | = "..\\support\\newmsg.cpp"
    MOV ECX,0x7a                        ; 00508844
    PUSH 0x5cb410                       ; 00508849 | = "Out of memory mallocing message tag : %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0050884e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00508854 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050885a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0050885f
    JMP 0x005087da                      ; 00508862
        ;   XREF to: 005087da (UNCONDITIONAL_JUMP)  ; LAB_005087da
    MOV dword ptr [0x01dd4894],0x1      ; 00508867 | DAT_01dd4894
        ;   Label: LAB_00508867
    ADD ESP,0x30c                       ; 00508871
    POP EBP                             ; 00508877
    POP EDI                             ; 00508878
    POP ESI                             ; 00508879
    POP EBX                             ; 0050887a
    RET                                 ; 0050887b

