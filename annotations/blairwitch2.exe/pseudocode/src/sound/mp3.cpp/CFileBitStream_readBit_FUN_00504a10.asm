; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170 at 0050517d
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a59a
;   sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_00506360 at 005063d8
;
; Referenced Globals:
;   undefined4 DAT_00619230
;   undefined4 DAT_0061924c
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504a10
        ;   Label: sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10
    PUSH EDI                            ; 00504a11
    PUSH EBP                            ; 00504a12
    MOV EDI,dword ptr [ESP + 0x10]      ; 00504a13
    MOV EDX,dword ptr [EDI + 0xc]       ; 00504a17
    INC EDX                             ; 00504a1a
    MOV ECX,dword ptr [EDI + 0x14]      ; 00504a1b
    MOV dword ptr [EDI + 0xc],EDX       ; 00504a1e
    TEST ECX,ECX                        ; 00504a21
    JNZ 0x00504abc                      ; 00504a23
        ;   XREF to: 00504abc (CONDITIONAL_JUMP)  ; LAB_00504abc
    MOV EBX,dword ptr [EDI + 0x10]      ; 00504a29
    MOV dword ptr [EDI + 0x14],0x8      ; 00504a2c
    DEC EBX                             ; 00504a33
    MOV dword ptr [EDI + 0x10],EBX      ; 00504a34
    CMP EBX,0x4                         ; 00504a37
    JGE 0x00504ae0                      ; 00504a3a
        ;   XREF to: 00504ae0 (CONDITIONAL_JUMP)  ; LAB_00504ae0
    CMP dword ptr [EDI + 0x18],0x0      ; 00504a40
        ;   Label: LAB_00504a40
    JNZ 0x00504aeb                      ; 00504a44
        ;   XREF to: 00504aeb (CONDITIONAL_JUMP)  ; LAB_00504aeb
    PUSH ESI                            ; 00504a4a
    MOV EBX,dword ptr [EDI + 0x10]      ; 00504a4b
    TEST EBX,EBX                        ; 00504a4e
    JL 0x00504a70                       ; 00504a50
        ;   XREF to: 00504a70 (CONDITIONAL_JUMP)  ; LAB_00504a70
    MOV EAX,dword ptr [EDI + 0x8]       ; 00504a52
        ;   Label: LAB_00504a52
    MOV EBP,dword ptr [EDI + 0x10]      ; 00504a55
    DEC EAX                             ; 00504a58
    MOV ESI,dword ptr [EDI + 0x4]       ; 00504a59
    SUB EAX,EBP                         ; 00504a5c
    LEA EDX,[ESI + EBX*0x1]             ; 00504a5e
    ADD EAX,EBX                         ; 00504a61
    ADD ESI,EAX                         ; 00504a63
    MOV AL,byte ptr [EDX]               ; 00504a65
    DEC EBX                             ; 00504a67
    MOV byte ptr [ESI],AL               ; 00504a68
    TEST EBX,EBX                        ; 00504a6a
    JGE 0x00504a52                      ; 00504a6c
        ;   XREF to: 00504a52 (CONDITIONAL_JUMP)  ; LAB_00504a52
    MOV EAX,EAX                         ; 00504a6e
    MOV ESI,dword ptr [EDI + 0x8]       ; 00504a70
        ;   Label: LAB_00504a70
    MOV EAX,dword ptr [EDI + 0x10]      ; 00504a73
    SUB ESI,0x2                         ; 00504a76
    SUB ESI,EAX                         ; 00504a79
    MOV EBX,EDI                         ; 00504a7b
    TEST ESI,ESI                        ; 00504a7d
    JL 0x00504ab4                       ; 00504a7f
        ;   XREF to: 00504ab4 (CONDITIONAL_JUMP)  ; LAB_00504ab4
    CMP dword ptr [EBX + 0x18],0x0      ; 00504a81
        ;   Label: LAB_00504a81
    JNZ 0x00504ab4                      ; 00504a85
        ;   XREF to: 00504ab4 (CONDITIONAL_JUMP)  ; LAB_00504ab4
    MOV ECX,dword ptr [EBX + 0x28]      ; 00504a87
    XOR EAX,EAX                         ; 00504a8a
    TEST ECX,ECX                        ; 00504a8c
    JLE 0x00504aa8                      ; 00504a8e
        ;   XREF to: 00504aa8 (CONDITIONAL_JUMP)  ; LAB_00504aa8
    MOV EBP,dword ptr [EBX]             ; 00504a90
    PUSH EBP                            ; 00504a92
    PUSH 0x1                            ; 00504a93
    MOV EDX,ESI                         ; 00504a95
    MOV EAX,dword ptr [EBX + 0x4]       ; 00504a97
    PUSH 0x1                            ; 00504a9a
    ADD EAX,EDX                         ; 00504a9c
    PUSH EAX                            ; 00504a9e
    DEC ESI                             ; 00504a9f
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00504aa0
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00504aa5
    CMP EAX,0x1                         ; 00504aa8
        ;   Label: LAB_00504aa8
    JNZ 0x00504af4                      ; 00504aab
        ;   XREF to: 00504af4 (CONDITIONAL_JUMP)  ; LAB_00504af4
    DEC dword ptr [EBX + 0x28]          ; 00504aad
    TEST ESI,ESI                        ; 00504ab0
        ;   Label: LAB_00504ab0
    JGE 0x00504a81                      ; 00504ab2
        ;   XREF to: 00504a81 (CONDITIONAL_JUMP)  ; LAB_00504a81
    MOV EAX,dword ptr [EDI + 0x8]       ; 00504ab4
        ;   Label: LAB_00504ab4
    DEC EAX                             ; 00504ab7
    MOV dword ptr [EDI + 0x10],EAX      ; 00504ab8
    POP ESI                             ; 00504abb
    MOV EDX,dword ptr [EDI + 0x10]      ; 00504abc
        ;   Label: LAB_00504abc
    MOV EAX,dword ptr [EDI + 0x4]       ; 00504abf
    ADD EAX,EDX                         ; 00504ac2
    MOV EDX,dword ptr [EDI + 0x14]      ; 00504ac4
    XOR EBX,EBX                         ; 00504ac7
    DEC EDX                             ; 00504ac9
    MOV BL,byte ptr [EAX]               ; 00504aca
    MOV EAX,dword ptr [EDX*0x4 + 0x619230] ; 00504acc | DAT_0061924c | DAT_00619230
    MOV CL,DL                           ; 00504ad3
    AND EAX,EBX                         ; 00504ad5
    MOV dword ptr [EDI + 0x14],EDX      ; 00504ad7
    SHR EAX,CL                          ; 00504ada
    POP EBP                             ; 00504adc
    POP EDI                             ; 00504add
    POP EBX                             ; 00504ade
    RET                                 ; 00504adf
    CMP EBX,dword ptr [EDI + 0x18]      ; 00504ae0
        ;   Label: LAB_00504ae0
    JL 0x00504a40                       ; 00504ae3
        ;   XREF to: 00504a40 (CONDITIONAL_JUMP)  ; LAB_00504a40
    JMP 0x00504abc                      ; 00504ae9
        ;   XREF to: 00504abc (UNCONDITIONAL_JUMP)  ; LAB_00504abc
    MOV dword ptr [EDI + 0x1c],0x1      ; 00504aeb
        ;   Label: LAB_00504aeb
    JMP 0x00504abc                      ; 00504af2
        ;   XREF to: 00504abc (UNCONDITIONAL_JUMP)  ; LAB_00504abc
    LEA EAX,[ESI + 0x1]                 ; 00504af4
        ;   Label: LAB_00504af4
    MOV dword ptr [EBX + 0x18],EAX      ; 00504af7
    JMP 0x00504ab0                      ; 00504afa
        ;   XREF to: 00504ab0 (UNCONDITIONAL_JUMP)  ; LAB_00504ab0

