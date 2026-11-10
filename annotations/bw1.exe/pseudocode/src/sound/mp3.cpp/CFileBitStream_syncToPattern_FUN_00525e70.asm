; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_00525e70(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sync_pattern
; uint             Stack[0xc]:4   pattern_bits
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b4af
;   sound_mp3.cpp_FUN_0052af80 at 0052b054
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525e70
        ;   Label: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70
    PUSH ESI                            ; 00525e71
    PUSH EDI                            ; 00525e72
    PUSH EBP                            ; 00525e73
    MOV ESI,dword ptr [ESP + 0x14]      ; 00525e74
    MOV EBP,dword ptr [ESP + 0x18]      ; 00525e78
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00525e7c
    MOV EDI,0x2                         ; 00525e80
    MOV CL,BL                           ; 00525e85
    SHL EDI,CL                          ; 00525e87
    MOV EAX,dword ptr [ESI + 0xc]       ; 00525e89
    DEC EDI                             ; 00525e8c
    AND EAX,0x7                         ; 00525e8d
    JNZ 0x00525ebf                      ; 00525e90
        ;   XREF to: 00525ebf (CONDITIONAL_JUMP)  ; LAB_00525ebf
    PUSH EBX                            ; 00525e92
        ;   Label: LAB_00525e92
    PUSH ESI                            ; 00525e93
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00525e94
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00525e99
    MOV EBX,EAX                         ; 00525e9c
    MOV EAX,EBX                         ; 00525e9e
        ;   Label: LAB_00525e9e
    AND EAX,EDI                         ; 00525ea0
    CMP EAX,EBP                         ; 00525ea2
    JZ 0x00525ead                       ; 00525ea4
        ;   XREF to: 00525ead (CONDITIONAL_JUMP)  ; LAB_00525ead
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00525ea6
    TEST EAX,EAX                        ; 00525ea9
    JZ 0x00525ed2                       ; 00525eab
        ;   XREF to: 00525ed2 (CONDITIONAL_JUMP)  ; LAB_00525ed2
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00525ead
        ;   Label: LAB_00525ead
    TEST EAX,EAX                        ; 00525eb0
    SETZ AL                             ; 00525eb2
    AND EAX,0xff                        ; 00525eb5
    POP EBP                             ; 00525eba
    POP EDI                             ; 00525ebb
    POP ESI                             ; 00525ebc
    POP EBX                             ; 00525ebd
    RET                                 ; 00525ebe
    MOV EDX,0x8                         ; 00525ebf
        ;   Label: LAB_00525ebf
    SUB EDX,EAX                         ; 00525ec4
    PUSH EDX                            ; 00525ec6
    PUSH ESI                            ; 00525ec7
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00525ec8
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00525ecd
    JMP 0x00525e92                      ; 00525ed0
        ;   XREF to: 00525e92 (UNCONDITIONAL_JUMP)  ; LAB_00525e92
    PUSH 0x8                            ; 00525ed2
        ;   Label: LAB_00525ed2
    PUSH ESI                            ; 00525ed4
    SHL EBX,0x8                         ; 00525ed5
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00525ed8
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00525edd
    OR EBX,EAX                          ; 00525ee0
    JMP 0x00525e9e                      ; 00525ee2
        ;   XREF to: 00525e9e (UNCONDITIONAL_JUMP)  ; LAB_00525e9e

