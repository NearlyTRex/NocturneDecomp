; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_FUN_00447830(CCurtain *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9a81
;   undefined4 DAT_005b9a89
;   undefined4 DAT_005b9a91
;   undefined4 DAT_005b9a99
;   undefined4 DAT_005b9aa1
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_007f8fcc
;
; Called Functions:
;   core_curtain.cpp_FUN_00446c60
;   core_curtain.cpp_FUN_00446d50
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447830
        ;   Label: core_curtain.cpp_FUN_00447830
    PUSH ESI                            ; 00447831
    PUSH EDI                            ; 00447832
    PUSH EBP                            ; 00447833
    MOV EBP,ESP                         ; 00447834
    SUB ESP,0x120                       ; 00447836
    AND ESP,0xfffffff8                  ; 0044783c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044783f
    CMP dword ptr [EAX + 0x65b30],0x0   ; 00447842
    JNZ 0x00447858                      ; 00447849
        ;   XREF to: 00447858 (CONDITIONAL_JUMP)  ; LAB_00447858
    CMP dword ptr [EAX + 0x190],0x0     ; 0044784b
    JZ 0x00447ccc                       ; 00447852
        ;   XREF to: 00447ccc (CONDITIONAL_JUMP)  ; LAB_00447ccc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447858
        ;   Label: LAB_00447858
    MOV EBX,dword ptr [EAX + 0x1f8]     ; 0044785b
    MOV dword ptr [EAX + 0x65b30],0x0   ; 00447861
    TEST EBX,EBX                        ; 0044786b
    JZ 0x00447ccc                       ; 0044786d
        ;   XREF to: 00447ccc (CONDITIONAL_JUMP)  ; LAB_00447ccc
    ADD EAX,0x194                       ; 00447873
    PUSH EAX                            ; 00447878
    MOV ESI,dword ptr [0x005fba60]      ; 00447879 | DAT_005fba60
    PUSH ESI                            ; 0044787f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00447880
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00447885
    TEST EAX,EAX                        ; 00447888
    JZ 0x00447899                       ; 0044788a
        ;   XREF to: 00447899 (CONDITIONAL_JUMP)  ; LAB_00447899
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044788c
    MOV dword ptr [EAX + 0x190],0x1     ; 0044788f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447899
        ;   Label: LAB_00447899
    PUSH 0x5b9a79                       ; 0044789c
    ADD EAX,0x194                       ; 004478a1
    PUSH EAX                            ; 004478a6
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004478a7
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004478ac
    TEST EAX,EAX                        ; 004478af
    JZ 0x004478c3                       ; 004478b1
        ;   XREF to: 004478c3 (CONDITIONAL_JUMP)  ; LAB_004478c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004478b3
    CMP dword ptr [EAX + 0x190],0x0     ; 004478b6
    JZ 0x00447ccc                       ; 004478bd
        ;   XREF to: 00447ccc (CONDITIONAL_JUMP)  ; LAB_00447ccc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004478c3
        ;   Label: LAB_004478c3
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 004478c6
    JZ 0x004478fd                       ; 004478cd
        ;   XREF to: 004478fd (CONDITIONAL_JUMP)  ; LAB_004478fd
    PUSH 0x0                            ; 004478cf
    MOV ECX,dword ptr [EBP + 0x14]      ; 004478d1
    MOV EAX,dword ptr [EAX + 0x154]     ; 004478d4
    PUSH 0x3dcccccd                     ; 004478da
    PUSH ECX                            ; 004478df
    CALL dword ptr [EAX + 0x40]         ; 004478e0
    MOV dword ptr [ESP + 0x128],EAX     ; 004478e3
    FLD float ptr [ESP + 0x128]         ; 004478ea
    ADD ESP,0xc                         ; 004478f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004478f4
    FSTP float ptr [EAX + 0x65b28]      ; 004478f7
    FLD float ptr [EBP + 0x18]          ; 004478fd
        ;   Label: LAB_004478fd
    FLD1                                ; 00447900
    FDIVRP                              ; 00447902
    MOV EBX,0x47c34f80                  ; 00447904
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447909
    MOV dword ptr [ESP + 0x28],EBX      ; 0044790c
    MOV dword ptr [ESP + 0x2c],EBX      ; 00447910
    FSTP float ptr [EAX + 0x1c728]      ; 00447914
    MOV EAX,0xc7c34f80                  ; 0044791a
    MOV EDI,EBX                         ; 0044791f
    MOV dword ptr [ESP + 0xe8],EAX      ; 00447921
    MOV dword ptr [ESP + 0xec],EAX      ; 00447928
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044792f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447936
    MOV dword ptr [ESP + 0x30],EBX      ; 00447939
    XOR EDI,EBX                         ; 0044793d
    CMP dword ptr [EAX + 0x204],0x0     ; 0044793f
    JLE 0x004479ed                      ; 00447946
        ;   XREF to: 004479ed (CONDITIONAL_JUMP)  ; LAB_004479ed
    LEA ESI,[EAX + 0x208]               ; 0044794c
    FLD float ptr [ESI + 0x20]          ; 00447952
        ;   Label: LAB_00447952
    MOV EBX,ESI                         ; 00447955
    FCOMP float ptr [ESP + 0x28]        ; 00447957
    FNSTSW AX                           ; 0044795b
    SAHF                                ; 0044795d
    JNC 0x00447967                      ; 0044795e
        ;   XREF to: 00447967 (CONDITIONAL_JUMP)  ; LAB_00447967
    MOV EAX,dword ptr [ESI + 0x20]      ; 00447960
    MOV dword ptr [ESP + 0x28],EAX      ; 00447963
    FLD float ptr [EBX + 0x24]          ; 00447967
        ;   Label: LAB_00447967
    FCOMP float ptr [ESP + 0x2c]        ; 0044796a
    FNSTSW AX                           ; 0044796e
    SAHF                                ; 00447970
    JNC 0x0044797a                      ; 00447971
        ;   XREF to: 0044797a (CONDITIONAL_JUMP)  ; LAB_0044797a
    MOV EAX,dword ptr [EBX + 0x24]      ; 00447973
    MOV dword ptr [ESP + 0x2c],EAX      ; 00447976
    FLD float ptr [EBX + 0x28]          ; 0044797a
        ;   Label: LAB_0044797a
    FCOMP float ptr [ESP + 0x30]        ; 0044797d
    FNSTSW AX                           ; 00447981
    SAHF                                ; 00447983
    JNC 0x0044798d                      ; 00447984
        ;   XREF to: 0044798d (CONDITIONAL_JUMP)  ; LAB_0044798d
    MOV EAX,dword ptr [EBX + 0x28]      ; 00447986
    MOV dword ptr [ESP + 0x30],EAX      ; 00447989
    FLD float ptr [EBX + 0x20]          ; 0044798d
        ;   Label: LAB_0044798d
    FCOMP float ptr [ESP + 0xe8]        ; 00447990
    FNSTSW AX                           ; 00447997
    SAHF                                ; 00447999
    JBE 0x004479a6                      ; 0044799a
        ;   XREF to: 004479a6 (CONDITIONAL_JUMP)  ; LAB_004479a6
    MOV EAX,dword ptr [EBX + 0x20]      ; 0044799c
    MOV dword ptr [ESP + 0xe8],EAX      ; 0044799f
    FLD float ptr [EBX + 0x24]          ; 004479a6
        ;   Label: LAB_004479a6
    FCOMP float ptr [ESP + 0xec]        ; 004479a9
    FNSTSW AX                           ; 004479b0
    SAHF                                ; 004479b2
    JBE 0x004479bf                      ; 004479b3
        ;   XREF to: 004479bf (CONDITIONAL_JUMP)  ; LAB_004479bf
    MOV EAX,dword ptr [EBX + 0x24]      ; 004479b5
    MOV dword ptr [ESP + 0xec],EAX      ; 004479b8
    FLD float ptr [EBX + 0x28]          ; 004479bf
        ;   Label: LAB_004479bf
    FCOMP float ptr [ESP + 0xf0]        ; 004479c2
    FNSTSW AX                           ; 004479c9
    SAHF                                ; 004479cb
    JBE 0x004479d8                      ; 004479cc
        ;   XREF to: 004479d8 (CONDITIONAL_JUMP)  ; LAB_004479d8
    MOV EAX,dword ptr [EBX + 0x28]      ; 004479ce
    MOV dword ptr [ESP + 0xf0],EAX      ; 004479d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004479d8
        ;   Label: LAB_004479d8
    INC EDI                             ; 004479db
    MOV EDX,dword ptr [EAX + 0x204]     ; 004479dc
    ADD ESI,0x74                        ; 004479e2
    CMP EDI,EDX                         ; 004479e5
    JL 0x00447952                       ; 004479e7
        ;   XREF to: 00447952 (CONDITIONAL_JUMP)  ; LAB_00447952
    XOR ECX,ECX                         ; 004479ed
        ;   Label: LAB_004479ed
    XOR EDI,EDI                         ; 004479ef
    MOV dword ptr [ESP + 0x114],ECX     ; 004479f1
    MOV dword ptr [0x007f8fcc],ECX      ; 004479f8 | DAT_007f8fcc
    MOV EDX,dword ptr [0x00603b28]      ; 004479fe | g_CDemonSetPtr
        ;   Label: LAB_004479fe
    MOV EAX,dword ptr [ESP + 0x114]     ; 00447a04
    CMP EAX,dword ptr [EDX + 0x14f0a8]  ; 00447a0b
    JGE 0x00447ae0                      ; 00447a11
        ;   XREF to: 00447ae0 (CONDITIONAL_JUMP)  ; LAB_00447ae0
    MOV EAX,[0x007f8fcc]                ; 00447a17 | DAT_007f8fcc
    IMUL ESI,EAX,0x28                   ; 00447a1c
    IMUL EAX,EAX,0xc                    ; 00447a1f
    MOV EBX,dword ptr [EDX + EDI*0x1 + 0x14f0ac] ; 00447a22
    LEA EDX,[EBX + 0x20]                ; 00447a29
    ADD EAX,0x7f8fd0                    ; 00447a2c
    ADD ESI,0x7f9480                    ; 00447a31
    CMP EAX,EDX                         ; 00447a37
    JZ 0x00447a4b                       ; 00447a39
        ;   XREF to: 00447a4b (CONDITIONAL_JUMP)  ; LAB_00447a4b
    MOV ECX,dword ptr [EDX]             ; 00447a3b
    MOV dword ptr [EAX],ECX             ; 00447a3d
    MOV ECX,dword ptr [EDX + 0x4]       ; 00447a3f
    MOV dword ptr [EAX + 0x4],ECX       ; 00447a42
    MOV ECX,dword ptr [EDX + 0x8]       ; 00447a45
    MOV dword ptr [EAX + 0x8],ECX       ; 00447a48
    PUSH ESI                            ; 00447a4b
        ;   Label: LAB_00447a4b
    MOV dword ptr [ESI],0x0             ; 00447a4c
    PUSH EBX                            ; 00447a52
    MOV EAX,dword ptr [EBX + 0x154]     ; 00447a53
    CALL dword ptr [EAX + 0x3c]         ; 00447a59
    ADD ESP,0x8                         ; 00447a5c
    CMP EAX,0x2                         ; 00447a5f
    JZ 0x00447a78                       ; 00447a62
        ;   XREF to: 00447a78 (CONDITIONAL_JUMP)  ; LAB_00447a78
    MOV EBX,dword ptr [ESP + 0x114]     ; 00447a64
        ;   Label: LAB_00447a64
    INC EBX                             ; 00447a6b
    ADD EDI,0x4                         ; 00447a6c
    MOV dword ptr [ESP + 0x114],EBX     ; 00447a6f
    JMP 0x004479fe                      ; 00447a76
        ;   XREF to: 004479fe (UNCONDITIONAL_JUMP)  ; LAB_004479fe
    FLD float ptr [EBX + 0x24]          ; 00447a78
        ;   Label: LAB_00447a78
    FCOMP float ptr [ESP + 0xec]        ; 00447a7b
    FNSTSW AX                           ; 00447a82
    SAHF                                ; 00447a84
    JA 0x00447a64                       ; 00447a85
        ;   XREF to: 00447a64 (CONDITIONAL_JUMP)  ; LAB_00447a64
    FLD float ptr [EBX + 0x24]          ; 00447a87
    FADD float ptr [ESI + 0x18]         ; 00447a8a
    FCOMP float ptr [ESP + 0x2c]        ; 00447a8d
    FNSTSW AX                           ; 00447a91
    SAHF                                ; 00447a93
    JC 0x00447a64                       ; 00447a94
        ;   XREF to: 00447a64 (CONDITIONAL_JUMP)  ; LAB_00447a64
    FLD float ptr [EBX + 0x20]          ; 00447a96
    FADD float ptr [ESI + 0x1c]         ; 00447a99
    FCOMP float ptr [ESP + 0x28]        ; 00447a9c
    FNSTSW AX                           ; 00447aa0
    SAHF                                ; 00447aa2
    JC 0x00447a64                       ; 00447aa3
        ;   XREF to: 00447a64 (CONDITIONAL_JUMP)  ; LAB_00447a64
    FLD float ptr [EBX + 0x20]          ; 00447aa5
    FSUB float ptr [ESI + 0x1c]         ; 00447aa8
    FCOMP float ptr [ESP + 0xe8]        ; 00447aab
    FNSTSW AX                           ; 00447ab2
    SAHF                                ; 00447ab4
    JA 0x00447a64                       ; 00447ab5
        ;   XREF to: 00447a64 (CONDITIONAL_JUMP)  ; LAB_00447a64
    FLD float ptr [EBX + 0x28]          ; 00447ab7
    FADD float ptr [ESI + 0x1c]         ; 00447aba
    FCOMP float ptr [ESP + 0x30]        ; 00447abd
    FNSTSW AX                           ; 00447ac1
    SAHF                                ; 00447ac3
    JC 0x00447a64                       ; 00447ac4
        ;   XREF to: 00447a64 (CONDITIONAL_JUMP)  ; LAB_00447a64
    FLD float ptr [EBX + 0x28]          ; 00447ac6
    FSUB float ptr [ESI + 0x1c]         ; 00447ac9
    FCOMP float ptr [ESP + 0xf0]        ; 00447acc
    FNSTSW AX                           ; 00447ad3
    SAHF                                ; 00447ad5
    JA 0x00447a64                       ; 00447ad6
        ;   XREF to: 00447a64 (CONDITIONAL_JUMP)  ; LAB_00447a64
    INC dword ptr [0x007f8fcc]          ; 00447ad8 | DAT_007f8fcc
    JMP 0x00447a64                      ; 00447ade
        ;   XREF to: 00447a64 (UNCONDITIONAL_JUMP)  ; LAB_00447a64
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447ae0
        ;   Label: LAB_00447ae0
    MOV EDI,dword ptr [0x007f8fcc]      ; 00447ae3 | DAT_007f8fcc
    MOV dword ptr [EAX + 0x65b34],0x1   ; 00447ae9
    TEST EDI,EDI                        ; 00447af3
    JNZ 0x00447b42                      ; 00447af5
        ;   XREF to: 00447b42 (CONDITIONAL_JUMP)  ; LAB_00447b42
    MOV EDX,dword ptr [EAX + 0x190]     ; 00447af7
    TEST EDX,EDX                        ; 00447afd
    JNZ 0x00447b42                      ; 00447aff
        ;   XREF to: 00447b42 (CONDITIONAL_JUMP)  ; LAB_00447b42
    MOV ECX,dword ptr [EAX + 0x204]     ; 00447b01
    MOV dword ptr [EAX + 0x65b34],EDI   ; 00447b07
    TEST ECX,ECX                        ; 00447b0d
    JLE 0x00447b32                      ; 00447b0f
        ;   XREF to: 00447b32 (CONDITIONAL_JUMP)  ; LAB_00447b32
    LEA EBX,[EAX + 0x208]               ; 00447b11
    CMP dword ptr [EBX + 0x68],0x0      ; 00447b17
        ;   Label: LAB_00447b17
    JZ 0x00447cd3                       ; 00447b1b
        ;   XREF to: 00447cd3 (CONDITIONAL_JUMP)  ; LAB_00447cd3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447b21
        ;   Label: LAB_00447b21
    INC EDX                             ; 00447b24
    MOV ESI,dword ptr [EAX + 0x204]     ; 00447b25
    ADD EBX,0x74                        ; 00447b2b
    CMP EDX,ESI                         ; 00447b2e
    JL 0x00447b17                       ; 00447b30
        ;   XREF to: 00447b17 (CONDITIONAL_JUMP)  ; LAB_00447b17
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447b32
        ;   Label: LAB_00447b32
    CMP dword ptr [EAX + 0x65b34],0x0   ; 00447b35
    JZ 0x00447ccc                       ; 00447b3c
        ;   XREF to: 00447ccc (CONDITIONAL_JUMP)  ; LAB_00447ccc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447b42
        ;   Label: LAB_00447b42
    MOV ECX,dword ptr [EAX + 0x204]     ; 00447b45
    XOR EDX,EDX                         ; 00447b4b
    TEST ECX,ECX                        ; 00447b4d
    JLE 0x00447b70                      ; 00447b4f
        ;   XREF to: 00447b70 (CONDITIONAL_JUMP)  ; LAB_00447b70
    MOV EBX,dword ptr [EBP + 0x14]      ; 00447b51
    MOV dword ptr [EAX + 0x274],0x0     ; 00447b54
        ;   Label: LAB_00447b54
    INC EDX                             ; 00447b5e
    MOV ESI,dword ptr [EBX + 0x204]     ; 00447b5f
    ADD EAX,0x74                        ; 00447b65
    CMP EDX,ESI                         ; 00447b68
    JL 0x00447b54                       ; 00447b6a
        ;   XREF to: 00447b54 (CONDITIONAL_JUMP)  ; LAB_00447b54
    LEA EAX,[EAX]                       ; 00447b6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447b70
        ;   Label: LAB_00447b70
    XOR EDI,EDI                         ; 00447b73
    MOV EDX,dword ptr [EAX + 0x204]     ; 00447b75
    MOV dword ptr [ESP + 0x110],EDI     ; 00447b7b
    TEST EDX,EDX                        ; 00447b82
    JLE 0x00447bb8                      ; 00447b84
        ;   XREF to: 00447bb8 (CONDITIONAL_JUMP)  ; LAB_00447bb8
    LEA EBX,[EAX + 0x208]               ; 00447b86
    MOV EDI,dword ptr [EBX + 0x68]      ; 00447b8c
        ;   Label: LAB_00447b8c
    MOV EDX,EBX                         ; 00447b8f
    TEST EDI,EDI                        ; 00447b91
    JZ 0x00447d80                       ; 00447b93
        ;   XREF to: 00447d80 (CONDITIONAL_JUMP)  ; LAB_00447d80
    MOV ECX,dword ptr [ESP + 0x110]     ; 00447b99
        ;   Label: LAB_00447b99
    MOV EDX,dword ptr [EBP + 0x14]      ; 00447ba0
    ADD EBX,0x74                        ; 00447ba3
    INC ECX                             ; 00447ba6
    MOV ESI,dword ptr [EDX + 0x204]     ; 00447ba7
    MOV dword ptr [ESP + 0x110],ECX     ; 00447bad
    CMP ECX,ESI                         ; 00447bb4
    JL 0x00447b8c                       ; 00447bb6
        ;   XREF to: 00447b8c (CONDITIONAL_JUMP)  ; LAB_00447b8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447bb8
        ;   Label: LAB_00447bb8
    ADD EAX,0x208                       ; 00447bbb
    XOR EDI,EDI                         ; 00447bc0
    MOV dword ptr [ESP + 0x10c],EAX     ; 00447bc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447bc9
        ;   Label: LAB_00447bc9
    MOV EDX,dword ptr [EAX + 0x204]     ; 00447bcc
    XOR ESI,ESI                         ; 00447bd2
    TEST EDX,EDX                        ; 00447bd4
    JLE 0x00447bfa                      ; 00447bd6
        ;   XREF to: 00447bfa (CONDITIONAL_JUMP)  ; LAB_00447bfa
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00447bd8
    CMP dword ptr [EBX + 0x68],0x0      ; 00447bdf
        ;   Label: LAB_00447bdf
    JZ 0x0044804c                       ; 00447be3
        ;   XREF to: 0044804c (CONDITIONAL_JUMP)  ; LAB_0044804c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447be9
        ;   Label: LAB_00447be9
    INC ESI                             ; 00447bec
    MOV ECX,dword ptr [EAX + 0x204]     ; 00447bed
    ADD EBX,0x74                        ; 00447bf3
    CMP ESI,ECX                         ; 00447bf6
    JL 0x00447bdf                       ; 00447bf8
        ;   XREF to: 00447bdf (CONDITIONAL_JUMP)  ; LAB_00447bdf
    INC EDI                             ; 00447bfa
        ;   Label: LAB_00447bfa
    CMP EDI,0x3                         ; 00447bfb
    JL 0x00447bc9                       ; 00447bfe
        ;   XREF to: 00447bc9 (CONDITIONAL_JUMP)  ; LAB_00447bc9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447c00
    MOV EBX,dword ptr [EAX + 0x204]     ; 00447c03
    XOR ESI,ESI                         ; 00447c09
    TEST EBX,EBX                        ; 00447c0b
    JLE 0x00447c68                      ; 00447c0d
        ;   XREF to: 00447c68 (CONDITIONAL_JUMP)  ; LAB_00447c68
    LEA EDI,[EAX + 0x65b20]             ; 00447c0f
    LEA EBX,[EAX + 0x208]               ; 00447c15
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00447c1b
        ;   Label: LAB_00447c1b
    MOV EDX,EBX                         ; 00447c1e
    TEST EAX,EAX                        ; 00447c20
    JZ 0x00447c3d                       ; 00447c22
        ;   XREF to: 00447c3d (CONDITIONAL_JUMP)  ; LAB_00447c3d
    LEA EAX,[EBX + 0x2c]                ; 00447c24
    FLD float ptr [EDI]                 ; 00447c27
    FMUL float ptr [EAX]                ; 00447c29
    FSTP float ptr [EAX]                ; 00447c2b
    FLD float ptr [EDI]                 ; 00447c2d
    FMUL float ptr [EAX + 0x4]          ; 00447c2f
    FSTP float ptr [EAX + 0x4]          ; 00447c32
    FLD float ptr [EDI]                 ; 00447c35
    FMUL float ptr [EAX + 0x8]          ; 00447c37
    FSTP float ptr [EAX + 0x8]          ; 00447c3a
    LEA EAX,[EDX + 0x38]                ; 00447c3d
        ;   Label: LAB_00447c3d
    ADD EDX,0x20                        ; 00447c40
    CMP EAX,EDX                         ; 00447c43
    JZ 0x00447c57                       ; 00447c45
        ;   XREF to: 00447c57 (CONDITIONAL_JUMP)  ; LAB_00447c57
    MOV ECX,dword ptr [EDX]             ; 00447c47
    MOV dword ptr [EAX],ECX             ; 00447c49
    MOV ECX,dword ptr [EDX + 0x4]       ; 00447c4b
    MOV dword ptr [EAX + 0x4],ECX       ; 00447c4e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00447c51
    MOV dword ptr [EAX + 0x8],ECX       ; 00447c54
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447c57
        ;   Label: LAB_00447c57
    INC ESI                             ; 00447c5a
    MOV ECX,dword ptr [EAX + 0x204]     ; 00447c5b
    ADD EBX,0x74                        ; 00447c61
    CMP ESI,ECX                         ; 00447c64
    JL 0x00447c1b                       ; 00447c66
        ;   XREF to: 00447c1b (CONDITIONAL_JUMP)  ; LAB_00447c1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447c68
        ;   Label: LAB_00447c68
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 00447c6b
    JZ 0x00447cc0                       ; 00447c72
        ;   XREF to: 00447cc0 (CONDITIONAL_JUMP)  ; LAB_00447cc0
    MOV EDI,dword ptr [EAX + 0x204]     ; 00447c74
    XOR EBX,EBX                         ; 00447c7a
    XOR ESI,ESI                         ; 00447c7c
    TEST EDI,EDI                        ; 00447c7e
    JLE 0x00447cab                      ; 00447c80
        ;   XREF to: 00447cab (CONDITIONAL_JUMP)  ; LAB_00447cab
    LEA EDX,[EAX + 0x208]               ; 00447c82
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447c88
        ;   Label: LAB_00447c88
    FLD float ptr [EDX + 0x24]          ; 00447c8b
    FCOMP float ptr [EAX + 0x65b28]     ; 00447c8e
    FNSTSW AX                           ; 00447c94
    SAHF                                ; 00447c96
    JA 0x00447c9a                       ; 00447c97
        ;   XREF to: 00447c9a (CONDITIONAL_JUMP)  ; LAB_00447c9a
    INC ESI                             ; 00447c99
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447c9a
        ;   Label: LAB_00447c9a
    INC EBX                             ; 00447c9d
    MOV ECX,dword ptr [EAX + 0x204]     ; 00447c9e
    ADD EDX,0x74                        ; 00447ca4
    CMP EBX,ECX                         ; 00447ca7
    JL 0x00447c88                       ; 00447ca9
        ;   XREF to: 00447c88 (CONDITIONAL_JUMP)  ; LAB_00447c88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447cab
        ;   Label: LAB_00447cab
    CMP ESI,dword ptr [EAX + 0x204]     ; 00447cae
    JNZ 0x00447cc0                      ; 00447cb4
        ;   XREF to: 00447cc0 (CONDITIONAL_JUMP)  ; LAB_00447cc0
    MOV dword ptr [EAX + 0x1f8],0x0     ; 00447cb6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00447cc0
        ;   Label: LAB_00447cc0
    PUSH ESI                            ; 00447cc3
    CALL core_curtain.cpp_FUN_00446c60  ; 00447cc4
        ;   XREF to: 00446c60 (UNCONDITIONAL_CALL)  ; undefined core_curtain.cpp_FUN_00446c60()
    ADD ESP,0x4                         ; 00447cc9
    MOV ESP,EBP                         ; 00447ccc
        ;   Label: LAB_00447ccc
    POP EBP                             ; 00447cce
    POP EDI                             ; 00447ccf
    POP ESI                             ; 00447cd0
    POP EBX                             ; 00447cd1
    RET                                 ; 00447cd2
    LEA EAX,[EBX + 0x2c]                ; 00447cd3
        ;   Label: LAB_00447cd3
    FLD float ptr [EAX + 0x4]           ; 00447cd6
    FMUL ST0                            ; 00447cd9
    FLD float ptr [EAX]                 ; 00447cdb
    FMUL ST0                            ; 00447cdd
    FADDP                               ; 00447cdf
    FLD float ptr [EAX + 0x8]           ; 00447ce1
    FMUL ST0                            ; 00447ce4
    FADDP                               ; 00447ce6
    FSQRT                               ; 00447ce8
    FCOMP double ptr [0x005b9aa1]       ; 00447cea | DAT_005b9aa1
    FNSTSW AX                           ; 00447cf0
    SAHF                                ; 00447cf2
    JBE 0x00447d07                      ; 00447cf3
        ;   XREF to: 00447d07 (CONDITIONAL_JUMP)  ; LAB_00447d07
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447cf5
    MOV dword ptr [EAX + 0x65b34],0x1   ; 00447cf8
    JMP 0x00447b42                      ; 00447d02
        ;   XREF to: 00447b42 (UNCONDITIONAL_JUMP)  ; LAB_00447b42
    LEA EAX,[EBX + 0xc]                 ; 00447d07
        ;   Label: LAB_00447d07
    LEA EDI,[ESP + 0xac]                ; 00447d0a
    LEA ESI,[ESP + 0x58]                ; 00447d11
    FLD float ptr [EAX]                 ; 00447d15
    FLD float ptr [EAX + 0x4]           ; 00447d17
    FLD float ptr [EAX + 0x8]           ; 00447d1a
    FXCH ST2                            ; 00447d1d
    FSUB float ptr [EBX]                ; 00447d1f
    FXCH                                ; 00447d21
    FSUB float ptr [EBX + 0x4]          ; 00447d23
    FXCH ST2                            ; 00447d26
    FSUB float ptr [EBX + 0x8]          ; 00447d28
    FXCH                                ; 00447d2b
    FSTP float ptr [ESP + 0x58]         ; 00447d2d
    FXCH                                ; 00447d31
    FSTP float ptr [ESP + 0x5c]         ; 00447d33
    FSTP float ptr [ESP + 0x60]         ; 00447d37
    MOVSD ES:EDI,ESI                    ; 00447d3b
    MOVSD ES:EDI,ESI                    ; 00447d3c
    MOVSD ES:EDI,ESI                    ; 00447d3d
    FLD float ptr [ESP + 0xb0]          ; 00447d3e
    FMUL ST0                            ; 00447d45
    FLD float ptr [ESP + 0xac]          ; 00447d47
    FMUL ST0                            ; 00447d4e
    FADDP                               ; 00447d50
    FLD float ptr [ESP + 0xb4]          ; 00447d52
    FMUL ST0                            ; 00447d59
    FADDP                               ; 00447d5b
    FSQRT                               ; 00447d5d
    FCOMP double ptr [0x005b9aa1]       ; 00447d5f | DAT_005b9aa1
    FNSTSW AX                           ; 00447d65
    SAHF                                ; 00447d67
    JBE 0x00447b21                      ; 00447d68
        ;   XREF to: 00447b21 (CONDITIONAL_JUMP)  ; LAB_00447b21
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447d6e
    MOV dword ptr [EAX + 0x65b34],0x1   ; 00447d71
    JMP 0x00447b42                      ; 00447d7b
        ;   XREF to: 00447b42 (UNCONDITIONAL_JUMP)  ; LAB_00447b42
    FLD float ptr [EBX + 0x2c]          ; 00447d80
        ;   Label: LAB_00447d80
    FLD ST0                             ; 00447d83
    FLD double ptr [0x005b9a81]         ; 00447d85 | DAT_005b9a81
    FXCH                                ; 00447d8b
    FMUL ST1                            ; 00447d8d
    FLD float ptr [EBX + 0x34]          ; 00447d8f
    FMUL ST2                            ; 00447d92
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447d94
    FXCH                                ; 00447d97
    FSTP ST3                            ; 00447d99
    FXCH ST2                            ; 00447d9b
    FSTP float ptr [EBX + 0x2c]         ; 00447d9d
    FLD float ptr [EAX + 0x65b18]       ; 00447da0
    FMUL float ptr [EBX + 0x30]         ; 00447da6
    MOV dword ptr [ESP + 0x54],EDI      ; 00447da9
    MOV dword ptr [ESP + 0x50],EDI      ; 00447dad
    MOV dword ptr [ESP + 0x4c],EDI      ; 00447db1
    FXCH                                ; 00447db5
    FSTP ST2                            ; 00447db7
    FXCH                                ; 00447db9
    FSTP float ptr [EBX + 0x34]         ; 00447dbb
    FSTP float ptr [EBX + 0x30]         ; 00447dbe
    MOV EAX,dword ptr [EAX + 0x65b14]   ; 00447dc1
    MOV EDI,dword ptr [EBX + 0x70]      ; 00447dc7
    MOV dword ptr [ESP],EAX             ; 00447dca
    TEST EDI,EDI                        ; 00447dcd
    JZ 0x00447ddd                       ; 00447dcf
        ;   XREF to: 00447ddd (CONDITIONAL_JUMP)  ; LAB_00447ddd
    FLD float ptr [ESP]                 ; 00447dd1
    FMUL double ptr [0x005b9a89]        ; 00447dd4 | DAT_005b9a89
    FSTP float ptr [ESP]                ; 00447dda
    FLD1                                ; 00447ddd
        ;   Label: LAB_00447ddd
    FDIV float ptr [EBP + 0x18]         ; 00447ddf
    FLD float ptr [ESP]                 ; 00447de2
    FLD ST0                             ; 00447de5
    FMUL double ptr [0x005b9a91]        ; 00447de7 | DAT_005b9a91
    LEA EAX,[EDX + 0x2c]                ; 00447ded
    LEA EDI,[ESP + 0xd0]                ; 00447df0
    LEA ESI,[ESP + 0x64]                ; 00447df7
    FLD float ptr [EAX]                 ; 00447dfb
    FLD float ptr [EAX + 0x4]           ; 00447dfd
    FLD float ptr [EAX + 0x8]           ; 00447e00
    FXCH ST2                            ; 00447e03
    FCHS                                ; 00447e05
    FXCH                                ; 00447e07
    FCHS                                ; 00447e09
    FXCH ST2                            ; 00447e0b
    FCHS                                ; 00447e0d
    FXCH                                ; 00447e0f
    FSTP float ptr [ESP + 0x64]         ; 00447e11
    FXCH                                ; 00447e15
    FSTP float ptr [ESP + 0x68]         ; 00447e17
    FSTP float ptr [ESP + 0x6c]         ; 00447e1b
    MOVSD ES:EDI,ESI                    ; 00447e1f
    MOVSD ES:EDI,ESI                    ; 00447e20
    MOVSD ES:EDI,ESI                    ; 00447e21
    FLD float ptr [ESP + 0xd0]          ; 00447e22
    FMUL ST3                            ; 00447e29
    FLD float ptr [ESP + 0xd4]          ; 00447e2b
    FMUL ST4                            ; 00447e32
    FLD1                                ; 00447e34
    FXCH ST3                            ; 00447e36
    FSTP float ptr [ESP + 0x118]        ; 00447e38
    FLD float ptr [ESP + 0xd8]          ; 00447e3f
    LEA EDI,[ESP + 0x88]                ; 00447e46
    LEA ESI,[ESP + 0xb8]                ; 00447e4d
    FMULP ST5                           ; 00447e54
    FXCH ST2                            ; 00447e56
    FDIV float ptr [ESP + 0x118]        ; 00447e58
    FXCH                                ; 00447e5f
    FSTP float ptr [ESP + 0xb8]         ; 00447e61
    FXCH                                ; 00447e68
    FSTP float ptr [ESP + 0xbc]         ; 00447e6a
    FXCH ST2                            ; 00447e71
    FSTP float ptr [ESP + 0xc0]         ; 00447e73
    MOVSD ES:EDI,ESI                    ; 00447e7a
    MOVSD ES:EDI,ESI                    ; 00447e7b
    MOVSD ES:EDI,ESI                    ; 00447e7c
    FLD float ptr [ESP + 0x88]          ; 00447e7d
    FMUL float ptr [ESP + 0x118]        ; 00447e84
    FLD float ptr [ESP + 0x8c]          ; 00447e8b
    FMUL float ptr [ESP + 0x118]        ; 00447e92
    FLD float ptr [ESP + 0x90]          ; 00447e99
    FMUL float ptr [ESP + 0x118]        ; 00447ea0
    LEA EDI,[ESP + 0xc4]                ; 00447ea7
    LEA ESI,[ESP + 0x40]                ; 00447eae
    FXCH ST2                            ; 00447eb2
    FSTP float ptr [ESP + 0x40]         ; 00447eb4
    FSTP float ptr [ESP + 0x44]         ; 00447eb8
    FSTP float ptr [ESP + 0x48]         ; 00447ebc
    MOVSD ES:EDI,ESI                    ; 00447ec0
    MOVSD ES:EDI,ESI                    ; 00447ec1
    MOVSD ES:EDI,ESI                    ; 00447ec2
    FLD float ptr [0x005b9a99]          ; 00447ec3 | DAT_005b9a99
    FLD float ptr [ESP + 0xc4]          ; 00447ec9
    FMUL ST1                            ; 00447ed0
    FLD float ptr [ESP + 0xc8]          ; 00447ed2
    FMUL ST2                            ; 00447ed9
    FLD float ptr [ESP + 0xcc]          ; 00447edb
    FMULP ST3                           ; 00447ee2
    LEA EDI,[ESP + 0x1c]                ; 00447ee4
    LEA ESI,[ESP + 0xa0]                ; 00447ee8
    FXCH                                ; 00447eef
    FSTP float ptr [ESP + 0xa0]         ; 00447ef1
    FSTP float ptr [ESP + 0xa4]         ; 00447ef8
    FSTP float ptr [ESP + 0xa8]         ; 00447eff
    MOVSD ES:EDI,ESI                    ; 00447f06
    MOVSD ES:EDI,ESI                    ; 00447f07
    MOVSD ES:EDI,ESI                    ; 00447f08
    FLD float ptr [ESP + 0x4c]          ; 00447f09
    FADD float ptr [ESP + 0x1c]         ; 00447f0d
    FST float ptr [ESP + 0x4c]          ; 00447f11
    FMUL ST2                            ; 00447f15
    FLD float ptr [ESP + 0x50]          ; 00447f17
    FSUBRP ST2,ST0                      ; 00447f1b
    FLD float ptr [ESP + 0x54]          ; 00447f1d
    FXCH ST2                            ; 00447f21
    FADD float ptr [ESP + 0x20]         ; 00447f23
    FXCH ST2                            ; 00447f27
    FADD float ptr [ESP + 0x24]         ; 00447f29
    FXCH ST2                            ; 00447f2d
    FST float ptr [ESP + 0x50]          ; 00447f2f
    FMUL ST3                            ; 00447f33
    FXCH ST2                            ; 00447f35
    FST float ptr [ESP + 0x54]          ; 00447f37
    FMULP ST3                           ; 00447f3b
    LEA EDI,[ESP + 0x4]                 ; 00447f3d
    LEA ESI,[ESP + 0x10]                ; 00447f41
    FSTP float ptr [ESP + 0x10]         ; 00447f45
    FSTP float ptr [ESP + 0x14]         ; 00447f49
    FSTP float ptr [ESP + 0x18]         ; 00447f4d
    MOVSD ES:EDI,ESI                    ; 00447f51
    MOVSD ES:EDI,ESI                    ; 00447f52
    MOVSD ES:EDI,ESI                    ; 00447f53
    LEA EAX,[ESP + 0xdc]                ; 00447f54
    LEA ESI,[ESP + 0x4]                 ; 00447f5b
    CMP EAX,ESI                         ; 00447f5f
    JZ 0x00447f84                       ; 00447f61
        ;   XREF to: 00447f84 (CONDITIONAL_JUMP)  ; LAB_00447f84
    MOV EAX,dword ptr [ESP + 0x4]       ; 00447f63
    MOV dword ptr [ESP + 0xdc],EAX      ; 00447f67
    MOV EAX,dword ptr [ESP + 0x8]       ; 00447f6e
    MOV dword ptr [ESP + 0xe0],EAX      ; 00447f72
    MOV EAX,dword ptr [ESP + 0xc]       ; 00447f79
    MOV dword ptr [ESP + 0xe4],EAX      ; 00447f7d
    FLD float ptr [EBP + 0x18]          ; 00447f84
        ;   Label: LAB_00447f84
    FLD float ptr [ESP + 0xdc]          ; 00447f87
    FMUL ST1                            ; 00447f8e
    FLD float ptr [ESP + 0xe0]          ; 00447f90
    FMUL ST2                            ; 00447f97
    FLD float ptr [ESP + 0xe4]          ; 00447f99
    FMUL ST3                            ; 00447fa0
    LEA EDI,[ESP + 0x94]                ; 00447fa2
    LEA ESI,[ESP + 0x34]                ; 00447fa9
    LEA EAX,[EDX + 0x2c]                ; 00447fad
    FXCH ST2                            ; 00447fb0
    FSTP float ptr [ESP + 0x34]         ; 00447fb2
    FSTP float ptr [ESP + 0x38]         ; 00447fb6
    FSTP float ptr [ESP + 0x3c]         ; 00447fba
    MOVSD ES:EDI,ESI                    ; 00447fbe
    MOVSD ES:EDI,ESI                    ; 00447fbf
    MOVSD ES:EDI,ESI                    ; 00447fc0
    FLD float ptr [EAX]                 ; 00447fc1
    FADD float ptr [ESP + 0x94]         ; 00447fc3
    FST float ptr [EAX]                 ; 00447fca
    FMUL ST1                            ; 00447fcc
    FLD float ptr [EAX + 0x8]           ; 00447fce
    FLD float ptr [EAX + 0x4]           ; 00447fd1
    FADD float ptr [ESP + 0x98]         ; 00447fd4
    FXCH                                ; 00447fdb
    FADD float ptr [ESP + 0x9c]         ; 00447fdd
    FXCH                                ; 00447fe4
    FST float ptr [EAX + 0x4]           ; 00447fe6
    FMUL ST3                            ; 00447fe9
    FXCH                                ; 00447feb
    FST float ptr [EAX + 0x8]           ; 00447fed
    FMULP ST3                           ; 00447ff0
    LEA EDI,[ESP + 0x70]                ; 00447ff2
    LEA ESI,[ESP + 0x7c]                ; 00447ff6
    LEA EAX,[EDX + 0x20]                ; 00447ffa
    FXCH                                ; 00447ffd
    FSTP float ptr [ESP + 0x7c]         ; 00447fff
    FSTP float ptr [ESP + 0x80]         ; 00448003
    FSTP float ptr [ESP + 0x84]         ; 0044800a
    MOVSD ES:EDI,ESI                    ; 00448011
    MOVSD ES:EDI,ESI                    ; 00448012
    MOVSD ES:EDI,ESI                    ; 00448013
    PUSH EDX                            ; 00448014
    FLD float ptr [EAX]                 ; 00448015
    FLD float ptr [EAX + 0x4]           ; 00448017
    FLD float ptr [EAX + 0x8]           ; 0044801a
    FXCH ST2                            ; 0044801d
    FADD float ptr [ESP + 0x74]         ; 0044801f
    FXCH                                ; 00448023
    FADD float ptr [ESP + 0x78]         ; 00448025
    FXCH ST2                            ; 00448029
    FADD float ptr [ESP + 0x7c]         ; 0044802b
    FXCH                                ; 0044802f
    FSTP float ptr [EAX]                ; 00448031
    FXCH                                ; 00448033
    FSTP float ptr [EAX + 0x4]          ; 00448035
    FSTP float ptr [EAX + 0x8]          ; 00448038
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044803b
    PUSH EAX                            ; 0044803e
    CALL core_curtain.cpp_FUN_00446d50  ; 0044803f
        ;   XREF to: 00446d50 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_FUN_00446d50(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 00448044
    JMP 0x00447b99                      ; 00448047
        ;   XREF to: 00447b99 (UNCONDITIONAL_JUMP)  ; LAB_00447b99
    PUSH EBX                            ; 0044804c
        ;   Label: LAB_0044804c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044804d
    PUSH EDX                            ; 00448050
    CALL core_curtain.cpp_FUN_00446d50  ; 00448051
        ;   XREF to: 00446d50 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_FUN_00446d50(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 00448056
    JMP 0x00447be9                      ; 00448059
        ;   XREF to: 00447be9 (UNCONDITIONAL_JUMP)  ; LAB_00447be9

