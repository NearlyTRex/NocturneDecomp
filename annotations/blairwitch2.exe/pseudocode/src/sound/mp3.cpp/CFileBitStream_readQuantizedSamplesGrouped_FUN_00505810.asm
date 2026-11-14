; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_00505810(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a64e
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505810
        ;   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_00505810
    PUSH ESI                            ; 00505811
    PUSH EDI                            ; 00505812
    PUSH EBP                            ; 00505813
    SUB ESP,0x40                        ; 00505814
    MOV EBP,dword ptr [ESP + 0x54]      ; 00505817
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050581b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0050581f
    MOV dword ptr [ESP + 0x2c],EDX      ; 00505822
    MOV EDX,dword ptr [EAX + 0x18]      ; 00505826
    MOV dword ptr [ESP],EDX             ; 00505829
    MOV EDX,dword ptr [EAX + 0x14]      ; 0050582c
    MOV ECX,dword ptr [ESP]             ; 0050582f
    MOV dword ptr [ESP + 0x14],EDX      ; 00505832
    MOV EAX,dword ptr [EAX + 0x8]       ; 00505836
    XOR EDX,EDX                         ; 00505839
    MOV dword ptr [ESP + 0xc],EAX       ; 0050583b
    MOV dword ptr [ESP + 0x24],EDX      ; 0050583f
    TEST ECX,ECX                        ; 00505843
    JLE 0x00505954                      ; 00505845
        ;   XREF to: 00505954 (CONDITIONAL_JUMP)  ; LAB_00505954
    MOV dword ptr [ESP + 0x4],EAX       ; 0050584b
    MOV dword ptr [ESP + 0x8],EDX       ; 0050584f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505853
        ;   Label: LAB_00505853
    MOV dword ptr [ESP + 0x28],EAX      ; 00505857
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050585b
    SHL EAX,0x8                         ; 0050585f
    MOV dword ptr [ESP + 0x10],EAX      ; 00505862
    MOV EAX,dword ptr [ESP + 0x4]       ; 00505866
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050586a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050586e
    MOV dword ptr [ESP + 0x20],EAX      ; 00505872
    MOV dword ptr [ESP + 0x18],EAX      ; 00505876
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050587a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050587e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00505882
    MOV dword ptr [ESP + 0x38],EAX      ; 00505886
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050588a
    XOR ESI,ESI                         ; 0050588e
    ADD EAX,EDI                         ; 00505890
    MOV dword ptr [ESP + 0x30],ESI      ; 00505892
    MOV dword ptr [ESP + 0x34],EAX      ; 00505896
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050589a
        ;   Label: LAB_0050589a
    CMP EAX,dword ptr [ESP + 0x14]      ; 0050589e
    JGE 0x005059af                      ; 005058a2
        ;   XREF to: 005059af (CONDITIONAL_JUMP)  ; LAB_005059af
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005058a8
    MOV ECX,dword ptr [ESP + 0x30]      ; 005058ac
        ;   Label: LAB_005058ac
    CMP EAX,ECX                         ; 005058b0
    JLE 0x00505927                      ; 005058b2
        ;   XREF to: 00505927 (CONDITIONAL_JUMP)  ; LAB_00505927
    MOV EAX,ECX                         ; 005058b4
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005058b6
    SHL EAX,0x7                         ; 005058ba
    ADD ECX,EAX                         ; 005058bd
    MOV EAX,dword ptr [ESP + 0x34]      ; 005058bf
    MOV EBX,dword ptr [EAX]             ; 005058c3
    TEST EBX,EBX                        ; 005058c5
    JNZ 0x005059b9                      ; 005058c7
        ;   XREF to: 005059b9 (CONDITIONAL_JUMP)  ; LAB_005059b9
    MOV EBX,dword ptr [ESP + 0x18]      ; 005058cd
    MOV ECX,dword ptr [ESP + 0x18]      ; 005058d1
    MOV ESI,dword ptr [ESP + 0x38]      ; 005058d5
    ADD EBX,0x180                       ; 005058d9
    ADD ECX,ESI                         ; 005058df
    ADD EBX,ESI                         ; 005058e1
    MOV dword ptr [ECX],0x0             ; 005058e3
        ;   Label: LAB_005058e3
    ADD ECX,0x80                        ; 005058e9
    CMP ECX,EBX                         ; 005058ef
    JNZ 0x005058e3                      ; 005058f1
        ;   XREF to: 005058e3 (CONDITIONAL_JUMP)  ; LAB_005058e3
    CMP dword ptr [ESP + 0x2c],0x2      ; 005058f3
        ;   Label: LAB_005058f3
    JZ 0x00505a60                       ; 005058f8
        ;   XREF to: 00505a60 (CONDITIONAL_JUMP)  ; LAB_00505a60
    MOV EDX,dword ptr [ESP + 0x34]      ; 005058fe
        ;   Label: LAB_005058fe
    MOV ECX,dword ptr [ESP + 0x30]      ; 00505902
    MOV EAX,dword ptr [ESP + 0x38]      ; 00505906
    ADD EDX,0x80                        ; 0050590a
    INC ECX                             ; 00505910
    ADD EAX,0x180                       ; 00505911
    MOV dword ptr [ESP + 0x34],EDX      ; 00505916
    MOV dword ptr [ESP + 0x30],ECX      ; 0050591a
    MOV dword ptr [ESP + 0x38],EAX      ; 0050591e
    JMP 0x0050589a                      ; 00505922
        ;   XREF to: 0050589a (UNCONDITIONAL_JUMP)  ; LAB_0050589a
    MOV EBX,dword ptr [ESP + 0x8]       ; 00505927
        ;   Label: LAB_00505927
    MOV ESI,dword ptr [ESP + 0x4]       ; 0050592b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0050592f
    MOV EDX,dword ptr [ESP]             ; 00505933
    ADD EBX,0x4                         ; 00505936
    ADD ESI,0x100                       ; 00505939
    INC EDI                             ; 0050593f
    MOV dword ptr [ESP + 0x8],EBX       ; 00505940
    MOV dword ptr [ESP + 0x4],ESI       ; 00505944
    MOV dword ptr [ESP + 0x24],EDI      ; 00505948
    CMP EDI,EDX                         ; 0050594c
    JL 0x00505853                       ; 0050594e
        ;   XREF to: 00505853 (CONDITIONAL_JUMP)  ; LAB_00505853
    MOV ECX,dword ptr [ESP]             ; 00505954
        ;   Label: LAB_00505954
    CMP ECX,0x20                        ; 00505957
    JGE 0x005059a7                      ; 0050595a
        ;   XREF to: 005059a7 (CONDITIONAL_JUMP)  ; LAB_005059a7
    LEA EDI,[ECX*0x4 + 0x0]             ; 0050595c
    XOR EBP,EBP                         ; 00505963
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00505965
        ;   Label: LAB_00505965
    MOV EDX,EBP                         ; 00505969
    CMP EBP,EBX                         ; 0050596b
    JGE 0x0050599c                      ; 0050596d
        ;   XREF to: 0050599c (CONDITIONAL_JUMP)  ; LAB_0050599c
    MOV EBX,EDI                         ; 0050596f
    IMUL EAX,EDX,0x180                  ; 00505971
        ;   Label: LAB_00505971
    ADD EAX,dword ptr [ESP + 0x58]      ; 00505977
    LEA ECX,[EBX + EAX*0x1]             ; 0050597b
    LEA ESI,[EBX + 0x180]               ; 0050597e
    ADD EAX,ESI                         ; 00505984
    ADD ECX,0x80                        ; 00505986
        ;   Label: LAB_00505986
    MOV dword ptr [ECX + -0x80],EBP     ; 0050598c
    CMP ECX,EAX                         ; 0050598f
    JNZ 0x00505986                      ; 00505991
        ;   XREF to: 00505986 (CONDITIONAL_JUMP)  ; LAB_00505986
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00505993
    INC EDX                             ; 00505997
    CMP EDX,ESI                         ; 00505998
    JL 0x00505971                       ; 0050599a
        ;   XREF to: 00505971 (CONDITIONAL_JUMP)  ; LAB_00505971
    ADD EDI,0x4                         ; 0050599c
        ;   Label: LAB_0050599c
    CMP EDI,0x80                        ; 0050599f
    JL 0x00505965                       ; 005059a5
        ;   XREF to: 00505965 (CONDITIONAL_JUMP)  ; LAB_00505965
    ADD ESP,0x40                        ; 005059a7
        ;   Label: LAB_005059a7
    POP EBP                             ; 005059aa
    POP EDI                             ; 005059ab
    POP ESI                             ; 005059ac
    POP EBX                             ; 005059ad
    RET                                 ; 005059ae
    MOV EAX,0x1                         ; 005059af
        ;   Label: LAB_005059af
    JMP 0x005058ac                      ; 005059b4
        ;   XREF to: 005058ac (UNCONDITIONAL_JUMP)  ; LAB_005058ac
    MOV EDX,dword ptr [ESP + 0xc]       ; 005059b9
        ;   Label: LAB_005059b9
    MOV EAX,EBX                         ; 005059bd
    MOV EBX,dword ptr [ESP + 0x10]      ; 005059bf
    SHL EAX,0x4                         ; 005059c3
    ADD EDX,EBX                         ; 005059c6
    ADD EAX,EDX                         ; 005059c8
    CMP dword ptr [EAX + 0x8],0x3       ; 005059ca
    JNZ 0x00505a16                      ; 005059ce
        ;   XREF to: 00505a16 (CONDITIONAL_JUMP)  ; LAB_00505a16
    MOV EBX,dword ptr [ESP + 0x28]      ; 005059d0
    MOV EDX,dword ptr [ESP + 0x38]      ; 005059d4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005059d8
    MOV ESI,dword ptr [ESP + 0x28]      ; 005059dc
    ADD EDI,0x180                       ; 005059e0
    ADD EBX,EDX                         ; 005059e6
    ADD ESI,ECX                         ; 005059e8
    ADD EDI,EDX                         ; 005059ea
    MOV EAX,dword ptr [ESI]             ; 005059ec
        ;   Label: LAB_005059ec
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005059ee
    SHL EAX,0x4                         ; 005059f2
    ADD EAX,EDX                         ; 005059f5
    MOV EAX,dword ptr [EAX + 0x4]       ; 005059f7
    PUSH EAX                            ; 005059fa
    PUSH EBP                            ; 005059fb
    ADD EBX,0x80                        ; 005059fc
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00 ; 00505a02
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00505a07
    MOV dword ptr [EBX + -0x80],EAX     ; 00505a0a
    CMP EBX,EDI                         ; 00505a0d
    JNZ 0x005059ec                      ; 00505a0f
        ;   XREF to: 005059ec (CONDITIONAL_JUMP)  ; LAB_005059ec
    JMP 0x005058f3                      ; 00505a11
        ;   XREF to: 005058f3 (UNCONDITIONAL_JUMP)  ; LAB_005058f3
    MOV ESI,dword ptr [EAX]             ; 00505a16
        ;   Label: LAB_00505a16
    MOV EAX,dword ptr [EAX + 0x4]       ; 00505a18
    PUSH EAX                            ; 00505a1b
    PUSH EBP                            ; 00505a1c
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00 ; 00505a1d
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00505a22
    MOV EBX,dword ptr [ESP + 0x20]      ; 00505a25
    MOV EDI,dword ptr [ESP + 0x38]      ; 00505a29
    MOV ECX,EAX                         ; 00505a2d
    ADD EBX,EDI                         ; 00505a2f
    MOV EDI,dword ptr [ESP + 0x20]      ; 00505a31
    MOV EAX,dword ptr [ESP + 0x38]      ; 00505a35
    ADD EDI,0x180                       ; 00505a39
    ADD EDI,EAX                         ; 00505a3f
    MOV EAX,ECX                         ; 00505a41
        ;   Label: LAB_00505a41
    XOR EDX,EDX                         ; 00505a43
    DIV ESI                             ; 00505a45
    MOV EAX,ECX                         ; 00505a47
    MOV dword ptr [EBX],EDX             ; 00505a49
    XOR EDX,EDX                         ; 00505a4b
    DIV ESI                             ; 00505a4d
    ADD EBX,0x80                        ; 00505a4f
    MOV ECX,EAX                         ; 00505a55
    CMP EBX,EDI                         ; 00505a57
    JNZ 0x00505a41                      ; 00505a59
        ;   XREF to: 00505a41 (CONDITIONAL_JUMP)  ; LAB_00505a41
    JMP 0x005058f3                      ; 00505a5b
        ;   XREF to: 005058f3 (UNCONDITIONAL_JUMP)  ; LAB_005058f3
    MOV EAX,dword ptr [ESP + 0x24]      ; 00505a60
        ;   Label: LAB_00505a60
    CMP EAX,dword ptr [ESP + 0x14]      ; 00505a64
    JL 0x005058fe                       ; 00505a68
        ;   XREF to: 005058fe (CONDITIONAL_JUMP)  ; LAB_005058fe
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00505a6e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00505a72
    MOV ESI,dword ptr [ESP + 0x58]      ; 00505a76
    ADD EDX,0x180                       ; 00505a7a
    ADD ECX,ESI                         ; 00505a80
    ADD EDX,ESI                         ; 00505a82
    ADD ECX,0x80                        ; 00505a84
        ;   Label: LAB_00505a84
    MOV EAX,dword ptr [ECX + -0x80]     ; 00505a8a
    MOV dword ptr [ECX + 0x100],EAX     ; 00505a8d
    CMP ECX,EDX                         ; 00505a93
    JZ 0x005058fe                       ; 00505a95
        ;   XREF to: 005058fe (CONDITIONAL_JUMP)  ; LAB_005058fe
    JMP 0x00505a84                      ; 00505a9b
        ;   XREF to: 00505a84 (UNCONDITIONAL_JUMP)  ; LAB_00505a84

