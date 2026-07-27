; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004e3320 at 004e3364
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0 at 004e3248
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130 at 004e314a
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0 at 004e39c2
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0 at 004e37a4
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460 at 004e3627
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0 at 004e3437
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e862e
;   sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320 at 004e4344
;   sound_mp3.cpp_FUN_004e2c60 at 004e2c84
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b591
;   TerminatedCString s_Cannot_read_or_write_mor_0058b5a2
;   undefined4 DAT_005bc010
;   undefined4 DAT_005bc030
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2ac0
        ;   Label: sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
    PUSH ESI                            ; 004e2ac1
    PUSH EDI                            ; 004e2ac2
    PUSH EBP                            ; 004e2ac3
    SUB ESP,0x4                         ; 004e2ac4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004e2ac7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e2acb
    XOR EDX,EDX                         ; 004e2acf
    MOV EBP,EBX                         ; 004e2ad1
    MOV dword ptr [ESP],EDX             ; 004e2ad3
    CMP EBX,0x20                        ; 004e2ad6
    JG 0x004e2b39                       ; 004e2ad9
        ;   XREF to: 004e2b39 (CONDITIONAL_JUMP)  ; LAB_004e2b39
    ADD dword ptr [EDI + 0xc],EBX       ; 004e2adb
        ;   Label: LAB_004e2adb
    TEST EBP,EBP                        ; 004e2ade
    JLE 0x004e2b2e                      ; 004e2ae0
        ;   XREF to: 004e2b2e (CONDITIONAL_JUMP)  ; LAB_004e2b2e
    CMP dword ptr [EDI + 0x14],0x0      ; 004e2ae2
        ;   Label: LAB_004e2ae2
    JZ 0x004e2b68                       ; 004e2ae6
        ;   XREF to: 004e2b68 (CONDITIONAL_JUMP)  ; LAB_004e2b68
    MOV ECX,dword ptr [EDI + 0x14]      ; 004e2aec
        ;   Label: LAB_004e2aec
    CMP EBP,ECX                         ; 004e2aef
    JGE 0x004e2c2c                      ; 004e2af1
        ;   XREF to: 004e2c2c (CONDITIONAL_JUMP)  ; LAB_004e2c2c
    MOV EAX,EBP                         ; 004e2af7
    MOV EDX,dword ptr [EDI + 0x4]       ; 004e2af9
        ;   Label: LAB_004e2af9
    ADD EDX,dword ptr [EDI + 0x10]      ; 004e2afc
    XOR EBX,EBX                         ; 004e2aff
    MOV BL,byte ptr [EDX]               ; 004e2b01
    MOV EDX,dword ptr [EDI + 0x14]      ; 004e2b03
    SUB EBP,EAX                         ; 004e2b06
    MOV ESI,dword ptr [EDX*0x4 + 0x5bc010] ; 004e2b08 | DAT_005bc010 | DAT_005bc030
    SUB EDX,EAX                         ; 004e2b0f
    AND EBX,ESI                         ; 004e2b11
    MOV CL,DL                           ; 004e2b13
    MOV EAX,EBP                         ; 004e2b15
    SAR EBX,CL                          ; 004e2b17
    MOV CL,AL                           ; 004e2b19
    MOV EBP,dword ptr [ESP]             ; 004e2b1b
    SHL EBX,CL                          ; 004e2b1e
    OR EBP,EBX                          ; 004e2b20
    MOV dword ptr [EDI + 0x14],EDX      ; 004e2b22
    MOV dword ptr [ESP],EBP             ; 004e2b25
    MOV EBP,EAX                         ; 004e2b28
    TEST EAX,EAX                        ; 004e2b2a
    JG 0x004e2ae2                       ; 004e2b2c
        ;   XREF to: 004e2ae2 (CONDITIONAL_JUMP)  ; LAB_004e2ae2
    MOV EAX,dword ptr [ESP]             ; 004e2b2e
        ;   Label: LAB_004e2b2e
    ADD ESP,0x4                         ; 004e2b31
    POP EBP                             ; 004e2b34
    POP EDI                             ; 004e2b35
    POP ESI                             ; 004e2b36
    POP EBX                             ; 004e2b37
    RET                                 ; 004e2b38
    PUSH 0x1cd8b28                      ; 004e2b39
        ;   Label: LAB_004e2b39
    PUSH 0x20                           ; 004e2b3e
    MOV ECX,0x58b591                    ; 004e2b40 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x266                       ; 004e2b45
    PUSH 0x58b5a2                       ; 004e2b4a | = "Cannot read or write more than %d bit..."
    MOV dword ptr [0x01cc4800],ECX      ; 004e2b4f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e2b55 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e2b5b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004e2b60
    JMP 0x004e2adb                      ; 004e2b63
        ;   XREF to: 004e2adb (UNCONDITIONAL_JUMP)  ; LAB_004e2adb
    MOV EDX,dword ptr [EDI + 0x10]      ; 004e2b68
        ;   Label: LAB_004e2b68
    MOV dword ptr [EDI + 0x14],0x8      ; 004e2b6b
    DEC EDX                             ; 004e2b72
    MOV dword ptr [EDI + 0x10],EDX      ; 004e2b73
    CMP EDX,0x4                         ; 004e2b76
    JGE 0x004e2b8d                      ; 004e2b79
        ;   XREF to: 004e2b8d (CONDITIONAL_JUMP)  ; LAB_004e2b8d
    CMP dword ptr [EDI + 0x18],0x0      ; 004e2b7b
        ;   Label: LAB_004e2b7b
    JZ 0x004e2b97                       ; 004e2b7f
        ;   XREF to: 004e2b97 (CONDITIONAL_JUMP)  ; LAB_004e2b97
    MOV dword ptr [EDI + 0x1c],0x1      ; 004e2b81
    JMP 0x004e2aec                      ; 004e2b88
        ;   XREF to: 004e2aec (UNCONDITIONAL_JUMP)  ; LAB_004e2aec
    CMP EDX,dword ptr [EDI + 0x18]      ; 004e2b8d
        ;   Label: LAB_004e2b8d
    JL 0x004e2b7b                       ; 004e2b90
        ;   XREF to: 004e2b7b (CONDITIONAL_JUMP)  ; LAB_004e2b7b
    JMP 0x004e2aec                      ; 004e2b92
        ;   XREF to: 004e2aec (UNCONDITIONAL_JUMP)  ; LAB_004e2aec
    MOV EBX,dword ptr [EDI + 0x10]      ; 004e2b97
        ;   Label: LAB_004e2b97
    TEST EBX,EBX                        ; 004e2b9a
    JL 0x004e2bba                       ; 004e2b9c
        ;   XREF to: 004e2bba (CONDITIONAL_JUMP)  ; LAB_004e2bba
    MOV EAX,dword ptr [EDI + 0x8]       ; 004e2b9e
        ;   Label: LAB_004e2b9e
    MOV ECX,dword ptr [EDI + 0x10]      ; 004e2ba1
    DEC EAX                             ; 004e2ba4
    MOV ESI,dword ptr [EDI + 0x4]       ; 004e2ba5
    SUB EAX,ECX                         ; 004e2ba8
    LEA EDX,[ESI + EBX*0x1]             ; 004e2baa
    ADD EAX,EBX                         ; 004e2bad
    ADD ESI,EAX                         ; 004e2baf
    MOV AL,byte ptr [EDX]               ; 004e2bb1
    DEC EBX                             ; 004e2bb3
    MOV byte ptr [ESI],AL               ; 004e2bb4
    TEST EBX,EBX                        ; 004e2bb6
    JGE 0x004e2b9e                      ; 004e2bb8
        ;   XREF to: 004e2b9e (CONDITIONAL_JUMP)  ; LAB_004e2b9e
    MOV ESI,dword ptr [EDI + 0x8]       ; 004e2bba
        ;   Label: LAB_004e2bba
    MOV EAX,dword ptr [EDI + 0x10]      ; 004e2bbd
    SUB ESI,0x2                         ; 004e2bc0
    SUB ESI,EAX                         ; 004e2bc3
    MOV EBX,EDI                         ; 004e2bc5
    TEST ESI,ESI                        ; 004e2bc7
    JL 0x004e2bd1                       ; 004e2bc9
        ;   XREF to: 004e2bd1 (CONDITIONAL_JUMP)  ; LAB_004e2bd1
    CMP dword ptr [EBX + 0x18],0x0      ; 004e2bcb
        ;   Label: LAB_004e2bcb
    JZ 0x004e2bdd                       ; 004e2bcf
        ;   XREF to: 004e2bdd (CONDITIONAL_JUMP)  ; LAB_004e2bdd
    MOV EAX,dword ptr [EDI + 0x8]       ; 004e2bd1
        ;   Label: LAB_004e2bd1
    DEC EAX                             ; 004e2bd4
    MOV dword ptr [EDI + 0x10],EAX      ; 004e2bd5
    JMP 0x004e2aec                      ; 004e2bd8
        ;   XREF to: 004e2aec (UNCONDITIONAL_JUMP)  ; LAB_004e2aec
    MOV ECX,dword ptr [EBX + 0x28]      ; 004e2bdd
        ;   Label: LAB_004e2bdd
    XOR EAX,EAX                         ; 004e2be0
    TEST ECX,ECX                        ; 004e2be2
    JLE 0x004e2bfe                      ; 004e2be4
        ;   XREF to: 004e2bfe (CONDITIONAL_JUMP)  ; LAB_004e2bfe
    MOV EAX,dword ptr [EBX]             ; 004e2be6
    PUSH EAX                            ; 004e2be8
    PUSH 0x1                            ; 004e2be9
    MOV EDX,dword ptr [EBX + 0x4]       ; 004e2beb
    MOV EAX,ESI                         ; 004e2bee
    PUSH 0x1                            ; 004e2bf0
    ADD EAX,EDX                         ; 004e2bf2
    PUSH EAX                            ; 004e2bf4
    DEC ESI                             ; 004e2bf5
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004e2bf6
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004e2bfb
    CMP EAX,0x1                         ; 004e2bfe
        ;   Label: LAB_004e2bfe
    JNZ 0x004e2c16                      ; 004e2c01
        ;   XREF to: 004e2c16 (CONDITIONAL_JUMP)  ; LAB_004e2c16
    SUB dword ptr [EBX + 0x28],EAX      ; 004e2c03
    TEST ESI,ESI                        ; 004e2c06
    JGE 0x004e2bcb                      ; 004e2c08
        ;   XREF to: 004e2bcb (CONDITIONAL_JUMP)  ; LAB_004e2bcb
    MOV EAX,dword ptr [EDI + 0x8]       ; 004e2c0a
    DEC EAX                             ; 004e2c0d
    MOV dword ptr [EDI + 0x10],EAX      ; 004e2c0e
    JMP 0x004e2aec                      ; 004e2c11
        ;   XREF to: 004e2aec (UNCONDITIONAL_JUMP)  ; LAB_004e2aec
    LEA EAX,[ESI + 0x1]                 ; 004e2c16
        ;   Label: LAB_004e2c16
    MOV dword ptr [EBX + 0x18],EAX      ; 004e2c19
    TEST ESI,ESI                        ; 004e2c1c
    JGE 0x004e2bcb                      ; 004e2c1e
        ;   XREF to: 004e2bcb (CONDITIONAL_JUMP)  ; LAB_004e2bcb
    MOV EAX,dword ptr [EDI + 0x8]       ; 004e2c20
    DEC EAX                             ; 004e2c23
    MOV dword ptr [EDI + 0x10],EAX      ; 004e2c24
    JMP 0x004e2aec                      ; 004e2c27
        ;   XREF to: 004e2aec (UNCONDITIONAL_JUMP)  ; LAB_004e2aec
    MOV EAX,ECX                         ; 004e2c2c
        ;   Label: LAB_004e2c2c
    JMP 0x004e2af9                      ; 004e2c2e
        ;   XREF to: 004e2af9 (UNCONDITIONAL_JUMP)  ; LAB_004e2af9

