; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dmodel.cpp_FUN_004606a0 at 0046087a
;   core_dmodel.cpp_FUN_00460890 at 00460df2
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bba75
;   TerminatedCString s_CKeyFramedModel_buildCol_005bba88
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_dmodel.cpp_FUN_004620c0
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461fe0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0
    PUSH EBP                            ; 00461fe1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00461fe2
    MOV EDX,dword ptr [EBX + 0x358]     ; 00461fe6
    PUSH EDX                            ; 00461fec
    CALL crt_unknown.c_FUN_005a30b6     ; 00461fed
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX + 0x358],0x0     ; 00461ff2
    ADD ESP,0x4                         ; 00461ffc
    MOV ECX,dword ptr [EBX + 0x110]     ; 00461fff
    MOV dword ptr [EBX + 0x354],0x0     ; 00462005
    CMP ECX,0x1                         ; 0046200f
    JL 0x004620ba                       ; 00462012
        ;   XREF to: 004620ba (CONDITIONAL_JUMP)  ; LAB_004620ba
    CMP dword ptr [EBX + 0x100],0x1     ; 00462018
    JL 0x004620ba                       ; 0046201f
        ;   XREF to: 004620ba (CONDITIONAL_JUMP)  ; LAB_004620ba
    XOR EAX,EAX                         ; 00462025
    TEST ECX,ECX                        ; 00462027
    JLE 0x00462060                      ; 00462029
        ;   XREF to: 00462060 (CONDITIONAL_JUMP)  ; LAB_00462060
    XOR EDX,EDX                         ; 0046202b
    ADD EDX,0x48                        ; 0046202d
        ;   Label: LAB_0046202d
    MOV ECX,dword ptr [EBX + 0x114]     ; 00462030
    MOV ECX,dword ptr [ECX + EDX*0x1 + -0x44] ; 00462036
    MOV EBP,dword ptr [EBX + 0x354]     ; 0046203a
    SUB ECX,0x2                         ; 00462040
    INC EAX                             ; 00462043
    ADD EBP,ECX                         ; 00462044
    MOV ECX,dword ptr [EBX + 0x110]     ; 00462046
    MOV dword ptr [EBX + 0x354],EBP     ; 0046204c
    CMP EAX,ECX                         ; 00462052
    JL 0x0046202d                       ; 00462054
        ;   XREF to: 0046202d (CONDITIONAL_JUMP)  ; LAB_0046202d
    LEA EAX,[EAX]                       ; 00462056
    LEA EDX,[EDX]                       ; 0046205c
    MOV EAX,dword ptr [EBX + 0x100]     ; 00462060
        ;   Label: LAB_00462060
    IMUL EAX,dword ptr [EBX + 0x354]    ; 00462066
    SHL EAX,0x3                         ; 0046206d
    MOV EDX,EAX                         ; 00462070
    SHL EAX,0x3                         ; 00462072
    SUB EAX,EDX                         ; 00462075
    PUSH EAX                            ; 00462077
    CALL crt_unknown.c_FUN_005a40df     ; 00462078
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 0046207d
    MOV dword ptr [EBX + 0x358],EAX     ; 00462080
    TEST EAX,EAX                        ; 00462086
    JNZ 0x004620ac                      ; 00462088
        ;   XREF to: 004620ac (CONDITIONAL_JUMP)  ; LAB_004620ac
    MOV EBP,0x5bba75                    ; 0046208a | = "..\\core\\dmodel.cpp"
    MOV EAX,0x470                       ; 0046208f
    PUSH 0x5bba88                       ; 00462094 | = "CKeyFramedModel::buildCollisionTriLis..."
    MOV dword ptr [0x01d71de0],EBP      ; 00462099 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0046209f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004620a4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004620a9
    PUSH 0x2cfd900                      ; 004620ac | DAT_02cfd900
        ;   Label: LAB_004620ac
    PUSH EBX                            ; 004620b1
    CALL core_dmodel.cpp_FUN_004620c0   ; 004620b2
        ;   XREF to: 004620c0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_004620c0()
    ADD ESP,0x8                         ; 004620b7
    POP EBP                             ; 004620ba
        ;   Label: LAB_004620ba
    POP EBX                             ; 004620bb
    RET                                 ; 004620bc

