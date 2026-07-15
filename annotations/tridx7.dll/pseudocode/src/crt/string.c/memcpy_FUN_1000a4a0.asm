; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_string_c_memcpy_FUN_1000a4a0(void *dst,void *src,size_t size)
;
; Parameters:
; void *           Stack[0x4]:4   dst
; void *           Stack[0x8]:4   src
; size_t           Stack[0xc]:4   size
;
; XREF[2]:
;   crt_locale.c___crtGetStringTypeW_FUN_1000be00 at 1000bf84
;   crt_stdio.c__shift_FUN_100073f0 at 10007410
;
; Referenced Globals:
;   void* switchdataD_1000a4d8 = 1000a510
;   void* switchdataD_1000a570 = 1000a5ae
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 1000a4a0
        ;   Label: crt_string.c_memcpy_FUN_1000a4a0
    MOV EBP,ESP                         ; 1000a4a1
    PUSH EDI                            ; 1000a4a3
    PUSH ESI                            ; 1000a4a4
    MOV ESI,dword ptr [EBP + 0xc]       ; 1000a4a5
    MOV EDI,dword ptr [EBP + 0x8]       ; 1000a4a8
    MOV ECX,dword ptr [EBP + 0x10]      ; 1000a4ab
    CMP EDI,ESI                         ; 1000a4ae
    JBE 0x1000a4be                      ; 1000a4b0
        ;   XREF to: 1000a4be (CONDITIONAL_JUMP)  ; LAB_1000a4be
    MOV EAX,ESI                         ; 1000a4b2
    ADD EAX,ECX                         ; 1000a4b4
    CMP EDI,EAX                         ; 1000a4b6
    JC 0x1000a54c                       ; 1000a4b8
        ;   XREF to: 1000a54c (CONDITIONAL_JUMP)  ; LAB_1000a54c
    TEST EDI,0x3                        ; 1000a4be
        ;   Label: LAB_1000a4be
    JNZ 0x1000a518                      ; 1000a4c4
        ;   XREF to: 1000a518 (CONDITIONAL_JUMP)  ; LAB_1000a518
    MOV EDX,ECX                         ; 1000a4c6
    AND EDX,0x3                         ; 1000a4c8
    SHR ECX,0x2                         ; 1000a4cb
    MOVSD.REP ES:EDI,ESI                ; 1000a4ce
    JMP dword ptr [EDX*0x4 + 0x1000a4d8] ; 1000a4d0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV AX,word ptr [ESI]               ; 1000a4e8
        ;   Label: caseD_3
    MOV word ptr [EDI],AX               ; 1000a4eb
    MOV AL,byte ptr [ESI + 0x2]         ; 1000a4ee
    MOV byte ptr [EDI + 0x2],AL         ; 1000a4f1
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a4f4
    POP ESI                             ; 1000a4f7
    POP EDI                             ; 1000a4f8
    LEAVE                               ; 1000a4f9
    RET                                 ; 1000a4fa
    MOV AX,word ptr [ESI]               ; 1000a4fc
        ;   Label: caseD_2
    MOV word ptr [EDI],AX               ; 1000a4ff
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a502
    POP ESI                             ; 1000a505
    POP EDI                             ; 1000a506
    LEAVE                               ; 1000a507
    RET                                 ; 1000a508
    MOV AL,byte ptr [ESI]               ; 1000a50c
        ;   Label: caseD_1
    MOV byte ptr [EDI],AL               ; 1000a50e
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a510
        ;   Label: caseD_0
    POP ESI                             ; 1000a513
    POP EDI                             ; 1000a514
    LEAVE                               ; 1000a515
    RET                                 ; 1000a516
    CMP ECX,0xc                         ; 1000a518
        ;   Label: LAB_1000a518
    JBE 0x1000a540                      ; 1000a51b
        ;   XREF to: 1000a540 (CONDITIONAL_JUMP)  ; LAB_1000a540
    MOV EDX,EDI                         ; 1000a51d
    NEG EDX                             ; 1000a51f
    AND EDX,0x3                         ; 1000a521
    SUB ECX,EDX                         ; 1000a524
    MOV EAX,ECX                         ; 1000a526
    MOV ECX,EDX                         ; 1000a528
    MOVSB.REP ES:EDI,ESI                ; 1000a52a
    MOV ECX,EAX                         ; 1000a52c
    AND EAX,0x3                         ; 1000a52e
    SHR ECX,0x2                         ; 1000a531
    MOVSD.REP ES:EDI,ESI                ; 1000a534
    JMP dword ptr [EAX*0x4 + 0x1000a4d8] ; 1000a536 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOVSB.REP ES:EDI,ESI                ; 1000a540
        ;   Label: LAB_1000a540
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a542
    POP ESI                             ; 1000a545
    POP EDI                             ; 1000a546
    LEAVE                               ; 1000a547
    RET                                 ; 1000a548
    STD                                 ; 1000a54c
        ;   Label: LAB_1000a54c
    ADD ESI,ECX                         ; 1000a54d
    ADD EDI,ECX                         ; 1000a54f
    TEST EDI,0x3                        ; 1000a551
    JNZ 0x1000a5b8                      ; 1000a557
        ;   XREF to: 1000a5b8 (CONDITIONAL_JUMP)  ; LAB_1000a5b8
    MOV EDX,ECX                         ; 1000a559
    AND EDX,0x3                         ; 1000a55b
    SUB ESI,0x4                         ; 1000a55e
    SUB EDI,0x4                         ; 1000a561
    SHR ECX,0x2                         ; 1000a564
    MOVSD.REP ES:EDI,ESI                ; 1000a567
    JMP dword ptr [EDX*0x4 + 0x1000a570] ; 1000a569 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV AX,word ptr [ESI + 0x2]         ; 1000a580
        ;   Label: caseD_3
    MOV word ptr [EDI + 0x2],AX         ; 1000a584
    MOV AL,byte ptr [ESI + 0x1]         ; 1000a588
    MOV byte ptr [EDI + 0x1],AL         ; 1000a58b
    CLD                                 ; 1000a58e
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a58f
    POP ESI                             ; 1000a592
    POP EDI                             ; 1000a593
    LEAVE                               ; 1000a594
    RET                                 ; 1000a595
    MOV AX,word ptr [ESI + 0x2]         ; 1000a598
        ;   Label: caseD_2
    MOV word ptr [EDI + 0x2],AX         ; 1000a59c
    CLD                                 ; 1000a5a0
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a5a1
    POP ESI                             ; 1000a5a4
    POP EDI                             ; 1000a5a5
    LEAVE                               ; 1000a5a6
    RET                                 ; 1000a5a7
    MOV AL,byte ptr [ESI + 0x3]         ; 1000a5a8
        ;   Label: caseD_1
    MOV byte ptr [EDI + 0x3],AL         ; 1000a5ab
    CLD                                 ; 1000a5ae
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a5af
    POP ESI                             ; 1000a5b2
    POP EDI                             ; 1000a5b3
    LEAVE                               ; 1000a5b4
    RET                                 ; 1000a5b5
    DEC ESI                             ; 1000a5b8
        ;   Label: LAB_1000a5b8
    DEC EDI                             ; 1000a5b9
    CMP ECX,0xc                         ; 1000a5ba
    JBE 0x1000a5e4                      ; 1000a5bd
        ;   XREF to: 1000a5e4 (CONDITIONAL_JUMP)  ; LAB_1000a5e4
    NEG EDX                             ; 1000a5bf
    AND EDX,0x3                         ; 1000a5c1
    SUB ECX,EDX                         ; 1000a5c4
    MOV EAX,ECX                         ; 1000a5c6
    MOV ECX,EDX                         ; 1000a5c8
    MOVSB.REP ES:EDI,ESI                ; 1000a5ca
    MOV ECX,EAX                         ; 1000a5cc
    AND EAX,0x3                         ; 1000a5ce
    SUB ESI,0x3                         ; 1000a5d1
    SUB EDI,0x3                         ; 1000a5d4
    SHR ECX,0x2                         ; 1000a5d7
    MOVSD.REP ES:EDI,ESI                ; 1000a5da
    JMP dword ptr [EAX*0x4 + 0x1000a570] ; 1000a5dc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOVSB.REP ES:EDI,ESI                ; 1000a5e4
        ;   Label: LAB_1000a5e4
    CLD                                 ; 1000a5e6
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000a5e7
    POP ESI                             ; 1000a5ea
    POP EDI                             ; 1000a5eb
    LEAVE                               ; 1000a5ec
    RET                                 ; 1000a5ed

