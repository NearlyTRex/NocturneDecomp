; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegAllocationTable *alloc_table_info)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandAllocation * Stack[0x8]:4   output_allocation
; SMpegAllocationTable * Stack[0xc]:4   alloc_table_info
; Local Variables:
; void *           Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005353c9
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f670
        ;   Label: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
    PUSH ESI                            ; 0052f671
    PUSH EDI                            ; 0052f672
    PUSH EBP                            ; 0052f673
    SUB ESP,0x18                        ; 0052f674
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052f677
    MOV EBX,dword ptr [EAX + 0x18]      ; 0052f67b
    MOV EDI,dword ptr [EAX + 0x10]      ; 0052f67e
    MOV dword ptr [ESP + 0xc],EBX       ; 0052f681
    MOV EBX,dword ptr [EAX + 0x14]      ; 0052f685
    MOV EAX,dword ptr [EAX + 0x8]       ; 0052f688
    MOV dword ptr [ESP + 0x4],EBX       ; 0052f68b
    MOV dword ptr [ESP],EAX             ; 0052f68f
    TEST EBX,EBX                        ; 0052f692
    JLE 0x0052f704                      ; 0052f694
        ;   XREF to: 0052f704 (CONDITIONAL_JUMP)  ; LAB_0052f704
    MOV dword ptr [ESP + 0x10],EAX      ; 0052f696
    XOR ECX,ECX                         ; 0052f69a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052f69c
    MOV dword ptr [ESP + 0x14],ECX      ; 0052f6a3
    MOV dword ptr [ESP + 0x8],EAX       ; 0052f6a7
    XOR ESI,ESI                         ; 0052f6ab
        ;   Label: LAB_0052f6ab
    TEST EDI,EDI                        ; 0052f6ad
    JLE 0x0052f6e3                      ; 0052f6af
        ;   XREF to: 0052f6e3 (CONDITIONAL_JUMP)  ; LAB_0052f6e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052f6b1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052f6b5
    MOV EBP,dword ptr [ESP + 0x10]      ; 0052f6b9
    ADD EBX,EAX                         ; 0052f6bd
    MOV EDX,dword ptr [EBP + 0x4]       ; 0052f6bf
        ;   Label: LAB_0052f6bf
    PUSH EDX                            ; 0052f6c2
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052f6c3
    PUSH ECX                            ; 0052f6c7
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f6c8
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f6cd
    ADD EBX,0x80                        ; 0052f6d0
    AND EAX,0xff                        ; 0052f6d6
    INC ESI                             ; 0052f6db
    MOV dword ptr [EBX + -0x80],EAX     ; 0052f6dc
    CMP ESI,EDI                         ; 0052f6df
    JL 0x0052f6bf                       ; 0052f6e1
        ;   XREF to: 0052f6bf (CONDITIONAL_JUMP)  ; LAB_0052f6bf
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052f6e3
        ;   Label: LAB_0052f6e3
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052f6e7
    MOV ESI,dword ptr [ESP + 0x8]       ; 0052f6eb
    ADD ECX,0x4                         ; 0052f6ef
    ADD EBX,0x100                       ; 0052f6f2
    MOV dword ptr [ESP + 0x14],ECX      ; 0052f6f8
    MOV dword ptr [ESP + 0x10],EBX      ; 0052f6fc
    CMP ECX,ESI                         ; 0052f700
    JL 0x0052f6ab                       ; 0052f702
        ;   XREF to: 0052f6ab (CONDITIONAL_JUMP)  ; LAB_0052f6ab
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052f704
        ;   Label: LAB_0052f704
    MOV EBP,dword ptr [ESP + 0x4]       ; 0052f708
    CMP EBP,EDX                         ; 0052f70c
    JGE 0x0052f760                      ; 0052f70e
        ;   XREF to: 0052f760 (CONDITIONAL_JUMP)  ; LAB_0052f760
    MOV ESI,dword ptr [ESP + 0x30]      ; 0052f710
    LEA EBX,[EBP*0x4 + 0x0]             ; 0052f714
    ADD EBX,ESI                         ; 0052f71b
    MOV ESI,EBP                         ; 0052f71d
    MOV EAX,dword ptr [ESP]             ; 0052f71f
    SHL ESI,0x8                         ; 0052f722
    ADD ESI,EAX                         ; 0052f725
    MOV EAX,dword ptr [ESI + 0x4]       ; 0052f727
        ;   Label: LAB_0052f727
    PUSH EAX                            ; 0052f72a
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052f72b
    PUSH EDX                            ; 0052f72f
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f730
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f735
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052f738
    ADD EBX,0x4                         ; 0052f73c
    AND EAX,0xff                        ; 0052f73f
    ADD ESI,0x100                       ; 0052f744
    MOV dword ptr [EBX + 0x7c],EAX      ; 0052f74a
    INC EBP                             ; 0052f74d
    MOV dword ptr [EBX + -0x4],EAX      ; 0052f74e
    CMP EBP,ECX                         ; 0052f751
    JL 0x0052f727                       ; 0052f753
        ;   XREF to: 0052f727 (CONDITIONAL_JUMP)  ; LAB_0052f727
    LEA EAX,[EAX]                       ; 0052f755
    LEA EDX,[EDX]                       ; 0052f75b
    MOV EBX,EBX                         ; 0052f75e
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052f760
        ;   Label: LAB_0052f760
    CMP EBX,0x20                        ; 0052f764
    JGE 0x0052f798                      ; 0052f767
        ;   XREF to: 0052f798 (CONDITIONAL_JUMP)  ; LAB_0052f798
    LEA ESI,[EBX*0x4 + 0x0]             ; 0052f769
    XOR EAX,EAX                         ; 0052f770
        ;   Label: LAB_0052f770
    TEST EDI,EDI                        ; 0052f772
    JLE 0x0052f78d                      ; 0052f774
        ;   XREF to: 0052f78d (CONDITIONAL_JUMP)  ; LAB_0052f78d
    MOV EBX,dword ptr [ESP + 0x30]      ; 0052f776
    ADD EBX,ESI                         ; 0052f77a
    INC EAX                             ; 0052f77c
        ;   Label: LAB_0052f77c
    MOV dword ptr [EBX],0x0             ; 0052f77d
    ADD EBX,0x80                        ; 0052f783
    CMP EAX,EDI                         ; 0052f789
    JL 0x0052f77c                       ; 0052f78b
        ;   XREF to: 0052f77c (CONDITIONAL_JUMP)  ; LAB_0052f77c
    ADD ESI,0x4                         ; 0052f78d
        ;   Label: LAB_0052f78d
    CMP ESI,0x80                        ; 0052f790
    JL 0x0052f770                       ; 0052f796
        ;   XREF to: 0052f770 (CONDITIONAL_JUMP)  ; LAB_0052f770
    ADD ESP,0x18                        ; 0052f798
        ;   Label: LAB_0052f798
    POP EBP                             ; 0052f79b
    POP EDI                             ; 0052f79c
    POP ESI                             ; 0052f79d
    POP EBX                             ; 0052f79e
    RET                                 ; 0052f79f

