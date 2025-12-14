; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream * this_ptr, SMpegSubbandSCFSI * scfsi_array, SMpegSubbandAllocation * allocation_array, SMpegSubbandScalefactors * scalefactor_array, SBitAllocationTable * allocation_table)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandSCFSI * Stack[0x8]:4   scfsi_array
; SMpegSubbandAllocation * Stack[0xc]:4   allocation_array
; SMpegSubbandScalefactors * Stack[0x10]:4   scalefactor_array
; SBitAllocationTable * Stack[0x14]:4   allocation_table
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005353f2
;
; Referenced Globals:
;   void* switchdataD_0052f8c4 = 0052f9f7
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f8e0
        ;   Label: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
    PUSH ESI                            ; 0052f8e1
    PUSH EDI                            ; 0052f8e2
    PUSH EBP                            ; 0052f8e3
    SUB ESP,0x24                        ; 0052f8e4
    MOV ESI,dword ptr [ESP + 0x38]      ; 0052f8e7
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052f8eb
    MOV EDI,dword ptr [EAX + 0x10]      ; 0052f8ef
    MOV EAX,dword ptr [EAX + 0x18]      ; 0052f8f2
    MOV dword ptr [ESP],EAX             ; 0052f8f5
    TEST EAX,EAX                        ; 0052f8f8
    JLE 0x0052f953                      ; 0052f8fa
        ;   XREF to: 0052f953 (CONDITIONAL_JUMP)  ; LAB_0052f953
    XOR EAX,EAX                         ; 0052f8fc
    MOV dword ptr [ESP + 0xc],EAX       ; 0052f8fe
    MOV EAX,dword ptr [ESP]             ; 0052f902
    SHL EAX,0x2                         ; 0052f905
    MOV dword ptr [ESP + 0x4],EAX       ; 0052f908
    XOR EBX,EBX                         ; 0052f90c
        ;   Label: LAB_0052f90c
    TEST EDI,EDI                        ; 0052f90e
    JLE 0x0052f940                      ; 0052f910
        ;   XREF to: 0052f940 (CONDITIONAL_JUMP)  ; LAB_0052f940
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052f912
    MOV EDX,dword ptr [ESP + 0x40]      ; 0052f916
    MOV dword ptr [ESP + 0x14],EAX      ; 0052f91a
    LEA EBP,[EAX + EDX*0x1]             ; 0052f91e
    MOV EAX,EBX                         ; 0052f921
        ;   Label: LAB_0052f921
    SHL EAX,0x7                         ; 0052f923
    MOV ECX,dword ptr [EBP]             ; 0052f926
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052f929
    TEST ECX,ECX                        ; 0052f92d
    JNZ 0x0052faa4                      ; 0052f92f
        ;   XREF to: 0052faa4 (CONDITIONAL_JUMP)  ; LAB_0052faa4
    INC EBX                             ; 0052f935
        ;   Label: LAB_0052f935
    ADD EBP,0x80                        ; 0052f936
    CMP EBX,EDI                         ; 0052f93c
    JL 0x0052f921                       ; 0052f93e
        ;   XREF to: 0052f921 (CONDITIONAL_JUMP)  ; LAB_0052f921
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052f940
        ;   Label: LAB_0052f940
    ADD ECX,0x4                         ; 0052f944
    MOV EBX,dword ptr [ESP + 0x4]       ; 0052f947
    MOV dword ptr [ESP + 0xc],ECX       ; 0052f94b
    CMP ECX,EBX                         ; 0052f94f
    JL 0x0052f90c                       ; 0052f951
        ;   XREF to: 0052f90c (CONDITIONAL_JUMP)  ; LAB_0052f90c
    MOV EBP,dword ptr [ESP]             ; 0052f953
        ;   Label: LAB_0052f953
    CMP EBP,0x20                        ; 0052f956
    JGE 0x0052f98a                      ; 0052f959
        ;   XREF to: 0052f98a (CONDITIONAL_JUMP)  ; LAB_0052f98a
    LEA EAX,[EBP*0x4 + 0x0]             ; 0052f95b
    XOR EBX,EBX                         ; 0052f962
        ;   Label: LAB_0052f962
    TEST EDI,EDI                        ; 0052f964
    JLE 0x0052f980                      ; 0052f966
        ;   XREF to: 0052f980 (CONDITIONAL_JUMP)  ; LAB_0052f980
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0052f968
    ADD EBP,EAX                         ; 0052f96c
    INC EBX                             ; 0052f96e
        ;   Label: LAB_0052f96e
    MOV dword ptr [EBP],0x0             ; 0052f96f
    ADD EBP,0x80                        ; 0052f976
    CMP EBX,EDI                         ; 0052f97c
    JL 0x0052f96e                       ; 0052f97e
        ;   XREF to: 0052f96e (CONDITIONAL_JUMP)  ; LAB_0052f96e
    ADD EAX,0x4                         ; 0052f980
        ;   Label: LAB_0052f980
    CMP EAX,0x80                        ; 0052f983
    JL 0x0052f962                       ; 0052f988
        ;   XREF to: 0052f962 (CONDITIONAL_JUMP)  ; LAB_0052f962
    CMP dword ptr [ESP],0x0             ; 0052f98a
        ;   Label: LAB_0052f98a
    JLE 0x0052fa55                      ; 0052f98e
        ;   XREF to: 0052fa55 (CONDITIONAL_JUMP)  ; LAB_0052fa55
    MOV EAX,dword ptr [ESP]             ; 0052f994
    XOR EBX,EBX                         ; 0052f997
    SHL EAX,0x2                         ; 0052f999
    MOV dword ptr [ESP + 0x10],EBX      ; 0052f99c
    MOV dword ptr [ESP + 0x8],EAX       ; 0052f9a0
    XOR EBP,EBP                         ; 0052f9a4
        ;   Label: LAB_0052f9a4
    TEST EDI,EDI                        ; 0052f9a6
    JLE 0x0052fa3e                      ; 0052f9a8
        ;   XREF to: 0052fa3e (CONDITIONAL_JUMP)  ; LAB_0052fa3e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052f9ae
    MOV EDX,dword ptr [ESP + 0x40]      ; 0052f9b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052f9b6
    MOV ECX,dword ptr [ESP + 0x44]      ; 0052f9ba
    MOV dword ptr [ESP + 0x18],EAX      ; 0052f9be
    ADD EAX,EDX                         ; 0052f9c2
    ADD EBX,ECX                         ; 0052f9c4
    MOV dword ptr [ESP + 0x20],EAX      ; 0052f9c6
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052f9ca
        ;   Label: LAB_0052f9ca
    MOV EAX,EBP                         ; 0052f9ce
    MOV ECX,dword ptr [EDX]             ; 0052f9d0
    SHL EAX,0x7                         ; 0052f9d2
    TEST ECX,ECX                        ; 0052f9d5
    JZ 0x0052fb2a                       ; 0052f9d7
        ;   XREF to: 0052fb2a (CONDITIONAL_JUMP)  ; LAB_0052fb2a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0052f9dd
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052f9e1
    ADD EAX,EDX                         ; 0052f9e5
    ADD EAX,ECX                         ; 0052f9e7
    MOV EAX,dword ptr [EAX]             ; 0052f9e9
    CMP EAX,0x3                         ; 0052f9eb
    JA 0x0052fa26                       ; 0052f9ee
        ;   XREF to: 0052fa26 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x52f8c4]  ; 0052f9f0 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    PUSH 0x6                            ; 0052f9f7
        ;   Label: caseD_0
    PUSH ESI                            ; 0052f9f9
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f9fa
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f9ff
    PUSH 0x6                            ; 0052fa02
    PUSH ESI                            ; 0052fa04
    MOV dword ptr [EBX],EAX             ; 0052fa05
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fa07
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052fa0c
    PUSH 0x6                            ; 0052fa0f
    PUSH ESI                            ; 0052fa11
    MOV dword ptr [EBX + 0x80],EAX      ; 0052fa12
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fa18
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
        ;   Label: LAB_0052fa18
    ADD ESP,0x8                         ; 0052fa1d
    MOV dword ptr [EBX + 0x100],EAX     ; 0052fa20
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052fa26
        ;   Label: default
    ADD EBX,0x180                       ; 0052fa2a
    ADD EAX,0x80                        ; 0052fa30
    INC EBP                             ; 0052fa35
    MOV dword ptr [ESP + 0x20],EAX      ; 0052fa36
    CMP EBP,EDI                         ; 0052fa3a
    JL 0x0052f9ca                       ; 0052fa3c
        ;   XREF to: 0052f9ca (CONDITIONAL_JUMP)  ; LAB_0052f9ca
    MOV EBP,dword ptr [ESP + 0x10]      ; 0052fa3e
        ;   Label: LAB_0052fa3e
    ADD EBP,0x4                         ; 0052fa42
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052fa45
    MOV dword ptr [ESP + 0x10],EBP      ; 0052fa49
    CMP EBP,EDX                         ; 0052fa4d
    JL 0x0052f9a4                       ; 0052fa4f
        ;   XREF to: 0052f9a4 (CONDITIONAL_JUMP)  ; LAB_0052f9a4
    MOV ECX,dword ptr [ESP]             ; 0052fa55
        ;   Label: LAB_0052fa55
    CMP ECX,0x20                        ; 0052fa58
    JGE 0x0052fa9c                      ; 0052fa5b
        ;   XREF to: 0052fa9c (CONDITIONAL_JUMP)  ; LAB_0052fa9c
    LEA EDX,[ECX*0x4 + 0x0]             ; 0052fa5d
    XOR ESI,ESI                         ; 0052fa64
        ;   Label: LAB_0052fa64
    TEST EDI,EDI                        ; 0052fa66
    JLE 0x0052fa91                      ; 0052fa68
        ;   XREF to: 0052fa91 (CONDITIONAL_JUMP)  ; LAB_0052fa91
    MOV EBX,dword ptr [ESP + 0x44]      ; 0052fa6a
    ADD EBX,EDX                         ; 0052fa6e
    ADD EBX,0x180                       ; 0052fa70
        ;   Label: LAB_0052fa70
    MOV dword ptr [EBX + -0x80],0x3f    ; 0052fa76
    MOV EAX,dword ptr [EBX + -0x80]     ; 0052fa7d
    MOV dword ptr [EBX + 0xffffff00],EAX ; 0052fa80
    INC ESI                             ; 0052fa86
    MOV dword ptr [EBX + 0xfffffe80],EAX ; 0052fa87
    CMP ESI,EDI                         ; 0052fa8d
    JL 0x0052fa70                       ; 0052fa8f
        ;   XREF to: 0052fa70 (CONDITIONAL_JUMP)  ; LAB_0052fa70
    ADD EDX,0x4                         ; 0052fa91
        ;   Label: LAB_0052fa91
    CMP EDX,0x80                        ; 0052fa94
    JL 0x0052fa64                       ; 0052fa9a
        ;   XREF to: 0052fa64 (CONDITIONAL_JUMP)  ; LAB_0052fa64
    ADD ESP,0x24                        ; 0052fa9c
        ;   Label: LAB_0052fa9c
    POP EBP                             ; 0052fa9f
    POP EDI                             ; 0052faa0
    POP ESI                             ; 0052faa1
    POP EBX                             ; 0052faa2
    RET                                 ; 0052faa3
    PUSH 0x2                            ; 0052faa4
        ;   Label: LAB_0052faa4
    PUSH ESI                            ; 0052faa6
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052faa7
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052faac
    XOR EDX,EDX                         ; 0052faaf
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052fab1
    MOV DL,AL                           ; 0052fab5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052fab7
    ADD EAX,ECX                         ; 0052fabb
    ADD EAX,dword ptr [ESP + 0x14]      ; 0052fabd
    MOV dword ptr [EAX],EDX             ; 0052fac1
    JMP 0x0052f935                      ; 0052fac3
        ;   XREF to: 0052f935 (UNCONDITIONAL_JUMP)  ; LAB_0052f935
    PUSH 0x6                            ; 0052fac8
        ;   Label: caseD_1
    PUSH ESI                            ; 0052faca
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052facb
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052fad0
    PUSH 0x6                            ; 0052fad3
    MOV dword ptr [EBX + 0x80],EAX      ; 0052fad5
    PUSH ESI                            ; 0052fadb
    MOV dword ptr [EBX],EAX             ; 0052fadc
    JMP 0x0052fa18                      ; 0052fade
        ;   XREF to: 0052fa18 (UNCONDITIONAL_JUMP)  ; LAB_0052fa18
    PUSH 0x6                            ; 0052fae3
        ;   Label: caseD_3
    PUSH ESI                            ; 0052fae5
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fae6
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052faeb
    PUSH 0x6                            ; 0052faee
    PUSH ESI                            ; 0052faf0
    MOV dword ptr [EBX],EAX             ; 0052faf1
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052faf3
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 0052faf8
    ADD ESP,0x8                         ; 0052fafe
    MOV dword ptr [EBX + 0x80],EAX      ; 0052fb01
    JMP 0x0052fa26                      ; 0052fb07
        ;   XREF to: 0052fa26 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x6                            ; 0052fb0c
        ;   Label: caseD_2
    PUSH ESI                            ; 0052fb0e
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fb0f
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 0052fb14
    MOV dword ptr [EBX + 0x80],EAX      ; 0052fb1a
    ADD ESP,0x8                         ; 0052fb20
    MOV dword ptr [EBX],EAX             ; 0052fb23
    JMP 0x0052fa26                      ; 0052fb25
        ;   XREF to: 0052fa26 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x100],0x3f    ; 0052fb2a
        ;   Label: LAB_0052fb2a
    MOV EAX,dword ptr [EBX + 0x100]     ; 0052fb34
    MOV dword ptr [EBX + 0x80],EAX      ; 0052fb3a
    MOV dword ptr [EBX],EAX             ; 0052fb40
    JMP 0x0052fa26                      ; 0052fb42
        ;   XREF to: 0052fa26 (UNCONDITIONAL_JUMP)  ; default

