; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_0052f0e0(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sync_pattern
; uint             Stack[0xc]:4   pattern_bits
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f0e0
        ;   Label: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_0052f0e0
    PUSH ESI                            ; 0052f0e1
    PUSH EDI                            ; 0052f0e2
    PUSH EBP                            ; 0052f0e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052f0e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052f0e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052f0ec
    MOV EDI,0x2                         ; 0052f0f0
    MOV CL,BL                           ; 0052f0f5
    SHL EDI,CL                          ; 0052f0f7
    MOV EAX,dword ptr [ESI + 0xc]       ; 0052f0f9
    DEC EDI                             ; 0052f0fc
    AND EAX,0x7                         ; 0052f0fd
    JNZ 0x0052f12f                      ; 0052f100
        ;   XREF to: 0052f12f (CONDITIONAL_JUMP)  ; LAB_0052f12f
    PUSH EBX                            ; 0052f102
        ;   Label: LAB_0052f102
    PUSH ESI                            ; 0052f103
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f104
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f109
    MOV EBX,EAX                         ; 0052f10c
    MOV EAX,EBX                         ; 0052f10e
        ;   Label: LAB_0052f10e
    AND EAX,EDI                         ; 0052f110
    CMP EAX,EBP                         ; 0052f112
    JZ 0x0052f11d                       ; 0052f114
        ;   XREF to: 0052f11d (CONDITIONAL_JUMP)  ; LAB_0052f11d
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0052f116
    TEST EAX,EAX                        ; 0052f119
    JZ 0x0052f142                       ; 0052f11b
        ;   XREF to: 0052f142 (CONDITIONAL_JUMP)  ; LAB_0052f142
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0052f11d
        ;   Label: LAB_0052f11d
    TEST EAX,EAX                        ; 0052f120
    SETZ AL                             ; 0052f122
    AND EAX,0xff                        ; 0052f125
    POP EBP                             ; 0052f12a
    POP EDI                             ; 0052f12b
    POP ESI                             ; 0052f12c
    POP EBX                             ; 0052f12d
    RET                                 ; 0052f12e
    MOV EDX,0x8                         ; 0052f12f
        ;   Label: LAB_0052f12f
    SUB EDX,EAX                         ; 0052f134
    PUSH EDX                            ; 0052f136
    PUSH ESI                            ; 0052f137
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f138
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f13d
    JMP 0x0052f102                      ; 0052f140
        ;   XREF to: 0052f102 (UNCONDITIONAL_JUMP)  ; LAB_0052f102
    PUSH 0x8                            ; 0052f142
        ;   Label: LAB_0052f142
    PUSH ESI                            ; 0052f144
    SHL EBX,0x8                         ; 0052f145
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f148
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f14d
    OR EBX,EAX                          ; 0052f150
    JMP 0x0052f10e                      ; 0052f152
        ;   XREF to: 0052f10e (UNCONDITIONAL_JUMP)  ; LAB_0052f10e

