; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SBitAllocationTable *alloc_table)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandScalefactors * Stack[0x8]:4   quantized_samples
; SMpegSubbandAllocation * Stack[0xc]:4   allocation
; SBitAllocationTable * Stack[0x10]:4   alloc_table
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005350cb
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fb50
        ;   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
    PUSH ESI                            ; 0052fb51
    PUSH EDI                            ; 0052fb52
    PUSH EBP                            ; 0052fb53
    SUB ESP,0x10                        ; 0052fb54
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052fb57
    MOV EBP,dword ptr [EAX + 0x10]      ; 0052fb5b
    MOV EAX,dword ptr [EAX + 0x14]      ; 0052fb5e
    MOV dword ptr [ESP],EAX             ; 0052fb61
    TEST EAX,EAX                        ; 0052fb64
    JLE 0x0052fbbf                      ; 0052fb66
        ;   XREF to: 0052fbbf (CONDITIONAL_JUMP)  ; LAB_0052fbbf
    SHL EAX,0x2                         ; 0052fb68
    XOR EDI,EDI                         ; 0052fb6b
    MOV dword ptr [ESP + 0x4],EAX       ; 0052fb6d
    MOV dword ptr [ESP + 0xc],EDI       ; 0052fb71
    XOR EDI,EDI                         ; 0052fb75
        ;   Label: LAB_0052fb75
    TEST EBP,EBP                        ; 0052fb77
    JLE 0x0052fbac                      ; 0052fb79
        ;   XREF to: 0052fbac (CONDITIONAL_JUMP)  ; LAB_0052fbac
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052fb7b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052fb7f
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052fb83
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052fb87
    ADD ESI,EDX                         ; 0052fb8b
    ADD EBX,EAX                         ; 0052fb8d
    MOV EAX,dword ptr [ESI]             ; 0052fb8f
        ;   Label: LAB_0052fb8f
    TEST EAX,EAX                        ; 0052fb91
    JNZ 0x0052fc1d                      ; 0052fb93
        ;   XREF to: 0052fc1d (CONDITIONAL_JUMP)  ; LAB_0052fc1d
    MOV dword ptr [EBX],EAX             ; 0052fb99
        ;   Label: LAB_0052fb99
    ADD EBX,0x180                       ; 0052fb9b
    INC EDI                             ; 0052fba1
    ADD ESI,0x80                        ; 0052fba2
    CMP EDI,EBP                         ; 0052fba8
    JL 0x0052fb8f                       ; 0052fbaa
        ;   XREF to: 0052fb8f (CONDITIONAL_JUMP)  ; LAB_0052fb8f
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052fbac
        ;   Label: LAB_0052fbac
    ADD ECX,0x4                         ; 0052fbb0
    MOV EBX,dword ptr [ESP + 0x4]       ; 0052fbb3
    MOV dword ptr [ESP + 0xc],ECX       ; 0052fbb7
    CMP ECX,EBX                         ; 0052fbbb
    JL 0x0052fb75                       ; 0052fbbd
        ;   XREF to: 0052fb75 (CONDITIONAL_JUMP)  ; LAB_0052fb75
    MOV ESI,dword ptr [ESP]             ; 0052fbbf
        ;   Label: LAB_0052fbbf
    CMP ESI,0x20                        ; 0052fbc2
    JGE 0x0052fc15                      ; 0052fbc5
        ;   XREF to: 0052fc15 (CONDITIONAL_JUMP)  ; LAB_0052fc15
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052fbc7
    LEA EDI,[ESI*0x4 + 0x0]             ; 0052fbcb
    ADD EAX,EDI                         ; 0052fbd2
    MOV dword ptr [ESP + 0x8],EAX       ; 0052fbd4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052fbd8
        ;   Label: LAB_0052fbd8
    MOV EAX,dword ptr [EAX]             ; 0052fbdc
    TEST EAX,EAX                        ; 0052fbde
    JNZ 0x0052fc31                      ; 0052fbe0
        ;   XREF to: 0052fc31 (CONDITIONAL_JUMP)  ; LAB_0052fc31
    XOR EBX,EBX                         ; 0052fbe2
        ;   Label: LAB_0052fbe2
    TEST EBP,EBP                        ; 0052fbe4
    JLE 0x0052fbff                      ; 0052fbe6
        ;   XREF to: 0052fbff (CONDITIONAL_JUMP)  ; LAB_0052fbff
    MOV ESI,dword ptr [ESP + 0x28]      ; 0052fbe8
    ADD ESI,EDI                         ; 0052fbec
    ADD ESI,0x180                       ; 0052fbee
        ;   Label: LAB_0052fbee
    INC EBX                             ; 0052fbf4
    MOV dword ptr [ESI + 0xfffffe80],EAX ; 0052fbf5
    CMP EBX,EBP                         ; 0052fbfb
    JL 0x0052fbee                       ; 0052fbfd
        ;   XREF to: 0052fbee (CONDITIONAL_JUMP)  ; LAB_0052fbee
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052fbff
        ;   Label: LAB_0052fbff
    ADD EBX,0x4                         ; 0052fc03
    ADD EDI,0x4                         ; 0052fc06
    MOV dword ptr [ESP + 0x8],EBX       ; 0052fc09
    CMP EDI,0x80                        ; 0052fc0d
    JL 0x0052fbd8                       ; 0052fc13
        ;   XREF to: 0052fbd8 (CONDITIONAL_JUMP)  ; LAB_0052fbd8
    ADD ESP,0x10                        ; 0052fc15
        ;   Label: LAB_0052fc15
    POP EBP                             ; 0052fc18
    POP EDI                             ; 0052fc19
    POP ESI                             ; 0052fc1a
    POP EBX                             ; 0052fc1b
    RET                                 ; 0052fc1c
    INC EAX                             ; 0052fc1d
        ;   Label: LAB_0052fc1d
    PUSH EAX                            ; 0052fc1e
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052fc1f
    PUSH ECX                            ; 0052fc23
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fc24
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052fc29
    JMP 0x0052fb99                      ; 0052fc2c
        ;   XREF to: 0052fb99 (UNCONDITIONAL_JUMP)  ; LAB_0052fb99
    INC EAX                             ; 0052fc31
        ;   Label: LAB_0052fc31
    PUSH EAX                            ; 0052fc32
    MOV ESI,dword ptr [ESP + 0x28]      ; 0052fc33
    PUSH ESI                            ; 0052fc37
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052fc38
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052fc3d
    JMP 0x0052fbe2                      ; 0052fc40
        ;   XREF to: 0052fbe2 (UNCONDITIONAL_JUMP)  ; LAB_0052fbe2

