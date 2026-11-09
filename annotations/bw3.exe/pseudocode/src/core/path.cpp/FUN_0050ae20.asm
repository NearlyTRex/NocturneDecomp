; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_path_cpp_FUN_0050ae20(float *param_1,int param_2,int param_3,int param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0 at 0050c141
;
; Referenced Globals:
;   void* switchdataD_0050adc4 = 0050aede
;   void* switchdataD_0050add4 = 0050aef6
;   void* switchdataD_0050ade4 = 0050af3f
;   void* switchdataD_0050ae04 = 0050b0ff
;   TerminatedCString s_core_path_cpp_005cb792
;   TerminatedCString s_CPathMap_getDirection_Sh_005cb7a3
;   undefined4 DAT_005cb81c
;   undefined4 DAT_005cb820
;   undefined4 DAT_005cb824
;   undefined4 DAT_005cb82c
;   undefined4 DAT_005cb834
;   undefined4 DAT_005cb83c
;   undefined4 DAT_005cb844
;   undefined4 DAT_005cb84c
;   undefined4 DAT_005cb854
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_vecdir.cpp_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ae20
        ;   Label: core_path.cpp_FUN_0050ae20
    PUSH ESI                            ; 0050ae21
    PUSH EDI                            ; 0050ae22
    PUSH EBP                            ; 0050ae23
    MOV EBP,ESP                         ; 0050ae24
    SUB ESP,0x94                        ; 0050ae26
    AND ESP,0xfffffff8                  ; 0050ae2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050ae2f
    MOV EBX,dword ptr [EBP + 0x24]      ; 0050ae32
    FLD float ptr [EAX + 0x4]           ; 0050ae35
    FLD float ptr [EAX + 0x8]           ; 0050ae38
    FLD float ptr [EAX]                 ; 0050ae3b
    LEA EDI,[ESP + 0x30]                ; 0050ae3d
    LEA ESI,[ESP + 0x48]                ; 0050ae41
    LEA EAX,[ESP + 0x30]                ; 0050ae45
    FSUB float ptr [EBX]                ; 0050ae49
    FXCH ST2                            ; 0050ae4b
    FSUB float ptr [EBX + 0x4]          ; 0050ae4d
    FXCH                                ; 0050ae50
    FSUB float ptr [EBX + 0x8]          ; 0050ae52
    FXCH ST2                            ; 0050ae55
    FSTP float ptr [ESP + 0x48]         ; 0050ae57
    FSTP float ptr [ESP + 0x4c]         ; 0050ae5b
    FSTP float ptr [ESP + 0x50]         ; 0050ae5f
    MOVSD ES:EDI,ESI                    ; 0050ae63
    MOVSD ES:EDI,ESI                    ; 0050ae64
    MOVSD ES:EDI,ESI                    ; 0050ae65
    PUSH EAX                            ; 0050ae66
    LEA ESI,[ESP + 0x64]                ; 0050ae67
    LEA EDI,[ESP + 0x1c]                ; 0050ae6b
    CALL core_vecdir.cpp_FUN_00576250   ; 0050ae6f
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x64]                ; 0050ae74
    ADD ESP,0x4                         ; 0050ae78
    MOVSD ES:EDI,ESI                    ; 0050ae7b
    MOVSD ES:EDI,ESI                    ; 0050ae7c
    MOVSD ES:EDI,ESI                    ; 0050ae7d
    FLD float ptr [0x005cb81c]          ; 0050ae7e | DAT_005cb81c
    FLD float ptr [ESP + 0x18]          ; 0050ae84
    FMUL ST1                            ; 0050ae88
    FLD float ptr [ESP + 0x1c]          ; 0050ae8a
    FMUL ST2                            ; 0050ae8e
    FLD float ptr [ESP + 0x20]          ; 0050ae90
    FMULP ST3                           ; 0050ae94
    LEA EDI,[ESP + 0x24]                ; 0050ae96
    LEA ESI,[ESP + 0x6c]                ; 0050ae9a
    FXCH                                ; 0050ae9e
    FSTP float ptr [ESP + 0x6c]         ; 0050aea0
    FSTP float ptr [ESP + 0x70]         ; 0050aea4
    FSTP float ptr [ESP + 0x74]         ; 0050aea8
    MOVSD ES:EDI,ESI                    ; 0050aeac
    MOVSD ES:EDI,ESI                    ; 0050aead
    MOVSD ES:EDI,ESI                    ; 0050aeae
    MOV EBX,0x1                         ; 0050aeaf
    MOV AH,byte ptr [ESP + 0x2b]        ; 0050aeb4
    XOR EDX,EDX                         ; 0050aeb8
    XOR AH,0x80                         ; 0050aeba
    MOV dword ptr [ESP + 0x3c],EDX      ; 0050aebd
    MOV byte ptr [ESP + 0x2b],AH        ; 0050aec1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050aec5
    MOV dword ptr [ESP + 0x40],EDX      ; 0050aec8
    SUB EAX,EBX                         ; 0050aecc
    MOV dword ptr [ESP + 0x44],EDX      ; 0050aece
    CMP EAX,0x3                         ; 0050aed2
    JA 0x0050aee6                       ; 0050aed5
        ;   XREF to: 0050aee6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50adc4]  ; 0050aed7 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [ESP + 0x44],0x3f800000 ; 0050aede
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050aee6
        ;   Label: default
    DEC EAX                             ; 0050aee9
    CMP EAX,0x3                         ; 0050aeea
    JA 0x0050af01                       ; 0050aeed
        ;   XREF to: 0050af01 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50add4]  ; 0050aeef | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 0050aef6
        ;   Label: caseD_1
    FADD float ptr [ESP + 0x44]         ; 0050aef8
    INC EBX                             ; 0050aefc
        ;   Label: LAB_0050aefc
    FSTP float ptr [ESP + 0x44]         ; 0050aefd
    TEST dword ptr [ESP + 0x3c],0x7fffffff ; 0050af01
        ;   Label: default
    JNZ 0x0050b0e1                      ; 0050af09
        ;   XREF to: 0050b0e1 (CONDITIONAL_JUMP)  ; LAB_0050b0e1
    TEST dword ptr [ESP + 0x40],0x7fffffff ; 0050af0f
    JNZ 0x0050b0e1                      ; 0050af17
        ;   XREF to: 0050b0e1 (CONDITIONAL_JUMP)  ; LAB_0050b0e1
    TEST dword ptr [ESP + 0x44],0x7fffffff ; 0050af1d
    JNZ 0x0050b0e1                      ; 0050af25
        ;   XREF to: 0050b0e1 (CONDITIONAL_JUMP)  ; LAB_0050b0e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050af2b
    DEC EAX                             ; 0050af2e
    CMP EAX,0x7                         ; 0050af2f
    JA 0x0050b0bf                       ; 0050af32
        ;   XREF to: 0050b0bf (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50ade4]  ; 0050af38 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050af3f
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x8c],EAX      ; 0050af43
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050af4a
    MOV ESP,EBP                         ; 0050af51
    POP EBP                             ; 0050af53
    POP EDI                             ; 0050af54
    POP ESI                             ; 0050af55
    POP EBX                             ; 0050af56
    RET                                 ; 0050af57
    MOV dword ptr [ESP + 0x44],0xbf800000 ; 0050af58
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050af60
    DEC EAX                             ; 0050af63
    CMP EAX,0x3                         ; 0050af64
    JA 0x0050af01                       ; 0050af67
        ;   XREF to: 0050af01 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50add4]  ; 0050af69 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    XOR ECX,ECX                         ; 0050af70
        ;   Label: caseD_3
    MOV EDX,0x3f800000                  ; 0050af72
    MOV dword ptr [ESP + 0x40],ECX      ; 0050af77
    MOV dword ptr [ESP + 0x44],ECX      ; 0050af7b
    MOV dword ptr [ESP + 0x3c],EDX      ; 0050af7f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050af83
    DEC EAX                             ; 0050af86
    CMP EAX,0x3                         ; 0050af87
    JA 0x0050af01                       ; 0050af8a
        ;   XREF to: 0050af01 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50add4]  ; 0050af90 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [ESP + 0x3c],0xbf800000 ; 0050af97
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050af9f
    DEC EAX                             ; 0050afa2
    CMP EAX,0x3                         ; 0050afa3
    JA 0x0050af01                       ; 0050afa6
        ;   XREF to: 0050af01 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50add4]  ; 0050afac | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD float ptr [ESP + 0x44]          ; 0050afb3
        ;   Label: caseD_2
    FADD float ptr [0x005cb820]         ; 0050afb7 | DAT_005cb820
    JMP 0x0050aefc                      ; 0050afbd
        ;   XREF to: 0050aefc (UNCONDITIONAL_JUMP)  ; LAB_0050aefc
    FLD1                                ; 0050afc2
        ;   Label: caseD_3
    FADD float ptr [ESP + 0x3c]         ; 0050afc4
    INC EBX                             ; 0050afc8
    FSTP float ptr [ESP + 0x3c]         ; 0050afc9
    JMP 0x0050af01                      ; 0050afcd
        ;   XREF to: 0050af01 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x3c]          ; 0050afd2
        ;   Label: caseD_4
    FADD float ptr [0x005cb820]         ; 0050afd6 | DAT_005cb820
    INC EBX                             ; 0050afdc
    FSTP float ptr [ESP + 0x3c]         ; 0050afdd
    JMP 0x0050af01                      ; 0050afe1
        ;   XREF to: 0050af01 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x28]          ; 0050afe6
        ;   Label: caseD_5
    FADD double ptr [0x005cb83c]        ; 0050afea | DAT_005cb83c
    FSTP float ptr [ESP + 0x8c]         ; 0050aff0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050aff7
    MOV ESP,EBP                         ; 0050affe
    POP EBP                             ; 0050b000
    POP EDI                             ; 0050b001
    POP ESI                             ; 0050b002
    POP EBX                             ; 0050b003
    RET                                 ; 0050b004
    FLD float ptr [ESP + 0x28]          ; 0050b005
        ;   Label: caseD_3
    FADD double ptr [0x005cb84c]        ; 0050b009 | DAT_005cb84c
    FSTP float ptr [ESP + 0x8c]         ; 0050b00f
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b016
    MOV ESP,EBP                         ; 0050b01d
    POP EBP                             ; 0050b01f
    POP EDI                             ; 0050b020
    POP ESI                             ; 0050b021
    POP EBX                             ; 0050b022
    RET                                 ; 0050b023
    FLD float ptr [ESP + 0x28]          ; 0050b024
        ;   Label: caseD_7
    FADD double ptr [0x005cb82c]        ; 0050b028 | DAT_005cb82c
    FSTP float ptr [ESP + 0x8c]         ; 0050b02e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b035
    MOV ESP,EBP                         ; 0050b03c
    POP EBP                             ; 0050b03e
    POP EDI                             ; 0050b03f
    POP ESI                             ; 0050b040
    POP EBX                             ; 0050b041
    RET                                 ; 0050b042
    FLD float ptr [ESP + 0x28]          ; 0050b043
        ;   Label: caseD_2
    FADD float ptr [0x005cb854]         ; 0050b047 | DAT_005cb854
    FSTP float ptr [ESP + 0x8c]         ; 0050b04d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b054
    MOV ESP,EBP                         ; 0050b05b
    POP EBP                             ; 0050b05d
    POP EDI                             ; 0050b05e
    POP ESI                             ; 0050b05f
    POP EBX                             ; 0050b060
    RET                                 ; 0050b061
    FLD float ptr [ESP + 0x28]          ; 0050b062
        ;   Label: caseD_8
    FADD double ptr [0x005cb824]        ; 0050b066 | DAT_005cb824
    FSTP float ptr [ESP + 0x8c]         ; 0050b06c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b073
    MOV ESP,EBP                         ; 0050b07a
    POP EBP                             ; 0050b07c
    POP EDI                             ; 0050b07d
    POP ESI                             ; 0050b07e
    POP EBX                             ; 0050b07f
    RET                                 ; 0050b080
    FLD float ptr [ESP + 0x28]          ; 0050b081
        ;   Label: caseD_4
    FADD double ptr [0x005cb844]        ; 0050b085 | DAT_005cb844
    FSTP float ptr [ESP + 0x8c]         ; 0050b08b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b092
    MOV ESP,EBP                         ; 0050b099
    POP EBP                             ; 0050b09b
    POP EDI                             ; 0050b09c
    POP ESI                             ; 0050b09d
    POP EBX                             ; 0050b09e
    RET                                 ; 0050b09f
    FLD float ptr [ESP + 0x28]          ; 0050b0a0
        ;   Label: caseD_6
    FADD double ptr [0x005cb834]        ; 0050b0a4 | DAT_005cb834
    FSTP float ptr [ESP + 0x8c]         ; 0050b0aa
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b0b1
    MOV ESP,EBP                         ; 0050b0b8
    POP EBP                             ; 0050b0ba
    POP EDI                             ; 0050b0bb
    POP ESI                             ; 0050b0bc
    POP EBX                             ; 0050b0bd
    RET                                 ; 0050b0be
    MOV EDI,0x5cb792                    ; 0050b0bf | = "..\\core\\path.cpp"
        ;   Label: default
    MOV EAX,0x183                       ; 0050b0c4
    PUSH 0x5cb7a3                       ; 0050b0c9 | = "CPathMap::getDirection - Should never..."
    MOV dword ptr [0x01d71de0],EDI      ; 0050b0ce | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0050b0d4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050b0d9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050b0de
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050b0e1
        ;   Label: LAB_0050b0e1
    MOV EDX,dword ptr [EBP + 0x20]      ; 0050b0e4
    CMP EAX,EDX                         ; 0050b0e7
    JNZ 0x0050b18d                      ; 0050b0e9
        ;   XREF to: 0050b18d (CONDITIONAL_JUMP)  ; LAB_0050b18d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050b0ef
        ;   Label: LAB_0050b0ef
    DEC EAX                             ; 0050b0f2
    CMP EAX,0x3                         ; 0050b0f3
    JA 0x0050b10a                       ; 0050b0f6
        ;   XREF to: 0050b10a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50ae04]  ; 0050b0f8 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 0050b0ff
        ;   Label: caseD_1
    FADD float ptr [ESP + 0x44]         ; 0050b101
    INC EBX                             ; 0050b105
        ;   Label: LAB_0050b105
    FSTP float ptr [ESP + 0x44]         ; 0050b106
    FLD1                                ; 0050b10a
        ;   Label: default
    MOV dword ptr [ESP + 0x90],EBX      ; 0050b10c
    FLD float ptr [ESP + 0x3c]          ; 0050b113
    FILD dword ptr [ESP + 0x90]         ; 0050b117
    FSTP float ptr [ESP + 0x84]         ; 0050b11e
    FXCH                                ; 0050b125
    FDIV float ptr [ESP + 0x84]         ; 0050b127
    FXCH                                ; 0050b12e
    FMUL ST1                            ; 0050b130
    FLD float ptr [ESP + 0x40]          ; 0050b132
    FMUL ST2                            ; 0050b136
    FLD float ptr [ESP + 0x44]          ; 0050b138
    FMULP ST3                           ; 0050b13c
    LEA EDI,[ESP + 0x54]                ; 0050b13e
    MOV ESI,ESP                         ; 0050b142
    LEA EAX,[ESP + 0x54]                ; 0050b144
    FXCH                                ; 0050b148
    FSTP float ptr [ESP]                ; 0050b14a
    FSTP float ptr [ESP + 0x4]          ; 0050b14d
    FSTP float ptr [ESP + 0x8]          ; 0050b151
    MOVSD ES:EDI,ESI                    ; 0050b155
    MOVSD ES:EDI,ESI                    ; 0050b156
    MOVSD ES:EDI,ESI                    ; 0050b157
    PUSH EAX                            ; 0050b158
    LEA ESI,[ESP + 0x7c]                ; 0050b159
    LEA EDI,[ESP + 0x10]                ; 0050b15d
    CALL core_vecdir.cpp_FUN_00576250   ; 0050b161
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x7c]                ; 0050b166
    ADD ESP,0x4                         ; 0050b16a
    MOVSD ES:EDI,ESI                    ; 0050b16d
    MOVSD ES:EDI,ESI                    ; 0050b16e
    MOVSD ES:EDI,ESI                    ; 0050b16f
    FLD float ptr [ESP + 0x10]          ; 0050b170
    FADD float ptr [ESP + 0x28]         ; 0050b174
    FSTP float ptr [ESP + 0x8c]         ; 0050b178
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050b17f
    MOV ESP,EBP                         ; 0050b186
    POP EBP                             ; 0050b188
    POP EDI                             ; 0050b189
    POP ESI                             ; 0050b18a
    POP EBX                             ; 0050b18b
    RET                                 ; 0050b18c
    CMP EDX,dword ptr [EBP + 0x1c]      ; 0050b18d
        ;   Label: LAB_0050b18d
    JZ 0x0050b0ef                       ; 0050b190
        ;   XREF to: 0050b0ef (CONDITIONAL_JUMP)  ; LAB_0050b0ef
    JMP 0x0050b10a                      ; 0050b196
        ;   XREF to: 0050b10a (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x44]          ; 0050b19b
        ;   Label: caseD_2
    FADD float ptr [0x005cb820]         ; 0050b19f | DAT_005cb820
    JMP 0x0050b105                      ; 0050b1a5
        ;   XREF to: 0050b105 (UNCONDITIONAL_JUMP)  ; LAB_0050b105
    FLD1                                ; 0050b1aa
        ;   Label: caseD_3
    FADD float ptr [ESP + 0x3c]         ; 0050b1ac
    INC EBX                             ; 0050b1b0
    FSTP float ptr [ESP + 0x3c]         ; 0050b1b1
    JMP 0x0050b10a                      ; 0050b1b5
        ;   XREF to: 0050b10a (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x3c]          ; 0050b1ba
        ;   Label: caseD_4
    FADD float ptr [0x005cb820]         ; 0050b1be | DAT_005cb820
    INC EBX                             ; 0050b1c4
    FSTP float ptr [ESP + 0x3c]         ; 0050b1c5
    JMP 0x0050b10a                      ; 0050b1c9
        ;   XREF to: 0050b10a (UNCONDITIONAL_JUMP)  ; default

