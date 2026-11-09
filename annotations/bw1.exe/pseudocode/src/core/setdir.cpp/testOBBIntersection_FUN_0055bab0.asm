; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setdir_cpp_testOBBIntersection_FUN_0055bab0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
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
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_setdir.cpp_FUN_0055bf10 at 0055c000
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_FUN_00420ee0
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bab0
        ;   Label: core_setdir.cpp_testOBBIntersection_FUN_0055bab0
    PUSH ESI                            ; 0055bab1
    PUSH EDI                            ; 0055bab2
    PUSH EBP                            ; 0055bab3
    MOV EBP,ESP                         ; 0055bab4
    SUB ESP,0x184                       ; 0055bab6
    SUB EBP,0x7a                        ; 0055babc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0055babf
    MOV EAX,dword ptr [EBP + 0x92]      ; 0055bac5
    LEA EDI,[EBP + -0x32]               ; 0055bacb
    LEA ESI,[EBP + 0xa]                 ; 0055bace
    FLD float ptr [EAX + 0xc]           ; 0055bad1
    FLD float ptr [EAX + 0x10]          ; 0055bad4
    FLD float ptr [EAX + 0x14]          ; 0055bad7
    FXCH ST2                            ; 0055bada
    FCHS                                ; 0055badc
    FXCH                                ; 0055bade
    FCHS                                ; 0055bae0
    FXCH ST2                            ; 0055bae2
    FCHS                                ; 0055bae4
    FXCH                                ; 0055bae6
    FSTP float ptr [EBP + 0xa]          ; 0055bae8
    FXCH                                ; 0055baeb
    FSTP float ptr [EBP + 0xe]          ; 0055baed
    FSTP float ptr [EBP + 0x12]         ; 0055baf0
    MOVSD ES:EDI,ESI                    ; 0055baf3
    MOVSD ES:EDI,ESI                    ; 0055baf4
    MOVSD ES:EDI,ESI                    ; 0055baf5
    LEA EAX,[EBP + 0xffffff56]          ; 0055baf6
    LEA ESI,[EBP + -0x32]               ; 0055bafc
    CMP EAX,ESI                         ; 0055baff
    JNZ 0x0055be88                      ; 0055bb01
        ;   XREF to: 0055be88 (CONDITIONAL_JUMP)  ; LAB_0055be88
    MOV ESI,dword ptr [EBP + 0x92]      ; 0055bb07
        ;   Label: LAB_0055bb07
    LEA EAX,[EBP + 0xffffff62]          ; 0055bb0d
    ADD ESI,0xc                         ; 0055bb13
    CMP EAX,ESI                         ; 0055bb16
    JNZ 0x0055bea8                      ; 0055bb18
        ;   XREF to: 0055bea8 (CONDITIONAL_JUMP)  ; LAB_0055bea8
    PUSH 0x5fb430                       ; 0055bb1e | g_CVectorTypeInfo
        ;   Label: LAB_0055bb1e
    PUSH 0x8                            ; 0055bb23
    LEA EAX,[EBP + 0xfffffef6]          ; 0055bb25
    PUSH EAX                            ; 0055bb2b
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0055bb2c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    MOV EAX,dword ptr [EBP + 0x92]      ; 0055bb31
    ADD ESP,0xc                         ; 0055bb37
    ADD EAX,0x18                        ; 0055bb3a
    XOR EDX,EDX                         ; 0055bb3d
    MOV dword ptr [EBP + 0x6e],EAX      ; 0055bb3f
    LEA EAX,[EBX + 0x18]                ; 0055bb42
    MOV dword ptr [EBP + 0x6a],EDX      ; 0055bb45
    MOV dword ptr [EBP + 0x56],EAX      ; 0055bb48
    MOV EAX,dword ptr [EBX + 0xc]       ; 0055bb4b
        ;   Label: LAB_0055bb4b
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0055bb4e
    MOV dword ptr [EBP + 0x5a],EAX      ; 0055bb51
    IMUL EAX,ECX,0xc                    ; 0055bb54
    LEA ESI,[EBP + 0xfffffef6]          ; 0055bb57
    ADD EAX,ESI                         ; 0055bb5d
    MOV dword ptr [EBP + 0x66],EAX      ; 0055bb5f
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0055bb62
        ;   Label: LAB_0055bb62
    MOV dword ptr [EBP + -0x56],EAX     ; 0055bb65
    TEST byte ptr [EBP + 0x6a],0x2      ; 0055bb68
    JZ 0x0055bede                       ; 0055bb6c
        ;   XREF to: 0055bede (CONDITIONAL_JUMP)  ; LAB_0055bede
    FLD float ptr [EBX + 0x10]          ; 0055bb72
    FCHS                                ; 0055bb75
    FSTP float ptr [EBP + 0x5e]         ; 0055bb77
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0055bb7a
        ;   Label: LAB_0055bb7a
    MOV DL,byte ptr [EBP + 0x6a]        ; 0055bb7d
    MOV dword ptr [EBP + -0x52],EAX     ; 0055bb80
    TEST DL,0x4                         ; 0055bb83
    JZ 0x0055bee9                       ; 0055bb86
        ;   XREF to: 0055bee9 (CONDITIONAL_JUMP)  ; LAB_0055bee9
    FLD float ptr [EBX + 0x14]          ; 0055bb8c
    FCHS                                ; 0055bb8f
    FSTP float ptr [EBP + 0x62]         ; 0055bb91
    MOV EAX,dword ptr [EBP + 0x62]      ; 0055bb94
        ;   Label: LAB_0055bb94
    MOV dword ptr [EBP + -0x4e],EAX     ; 0055bb97
    LEA EAX,[EBP + -0x56]               ; 0055bb9a
    PUSH EAX                            ; 0055bb9d
    MOV ESI,dword ptr [EBP + 0x56]      ; 0055bb9e
    PUSH ESI                            ; 0055bba1
    LEA ESI,[EBP + 0x22]                ; 0055bba2
    LEA EDI,[EBP + -0x3e]               ; 0055bba5
    CALL core_dirmat.cpp_FUN_0045f690   ; 0055bba8
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[EBP + 0x22]                ; 0055bbad
    MOVSD ES:EDI,ESI                    ; 0055bbb0
    MOVSD ES:EDI,ESI                    ; 0055bbb1
    MOVSD ES:EDI,ESI                    ; 0055bbb2
    FLD float ptr [EBP + -0x3e]         ; 0055bbb3
    FLD float ptr [EBP + -0x3a]         ; 0055bbb6
    FLD float ptr [EBP + -0x36]         ; 0055bbb9
    LEA EDI,[EBP + -0x7a]               ; 0055bbbc
    LEA ESI,[EBP + -0x26]               ; 0055bbbf
    FXCH ST2                            ; 0055bbc2
    FADD float ptr [EBX]                ; 0055bbc4
    FXCH                                ; 0055bbc6
    FADD float ptr [EBX + 0x4]          ; 0055bbc8
    FXCH ST2                            ; 0055bbcb
    FADD float ptr [EBX + 0x8]          ; 0055bbcd
    FXCH                                ; 0055bbd0
    FSTP float ptr [EBP + -0x26]        ; 0055bbd2
    FXCH                                ; 0055bbd5
    FSTP float ptr [EBP + -0x22]        ; 0055bbd7
    FSTP float ptr [EBP + -0x1e]        ; 0055bbda
    MOVSD ES:EDI,ESI                    ; 0055bbdd
    MOVSD ES:EDI,ESI                    ; 0055bbde
    MOVSD ES:EDI,ESI                    ; 0055bbdf
    LEA EAX,[EBP + -0x56]               ; 0055bbe0
    LEA ESI,[EBP + -0x7a]               ; 0055bbe3
    ADD ESP,0x8                         ; 0055bbe6
    CMP EAX,ESI                         ; 0055bbe9
    JZ 0x0055bbff                       ; 0055bbeb
        ;   XREF to: 0055bbff (CONDITIONAL_JUMP)  ; LAB_0055bbff
    MOV EAX,dword ptr [EBP + -0x7a]     ; 0055bbed
    MOV dword ptr [EBP + -0x56],EAX     ; 0055bbf0
    MOV EAX,dword ptr [EBP + -0x76]     ; 0055bbf3
    MOV dword ptr [EBP + -0x52],EAX     ; 0055bbf6
    MOV EAX,dword ptr [EBP + -0x72]     ; 0055bbf9
    MOV dword ptr [EBP + -0x4e],EAX     ; 0055bbfc
    FLD float ptr [EBP + -0x56]         ; 0055bbff
        ;   Label: LAB_0055bbff
    FLD float ptr [EBP + -0x52]         ; 0055bc02
    FLD float ptr [EBP + -0x4e]         ; 0055bc05
    MOV EAX,dword ptr [EBP + 0x92]      ; 0055bc08
    LEA EDI,[EBP + 0xffffff7a]          ; 0055bc0e
    LEA ESI,[EBP + -0x1a]               ; 0055bc14
    FXCH ST2                            ; 0055bc17
    FSUB float ptr [EAX]                ; 0055bc19
    FXCH                                ; 0055bc1b
    FSUB float ptr [EAX + 0x4]          ; 0055bc1d
    FXCH ST2                            ; 0055bc20
    FSUB float ptr [EAX + 0x8]          ; 0055bc22
    FXCH                                ; 0055bc25
    FSTP float ptr [EBP + -0x1a]        ; 0055bc27
    FXCH                                ; 0055bc2a
    FSTP float ptr [EBP + -0x16]        ; 0055bc2c
    FSTP float ptr [EBP + -0x12]        ; 0055bc2f
    LEA EAX,[EBP + 0xffffff7a]          ; 0055bc32
    MOVSD ES:EDI,ESI                    ; 0055bc38
    MOVSD ES:EDI,ESI                    ; 0055bc39
    MOVSD ES:EDI,ESI                    ; 0055bc3a
    PUSH EAX                            ; 0055bc3b
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0055bc3c
    PUSH EDI                            ; 0055bc3f
    LEA ESI,[EBP + -0x2]                ; 0055bc40
    LEA EDI,[EBP + -0xe]                ; 0055bc43
    CALL core_dirmat.cpp_FUN_0045f700   ; 0055bc46
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[EBP + -0x2]                ; 0055bc4b
    MOVSD ES:EDI,ESI                    ; 0055bc4e
    MOVSD ES:EDI,ESI                    ; 0055bc4f
    MOVSD ES:EDI,ESI                    ; 0055bc50
    LEA EAX,[EBP + -0x56]               ; 0055bc51
    LEA ESI,[EBP + -0xe]                ; 0055bc54
    ADD ESP,0x8                         ; 0055bc57
    CMP EAX,ESI                         ; 0055bc5a
    JZ 0x0055bc70                       ; 0055bc5c
        ;   XREF to: 0055bc70 (CONDITIONAL_JUMP)  ; LAB_0055bc70
    MOV EAX,dword ptr [EBP + -0xe]      ; 0055bc5e
    MOV dword ptr [EBP + -0x56],EAX     ; 0055bc61
    MOV EAX,dword ptr [EBP + -0xa]      ; 0055bc64
    MOV dword ptr [EBP + -0x52],EAX     ; 0055bc67
    MOV EAX,dword ptr [EBP + -0x6]      ; 0055bc6a
    MOV dword ptr [EBP + -0x4e],EAX     ; 0055bc6d
    FLD float ptr [EBP + 0xffffff56]    ; 0055bc70
        ;   Label: LAB_0055bc70
    FCOMP float ptr [EBP + -0x56]       ; 0055bc76
    FNSTSW AX                           ; 0055bc79
    SAHF                                ; 0055bc7b
    JA 0x0055bcc8                       ; 0055bc7c
        ;   XREF to: 0055bcc8 (CONDITIONAL_JUMP)  ; LAB_0055bcc8
    FLD float ptr [EBP + 0xffffff5a]    ; 0055bc7e
    FCOMP float ptr [EBP + -0x52]       ; 0055bc84
    FNSTSW AX                           ; 0055bc87
    SAHF                                ; 0055bc89
    JA 0x0055bcc8                       ; 0055bc8a
        ;   XREF to: 0055bcc8 (CONDITIONAL_JUMP)  ; LAB_0055bcc8
    FLD float ptr [EBP + 0xffffff5e]    ; 0055bc8c
    FCOMP float ptr [EBP + -0x4e]       ; 0055bc92
    FNSTSW AX                           ; 0055bc95
    SAHF                                ; 0055bc97
    JA 0x0055bcc8                       ; 0055bc98
        ;   XREF to: 0055bcc8 (CONDITIONAL_JUMP)  ; LAB_0055bcc8
    FLD float ptr [EBP + 0xffffff62]    ; 0055bc9a
    FCOMP float ptr [EBP + -0x56]       ; 0055bca0
    FNSTSW AX                           ; 0055bca3
    SAHF                                ; 0055bca5
    JC 0x0055bcc8                       ; 0055bca6
        ;   XREF to: 0055bcc8 (CONDITIONAL_JUMP)  ; LAB_0055bcc8
    FLD float ptr [EBP + 0xffffff66]    ; 0055bca8
    FCOMP float ptr [EBP + -0x52]       ; 0055bcae
    FNSTSW AX                           ; 0055bcb1
    SAHF                                ; 0055bcb3
    JC 0x0055bcc8                       ; 0055bcb4
        ;   XREF to: 0055bcc8 (CONDITIONAL_JUMP)  ; LAB_0055bcc8
    FLD float ptr [EBP + 0xffffff6a]    ; 0055bcb6
    FCOMP float ptr [EBP + -0x4e]       ; 0055bcbc
    FNSTSW AX                           ; 0055bcbf
    SAHF                                ; 0055bcc1
    JNC 0x0055bef4                      ; 0055bcc2
        ;   XREF to: 0055bef4 (CONDITIONAL_JUMP)  ; LAB_0055bef4
    MOV EDX,dword ptr [EBP + 0x66]      ; 0055bcc8
        ;   Label: LAB_0055bcc8
    LEA EAX,[EBP + -0x56]               ; 0055bccb
    CMP EAX,EDX                         ; 0055bcce
    JZ 0x0055bce3                       ; 0055bcd0
        ;   XREF to: 0055bce3 (CONDITIONAL_JUMP)  ; LAB_0055bce3
    MOV EAX,dword ptr [EBP + -0x56]     ; 0055bcd2
    MOV dword ptr [EDX],EAX             ; 0055bcd5
    MOV EAX,dword ptr [EBP + -0x52]     ; 0055bcd7
    MOV dword ptr [EDX + 0x4],EAX       ; 0055bcda
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0055bcdd
    MOV dword ptr [EDX + 0x8],EAX       ; 0055bce0
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0055bce3
        ;   Label: LAB_0055bce3
    MOV ECX,dword ptr [EBP + 0x66]      ; 0055bce6
    INC ESI                             ; 0055bce9
    ADD ECX,0xc                         ; 0055bcea
    MOV dword ptr [EBP + 0x6a],ESI      ; 0055bced
    MOV dword ptr [EBP + 0x66],ECX      ; 0055bcf0
    CMP ESI,0x8                         ; 0055bcf3
    JL 0x0055bec7                       ; 0055bcf6
        ;   XREF to: 0055bec7 (CONDITIONAL_JUMP)  ; LAB_0055bec7
    XOR EAX,EAX                         ; 0055bcfc
    LEA EBX,[EBP + 0xfffffef6]          ; 0055bcfe
    MOV dword ptr [EBP + 0x52],EAX      ; 0055bd04
    MOV EAX,dword ptr [EBP + 0x52]      ; 0055bd07
        ;   Label: LAB_0055bd07
    XOR AL,0x1                          ; 0055bd0a
    IMUL EAX,EAX,0xc                    ; 0055bd0c
    LEA ESI,[EBP + 0xfffffef6]          ; 0055bd0f
    PUSH 0x0                            ; 0055bd15
    LEA EDI,[EBP + 0x16]                ; 0055bd17
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0055bd1a
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0055bd1e
    FLD float ptr [ESI + EAX*0x1]       ; 0055bd22
    LEA ESI,[EBP + -0x4a]               ; 0055bd25
    LEA EAX,[EBP + 0x16]                ; 0055bd28
    FSUB float ptr [EBX]                ; 0055bd2b
    FXCH ST2                            ; 0055bd2d
    FSUB float ptr [EBX + 0x4]          ; 0055bd2f
    FXCH                                ; 0055bd32
    FSUB float ptr [EBX + 0x8]          ; 0055bd34
    FXCH ST2                            ; 0055bd37
    FSTP float ptr [EBP + -0x4a]        ; 0055bd39
    PUSH EAX                            ; 0055bd3c
    FSTP float ptr [EBP + -0x46]        ; 0055bd3d
    LEA EAX,[EBP + 0xffffff56]          ; 0055bd40
    PUSH EBX                            ; 0055bd46
    FSTP float ptr [EBP + -0x42]        ; 0055bd47
    PUSH EAX                            ; 0055bd4a
    MOVSD ES:EDI,ESI                    ; 0055bd4b
    MOVSD ES:EDI,ESI                    ; 0055bd4c
    MOVSD ES:EDI,ESI                    ; 0055bd4d
    CALL core_box.cpp_FUN_00420ee0      ; 0055bd4e
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    FLDZ                                ; 0055bd53
    MOV dword ptr [EBP + 0x76],EAX      ; 0055bd55
    ADD ESP,0x10                        ; 0055bd58
    MOV EAX,dword ptr [EBP + 0x76]      ; 0055bd5b
    MOV dword ptr [EBP + 0x72],EAX      ; 0055bd5e
    FLD float ptr [EBP + 0x72]          ; 0055bd61
    FSTP double ptr [EBP + 0x4a]        ; 0055bd64
    FCOMP double ptr [EBP + 0x4a]       ; 0055bd67
    FNSTSW AX                           ; 0055bd6a
    SAHF                                ; 0055bd6c
    JA 0x0055bd7d                       ; 0055bd6d
        ;   XREF to: 0055bd7d (CONDITIONAL_JUMP)  ; LAB_0055bd7d
    FLD1                                ; 0055bd6f
    FCOMP double ptr [EBP + 0x4a]       ; 0055bd71
    FNSTSW AX                           ; 0055bd74
    SAHF                                ; 0055bd76
    JNC 0x0055bef4                      ; 0055bd77
        ;   XREF to: 0055bef4 (CONDITIONAL_JUMP)  ; LAB_0055bef4
    MOV ESI,dword ptr [EBP + 0x52]      ; 0055bd7d
        ;   Label: LAB_0055bd7d
    XOR SI,0x2                          ; 0055bd80
    IMUL ESI,ESI,0xc                    ; 0055bd84
    LEA EAX,[EBP + 0xfffffef6]          ; 0055bd87
    PUSH 0x0                            ; 0055bd8d
    LEA EDI,[EBP + 0x2e]                ; 0055bd8f
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0055bd92
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0055bd96
    FLD float ptr [ESI + EAX*0x1]       ; 0055bd9a
    LEA ESI,[EBP + -0x6e]               ; 0055bd9d
    LEA EAX,[EBP + 0x2e]                ; 0055bda0
    FSUB float ptr [EBX]                ; 0055bda3
    FXCH ST2                            ; 0055bda5
    FSUB float ptr [EBX + 0x4]          ; 0055bda7
    FXCH                                ; 0055bdaa
    FSUB float ptr [EBX + 0x8]          ; 0055bdac
    FXCH ST2                            ; 0055bdaf
    FSTP float ptr [EBP + -0x6e]        ; 0055bdb1
    PUSH EAX                            ; 0055bdb4
    FSTP float ptr [EBP + -0x6a]        ; 0055bdb5
    LEA EAX,[EBP + 0xffffff56]          ; 0055bdb8
    PUSH EBX                            ; 0055bdbe
    FSTP float ptr [EBP + -0x66]        ; 0055bdbf
    PUSH EAX                            ; 0055bdc2
    MOVSD ES:EDI,ESI                    ; 0055bdc3
    MOVSD ES:EDI,ESI                    ; 0055bdc4
    MOVSD ES:EDI,ESI                    ; 0055bdc5
    CALL core_box.cpp_FUN_00420ee0      ; 0055bdc6
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    FLDZ                                ; 0055bdcb
    MOV dword ptr [EBP + 0x76],EAX      ; 0055bdcd
    ADD ESP,0x10                        ; 0055bdd0
    FLD float ptr [EBP + 0x76]          ; 0055bdd3
    FSTP double ptr [EBP + 0x42]        ; 0055bdd6
    FCOMP double ptr [EBP + 0x42]       ; 0055bdd9
    FNSTSW AX                           ; 0055bddc
    SAHF                                ; 0055bdde
    JA 0x0055bdef                       ; 0055bddf
        ;   XREF to: 0055bdef (CONDITIONAL_JUMP)  ; LAB_0055bdef
    FLD1                                ; 0055bde1
    FCOMP double ptr [EBP + 0x42]       ; 0055bde3
    FNSTSW AX                           ; 0055bde6
    SAHF                                ; 0055bde8
    JNC 0x0055bef4                      ; 0055bde9
        ;   XREF to: 0055bef4 (CONDITIONAL_JUMP)  ; LAB_0055bef4
    MOV EAX,dword ptr [EBP + 0x52]      ; 0055bdef
        ;   Label: LAB_0055bdef
    XOR AL,0x4                          ; 0055bdf2
    IMUL EAX,EAX,0xc                    ; 0055bdf4
    LEA ESI,[EBP + 0xfffffef6]          ; 0055bdf7
    PUSH 0x0                            ; 0055bdfd
    LEA EDI,[EBP + -0x62]               ; 0055bdff
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0055be02
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0055be06
    FLD float ptr [ESI + EAX*0x1]       ; 0055be0a
    LEA ESI,[EBP + 0xffffff6e]          ; 0055be0d
    LEA EAX,[EBP + -0x62]               ; 0055be13
    FSUB float ptr [EBX]                ; 0055be16
    FXCH ST2                            ; 0055be18
    FSUB float ptr [EBX + 0x4]          ; 0055be1a
    FXCH                                ; 0055be1d
    FSUB float ptr [EBX + 0x8]          ; 0055be1f
    FXCH ST2                            ; 0055be22
    FSTP float ptr [EBP + 0xffffff6e]   ; 0055be24
    PUSH EAX                            ; 0055be2a
    FSTP float ptr [EBP + 0xffffff72]   ; 0055be2b
    LEA EAX,[EBP + 0xffffff56]          ; 0055be31
    PUSH EBX                            ; 0055be37
    FSTP float ptr [EBP + 0xffffff76]   ; 0055be38
    PUSH EAX                            ; 0055be3e
    MOVSD ES:EDI,ESI                    ; 0055be3f
    MOVSD ES:EDI,ESI                    ; 0055be40
    MOVSD ES:EDI,ESI                    ; 0055be41
    CALL core_box.cpp_FUN_00420ee0      ; 0055be42
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    FLDZ                                ; 0055be47
    MOV dword ptr [EBP + 0x76],EAX      ; 0055be49
    ADD ESP,0x10                        ; 0055be4c
    FLD float ptr [EBP + 0x76]          ; 0055be4f
    FSTP double ptr [EBP + 0x3a]        ; 0055be52
    FCOMP double ptr [EBP + 0x3a]       ; 0055be55
    FNSTSW AX                           ; 0055be58
    SAHF                                ; 0055be5a
    JA 0x0055be6b                       ; 0055be5b
        ;   XREF to: 0055be6b (CONDITIONAL_JUMP)  ; LAB_0055be6b
    FLD1                                ; 0055be5d
    FCOMP double ptr [EBP + 0x3a]       ; 0055be5f
    FNSTSW AX                           ; 0055be62
    SAHF                                ; 0055be64
    JNC 0x0055bef4                      ; 0055be65
        ;   XREF to: 0055bef4 (CONDITIONAL_JUMP)  ; LAB_0055bef4
    MOV EDX,dword ptr [EBP + 0x52]      ; 0055be6b
        ;   Label: LAB_0055be6b
    INC EDX                             ; 0055be6e
    ADD EBX,0xc                         ; 0055be6f
    MOV dword ptr [EBP + 0x52],EDX      ; 0055be72
    CMP EDX,0x8                         ; 0055be75
    JL 0x0055bd07                       ; 0055be78
        ;   XREF to: 0055bd07 (CONDITIONAL_JUMP)  ; LAB_0055bd07
    XOR EAX,EAX                         ; 0055be7e
    LEA ESP,[EBP + 0x7a]                ; 0055be80
    POP EBP                             ; 0055be83
    POP EDI                             ; 0055be84
    POP ESI                             ; 0055be85
    POP EBX                             ; 0055be86
    RET                                 ; 0055be87
    MOV EAX,dword ptr [EBP + -0x32]     ; 0055be88
        ;   Label: LAB_0055be88
    MOV dword ptr [EBP + 0xffffff56],EAX ; 0055be8b
    MOV EAX,dword ptr [EBP + -0x2e]     ; 0055be91
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 0055be94
    MOV EAX,dword ptr [EBP + -0x2a]     ; 0055be9a
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 0055be9d
    JMP 0x0055bb07                      ; 0055bea3
        ;   XREF to: 0055bb07 (UNCONDITIONAL_JUMP)  ; LAB_0055bb07
    MOV EAX,dword ptr [ESI]             ; 0055bea8
        ;   Label: LAB_0055bea8
    MOV dword ptr [EBP + 0xffffff62],EAX ; 0055beaa
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055beb0
    MOV dword ptr [EBP + 0xffffff66],EAX ; 0055beb3
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055beb9
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 0055bebc
    JMP 0x0055bb1e                      ; 0055bec2
        ;   XREF to: 0055bb1e (UNCONDITIONAL_JUMP)  ; LAB_0055bb1e
    TEST byte ptr [EBP + 0x6a],0x1      ; 0055bec7
        ;   Label: LAB_0055bec7
    JZ 0x0055bb4b                       ; 0055becb
        ;   XREF to: 0055bb4b (CONDITIONAL_JUMP)  ; LAB_0055bb4b
    FLD float ptr [EBX + 0xc]           ; 0055bed1
    FCHS                                ; 0055bed4
    FSTP float ptr [EBP + 0x5a]         ; 0055bed6
    JMP 0x0055bb62                      ; 0055bed9
        ;   XREF to: 0055bb62 (UNCONDITIONAL_JUMP)  ; LAB_0055bb62
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055bede
        ;   Label: LAB_0055bede
    MOV dword ptr [EBP + 0x5e],EAX      ; 0055bee1
    JMP 0x0055bb7a                      ; 0055bee4
        ;   XREF to: 0055bb7a (UNCONDITIONAL_JUMP)  ; LAB_0055bb7a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0055bee9
        ;   Label: LAB_0055bee9
    MOV dword ptr [EBP + 0x62],EAX      ; 0055beec
    JMP 0x0055bb94                      ; 0055beef
        ;   XREF to: 0055bb94 (UNCONDITIONAL_JUMP)  ; LAB_0055bb94
    MOV EAX,0x1                         ; 0055bef4
        ;   Label: LAB_0055bef4
    LEA ESP,[EBP + 0x7a]                ; 0055bef9
    POP EBP                             ; 0055befc
    POP EDI                             ; 0055befd
    POP ESI                             ; 0055befe
    POP EBX                             ; 0055beff
    RET                                 ; 0055bf00

