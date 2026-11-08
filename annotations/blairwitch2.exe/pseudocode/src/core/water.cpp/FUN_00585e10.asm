; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00585e10(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xd4]:8  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
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
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0052d0e0 at 0052d306
;
; Referenced Globals:
;   TerminatedCString s_core_water_cpp_005ede96
;   TerminatedCString s_Too_many_visible_water_t_005edea8
;   TerminatedCString s_Vis_water_tiles_d_SqFt_f_005edec6
;   undefined4 DAT_005edee6
;   undefined4 DAT_005edeee
;   undefined4 DAT_005fdc5c
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_0060b280
;   undefined4 DAT_0060b284
;   undefined4 DAT_00622024
;   undefined4 DAT_00622054
;   undefined4 DAT_00622084
;   undefined4 DAT_006220b4
;   undefined4 DAT_007c158c
;   undefined4 DAT_01ba5c50
;   ... and 10 more
;
; Called Functions:
;   FUN_00436710
;   FUN_004699a0
;   FUN_0046b2b0
;   FUN_00476d20
;   FUN_00476d40
;   FUN_004e4500
;   FUN_0055d723
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585e10
        ;   Label: FUN_00585e10
    PUSH ESI                            ; 00585e11
    PUSH EBP                            ; 00585e12
    SUB ESP,0xbc                        ; 00585e13
    MOV EBP,dword ptr [ESP + 0xcc]      ; 00585e19
    XOR EBX,EBX                         ; 00585e20
    XOR EDX,EDX                         ; 00585e22
    XOR EAX,EAX                         ; 00585e24
    INC EAX                             ; 00585e26
        ;   Label: LAB_00585e26
    LEA ESI,[EDX + EBX*0x1]             ; 00585e27
    ADD EBX,0x20                        ; 00585e2a
    MOV CL,byte ptr [ESI + EAX*0x1 + 0x1c2c90f] ; 00585e2d | DAT_01c2c910
    ADD EDX,0x400                       ; 00585e34
    MOV byte ptr [EAX + 0x265b7bf],CL   ; 00585e3a
    CMP EAX,0x20                        ; 00585e40
    JL 0x00585e26                       ; 00585e43
        ;   XREF to: 00585e26 (CONDITIONAL_JUMP)  ; LAB_00585e26
    MOV EDX,dword ptr [EBP + 0x4]       ; 00585e45
    MOV dword ptr [EBP + 0xc],0x0       ; 00585e48
    TEST EDX,0x7fffffff                 ; 00585e4f
    JNZ 0x00585e61                      ; 00585e55
        ;   XREF to: 00585e61 (CONDITIONAL_JUMP)  ; LAB_00585e61
    ADD ESP,0xbc                        ; 00585e57
    POP EBP                             ; 00585e5d
    POP ESI                             ; 00585e5e
    POP EBX                             ; 00585e5f
    PUSH EDI                            ; 00585e61
        ;   Label: LAB_00585e61
    PUSH 0x1fc9c68                      ; 00585e62 | DAT_01fc9c68
    LEA ESI,[ESP + 0x9c]                ; 00585e67
    LEA EDI,[ESP + 0x60]                ; 00585e6e
    CALL FUN_00476d20                   ; 00585e72
        ;   XREF to: 00476d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00476d20()
    LEA ESI,[ESP + 0x9c]                ; 00585e77
    ADD ESP,0x4                         ; 00585e7e
    MOVSD ES:EDI,ESI                    ; 00585e81
    MOVSD ES:EDI,ESI                    ; 00585e82
    MOVSD ES:EDI,ESI                    ; 00585e83
    PUSH 0x1fc9c68                      ; 00585e84 | DAT_01fc9c68
    LEA ESI,[ESP + 0x84]                ; 00585e89
    LEA EDI,[ESP + 0x78]                ; 00585e90
    CALL FUN_00476d40                   ; 00585e94
        ;   XREF to: 00476d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00476d40()
    LEA ESI,[ESP + 0x84]                ; 00585e99
    ADD ESP,0x4                         ; 00585ea0
    MOVSD ES:EDI,ESI                    ; 00585ea3
    MOVSD ES:EDI,ESI                    ; 00585ea4
    MOVSD ES:EDI,ESI                    ; 00585ea5
    FLD float ptr [ESP + 0x5c]          ; 00585ea6
    FADD float ptr [ESP + 0x74]         ; 00585eaa
    FLD double ptr [0x005edee6]         ; 00585eae | DAT_005edee6
    FXCH                                ; 00585eb4
    FMUL ST1                            ; 00585eb6
    FLD float ptr [ESP + 0x64]          ; 00585eb8
    FLD float ptr [ESP + 0x74]          ; 00585ebc
    FSUB float ptr [ESP + 0x5c]         ; 00585ec0
    FXCH                                ; 00585ec4
    FADD float ptr [ESP + 0x7c]         ; 00585ec6
    FXCH                                ; 00585eca
    FMUL ST3                            ; 00585ecc
    FXCH                                ; 00585ece
    FMULP ST3                           ; 00585ed0
    FMUL double ptr [0x005edeee]        ; 00585ed2 | DAT_005edeee
    XOR ECX,ECX                         ; 00585ed8
    FLDZ                                ; 00585eda
    MOV dword ptr [0x026537ac],ECX      ; 00585edc | DAT_026537ac
    MOV dword ptr [ESP + 0xb0],ECX      ; 00585ee2
    FXCH ST2                            ; 00585ee9
    FSTP float ptr [0x026537a8]         ; 00585eeb | DAT_026537a8
    FXCH ST2                            ; 00585ef1
    FSTP float ptr [0x026537b0]         ; 00585ef3 | DAT_026537b0
    FXCH                                ; 00585ef9
    FSTP float ptr [ESP + 0xa4]         ; 00585efb
    FCOMP float ptr [ESP + 0xa4]        ; 00585f02
    FNSTSW AX                           ; 00585f09
    SAHF                                ; 00585f0b
    JNC 0x00585f1c                      ; 00585f0c
        ;   XREF to: 00585f1c (CONDITIONAL_JUMP)  ; LAB_00585f1c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00585f0e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00585f15
    FLD float ptr [ESP + 0x78]          ; 00585f1c
        ;   Label: LAB_00585f1c
    FSUB float ptr [ESP + 0x60]         ; 00585f20
    FST float ptr [ESP + 0xa8]          ; 00585f24
    FCOMP float ptr [ESP + 0xb0]        ; 00585f2b
    FNSTSW AX                           ; 00585f32
    SAHF                                ; 00585f34
    JBE 0x00585f45                      ; 00585f35
        ;   XREF to: 00585f45 (CONDITIONAL_JUMP)  ; LAB_00585f45
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00585f37
    MOV dword ptr [ESP + 0xb0],EAX      ; 00585f3e
    FLD float ptr [ESP + 0x7c]          ; 00585f45
        ;   Label: LAB_00585f45
    FSUB float ptr [ESP + 0x64]         ; 00585f49
    FMUL double ptr [0x005edee6]        ; 00585f4d | DAT_005edee6
    FMUL double ptr [0x005edeee]        ; 00585f53 | DAT_005edeee
    FST float ptr [ESP + 0xac]          ; 00585f59
    FCOMP float ptr [ESP + 0xb0]        ; 00585f60
    FNSTSW AX                           ; 00585f67
    SAHF                                ; 00585f69
    JBE 0x00585f7a                      ; 00585f6a
        ;   XREF to: 00585f7a (CONDITIONAL_JUMP)  ; LAB_00585f7a
    MOV EAX,dword ptr [ESP + 0xac]      ; 00585f6c
    MOV dword ptr [ESP + 0xb0],EAX      ; 00585f73
    FLD float ptr [ESP + 0xb0]          ; 00585f7a
        ;   Label: LAB_00585f7a
    FDIV float ptr [EBP + 0x8]          ; 00585f81
    FLD1                                ; 00585f84
    FADDP                               ; 00585f86
    CALL FUN_005b7ff0                   ; 00585f88
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xb8]        ; 00585f8d
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00585f94
    XOR ESI,ESI                         ; 00585f9b
    MOV EDI,EAX                         ; 00585f9d
    MOV dword ptr [0x026537bc],ESI      ; 00585f9f | DAT_026537bc
    NEG EDI                             ; 00585fa5
    MOV dword ptr [ESP + 0xb4],EAX      ; 00585fa7
    CMP EDI,EAX                         ; 00585fae
    JGE 0x005861e3                      ; 00585fb0
        ;   XREF to: 005861e3 (CONDITIONAL_JUMP)  ; LAB_005861e3
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00585fb6
        ;   Label: LAB_00585fb6
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00585fbd
    NEG ESI                             ; 00585fc4
    CMP ESI,EAX                         ; 00585fc6
    JGE 0x005861d3                      ; 00585fc8
        ;   XREF to: 005861d3 (CONDITIONAL_JUMP)  ; LAB_005861d3
    MOV dword ptr [ESP + 0xbc],EDI      ; 00585fce
        ;   Label: LAB_00585fce
    FILD dword ptr [ESP + 0xbc]         ; 00585fd5
    FMUL float ptr [EBP + 0x8]          ; 00585fdc
    FSTP float ptr [ESP + 0x38]         ; 00585fdf
    MOV EAX,dword ptr [EBP + 0x4]       ; 00585fe3
    MOV dword ptr [ESP + 0xbc],ESI      ; 00585fe6
    MOV dword ptr [ESP + 0x3c],EAX      ; 00585fed
    FILD dword ptr [ESP + 0xbc]         ; 00585ff1
    FMUL float ptr [EBP + 0x8]          ; 00585ff8
    MOV ECX,dword ptr [0x0060b280]      ; 00585ffb | DAT_0060b280
    FLD float ptr [ESP + 0x38]          ; 00586001
    FADD float ptr [0x026537a8]         ; 00586005 | DAT_026537a8
    FLD float ptr [ESP + 0x3c]          ; 0058600b
    LEA EAX,[ESP + 0x38]                ; 0058600f
    FXCH ST2                            ; 00586013
    FSTP float ptr [ESP + 0x40]         ; 00586015
    FSTP float ptr [ESP + 0x38]         ; 00586019
    PUSH EAX                            ; 0058601d
    FADD float ptr [0x026537ac]         ; 0058601e | DAT_026537ac
    FLD float ptr [ESP + 0x44]          ; 00586024
    FXCH                                ; 00586028
    FSTP float ptr [ESP + 0x40]         ; 0058602a
    FADD float ptr [0x026537b0]         ; 0058602e | DAT_026537b0
    PUSH ECX                            ; 00586034 | DAT_01ba5c50
    FSTP float ptr [ESP + 0x48]         ; 00586035
    CALL FUN_0046b2b0                   ; 00586039
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0058603e
    LEA EBX,[ESP + 0x8c]                ; 00586041
    LEA EAX,[ESP + 0x38]                ; 00586048
    FLD float ptr [EAX]                 ; 0058604c
    FMUL float ptr [0x005fdc5c]         ; 0058604e | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 00586054
    FLD float ptr [EAX + 0x4]           ; 00586056
    FMUL float ptr [0x005fdc5c]         ; 00586059 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 0058605f
    FLD float ptr [EAX + 0x8]           ; 00586062
    FMUL float ptr [0x005fdc5c]         ; 00586065 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 0058606b
    XOR EBX,EBX                         ; 0058606e
    LEA EAX,[ESP + 0x38]                ; 00586070
    MOV dword ptr [ESP + 0x38],EBX      ; 00586074
    MOV dword ptr [ESP + 0x3c],EBX      ; 00586078
    MOV dword ptr [ESP + 0x40],EBX      ; 0058607c
    LEA EBX,[ESP + 0x68]                ; 00586080
    MOV EDX,dword ptr [0x0060b280]      ; 00586084 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058608a
    FMUL float ptr [0x005fdc5c]         ; 0058608c | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 00586092
    FLD float ptr [EAX + 0x4]           ; 00586094
    FMUL float ptr [0x005fdc5c]         ; 00586097 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 0058609d
    FLD float ptr [EAX + 0x8]           ; 005860a0
    FMUL float ptr [0x005fdc5c]         ; 005860a3 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 005860a9
    LEA EAX,[ESP + 0x68]                ; 005860ac
    PUSH EAX                            ; 005860b0
    MOV EAX,dword ptr [EDX]             ; 005860b1 | DAT_01ba5c50
    PUSH EAX                            ; 005860b3
    CALL FUN_0055d723                   ; 005860b4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 005860b9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005860bc
    LEA EBX,[ESP + 0x2c]                ; 005860bf
    MOV dword ptr [ESP + 0x38],EAX      ; 005860c3
    LEA EAX,[ESP + 0x38]                ; 005860c7
    MOV EDX,dword ptr [0x0060b280]      ; 005860cb | DAT_0060b280
    FLD float ptr [EAX]                 ; 005860d1
    FMUL float ptr [0x005fdc5c]         ; 005860d3 | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 005860d9
    FLD float ptr [EAX + 0x4]           ; 005860db
    FMUL float ptr [0x005fdc5c]         ; 005860de | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 005860e4
    FLD float ptr [EAX + 0x8]           ; 005860e7
    FMUL float ptr [0x005fdc5c]         ; 005860ea | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 005860f0
    LEA EAX,[ESP + 0x2c]                ; 005860f3
    PUSH EAX                            ; 005860f7
    MOV EAX,dword ptr [EDX]             ; 005860f8 | DAT_01ba5c50
    ADD EAX,0x30                        ; 005860fa
    PUSH EAX                            ; 005860fd
    CALL FUN_0055d723                   ; 005860fe
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 00586103
    MOV EAX,dword ptr [EBP + 0x8]       ; 00586106
    LEA EBX,[ESP + 0x50]                ; 00586109
    MOV dword ptr [ESP + 0x40],EAX      ; 0058610d
    LEA EAX,[ESP + 0x38]                ; 00586111
    MOV EDX,dword ptr [0x0060b280]      ; 00586115 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058611b
    FMUL float ptr [0x005fdc5c]         ; 0058611d | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 00586123
    FLD float ptr [EAX + 0x4]           ; 00586125
    FMUL float ptr [0x005fdc5c]         ; 00586128 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 0058612e
    FLD float ptr [EAX + 0x8]           ; 00586131
    FMUL float ptr [0x005fdc5c]         ; 00586134 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 0058613a
    LEA EAX,[ESP + 0x50]                ; 0058613d
    PUSH EAX                            ; 00586141
    MOV EAX,dword ptr [EDX]             ; 00586142 | DAT_01ba5c50
    ADD EAX,0x60                        ; 00586144
    PUSH EAX                            ; 00586147
    CALL FUN_0055d723                   ; 00586148
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    LEA EBX,[ESP + 0x4c]                ; 0058614d
    LEA EAX,[ESP + 0x40]                ; 00586151
    ADD ESP,0x8                         ; 00586155
    XOR ECX,ECX                         ; 00586158
    MOV EDX,dword ptr [0x0060b280]      ; 0058615a | DAT_0060b280
    MOV dword ptr [ESP + 0x38],ECX      ; 00586160
    FLD float ptr [EAX]                 ; 00586164
    FMUL float ptr [0x005fdc5c]         ; 00586166 | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 0058616c
    FLD float ptr [EAX + 0x4]           ; 0058616e
    FMUL float ptr [0x005fdc5c]         ; 00586171 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 00586177
    FLD float ptr [EAX + 0x8]           ; 0058617a
    FMUL float ptr [0x005fdc5c]         ; 0058617d | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 00586183
    LEA EAX,[ESP + 0x44]                ; 00586186
    PUSH EAX                            ; 0058618a
    MOV EAX,dword ptr [EDX]             ; 0058618b | DAT_01ba5c50
    ADD EAX,0x90                        ; 0058618d
    PUSH EAX                            ; 00586192
    CALL FUN_0055d723                   ; 00586193
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV EAX,[0x00622024]                ; 00586198 | DAT_00622024
    MOV EBX,dword ptr [0x00622054]      ; 0058619d | DAT_00622054
    MOV EDX,dword ptr [0x00622084]      ; 005861a3 | DAT_00622084
    AND EAX,EBX                         ; 005861a9
    MOV ECX,dword ptr [0x006220b4]      ; 005861ab | DAT_006220b4
    AND EAX,EDX                         ; 005861b1
    AND EAX,ECX                         ; 005861b3
    ADD ESP,0x8                         ; 005861b5
    TEST EAX,0x80000000                 ; 005861b8
    JZ 0x0058621e                       ; 005861bd
        ;   XREF to: 0058621e (CONDITIONAL_JUMP)  ; LAB_0058621e
    TEST AL,0xff                        ; 005861bf
    JZ 0x0058621e                       ; 005861c1
        ;   XREF to: 0058621e (CONDITIONAL_JUMP)  ; LAB_0058621e
    MOV EDX,dword ptr [ESP + 0xb8]      ; 005861c3
        ;   Label: LAB_005861c3
    INC ESI                             ; 005861ca
    CMP ESI,EDX                         ; 005861cb
    JL 0x00585fce                       ; 005861cd
        ;   XREF to: 00585fce (CONDITIONAL_JUMP)  ; LAB_00585fce
    MOV EDX,dword ptr [ESP + 0xb4]      ; 005861d3
        ;   Label: LAB_005861d3
    INC EDI                             ; 005861da
    CMP EDI,EDX                         ; 005861db
    JL 0x00585fb6                       ; 005861dd
        ;   XREF to: 00585fb6 (CONDITIONAL_JUMP)  ; LAB_00585fb6
    FILD dword ptr [0x026537bc]         ; 005861e3 | DAT_026537bc
        ;   Label: LAB_005861e3
    FMUL float ptr [EBP + 0x8]          ; 005861e9
    FMUL float ptr [EBP + 0x8]          ; 005861ec
    SUB ESP,0x8                         ; 005861ef
    MOV ECX,dword ptr [0x026537bc]      ; 005861f2 | DAT_026537bc
    FST float ptr [EBP + 0xc]           ; 005861f8
    FSTP double ptr [ESP]               ; 005861fb
    PUSH ECX                            ; 005861fe
    PUSH 0x5edec6                       ; 005861ff | = "Vis water tiles : %d, SqFt : %f"
    MOV EBX,dword ptr [0x00609ed0]      ; 00586204 | PTR_DAT_00609ed0
    PUSH EBX                            ; 0058620a | DAT_007c158c
    CALL FUN_00436710                   ; 0058620b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x14                        ; 00586210
    POP EDI                             ; 00586213
    ADD ESP,0xbc                        ; 00586214
    POP EBP                             ; 0058621a
    POP ESI                             ; 0058621b
    POP EBX                             ; 0058621c
    RET                                 ; 0058621d
    MOV EBX,0x4                         ; 0058621e
        ;   Label: LAB_0058621e
    MOV EDX,0x1                         ; 00586223
    XOR EAX,EAX                         ; 00586228
    MOV dword ptr [ESP + 0x8],EBX       ; 0058622a
    MOV dword ptr [ESP + 0x18],EAX      ; 0058622e
    MOV dword ptr [ESP + 0x14],EAX      ; 00586232
    MOV dword ptr [ESP + 0x10],EAX      ; 00586236
    MOV dword ptr [ESP + 0xc],EAX       ; 0058623a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058623e
    MOV EBX,0x3                         ; 00586242
    MOV EAX,0x10                        ; 00586247
    MOV dword ptr [ESP + 0x28],EBX      ; 0058624c
    MOV EBX,dword ptr [0x0060b284]      ; 00586250 | DAT_0060b284
    MOV [0x0060b284],EAX                ; 00586256 | DAT_0060b284
    LEA EAX,[ESP + 0x4]                 ; 0058625b
    MOV dword ptr [ESP + 0x20],EDX      ; 0058625f
    PUSH EAX                            ; 00586263
    MOV EDX,dword ptr [0x0060b280]      ; 00586264 | DAT_0060b280
    MOV ECX,0x2                         ; 0058626a
    PUSH EDX                            ; 0058626f | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],ECX      ; 00586270
    CALL FUN_004699a0                   ; 00586274
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004699a0()
    ADD ESP,0x8                         ; 00586279
    TEST EAX,EAX                        ; 0058627c
    JZ 0x005862ca                       ; 0058627e
        ;   XREF to: 005862ca (CONDITIONAL_JUMP)  ; LAB_005862ca
    CMP dword ptr [0x026537bc],0x1000   ; 00586280 | DAT_026537bc
    JL 0x005862ae                       ; 0058628a
        ;   XREF to: 005862ae (CONDITIONAL_JUMP)  ; LAB_005862ae
    MOV EAX,0x5ede96                    ; 0058628c | = "..\\core\\water.cpp"
    MOV EDX,0x103                       ; 00586291
    PUSH 0x5edea8                       ; 00586296 | = "Too many visible water tiles!"
    MOV [0x01d046a0],EAX                ; 0058629b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005862a0 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005862a6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005862ab
    MOV EAX,[0x026537bc]                ; 005862ae | DAT_026537bc
        ;   Label: LAB_005862ae
    LEA ECX,[EAX + 0x1]                 ; 005862b3
    MOV dword ptr [EAX*0x4 + 0x26537c0],EDI ; 005862b6 | DAT_026537c0
    MOV dword ptr [EAX*0x4 + 0x26577c0],ESI ; 005862bd | DAT_026577c0
    MOV dword ptr [0x026537bc],ECX      ; 005862c4 | DAT_026537bc
    MOV dword ptr [0x0060b284],EBX      ; 005862ca | DAT_0060b284
        ;   Label: LAB_005862ca
    JMP 0x005861c3                      ; 005862d0
        ;   XREF to: 005861c3 (UNCONDITIONAL_JUMP)  ; LAB_005861c3

