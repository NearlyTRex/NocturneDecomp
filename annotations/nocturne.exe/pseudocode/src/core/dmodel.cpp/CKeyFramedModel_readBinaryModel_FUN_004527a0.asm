; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0(CKeyFramedModel *this_ptr,_FILE *file)
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
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 at 0045278d
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057c9cc
;   TerminatedCString s_Error_reading_keyframed_0057c9df
;   TerminatedCString s_core_dmodel_cpp_0057ca02
;   TerminatedCString s_KFM_file_is_invalid_vers_0057ca15
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004527a0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0
    PUSH ESI                            ; 004527a1
    PUSH EDI                            ; 004527a2
    PUSH EBP                            ; 004527a3
    SUB ESP,0x1c                        ; 004527a4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004527a7
    MOV ESI,dword ptr [ESP + 0x34]      ; 004527ab
    PUSH ESI                            ; 004527af
    PUSH 0x1                            ; 004527b0
    PUSH 0x18                           ; 004527b2
    LEA EAX,[ESP + 0xc]                 ; 004527b4
    PUSH EAX                            ; 004527b8
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004527b9
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004527be
    CMP EAX,0x1                         ; 004527c1
    JNZ 0x00452819                      ; 004527c4
        ;   XREF to: 00452819 (CONDITIONAL_JUMP)  ; LAB_00452819
    MOV EDI,dword ptr [ESP]             ; 004527c6
        ;   Label: LAB_004527c6
    CMP EDI,0x3                         ; 004527c9
    JGE 0x0045283e                      ; 004527cc
        ;   XREF to: 0045283e (CONDITIONAL_JUMP)  ; LAB_0045283e
    MOV ECX,dword ptr [ESP]             ; 004527ce
        ;   Label: LAB_004527ce
    PUSH ECX                            ; 004527d1
    MOV EAX,0x57ca02                    ; 004527d2 | = "..\\core\\dmodel.cpp"
    MOV EDX,0xed                        ; 004527d7
    PUSH 0x57ca15                       ; 004527dc | = "KFM file is invalid version %d"
    MOV [0x01cc4800],EAX                ; 004527e1 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004527e6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004527ec
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004527f1
    XOR EDI,EDI                         ; 004527f4
        ;   Label: LAB_004527f4
    MOV EBP,dword ptr [ESP]             ; 004527f6
    MOV dword ptr [ESP + 0x18],EDI      ; 004527f9
    CMP EBP,0x4                         ; 004527fd
    JL 0x00452845                       ; 00452800
        ;   XREF to: 00452845 (CONDITIONAL_JUMP)  ; LAB_00452845
    PUSH ESI                            ; 00452802
    PUSH 0x1                            ; 00452803
    PUSH 0x4                            ; 00452805
    LEA EAX,[ESP + 0x24]                ; 00452807
    PUSH EAX                            ; 0045280b
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0045280c
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00452811
    CMP EAX,0x1                         ; 00452814
    JZ 0x00452845                       ; 00452817
        ;   XREF to: 00452845 (CONDITIONAL_JUMP)  ; LAB_00452845
    MOV EDX,0x57c9cc                    ; 00452819 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00452819
    MOV ECX,0xe7                        ; 0045281e
    PUSH 0x57c9df                       ; 00452823 | = "Error reading keyframed model file"
    MOV dword ptr [0x01cc4800],EDX      ; 00452828 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0045282e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00452834
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00452839
    JMP 0x004527c6                      ; 0045283c
        ;   XREF to: 004527c6 (UNCONDITIONAL_JUMP)  ; LAB_004527c6
    CMP EDI,0x4                         ; 0045283e
        ;   Label: LAB_0045283e
    JG 0x004527ce                       ; 00452841
        ;   XREF to: 004527ce (CONDITIONAL_JUMP)  ; LAB_004527ce
    JMP 0x004527f4                      ; 00452843
        ;   XREF to: 004527f4 (UNCONDITIONAL_JUMP)  ; LAB_004527f4
    MOV EAX,dword ptr [ESP + 0x14]      ; 00452845
        ;   Label: LAB_00452845
    PUSH EAX                            ; 00452849
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045284a
    PUSH EDX                            ; 0045284e
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045284f
    PUSH ECX                            ; 00452853
    MOV EDI,dword ptr [ESP + 0x14]      ; 00452854
    PUSH EDI                            ; 00452858
    MOV EBP,dword ptr [ESP + 0x14]      ; 00452859
    PUSH EBP                            ; 0045285d
    PUSH EBX                            ; 0045285e
    CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0 ; 0045285f
        ;   XREF to: 004533e0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0()
    MOV EDI,dword ptr [EBX + 0x104]     ; 00452864
    IMUL EDI,dword ptr [EBX + 0x100]    ; 0045286a
    ADD ESP,0x18                        ; 00452871
    LEA EAX,[EDI*0x4 + 0x0]             ; 00452874
    PUSH ESI                            ; 0045287b
    SUB EAX,EDI                         ; 0045287c
    PUSH 0x1                            ; 0045287e
    SHL EAX,0x2                         ; 00452880
    PUSH EAX                            ; 00452883
    MOV ECX,dword ptr [EBX + 0x10c]     ; 00452884
    PUSH ECX                            ; 0045288a
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0045288b
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00452890
    CMP EAX,0x1                         ; 00452893
    JNZ 0x00452819                      ; 00452896
        ;   XREF to: 00452819 (CONDITIONAL_JUMP)  ; LAB_00452819
    MOV EDI,dword ptr [EBX + 0x110]     ; 00452898
    TEST EDI,EDI                        ; 0045289e
    JLE 0x004528ed                      ; 004528a0
        ;   XREF to: 004528ed (CONDITIONAL_JUMP)  ; LAB_004528ed
    PUSH ESI                            ; 004528a2
    PUSH EAX                            ; 004528a3
    LEA EAX,[EDI*0x8 + 0x0]             ; 004528a4
    ADD EAX,EDI                         ; 004528ab
    SHL EAX,0x3                         ; 004528ad
    PUSH EAX                            ; 004528b0
    MOV EBP,dword ptr [EBX + 0x114]     ; 004528b1
    PUSH EBP                            ; 004528b7
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004528b8
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004528bd
    CMP EAX,0x1                         ; 004528c0
    JNZ 0x00452819                      ; 004528c3
        ;   XREF to: 00452819 (CONDITIONAL_JUMP)  ; LAB_00452819
    PUSH ESI                            ; 004528c9
    PUSH EAX                            ; 004528ca
    MOV EAX,dword ptr [EBX + 0x110]     ; 004528cb
    SHL EAX,0x2                         ; 004528d1
    PUSH EAX                            ; 004528d4
    MOV EAX,dword ptr [EBX + 0x118]     ; 004528d5
    PUSH EAX                            ; 004528db
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004528dc
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004528e1
    CMP EAX,0x1                         ; 004528e4
    JNZ 0x00452819                      ; 004528e7
        ;   XREF to: 00452819 (CONDITIONAL_JUMP)  ; LAB_00452819
    CMP dword ptr [EBX + 0x120],0x0     ; 004528ed
        ;   Label: LAB_004528ed
    JLE 0x00452945                      ; 004528f4
        ;   XREF to: 00452945 (CONDITIONAL_JUMP)  ; LAB_00452945
    PUSH 0x120                          ; 004528f6
    PUSH 0x0                            ; 004528fb
    LEA EAX,[EBX + 0x124]               ; 004528fd
    PUSH EAX                            ; 00452903
    XOR EDI,EDI                         ; 00452904
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00452906
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0045290b
    CMP EDI,dword ptr [EBX + 0x120]     ; 0045290e
        ;   Label: LAB_0045290e
    JGE 0x00452945                      ; 00452914
        ;   XREF to: 00452945 (CONDITIONAL_JUMP)  ; LAB_00452945
    PUSH ESI                            ; 00452916
    LEA EAX,[EDI*0x8 + 0x0]             ; 00452917
    LEA EDX,[EBX + 0x124]               ; 0045291e
    ADD EAX,EDI                         ; 00452924
    PUSH 0x1                            ; 00452926
    SHL EAX,0x3                         ; 00452928
    PUSH 0x18                           ; 0045292b
    ADD EAX,EDX                         ; 0045292d
    PUSH EAX                            ; 0045292f
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00452930
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00452935
    CMP EAX,0x1                         ; 00452938
    JNZ 0x00452819                      ; 0045293b
        ;   XREF to: 00452819 (CONDITIONAL_JUMP)  ; LAB_00452819
    ADD EDI,EAX                         ; 00452941
    JMP 0x0045290e                      ; 00452943
        ;   XREF to: 0045290e (UNCONDITIONAL_JUMP)  ; LAB_0045290e
    PUSH ESI                            ; 00452945
        ;   Label: LAB_00452945
    MOV EAX,dword ptr [EBX + 0x244]     ; 00452946
    PUSH 0x1                            ; 0045294c
    SHL EAX,0x3                         ; 0045294e
    PUSH EAX                            ; 00452951
    LEA EAX,[EBX + 0x248]               ; 00452952
    PUSH EAX                            ; 00452958
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00452959
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045295e
    CMP EAX,0x1                         ; 00452961
    JNZ 0x00452819                      ; 00452964
        ;   XREF to: 00452819 (CONDITIONAL_JUMP)  ; LAB_00452819
    CMP dword ptr [ESP + 0x18],0x0      ; 0045296a
    JNZ 0x00452979                      ; 0045296f
        ;   XREF to: 00452979 (CONDITIONAL_JUMP)  ; LAB_00452979
    ADD ESP,0x1c                        ; 00452971
    POP EBP                             ; 00452974
    POP EDI                             ; 00452975
    POP ESI                             ; 00452976
    POP EBX                             ; 00452977
    RET                                 ; 00452978
    PUSH EBX                            ; 00452979
        ;   Label: LAB_00452979
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0 ; 0045297a
        ;   XREF to: 00453ff0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0045297f
    ADD ESP,0x1c                        ; 00452982
    POP EBP                             ; 00452985
    POP EDI                             ; 00452986
    POP ESI                             ; 00452987
    POP EBX                             ; 00452988
    RET                                 ; 00452989

