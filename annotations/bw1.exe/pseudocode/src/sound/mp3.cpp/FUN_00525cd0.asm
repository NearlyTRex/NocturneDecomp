; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_FUN_00525cd0(CFileBitStream *this_ptr,int num_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bits
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00526530 at 00526574
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00526400 at 00526458
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340 at 0052635a
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0 at 00526bd2
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_005268e0 at 005269b4
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670 at 00526837
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_005265e0 at 00526647
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70 at 00525e94
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052ba35
;   sound_mp3.cpp_FUN_00527530 at 00527554
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb167
;   TerminatedCString s_Cannot_read_or_write_mor_005eb178
;   undefined4 DAT_006206b0
;   undefined4 DAT_006206d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fread_FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525cd0
        ;   Label: sound_mp3.cpp_FUN_00525cd0
    PUSH ESI                            ; 00525cd1
    PUSH EDI                            ; 00525cd2
    PUSH EBP                            ; 00525cd3
    SUB ESP,0x4                         ; 00525cd4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00525cd7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00525cdb
    XOR EDX,EDX                         ; 00525cdf
    MOV EBP,EBX                         ; 00525ce1
    MOV dword ptr [ESP],EDX             ; 00525ce3
    CMP EBX,0x20                        ; 00525ce6
    JG 0x00525d49                       ; 00525ce9
        ;   XREF to: 00525d49 (CONDITIONAL_JUMP)  ; LAB_00525d49
    ADD dword ptr [EDI + 0xc],EBX       ; 00525ceb
        ;   Label: LAB_00525ceb
    TEST EBP,EBP                        ; 00525cee
    JLE 0x00525d3e                      ; 00525cf0
        ;   XREF to: 00525d3e (CONDITIONAL_JUMP)  ; LAB_00525d3e
    CMP dword ptr [EDI + 0x14],0x0      ; 00525cf2
        ;   Label: LAB_00525cf2
    JZ 0x00525d78                       ; 00525cf6
        ;   XREF to: 00525d78 (CONDITIONAL_JUMP)  ; LAB_00525d78
    MOV ECX,dword ptr [EDI + 0x14]      ; 00525cfc
        ;   Label: LAB_00525cfc
    CMP EBP,ECX                         ; 00525cff
    JGE 0x00525e3c                      ; 00525d01
        ;   XREF to: 00525e3c (CONDITIONAL_JUMP)  ; LAB_00525e3c
    MOV EAX,EBP                         ; 00525d07
    MOV EDX,dword ptr [EDI + 0x4]       ; 00525d09
        ;   Label: LAB_00525d09
    ADD EDX,dword ptr [EDI + 0x10]      ; 00525d0c
    XOR EBX,EBX                         ; 00525d0f
    MOV BL,byte ptr [EDX]               ; 00525d11
    MOV EDX,dword ptr [EDI + 0x14]      ; 00525d13
    SUB EBP,EAX                         ; 00525d16
    MOV ESI,dword ptr [EDX*0x4 + 0x6206b0] ; 00525d18 | DAT_006206b0 | DAT_006206d0
    SUB EDX,EAX                         ; 00525d1f
    AND EBX,ESI                         ; 00525d21
    MOV CL,DL                           ; 00525d23
    MOV EAX,EBP                         ; 00525d25
    SAR EBX,CL                          ; 00525d27
    MOV CL,AL                           ; 00525d29
    MOV EBP,dword ptr [ESP]             ; 00525d2b
    SHL EBX,CL                          ; 00525d2e
    OR EBP,EBX                          ; 00525d30
    MOV dword ptr [EDI + 0x14],EDX      ; 00525d32
    MOV dword ptr [ESP],EBP             ; 00525d35
    MOV EBP,EAX                         ; 00525d38
    TEST EAX,EAX                        ; 00525d3a
    JG 0x00525cf2                       ; 00525d3c
        ;   XREF to: 00525cf2 (CONDITIONAL_JUMP)  ; LAB_00525cf2
    MOV EAX,dword ptr [ESP]             ; 00525d3e
        ;   Label: LAB_00525d3e
    ADD ESP,0x4                         ; 00525d41
    POP EBP                             ; 00525d44
    POP EDI                             ; 00525d45
    POP ESI                             ; 00525d46
    POP EBX                             ; 00525d47
    RET                                 ; 00525d48
    PUSH 0x1d404c8                      ; 00525d49
        ;   Label: LAB_00525d49
    PUSH 0x20                           ; 00525d4e
    MOV ECX,0x5eb167                    ; 00525d50 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x2ab                       ; 00525d55
    PUSH 0x5eb178                       ; 00525d5a | = "Cannot read or write more than %d bit..."
    MOV dword ptr [0x01d1d400],ECX      ; 00525d5f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00525d65 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00525d6b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00525d70
    JMP 0x00525ceb                      ; 00525d73
        ;   XREF to: 00525ceb (UNCONDITIONAL_JUMP)  ; LAB_00525ceb
    MOV EDX,dword ptr [EDI + 0x10]      ; 00525d78
        ;   Label: LAB_00525d78
    MOV dword ptr [EDI + 0x14],0x8      ; 00525d7b
    DEC EDX                             ; 00525d82
    MOV dword ptr [EDI + 0x10],EDX      ; 00525d83
    CMP EDX,0x4                         ; 00525d86
    JGE 0x00525d9d                      ; 00525d89
        ;   XREF to: 00525d9d (CONDITIONAL_JUMP)  ; LAB_00525d9d
    CMP dword ptr [EDI + 0x18],0x0      ; 00525d8b
        ;   Label: LAB_00525d8b
    JZ 0x00525da7                       ; 00525d8f
        ;   XREF to: 00525da7 (CONDITIONAL_JUMP)  ; LAB_00525da7
    MOV dword ptr [EDI + 0x1c],0x1      ; 00525d91
    JMP 0x00525cfc                      ; 00525d98
        ;   XREF to: 00525cfc (UNCONDITIONAL_JUMP)  ; LAB_00525cfc
    CMP EDX,dword ptr [EDI + 0x18]      ; 00525d9d
        ;   Label: LAB_00525d9d
    JL 0x00525d8b                       ; 00525da0
        ;   XREF to: 00525d8b (CONDITIONAL_JUMP)  ; LAB_00525d8b
    JMP 0x00525cfc                      ; 00525da2
        ;   XREF to: 00525cfc (UNCONDITIONAL_JUMP)  ; LAB_00525cfc
    MOV EBX,dword ptr [EDI + 0x10]      ; 00525da7
        ;   Label: LAB_00525da7
    TEST EBX,EBX                        ; 00525daa
    JL 0x00525dca                       ; 00525dac
        ;   XREF to: 00525dca (CONDITIONAL_JUMP)  ; LAB_00525dca
    MOV EAX,dword ptr [EDI + 0x8]       ; 00525dae
        ;   Label: LAB_00525dae
    MOV ECX,dword ptr [EDI + 0x10]      ; 00525db1
    DEC EAX                             ; 00525db4
    MOV ESI,dword ptr [EDI + 0x4]       ; 00525db5
    SUB EAX,ECX                         ; 00525db8
    LEA EDX,[ESI + EBX*0x1]             ; 00525dba
    ADD EAX,EBX                         ; 00525dbd
    ADD ESI,EAX                         ; 00525dbf
    MOV AL,byte ptr [EDX]               ; 00525dc1
    DEC EBX                             ; 00525dc3
    MOV byte ptr [ESI],AL               ; 00525dc4
    TEST EBX,EBX                        ; 00525dc6
    JGE 0x00525dae                      ; 00525dc8
        ;   XREF to: 00525dae (CONDITIONAL_JUMP)  ; LAB_00525dae
    MOV ESI,dword ptr [EDI + 0x8]       ; 00525dca
        ;   Label: LAB_00525dca
    MOV EAX,dword ptr [EDI + 0x10]      ; 00525dcd
    SUB ESI,0x2                         ; 00525dd0
    SUB ESI,EAX                         ; 00525dd3
    MOV EBX,EDI                         ; 00525dd5
    TEST ESI,ESI                        ; 00525dd7
    JL 0x00525de1                       ; 00525dd9
        ;   XREF to: 00525de1 (CONDITIONAL_JUMP)  ; LAB_00525de1
    CMP dword ptr [EBX + 0x18],0x0      ; 00525ddb
        ;   Label: LAB_00525ddb
    JZ 0x00525ded                       ; 00525ddf
        ;   XREF to: 00525ded (CONDITIONAL_JUMP)  ; LAB_00525ded
    MOV EAX,dword ptr [EDI + 0x8]       ; 00525de1
        ;   Label: LAB_00525de1
    DEC EAX                             ; 00525de4
    MOV dword ptr [EDI + 0x10],EAX      ; 00525de5
    JMP 0x00525cfc                      ; 00525de8
        ;   XREF to: 00525cfc (UNCONDITIONAL_JUMP)  ; LAB_00525cfc
    MOV ECX,dword ptr [EBX + 0x28]      ; 00525ded
        ;   Label: LAB_00525ded
    XOR EAX,EAX                         ; 00525df0
    TEST ECX,ECX                        ; 00525df2
    JLE 0x00525e0e                      ; 00525df4
        ;   XREF to: 00525e0e (CONDITIONAL_JUMP)  ; LAB_00525e0e
    MOV EAX,dword ptr [EBX]             ; 00525df6
    PUSH EAX                            ; 00525df8
    PUSH 0x1                            ; 00525df9
    MOV EDX,dword ptr [EBX + 0x4]       ; 00525dfb
    MOV EAX,ESI                         ; 00525dfe
    PUSH 0x1                            ; 00525e00
    ADD EAX,EDX                         ; 00525e02
    PUSH EAX                            ; 00525e04
    DEC ESI                             ; 00525e05
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00525e06
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 00525e0b
    CMP EAX,0x1                         ; 00525e0e
        ;   Label: LAB_00525e0e
    JNZ 0x00525e26                      ; 00525e11
        ;   XREF to: 00525e26 (CONDITIONAL_JUMP)  ; LAB_00525e26
    SUB dword ptr [EBX + 0x28],EAX      ; 00525e13
    TEST ESI,ESI                        ; 00525e16
    JGE 0x00525ddb                      ; 00525e18
        ;   XREF to: 00525ddb (CONDITIONAL_JUMP)  ; LAB_00525ddb
    MOV EAX,dword ptr [EDI + 0x8]       ; 00525e1a
    DEC EAX                             ; 00525e1d
    MOV dword ptr [EDI + 0x10],EAX      ; 00525e1e
    JMP 0x00525cfc                      ; 00525e21
        ;   XREF to: 00525cfc (UNCONDITIONAL_JUMP)  ; LAB_00525cfc
    LEA EAX,[ESI + 0x1]                 ; 00525e26
        ;   Label: LAB_00525e26
    MOV dword ptr [EBX + 0x18],EAX      ; 00525e29
    TEST ESI,ESI                        ; 00525e2c
    JGE 0x00525ddb                      ; 00525e2e
        ;   XREF to: 00525ddb (CONDITIONAL_JUMP)  ; LAB_00525ddb
    MOV EAX,dword ptr [EDI + 0x8]       ; 00525e30
    DEC EAX                             ; 00525e33
    MOV dword ptr [EDI + 0x10],EAX      ; 00525e34
    JMP 0x00525cfc                      ; 00525e37
        ;   XREF to: 00525cfc (UNCONDITIONAL_JUMP)  ; LAB_00525cfc
    MOV EAX,ECX                         ; 00525e3c
        ;   Label: LAB_00525e3c
    JMP 0x00525d09                      ; 00525e3e
        ;   XREF to: 00525d09 (UNCONDITIONAL_JUMP)  ; LAB_00525d09

