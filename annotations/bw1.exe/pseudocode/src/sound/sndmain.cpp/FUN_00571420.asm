; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00571420(CSfxSlot *param_1)
;
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined8       Stack[-0x74]:8  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
;
; XREF[2]:
;   sound_sndmain.cpp_nextMixingBuffer_FUN_0056f6d0 at 0056f820
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00576c20 at 00576e12
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3928
;   TerminatedCString s_SfxSlot_mix_must_be_lock_005f393d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c80678
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_memset_FUN_005bfb70
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00572030
;   sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0056fb90
;   sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0056fcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571420
        ;   Label: sound_sndmain.cpp_FUN_00571420
    PUSH ESI                            ; 00571421
    PUSH EDI                            ; 00571422
    PUSH EBP                            ; 00571423
    MOV EBP,ESP                         ; 00571424
    SUB ESP,0xcc                        ; 00571426
    AND ESP,0xfffffff8                  ; 0057142c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057142f
    CMP dword ptr [0x02c807ec],0x0      ; 00571432 | DAT_02c807ec
    JLE 0x005715c4                      ; 00571439
        ;   XREF to: 005715c4 (CONDITIONAL_JUMP)  ; LAB_005715c4
    CMP dword ptr [EDI + 0x64],0x0      ; 0057143f
        ;   Label: LAB_0057143f
    JZ 0x005715bd                       ; 00571443
        ;   XREF to: 005715bd (CONDITIONAL_JUMP)  ; LAB_005715bd
    MOV EAX,dword ptr [EBP + 0x38]      ; 00571449
    MOV dword ptr [ESP + 0x7c],EAX      ; 0057144c
    MOV EAX,0x1                         ; 00571450
    MOV EDX,dword ptr [EDI + 0x68]      ; 00571455
    MOV dword ptr [ESP + 0x78],EAX      ; 00571458
    TEST EDX,EDX                        ; 0057145c
    JZ 0x00571484                       ; 0057145e
        ;   XREF to: 00571484 (CONDITIONAL_JUMP)  ; LAB_00571484
    MOV EBX,dword ptr [EBP + 0x3c]      ; 00571460
    XOR ECX,ECX                         ; 00571463
    TEST EBX,EBX                        ; 00571465
    JLE 0x00571484                      ; 00571467
        ;   XREF to: 00571484 (CONDITIONAL_JUMP)  ; LAB_00571484
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00571469
    MOV EDX,EDI                         ; 0057146c
    CMP dword ptr [EDX + 0x90],0x3c000000 ; 0057146e
        ;   Label: LAB_0057146e
    JLE 0x005715ec                      ; 00571478
        ;   XREF to: 005715ec (CONDITIONAL_JUMP)  ; LAB_005715ec
    XOR ESI,ESI                         ; 0057147e
    MOV dword ptr [ESP + 0x78],ESI      ; 00571480
    MOV EAX,dword ptr [EBP + 0x3c]      ; 00571484
        ;   Label: LAB_00571484
    XOR ESI,ESI                         ; 00571487
    TEST EAX,EAX                        ; 00571489
    JLE 0x0057150b                      ; 0057148b
        ;   XREF to: 0057150b (CONDITIONAL_JUMP)  ; LAB_0057150b
    MOV EBX,EDI                         ; 00571491
    CMP dword ptr [ESP + 0x78],0x0      ; 00571493
        ;   Label: LAB_00571493
    JZ 0x005715fd                       ; 00571498
        ;   XREF to: 005715fd (CONDITIONAL_JUMP)  ; LAB_005715fd
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0057149e
        ;   Label: LAB_0057149e
    MOV dword ptr [EBX + 0xd0],EAX      ; 005714a4
    MOV EAX,dword ptr [EBX + 0xd0]      ; 005714aa
        ;   Label: LAB_005714aa
    LEA ECX,[ESI*0x4 + 0x0]             ; 005714b0
    SHL EAX,0x2                         ; 005714b7
    ADD dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 005714ba
    MOV EAX,dword ptr [EBX + 0xd0]      ; 005714be
    SUB EAX,dword ptr [EBX + 0xb0]      ; 005714c4
    CDQ                                 ; 005714ca
    XOR EAX,EDX                         ; 005714cb
    SUB EAX,EDX                         ; 005714cd
    CMP EAX,0x1                         ; 005714cf
    JLE 0x0057160f                      ; 005714d2
        ;   XREF to: 0057160f (CONDITIONAL_JUMP)  ; LAB_0057160f
    MOV EAX,dword ptr [ECX + EBP*0x1 + 0x18] ; 005714d8
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 005714dc
    MOV EAX,dword ptr [ECX + 0x2c80674] ; 005714e0 | DAT_02c80678
    MOV dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 005714e6
    MOV EAX,dword ptr [EBP + 0x38]      ; 005714ea
    SHL EAX,0x2                         ; 005714ed
    PUSH EAX                            ; 005714f0
    PUSH 0x0                            ; 005714f1
    MOV EDX,dword ptr [ECX + EBP*0x1 + 0x18] ; 005714f3
    PUSH EDX                            ; 005714f7
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005714f8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005714fd
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00571500
        ;   Label: LAB_00571500
    INC ESI                             ; 00571503
    ADD EBX,0x4                         ; 00571504
    CMP ESI,EDX                         ; 00571507
    JL 0x00571493                       ; 00571509
        ;   XREF to: 00571493 (CONDITIONAL_JUMP)  ; LAB_00571493
    MOV ECX,dword ptr [EDI + 0x68]      ; 0057150b
        ;   Label: LAB_0057150b
    MOV ECX,dword ptr [ECX + 0x104]     ; 0057150e
    MOV EAX,0x1                         ; 00571514
    DEC ECX                             ; 00571519
    SHL EAX,CL                          ; 0057151a
    MOV dword ptr [ESP + 0xc8],EAX      ; 0057151c
    FILD dword ptr [ESP + 0xc8]         ; 00571523
    FLD1                                ; 0057152a
    FDIVRP                              ; 0057152c
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0057152e
    XOR EAX,EAX                         ; 00571531
    FSTP float ptr [ESP + 0x74]         ; 00571533
    TEST ECX,ECX                        ; 00571537
    JLE 0x0057155a                      ; 00571539
        ;   XREF to: 0057155a (CONDITIONAL_JUMP)  ; LAB_0057155a
    FLD float ptr [ESP + 0x74]          ; 0057153b
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0057153f
    MOV EDX,EDI                         ; 00571542
    FLD float ptr [EDX + 0x90]          ; 00571544
        ;   Label: LAB_00571544
    FMUL ST1                            ; 0057154a
    INC EAX                             ; 0057154c
    ADD EDX,0x4                         ; 0057154d
    FSTP float ptr [ESP + EAX*0x4 + 0x38] ; 00571550
    CMP EAX,ECX                         ; 00571554
    JL 0x00571544                       ; 00571556
        ;   XREF to: 00571544 (CONDITIONAL_JUMP)  ; LAB_00571544
    FSTP ST0                            ; 00571558
    CMP dword ptr [EDI + 0x64],0x0      ; 0057155a
        ;   Label: LAB_0057155a
    JNZ 0x0057161a                      ; 0057155e
        ;   XREF to: 0057161a (CONDITIONAL_JUMP)  ; LAB_0057161a
    PUSH EDI                            ; 00571564
        ;   Label: LAB_00571564
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00571565
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0057156a
    XOR EAX,EAX                         ; 0057156d
        ;   Label: LAB_0057156d
    MOV EDX,dword ptr [EBP + 0x3c]      ; 0057156f
    MOV dword ptr [ESP + 0x80],EAX      ; 00571572
    TEST EDX,EDX                        ; 00571579
    JLE 0x005715bd                      ; 0057157b
        ;   XREF to: 005715bd (CONDITIONAL_JUMP)  ; LAB_005715bd
    MOV dword ptr [ESP + 0x90],EAX      ; 0057157d
    MOV EAX,dword ptr [ESP + 0x90]      ; 00571584
        ;   Label: LAB_00571584
    CMP dword ptr [ESP + EAX*0x1 + 0x1c],0x0 ; 0057158b
    JNZ 0x00571ca8                      ; 00571590
        ;   XREF to: 00571ca8 (CONDITIONAL_JUMP)  ; LAB_00571ca8
    MOV EAX,dword ptr [ESP + 0x90]      ; 00571596
        ;   Label: LAB_00571596
    MOV EDX,dword ptr [ESP + 0x80]      ; 0057159d
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005715a4
    ADD EAX,0x4                         ; 005715a7
    INC EDX                             ; 005715aa
    MOV dword ptr [ESP + 0x90],EAX      ; 005715ab
    MOV dword ptr [ESP + 0x80],EDX      ; 005715b2
    CMP EDX,ECX                         ; 005715b9
    JL 0x00571584                       ; 005715bb
        ;   XREF to: 00571584 (CONDITIONAL_JUMP)  ; LAB_00571584
    MOV ESP,EBP                         ; 005715bd
        ;   Label: LAB_005715bd
    POP EBP                             ; 005715bf
    POP EDI                             ; 005715c0
    POP ESI                             ; 005715c1
    POP EBX                             ; 005715c2
    RET                                 ; 005715c3
    MOV ECX,0x5f3928                    ; 005715c4 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005715c4
    MOV EBX,0xb9d                       ; 005715c9
    PUSH 0x5f393d                       ; 005715ce | = "SfxSlot::mix - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 005715d3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005715d9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005715df
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005715e4
    JMP 0x0057143f                      ; 005715e7
        ;   XREF to: 0057143f (UNCONDITIONAL_JUMP)  ; LAB_0057143f
    INC ECX                             ; 005715ec
        ;   Label: LAB_005715ec
    ADD EDX,0x4                         ; 005715ed
    CMP ECX,ESI                         ; 005715f0
    JL 0x0057146e                       ; 005715f2
        ;   XREF to: 0057146e (CONDITIONAL_JUMP)  ; LAB_0057146e
    JMP 0x00571484                      ; 005715f8
        ;   XREF to: 00571484 (UNCONDITIONAL_JUMP)  ; LAB_00571484
    CMP dword ptr [EBX + 0xd0],0x0      ; 005715fd
        ;   Label: LAB_005715fd
    JL 0x0057149e                       ; 00571604
        ;   XREF to: 0057149e (CONDITIONAL_JUMP)  ; LAB_0057149e
    JMP 0x005714aa                      ; 0057160a
        ;   XREF to: 005714aa (UNCONDITIONAL_JUMP)  ; LAB_005714aa
    XOR EAX,EAX                         ; 0057160f
        ;   Label: LAB_0057160f
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 00571611
    JMP 0x00571500                      ; 00571615
        ;   XREF to: 00571500 (UNCONDITIONAL_JUMP)  ; LAB_00571500
    MOV ESI,dword ptr [EDI + 0x68]      ; 0057161a
        ;   Label: LAB_0057161a
    TEST ESI,ESI                        ; 0057161d
    JZ 0x00571564                       ; 0057161f
        ;   XREF to: 00571564 (CONDITIONAL_JUMP)  ; LAB_00571564
    FLDZ                                ; 00571625
    FCOMP double ptr [EDI + 0x50]       ; 00571627
    FNSTSW AX                           ; 0057162a
    SAHF                                ; 0057162c
    JA 0x00571564                       ; 0057162d
        ;   XREF to: 00571564 (CONDITIONAL_JUMP)  ; LAB_00571564
    CMP dword ptr [EBP + 0x38],0x1      ; 00571633
    JL 0x0057156d                       ; 00571637
        ;   XREF to: 0057156d (CONDITIONAL_JUMP)  ; LAB_0057156d
    MOV EDX,ESI                         ; 0057163d
    FILD dword ptr [EDX + 0x10c]        ; 0057163f
    FILD dword ptr [EBP + 0x40]         ; 00571645
    FDIVP                               ; 00571648
    FMUL float ptr [EDI + 0x6c]         ; 0057164a
    FLDZ                                ; 0057164d
    FXCH                                ; 0057164f
    FSTP double ptr [ESP + 0x8]         ; 00571651
    FCOMP double ptr [ESP + 0x8]        ; 00571655
    FNSTSW AX                           ; 00571659
    SAHF                                ; 0057165b
    JNC 0x0057156d                      ; 0057165c
        ;   XREF to: 0057156d (CONDITIONAL_JUMP)  ; LAB_0057156d
    FILD dword ptr [EDX + 0x164]        ; 00571662
    MOV EAX,dword ptr [EBP + 0x38]      ; 00571668
    FSTP double ptr [ESP]               ; 0057166b
    XOR ECX,ECX                         ; 0057166e
    MOV EBX,dword ptr [ESI + 0x110]     ; 00571670
    MOV dword ptr [ESP + 0x84],ECX      ; 00571676
    MOV dword ptr [ESP + 0x18],EAX      ; 0057167d
    TEST EBX,EBX                        ; 00571681
    JLE 0x005716ec                      ; 00571683
        ;   XREF to: 005716ec (CONDITIONAL_JUMP)  ; LAB_005716ec
    MOV EAX,dword ptr [EDI + 0x114]     ; 00571685
    FILD dword ptr [EDX + EAX*0x4 + 0x128] ; 0057168b
    FSUB double ptr [EDI + 0x50]        ; 00571692
    FDIV double ptr [ESP + 0x8]         ; 00571695
    SUB ESP,0x8                         ; 00571699
    FSTP double ptr [ESP]               ; 0057169c
    CALL crt_math.c_floor_FUN_005c0880  ; 0057169f
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 005716a4
    MOV dword ptr [ESP + 0x78],EDX      ; 005716a8
    FLD double ptr [ESP + 0x74]         ; 005716ac
    ADD ESP,0x8                         ; 005716b0
    CALL crt_math.c_round_FUN_005c03a0  ; 005716b3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8c]        ; 005716b8
    CMP dword ptr [ESP + 0x8c],0x0      ; 005716bf
    JL 0x005718b6                       ; 005716c7
        ;   XREF to: 005718b6 (CONDITIONAL_JUMP)  ; LAB_005718b6
    MOV EAX,dword ptr [ESP + 0x18]      ; 005716cd
        ;   Label: LAB_005716cd
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005716d1
    CMP EAX,EDX                         ; 005716d8
    JLE 0x005716ec                      ; 005716da
        ;   XREF to: 005716ec (CONDITIONAL_JUMP)  ; LAB_005716ec
    MOV ECX,0x1                         ; 005716dc
    MOV dword ptr [ESP + 0x18],EDX      ; 005716e1
    MOV dword ptr [ESP + 0x84],ECX      ; 005716e5
    CMP dword ptr [ESP + 0x18],0x0      ; 005716ec
        ;   Label: LAB_005716ec
    JL 0x005718c4                       ; 005716f1
        ;   XREF to: 005718c4 (CONDITIONAL_JUMP)  ; LAB_005718c4
    MOV EAX,dword ptr [EDI + 0x10c]     ; 005716f7
        ;   Label: LAB_005716f7
    MOV dword ptr [ESP + 0x10],EAX      ; 005716fd
    MOV EAX,dword ptr [EDI + 0x110]     ; 00571701
    MOV dword ptr [ESP + 0x14],EAX      ; 00571707
    FLD double ptr [ESP]                ; 0057170b
    FSUB double ptr [ESP + 0x10]        ; 0057170e
    FDIV double ptr [ESP + 0x8]         ; 00571712
    XOR EAX,EAX                         ; 00571716
    MOV dword ptr [ESP + 0x88],EAX      ; 00571718
    SUB ESP,0x8                         ; 0057171f
    FSTP double ptr [ESP]               ; 00571722
    CALL crt_math.c_floor_FUN_005c0880  ; 00571725
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 0057172a
    MOV dword ptr [ESP + 0x78],EDX      ; 0057172e
    FLD double ptr [ESP + 0x74]         ; 00571732
    ADD ESP,0x8                         ; 00571736
    CALL crt_math.c_round_FUN_005c03a0  ; 00571739
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x94]        ; 0057173e
    CMP dword ptr [ESP + 0x94],0x1      ; 00571745
    JGE 0x005717a2                      ; 0057174d
        ;   XREF to: 005717a2 (CONDITIONAL_JUMP)  ; LAB_005717a2
    FLD double ptr [ESP + 0x10]         ; 0057174f
    FSUB double ptr [ESP]               ; 00571753
    FLDZ                                ; 00571756
    FXCH                                ; 00571758
    FSTP double ptr [ESP + 0x10]        ; 0057175a
    FCOMP double ptr [ESP + 0x10]       ; 0057175e
    FNSTSW AX                           ; 00571762
    SAHF                                ; 00571764
    JBE 0x00571771                      ; 00571765
        ;   XREF to: 00571771 (CONDITIONAL_JUMP)  ; LAB_00571771
    XOR ECX,ECX                         ; 00571767
    MOV dword ptr [ESP + 0x10],ECX      ; 00571769
    MOV dword ptr [ESP + 0x14],ECX      ; 0057176d
    FLD double ptr [ESP]                ; 00571771
        ;   Label: LAB_00571771
    FSUB double ptr [ESP + 0x10]        ; 00571774
    FDIV double ptr [ESP + 0x8]         ; 00571778
    SUB ESP,0x8                         ; 0057177c
    FSTP double ptr [ESP]               ; 0057177f
    CALL crt_math.c_floor_FUN_005c0880  ; 00571782
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 00571787
    MOV dword ptr [ESP + 0x78],EDX      ; 0057178b
    FLD double ptr [ESP + 0x74]         ; 0057178f
    ADD ESP,0x8                         ; 00571793
    CALL crt_math.c_round_FUN_005c03a0  ; 00571796
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x94]        ; 0057179b
    MOV EAX,dword ptr [ESP + 0x94]      ; 005717a2
        ;   Label: LAB_005717a2
    MOV ESI,dword ptr [ESP + 0x18]      ; 005717a9
    CMP EAX,ESI                         ; 005717ad
    JGE 0x005718cf                      ; 005717af
        ;   XREF to: 005718cf (CONDITIONAL_JUMP)  ; LAB_005718cf
    MOV ESI,0x1                         ; 005717b5
    XOR EBX,EBX                         ; 005717ba
    MOV dword ptr [ESP + 0x18],EAX      ; 005717bc
    MOV dword ptr [ESP + 0x84],EBX      ; 005717c0
    MOV dword ptr [ESP + 0x88],ESI      ; 005717c7
    CMP dword ptr [ESP + 0x18],0x0      ; 005717ce
        ;   Label: LAB_005717ce
    JL 0x005718e5                       ; 005717d3
        ;   XREF to: 005718e5 (CONDITIONAL_JUMP)  ; LAB_005718e5
    CMP dword ptr [ESP + 0x78],0x0      ; 005717d9
        ;   Label: LAB_005717d9
    JZ 0x005718f0                       ; 005717de
        ;   XREF to: 005718f0 (CONDITIONAL_JUMP)  ; LAB_005718f0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005717e4
    MOV dword ptr [ESP + 0xc8],EAX      ; 005717e8
    FILD dword ptr [ESP + 0xc8]         ; 005717ef
    FMUL double ptr [ESP + 0x8]         ; 005717f6
    FADD double ptr [ESP + 0x10]        ; 005717fa
    FSTP double ptr [ESP + 0x10]        ; 005717fe
        ;   Label: LAB_005717fe
    CMP dword ptr [ESP + 0x88],0x0      ; 00571802
        ;   Label: LAB_00571802
    JZ 0x00571816                       ; 0057180a
        ;   XREF to: 00571816 (CONDITIONAL_JUMP)  ; LAB_00571816
    XOR ESI,ESI                         ; 0057180c
    MOV dword ptr [ESP + 0x10],ESI      ; 0057180e
    MOV dword ptr [ESP + 0x14],ESI      ; 00571812
    FLD double ptr [ESP + 0x10]         ; 00571816
        ;   Label: LAB_00571816
    FCOMP double ptr [ESP]              ; 0057181a
    FNSTSW AX                           ; 0057181d
    SAHF                                ; 0057181f
    JC 0x0057182d                       ; 00571820
        ;   XREF to: 0057182d (CONDITIONAL_JUMP)  ; LAB_0057182d
    FLD double ptr [ESP + 0x10]         ; 00571822
    FSUB double ptr [ESP]               ; 00571826
    FSTP double ptr [ESP + 0x10]        ; 00571829
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057182d
        ;   Label: LAB_0057182d
    PUSH EDX                            ; 00571831
    MOV ECX,dword ptr [ESP + 0x14]      ; 00571832
    PUSH ECX                            ; 00571836
    PUSH EDI                            ; 00571837
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00572030 ; 00571838
        ;   XREF to: 00572030 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00572030(CSfxSlot * this_ptr, double hardware_playback_pos)
    ADD ESP,0xc                         ; 0057183d
    CMP dword ptr [ESP + 0x84],0x0      ; 00571840
    JZ 0x0057187f                       ; 00571848
        ;   XREF to: 0057187f (CONDITIONAL_JUMP)  ; LAB_0057187f
    MOV EAX,dword ptr [EDI + 0x68]      ; 0057184a
    MOV ESI,dword ptr [EDI + 0x114]     ; 0057184d
    MOV EDX,dword ptr [EDI + 0x114]     ; 00571853
    INC ESI                             ; 00571859
    FILD dword ptr [EAX + EDX*0x4 + 0x13c] ; 0057185a
    MOV dword ptr [EDI + 0x114],ESI     ; 00571861
    MOV EDX,dword ptr [EDI + 0x68]      ; 00571867
    FSTP double ptr [EDI + 0x50]        ; 0057186a
    CMP ESI,dword ptr [EDX + 0x124]     ; 0057186d
    JL 0x0057187f                       ; 00571873
        ;   XREF to: 0057187f (CONDITIONAL_JUMP)  ; LAB_0057187f
    MOV dword ptr [EDI + 0x114],0x0     ; 00571875
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057187f
        ;   Label: LAB_0057187f
    MOV EBX,dword ptr [EBP + 0x38]      ; 00571883
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00571886
    SUB EBX,EAX                         ; 00571889
    XOR EDX,EDX                         ; 0057188b
    MOV dword ptr [EBP + 0x38],EBX      ; 0057188d
    TEST ESI,ESI                        ; 00571890
    JLE 0x0057155a                      ; 00571892
        ;   XREF to: 0057155a (CONDITIONAL_JUMP)  ; LAB_0057155a
    LEA ECX,[EAX*0x4 + 0x0]             ; 00571898
    XOR EAX,EAX                         ; 0057189f
    ADD dword ptr [EAX + EBP*0x1 + 0x18],ECX ; 005718a1
        ;   Label: LAB_005718a1
    INC EDX                             ; 005718a5
    MOV ESI,dword ptr [EBP + 0x3c]      ; 005718a6
    ADD EAX,0x4                         ; 005718a9
    CMP EDX,ESI                         ; 005718ac
    JGE 0x0057155a                      ; 005718ae
        ;   XREF to: 0057155a (CONDITIONAL_JUMP)  ; LAB_0057155a
    JMP 0x005718a1                      ; 005718b4
        ;   XREF to: 005718a1 (UNCONDITIONAL_JUMP)  ; LAB_005718a1
    XOR EAX,EAX                         ; 005718b6
        ;   Label: LAB_005718b6
    MOV dword ptr [ESP + 0x8c],EAX      ; 005718b8
    JMP 0x005716cd                      ; 005718bf
        ;   XREF to: 005716cd (UNCONDITIONAL_JUMP)  ; LAB_005716cd
    XOR ESI,ESI                         ; 005718c4
        ;   Label: LAB_005718c4
    MOV dword ptr [ESP + 0x18],ESI      ; 005718c6
    JMP 0x005716f7                      ; 005718ca
        ;   XREF to: 005716f7 (UNCONDITIONAL_JUMP)  ; LAB_005716f7
    JNZ 0x005717ce                      ; 005718cf
        ;   XREF to: 005717ce (CONDITIONAL_JUMP)  ; LAB_005717ce
        ;   Label: LAB_005718cf
    MOV dword ptr [ESP + 0x88],0x1      ; 005718d5
    JMP 0x005717ce                      ; 005718e0
        ;   XREF to: 005717ce (UNCONDITIONAL_JUMP)  ; LAB_005717ce
    XOR EDX,EDX                         ; 005718e5
        ;   Label: LAB_005718e5
    MOV dword ptr [ESP + 0x18],EDX      ; 005718e7
    JMP 0x005717d9                      ; 005718eb
        ;   XREF to: 005717d9 (UNCONDITIONAL_JUMP)  ; LAB_005717d9
    MOV EAX,dword ptr [EDI + 0x68]      ; 005718f0
        ;   Label: LAB_005718f0
    MOV EDX,dword ptr [ESP + 0x18]      ; 005718f3
    MOV EBX,dword ptr [EAX + 0x104]     ; 005718f7
    SHL EDX,0x2                         ; 005718fd
    CMP EBX,0x8                         ; 00571900
    JNZ 0x00571aa9                      ; 00571903
        ;   XREF to: 00571aa9 (CONDITIONAL_JUMP)  ; LAB_00571aa9
    CMP dword ptr [EAX + 0x108],0x2     ; 00571909
    JNZ 0x00571a00                      ; 00571910
        ;   XREF to: 00571a00 (CONDITIONAL_JUMP)  ; LAB_00571a00
    CMP dword ptr [ESP + 0x18],0x0      ; 00571916
    JLE 0x00571802                      ; 0057191b
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    XOR EAX,EAX                         ; 00571921
    MOV dword ptr [ESP + 0xa0],EDX      ; 00571923
    MOV dword ptr [ESP + 0xb8],EAX      ; 0057192a
    FLD double ptr [ESP + 0x10]         ; 00571931
        ;   Label: LAB_00571931
    MOV EDX,dword ptr [EDI + 0x68]      ; 00571935
    CALL crt_math.c_round_FUN_005c03a0  ; 00571938
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EDX,dword ptr [EDX + 0x120]     ; 0057193d
    FISTP dword ptr [ESP + 0xc8]        ; 00571943
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0057194a
    MOV DL,byte ptr [EDX + EAX*0x2]     ; 00571951
    AND EDX,0xff                        ; 00571954
    SUB EDX,0x80                        ; 0057195a
    MOV dword ptr [ESP + 0xc8],EDX      ; 00571960
    FILD dword ptr [ESP + 0xc8]         ; 00571967
    FSTP float ptr [ESP + 0x5c]         ; 0057196e
    MOV EDX,dword ptr [EDI + 0x68]      ; 00571972
    MOV EDX,dword ptr [EDX + 0x120]     ; 00571975
    MOV AL,byte ptr [EDX + EAX*0x2 + 0x1] ; 0057197b
    AND EAX,0xff                        ; 0057197f
    SUB EAX,0x80                        ; 00571984
    MOV dword ptr [ESP + 0xc8],EAX      ; 00571989
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00571990
    FILD dword ptr [ESP + 0xc8]         ; 00571993
    FSTP float ptr [ESP + 0x60]         ; 0057199a
    XOR EAX,EAX                         ; 0057199e
    TEST EDX,EDX                        ; 005719a0
    JLE 0x005719cf                      ; 005719a2
        ;   XREF to: 005719cf (CONDITIONAL_JUMP)  ; LAB_005719cf
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005719a4
    XOR EDX,EDX                         ; 005719ab
    MOV EBX,EAX                         ; 005719ad
        ;   Label: LAB_005719ad
    AND EBX,0x1                         ; 005719af
    FLD float ptr [ESP + EBX*0x4 + 0x5c] ; 005719b2
    FMUL float ptr [ESP + EDX*0x1 + 0x3c] ; 005719b6
    MOV ECX,dword ptr [EDX + EBP*0x1 + 0x18] ; 005719ba
    FADD float ptr [ECX + ESI*0x1]      ; 005719be
    INC EAX                             ; 005719c1
    FSTP float ptr [ECX + ESI*0x1]      ; 005719c2
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005719c5
    ADD EDX,0x4                         ; 005719c8
    CMP EAX,ECX                         ; 005719cb
    JL 0x005719ad                       ; 005719cd
        ;   XREF to: 005719ad (CONDITIONAL_JUMP)  ; LAB_005719ad
    FLD double ptr [ESP + 0x10]         ; 005719cf
        ;   Label: LAB_005719cf
    MOV EBX,dword ptr [ESP + 0xb8]      ; 005719d3
    MOV ESI,dword ptr [ESP + 0xa0]      ; 005719da
    FADD double ptr [ESP + 0x8]         ; 005719e1
    ADD EBX,0x4                         ; 005719e5
    FSTP double ptr [ESP + 0x10]        ; 005719e8
    MOV dword ptr [ESP + 0xb8],EBX      ; 005719ec
    CMP EBX,ESI                         ; 005719f3
    JGE 0x00571802                      ; 005719f5
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    JMP 0x00571931                      ; 005719fb
        ;   XREF to: 00571931 (UNCONDITIONAL_JUMP)  ; LAB_00571931
    CMP dword ptr [ESP + 0x18],0x0      ; 00571a00
        ;   Label: LAB_00571a00
    JLE 0x00571802                      ; 00571a05
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    MOV dword ptr [ESP + 0xa4],EDX      ; 00571a0b
    XOR ESI,ESI                         ; 00571a12
    FLD double ptr [ESP + 0x10]         ; 00571a14
        ;   Label: LAB_00571a14
    CALL crt_math.c_round_FUN_005c03a0  ; 00571a18
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [EDI + 0x68]      ; 00571a1d
    FISTP dword ptr [ESP + 0xc8]        ; 00571a20
    MOV EAX,dword ptr [EAX + 0x120]     ; 00571a27
    ADD EAX,dword ptr [ESP + 0xc8]      ; 00571a2d
    MOV AL,byte ptr [EAX]               ; 00571a34
    AND EAX,0xff                        ; 00571a36
    SUB EAX,0x80                        ; 00571a3b
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00571a40
    MOV dword ptr [ESP + 0xc8],EAX      ; 00571a43
    XOR EDX,EDX                         ; 00571a4a
    FILD dword ptr [ESP + 0xc8]         ; 00571a4c
    FSTP float ptr [ESP + 0xc0]         ; 00571a53
    TEST ECX,ECX                        ; 00571a5a
    JLE 0x00571a86                      ; 00571a5c
        ;   XREF to: 00571a86 (CONDITIONAL_JUMP)  ; LAB_00571a86
    FLD float ptr [ESP + 0xc0]          ; 00571a5e
    MOV EBX,ESI                         ; 00571a65
    XOR EAX,EAX                         ; 00571a67
    FLD ST0                             ; 00571a69
        ;   Label: LAB_00571a69
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 00571a6b
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 00571a6f
    FADD float ptr [ECX + EBX*0x1]      ; 00571a73
    INC EDX                             ; 00571a76
    FSTP float ptr [ECX + EBX*0x1]      ; 00571a77
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00571a7a
    ADD EAX,0x4                         ; 00571a7d
    CMP EDX,ECX                         ; 00571a80
    JL 0x00571a69                       ; 00571a82
        ;   XREF to: 00571a69 (CONDITIONAL_JUMP)  ; LAB_00571a69
    FSTP ST0                            ; 00571a84
    FLD double ptr [ESP + 0x10]         ; 00571a86
        ;   Label: LAB_00571a86
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00571a8a
    FADD double ptr [ESP + 0x8]         ; 00571a91
    ADD ESI,0x4                         ; 00571a95
    FSTP double ptr [ESP + 0x10]        ; 00571a98
    CMP ESI,EAX                         ; 00571a9c
    JGE 0x00571802                      ; 00571a9e
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    JMP 0x00571a14                      ; 00571aa4
        ;   XREF to: 00571a14 (UNCONDITIONAL_JUMP)  ; LAB_00571a14
    MOV ESI,dword ptr [EAX + 0x108]     ; 00571aa9
        ;   Label: LAB_00571aa9
    CMP ESI,0x2                         ; 00571aaf
    JNZ 0x00571bc4                      ; 00571ab2
        ;   XREF to: 00571bc4 (CONDITIONAL_JUMP)  ; LAB_00571bc4
    CMP ESI,dword ptr [EBP + 0x3c]      ; 00571ab8
    JZ 0x00571b79                       ; 00571abb
        ;   XREF to: 00571b79 (CONDITIONAL_JUMP)  ; LAB_00571b79
    CMP dword ptr [ESP + 0x18],0x0      ; 00571ac1
    JLE 0x00571802                      ; 00571ac6
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    XOR EAX,EAX                         ; 00571acc
    MOV dword ptr [ESP + 0xa8],EDX      ; 00571ace
    MOV dword ptr [ESP + 0xbc],EAX      ; 00571ad5
    FLD double ptr [ESP + 0x10]         ; 00571adc
        ;   Label: LAB_00571adc
    MOV EDX,dword ptr [EDI + 0x68]      ; 00571ae0
    CALL crt_math.c_round_FUN_005c03a0  ; 00571ae3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EDX,dword ptr [EDX + 0x120]     ; 00571ae8
    FISTP dword ptr [ESP + 0xc8]        ; 00571aee
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00571af5
    FILD word ptr [EDX + EAX*0x4]       ; 00571afc
    FSTP float ptr [ESP + 0x64]         ; 00571aff
    MOV EDX,dword ptr [EDI + 0x68]      ; 00571b03
    MOV EDX,dword ptr [EDX + 0x120]     ; 00571b06
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00571b0c
    FILD word ptr [EDX + EAX*0x4 + 0x2] ; 00571b0f
    FSTP float ptr [ESP + 0x68]         ; 00571b13
    XOR EDX,EDX                         ; 00571b17
    TEST ECX,ECX                        ; 00571b19
    JLE 0x00571b48                      ; 00571b1b
        ;   XREF to: 00571b48 (CONDITIONAL_JUMP)  ; LAB_00571b48
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00571b1d
    XOR EAX,EAX                         ; 00571b24
    MOV EBX,EDX                         ; 00571b26
        ;   Label: LAB_00571b26
    AND EBX,0x1                         ; 00571b28
    FLD float ptr [ESP + EBX*0x4 + 0x64] ; 00571b2b
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 00571b2f
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 00571b33
    FADD float ptr [ECX + ESI*0x1]      ; 00571b37
    INC EDX                             ; 00571b3a
    FSTP float ptr [ECX + ESI*0x1]      ; 00571b3b
    MOV EBX,dword ptr [EBP + 0x3c]      ; 00571b3e
    ADD EAX,0x4                         ; 00571b41
    CMP EDX,EBX                         ; 00571b44
    JL 0x00571b26                       ; 00571b46
        ;   XREF to: 00571b26 (CONDITIONAL_JUMP)  ; LAB_00571b26
    FLD double ptr [ESP + 0x10]         ; 00571b48
        ;   Label: LAB_00571b48
    MOV EBX,dword ptr [ESP + 0xbc]      ; 00571b4c
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00571b53
    FADD double ptr [ESP + 0x8]         ; 00571b5a
    ADD EBX,0x4                         ; 00571b5e
    FSTP double ptr [ESP + 0x10]        ; 00571b61
    MOV dword ptr [ESP + 0xbc],EBX      ; 00571b65
    CMP EBX,ESI                         ; 00571b6c
    JGE 0x00571802                      ; 00571b6e
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    JMP 0x00571adc                      ; 00571b74
        ;   XREF to: 00571adc (UNCONDITIONAL_JUMP)  ; LAB_00571adc
    MOV ESI,dword ptr [ESP + 0x18]      ; 00571b79
        ;   Label: LAB_00571b79
    PUSH ESI                            ; 00571b7d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571b7e
    PUSH EDX                            ; 00571b82
    MOV ECX,dword ptr [ESP + 0x10]      ; 00571b83
    PUSH ECX                            ; 00571b87
    MOV EBX,dword ptr [ESP + 0x20]      ; 00571b88
    PUSH EBX                            ; 00571b8c
    MOV ESI,dword ptr [ESP + 0x20]      ; 00571b8d
    PUSH ESI                            ; 00571b91
    LEA EDX,[ESP + 0x50]                ; 00571b92
    PUSH EDX                            ; 00571b96
    LEA EDX,[EBP + 0x18]                ; 00571b97
    PUSH EDX                            ; 00571b9a
    MOV EDX,dword ptr [EAX + 0x120]     ; 00571b9b
    PUSH EDX                            ; 00571ba1
    CALL sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0056fcd0 ; 00571ba2
        ;   XREF to: 0056fcd0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0056fcd0(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, ...)
    MOV dword ptr [ESP + 0x8c],EAX      ; 00571ba7
    MOV dword ptr [ESP + 0x90],EDX      ; 00571bae
    FLD double ptr [ESP + 0x8c]         ; 00571bb5
    ADD ESP,0x20                        ; 00571bbc
    JMP 0x005717fe                      ; 00571bbf
        ;   XREF to: 005717fe (UNCONDITIONAL_JUMP)  ; LAB_005717fe
    CMP dword ptr [EBP + 0x3c],0x2      ; 00571bc4
        ;   Label: LAB_00571bc4
    JZ 0x00571c5d                       ; 00571bc8
        ;   XREF to: 00571c5d (CONDITIONAL_JUMP)  ; LAB_00571c5d
    CMP dword ptr [ESP + 0x18],0x0      ; 00571bce
    JLE 0x00571802                      ; 00571bd3
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    MOV dword ptr [ESP + 0x9c],EDX      ; 00571bd9
    XOR ESI,ESI                         ; 00571be0
    FLD double ptr [ESP + 0x10]         ; 00571be2
        ;   Label: LAB_00571be2
    CALL crt_math.c_round_FUN_005c03a0  ; 00571be6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [EDI + 0x68]      ; 00571beb
    FISTP dword ptr [ESP + 0xc8]        ; 00571bee
    MOV EAX,dword ptr [EAX + 0x120]     ; 00571bf5
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00571bfb
    MOV EBX,dword ptr [EBP + 0x3c]      ; 00571c02
    FILD word ptr [EAX + EDX*0x2]       ; 00571c05
    FSTP float ptr [ESP + 0xc4]         ; 00571c08
    XOR EDX,EDX                         ; 00571c0f
    TEST EBX,EBX                        ; 00571c11
    JLE 0x00571c3d                      ; 00571c13
        ;   XREF to: 00571c3d (CONDITIONAL_JUMP)  ; LAB_00571c3d
    FLD float ptr [ESP + 0xc4]          ; 00571c15
    MOV EBX,ESI                         ; 00571c1c
    XOR EAX,EAX                         ; 00571c1e
    FLD ST0                             ; 00571c20
        ;   Label: LAB_00571c20
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 00571c22
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 00571c26
    FADD float ptr [ECX + EBX*0x1]      ; 00571c2a
    INC EDX                             ; 00571c2d
    FSTP float ptr [ECX + EBX*0x1]      ; 00571c2e
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00571c31
    ADD EAX,0x4                         ; 00571c34
    CMP EDX,ECX                         ; 00571c37
    JL 0x00571c20                       ; 00571c39
        ;   XREF to: 00571c20 (CONDITIONAL_JUMP)  ; LAB_00571c20
    FSTP ST0                            ; 00571c3b
    FLD double ptr [ESP + 0x10]         ; 00571c3d
        ;   Label: LAB_00571c3d
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00571c41
    FADD double ptr [ESP + 0x8]         ; 00571c48
    ADD ESI,0x4                         ; 00571c4c
    FSTP double ptr [ESP + 0x10]        ; 00571c4f
    CMP ESI,ECX                         ; 00571c53
    JGE 0x00571802                      ; 00571c55
        ;   XREF to: 00571802 (CONDITIONAL_JUMP)  ; LAB_00571802
    JMP 0x00571be2                      ; 00571c5b
        ;   XREF to: 00571be2 (UNCONDITIONAL_JUMP)  ; LAB_00571be2
    MOV ESI,dword ptr [ESP + 0x18]      ; 00571c5d
        ;   Label: LAB_00571c5d
    PUSH ESI                            ; 00571c61
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571c62
    PUSH EDX                            ; 00571c66
    MOV ECX,dword ptr [ESP + 0x10]      ; 00571c67
    PUSH ECX                            ; 00571c6b
    MOV EBX,dword ptr [ESP + 0x20]      ; 00571c6c
    PUSH EBX                            ; 00571c70
    MOV ESI,dword ptr [ESP + 0x20]      ; 00571c71
    PUSH ESI                            ; 00571c75
    LEA EDX,[ESP + 0x50]                ; 00571c76
    PUSH EDX                            ; 00571c7a
    LEA EDX,[EBP + 0x18]                ; 00571c7b
    PUSH EDX                            ; 00571c7e
    MOV EDX,dword ptr [EAX + 0x120]     ; 00571c7f
    PUSH EDX                            ; 00571c85
    CALL sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0056fb90 ; 00571c86
        ;   XREF to: 0056fb90 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0056fb90(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, ...)
    MOV dword ptr [ESP + 0x8c],EAX      ; 00571c8b
    MOV dword ptr [ESP + 0x90],EDX      ; 00571c92
    FLD double ptr [ESP + 0x8c]         ; 00571c99
    ADD ESP,0x20                        ; 00571ca0
    JMP 0x005717fe                      ; 00571ca3
        ;   XREF to: 005717fe (UNCONDITIONAL_JUMP)  ; LAB_005717fe
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00571ca8
        ;   Label: LAB_00571ca8
    MOV dword ptr [ESP + 0xb4],EAX      ; 00571cac
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0xb0] ; 00571cb3
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0xd0] ; 00571cba
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00571cc1
    ADD EDX,ECX                         ; 00571cc5
    MOV dword ptr [ESP + 0x98],EAX      ; 00571cc7
    IMUL ECX,EAX,0x0                    ; 00571cce
    SUB EDX,EBX                         ; 00571cd1
    MOV dword ptr [ESP + 0xac],EDX      ; 00571cd3
    LEA EAX,[EDX*0x4 + 0x0]             ; 00571cda
    XOR EBX,EBX                         ; 00571ce1
    MOV dword ptr [ESP + 0xb0],EAX      ; 00571ce3
    TEST EAX,EAX                        ; 00571cea
    JLE 0x00571d47                      ; 00571cec
        ;   XREF to: 00571d47 (CONDITIONAL_JUMP)  ; LAB_00571d47
    MOV EDX,ECX                         ; 00571cee
        ;   Label: LAB_00571cee
    MOV EAX,ECX                         ; 00571cf0
    SAR EDX,0x1f                        ; 00571cf2
    IDIV dword ptr [ESP + 0xac]         ; 00571cf5
    SHL EAX,0x2                         ; 00571cfc
    MOV dword ptr [ESP + 0xc8],EAX      ; 00571cff
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00571d06
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00571d0d
    MOV EAX,dword ptr [EAX + 0x2c80674] ; 00571d14
    MOV ESI,dword ptr [ESP + 0xb4]      ; 00571d1a
    ADD EAX,EDX                         ; 00571d21
    MOV ESI,dword ptr [ESP + ESI*0x1 + 0x1c] ; 00571d23
    FLD float ptr [EAX]                 ; 00571d27
    FADD float ptr [ESI + EBX*0x1]      ; 00571d29
    ADD EBX,0x4                         ; 00571d2c
    FSTP float ptr [ESI + EBX*0x1 + -0x4] ; 00571d2f
    MOV ESI,dword ptr [ESP + 0x98]      ; 00571d33
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00571d3a
    ADD ECX,ESI                         ; 00571d41
    CMP EBX,EAX                         ; 00571d43
    JL 0x00571cee                       ; 00571d45
        ;   XREF to: 00571cee (CONDITIONAL_JUMP)  ; LAB_00571cee
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00571d47
        ;   Label: LAB_00571d47
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0xb0] ; 00571d4e
    MOV dword ptr [EDI + EAX*0x1 + 0xd0],EDX ; 00571d55
    JMP 0x00571596                      ; 00571d5c
        ;   XREF to: 00571596 (UNCONDITIONAL_JUMP)  ; LAB_00571596

