; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandSCFSI * Stack[0x8]:4   scfsi_array
; SMpegSubbandAllocation * Stack[0xc]:4   allocation_array
; SMpegSubbandScalefactors * Stack[0x10]:4   scalefactor_array
; SMpegFrame *     Stack[0x14]:4   frame
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 005030f6
;
; Referenced Globals:
;   void* switchdataD_004fdf64 = 004fe097
;
; Called Functions:
;   sound_mp3.cpp_FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdf80
        ;   Label: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80
    PUSH ESI                            ; 004fdf81
    PUSH EDI                            ; 004fdf82
    PUSH EBP                            ; 004fdf83
    SUB ESP,0x24                        ; 004fdf84
    MOV ESI,dword ptr [ESP + 0x38]      ; 004fdf87
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fdf8b
    MOV EDI,dword ptr [EAX + 0x10]      ; 004fdf8f
    MOV EAX,dword ptr [EAX + 0x18]      ; 004fdf92
    MOV dword ptr [ESP],EAX             ; 004fdf95
    TEST EAX,EAX                        ; 004fdf98
    JLE 0x004fdff3                      ; 004fdf9a
        ;   XREF to: 004fdff3 (CONDITIONAL_JUMP)  ; LAB_004fdff3
    XOR EAX,EAX                         ; 004fdf9c
    MOV dword ptr [ESP + 0xc],EAX       ; 004fdf9e
    MOV EAX,dword ptr [ESP]             ; 004fdfa2
    SHL EAX,0x2                         ; 004fdfa5
    MOV dword ptr [ESP + 0x4],EAX       ; 004fdfa8
    XOR EBX,EBX                         ; 004fdfac
        ;   Label: LAB_004fdfac
    TEST EDI,EDI                        ; 004fdfae
    JLE 0x004fdfe0                      ; 004fdfb0
        ;   XREF to: 004fdfe0 (CONDITIONAL_JUMP)  ; LAB_004fdfe0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fdfb2
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fdfb6
    MOV dword ptr [ESP + 0x14],EAX      ; 004fdfba
    LEA EBP,[EAX + EDX*0x1]             ; 004fdfbe
    MOV EAX,EBX                         ; 004fdfc1
        ;   Label: LAB_004fdfc1
    SHL EAX,0x7                         ; 004fdfc3
    MOV ECX,dword ptr [EBP]             ; 004fdfc6
    MOV dword ptr [ESP + 0x1c],EAX      ; 004fdfc9
    TEST ECX,ECX                        ; 004fdfcd
    JNZ 0x004fe144                      ; 004fdfcf
        ;   XREF to: 004fe144 (CONDITIONAL_JUMP)  ; LAB_004fe144
    INC EBX                             ; 004fdfd5
        ;   Label: LAB_004fdfd5
    ADD EBP,0x80                        ; 004fdfd6
    CMP EBX,EDI                         ; 004fdfdc
    JL 0x004fdfc1                       ; 004fdfde
        ;   XREF to: 004fdfc1 (CONDITIONAL_JUMP)  ; LAB_004fdfc1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fdfe0
        ;   Label: LAB_004fdfe0
    ADD ECX,0x4                         ; 004fdfe4
    MOV EBX,dword ptr [ESP + 0x4]       ; 004fdfe7
    MOV dword ptr [ESP + 0xc],ECX       ; 004fdfeb
    CMP ECX,EBX                         ; 004fdfef
    JL 0x004fdfac                       ; 004fdff1
        ;   XREF to: 004fdfac (CONDITIONAL_JUMP)  ; LAB_004fdfac
    MOV EBP,dword ptr [ESP]             ; 004fdff3
        ;   Label: LAB_004fdff3
    CMP EBP,0x20                        ; 004fdff6
    JGE 0x004fe02a                      ; 004fdff9
        ;   XREF to: 004fe02a (CONDITIONAL_JUMP)  ; LAB_004fe02a
    LEA EAX,[EBP*0x4 + 0x0]             ; 004fdffb
    XOR EBX,EBX                         ; 004fe002
        ;   Label: LAB_004fe002
    TEST EDI,EDI                        ; 004fe004
    JLE 0x004fe020                      ; 004fe006
        ;   XREF to: 004fe020 (CONDITIONAL_JUMP)  ; LAB_004fe020
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004fe008
    ADD EBP,EAX                         ; 004fe00c
    INC EBX                             ; 004fe00e
        ;   Label: LAB_004fe00e
    MOV dword ptr [EBP],0x0             ; 004fe00f
    ADD EBP,0x80                        ; 004fe016
    CMP EBX,EDI                         ; 004fe01c
    JL 0x004fe00e                       ; 004fe01e
        ;   XREF to: 004fe00e (CONDITIONAL_JUMP)  ; LAB_004fe00e
    ADD EAX,0x4                         ; 004fe020
        ;   Label: LAB_004fe020
    CMP EAX,0x80                        ; 004fe023
    JL 0x004fe002                       ; 004fe028
        ;   XREF to: 004fe002 (CONDITIONAL_JUMP)  ; LAB_004fe002
    CMP dword ptr [ESP],0x0             ; 004fe02a
        ;   Label: LAB_004fe02a
    JLE 0x004fe0f5                      ; 004fe02e
        ;   XREF to: 004fe0f5 (CONDITIONAL_JUMP)  ; LAB_004fe0f5
    MOV EAX,dword ptr [ESP]             ; 004fe034
    XOR EBX,EBX                         ; 004fe037
    SHL EAX,0x2                         ; 004fe039
    MOV dword ptr [ESP + 0x10],EBX      ; 004fe03c
    MOV dword ptr [ESP + 0x8],EAX       ; 004fe040
    XOR EBP,EBP                         ; 004fe044
        ;   Label: LAB_004fe044
    TEST EDI,EDI                        ; 004fe046
    JLE 0x004fe0de                      ; 004fe048
        ;   XREF to: 004fe0de (CONDITIONAL_JUMP)  ; LAB_004fe0de
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fe04e
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fe052
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fe056
    MOV ECX,dword ptr [ESP + 0x44]      ; 004fe05a
    MOV dword ptr [ESP + 0x18],EAX      ; 004fe05e
    ADD EAX,EDX                         ; 004fe062
    ADD EBX,ECX                         ; 004fe064
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe066
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fe06a
        ;   Label: LAB_004fe06a
    MOV EAX,EBP                         ; 004fe06e
    MOV ECX,dword ptr [EDX]             ; 004fe070
    SHL EAX,0x7                         ; 004fe072
    TEST ECX,ECX                        ; 004fe075
    JZ 0x004fe1ca                       ; 004fe077
        ;   XREF to: 004fe1ca (CONDITIONAL_JUMP)  ; LAB_004fe1ca
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004fe07d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004fe081
    ADD EAX,EDX                         ; 004fe085
    ADD EAX,ECX                         ; 004fe087
    MOV EAX,dword ptr [EAX]             ; 004fe089
    CMP EAX,0x3                         ; 004fe08b
    JA 0x004fe0c6                       ; 004fe08e
        ;   XREF to: 004fe0c6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4fdf64]  ; 004fe090 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x6                            ; 004fe097
        ;   Label: caseD_0
    PUSH ESI                            ; 004fe099
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe09a
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fe09f
    PUSH 0x6                            ; 004fe0a2
    PUSH ESI                            ; 004fe0a4
    MOV dword ptr [EBX],EAX             ; 004fe0a5
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe0a7
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fe0ac
    PUSH 0x6                            ; 004fe0af
    PUSH ESI                            ; 004fe0b1
    MOV dword ptr [EBX + 0x80],EAX      ; 004fe0b2
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe0b8
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
        ;   Label: LAB_004fe0b8
    ADD ESP,0x8                         ; 004fe0bd
    MOV dword ptr [EBX + 0x100],EAX     ; 004fe0c0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fe0c6
        ;   Label: default
    ADD EBX,0x180                       ; 004fe0ca
    ADD EAX,0x80                        ; 004fe0d0
    INC EBP                             ; 004fe0d5
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe0d6
    CMP EBP,EDI                         ; 004fe0da
    JL 0x004fe06a                       ; 004fe0dc
        ;   XREF to: 004fe06a (CONDITIONAL_JUMP)  ; LAB_004fe06a
    MOV EBP,dword ptr [ESP + 0x10]      ; 004fe0de
        ;   Label: LAB_004fe0de
    ADD EBP,0x4                         ; 004fe0e2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fe0e5
    MOV dword ptr [ESP + 0x10],EBP      ; 004fe0e9
    CMP EBP,EDX                         ; 004fe0ed
    JL 0x004fe044                       ; 004fe0ef
        ;   XREF to: 004fe044 (CONDITIONAL_JUMP)  ; LAB_004fe044
    MOV ECX,dword ptr [ESP]             ; 004fe0f5
        ;   Label: LAB_004fe0f5
    CMP ECX,0x20                        ; 004fe0f8
    JGE 0x004fe13c                      ; 004fe0fb
        ;   XREF to: 004fe13c (CONDITIONAL_JUMP)  ; LAB_004fe13c
    LEA EDX,[ECX*0x4 + 0x0]             ; 004fe0fd
    XOR ESI,ESI                         ; 004fe104
        ;   Label: LAB_004fe104
    TEST EDI,EDI                        ; 004fe106
    JLE 0x004fe131                      ; 004fe108
        ;   XREF to: 004fe131 (CONDITIONAL_JUMP)  ; LAB_004fe131
    MOV EBX,dword ptr [ESP + 0x44]      ; 004fe10a
    ADD EBX,EDX                         ; 004fe10e
    ADD EBX,0x180                       ; 004fe110
        ;   Label: LAB_004fe110
    MOV dword ptr [EBX + -0x80],0x3f    ; 004fe116
    MOV EAX,dword ptr [EBX + -0x80]     ; 004fe11d
    MOV dword ptr [EBX + 0xffffff00],EAX ; 004fe120
    INC ESI                             ; 004fe126
    MOV dword ptr [EBX + 0xfffffe80],EAX ; 004fe127
    CMP ESI,EDI                         ; 004fe12d
    JL 0x004fe110                       ; 004fe12f
        ;   XREF to: 004fe110 (CONDITIONAL_JUMP)  ; LAB_004fe110
    ADD EDX,0x4                         ; 004fe131
        ;   Label: LAB_004fe131
    CMP EDX,0x80                        ; 004fe134
    JL 0x004fe104                       ; 004fe13a
        ;   XREF to: 004fe104 (CONDITIONAL_JUMP)  ; LAB_004fe104
    ADD ESP,0x24                        ; 004fe13c
        ;   Label: LAB_004fe13c
    POP EBP                             ; 004fe13f
    POP EDI                             ; 004fe140
    POP ESI                             ; 004fe141
    POP EBX                             ; 004fe142
    RET                                 ; 004fe143
    PUSH 0x2                            ; 004fe144
        ;   Label: LAB_004fe144
    PUSH ESI                            ; 004fe146
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe147
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fe14c
    XOR EDX,EDX                         ; 004fe14f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fe151
    MOV DL,AL                           ; 004fe155
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004fe157
    ADD EAX,ECX                         ; 004fe15b
    ADD EAX,dword ptr [ESP + 0x14]      ; 004fe15d
    MOV dword ptr [EAX],EDX             ; 004fe161
    JMP 0x004fdfd5                      ; 004fe163
        ;   XREF to: 004fdfd5 (UNCONDITIONAL_JUMP)  ; LAB_004fdfd5
    PUSH 0x6                            ; 004fe168
        ;   Label: caseD_1
    PUSH ESI                            ; 004fe16a
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe16b
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fe170
    PUSH 0x6                            ; 004fe173
    MOV dword ptr [EBX + 0x80],EAX      ; 004fe175
    PUSH ESI                            ; 004fe17b
    MOV dword ptr [EBX],EAX             ; 004fe17c
    JMP 0x004fe0b8                      ; 004fe17e
        ;   XREF to: 004fe0b8 (UNCONDITIONAL_JUMP)  ; LAB_004fe0b8
    PUSH 0x6                            ; 004fe183
        ;   Label: caseD_3
    PUSH ESI                            ; 004fe185
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe186
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fe18b
    PUSH 0x6                            ; 004fe18e
    PUSH ESI                            ; 004fe190
    MOV dword ptr [EBX],EAX             ; 004fe191
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe193
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 004fe198
    ADD ESP,0x8                         ; 004fe19e
    MOV dword ptr [EBX + 0x80],EAX      ; 004fe1a1
    JMP 0x004fe0c6                      ; 004fe1a7
        ;   XREF to: 004fe0c6 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x6                            ; 004fe1ac
        ;   Label: caseD_2
    PUSH ESI                            ; 004fe1ae
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fe1af
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 004fe1b4
    MOV dword ptr [EBX + 0x80],EAX      ; 004fe1ba
    ADD ESP,0x8                         ; 004fe1c0
    MOV dword ptr [EBX],EAX             ; 004fe1c3
    JMP 0x004fe0c6                      ; 004fe1c5
        ;   XREF to: 004fe0c6 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x100],0x3f    ; 004fe1ca
        ;   Label: LAB_004fe1ca
    MOV EAX,dword ptr [EBX + 0x100]     ; 004fe1d4
    MOV dword ptr [EBX + 0x80],EAX      ; 004fe1da
    MOV dword ptr [EBX],EAX             ; 004fe1e0
    JMP 0x004fe0c6                      ; 004fe1e2
        ;   XREF to: 004fe0c6 (UNCONDITIONAL_JUMP)  ; default

