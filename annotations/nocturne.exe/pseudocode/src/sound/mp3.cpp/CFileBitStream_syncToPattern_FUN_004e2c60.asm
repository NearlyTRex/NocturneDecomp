; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004e2c60(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sync_pattern
; uint             Stack[0xc]:4   pattern_bits
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2c60
        ;   Label: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004e2c60
    PUSH ESI                            ; 004e2c61
    PUSH EDI                            ; 004e2c62
    PUSH EBP                            ; 004e2c63
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e2c64
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e2c68
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e2c6c
    MOV EDI,0x2                         ; 004e2c70
    MOV CL,BL                           ; 004e2c75
    SHL EDI,CL                          ; 004e2c77
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e2c79
    DEC EDI                             ; 004e2c7c
    AND EAX,0x7                         ; 004e2c7d
    JNZ 0x004e2caf                      ; 004e2c80
        ;   XREF to: 004e2caf (CONDITIONAL_JUMP)  ; LAB_004e2caf
    PUSH EBX                            ; 004e2c82
        ;   Label: LAB_004e2c82
    PUSH ESI                            ; 004e2c83
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e2c84
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004e2c89
    MOV EBX,EAX                         ; 004e2c8c
    MOV EAX,EBX                         ; 004e2c8e
        ;   Label: LAB_004e2c8e
    AND EAX,EDI                         ; 004e2c90
    CMP EAX,EBP                         ; 004e2c92
    JZ 0x004e2c9d                       ; 004e2c94
        ;   XREF to: 004e2c9d (CONDITIONAL_JUMP)  ; LAB_004e2c9d
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e2c96
    TEST EAX,EAX                        ; 004e2c99
    JZ 0x004e2cc2                       ; 004e2c9b
        ;   XREF to: 004e2cc2 (CONDITIONAL_JUMP)  ; LAB_004e2cc2
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e2c9d
        ;   Label: LAB_004e2c9d
    TEST EAX,EAX                        ; 004e2ca0
    SETZ AL                             ; 004e2ca2
    AND EAX,0xff                        ; 004e2ca5
    POP EBP                             ; 004e2caa
    POP EDI                             ; 004e2cab
    POP ESI                             ; 004e2cac
    POP EBX                             ; 004e2cad
    RET                                 ; 004e2cae
    MOV EDX,0x8                         ; 004e2caf
        ;   Label: LAB_004e2caf
    SUB EDX,EAX                         ; 004e2cb4
    PUSH EDX                            ; 004e2cb6
    PUSH ESI                            ; 004e2cb7
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e2cb8
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004e2cbd
    JMP 0x004e2c82                      ; 004e2cc0
        ;   XREF to: 004e2c82 (UNCONDITIONAL_JUMP)  ; LAB_004e2c82
    PUSH 0x8                            ; 004e2cc2
        ;   Label: LAB_004e2cc2
    PUSH ESI                            ; 004e2cc4
    SHL EBX,0x8                         ; 004e2cc5
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e2cc8
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004e2ccd
    OR EBX,EAX                          ; 004e2cd0
    JMP 0x004e2c8e                      ; 004e2cd2
        ;   XREF to: 004e2c8e (UNCONDITIONAL_JUMP)  ; LAB_004e2c8e

