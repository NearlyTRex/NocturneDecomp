; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_getReady_FUN_004e03c0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
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
; XREF[7]:
;   core_biggs.cpp_FUN_00415430 at 00415488
;   core_mimic.cpp_FUN_004d4650 at 004d49aa
;   core_moloch.cpp_CMoloch_process_FUN_004ddb20 at 004de145
;   core_moloch.cpp_CMoloch_setup_FUN_004dda70 at 004ddaf0
;   core_passngr.cpp_CPassenger_setup_FUN_004ef6d0 at 004ef761
;   core_succubus.cpp_FUN_00540c20 at 00540ee4
;   core_vampboss.cpp_FUN_0054c3e0 at 0054c585
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0058ad78
;   TerminatedCString s_CMorph_getReady_can_t_do_0058ad8a
;   WatcomTypeInfo g_CBoundingBox3D_005993f0
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_main.c_FUN_004c8440
;   core_morph.cpp_CMorphModel_findNearestPoint_FUN_004dffc0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e03c0
        ;   Label: core_morph.cpp_CMorph_getReady_FUN_004e03c0
    PUSH ESI                            ; 004e03c1
    PUSH EDI                            ; 004e03c2
    PUSH EBP                            ; 004e03c3
    SUB ESP,0xb8                        ; 004e03c4
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e03ca
    CMP dword ptr [EAX + 0x54],0x3      ; 004e03d1
    JL 0x004e048f                       ; 004e03d5
        ;   XREF to: 004e048f (CONDITIONAL_JUMP)  ; LAB_004e048f
    CMP dword ptr [EAX + 0x65c],0x3     ; 004e03db
    JL 0x004e048f                       ; 004e03e2
        ;   XREF to: 004e048f (CONDITIONAL_JUMP)  ; LAB_004e048f
    PUSH 0x5993f0                       ; 004e03e8 | g_CBoundingBox3D_005993f0
        ;   Label: LAB_004e03e8
    PUSH 0x2                            ; 004e03ed
    LEA EAX,[ESP + 0x8]                 ; 004e03ef
    PUSH EAX                            ; 004e03f3
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004e03f4
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e03f9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e03fc
    XOR EDI,EDI                         ; 004e0403
    MOV dword ptr [ESP + 0x90],EAX      ; 004e0405
    MOV EAX,ESP                         ; 004e040c
    MOV dword ptr [ESP + 0x9c],EDI      ; 004e040e
    MOV dword ptr [ESP + 0xa4],EAX      ; 004e0415
    MOV EAX,dword ptr [ESP + 0x90]      ; 004e041c
        ;   Label: LAB_004e041c
    MOV EAX,dword ptr [EAX + 0x58]      ; 004e0423
    ADD EAX,0x4                         ; 004e0426
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004e0429
    MOV EDX,EAX                         ; 004e0430
    CMP EAX,EBX                         ; 004e0432
    JZ 0x004e0446                       ; 004e0434
        ;   XREF to: 004e0446 (CONDITIONAL_JUMP)  ; LAB_004e0446
    MOV ECX,dword ptr [EAX]             ; 004e0436
    MOV dword ptr [EBX],ECX             ; 004e0438
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e043a
    MOV dword ptr [EBX + 0x4],ECX       ; 004e043d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004e0440
    MOV dword ptr [EBX + 0x8],ECX       ; 004e0443
    LEA EAX,[EBX + 0xc]                 ; 004e0446
        ;   Label: LAB_004e0446
    CMP EAX,EDX                         ; 004e0449
    JNZ 0x004e0803                      ; 004e044b
        ;   XREF to: 004e0803 (CONDITIONAL_JUMP)  ; LAB_004e0803
    MOV EDI,dword ptr [ESP + 0xa4]      ; 004e0451
        ;   Label: LAB_004e0451
    MOV EBP,dword ptr [ESP + 0x9c]      ; 004e0458
    MOV EBX,0x10                        ; 004e045f
    MOV ESI,0x1                         ; 004e0464
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e0469
        ;   Label: LAB_004e0469
    ADD EAX,EBP                         ; 004e0470
    CMP ESI,dword ptr [EAX + 0x54]      ; 004e0472
    JGE 0x004e04b7                      ; 004e0475
        ;   XREF to: 004e04b7 (CONDITIONAL_JUMP)  ; LAB_004e04b7
    MOV EAX,dword ptr [EAX + 0x58]      ; 004e0477
    ADD EAX,EBX                         ; 004e047a
    ADD EAX,0x4                         ; 004e047c
    PUSH EAX                            ; 004e047f
    PUSH EDI                            ; 004e0480
    INC ESI                             ; 004e0481
    ADD EBX,0x10                        ; 004e0482
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 004e0485
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004e048a
    JMP 0x004e0469                      ; 004e048d
        ;   XREF to: 004e0469 (UNCONDITIONAL_JUMP)  ; LAB_004e0469
    MOV EBX,0x58ad78                    ; 004e048f | = "..\\core\\morph.cpp"
        ;   Label: LAB_004e048f
    MOV ESI,0x31f                       ; 004e0494
    PUSH 0x58ad8a                       ; 004e0499 | = "CMorph::getReady - can't do this unle..."
    MOV dword ptr [0x01cc4800],EBX      ; 004e049e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e04a4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e04aa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004e04af
    JMP 0x004e03e8                      ; 004e04b2
        ;   XREF to: 004e03e8 (UNCONDITIONAL_JUMP)  ; LAB_004e03e8
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004e04b7
        ;   Label: LAB_004e04b7
    MOV ESI,dword ptr [ESP + 0xa4]      ; 004e04be
    MOV ECX,dword ptr [ESP + 0x90]      ; 004e04c5
    ADD EBX,0x608                       ; 004e04cc
    ADD ESI,0x18                        ; 004e04d2
    ADD ECX,0x608                       ; 004e04d5
    MOV dword ptr [ESP + 0x9c],EBX      ; 004e04db
    MOV dword ptr [ESP + 0xa4],ESI      ; 004e04e2
    MOV dword ptr [ESP + 0x90],ECX      ; 004e04e9
    CMP EBX,0xc10                       ; 004e04f0
    JNZ 0x004e041c                      ; 004e04f6
        ;   XREF to: 004e041c (CONDITIONAL_JUMP)  ; LAB_004e041c
    MOV EAX,ESP                         ; 004e04fc
    ADD EAX,0xc                         ; 004e04fe
    MOV dword ptr [ESP + 0xa8],EAX      ; 004e0501
    MOV EAX,ESP                         ; 004e0508
    ADD EAX,0x24                        ; 004e050a
    MOV dword ptr [ESP + 0xac],EAX      ; 004e050d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e0514
    ADD EAX,0x608                       ; 004e051b
    XOR EBP,EBP                         ; 004e0520
    MOV dword ptr [ESP + 0x94],EAX      ; 004e0522
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e0529
    MOV dword ptr [ESP + 0xa0],EBP      ; 004e0530
    MOV dword ptr [ESP + 0x98],EAX      ; 004e0537
    IMUL EDX,dword ptr [ESP + 0xa0],0x18 ; 004e053e
        ;   Label: LAB_004e053e
    MOV EAX,dword ptr [ESP + 0x98]      ; 004e0546
    MOV ESI,0x1                         ; 004e054d
    MOV dword ptr [ESP + 0xb4],EAX      ; 004e0552
    SUB ESI,dword ptr [ESP + 0xa0]      ; 004e0559
    IMUL ESI,ESI,0x18                   ; 004e0560
    MOV EAX,dword ptr [ESP + 0x94]      ; 004e0563
    MOV dword ptr [ESP + 0xb0],EAX      ; 004e056a
    MOV EAX,ESP                         ; 004e0571
    ADD ESI,EAX                         ; 004e0573
    MOV EAX,dword ptr [ESP + 0xac]      ; 004e0575
    FLD float ptr [EAX]                 ; 004e057c
    FSUB float ptr [ESI]                ; 004e057e
    FSTP float ptr [ESP + 0x3c]         ; 004e0580
    FLD float ptr [EAX + 0x4]           ; 004e0584
    FSUB float ptr [ESI + 0x4]          ; 004e0587
    FSTP float ptr [ESP + 0x40]         ; 004e058a
    FLD float ptr [EAX + 0x8]           ; 004e058e
    MOV EAX,ESP                         ; 004e0591
    FSUB float ptr [ESI + 0x8]          ; 004e0593
    ADD EAX,EDX                         ; 004e0596
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004e0598
    FSTP float ptr [ESP + 0x44]         ; 004e059f
    FLD float ptr [EDX]                 ; 004e05a3
    FSUB float ptr [EAX]                ; 004e05a5
    FLD float ptr [ESP + 0x3c]          ; 004e05a7
    FXCH                                ; 004e05ab
    FSTP float ptr [ESP + 0x6c]         ; 004e05ad
    FDIV float ptr [ESP + 0x6c]         ; 004e05b1
    FLD float ptr [EDX + 0x4]           ; 004e05b5
    FSUB float ptr [EAX + 0x4]          ; 004e05b8
    FSTP float ptr [ESP + 0x70]         ; 004e05bb
    FLD float ptr [EDX + 0x8]           ; 004e05bf
    FSUB float ptr [EAX + 0x8]          ; 004e05c2
    MOV EDX,dword ptr [ESP + 0xac]      ; 004e05c5
    FSTP float ptr [ESP + 0x74]         ; 004e05cc
    FSTP float ptr [ESP + 0x60]         ; 004e05d0
    FLD float ptr [EDX]                 ; 004e05d4
    FSUB float ptr [ESI]                ; 004e05d6
    FSTP float ptr [ESP + 0x84]         ; 004e05d8
    FLD float ptr [EDX + 0x4]           ; 004e05df
    FSUB float ptr [ESI + 0x4]          ; 004e05e2
    FSTP float ptr [ESP + 0x88]         ; 004e05e5
    FLD float ptr [EDX + 0x8]           ; 004e05ec
    FSUB float ptr [ESI + 0x8]          ; 004e05ef
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004e05f2
    FSTP float ptr [ESP + 0x8c]         ; 004e05f9
    FLD float ptr [EDX]                 ; 004e0600
    FSUB float ptr [EAX]                ; 004e0602
    FSTP float ptr [ESP + 0x54]         ; 004e0604
    FLD float ptr [EDX + 0x4]           ; 004e0608
    FSUB float ptr [EAX + 0x4]          ; 004e060b
    FLD float ptr [ESP + 0x88]          ; 004e060e
    FXCH                                ; 004e0615
    FSTP float ptr [ESP + 0x58]         ; 004e0617
    FDIV float ptr [ESP + 0x58]         ; 004e061b
    FLD float ptr [EDX + 0x8]           ; 004e061f
    FSUB float ptr [EAX + 0x8]          ; 004e0622
    MOV EDX,dword ptr [ESP + 0xac]      ; 004e0625
    FSTP float ptr [ESP + 0x5c]         ; 004e062c
    FSTP float ptr [ESP + 0x64]         ; 004e0630
    FLD float ptr [EDX]                 ; 004e0634
    FSUB float ptr [ESI]                ; 004e0636
    FSTP float ptr [ESP + 0x30]         ; 004e0638
    FLD float ptr [EDX + 0x4]           ; 004e063c
    FSUB float ptr [ESI + 0x4]          ; 004e063f
    FSTP float ptr [ESP + 0x34]         ; 004e0642
    FLD float ptr [EDX + 0x8]           ; 004e0646
    FSUB float ptr [ESI + 0x8]          ; 004e0649
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004e064c
    FSTP float ptr [ESP + 0x38]         ; 004e0653
    FLD float ptr [EDX]                 ; 004e0657
    FSUB float ptr [EAX]                ; 004e0659
    FSTP float ptr [ESP + 0x48]         ; 004e065b
    FLD float ptr [EDX + 0x4]           ; 004e065f
    FSUB float ptr [EAX + 0x4]          ; 004e0662
    FSTP float ptr [ESP + 0x4c]         ; 004e0665
    FLD float ptr [EDX + 0x8]           ; 004e0669
    FSUB float ptr [EAX + 0x8]          ; 004e066c
    FLD float ptr [ESP + 0x38]          ; 004e066f
    FXCH                                ; 004e0673
    FSTP float ptr [ESP + 0x50]         ; 004e0675
    FDIV float ptr [ESP + 0x50]         ; 004e0679
    MOV EDX,dword ptr [ESP + 0x98]      ; 004e067d
    FSTP float ptr [ESP + 0x68]         ; 004e0684
    MOV EBX,dword ptr [EDX + 0x54]      ; 004e0688
    XOR EDI,EDI                         ; 004e068b
    TEST EBX,EBX                        ; 004e068d
    JLE 0x004e077b                      ; 004e068f
        ;   XREF to: 004e077b (CONDITIONAL_JUMP)  ; LAB_004e077b
    MOV EBP,EAX                         ; 004e0695
    XOR EBX,EBX                         ; 004e0697
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004e0699
        ;   Label: LAB_004e0699
    MOV EDX,dword ptr [EDX + 0x58]      ; 004e06a0
    ADD EDX,EBX                         ; 004e06a3
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e06a5
    ADD EDX,0x4                         ; 004e06a8
    MOV dword ptr [ESP + 0x78],EAX      ; 004e06ab
    LEA EAX,[EDX + 0x4]                 ; 004e06af
    MOV EAX,dword ptr [EAX]             ; 004e06b2
    MOV dword ptr [ESP + 0x7c],EAX      ; 004e06b4
    LEA EAX,[EDX + 0x8]                 ; 004e06b8
    MOV EAX,dword ptr [EAX]             ; 004e06bb
    MOV dword ptr [ESP + 0x80],EAX      ; 004e06bd
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e06c4
    CMP dword ptr [EAX + 0xc28],0x0     ; 004e06cb
    JZ 0x004e0743                       ; 004e06d2
        ;   XREF to: 004e0743 (CONDITIONAL_JUMP)  ; LAB_004e0743
    FLD float ptr [ESP + 0x78]          ; 004e06d4
    FSUB float ptr [EBP]                ; 004e06d8
    FST float ptr [ESP + 0x78]          ; 004e06db
    FMUL float ptr [ESP + 0x60]         ; 004e06df
    FLD float ptr [ESP + 0x7c]          ; 004e06e3
    FSUB float ptr [EBP + 0x4]          ; 004e06e7
    FLD float ptr [ESP + 0x80]          ; 004e06ea
    FXCH                                ; 004e06f1
    FST float ptr [ESP + 0x7c]          ; 004e06f3
    FXCH                                ; 004e06f7
    FSUB float ptr [EBP + 0x8]          ; 004e06f9
    FXCH                                ; 004e06fc
    FMUL float ptr [ESP + 0x64]         ; 004e06fe
    FXCH                                ; 004e0702
    FMUL float ptr [ESP + 0x68]         ; 004e0704
    FXCH ST2                            ; 004e0708
    FST float ptr [ESP + 0x78]          ; 004e070a
    FXCH                                ; 004e070e
    FSTP float ptr [ESP + 0x7c]         ; 004e0710
    FXCH                                ; 004e0714
    FSTP float ptr [ESP + 0x80]         ; 004e0716
    FADD float ptr [ESI]                ; 004e071d
    FLD float ptr [ESP + 0x7c]          ; 004e071f
    FXCH                                ; 004e0723
    FSTP float ptr [ESP + 0x78]         ; 004e0725
    FADD float ptr [ESI + 0x4]          ; 004e0729
    FLD float ptr [ESP + 0x80]          ; 004e072c
    FXCH                                ; 004e0733
    FSTP float ptr [ESP + 0x7c]         ; 004e0735
    FADD float ptr [ESI + 0x8]          ; 004e0739
    FSTP float ptr [ESP + 0x80]         ; 004e073c
    LEA EAX,[ESP + 0x78]                ; 004e0743
        ;   Label: LAB_004e0743
    PUSH EAX                            ; 004e0747
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004e0748
    PUSH EAX                            ; 004e074f
    CALL core_morph.cpp_CMorphModel_findNearestPoint_FUN_004dffc0 ; 004e0750
        ;   XREF to: 004dffc0 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findNearestPoint_FUN_004dffc0(CMorphModel * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004e0755
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004e0758
    MOV EDX,dword ptr [EDX + 0x58]      ; 004e075f
    MOV dword ptr [EDX + EBX*0x1],EAX   ; 004e0762
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004e0765
    INC EDI                             ; 004e076c
    MOV EDX,dword ptr [EAX + 0x54]      ; 004e076d
    ADD EBX,0x10                        ; 004e0770
    CMP EDI,EDX                         ; 004e0773
    JL 0x004e0699                       ; 004e0775
        ;   XREF to: 004e0699 (CONDITIONAL_JUMP)  ; LAB_004e0699
    MOV EBX,dword ptr [ESP + 0xac]      ; 004e077b
        ;   Label: LAB_004e077b
    MOV ESI,dword ptr [ESP + 0x94]      ; 004e0782
    MOV EDI,dword ptr [ESP + 0x98]      ; 004e0789
    MOV EBP,dword ptr [ESP + 0xa0]      ; 004e0790
    MOV ECX,dword ptr [ESP + 0xa8]      ; 004e0797
    SUB EBX,0x18                        ; 004e079e
    SUB ESI,0x608                       ; 004e07a1
    ADD EDI,0x608                       ; 004e07a7
    INC EBP                             ; 004e07ad
    ADD ECX,0x18                        ; 004e07ae
    MOV dword ptr [ESP + 0xac],EBX      ; 004e07b1
    MOV dword ptr [ESP + 0x94],ESI      ; 004e07b8
    MOV dword ptr [ESP + 0x98],EDI      ; 004e07bf
    MOV dword ptr [ESP + 0xa0],EBP      ; 004e07c6
    MOV dword ptr [ESP + 0xa8],ECX      ; 004e07cd
    CMP EBP,0x2                         ; 004e07d4
    JL 0x004e053e                       ; 004e07d7
        ;   XREF to: 004e053e (CONDITIONAL_JUMP)  ; LAB_004e053e
    MOV ECX,dword ptr [ESP + 0xcc]      ; 004e07dd
    PUSH ECX                            ; 004e07e4
    ADD ESP,0x4                         ; 004e07e5
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e07e8
    ADD EAX,0x608                       ; 004e07ef
    PUSH EAX                            ; 004e07f4
    ADD ESP,0x4                         ; 004e07f5
    ADD ESP,0xb8                        ; 004e07f8
    POP EBP                             ; 004e07fe
    POP EDI                             ; 004e07ff
    POP ESI                             ; 004e0800
    POP EBX                             ; 004e0801
    RET                                 ; 004e0802
    MOV ECX,dword ptr [EDX]             ; 004e0803
        ;   Label: LAB_004e0803
    MOV dword ptr [EAX],ECX             ; 004e0805
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e0807
    MOV dword ptr [EAX + 0x4],ECX       ; 004e080a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e080d
    MOV dword ptr [EAX + 0x8],ECX       ; 004e0810
    JMP 0x004e0451                      ; 004e0813
        ;   XREF to: 004e0451 (UNCONDITIONAL_JUMP)  ; LAB_004e0451

