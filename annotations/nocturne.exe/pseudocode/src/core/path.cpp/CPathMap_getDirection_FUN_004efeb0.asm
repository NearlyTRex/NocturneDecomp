; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_path_cpp_CPathMap_getDirection_FUN_004efeb0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   current_direction
; int              Stack[0xc]:4   next_direction
; int              Stack[0x10]:4   prev_direction
; CVector3f *      Stack[0x14]:4   dest_position
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20 at 004f11a7
;
; Referenced Globals:
;   void* switchdataD_004efe54 = 004eff54
;   void* switchdataD_004efe64 = 004eff85
;   void* switchdataD_004efe74 = 004efff8
;   void* switchdataD_004efe94 = 004f0218
;   TerminatedCString s_core_path_cpp_0058ccbd
;   TerminatedCString s_CPathMap_getDirection_Sh_0058ccce
;   float FLOAT_0058cd47 = 100
;   float FLOAT_0058cd4b = 0.01000000
;   double DOUBLE_0058cd4f = 1.58735232019473E-314
;   double DOUBLE_0058cd57 = -2.35619449012500
;   double DOUBLE_0058cd5f = 2.35619449012500
;   double DOUBLE_0058cd67 = -0.785398163375000
;   double DOUBLE_0058cd6f = 0.785398163375000
;   double DOUBLE_0058cd77 = -1.57079632675000
;   double DOUBLE_0058cd7f = 1.57079632675000
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efeb0
        ;   Label: core_path.cpp_CPathMap_getDirection_FUN_004efeb0
    PUSH ESI                            ; 004efeb1
    PUSH EDI                            ; 004efeb2
    PUSH EBP                            ; 004efeb3
    MOV EBP,ESP                         ; 004efeb4
    SUB ESP,0xe4                        ; 004efeb6
    AND ESP,0xfffffff8                  ; 004efebc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004efebf
    MOV ESI,dword ptr [EBP + 0x18]      ; 004efec2
    MOV EDI,dword ptr [EBP + 0x20]      ; 004efec5
    MOV EBX,dword ptr [EBP + 0x24]      ; 004efec8
    FLD float ptr [EAX]                 ; 004efecb
    FSUB float ptr [EBX]                ; 004efecd
    FSTP float ptr [ESP + 0x60]         ; 004efecf
    FLD float ptr [EAX + 0x4]           ; 004efed3
    FSUB float ptr [EBX + 0x4]          ; 004efed6
    FSTP float ptr [ESP + 0x64]         ; 004efed9
    FLD float ptr [EAX + 0x8]           ; 004efedd
    LEA EAX,[ESP + 0x60]                ; 004efee0
    PUSH EAX                            ; 004efee4
    LEA EAX,[ESP + 0x94]                ; 004efee5
    FSUB float ptr [EBX + 0x8]          ; 004efeec
    PUSH EAX                            ; 004efeef
    FSTP float ptr [ESP + 0x70]         ; 004efef0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004efef4
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX]                 ; 004efef9
    FDIV float ptr [0x0058cd47]         ; 004efefb | FLOAT_0058cd47
    ADD ESP,0x8                         ; 004eff01
    FSTP float ptr [ESP + 0x54]         ; 004eff04
    FLD float ptr [0x0058cd4b]          ; 004eff08 | FLOAT_0058cd4b
    FLD float ptr [EAX + 0x4]           ; 004eff0e
    FMUL ST1                            ; 004eff11
    FSTP float ptr [ESP + 0x58]         ; 004eff13
    FMUL float ptr [EAX + 0x8]          ; 004eff17
    MOV EBX,0x1                         ; 004eff1a
    XOR EDX,EDX                         ; 004eff1f
    MOV AH,byte ptr [ESP + 0x5b]        ; 004eff21
    MOV dword ptr [ESP + 0xa8],EDX      ; 004eff25
    MOV dword ptr [ESP + 0xac],EDX      ; 004eff2c
    XOR AH,0x80                         ; 004eff33
    MOV dword ptr [ESP + 0xb0],EDX      ; 004eff36
    MOV byte ptr [ESP + 0x5b],AH        ; 004eff3d
    LEA EAX,[ESI + -0x1]                ; 004eff41
    FSTP float ptr [ESP + 0x5c]         ; 004eff44
    CMP EAX,0x3                         ; 004eff48
    JA 0x004eff75                       ; 004eff4b
        ;   XREF to: 004eff75 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4efe54]  ; 004eff4d | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ECX,0x3f800000                  ; 004eff54
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0xb8],EDX      ; 004eff59
    MOV dword ptr [ESP + 0xb4],EDX      ; 004eff60
    MOV dword ptr [ESP + 0xbc],ECX      ; 004eff67
    MOV dword ptr [ESP + 0xb0],ECX      ; 004eff6e
        ;   Label: LAB_004eff6e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004eff75
        ;   Label: default
    DEC EAX                             ; 004eff78
    CMP EAX,0x3                         ; 004eff79
    JA 0x004effb2                       ; 004eff7c
        ;   XREF to: 004effb2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4efe64]  ; 004eff7e | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 004eff85
        ;   Label: caseD_1
    MOV ECX,0x3f800000                  ; 004eff87
    XOR EAX,EAX                         ; 004eff8c
    INC EBX                             ; 004eff8e
    MOV dword ptr [ESP + 0x84],EAX      ; 004eff8f
    MOV dword ptr [ESP + 0x88],EAX      ; 004eff96
    FADD float ptr [ESP + 0xb0]         ; 004eff9d
    MOV dword ptr [ESP + 0x8c],ECX      ; 004effa4
    FSTP float ptr [ESP + 0xb0]         ; 004effab
        ;   Label: LAB_004effab
    TEST dword ptr [ESP + 0xa8],0x7fffffff ; 004effb2
        ;   Label: default
    JNZ 0x004f0201                      ; 004effbd
        ;   XREF to: 004f0201 (CONDITIONAL_JUMP)  ; LAB_004f0201
    TEST dword ptr [ESP + 0xac],0x7fffffff ; 004effc3
    JNZ 0x004f0201                      ; 004effce
        ;   XREF to: 004f0201 (CONDITIONAL_JUMP)  ; LAB_004f0201
    TEST dword ptr [ESP + 0xb0],0x7fffffff ; 004effd4
    JNZ 0x004f0201                      ; 004effdf
        ;   XREF to: 004f0201 (CONDITIONAL_JUMP)  ; LAB_004f0201
    LEA EAX,[ESI + -0x1]                ; 004effe5
    CMP EAX,0x7                         ; 004effe8
    JA 0x004f01df                       ; 004effeb
        ;   XREF to: 004f01df (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4efe74]  ; 004efff1 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x58]      ; 004efff8
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0xdc],EAX      ; 004efffc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f0003
    MOV ESP,EBP                         ; 004f000a
    POP EBP                             ; 004f000c
    POP EDI                             ; 004f000d
    POP ESI                             ; 004f000e
    POP EBX                             ; 004f000f
    RET                                 ; 004f0010
    MOV ECX,0xbf800000                  ; 004f0011
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x70],EDX      ; 004f0016
    MOV dword ptr [ESP + 0x6c],EDX      ; 004f001a
    MOV dword ptr [ESP + 0x74],ECX      ; 004f001e
    JMP 0x004eff6e                      ; 004f0022
        ;   XREF to: 004eff6e (UNCONDITIONAL_JUMP)  ; LAB_004eff6e
    MOV EAX,0x3f800000                  ; 004f0027
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x4],EDX       ; 004f002c
    MOV dword ptr [ESP + 0x8],EDX       ; 004f0030
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f0034
    MOV dword ptr [ESP],EAX             ; 004f003b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f003e
    DEC EAX                             ; 004f0041
    CMP EAX,0x3                         ; 004f0042
    JA 0x004effb2                       ; 004f0045
        ;   XREF to: 004effb2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4efe64]  ; 004f004b | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0xbf800000                  ; 004f0052
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x28],EDX      ; 004f0057
    MOV dword ptr [ESP + 0x2c],EDX      ; 004f005b
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f005f
    MOV dword ptr [ESP + 0x24],EAX      ; 004f0066
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f006a
    DEC EAX                             ; 004f006d
    CMP EAX,0x3                         ; 004f006e
    JA 0x004effb2                       ; 004f0071
        ;   XREF to: 004effb2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4efe64]  ; 004f0077 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD float ptr [ESP + 0xb0]          ; 004f007e
        ;   Label: caseD_2
    MOV ECX,0xbf800000                  ; 004f0085
    XOR EAX,EAX                         ; 004f008a
    INC EBX                             ; 004f008c
    MOV dword ptr [ESP + 0x78],EAX      ; 004f008d
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f0091
    FADD float ptr [0x0058cd4f]         ; 004f0095 | DOUBLE_0058cd4f
    MOV dword ptr [ESP + 0x80],ECX      ; 004f009b
    JMP 0x004effab                      ; 004f00a2
        ;   XREF to: 004effab (UNCONDITIONAL_JUMP)  ; LAB_004effab
    FLD1                                ; 004f00a7
        ;   Label: caseD_3
    MOV EAX,0x3f800000                  ; 004f00a9
    INC EBX                             ; 004f00ae
    XOR EDX,EDX                         ; 004f00af
    MOV dword ptr [ESP + 0x30],EAX      ; 004f00b1
    MOV dword ptr [ESP + 0x34],EDX      ; 004f00b5
    FADD float ptr [ESP + 0xa8]         ; 004f00b9
    MOV dword ptr [ESP + 0x38],EDX      ; 004f00c0
    FSTP float ptr [ESP + 0xa8]         ; 004f00c4
    JMP 0x004effb2                      ; 004f00cb
        ;   XREF to: 004effb2 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xa8]          ; 004f00d0
        ;   Label: caseD_4
    MOV EAX,0xbf800000                  ; 004f00d7
    INC EBX                             ; 004f00dc
    XOR EDX,EDX                         ; 004f00dd
    MOV dword ptr [ESP + 0xcc],EAX      ; 004f00df
    MOV dword ptr [ESP + 0xd0],EDX      ; 004f00e6
    FADD float ptr [0x0058cd4f]         ; 004f00ed | DOUBLE_0058cd4f
    MOV dword ptr [ESP + 0xd4],EDX      ; 004f00f3
    FSTP float ptr [ESP + 0xa8]         ; 004f00fa
    JMP 0x004effb2                      ; 004f0101
        ;   XREF to: 004effb2 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x58]          ; 004f0106
        ;   Label: caseD_5
    FADD double ptr [0x0058cd6f]        ; 004f010a | DOUBLE_0058cd6f
    FSTP float ptr [ESP + 0xdc]         ; 004f0110
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f0117
    MOV ESP,EBP                         ; 004f011e
    POP EBP                             ; 004f0120
    POP EDI                             ; 004f0121
    POP ESI                             ; 004f0122
    POP EBX                             ; 004f0123
    RET                                 ; 004f0124
    FLD float ptr [ESP + 0x58]          ; 004f0125
        ;   Label: caseD_3
    FADD double ptr [0x0058cd7f]        ; 004f0129 | DOUBLE_0058cd7f
    FSTP float ptr [ESP + 0xdc]         ; 004f012f
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f0136
    MOV ESP,EBP                         ; 004f013d
    POP EBP                             ; 004f013f
    POP EDI                             ; 004f0140
    POP ESI                             ; 004f0141
    POP EBX                             ; 004f0142
    RET                                 ; 004f0143
    FLD float ptr [ESP + 0x58]          ; 004f0144
        ;   Label: caseD_7
    FADD double ptr [0x0058cd5f]        ; 004f0148 | DOUBLE_0058cd5f
    FSTP float ptr [ESP + 0xdc]         ; 004f014e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f0155
    MOV ESP,EBP                         ; 004f015c
    POP EBP                             ; 004f015e
    POP EDI                             ; 004f015f
    POP ESI                             ; 004f0160
    POP EBX                             ; 004f0161
    RET                                 ; 004f0162
    FLD float ptr [ESP + 0x58]          ; 004f0163
        ;   Label: caseD_2
    FADD double ptr [0x0058cd87]        ; 004f0167 | DOUBLE_0058cd87
    FSTP float ptr [ESP + 0xdc]         ; 004f016d
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f0174
    MOV ESP,EBP                         ; 004f017b
    POP EBP                             ; 004f017d
    POP EDI                             ; 004f017e
    POP ESI                             ; 004f017f
    POP EBX                             ; 004f0180
    RET                                 ; 004f0181
    FLD float ptr [ESP + 0x58]          ; 004f0182
        ;   Label: caseD_8
    FADD double ptr [0x0058cd57]        ; 004f0186 | DOUBLE_0058cd57
    FSTP float ptr [ESP + 0xdc]         ; 004f018c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f0193
    MOV ESP,EBP                         ; 004f019a
    POP EBP                             ; 004f019c
    POP EDI                             ; 004f019d
    POP ESI                             ; 004f019e
    POP EBX                             ; 004f019f
    RET                                 ; 004f01a0
    FLD float ptr [ESP + 0x58]          ; 004f01a1
        ;   Label: caseD_4
    FADD double ptr [0x0058cd77]        ; 004f01a5 | DOUBLE_0058cd77
    FSTP float ptr [ESP + 0xdc]         ; 004f01ab
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f01b2
    MOV ESP,EBP                         ; 004f01b9
    POP EBP                             ; 004f01bb
    POP EDI                             ; 004f01bc
    POP ESI                             ; 004f01bd
    POP EBX                             ; 004f01be
    RET                                 ; 004f01bf
    FLD float ptr [ESP + 0x58]          ; 004f01c0
        ;   Label: caseD_6
    FADD double ptr [0x0058cd67]        ; 004f01c4 | DOUBLE_0058cd67
    FSTP float ptr [ESP + 0xdc]         ; 004f01ca
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f01d1
    MOV ESP,EBP                         ; 004f01d8
    POP EBP                             ; 004f01da
    POP EDI                             ; 004f01db
    POP ESI                             ; 004f01dc
    POP EBX                             ; 004f01dd
    RET                                 ; 004f01de
    MOV EAX,0x58ccbd                    ; 004f01df | = "..\\core\\path.cpp"
        ;   Label: default
    MOV EDX,0x183                       ; 004f01e4
    PUSH 0x58ccce                       ; 004f01e9 | = "CPathMap::getDirection - Should never..."
    MOV [0x01cc4800],EAX                ; 004f01ee | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004f01f3 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f01f9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f01fe
    CMP ESI,EDI                         ; 004f0201
        ;   Label: LAB_004f0201
    JNZ 0x004f02b5                      ; 004f0203
        ;   XREF to: 004f02b5 (CONDITIONAL_JUMP)  ; LAB_004f02b5
    LEA EAX,[EDI + -0x1]                ; 004f0209
        ;   Label: LAB_004f0209
    CMP EAX,0x3                         ; 004f020c
    JA 0x004f023c                       ; 004f020f
        ;   XREF to: 004f023c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4efe94]  ; 004f0211 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 004f0218
        ;   Label: caseD_1
    MOV EDI,0x3f800000                  ; 004f021a
    XOR ECX,ECX                         ; 004f021f
    INC EBX                             ; 004f0221
    MOV dword ptr [ESP + 0xc],ECX       ; 004f0222
    MOV dword ptr [ESP + 0x10],ECX      ; 004f0226
    FADD float ptr [ESP + 0xb0]         ; 004f022a
    MOV dword ptr [ESP + 0x14],EDI      ; 004f0231
    FSTP float ptr [ESP + 0xb0]         ; 004f0235
        ;   Label: LAB_004f0235
    FLD1                                ; 004f023c
        ;   Label: default
    MOV dword ptr [ESP + 0xe0],EBX      ; 004f023e
    FLD float ptr [ESP + 0xa8]          ; 004f0245
    FILD dword ptr [ESP + 0xe0]         ; 004f024c
    FSTP float ptr [ESP + 0xd8]         ; 004f0253
    FXCH                                ; 004f025a
    FDIV float ptr [ESP + 0xd8]         ; 004f025c
    FXCH                                ; 004f0263
    FMUL ST1                            ; 004f0265
    FLD float ptr [ESP + 0xac]          ; 004f0267
    FMUL ST2                            ; 004f026e
    LEA EAX,[ESP + 0x18]                ; 004f0270
    FLD float ptr [ESP + 0xb0]          ; 004f0274
    PUSH EAX                            ; 004f027b
    LEA EAX,[ESP + 0x40]                ; 004f027c
    FMULP ST3                           ; 004f0280
    PUSH EAX                            ; 004f0282
    FXCH                                ; 004f0283
    FSTP float ptr [ESP + 0x20]         ; 004f0285
    FSTP float ptr [ESP + 0x24]         ; 004f0289
    FSTP float ptr [ESP + 0x28]         ; 004f028d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f0291
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004f0296
    FLD float ptr [EAX + 0x4]           ; 004f0299
    FADD float ptr [ESP + 0x58]         ; 004f029c
    FSTP float ptr [ESP + 0xdc]         ; 004f02a0
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004f02a7
    MOV ESP,EBP                         ; 004f02ae
    POP EBP                             ; 004f02b0
    POP EDI                             ; 004f02b1
    POP ESI                             ; 004f02b2
    POP EBX                             ; 004f02b3
    RET                                 ; 004f02b4
    CMP EDI,dword ptr [EBP + 0x1c]      ; 004f02b5
        ;   Label: LAB_004f02b5
    JZ 0x004f0209                       ; 004f02b8
        ;   XREF to: 004f0209 (CONDITIONAL_JUMP)  ; LAB_004f0209
    JMP 0x004f023c                      ; 004f02be
        ;   XREF to: 004f023c (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xb0]          ; 004f02c3
        ;   Label: caseD_2
    MOV EDX,0xbf800000                  ; 004f02ca
    XOR EDI,EDI                         ; 004f02cf
    INC EBX                             ; 004f02d1
    MOV dword ptr [ESP + 0x48],EDI      ; 004f02d2
    MOV dword ptr [ESP + 0x4c],EDI      ; 004f02d6
    FADD float ptr [0x0058cd4f]         ; 004f02da | DOUBLE_0058cd4f
    MOV dword ptr [ESP + 0x50],EDX      ; 004f02e0
    JMP 0x004f0235                      ; 004f02e4
        ;   XREF to: 004f0235 (UNCONDITIONAL_JUMP)  ; LAB_004f0235
    FLD1                                ; 004f02e9
        ;   Label: caseD_3
    MOV EDX,0x3f800000                  ; 004f02eb
    INC EBX                             ; 004f02f0
    XOR ECX,ECX                         ; 004f02f1
    MOV dword ptr [ESP + 0x9c],EDX      ; 004f02f3
    MOV dword ptr [ESP + 0xa0],ECX      ; 004f02fa
    FADD float ptr [ESP + 0xa8]         ; 004f0301
    MOV dword ptr [ESP + 0xa4],ECX      ; 004f0308
    FSTP float ptr [ESP + 0xa8]         ; 004f030f
    JMP 0x004f023c                      ; 004f0316
        ;   XREF to: 004f023c (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xa8]          ; 004f031b
        ;   Label: caseD_4
    MOV ESI,0xbf800000                  ; 004f0322
    INC EBX                             ; 004f0327
    XOR EDI,EDI                         ; 004f0328
    MOV dword ptr [ESP + 0xc0],ESI      ; 004f032a
    MOV dword ptr [ESP + 0xc4],EDI      ; 004f0331
    FADD float ptr [0x0058cd4f]         ; 004f0338 | DOUBLE_0058cd4f
    MOV dword ptr [ESP + 0xc8],EDI      ; 004f033e
    FSTP float ptr [ESP + 0xa8]         ; 004f0345
    JMP 0x004f023c                      ; 004f034c
        ;   XREF to: 004f023c (UNCONDITIONAL_JUMP)  ; default

