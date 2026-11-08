; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_00594f40(uint param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00469590 at 00469633
;   FUN_0046b750 at 0046b7ae
;
; Referenced Globals:
;   void* switchdataD_00594efc = 005950cc
;   void* PTR_caseD_3_00594f08 = 00595111
;   void* PTR_caseD_1_00594f10 = 00595466
;   void* PTR_caseD_3_00594f18 = 005951db
;   void* switchdataD_00594f1c = 0059525b
;   void* PTR_caseD_3_00594f28 = 005952a0
;   void* PTR_caseD_1_00594f30 = 0059559a
;   void* PTR_caseD_3_00594f38 = 0059536b
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;   undefined4 DAT_00622020
;   undefined4 DAT_00622024
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;   undefined4 DAT_007bee38
;   ... and 41 more
;
; Called Functions:
;   FUN_005945b0
;   FUN_00594670
;   FUN_00594730
;   FUN_005947f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594f40
        ;   Label: FUN_00594f40
    PUSH ESI                            ; 00594f41
    PUSH EDI                            ; 00594f42
    PUSH EBP                            ; 00594f43
    SUB ESP,0x18                        ; 00594f44
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00594f47
    MOV EDI,dword ptr [ESP + 0x30]      ; 00594f4b
    XOR EAX,EAX                         ; 00594f4f
    XOR EBX,EBX                         ; 00594f51
    TEST EBP,EBP                        ; 00594f53
    JLE 0x00594f73                      ; 00594f55
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    MOV EDX,EDI                         ; 00594f57
    IMUL ESI,dword ptr [EDX],0x30       ; 00594f59
        ;   Label: LAB_00594f59
    MOV ESI,dword ptr [ESI + 0x622024]  ; 00594f5c | DAT_00622024
    TEST ESI,0x80000000                 ; 00594f62
    JZ 0x00594f6b                       ; 00594f68
        ;   XREF to: 00594f6b (CONDITIONAL_JUMP)  ; LAB_00594f6b
    INC EBX                             ; 00594f6a
    INC EAX                             ; 00594f6b
        ;   Label: LAB_00594f6b
    ADD EDX,0x4                         ; 00594f6c
    CMP EAX,EBP                         ; 00594f6f
    JL 0x00594f59                       ; 00594f71
        ;   XREF to: 00594f59 (CONDITIONAL_JUMP)  ; LAB_00594f59
    TEST EBX,EBX                        ; 00594f73
        ;   Label: LAB_00594f73
    JNZ 0x00594fe8                      ; 00594f75
        ;   XREF to: 00594fe8 (CONDITIONAL_JUMP)  ; LAB_00594fe8
    MOV dword ptr [ESP + 0x4],EBX       ; 00594f7b
    MOV dword ptr [0x007bee30],EBP      ; 00594f7f | DAT_007bee30
    TEST EBP,EBP                        ; 00594f85
    JLE 0x00594fe0                      ; 00594f87
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    MOV EDX,0x7bee34                    ; 00594f89 | DAT_007bee34
    MOV EBX,EDI                         ; 00594f8e
    IMUL ESI,dword ptr [EBX],0x30       ; 00594f90
        ;   Label: LAB_00594f90
    MOV ECX,0x30                        ; 00594f93
    ADD ESI,0x622014                    ; 00594f98 | DAT_00622014
    MOV EDI,EDX                         ; 00594f9e
    TEST EDI,0x7                        ; 00594fa0
    JZ 0x00594fae                       ; 00594fa6
        ;   XREF to: 00594fae (CONDITIONAL_JUMP)  ; LAB_00594fae
    MOVSD ES:EDI,ESI                    ; 00594fa8 | DAT_00622014 | DAT_007bee34 | DAT_007bee64
    SUB ECX,0x4                         ; 00594fa9
    JLE 0x00594fcb                      ; 00594fac
        ;   XREF to: 00594fcb (CONDITIONAL_JUMP)  ; LAB_00594fcb
    SUB ECX,0x8                         ; 00594fae
        ;   Label: LAB_00594fae
    JL 0x00594fbf                       ; 00594fb1
        ;   XREF to: 00594fbf (CONDITIONAL_JUMP)  ; LAB_00594fbf
    FILD qword ptr [ESI]                ; 00594fb3 | DAT_00622018 | DAT_00622020 | DAT_00622014
    ADD ESI,0x8                         ; 00594fb5
    FISTP qword ptr [EDI]               ; 00594fb8 | DAT_007bee38 | DAT_007bee40 | DAT_007bee68
    ADD EDI,0x8                         ; 00594fba
    JMP 0x00594fae                      ; 00594fbd
        ;   XREF to: 00594fae (UNCONDITIONAL_JUMP)  ; LAB_00594fae
    ADD ECX,0x8                         ; 00594fbf
        ;   Label: LAB_00594fbf
    JLE 0x00594fcb                      ; 00594fc2
        ;   XREF to: 00594fcb (CONDITIONAL_JUMP)  ; LAB_00594fcb
    MOVSD ES:EDI,ESI                    ; 00594fc4 | DAT_00622020 | DAT_007bee40
    SUB ECX,0x4                         ; 00594fc5
    JLE 0x00594fcb                      ; 00594fc8
        ;   XREF to: 00594fcb (CONDITIONAL_JUMP)  ; LAB_00594fcb
    MOVSD ES:EDI,ESI                    ; 00594fca | DAT_00622024 | DAT_007bee44
    MOV EAX,dword ptr [ESP + 0x4]       ; 00594fcb
        ;   Label: LAB_00594fcb
    ADD EBX,0x4                         ; 00594fcf
    INC EAX                             ; 00594fd2
    ADD EDX,0x30                        ; 00594fd3
    MOV dword ptr [ESP + 0x4],EAX       ; 00594fd6
    CMP EBP,EAX                         ; 00594fda
    JG 0x00594f90                       ; 00594fdc
        ;   XREF to: 00594f90 (CONDITIONAL_JUMP)  ; LAB_00594f90
    MOV EAX,EAX                         ; 00594fde
    ADD ESP,0x18                        ; 00594fe0
        ;   Label: LAB_00594fe0
    POP EBP                             ; 00594fe3
    POP EDI                             ; 00594fe4
    POP ESI                             ; 00594fe5
    POP EBX                             ; 00594fe6
    RET                                 ; 00594fe7
    MOV dword ptr [0x02665a5c],EBP      ; 00594fe8 | DAT_02665a5c
        ;   Label: LAB_00594fe8
    XOR EDX,EDX                         ; 00594fee
    XOR EBX,EBX                         ; 00594ff0
    MOV dword ptr [0x02665a60],EDX      ; 00594ff2 | DAT_02665a60
    MOV dword ptr [0x02665a64],EDX      ; 00594ff8 | DAT_02665a64
    MOV dword ptr [0x02665a68],EDX      ; 00594ffe | DAT_02665a68
    MOV dword ptr [0x007bee30],EDX      ; 00595004 | DAT_007bee30
    TEST EBP,EBP                        ; 0059500a
    JLE 0x00595070                      ; 0059500c
        ;   XREF to: 00595070 (CONDITIONAL_JUMP)  ; LAB_00595070
    MOV EDX,0x266606c                   ; 0059500e
    MOV dword ptr [ESP],EDI             ; 00595013
    MOV EAX,dword ptr [ESP]             ; 00595016
        ;   Label: LAB_00595016
    IMUL ESI,dword ptr [EAX],0x30       ; 00595019
    MOV ECX,0x30                        ; 0059501c
    ADD ESI,0x622014                    ; 00595021 | DAT_00622014
    MOV EDI,EDX                         ; 00595027
    TEST EDI,0x7                        ; 00595029
    JZ 0x00595037                       ; 0059502f
        ;   XREF to: 00595037 (CONDITIONAL_JUMP)  ; LAB_00595037
    MOVSD ES:EDI,ESI                    ; 00595031 | DAT_00622014 | DAT_0266606c | DAT_0266609c
    SUB ECX,0x4                         ; 00595032
    JLE 0x00595054                      ; 00595035
        ;   XREF to: 00595054 (CONDITIONAL_JUMP)  ; LAB_00595054
    SUB ECX,0x8                         ; 00595037
        ;   Label: LAB_00595037
    JL 0x00595048                       ; 0059503a
        ;   XREF to: 00595048 (CONDITIONAL_JUMP)  ; LAB_00595048
    FILD qword ptr [ESI]                ; 0059503c | DAT_00622018 | DAT_00622020 | DAT_00622014
    ADD ESI,0x8                         ; 0059503e
    FISTP qword ptr [EDI]               ; 00595041 | DAT_02666070 | DAT_02666078 | DAT_026660a0
    ADD EDI,0x8                         ; 00595043
    JMP 0x00595037                      ; 00595046
        ;   XREF to: 00595037 (UNCONDITIONAL_JUMP)  ; LAB_00595037
    ADD ECX,0x8                         ; 00595048
        ;   Label: LAB_00595048
    JLE 0x00595054                      ; 0059504b
        ;   XREF to: 00595054 (CONDITIONAL_JUMP)  ; LAB_00595054
    MOVSD ES:EDI,ESI                    ; 0059504d | DAT_00622020 | DAT_02666078
    SUB ECX,0x4                         ; 0059504e
    JLE 0x00595054                      ; 00595051
        ;   XREF to: 00595054 (CONDITIONAL_JUMP)  ; LAB_00595054
    MOVSD ES:EDI,ESI                    ; 00595053 | DAT_00622024 | DAT_0266607c
    MOV EAX,dword ptr [ESP]             ; 00595054
        ;   Label: LAB_00595054
    INC EBX                             ; 00595057
    ADD EAX,0x4                         ; 00595058
    ADD EDX,0x30                        ; 0059505b
    MOV dword ptr [ESP],EAX             ; 0059505e
    CMP EBX,EBP                         ; 00595061
    JL 0x00595016                       ; 00595063
        ;   XREF to: 00595016 (CONDITIONAL_JUMP)  ; LAB_00595016
    LEA EAX,[EAX]                       ; 00595065
    LEA EDX,[EDX]                       ; 0059506b
    MOV EBX,EBX                         ; 0059506e
    XOR EDX,EDX                         ; 00595070
        ;   Label: LAB_00595070
    MOV ECX,dword ptr [0x02665a5c]      ; 00595072 | DAT_02665a5c
    MOV dword ptr [ESP + 0x8],EDX       ; 00595078
    TEST ECX,ECX                        ; 0059507c
    JLE 0x0059512b                      ; 0059507e
        ;   XREF to: 0059512b (CONDITIONAL_JUMP)  ; LAB_0059512b
    MOV EBX,0x266606c                   ; 00595084
    MOV EAX,dword ptr [ESP + 0x8]       ; 00595089
        ;   Label: LAB_00595089
    MOV ECX,dword ptr [0x02665a5c]      ; 0059508d | DAT_02665a5c
    INC EAX                             ; 00595093
    CMP EAX,ECX                         ; 00595094
    JNZ 0x0059509a                      ; 00595096
        ;   XREF to: 0059509a (CONDITIONAL_JUMP)  ; LAB_0059509a
    XOR EAX,ECX                         ; 00595098
    IMUL EAX,EAX,0x30                   ; 0059509a
        ;   Label: LAB_0059509a
    MOV EBP,0x266606c                   ; 0059509d
    MOV EDX,EBX                         ; 005950a2
    MOV ESI,dword ptr [EBX]             ; 005950a4 | DAT_0266606c | DAT_0266609c
    MOV EDI,dword ptr [EBX + 0x8]       ; 005950a6 | DAT_02666074 | DAT_026660a4
    ADD EBP,EAX                         ; 005950a9
    XOR EAX,EAX                         ; 005950ab
    CMP ESI,EDI                         ; 005950ad
    JL 0x005950b6                       ; 005950af
        ;   XREF to: 005950b6 (CONDITIONAL_JUMP)  ; LAB_005950b6
    MOV EAX,0x1                         ; 005950b1
    MOV ECX,dword ptr [EBP + 0x8]       ; 005950b6 | DAT_02666074
        ;   Label: LAB_005950b6
    CMP ECX,dword ptr [EBP]             ; 005950b9 | DAT_0266606c
    JG 0x005950c0                       ; 005950bc
        ;   XREF to: 005950c0 (CONDITIONAL_JUMP)  ; LAB_005950c0
    OR AL,0x2                           ; 005950be
    CMP EAX,0x3                         ; 005950c0
        ;   Label: LAB_005950c0
    JA 0x00595111                       ; 005950c3
        ;   XREF to: 00595111 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594efc]  ; 005950c5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02665a60],0x30 ; 005950cc | DAT_02665a60
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005950d3
    MOV ESI,EDX                         ; 005950d8
    ADD EDI,0x2665a6c                   ; 005950da
    TEST EDI,0x7                        ; 005950e0
    JZ 0x005950ee                       ; 005950e6
        ;   XREF to: 005950ee (CONDITIONAL_JUMP)  ; LAB_005950ee
    MOVSD ES:EDI,ESI                    ; 005950e8 | DAT_0266609c | DAT_02665a6c
    SUB ECX,0x4                         ; 005950e9
    JLE 0x0059510b                      ; 005950ec
        ;   XREF to: 0059510b (CONDITIONAL_JUMP)  ; LAB_0059510b
    SUB ECX,0x8                         ; 005950ee
        ;   Label: LAB_005950ee
    JL 0x005950ff                       ; 005950f1
        ;   XREF to: 005950ff (CONDITIONAL_JUMP)  ; LAB_005950ff
    FILD qword ptr [ESI]                ; 005950f3 | DAT_026660a0 | DAT_026660a8 | DAT_0266609c
    ADD ESI,0x8                         ; 005950f5
    FISTP qword ptr [EDI]               ; 005950f8 | DAT_02665a70 | DAT_02665a78 | DAT_02665a6c
    ADD EDI,0x8                         ; 005950fa
    JMP 0x005950ee                      ; 005950fd
        ;   XREF to: 005950ee (UNCONDITIONAL_JUMP)  ; LAB_005950ee
    ADD ECX,0x8                         ; 005950ff
        ;   Label: LAB_005950ff
    JLE 0x0059510b                      ; 00595102
        ;   XREF to: 0059510b (CONDITIONAL_JUMP)  ; LAB_0059510b
    MOVSD ES:EDI,ESI                    ; 00595104 | DAT_026660a8 | DAT_02665a78
    SUB ECX,0x4                         ; 00595105
    JLE 0x0059510b                      ; 00595108
        ;   XREF to: 0059510b (CONDITIONAL_JUMP)  ; LAB_0059510b
    MOVSD ES:EDI,ESI                    ; 0059510a | DAT_026660ac | DAT_02665a7c
    INC dword ptr [0x02665a60]          ; 0059510b | DAT_02665a60
        ;   Label: LAB_0059510b
    MOV ESI,dword ptr [ESP + 0x8]       ; 00595111
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02665a5c]      ; 00595115 | DAT_02665a5c
    INC ESI                             ; 0059511b
    ADD EBX,0x30                        ; 0059511c
    MOV dword ptr [ESP + 0x8],ESI       ; 0059511f
    CMP ESI,EDI                         ; 00595123
    JL 0x00595089                       ; 00595125
        ;   XREF to: 00595089 (CONDITIONAL_JUMP)  ; LAB_00595089
    MOV EBP,dword ptr [0x02665a60]      ; 0059512b | DAT_02665a60
        ;   Label: LAB_0059512b
    CMP EBP,0x3                         ; 00595131
    JL 0x00594fe0                       ; 00595134
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    XOR EAX,EAX                         ; 0059513a
    MOV dword ptr [ESP + 0x10],EAX      ; 0059513c
    TEST EBP,EBP                        ; 00595140
    JLE 0x005951f5                      ; 00595142
        ;   XREF to: 005951f5 (CONDITIONAL_JUMP)  ; LAB_005951f5
    MOV EBX,0x2665a6c                   ; 00595148
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059514d
        ;   Label: LAB_0059514d
    MOV EDX,dword ptr [0x02665a60]      ; 00595151 | DAT_02665a60
    INC EAX                             ; 00595157
    CMP EAX,EDX                         ; 00595158
    JNZ 0x0059515e                      ; 0059515a
        ;   XREF to: 0059515e (CONDITIONAL_JUMP)  ; LAB_0059515e
    XOR EAX,EDX                         ; 0059515c
    IMUL EAX,EAX,0x30                   ; 0059515e
        ;   Label: LAB_0059515e
    MOV EBP,0x2665a6c                   ; 00595161
    MOV EDX,EBX                         ; 00595166
    MOV ESI,dword ptr [EBX + 0x8]       ; 00595168 | DAT_02665a74 | DAT_02665aa4
    MOV ECX,dword ptr [EBX]             ; 0059516b | DAT_02665a6c | DAT_02665a9c
    NEG ESI                             ; 0059516d
    ADD EBP,EAX                         ; 0059516f
    XOR EAX,EAX                         ; 00595171
    CMP ESI,ECX                         ; 00595173
    JL 0x0059517c                       ; 00595175
        ;   XREF to: 0059517c (CONDITIONAL_JUMP)  ; LAB_0059517c
    MOV EAX,0x1                         ; 00595177
    MOV ESI,dword ptr [EBP + 0x8]       ; 0059517c | DAT_02665a74
        ;   Label: LAB_0059517c
    MOV EDI,dword ptr [EBP]             ; 0059517f | DAT_02665a6c
    NEG ESI                             ; 00595182
    CMP ESI,EDI                         ; 00595184
    JL 0x0059518a                       ; 00595186
        ;   XREF to: 0059518a (CONDITIONAL_JUMP)  ; LAB_0059518a
    OR AL,0x2                           ; 00595188
    CMP EAX,0x3                         ; 0059518a
        ;   Label: LAB_0059518a
    JA 0x005951db                       ; 0059518d
        ;   XREF to: 005951db (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594f0c]  ; 0059518f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02665a64],0x30 ; 00595196 | DAT_02665a64
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0059519d
    MOV ESI,EDX                         ; 005951a2
    ADD EDI,0x266666c                   ; 005951a4
    TEST EDI,0x7                        ; 005951aa
    JZ 0x005951b8                       ; 005951b0
        ;   XREF to: 005951b8 (CONDITIONAL_JUMP)  ; LAB_005951b8
    MOVSD ES:EDI,ESI                    ; 005951b2 | DAT_02665a6c
    SUB ECX,0x4                         ; 005951b3
    JLE 0x005951d5                      ; 005951b6
        ;   XREF to: 005951d5 (CONDITIONAL_JUMP)  ; LAB_005951d5
    SUB ECX,0x8                         ; 005951b8
        ;   Label: LAB_005951b8
    JL 0x005951c9                       ; 005951bb
        ;   XREF to: 005951c9 (CONDITIONAL_JUMP)  ; LAB_005951c9
    FILD qword ptr [ESI]                ; 005951bd | DAT_02665a70 | DAT_02665a78 | DAT_02665a6c
    ADD ESI,0x8                         ; 005951bf
    FISTP qword ptr [EDI]               ; 005951c2 | DAT_02666670
    ADD EDI,0x8                         ; 005951c4
    JMP 0x005951b8                      ; 005951c7
        ;   XREF to: 005951b8 (UNCONDITIONAL_JUMP)  ; LAB_005951b8
    ADD ECX,0x8                         ; 005951c9
        ;   Label: LAB_005951c9
    JLE 0x005951d5                      ; 005951cc
        ;   XREF to: 005951d5 (CONDITIONAL_JUMP)  ; LAB_005951d5
    MOVSD ES:EDI,ESI                    ; 005951ce | DAT_02665a78
    SUB ECX,0x4                         ; 005951cf
    JLE 0x005951d5                      ; 005951d2
        ;   XREF to: 005951d5 (CONDITIONAL_JUMP)  ; LAB_005951d5
    MOVSD ES:EDI,ESI                    ; 005951d4 | DAT_02665a7c
    INC dword ptr [0x02665a64]          ; 005951d5 | DAT_02665a64
        ;   Label: LAB_005951d5
    MOV ECX,dword ptr [ESP + 0x10]      ; 005951db
        ;   Label: caseD_3
    MOV ESI,dword ptr [0x02665a60]      ; 005951df | DAT_02665a60
    INC ECX                             ; 005951e5
    ADD EBX,0x30                        ; 005951e6
    MOV dword ptr [ESP + 0x10],ECX      ; 005951e9
    CMP ECX,ESI                         ; 005951ed
    JL 0x0059514d                       ; 005951ef
        ;   XREF to: 0059514d (CONDITIONAL_JUMP)  ; LAB_0059514d
    MOV EDI,dword ptr [0x02665a64]      ; 005951f5 | DAT_02665a64
        ;   Label: LAB_005951f5
    CMP EDI,0x3                         ; 005951fb
    JL 0x00594fe0                       ; 005951fe
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    XOR EBP,EBP                         ; 00595204
    MOV dword ptr [ESP + 0x14],EBP      ; 00595206
    TEST EDI,EDI                        ; 0059520a
    JLE 0x005952ba                      ; 0059520c
        ;   XREF to: 005952ba (CONDITIONAL_JUMP)  ; LAB_005952ba
    MOV EBX,0x266666c                   ; 00595212
    MOV EAX,dword ptr [ESP + 0x14]      ; 00595217
        ;   Label: LAB_00595217
    MOV EBP,dword ptr [0x02665a64]      ; 0059521b | DAT_02665a64
    INC EAX                             ; 00595221
    CMP EAX,EBP                         ; 00595222
    JNZ 0x00595228                      ; 00595224
        ;   XREF to: 00595228 (CONDITIONAL_JUMP)  ; LAB_00595228
    XOR EAX,EBP                         ; 00595226
    IMUL EAX,EAX,0x30                   ; 00595228
        ;   Label: LAB_00595228
    MOV EBP,0x266666c                   ; 0059522b
    MOV EDX,EBX                         ; 00595230
    MOV ESI,dword ptr [EBX + 0x4]       ; 00595232 | DAT_02666670 | DAT_026666a0
    MOV ECX,dword ptr [EBX + 0x8]       ; 00595235 | DAT_02666674 | DAT_026666a4
    ADD EBP,EAX                         ; 00595238
    XOR EAX,EAX                         ; 0059523a
    CMP ESI,ECX                         ; 0059523c
    JL 0x00595245                       ; 0059523e
        ;   XREF to: 00595245 (CONDITIONAL_JUMP)  ; LAB_00595245
    MOV EAX,0x1                         ; 00595240
    MOV EDI,dword ptr [EBP + 0x8]       ; 00595245 | DAT_02666674
        ;   Label: LAB_00595245
    CMP EDI,dword ptr [EBP + 0x4]       ; 00595248 | DAT_02666670
    JG 0x0059524f                       ; 0059524b
        ;   XREF to: 0059524f (CONDITIONAL_JUMP)  ; LAB_0059524f
    OR AL,0x2                           ; 0059524d
    CMP EAX,0x3                         ; 0059524f
        ;   Label: LAB_0059524f
    JA 0x005952a0                       ; 00595252
        ;   XREF to: 005952a0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594f1c]  ; 00595254 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02665a68],0x30 ; 0059525b | DAT_02665a68
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00595262
    MOV ESI,EDX                         ; 00595267
    ADD EDI,0x2666c6c                   ; 00595269
    TEST EDI,0x7                        ; 0059526f
    JZ 0x0059527d                       ; 00595275
        ;   XREF to: 0059527d (CONDITIONAL_JUMP)  ; LAB_0059527d
    MOVSD ES:EDI,ESI                    ; 00595277 | DAT_0266669c | DAT_02666c6c
    SUB ECX,0x4                         ; 00595278
    JLE 0x0059529a                      ; 0059527b
        ;   XREF to: 0059529a (CONDITIONAL_JUMP)  ; LAB_0059529a
    SUB ECX,0x8                         ; 0059527d
        ;   Label: LAB_0059527d
    JL 0x0059528e                       ; 00595280
        ;   XREF to: 0059528e (CONDITIONAL_JUMP)  ; LAB_0059528e
    FILD qword ptr [ESI]                ; 00595282 | DAT_026666a0 | DAT_026666a8 | DAT_0266669c
    ADD ESI,0x8                         ; 00595284
    FISTP qword ptr [EDI]               ; 00595287 | DAT_02666c70 | DAT_02666c78 | DAT_02666c6c
    ADD EDI,0x8                         ; 00595289
    JMP 0x0059527d                      ; 0059528c
        ;   XREF to: 0059527d (UNCONDITIONAL_JUMP)  ; LAB_0059527d
    ADD ECX,0x8                         ; 0059528e
        ;   Label: LAB_0059528e
    JLE 0x0059529a                      ; 00595291
        ;   XREF to: 0059529a (CONDITIONAL_JUMP)  ; LAB_0059529a
    MOVSD ES:EDI,ESI                    ; 00595293 | DAT_026666a8 | DAT_02666c78
    SUB ECX,0x4                         ; 00595294
    JLE 0x0059529a                      ; 00595297
        ;   XREF to: 0059529a (CONDITIONAL_JUMP)  ; LAB_0059529a
    MOVSD ES:EDI,ESI                    ; 00595299 | DAT_026666ac | DAT_02666c7c
    INC dword ptr [0x02665a68]          ; 0059529a | DAT_02665a68
        ;   Label: LAB_0059529a
    MOV EDX,dword ptr [ESP + 0x14]      ; 005952a0
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02665a64]      ; 005952a4 | DAT_02665a64
    INC EDX                             ; 005952aa
    ADD EBX,0x30                        ; 005952ab
    MOV dword ptr [ESP + 0x14],EDX      ; 005952ae
    CMP EDX,ECX                         ; 005952b2
    JL 0x00595217                       ; 005952b4
        ;   XREF to: 00595217 (CONDITIONAL_JUMP)  ; LAB_00595217
    MOV EBX,dword ptr [0x02665a68]      ; 005952ba | DAT_02665a68
        ;   Label: LAB_005952ba
    CMP EBX,0x3                         ; 005952c0
    JL 0x00594fe0                       ; 005952c3
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    XOR ESI,ESI                         ; 005952c9
    MOV dword ptr [ESP + 0xc],ESI       ; 005952cb
    TEST EBX,EBX                        ; 005952cf
    JLE 0x00595385                      ; 005952d1
        ;   XREF to: 00595385 (CONDITIONAL_JUMP)  ; LAB_00595385
    MOV EBX,0x2666c6c                   ; 005952d7
    MOV EAX,dword ptr [ESP + 0xc]       ; 005952dc
        ;   Label: LAB_005952dc
    MOV EDI,dword ptr [0x02665a68]      ; 005952e0 | DAT_02665a68
    INC EAX                             ; 005952e6
    CMP EAX,EDI                         ; 005952e7
    JNZ 0x005952ed                      ; 005952e9
        ;   XREF to: 005952ed (CONDITIONAL_JUMP)  ; LAB_005952ed
    XOR EAX,EDI                         ; 005952eb
    IMUL EAX,EAX,0x30                   ; 005952ed
        ;   Label: LAB_005952ed
    MOV EBP,0x2666c6c                   ; 005952f0
    MOV EDX,EBX                         ; 005952f5
    MOV ESI,dword ptr [EBX + 0x8]       ; 005952f7 | DAT_02666c74 | DAT_02666ca4
    MOV ECX,dword ptr [EBX + 0x4]       ; 005952fa | DAT_02666c70 | DAT_02666ca0
    NEG ESI                             ; 005952fd
    ADD EBP,EAX                         ; 005952ff
    XOR EAX,EAX                         ; 00595301
    CMP ESI,ECX                         ; 00595303
    JL 0x0059530c                       ; 00595305
        ;   XREF to: 0059530c (CONDITIONAL_JUMP)  ; LAB_0059530c
    MOV EAX,0x1                         ; 00595307
    MOV ESI,dword ptr [EBP + 0x8]       ; 0059530c | DAT_02666c74
        ;   Label: LAB_0059530c
    MOV EDI,dword ptr [EBP + 0x4]       ; 0059530f | DAT_02666c70
    NEG ESI                             ; 00595312
    CMP ESI,EDI                         ; 00595314
    JL 0x0059531a                       ; 00595316
        ;   XREF to: 0059531a (CONDITIONAL_JUMP)  ; LAB_0059531a
    OR AL,0x2                           ; 00595318
    CMP EAX,0x3                         ; 0059531a
        ;   Label: LAB_0059531a
    JA 0x0059536b                       ; 0059531d
        ;   XREF to: 0059536b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594f2c]  ; 0059531f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00595326 | DAT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0059532d
    MOV ESI,EDX                         ; 00595332
    ADD EDI,0x7bee34                    ; 00595334 | DAT_007bee34
    TEST EDI,0x7                        ; 0059533a
    JZ 0x00595348                       ; 00595340
        ;   XREF to: 00595348 (CONDITIONAL_JUMP)  ; LAB_00595348
    MOVSD ES:EDI,ESI                    ; 00595342 | DAT_02666c6c | DAT_007bee34
    SUB ECX,0x4                         ; 00595343
    JLE 0x00595365                      ; 00595346
        ;   XREF to: 00595365 (CONDITIONAL_JUMP)  ; LAB_00595365
    SUB ECX,0x8                         ; 00595348
        ;   Label: LAB_00595348
    JL 0x00595359                       ; 0059534b
        ;   XREF to: 00595359 (CONDITIONAL_JUMP)  ; LAB_00595359
    FILD qword ptr [ESI]                ; 0059534d | DAT_02666c70 | DAT_02666c78 | DAT_02666c6c
    ADD ESI,0x8                         ; 0059534f
    FISTP qword ptr [EDI]               ; 00595352 | DAT_007bee38 | DAT_007bee40 | DAT_007bee34
    ADD EDI,0x8                         ; 00595354
    JMP 0x00595348                      ; 00595357
        ;   XREF to: 00595348 (UNCONDITIONAL_JUMP)  ; LAB_00595348
    ADD ECX,0x8                         ; 00595359
        ;   Label: LAB_00595359
    JLE 0x00595365                      ; 0059535c
        ;   XREF to: 00595365 (CONDITIONAL_JUMP)  ; LAB_00595365
    MOVSD ES:EDI,ESI                    ; 0059535e | DAT_02666c78 | DAT_007bee40
    SUB ECX,0x4                         ; 0059535f
    JLE 0x00595365                      ; 00595362
        ;   XREF to: 00595365 (CONDITIONAL_JUMP)  ; LAB_00595365
    MOVSD ES:EDI,ESI                    ; 00595364 | DAT_02666c7c | DAT_007bee44
    INC dword ptr [0x007bee30]          ; 00595365 | DAT_007bee30
        ;   Label: LAB_00595365
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059536b
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02665a68]      ; 0059536f | DAT_02665a68
    INC EDX                             ; 00595375
    ADD EBX,0x30                        ; 00595376
    MOV dword ptr [ESP + 0xc],EDX       ; 00595379
    CMP EDX,ECX                         ; 0059537d
    JL 0x005952dc                       ; 0059537f
        ;   XREF to: 005952dc (CONDITIONAL_JUMP)  ; LAB_005952dc
    MOV EBX,dword ptr [0x007bee30]      ; 00595385 | DAT_007bee30
        ;   Label: LAB_00595385
    CMP EBX,0x3                         ; 0059538b
    JL 0x00594fe0                       ; 0059538e
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    MOV EAX,0x7bee34                    ; 00595394 | DAT_007bee34
    XOR EBP,EBP                         ; 00595399
    TEST EBX,EBX                        ; 0059539b
    JLE 0x00594fe0                      ; 0059539d
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    MOV ECX,dword ptr [EAX + 0x8]       ; 005953a3 | DAT_007bee3c | DAT_007bee6c
        ;   Label: LAB_005953a3
    TEST ECX,ECX                        ; 005953a6
    JZ 0x00595634                       ; 005953a8
        ;   XREF to: 00595634 (CONDITIONAL_JUMP)  ; LAB_00595634
    CMP ECX,dword ptr [EAX]             ; 005953ae | DAT_007bee34 | DAT_007bee64
    JGE 0x00595645                      ; 005953b0
        ;   XREF to: 00595645 (CONDITIONAL_JUMP)  ; LAB_00595645
    MOV dword ptr [EAX],ECX             ; 005953b6 | DAT_007bee34 | DAT_007bee64
    MOV EDX,dword ptr [0x007bee30]      ; 005953b8 | DAT_007bee30
        ;   Label: LAB_005953b8
    INC EBP                             ; 005953be
    ADD EAX,0x30                        ; 005953bf | DAT_007bee64
    CMP EBP,EDX                         ; 005953c2
    JGE 0x00594fe0                      ; 005953c4
        ;   XREF to: 00594fe0 (CONDITIONAL_JUMP)  ; LAB_00594fe0
    JMP 0x005953a3                      ; 005953ca
        ;   XREF to: 005953a3 (UNCONDITIONAL_JUMP)  ; LAB_005953a3
    IMUL EAX,dword ptr [0x02665a60],0x30 ; 005953cc | DAT_02665a60
        ;   Label: caseD_1
    ADD EAX,0x2665a6c                   ; 005953d3
    PUSH EAX                            ; 005953d8 | DAT_02665a6c
    PUSH EDX                            ; 005953d9 | DAT_0266609c
    PUSH EBP                            ; 005953da
    CALL FUN_005945b0                   ; 005953db
        ;   XREF to: 005945b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005945b0()
    MOV EBP,dword ptr [0x02665a60]      ; 005953e0 | DAT_02665a60
    INC EBP                             ; 005953e6
    ADD ESP,0xc                         ; 005953e7
    MOV dword ptr [0x02665a60],EBP      ; 005953ea | DAT_02665a60
    JMP 0x00595111                      ; 005953f0
        ;   XREF to: 00595111 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02665a60],0x30 ; 005953f5 | DAT_02665a60
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005953fc
    ADD EDI,0x2665a6c                   ; 00595401
    MOV ESI,EDX                         ; 00595407
    TEST EDI,0x7                        ; 00595409
    JZ 0x00595417                       ; 0059540f
        ;   XREF to: 00595417 (CONDITIONAL_JUMP)  ; LAB_00595417
    MOVSD ES:EDI,ESI                    ; 00595411 | DAT_0266609c | DAT_02665a6c
    SUB ECX,0x4                         ; 00595412
    JLE 0x00595434                      ; 00595415
        ;   XREF to: 00595434 (CONDITIONAL_JUMP)  ; LAB_00595434
    SUB ECX,0x8                         ; 00595417
        ;   Label: LAB_00595417
    JL 0x00595428                       ; 0059541a
        ;   XREF to: 00595428 (CONDITIONAL_JUMP)  ; LAB_00595428
    FILD qword ptr [ESI]                ; 0059541c | DAT_026660a0 | DAT_026660a8 | DAT_0266609c
    ADD ESI,0x8                         ; 0059541e
    FISTP qword ptr [EDI]               ; 00595421 | DAT_02665a70 | DAT_02665a78 | DAT_02665a6c
    ADD EDI,0x8                         ; 00595423
    JMP 0x00595417                      ; 00595426
        ;   XREF to: 00595417 (UNCONDITIONAL_JUMP)  ; LAB_00595417
    ADD ECX,0x8                         ; 00595428
        ;   Label: LAB_00595428
    JLE 0x00595434                      ; 0059542b
        ;   XREF to: 00595434 (CONDITIONAL_JUMP)  ; LAB_00595434
    MOVSD ES:EDI,ESI                    ; 0059542d | DAT_026660a8 | DAT_02665a78
    SUB ECX,0x4                         ; 0059542e
    JLE 0x00595434                      ; 00595431
        ;   XREF to: 00595434 (CONDITIONAL_JUMP)  ; LAB_00595434
    MOVSD ES:EDI,ESI                    ; 00595433 | DAT_026660ac | DAT_02665a7c
    MOV EDI,dword ptr [0x02665a60]      ; 00595434 | DAT_02665a60
        ;   Label: LAB_00595434
    INC EDI                             ; 0059543a
    MOV dword ptr [0x02665a60],EDI      ; 0059543b | DAT_02665a60
    IMUL EAX,EDI,0x30                   ; 00595441
    ADD EAX,0x2665a6c                   ; 00595444
    PUSH EAX                            ; 00595449 | DAT_02665a9c
    PUSH EBP                            ; 0059544a
    PUSH EDX                            ; 0059544b | DAT_0266609c
    CALL FUN_005945b0                   ; 0059544c
        ;   XREF to: 005945b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005945b0()
    MOV ESI,dword ptr [0x02665a60]      ; 00595451 | DAT_02665a60
    INC ESI                             ; 00595457
    ADD ESP,0xc                         ; 00595458
    MOV dword ptr [0x02665a60],ESI      ; 0059545b | DAT_02665a60
    JMP 0x00595111                      ; 00595461
        ;   XREF to: 00595111 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02665a64],0x30 ; 00595466 | DAT_02665a64
        ;   Label: caseD_1
    ADD EAX,0x266666c                   ; 0059546d
    PUSH EAX                            ; 00595472
    PUSH EDX                            ; 00595473 | DAT_02665a6c
    PUSH EBP                            ; 00595474
    CALL FUN_00594670                   ; 00595475
        ;   XREF to: 00594670 (UNCONDITIONAL_CALL)  ; undefined FUN_00594670()
    MOV ESI,dword ptr [0x02665a64]      ; 0059547a | DAT_02665a64
    INC ESI                             ; 00595480
    ADD ESP,0xc                         ; 00595481
    MOV dword ptr [0x02665a64],ESI      ; 00595484 | DAT_02665a64
    JMP 0x005951db                      ; 0059548a
        ;   XREF to: 005951db (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02665a64],0x30 ; 0059548f | DAT_02665a64
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00595496
    MOV ESI,EDX                         ; 0059549b
    ADD EDI,0x266666c                   ; 0059549d
    TEST EDI,0x7                        ; 005954a3
    JZ 0x005954b1                       ; 005954a9
        ;   XREF to: 005954b1 (CONDITIONAL_JUMP)  ; LAB_005954b1
    MOVSD ES:EDI,ESI                    ; 005954ab | DAT_02665a6c
    SUB ECX,0x4                         ; 005954ac
    JLE 0x005954ce                      ; 005954af
        ;   XREF to: 005954ce (CONDITIONAL_JUMP)  ; LAB_005954ce
    SUB ECX,0x8                         ; 005954b1
        ;   Label: LAB_005954b1
    JL 0x005954c2                       ; 005954b4
        ;   XREF to: 005954c2 (CONDITIONAL_JUMP)  ; LAB_005954c2
    FILD qword ptr [ESI]                ; 005954b6 | DAT_02665a70 | DAT_02665a78 | DAT_02665a6c
    ADD ESI,0x8                         ; 005954b8
    FISTP qword ptr [EDI]               ; 005954bb | DAT_02666670
    ADD EDI,0x8                         ; 005954bd
    JMP 0x005954b1                      ; 005954c0
        ;   XREF to: 005954b1 (UNCONDITIONAL_JUMP)  ; LAB_005954b1
    ADD ECX,0x8                         ; 005954c2
        ;   Label: LAB_005954c2
    JLE 0x005954ce                      ; 005954c5
        ;   XREF to: 005954ce (CONDITIONAL_JUMP)  ; LAB_005954ce
    MOVSD ES:EDI,ESI                    ; 005954c7 | DAT_02665a78
    SUB ECX,0x4                         ; 005954c8
    JLE 0x005954ce                      ; 005954cb
        ;   XREF to: 005954ce (CONDITIONAL_JUMP)  ; LAB_005954ce
    MOVSD ES:EDI,ESI                    ; 005954cd | DAT_02665a7c
    MOV ECX,dword ptr [0x02665a64]      ; 005954ce | DAT_02665a64
        ;   Label: LAB_005954ce
    INC ECX                             ; 005954d4
    MOV dword ptr [0x02665a64],ECX      ; 005954d5 | DAT_02665a64
    IMUL EAX,ECX,0x30                   ; 005954db
    ADD EAX,0x266666c                   ; 005954de
    PUSH EAX                            ; 005954e3 | DAT_0266669c
    PUSH EBP                            ; 005954e4
    PUSH EDX                            ; 005954e5 | DAT_02665a6c
    CALL FUN_00594670                   ; 005954e6
        ;   XREF to: 00594670 (UNCONDITIONAL_CALL)  ; undefined FUN_00594670()
    MOV EDI,dword ptr [0x02665a64]      ; 005954eb | DAT_02665a64
    INC EDI                             ; 005954f1
    ADD ESP,0xc                         ; 005954f2
    MOV dword ptr [0x02665a64],EDI      ; 005954f5 | DAT_02665a64
    JMP 0x005951db                      ; 005954fb
        ;   XREF to: 005951db (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02665a68],0x30 ; 00595500 | DAT_02665a68
        ;   Label: caseD_1
    ADD EAX,0x2666c6c                   ; 00595507
    PUSH EAX                            ; 0059550c | DAT_02666c6c
    PUSH EDX                            ; 0059550d | DAT_0266669c
    PUSH EBP                            ; 0059550e
    CALL FUN_00594730                   ; 0059550f
        ;   XREF to: 00594730 (UNCONDITIONAL_CALL)  ; undefined FUN_00594730()
    MOV ESI,dword ptr [0x02665a68]      ; 00595514 | DAT_02665a68
    INC ESI                             ; 0059551a
    ADD ESP,0xc                         ; 0059551b
    MOV dword ptr [0x02665a68],ESI      ; 0059551e | DAT_02665a68
    JMP 0x005952a0                      ; 00595524
        ;   XREF to: 005952a0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02665a68],0x30 ; 00595529 | DAT_02665a68
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00595530
    MOV ESI,EDX                         ; 00595535
    ADD EDI,0x2666c6c                   ; 00595537
    TEST EDI,0x7                        ; 0059553d
    JZ 0x0059554b                       ; 00595543
        ;   XREF to: 0059554b (CONDITIONAL_JUMP)  ; LAB_0059554b
    MOVSD ES:EDI,ESI                    ; 00595545 | DAT_0266669c | DAT_02666c6c
    SUB ECX,0x4                         ; 00595546
    JLE 0x00595568                      ; 00595549
        ;   XREF to: 00595568 (CONDITIONAL_JUMP)  ; LAB_00595568
    SUB ECX,0x8                         ; 0059554b
        ;   Label: LAB_0059554b
    JL 0x0059555c                       ; 0059554e
        ;   XREF to: 0059555c (CONDITIONAL_JUMP)  ; LAB_0059555c
    FILD qword ptr [ESI]                ; 00595550 | DAT_026666a0 | DAT_026666a8 | DAT_0266669c
    ADD ESI,0x8                         ; 00595552
    FISTP qword ptr [EDI]               ; 00595555 | DAT_02666c70 | DAT_02666c78 | DAT_02666c6c
    ADD EDI,0x8                         ; 00595557
    JMP 0x0059554b                      ; 0059555a
        ;   XREF to: 0059554b (UNCONDITIONAL_JUMP)  ; LAB_0059554b
    ADD ECX,0x8                         ; 0059555c
        ;   Label: LAB_0059555c
    JLE 0x00595568                      ; 0059555f
        ;   XREF to: 00595568 (CONDITIONAL_JUMP)  ; LAB_00595568
    MOVSD ES:EDI,ESI                    ; 00595561 | DAT_026666a8 | DAT_02666c78
    SUB ECX,0x4                         ; 00595562
    JLE 0x00595568                      ; 00595565
        ;   XREF to: 00595568 (CONDITIONAL_JUMP)  ; LAB_00595568
    MOVSD ES:EDI,ESI                    ; 00595567 | DAT_026666ac | DAT_02666c7c
    MOV ECX,dword ptr [0x02665a68]      ; 00595568 | DAT_02665a68
        ;   Label: LAB_00595568
    INC ECX                             ; 0059556e
    MOV dword ptr [0x02665a68],ECX      ; 0059556f | DAT_02665a68
    IMUL EAX,ECX,0x30                   ; 00595575
    ADD EAX,0x2666c6c                   ; 00595578
    PUSH EAX                            ; 0059557d
    PUSH EBP                            ; 0059557e
    PUSH EDX                            ; 0059557f | DAT_0266669c
    CALL FUN_00594730                   ; 00595580
        ;   XREF to: 00594730 (UNCONDITIONAL_CALL)  ; undefined FUN_00594730()
    MOV EDI,dword ptr [0x02665a68]      ; 00595585 | DAT_02665a68
    INC EDI                             ; 0059558b
    ADD ESP,0xc                         ; 0059558c
    MOV dword ptr [0x02665a68],EDI      ; 0059558f | DAT_02665a68
    JMP 0x005952a0                      ; 00595595
        ;   XREF to: 005952a0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 0059559a | DAT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 005955a1 | DAT_007bee34
    PUSH EAX                            ; 005955a6 | DAT_007bee34
    PUSH EDX                            ; 005955a7 | DAT_02666c6c
    PUSH EBP                            ; 005955a8
    CALL FUN_005947f0                   ; 005955a9
        ;   XREF to: 005947f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005947f0()
    MOV ESI,dword ptr [0x007bee30]      ; 005955ae | DAT_007bee30
    INC ESI                             ; 005955b4
    ADD ESP,0xc                         ; 005955b5
    MOV dword ptr [0x007bee30],ESI      ; 005955b8 | DAT_007bee30
    JMP 0x0059536b                      ; 005955be
        ;   XREF to: 0059536b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 005955c3 | DAT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005955ca
    MOV ESI,EDX                         ; 005955cf
    ADD EDI,0x7bee34                    ; 005955d1 | DAT_007bee34
    TEST EDI,0x7                        ; 005955d7
    JZ 0x005955e5                       ; 005955dd
        ;   XREF to: 005955e5 (CONDITIONAL_JUMP)  ; LAB_005955e5
    MOVSD ES:EDI,ESI                    ; 005955df | DAT_02666c6c | DAT_007bee34
    SUB ECX,0x4                         ; 005955e0
    JLE 0x00595602                      ; 005955e3
        ;   XREF to: 00595602 (CONDITIONAL_JUMP)  ; LAB_00595602
    SUB ECX,0x8                         ; 005955e5
        ;   Label: LAB_005955e5
    JL 0x005955f6                       ; 005955e8
        ;   XREF to: 005955f6 (CONDITIONAL_JUMP)  ; LAB_005955f6
    FILD qword ptr [ESI]                ; 005955ea | DAT_02666c70 | DAT_02666c78 | DAT_02666c6c
    ADD ESI,0x8                         ; 005955ec
    FISTP qword ptr [EDI]               ; 005955ef | DAT_007bee38 | DAT_007bee40 | DAT_007bee34
    ADD EDI,0x8                         ; 005955f1
    JMP 0x005955e5                      ; 005955f4
        ;   XREF to: 005955e5 (UNCONDITIONAL_JUMP)  ; LAB_005955e5
    ADD ECX,0x8                         ; 005955f6
        ;   Label: LAB_005955f6
    JLE 0x00595602                      ; 005955f9
        ;   XREF to: 00595602 (CONDITIONAL_JUMP)  ; LAB_00595602
    MOVSD ES:EDI,ESI                    ; 005955fb | DAT_02666c78 | DAT_007bee40
    SUB ECX,0x4                         ; 005955fc
    JLE 0x00595602                      ; 005955ff
        ;   XREF to: 00595602 (CONDITIONAL_JUMP)  ; LAB_00595602
    MOVSD ES:EDI,ESI                    ; 00595601 | DAT_02666c7c | DAT_007bee44
    MOV ECX,dword ptr [0x007bee30]      ; 00595602 | DAT_007bee30
        ;   Label: LAB_00595602
    INC ECX                             ; 00595608
    MOV dword ptr [0x007bee30],ECX      ; 00595609 | DAT_007bee30
    IMUL EAX,ECX,0x30                   ; 0059560f
    ADD EAX,0x7bee34                    ; 00595612 | DAT_007bee34
    PUSH EAX                            ; 00595617 | DAT_007bee64
    PUSH EBP                            ; 00595618
    PUSH EDX                            ; 00595619 | DAT_02666c6c
    CALL FUN_005947f0                   ; 0059561a
        ;   XREF to: 005947f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005947f0()
    MOV EDI,dword ptr [0x007bee30]      ; 0059561f | DAT_007bee30
    INC EDI                             ; 00595625
    ADD ESP,0xc                         ; 00595626
    MOV dword ptr [0x007bee30],EDI      ; 00595629 | DAT_007bee30
    JMP 0x0059536b                      ; 0059562f
        ;   XREF to: 0059536b (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 00595634 | DAT_007bee6c
        ;   Label: LAB_00595634
    MOV dword ptr [EAX],ECX             ; 0059563b | DAT_007bee64
    MOV dword ptr [EAX + 0x4],ECX       ; 0059563d | DAT_007bee68
    JMP 0x005953b8                      ; 00595640
        ;   XREF to: 005953b8 (UNCONDITIONAL_JUMP)  ; LAB_005953b8
    MOV EDX,ECX                         ; 00595645
        ;   Label: LAB_00595645
    MOV ESI,dword ptr [EAX]             ; 00595647 | DAT_007bee64
    NEG EDX                             ; 00595649
    CMP EDX,ESI                         ; 0059564b
    JLE 0x00595656                      ; 0059564d
        ;   XREF to: 00595656 (CONDITIONAL_JUMP)  ; LAB_00595656
    MOV dword ptr [EAX],EDX             ; 0059564f | DAT_007bee64
    JMP 0x005953b8                      ; 00595651
        ;   XREF to: 005953b8 (UNCONDITIONAL_JUMP)  ; LAB_005953b8
    MOV EBX,dword ptr [EAX + 0x4]       ; 00595656 | DAT_007bee68
        ;   Label: LAB_00595656
    CMP EBX,ECX                         ; 00595659
    JLE 0x00595665                      ; 0059565b
        ;   XREF to: 00595665 (CONDITIONAL_JUMP)  ; LAB_00595665
    MOV dword ptr [EAX + 0x4],ECX       ; 0059565d | DAT_007bee68
    JMP 0x005953b8                      ; 00595660
        ;   XREF to: 005953b8 (UNCONDITIONAL_JUMP)  ; LAB_005953b8
    CMP EDX,EBX                         ; 00595665
        ;   Label: LAB_00595665
    JLE 0x005953b8                      ; 00595667
        ;   XREF to: 005953b8 (CONDITIONAL_JUMP)  ; LAB_005953b8
    MOV dword ptr [EAX + 0x4],EDX       ; 0059566d | DAT_007bee68
    JMP 0x005953b8                      ; 00595670
        ;   XREF to: 005953b8 (UNCONDITIONAL_JUMP)  ; LAB_005953b8

