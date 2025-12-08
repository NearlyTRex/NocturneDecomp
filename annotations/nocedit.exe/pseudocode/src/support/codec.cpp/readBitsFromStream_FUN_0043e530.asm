; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_readBitsFromStream_FUN_0043e530(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
; int              Stack[0x8]:4   bit_count
; FILE *           Stack[0xc]:4   file_stream
; int *            Stack[0x10]:4   bytes_remaining
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030 at 0043f069
;
; Called Functions:
;   crt_stdio.c_fgetc_outptr_FUN_005ff245
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e530
        ;   Label: support_codec.cpp_readBitsFromStream_FUN_0043e530
    PUSH ESI                            ; 0043e531
    PUSH EDI                            ; 0043e532
    PUSH EBP                            ; 0043e533
    SUB ESP,0x8                         ; 0043e534
    MOV EDI,dword ptr [ESP + 0x24]      ; 0043e537
    MOV ESI,dword ptr [ESP + 0x28]      ; 0043e53b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0043e53f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e543
    MOV EDX,dword ptr [ECX]             ; 0043e547
    CMP EAX,EDX                         ; 0043e549
    JL 0x0043e5a4                       ; 0043e54b | LAB_0043e5a4
        ;   XREF to: 0043e5a4 (CONDITIONAL_JUMP)
    JZ 0x0043e5d1                       ; 0043e54d | LAB_0043e5d1
        ;   XREF to: 0043e5d1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e553
    MOV EBP,0xffffffff                  ; 0043e557
    MOV CL,byte ptr [ECX]               ; 0043e55c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043e55e
    MOV EBX,dword ptr [EAX]             ; 0043e561
    SHL EBP,CL                          ; 0043e563
    MOV ECX,dword ptr [ESP + 0x20]      ; 0043e565
    MOV dword ptr [EAX],0x0             ; 0043e569
    NOT EBP                             ; 0043e56f
    MOV dword ptr [EAX + 0x4],0x0       ; 0043e571
    SUB ECX,EBX                         ; 0043e578
    AND EBP,EDX                         ; 0043e57a
    MOV dword ptr [ESP + 0x20],ECX      ; 0043e57c
    CMP ECX,0x8                         ; 0043e580
    JL 0x0043e62a                       ; 0043e583 | LAB_0043e62a
        ;   XREF to: 0043e62a (CONDITIONAL_JUMP)
    CMP dword ptr [ESI],0x1             ; 0043e589
        ;   Label: LAB_0043e589
    JGE 0x0043e5e3                      ; 0043e58c | LAB_0043e5e3
        ;   XREF to: 0043e5e3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e58e
        ;   Label: LAB_0043e58e
    MOV dword ptr [EAX + 0x4],EBP       ; 0043e592
    MOV dword ptr [EAX],EBX             ; 0043e595
    MOV EAX,0xffffffff                  ; 0043e597
    ADD ESP,0x8                         ; 0043e59c
        ;   Label: LAB_0043e59c
    POP EBP                             ; 0043e59f
    POP EDI                             ; 0043e5a0
    POP ESI                             ; 0043e5a1
    POP EBX                             ; 0043e5a2
    RET                                 ; 0043e5a3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043e5a4
        ;   Label: LAB_0043e5a4
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043e5a8
    MOV CL,byte ptr [ESP + 0x20]        ; 0043e5ab
    MOV ESI,EDX                         ; 0043e5af
    SHR ESI,CL                          ; 0043e5b1
    MOV EAX,0xffffffff                  ; 0043e5b3
    MOV dword ptr [EBX + 0x4],ESI       ; 0043e5b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043e5bb
    SHL EAX,CL                          ; 0043e5bf
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043e5c1
    MOV EDI,dword ptr [ESI]             ; 0043e5c5
    NOT EAX                             ; 0043e5c7
    SUB EDI,EBX                         ; 0043e5c9
    AND EAX,EDX                         ; 0043e5cb
    MOV dword ptr [ESI],EDI             ; 0043e5cd
    JMP 0x0043e59c                      ; 0043e5cf | LAB_0043e59c
        ;   XREF to: 0043e59c (UNCONDITIONAL_JUMP)
    MOV dword ptr [ECX],0x0             ; 0043e5d1
        ;   Label: LAB_0043e5d1
    MOV EAX,dword ptr [ECX + 0x4]       ; 0043e5d7
    MOV dword ptr [ECX + 0x4],0x0       ; 0043e5da
    JMP 0x0043e59c                      ; 0043e5e1 | LAB_0043e59c
        ;   XREF to: 0043e59c (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4]                 ; 0043e5e3
        ;   Label: LAB_0043e5e3
    PUSH EAX                            ; 0043e5e7
    PUSH EDI                            ; 0043e5e8
    CALL crt_stdio.c_fgetc_outptr_FUN_005ff245 ; 0043e5e9 | int crt_stdio.c_fgetc_outptr_FUN_005ff245(FILE * stream, uchar * output_byte)
        ;   XREF to: 005ff245 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI]             ; 0043e5ee
    MOV EAX,dword ptr [EAX + 0x4]       ; 0043e5f0
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x10] ; 0043e5f3
    ADD ESP,0x8                         ; 0043e5f7
    TEST EDX,EDX                        ; 0043e5fa
    JNZ 0x0043e58e                      ; 0043e5fc | LAB_0043e58e
        ;   XREF to: 0043e58e (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI]             ; 0043e5fe
    DEC ECX                             ; 0043e600
    XOR EAX,EAX                         ; 0043e601
    MOV dword ptr [ESI],ECX             ; 0043e603
    MOV AL,byte ptr [ESP + 0x4]         ; 0043e605
    TEST EAX,EAX                        ; 0043e609
    JL 0x0043e58e                       ; 0043e60b | LAB_0043e58e
        ;   XREF to: 0043e58e (CONDITIONAL_JUMP)
    MOV CL,BL                           ; 0043e60d
    SHL EAX,CL                          ; 0043e60f
    OR EBP,EAX                          ; 0043e611
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e613
    SUB EAX,0x8                         ; 0043e617
    ADD EBX,0x8                         ; 0043e61a
    MOV dword ptr [ESP + 0x20],EAX      ; 0043e61d
    CMP EAX,0x8                         ; 0043e621
    JGE 0x0043e589                      ; 0043e624 | LAB_0043e589
        ;   XREF to: 0043e589 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x20],0x0      ; 0043e62a
        ;   Label: LAB_0043e62a
    JLE 0x0043e679                      ; 0043e62f | LAB_0043e679
        ;   XREF to: 0043e679 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI],0x1             ; 0043e631
    JGE 0x0043e683                      ; 0043e634 | LAB_0043e683
        ;   XREF to: 0043e683 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0043e636
        ;   Label: LAB_0043e636
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043e63b
        ;   Label: LAB_0043e63b
    MOV dword ptr [ESI + 0x4],EAX       ; 0043e63f
    TEST EAX,EAX                        ; 0043e642
    JL 0x0043e6a7                       ; 0043e644 | LAB_0043e6a7
        ;   XREF to: 0043e6a7 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [ESP + 0x20]        ; 0043e646
    MOV EAX,0xffffffff                  ; 0043e64a
    SHL EAX,CL                          ; 0043e64f
    NOT EAX                             ; 0043e651
    AND EAX,dword ptr [ESI + 0x4]       ; 0043e653
    MOV CL,BL                           ; 0043e656
    MOV EBX,dword ptr [ESI + 0x4]       ; 0043e658
    SHL EAX,CL                          ; 0043e65b
    MOV CL,byte ptr [ESP + 0x20]        ; 0043e65d
    OR EBP,EAX                          ; 0043e661
    SHR EBX,CL                          ; 0043e663
    MOV EAX,0x8                         ; 0043e665
    MOV dword ptr [ESI + 0x4],EBX       ; 0043e66a
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043e66d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043e671
    SUB EAX,ESI                         ; 0043e675
    MOV dword ptr [EBX],EAX             ; 0043e677
    MOV EAX,EBP                         ; 0043e679
        ;   Label: LAB_0043e679
    ADD ESP,0x8                         ; 0043e67b
    POP EBP                             ; 0043e67e
    POP EDI                             ; 0043e67f
    POP ESI                             ; 0043e680
    POP EBX                             ; 0043e681
    RET                                 ; 0043e682
    MOV EAX,ESP                         ; 0043e683
        ;   Label: LAB_0043e683
    PUSH EAX                            ; 0043e685
    PUSH EDI                            ; 0043e686
    CALL crt_stdio.c_fgetc_outptr_FUN_005ff245 ; 0043e687 | int crt_stdio.c_fgetc_outptr_FUN_005ff245(FILE * stream, uchar * output_byte)
        ;   XREF to: 005ff245 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI]             ; 0043e68c
    ADD EDI,dword ptr [EAX + 0x4]       ; 0043e68e
    MOV ECX,dword ptr [EDI + 0x10]      ; 0043e691
    ADD ESP,0x8                         ; 0043e694
    TEST ECX,ECX                        ; 0043e697
    JNZ 0x0043e636                      ; 0043e699 | LAB_0043e636
        ;   XREF to: 0043e636 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI]             ; 0043e69b
    DEC EDI                             ; 0043e69d
    XOR EAX,EAX                         ; 0043e69e
    MOV dword ptr [ESI],EDI             ; 0043e6a0
    MOV AL,byte ptr [ESP]               ; 0043e6a2
    JMP 0x0043e63b                      ; 0043e6a5 | LAB_0043e63b
        ;   XREF to: 0043e63b (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x4],EBP       ; 0043e6a7
        ;   Label: LAB_0043e6a7
    MOV EAX,0xffffffff                  ; 0043e6aa
    MOV dword ptr [ESI],EBX             ; 0043e6af
    ADD ESP,0x8                         ; 0043e6b1
    POP EBP                             ; 0043e6b4
    POP EDI                             ; 0043e6b5
    POP ESI                             ; 0043e6b6
    POP EBX                             ; 0043e6b7
    RET                                 ; 0043e6b8

