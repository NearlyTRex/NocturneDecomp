; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340 at 0052634d
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b76a
;   sound_mp3.cpp_FUN_00527530 at 005275a8
;
; Referenced Globals:
;   undefined4 DAT_00620690
;   undefined4 DAT_006206ac
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525be0
        ;   Label: sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0
    PUSH EDI                            ; 00525be1
    PUSH EBP                            ; 00525be2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00525be3
    MOV EDX,dword ptr [EDI + 0xc]       ; 00525be7
    INC EDX                             ; 00525bea
    MOV ECX,dword ptr [EDI + 0x14]      ; 00525beb
    MOV dword ptr [EDI + 0xc],EDX       ; 00525bee
    TEST ECX,ECX                        ; 00525bf1
    JNZ 0x00525c8c                      ; 00525bf3
        ;   XREF to: 00525c8c (CONDITIONAL_JUMP)  ; LAB_00525c8c
    MOV EBX,dword ptr [EDI + 0x10]      ; 00525bf9
    MOV dword ptr [EDI + 0x14],0x8      ; 00525bfc
    DEC EBX                             ; 00525c03
    MOV dword ptr [EDI + 0x10],EBX      ; 00525c04
    CMP EBX,0x4                         ; 00525c07
    JGE 0x00525cb0                      ; 00525c0a
        ;   XREF to: 00525cb0 (CONDITIONAL_JUMP)  ; LAB_00525cb0
    CMP dword ptr [EDI + 0x18],0x0      ; 00525c10
        ;   Label: LAB_00525c10
    JNZ 0x00525cbb                      ; 00525c14
        ;   XREF to: 00525cbb (CONDITIONAL_JUMP)  ; LAB_00525cbb
    PUSH ESI                            ; 00525c1a
    MOV EBX,dword ptr [EDI + 0x10]      ; 00525c1b
    TEST EBX,EBX                        ; 00525c1e
    JL 0x00525c40                       ; 00525c20
        ;   XREF to: 00525c40 (CONDITIONAL_JUMP)  ; LAB_00525c40
    MOV EAX,dword ptr [EDI + 0x8]       ; 00525c22
        ;   Label: LAB_00525c22
    MOV EBP,dword ptr [EDI + 0x10]      ; 00525c25
    DEC EAX                             ; 00525c28
    MOV ESI,dword ptr [EDI + 0x4]       ; 00525c29
    SUB EAX,EBP                         ; 00525c2c
    LEA EDX,[ESI + EBX*0x1]             ; 00525c2e
    ADD EAX,EBX                         ; 00525c31
    ADD ESI,EAX                         ; 00525c33
    MOV AL,byte ptr [EDX]               ; 00525c35
    DEC EBX                             ; 00525c37
    MOV byte ptr [ESI],AL               ; 00525c38
    TEST EBX,EBX                        ; 00525c3a
    JGE 0x00525c22                      ; 00525c3c
        ;   XREF to: 00525c22 (CONDITIONAL_JUMP)  ; LAB_00525c22
    MOV EAX,EAX                         ; 00525c3e
    MOV ESI,dword ptr [EDI + 0x8]       ; 00525c40
        ;   Label: LAB_00525c40
    MOV EAX,dword ptr [EDI + 0x10]      ; 00525c43
    SUB ESI,0x2                         ; 00525c46
    SUB ESI,EAX                         ; 00525c49
    MOV EBX,EDI                         ; 00525c4b
    TEST ESI,ESI                        ; 00525c4d
    JL 0x00525c84                       ; 00525c4f
        ;   XREF to: 00525c84 (CONDITIONAL_JUMP)  ; LAB_00525c84
    CMP dword ptr [EBX + 0x18],0x0      ; 00525c51
        ;   Label: LAB_00525c51
    JNZ 0x00525c84                      ; 00525c55
        ;   XREF to: 00525c84 (CONDITIONAL_JUMP)  ; LAB_00525c84
    MOV ECX,dword ptr [EBX + 0x28]      ; 00525c57
    XOR EAX,EAX                         ; 00525c5a
    TEST ECX,ECX                        ; 00525c5c
    JLE 0x00525c78                      ; 00525c5e
        ;   XREF to: 00525c78 (CONDITIONAL_JUMP)  ; LAB_00525c78
    MOV EBP,dword ptr [EBX]             ; 00525c60
    PUSH EBP                            ; 00525c62
    PUSH 0x1                            ; 00525c63
    MOV EDX,ESI                         ; 00525c65
    MOV EAX,dword ptr [EBX + 0x4]       ; 00525c67
    PUSH 0x1                            ; 00525c6a
    ADD EAX,EDX                         ; 00525c6c
    PUSH EAX                            ; 00525c6e
    DEC ESI                             ; 00525c6f
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00525c70
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 00525c75
    CMP EAX,0x1                         ; 00525c78
        ;   Label: LAB_00525c78
    JNZ 0x00525cc4                      ; 00525c7b
        ;   XREF to: 00525cc4 (CONDITIONAL_JUMP)  ; LAB_00525cc4
    DEC dword ptr [EBX + 0x28]          ; 00525c7d
    TEST ESI,ESI                        ; 00525c80
        ;   Label: LAB_00525c80
    JGE 0x00525c51                      ; 00525c82
        ;   XREF to: 00525c51 (CONDITIONAL_JUMP)  ; LAB_00525c51
    MOV EAX,dword ptr [EDI + 0x8]       ; 00525c84
        ;   Label: LAB_00525c84
    DEC EAX                             ; 00525c87
    MOV dword ptr [EDI + 0x10],EAX      ; 00525c88
    POP ESI                             ; 00525c8b
    MOV EDX,dword ptr [EDI + 0x10]      ; 00525c8c
        ;   Label: LAB_00525c8c
    MOV EAX,dword ptr [EDI + 0x4]       ; 00525c8f
    ADD EAX,EDX                         ; 00525c92
    MOV EDX,dword ptr [EDI + 0x14]      ; 00525c94
    XOR EBX,EBX                         ; 00525c97
    DEC EDX                             ; 00525c99
    MOV BL,byte ptr [EAX]               ; 00525c9a
    MOV EAX,dword ptr [EDX*0x4 + 0x620690] ; 00525c9c | DAT_006206ac | DAT_00620690
    MOV CL,DL                           ; 00525ca3
    AND EAX,EBX                         ; 00525ca5
    MOV dword ptr [EDI + 0x14],EDX      ; 00525ca7
    SHR EAX,CL                          ; 00525caa
    POP EBP                             ; 00525cac
    POP EDI                             ; 00525cad
    POP EBX                             ; 00525cae
    RET                                 ; 00525caf
    CMP EBX,dword ptr [EDI + 0x18]      ; 00525cb0
        ;   Label: LAB_00525cb0
    JL 0x00525c10                       ; 00525cb3
        ;   XREF to: 00525c10 (CONDITIONAL_JUMP)  ; LAB_00525c10
    JMP 0x00525c8c                      ; 00525cb9
        ;   XREF to: 00525c8c (UNCONDITIONAL_JUMP)  ; LAB_00525c8c
    MOV dword ptr [EDI + 0x1c],0x1      ; 00525cbb
        ;   Label: LAB_00525cbb
    JMP 0x00525c8c                      ; 00525cc2
        ;   XREF to: 00525c8c (UNCONDITIONAL_JUMP)  ; LAB_00525c8c
    LEA EAX,[ESI + 0x1]                 ; 00525cc4
        ;   Label: LAB_00525cc4
    MOV dword ptr [EBX + 0x18],EAX      ; 00525cc7
    JMP 0x00525c80                      ; 00525cca
        ;   XREF to: 00525c80 (UNCONDITIONAL_JUMP)  ; LAB_00525c80

