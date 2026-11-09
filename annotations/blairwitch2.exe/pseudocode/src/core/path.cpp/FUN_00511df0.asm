; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_path_cpp_FUN_00511df0(float *param_1,int param_2,int param_3,int param_4,float *param_5)
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
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70 at 00513111
;
; Referenced Globals:
;   void* switchdataD_00511d94 = 00511eae
;   void* switchdataD_00511da4 = 00511ec6
;   void* switchdataD_00511db4 = 00511f0f
;   void* switchdataD_00511dd4 = 005120cf
;   TerminatedCString s_core_path_cpp_005e16cf
;   TerminatedCString s_CPathMap_getDirection_Sh_005e16e0
;   undefined4 DAT_005e1759
;   undefined4 DAT_005e175d
;   undefined4 DAT_005e1761
;   undefined4 DAT_005e1769
;   undefined4 DAT_005e1771
;   undefined4 DAT_005e1779
;   undefined4 DAT_005e1781
;   undefined4 DAT_005e1789
;   undefined4 DAT_005e1791
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_vecdir.cpp_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511df0
        ;   Label: core_path.cpp_FUN_00511df0
    PUSH ESI                            ; 00511df1
    PUSH EDI                            ; 00511df2
    PUSH EBP                            ; 00511df3
    MOV EBP,ESP                         ; 00511df4
    SUB ESP,0x94                        ; 00511df6
    AND ESP,0xfffffff8                  ; 00511dfc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511dff
    MOV EBX,dword ptr [EBP + 0x24]      ; 00511e02
    FLD float ptr [EAX + 0x4]           ; 00511e05
    FLD float ptr [EAX + 0x8]           ; 00511e08
    FLD float ptr [EAX]                 ; 00511e0b
    LEA EDI,[ESP + 0x30]                ; 00511e0d
    LEA ESI,[ESP + 0x48]                ; 00511e11
    LEA EAX,[ESP + 0x30]                ; 00511e15
    FSUB float ptr [EBX]                ; 00511e19
    FXCH ST2                            ; 00511e1b
    FSUB float ptr [EBX + 0x4]          ; 00511e1d
    FXCH                                ; 00511e20
    FSUB float ptr [EBX + 0x8]          ; 00511e22
    FXCH ST2                            ; 00511e25
    FSTP float ptr [ESP + 0x48]         ; 00511e27
    FSTP float ptr [ESP + 0x4c]         ; 00511e2b
    FSTP float ptr [ESP + 0x50]         ; 00511e2f
    MOVSD ES:EDI,ESI                    ; 00511e33
    MOVSD ES:EDI,ESI                    ; 00511e34
    MOVSD ES:EDI,ESI                    ; 00511e35
    PUSH EAX                            ; 00511e36
    LEA ESI,[ESP + 0x64]                ; 00511e37
    LEA EDI,[ESP + 0x1c]                ; 00511e3b
    CALL core_vecdir.cpp_FUN_005838f0   ; 00511e3f
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x64]                ; 00511e44
    ADD ESP,0x4                         ; 00511e48
    MOVSD ES:EDI,ESI                    ; 00511e4b
    MOVSD ES:EDI,ESI                    ; 00511e4c
    MOVSD ES:EDI,ESI                    ; 00511e4d
    FLD float ptr [0x005e1759]          ; 00511e4e | DAT_005e1759
    FLD float ptr [ESP + 0x18]          ; 00511e54
    FMUL ST1                            ; 00511e58
    FLD float ptr [ESP + 0x1c]          ; 00511e5a
    FMUL ST2                            ; 00511e5e
    FLD float ptr [ESP + 0x20]          ; 00511e60
    FMULP ST3                           ; 00511e64
    LEA EDI,[ESP + 0x24]                ; 00511e66
    LEA ESI,[ESP + 0x6c]                ; 00511e6a
    FXCH                                ; 00511e6e
    FSTP float ptr [ESP + 0x6c]         ; 00511e70
    FSTP float ptr [ESP + 0x70]         ; 00511e74
    FSTP float ptr [ESP + 0x74]         ; 00511e78
    MOVSD ES:EDI,ESI                    ; 00511e7c
    MOVSD ES:EDI,ESI                    ; 00511e7d
    MOVSD ES:EDI,ESI                    ; 00511e7e
    MOV EBX,0x1                         ; 00511e7f
    MOV AH,byte ptr [ESP + 0x2b]        ; 00511e84
    XOR EDX,EDX                         ; 00511e88
    XOR AH,0x80                         ; 00511e8a
    MOV dword ptr [ESP + 0x3c],EDX      ; 00511e8d
    MOV byte ptr [ESP + 0x2b],AH        ; 00511e91
    MOV EAX,dword ptr [EBP + 0x18]      ; 00511e95
    MOV dword ptr [ESP + 0x40],EDX      ; 00511e98
    SUB EAX,EBX                         ; 00511e9c
    MOV dword ptr [ESP + 0x44],EDX      ; 00511e9e
    CMP EAX,0x3                         ; 00511ea2
    JA 0x00511eb6                       ; 00511ea5
        ;   XREF to: 00511eb6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511d94]  ; 00511ea7 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [ESP + 0x44],0x3f800000 ; 00511eae
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00511eb6
        ;   Label: default
    DEC EAX                             ; 00511eb9
    CMP EAX,0x3                         ; 00511eba
    JA 0x00511ed1                       ; 00511ebd
        ;   XREF to: 00511ed1 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511da4]  ; 00511ebf | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 00511ec6
        ;   Label: caseD_1
    FADD float ptr [ESP + 0x44]         ; 00511ec8
    INC EBX                             ; 00511ecc
        ;   Label: LAB_00511ecc
    FSTP float ptr [ESP + 0x44]         ; 00511ecd
    TEST dword ptr [ESP + 0x3c],0x7fffffff ; 00511ed1
        ;   Label: default
    JNZ 0x005120b1                      ; 00511ed9
        ;   XREF to: 005120b1 (CONDITIONAL_JUMP)  ; LAB_005120b1
    TEST dword ptr [ESP + 0x40],0x7fffffff ; 00511edf
    JNZ 0x005120b1                      ; 00511ee7
        ;   XREF to: 005120b1 (CONDITIONAL_JUMP)  ; LAB_005120b1
    TEST dword ptr [ESP + 0x44],0x7fffffff ; 00511eed
    JNZ 0x005120b1                      ; 00511ef5
        ;   XREF to: 005120b1 (CONDITIONAL_JUMP)  ; LAB_005120b1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00511efb
    DEC EAX                             ; 00511efe
    CMP EAX,0x7                         ; 00511eff
    JA 0x0051208f                       ; 00511f02
        ;   XREF to: 0051208f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511db4]  ; 00511f08 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x28]      ; 00511f0f
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x8c],EAX      ; 00511f13
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00511f1a
    MOV ESP,EBP                         ; 00511f21
    POP EBP                             ; 00511f23
    POP EDI                             ; 00511f24
    POP ESI                             ; 00511f25
    POP EBX                             ; 00511f26
    RET                                 ; 00511f27
    MOV dword ptr [ESP + 0x44],0xbf800000 ; 00511f28
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00511f30
    DEC EAX                             ; 00511f33
    CMP EAX,0x3                         ; 00511f34
    JA 0x00511ed1                       ; 00511f37
        ;   XREF to: 00511ed1 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511da4]  ; 00511f39 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    XOR ECX,ECX                         ; 00511f40
        ;   Label: caseD_3
    MOV EDX,0x3f800000                  ; 00511f42
    MOV dword ptr [ESP + 0x40],ECX      ; 00511f47
    MOV dword ptr [ESP + 0x44],ECX      ; 00511f4b
    MOV dword ptr [ESP + 0x3c],EDX      ; 00511f4f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00511f53
    DEC EAX                             ; 00511f56
    CMP EAX,0x3                         ; 00511f57
    JA 0x00511ed1                       ; 00511f5a
        ;   XREF to: 00511ed1 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511da4]  ; 00511f60 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [ESP + 0x3c],0xbf800000 ; 00511f67
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00511f6f
    DEC EAX                             ; 00511f72
    CMP EAX,0x3                         ; 00511f73
    JA 0x00511ed1                       ; 00511f76
        ;   XREF to: 00511ed1 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511da4]  ; 00511f7c | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD float ptr [ESP + 0x44]          ; 00511f83
        ;   Label: caseD_2
    FADD float ptr [0x005e175d]         ; 00511f87 | DAT_005e175d
    JMP 0x00511ecc                      ; 00511f8d
        ;   XREF to: 00511ecc (UNCONDITIONAL_JUMP)  ; LAB_00511ecc
    FLD1                                ; 00511f92
        ;   Label: caseD_3
    FADD float ptr [ESP + 0x3c]         ; 00511f94
    INC EBX                             ; 00511f98
    FSTP float ptr [ESP + 0x3c]         ; 00511f99
    JMP 0x00511ed1                      ; 00511f9d
        ;   XREF to: 00511ed1 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x3c]          ; 00511fa2
        ;   Label: caseD_4
    FADD float ptr [0x005e175d]         ; 00511fa6 | DAT_005e175d
    INC EBX                             ; 00511fac
    FSTP float ptr [ESP + 0x3c]         ; 00511fad
    JMP 0x00511ed1                      ; 00511fb1
        ;   XREF to: 00511ed1 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x28]          ; 00511fb6
        ;   Label: caseD_5
    FADD double ptr [0x005e1779]        ; 00511fba | DAT_005e1779
    FSTP float ptr [ESP + 0x8c]         ; 00511fc0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00511fc7
    MOV ESP,EBP                         ; 00511fce
    POP EBP                             ; 00511fd0
    POP EDI                             ; 00511fd1
    POP ESI                             ; 00511fd2
    POP EBX                             ; 00511fd3
    RET                                 ; 00511fd4
    FLD float ptr [ESP + 0x28]          ; 00511fd5
        ;   Label: caseD_3
    FADD double ptr [0x005e1789]        ; 00511fd9 | DAT_005e1789
    FSTP float ptr [ESP + 0x8c]         ; 00511fdf
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00511fe6
    MOV ESP,EBP                         ; 00511fed
    POP EBP                             ; 00511fef
    POP EDI                             ; 00511ff0
    POP ESI                             ; 00511ff1
    POP EBX                             ; 00511ff2
    RET                                 ; 00511ff3
    FLD float ptr [ESP + 0x28]          ; 00511ff4
        ;   Label: caseD_7
    FADD double ptr [0x005e1769]        ; 00511ff8 | DAT_005e1769
    FSTP float ptr [ESP + 0x8c]         ; 00511ffe
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00512005
    MOV ESP,EBP                         ; 0051200c
    POP EBP                             ; 0051200e
    POP EDI                             ; 0051200f
    POP ESI                             ; 00512010
    POP EBX                             ; 00512011
    RET                                 ; 00512012
    FLD float ptr [ESP + 0x28]          ; 00512013
        ;   Label: caseD_2
    FADD float ptr [0x005e1791]         ; 00512017 | DAT_005e1791
    FSTP float ptr [ESP + 0x8c]         ; 0051201d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00512024
    MOV ESP,EBP                         ; 0051202b
    POP EBP                             ; 0051202d
    POP EDI                             ; 0051202e
    POP ESI                             ; 0051202f
    POP EBX                             ; 00512030
    RET                                 ; 00512031
    FLD float ptr [ESP + 0x28]          ; 00512032
        ;   Label: caseD_8
    FADD double ptr [0x005e1761]        ; 00512036 | DAT_005e1761
    FSTP float ptr [ESP + 0x8c]         ; 0051203c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00512043
    MOV ESP,EBP                         ; 0051204a
    POP EBP                             ; 0051204c
    POP EDI                             ; 0051204d
    POP ESI                             ; 0051204e
    POP EBX                             ; 0051204f
    RET                                 ; 00512050
    FLD float ptr [ESP + 0x28]          ; 00512051
        ;   Label: caseD_4
    FADD double ptr [0x005e1781]        ; 00512055 | DAT_005e1781
    FSTP float ptr [ESP + 0x8c]         ; 0051205b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00512062
    MOV ESP,EBP                         ; 00512069
    POP EBP                             ; 0051206b
    POP EDI                             ; 0051206c
    POP ESI                             ; 0051206d
    POP EBX                             ; 0051206e
    RET                                 ; 0051206f
    FLD float ptr [ESP + 0x28]          ; 00512070
        ;   Label: caseD_6
    FADD double ptr [0x005e1771]        ; 00512074 | DAT_005e1771
    FSTP float ptr [ESP + 0x8c]         ; 0051207a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00512081
    MOV ESP,EBP                         ; 00512088
    POP EBP                             ; 0051208a
    POP EDI                             ; 0051208b
    POP ESI                             ; 0051208c
    POP EBX                             ; 0051208d
    RET                                 ; 0051208e
    MOV EDI,0x5e16cf                    ; 0051208f | = "..\\core\\path.cpp"
        ;   Label: default
    MOV EAX,0x183                       ; 00512094
    PUSH 0x5e16e0                       ; 00512099 | = "CPathMap::getDirection - Should never..."
    MOV dword ptr [0x01d046a0],EDI      ; 0051209e | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005120a4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005120a9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005120ae
    MOV EAX,dword ptr [EBP + 0x18]      ; 005120b1
        ;   Label: LAB_005120b1
    MOV EDX,dword ptr [EBP + 0x20]      ; 005120b4
    CMP EAX,EDX                         ; 005120b7
    JNZ 0x0051215d                      ; 005120b9
        ;   XREF to: 0051215d (CONDITIONAL_JUMP)  ; LAB_0051215d
    MOV EAX,dword ptr [EBP + 0x20]      ; 005120bf
        ;   Label: LAB_005120bf
    DEC EAX                             ; 005120c2
    CMP EAX,0x3                         ; 005120c3
    JA 0x005120da                       ; 005120c6
        ;   XREF to: 005120da (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x511dd4]  ; 005120c8 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 005120cf
        ;   Label: caseD_1
    FADD float ptr [ESP + 0x44]         ; 005120d1
    INC EBX                             ; 005120d5
        ;   Label: LAB_005120d5
    FSTP float ptr [ESP + 0x44]         ; 005120d6
    FLD1                                ; 005120da
        ;   Label: default
    MOV dword ptr [ESP + 0x90],EBX      ; 005120dc
    FLD float ptr [ESP + 0x3c]          ; 005120e3
    FILD dword ptr [ESP + 0x90]         ; 005120e7
    FSTP float ptr [ESP + 0x84]         ; 005120ee
    FXCH                                ; 005120f5
    FDIV float ptr [ESP + 0x84]         ; 005120f7
    FXCH                                ; 005120fe
    FMUL ST1                            ; 00512100
    FLD float ptr [ESP + 0x40]          ; 00512102
    FMUL ST2                            ; 00512106
    FLD float ptr [ESP + 0x44]          ; 00512108
    FMULP ST3                           ; 0051210c
    LEA EDI,[ESP + 0x54]                ; 0051210e
    MOV ESI,ESP                         ; 00512112
    LEA EAX,[ESP + 0x54]                ; 00512114
    FXCH                                ; 00512118
    FSTP float ptr [ESP]                ; 0051211a
    FSTP float ptr [ESP + 0x4]          ; 0051211d
    FSTP float ptr [ESP + 0x8]          ; 00512121
    MOVSD ES:EDI,ESI                    ; 00512125
    MOVSD ES:EDI,ESI                    ; 00512126
    MOVSD ES:EDI,ESI                    ; 00512127
    PUSH EAX                            ; 00512128
    LEA ESI,[ESP + 0x7c]                ; 00512129
    LEA EDI,[ESP + 0x10]                ; 0051212d
    CALL core_vecdir.cpp_FUN_005838f0   ; 00512131
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x7c]                ; 00512136
    ADD ESP,0x4                         ; 0051213a
    MOVSD ES:EDI,ESI                    ; 0051213d
    MOVSD ES:EDI,ESI                    ; 0051213e
    MOVSD ES:EDI,ESI                    ; 0051213f
    FLD float ptr [ESP + 0x10]          ; 00512140
    FADD float ptr [ESP + 0x28]         ; 00512144
    FSTP float ptr [ESP + 0x8c]         ; 00512148
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0051214f
    MOV ESP,EBP                         ; 00512156
    POP EBP                             ; 00512158
    POP EDI                             ; 00512159
    POP ESI                             ; 0051215a
    POP EBX                             ; 0051215b
    RET                                 ; 0051215c
    CMP EDX,dword ptr [EBP + 0x1c]      ; 0051215d
        ;   Label: LAB_0051215d
    JZ 0x005120bf                       ; 00512160
        ;   XREF to: 005120bf (CONDITIONAL_JUMP)  ; LAB_005120bf
    JMP 0x005120da                      ; 00512166
        ;   XREF to: 005120da (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x44]          ; 0051216b
        ;   Label: caseD_2
    FADD float ptr [0x005e175d]         ; 0051216f | DAT_005e175d
    JMP 0x005120d5                      ; 00512175
        ;   XREF to: 005120d5 (UNCONDITIONAL_JUMP)  ; LAB_005120d5
    FLD1                                ; 0051217a
        ;   Label: caseD_3
    FADD float ptr [ESP + 0x3c]         ; 0051217c
    INC EBX                             ; 00512180
    FSTP float ptr [ESP + 0x3c]         ; 00512181
    JMP 0x005120da                      ; 00512185
        ;   XREF to: 005120da (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x3c]          ; 0051218a
        ;   Label: caseD_4
    FADD float ptr [0x005e175d]         ; 0051218e | DAT_005e175d
    INC EBX                             ; 00512194
    FSTP float ptr [ESP + 0x3c]         ; 00512195
    JMP 0x005120da                      ; 00512199
        ;   XREF to: 005120da (UNCONDITIONAL_JUMP)  ; default

