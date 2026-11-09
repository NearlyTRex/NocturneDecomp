; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50 at 004fdc5d
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 0050307a
;   sound_mp3.cpp_FUN_004fee40 at 004feeb8
;
; Referenced Globals:
;   undefined4 DAT_00601560
;   undefined4 DAT_0060157c
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd4f0
        ;   Label: sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0
    PUSH EDI                            ; 004fd4f1
    PUSH EBP                            ; 004fd4f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fd4f3
    MOV EDX,dword ptr [EDI + 0xc]       ; 004fd4f7
    INC EDX                             ; 004fd4fa
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fd4fb
    MOV dword ptr [EDI + 0xc],EDX       ; 004fd4fe
    TEST ECX,ECX                        ; 004fd501
    JNZ 0x004fd59c                      ; 004fd503
        ;   XREF to: 004fd59c (CONDITIONAL_JUMP)  ; LAB_004fd59c
    MOV EBX,dword ptr [EDI + 0x10]      ; 004fd509
    MOV dword ptr [EDI + 0x14],0x8      ; 004fd50c
    DEC EBX                             ; 004fd513
    MOV dword ptr [EDI + 0x10],EBX      ; 004fd514
    CMP EBX,0x4                         ; 004fd517
    JGE 0x004fd5c0                      ; 004fd51a
        ;   XREF to: 004fd5c0 (CONDITIONAL_JUMP)  ; LAB_004fd5c0
    CMP dword ptr [EDI + 0x18],0x0      ; 004fd520
        ;   Label: LAB_004fd520
    JNZ 0x004fd5cb                      ; 004fd524
        ;   XREF to: 004fd5cb (CONDITIONAL_JUMP)  ; LAB_004fd5cb
    PUSH ESI                            ; 004fd52a
    MOV EBX,dword ptr [EDI + 0x10]      ; 004fd52b
    TEST EBX,EBX                        ; 004fd52e
    JL 0x004fd550                       ; 004fd530
        ;   XREF to: 004fd550 (CONDITIONAL_JUMP)  ; LAB_004fd550
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fd532
        ;   Label: LAB_004fd532
    MOV EBP,dword ptr [EDI + 0x10]      ; 004fd535
    DEC EAX                             ; 004fd538
    MOV ESI,dword ptr [EDI + 0x4]       ; 004fd539
    SUB EAX,EBP                         ; 004fd53c
    LEA EDX,[ESI + EBX*0x1]             ; 004fd53e
    ADD EAX,EBX                         ; 004fd541
    ADD ESI,EAX                         ; 004fd543
    MOV AL,byte ptr [EDX]               ; 004fd545
    DEC EBX                             ; 004fd547
    MOV byte ptr [ESI],AL               ; 004fd548
    TEST EBX,EBX                        ; 004fd54a
    JGE 0x004fd532                      ; 004fd54c
        ;   XREF to: 004fd532 (CONDITIONAL_JUMP)  ; LAB_004fd532
    MOV EAX,EAX                         ; 004fd54e
    MOV ESI,dword ptr [EDI + 0x8]       ; 004fd550
        ;   Label: LAB_004fd550
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fd553
    SUB ESI,0x2                         ; 004fd556
    SUB ESI,EAX                         ; 004fd559
    MOV EBX,EDI                         ; 004fd55b
    TEST ESI,ESI                        ; 004fd55d
    JL 0x004fd594                       ; 004fd55f
        ;   XREF to: 004fd594 (CONDITIONAL_JUMP)  ; LAB_004fd594
    CMP dword ptr [EBX + 0x18],0x0      ; 004fd561
        ;   Label: LAB_004fd561
    JNZ 0x004fd594                      ; 004fd565
        ;   XREF to: 004fd594 (CONDITIONAL_JUMP)  ; LAB_004fd594
    MOV ECX,dword ptr [EBX + 0x28]      ; 004fd567
    XOR EAX,EAX                         ; 004fd56a
    TEST ECX,ECX                        ; 004fd56c
    JLE 0x004fd588                      ; 004fd56e
        ;   XREF to: 004fd588 (CONDITIONAL_JUMP)  ; LAB_004fd588
    MOV EBP,dword ptr [EBX]             ; 004fd570
    PUSH EBP                            ; 004fd572
    PUSH 0x1                            ; 004fd573
    MOV EDX,ESI                         ; 004fd575
    MOV EAX,dword ptr [EBX + 0x4]       ; 004fd577
    PUSH 0x1                            ; 004fd57a
    ADD EAX,EDX                         ; 004fd57c
    PUSH EAX                            ; 004fd57e
    DEC ESI                             ; 004fd57f
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004fd580
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004fd585
    CMP EAX,0x1                         ; 004fd588
        ;   Label: LAB_004fd588
    JNZ 0x004fd5d4                      ; 004fd58b
        ;   XREF to: 004fd5d4 (CONDITIONAL_JUMP)  ; LAB_004fd5d4
    DEC dword ptr [EBX + 0x28]          ; 004fd58d
    TEST ESI,ESI                        ; 004fd590
        ;   Label: LAB_004fd590
    JGE 0x004fd561                      ; 004fd592
        ;   XREF to: 004fd561 (CONDITIONAL_JUMP)  ; LAB_004fd561
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fd594
        ;   Label: LAB_004fd594
    DEC EAX                             ; 004fd597
    MOV dword ptr [EDI + 0x10],EAX      ; 004fd598
    POP ESI                             ; 004fd59b
    MOV EDX,dword ptr [EDI + 0x10]      ; 004fd59c
        ;   Label: LAB_004fd59c
    MOV EAX,dword ptr [EDI + 0x4]       ; 004fd59f
    ADD EAX,EDX                         ; 004fd5a2
    MOV EDX,dword ptr [EDI + 0x14]      ; 004fd5a4
    XOR EBX,EBX                         ; 004fd5a7
    DEC EDX                             ; 004fd5a9
    MOV BL,byte ptr [EAX]               ; 004fd5aa
    MOV EAX,dword ptr [EDX*0x4 + 0x601560] ; 004fd5ac | DAT_0060157c | DAT_00601560
    MOV CL,DL                           ; 004fd5b3
    AND EAX,EBX                         ; 004fd5b5
    MOV dword ptr [EDI + 0x14],EDX      ; 004fd5b7
    SHR EAX,CL                          ; 004fd5ba
    POP EBP                             ; 004fd5bc
    POP EDI                             ; 004fd5bd
    POP EBX                             ; 004fd5be
    RET                                 ; 004fd5bf
    CMP EBX,dword ptr [EDI + 0x18]      ; 004fd5c0
        ;   Label: LAB_004fd5c0
    JL 0x004fd520                       ; 004fd5c3
        ;   XREF to: 004fd520 (CONDITIONAL_JUMP)  ; LAB_004fd520
    JMP 0x004fd59c                      ; 004fd5c9
        ;   XREF to: 004fd59c (UNCONDITIONAL_JUMP)  ; LAB_004fd59c
    MOV dword ptr [EDI + 0x1c],0x1      ; 004fd5cb
        ;   Label: LAB_004fd5cb
    JMP 0x004fd59c                      ; 004fd5d2
        ;   XREF to: 004fd59c (UNCONDITIONAL_JUMP)  ; LAB_004fd59c
    LEA EAX,[ESI + 0x1]                 ; 004fd5d4
        ;   Label: LAB_004fd5d4
    MOV dword ptr [EBX + 0x18],EAX      ; 004fd5d7
    JMP 0x004fd590                      ; 004fd5da
        ;   XREF to: 004fd590 (UNCONDITIONAL_JUMP)  ; LAB_004fd590

