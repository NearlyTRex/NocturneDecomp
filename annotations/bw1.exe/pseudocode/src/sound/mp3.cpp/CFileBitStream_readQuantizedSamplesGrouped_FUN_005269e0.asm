; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandScalefactors * Stack[0x8]:4   sample_array
; SMpegSubbandAllocation * Stack[0xc]:4   allocation_array
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b81e
;
; Called Functions:
;   sound_mp3.cpp_FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005269e0
        ;   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0
    PUSH ESI                            ; 005269e1
    PUSH EDI                            ; 005269e2
    PUSH EBP                            ; 005269e3
    SUB ESP,0x40                        ; 005269e4
    MOV EBP,dword ptr [ESP + 0x54]      ; 005269e7
    MOV EAX,dword ptr [ESP + 0x60]      ; 005269eb
    MOV EDX,dword ptr [EAX + 0x10]      ; 005269ef
    MOV dword ptr [ESP + 0x2c],EDX      ; 005269f2
    MOV EDX,dword ptr [EAX + 0x18]      ; 005269f6
    MOV dword ptr [ESP],EDX             ; 005269f9
    MOV EDX,dword ptr [EAX + 0x14]      ; 005269fc
    MOV ECX,dword ptr [ESP]             ; 005269ff
    MOV dword ptr [ESP + 0x14],EDX      ; 00526a02
    MOV EAX,dword ptr [EAX + 0x8]       ; 00526a06
    XOR EDX,EDX                         ; 00526a09
    MOV dword ptr [ESP + 0xc],EAX       ; 00526a0b
    MOV dword ptr [ESP + 0x24],EDX      ; 00526a0f
    TEST ECX,ECX                        ; 00526a13
    JLE 0x00526b24                      ; 00526a15
        ;   XREF to: 00526b24 (CONDITIONAL_JUMP)  ; LAB_00526b24
    MOV dword ptr [ESP + 0x4],EAX       ; 00526a1b
    MOV dword ptr [ESP + 0x8],EDX       ; 00526a1f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526a23
        ;   Label: LAB_00526a23
    MOV dword ptr [ESP + 0x28],EAX      ; 00526a27
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526a2b
    SHL EAX,0x8                         ; 00526a2f
    MOV dword ptr [ESP + 0x10],EAX      ; 00526a32
    MOV EAX,dword ptr [ESP + 0x4]       ; 00526a36
    MOV dword ptr [ESP + 0x3c],EAX      ; 00526a3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526a3e
    MOV dword ptr [ESP + 0x20],EAX      ; 00526a42
    MOV dword ptr [ESP + 0x18],EAX      ; 00526a46
    MOV dword ptr [ESP + 0x1c],EAX      ; 00526a4a
    MOV EAX,dword ptr [ESP + 0x58]      ; 00526a4e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00526a52
    MOV dword ptr [ESP + 0x38],EAX      ; 00526a56
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526a5a
    XOR ESI,ESI                         ; 00526a5e
    ADD EAX,EDI                         ; 00526a60
    MOV dword ptr [ESP + 0x30],ESI      ; 00526a62
    MOV dword ptr [ESP + 0x34],EAX      ; 00526a66
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526a6a
        ;   Label: LAB_00526a6a
    CMP EAX,dword ptr [ESP + 0x14]      ; 00526a6e
    JGE 0x00526b7f                      ; 00526a72
        ;   XREF to: 00526b7f (CONDITIONAL_JUMP)  ; LAB_00526b7f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00526a78
    MOV ECX,dword ptr [ESP + 0x30]      ; 00526a7c
        ;   Label: LAB_00526a7c
    CMP EAX,ECX                         ; 00526a80
    JLE 0x00526af7                      ; 00526a82
        ;   XREF to: 00526af7 (CONDITIONAL_JUMP)  ; LAB_00526af7
    MOV EAX,ECX                         ; 00526a84
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00526a86
    SHL EAX,0x7                         ; 00526a8a
    ADD ECX,EAX                         ; 00526a8d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00526a8f
    MOV EBX,dword ptr [EAX]             ; 00526a93
    TEST EBX,EBX                        ; 00526a95
    JNZ 0x00526b89                      ; 00526a97
        ;   XREF to: 00526b89 (CONDITIONAL_JUMP)  ; LAB_00526b89
    MOV EBX,dword ptr [ESP + 0x18]      ; 00526a9d
    MOV ECX,dword ptr [ESP + 0x18]      ; 00526aa1
    MOV ESI,dword ptr [ESP + 0x38]      ; 00526aa5
    ADD EBX,0x180                       ; 00526aa9
    ADD ECX,ESI                         ; 00526aaf
    ADD EBX,ESI                         ; 00526ab1
    MOV dword ptr [ECX],0x0             ; 00526ab3
        ;   Label: LAB_00526ab3
    ADD ECX,0x80                        ; 00526ab9
    CMP ECX,EBX                         ; 00526abf
    JNZ 0x00526ab3                      ; 00526ac1
        ;   XREF to: 00526ab3 (CONDITIONAL_JUMP)  ; LAB_00526ab3
    CMP dword ptr [ESP + 0x2c],0x2      ; 00526ac3
        ;   Label: LAB_00526ac3
    JZ 0x00526c30                       ; 00526ac8
        ;   XREF to: 00526c30 (CONDITIONAL_JUMP)  ; LAB_00526c30
    MOV EDX,dword ptr [ESP + 0x34]      ; 00526ace
        ;   Label: LAB_00526ace
    MOV ECX,dword ptr [ESP + 0x30]      ; 00526ad2
    MOV EAX,dword ptr [ESP + 0x38]      ; 00526ad6
    ADD EDX,0x80                        ; 00526ada
    INC ECX                             ; 00526ae0
    ADD EAX,0x180                       ; 00526ae1
    MOV dword ptr [ESP + 0x34],EDX      ; 00526ae6
    MOV dword ptr [ESP + 0x30],ECX      ; 00526aea
    MOV dword ptr [ESP + 0x38],EAX      ; 00526aee
    JMP 0x00526a6a                      ; 00526af2
        ;   XREF to: 00526a6a (UNCONDITIONAL_JUMP)  ; LAB_00526a6a
    MOV EBX,dword ptr [ESP + 0x8]       ; 00526af7
        ;   Label: LAB_00526af7
    MOV ESI,dword ptr [ESP + 0x4]       ; 00526afb
    MOV EDI,dword ptr [ESP + 0x24]      ; 00526aff
    MOV EDX,dword ptr [ESP]             ; 00526b03
    ADD EBX,0x4                         ; 00526b06
    ADD ESI,0x100                       ; 00526b09
    INC EDI                             ; 00526b0f
    MOV dword ptr [ESP + 0x8],EBX       ; 00526b10
    MOV dword ptr [ESP + 0x4],ESI       ; 00526b14
    MOV dword ptr [ESP + 0x24],EDI      ; 00526b18
    CMP EDI,EDX                         ; 00526b1c
    JL 0x00526a23                       ; 00526b1e
        ;   XREF to: 00526a23 (CONDITIONAL_JUMP)  ; LAB_00526a23
    MOV ECX,dword ptr [ESP]             ; 00526b24
        ;   Label: LAB_00526b24
    CMP ECX,0x20                        ; 00526b27
    JGE 0x00526b77                      ; 00526b2a
        ;   XREF to: 00526b77 (CONDITIONAL_JUMP)  ; LAB_00526b77
    LEA EDI,[ECX*0x4 + 0x0]             ; 00526b2c
    XOR EBP,EBP                         ; 00526b33
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00526b35
        ;   Label: LAB_00526b35
    MOV EDX,EBP                         ; 00526b39
    CMP EBP,EBX                         ; 00526b3b
    JGE 0x00526b6c                      ; 00526b3d
        ;   XREF to: 00526b6c (CONDITIONAL_JUMP)  ; LAB_00526b6c
    MOV EBX,EDI                         ; 00526b3f
    IMUL EAX,EDX,0x180                  ; 00526b41
        ;   Label: LAB_00526b41
    ADD EAX,dword ptr [ESP + 0x58]      ; 00526b47
    LEA ECX,[EBX + EAX*0x1]             ; 00526b4b
    LEA ESI,[EBX + 0x180]               ; 00526b4e
    ADD EAX,ESI                         ; 00526b54
    ADD ECX,0x80                        ; 00526b56
        ;   Label: LAB_00526b56
    MOV dword ptr [ECX + -0x80],EBP     ; 00526b5c
    CMP ECX,EAX                         ; 00526b5f
    JNZ 0x00526b56                      ; 00526b61
        ;   XREF to: 00526b56 (CONDITIONAL_JUMP)  ; LAB_00526b56
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00526b63
    INC EDX                             ; 00526b67
    CMP EDX,ESI                         ; 00526b68
    JL 0x00526b41                       ; 00526b6a
        ;   XREF to: 00526b41 (CONDITIONAL_JUMP)  ; LAB_00526b41
    ADD EDI,0x4                         ; 00526b6c
        ;   Label: LAB_00526b6c
    CMP EDI,0x80                        ; 00526b6f
    JL 0x00526b35                       ; 00526b75
        ;   XREF to: 00526b35 (CONDITIONAL_JUMP)  ; LAB_00526b35
    ADD ESP,0x40                        ; 00526b77
        ;   Label: LAB_00526b77
    POP EBP                             ; 00526b7a
    POP EDI                             ; 00526b7b
    POP ESI                             ; 00526b7c
    POP EBX                             ; 00526b7d
    RET                                 ; 00526b7e
    MOV EAX,0x1                         ; 00526b7f
        ;   Label: LAB_00526b7f
    JMP 0x00526a7c                      ; 00526b84
        ;   XREF to: 00526a7c (UNCONDITIONAL_JUMP)  ; LAB_00526a7c
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526b89
        ;   Label: LAB_00526b89
    MOV EAX,EBX                         ; 00526b8d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00526b8f
    SHL EAX,0x4                         ; 00526b93
    ADD EDX,EBX                         ; 00526b96
    ADD EAX,EDX                         ; 00526b98
    CMP dword ptr [EAX + 0x8],0x3       ; 00526b9a
    JNZ 0x00526be6                      ; 00526b9e
        ;   XREF to: 00526be6 (CONDITIONAL_JUMP)  ; LAB_00526be6
    MOV EBX,dword ptr [ESP + 0x28]      ; 00526ba0
    MOV EDX,dword ptr [ESP + 0x38]      ; 00526ba4
    MOV EDI,dword ptr [ESP + 0x28]      ; 00526ba8
    MOV ESI,dword ptr [ESP + 0x28]      ; 00526bac
    ADD EDI,0x180                       ; 00526bb0
    ADD EBX,EDX                         ; 00526bb6
    ADD ESI,ECX                         ; 00526bb8
    ADD EDI,EDX                         ; 00526bba
    MOV EAX,dword ptr [ESI]             ; 00526bbc
        ;   Label: LAB_00526bbc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00526bbe
    SHL EAX,0x4                         ; 00526bc2
    ADD EAX,EDX                         ; 00526bc5
    MOV EAX,dword ptr [EAX + 0x4]       ; 00526bc7
    PUSH EAX                            ; 00526bca
    PUSH EBP                            ; 00526bcb
    ADD EBX,0x80                        ; 00526bcc
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00526bd2
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00526bd7
    MOV dword ptr [EBX + -0x80],EAX     ; 00526bda
    CMP EBX,EDI                         ; 00526bdd
    JNZ 0x00526bbc                      ; 00526bdf
        ;   XREF to: 00526bbc (CONDITIONAL_JUMP)  ; LAB_00526bbc
    JMP 0x00526ac3                      ; 00526be1
        ;   XREF to: 00526ac3 (UNCONDITIONAL_JUMP)  ; LAB_00526ac3
    MOV ESI,dword ptr [EAX]             ; 00526be6
        ;   Label: LAB_00526be6
    MOV EAX,dword ptr [EAX + 0x4]       ; 00526be8
    PUSH EAX                            ; 00526beb
    PUSH EBP                            ; 00526bec
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00526bed
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00526bf2
    MOV EBX,dword ptr [ESP + 0x20]      ; 00526bf5
    MOV EDI,dword ptr [ESP + 0x38]      ; 00526bf9
    MOV ECX,EAX                         ; 00526bfd
    ADD EBX,EDI                         ; 00526bff
    MOV EDI,dword ptr [ESP + 0x20]      ; 00526c01
    MOV EAX,dword ptr [ESP + 0x38]      ; 00526c05
    ADD EDI,0x180                       ; 00526c09
    ADD EDI,EAX                         ; 00526c0f
    MOV EAX,ECX                         ; 00526c11
        ;   Label: LAB_00526c11
    XOR EDX,EDX                         ; 00526c13
    DIV ESI                             ; 00526c15
    MOV EAX,ECX                         ; 00526c17
    MOV dword ptr [EBX],EDX             ; 00526c19
    XOR EDX,EDX                         ; 00526c1b
    DIV ESI                             ; 00526c1d
    ADD EBX,0x80                        ; 00526c1f
    MOV ECX,EAX                         ; 00526c25
    CMP EBX,EDI                         ; 00526c27
    JNZ 0x00526c11                      ; 00526c29
        ;   XREF to: 00526c11 (CONDITIONAL_JUMP)  ; LAB_00526c11
    JMP 0x00526ac3                      ; 00526c2b
        ;   XREF to: 00526ac3 (UNCONDITIONAL_JUMP)  ; LAB_00526ac3
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526c30
        ;   Label: LAB_00526c30
    CMP EAX,dword ptr [ESP + 0x14]      ; 00526c34
    JL 0x00526ace                       ; 00526c38
        ;   XREF to: 00526ace (CONDITIONAL_JUMP)  ; LAB_00526ace
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00526c3e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00526c42
    MOV ESI,dword ptr [ESP + 0x58]      ; 00526c46
    ADD EDX,0x180                       ; 00526c4a
    ADD ECX,ESI                         ; 00526c50
    ADD EDX,ESI                         ; 00526c52
    ADD ECX,0x80                        ; 00526c54
        ;   Label: LAB_00526c54
    MOV EAX,dword ptr [ECX + -0x80]     ; 00526c5a
    MOV dword ptr [ECX + 0x100],EAX     ; 00526c5d
    CMP ECX,EDX                         ; 00526c63
    JZ 0x00526ace                       ; 00526c65
        ;   XREF to: 00526ace (CONDITIONAL_JUMP)  ; LAB_00526ace
    JMP 0x00526c54                      ; 00526c6b
        ;   XREF to: 00526c54 (UNCONDITIONAL_JUMP)  ; LAB_00526c54

