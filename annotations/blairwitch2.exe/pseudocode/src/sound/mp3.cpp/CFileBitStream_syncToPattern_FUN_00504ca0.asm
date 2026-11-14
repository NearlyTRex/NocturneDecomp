; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_00504ca0(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sync_pattern
; uint             Stack[0xc]:4   pattern_bits
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a2df
;   sound_mp3.cpp_FUN_00509db0 at 00509e84
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504ca0
        ;   Label: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00504ca0
    PUSH ESI                            ; 00504ca1
    PUSH EDI                            ; 00504ca2
    PUSH EBP                            ; 00504ca3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00504ca4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00504ca8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00504cac
    MOV EDI,0x2                         ; 00504cb0
    MOV CL,BL                           ; 00504cb5
    SHL EDI,CL                          ; 00504cb7
    MOV EAX,dword ptr [ESI + 0xc]       ; 00504cb9
    DEC EDI                             ; 00504cbc
    AND EAX,0x7                         ; 00504cbd
    JNZ 0x00504cef                      ; 00504cc0
        ;   XREF to: 00504cef (CONDITIONAL_JUMP)  ; LAB_00504cef
    PUSH EBX                            ; 00504cc2
        ;   Label: LAB_00504cc2
    PUSH ESI                            ; 00504cc3
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00 ; 00504cc4
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00504cc9
    MOV EBX,EAX                         ; 00504ccc
    MOV EAX,EBX                         ; 00504cce
        ;   Label: LAB_00504cce
    AND EAX,EDI                         ; 00504cd0
    CMP EAX,EBP                         ; 00504cd2
    JZ 0x00504cdd                       ; 00504cd4
        ;   XREF to: 00504cdd (CONDITIONAL_JUMP)  ; LAB_00504cdd
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00504cd6
    TEST EAX,EAX                        ; 00504cd9
    JZ 0x00504d02                       ; 00504cdb
        ;   XREF to: 00504d02 (CONDITIONAL_JUMP)  ; LAB_00504d02
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00504cdd
        ;   Label: LAB_00504cdd
    TEST EAX,EAX                        ; 00504ce0
    SETZ AL                             ; 00504ce2
    AND EAX,0xff                        ; 00504ce5
    POP EBP                             ; 00504cea
    POP EDI                             ; 00504ceb
    POP ESI                             ; 00504cec
    POP EBX                             ; 00504ced
    RET                                 ; 00504cee
    MOV EDX,0x8                         ; 00504cef
        ;   Label: LAB_00504cef
    SUB EDX,EAX                         ; 00504cf4
    PUSH EDX                            ; 00504cf6
    PUSH ESI                            ; 00504cf7
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00 ; 00504cf8
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00504cfd
    JMP 0x00504cc2                      ; 00504d00
        ;   XREF to: 00504cc2 (UNCONDITIONAL_JUMP)  ; LAB_00504cc2
    PUSH 0x8                            ; 00504d02
        ;   Label: LAB_00504d02
    PUSH ESI                            ; 00504d04
    SHL EBX,0x8                         ; 00504d05
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00 ; 00504d08
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00504d0d
    OR EBX,EAX                          ; 00504d10
    JMP 0x00504cce                      ; 00504d12
        ;   XREF to: 00504cce (UNCONDITIONAL_JUMP)  ; LAB_00504cce

