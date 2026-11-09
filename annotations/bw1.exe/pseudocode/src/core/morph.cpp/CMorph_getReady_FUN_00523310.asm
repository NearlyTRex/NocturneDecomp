; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_getReady_FUN_00523310(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
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
;   core_biggs.cpp_FUN_00414ab0 at 00414b08
;   core_mimic.cpp_FUN_0050f290 at 0050f5ea
;   core_moloch.cpp_FUN_00520430 at 005204b0
;   core_moloch.cpp_FUN_005204e0 at 00520ba9
;   core_passngr.cpp_FUN_00532930 at 005329c1
;   core_succubus.cpp_FUN_00591ff0 at 005922b4
;   core_vampboss.cpp_FUN_005a52a0 at 005a5445
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea8e6
;   TerminatedCString s_CMorph_getReady_can_t_do_005ea8f8
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_main.c_FUN_005030e0
;   core_morph.cpp_CMorphModel_findNearestPoint_FUN_00522ef0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523310
        ;   Label: core_morph.cpp_CMorph_getReady_FUN_00523310
    PUSH ESI                            ; 00523311
    PUSH EDI                            ; 00523312
    PUSH EBP                            ; 00523313
    SUB ESP,0x108                       ; 00523314
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052331a
    CMP dword ptr [EAX + 0x54],0x3      ; 00523321
    JL 0x005233df                       ; 00523325
        ;   XREF to: 005233df (CONDITIONAL_JUMP)  ; LAB_005233df
    CMP dword ptr [EAX + 0x65c],0x3     ; 0052332b
    JL 0x005233df                       ; 00523332
        ;   XREF to: 005233df (CONDITIONAL_JUMP)  ; LAB_005233df
    PUSH 0x6042a0                       ; 00523338 | g_CBoundingBox3DTypeInfo
        ;   Label: LAB_00523338
    PUSH 0x2                            ; 0052333d
    LEA EAX,[ESP + 0x8]                 ; 0052333f
    PUSH EAX                            ; 00523343
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00523344
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00523349
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052334c
    XOR EDI,EDI                         ; 00523353
    MOV dword ptr [ESP + 0xd8],EAX      ; 00523355
    MOV EAX,ESP                         ; 0052335c
    MOV dword ptr [ESP + 0xe0],EDI      ; 0052335e
    MOV dword ptr [ESP + 0xf0],EAX      ; 00523365
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0052336c
        ;   Label: LAB_0052336c
    MOV EAX,dword ptr [EAX + 0x58]      ; 00523373
    ADD EAX,0x4                         ; 00523376
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00523379
    MOV EBX,EAX                         ; 00523380
    CMP EAX,EDX                         ; 00523382
    JZ 0x00523396                       ; 00523384
        ;   XREF to: 00523396 (CONDITIONAL_JUMP)  ; LAB_00523396
    MOV ECX,dword ptr [EAX]             ; 00523386
    MOV dword ptr [EDX],ECX             ; 00523388
    MOV ECX,dword ptr [EAX + 0x4]       ; 0052338a
    MOV dword ptr [EDX + 0x4],ECX       ; 0052338d
    MOV ECX,dword ptr [EAX + 0x8]       ; 00523390
    MOV dword ptr [EDX + 0x8],ECX       ; 00523393
    LEA EAX,[EDX + 0xc]                 ; 00523396
        ;   Label: LAB_00523396
    CMP EAX,EBX                         ; 00523399
    JNZ 0x005237c0                      ; 0052339b
        ;   XREF to: 005237c0 (CONDITIONAL_JUMP)  ; LAB_005237c0
    MOV ESI,dword ptr [ESP + 0xf0]      ; 005233a1
        ;   Label: LAB_005233a1
    MOV EDI,dword ptr [ESP + 0xe0]      ; 005233a8
    MOV EBP,0x10                        ; 005233af
    MOV EBX,0x1                         ; 005233b4
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005233b9
        ;   Label: LAB_005233b9
    ADD EAX,EDI                         ; 005233c0
    CMP EBX,dword ptr [EAX + 0x54]      ; 005233c2
    JGE 0x00523407                      ; 005233c5
        ;   XREF to: 00523407 (CONDITIONAL_JUMP)  ; LAB_00523407
    MOV EAX,dword ptr [EAX + 0x58]      ; 005233c7
    ADD EAX,EBP                         ; 005233ca
    ADD EAX,0x4                         ; 005233cc
    PUSH EAX                            ; 005233cf
    PUSH ESI                            ; 005233d0
    INC EBX                             ; 005233d1
    ADD EBP,0x10                        ; 005233d2
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005233d5
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005233da
    JMP 0x005233b9                      ; 005233dd
        ;   XREF to: 005233b9 (UNCONDITIONAL_JUMP)  ; LAB_005233b9
    MOV EBX,0x5ea8e6                    ; 005233df | = "..\\core\\morph.cpp"
        ;   Label: LAB_005233df
    MOV ESI,0x31f                       ; 005233e4
    PUSH 0x5ea8f8                       ; 005233e9 | = "CMorph::getReady - can't do this unle..."
    MOV dword ptr [0x01d1d400],EBX      ; 005233ee | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005233f4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005233fa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005233ff
    JMP 0x00523338                      ; 00523402
        ;   XREF to: 00523338 (UNCONDITIONAL_JUMP)  ; LAB_00523338
    MOV EBX,dword ptr [ESP + 0xe0]      ; 00523407
        ;   Label: LAB_00523407
    MOV ESI,dword ptr [ESP + 0xf0]      ; 0052340e
    MOV ECX,dword ptr [ESP + 0xd8]      ; 00523415
    ADD EBX,0x608                       ; 0052341c
    ADD ESI,0x18                        ; 00523422
    ADD ECX,0x608                       ; 00523425
    MOV dword ptr [ESP + 0xe0],EBX      ; 0052342b
    MOV dword ptr [ESP + 0xf0],ESI      ; 00523432
    MOV dword ptr [ESP + 0xd8],ECX      ; 00523439
    CMP EBX,0xc10                       ; 00523440
    JNZ 0x0052336c                      ; 00523446
        ;   XREF to: 0052336c (CONDITIONAL_JUMP)  ; LAB_0052336c
    MOV EAX,ESP                         ; 0052344c
    ADD EAX,0xc                         ; 0052344e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00523451
    MOV EAX,ESP                         ; 00523458
    ADD EAX,0x24                        ; 0052345a
    MOV dword ptr [ESP + 0xe8],EAX      ; 0052345d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00523464
    ADD EAX,0x608                       ; 0052346b
    XOR EBP,EBP                         ; 00523470
    MOV dword ptr [ESP + 0xdc],EAX      ; 00523472
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00523479
    MOV dword ptr [ESP + 0xec],EBP      ; 00523480
    MOV dword ptr [ESP + 0x104],EAX     ; 00523487
    MOV EAX,0x1                         ; 0052348e
        ;   Label: LAB_0052348e
    SUB EAX,dword ptr [ESP + 0xec]      ; 00523493
    IMUL EAX,EAX,0x18                   ; 0052349a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0052349d
    MOV dword ptr [ESP + 0xf4],EDX      ; 005234a4
    MOV EDX,ESP                         ; 005234ab
    ADD EDX,EAX                         ; 005234ad
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005234af
    MOV ECX,dword ptr [ESP + 0xec]      ; 005234b6
    FLD float ptr [EAX + 0x4]           ; 005234bd
    FLD float ptr [EAX + 0x8]           ; 005234c0
    FLD float ptr [EAX]                 ; 005234c3
    IMUL EAX,ECX,0x18                   ; 005234c5
    LEA EDI,[ESP + 0x48]                ; 005234c8
    LEA ESI,[ESP + 0x60]                ; 005234cc
    MOV EBX,ESP                         ; 005234d0
    FSUB float ptr [EDX]                ; 005234d2
    FXCH ST2                            ; 005234d4
    FSUB float ptr [EDX + 0x4]          ; 005234d6
    FXCH                                ; 005234d9
    FSUB float ptr [EDX + 0x8]          ; 005234db
    FXCH ST2                            ; 005234de
    FSTP float ptr [ESP + 0x60]         ; 005234e0
    FSTP float ptr [ESP + 0x64]         ; 005234e4
    FSTP float ptr [ESP + 0x68]         ; 005234e8
    MOVSD ES:EDI,ESI                    ; 005234ec
    MOVSD ES:EDI,ESI                    ; 005234ed
    MOVSD ES:EDI,ESI                    ; 005234ee
    ADD EBX,EAX                         ; 005234ef
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005234f1
    LEA EDI,[ESP + 0x3c]                ; 005234f8
    LEA ESI,[ESP + 0x30]                ; 005234fc
    FLD float ptr [EAX]                 ; 00523500
    FLD float ptr [EAX + 0x4]           ; 00523502
    FLD float ptr [EAX + 0x8]           ; 00523505
    FXCH ST2                            ; 00523508
    FSUB float ptr [EBX]                ; 0052350a
    FXCH                                ; 0052350c
    FSUB float ptr [EBX + 0x4]          ; 0052350e
    FXCH ST2                            ; 00523511
    FSUB float ptr [EBX + 0x8]          ; 00523513
    FXCH                                ; 00523516
    FSTP float ptr [ESP + 0x30]         ; 00523518
    FXCH                                ; 0052351c
    FSTP float ptr [ESP + 0x34]         ; 0052351e
    FSTP float ptr [ESP + 0x38]         ; 00523522
    MOVSD ES:EDI,ESI                    ; 00523526
    MOVSD ES:EDI,ESI                    ; 00523527
    MOVSD ES:EDI,ESI                    ; 00523528
    FLD float ptr [ESP + 0x48]          ; 00523529
    FDIV float ptr [ESP + 0x3c]         ; 0052352d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00523531
    MOV dword ptr [ESP + 0x90],EAX      ; 00523535
    MOV EAX,dword ptr [ESP + 0x64]      ; 0052353c
    LEA EDI,[ESP + 0x84]                ; 00523540
    MOV dword ptr [ESP + 0x94],EAX      ; 00523547
    MOV EAX,dword ptr [ESP + 0x68]      ; 0052354e
    LEA ESI,[ESP + 0x90]                ; 00523552
    MOV dword ptr [ESP + 0x98],EAX      ; 00523559
    MOV EAX,dword ptr [ESP + 0x30]      ; 00523560
    MOVSD ES:EDI,ESI                    ; 00523564
    MOVSD ES:EDI,ESI                    ; 00523565
    MOVSD ES:EDI,ESI                    ; 00523566
    MOV dword ptr [ESP + 0xcc],EAX      ; 00523567
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052356e
    LEA EDI,[ESP + 0xc0]                ; 00523572
    MOV dword ptr [ESP + 0xd0],EAX      ; 00523579
    MOV EAX,dword ptr [ESP + 0x38]      ; 00523580
    LEA ESI,[ESP + 0xcc]                ; 00523584
    MOV dword ptr [ESP + 0xd4],EAX      ; 0052358b
    MOVSD ES:EDI,ESI                    ; 00523592
    MOVSD ES:EDI,ESI                    ; 00523593
    MOVSD ES:EDI,ESI                    ; 00523594
    FLD float ptr [ESP + 0x88]          ; 00523595
    FDIV float ptr [ESP + 0xc4]         ; 0052359c
    MOV EAX,dword ptr [ESP + 0x60]      ; 005235a3
    MOV dword ptr [ESP + 0x9c],EAX      ; 005235a7
    MOV EAX,dword ptr [ESP + 0x64]      ; 005235ae
    LEA EDI,[ESP + 0x6c]                ; 005235b2
    MOV dword ptr [ESP + 0xa0],EAX      ; 005235b6
    MOV EAX,dword ptr [ESP + 0x68]      ; 005235bd
    LEA ESI,[ESP + 0x9c]                ; 005235c1
    MOV dword ptr [ESP + 0xa4],EAX      ; 005235c8
    MOV EAX,dword ptr [ESP + 0x30]      ; 005235cf
    MOVSD ES:EDI,ESI                    ; 005235d3
    MOVSD ES:EDI,ESI                    ; 005235d4
    MOVSD ES:EDI,ESI                    ; 005235d5
    MOV dword ptr [ESP + 0x78],EAX      ; 005235d6
    MOV EAX,dword ptr [ESP + 0x34]      ; 005235da
    LEA EDI,[ESP + 0xa8]                ; 005235de
    MOV dword ptr [ESP + 0x7c],EAX      ; 005235e5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005235e9
    LEA ESI,[ESP + 0x78]                ; 005235ed
    MOV dword ptr [ESP + 0x80],EAX      ; 005235f1
    MOVSD ES:EDI,ESI                    ; 005235f8
    MOVSD ES:EDI,ESI                    ; 005235f9
    MOVSD ES:EDI,ESI                    ; 005235fa
    FLD float ptr [ESP + 0x74]          ; 005235fb
    FDIV float ptr [ESP + 0xb0]         ; 005235ff
    MOV EBP,dword ptr [ESP + 0x104]     ; 00523606
    FXCH ST2                            ; 0052360d
    FSTP float ptr [ESP + 0x54]         ; 0052360f
    XOR ESI,ESI                         ; 00523613
    MOV EDI,dword ptr [EBP + 0x54]      ; 00523615
    MOV dword ptr [ESP + 0x100],ESI     ; 00523618
    FSTP float ptr [ESP + 0x58]         ; 0052361f
    FSTP float ptr [ESP + 0x5c]         ; 00523623
    TEST EDI,EDI                        ; 00523627
    JLE 0x0052373e                      ; 00523629
        ;   XREF to: 0052373e (CONDITIONAL_JUMP)  ; LAB_0052373e
    MOV dword ptr [ESP + 0xfc],EBX      ; 0052362f
    MOV dword ptr [ESP + 0xf8],EDX      ; 00523636
    XOR EBX,EBX                         ; 0052363d
    MOV ESI,dword ptr [EBP + 0x58]      ; 0052363f
        ;   Label: LAB_0052363f
    LEA EDI,[ESP + 0xb4]                ; 00523642
    LEA ESI,[ESI + EBX*0x1 + 0x4]       ; 00523649
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052364d
    MOVSD ES:EDI,ESI                    ; 00523654
    MOVSD ES:EDI,ESI                    ; 00523655
    MOVSD ES:EDI,ESI                    ; 00523656
    CMP dword ptr [EAX + 0xc28],0x0     ; 00523657
    JZ 0x00523702                       ; 0052365e
        ;   XREF to: 00523702 (CONDITIONAL_JUMP)  ; LAB_00523702
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00523664
    FLD float ptr [ESP + 0xb4]          ; 0052366b
    FSUB float ptr [EAX]                ; 00523672
    FST float ptr [ESP + 0xb4]          ; 00523674
    FMUL float ptr [ESP + 0x54]         ; 0052367b
    FLD float ptr [ESP + 0xb8]          ; 0052367f
    FSUB float ptr [EAX + 0x4]          ; 00523686
    FLD float ptr [ESP + 0xbc]          ; 00523689
    FXCH                                ; 00523690
    FST float ptr [ESP + 0xb8]          ; 00523692
    FXCH                                ; 00523699
    FSUB float ptr [EAX + 0x8]          ; 0052369b
    FXCH                                ; 0052369e
    FMUL float ptr [ESP + 0x58]         ; 005236a0
    FXCH                                ; 005236a4
    FMUL float ptr [ESP + 0x5c]         ; 005236a6
    FXCH ST2                            ; 005236aa
    FSTP float ptr [ESP + 0xb4]         ; 005236ac
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005236b3
    FLD float ptr [ESP + 0xb4]          ; 005236ba
    FXCH                                ; 005236c1
    FSTP float ptr [ESP + 0xb8]         ; 005236c3
    FXCH                                ; 005236ca
    FSTP float ptr [ESP + 0xbc]         ; 005236cc
    FADD float ptr [EAX]                ; 005236d3
    FLD float ptr [ESP + 0xb8]          ; 005236d5
    FXCH                                ; 005236dc
    FSTP float ptr [ESP + 0xb4]         ; 005236de
    FADD float ptr [EAX + 0x4]          ; 005236e5
    FLD float ptr [ESP + 0xbc]          ; 005236e8
    FXCH                                ; 005236ef
    FSTP float ptr [ESP + 0xb8]         ; 005236f1
    FADD float ptr [EAX + 0x8]          ; 005236f8
    FSTP float ptr [ESP + 0xbc]         ; 005236fb
    LEA EAX,[ESP + 0xb4]                ; 00523702
        ;   Label: LAB_00523702
    PUSH EAX                            ; 00523709
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0052370a
    PUSH EAX                            ; 00523711
    ADD EBX,0x10                        ; 00523712
    CALL core_morph.cpp_CMorphModel_findNearestPoint_FUN_00522ef0 ; 00523715
        ;   XREF to: 00522ef0 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findNearestPoint_FUN_00522ef0(CMorphModel * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0052371a
    MOV ESI,dword ptr [EBP + 0x58]      ; 0052371d
    MOV EDX,dword ptr [ESP + 0x100]     ; 00523720
    MOV dword ptr [ESI + EBX*0x1 + -0x10],EAX ; 00523727
    INC EDX                             ; 0052372b
    MOV ECX,dword ptr [EBP + 0x54]      ; 0052372c
    MOV dword ptr [ESP + 0x100],EDX     ; 0052372f
    CMP EDX,ECX                         ; 00523736
    JL 0x0052363f                       ; 00523738
        ;   XREF to: 0052363f (CONDITIONAL_JUMP)  ; LAB_0052363f
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0052373e
        ;   Label: LAB_0052373e
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00523745
    MOV EBP,dword ptr [ESP + 0x104]     ; 0052374c
    MOV EAX,dword ptr [ESP + 0xec]      ; 00523753
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0052375a
    SUB ESI,0x18                        ; 00523761
    SUB EDI,0x608                       ; 00523764
    ADD EBP,0x608                       ; 0052376a
    INC EAX                             ; 00523770
    ADD EBX,0x18                        ; 00523771
    MOV dword ptr [ESP + 0xe8],ESI      ; 00523774
    MOV dword ptr [ESP + 0xdc],EDI      ; 0052377b
    MOV dword ptr [ESP + 0x104],EBP     ; 00523782
    MOV dword ptr [ESP + 0xec],EAX      ; 00523789
    MOV dword ptr [ESP + 0xe4],EBX      ; 00523790
    CMP EAX,0x2                         ; 00523797
    JL 0x0052348e                       ; 0052379a
        ;   XREF to: 0052348e (CONDITIONAL_JUMP)  ; LAB_0052348e
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005237a0
    PUSH EBX                            ; 005237a7
    ADD ESP,0x4                         ; 005237a8
    LEA EAX,[EBX + 0x608]               ; 005237ab
    PUSH EAX                            ; 005237b1
    ADD ESP,0x4                         ; 005237b2
    ADD ESP,0x108                       ; 005237b5
    POP EBP                             ; 005237bb
    POP EDI                             ; 005237bc
    POP ESI                             ; 005237bd
    POP EBX                             ; 005237be
    RET                                 ; 005237bf
    MOV EDX,dword ptr [EBX]             ; 005237c0
        ;   Label: LAB_005237c0
    MOV dword ptr [EAX],EDX             ; 005237c2
    MOV EDX,dword ptr [EBX + 0x4]       ; 005237c4
    MOV dword ptr [EAX + 0x4],EDX       ; 005237c7
    MOV EDX,dword ptr [EBX + 0x8]       ; 005237ca
    MOV dword ptr [EAX + 0x8],EDX       ; 005237cd
    JMP 0x005233a1                      ; 005237d0
        ;   XREF to: 005233a1 (UNCONDITIONAL_JUMP)  ; LAB_005233a1

