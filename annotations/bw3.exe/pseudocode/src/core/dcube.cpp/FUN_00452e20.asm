; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_FUN_00452e20(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   cylinder_center
; float            Stack[0xc]:4   cylinder_radius
; float *          Stack[0x10]:4   out_height
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcube.cpp_FUN_004545f0 at 0045461f
;
; Referenced Globals:
;   undefined4 DAT_005ba126
;   undefined4 DAT_005ba12e
;   undefined4 DAT_015485dc
;   undefined4 DAT_015485e0
;   undefined4 DAT_015485e4
;   undefined4 DAT_015485e8
;
; Called Functions:
;   core_dcube.cpp_FUN_00452240
;   core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452e20
        ;   Label: core_dcube.cpp_FUN_00452e20
    PUSH ESI                            ; 00452e21
    PUSH EDI                            ; 00452e22
    PUSH EBP                            ; 00452e23
    MOV EBP,ESP                         ; 00452e24
    SUB ESP,0x78                        ; 00452e26
    AND ESP,0xfffffff8                  ; 00452e29
    MOV EBX,dword ptr [EBP + 0x14]      ; 00452e2c
    FLD float ptr [EBX + 0x10]          ; 00452e2f
    FCOMP double ptr [0x005ba126]       ; 00452e32 | DAT_005ba126
    FNSTSW AX                           ; 00452e38
    SAHF                                ; 00452e3a
    JA 0x00453095                       ; 00452e3b
        ;   XREF to: 00453095 (CONDITIONAL_JUMP)  ; LAB_00453095
    MOV EAX,dword ptr [EBX]             ; 00452e41
    FLD float ptr [EAX]                 ; 00452e43
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452e45
    FSUB float ptr [EAX]                ; 00452e48
    FSTP float ptr [ESP + 0x48]         ; 00452e4a
    MOV EAX,dword ptr [EBX]             ; 00452e4e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00452e50
    MOV dword ptr [ESP + 0x4c],EAX      ; 00452e53
    MOV EAX,dword ptr [EBX]             ; 00452e57
    FLD float ptr [EAX + 0x8]           ; 00452e59
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452e5c
    FSUB float ptr [EAX + 0x8]          ; 00452e5f
    FSTP float ptr [ESP + 0x50]         ; 00452e62
    MOV EAX,dword ptr [EBX + 0x4]       ; 00452e66
    FLD float ptr [EAX]                 ; 00452e69
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452e6b
    FSUB float ptr [EAX]                ; 00452e6e
    FSTP float ptr [ESP + 0x30]         ; 00452e70
    MOV EAX,dword ptr [EBX + 0x4]       ; 00452e74
    MOV EAX,dword ptr [EAX + 0x4]       ; 00452e77
    MOV dword ptr [ESP + 0x34],EAX      ; 00452e7a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00452e7e
    FLD float ptr [EAX + 0x8]           ; 00452e81
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452e84
    FSUB float ptr [EAX + 0x8]          ; 00452e87
    FSTP float ptr [ESP + 0x38]         ; 00452e8a
    MOV EAX,dword ptr [EBX + 0x8]       ; 00452e8e
    FLD float ptr [EAX]                 ; 00452e91
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452e93
    FSUB float ptr [EAX]                ; 00452e96
    FSTP float ptr [ESP + 0x24]         ; 00452e98
    MOV EAX,dword ptr [EBX + 0x8]       ; 00452e9c
    MOV EAX,dword ptr [EAX + 0x4]       ; 00452e9f
    MOV dword ptr [ESP + 0x28],EAX      ; 00452ea2
    MOV EAX,dword ptr [EBX + 0x8]       ; 00452ea6
    FLD float ptr [EAX + 0x8]           ; 00452ea9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452eac
    FSUB float ptr [EAX + 0x8]          ; 00452eaf
    FLD float ptr [ESP + 0x4c]          ; 00452eb2
    FXCH                                ; 00452eb6
    FSTP float ptr [ESP + 0x2c]         ; 00452eb8
    FCOMP float ptr [ESP + 0x34]        ; 00452ebc
    FNSTSW AX                           ; 00452ec0
    SAHF                                ; 00452ec2
    JC 0x0045309e                       ; 00452ec3
        ;   XREF to: 0045309e (CONDITIONAL_JUMP)  ; LAB_0045309e
    FLD float ptr [ESP + 0x34]          ; 00452ec9
        ;   Label: LAB_00452ec9
    FCOMP float ptr [ESP + 0x28]        ; 00452ecd
    FNSTSW AX                           ; 00452ed1
    SAHF                                ; 00452ed3
    JNC 0x00452f29                      ; 00452ed4
        ;   XREF to: 00452f29 (CONDITIONAL_JUMP)  ; LAB_00452f29
    LEA EDI,[ESP + 0x3c]                ; 00452ed6
    LEA ESI,[ESP + 0x30]                ; 00452eda
    MOVSD ES:EDI,ESI                    ; 00452ede
    MOVSD ES:EDI,ESI                    ; 00452edf
    MOVSD ES:EDI,ESI                    ; 00452ee0
    LEA EAX,[ESP + 0x24]                ; 00452ee1
    LEA ESI,[ESP + 0x30]                ; 00452ee5
    CMP ESI,EAX                         ; 00452ee9
    JZ 0x00452f05                       ; 00452eeb
        ;   XREF to: 00452f05 (CONDITIONAL_JUMP)  ; LAB_00452f05
    MOV EAX,dword ptr [ESP + 0x24]      ; 00452eed
    MOV dword ptr [ESP + 0x30],EAX      ; 00452ef1
    MOV EAX,dword ptr [ESP + 0x28]      ; 00452ef5
    MOV dword ptr [ESP + 0x34],EAX      ; 00452ef9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00452efd
    MOV dword ptr [ESP + 0x38],EAX      ; 00452f01
    LEA EAX,[ESP + 0x24]                ; 00452f05
        ;   Label: LAB_00452f05
    LEA ESI,[ESP + 0x3c]                ; 00452f09
    CMP EAX,ESI                         ; 00452f0d
    JZ 0x00452f29                       ; 00452f0f
        ;   XREF to: 00452f29 (CONDITIONAL_JUMP)  ; LAB_00452f29
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00452f11
    MOV dword ptr [ESP + 0x24],EAX      ; 00452f15
    MOV EAX,dword ptr [ESP + 0x40]      ; 00452f19
    MOV dword ptr [ESP + 0x28],EAX      ; 00452f1d
    MOV EAX,dword ptr [ESP + 0x44]      ; 00452f21
    MOV dword ptr [ESP + 0x2c],EAX      ; 00452f25
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452f29
        ;   Label: LAB_00452f29
    FLD float ptr [ESP + 0x28]          ; 00452f2c
    FCOMP float ptr [EAX + 0x4]         ; 00452f30
    FNSTSW AX                           ; 00452f33
    SAHF                                ; 00452f35
    JA 0x00453095                       ; 00452f36
        ;   XREF to: 00453095 (CONDITIONAL_JUMP)  ; LAB_00453095
    FLD float ptr [ESP + 0x4c]          ; 00452f3c
    FCOMP float ptr [ESP + 0x34]        ; 00452f40
    FNSTSW AX                           ; 00452f44
    SAHF                                ; 00452f46
    JNC 0x00452f9c                      ; 00452f47
        ;   XREF to: 00452f9c (CONDITIONAL_JUMP)  ; LAB_00452f9c
    LEA EDI,[ESP + 0xc]                 ; 00452f49
    LEA ESI,[ESP + 0x48]                ; 00452f4d
    MOVSD ES:EDI,ESI                    ; 00452f51
    MOVSD ES:EDI,ESI                    ; 00452f52
    MOVSD ES:EDI,ESI                    ; 00452f53
    LEA EAX,[ESP + 0x30]                ; 00452f54
    LEA ESI,[ESP + 0x48]                ; 00452f58
    CMP ESI,EAX                         ; 00452f5c
    JZ 0x00452f78                       ; 00452f5e
        ;   XREF to: 00452f78 (CONDITIONAL_JUMP)  ; LAB_00452f78
    MOV EAX,dword ptr [ESP + 0x30]      ; 00452f60
    MOV dword ptr [ESP + 0x48],EAX      ; 00452f64
    MOV EAX,dword ptr [ESP + 0x34]      ; 00452f68
    MOV dword ptr [ESP + 0x4c],EAX      ; 00452f6c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00452f70
    MOV dword ptr [ESP + 0x50],EAX      ; 00452f74
    LEA ESI,[ESP + 0x30]                ; 00452f78
        ;   Label: LAB_00452f78
    LEA EAX,[ESP + 0xc]                 ; 00452f7c
    CMP ESI,EAX                         ; 00452f80
    JZ 0x00452f9c                       ; 00452f82
        ;   XREF to: 00452f9c (CONDITIONAL_JUMP)  ; LAB_00452f9c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00452f84
    MOV dword ptr [ESP + 0x30],EAX      ; 00452f88
    MOV EAX,dword ptr [ESP + 0x10]      ; 00452f8c
    MOV dword ptr [ESP + 0x34],EAX      ; 00452f90
    MOV EAX,dword ptr [ESP + 0x14]      ; 00452f94
    MOV dword ptr [ESP + 0x38],EAX      ; 00452f98
    MOV EAX,dword ptr [EBP + 0x20]      ; 00452f9c
        ;   Label: LAB_00452f9c
    FLD float ptr [ESP + 0x4c]          ; 00452f9f
    FCOMP float ptr [EAX]               ; 00452fa3
    FNSTSW AX                           ; 00452fa5
    SAHF                                ; 00452fa7
    JC 0x00453095                       ; 00452fa8
        ;   XREF to: 00453095 (CONDITIONAL_JUMP)  ; LAB_00453095
    FLD float ptr [ESP + 0x50]          ; 00452fae
    FMUL ST0                            ; 00452fb2
    FLD float ptr [ESP + 0x48]          ; 00452fb4
    FMUL ST0                            ; 00452fb8
    FLD float ptr [EBP + 0x1c]          ; 00452fba
    FMUL ST0                            ; 00452fbd
    FXCH                                ; 00452fbf
    FADDP ST2,ST0                       ; 00452fc1
    FCOMPP                              ; 00452fc3
    FNSTSW AX                           ; 00452fc5
    SAHF                                ; 00452fc7
    JA 0x004530fa                       ; 00452fc8
        ;   XREF to: 004530fa (CONDITIONAL_JUMP)  ; LAB_004530fa
    MOV EDX,dword ptr [EBP + 0x20]      ; 00452fce
    PUSH EDX                            ; 00452fd1
    LEA EAX,[ESP + 0x34]                ; 00452fd2
    PUSH dword ptr [EBP + 0x1c]         ; 00452fd6
    PUSH EAX                            ; 00452fd9
    LEA EAX,[ESP + 0x54]                ; 00452fda
    PUSH EAX                            ; 00452fde
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0 ; 00452fdf
        ;   XREF to: 00452cb0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0()
    ADD ESP,0x10                        ; 00452fe4
    MOV ECX,dword ptr [EBP + 0x20]      ; 00452fe7
    PUSH ECX                            ; 00452fea
    MOV ESI,EAX                         ; 00452feb
    LEA EAX,[ESP + 0x28]                ; 00452fed
    PUSH dword ptr [EBP + 0x1c]         ; 00452ff1
    PUSH EAX                            ; 00452ff4
    LEA EAX,[ESP + 0x3c]                ; 00452ff5
    PUSH EAX                            ; 00452ff9
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0 ; 00452ffa
        ;   XREF to: 00452cb0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0()
    ADD ESP,0x10                        ; 00452fff
    MOV EDI,dword ptr [EBP + 0x20]      ; 00453002
    PUSH EDI                            ; 00453005
    OR ESI,EAX                          ; 00453006
    LEA EAX,[ESP + 0x4c]                ; 00453008
    PUSH dword ptr [EBP + 0x1c]         ; 0045300c
    PUSH EAX                            ; 0045300f
    LEA EAX,[ESP + 0x30]                ; 00453010
    PUSH EAX                            ; 00453014
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0 ; 00453015
        ;   XREF to: 00452cb0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0()
    FLD float ptr [EBX + 0xc]           ; 0045301a
    FMUL ST0                            ; 0045301d
    FLD float ptr [EBX + 0x14]          ; 0045301f
    FMUL ST0                            ; 00453022
    FADDP                               ; 00453024
    OR ESI,EAX                          ; 00453026
    FSQRT                               ; 00453028
    ADD ESP,0x10                        ; 0045302a
    MOV AH,byte ptr [0x015485e8]        ; 0045302d | DAT_015485e8
    FSTP double ptr [ESP]               ; 00453033
    TEST AH,0x1                         ; 00453036
    JZ 0x0045310f                       ; 00453039
        ;   XREF to: 0045310f (CONDITIONAL_JUMP)  ; LAB_0045310f
    FLD double ptr [ESP]                ; 0045303f
        ;   Label: LAB_0045303f
    FCOMP double ptr [0x005ba12e]       ; 00453042 | DAT_005ba12e
    FNSTSW AX                           ; 00453048
    SAHF                                ; 0045304a
    JNC 0x00453136                      ; 0045304b
        ;   XREF to: 00453136 (CONDITIONAL_JUMP)  ; LAB_00453136
    TEST ESI,ESI                        ; 00453051
    JNZ 0x0045308c                      ; 00453053
        ;   XREF to: 0045308c (CONDITIONAL_JUMP)  ; LAB_0045308c
    PUSH 0x15485dc                      ; 00453055 | DAT_015485dc
    MOV EDI,dword ptr [EBP + 0x18]      ; 0045305a
    PUSH EDI                            ; 0045305d
    PUSH EBX                            ; 0045305e
    CALL core_dcube.cpp_FUN_00452240    ; 0045305f
        ;   XREF to: 00452240 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00452240()
    MOV dword ptr [ESP + 0x80],EAX      ; 00453064
    FLD float ptr [ESP + 0x80]          ; 0045306b
    FLDZ                                ; 00453072
    ADD ESP,0xc                         ; 00453074
    FCOMPP                              ; 00453077
    FNSTSW AX                           ; 00453079
    SAHF                                ; 0045307b
    JA 0x0045308c                       ; 0045307c
        ;   XREF to: 0045308c (CONDITIONAL_JUMP)  ; LAB_0045308c
    MOV EBX,dword ptr [EBP + 0x20]      ; 0045307e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00453081
    MOV ESI,0x1                         ; 00453085
    MOV dword ptr [EBX],EAX             ; 0045308a
    MOV EAX,ESI                         ; 0045308c
        ;   Label: LAB_0045308c
    MOV ESP,EBP                         ; 0045308e
    POP EBP                             ; 00453090
    POP EDI                             ; 00453091
    POP ESI                             ; 00453092
    POP EBX                             ; 00453093
    RET                                 ; 00453094
    XOR EAX,EAX                         ; 00453095
        ;   Label: LAB_00453095
    MOV ESP,EBP                         ; 00453097
    POP EBP                             ; 00453099
    POP EDI                             ; 0045309a
    POP ESI                             ; 0045309b
    POP EBX                             ; 0045309c
    RET                                 ; 0045309d
    LEA EDI,[ESP + 0x54]                ; 0045309e
        ;   Label: LAB_0045309e
    LEA ESI,[ESP + 0x48]                ; 004530a2
    MOVSD ES:EDI,ESI                    ; 004530a6
    MOVSD ES:EDI,ESI                    ; 004530a7
    MOVSD ES:EDI,ESI                    ; 004530a8
    LEA EAX,[ESP + 0x30]                ; 004530a9
    LEA ESI,[ESP + 0x48]                ; 004530ad
    CMP ESI,EAX                         ; 004530b1
    JZ 0x004530cd                       ; 004530b3
        ;   XREF to: 004530cd (CONDITIONAL_JUMP)  ; LAB_004530cd
    MOV EAX,dword ptr [ESP + 0x30]      ; 004530b5
    MOV dword ptr [ESP + 0x48],EAX      ; 004530b9
    MOV EAX,dword ptr [ESP + 0x34]      ; 004530bd
    MOV dword ptr [ESP + 0x4c],EAX      ; 004530c1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004530c5
    MOV dword ptr [ESP + 0x50],EAX      ; 004530c9
    LEA ESI,[ESP + 0x30]                ; 004530cd
        ;   Label: LAB_004530cd
    LEA EAX,[ESP + 0x54]                ; 004530d1
    CMP ESI,EAX                         ; 004530d5
    JZ 0x00452ec9                       ; 004530d7
        ;   XREF to: 00452ec9 (CONDITIONAL_JUMP)  ; LAB_00452ec9
    MOV EAX,dword ptr [ESP + 0x54]      ; 004530dd
    MOV dword ptr [ESP + 0x30],EAX      ; 004530e1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004530e5
    MOV dword ptr [ESP + 0x34],EAX      ; 004530e9
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004530ed
    MOV dword ptr [ESP + 0x38],EAX      ; 004530f1
    JMP 0x00452ec9                      ; 004530f5
        ;   XREF to: 00452ec9 (UNCONDITIONAL_JUMP)  ; LAB_00452ec9
    MOV EBX,dword ptr [EBP + 0x20]      ; 004530fa
        ;   Label: LAB_004530fa
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004530fd
    MOV dword ptr [EBX],EAX             ; 00453101
    MOV EAX,0x1                         ; 00453103
    MOV ESP,EBP                         ; 00453108
    POP EBP                             ; 0045310a
    POP EDI                             ; 0045310b
    POP ESI                             ; 0045310c
    POP EBX                             ; 0045310d
    RET                                 ; 0045310e
    MOV DL,AH                           ; 0045310f
        ;   Label: LAB_0045310f
    OR DL,0x1                           ; 00453111
    XOR EAX,EAX                         ; 00453114
    MOV byte ptr [0x015485e8],DL        ; 00453116 | DAT_015485e8
    MOV [0x015485dc],EAX                ; 0045311c | DAT_015485dc
    MOV EDX,0xc2c80000                  ; 00453121
    MOV [0x015485e4],EAX                ; 00453126 | DAT_015485e4
    MOV dword ptr [0x015485e0],EDX      ; 0045312b | DAT_015485e0
    JMP 0x0045303f                      ; 00453131
        ;   XREF to: 0045303f (UNCONDITIONAL_JUMP)  ; LAB_0045303f
    FLD float ptr [EBX + 0xc]           ; 00453136
        ;   Label: LAB_00453136
    FLD float ptr [EBP + 0x1c]          ; 00453139
    FDIV double ptr [ESP]               ; 0045313c
    FXCH                                ; 0045313f
    FMUL ST1                            ; 00453141
    MOV EAX,dword ptr [EBP + 0x18]      ; 00453143
    FADD float ptr [EAX]                ; 00453146
    FSTP float ptr [ESP + 0x18]         ; 00453148
    FMUL float ptr [EBX + 0x14]         ; 0045314c
    FADD float ptr [EAX + 0x8]          ; 0045314f
    FSTP float ptr [ESP + 0x20]         ; 00453152
    MOV EAX,dword ptr [EAX + 0x4]       ; 00453156
    PUSH 0x15485dc                      ; 00453159 | DAT_015485dc
    MOV dword ptr [ESP + 0x20],EAX      ; 0045315e
    LEA EAX,[ESP + 0x1c]                ; 00453162
    PUSH EAX                            ; 00453166
    PUSH EBX                            ; 00453167
    CALL core_dcube.cpp_FUN_00452240    ; 00453168
        ;   XREF to: 00452240 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00452240()
    MOV dword ptr [ESP + 0x80],EAX      ; 0045316d
    FLD float ptr [ESP + 0x80]          ; 00453174
    ADD ESP,0xc                         ; 0045317b
    FST float ptr [ESP + 0x8]           ; 0045317e
    FLDZ                                ; 00453182
    FCOMPP                              ; 00453184
    FNSTSW AX                           ; 00453186
    SAHF                                ; 00453188
    JA 0x0045308c                       ; 00453189
        ;   XREF to: 0045308c (CONDITIONAL_JUMP)  ; LAB_0045308c
    FLD float ptr [ESP + 0x8]           ; 0045318f
    FMUL float ptr [0x015485e0]         ; 00453193 | DAT_015485e0
    FADD float ptr [ESP + 0x1c]         ; 00453199
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045319d
    FST float ptr [ESP + 0x70]          ; 004531a0
    FCOMP float ptr [EAX]               ; 004531a4
    FNSTSW AX                           ; 004531a6
    SAHF                                ; 004531a8
    JBE 0x0045308c                      ; 004531a9
        ;   XREF to: 0045308c (CONDITIONAL_JUMP)  ; LAB_0045308c
    MOV EBX,dword ptr [EBP + 0x20]      ; 004531af
    MOV EAX,dword ptr [ESP + 0x70]      ; 004531b2
    MOV ESI,0x1                         ; 004531b6
    MOV dword ptr [EBX],EAX             ; 004531bb
    MOV EAX,ESI                         ; 004531bd
    MOV ESP,EBP                         ; 004531bf
    POP EBP                             ; 004531c1
    POP EDI                             ; 004531c2
    POP ESI                             ; 004531c3
    POP EBX                             ; 004531c4
    RET                                 ; 004531c5

