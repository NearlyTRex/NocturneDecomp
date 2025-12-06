; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3Granule * Stack[0xc]:4   granule_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535c00
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531480
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
    PUSH ESI                            ; 00531481
    PUSH EDI                            ; 00531482
    PUSH EBP                            ; 00531483
    SUB ESP,0x10                        ; 00531484
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00531487
    MOV ECX,dword ptr [ESP + 0x30]      ; 0053148b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0053148f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531493
    ADD EAX,EDX                         ; 0053149a
    SHL EAX,0x5                         ; 0053149c
    LEA EDX,[ESI + 0x8]                 ; 0053149f
    LEA EDI,[EDX + EAX*0x1]             ; 005314a2
    MOV EDX,dword ptr [ESP + 0x38]      ; 005314a5
    PUSH EDX                            ; 005314a9
    MOV EBP,dword ptr [ESP + 0x38]      ; 005314aa
    LEA EAX,[ECX*0x8 + 0x0]             ; 005314ae
    PUSH EBP                            ; 005314b5
    ADD EDI,0x10                        ; 005314b6
    ADD EAX,ECX                         ; 005314b9
    PUSH ECX                            ; 005314bb
    SHL EAX,0x3                         ; 005314bc
    PUSH ESI                            ; 005314bf
    ADD EDI,EAX                         ; 005314c0
    MOV EAX,dword ptr [ESP + 0x38]      ; 005314c2
    PUSH EAX                            ; 005314c6
    MOV EDX,dword ptr [ESP + 0x38]      ; 005314c7
    PUSH EDX                            ; 005314cb
    XOR EBX,EBX                         ; 005314cc
    CALL sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0 ; 005314ce | void sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, ...)
        ;   XREF to: 005310f0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EDI + 0x10]      ; 005314d3
    ADD ESP,0x18                        ; 005314d6
    TEST ECX,ECX                        ; 005314d9
    JNZ 0x00531526                      ; 005314db | LAB_00531526
        ;   XREF to: 00531526 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x34]      ; 005314dd
        ;   Label: LAB_005314dd
    MOV EBP,dword ptr [ESP + 0x24]      ; 005314e1
    SHL EAX,0x3                         ; 005314e5
    MOV ECX,dword ptr [ESP + 0x28]      ; 005314e8
    MOV EDI,EAX                         ; 005314ec
    LEA EDX,[EBX*0x4 + 0x0]             ; 005314ee
    SHL EDI,0x5                         ; 005314f5
    ADD EDX,EBP                         ; 005314f8
    SUB EDI,EAX                         ; 005314fa
    XOR EAX,EAX                         ; 005314fc
    ADD EDI,ECX                         ; 005314fe
    INC EBX                             ; 00531500
        ;   Label: LAB_00531500
    MOV ECX,dword ptr [EDX + 0x7358]    ; 00531501
    LEA ESI,[EDI + EAX*0x1]             ; 00531507
    ADD EDX,0x4                         ; 0053150a
    ADD EAX,0x4                         ; 0053150d
    MOV dword ptr [ESI],ECX             ; 00531510
    CMP EAX,0x54                        ; 00531512
    JNZ 0x00531500                      ; 00531515 | LAB_00531500
        ;   XREF to: 00531500 (CONDITIONAL_JUMP)
    MOV dword ptr [EDI + 0x58],0x0      ; 00531517
    ADD ESP,0x10                        ; 0053151e
    POP EBP                             ; 00531521
    POP EDI                             ; 00531522
    POP ESI                             ; 00531523
    POP EBX                             ; 00531524
    RET                                 ; 00531525
    CMP dword ptr [EDI + 0x14],0x2      ; 00531526
        ;   Label: LAB_00531526
    JNZ 0x005314dd                      ; 0053152a | LAB_005314dd
        ;   XREF to: 005314dd (CONDITIONAL_JUMP)
    LEA EAX,[EBP*0x8 + 0x0]             ; 0053152c
    MOV EDX,EAX                         ; 00531533
    SHL EAX,0x5                         ; 00531535
    MOV ESI,dword ptr [ESP + 0x28]      ; 00531538
    SUB EAX,EDX                         ; 0053153c
    MOV EBP,dword ptr [EDI + 0x18]      ; 0053153e
    ADD ESI,EAX                         ; 00531541
    TEST EBP,EBP                        ; 00531543
    JZ 0x005315fc                       ; 00531545 | LAB_005315fc
        ;   XREF to: 005315fc (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x24]      ; 0053154b
    MOV EAX,ESI                         ; 0053154f
    ADD ESI,0x20                        ; 00531551
    ADD EAX,0x4                         ; 00531554
        ;   Label: LAB_00531554
    MOV ECX,dword ptr [EDX + 0x7358]    ; 00531557
    ADD EDX,0x4                         ; 0053155d
    INC EBX                             ; 00531560
    MOV dword ptr [EAX + -0x4],ECX      ; 00531561
    CMP EAX,ESI                         ; 00531564
    JNZ 0x00531554                      ; 00531566 | LAB_00531554
        ;   XREF to: 00531554 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x34]      ; 00531568
    SHL EAX,0x3                         ; 0053156c
    MOV EDX,EAX                         ; 0053156f
    SHL EAX,0x5                         ; 00531571
    SUB EAX,EDX                         ; 00531574
    MOV EDX,dword ptr [ESP + 0x28]      ; 00531576
    MOV EBP,0xa8                        ; 0053157a
    ADD EDX,EAX                         ; 0053157f
    MOV EDI,0x3                         ; 00531581
    MOV dword ptr [ESP + 0xc],EDX       ; 00531586
    MOV dword ptr [ESP],EDX             ; 0053158a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0053158d
        ;   Label: LAB_0053158d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00531591
    LEA EAX,[EDI*0x4 + 0x0]             ; 00531595
    LEA EDX,[EBX*0x4 + 0x0]             ; 0053159c
    ADD EAX,ESI                         ; 005315a3
    MOV ESI,dword ptr [ESP]             ; 005315a5
    ADD EDX,ECX                         ; 005315a8
    ADD ESI,EBP                         ; 005315aa
    ADD EAX,0x34                        ; 005315ac
        ;   Label: LAB_005315ac
    MOV ECX,dword ptr [EDX + 0x7358]    ; 005315af
    ADD EDX,0x4                         ; 005315b5
    INC EBX                             ; 005315b8
    MOV dword ptr [EAX + 0x28],ECX      ; 005315b9
    CMP EAX,ESI                         ; 005315bc
    JNZ 0x005315ac                      ; 005315be | LAB_005315ac
        ;   XREF to: 005315ac (CONDITIONAL_JUMP)
    INC EDI                             ; 005315c0
    ADD EBP,0x4                         ; 005315c1
    CMP EDI,0xc                         ; 005315c4
    JL 0x0053158d                       ; 005315c7 | LAB_0053158d
        ;   XREF to: 0053158d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x34]      ; 005315c9
    SHL EAX,0x3                         ; 005315cd
    MOV EDX,EAX                         ; 005315d0
    SHL EAX,0x5                         ; 005315d2
    SUB EAX,EDX                         ; 005315d5
    MOV EDX,dword ptr [ESP + 0x28]      ; 005315d7
    ADD EDX,EAX                         ; 005315db
    LEA EAX,[EDX + 0x30]                ; 005315dd
    ADD EDX,0xcc                        ; 005315e0
    ADD EAX,0x34                        ; 005315e6
        ;   Label: LAB_005315e6
    MOV dword ptr [EAX + 0x28],0x0      ; 005315e9
    CMP EAX,EDX                         ; 005315f0
    JNZ 0x005315e6                      ; 005315f2 | LAB_005315e6
        ;   XREF to: 005315e6 (CONDITIONAL_JUMP)
    ADD ESP,0x10                        ; 005315f4
    POP EBP                             ; 005315f7
    POP EDI                             ; 005315f8
    POP ESI                             ; 005315f9
    POP EBX                             ; 005315fa
    RET                                 ; 005315fb
    MOV EBP,0x9c                        ; 005315fc
        ;   Label: LAB_005315fc
    MOV dword ptr [ESP + 0x8],ESI       ; 00531601
    MOV dword ptr [ESP + 0x4],ESI       ; 00531605
    XOR EDI,EDI                         ; 00531609
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053160b
        ;   Label: LAB_0053160b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0053160f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00531613
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053161a
    ADD EAX,EDX                         ; 0053161e
    LEA EDX,[EBX*0x4 + 0x0]             ; 00531620
    ADD ESI,EBP                         ; 00531627
    ADD EDX,ECX                         ; 00531629
    ADD EAX,0x34                        ; 0053162b
        ;   Label: LAB_0053162b
    MOV ECX,dword ptr [EDX + 0x7358]    ; 0053162e
    ADD EDX,0x4                         ; 00531634
    INC EBX                             ; 00531637
    MOV dword ptr [EAX + 0x28],ECX      ; 00531638
    CMP EAX,ESI                         ; 0053163b
    JNZ 0x0053162b                      ; 0053163d | LAB_0053162b
        ;   XREF to: 0053162b (CONDITIONAL_JUMP)
    INC EDI                             ; 0053163f
    ADD EBP,0x4                         ; 00531640
    CMP EDI,0xc                         ; 00531643
    JL 0x0053160b                       ; 00531646 | LAB_0053160b
        ;   XREF to: 0053160b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x34]      ; 00531648
    SHL EAX,0x3                         ; 0053164c
    MOV EDX,EAX                         ; 0053164f
    SHL EAX,0x5                         ; 00531651
    SUB EAX,EDX                         ; 00531654
    MOV EDX,dword ptr [ESP + 0x28]      ; 00531656
    ADD EDX,EAX                         ; 0053165a
    LEA EAX,[EDX + 0x30]                ; 0053165c
    ADD EDX,0xcc                        ; 0053165f
    ADD EAX,0x34                        ; 00531665
        ;   Label: LAB_00531665
    MOV dword ptr [EAX + 0x28],0x0      ; 00531668
    CMP EAX,EDX                         ; 0053166f
    JNZ 0x00531665                      ; 00531671 | LAB_00531665
        ;   XREF to: 00531665 (CONDITIONAL_JUMP)
    ADD ESP,0x10                        ; 00531673
    POP EBP                             ; 00531676
    POP EDI                             ; 00531677
    POP ESI                             ; 00531678
    POP EBX                             ; 00531679
    RET                                 ; 0053167a

