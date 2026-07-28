; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130 at 004e313d
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8b58
;   sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320 at 004e4398
;
; Referenced Globals:
;   undefined4 DAT_005bbff0
;   undefined4 DAT_005bc00c
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e29d0
        ;   Label: sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0
    PUSH EDI                            ; 004e29d1
    PUSH EBP                            ; 004e29d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e29d3
    MOV EDX,dword ptr [EDI + 0xc]       ; 004e29d7
    INC EDX                             ; 004e29da
    MOV ECX,dword ptr [EDI + 0x14]      ; 004e29db
    MOV dword ptr [EDI + 0xc],EDX       ; 004e29de
    TEST ECX,ECX                        ; 004e29e1
    JNZ 0x004e2a7c                      ; 004e29e3
        ;   XREF to: 004e2a7c (CONDITIONAL_JUMP)  ; LAB_004e2a7c
    MOV EBX,dword ptr [EDI + 0x10]      ; 004e29e9
    MOV dword ptr [EDI + 0x14],0x8      ; 004e29ec
    DEC EBX                             ; 004e29f3
    MOV dword ptr [EDI + 0x10],EBX      ; 004e29f4
    CMP EBX,0x4                         ; 004e29f7
    JGE 0x004e2aa0                      ; 004e29fa
        ;   XREF to: 004e2aa0 (CONDITIONAL_JUMP)  ; LAB_004e2aa0
    CMP dword ptr [EDI + 0x18],0x0      ; 004e2a00
        ;   Label: LAB_004e2a00
    JNZ 0x004e2aab                      ; 004e2a04
        ;   XREF to: 004e2aab (CONDITIONAL_JUMP)  ; LAB_004e2aab
    PUSH ESI                            ; 004e2a0a
    MOV EBX,dword ptr [EDI + 0x10]      ; 004e2a0b
    TEST EBX,EBX                        ; 004e2a0e
    JL 0x004e2a30                       ; 004e2a10
        ;   XREF to: 004e2a30 (CONDITIONAL_JUMP)  ; LAB_004e2a30
    MOV EAX,dword ptr [EDI + 0x8]       ; 004e2a12
        ;   Label: LAB_004e2a12
    MOV EBP,dword ptr [EDI + 0x10]      ; 004e2a15
    DEC EAX                             ; 004e2a18
    MOV ESI,dword ptr [EDI + 0x4]       ; 004e2a19
    SUB EAX,EBP                         ; 004e2a1c
    LEA EDX,[ESI + EBX*0x1]             ; 004e2a1e
    ADD EAX,EBX                         ; 004e2a21
    ADD ESI,EAX                         ; 004e2a23
    MOV AL,byte ptr [EDX]               ; 004e2a25
    DEC EBX                             ; 004e2a27
    MOV byte ptr [ESI],AL               ; 004e2a28
    TEST EBX,EBX                        ; 004e2a2a
    JGE 0x004e2a12                      ; 004e2a2c
        ;   XREF to: 004e2a12 (CONDITIONAL_JUMP)  ; LAB_004e2a12
    MOV EAX,EAX                         ; 004e2a2e
    MOV ESI,dword ptr [EDI + 0x8]       ; 004e2a30
        ;   Label: LAB_004e2a30
    MOV EAX,dword ptr [EDI + 0x10]      ; 004e2a33
    SUB ESI,0x2                         ; 004e2a36
    SUB ESI,EAX                         ; 004e2a39
    MOV EBX,EDI                         ; 004e2a3b
    TEST ESI,ESI                        ; 004e2a3d
    JL 0x004e2a74                       ; 004e2a3f
        ;   XREF to: 004e2a74 (CONDITIONAL_JUMP)  ; LAB_004e2a74
    CMP dword ptr [EBX + 0x18],0x0      ; 004e2a41
        ;   Label: LAB_004e2a41
    JNZ 0x004e2a74                      ; 004e2a45
        ;   XREF to: 004e2a74 (CONDITIONAL_JUMP)  ; LAB_004e2a74
    MOV ECX,dword ptr [EBX + 0x28]      ; 004e2a47
    XOR EAX,EAX                         ; 004e2a4a
    TEST ECX,ECX                        ; 004e2a4c
    JLE 0x004e2a68                      ; 004e2a4e
        ;   XREF to: 004e2a68 (CONDITIONAL_JUMP)  ; LAB_004e2a68
    MOV EBP,dword ptr [EBX]             ; 004e2a50
    PUSH EBP                            ; 004e2a52
    PUSH 0x1                            ; 004e2a53
    MOV EDX,ESI                         ; 004e2a55
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e2a57
    PUSH 0x1                            ; 004e2a5a
    ADD EAX,EDX                         ; 004e2a5c
    PUSH EAX                            ; 004e2a5e
    DEC ESI                             ; 004e2a5f
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004e2a60
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004e2a65
    CMP EAX,0x1                         ; 004e2a68
        ;   Label: LAB_004e2a68
    JNZ 0x004e2ab4                      ; 004e2a6b
        ;   XREF to: 004e2ab4 (CONDITIONAL_JUMP)  ; LAB_004e2ab4
    DEC dword ptr [EBX + 0x28]          ; 004e2a6d
    TEST ESI,ESI                        ; 004e2a70
        ;   Label: LAB_004e2a70
    JGE 0x004e2a41                      ; 004e2a72
        ;   XREF to: 004e2a41 (CONDITIONAL_JUMP)  ; LAB_004e2a41
    MOV EAX,dword ptr [EDI + 0x8]       ; 004e2a74
        ;   Label: LAB_004e2a74
    DEC EAX                             ; 004e2a77
    MOV dword ptr [EDI + 0x10],EAX      ; 004e2a78
    POP ESI                             ; 004e2a7b
    MOV EDX,dword ptr [EDI + 0x10]      ; 004e2a7c
        ;   Label: LAB_004e2a7c
    MOV EAX,dword ptr [EDI + 0x4]       ; 004e2a7f
    ADD EAX,EDX                         ; 004e2a82
    MOV EDX,dword ptr [EDI + 0x14]      ; 004e2a84
    XOR EBX,EBX                         ; 004e2a87
    DEC EDX                             ; 004e2a89
    MOV BL,byte ptr [EAX]               ; 004e2a8a
    MOV EAX,dword ptr [EDX*0x4 + 0x5bbff0] ; 004e2a8c | DAT_005bc00c | DAT_005bbff0
    MOV CL,DL                           ; 004e2a93
    AND EAX,EBX                         ; 004e2a95
    MOV dword ptr [EDI + 0x14],EDX      ; 004e2a97
    SHR EAX,CL                          ; 004e2a9a
    POP EBP                             ; 004e2a9c
    POP EDI                             ; 004e2a9d
    POP EBX                             ; 004e2a9e
    RET                                 ; 004e2a9f
    CMP EBX,dword ptr [EDI + 0x18]      ; 004e2aa0
        ;   Label: LAB_004e2aa0
    JL 0x004e2a00                       ; 004e2aa3
        ;   XREF to: 004e2a00 (CONDITIONAL_JUMP)  ; LAB_004e2a00
    JMP 0x004e2a7c                      ; 004e2aa9
        ;   XREF to: 004e2a7c (UNCONDITIONAL_JUMP)  ; LAB_004e2a7c
    MOV dword ptr [EDI + 0x1c],0x1      ; 004e2aab
        ;   Label: LAB_004e2aab
    JMP 0x004e2a7c                      ; 004e2ab2
        ;   XREF to: 004e2a7c (UNCONDITIONAL_JUMP)  ; LAB_004e2a7c
    LEA EAX,[ESI + 0x1]                 ; 004e2ab4
        ;   Label: LAB_004e2ab4
    MOV dword ptr [EBX + 0x18],EAX      ; 004e2ab7
    JMP 0x004e2a70                      ; 004e2aba
        ;   XREF to: 004e2a70 (UNCONDITIONAL_JUMP)  ; LAB_004e2a70

