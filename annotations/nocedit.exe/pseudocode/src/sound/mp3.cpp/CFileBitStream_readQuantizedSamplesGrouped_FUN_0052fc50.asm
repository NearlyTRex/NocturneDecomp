; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50(CFileBitStream * this_ptr, SMpegSubbandScalefactors * sample_array, SMpegSubbandAllocation * allocation_array, SBitAllocationTable * allocation_table)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandScalefactors * Stack[0x8]:4   sample_array
; SMpegSubbandAllocation * Stack[0xc]:4   allocation_array
; SBitAllocationTable * Stack[0x10]:4   allocation_table
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 0053542a
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fc50
        ;   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
    PUSH ESI                            ; 0052fc51
    PUSH EDI                            ; 0052fc52
    PUSH EBP                            ; 0052fc53
    SUB ESP,0x40                        ; 0052fc54
    MOV EBP,dword ptr [ESP + 0x54]      ; 0052fc57
    MOV EAX,dword ptr [ESP + 0x60]      ; 0052fc5b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0052fc5f
    MOV dword ptr [ESP + 0x2c],EDX      ; 0052fc62
    MOV EDX,dword ptr [EAX + 0x18]      ; 0052fc66
    MOV dword ptr [ESP],EDX             ; 0052fc69
    MOV EDX,dword ptr [EAX + 0x14]      ; 0052fc6c
    MOV ECX,dword ptr [ESP]             ; 0052fc6f
    MOV dword ptr [ESP + 0x14],EDX      ; 0052fc72
    MOV EAX,dword ptr [EAX + 0x8]       ; 0052fc76
    XOR EDX,EDX                         ; 0052fc79
    MOV dword ptr [ESP + 0xc],EAX       ; 0052fc7b
    MOV dword ptr [ESP + 0x24],EDX      ; 0052fc7f
    TEST ECX,ECX                        ; 0052fc83
    JLE 0x0052fd94                      ; 0052fc85 | LAB_0052fd94
        ;   XREF to: 0052fd94 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],EAX       ; 0052fc8b
    MOV dword ptr [ESP + 0x8],EDX       ; 0052fc8f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052fc93
        ;   Label: LAB_0052fc93
    MOV dword ptr [ESP + 0x28],EAX      ; 0052fc97
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052fc9b
    SHL EAX,0x8                         ; 0052fc9f
    MOV dword ptr [ESP + 0x10],EAX      ; 0052fca2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052fca6
    MOV dword ptr [ESP + 0x3c],EAX      ; 0052fcaa
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052fcae
    MOV dword ptr [ESP + 0x20],EAX      ; 0052fcb2
    MOV dword ptr [ESP + 0x18],EAX      ; 0052fcb6
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052fcba
    MOV EAX,dword ptr [ESP + 0x58]      ; 0052fcbe
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0052fcc2
    MOV dword ptr [ESP + 0x38],EAX      ; 0052fcc6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052fcca
    XOR ESI,ESI                         ; 0052fcce
    ADD EAX,EDI                         ; 0052fcd0
    MOV dword ptr [ESP + 0x30],ESI      ; 0052fcd2
    MOV dword ptr [ESP + 0x34],EAX      ; 0052fcd6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052fcda
        ;   Label: LAB_0052fcda
    CMP EAX,dword ptr [ESP + 0x14]      ; 0052fcde
    JGE 0x0052fdef                      ; 0052fce2 | LAB_0052fdef
        ;   XREF to: 0052fdef (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052fce8
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052fcec
        ;   Label: LAB_0052fcec
    CMP EAX,ECX                         ; 0052fcf0
    JLE 0x0052fd67                      ; 0052fcf2 | LAB_0052fd67
        ;   XREF to: 0052fd67 (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 0052fcf4
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0052fcf6
    SHL EAX,0x7                         ; 0052fcfa
    ADD ECX,EAX                         ; 0052fcfd
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052fcff
    MOV EBX,dword ptr [EAX]             ; 0052fd03
    TEST EBX,EBX                        ; 0052fd05
    JNZ 0x0052fdf9                      ; 0052fd07 | LAB_0052fdf9
        ;   XREF to: 0052fdf9 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052fd0d
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052fd11
    MOV ESI,dword ptr [ESP + 0x38]      ; 0052fd15
    ADD EBX,0x180                       ; 0052fd19
    ADD ECX,ESI                         ; 0052fd1f
    ADD EBX,ESI                         ; 0052fd21
    MOV dword ptr [ECX],0x0             ; 0052fd23
        ;   Label: LAB_0052fd23
    ADD ECX,0x80                        ; 0052fd29
    CMP ECX,EBX                         ; 0052fd2f
    JNZ 0x0052fd23                      ; 0052fd31 | LAB_0052fd23
        ;   XREF to: 0052fd23 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x2c],0x2      ; 0052fd33
        ;   Label: LAB_0052fd33
    JZ 0x0052fea0                       ; 0052fd38 | LAB_0052fea0
        ;   XREF to: 0052fea0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x34]      ; 0052fd3e
        ;   Label: LAB_0052fd3e
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052fd42
    MOV EAX,dword ptr [ESP + 0x38]      ; 0052fd46
    ADD EDX,0x80                        ; 0052fd4a
    INC ECX                             ; 0052fd50
    ADD EAX,0x180                       ; 0052fd51
    MOV dword ptr [ESP + 0x34],EDX      ; 0052fd56
    MOV dword ptr [ESP + 0x30],ECX      ; 0052fd5a
    MOV dword ptr [ESP + 0x38],EAX      ; 0052fd5e
    JMP 0x0052fcda                      ; 0052fd62 | LAB_0052fcda
        ;   XREF to: 0052fcda (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052fd67
        ;   Label: LAB_0052fd67
    MOV ESI,dword ptr [ESP + 0x4]       ; 0052fd6b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0052fd6f
    MOV EDX,dword ptr [ESP]             ; 0052fd73
    ADD EBX,0x4                         ; 0052fd76
    ADD ESI,0x100                       ; 0052fd79
    INC EDI                             ; 0052fd7f
    MOV dword ptr [ESP + 0x8],EBX       ; 0052fd80
    MOV dword ptr [ESP + 0x4],ESI       ; 0052fd84
    MOV dword ptr [ESP + 0x24],EDI      ; 0052fd88
    CMP EDI,EDX                         ; 0052fd8c
    JL 0x0052fc93                       ; 0052fd8e | LAB_0052fc93
        ;   XREF to: 0052fc93 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 0052fd94
        ;   Label: LAB_0052fd94
    CMP ECX,0x20                        ; 0052fd97
    JGE 0x0052fde7                      ; 0052fd9a | LAB_0052fde7
        ;   XREF to: 0052fde7 (CONDITIONAL_JUMP)
    LEA EDI,[ECX*0x4 + 0x0]             ; 0052fd9c
    XOR EBP,EBP                         ; 0052fda3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052fda5
        ;   Label: LAB_0052fda5
    MOV EDX,EBP                         ; 0052fda9
    CMP EBP,EBX                         ; 0052fdab
    JGE 0x0052fddc                      ; 0052fdad | LAB_0052fddc
        ;   XREF to: 0052fddc (CONDITIONAL_JUMP)
    MOV EBX,EDI                         ; 0052fdaf
    IMUL EAX,EDX,0x180                  ; 0052fdb1
        ;   Label: LAB_0052fdb1
    ADD EAX,dword ptr [ESP + 0x58]      ; 0052fdb7
    LEA ECX,[EBX + EAX*0x1]             ; 0052fdbb
    LEA ESI,[EBX + 0x180]               ; 0052fdbe
    ADD EAX,ESI                         ; 0052fdc4
    ADD ECX,0x80                        ; 0052fdc6
        ;   Label: LAB_0052fdc6
    MOV dword ptr [ECX + -0x80],EBP     ; 0052fdcc
    CMP ECX,EAX                         ; 0052fdcf
    JNZ 0x0052fdc6                      ; 0052fdd1 | LAB_0052fdc6
        ;   XREF to: 0052fdc6 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052fdd3
    INC EDX                             ; 0052fdd7
    CMP EDX,ESI                         ; 0052fdd8
    JL 0x0052fdb1                       ; 0052fdda | LAB_0052fdb1
        ;   XREF to: 0052fdb1 (CONDITIONAL_JUMP)
    ADD EDI,0x4                         ; 0052fddc
        ;   Label: LAB_0052fddc
    CMP EDI,0x80                        ; 0052fddf
    JL 0x0052fda5                       ; 0052fde5 | LAB_0052fda5
        ;   XREF to: 0052fda5 (CONDITIONAL_JUMP)
    ADD ESP,0x40                        ; 0052fde7
        ;   Label: LAB_0052fde7
    POP EBP                             ; 0052fdea
    POP EDI                             ; 0052fdeb
    POP ESI                             ; 0052fdec
    POP EBX                             ; 0052fded
    RET                                 ; 0052fdee
    MOV EAX,0x1                         ; 0052fdef
        ;   Label: LAB_0052fdef
    JMP 0x0052fcec                      ; 0052fdf4 | LAB_0052fcec
        ;   XREF to: 0052fcec (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052fdf9
        ;   Label: LAB_0052fdf9
    MOV EAX,EBX                         ; 0052fdfd
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052fdff
    SHL EAX,0x4                         ; 0052fe03
    ADD EDX,EBX                         ; 0052fe06
    ADD EAX,EDX                         ; 0052fe08
    CMP dword ptr [EAX + 0x8],0x3       ; 0052fe0a
    JNZ 0x0052fe56                      ; 0052fe0e | LAB_0052fe56
        ;   XREF to: 0052fe56 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x28]      ; 0052fe10
    MOV EDX,dword ptr [ESP + 0x38]      ; 0052fe14
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052fe18
    MOV ESI,dword ptr [ESP + 0x28]      ; 0052fe1c
    ADD EDI,0x180                       ; 0052fe20
    ADD EBX,EDX                         ; 0052fe26
    ADD ESI,ECX                         ; 0052fe28
    ADD EDI,EDX                         ; 0052fe2a
    MOV EAX,dword ptr [ESI]             ; 0052fe2c
        ;   Label: LAB_0052fe2c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0052fe2e
    SHL EAX,0x4                         ; 0052fe32
    ADD EAX,EDX                         ; 0052fe35
    MOV EAX,dword ptr [EAX + 0x4]       ; 0052fe37
    PUSH EAX                            ; 0052fe3a
    PUSH EBP                            ; 0052fe3b
    ADD EBX,0x80                        ; 0052fe3c
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fe42 | uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052fe47
    MOV dword ptr [EBX + -0x80],EAX     ; 0052fe4a
    CMP EBX,EDI                         ; 0052fe4d
    JNZ 0x0052fe2c                      ; 0052fe4f | LAB_0052fe2c
        ;   XREF to: 0052fe2c (CONDITIONAL_JUMP)
    JMP 0x0052fd33                      ; 0052fe51 | LAB_0052fd33
        ;   XREF to: 0052fd33 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX]             ; 0052fe56
        ;   Label: LAB_0052fe56
    MOV EAX,dword ptr [EAX + 0x4]       ; 0052fe58
    PUSH EAX                            ; 0052fe5b
    PUSH EBP                            ; 0052fe5c
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fe5d | uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052fe62
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052fe65
    MOV EDI,dword ptr [ESP + 0x38]      ; 0052fe69
    MOV ECX,EAX                         ; 0052fe6d
    ADD EBX,EDI                         ; 0052fe6f
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052fe71
    MOV EAX,dword ptr [ESP + 0x38]      ; 0052fe75
    ADD EDI,0x180                       ; 0052fe79
    ADD EDI,EAX                         ; 0052fe7f
    MOV EAX,ECX                         ; 0052fe81
        ;   Label: LAB_0052fe81
    XOR EDX,EDX                         ; 0052fe83
    DIV ESI                             ; 0052fe85
    MOV EAX,ECX                         ; 0052fe87
    MOV dword ptr [EBX],EDX             ; 0052fe89
    XOR EDX,EDX                         ; 0052fe8b
    DIV ESI                             ; 0052fe8d
    ADD EBX,0x80                        ; 0052fe8f
    MOV ECX,EAX                         ; 0052fe95
    CMP EBX,EDI                         ; 0052fe97
    JNZ 0x0052fe81                      ; 0052fe99 | LAB_0052fe81
        ;   XREF to: 0052fe81 (CONDITIONAL_JUMP)
    JMP 0x0052fd33                      ; 0052fe9b | LAB_0052fd33
        ;   XREF to: 0052fd33 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052fea0
        ;   Label: LAB_0052fea0
    CMP EAX,dword ptr [ESP + 0x14]      ; 0052fea4
    JL 0x0052fd3e                       ; 0052fea8 | LAB_0052fd3e
        ;   XREF to: 0052fd3e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052feae
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052feb2
    MOV ESI,dword ptr [ESP + 0x58]      ; 0052feb6
    ADD EDX,0x180                       ; 0052feba
    ADD ECX,ESI                         ; 0052fec0
    ADD EDX,ESI                         ; 0052fec2
    ADD ECX,0x80                        ; 0052fec4
        ;   Label: LAB_0052fec4
    MOV EAX,dword ptr [ECX + -0x80]     ; 0052feca
    MOV dword ptr [ECX + 0x100],EAX     ; 0052fecd
    CMP ECX,EDX                         ; 0052fed3
    JZ 0x0052fd3e                       ; 0052fed5 | LAB_0052fd3e
        ;   XREF to: 0052fd3e (CONDITIONAL_JUMP)
    JMP 0x0052fec4                      ; 0052fedb | LAB_0052fec4
        ;   XREF to: 0052fec4 (UNCONDITIONAL_JUMP)

