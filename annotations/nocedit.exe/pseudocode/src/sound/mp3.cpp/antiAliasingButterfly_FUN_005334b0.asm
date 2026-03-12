; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegFrame *frame_info,SMpegFrameHeader *header)
;
; Parameters:
; float *          Stack[0x4]:4   input_samples
; float *          Stack[0x8]:4   output_samples
; SMpegFrame *     Stack[0xc]:4   frame_info
; SMpegFrameHeader * Stack[0x10]:4   header
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  uStack_44
; float *          Stack[-0x30]:4  local_30
; float *          Stack[-0x2c]:4  local_2c
; float *          Stack[-0x28]:4  local_28
; float *          Stack[-0x24]:4  local_24
; float *          Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535974
;
; Referenced Globals:
;   int g_Mp3AntiAliasInitialized = 0x1
;   double[8] g_Mp3AntiAliasCSSource
;   undefined4 DAT_0067e1d8
;   double[8] g_Mp3AntiAliasCS
;   undefined4 DAT_02f46610
;   double[8] g_Mp3AntiAliasCA
;   undefined4 DAT_02f46648+4
;   undefined4 DAT_02f46650
;   undefined4 DAT_02f46650+4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005334b0
        ;   Label: sound_mp3.cpp_antiAliasingButterfly_FUN_005334b0
    PUSH ESI                            ; 005334b1
    PUSH EDI                            ; 005334b2
    PUSH EBP                            ; 005334b3
    MOV EBP,ESP                         ; 005334b4
    SUB ESP,0x38                        ; 005334b6
    AND ESP,0xfffffff8                  ; 005334b9
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005334bc
    CMP dword ptr [0x0067e1cc],0x0      ; 005334bf | g_Mp3AntiAliasInitialized
    JZ 0x00533513                       ; 005334c6
        ;   XREF to: 00533513 (CONDITIONAL_JUMP)  ; LAB_00533513
    XOR EDX,EDX                         ; 005334c8
    FLD double ptr [EDX + 0x67e1d0]     ; 005334ca | g_Mp3AntiAliasCSSource | DAT_0067e1d8
        ;   Label: LAB_005334ca
    FMUL ST0                            ; 005334d0
    FLD1                                ; 005334d2
    FADDP                               ; 005334d4
    FSQRT                               ; 005334d6
    FLD1                                ; 005334d8
    FDIVRP                              ; 005334da
    FLD double ptr [EDX + 0x67e1d0]     ; 005334dc | g_Mp3AntiAliasCSSource | DAT_0067e1d8
    ADD EDX,0x8                         ; 005334e2
    FXCH                                ; 005334e5
    FSTP double ptr [ESP]               ; 005334e7
    MOV EAX,dword ptr [ESP]             ; 005334ea
    FMUL double ptr [ESP]               ; 005334ed
    MOV dword ptr [EDX + 0x2f46640],EAX ; 005334f0 | g_Mp3AntiAliasCA | DAT_02f46650
    MOV EAX,dword ptr [ESP + 0x4]       ; 005334f6
    FSTP double ptr [EDX + 0x2f46600]   ; 005334fa | g_Mp3AntiAliasCS | DAT_02f46610
    MOV dword ptr [EDX + 0x2f46644],EAX ; 00533500 | DAT_02f46648+4 | DAT_02f46650+4
    CMP EDX,0x40                        ; 00533506
    JNZ 0x005334ca                      ; 00533509
        ;   XREF to: 005334ca (CONDITIONAL_JUMP)  ; LAB_005334ca
    XOR ECX,ECX                         ; 0053350b
    MOV dword ptr [0x0067e1cc],ECX      ; 0053350d | g_Mp3AntiAliasInitialized
    MOV ESI,dword ptr [EBP + 0x14]      ; 00533513
        ;   Label: LAB_00533513
    MOV EAX,dword ptr [EBP + 0x18]      ; 00533516
    XOR EBX,EBX                         ; 00533519
    ADD ESI,0x48                        ; 0053351b
    MOV dword ptr [ESP + 0x24],EAX      ; 0053351e
    IMUL EAX,EBX,0x48                   ; 00533522
        ;   Label: LAB_00533522
    MOV EDX,dword ptr [EBP + 0x14]      ; 00533525
    MOV ECX,ESI                         ; 00533528
    ADD EAX,EDX                         ; 0053352a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0053352c
    ADD EDX,0x4                         ; 00533530
        ;   Label: LAB_00533530
    FLD float ptr [EAX]                 ; 00533533
    ADD EAX,0x4                         ; 00533535
    FSTP float ptr [EDX + -0x4]         ; 00533538
    CMP EAX,ECX                         ; 0053353b
    JNZ 0x00533530                      ; 0053353d
        ;   XREF to: 00533530 (CONDITIONAL_JUMP)  ; LAB_00533530
    MOV ECX,dword ptr [ESP + 0x24]      ; 0053353f
    INC EBX                             ; 00533543
    ADD ECX,0x48                        ; 00533544
    ADD ESI,0x48                        ; 00533547
    MOV dword ptr [ESP + 0x24],ECX      ; 0053354a
    CMP EBX,0x20                        ; 0053354e
    JL 0x00533522                       ; 00533551
        ;   XREF to: 00533522 (CONDITIONAL_JUMP)  ; LAB_00533522
    CMP dword ptr [EDI + 0x10],0x0      ; 00533553
    JZ 0x00533569                       ; 00533557
        ;   XREF to: 00533569 (CONDITIONAL_JUMP)  ; LAB_00533569
    CMP dword ptr [EDI + 0x14],0x2      ; 00533559
    JNZ 0x00533569                      ; 0053355d
        ;   XREF to: 00533569 (CONDITIONAL_JUMP)  ; LAB_00533569
    CMP dword ptr [EDI + 0x18],0x0      ; 0053355f
    JZ 0x00533671                       ; 00533563
        ;   XREF to: 00533671 (CONDITIONAL_JUMP)  ; LAB_00533671
    CMP dword ptr [EDI + 0x10],0x0      ; 00533569
        ;   Label: LAB_00533569
    JZ 0x00533678                       ; 0053356d
        ;   XREF to: 00533678 (CONDITIONAL_JUMP)  ; LAB_00533678
    CMP dword ptr [EDI + 0x18],0x0      ; 00533573
    JZ 0x00533678                       ; 00533577
        ;   XREF to: 00533678 (CONDITIONAL_JUMP)  ; LAB_00533678
    CMP dword ptr [EDI + 0x14],0x2      ; 0053357d
    JNZ 0x00533678                      ; 00533581
        ;   XREF to: 00533678 (CONDITIONAL_JUMP)  ; LAB_00533678
    MOV dword ptr [ESP + 0x34],0x1      ; 00533587
    XOR EDX,EDX                         ; 0053358f
        ;   Label: LAB_0053358f
    MOV ECX,dword ptr [ESP + 0x34]      ; 00533591
    MOV dword ptr [ESP + 0x2c],EDX      ; 00533595
    TEST ECX,ECX                        ; 00533599
    JLE 0x00533671                      ; 0053359b
        ;   XREF to: 00533671 (CONDITIONAL_JUMP)  ; LAB_00533671
    MOV EAX,dword ptr [EBP + 0x18]      ; 005335a1
    ADD EAX,0x68                        ; 005335a4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005335a7
    MOV EAX,dword ptr [EBP + 0x18]      ; 005335ab
    MOV dword ptr [ESP + 0x20],EAX      ; 005335ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 005335b2
    ADD EAX,0x48                        ; 005335b5
    MOV dword ptr [ESP + 0x28],EAX      ; 005335b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005335bc
    MOV dword ptr [ESP + 0x18],EAX      ; 005335bf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005335c3
        ;   Label: LAB_005335c3
    INC EAX                             ; 005335c7
    IMUL EAX,EAX,0x48                   ; 005335c8
    MOV EDX,dword ptr [EBP + 0x18]      ; 005335cb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005335ce
    MOV ESI,dword ptr [ESP + 0x28]      ; 005335d2
    MOV ECX,dword ptr [ESP + 0x18]      ; 005335d6
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005335da
    ADD EBX,0x44                        ; 005335de
    MOV dword ptr [ESP + 0x30],EDI      ; 005335e1
    ADD ECX,0x44                        ; 005335e5
    MOV EDI,dword ptr [ESP + 0x30]      ; 005335e8
    ADD EDX,EAX                         ; 005335ec
    XOR EAX,EAX                         ; 005335ee
    FLD float ptr [ECX]                 ; 005335f0
        ;   Label: LAB_005335f0
    FLD ST0                             ; 005335f2
    FMUL double ptr [EAX + 0x2f46648]   ; 005335f4 | g_Mp3AntiAliasCA | DAT_02f46650
    FLD float ptr [ESI]                 ; 005335fa
    FLD ST0                             ; 005335fc
    FMUL double ptr [EAX + 0x2f46608]   ; 005335fe | g_Mp3AntiAliasCS | DAT_02f46610
    FSUBP ST2,ST0                       ; 00533604
    FXCH                                ; 00533606
    FSTP float ptr [EBX]                ; 00533608
    FMUL double ptr [EAX + 0x2f46648]   ; 0053360a | g_Mp3AntiAliasCA | DAT_02f46650
    FXCH                                ; 00533610
    FMUL double ptr [EAX + 0x2f46608]   ; 00533612 | g_Mp3AntiAliasCS | DAT_02f46610
    ADD EDX,0x4                         ; 00533618
    SUB EBX,0x4                         ; 0053361b
    ADD EAX,0x8                         ; 0053361e
    ADD ESI,0x4                         ; 00533621
    FADDP                               ; 00533624
    SUB ECX,0x4                         ; 00533626
    FSTP float ptr [EDX + -0x4]         ; 00533629
    CMP EDX,EDI                         ; 0053362c
    JNZ 0x005335f0                      ; 0053362e
        ;   XREF to: 005335f0 (CONDITIONAL_JUMP)  ; LAB_005335f0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00533630
    MOV ESI,dword ptr [ESP + 0x20]      ; 00533634
    MOV EDI,dword ptr [ESP + 0x28]      ; 00533638
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053363c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00533640
    MOV ECX,dword ptr [ESP + 0x34]      ; 00533644
    ADD EBX,0x48                        ; 00533648
    ADD ESI,0x48                        ; 0053364b
    ADD EDI,0x48                        ; 0053364e
    ADD EAX,0x48                        ; 00533651
    INC EDX                             ; 00533654
    MOV dword ptr [ESP + 0x1c],EBX      ; 00533655
    MOV dword ptr [ESP + 0x20],ESI      ; 00533659
    MOV dword ptr [ESP + 0x28],EDI      ; 0053365d
    MOV dword ptr [ESP + 0x18],EAX      ; 00533661
    MOV dword ptr [ESP + 0x2c],EDX      ; 00533665
    CMP EDX,ECX                         ; 00533669
    JL 0x005335c3                       ; 0053366b
        ;   XREF to: 005335c3 (CONDITIONAL_JUMP)  ; LAB_005335c3
    MOV ESP,EBP                         ; 00533671
        ;   Label: LAB_00533671
    POP EBP                             ; 00533673
    POP EDI                             ; 00533674
    POP ESI                             ; 00533675
    POP EBX                             ; 00533676
    RET                                 ; 00533677
    MOV dword ptr [ESP + 0x34],0x1f     ; 00533678
        ;   Label: LAB_00533678
    JMP 0x0053358f                      ; 00533680
        ;   XREF to: 0053358f (UNCONDITIONAL_JUMP)  ; LAB_0053358f

