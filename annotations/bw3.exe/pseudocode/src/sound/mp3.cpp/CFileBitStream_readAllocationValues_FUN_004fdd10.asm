; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004fdd10(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandAllocation * Stack[0x8]:4   output_allocation
; SMpegFrame *     Stack[0xc]:4   frame
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 005030cd
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdd10
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004fdd10
    PUSH ESI                            ; 004fdd11
    PUSH EDI                            ; 004fdd12
    PUSH EBP                            ; 004fdd13
    SUB ESP,0x18                        ; 004fdd14
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fdd17
    MOV EBX,dword ptr [EAX + 0x18]      ; 004fdd1b
    MOV EDI,dword ptr [EAX + 0x10]      ; 004fdd1e
    MOV dword ptr [ESP + 0xc],EBX       ; 004fdd21
    MOV EBX,dword ptr [EAX + 0x14]      ; 004fdd25
    MOV EAX,dword ptr [EAX + 0x8]       ; 004fdd28
    MOV dword ptr [ESP + 0x4],EBX       ; 004fdd2b
    MOV dword ptr [ESP],EAX             ; 004fdd2f
    TEST EBX,EBX                        ; 004fdd32
    JLE 0x004fdda4                      ; 004fdd34
        ;   XREF to: 004fdda4 (CONDITIONAL_JUMP)  ; LAB_004fdda4
    MOV dword ptr [ESP + 0x10],EAX      ; 004fdd36
    XOR ECX,ECX                         ; 004fdd3a
    LEA EAX,[EBX*0x4 + 0x0]             ; 004fdd3c
    MOV dword ptr [ESP + 0x14],ECX      ; 004fdd43
    MOV dword ptr [ESP + 0x8],EAX       ; 004fdd47
    XOR ESI,ESI                         ; 004fdd4b
        ;   Label: LAB_004fdd4b
    TEST EDI,EDI                        ; 004fdd4d
    JLE 0x004fdd83                      ; 004fdd4f
        ;   XREF to: 004fdd83 (CONDITIONAL_JUMP)  ; LAB_004fdd83
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fdd51
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fdd55
    MOV EBP,dword ptr [ESP + 0x10]      ; 004fdd59
    ADD EBX,EAX                         ; 004fdd5d
    MOV EDX,dword ptr [EBP + 0x4]       ; 004fdd5f
        ;   Label: LAB_004fdd5f
    PUSH EDX                            ; 004fdd62
    MOV ECX,dword ptr [ESP + 0x30]      ; 004fdd63
    PUSH ECX                            ; 004fdd67
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0 ; 004fdd68
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdd6d
    ADD EBX,0x80                        ; 004fdd70
    AND EAX,0xff                        ; 004fdd76
    INC ESI                             ; 004fdd7b
    MOV dword ptr [EBX + -0x80],EAX     ; 004fdd7c
    CMP ESI,EDI                         ; 004fdd7f
    JL 0x004fdd5f                       ; 004fdd81
        ;   XREF to: 004fdd5f (CONDITIONAL_JUMP)  ; LAB_004fdd5f
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fdd83
        ;   Label: LAB_004fdd83
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fdd87
    MOV ESI,dword ptr [ESP + 0x8]       ; 004fdd8b
    ADD ECX,0x4                         ; 004fdd8f
    ADD EBX,0x100                       ; 004fdd92
    MOV dword ptr [ESP + 0x14],ECX      ; 004fdd98
    MOV dword ptr [ESP + 0x10],EBX      ; 004fdd9c
    CMP ECX,ESI                         ; 004fdda0
    JL 0x004fdd4b                       ; 004fdda2
        ;   XREF to: 004fdd4b (CONDITIONAL_JUMP)  ; LAB_004fdd4b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fdda4
        ;   Label: LAB_004fdda4
    MOV EBP,dword ptr [ESP + 0x4]       ; 004fdda8
    CMP EBP,EDX                         ; 004fddac
    JGE 0x004fde00                      ; 004fddae
        ;   XREF to: 004fde00 (CONDITIONAL_JUMP)  ; LAB_004fde00
    MOV ESI,dword ptr [ESP + 0x30]      ; 004fddb0
    LEA EBX,[EBP*0x4 + 0x0]             ; 004fddb4
    ADD EBX,ESI                         ; 004fddbb
    MOV ESI,EBP                         ; 004fddbd
    MOV EAX,dword ptr [ESP]             ; 004fddbf
    SHL ESI,0x8                         ; 004fddc2
    ADD ESI,EAX                         ; 004fddc5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fddc7
        ;   Label: LAB_004fddc7
    PUSH EAX                            ; 004fddca
    MOV EDX,dword ptr [ESP + 0x30]      ; 004fddcb
    PUSH EDX                            ; 004fddcf
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0 ; 004fddd0
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fddd5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fddd8
    ADD EBX,0x4                         ; 004fdddc
    AND EAX,0xff                        ; 004fdddf
    ADD ESI,0x100                       ; 004fdde4
    MOV dword ptr [EBX + 0x7c],EAX      ; 004fddea
    INC EBP                             ; 004fdded
    MOV dword ptr [EBX + -0x4],EAX      ; 004fddee
    CMP EBP,ECX                         ; 004fddf1
    JL 0x004fddc7                       ; 004fddf3
        ;   XREF to: 004fddc7 (CONDITIONAL_JUMP)  ; LAB_004fddc7
    LEA EAX,[EAX]                       ; 004fddf5
    LEA EDX,[EDX]                       ; 004fddfb
    MOV EBX,EBX                         ; 004fddfe
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fde00
        ;   Label: LAB_004fde00
    CMP EBX,0x20                        ; 004fde04
    JGE 0x004fde38                      ; 004fde07
        ;   XREF to: 004fde38 (CONDITIONAL_JUMP)  ; LAB_004fde38
    LEA ESI,[EBX*0x4 + 0x0]             ; 004fde09
    XOR EAX,EAX                         ; 004fde10
        ;   Label: LAB_004fde10
    TEST EDI,EDI                        ; 004fde12
    JLE 0x004fde2d                      ; 004fde14
        ;   XREF to: 004fde2d (CONDITIONAL_JUMP)  ; LAB_004fde2d
    MOV EBX,dword ptr [ESP + 0x30]      ; 004fde16
    ADD EBX,ESI                         ; 004fde1a
    INC EAX                             ; 004fde1c
        ;   Label: LAB_004fde1c
    MOV dword ptr [EBX],0x0             ; 004fde1d
    ADD EBX,0x80                        ; 004fde23
    CMP EAX,EDI                         ; 004fde29
    JL 0x004fde1c                       ; 004fde2b
        ;   XREF to: 004fde1c (CONDITIONAL_JUMP)  ; LAB_004fde1c
    ADD ESI,0x4                         ; 004fde2d
        ;   Label: LAB_004fde2d
    CMP ESI,0x80                        ; 004fde30
    JL 0x004fde10                       ; 004fde36
        ;   XREF to: 004fde10 (CONDITIONAL_JUMP)  ; LAB_004fde10
    ADD ESP,0x18                        ; 004fde38
        ;   Label: LAB_004fde38
    POP EBP                             ; 004fde3b
    POP EDI                             ; 004fde3c
    POP ESI                             ; 004fde3d
    POP EBX                             ; 004fde3e
    RET                                 ; 004fde3f

