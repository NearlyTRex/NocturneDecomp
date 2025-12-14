; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream * this_ptr, uint * output_array, SBitAllocationTable * alloc_table)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   output_array
; SBitAllocationTable * Stack[0xc]:4   alloc_table
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535072
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f7a0
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
    PUSH ESI                            ; 0052f7a1
    PUSH EDI                            ; 0052f7a2
    PUSH EBP                            ; 0052f7a3
    SUB ESP,0xc                         ; 0052f7a4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0052f7a7
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052f7ab
    MOV EDI,dword ptr [EAX + 0x10]      ; 0052f7af
    MOV EAX,dword ptr [EAX + 0x14]      ; 0052f7b2
    MOV dword ptr [ESP],EAX             ; 0052f7b5
    TEST EAX,EAX                        ; 0052f7b8
    JLE 0x0052f806                      ; 0052f7ba
        ;   XREF to: 0052f806 (CONDITIONAL_JUMP)  ; LAB_0052f806
    XOR EAX,EAX                         ; 0052f7bc
    MOV dword ptr [ESP + 0x8],EAX       ; 0052f7be
    MOV EAX,dword ptr [ESP]             ; 0052f7c2
    SHL EAX,0x2                         ; 0052f7c5
    MOV dword ptr [ESP + 0x4],EAX       ; 0052f7c8
    XOR EBX,EBX                         ; 0052f7cc
        ;   Label: LAB_0052f7cc
    TEST EDI,EDI                        ; 0052f7ce
    JLE 0x0052f7f3                      ; 0052f7d0
        ;   XREF to: 0052f7f3 (CONDITIONAL_JUMP)  ; LAB_0052f7f3
    MOV ESI,dword ptr [ESP + 0x8]       ; 0052f7d2
    ADD ESI,dword ptr [ESP + 0x24]      ; 0052f7d6
    PUSH 0x4                            ; 0052f7da
        ;   Label: LAB_0052f7da
    PUSH EBP                            ; 0052f7dc
    ADD ESI,0x80                        ; 0052f7dd
    INC EBX                             ; 0052f7e3
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f7e4
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f7e9
    MOV dword ptr [ESI + -0x80],EAX     ; 0052f7ec
    CMP EBX,EDI                         ; 0052f7ef
    JL 0x0052f7da                       ; 0052f7f1
        ;   XREF to: 0052f7da (CONDITIONAL_JUMP)  ; LAB_0052f7da
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052f7f3
        ;   Label: LAB_0052f7f3
    ADD ECX,0x4                         ; 0052f7f7
    MOV EBX,dword ptr [ESP + 0x4]       ; 0052f7fa
    MOV dword ptr [ESP + 0x8],ECX       ; 0052f7fe
    CMP ECX,EBX                         ; 0052f802
    JL 0x0052f7cc                       ; 0052f804
        ;   XREF to: 0052f7cc (CONDITIONAL_JUMP)  ; LAB_0052f7cc
    MOV ESI,dword ptr [ESP]             ; 0052f806
        ;   Label: LAB_0052f806
    CMP ESI,0x20                        ; 0052f809
    JGE 0x0052f843                      ; 0052f80c
        ;   XREF to: 0052f843 (CONDITIONAL_JUMP)  ; LAB_0052f843
    SHL ESI,0x2                         ; 0052f80e
    PUSH 0x4                            ; 0052f811
        ;   Label: LAB_0052f811
    PUSH EBP                            ; 0052f813
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f814
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f819
    MOV EBX,EAX                         ; 0052f81c
    XOR EAX,EAX                         ; 0052f81e
    TEST EDI,EDI                        ; 0052f820
    JLE 0x0052f838                      ; 0052f822
        ;   XREF to: 0052f838 (CONDITIONAL_JUMP)  ; LAB_0052f838
    MOV EDX,dword ptr [ESP + 0x24]      ; 0052f824
    ADD EDX,ESI                         ; 0052f828
    ADD EDX,0x80                        ; 0052f82a
        ;   Label: LAB_0052f82a
    INC EAX                             ; 0052f830
    MOV dword ptr [EDX + -0x80],EBX     ; 0052f831
    CMP EAX,EDI                         ; 0052f834
    JL 0x0052f82a                       ; 0052f836
        ;   XREF to: 0052f82a (CONDITIONAL_JUMP)  ; LAB_0052f82a
    ADD ESI,0x4                         ; 0052f838
        ;   Label: LAB_0052f838
    CMP ESI,0x80                        ; 0052f83b
    JL 0x0052f811                       ; 0052f841
        ;   XREF to: 0052f811 (CONDITIONAL_JUMP)  ; LAB_0052f811
    ADD ESP,0xc                         ; 0052f843
        ;   Label: LAB_0052f843
    POP EBP                             ; 0052f846
    POP EDI                             ; 0052f847
    POP ESI                             ; 0052f848
    POP EBX                             ; 0052f849
    RET                                 ; 0052f84a

