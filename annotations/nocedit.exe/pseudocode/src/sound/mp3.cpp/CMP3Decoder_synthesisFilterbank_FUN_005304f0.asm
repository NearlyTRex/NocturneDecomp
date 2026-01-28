; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0 (CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   subband_samples
; int              Stack[0xc]:4   channel_index
; short *          Stack[0x10]:4   pcm_output
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005351b0
;
; Referenced Globals:
;   double DOUBLE_0063ae5a = 0.0490873852120000
;   double DOUBLE_0063ae62 = 1000000000
;   double DOUBLE_0063ae6a = 1.00000000000000E-9
;   double DOUBLE_0063ae72 = 0.785398163397000
;   double DOUBLE_0063ae7a = -0.5
;   double DOUBLE_0063ae82 = 0.5
;   double DOUBLE_0063ae8a = 0.0000100000000000000
;   float[16][32] g_MpegSynthesisWindow
;   undefined4 DAT_0067d9f0
;   int g_MpegSynthesisTableInitialized = 0x1
;   float[64][32] g_MpegSynthesisDctTable
;   undefined4 DAT_02f43984
;   undefined4 DAT_02f43a00
;
; Called Functions:
;   crt_math.c_modf_FUN_00602102
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005304f0
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
    PUSH ESI                            ; 005304f1
    PUSH EDI                            ; 005304f2
    PUSH EBP                            ; 005304f3
    MOV EBP,ESP                         ; 005304f4
    SUB ESP,0xd4                        ; 005304f6
    CMP dword ptr [0x0067e170],0x0      ; 005304fc | g_MpegSynthesisTableInitialized
    JNZ 0x005306be                      ; 00530503
        ;   XREF to: 005306be (CONDITIONAL_JUMP)  ; LAB_005306be
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00530509
        ;   Label: LAB_00530509
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053050c
    SHL EAX,0x2                         ; 0053050f
    ADD EAX,ECX                         ; 00530512
    MOV EBX,dword ptr [EAX + 0x7350]    ; 00530514
    SUB EBX,0x40                        ; 0053051a
    AND EBX,0x3ff                       ; 0053051d
    MOV dword ptr [EAX + 0x7350],EBX    ; 00530523
    LEA ESI,[EBX*0x4 + 0x0]             ; 00530529
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00530530
    LEA EAX,[ECX + 0x5350]              ; 00530533
    SHL EBX,0xc                         ; 00530539
    ADD EAX,EBX                         ; 0053053c
    ADD EAX,ESI                         ; 0053053e
    MOV dword ptr [EBP + -0x34],EAX     ; 00530540
    XOR EBX,EBX                         ; 00530543
    MOV dword ptr [EBP + -0x3c],EBX     ; 00530545
    MOV ESI,dword ptr [EBP + 0x18]      ; 00530548
    LEA EAX,[EBX*0x4 + 0x0]             ; 0053054b
        ;   Label: LAB_0053054b
    ADD EAX,ESI                         ; 00530552
    FLD float ptr [EAX]                 ; 00530554
    FABS                                ; 00530556
    FCOMP double ptr [0x0063ae8a]       ; 00530558 | DOUBLE_0063ae8a
    FNSTSW AX                           ; 0053055e
    SAHF                                ; 00530560
    JBE 0x00530570                      ; 00530561
        ;   XREF to: 00530570 (CONDITIONAL_JUMP)  ; LAB_00530570
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00530563
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff2c],EBX ; 00530566
    INC dword ptr [EBP + -0x3c]         ; 0053056d
    INC EBX                             ; 00530570
        ;   Label: LAB_00530570
    CMP EBX,0x20                        ; 00530571
    JL 0x0053054b                       ; 00530574
        ;   XREF to: 0053054b (CONDITIONAL_JUMP)  ; LAB_0053054b
    XOR EAX,EAX                         ; 00530576
    MOV dword ptr [EBP + -0x10],EAX     ; 00530578
    MOV EAX,dword ptr [EBP + -0x10]     ; 0053057b
        ;   Label: LAB_0053057b
    MOV EBX,0x2f43980                   ; 0053057e | g_MpegSynthesisDctTable
    SHL EAX,0x7                         ; 00530583
    ADD EBX,EAX                         ; 00530586
    MOV dword ptr [EBP + -0x30],EBX     ; 00530588
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053058b
    MOV dword ptr [EBP + -0x2c],EAX     ; 0053058e
    FLDZ                                ; 00530591
    MOV ECX,dword ptr [EBP + 0xffffffc4] ; 00530593
    SUB ECX,0x1                         ; 00530599
    JL 0x005305be                       ; 0053059c
        ;   XREF to: 005305be (CONDITIONAL_JUMP)  ; LAB_005305be
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 0053059e
    MOV EDX,dword ptr [EBP + 0xffffffd4] ; 005305a4
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff2c] ; 005305aa
        ;   Label: LAB_005305aa
    FLD float ptr [EBX + EAX*0x4]       ; 005305b1
    FMUL float ptr [EDX + EAX*0x4]      ; 005305b4
    FADDP                               ; 005305b7
    SUB ECX,0x1                         ; 005305b9
    JGE 0x005305aa                      ; 005305bc
        ;   XREF to: 005305aa (CONDITIONAL_JUMP)  ; LAB_005305aa
    MOV EBX,dword ptr [EBP + 0xffffffcc] ; 005305be
        ;   Label: LAB_005305be
    FSTP float ptr [EBX]                ; 005305c4
    ADD dword ptr [EBP + -0x34],0x4     ; 005305c6
    MOV ECX,dword ptr [EBP + -0x10]     ; 005305ca
    INC ECX                             ; 005305cd
    MOV dword ptr [EBP + -0x10],ECX     ; 005305ce
    CMP ECX,0x40                        ; 005305d1
    JL 0x0053057b                       ; 005305d4
        ;   XREF to: 0053057b (CONDITIONAL_JUMP)  ; LAB_0053057b
    XOR ESI,ESI                         ; 005305d6
    MOV dword ptr [EBP + -0x38],ESI     ; 005305d8
    CMP dword ptr [EBP + -0x38],0x20    ; 005305db
    JGE 0x005306b7                      ; 005305df
        ;   XREF to: 005306b7 (CONDITIONAL_JUMP)  ; LAB_005306b7
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005305e5
    MOV EBX,dword ptr [EBP + 0x14]      ; 005305e8
    SHL EAX,0x2                         ; 005305eb
    ADD EBX,EAX                         ; 005305ee
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005305f0
    MOV dword ptr [EBP + -0x1c],EBX     ; 005305f3
    MOV EBX,dword ptr [EBP + 0x14]      ; 005305f6
    SHL EAX,0xc                         ; 005305f9
    ADD EBX,0x5350                      ; 005305fc
    ADD EBX,EAX                         ; 00530602
    MOV dword ptr [EBP + -0x18],EBX     ; 00530604
    MOV EAX,dword ptr [EBP + -0x38]     ; 00530607
        ;   Label: LAB_00530607
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0053060a
    MOV ESI,dword ptr [EBX + 0x7350]    ; 0053060d
    ADD EAX,ESI                         ; 00530613
    MOV dword ptr [EBP + -0x8],EAX      ; 00530615
    MOV EAX,dword ptr [EBP + -0x18]     ; 00530618
    MOV dword ptr [EBP + -0x28],EAX     ; 0053061b
    MOV dword ptr [EBP + -0x24],0x47000000 ; 0053061e
    FLDZ                                ; 00530625
    MOV EBX,dword ptr [EBP + 0xffffffc8] ; 00530627
    MOV EDX,dword ptr [EBP + 0xfffffff8] ; 0053062d
    MOV ECX,0x8                         ; 00530633
    MOV ESI,dword ptr [EBP + 0xffffffd8] ; 00530638
    FLD float ptr [EBX*0x4 + 0x67d970]  ; 0053063e | g_MpegSynthesisWindow
        ;   Label: LAB_0053063e
    AND EDX,0x3ff                       ; 00530645
    FMUL float ptr [ESI + EDX*0x4]      ; 0053064b
    ADD EDX,0x60                        ; 0053064e
    FLD float ptr [EBX*0x4 + 0x67d9f0]  ; 00530651 | DAT_0067d9f0
    AND EDX,0x3ff                       ; 00530658
    FMUL float ptr [ESI + EDX*0x4]      ; 0053065e
    ADD EBX,0x40                        ; 00530661
    ADD EDX,0x20                        ; 00530664
    FADDP                               ; 00530667
    FADDP                               ; 00530669
    DEC ECX                             ; 0053066b
    JNZ 0x0053063e                      ; 0053066c
        ;   XREF to: 0053063e (CONDITIONAL_JUMP)  ; LAB_0053063e
    FMUL float ptr [EBP + 0xffffffdc]   ; 0053066e
    FISTP dword ptr [EBP + 0xffffffe0]  ; 00530674
    CMP dword ptr [EBP + -0x20],0x8000  ; 0053067a
    JGE 0x00530792                      ; 00530681
        ;   XREF to: 00530792 (CONDITIONAL_JUMP)  ; LAB_00530792
    CMP dword ptr [EBP + -0x20],0xffff8000 ; 00530687
    JGE 0x00530697                      ; 0053068e
        ;   XREF to: 00530697 (CONDITIONAL_JUMP)  ; LAB_00530697
    MOV dword ptr [EBP + -0x20],0xffff8000 ; 00530690
    MOV EBX,dword ptr [EBP + -0x38]     ; 00530697
        ;   Label: LAB_00530697
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053069a
    ADD EBX,EBX                         ; 0053069d
    ADD EBX,EAX                         ; 0053069f
    MOV EAX,dword ptr [EBP + -0x20]     ; 005306a1
    MOV word ptr [EBX],AX               ; 005306a4
    MOV EAX,dword ptr [EBP + -0x38]     ; 005306a7
    INC dword ptr [EBP + -0x38]         ; 005306aa
    CMP dword ptr [EBP + -0x38],0x20    ; 005306ad
    JL 0x00530607                       ; 005306b1
        ;   XREF to: 00530607 (CONDITIONAL_JUMP)  ; LAB_00530607
    MOV ESP,EBP                         ; 005306b7
        ;   Label: LAB_005306b7
    POP EBP                             ; 005306b9
    POP EDI                             ; 005306ba
    POP ESI                             ; 005306bb
    POP EBX                             ; 005306bc
    RET                                 ; 005306bd
    XOR ECX,ECX                         ; 005306be
        ;   Label: LAB_005306be
    MOV EBX,0x2f43980                   ; 005306c0 | g_MpegSynthesisDctTable
    MOV dword ptr [EBP + -0xc],ECX      ; 005306c5
    MOV dword ptr [EBP + -0x14],EBX     ; 005306c8 | g_MpegSynthesisDctTable
    MOV EBX,dword ptr [EBP + -0x14]     ; 005306cb | g_MpegSynthesisDctTable
        ;   Label: LAB_005306cb
    MOV EDI,0x1                         ; 005306ce
    MOV ESI,EBX                         ; 005306d3
    MOV EAX,dword ptr [EBP + -0xc]      ; 005306d5
        ;   Label: LAB_005306d5
    MOV dword ptr [EBP + -0x4],EAX      ; 005306d8
    FILD dword ptr [EBP + -0x4]         ; 005306db
    FMUL double ptr [0x0063ae5a]        ; 005306de | DOUBLE_0063ae5a
    FADD double ptr [0x0063ae72]        ; 005306e4 | DOUBLE_0063ae72
    MOV dword ptr [EBP + -0x4],EDI      ; 005306ea
    FILD dword ptr [EBP + -0x4]         ; 005306ed
    FMULP                               ; 005306f0
    FCOS                                ; 005306f2
    FMUL double ptr [0x0063ae62]        ; 005306f4 | DOUBLE_0063ae62
    FLDZ                                ; 005306fa
    FXCH                                ; 005306fc
    FSTP float ptr [EBX]                ; 005306fe | g_MpegSynthesisDctTable | DAT_02f43984 | DAT_02f43a00
    FCOMP float ptr [EBX]               ; 00530700 | g_MpegSynthesisDctTable | DAT_02f43984 | DAT_02f43a00
    FNSTSW AX                           ; 00530702
    SAHF                                ; 00530704
    JA 0x00530771                       ; 00530705
        ;   XREF to: 00530771 (CONDITIONAL_JUMP)  ; LAB_00530771
    FLD float ptr [EBX]                 ; 00530707 | g_MpegSynthesisDctTable
    LEA EAX,[EBP + -0x54]               ; 00530709
    FSTP double ptr [EBP + -0x54]       ; 0053070c
    FLD float ptr [EBX]                 ; 0053070f | g_MpegSynthesisDctTable
    PUSH EAX                            ; 00530711
    FADD double ptr [0x0063ae82]        ; 00530712 | DOUBLE_0063ae82
    SUB ESP,0x8                         ; 00530718
    FSTP double ptr [ESP]               ; 0053071b
    CALL crt_math.c_modf_FUN_00602102   ; 0053071e
        ;   XREF to: 00602102 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_00602102(double value, double * integer_part)
    FLD double ptr [EBP + -0x54]        ; 00530723
    ADD ESP,0xc                         ; 00530726
        ;   Label: LAB_00530726
    FSTP float ptr [EBX]                ; 00530729 | g_MpegSynthesisDctTable | DAT_02f43984
    FLD float ptr [ESI]                 ; 0053072b | g_MpegSynthesisDctTable | DAT_02f43984
    FLD ST0                             ; 0053072d
    FMUL double ptr [0x0063ae6a]        ; 0053072f | DOUBLE_0063ae6a
    ADD EBX,0x4                         ; 00530735
    ADD EDI,0x2                         ; 00530738
    ADD ESI,0x4                         ; 0053073b
    FSTP ST1                            ; 0053073e
    FSTP float ptr [ESI + -0x4]         ; 00530740 | g_MpegSynthesisDctTable | DAT_02f43984
    CMP EDI,0x41                        ; 00530743
    JNZ 0x005306d5                      ; 00530746
        ;   XREF to: 005306d5 (CONDITIONAL_JUMP)  ; LAB_005306d5
    MOV EDI,dword ptr [EBP + -0xc]      ; 00530748
    MOV ESI,dword ptr [EBP + -0x14]     ; 0053074b
    INC EDI                             ; 0053074e
    ADD ESI,0x80                        ; 0053074f
    MOV dword ptr [EBP + -0xc],EDI      ; 00530755
    MOV dword ptr [EBP + -0x14],ESI     ; 00530758 | DAT_02f43a00
    CMP EDI,0x40                        ; 0053075b
    JL 0x005306cb                       ; 0053075e
        ;   XREF to: 005306cb (CONDITIONAL_JUMP)  ; LAB_005306cb
    XOR EDX,EDX                         ; 00530764
    MOV dword ptr [0x0067e170],EDX      ; 00530766 | g_MpegSynthesisTableInitialized
    JMP 0x00530509                      ; 0053076c
        ;   XREF to: 00530509 (UNCONDITIONAL_JUMP)  ; LAB_00530509
    FLD float ptr [EBX]                 ; 00530771 | g_MpegSynthesisDctTable | DAT_02f43984
        ;   Label: LAB_00530771
    LEA EAX,[EBP + -0x4c]               ; 00530773
    FSTP double ptr [EBP + -0x4c]       ; 00530776
    FLD float ptr [EBX]                 ; 00530779 | g_MpegSynthesisDctTable | DAT_02f43984
    PUSH EAX                            ; 0053077b
    FADD double ptr [0x0063ae7a]        ; 0053077c | DOUBLE_0063ae7a
    SUB ESP,0x8                         ; 00530782
    FSTP double ptr [ESP]               ; 00530785
    CALL crt_math.c_modf_FUN_00602102   ; 00530788
        ;   XREF to: 00602102 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_00602102(double value, double * integer_part)
    FLD double ptr [EBP + -0x4c]        ; 0053078d
    JMP 0x00530726                      ; 00530790
        ;   XREF to: 00530726 (UNCONDITIONAL_JUMP)  ; LAB_00530726
    MOV dword ptr [EBP + -0x20],0x7fff  ; 00530792
        ;   Label: LAB_00530792
    JMP 0x00530697                      ; 00530799
        ;   XREF to: 00530697 (UNCONDITIONAL_JUMP)  ; LAB_00530697

