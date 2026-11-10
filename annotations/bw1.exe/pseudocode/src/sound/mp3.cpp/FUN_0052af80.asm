; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_0052af80(CMP3Decoder *param_1,_FILE *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_0052aea0 at 0052aeff
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb13d
;   TerminatedCString s_Out_of_memory_File_s_005eb14e
;   undefined4 DAT_005eb58e
;   undefined4 DAT_006202e8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fseek_FUN_005c170c
;   crt_stdio.c_ftell_FUN_005c2e90
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   sound_mp3.cpp_calculateMpegFrame_FUN_00525840
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70
;   sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052af80
        ;   Label: sound_mp3.cpp_FUN_0052af80
    PUSH ESI                            ; 0052af81
    PUSH EDI                            ; 0052af82
    PUSH EBP                            ; 0052af83
    SUB ESP,0x58                        ; 0052af84
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0052af87
    PUSH EDI                            ; 0052af8b
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100 ; 0052af8c
        ;   XREF to: 0052b100 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder * this_ptr)
    MOV EDX,0x1000                      ; 0052af91
    ADD ESP,0x4                         ; 0052af96
    LEA ESI,[EDI + 0x5320]              ; 0052af99
    MOV EAX,dword ptr [ESP + 0x70]      ; 0052af9f
    MOV EBX,ESI                         ; 0052afa3
    MOV dword ptr [ESP + 0x50],EDX      ; 0052afa5
    MOV EBP,ESI                         ; 0052afa9
    MOV dword ptr [ESP + 0x54],EAX      ; 0052afab
    MOV EAX,dword ptr [ESP + 0x74]      ; 0052afaf
    MOV ECX,dword ptr [ESI]             ; 0052afb3
    MOV dword ptr [ESP + 0x4c],EAX      ; 0052afb5
    TEST ECX,ECX                        ; 0052afb9
    JNZ 0x0052b0be                      ; 0052afbb
        ;   XREF to: 0052b0be (CONDITIONAL_JUMP)  ; LAB_0052b0be
    MOV EDX,dword ptr [EBP + 0x4]       ; 0052afc1
        ;   Label: LAB_0052afc1
    TEST EDX,EDX                        ; 0052afc4
    JZ 0x0052afd8                       ; 0052afc6
        ;   XREF to: 0052afd8 (CONDITIONAL_JUMP)  ; LAB_0052afd8
    PUSH EDX                            ; 0052afc8
    CALL crt_unknown.c_FUN_005c09f0     ; 0052afc9
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0052afce
    MOV dword ptr [EBP + 0x4],0x0       ; 0052afd1
    MOV EAX,dword ptr [ESP + 0x54]      ; 0052afd8
        ;   Label: LAB_0052afd8
    PUSH EAX                            ; 0052afdc
    MOV dword ptr [EBX],EAX             ; 0052afdd
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 0052afdf
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 0052afe4
    MOV dword ptr [EBX + 0x20],EAX      ; 0052afe7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0052afea
    MOV dword ptr [EBX + 0x24],EAX      ; 0052afee
    MOV EAX,dword ptr [ESP + 0x50]      ; 0052aff1
    PUSH EAX                            ; 0052aff5
    MOV dword ptr [EBX + 0x8],EAX       ; 0052aff6
    CALL crt_unknown.c_FUN_005c08d0     ; 0052aff9
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0052affe
    MOV dword ptr [EBX + 0x4],EAX       ; 0052b001
    TEST EAX,EAX                        ; 0052b004
    JZ 0x0052b0d2                       ; 0052b006
        ;   XREF to: 0052b0d2 (CONDITIONAL_JUMP)  ; LAB_0052b0d2
    PUSH 0x0                            ; 0052b00c
        ;   Label: LAB_0052b00c
    MOV ESI,dword ptr [EBX + 0x20]      ; 0052b00e
    PUSH ESI                            ; 0052b011
    MOV EBP,dword ptr [EBX]             ; 0052b012
    PUSH EBP                            ; 0052b014
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0052b015
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    MOV dword ptr [EBX + 0x10],0x0      ; 0052b01a
    MOV dword ptr [EBX + 0x14],0x0      ; 0052b021
    MOV dword ptr [EBX + 0xc],0x0       ; 0052b028
    MOV dword ptr [EBX + 0x18],0x0      ; 0052b02f
    ADD ESP,0xc                         ; 0052b036
    MOV dword ptr [EBX + 0x1c],0x0      ; 0052b039
    PUSH 0xc                            ; 0052b040
    MOV EAX,dword ptr [EBX + 0x24]      ; 0052b042
    PUSH 0xfff                          ; 0052b045
    MOV dword ptr [EBX + 0x28],EAX      ; 0052b04a
    LEA EBX,[EDI + 0x5320]              ; 0052b04d
    PUSH EBX                            ; 0052b053
    CALL sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70 ; 0052b054
        ;   XREF to: 00525e70 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70(CFileBitStream * this_ptr, uint sync_pattern, uint pattern_bits)
    LEA EAX,[ESP + 0xc]                 ; 0052b059
    ADD ESP,0xc                         ; 0052b05d
    MOV dword ptr [ESP + 0x30],EAX      ; 0052b060
    LEA EAX,[ESP + 0x30]                ; 0052b064
    PUSH EAX                            ; 0052b068
    PUSH EBX                            ; 0052b069
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340 ; 0052b06a
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340(CFileBitStream * this_ptr, SMpegFrameHeader * * header_out)
    ADD ESP,0x8                         ; 0052b06f
    LEA EAX,[ESP + 0x30]                ; 0052b072
    PUSH EAX                            ; 0052b076
    CALL sound_mp3.cpp_calculateMpegFrame_FUN_00525840 ; 0052b077
        ;   XREF to: 00525840 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateMpegFrame_FUN_00525840(SMpegFrame * frame)
    ADD ESP,0x4                         ; 0052b07c
    MOV EBX,dword ptr [ESP]             ; 0052b07f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052b082
    SHL EBX,0x5                         ; 0052b086
    FLD double ptr [EBX + EAX*0x8 + 0x6202e8] ; 0052b089 | DAT_006202e8
    FMUL double ptr [0x005eb58e]        ; 0052b090 | DAT_005eb58e
    PUSH 0x0                            ; 0052b096
    CALL crt_math.c_round_FUN_005c03a0  ; 0052b098
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EDI + 0x100]       ; 0052b09d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0052b0a3
    PUSH EDI                            ; 0052b0a7
    MOV dword ptr [EDI + 0x104],EAX     ; 0052b0a8
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0 ; 0052b0ae
        ;   XREF to: 0052b2b0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 0052b0b3
    ADD ESP,0x58                        ; 0052b0b6
    POP EBP                             ; 0052b0b9
    POP EDI                             ; 0052b0ba
    POP ESI                             ; 0052b0bb
    POP EBX                             ; 0052b0bc
    RET                                 ; 0052b0bd
    PUSH ECX                            ; 0052b0be
        ;   Label: LAB_0052b0be
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0052b0bf
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0052b0c4
    MOV dword ptr [ESI],0x0             ; 0052b0c7
    JMP 0x0052afc1                      ; 0052b0cd
        ;   XREF to: 0052afc1 (UNCONDITIONAL_JUMP)  ; LAB_0052afc1
    PUSH 0x1d404c8                      ; 0052b0d2
        ;   Label: LAB_0052b0d2
    MOV EDX,0x5eb13d                    ; 0052b0d7 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x23d                       ; 0052b0dc
    PUSH 0x5eb14e                       ; 0052b0e1 | = "Out of memory.  File: %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0052b0e6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0052b0ec | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052b0f2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0052b0f7
    JMP 0x0052b00c                      ; 0052b0fa
        ;   XREF to: 0052b00c (UNCONDITIONAL_JUMP)  ; LAB_0052b00c

