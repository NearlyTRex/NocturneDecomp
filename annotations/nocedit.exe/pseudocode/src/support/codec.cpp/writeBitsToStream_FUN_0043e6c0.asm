; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl support_codec_cpp_writeBitsToStream_FUN_0043e6c0 (SBitBuffer *bit_buffer,int bit_count,int bit_value,FILE *output_stream)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
; int              Stack[0x8]:4   bit_count
; int              Stack[0xc]:4   bit_value
; FILE *           Stack[0x10]:4   output_stream
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170 at 0043f1e0
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005ff2d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e6c0
        ;   Label: support_codec.cpp_writeBitsToStream_FUN_0043e6c0
    PUSH ESI                            ; 0043e6c1
    PUSH EDI                            ; 0043e6c2
    PUSH EBP                            ; 0043e6c3
    SUB ESP,0x4                         ; 0043e6c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043e6c7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043e6cb
    MOV EDX,dword ptr [EBX]             ; 0043e6cf
    MOV EDI,dword ptr [ESP + 0x24]      ; 0043e6d1
    CMP EDX,0x8                         ; 0043e6d5
    JL 0x0043e700                       ; 0043e6d8
        ;   XREF to: 0043e700 (CONDITIONAL_JUMP)  ; LAB_0043e700
    XOR EAX,EAX                         ; 0043e6da
        ;   Label: LAB_0043e6da
    MOV AL,byte ptr [EBX + 0x4]         ; 0043e6dc
    PUSH EAX                            ; 0043e6df
    PUSH EDI                            ; 0043e6e0
    CALL crt_stdio.c_fputc_FUN_005ff2d7 ; 0043e6e1
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043e6e6
    MOV EBP,dword ptr [EBX]             ; 0043e6e9
    SHR ECX,0x8                         ; 0043e6eb
    SUB EBP,0x8                         ; 0043e6ee
    MOV dword ptr [EBX + 0x4],ECX       ; 0043e6f1
    ADD ESP,0x8                         ; 0043e6f4
    MOV dword ptr [EBX],EBP             ; 0043e6f7
    CMP EBP,0x8                         ; 0043e6f9
    JGE 0x0043e6da                      ; 0043e6fc
        ;   XREF to: 0043e6da (CONDITIONAL_JUMP)  ; LAB_0043e6da
    MOV EAX,EAX                         ; 0043e6fe
    MOV EDX,dword ptr [EBX]             ; 0043e700
        ;   Label: LAB_0043e700
    TEST EDX,EDX                        ; 0043e702
    JLE 0x0043e753                      ; 0043e704
        ;   XREF to: 0043e753 (CONDITIONAL_JUMP)  ; LAB_0043e753
    MOV EAX,0x8                         ; 0043e706
    SUB EAX,EDX                         ; 0043e70b
    MOV dword ptr [ESP],EAX             ; 0043e70d
    CMP ESI,EAX                         ; 0043e710
    JL 0x0043e778                       ; 0043e712
        ;   XREF to: 0043e778 (CONDITIONAL_JUMP)  ; LAB_0043e778
    JZ 0x0043e796                       ; 0043e714
        ;   XREF to: 0043e796 (CONDITIONAL_JUMP)  ; LAB_0043e796
    MOV AL,byte ptr [ESP + 0x20]        ; 0043e71a
    MOV CL,byte ptr [EBX]               ; 0043e71e
    SHL AL,CL                           ; 0043e720
    OR AL,byte ptr [EBX + 0x4]          ; 0043e722
    AND EAX,0xff                        ; 0043e725
    PUSH EAX                            ; 0043e72a
    PUSH EDI                            ; 0043e72b
    CALL crt_stdio.c_fputc_FUN_005ff2d7 ; 0043e72c
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
    ADD ESP,0x8                         ; 0043e731
    MOV dword ptr [EBX],0x0             ; 0043e734
    MOV CL,byte ptr [ESP]               ; 0043e73a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043e73d
    MOV dword ptr [EBX + 0x4],0x0       ; 0043e741
    SHR EDX,CL                          ; 0043e748
    MOV ECX,dword ptr [ESP]             ; 0043e74a
    MOV dword ptr [ESP + 0x20],EDX      ; 0043e74d
    SUB ESI,ECX                         ; 0043e751
    CMP ESI,0x8                         ; 0043e753
        ;   Label: LAB_0043e753
    JL 0x0043e7c4                       ; 0043e756
        ;   XREF to: 0043e7c4 (CONDITIONAL_JUMP)  ; LAB_0043e7c4
    XOR EAX,EAX                         ; 0043e758
    MOV AL,byte ptr [ESP + 0x20]        ; 0043e75a
    PUSH EAX                            ; 0043e75e
    PUSH EDI                            ; 0043e75f
    CALL crt_stdio.c_fputc_FUN_005ff2d7 ; 0043e760
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
    ADD ESP,0x8                         ; 0043e765
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e768
    SHR EAX,0x8                         ; 0043e76c
    SUB ESI,0x8                         ; 0043e76f
    MOV dword ptr [ESP + 0x20],EAX      ; 0043e772
    JMP 0x0043e753                      ; 0043e776
        ;   XREF to: 0043e753 (UNCONDITIONAL_JUMP)  ; LAB_0043e753
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e778
        ;   Label: LAB_0043e778
    MOV CL,byte ptr [EBX]               ; 0043e77c
    MOV EDI,dword ptr [EBX + 0x4]       ; 0043e77e
    MOV EBP,dword ptr [EBX]             ; 0043e781
    SHL EAX,CL                          ; 0043e783
    ADD EBP,ESI                         ; 0043e785
    OR EDI,EAX                          ; 0043e787
    MOV dword ptr [EBX],EBP             ; 0043e789
    MOV dword ptr [EBX + 0x4],EDI       ; 0043e78b
    ADD ESP,0x4                         ; 0043e78e
        ;   Label: LAB_0043e78e
    POP EBP                             ; 0043e791
    POP EDI                             ; 0043e792
    POP ESI                             ; 0043e793
    POP EBX                             ; 0043e794
    RET                                 ; 0043e795
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e796
        ;   Label: LAB_0043e796
    MOV CL,byte ptr [EBX]               ; 0043e79a
    MOV ESI,dword ptr [EBX + 0x4]       ; 0043e79c
    SHL EAX,CL                          ; 0043e79f
    OR ESI,EAX                          ; 0043e7a1
    XOR EAX,EAX                         ; 0043e7a3
    MOV dword ptr [EBX + 0x4],ESI       ; 0043e7a5
    MOV AL,byte ptr [EBX + 0x4]         ; 0043e7a8
    PUSH EAX                            ; 0043e7ab
    PUSH EDI                            ; 0043e7ac
    CALL crt_stdio.c_fputc_FUN_005ff2d7 ; 0043e7ad
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
    MOV dword ptr [EBX],0x0             ; 0043e7b2
    ADD ESP,0x8                         ; 0043e7b8
    MOV dword ptr [EBX + 0x4],0x0       ; 0043e7bb
    JMP 0x0043e78e                      ; 0043e7c2
        ;   XREF to: 0043e78e (UNCONDITIONAL_JUMP)  ; LAB_0043e78e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e7c4
        ;   Label: LAB_0043e7c4
    MOV dword ptr [EBX],ESI             ; 0043e7c8
    MOV dword ptr [EBX + 0x4],EAX       ; 0043e7ca
    ADD ESP,0x4                         ; 0043e7cd
    POP EBP                             ; 0043e7d0
    POP EDI                             ; 0043e7d1
    POP ESI                             ; 0043e7d2
    POP EBX                             ; 0043e7d3
    RET                                 ; 0043e7d4

