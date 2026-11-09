; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_mp3_cpp_FUN_00504f10(CMP3Decoder *param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240 at 005073c4
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dffbf
;   TerminatedCString s_Illegal_Huffman_code_in_005dffd0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d23e7c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
;   sound_mp3.cpp_FUN_00504e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504f10
        ;   Label: sound_mp3.cpp_FUN_00504f10
    PUSH ESI                            ; 00504f11
    PUSH EDI                            ; 00504f12
    PUSH EBP                            ; 00504f13
    SUB ESP,0x4                         ; 00504f14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00504f17
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00504f1b
    MOV EDX,0x1                         ; 00504f1f
    MOV EDI,0x80000000                  ; 00504f24
    LEA EAX,[ESI + 0x20]                ; 00504f29
    XOR EBX,EBX                         ; 00504f2c
    MOV dword ptr [ESP],EDX             ; 00504f2e
    TEST EAX,EAX                        ; 00504f31
    JZ 0x0050504b                       ; 00504f33
        ;   XREF to: 0050504b (CONDITIONAL_JUMP)  ; LAB_0050504b
    MOV ECX,dword ptr [ESI + 0x824]     ; 00504f39
    TEST ECX,ECX                        ; 00504f3f
    JZ 0x00505058                       ; 00504f41
        ;   XREF to: 00505058 (CONDITIONAL_JUMP)  ; LAB_00505058
    LEA EAX,[EBX + EBX*0x1]             ; 00504f47
        ;   Label: LAB_00504f47
    ADD EAX,ESI                         ; 00504f4a
    CMP byte ptr [EAX + 0x20],0x0       ; 00504f4c
    JNZ 0x0050506e                      ; 00504f50
        ;   XREF to: 0050506e (CONDITIONAL_JUMP)  ; LAB_0050506e
    XOR EBX,EBX                         ; 00504f56
    MOV BL,byte ptr [EAX + 0x21]        ; 00504f58
    MOV EDI,dword ptr [ESP + 0x20]      ; 00504f5b
    SAR EBX,0x4                         ; 00504f5f
    MOV dword ptr [EDI],EBX             ; 00504f62
    MOV AL,byte ptr [EAX + 0x21]        ; 00504f64
    AND AL,0xf                          ; 00504f67
    MOV EBX,dword ptr [ESP + 0x24]      ; 00504f69
    AND EAX,0xff                        ; 00504f6d
    MOV dword ptr [EBX],EAX             ; 00504f72
    XOR EBX,EBX                         ; 00504f74
    MOV dword ptr [ESP],EBX             ; 00504f76
    MOV DH,byte ptr [ESI]               ; 00504f79
        ;   Label: LAB_00504f79
    CMP DH,0x33                         ; 00504f7b
    JNZ 0x005050f6                      ; 00504f7e
        ;   XREF to: 005050f6 (CONDITIONAL_JUMP)  ; LAB_005050f6
    MOV BL,byte ptr [ESI + 0x1]         ; 00504f84
    CMP BL,0x32                         ; 00504f87
    JNZ 0x005050ee                      ; 00504f8a
        ;   XREF to: 005050ee (CONDITIONAL_JUMP)  ; LAB_005050ee
    MOV EAX,dword ptr [ESP + 0x24]      ; 00504f90
        ;   Label: LAB_00504f90
    MOV EAX,dword ptr [EAX]             ; 00504f94
    SAR EAX,0x3                         ; 00504f96
    MOV EBX,dword ptr [ESP + 0x28]      ; 00504f99
    AND EAX,0x1                         ; 00504f9d
    MOV dword ptr [EBX],EAX             ; 00504fa0
    MOV EAX,dword ptr [ESP + 0x24]      ; 00504fa2
    MOV EAX,dword ptr [EAX]             ; 00504fa6
    SAR EAX,0x2                         ; 00504fa8
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00504fab
    AND EAX,0x1                         ; 00504faf
    MOV dword ptr [EBX],EAX             ; 00504fb2
    MOV EAX,dword ptr [ESP + 0x24]      ; 00504fb4
    MOV EAX,dword ptr [EAX]             ; 00504fb8
    SAR EAX,0x1                         ; 00504fba
    MOV EBX,dword ptr [ESP + 0x20]      ; 00504fbc
    AND EAX,0x1                         ; 00504fc0
    MOV dword ptr [EBX],EAX             ; 00504fc3
    MOV EAX,dword ptr [ESP + 0x24]      ; 00504fc5
    AND dword ptr [EAX],0x1             ; 00504fc9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00504fcc
    CMP dword ptr [EAX],0x0             ; 00504fd0
    JZ 0x00504fe9                       ; 00504fd3
        ;   XREF to: 00504fe9 (CONDITIONAL_JUMP)  ; LAB_00504fe9
    PUSH EBP                            ; 00504fd5
    CALL sound_mp3.cpp_FUN_00504e10     ; 00504fd6
        ;   XREF to: 00504e10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504e10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00504fdb
    CMP EAX,0x1                         ; 00504fde
    JNZ 0x00504fe9                      ; 00504fe1
        ;   XREF to: 00504fe9 (CONDITIONAL_JUMP)  ; LAB_00504fe9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00504fe3
    NEG dword ptr [EAX]                 ; 00504fe7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00504fe9
        ;   Label: LAB_00504fe9
    CMP dword ptr [EAX],0x0             ; 00504fed
    JZ 0x00505006                       ; 00504ff0
        ;   XREF to: 00505006 (CONDITIONAL_JUMP)  ; LAB_00505006
    PUSH EBP                            ; 00504ff2
    CALL sound_mp3.cpp_FUN_00504e10     ; 00504ff3
        ;   XREF to: 00504e10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504e10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00504ff8
    CMP EAX,0x1                         ; 00504ffb
    JNZ 0x00505006                      ; 00504ffe
        ;   XREF to: 00505006 (CONDITIONAL_JUMP)  ; LAB_00505006
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00505000
    NEG dword ptr [EAX]                 ; 00505004
    MOV EAX,dword ptr [ESP + 0x20]      ; 00505006
        ;   Label: LAB_00505006
    CMP dword ptr [EAX],0x0             ; 0050500a
    JZ 0x00505023                       ; 0050500d
        ;   XREF to: 00505023 (CONDITIONAL_JUMP)  ; LAB_00505023
    PUSH EBP                            ; 0050500f
    CALL sound_mp3.cpp_FUN_00504e10     ; 00505010
        ;   XREF to: 00504e10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504e10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00505015
    CMP EAX,0x1                         ; 00505018
    JNZ 0x00505023                      ; 0050501b
        ;   XREF to: 00505023 (CONDITIONAL_JUMP)  ; LAB_00505023
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050501d
    NEG dword ptr [EAX]                 ; 00505021
    MOV EAX,dword ptr [ESP + 0x24]      ; 00505023
        ;   Label: LAB_00505023
    CMP dword ptr [EAX],0x0             ; 00505027
    JZ 0x00505040                       ; 0050502a
        ;   XREF to: 00505040 (CONDITIONAL_JUMP)  ; LAB_00505040
    PUSH EBP                            ; 0050502c
    CALL sound_mp3.cpp_FUN_00504e10     ; 0050502d
        ;   XREF to: 00504e10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504e10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00505032
    CMP EAX,0x1                         ; 00505035
    JNZ 0x00505040                      ; 00505038
        ;   XREF to: 00505040 (CONDITIONAL_JUMP)  ; LAB_00505040
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050503a
    NEG dword ptr [EAX]                 ; 0050503e
    MOV EAX,dword ptr [ESP]             ; 00505040
        ;   Label: LAB_00505040
    ADD ESP,0x4                         ; 00505043
    POP EBP                             ; 00505046
    POP EDI                             ; 00505047
    POP ESI                             ; 00505048
    POP EBX                             ; 00505049
    RET                                 ; 0050504a
    MOV EAX,0x2                         ; 0050504b
        ;   Label: LAB_0050504b
    ADD ESP,0x4                         ; 00505050
    POP EBP                             ; 00505053
    POP EDI                             ; 00505054
    POP ESI                             ; 00505055
    POP EBX                             ; 00505056
    RET                                 ; 00505057
    MOV EAX,dword ptr [ESP + 0x24]      ; 00505058
        ;   Label: LAB_00505058
    MOV dword ptr [EAX],EBX             ; 0050505c
    MOV EAX,EBX                         ; 0050505e
    MOV EBX,dword ptr [ESP + 0x20]      ; 00505060
    MOV dword ptr [EBX],ECX             ; 00505064
    ADD ESP,0x4                         ; 00505066
    POP EBP                             ; 00505069
    POP EDI                             ; 0050506a
    POP ESI                             ; 0050506b
    POP EBX                             ; 0050506c
    RET                                 ; 0050506d
    PUSH EBP                            ; 0050506e
        ;   Label: LAB_0050506e
    CALL sound_mp3.cpp_FUN_00504e10     ; 0050506f
        ;   XREF to: 00504e10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504e10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00505074
    TEST EAX,EAX                        ; 00505077
    JZ 0x005050da                       ; 00505079
        ;   XREF to: 005050da (CONDITIONAL_JUMP)  ; LAB_005050da
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x21] ; 0050507b
        ;   Label: LAB_0050507b
    AND EAX,0xff                        ; 0050507f
    ADD EBX,EAX                         ; 00505084
    CMP EAX,0xfa                        ; 00505086
    JGE 0x0050507b                      ; 0050508b
        ;   XREF to: 0050507b (CONDITIONAL_JUMP)  ; LAB_0050507b
    SHR EDI,0x1                         ; 0050508d
        ;   Label: LAB_0050508d
    TEST EDI,EDI                        ; 0050508f
    JNZ 0x00504f47                      ; 00505091
        ;   XREF to: 00504f47 (CONDITIONAL_JUMP)  ; LAB_00504f47
    CMP EBX,dword ptr [0x01d23e7c]      ; 00505097 | DAT_01d23e7c
    JC 0x00504f47                       ; 0050509d
        ;   XREF to: 00504f47 (CONDITIONAL_JUMP)  ; LAB_00504f47
    CMP dword ptr [ESP],0x0             ; 005050a3
    JZ 0x00504f79                       ; 005050a7
        ;   XREF to: 00504f79 (CONDITIONAL_JUMP)  ; LAB_00504f79
    PUSH 0x1d23558                      ; 005050ad
    MOV ECX,0x5dffbf                    ; 005050b2 | = "..\\sound\\mp3.cpp"
    MOV EBX,0x36f                       ; 005050b7
    PUSH 0x5dffd0                       ; 005050bc | = "Illegal Huffman code in data.  File: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 005050c1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005050c7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005050cd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005050d2
    JMP 0x00504f79                      ; 005050d5
        ;   XREF to: 00504f79 (UNCONDITIONAL_JUMP)  ; LAB_00504f79
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x20] ; 005050da
        ;   Label: LAB_005050da
    AND EAX,0xff                        ; 005050de
    ADD EBX,EAX                         ; 005050e3
    CMP EAX,0xfa                        ; 005050e5
    JGE 0x005050da                      ; 005050ea
        ;   XREF to: 005050da (CONDITIONAL_JUMP)  ; LAB_005050da
    JMP 0x0050508d                      ; 005050ec
        ;   XREF to: 0050508d (UNCONDITIONAL_JUMP)  ; LAB_0050508d
    CMP BL,DH                           ; 005050ee
        ;   Label: LAB_005050ee
    JZ 0x00504f90                       ; 005050f0
        ;   XREF to: 00504f90 (CONDITIONAL_JUMP)  ; LAB_00504f90
    MOV EDI,dword ptr [ESI + 0xc]       ; 005050f6
        ;   Label: LAB_005050f6
    TEST EDI,EDI                        ; 005050f9
    JZ 0x00505119                       ; 005050fb
        ;   XREF to: 00505119 (CONDITIONAL_JUMP)  ; LAB_00505119
    MOV EAX,dword ptr [ESI + 0x4]       ; 005050fd
    MOV EBX,dword ptr [ESP + 0x20]      ; 00505100
    DEC EAX                             ; 00505104
    CMP EAX,dword ptr [EBX]             ; 00505105
    JNZ 0x00505119                      ; 00505107
        ;   XREF to: 00505119 (CONDITIONAL_JUMP)  ; LAB_00505119
    PUSH EDI                            ; 00505109
    PUSH EBP                            ; 0050510a
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 0050510b
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDI,dword ptr [EBX]             ; 00505110
    ADD EDI,EAX                         ; 00505112
    ADD ESP,0x8                         ; 00505114
    MOV dword ptr [EBX],EDI             ; 00505117
    MOV EAX,dword ptr [ESP + 0x20]      ; 00505119
        ;   Label: LAB_00505119
    CMP dword ptr [EAX],0x0             ; 0050511d
    JZ 0x00505136                       ; 00505120
        ;   XREF to: 00505136 (CONDITIONAL_JUMP)  ; LAB_00505136
    PUSH EBP                            ; 00505122
    CALL sound_mp3.cpp_FUN_00504e10     ; 00505123
        ;   XREF to: 00504e10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504e10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00505128
    CMP EAX,0x1                         ; 0050512b
    JNZ 0x00505136                      ; 0050512e
        ;   XREF to: 00505136 (CONDITIONAL_JUMP)  ; LAB_00505136
    MOV EAX,dword ptr [ESP + 0x20]      ; 00505130
    NEG dword ptr [EAX]                 ; 00505134
    CMP dword ptr [ESI + 0xc],0x0       ; 00505136
        ;   Label: LAB_00505136
    JZ 0x00505023                       ; 0050513a
        ;   XREF to: 00505023 (CONDITIONAL_JUMP)  ; LAB_00505023
    MOV EAX,dword ptr [ESI + 0x8]       ; 00505140
    MOV EBX,dword ptr [ESP + 0x24]      ; 00505143
    DEC EAX                             ; 00505147
    CMP EAX,dword ptr [EBX]             ; 00505148
    JNZ 0x00505023                      ; 0050514a
        ;   XREF to: 00505023 (CONDITIONAL_JUMP)  ; LAB_00505023
    MOV EAX,dword ptr [ESI + 0xc]       ; 00505150
    PUSH EAX                            ; 00505153
    PUSH EBP                            ; 00505154
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 00505155
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDX,dword ptr [EBX]             ; 0050515a
    ADD EDX,EAX                         ; 0050515c
    ADD ESP,0x8                         ; 0050515e
    MOV dword ptr [EBX],EDX             ; 00505161
    JMP 0x00505023                      ; 00505163
        ;   XREF to: 00505023 (UNCONDITIONAL_JUMP)  ; LAB_00505023

