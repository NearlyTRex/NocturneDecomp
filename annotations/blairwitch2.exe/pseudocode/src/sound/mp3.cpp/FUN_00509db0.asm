; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_00509db0(CMP3Decoder *param_1,_FILE *param_2,int param_3)
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
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0 at 00509d2f
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dfee2
;   TerminatedCString s_Out_of_memory_File_s_005dfef3
;   undefined4 DAT_005e0333
;   undefined4 DAT_00618e88
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fseek_FUN_005b929c
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_unknown.c_FUN_005b86a0
;   sound_mp3.cpp_calculateMpegFrame_FUN_00504670
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00504ca0
;   sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509db0
        ;   Label: sound_mp3.cpp_FUN_00509db0
    PUSH ESI                            ; 00509db1
    PUSH EDI                            ; 00509db2
    PUSH EBP                            ; 00509db3
    SUB ESP,0x58                        ; 00509db4
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00509db7
    PUSH EDI                            ; 00509dbb
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30 ; 00509dbc
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30(CMP3Decoder * this_ptr)
    MOV EDX,0x1000                      ; 00509dc1
    ADD ESP,0x4                         ; 00509dc6
    LEA ESI,[EDI + 0x5320]              ; 00509dc9
    MOV EAX,dword ptr [ESP + 0x70]      ; 00509dcf
    MOV EBX,ESI                         ; 00509dd3
    MOV dword ptr [ESP + 0x50],EDX      ; 00509dd5
    MOV EBP,ESI                         ; 00509dd9
    MOV dword ptr [ESP + 0x54],EAX      ; 00509ddb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00509ddf
    MOV ECX,dword ptr [ESI]             ; 00509de3
    MOV dword ptr [ESP + 0x4c],EAX      ; 00509de5
    TEST ECX,ECX                        ; 00509de9
    JNZ 0x00509eee                      ; 00509deb
        ;   XREF to: 00509eee (CONDITIONAL_JUMP)  ; LAB_00509eee
    MOV EDX,dword ptr [EBP + 0x4]       ; 00509df1
        ;   Label: LAB_00509df1
    TEST EDX,EDX                        ; 00509df4
    JZ 0x00509e08                       ; 00509df6
        ;   XREF to: 00509e08 (CONDITIONAL_JUMP)  ; LAB_00509e08
    PUSH EDX                            ; 00509df8
    CALL crt_unknown.c_FUN_005b86a0     ; 00509df9
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00509dfe
    MOV dword ptr [EBP + 0x4],0x0       ; 00509e01
    MOV EAX,dword ptr [ESP + 0x54]      ; 00509e08
        ;   Label: LAB_00509e08
    PUSH EAX                            ; 00509e0c
    MOV dword ptr [EBX],EAX             ; 00509e0d
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 00509e0f
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    ADD ESP,0x4                         ; 00509e14
    MOV dword ptr [EBX + 0x20],EAX      ; 00509e17
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00509e1a
    MOV dword ptr [EBX + 0x24],EAX      ; 00509e1e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00509e21
    PUSH EAX                            ; 00509e25
    MOV dword ptr [EBX + 0x8],EAX       ; 00509e26
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00509e29
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00509e2e
    MOV dword ptr [EBX + 0x4],EAX       ; 00509e31
    TEST EAX,EAX                        ; 00509e34
    JZ 0x00509f02                       ; 00509e36
        ;   XREF to: 00509f02 (CONDITIONAL_JUMP)  ; LAB_00509f02
    PUSH 0x0                            ; 00509e3c
        ;   Label: LAB_00509e3c
    MOV ESI,dword ptr [EBX + 0x20]      ; 00509e3e
    PUSH ESI                            ; 00509e41
    MOV EBP,dword ptr [EBX]             ; 00509e42
    PUSH EBP                            ; 00509e44
    CALL crt_stdio.c_fseek_FUN_005b929c ; 00509e45
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    MOV dword ptr [EBX + 0x10],0x0      ; 00509e4a
    MOV dword ptr [EBX + 0x14],0x0      ; 00509e51
    MOV dword ptr [EBX + 0xc],0x0       ; 00509e58
    MOV dword ptr [EBX + 0x18],0x0      ; 00509e5f
    ADD ESP,0xc                         ; 00509e66
    MOV dword ptr [EBX + 0x1c],0x0      ; 00509e69
    PUSH 0xc                            ; 00509e70
    MOV EAX,dword ptr [EBX + 0x24]      ; 00509e72
    PUSH 0xfff                          ; 00509e75
    MOV dword ptr [EBX + 0x28],EAX      ; 00509e7a
    LEA EBX,[EDI + 0x5320]              ; 00509e7d
    PUSH EBX                            ; 00509e83
    CALL sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00504ca0 ; 00509e84
        ;   XREF to: 00504ca0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00504ca0(CFileBitStream * this_ptr, uint sync_pattern, uint pattern_bits)
    LEA EAX,[ESP + 0xc]                 ; 00509e89
    ADD ESP,0xc                         ; 00509e8d
    MOV dword ptr [ESP + 0x30],EAX      ; 00509e90
    LEA EAX,[ESP + 0x30]                ; 00509e94
    PUSH EAX                            ; 00509e98
    PUSH EBX                            ; 00509e99
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170 ; 00509e9a
        ;   XREF to: 00505170 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170(CFileBitStream * this_ptr, SMpegFrameHeader * * header_out)
    ADD ESP,0x8                         ; 00509e9f
    LEA EAX,[ESP + 0x30]                ; 00509ea2
    PUSH EAX                            ; 00509ea6
    CALL sound_mp3.cpp_calculateMpegFrame_FUN_00504670 ; 00509ea7
        ;   XREF to: 00504670 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateMpegFrame_FUN_00504670(SMpegFrame * frame)
    ADD ESP,0x4                         ; 00509eac
    MOV EBX,dword ptr [ESP]             ; 00509eaf
    MOV EAX,dword ptr [ESP + 0x10]      ; 00509eb2
    SHL EBX,0x5                         ; 00509eb6
    FLD double ptr [EBX + EAX*0x8 + 0x618e88] ; 00509eb9 | DAT_00618e88
    FMUL double ptr [0x005e0333]        ; 00509ec0 | DAT_005e0333
    PUSH 0x0                            ; 00509ec6
    CALL crt_math.c_round_FUN_005b7ff0  ; 00509ec8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EDI + 0x100]       ; 00509ecd
    MOV EAX,dword ptr [ESP + 0x44]      ; 00509ed3
    PUSH EDI                            ; 00509ed7
    MOV dword ptr [EDI + 0x104],EAX     ; 00509ed8
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0 ; 00509ede
        ;   XREF to: 0050a0e0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 00509ee3
    ADD ESP,0x58                        ; 00509ee6
    POP EBP                             ; 00509ee9
    POP EDI                             ; 00509eea
    POP ESI                             ; 00509eeb
    POP EBX                             ; 00509eec
    RET                                 ; 00509eed
    PUSH ECX                            ; 00509eee
        ;   Label: LAB_00509eee
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00509eef
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00509ef4
    MOV dword ptr [ESI],0x0             ; 00509ef7
    JMP 0x00509df1                      ; 00509efd
        ;   XREF to: 00509df1 (UNCONDITIONAL_JUMP)  ; LAB_00509df1
    PUSH 0x1d23558                      ; 00509f02
        ;   Label: LAB_00509f02
    MOV EDX,0x5dfee2                    ; 00509f07 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x23d                       ; 00509f0c
    PUSH 0x5dfef3                       ; 00509f11 | = "Out of memory.  File: %s"
    MOV dword ptr [0x01d046a0],EDX      ; 00509f16 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00509f1c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00509f22
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00509f27
    JMP 0x00509e3c                      ; 00509f2a
        ;   XREF to: 00509e3c (UNCONDITIONAL_JUMP)  ; LAB_00509e3c

