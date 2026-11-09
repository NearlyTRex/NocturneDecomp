; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_FUN_004606a0(CKeyFramedModel *this_ptr,_FILE *file)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 at 0046068d
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bb63a
;   TerminatedCString s_Error_reading_keyframed_005bb64d
;   TerminatedCString s_core_dmodel_cpp_005bb670
;   TerminatedCString s_KFM_file_is_invalid_vers_005bb683
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0
;   core_dmodel.cpp_FUN_00461300
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdio.c_fread_FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004606a0
        ;   Label: core_dmodel.cpp_FUN_004606a0
    PUSH ESI                            ; 004606a1
    PUSH EDI                            ; 004606a2
    PUSH EBP                            ; 004606a3
    SUB ESP,0x1c                        ; 004606a4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004606a7
    MOV ESI,dword ptr [ESP + 0x34]      ; 004606ab
    PUSH ESI                            ; 004606af
    PUSH 0x1                            ; 004606b0
    PUSH 0x18                           ; 004606b2
    LEA EAX,[ESP + 0xc]                 ; 004606b4
    PUSH EAX                            ; 004606b8
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004606b9
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004606be
    CMP EAX,0x1                         ; 004606c1
    JNZ 0x00460719                      ; 004606c4
        ;   XREF to: 00460719 (CONDITIONAL_JUMP)  ; LAB_00460719
    MOV EDI,dword ptr [ESP]             ; 004606c6
        ;   Label: LAB_004606c6
    CMP EDI,0x3                         ; 004606c9
    JGE 0x0046073e                      ; 004606cc
        ;   XREF to: 0046073e (CONDITIONAL_JUMP)  ; LAB_0046073e
    MOV ECX,dword ptr [ESP]             ; 004606ce
        ;   Label: LAB_004606ce
    PUSH ECX                            ; 004606d1
    MOV EAX,0x5bb670                    ; 004606d2 | = "..\\core\\dmodel.cpp"
    MOV EDX,0xed                        ; 004606d7
    PUSH 0x5bb683                       ; 004606dc | = "KFM file is invalid version %d"
    MOV [0x01d71de0],EAX                ; 004606e1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004606e6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004606ec
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004606f1
    XOR EDI,EDI                         ; 004606f4
        ;   Label: LAB_004606f4
    MOV EBP,dword ptr [ESP]             ; 004606f6
    MOV dword ptr [ESP + 0x18],EDI      ; 004606f9
    CMP EBP,0x4                         ; 004606fd
    JL 0x00460745                       ; 00460700
        ;   XREF to: 00460745 (CONDITIONAL_JUMP)  ; LAB_00460745
    PUSH ESI                            ; 00460702
    PUSH 0x1                            ; 00460703
    PUSH 0x4                            ; 00460705
    LEA EAX,[ESP + 0x24]                ; 00460707
    PUSH EAX                            ; 0046070b
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0046070c
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00460711
    CMP EAX,0x1                         ; 00460714
    JZ 0x00460745                       ; 00460717
        ;   XREF to: 00460745 (CONDITIONAL_JUMP)  ; LAB_00460745
    MOV EDX,0x5bb63a                    ; 00460719 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00460719
    MOV ECX,0xe7                        ; 0046071e
    PUSH 0x5bb64d                       ; 00460723 | = "Error reading keyframed model file"
    MOV dword ptr [0x01d71de0],EDX      ; 00460728 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0046072e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00460734
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00460739
    JMP 0x004606c6                      ; 0046073c
        ;   XREF to: 004606c6 (UNCONDITIONAL_JUMP)  ; LAB_004606c6
    CMP EDI,0x4                         ; 0046073e
        ;   Label: LAB_0046073e
    JG 0x004606ce                       ; 00460741
        ;   XREF to: 004606ce (CONDITIONAL_JUMP)  ; LAB_004606ce
    JMP 0x004606f4                      ; 00460743
        ;   XREF to: 004606f4 (UNCONDITIONAL_JUMP)  ; LAB_004606f4
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460745
        ;   Label: LAB_00460745
    PUSH EAX                            ; 00460749
    MOV EDX,dword ptr [ESP + 0x14]      ; 0046074a
    PUSH EDX                            ; 0046074e
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046074f
    PUSH ECX                            ; 00460753
    MOV EDI,dword ptr [ESP + 0x14]      ; 00460754
    PUSH EDI                            ; 00460758
    MOV EBP,dword ptr [ESP + 0x14]      ; 00460759
    PUSH EBP                            ; 0046075d
    PUSH EBX                            ; 0046075e
    CALL core_dmodel.cpp_FUN_00461300   ; 0046075f
        ;   XREF to: 00461300 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00461300()
    MOV EDI,dword ptr [EBX + 0x104]     ; 00460764
    IMUL EDI,dword ptr [EBX + 0x100]    ; 0046076a
    ADD ESP,0x18                        ; 00460771
    LEA EAX,[EDI*0x4 + 0x0]             ; 00460774
    PUSH ESI                            ; 0046077b
    SUB EAX,EDI                         ; 0046077c
    PUSH 0x1                            ; 0046077e
    SHL EAX,0x2                         ; 00460780
    PUSH EAX                            ; 00460783
    MOV ECX,dword ptr [EBX + 0x10c]     ; 00460784
    PUSH ECX                            ; 0046078a
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0046078b
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00460790
    CMP EAX,0x1                         ; 00460793
    JNZ 0x00460719                      ; 00460796
        ;   XREF to: 00460719 (CONDITIONAL_JUMP)  ; LAB_00460719
    MOV EDI,dword ptr [EBX + 0x110]     ; 00460798
    TEST EDI,EDI                        ; 0046079e
    JLE 0x004607ed                      ; 004607a0
        ;   XREF to: 004607ed (CONDITIONAL_JUMP)  ; LAB_004607ed
    PUSH ESI                            ; 004607a2
    PUSH EAX                            ; 004607a3
    LEA EAX,[EDI*0x8 + 0x0]             ; 004607a4
    ADD EAX,EDI                         ; 004607ab
    SHL EAX,0x3                         ; 004607ad
    PUSH EAX                            ; 004607b0
    MOV EBP,dword ptr [EBX + 0x114]     ; 004607b1
    PUSH EBP                            ; 004607b7
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004607b8
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004607bd
    CMP EAX,0x1                         ; 004607c0
    JNZ 0x00460719                      ; 004607c3
        ;   XREF to: 00460719 (CONDITIONAL_JUMP)  ; LAB_00460719
    PUSH ESI                            ; 004607c9
    PUSH EAX                            ; 004607ca
    MOV EAX,dword ptr [EBX + 0x110]     ; 004607cb
    SHL EAX,0x2                         ; 004607d1
    PUSH EAX                            ; 004607d4
    MOV EAX,dword ptr [EBX + 0x118]     ; 004607d5
    PUSH EAX                            ; 004607db
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004607dc
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004607e1
    CMP EAX,0x1                         ; 004607e4
    JNZ 0x00460719                      ; 004607e7
        ;   XREF to: 00460719 (CONDITIONAL_JUMP)  ; LAB_00460719
    CMP dword ptr [EBX + 0x120],0x0     ; 004607ed
        ;   Label: LAB_004607ed
    JLE 0x00460845                      ; 004607f4
        ;   XREF to: 00460845 (CONDITIONAL_JUMP)  ; LAB_00460845
    PUSH 0x120                          ; 004607f6
    PUSH 0x0                            ; 004607fb
    LEA EAX,[EBX + 0x124]               ; 004607fd
    PUSH EAX                            ; 00460803
    XOR EDI,EDI                         ; 00460804
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00460806
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046080b
    CMP EDI,dword ptr [EBX + 0x120]     ; 0046080e
        ;   Label: LAB_0046080e
    JGE 0x00460845                      ; 00460814
        ;   XREF to: 00460845 (CONDITIONAL_JUMP)  ; LAB_00460845
    PUSH ESI                            ; 00460816
    LEA EAX,[EDI*0x8 + 0x0]             ; 00460817
    LEA EDX,[EBX + 0x124]               ; 0046081e
    ADD EAX,EDI                         ; 00460824
    PUSH 0x1                            ; 00460826
    SHL EAX,0x3                         ; 00460828
    PUSH 0x18                           ; 0046082b
    ADD EAX,EDX                         ; 0046082d
    PUSH EAX                            ; 0046082f
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00460830
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00460835
    CMP EAX,0x1                         ; 00460838
    JNZ 0x00460719                      ; 0046083b
        ;   XREF to: 00460719 (CONDITIONAL_JUMP)  ; LAB_00460719
    ADD EDI,EAX                         ; 00460841
    JMP 0x0046080e                      ; 00460843
        ;   XREF to: 0046080e (UNCONDITIONAL_JUMP)  ; LAB_0046080e
    PUSH ESI                            ; 00460845
        ;   Label: LAB_00460845
    MOV EAX,dword ptr [EBX + 0x244]     ; 00460846
    PUSH 0x1                            ; 0046084c
    SHL EAX,0x3                         ; 0046084e
    PUSH EAX                            ; 00460851
    LEA EAX,[EBX + 0x248]               ; 00460852
    PUSH EAX                            ; 00460858
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00460859
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0046085e
    CMP EAX,0x1                         ; 00460861
    JNZ 0x00460719                      ; 00460864
        ;   XREF to: 00460719 (CONDITIONAL_JUMP)  ; LAB_00460719
    CMP dword ptr [ESP + 0x18],0x0      ; 0046086a
    JNZ 0x00460879                      ; 0046086f
        ;   XREF to: 00460879 (CONDITIONAL_JUMP)  ; LAB_00460879
    ADD ESP,0x1c                        ; 00460871
    POP EBP                             ; 00460874
    POP EDI                             ; 00460875
    POP ESI                             ; 00460876
    POP EBX                             ; 00460877
    RET                                 ; 00460878
    PUSH EBX                            ; 00460879
        ;   Label: LAB_00460879
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0 ; 0046087a
        ;   XREF to: 00461fe0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0046087f
    ADD ESP,0x1c                        ; 00460882
    POP EBP                             ; 00460885
    POP EDI                             ; 00460886
    POP ESI                             ; 00460887
    POP EBX                             ; 00460888
    RET                                 ; 00460889

