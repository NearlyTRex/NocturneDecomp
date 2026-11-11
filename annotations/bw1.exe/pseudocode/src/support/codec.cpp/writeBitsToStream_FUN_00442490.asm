; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_codec_cpp_writeBitsToStream_FUN_00442490(byte *param_1,int param_2,int *param_3)
;
;
; XREF[2]:
;   support_codec.cpp_CAsciiArmor_encode_FUN_004438d0 at 004438e6
;   support_codec.cpp_FUN_004431b0 at 004431ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442490
        ;   Label: support_codec.cpp_writeBitsToStream_FUN_00442490
    PUSH ESI                            ; 00442491
    PUSH EDI                            ; 00442492
    PUSH EBP                            ; 00442493
    MOV EBP,dword ptr [ESP + 0x14]      ; 00442494
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00442498
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044249c
    MOV EDX,dword ptr [EBP]             ; 004424a0
    CMP EAX,EDX                         ; 004424a3
    JL 0x0044250d                       ; 004424a5
        ;   XREF to: 0044250d (CONDITIONAL_JUMP)  ; LAB_0044250d
    JZ 0x0044253c                       ; 004424a7
        ;   XREF to: 0044253c (CONDITIONAL_JUMP)  ; LAB_0044253c
    MOV ESI,0xffffffff                  ; 004424ad
    MOV CL,byte ptr [EBP]               ; 004424b2
    SUB EAX,EDX                         ; 004424b5
    MOV EBX,dword ptr [EBP + 0x4]       ; 004424b7
    MOV dword ptr [ESP + 0x18],EAX      ; 004424ba
    SHL ESI,CL                          ; 004424be
    MOV dword ptr [EBP],0x0             ; 004424c0
    NOT ESI                             ; 004424c7
    MOV dword ptr [EBP + 0x4],0x0       ; 004424c9
    AND ESI,EBX                         ; 004424d0
    MOV EBX,EDX                         ; 004424d2
    CMP EAX,0x8                         ; 004424d4
    JL 0x004424ff                       ; 004424d7
        ;   XREF to: 004424ff (CONDITIONAL_JUMP)  ; LAB_004424ff
    PUSH EDI                            ; 004424d9
        ;   Label: LAB_004424d9
    MOV EAX,dword ptr [EDI]             ; 004424da
    CALL dword ptr [EAX + 0x4]          ; 004424dc
    ADD ESP,0x4                         ; 004424df
    TEST EAX,EAX                        ; 004424e2
    JL 0x00442552                       ; 004424e4
        ;   XREF to: 00442552 (CONDITIONAL_JUMP)  ; LAB_00442552
    MOV CL,BL                           ; 004424e6
    SHL EAX,CL                          ; 004424e8
    OR ESI,EAX                          ; 004424ea
    MOV EAX,dword ptr [ESP + 0x18]      ; 004424ec
    SUB EAX,0x8                         ; 004424f0
    ADD EBX,0x8                         ; 004424f3
    MOV dword ptr [ESP + 0x18],EAX      ; 004424f6
    CMP EAX,0x8                         ; 004424fa
    JGE 0x004424d9                      ; 004424fd
        ;   XREF to: 004424d9 (CONDITIONAL_JUMP)  ; LAB_004424d9
    CMP dword ptr [ESP + 0x18],0x0      ; 004424ff
        ;   Label: LAB_004424ff
    JG 0x0044255d                       ; 00442504
        ;   XREF to: 0044255d (CONDITIONAL_JUMP)  ; LAB_0044255d
    MOV EAX,ESI                         ; 00442506
    POP EBP                             ; 00442508
    POP EDI                             ; 00442509
    POP ESI                             ; 0044250a
    POP EBX                             ; 0044250b
    RET                                 ; 0044250c
    MOV CL,byte ptr [ESP + 0x18]        ; 0044250d
        ;   Label: LAB_0044250d
    MOV EAX,0xffffffff                  ; 00442511
    SHL EAX,CL                          ; 00442516
    NOT EAX                             ; 00442518
    MOV ECX,dword ptr [EBP + 0x4]       ; 0044251a
    MOV EBX,dword ptr [EBP + 0x4]       ; 0044251d
    AND EAX,ECX                         ; 00442520
    MOV CL,byte ptr [ESP + 0x18]        ; 00442522
    SHR EBX,CL                          ; 00442526
    MOV ESI,dword ptr [EBP]             ; 00442528
    MOV dword ptr [EBP + 0x4],EBX       ; 0044252b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044252e
    SUB ESI,EBX                         ; 00442532
    MOV dword ptr [EBP],ESI             ; 00442534
    POP EBP                             ; 00442537
    POP EDI                             ; 00442538
    POP ESI                             ; 00442539
    POP EBX                             ; 0044253a
    RET                                 ; 0044253b
    MOV dword ptr [EBP],0x0             ; 0044253c
        ;   Label: LAB_0044253c
    MOV EAX,dword ptr [EBP + 0x4]       ; 00442543
    MOV dword ptr [EBP + 0x4],0x0       ; 00442546
    POP EBP                             ; 0044254d
    POP EDI                             ; 0044254e
    POP ESI                             ; 0044254f
    POP EBX                             ; 00442550
    RET                                 ; 00442551
    MOV dword ptr [EBP + 0x4],ESI       ; 00442552
        ;   Label: LAB_00442552
    MOV dword ptr [EBP],EBX             ; 00442555
    POP EBP                             ; 00442558
    POP EDI                             ; 00442559
    POP ESI                             ; 0044255a
    POP EBX                             ; 0044255b
    RET                                 ; 0044255c
    PUSH EDI                            ; 0044255d
        ;   Label: LAB_0044255d
    MOV EAX,dword ptr [EDI]             ; 0044255e
    CALL dword ptr [EAX + 0x4]          ; 00442560
    ADD ESP,0x4                         ; 00442563
    TEST EAX,EAX                        ; 00442566
    JL 0x00442552                       ; 00442568
        ;   XREF to: 00442552 (CONDITIONAL_JUMP)  ; LAB_00442552
    MOV CL,byte ptr [ESP + 0x18]        ; 0044256a
    MOV dword ptr [EBP + 0x4],EAX       ; 0044256e
    MOV EAX,0xffffffff                  ; 00442571
    SHL EAX,CL                          ; 00442576
    MOV EDI,dword ptr [EBP + 0x4]       ; 00442578
    NOT EAX                             ; 0044257b
    MOV CL,BL                           ; 0044257d
    AND EAX,EDI                         ; 0044257f
    SHL EAX,CL                          ; 00442581
    MOV CL,byte ptr [ESP + 0x18]        ; 00442583
    OR ESI,EAX                          ; 00442587
    MOV EAX,EDI                         ; 00442589
    SHR EAX,CL                          ; 0044258b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044258d
    MOV dword ptr [EBP + 0x4],EAX       ; 00442591
    MOV EAX,0x8                         ; 00442594
    SUB EAX,EDX                         ; 00442599
    MOV dword ptr [EBP],EAX             ; 0044259b
    MOV EAX,ESI                         ; 0044259e
    POP EBP                             ; 004425a0
    POP EDI                             ; 004425a1
    POP ESI                             ; 004425a2
    POP EBX                             ; 004425a3
    RET                                 ; 004425a4

