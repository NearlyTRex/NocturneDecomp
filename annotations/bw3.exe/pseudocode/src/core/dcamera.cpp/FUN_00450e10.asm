; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_dcamera_cpp_FUN_00450e10(CDemonCamera *param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_00533e5e at 005341b4
;
; Referenced Globals:
;   undefined4 DAT_005ddfc4
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
;   core_dcamera.cpp_FUN_00449eb0
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450e10
        ;   Label: core_dcamera.cpp_FUN_00450e10
    PUSH EDI                            ; 00450e11
    PUSH EBP                            ; 00450e12
    SUB ESP,0x110                       ; 00450e13
    MOV EBP,dword ptr [ESP + 0x120]     ; 00450e19
    MOV dword ptr [ESP + 0xe8],ESI      ; 00450e20
    LEA EAX,[ESP + 0xc]                 ; 00450e27
    CMP EAX,0x2cfd900                   ; 00450e2b
    JNZ 0x00450f05                      ; 00450e30
        ;   XREF to: 00450f05 (CONDITIONAL_JUMP)  ; LAB_00450f05
    MOV EAX,ESP                         ; 00450e36
        ;   Label: LAB_00450e36
    LEA EBX,[ESP + 0xc]                 ; 00450e38
    CMP EAX,EBX                         ; 00450e3c
    JNZ 0x00450f25                      ; 00450e3e
        ;   XREF to: 00450f25 (CONDITIONAL_JUMP)  ; LAB_00450f25
    MOV EDX,0x1                         ; 00450e44
        ;   Label: LAB_00450e44
    LEA EAX,[EBP + 0x4]                 ; 00450e49
    XOR ECX,ECX                         ; 00450e4c
    MOV dword ptr [ESP + 0x100],EAX     ; 00450e4e
    MOV dword ptr [ESP + 0xe4],ECX      ; 00450e55
    LEA EAX,[EBP + 0x10]                ; 00450e5c
    MOV dword ptr [ESP + 0x108],EDX     ; 00450e5f
    MOV dword ptr [ESP + 0xec],EAX      ; 00450e66
    MOV EAX,dword ptr [EBP + 0x148]     ; 00450e6d
        ;   Label: LAB_00450e6d
    MOV EBX,dword ptr [ESP + 0x108]     ; 00450e73
    DEC EAX                             ; 00450e7a
    CMP EAX,EBX                         ; 00450e7b
    JLE 0x00451222                      ; 00450e7d
        ;   XREF to: 00451222 (CONDITIONAL_JUMP)  ; LAB_00451222
    MOV ESI,0x1                         ; 00450e83
    LEA EAX,[EBX + ESI*0x1]             ; 00450e88
    MOV dword ptr [ESP + 0xfc],EAX      ; 00450e8b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00450e92
    XOR EDI,EDI                         ; 00450e99
    MOV dword ptr [ESP + 0xf0],EAX      ; 00450e9b
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00450ea2
    MOV dword ptr [ESP + 0x104],EDI     ; 00450ea9
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450eb0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00450eb7
    MOV dword ptr [ESP + 0x10c],ESI     ; 00450ebe
    MOV dword ptr [ESP + 0xf8],EAX      ; 00450ec5
    MOV EAX,dword ptr [EBP + 0x144]     ; 00450ecc
        ;   Label: LAB_00450ecc
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00450ed2
    DEC EAX                             ; 00450ed9
    CMP EAX,EDX                         ; 00450eda
    JG 0x00450f41                       ; 00450edc
        ;   XREF to: 00450f41 (CONDITIONAL_JUMP)  ; LAB_00450f41
    MOV EBX,dword ptr [ESP + 0x108]     ; 00450ee2
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00450ee9
    INC EBX                             ; 00450ef0
    INC ECX                             ; 00450ef1
    MOV dword ptr [ESP + 0x108],EBX     ; 00450ef2
    MOV dword ptr [ESP + 0xe4],ECX      ; 00450ef9
    JMP 0x00450e6d                      ; 00450f00
        ;   XREF to: 00450e6d (UNCONDITIONAL_JUMP)  ; LAB_00450e6d
    MOV EAX,[0x02cfd900]                ; 00450f05 | DAT_02cfd900
        ;   Label: LAB_00450f05
    MOV dword ptr [ESP + 0xc],EAX       ; 00450f0a
    MOV EAX,[0x02cfd904]                ; 00450f0e | DAT_02cfd904
    MOV dword ptr [ESP + 0x10],EAX      ; 00450f13
    MOV EAX,[0x02cfd908]                ; 00450f17 | DAT_02cfd908
    MOV dword ptr [ESP + 0x14],EAX      ; 00450f1c
    JMP 0x00450e36                      ; 00450f20
        ;   XREF to: 00450e36 (UNCONDITIONAL_JUMP)  ; LAB_00450e36
    MOV EAX,dword ptr [ESP + 0xc]       ; 00450f25
        ;   Label: LAB_00450f25
    MOV dword ptr [ESP],EAX             ; 00450f29
    MOV EAX,dword ptr [ESP + 0x10]      ; 00450f2c
    MOV dword ptr [ESP + 0x4],EAX       ; 00450f30
    MOV EAX,dword ptr [ESP + 0x14]      ; 00450f34
    MOV dword ptr [ESP + 0x8],EAX       ; 00450f38
    JMP 0x00450e44                      ; 00450f3c
        ;   XREF to: 00450e44 (UNCONDITIONAL_JUMP)  ; LAB_00450e44
    MOV ESI,dword ptr [ESP + 0x108]     ; 00450f41
        ;   Label: LAB_00450f41
    PUSH ESI                            ; 00450f48
    PUSH EDX                            ; 00450f49
    PUSH EBP                            ; 00450f4a
    LEA ESI,[ESP + 0x48]                ; 00450f4b
    LEA EDI,[ESP + 0xd8]                ; 00450f4f
    CALL core_dcamera.cpp_FUN_00449eb0  ; 00450f56
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x48]                ; 00450f5b
    ADD ESP,0xc                         ; 00450f5f
    MOVSD ES:EDI,ESI                    ; 00450f62
    MOVSD ES:EDI,ESI                    ; 00450f63
    MOVSD ES:EDI,ESI                    ; 00450f64
    CMP dword ptr [ESP + 0xd4],0x1f400  ; 00450f65
    JLE 0x00450fda                      ; 00450f70
        ;   XREF to: 00450fda (CONDITIONAL_JUMP)  ; LAB_00450fda
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00450f72
    XOR EBX,EBX                         ; 00450f79
    CMP EDX,0x1                         ; 00450f7b
    JG 0x004510da                       ; 00450f7e
        ;   XREF to: 004510da (CONDITIONAL_JUMP)  ; LAB_004510da
    INC EBX                             ; 00450f84
        ;   Label: LAB_00450f84
    CMP dword ptr [ESP + 0x10c],0x1     ; 00450f85
        ;   Label: LAB_00450f85
    JG 0x00451129                       ; 00450f8d
        ;   XREF to: 00451129 (CONDITIONAL_JUMP)  ; LAB_00451129
    INC EBX                             ; 00450f93
        ;   Label: LAB_00450f93
    MOV EAX,dword ptr [EBP + 0x144]     ; 00450f94
        ;   Label: LAB_00450f94
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00450f9a
    SUB EAX,0x2                         ; 00450fa1
    CMP EAX,EDX                         ; 00450fa4
    JG 0x0045117c                       ; 00450fa6
        ;   XREF to: 0045117c (CONDITIONAL_JUMP)  ; LAB_0045117c
    INC EBX                             ; 00450fac
        ;   Label: LAB_00450fac
    MOV EAX,dword ptr [EBP + 0x144]     ; 00450fad
        ;   Label: LAB_00450fad
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00450fb3
    SUB EAX,0x2                         ; 00450fba
    CMP EAX,EDX                         ; 00450fbd
    JG 0x004511cd                       ; 00450fbf
        ;   XREF to: 004511cd (CONDITIONAL_JUMP)  ; LAB_004511cd
    INC EBX                             ; 00450fc5
        ;   Label: LAB_00450fc5
    CMP EBX,0x4                         ; 00450fc6
        ;   Label: LAB_00450fc6
    JL 0x004510b7                       ; 00450fc9
        ;   XREF to: 004510b7 (CONDITIONAL_JUMP)  ; LAB_004510b7
    MOV dword ptr [ESP + 0xd4],0x1f400  ; 00450fcf
    LEA EAX,[ESP + 0xcc]                ; 00450fda
        ;   Label: LAB_00450fda
    PUSH EAX                            ; 00450fe1
    LEA ESI,[ESP + 0x7c]                ; 00450fe2
    PUSH EBP                            ; 00450fe6
    LEA EDI,[ESP + 0xe0]                ; 00450fe7
    LEA EBX,[ESP + 0xc8]                ; 00450fee
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80 ; 00450ff5
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x80]                ; 00450ffa
    ADD ESP,0x8                         ; 00451001
    LEA EAX,[ESP + 0xd8]                ; 00451004
    MOV EDX,dword ptr [ESP + 0xec]      ; 0045100b
    MOVSD ES:EDI,ESI                    ; 00451012
    MOVSD ES:EDI,ESI                    ; 00451013
    MOVSD ES:EDI,ESI                    ; 00451014
    FILD dword ptr [EAX]                ; 00451015
    FMUL float ptr [0x005ddfc4]         ; 00451017 | DAT_005ddfc4
    FSTP float ptr [EBX]                ; 0045101d
    FILD dword ptr [EAX + 0x4]          ; 0045101f
    FMUL float ptr [0x005ddfc4]         ; 00451022 | DAT_005ddfc4
    FSTP float ptr [EBX + 0x4]          ; 00451028
    FILD dword ptr [EAX + 0x8]          ; 0045102b
    FMUL float ptr [0x005ddfc4]         ; 0045102e | DAT_005ddfc4
    FSTP float ptr [EBX + 0x8]          ; 00451034
    FLD float ptr [ESP + 0xc0]          ; 00451037
    FLD float ptr [ESP + 0xc4]          ; 0045103e
    FLD float ptr [ESP + 0xc8]          ; 00451045
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045104c
    LEA EDI,[ESP + 0x30]                ; 00451053
    LEA ESI,[ESP + 0x9c]                ; 00451057
    FXCH ST2                            ; 0045105e
    FSUB float ptr [EAX]                ; 00451060
    FXCH                                ; 00451062
    FSUB float ptr [EAX + 0x4]          ; 00451064
    FXCH ST2                            ; 00451067
    FSUB float ptr [EAX + 0x8]          ; 00451069
    FXCH                                ; 0045106c
    FSTP float ptr [ESP + 0x9c]         ; 0045106e
    FXCH                                ; 00451075
    FSTP float ptr [ESP + 0xa0]         ; 00451077
    LEA EAX,[ESP + 0x30]                ; 0045107e
    FSTP float ptr [ESP + 0xa4]         ; 00451082
    PUSH EAX                            ; 00451089
    MOVSD ES:EDI,ESI                    ; 0045108a
    MOVSD ES:EDI,ESI                    ; 0045108b
    MOVSD ES:EDI,ESI                    ; 0045108c
    PUSH EDX                            ; 0045108d
    LEA ESI,[ESP + 0x5c]                ; 0045108e
    CALL core_dirmat.cpp_FUN_0045b870   ; 00451092
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    ADD ESP,0x8                         ; 00451097
    LEA EAX,[ESP + 0x24]                ; 0045109a
    LEA EDI,[ESP + 0x24]                ; 0045109e
    PUSH EAX                            ; 004510a2
    LEA EAX,[ESP + 0x4]                 ; 004510a3
    LEA ESI,[ESP + 0x58]                ; 004510a7
    PUSH EAX                            ; 004510ab
    MOVSD ES:EDI,ESI                    ; 004510ac
    MOVSD ES:EDI,ESI                    ; 004510ad
    MOVSD ES:EDI,ESI                    ; 004510ae
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 004510af
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004510b4
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004510b7
        ;   Label: LAB_004510b7
    MOV ECX,dword ptr [ESP + 0x104]     ; 004510be
    INC EBX                             ; 004510c5
    INC ECX                             ; 004510c6
    MOV dword ptr [ESP + 0x10c],EBX     ; 004510c7
    MOV dword ptr [ESP + 0x104],ECX     ; 004510ce
    JMP 0x00450ecc                      ; 004510d5
        ;   XREF to: 00450ecc (UNCONDITIONAL_JUMP)  ; LAB_00450ecc
    CMP dword ptr [ESP + 0x108],0x1     ; 004510da
        ;   Label: LAB_004510da
    JLE 0x00450f84                      ; 004510e2
        ;   XREF to: 00450f84 (CONDITIONAL_JUMP)  ; LAB_00450f84
    MOV ESI,dword ptr [ESP + 0xf8]      ; 004510e8
    PUSH ESI                            ; 004510ef
    MOV EDI,dword ptr [ESP + 0x108]     ; 004510f0
    PUSH EDI                            ; 004510f7
    PUSH EBP                            ; 004510f8
    LEA ESI,[ESP + 0xb4]                ; 004510f9
    LEA EDI,[ESP + 0x54]                ; 00451100
    CALL core_dcamera.cpp_FUN_00449eb0  ; 00451104
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0xb4]                ; 00451109
    ADD ESP,0xc                         ; 00451110
    MOVSD ES:EDI,ESI                    ; 00451113
    MOVSD ES:EDI,ESI                    ; 00451114
    MOVSD ES:EDI,ESI                    ; 00451115
    CMP dword ptr [ESP + 0x50],0x1f400  ; 00451116
    JG 0x00450f84                       ; 0045111e
        ;   XREF to: 00450f84 (CONDITIONAL_JUMP)  ; LAB_00450f84
    JMP 0x00450f85                      ; 00451124
        ;   XREF to: 00450f85 (UNCONDITIONAL_JUMP)  ; LAB_00450f85
    MOV EAX,dword ptr [EBP + 0x148]     ; 00451129
        ;   Label: LAB_00451129
    MOV ECX,dword ptr [ESP + 0x108]     ; 0045112f
    SUB EAX,0x2                         ; 00451136
    CMP EAX,ECX                         ; 00451139
    JLE 0x00450f93                      ; 0045113b
        ;   XREF to: 00450f93 (CONDITIONAL_JUMP)  ; LAB_00450f93
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00451141
    PUSH ESI                            ; 00451148
    MOV EDI,dword ptr [ESP + 0x108]     ; 00451149
    PUSH EDI                            ; 00451150
    PUSH EBP                            ; 00451151
    LEA ESI,[ESP + 0x24]                ; 00451152
    LEA EDI,[ESP + 0x6c]                ; 00451156
    CALL core_dcamera.cpp_FUN_00449eb0  ; 0045115a
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x24]                ; 0045115f
    ADD ESP,0xc                         ; 00451163
    MOVSD ES:EDI,ESI                    ; 00451166
    MOVSD ES:EDI,ESI                    ; 00451167
    MOVSD ES:EDI,ESI                    ; 00451168
    CMP dword ptr [ESP + 0x68],0x1f400  ; 00451169
    JG 0x00450f93                       ; 00451171
        ;   XREF to: 00450f93 (CONDITIONAL_JUMP)  ; LAB_00450f93
    JMP 0x00450f94                      ; 00451177
        ;   XREF to: 00450f94 (UNCONDITIONAL_JUMP)  ; LAB_00450f94
    CMP dword ptr [ESP + 0x108],0x1     ; 0045117c
        ;   Label: LAB_0045117c
    JLE 0x00450fac                      ; 00451184
        ;   XREF to: 00450fac (CONDITIONAL_JUMP)  ; LAB_00450fac
    MOV ESI,dword ptr [ESP + 0xf0]      ; 0045118a
    PUSH ESI                            ; 00451191
    LEA EAX,[EDX + 0x1]                 ; 00451192
    PUSH EAX                            ; 00451195
    PUSH EBP                            ; 00451196
    LEA ESI,[ESP + 0xc0]                ; 00451197
    LEA EDI,[ESP + 0x90]                ; 0045119e
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004511a5
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0xc0]                ; 004511aa
    ADD ESP,0xc                         ; 004511b1
    MOVSD ES:EDI,ESI                    ; 004511b4
    MOVSD ES:EDI,ESI                    ; 004511b5
    MOVSD ES:EDI,ESI                    ; 004511b6
    CMP dword ptr [ESP + 0x8c],0x1f400  ; 004511b7
    JG 0x00450fac                       ; 004511c2
        ;   XREF to: 00450fac (CONDITIONAL_JUMP)  ; LAB_00450fac
    JMP 0x00450fad                      ; 004511c8
        ;   XREF to: 00450fad (UNCONDITIONAL_JUMP)  ; LAB_00450fad
    MOV EAX,dword ptr [EBP + 0x148]     ; 004511cd
        ;   Label: LAB_004511cd
    MOV ECX,dword ptr [ESP + 0x108]     ; 004511d3
    SUB EAX,0x2                         ; 004511da
    CMP EAX,ECX                         ; 004511dd
    JLE 0x00450fc5                      ; 004511df
        ;   XREF to: 00450fc5 (CONDITIONAL_JUMP)  ; LAB_00450fc5
    MOV ESI,dword ptr [ESP + 0xfc]      ; 004511e5
    PUSH ESI                            ; 004511ec
    LEA EAX,[EDX + 0x1]                 ; 004511ed
    PUSH EAX                            ; 004511f0
    PUSH EBP                            ; 004511f1
    LEA ESI,[ESP + 0x78]                ; 004511f2
    LEA EDI,[ESP + 0x9c]                ; 004511f6
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004511fd
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x78]                ; 00451202
    ADD ESP,0xc                         ; 00451206
    MOVSD ES:EDI,ESI                    ; 00451209
    MOVSD ES:EDI,ESI                    ; 0045120a
    MOVSD ES:EDI,ESI                    ; 0045120b
    CMP dword ptr [ESP + 0x98],0x1f400  ; 0045120c
    JG 0x00450fc5                       ; 00451217
        ;   XREF to: 00450fc5 (CONDITIONAL_JUMP)  ; LAB_00450fc5
    JMP 0x00450fc6                      ; 0045121d
        ;   XREF to: 00450fc6 (UNCONDITIONAL_JUMP)  ; LAB_00450fc6
    MOV ECX,0x6                         ; 00451222
        ;   Label: LAB_00451222
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00451227
    MOV ESI,ESP                         ; 0045122e
    MOVSD.REP ES:EDI,ESI                ; 00451230
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00451232
    ADD ESP,0x110                       ; 00451239
    POP EBP                             ; 0045123f
    POP EDI                             ; 00451240
    POP EBX                             ; 00451241
    RET                                 ; 00451242

