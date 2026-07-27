; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(int *param_1,int *param_2,undefined1 *param_3,float *param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_FUN_00469ce0 at 0046a365
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e1fe
;   TerminatedCString s_Too_many_drawn_cubes_Nee_0057e211
;   double DOUBLE_0057e23e = -256
;   double DOUBLE_0057e246 = 256
;   undefined4 DAT_0059c8a0
;   undefined4 DAT_005ae700
;   undefined4 DAT_005ae704
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5054
;   undefined4 DAT_005c5084
;   undefined4 DAT_005c50b4
;   undefined4 DAT_005c50e4
;   undefined4 DAT_005c5114
;   undefined4 DAT_005c5144
;   undefined4 DAT_005c5174
;   ... and 12 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469390
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
    PUSH ESI                            ; 00469391
    PUSH EDI                            ; 00469392
    PUSH EBP                            ; 00469393
    SUB ESP,0xc4                        ; 00469394
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0046939a
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004693a1
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004693a8
    MOV EDX,dword ptr [0x01b7b734]      ; 004693af | DAT_01b7b734
    INC EDX                             ; 004693b5
    MOV ECX,dword ptr [ESI + 0x54]      ; 004693b6
    MOV dword ptr [0x01b7b734],EDX      ; 004693b9 | DAT_01b7b734
    CMP EDI,ECX                         ; 004693bf
    JL 0x004693ea                       ; 004693c1
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004693c3
    CMP EAX,dword ptr [ESI + 0x58]      ; 004693ca
    JL 0x004693ea                       ; 004693cd
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    CMP EBP,dword ptr [ESI + 0x5c]      ; 004693cf
    JL 0x004693ea                       ; 004693d2
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    CMP EDI,dword ptr [ESI + 0x60]      ; 004693d4
    JG 0x004693ea                       ; 004693d7
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004693d9
    CMP EAX,dword ptr [ESI + 0x64]      ; 004693e0
    JG 0x004693ea                       ; 004693e3
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    CMP EBP,dword ptr [ESI + 0x68]      ; 004693e5
    JLE 0x004693f5                      ; 004693e8
        ;   XREF to: 004693f5 (CONDITIONAL_JUMP)  ; LAB_004693f5
    ADD ESP,0xc4                        ; 004693ea
        ;   Label: LAB_004693ea
    POP EBP                             ; 004693f0
    POP EDI                             ; 004693f1
    POP ESI                             ; 004693f2
    POP EBX                             ; 004693f3
    RET                                 ; 004693f4
    PUSH EBP                            ; 004693f5
        ;   Label: LAB_004693f5
    PUSH EAX                            ; 004693f6
    PUSH EDI                            ; 004693f7
    PUSH ESI                            ; 004693f8
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 004693f9
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0()
    ADD ESP,0x10                        ; 004693fe
    MOV dword ptr [ESP + 0xa0],EAX      ; 00469401
    TEST EAX,EAX                        ; 00469408
    JZ 0x004693ea                       ; 0046940a
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    CMP dword ptr [EAX],0x0             ; 0046940c
    JZ 0x004693ea                       ; 0046940f
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    MOV dword ptr [ESP + 0xbc],EDI      ; 00469411
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00469418
    FILD dword ptr [ESP + 0xbc]         ; 0046941f
    FST float ptr [ESP + 0xac]          ; 00469426
    FMUL float ptr [ESI + 0x28]         ; 0046942d
    MOV dword ptr [ESP + 0xbc],EAX      ; 00469430
    MOV dword ptr [ESP + 0xc0],EBP      ; 00469437
    FILD dword ptr [ESP + 0xbc]         ; 0046943e
    FSTP float ptr [ESP + 0xb4]         ; 00469445
    FADD float ptr [ESI + 0x10]         ; 0046944c
    FLD float ptr [ESP + 0xb4]          ; 0046944f
    FXCH                                ; 00469456
    FSTP float ptr [ESP + 0x28]         ; 00469458
    FMUL float ptr [ESI + 0x2c]         ; 0046945c
    FILD dword ptr [ESP + 0xc0]         ; 0046945f
    FSTP float ptr [ESP + 0xa4]         ; 00469466
    FADD float ptr [ESI + 0x14]         ; 0046946d
    FLD float ptr [ESP + 0xa4]          ; 00469470
    FXCH                                ; 00469477
    FSTP float ptr [ESP + 0x2c]         ; 00469479
    FMUL float ptr [ESI + 0x30]         ; 0046947d
    LEA EBX,[ESP + 0x70]                ; 00469480
    MOV ECX,dword ptr [0x01b7b738]      ; 00469484 | DAT_01b7b738
    MOV EDX,dword ptr [0x005ae700]      ; 0046948a | DAT_005ae700
    INC ECX                             ; 00469490
    LEA EAX,[ESP + 0x28]                ; 00469491
    FADD float ptr [ESI + 0x18]         ; 00469495
    MOV dword ptr [0x01b7b738],ECX      ; 00469498 | DAT_01b7b738
    FSTP float ptr [ESP + 0x30]         ; 0046949e
    FLD float ptr [EAX]                 ; 004694a2
    FMUL float ptr [0x0059c8a0]         ; 004694a4 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 004694aa
    FLD float ptr [EAX + 0x4]           ; 004694ac
    FMUL float ptr [0x0059c8a0]         ; 004694af | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 004694b5
    FLD float ptr [EAX + 0x8]           ; 004694b8
    FMUL float ptr [0x0059c8a0]         ; 004694bb | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 004694c1
    LEA EAX,[ESP + 0x70]                ; 004694c4
    PUSH EAX                            ; 004694c8
    MOV EAX,dword ptr [EDX]             ; 004694c9 | DAT_01b4d738
    PUSH EAX                            ; 004694cb
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004694cc
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004694d1
    LEA EAX,[EDI + 0x1]                 ; 004694d4
    MOV dword ptr [ESP + 0xc0],EAX      ; 004694d7
    FILD dword ptr [ESP + 0xc0]         ; 004694de
    FST float ptr [ESP + 0xa8]          ; 004694e5
    FMUL float ptr [ESI + 0x28]         ; 004694ec
    FADD float ptr [ESI + 0x10]         ; 004694ef
    FLD float ptr [ESP + 0xb4]          ; 004694f2
    FXCH                                ; 004694f9
    FSTP float ptr [ESP + 0x28]         ; 004694fb
    FMUL float ptr [ESI + 0x2c]         ; 004694ff
    FADD float ptr [ESI + 0x14]         ; 00469502
    FLD float ptr [ESP + 0xa4]          ; 00469505
    FXCH                                ; 0046950c
    FSTP float ptr [ESP + 0x2c]         ; 0046950e
    FMUL float ptr [ESI + 0x30]         ; 00469512
    LEA EBX,[ESP + 0x58]                ; 00469515
    MOV EDX,dword ptr [0x005ae700]      ; 00469519 | DAT_005ae700
    FADD float ptr [ESI + 0x18]         ; 0046951f
    LEA EAX,[ESP + 0x28]                ; 00469522
    FSTP float ptr [ESP + 0x30]         ; 00469526
    FLD float ptr [EAX]                 ; 0046952a
    FMUL float ptr [0x0059c8a0]         ; 0046952c | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00469532
    FLD float ptr [EAX + 0x4]           ; 00469534
    FMUL float ptr [0x0059c8a0]         ; 00469537 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 0046953d
    FLD float ptr [EAX + 0x8]           ; 00469540
    FMUL float ptr [0x0059c8a0]         ; 00469543 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00469549
    LEA EAX,[ESP + 0x58]                ; 0046954c
    PUSH EAX                            ; 00469550
    MOV EAX,dword ptr [EDX]             ; 00469551 | DAT_01b4d738
    ADD EAX,0x30                        ; 00469553
    PUSH EAX                            ; 00469556
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00469557
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 0046955c
    FLD float ptr [ESP + 0xa8]          ; 0046955f
    FMUL float ptr [ESI + 0x28]         ; 00469566
    LEA EAX,[EBP + 0x1]                 ; 00469569
    FLD float ptr [ESP + 0xb4]          ; 0046956c
    FXCH                                ; 00469573
    FADD float ptr [ESI + 0x10]         ; 00469575
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469578
    FSTP float ptr [ESP + 0x28]         ; 0046957f
    FMUL float ptr [ESI + 0x2c]         ; 00469583
    FILD dword ptr [ESP + 0xc0]         ; 00469586
    FSTP float ptr [ESP + 0xb0]         ; 0046958d
    FADD float ptr [ESI + 0x14]         ; 00469594
    FLD float ptr [ESP + 0xb0]          ; 00469597
    FXCH                                ; 0046959e
    FSTP float ptr [ESP + 0x2c]         ; 004695a0
    FMUL float ptr [ESI + 0x30]         ; 004695a4
    FADD float ptr [ESI + 0x18]         ; 004695a7
    FSTP float ptr [ESP + 0x30]         ; 004695aa
    LEA EBX,[ESP + 0x94]                ; 004695ae
    LEA EAX,[ESP + 0x28]                ; 004695b5
    MOV EDX,dword ptr [0x005ae700]      ; 004695b9 | DAT_005ae700
    FLD float ptr [EAX]                 ; 004695bf
    FMUL float ptr [0x0059c8a0]         ; 004695c1 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 004695c7
    FLD float ptr [EAX + 0x4]           ; 004695c9
    FMUL float ptr [0x0059c8a0]         ; 004695cc | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 004695d2
    FLD float ptr [EAX + 0x8]           ; 004695d5
    FMUL float ptr [0x0059c8a0]         ; 004695d8 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 004695de
    LEA EAX,[ESP + 0x94]                ; 004695e1
    PUSH EAX                            ; 004695e8
    MOV EAX,dword ptr [EDX]             ; 004695e9 | DAT_01b4d738
    ADD EAX,0x60                        ; 004695eb
    PUSH EAX                            ; 004695ee
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004695ef
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004695f4
    FLD float ptr [ESP + 0xac]          ; 004695f7
    FMUL float ptr [ESI + 0x28]         ; 004695fe
    FADD float ptr [ESI + 0x10]         ; 00469601
    FLD float ptr [ESP + 0xb4]          ; 00469604
    FXCH                                ; 0046960b
    FSTP float ptr [ESP + 0x28]         ; 0046960d
    FMUL float ptr [ESI + 0x2c]         ; 00469611
    FADD float ptr [ESI + 0x14]         ; 00469614
    FLD float ptr [ESP + 0xb0]          ; 00469617
    FXCH                                ; 0046961e
    FSTP float ptr [ESP + 0x2c]         ; 00469620
    FMUL float ptr [ESI + 0x30]         ; 00469624
    LEA EBX,[ESP + 0x7c]                ; 00469627
    LEA EAX,[ESP + 0x28]                ; 0046962b
    FADD float ptr [ESI + 0x18]         ; 0046962f
    MOV EDX,dword ptr [0x005ae700]      ; 00469632 | DAT_005ae700
    FSTP float ptr [ESP + 0x30]         ; 00469638
    FLD float ptr [EAX]                 ; 0046963c
    FMUL float ptr [0x0059c8a0]         ; 0046963e | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00469644
    FLD float ptr [EAX + 0x4]           ; 00469646
    FMUL float ptr [0x0059c8a0]         ; 00469649 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 0046964f
    FLD float ptr [EAX + 0x8]           ; 00469652
    FMUL float ptr [0x0059c8a0]         ; 00469655 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 0046965b
    LEA EAX,[ESP + 0x7c]                ; 0046965e
    PUSH EAX                            ; 00469662
    MOV EAX,dword ptr [EDX]             ; 00469663 | DAT_01b4d738
    ADD EAX,0x90                        ; 00469665
    PUSH EAX                            ; 0046966a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0046966b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00469670
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00469673
    FLD float ptr [ESP + 0xac]          ; 0046967a
    INC EAX                             ; 00469681
    FMUL float ptr [ESI + 0x28]         ; 00469682
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469685
    FADD float ptr [ESI + 0x10]         ; 0046968c
    FILD dword ptr [ESP + 0xc0]         ; 0046968f
    FXCH                                ; 00469696
    FSTP float ptr [ESP + 0x28]         ; 00469698
    FST float ptr [ESP + 0xb8]          ; 0046969c
    FMUL float ptr [ESI + 0x2c]         ; 004696a3
    FADD float ptr [ESI + 0x14]         ; 004696a6
    FLD float ptr [ESP + 0xa4]          ; 004696a9
    FXCH                                ; 004696b0
    FSTP float ptr [ESP + 0x2c]         ; 004696b2
    FMUL float ptr [ESI + 0x30]         ; 004696b6
    LEA EBX,[ESP + 0x34]                ; 004696b9
    MOV EDX,dword ptr [0x005ae700]      ; 004696bd | DAT_005ae700
    FADD float ptr [ESI + 0x18]         ; 004696c3
    LEA EAX,[ESP + 0x28]                ; 004696c6
    FSTP float ptr [ESP + 0x30]         ; 004696ca
    FLD float ptr [EAX]                 ; 004696ce
    FMUL float ptr [0x0059c8a0]         ; 004696d0 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 004696d6
    FLD float ptr [EAX + 0x4]           ; 004696d8
    FMUL float ptr [0x0059c8a0]         ; 004696db | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 004696e1
    FLD float ptr [EAX + 0x8]           ; 004696e4
    FMUL float ptr [0x0059c8a0]         ; 004696e7 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 004696ed
    LEA EAX,[ESP + 0x34]                ; 004696f0
    PUSH EAX                            ; 004696f4
    MOV EAX,dword ptr [EDX]             ; 004696f5 | DAT_01b4d738
    ADD EAX,0xc0                        ; 004696f7
    PUSH EAX                            ; 004696fc
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004696fd
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00469702
    FLD float ptr [ESP + 0xa8]          ; 00469705
    FMUL float ptr [ESI + 0x28]         ; 0046970c
    FADD float ptr [ESI + 0x10]         ; 0046970f
    FLD float ptr [ESP + 0xb8]          ; 00469712
    FXCH                                ; 00469719
    FSTP float ptr [ESP + 0x28]         ; 0046971b
    FMUL float ptr [ESI + 0x2c]         ; 0046971f
    FADD float ptr [ESI + 0x14]         ; 00469722
    FLD float ptr [ESP + 0xa4]          ; 00469725
    FXCH                                ; 0046972c
    FSTP float ptr [ESP + 0x2c]         ; 0046972e
    FMUL float ptr [ESI + 0x30]         ; 00469732
    LEA EBX,[ESP + 0x40]                ; 00469735
    LEA EAX,[ESP + 0x28]                ; 00469739
    FADD float ptr [ESI + 0x18]         ; 0046973d
    MOV EDX,dword ptr [0x005ae700]      ; 00469740 | DAT_005ae700
    FSTP float ptr [ESP + 0x30]         ; 00469746
    FLD float ptr [EAX]                 ; 0046974a
    FMUL float ptr [0x0059c8a0]         ; 0046974c | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00469752
    FLD float ptr [EAX + 0x4]           ; 00469754
    FMUL float ptr [0x0059c8a0]         ; 00469757 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 0046975d
    FLD float ptr [EAX + 0x8]           ; 00469760
    FMUL float ptr [0x0059c8a0]         ; 00469763 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00469769
    LEA EAX,[ESP + 0x40]                ; 0046976c
    PUSH EAX                            ; 00469770
    MOV EAX,dword ptr [EDX]             ; 00469771 | DAT_01b4d738
    ADD EAX,0xf0                        ; 00469773
    PUSH EAX                            ; 00469778
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00469779
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 0046977e
    FLD float ptr [ESP + 0xa8]          ; 00469781
    FMUL float ptr [ESI + 0x28]         ; 00469788
    FADD float ptr [ESI + 0x10]         ; 0046978b
    FLD float ptr [ESP + 0xb8]          ; 0046978e
    FXCH                                ; 00469795
    FSTP float ptr [ESP + 0x28]         ; 00469797
    FMUL float ptr [ESI + 0x2c]         ; 0046979b
    FADD float ptr [ESI + 0x14]         ; 0046979e
    FLD float ptr [ESP + 0xb0]          ; 004697a1
    FXCH                                ; 004697a8
    FSTP float ptr [ESP + 0x2c]         ; 004697aa
    FMUL float ptr [ESI + 0x30]         ; 004697ae
    LEA EBX,[ESP + 0x64]                ; 004697b1
    LEA EAX,[ESP + 0x28]                ; 004697b5
    FADD float ptr [ESI + 0x18]         ; 004697b9
    MOV EDX,dword ptr [0x005ae700]      ; 004697bc | DAT_005ae700
    FSTP float ptr [ESP + 0x30]         ; 004697c2
    FLD float ptr [EAX]                 ; 004697c6
    FMUL float ptr [0x0059c8a0]         ; 004697c8 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 004697ce
    FLD float ptr [EAX + 0x4]           ; 004697d0
    FMUL float ptr [0x0059c8a0]         ; 004697d3 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 004697d9
    FLD float ptr [EAX + 0x8]           ; 004697dc
    FMUL float ptr [0x0059c8a0]         ; 004697df | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 004697e5
    LEA EAX,[ESP + 0x64]                ; 004697e8
    PUSH EAX                            ; 004697ec
    MOV EAX,dword ptr [EDX]             ; 004697ed | DAT_01b4d738
    ADD EAX,0x120                       ; 004697ef
    PUSH EAX                            ; 004697f4
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004697f5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004697fa
    FLD float ptr [ESP + 0xac]          ; 004697fd
    FMUL float ptr [ESI + 0x28]         ; 00469804
    FADD float ptr [ESI + 0x10]         ; 00469807
    FLD float ptr [ESP + 0xb8]          ; 0046980a
    FXCH                                ; 00469811
    FSTP float ptr [ESP + 0x28]         ; 00469813
    FMUL float ptr [ESI + 0x2c]         ; 00469817
    FADD float ptr [ESI + 0x14]         ; 0046981a
    FLD float ptr [ESP + 0xb0]          ; 0046981d
    FXCH                                ; 00469824
    FSTP float ptr [ESP + 0x2c]         ; 00469826
    FMUL float ptr [ESI + 0x30]         ; 0046982a
    LEA EBX,[ESP + 0x4c]                ; 0046982d
    LEA EAX,[ESP + 0x28]                ; 00469831
    FADD float ptr [ESI + 0x18]         ; 00469835
    MOV EDX,dword ptr [0x005ae700]      ; 00469838 | DAT_005ae700
    FSTP float ptr [ESP + 0x30]         ; 0046983e
    FLD float ptr [EAX]                 ; 00469842
    FMUL float ptr [0x0059c8a0]         ; 00469844 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 0046984a
    FLD float ptr [EAX + 0x4]           ; 0046984c
    FMUL float ptr [0x0059c8a0]         ; 0046984f | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00469855
    FLD float ptr [EAX + 0x8]           ; 00469858
    FMUL float ptr [0x0059c8a0]         ; 0046985b | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00469861
    LEA EAX,[ESP + 0x4c]                ; 00469864
    PUSH EAX                            ; 00469868
    MOV EAX,dword ptr [EDX]             ; 00469869 | DAT_01b4d738
    ADD EAX,0x150                       ; 0046986b
    PUSH EAX                            ; 00469870
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00469871
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005c5024]                ; 00469876 | DAT_005c5024
    MOV EBX,dword ptr [0x005c5054]      ; 0046987b | DAT_005c5054
    MOV EDX,dword ptr [0x005c5084]      ; 00469881 | DAT_005c5084
    AND EAX,EBX                         ; 00469887
    MOV ECX,dword ptr [0x005c50b4]      ; 00469889 | DAT_005c50b4
    AND EAX,EDX                         ; 0046988f
    MOV EBX,dword ptr [0x005c50e4]      ; 00469891 | DAT_005c50e4
    AND EAX,ECX                         ; 00469897
    MOV EDX,dword ptr [0x005c5114]      ; 00469899 | DAT_005c5114
    AND EAX,EBX                         ; 0046989f
    MOV ECX,dword ptr [0x005c5144]      ; 004698a1 | DAT_005c5144
    AND EAX,EDX                         ; 004698a7
    MOV EBX,dword ptr [0x005c5174]      ; 004698a9 | DAT_005c5174
    AND EAX,ECX                         ; 004698af
    AND EAX,EBX                         ; 004698b1
    ADD ESP,0x8                         ; 004698b3
    TEST EAX,0x80000000                 ; 004698b6
    JZ 0x004698c5                       ; 004698bb
        ;   XREF to: 004698c5 (CONDITIONAL_JUMP)  ; LAB_004698c5
    TEST AL,0xff                        ; 004698bd
    JNZ 0x004693ea                      ; 004698bf
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    MOV EAX,[0x01b7b73c]                ; 004698c5 | DAT_01b7b73c
        ;   Label: LAB_004698c5
    INC EAX                             ; 004698ca
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004698cb
    MOV [0x01b7b73c],EAX                ; 004698d2 | DAT_01b7b73c
    CMP EDX,0x1                         ; 004698d7
    JG 0x00469a1a                       ; 004698da
        ;   XREF to: 00469a1a (CONDITIONAL_JUMP)  ; LAB_00469a1a
    MOV dword ptr [ESP + 0xc0],EDI      ; 004698e0
        ;   Label: LAB_004698e0
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004698e7
    FILD dword ptr [ESP + 0xc0]         ; 004698ee
    FMUL float ptr [ESI + 0x28]         ; 004698f5
    MOV dword ptr [ESP + 0xc0],EAX      ; 004698f8
    FADD float ptr [ESI + 0x10]         ; 004698ff
    FILD dword ptr [ESP + 0xc0]         ; 00469902
    FXCH                                ; 00469909
    FSTP float ptr [ESP + 0x88]         ; 0046990b
    FMUL float ptr [ESI + 0x2c]         ; 00469912
    MOV dword ptr [ESP + 0xc0],EBP      ; 00469915
    FADD float ptr [ESI + 0x14]         ; 0046991c
    FILD dword ptr [ESP + 0xc0]         ; 0046991f
    FXCH                                ; 00469926
    FSTP float ptr [ESP + 0x8c]         ; 00469928
    FMUL float ptr [ESI + 0x30]         ; 0046992f
    MOV EBX,dword ptr [0x01b7b740]      ; 00469932 | DAT_01b7b740
    MOV EDI,dword ptr [0x005ae704]      ; 00469938 | DAT_005ae704
    INC EBX                             ; 0046993e
    LEA EAX,[ESP + 0x88]                ; 0046993f
    MOV dword ptr [0x01b7b740],EBX      ; 00469946 | DAT_01b7b740
    PUSH EAX                            ; 0046994c
    FADD float ptr [ESI + 0x18]         ; 0046994d
    PUSH EDI                            ; 00469950 | DAT_01b4d738
    FSTP float ptr [ESP + 0x98]         ; 00469951
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00469958
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 0046995d
    MOV EBP,dword ptr [ESI]             ; 00469960
    PUSH EBP                            ; 00469962
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00469963
    PUSH EAX                            ; 0046996a
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0 ; 0046996b
        ;   XREF to: 0044aff0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0()
    ADD ESP,0x8                         ; 00469970
    PUSH 0x2dd1184                      ; 00469973 | DAT_02dd1184
    MOV EDX,dword ptr [0x005ae704]      ; 00469978 | DAT_005ae704
    PUSH EDX                            ; 0046997e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0046997f
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00469984
    MOV EAX,[0x01b7b744]                ; 00469987 | DAT_01b7b744
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0046998c
    MOV EBX,EAX                         ; 00469993
    MOV dword ptr [EAX*0x4 + 0x1b7b74c],EDX ; 00469995
    SHL EAX,0x2                         ; 0046999c
    SUB EAX,EBX                         ; 0046999f
    MOV ESI,0x1b8efcc                   ; 004699a1
    SHL EAX,0x2                         ; 004699a6
    ADD ESI,EAX                         ; 004699a9
    LEA EAX,[ESP + 0x88]                ; 004699ab
    CMP ESI,EAX                         ; 004699b2
    JZ 0x004699d3                       ; 004699b4
        ;   XREF to: 004699d3 (CONDITIONAL_JUMP)  ; LAB_004699d3
    MOV EAX,dword ptr [ESP + 0x88]      ; 004699b6
    MOV dword ptr [ESI],EAX             ; 004699bd | DAT_01b8efcc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004699bf
    MOV dword ptr [ESI + 0x4],EAX       ; 004699c6 | DAT_01b8efd0
    MOV EAX,dword ptr [ESP + 0x90]      ; 004699c9
    MOV dword ptr [ESI + 0x8],EAX       ; 004699d0 | DAT_01b8efd4
    MOV ECX,dword ptr [0x01b7b744]      ; 004699d3 | DAT_01b7b744
        ;   Label: LAB_004699d3
    INC ECX                             ; 004699d9
    MOV dword ptr [0x01b7b744],ECX      ; 004699da | DAT_01b7b744
    CMP ECX,0x4e20                      ; 004699e0
    JL 0x004693ea                       ; 004699e6
        ;   XREF to: 004693ea (CONDITIONAL_JUMP)  ; LAB_004693ea
    MOV ESI,0x57e1fe                    ; 004699ec | = "..\\core\\dtrace.cpp"
    MOV EDI,0x792                       ; 004699f1
    PUSH 0x57e211                       ; 004699f6 | = "Too many drawn cubes.  Need to recomp..."
    MOV dword ptr [0x01cc4800],ESI      ; 004699fb | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00469a01 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00469a07
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00469a0c
    ADD ESP,0xc4                        ; 00469a0f
    POP EBP                             ; 00469a15
    POP EDI                             ; 00469a16
    POP ESI                             ; 00469a17
    POP EBX                             ; 00469a18
    RET                                 ; 00469a19
    MOV ECX,0x4                         ; 00469a1a
        ;   Label: LAB_00469a1a
    MOV EDX,0xffffffff                  ; 00469a1f
    MOV dword ptr [ESP + 0xc0],EBP      ; 00469a24
    XOR EBX,EBX                         ; 00469a2b
    MOV dword ptr [ESP + 0x4],ECX       ; 00469a2d
    MOV dword ptr [ESP + 0x8],EBX       ; 00469a31
    MOV dword ptr [ESP + 0xc],EBX       ; 00469a35
    MOV dword ptr [ESP + 0x10],EDX      ; 00469a39
    FILD dword ptr [ESP + 0xc0]         ; 00469a3d
    FMUL float ptr [ESI + 0x30]         ; 00469a44
    FADD float ptr [ESI + 0x18]         ; 00469a47
    FMUL double ptr [0x0057e23e]        ; 00469a4a | DOUBLE_0057e23e
    MOV EAX,0x5                         ; 00469a50
    MOV dword ptr [ESP + 0x18],EBX      ; 00469a55
    MOV dword ptr [ESP + 0x20],EAX      ; 00469a59
    MOV dword ptr [ESP + 0x24],ECX      ; 00469a5d
    MOV EBX,0x1                         ; 00469a61
    MOV EAX,ESP                         ; 00469a66
    MOV ECX,dword ptr [0x005ae700]      ; 00469a68 | DAT_005ae700
    PUSH EAX                            ; 00469a6e
    CALL crt_math.c_round_FUN_00563a30  ; 00469a6f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00469a74
    FISTP dword ptr [ESP + 0x1c]        ; 00469a75
    MOV dword ptr [ESP + 0x24],EBX      ; 00469a79
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00469a7d
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 00469a82
    TEST EAX,EAX                        ; 00469a85
    JNZ 0x004698e0                      ; 00469a87
        ;   XREF to: 004698e0 (CONDITIONAL_JUMP)  ; LAB_004698e0
    MOV dword ptr [ESP + 0x8],EAX       ; 00469a8d
    MOV dword ptr [ESP + 0xc],EAX       ; 00469a91
    LEA EAX,[EBX + EBP*0x1]             ; 00469a95
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469a98
    MOV dword ptr [ESP + 0x10],EBX      ; 00469a9f
    FILD dword ptr [ESP + 0xc0]         ; 00469aa3
    FMUL float ptr [ESI + 0x30]         ; 00469aaa
    FADD float ptr [ESI + 0x18]         ; 00469aad
    FMUL double ptr [0x0057e246]        ; 00469ab0 | DOUBLE_0057e246
    MOV ECX,0x2                         ; 00469ab6
    MOV EDX,0x6                         ; 00469abb
    MOV EBX,0x3                         ; 00469ac0
    MOV EAX,0x7                         ; 00469ac5
    MOV dword ptr [ESP + 0x18],ECX      ; 00469aca
    MOV dword ptr [ESP + 0x1c],EBX      ; 00469ace
    MOV dword ptr [ESP + 0x20],EAX      ; 00469ad2
    MOV dword ptr [ESP + 0x24],EDX      ; 00469ad6
    MOV EAX,ESP                         ; 00469ada
    MOV ECX,dword ptr [0x005ae700]      ; 00469adc | DAT_005ae700
    PUSH EAX                            ; 00469ae2
    CALL crt_math.c_round_FUN_00563a30  ; 00469ae3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00469ae8
    FISTP dword ptr [ESP + 0x1c]        ; 00469ae9
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00469aed
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 00469af2
    TEST EAX,EAX                        ; 00469af5
    JNZ 0x004698e0                      ; 00469af7
        ;   XREF to: 004698e0 (CONDITIONAL_JUMP)  ; LAB_004698e0
    MOV EBX,0xffffffff                  ; 00469afd
    MOV dword ptr [ESP + 0xc],EAX       ; 00469b02
    MOV dword ptr [ESP + 0x10],EAX      ; 00469b06
    MOV dword ptr [ESP + 0xc0],EDI      ; 00469b0a
    MOV dword ptr [ESP + 0x8],EBX       ; 00469b11
    FILD dword ptr [ESP + 0xc0]         ; 00469b15
    FMUL float ptr [ESI + 0x28]         ; 00469b1c
    FADD float ptr [ESI + 0x10]         ; 00469b1f
    FMUL double ptr [0x0057e23e]        ; 00469b22 | DOUBLE_0057e23e
    MOV EDX,0x3                         ; 00469b28
    MOV ECX,dword ptr [0x005ae700]      ; 00469b2d | DAT_005ae700
    MOV EBX,0x4                         ; 00469b33
    MOV dword ptr [ESP + 0x18],EAX      ; 00469b38
    MOV EAX,0x7                         ; 00469b3c
    MOV dword ptr [ESP + 0x1c],EBX      ; 00469b41
    MOV dword ptr [ESP + 0x20],EAX      ; 00469b45
    MOV EAX,ESP                         ; 00469b49
    MOV dword ptr [ESP + 0x24],EDX      ; 00469b4b
    PUSH EAX                            ; 00469b4f
    CALL crt_math.c_round_FUN_00563a30  ; 00469b50
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00469b55
    FISTP dword ptr [ESP + 0x1c]        ; 00469b56
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00469b5a
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 00469b5f
    TEST EAX,EAX                        ; 00469b62
    JNZ 0x004698e0                      ; 00469b64
        ;   XREF to: 004698e0 (CONDITIONAL_JUMP)  ; LAB_004698e0
    MOV EBX,0x1                         ; 00469b6a
    MOV dword ptr [ESP + 0xc],EAX       ; 00469b6f
    MOV dword ptr [ESP + 0x10],EAX      ; 00469b73
    LEA EAX,[EDI + EBX*0x1]             ; 00469b77
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469b7a
    MOV dword ptr [ESP + 0x8],EBX       ; 00469b81
    FILD dword ptr [ESP + 0xc0]         ; 00469b85
    FMUL float ptr [ESI + 0x28]         ; 00469b8c
    FADD float ptr [ESI + 0x10]         ; 00469b8f
    FMUL double ptr [0x0057e246]        ; 00469b92 | DOUBLE_0057e246
    MOV EDX,0x5                         ; 00469b98
    MOV ECX,dword ptr [0x005ae700]      ; 00469b9d | DAT_005ae700
    MOV EAX,0x6                         ; 00469ba3
    MOV dword ptr [ESP + 0x18],EBX      ; 00469ba8
    MOV dword ptr [ESP + 0x20],EAX      ; 00469bac
    MOV dword ptr [ESP + 0x24],EDX      ; 00469bb0
    MOV EAX,ESP                         ; 00469bb4
    MOV EBX,0x2                         ; 00469bb6
    PUSH EAX                            ; 00469bbb
    CALL crt_math.c_round_FUN_00563a30  ; 00469bbc
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00469bc1
    FISTP dword ptr [ESP + 0x1c]        ; 00469bc2
    MOV dword ptr [ESP + 0x24],EBX      ; 00469bc6
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00469bca
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 00469bcf
    TEST EAX,EAX                        ; 00469bd2
    JNZ 0x004698e0                      ; 00469bd4
        ;   XREF to: 004698e0 (CONDITIONAL_JUMP)  ; LAB_004698e0
    MOV dword ptr [ESP + 0x8],EAX       ; 00469bda
    MOV dword ptr [ESP + 0xc],0x1       ; 00469bde
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00469be6
    INC EAX                             ; 00469bed
    XOR EDX,EDX                         ; 00469bee
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469bf0
    MOV dword ptr [ESP + 0x10],EDX      ; 00469bf7
    FILD dword ptr [ESP + 0xc0]         ; 00469bfb
    FMUL float ptr [ESI + 0x2c]         ; 00469c02
    FADD float ptr [ESI + 0x14]         ; 00469c05
    FMUL double ptr [0x0057e246]        ; 00469c08 | DOUBLE_0057e246
    MOV ECX,0x4                         ; 00469c0e
    MOV EBX,0x5                         ; 00469c13
    MOV EDX,0x7                         ; 00469c18
    MOV EAX,0x6                         ; 00469c1d
    MOV dword ptr [ESP + 0x18],ECX      ; 00469c22
    MOV dword ptr [ESP + 0x1c],EBX      ; 00469c26
    MOV dword ptr [ESP + 0x20],EAX      ; 00469c2a
    MOV dword ptr [ESP + 0x24],EDX      ; 00469c2e
    MOV EAX,ESP                         ; 00469c32
    MOV ECX,dword ptr [0x005ae700]      ; 00469c34 | DAT_005ae700
    PUSH EAX                            ; 00469c3a
    CALL crt_math.c_round_FUN_00563a30  ; 00469c3b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00469c40
    FISTP dword ptr [ESP + 0x1c]        ; 00469c41
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00469c45
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 00469c4a
    TEST EAX,EAX                        ; 00469c4d
    JNZ 0x004698e0                      ; 00469c4f
        ;   XREF to: 004698e0 (CONDITIONAL_JUMP)  ; LAB_004698e0
    MOV dword ptr [ESP + 0x8],EAX       ; 00469c55
    MOV dword ptr [ESP + 0xc],0xffffffff ; 00469c59
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00469c61
    XOR EDX,EDX                         ; 00469c68
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469c6a
    MOV dword ptr [ESP + 0x10],EDX      ; 00469c71
    FILD dword ptr [ESP + 0xc0]         ; 00469c75
    FMUL float ptr [ESI + 0x2c]         ; 00469c7c
    FADD float ptr [ESI + 0x14]         ; 00469c7f
    FMUL double ptr [0x0057e23e]        ; 00469c82 | DOUBLE_0057e23e
    MOV ECX,dword ptr [0x005ae700]      ; 00469c88 | DAT_005ae700
    XOR EBX,EBX                         ; 00469c8e
    MOV EDX,0x3                         ; 00469c90
    MOV EAX,0x2                         ; 00469c95
    MOV dword ptr [ESP + 0x18],EBX      ; 00469c9a
    MOV dword ptr [ESP + 0x20],EAX      ; 00469c9e
    MOV dword ptr [ESP + 0x24],EDX      ; 00469ca2
    MOV EAX,ESP                         ; 00469ca6
    MOV EBX,0x1                         ; 00469ca8
    PUSH EAX                            ; 00469cad
    CALL crt_math.c_round_FUN_00563a30  ; 00469cae
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00469cb3
    FISTP dword ptr [ESP + 0x1c]        ; 00469cb4
    MOV dword ptr [ESP + 0x24],EBX      ; 00469cb8
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00469cbc
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 00469cc1
    TEST EAX,EAX                        ; 00469cc4
    JNZ 0x004698e0                      ; 00469cc6
        ;   XREF to: 004698e0 (CONDITIONAL_JUMP)  ; LAB_004698e0
    ADD ESP,0xc4                        ; 00469ccc
    POP EBP                             ; 00469cd2
    POP EDI                             ; 00469cd3
    POP ESI                             ; 00469cd4
    POP EBX                             ; 00469cd5
    RET                                 ; 00469cd6

