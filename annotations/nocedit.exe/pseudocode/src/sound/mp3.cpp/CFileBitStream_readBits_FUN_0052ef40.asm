; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream *bitstream,int num_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   bitstream
; int              Stack[0x8]:4   num_bits
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0 at 0052f7e4
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670 at 0052f6c8
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 at 0052f603
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50 at 0052fe42
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50 at 0052fc24
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0 at 0052fae6
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850 at 0052f8b7
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_0052f0e0 at 0052f104
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535641
;   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 at 005347a5
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ad3e
;   TerminatedCString s_Cannot_read_or_write_mor_0063ad4f
;   uint[18] g_MpegBitMaskTableMultiBit
;   undefined4 DAT_0067e600
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ef40
        ;   Label: sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
    PUSH ESI                            ; 0052ef41
    PUSH EDI                            ; 0052ef42
    PUSH EBP                            ; 0052ef43
    SUB ESP,0x4                         ; 0052ef44
    MOV EDI,dword ptr [ESP + 0x18]      ; 0052ef47
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052ef4b
    XOR EDX,EDX                         ; 0052ef4f
    MOV EBP,EBX                         ; 0052ef51
    MOV dword ptr [ESP],EDX             ; 0052ef53
    CMP EBX,0x20                        ; 0052ef56
    JG 0x0052efb9                       ; 0052ef59
        ;   XREF to: 0052efb9 (CONDITIONAL_JUMP)  ; LAB_0052efb9
    ADD dword ptr [EDI + 0xc],EBX       ; 0052ef5b
        ;   Label: LAB_0052ef5b
    TEST EBP,EBP                        ; 0052ef5e
    JLE 0x0052efae                      ; 0052ef60
        ;   XREF to: 0052efae (CONDITIONAL_JUMP)  ; LAB_0052efae
    CMP dword ptr [EDI + 0x14],0x0      ; 0052ef62
        ;   Label: LAB_0052ef62
    JZ 0x0052efe8                       ; 0052ef66
        ;   XREF to: 0052efe8 (CONDITIONAL_JUMP)  ; LAB_0052efe8
    MOV ECX,dword ptr [EDI + 0x14]      ; 0052ef6c
        ;   Label: LAB_0052ef6c
    CMP EBP,ECX                         ; 0052ef6f
    JGE 0x0052f0ac                      ; 0052ef71
        ;   XREF to: 0052f0ac (CONDITIONAL_JUMP)  ; LAB_0052f0ac
    MOV EAX,EBP                         ; 0052ef77
    MOV EDX,dword ptr [EDI + 0x4]       ; 0052ef79
        ;   Label: LAB_0052ef79
    ADD EDX,dword ptr [EDI + 0x10]      ; 0052ef7c
    XOR EBX,EBX                         ; 0052ef7f
    MOV BL,byte ptr [EDX]               ; 0052ef81
    MOV EDX,dword ptr [EDI + 0x14]      ; 0052ef83
    SUB EBP,EAX                         ; 0052ef86
    MOV ESI,dword ptr [EDX*0x4 + 0x67e5e0] ; 0052ef88 | g_MpegBitMaskTableMultiBit | DAT_0067e600
    SUB EDX,EAX                         ; 0052ef8f
    AND EBX,ESI                         ; 0052ef91
    MOV CL,DL                           ; 0052ef93
    MOV EAX,EBP                         ; 0052ef95
    SAR EBX,CL                          ; 0052ef97
    MOV CL,AL                           ; 0052ef99
    MOV EBP,dword ptr [ESP]             ; 0052ef9b
    SHL EBX,CL                          ; 0052ef9e
    OR EBP,EBX                          ; 0052efa0
    MOV dword ptr [EDI + 0x14],EDX      ; 0052efa2
    MOV dword ptr [ESP],EBP             ; 0052efa5
    MOV EBP,EAX                         ; 0052efa8
    TEST EAX,EAX                        ; 0052efaa
    JG 0x0052ef62                       ; 0052efac
        ;   XREF to: 0052ef62 (CONDITIONAL_JUMP)  ; LAB_0052ef62
    MOV EAX,dword ptr [ESP]             ; 0052efae
        ;   Label: LAB_0052efae
    ADD ESP,0x4                         ; 0052efb1
    POP EBP                             ; 0052efb4
    POP EDI                             ; 0052efb5
    POP ESI                             ; 0052efb6
    POP EBX                             ; 0052efb7
    RET                                 ; 0052efb8
    PUSH 0x2f68188                      ; 0052efb9 | g_CurrentMp3Filename
        ;   Label: LAB_0052efb9
    PUSH 0x20                           ; 0052efbe
    MOV ECX,0x63ad3e                    ; 0052efc0 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x267                       ; 0052efc5
    PUSH 0x63ad4f                       ; 0052efca | = "Cannot read or write more than %d bit..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0052efcf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0052efd5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052efdb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0052efe0
    JMP 0x0052ef5b                      ; 0052efe3
        ;   XREF to: 0052ef5b (UNCONDITIONAL_JUMP)  ; LAB_0052ef5b
    MOV EDX,dword ptr [EDI + 0x10]      ; 0052efe8
        ;   Label: LAB_0052efe8
    MOV dword ptr [EDI + 0x14],0x8      ; 0052efeb
    DEC EDX                             ; 0052eff2
    MOV dword ptr [EDI + 0x10],EDX      ; 0052eff3
    CMP EDX,0x4                         ; 0052eff6
    JGE 0x0052f00d                      ; 0052eff9
        ;   XREF to: 0052f00d (CONDITIONAL_JUMP)  ; LAB_0052f00d
    CMP dword ptr [EDI + 0x18],0x0      ; 0052effb
        ;   Label: LAB_0052effb
    JZ 0x0052f017                       ; 0052efff
        ;   XREF to: 0052f017 (CONDITIONAL_JUMP)  ; LAB_0052f017
    MOV dword ptr [EDI + 0x1c],0x1      ; 0052f001
    JMP 0x0052ef6c                      ; 0052f008
        ;   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)  ; LAB_0052ef6c
    CMP EDX,dword ptr [EDI + 0x18]      ; 0052f00d
        ;   Label: LAB_0052f00d
    JL 0x0052effb                       ; 0052f010
        ;   XREF to: 0052effb (CONDITIONAL_JUMP)  ; LAB_0052effb
    JMP 0x0052ef6c                      ; 0052f012
        ;   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)  ; LAB_0052ef6c
    MOV EBX,dword ptr [EDI + 0x10]      ; 0052f017
        ;   Label: LAB_0052f017
    TEST EBX,EBX                        ; 0052f01a
    JL 0x0052f03a                       ; 0052f01c
        ;   XREF to: 0052f03a (CONDITIONAL_JUMP)  ; LAB_0052f03a
    MOV EAX,dword ptr [EDI + 0x8]       ; 0052f01e
        ;   Label: LAB_0052f01e
    MOV ECX,dword ptr [EDI + 0x10]      ; 0052f021
    DEC EAX                             ; 0052f024
    MOV ESI,dword ptr [EDI + 0x4]       ; 0052f025
    SUB EAX,ECX                         ; 0052f028
    LEA EDX,[ESI + EBX*0x1]             ; 0052f02a
    ADD EAX,EBX                         ; 0052f02d
    ADD ESI,EAX                         ; 0052f02f
    MOV AL,byte ptr [EDX]               ; 0052f031
    DEC EBX                             ; 0052f033
    MOV byte ptr [ESI],AL               ; 0052f034
    TEST EBX,EBX                        ; 0052f036
    JGE 0x0052f01e                      ; 0052f038
        ;   XREF to: 0052f01e (CONDITIONAL_JUMP)  ; LAB_0052f01e
    MOV ESI,dword ptr [EDI + 0x8]       ; 0052f03a
        ;   Label: LAB_0052f03a
    MOV EAX,dword ptr [EDI + 0x10]      ; 0052f03d
    SUB ESI,0x2                         ; 0052f040
    SUB ESI,EAX                         ; 0052f043
    MOV EBX,EDI                         ; 0052f045
    TEST ESI,ESI                        ; 0052f047
    JL 0x0052f051                       ; 0052f049
        ;   XREF to: 0052f051 (CONDITIONAL_JUMP)  ; LAB_0052f051
    CMP dword ptr [EBX + 0x18],0x0      ; 0052f04b
        ;   Label: LAB_0052f04b
    JZ 0x0052f05d                       ; 0052f04f
        ;   XREF to: 0052f05d (CONDITIONAL_JUMP)  ; LAB_0052f05d
    MOV EAX,dword ptr [EDI + 0x8]       ; 0052f051
        ;   Label: LAB_0052f051
    DEC EAX                             ; 0052f054
    MOV dword ptr [EDI + 0x10],EAX      ; 0052f055
    JMP 0x0052ef6c                      ; 0052f058
        ;   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)  ; LAB_0052ef6c
    MOV ECX,dword ptr [EBX + 0x28]      ; 0052f05d
        ;   Label: LAB_0052f05d
    XOR EAX,EAX                         ; 0052f060
    TEST ECX,ECX                        ; 0052f062
    JLE 0x0052f07e                      ; 0052f064
        ;   XREF to: 0052f07e (CONDITIONAL_JUMP)  ; LAB_0052f07e
    MOV EAX,dword ptr [EBX]             ; 0052f066
    PUSH EAX                            ; 0052f068
    PUSH 0x1                            ; 0052f069
    MOV EDX,dword ptr [EBX + 0x4]       ; 0052f06b
    MOV EAX,ESI                         ; 0052f06e
    PUSH 0x1                            ; 0052f070
    ADD EAX,EDX                         ; 0052f072
    PUSH EAX                            ; 0052f074
    DEC ESI                             ; 0052f075
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0052f076
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0052f07b
    CMP EAX,0x1                         ; 0052f07e
        ;   Label: LAB_0052f07e
    JNZ 0x0052f096                      ; 0052f081
        ;   XREF to: 0052f096 (CONDITIONAL_JUMP)  ; LAB_0052f096
    SUB dword ptr [EBX + 0x28],EAX      ; 0052f083
    TEST ESI,ESI                        ; 0052f086
    JGE 0x0052f04b                      ; 0052f088
        ;   XREF to: 0052f04b (CONDITIONAL_JUMP)  ; LAB_0052f04b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0052f08a
    DEC EAX                             ; 0052f08d
    MOV dword ptr [EDI + 0x10],EAX      ; 0052f08e
    JMP 0x0052ef6c                      ; 0052f091
        ;   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)  ; LAB_0052ef6c
    LEA EAX,[ESI + 0x1]                 ; 0052f096
        ;   Label: LAB_0052f096
    MOV dword ptr [EBX + 0x18],EAX      ; 0052f099
    TEST ESI,ESI                        ; 0052f09c
    JGE 0x0052f04b                      ; 0052f09e
        ;   XREF to: 0052f04b (CONDITIONAL_JUMP)  ; LAB_0052f04b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0052f0a0
    DEC EAX                             ; 0052f0a3
    MOV dword ptr [EDI + 0x10],EAX      ; 0052f0a4
    JMP 0x0052ef6c                      ; 0052f0a7
        ;   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)  ; LAB_0052ef6c
    MOV EAX,ECX                         ; 0052f0ac
        ;   Label: LAB_0052f0ac
    JMP 0x0052ef79                      ; 0052f0ae
        ;   XREF to: 0052ef79 (UNCONDITIONAL_JUMP)  ; LAB_0052ef79

