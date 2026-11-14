; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_004fde40(CFileBitStream *this_ptr,uint *output_array,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   output_array
; SMpegFrame *     Stack[0xc]:4   frame
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00502dfd
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fde40
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004fde40
    PUSH ESI                            ; 004fde41
    PUSH EDI                            ; 004fde42
    PUSH EBP                            ; 004fde43
    SUB ESP,0xc                         ; 004fde44
    MOV EBP,dword ptr [ESP + 0x20]      ; 004fde47
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fde4b
    MOV EDI,dword ptr [EAX + 0x10]      ; 004fde4f
    MOV EAX,dword ptr [EAX + 0x14]      ; 004fde52
    MOV dword ptr [ESP],EAX             ; 004fde55
    TEST EAX,EAX                        ; 004fde58
    JLE 0x004fdea6                      ; 004fde5a
        ;   XREF to: 004fdea6 (CONDITIONAL_JUMP)  ; LAB_004fdea6
    XOR EAX,EAX                         ; 004fde5c
    MOV dword ptr [ESP + 0x8],EAX       ; 004fde5e
    MOV EAX,dword ptr [ESP]             ; 004fde62
    SHL EAX,0x2                         ; 004fde65
    MOV dword ptr [ESP + 0x4],EAX       ; 004fde68
    XOR EBX,EBX                         ; 004fde6c
        ;   Label: LAB_004fde6c
    TEST EDI,EDI                        ; 004fde6e
    JLE 0x004fde93                      ; 004fde70
        ;   XREF to: 004fde93 (CONDITIONAL_JUMP)  ; LAB_004fde93
    MOV ESI,dword ptr [ESP + 0x8]       ; 004fde72
    ADD ESI,dword ptr [ESP + 0x24]      ; 004fde76
    PUSH 0x4                            ; 004fde7a
        ;   Label: LAB_004fde7a
    PUSH EBP                            ; 004fde7c
    ADD ESI,0x80                        ; 004fde7d
    INC EBX                             ; 004fde83
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0 ; 004fde84
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fde89
    MOV dword ptr [ESI + -0x80],EAX     ; 004fde8c
    CMP EBX,EDI                         ; 004fde8f
    JL 0x004fde7a                       ; 004fde91
        ;   XREF to: 004fde7a (CONDITIONAL_JUMP)  ; LAB_004fde7a
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fde93
        ;   Label: LAB_004fde93
    ADD ECX,0x4                         ; 004fde97
    MOV EBX,dword ptr [ESP + 0x4]       ; 004fde9a
    MOV dword ptr [ESP + 0x8],ECX       ; 004fde9e
    CMP ECX,EBX                         ; 004fdea2
    JL 0x004fde6c                       ; 004fdea4
        ;   XREF to: 004fde6c (CONDITIONAL_JUMP)  ; LAB_004fde6c
    MOV ESI,dword ptr [ESP]             ; 004fdea6
        ;   Label: LAB_004fdea6
    CMP ESI,0x20                        ; 004fdea9
    JGE 0x004fdee3                      ; 004fdeac
        ;   XREF to: 004fdee3 (CONDITIONAL_JUMP)  ; LAB_004fdee3
    SHL ESI,0x2                         ; 004fdeae
    PUSH 0x4                            ; 004fdeb1
        ;   Label: LAB_004fdeb1
    PUSH EBP                            ; 004fdeb3
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0 ; 004fdeb4
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdeb9
    MOV EBX,EAX                         ; 004fdebc
    XOR EAX,EAX                         ; 004fdebe
    TEST EDI,EDI                        ; 004fdec0
    JLE 0x004fded8                      ; 004fdec2
        ;   XREF to: 004fded8 (CONDITIONAL_JUMP)  ; LAB_004fded8
    MOV EDX,dword ptr [ESP + 0x24]      ; 004fdec4
    ADD EDX,ESI                         ; 004fdec8
    ADD EDX,0x80                        ; 004fdeca
        ;   Label: LAB_004fdeca
    INC EAX                             ; 004fded0
    MOV dword ptr [EDX + -0x80],EBX     ; 004fded1
    CMP EAX,EDI                         ; 004fded4
    JL 0x004fdeca                       ; 004fded6
        ;   XREF to: 004fdeca (CONDITIONAL_JUMP)  ; LAB_004fdeca
    ADD ESI,0x4                         ; 004fded8
        ;   Label: LAB_004fded8
    CMP ESI,0x80                        ; 004fdedb
    JL 0x004fdeb1                       ; 004fdee1
        ;   XREF to: 004fdeb1 (CONDITIONAL_JUMP)  ; LAB_004fdeb1
    ADD ESP,0xc                         ; 004fdee3
        ;   Label: LAB_004fdee3
    POP EBP                             ; 004fdee6
    POP EDI                             ; 004fdee7
    POP ESI                             ; 004fdee8
    POP EBX                             ; 004fdee9
    RET                                 ; 004fdeea

