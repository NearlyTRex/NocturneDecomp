; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_004514b0 (int row,int x_start,int x_end,SCorona *corona_buffer)
;
; Parameters:
; int              Stack[0x4]:4   row
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; SCorona *        Stack[0x10]:4   corona_buffer
; Local Variables:
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
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   CVector3i[15360] g_PrecomputedWorldPositions
;   int[76800] g_PrecomputedDepthBuffer
;   int g_CameraDownscaleIterations
;   int[240][320] g_CoronaDepthBuffer
;   CDemonGlobe* g_CurrentGlobe
;   int g_CoronaVisibilityEnabled
;   int g_CoronaTargetX
;   int g_CoronaTargetY
;   int g_CoronaTargetDepth
;   uint*[1200] g_ZBufferScanlineArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004514b0
        ;   Label: core_dcamera.cpp_processCoronaScanline_FUN_004514b0
    PUSH ESI                            ; 004514b1
    PUSH EDI                            ; 004514b2
    PUSH EBP                            ; 004514b3
    SUB ESP,0x2c                        ; 004514b4
    MOV EAX,dword ptr [ESP + 0x40]      ; 004514b7
    SHL EAX,0x8                         ; 004514bb
    MOV EDX,EAX                         ; 004514be
    SHL EAX,0x4                         ; 004514c0
    MOV ECX,0x902f74                    ; 004514c3 | g_PrecomputedWorldPositions
    SUB EAX,EDX                         ; 004514c8
    MOV EDX,dword ptr [ESP + 0x44]      ; 004514ca
    ADD ECX,EAX                         ; 004514ce
    LEA EAX,[EDX*0x4 + 0x0]             ; 004514d0
    SUB EAX,EDX                         ; 004514d7
    SHL EAX,0x2                         ; 004514d9
    MOV EDX,dword ptr [ESP + 0x40]      ; 004514dc
    ADD ECX,EAX                         ; 004514e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004514e2
    ADD EAX,EDX                         ; 004514e9
    MOV EDX,0x1577728                   ; 004514eb | g_CoronaDepthBuffer
    SHL EAX,0x8                         ; 004514f0
    ADD EDX,EAX                         ; 004514f3
    MOV EAX,dword ptr [ESP + 0x44]      ; 004514f5
    MOV dword ptr [ESP + 0x18],ECX      ; 004514f9
    SHL EAX,0x2                         ; 004514fd
    MOV CL,byte ptr [0x013bc260]        ; 00451500 | g_CameraDownscaleIterations
    ADD EDX,EAX                         ; 00451506
    MOV EAX,dword ptr [ESP + 0x40]      ; 00451508
    MOV dword ptr [ESP + 0x10],EDX      ; 0045150c
    MOV EDX,dword ptr [ESP + 0x44]      ; 00451510
    SHL EAX,CL                          ; 00451514
    SHL EDX,CL                          ; 00451516
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c] ; 00451518 | g_ZBufferScanlineArray
    SHL EDX,0x2                         ; 0045151f
    ADD EAX,EDX                         ; 00451522
    MOV EDX,dword ptr [ESP + 0x40]      ; 00451524
    MOV dword ptr [ESP + 0x14],EAX      ; 00451528
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045152c
    ADD EAX,EDX                         ; 00451533
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00451535
    SHL EAX,0x6                         ; 00451539
    ADD EDX,0x784                       ; 0045153c
    ADD EAX,EDX                         ; 00451542
    MOV EDX,dword ptr [ESP + 0x44]      ; 00451544
    ADD EDX,EAX                         ; 00451548
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045154a
    MOV dword ptr [ESP + 0xc],EDX       ; 0045154e
    CMP EAX,dword ptr [ESP + 0x48]      ; 00451552
    JGE 0x00451684                      ; 00451556
        ;   XREF to: 00451684 (CONDITIONAL_JUMP)  ; LAB_00451684
    XOR AH,AH                           ; 0045155c
        ;   Label: LAB_0045155c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045155e
    MOV byte ptr [ESP + 0x28],AH        ; 00451562
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451566
    MOV ECX,dword ptr [EDX]             ; 0045156a
    CMP ECX,dword ptr [EAX]             ; 0045156c
    JBE 0x0045162e                      ; 0045156e
        ;   XREF to: 0045162e (CONDITIONAL_JUMP)  ; LAB_0045162e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00451574
    MOV EDX,dword ptr [0x015c4170]      ; 00451578 | g_CurrentGlobe
    MOV EAX,dword ptr [EAX]             ; 0045157e
    SUB EAX,dword ptr [EDX]             ; 00451580
    CDQ                                 ; 00451582
    XOR EAX,EDX                         ; 00451583
    SUB EAX,EDX                         ; 00451585
    MOV EDX,dword ptr [0x015c4170]      ; 00451587 | g_CurrentGlobe
    MOV ESI,dword ptr [EDX + 0xc]       ; 0045158d
    MOV ECX,EAX                         ; 00451590
    CMP EAX,ESI                         ; 00451592
    JGE 0x0045162e                      ; 00451594
        ;   XREF to: 0045162e (CONDITIONAL_JUMP)  ; LAB_0045162e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045159a
    MOV EDI,dword ptr [EDX + 0x4]       ; 0045159e
    MOV EAX,dword ptr [EAX + 0x4]       ; 004515a1
    SUB EAX,EDI                         ; 004515a4
    CDQ                                 ; 004515a6
    XOR EAX,EDX                         ; 004515a7
    SUB EAX,EDX                         ; 004515a9
    MOV EDX,dword ptr [0x015c4170]      ; 004515ab | g_CurrentGlobe
    MOV EBP,dword ptr [EDX + 0xc]       ; 004515b1
    MOV EBX,EAX                         ; 004515b4
    CMP EAX,EBP                         ; 004515b6
    JGE 0x0045162e                      ; 004515b8
        ;   XREF to: 0045162e (CONDITIONAL_JUMP)  ; LAB_0045162e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004515ba
    MOV ESI,dword ptr [EDX + 0x8]       ; 004515be
    MOV EAX,dword ptr [EAX + 0x8]       ; 004515c1
    SUB EAX,ESI                         ; 004515c4
    CDQ                                 ; 004515c6
    XOR EAX,EDX                         ; 004515c7
    SUB EAX,EDX                         ; 004515c9
    MOV EDX,dword ptr [0x015c4170]      ; 004515cb | g_CurrentGlobe
    CMP EAX,dword ptr [EDX + 0xc]       ; 004515d1
    JGE 0x0045162e                      ; 004515d4
        ;   XREF to: 0045162e (CONDITIONAL_JUMP)  ; LAB_0045162e
    IMUL EBX,EBX                        ; 004515d6
    IMUL ECX,ECX                        ; 004515d9
    IMUL EAX,EAX                        ; 004515dc
    ADD ECX,EBX                         ; 004515df
    ADD ECX,EAX                         ; 004515e1
    MOV EBP,dword ptr [EDX + 0x10]      ; 004515e3
    MOV dword ptr [ESP + 0x8],ECX       ; 004515e6
    CMP ECX,EBP                         ; 004515ea
    JGE 0x0045162e                      ; 004515ec
        ;   XREF to: 0045162e (CONDITIONAL_JUMP)  ; LAB_0045162e
    MOV ESI,dword ptr [ESP + 0x40]      ; 004515ee
    MOV ECX,dword ptr [ESP + 0x14]      ; 004515f2
    MOV EBX,dword ptr [ESP + 0x44]      ; 004515f6
    MOV EAX,[0x015c4174]                ; 004515fa | g_CoronaVisibilityEnabled
    MOV ECX,dword ptr [ECX]             ; 004515ff
    TEST EAX,EAX                        ; 00451601
    JNZ 0x00451711                      ; 00451603
        ;   XREF to: 00451711 (CONDITIONAL_JUMP)  ; LAB_00451711
    MOV EAX,[0x015c4170]                ; 00451609 | g_CurrentGlobe
        ;   Label: LAB_00451609
    MOV ECX,dword ptr [ESP + 0x8]       ; 0045160e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00451612
    SUB EDX,ECX                         ; 00451615
    SAR EDX,0x10                        ; 00451617
    IMUL EDX,EDX,0x3f                   ; 0045161a
    MOV ECX,dword ptr [EAX + 0x10]      ; 0045161d
    SAR ECX,0x10                        ; 00451620
    MOV EAX,EDX                         ; 00451623
    SAR EDX,0x1f                        ; 00451625
    IDIV ECX                            ; 00451628
    MOV byte ptr [ESP + 0x28],AL        ; 0045162a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045162e
        ;   Label: LAB_0045162e
    MOV EDI,dword ptr [ESP + 0x10]      ; 00451632
    MOV EBP,dword ptr [ESP + 0x18]      ; 00451636
    MOV AL,byte ptr [ESP + 0x28]        ; 0045163a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045163e
    MOV CL,byte ptr [0x013bc260]        ; 00451642 | g_CameraDownscaleIterations
    LEA EBX,[EDX + 0x1]                 ; 00451648
    ADD EDI,0x4                         ; 0045164b
    ADD EBP,0xc                         ; 0045164e
    MOV byte ptr [EDX],AL               ; 00451651
    MOV EAX,0x1                         ; 00451653
    MOV EDX,dword ptr [ESP + 0x48]      ; 00451658
    SHL EAX,CL                          ; 0045165c
    MOV dword ptr [ESP + 0xc],EBX       ; 0045165e
    SHL EAX,0x2                         ; 00451662
    MOV dword ptr [ESP + 0x10],EDI      ; 00451665
    ADD ESI,EAX                         ; 00451669
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045166b
    MOV dword ptr [ESP + 0x18],EBP      ; 0045166f
    INC EAX                             ; 00451673
    MOV dword ptr [ESP + 0x14],ESI      ; 00451674
    MOV dword ptr [ESP + 0x44],EAX      ; 00451678
    CMP EAX,EDX                         ; 0045167c
    JL 0x0045155c                       ; 0045167e
        ;   XREF to: 0045155c (CONDITIONAL_JUMP)  ; LAB_0045155c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00451684
        ;   Label: LAB_00451684
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00451688
    SHL EDX,0x2                         ; 0045168c
    MOV EBX,dword ptr [ESP + 0x40]      ; 0045168f
    ADD EDX,ECX                         ; 00451693
    LEA ECX,[EBX*0x4 + 0x0]             ; 00451695
    ADD ECX,EBX                         ; 0045169c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0045169e
    SHL ECX,0x6                         ; 004516a2
    ADD EBX,0x784                       ; 004516a5
    MOV EAX,dword ptr [EDX + 0x4]       ; 004516ab
    ADD ECX,EBX                         ; 004516ae
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 004516b0
    ADD ECX,EAX                         ; 004516b6
    CMP EAX,EDX                         ; 004516b8
    JGE 0x004516c5                      ; 004516ba
        ;   XREF to: 004516c5 (CONDITIONAL_JUMP)  ; LAB_004516c5
    CMP byte ptr [ECX],0x0              ; 004516bc
        ;   Label: LAB_004516bc
    JZ 0x004517d4                       ; 004516bf
        ;   XREF to: 004517d4 (CONDITIONAL_JUMP)  ; LAB_004517d4
    MOV EBX,dword ptr [ESP + 0x40]      ; 004516c5
        ;   Label: LAB_004516c5
    LEA ECX,[EBX*0x4 + 0x0]             ; 004516c9
    ADD ECX,EBX                         ; 004516d0
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004516d2
    SHL ECX,0x6                         ; 004516d6
    ADD EBX,0x784                       ; 004516d9
    ADD ECX,EBX                         ; 004516df
    ADD ECX,EDX                         ; 004516e1
    DEC ECX                             ; 004516e3
    CMP EDX,EAX                         ; 004516e4
    JLE 0x004516f3                      ; 004516e6
        ;   XREF to: 004516f3 (CONDITIONAL_JUMP)  ; LAB_004516f3
    CMP byte ptr [ECX],0x0              ; 004516e8
        ;   Label: LAB_004516e8
    JNZ 0x004516f3                      ; 004516eb
        ;   XREF to: 004516f3 (CONDITIONAL_JUMP)  ; LAB_004516f3
    DEC EDX                             ; 004516ed
    DEC ECX                             ; 004516ee
    CMP EDX,EAX                         ; 004516ef
    JG 0x004516e8                       ; 004516f1
        ;   XREF to: 004516e8 (CONDITIONAL_JUMP)  ; LAB_004516e8
    MOV ECX,dword ptr [ESP + 0x40]      ; 004516f3
        ;   Label: LAB_004516f3
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004516f7
    SHL ECX,0x2                         ; 004516fb
    ADD ECX,EBX                         ; 004516fe
    MOV dword ptr [ECX + 0x4],EAX       ; 00451700
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00451703
    ADD ESP,0x2c                        ; 00451709
    POP EBP                             ; 0045170c
    POP EDI                             ; 0045170d
    POP ESI                             ; 0045170e
    POP EBX                             ; 0045170f
    RET                                 ; 00451710
    MOV EBP,dword ptr [0x015c4178]      ; 00451711 | g_CoronaTargetX
        ;   Label: LAB_00451711
    MOV EAX,[0x015c417c]                ; 00451717 | g_CoronaTargetY
    MOV EDI,dword ptr [0x015c4180]      ; 0045171c | g_CoronaTargetDepth
    XOR EDX,EDX                         ; 00451722
    MOV dword ptr [ESP],EAX             ; 00451724
    MOV dword ptr [ESP + 0x4],EDX       ; 00451727
    TEST ECX,ECX                        ; 0045172b
    JZ 0x004517a1                       ; 0045172d
        ;   XREF to: 004517a1 (CONDITIONAL_JUMP)  ; LAB_004517a1
    MOV EAX,0x7fffffff                  ; 0045172f
    MOV EDX,EAX                         ; 00451734
    SAR EDX,0x1f                        ; 00451736
    IDIV ECX                            ; 00451739
    MOV ECX,EAX                         ; 0045173b
    MOV EAX,EBP                         ; 0045173d
        ;   Label: LAB_0045173d
    SUB EAX,EBX                         ; 0045173f
    SHL EAX,0x4                         ; 00451741
    MOV dword ptr [ESP + 0x20],EAX      ; 00451744
    MOV EAX,dword ptr [ESP]             ; 00451748
    SUB EAX,ESI                         ; 0045174b
    MOV EDX,EDI                         ; 0045174d
    SHL EAX,0x4                         ; 0045174f
    SUB EDX,ECX                         ; 00451752
    MOV dword ptr [ESP + 0x24],EAX      ; 00451754
    MOV EAX,EDX                         ; 00451758
    SAR EDX,0x1f                        ; 0045175a
    SHL EDX,0x4                         ; 0045175d
    SBB EAX,EDX                         ; 00451760
    SAR EAX,0x4                         ; 00451762
    SHL EBX,0x8                         ; 00451765
    MOV dword ptr [ESP + 0x1c],EAX      ; 00451768
    MOV EDX,ESI                         ; 0045176c
    MOV EAX,0x10                        ; 0045176e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00451773
    SHL EDX,0x8                         ; 00451777
    MOV ESI,EDX                         ; 0045177a
        ;   Label: LAB_0045177a
    SAR ESI,0x8                         ; 0045177c
    IMUL EDI,ESI,0x500                  ; 0045177f
    MOV ESI,EBX                         ; 00451785
    SAR ESI,0x8                         ; 00451787
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xbce6f8] ; 0045178a | g_PrecomputedDepthBuffer
    LEA EDI,[ECX + -0x80]               ; 00451791
    CMP ESI,EDI                         ; 00451794
    JGE 0x004517a8                      ; 00451796
        ;   XREF to: 004517a8 (CONDITIONAL_JUMP)  ; LAB_004517a8
    TEST EAX,EAX                        ; 00451798
    JNZ 0x004517c4                      ; 0045179a
        ;   XREF to: 004517c4 (CONDITIONAL_JUMP)  ; LAB_004517c4
    JMP 0x00451609                      ; 0045179c
        ;   XREF to: 00451609 (UNCONDITIONAL_JUMP)  ; LAB_00451609
    MOV ECX,0x7fffffff                  ; 004517a1
        ;   Label: LAB_004517a1
    JMP 0x0045173d                      ; 004517a6
        ;   XREF to: 0045173d (UNCONDITIONAL_JUMP)  ; LAB_0045173d
    MOV ESI,dword ptr [ESP + 0x20]      ; 004517a8
        ;   Label: LAB_004517a8
    MOV EDI,dword ptr [ESP + 0x24]      ; 004517ac
    DEC EAX                             ; 004517b0
    ADD ECX,EBP                         ; 004517b1
    ADD EBX,ESI                         ; 004517b3
    ADD EDX,EDI                         ; 004517b5
    TEST EAX,EAX                        ; 004517b7
    JG 0x0045177a                       ; 004517b9
        ;   XREF to: 0045177a (CONDITIONAL_JUMP)  ; LAB_0045177a
    TEST EAX,EAX                        ; 004517bb
    JNZ 0x004517c4                      ; 004517bd
        ;   XREF to: 004517c4 (CONDITIONAL_JUMP)  ; LAB_004517c4
    JMP 0x00451609                      ; 004517bf
        ;   XREF to: 00451609 (UNCONDITIONAL_JUMP)  ; LAB_00451609
    CMP dword ptr [ESP + 0x4],0x0       ; 004517c4
        ;   Label: LAB_004517c4
    JNZ 0x00451609                      ; 004517c9
        ;   XREF to: 00451609 (CONDITIONAL_JUMP)  ; LAB_00451609
    JMP 0x0045162e                      ; 004517cf
        ;   XREF to: 0045162e (UNCONDITIONAL_JUMP)  ; LAB_0045162e
    INC EAX                             ; 004517d4
        ;   Label: LAB_004517d4
    INC ECX                             ; 004517d5
    CMP EAX,EDX                         ; 004517d6
    JL 0x004516bc                       ; 004517d8
        ;   XREF to: 004516bc (CONDITIONAL_JUMP)  ; LAB_004516bc
    JMP 0x004516c5                      ; 004517de
        ;   XREF to: 004516c5 (UNCONDITIONAL_JUMP)  ; LAB_004516c5

