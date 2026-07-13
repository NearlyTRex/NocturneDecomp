; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053e860(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x3c]:8  local_3c
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   string s_CBugs_00595d3f
;   string s_Using_auto_health_00595d45
;   string s_hit_points:_%3.2f_00595d58
;   string s_stranger_die??.wav_00595d6b
;   string s_stranger_hit??.wav_00595d7e
;   undefined4 DAT_00595d97
;   undefined4 DAT_00595d9f
;   undefined4 DAT_00595da7
;   undefined4 DAT_005a26f8
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b9284
;   undefined4 DAT_005b9354
;   undefined4 DAT_005b96c4
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01c775ec
;   ... and 4 more
;
; Called Functions:
;   FUN_0040a290
;   FUN_0040d7e0
;   FUN_0040d890
;   FUN_0040dda0
;   FUN_0040dea0
;   FUN_00428510
;   FUN_0043ac60
;   FUN_004940d0
;   FUN_004a3a90
;   FUN_004b0670
;   FUN_004b5920
;   FUN_004c3350
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_00526c50
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e860
        ;   Label: FUN_0053e860
    PUSH ESI                            ; 0053e861
    PUSH EDI                            ; 0053e862
    PUSH EBP                            ; 0053e863
    MOV EBP,ESP                         ; 0053e864
    SUB ESP,0x24                        ; 0053e866
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053e869
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053e86c
    MOV EAX,[0x005b9354]                ; 0053e86f | DAT_005b9354
    CMP dword ptr [EAX + 0x1d0],0x0     ; 0053e874 | DAT_01c777bc
    JNZ 0x0053eba6                      ; 0053e87b
        ;   XREF to: 0053eba6 (CONDITIONAL_JUMP)  ; LAB_0053eba6
    MOV EAX,[0x005b9354]                ; 0053e881 | DAT_005b9354
        ;   Label: LAB_0053e881
    MOV ECX,dword ptr [EAX + 0x22c]     ; 0053e886 | DAT_01c77818
    TEST ECX,ECX                        ; 0053e88c
    JNZ 0x0053e893                      ; 0053e88e
        ;   XREF to: 0053e893 (CONDITIONAL_JUMP)  ; LAB_0053e893
    MOV dword ptr [ESI + 0x4],ECX       ; 0053e890
    PUSH EBX                            ; 0053e893
        ;   Label: LAB_0053e893
    CALL FUN_004b5920                   ; 0053e894
        ;   XREF to: 004b5920 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5920()
    FLD float ptr [EBX + 0xbc8c]        ; 0053e899
    FLDZ                                ; 0053e89f
    ADD ESP,0x4                         ; 0053e8a1
    FCOMPP                              ; 0053e8a4
    FNSTSW AX                           ; 0053e8a6
    SAHF                                ; 0053e8a8
    JNC 0x0053e8b5                      ; 0053e8a9
        ;   XREF to: 0053e8b5 (CONDITIONAL_JUMP)  ; LAB_0053e8b5
    CMP dword ptr [ESI + 0x30],0xb      ; 0053e8ab
    JG 0x0053ebb2                       ; 0053e8af
        ;   XREF to: 0053ebb2 (CONDITIONAL_JUMP)  ; LAB_0053ebb2
    FLD float ptr [0x005a26f8]          ; 0053e8b5 | DAT_005a26f8
        ;   Label: LAB_0053e8b5
    PUSH 0x595d3f                       ; 0053e8bb | = "CBugs"
    FSTP float ptr [EBX + 0xbc8c]       ; 0053e8c0
    MOV EAX,dword ptr [ESI + 0x38]      ; 0053e8c6
    PUSH EAX                            ; 0053e8c9
    CALL FUN_0040d7e0                   ; 0053e8ca
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 0053e8cf
    TEST EAX,EAX                        ; 0053e8d2
    JZ 0x0053e8e0                       ; 0053e8d4
        ;   XREF to: 0053e8e0 (CONDITIONAL_JUMP)  ; LAB_0053e8e0
    MOV dword ptr [EBX + 0xbc8c],0x3e19999a ; 0053e8d6
    FLD float ptr [ESI + 0x4]           ; 0053e8e0
        ;   Label: LAB_0053e8e0
    FSUBR float ptr [EBX + 0x2434]      ; 0053e8e3
    MOV EAX,[0x005b9354]                ; 0053e8e9 | DAT_005b9354
    FSTP float ptr [EBX + 0x2434]       ; 0053e8ee
    CMP dword ptr [EAX + 0xc8],0x0      ; 0053e8f4 | DAT_01c776b4
    JZ 0x0053e95e                       ; 0053e8fb
        ;   XREF to: 0053e95e (CONDITIONAL_JUMP)  ; LAB_0053e95e
    CMP dword ptr [ESI + 0x30],0xb      ; 0053e8fd
    JLE 0x0053e95e                      ; 0053e901
        ;   XREF to: 0053e95e (CONDITIONAL_JUMP)  ; LAB_0053e95e
    FLD float ptr [EBX + 0x2434]        ; 0053e903
    FLDZ                                ; 0053e909
    FCOMPP                              ; 0053e90b
    FNSTSW AX                           ; 0053e90d
    SAHF                                ; 0053e90f
    JC 0x0053e95e                       ; 0053e910
        ;   XREF to: 0053e95e (CONDITIONAL_JUMP)  ; LAB_0053e95e
    PUSH 0x595d45                       ; 0053e912 | = "Using auto health\n"
    MOV EDI,dword ptr [0x005ad350]      ; 0053e917 | PTR_DAT_005ad350
    PUSH EDI                            ; 0053e91d | DAT_0077ad0c
    MOV dword ptr [EBX + 0x2434],0x0    ; 0053e91e
    CALL FUN_0043ac60                   ; 0053e928
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x8                         ; 0053e92d
    LEA EAX,[EBX + 0x1f5a0]             ; 0053e930
    PUSH EAX                            ; 0053e936
    CALL FUN_004c3350                   ; 0053e937
        ;   XREF to: 004c3350 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3350()
    ADD ESP,0x4                         ; 0053e93c
    SUB ESP,0x8                         ; 0053e93f
    FLD float ptr [EBX + 0x2434]        ; 0053e942
    FSTP double ptr [ESP]               ; 0053e948
    PUSH 0x595d58                       ; 0053e94b | = "hit points: %3.2f\n"
    MOV EAX,[0x005ad350]                ; 0053e950 | PTR_DAT_005ad350
    PUSH EAX                            ; 0053e955 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 0053e956
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x10                        ; 0053e95b
    XOR EDX,EDX                         ; 0053e95e
        ;   Label: LAB_0053e95e
    MOV EDI,0x3f800000                  ; 0053e960
    MOV dword ptr [EBP + -0x14],EDX     ; 0053e965
    MOV dword ptr [EBP + -0x10],EDI     ; 0053e968
    MOV dword ptr [EBP + -0x18],EDX     ; 0053e96b
    MOV EAX,dword ptr [ESI + 0x34]      ; 0053e96e
    TEST EAX,EAX                        ; 0053e971
    JZ 0x0053e9e5                       ; 0053e973
        ;   XREF to: 0053e9e5 (CONDITIONAL_JUMP)  ; LAB_0053e9e5
    ADD EAX,0x20                        ; 0053e975
    PUSH EAX                            ; 0053e978
    LEA EAX,[EBP + -0x24]               ; 0053e979
    PUSH EAX                            ; 0053e97c
    PUSH EBX                            ; 0053e97d
    CALL FUN_0040a290                   ; 0053e97e
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    MOV EDX,EAX                         ; 0053e983
    LEA EAX,[EBP + -0x18]               ; 0053e985
    ADD ESP,0xc                         ; 0053e988
    CMP EAX,EDX                         ; 0053e98b
    JZ 0x0053e9a0                       ; 0053e98d
        ;   XREF to: 0053e9a0 (CONDITIONAL_JUMP)  ; LAB_0053e9a0
    MOV EAX,dword ptr [EDX]             ; 0053e98f
    MOV dword ptr [EBP + -0x18],EAX     ; 0053e991
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053e994
    MOV dword ptr [EBP + -0x14],EAX     ; 0053e997
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053e99a
    MOV dword ptr [EBP + -0x10],EAX     ; 0053e99d
    FLD float ptr [EBP + -0x18]         ; 0053e9a0
        ;   Label: LAB_0053e9a0
    FMUL ST0                            ; 0053e9a3
    FLD float ptr [EBP + -0x10]         ; 0053e9a5
    FMUL ST0                            ; 0053e9a8
    FADDP                               ; 0053e9aa
    FSQRT                               ; 0053e9ac
    XOR EDX,EDX                         ; 0053e9ae
    MOV dword ptr [EBP + -0x14],EDX     ; 0053e9b0
    FST float ptr [EBP + -0xc]          ; 0053e9b3
    FLDZ                                ; 0053e9b6
    FCOMPP                              ; 0053e9b8
    FNSTSW AX                           ; 0053e9ba
    SAHF                                ; 0053e9bc
    JNC 0x0053ebc0                      ; 0053e9bd
        ;   XREF to: 0053ebc0 (CONDITIONAL_JUMP)  ; LAB_0053ebc0
    FLD1                                ; 0053e9c3
    FLD float ptr [EBP + -0x18]         ; 0053e9c5
    FXCH                                ; 0053e9c8
    FDIV float ptr [EBP + -0xc]         ; 0053e9ca
    FXCH                                ; 0053e9cd
    FMUL ST1                            ; 0053e9cf
    FLDZ                                ; 0053e9d1
    FMUL ST2                            ; 0053e9d3
    FLD float ptr [EBP + -0x10]         ; 0053e9d5
    FMULP ST3                           ; 0053e9d8
    FXCH                                ; 0053e9da
    FSTP float ptr [EBP + -0x18]        ; 0053e9dc
    FSTP float ptr [EBP + -0x14]        ; 0053e9df
    FSTP float ptr [EBP + -0x10]        ; 0053e9e2
    FLD float ptr [ESI + 0x4]           ; 0053e9e5
        ;   Label: LAB_0053e9e5
    FMUL double ptr [0x00595d97]        ; 0053e9e8 | DAT_00595d97
    FST float ptr [EBP + -0x8]          ; 0053e9ee
    FCOMP double ptr [0x00595d9f]       ; 0053e9f1 | DAT_00595d9f
    FNSTSW AX                           ; 0053e9f7
    SAHF                                ; 0053e9f9
    JNC 0x0053ea03                      ; 0053e9fa
        ;   XREF to: 0053ea03 (CONDITIONAL_JUMP)  ; LAB_0053ea03
    MOV dword ptr [EBP + -0x8],0x3f400000 ; 0053e9fc
    FLD float ptr [EBP + -0x8]          ; 0053ea03
        ;   Label: LAB_0053ea03
    FLD1                                ; 0053ea06
    FCOMPP                              ; 0053ea08
    FNSTSW AX                           ; 0053ea0a
    SAHF                                ; 0053ea0c
    JNC 0x0053ea16                      ; 0053ea0d
        ;   XREF to: 0053ea16 (CONDITIONAL_JUMP)  ; LAB_0053ea16
    MOV dword ptr [EBP + -0x8],0x3f800000 ; 0053ea0f
    FLD float ptr [EBP + -0x8]          ; 0053ea16
        ;   Label: LAB_0053ea16
    FLD float ptr [EBP + -0x18]         ; 0053ea19
    FMUL ST1                            ; 0053ea1c
    FLD float ptr [EBP + -0x14]         ; 0053ea1e
    FMUL ST2                            ; 0053ea21
    FLD float ptr [EBP + -0x10]         ; 0053ea23
    FMULP ST3                           ; 0053ea26
    MOV EDI,dword ptr [0x005b9284]      ; 0053ea28 | DAT_005b9284
    FXCH ST2                            ; 0053ea2e
    FSTP float ptr [EBP + -0x10]        ; 0053ea30
    PUSH dword ptr [EBP + -0x10]        ; 0053ea33
    FSTP float ptr [EBP + -0x18]        ; 0053ea36
    PUSH dword ptr [EBP + -0x18]        ; 0053ea39
    PUSH EDI                            ; 0053ea3c
    FSTP float ptr [EBP + -0x14]        ; 0053ea3d
    CALL FUN_004940d0                   ; 0053ea40
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    FLD float ptr [EBX + 0x2434]        ; 0053ea45
    FLDZ                                ; 0053ea4b
    ADD ESP,0xc                         ; 0053ea4d
    LEA EDI,[EBX + 0x150]               ; 0053ea50
    FCOMPP                              ; 0053ea56
    FNSTSW AX                           ; 0053ea58
    SAHF                                ; 0053ea5a
    JC 0x0053ec21                       ; 0053ea5b
        ;   XREF to: 0053ec21 (CONDITIONAL_JUMP)  ; LAB_0053ec21
    PUSH EBX                            ; 0053ea61
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053ea62
    MOV dword ptr [EBX + 0x2434],0x0    ; 0053ea68
    CALL dword ptr [EAX + 0xe8]         ; 0053ea72
    ADD ESP,0x4                         ; 0053ea78
    PUSH EDI                            ; 0053ea7b
    CALL FUN_004e1660                   ; 0053ea7c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053ea81
    ADD ESP,0x4                         ; 0053ea84
    CMP EAX,0x29                        ; 0053ea87
    JZ 0x0053eb21                       ; 0053ea8a
        ;   XREF to: 0053eb21 (CONDITIONAL_JUMP)  ; LAB_0053eb21
    PUSH EDI                            ; 0053ea90
    CALL FUN_004e1660                   ; 0053ea91
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053ea96
    ADD ESP,0x4                         ; 0053ea99
    CMP EAX,0x28                        ; 0053ea9c
    JZ 0x0053eb21                       ; 0053ea9f
        ;   XREF to: 0053eb21 (CONDITIONAL_JUMP)  ; LAB_0053eb21
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 0053eaa5
    JZ 0x0053ebcb                       ; 0053eaac
        ;   XREF to: 0053ebcb (CONDITIONAL_JUMP)  ; LAB_0053ebcb
    PUSH 0x1                            ; 0053eab2
        ;   Label: LAB_0053eab2
    PUSH 0xf                            ; 0053eab4
    LEA EAX,[EBX + 0x150]               ; 0053eab6
    MOV dword ptr [EBX + 0x1fa14],0x0   ; 0053eabc
    PUSH EAX                            ; 0053eac6
    MOV dword ptr [EBX + 0x1fa90],0x0   ; 0053eac7
    CALL FUN_004e16b0                   ; 0053ead1
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
        ;   Label: LAB_0053ead1
    ADD ESP,0xc                         ; 0053ead6
    MOV EDI,dword ptr [EBX + 0x1fcd0]   ; 0053ead9
    PUSH EDI                            ; 0053eadf
    CALL FUN_00527230                   ; 0053eae0
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    MOV EAX,dword ptr [ESI + 0x30]      ; 0053eae5
    ADD ESP,0x4                         ; 0053eae8
    CMP EAX,0x1                         ; 0053eaeb
    JZ 0x0053eb08                       ; 0053eaee
        ;   XREF to: 0053eb08 (CONDITIONAL_JUMP)  ; LAB_0053eb08
    PUSH 0x595d6b                       ; 0053eaf0 | = "stranger_die??.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053eaf5
    PUSH EBX                            ; 0053eafb
    CALL dword ptr [EAX + 0x24]         ; 0053eafc
    ADD ESP,0x8                         ; 0053eaff
    MOV dword ptr [EBX + 0x1fcd0],EAX   ; 0053eb02
    PUSH 0x0                            ; 0053eb08
        ;   Label: LAB_0053eb08
    PUSH 0x42480000                     ; 0053eb0a
    PUSH 0x32                           ; 0053eb0f
    PUSH EBX                            ; 0053eb11
    MOV EDX,dword ptr [0x005b96c4]      ; 0053eb12 | DAT_005b96c4
    PUSH EDX                            ; 0053eb18
    CALL FUN_004b0670                   ; 0053eb19
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0670()
    ADD ESP,0x14                        ; 0053eb1e
    MOV ECX,dword ptr [EBX + 0x1fa94]   ; 0053eb21
        ;   Label: LAB_0053eb21
    CMP ECX,dword ptr [EBX + 0x24ac]    ; 0053eb27
    JNZ 0x0053eb39                      ; 0053eb2d
        ;   XREF to: 0053eb39 (CONDITIONAL_JUMP)  ; LAB_0053eb39
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 0053eb2f
    PUSH 0x0                            ; 0053eb39
        ;   Label: LAB_0053eb39
    PUSH 0x0                            ; 0053eb3b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053eb3d
    PUSH EBX                            ; 0053eb43
    CALL dword ptr [EAX + 0x120]        ; 0053eb44
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053eb4a
    MOV EDI,dword ptr [EBX + 0x1fa94]   ; 0053eb50
    ADD ESP,0xc                         ; 0053eb56
    CMP EAX,EDI                         ; 0053eb59
    JNZ 0x0053eb67                      ; 0053eb5b
        ;   XREF to: 0053eb67 (CONDITIONAL_JUMP)  ; LAB_0053eb67
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 0053eb5d
    PUSH 0x0                            ; 0053eb67
        ;   Label: LAB_0053eb67
    PUSH 0x1                            ; 0053eb69
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053eb6b
    PUSH EBX                            ; 0053eb71
    CALL dword ptr [EAX + 0x120]        ; 0053eb72
    ADD ESP,0xc                         ; 0053eb78
    FLD float ptr [ESI + 0x4]           ; 0053eb7b
        ;   Label: LAB_0053eb7b
    FLDZ                                ; 0053eb7e
    FCOMPP                              ; 0053eb80
    FNSTSW AX                           ; 0053eb82
    SAHF                                ; 0053eb84
    JNC 0x0053eb95                      ; 0053eb85
        ;   XREF to: 0053eb95 (CONDITIONAL_JUMP)  ; LAB_0053eb95
    MOV EAX,[0x005b9354]                ; 0053eb87 | DAT_005b9354
    PUSH EAX                            ; 0053eb8c | DAT_01c775ec
    CALL FUN_004a3a90                   ; 0053eb8d
        ;   XREF to: 004a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a90()
    ADD ESP,0x4                         ; 0053eb92
    PUSH ESI                            ; 0053eb95
        ;   Label: LAB_0053eb95
    PUSH EBX                            ; 0053eb96
    CALL FUN_00428510                   ; 0053eb97
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined FUN_00428510()
    ADD ESP,0x8                         ; 0053eb9c
    MOV ESP,EBP                         ; 0053eb9f
    POP EBP                             ; 0053eba1
    POP EDI                             ; 0053eba2
    POP ESI                             ; 0053eba3
    POP EBX                             ; 0053eba4
    RET                                 ; 0053eba5
    MOV dword ptr [ESI + 0x4],0x0       ; 0053eba6
        ;   Label: LAB_0053eba6
    JMP 0x0053e881                      ; 0053ebad
        ;   XREF to: 0053e881 (UNCONDITIONAL_JUMP)  ; LAB_0053e881
    MOV dword ptr [ESI + 0x4],0x0       ; 0053ebb2
        ;   Label: LAB_0053ebb2
    MOV ESP,EBP                         ; 0053ebb9
    POP EBP                             ; 0053ebbb
    POP EDI                             ; 0053ebbc
    POP ESI                             ; 0053ebbd
    POP EBX                             ; 0053ebbe
    RET                                 ; 0053ebbf
    MOV dword ptr [EBP + -0x18],EDX     ; 0053ebc0
        ;   Label: LAB_0053ebc0
    MOV dword ptr [EBP + -0x10],EDX     ; 0053ebc3
    JMP 0x0053e9e5                      ; 0053ebc6
        ;   XREF to: 0053e9e5 (UNCONDITIONAL_JUMP)  ; LAB_0053e9e5
    CMP dword ptr [EBX + 0x1fa90],0x0   ; 0053ebcb
        ;   Label: LAB_0053ebcb
    JNZ 0x0053eab2                      ; 0053ebd2
        ;   XREF to: 0053eab2 (CONDITIONAL_JUMP)  ; LAB_0053eab2
    MOV ECX,dword ptr [ESI + 0x30]      ; 0053ebd8
    CMP ECX,0x1                         ; 0053ebdb
    JNZ 0x0053ebe9                      ; 0053ebde
        ;   XREF to: 0053ebe9 (CONDITIONAL_JUMP)  ; LAB_0053ebe9
    PUSH ECX                            ; 0053ebe0
    PUSH 0x27                           ; 0053ebe1
    PUSH EDI                            ; 0053ebe3
    JMP 0x0053ead1                      ; 0053ebe4
        ;   XREF to: 0053ead1 (UNCONDITIONAL_JUMP)  ; LAB_0053ead1
    PUSH 0x1                            ; 0053ebe9
        ;   Label: LAB_0053ebe9
    PUSH 0x42c80000                     ; 0053ebeb
    PUSH 0x0                            ; 0053ebf0
    CALL FUN_0040dda0                   ; 0053ebf2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [EBP + -0x4],EAX      ; 0053ebf7
    ADD ESP,0x8                         ; 0053ebfa
    FLD float ptr [EBP + -0x4]          ; 0053ebfd
    FCOMP float ptr [0x00595da7]        ; 0053ec00 | DAT_00595da7
    FNSTSW AX                           ; 0053ec06
    SAHF                                ; 0053ec08
    SETBE AL                            ; 0053ec09
    AND EAX,0xff                        ; 0053ec0c
    ADD EAX,0x25                        ; 0053ec11
    PUSH EAX                            ; 0053ec14
    LEA EAX,[EBX + 0x150]               ; 0053ec15
    PUSH EAX                            ; 0053ec1b
    JMP 0x0053ead1                      ; 0053ec1c
        ;   XREF to: 0053ead1 (UNCONDITIONAL_JUMP)  ; LAB_0053ead1
    FLD float ptr [ESI + 0x4]           ; 0053ec21
        ;   Label: LAB_0053ec21
    FLDZ                                ; 0053ec24
    FCOMPP                              ; 0053ec26
    FNSTSW AX                           ; 0053ec28
    SAHF                                ; 0053ec2a
    JNC 0x0053eb7b                      ; 0053ec2b
        ;   XREF to: 0053eb7b (CONDITIONAL_JUMP)  ; LAB_0053eb7b
    CMP dword ptr [ESI + 0x30],0x69     ; 0053ec31
    JZ 0x0053ec87                       ; 0053ec35
        ;   XREF to: 0053ec87 (CONDITIONAL_JUMP)  ; LAB_0053ec87
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 0053ec37
    JNZ 0x0053ec87                      ; 0053ec3e
        ;   XREF to: 0053ec87 (CONDITIONAL_JUMP)  ; LAB_0053ec87
    CMP dword ptr [EBX + 0x1fa90],0x0   ; 0053ec40
    JNZ 0x0053ec87                      ; 0053ec47
        ;   XREF to: 0053ec87 (CONDITIONAL_JUMP)  ; LAB_0053ec87
    CMP dword ptr [EBX + 0x1faa0],0x0   ; 0053ec49
    JNZ 0x0053ec87                      ; 0053ec50
        ;   XREF to: 0053ec87 (CONDITIONAL_JUMP)  ; LAB_0053ec87
    MOV EDX,dword ptr [0x02dd1008]      ; 0053ec52 | DAT_02dd1008
    PUSH EDX                            ; 0053ec58
    MOV ECX,dword ptr [ESI + 0x34]      ; 0053ec59
    PUSH ECX                            ; 0053ec5c
    CALL FUN_0040d890                   ; 0053ec5d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 0053ec62
    TEST EAX,EAX                        ; 0053ec65
    JZ 0x0053ec7a                       ; 0053ec67
        ;   XREF to: 0053ec7a (CONDITIONAL_JUMP)  ; LAB_0053ec7a
    PUSH 0x3eaa7efa                     ; 0053ec69
    CALL FUN_0040dea0                   ; 0053ec6e
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 0053ec73
    TEST EAX,EAX                        ; 0053ec76
    JZ 0x0053ec87                       ; 0053ec78
        ;   XREF to: 0053ec87 (CONDITIONAL_JUMP)  ; LAB_0053ec87
    PUSH 0x1                            ; 0053ec7a
        ;   Label: LAB_0053ec7a
    PUSH 0x24                           ; 0053ec7c
    PUSH EDI                            ; 0053ec7e
    CALL FUN_004e16b0                   ; 0053ec7f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 0053ec84
    MOV EDI,dword ptr [EBX + 0x1fcd0]   ; 0053ec87
        ;   Label: LAB_0053ec87
    PUSH EDI                            ; 0053ec8d
    CALL FUN_00526c50                   ; 0053ec8e
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 0053ec93
    TEST EAX,EAX                        ; 0053ec96
    JNZ 0x0053eb7b                      ; 0053ec98
        ;   XREF to: 0053eb7b (CONDITIONAL_JUMP)  ; LAB_0053eb7b
    PUSH 0x595d7e                       ; 0053ec9e | = "stranger_hit??.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053eca3
    PUSH EBX                            ; 0053eca9
    CALL dword ptr [EAX + 0x24]         ; 0053ecaa
    ADD ESP,0x8                         ; 0053ecad
    MOV dword ptr [EBX + 0x1fcd0],EAX   ; 0053ecb0
    JMP 0x0053eb7b                      ; 0053ecb6
        ;   XREF to: 0053eb7b (UNCONDITIONAL_JUMP)  ; LAB_0053eb7b

